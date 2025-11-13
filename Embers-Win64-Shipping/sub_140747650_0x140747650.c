// 函数: sub_140747650
// 地址: 0x140747650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].q = arg2[2].q
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[3].d = arg2[3].d
sub_140747360(arg1 + 0x38, arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[5].d = arg2[5].d
*(arg1 + 0x54) ^= (*(arg1 + 0x54) ^ *(arg2 + 0x54)) & 1
char rcx_1 = ((*(arg2 + 0x54) ^ *(arg1 + 0x54)) & 2) ^ *(arg1 + 0x54)
*(arg1 + 0x54) = rcx_1
char rax_5 = ((*(arg2 + 0x54) ^ rcx_1) & 4) ^ rcx_1
*(arg1 + 0x54) = rax_5
char rcx_2 = ((*(arg2 + 0x54) ^ rax_5) & 8) ^ rax_5
*(arg1 + 0x54) = rcx_2
char rdx_1 = ((*(arg2 + 0x54) ^ rcx_2) & 0x10) ^ rcx_2
*(arg1 + 0x54) = rdx_1
*(arg1 + 0x54) = ((*(arg2 + 0x54) ^ rdx_1) & 0x20) ^ rdx_1
return arg1
