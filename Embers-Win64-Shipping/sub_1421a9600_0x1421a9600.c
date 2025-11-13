// 函数: sub_1421a9600
// 地址: 0x1421a9600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x34) = 0xffffffff
arg1[2] = 0
*arg1 = &data_1432ec2f8
int32_t rax = arg1[0x1c].d
arg1[3] = 0
arg1[4].d = 0
arg1[0x1c].d = (rax & 0xfffff809) | 1
arg1[5] = 0
arg1[6].d = 0
__builtin_memset(&arg1[7], 0, 0x18)
*(arg1 + 0xe4) = 0
arg1[0x1d].d = 0
__builtin_memset(&arg1[0x1e], 0, 0x40)
__builtin_memset(&arg1[0x2c], 0, 0x1c)
arg1[0x30] = 0
arg1[0x31] = 0
__builtin_memset(&arg1[0x33], 0, 0x1c)
*(arg1 + 0x1b4) = 0xbf000000
arg1[0x37].d = 0xbf000000
arg1[0x38] = 0
arg1[0x39] = 0
return arg1
