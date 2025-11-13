// 函数: sub_141a34030
// 地址: 0x141a34030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].q = arg2[2].q
sub_141a34710(arg1 + 0x28, arg2 + 0x28)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[5].d = arg2[5].d
*(arg1 + 0x54) ^= (*(arg1 + 0x54) ^ *(arg2 + 0x54)) & 1
char rcx_1 = ((*(arg2 + 0x54) ^ *(arg1 + 0x54)) & 2) ^ *(arg1 + 0x54)
*(arg1 + 0x54) = rcx_1
char rax_4 = ((*(arg2 + 0x54) ^ rcx_1) & 4) ^ rcx_1
*(arg1 + 0x54) = rax_4
char rcx_2 = ((*(arg2 + 0x54) ^ rax_4) & 8) ^ rax_4
*(arg1 + 0x54) = rcx_2
char rdx_1 = ((*(arg2 + 0x54) ^ rcx_2) & 0x10) ^ rcx_2
*(arg1 + 0x54) = rdx_1
*(arg1 + 0x54) = ((*(arg2 + 0x54) ^ rdx_1) & 0x20) ^ rdx_1
return arg1
