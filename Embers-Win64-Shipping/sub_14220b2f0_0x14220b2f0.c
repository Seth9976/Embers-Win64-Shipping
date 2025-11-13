// 函数: sub_14220b2f0
// 地址: 0x14220b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9600(arg1)
arg1[0x3d].d &= 0xfffffffe
*arg1 = &data_143304660
__builtin_memset(&arg1[0x3a], 0, 0x18)
__builtin_memset(&arg1[0x3e], 0, 0x40)
arg1[0x46].d = (arg1[0x46].d & 0xfffffffd) | 1
arg1[0x3f].d = 0

if (*(arg1 + 0x1fc) != 0)
    sub_1405dadb0(&arg1[0x3e], 0)

arg1[0x41].d = 0

if (*(arg1 + 0x20c) != 0)
    sub_1405dadb0(&arg1[0x40], 0)

arg1[0x43].d = 0

if (*(arg1 + 0x21c) != 0)
    sub_1405dadb0(&arg1[0x42], 0)

arg1[0x45].d = 0

if (*(arg1 + 0x22c) != 0)
    sub_1405dadb0(&arg1[0x44], 0)

return arg1
