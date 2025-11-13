// 函数: sub_14255aad0
// 地址: 0x14255aad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0xb] = arg2[0xb]
arg1[0xc].d = arg2[0xc].d
*(arg1 + 0x64) = *(arg2 + 0x64)
arg1[0xd].d = arg2[0xd].d
*(arg1 + 0x6c) ^= (*(arg1 + 0x6c) ^ *(arg2 + 0x6c)) & 1
int32_t rcx_3 = ((*(arg2 + 0x6c) ^ *(arg1 + 0x6c)) & 2) ^ *(arg1 + 0x6c)
*(arg1 + 0x6c) = rcx_3
int32_t rax_11 = ((*(arg2 + 0x6c) ^ rcx_3) & 4) ^ rcx_3
*(arg1 + 0x6c) = rax_11
int32_t rcx_7 = ((*(arg2 + 0x6c) ^ rax_11) & 8) ^ rax_11
*(arg1 + 0x6c) = rcx_7
*(arg1 + 0x6c) = ((*(arg2 + 0x6c) ^ rcx_7) & 0x10) ^ rcx_7
return arg1
