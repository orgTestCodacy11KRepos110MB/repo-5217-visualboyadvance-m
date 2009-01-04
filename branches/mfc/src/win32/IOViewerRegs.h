// -*- C++ -*-
// VisualBoyAdvance - Nintendo Gameboy/GameboyAdvance (TM) emulator.
// Copyright (C) 1999-2003 Forgotten
// Copyright (C) 2005 Forgotten and the VBA development team

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or(at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

struct IOData {
  u16 *address;
  u16 offset;
  char *name;
  u16 write;
  char *bits[16];
};

const IOData ioViewRegisters[] = {
  {
    &DISPCNT, 0, "0x4000000-DISPCNT", 0xFFF7,
    {
      "",
      "",
      "BG Mode (3 bits)",
      "CGB Mode",
      "Display Frame",
      "H-Blank Interval OBJ processing",
      "OBJ Character mapping",
      "Forced blank",
      "BG0",
      "BG1",
      "BG2",
      "BG3",
      "OBJ",
      "WIN0",
      "WIN1",
      "OBJWIN"
    }
  },
  {
    &DISPSTAT, 4, "0x4000004-DISPSTAT", 0xFF38,
    {
      "V-Blank Status",
      "H-Blank Status",
      "VCOUNT Evaluation",
      "V-Blank Interrupt Enable",
      "H-Blank Interrupt Enable",
      "VCOUNT Match Interrupt Enable",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "VCOUNT setting (8 bits)"
    }
  },
  {
    &VCOUNT, 6, "0x4000006-VCOUNT", 0x0000,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "VCOUNT (8 bits)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG0CNT, 8, "0x4000008-BG0CNT", 0xDFCF,
    {
      "",
      "Priority (2 bits)",
      "",
      "Char base (2 bits)",
      "",
      "",
      "Mosaic",
      "16/256 colors",
      "",
      "",
      "",
      "",
      "Screen Base Block (5 bits)",
      "",
      "",
      "Size (2 bits)"
    }
  },
  {
    &BG1CNT, 0xA, "0x400000A-BG1CNT", 0xDFCF,
    {
      "",
      "Priority (2 bits)",
      "",
      "Char base (2 bits)",
      "",
      "",
      "Mosaic",
      "16/256 colors",
      "",
      "",
      "",
      "",
      "Screen Base Block (5 bits)",
      "",
      "",
      "Size (2 bits)"
    }
  },
  {
    &BG2CNT, 0xC, "0x400000C-BG2CNT", 0xFFCF,
    {
      "",
      "Priority (2 bits)",
      "",
      "Char base (2 bits)",
      "",
      "",
      "Mosaic",
      "16/256 colors",
      "",
      "",
      "",
      "",
      "Screen Base Block (5 bits)",
      "Area Overflow",
      "",
      "Size (2 bits)"
    }
  },
  {
    &BG3CNT, 0xE, "0x400000E-BG3CNT", 0xFFCF,
    {
      "",
      "Priority (2 bits)",
      "",
      "Char base (2 bits)",
      "",
      "",
      "Mosaic",
      "16/256 colors",
      "",
      "",
      "",
      "",
      "Screen Base Block (5 bits)",
      "Area Overflow",
      "",
      "Size (2 bits)"
    }
  },
  {
    &BG0HOFS, 0x10, "0x4000010-BG0HOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Horizontal Offset (9 bits, W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG0VOFS, 0x12, "0x4000012-BG0VOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Vertical Offset (9 bits, W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG1HOFS, 0x14, "0x4000014-BG1HOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Horizontal Offset (9 bits, W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG1VOFS, 0x16, "0x4000016-BG1VOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Vertical Offset (9 bits, W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG2HOFS, 0x18, "0x4000018-BG2HOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Horizontal Offset (9 bits, W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG2VOFS, 0x1A, "0x400001A-BG2VOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Vertical Offset (9 bits, W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG3HOFS, 0x1C, "0x400001C-BG3HOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Horizontal Offset (9 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG3VOFS, 0x1E, "0x400001E-BG3VOFS", 0x01FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Vertical Offset (9 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      ""
    }
  },
  {
    &BG2PA, 0x20, "0x4000020-BG2PA", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dx (16 bits,W)"
    }
  },
  {
    &BG2PB, 0x22, "0x4000022-BG2PB", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dmx (16 bits,W)"
    }
  },
  {
    &BG2PC, 0x24, "0x4000024-BG2PC", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dy (16 bits,W)"
    }
  },
  {
    &BG2PD, 0x26, "0x4000026-BG2PD", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dmy (16 bits,W)"
    }
  },
  {
    &BG2X_L, 0x28, "0x4000028-BG2X_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "X low bits (16 bits,W)"
    }
  },
  {
    &BG2X_H, 0x2A, "0x400002A-BG2X_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "X high bits (12 bits,W)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &BG2Y_L, 0x2C, "0x400002C-BG2Y_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Y low bits (16 bits,W)"
    }
  },
  {
    &BG2Y_H, 0x2E, "0x400002E-BG2Y_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Y hight bits (12 bits,W)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &BG3PA, 0x30, "0x4000030-BG3PA", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dx (16 bits,W)"
    }
  },
  {
    &BG3PB, 0x32, "0x4000032-BG3PB", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dmx (16 bits,W)"
    }
  },
  {
    &BG3PC, 0x34, "0x4000034-BG3PC", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dy (16 bits,W)"
    }
  },
  {
    &BG3PD, 0x36, "0x4000036-BG3PD", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "dmy (16 bits,W)"
    }
  },
  {
    &BG3X_L, 0x38, "0x4000038-BG3X_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "X low bits (16 bits,W)"
    }
  },
  {
    &BG3X_H, 0x3A, "0x400003A-BG3X_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "X hight bits (12 bits,W)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &BG3Y_L, 0x3C, "0x400003C-BG3Y_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Y low bits (16 bits,W)"
    }
  },
  {
    &BG3Y_H, 0x3E, "0x400003E-BG3Y_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Y hight bits (12 bits,W)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &WIN0H, 0x40, "0x4000040-WIN0H", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 0 lower-right X (8 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 0 upper-left X (8 bits,W)",
    }
  },
  {
    &WIN1H, 0x42, "0x4000042-WIN1H", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 1 lower-right X (8 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 1 upper-left (8 bits,W)",
    }
  },
  {
    &WIN0V, 0x44, "0x4000044-WIN0V", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 0 lower-right Y (8 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 0 upper-left Y (8 bits,W)",
    }
  },
  {
    &WIN1V, 0x46, "0x4000046-WIN1V", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 1 lower-right Y (8 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Win 1 upper-left Y (8 bits,W)",
    }
  },
  {
    &WININ, 0x48, "0x4000048-WININ", 0x3F3F,
    {
      "WIN0 BG0",
      "WIN0 BG1",
      "WIN0 BG2",
      "WIN0 BG3",
      "WIN0 OBJ",
      "WIN0 Special FX",
      "",
      "",
      "WIN1 BG0",
      "WIN1 BG1",
      "WIN1 BG2",
      "WIN1 BG3",
      "WIN1 OBJ",
      "WIN1 Special FX",
      "",
      "",
    }
  },
  {
    &WINOUT, 0x4A, "0x400004A-WINOUT", 0x3F3F,
    {
      "WIN0/1 BG0",
      "WIN0/1 BG1",
      "WIN0/1 BG2",
      "WIN0/1 BG3",
      "WIN0/1 OBJ",
      "WIN0/1 Special FX",
      "",
      "",
      "OBJWIN BG0",
      "OBJWIN BG1",
      "OBJWIN BG2",
      "OBJWIN BG3",
      "OBJWIN OBJ",
      "OBJWIN Special FX",
      "",
      "",
    }
  },
  {
    &MOSAIC, 0x4C, "0x400004C-MOSAIC", 0xFFFF,
    {
      "",
      "",
      "",
      "BG H Size (4 bits,W)",
      "",
      "",
      "",
      "BG V Size (4 bits,W)",
      "",
      "",
      "",
      "OBJ H Size (4 bits,W)",
      "",
      "",
      "",
      "OBJ V Size (4 bits,W)",
    }
  },
  {
    &BLDMOD, 0x50, "0x4000050-BLDMOD", 0x3FFF,
    {
      "1st BG0",
      "1st BG1",
      "1st BG2",
      "1st BG3",
      "1st OBJ",
      "1st BD",
      "",
      "FX Type (2 bits)",
      "2nd BG0",
      "2nd BG1",
      "2nd BG2",
      "2nd BG3",
      "2nd OBJ",
      "2nd BD",
      "",
      "",
    }
  },
  {
    &COLEV, 0x52, "0x4000052-COLEV", 0x1F1F,
    {
      "",
      "",
      "",
      "",
      "Coefficient EVA (5 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Coefficient EVB (5 bits,W)",
      "",
      "",
      "",
    }
  },
  {
    &COLY, 0x54, "0x4000054-COLEY", 0x001F,
    {
      "",
      "",
      "",
      "",
      "Coefficient EVY (5 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    NULL, 0x60, "0x4000060-SG10_L", 0x007F,
    {
      "",
      "",
      "Sweep Shifts (3 bits)",
      "Sweep addition/decrease",
      "",
      "",
      "Sweep Time (3 bits)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    NULL, 0x62, "0x4000062-SG10_H", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "Sound Length (6 bits,W)",
      "",
      "Waveform Type (2 bits)",
      "",
      "",
      "Envelope Steps (3 bits)",
      "Envelope Attenuate/Amplify",
      "",
      "",
      "",
      "Envelope Initial Value",
    }
  },
  {
    NULL, 0x64, "0x4000064-SG11", 0xC7FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Frequency (11 bits,W)",
      "",
      "",
      "",
      "Sound Continuous/Counter",
      "Initialization (W)",
    }
  },
  {
    NULL, 0x68, "0x4000068-SG20", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "Sound Length (6 bits,W)",
      "",
      "Waveform Type (2 bits)",
      "",
      "",
      "Envelope Steps (3 bits)",
      "Envelope Attenuate/Amplify",
      "",
      "",
      "",
      "Envelope Initial Value",
    }
  },
  {
    NULL, 0x6C, "0x400006C-SG21", 0xC7FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Frequency (11 bits,W)",
      "",
      "",
      "",
      "Sound Continuous/Counter",
      "Initialization (W)",
    }
  },
  {
    NULL, 0x70, "0x4000070-SG30_L", 0x00E0,
    {
      "",
      "",
      "",
      "",
      "",
      "Waveform 32/64 Steps",
      "Waveform Bank 0/1",
      "Sound Output",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    NULL, 0x72, "0x4000072-SG30_H", 0xE0FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Sound Length (8 bits,W)",
      "",
      "",
      "",
      "",
      "",
      "",
      "Output Level (2 bits)",
      "Forced 3/4 Output Level",
    }
  },
  {
    NULL, 0x74, "0x4000074-SG31", 0xC7FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Frequency (11 bits,W)",
      "",
      "",
      "",
      "Sound Continuous/Counter",
      "Initialization (W)",
    }
  },
  {
    NULL, 0x78, "0x4000078-SG40", 0xFF3F,
    {
      "",
      "",
      "",
      "",
      "",
      "Sound Length (6 bits,W)",
      "",
      "",
      "",
      "",
      "Envelope Steps (3 bits)",
      "Envelope Attenuate/Amplify",
      "",
      "",
      "",
      "Envelope Initial Value",
    }
  },
  {
    NULL, 0x7C, "0x400007C-SG41", 0xC0FF,
    {
      "",
      "",
      "Dividing Ratio Freq. (3 bits)",
      "Counter 15/7 Steps",
      "",
      "",
      "",
      "Counter Shift Clock (4 bits)",
      "",
      "",
      "",
      "",
      "",
      "",
      "Sound Continuous/Counter",
      "Initialization (W)",
    }
  },
  {
    NULL, 0x80, "0x4000080-SGCNT0_L", 0xFF77,
    {
      "",
      "",
      "Right Volume (3 bits)",
      "",
      "",
      "",
      "Left Volume (3 bits)",
      "",
      "Channel 1->Right",
      "Channel 2->Right",
      "Channel 3->Right",
      "Channel 4->Right",
      "Channel 1->Left",
      "Channel 2->Left",
      "Channel 3->Left",
      "Channel 4->Left",
    }
  },
  {
    NULL, 0x82, "0x4000082-SGCNT0_H", 0xFF0F,
    {
      "",
      "Sound 1-4 Volume (2 bits)",
      "DMA Sound A Volume",
      "DMA Sound B Volume",
      "",
      "",
      "",
      "",
      "DMA Sound A->Right",
      "DMA Sound A->Left",
      "DMA Sound A Timer",
      "DMA Sound A Reset FIFO",
      "DMA Sound B->Right",
      "DMA Sound B->Left",
      "DMA Sound B Timer",
      "DMA Sound B Reset FIFO",
    }
  },
  {
    NULL, 0x84, "0x4000084-SGCNT1", 0x0080,
    {
      "Sound 1 On",
      "Sound 2 On",
      "Sound 3 On",
      "Sound 4 On",
      "",
      "",
      "",
      "Master Sound Enable",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    NULL, 0x88, "0x4000088-SGBIAS", 0xC3FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Bias Level (10 bits)",
      "",
      "",
      "",
      "",
      "",
      "Sampling Rate (2 bits)",
    }
  },
  {
    NULL, 0xA0, "0x40000A0-SIGFIFOA_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 0 (8 bits)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 1 (8 bits)",
    }
  },
  {
    NULL, 0xA2, "0x40000A2-SIGFIFOA_H", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 2 (8 bits)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 3 (8 bits)",
    }
  },
  {
    NULL, 0xA4, "0x40000A4-SIGFIFOB_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 0 (8 bits)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 1 (8 bits)",
    }
  },
  {
    NULL, 0xA6, "0x40000A6-SIGFIFOB_H", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 2 (8 bits)",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Data 3 (8 bits)",
    }
  },
  {
    &DM0SAD_L, 0xB0, "0x40000B0-DM0SAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (lower 16 bits)",
    }
  },
  {
    &DM0SAD_H, 0xB2, "0x40000B2-DM0SAD_H", 0x07FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (upper 11 bits)",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM0DAD_L, 0xB4, "0x40000B4-DM0DAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (lower 16 bits)",
    }
  },
  {
    &DM0DAD_H, 0xB6, "0x40000B6-DM0DAD_H", 0x07FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (upper 11 bits)",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM0CNT_L, 0xB8, "0x40000B8-DM0CNT_L", 0x3FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Count (14 bits)",
      "",
      "",
    }
  },
  {
    &DM0CNT_H, 0xBA, "0x40000BA-DM0CNT_H", 0xF7E0,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address Control (2 bits)",
      "",
      "Source Address Control (2 bits)",
      "Repeat",
      "Transfer Type",
      "",
      "",
      "Start Timing (2 bits)",
      "Interrupt Request",
      "Enable",
    }
  },
  {
    &DM1SAD_L, 0xBC, "0x40000BC-DM1SAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (lower 16 bits)",
    }
  },
  {
    &DM1SAD_H, 0xBE, "0x40000BE-DM1SAD_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (upper 12 bits)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM1DAD_L, 0xC0, "0x40000C0-DM1DAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (lower 16 bits)",
    }
  },
  {
    &DM1DAD_H, 0xC2, "0x40000C2-DM1DAD_H", 0x07FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (upper 11 bits)",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM1CNT_L, 0xC4, "0x40000C4-DM1CNT_L", 0x3FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Count (14 bits)",
      "",
      "",
    }
  },
  {
    &DM1CNT_H, 0xC6, "0x40000C6-DM1CNT_H", 0xF7E0,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address Control (2 bits)",
      "",
      "Source Address Control (2 bits)",
      "Repeat",
      "Transfer Type",
      "",
      "",
      "Start Timing (2 bits)",
      "Interrupt Request",
      "Enable",
    }
  },
  {
    &DM2SAD_L, 0xC8, "0x40000C8-DM2SAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (lower 16 bits)",
    }
  },
  {
    &DM2SAD_H, 0xCA, "0x40000CA-DM2SAD_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (upper 12 bits)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM2DAD_L, 0xCC, "0x40000CC-DM2DAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (lower 16 bits)",
    }
  },
  {
    &DM2DAD_H, 0xCE, "0x40000CE-DM2DAD_H", 0x07FF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (upper 11 bits)",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM2CNT_L, 0xD0, "0x40000D0-DM2CNT_L", 0x3FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Count (14 bits)",
      "",
      "",
    }
  },
  {
    &DM2CNT_H, 0xD2, "0x40000D2-DM2CNT_H", 0xF7E0,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address Control (2 bits)",
      "",
      "Source Address Control (2 bits)",
      "Repeat",
      "Transfer Type",
      "",
      "",
      "Start Timing (2 bits)",
      "Interrupt Request",
      "Enable",
    }
  },
  {
    &DM3SAD_L, 0xD4, "0x40000D4-DM3SAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (lower 16 bits)",
    }
  },
  {
    &DM3SAD_H, 0xD6, "0x40000D6-DM3SAD_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Source Address (upper 12 bits)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM3DAD_L, 0xD8, "0x40000D8-DM3DAD_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (lower 16 bits)",
    }
  },
  {
    &DM3DAD_H, 0xDA, "0x40000DA-DM3DAD_H", 0x0FFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address (upper 12 bits)",
      "",
      "",
      "",
      "",
    }
  },
  {
    &DM3CNT_L, 0xDC, "0x40000DC-DM3CNT_L", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Count (16 bits)",
    }
  },
  {
    &DM3CNT_H, 0xDE, "0x40000DE-DM3CNT_H", 0xFFE0,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "Destination Address Control (2 bits)",
      "",
      "Source Address Control (2 bits)",
      "Repeat",
      "Transfer Type",
      "Game Pak Data Request",
      "",
      "Start Timing (2 bits)",
      "Interrupt Request",
      "Enable",
    }
  },
  {
    &TM0D, 0x100, "0x4000100-TM0D", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Timer Counter (16 bits)",
    }
  },
  {
    &TM0CNT, 0x102, "0x4000102-TM0CNT", 0x00C7,
    {
      "",
      "Scalar Selection (2 bits)",
      "Count Up",
      "",
      "",
      "",
      "Interrupt Request",
      "Enable",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &TM1D, 0x104, "0x4000104-TM1D", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Timer Counter (16 bits)",
    }
  },
  {
    &TM1CNT, 0x106, "0x4000106-TM1CNT", 0x00C7,
    {
      "",
      "Scalar Selection (2 bits)",
      "Count Up",
      "",
      "",
      "",
      "Interrupt Request",
      "Enable",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &TM2D, 0x108, "0x4000108-TM2D", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Timer Counter (16 bits)",
    }
  },
  {
    &TM2CNT, 0x10A, "0x400010A-TM2CNT", 0x00C7,
    {
      "",
      "Scalar Selection (2 bits)",
      "Count Up",
      "",
      "",
      "",
      "Interrupt Request",
      "Enable",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &TM3D, 0x10C, "0x400010C-TM3D", 0xFFFF,
    {
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Timer Counter (16 bits)",
    }
  },
  {
    &TM3CNT, 0x10E, "0x400010E-TM3CNT", 0x00C7,
    {
      "",
      "Scalar Selection (2 bits)",
      "Count Up",
      "",
      "",
      "",
      "Interrupt Request",
      "Enable",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    &P1, 0x130, "0x4000130-P1", 0x03FF,
    {
      "A",
      "B",
      "Select",
      "Start",
      "Right",
      "Left",
      "Up",
      "Down",
      "Shoulder Right",
      "Shoulder Left",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    NULL, 0x132, "0x4000132-P1CNT", 0xC3FF,
    {
      "A",
      "B",
      "Select",
      "Start",
      "Right",
      "Left",
      "Up",
      "Down",
      "Shoulder Right",
      "Shoulder Left",
      "",
      "",
      "",
      "",
      "Interrupt Request",
      "Interrupt Condition",
    }
  },
  {
    &IE, 0x200, "0x4000200-IE", 0x3FFF,
    {
      "VBlank",
      "HBlank",
      "VCount",
      "Timer 0",
      "Timer 1",
      "Timer 2",
      "Timer 3",
      "Serial",
      "DMA 0",
      "DMA 1",
      "DMA 2",
      "DMA 3",
      "Keypad",
      "Game Pak",
      "",
      "",
    }
  },
  {
    &IF, 0x202, "0x4000202-IF", 0x0000,
    {
      "VBlank",
      "HBlank",
      "VCount",
      "Timer 0",
      "Timer 1",
      "Timer 2",
      "Timer 3",
      "Serial",
      "DMA 0",
      "DMA 1",
      "DMA 2",
      "DMA 3",
      "Keypad",
      "Game Pak",
      "",
      "",
    }
  },
  {
    NULL, 0x204, "0x4000204-WAITCNT", 0x5FFF,
    {
      "",
      "SRAM Wait Control (2 bits)",
      "",
      "Wait State 0 First Access (2 bits)",
      "Wait State 0 Second Access",
      "",
      "Wait State 1 First Access (2 bits)",
      "Wait State 1 Second Access",
      "",
      "Wait State 2 First Access (2 bits)",
      "Wait State 2 Second Access",
      "",
      "PHI Terminal Output (2 bits)",
      "",
      "Game Pak Prefetch Buffer",
      "Game Pak Type Flag",
    }
  },
  {
    &IME, 0x208, "0x4000208-IME", 0x0001,
    {
      "Master Interrupt Enable",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    }
  },
  {
    NULL, 0x300, "0x4000300-HALTCNT", 0x8001,
    {
      "First Boot",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "Power Down",
    }
  },
};