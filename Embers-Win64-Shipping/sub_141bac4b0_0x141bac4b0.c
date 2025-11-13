// 函数: sub_141bac4b0
// 地址: 0x141bac4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd8) s<= 0 || **(arg1 + 0xd0) == arg3)
    *arg2 = 0
    *(arg2 + 8) = 0
    return arg2

char rax_2 = *(arg1 + 0xc0)
arg2[2] = 0
int32_t zmm0 = *(arg1 + 0xc8)
arg2[3] = 0

if (rax_2 != 0)
    arg2[1] = zmm0
    *arg2 = 0
    return arg2

*arg2 = zmm0
arg2[1] = 0
return arg2
