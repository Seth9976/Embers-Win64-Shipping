// 函数: sub_141ff5fd0
// 地址: 0x141ff5fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14329d0f8
arg1[5] = 0
arg1[6] = 0
__builtin_memset(&arg1[8], 0, 0x1d)
arg1[0xc].d = 0
int32_t r8_1 = arg1[6].d + arg1[9].d
arg1[9].d = r8_1

if (r8_1 s> *(arg1 + 0x4c))
    sub_1405daba0(&arg1[8])

*(arg1 + 0x54) = arg1[6].d
arg1[0xc].d = arg1[7].d
arg1[0xa].d = 0
arg1[0xb].d = 0
*(arg1 + 0x5c) = 0
return arg1
