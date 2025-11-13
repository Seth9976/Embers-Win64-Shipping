// 函数: sub_140e51550
// 地址: 0x140e51550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg2 + 0x10) = 0
*(arg2 + 8) = 0
arg1[0x20] = 0

if (arg2[0x20] != 0)
    *(arg1 + 0x18) = *(arg2 + 0x18)
    arg1[0x20] = 1

*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x30) = *(arg2 + 0x30)
__builtin_memset(&arg2[0x28], 0, 0x60)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x98) = *(arg2 + 0x98)
__builtin_memset(&arg2[0x90], 0, 0x20)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
arg1[0xb0] = arg2[0xb0]
arg1[0xb1] = arg2[0xb1]
arg1[0xb2] = arg2[0xb2]
arg1[0xb3] = arg2[0xb3]
*(arg1 + 0xb4) ^= (*(arg1 + 0xb4) ^ *(arg2 + 0xb4)) & 1
int32_t rax_27 = *(arg1 + 0xb4)
int32_t rcx_3 = ((rax_27 ^ *(arg2 + 0xb4)) & 2) ^ rax_27
*(arg1 + 0xb4) = rcx_3
int32_t rax_31 = ((rcx_3 ^ *(arg2 + 0xb4)) & 4) ^ rcx_3
*(arg1 + 0xb4) = rax_31
int32_t rcx_7 = ((rax_31 ^ *(arg2 + 0xb4)) & 8) ^ rax_31
*(arg1 + 0xb4) = rcx_7
int32_t rax_35 = ((rcx_7 ^ *(arg2 + 0xb4)) & 0x10) ^ rcx_7
*(arg1 + 0xb4) = rax_35
int32_t rcx_11 = ((rax_35 ^ *(arg2 + 0xb4)) & 0x20) ^ rax_35
*(arg1 + 0xb4) = rcx_11
int32_t rdx_3 = ((rcx_11 ^ *(arg2 + 0xb4)) & 0x40) ^ rcx_11
*(arg1 + 0xb4) = rdx_3
*(arg1 + 0xb4) = ((rdx_3 ^ *(arg2 + 0xb4)) & 0x80) ^ rdx_3
return arg1
