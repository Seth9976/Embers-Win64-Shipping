// 函数: sub_142180de0
// 地址: 0x142180de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9600(arg1)
arg1[0x3f].d = 0xffffffff
arg1[0x3a] = 0
arg1[0x3b] = 0
*arg1 = &data_1432e6cb8
__builtin_memset(&arg1[0x3c], 0, 0x18)
arg1[0x40] = 0
arg1[0x42] = 0
arg1[0x43].d = 0
arg1[0x41].d = 0xffffffff
*(arg1 + 0x20c) = 1
__builtin_memset(&arg1[0x44], 0, 0x14)
__builtin_memset(&arg1[0x47], 0, 0xd8)

if (*(arg1 + 0x22c) != 0)
    sub_1405dadb0(&arg1[0x44], 0)

arg1[0x4a].d = 0

if (*(arg1 + 0x254) != 0)
    sub_140638cc0(&arg1[0x49], 0)

arg1[0x4c].d = 0

if (*(arg1 + 0x264) != 0)
    sub_140638cc0(&arg1[0x4b], 0)

arg1[0x4e].d = 0

if (*(arg1 + 0x274) != 0)
    sub_1405dadb0(&arg1[0x4d], 0)

arg1[0x50].d = 0

if (*(arg1 + 0x284) != 0)
    sub_1405dadb0(&arg1[0x4f], 0)

arg1[0x52].d = 0

if (*(arg1 + 0x294) != 0)
    sub_140638cc0(&arg1[0x51], 0)

arg1[0x54].d = 0

if (*(arg1 + 0x2a4) != 0)
    sub_140638cc0(&arg1[0x53], 0)

arg1[0x56].d = 0

if (*(arg1 + 0x2b4) != 0)
    sub_1405dadb0(&arg1[0x55], 0)

arg1[0x5a].d = 0

if (*(arg1 + 0x2d4) != 0)
    sub_140638c50(&arg1[0x59], 0)

arg1[0x5c].d = 0

if (*(arg1 + 0x2e4) != 0)
    sub_140638cc0(&arg1[0x5b], 0)

arg1[0x5e].d = 0

if (*(arg1 + 0x2f4) != 0)
    sub_140638cc0(&arg1[0x5d], 0)

arg1[0x61].d = 0

if (*(arg1 + 0x30c) != 0)
    sub_1405dadb0(&arg1[0x60], 0)

arg1[0x1c].d |= 0x100
return arg1
