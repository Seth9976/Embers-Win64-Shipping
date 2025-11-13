// 函数: sub_1405ab790
// 地址: 0x1405ab790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0x14) = *arg3
*(arg1 + 0x28) = *arg4
*(arg1 + 0x38) = arg4[1]
*(arg1 + 0x48) = arg4[2].q
sub_1405ac190(&arg1[5], arg4 + 0x28)
arg1[7].d = *(arg4 + 0x48)
*(arg1 + 0x74) = *(arg4 + 0x4c)
*(arg1 + 0x78) = arg4[5].d
*(arg1 + 0x7c) ^= (*(arg1 + 0x7c) ^ *(arg4 + 0x54)) & 1
char rcx_1 = ((*(arg4 + 0x54) ^ *(arg1 + 0x7c)) & 2) ^ *(arg1 + 0x7c)
*(arg1 + 0x7c) = rcx_1
char rax_5 = ((*(arg4 + 0x54) ^ rcx_1) & 4) ^ rcx_1
*(arg1 + 0x7c) = rax_5
char rcx_2 = ((*(arg4 + 0x54) ^ rax_5) & 8) ^ rax_5
*(arg1 + 0x7c) = rcx_2
char rdx_1 = ((*(arg4 + 0x54) ^ rcx_2) & 0x10) ^ rcx_2
*(arg1 + 0x7c) = rdx_1
*(arg1 + 0x7c) = ((*(arg4 + 0x54) ^ rdx_1) & 0x20) ^ rdx_1
char rax_7 = (arg1[0xc].b & 0xfe) | 2
arg1[0xc].b = rax_7

if ((arg5[4].b & 1) != 0)
    arg1[0xc].b = rax_7 | 1
    arg5[4].b &= 0xfe
    arg1[0xc].b &= 0xfd
    arg1[0xc].b |= arg5[4].b & 2
    arg1[8] = *arg5
    arg1[9] = arg5[1]
    arg1[0xa] = arg5[2]
    arg1[0xb] = arg5[3]

return arg1
