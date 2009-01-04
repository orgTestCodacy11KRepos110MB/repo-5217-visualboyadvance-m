#include "EmuManager.h"

#include "../shared/Sound.h"

#include "../dmg/gb.h"


EmuManager::EmuManager()
        : romBuffer( 0 )
        , romSize( 0 )
        , systemType( SYSTEM_UNKNOWN )
        , romLoaded( false )
        , emulating( false )
{
}


EmuManager::~EmuManager()
{
    if ( romBuffer != 0 ) {
        free( romBuffer );
        romBuffer = 0;
    }
}


// for memory optimization, do NOT call unloadRom() before calling loadRom()
bool EmuManager::loadRom( const QString &filePath )
{
    //### Basic checks
    if ( 0 == filePath.compare( romPath ) ) {
        // We assume ROM content did not change since last call.
        // Same file: do not reload ROM data into [romBuffer].
        return true;
    }

    if ( filePath.isEmpty() ) {
        return false;
    }


    //### Validate ROM
    QFile file( filePath );

    if ( !file.exists() ) return false;

    qint64 size = file.size();

    if (( size == 0 ) || ( size > 0x2000000 /* 32MB */ ) ) return false;

    // TODO: add further validation


    //### Prepare [romBuffer] size
    if ( romBuffer == 0 ) {
        // [romBuffer] does not yet exist.
        // Allocate new memory for romBuffer.
        romBuffer = ( unsigned char * )malloc( size );
        if ( romBuffer == 0 ) {
            // error occured
            return false;
        }
    } else {
        // romBuffer already exists
        if ( size == romSize ) {
            // new and old ROMs have the same size, perfect!
        } else {
            // resize the buffer
            unsigned char *temp;
            temp = ( unsigned char * )realloc( romBuffer, size );
            if ( temp == 0 ) {
                // error occured, romBuffer is left unchanged
                return false;
            } else {
                // everything is fine
                romBuffer = temp;
                romLoaded = true;
            }
        }
    }


    //### Read ROM into memory
    if ( !file.open( QIODevice::ReadOnly ) ) {
        return false;
    }

    qint64 bytesRead = file.read(( char * )romBuffer, size );
    file.close();

    if ( bytesRead < size ) {
        // Not all bytes could be read from the file or error occured.
        return false;
    }


    //### Determine system type
    QFileInfo fileInfo( filePath );
    QString suffix = fileInfo.suffix();

    systemType = SYSTEM_UNKNOWN;

    if ( 0 == suffix.compare( "gb", Qt::CaseInsensitive ) ) {
        systemType = SYSTEM_GB;
    }

    if ( 0 == suffix.compare( "gbc", Qt::CaseInsensitive ) ) {
        systemType = SYSTEM_GB;
    }

    if ( 0 == suffix.compare( "gba", Qt::CaseInsensitive ) ) {
        systemType = SYSTEM_GBA;
    }

    // TODO: add more extensions & compressed formats


    //### Tell the core where to find the ROM data
    switch ( systemType ) {
    case SYSTEM_UNKNOWN:
        return false;
        break;
    case SYSTEM_GB:
        // Show the GB core where to find the ROM data in memory.
        // Make sure no one else accesses romBuffer from now on!
        gbLoadRomFromMemory( romBuffer, ( int )size );
        break;
    case SYSTEM_GBA:
        break;
    }


    //### Finished successfully
    romPath = filePath;
    romSize = size;
    romLoaded = true;
    return true;
}


void EmuManager::unloadRom()
{
    if ( emulating ) {
        stopEmulation();
    }

    romPath.clear();
    romSize = 0;
    romLoaded = false;

    if ( romBuffer != 0 ) {
        free( romBuffer );
        romBuffer = 0;
    }
}


bool EmuManager::isRomLoaded()
{
    return romLoaded;
}


QString EmuManager::getRomPath()
{
    return romPath;
}


EmuManager::SYSTEM_TYPE EmuManager::getSystemType()
{
    return systemType;
}


bool EmuManager::startEmulation()
{
    if ( emulating ) {
        return true;
    }

    if ( !romLoaded ) {
        return false;
    }

    switch ( systemType ) {
    case SYSTEM_UNKNOWN:
        return false;
        break;
    case SYSTEM_GB:
        gbReset();
        soundInit();
        emuSys = GBSystem;
        // TODO: Read battery file
        // TODO: Set up display size etc.
        break;
    case SYSTEM_GBA:
        // TODO: Add
        break;
    }

    emulating = true;
    return true;
}


void EmuManager::stopEmulation()
{
    emulating = false;

    // TODO: Write battery file

    soundPause();

    emuSys.emuCleanUp();
}


bool EmuManager::isEmulating()
{
    return emulating;
}


void EmuManager::emulate()
{
    if ( !emulating ) {
        return;
    }

    for ( int i = 0 ; i < 2 ; i++ ) {
        emuSys.emuMain( emuSys.emuCount );
    }
}