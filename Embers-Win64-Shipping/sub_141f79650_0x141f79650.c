// 函数: sub_141f79650
// 地址: 0x141f79650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c1f0(arg1, arg2)
*arg1 = &data_142e79680
arg1[0x12] = 0
uint32_t count = *(arg2 + 0x98)
int64_t r14 = *(arg2 + 0x90)
arg1[0x13].d = count

if (count != 0)
    sub_1405da9e0(&arg1[0x12], count, 0)
    memcpy(arg1[0x12], r14, count)
else
    *(arg1 + 0x9c) = 0

arg1[0x14] = *(arg2 + 0xa0)
arg1[0x15] = *(arg2 + 0xa8)
*arg1 = &data_142e88fd0
arg1[0x16] = *(arg2 + 0xb0)
*arg1 = &data_143286d50
arg1[0x17].d = *(arg2 + 0xb8)
arg1[0x18] = *(arg2 + 0xc0)
arg1[0x19] = *(arg2 + 0xc8)
arg1[0x1a].d = *(arg2 + 0xd0)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
arg1[0x1b] = *(arg2 + 0xd8)
arg1[0x1c].d = *(arg2 + 0xe0)
*(arg1 + 0xe4) ^= (*(arg1 + 0xe4) ^ *(arg2 + 0xe4)) & 1
char rax_11 = *(arg1 + 0xe4)
char rcx_2 = ((*(arg2 + 0xe4) ^ rax_11) & 2) ^ rax_11
*(arg1 + 0xe4) = rcx_2
char rax_12 = ((*(arg2 + 0xe4) ^ rcx_2) & 4) ^ rcx_2
*(arg1 + 0xe4) = rax_12
char rcx_3 = ((*(arg2 + 0xe4) ^ rax_12) & 8) ^ rax_12
*(arg1 + 0xe4) = rcx_3
char rax_13 = ((*(arg2 + 0xe4) ^ rcx_3) & 0x10) ^ rcx_3
*(arg1 + 0xe4) = rax_13
char rdx_2 = ((*(arg2 + 0xe4) ^ rax_13) & 0x20) ^ rax_13
*(arg1 + 0xe4) = rdx_2
char rcx_4 = ((*(arg2 + 0xe4) ^ rdx_2) & 0x40) ^ rdx_2
*(arg1 + 0xe4) = rcx_4
*(arg1 + 0xe4) = ((*(arg2 + 0xe4) ^ rcx_4) & 0x7f) ^ *(arg2 + 0xe4)
*(arg1 + 0xe5) ^= (*(arg1 + 0xe5) ^ *(arg2 + 0xe5)) & 1
char rax_16 = *(arg1 + 0xe5)
char rcx_5 = ((rax_16 ^ *(arg2 + 0xe5)) & 2) ^ rax_16
*(arg1 + 0xe5) = rcx_5
*(arg1 + 0xe5) = ((rcx_5 ^ *(arg2 + 0xe5)) & 4) ^ rcx_5
*(arg1 + 0xe6) = *(arg2 + 0xe6)
return arg1
