// 函数: sub_1423fb170
// 地址: 0x1423fb170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
__builtin_memset(&arg2[2], 0, 0x30)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x30) = *(arg2 + 0x30)
arg1[0xe].b = arg2[0xe].b
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
void* rax_11 = *(arg2 + 0x58)
*(arg1 + 0x58) = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

arg1[0x18] ^= (arg1[0x18] ^ arg2[0x18]) & 1
int32_t rcx_3 = ((arg1[0x18] ^ arg2[0x18]) & 2) ^ arg1[0x18]
arg1[0x18] = rcx_3
int32_t rdx_3 = ((rcx_3 ^ arg2[0x18]) & 4) ^ rcx_3
arg1[0x18] = rdx_3
arg1[0x18] = ((rdx_3 ^ arg2[0x18]) & 8) ^ rdx_3
arg1[0x1a].b = arg2[0x1a].b
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x78) = *(arg2 + 0x78)
__builtin_memset(&arg2[0x1c], 0, 0x20)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
arg1[0x26] = arg2[0x26]
arg1[0x27] = arg2[0x27]
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
__builtin_memset(&arg2[0x28], 0, 0x20)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
arg1[0x30] = arg2[0x30]
return arg1
