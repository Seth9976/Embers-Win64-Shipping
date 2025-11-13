// 函数: sub_141f7bf90
// 地址: 0x141f7bf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4cc40(arg1, arg2)
sub_14081d8c0(&arg1[0x12], arg2 + 0x90)
arg1[0x14] = *(arg2 + 0xa0)
arg1[0x15] = *(arg2 + 0xa8)
arg1[0x16].b = *(arg2 + 0xb0)
*(arg1 + 0xb1) = *(arg2 + 0xb1)
arg1[0x17] = *(arg2 + 0xb8)
arg1[0x18] = *(arg2 + 0xc0)
arg1[0x19] = *(arg2 + 0xc8)
arg1[0x1a] = *(arg2 + 0xd0)
arg1[0x1b].d = *(arg2 + 0xd8)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
arg1[0x1c] = *(arg2 + 0xe0)
arg1[0x1d].d = *(arg2 + 0xe8)
*(arg1 + 0xec) = *(arg2 + 0xec)
arg1[0x1e].b ^= (arg1[0x1e].b ^ *(arg2 + 0xf0)) & 1
char rax_14 = arg1[0x1e].b
char rcx_1 = ((*(arg2 + 0xf0) ^ rax_14) & 2) ^ rax_14
arg1[0x1e].b = rcx_1
char rax_15 = ((*(arg2 + 0xf0) ^ rcx_1) & 4) ^ rcx_1
arg1[0x1e].b = rax_15
char rcx_2 = ((*(arg2 + 0xf0) ^ rax_15) & 8) ^ rax_15
arg1[0x1e].b = rcx_2
char rax_16 = ((*(arg2 + 0xf0) ^ rcx_2) & 0x10) ^ rcx_2
arg1[0x1e].b = rax_16
char rdx_1 = ((*(arg2 + 0xf0) ^ rax_16) & 0x20) ^ rax_16
arg1[0x1e].b = rdx_1
char rcx_3 = ((*(arg2 + 0xf0) ^ rdx_1) & 0x40) ^ rdx_1
arg1[0x1e].b = rcx_3
arg1[0x1e].b = ((*(arg2 + 0xf0) ^ rcx_3) & 0x7f) ^ *(arg2 + 0xf0)
*(arg1 + 0xf1) ^= (*(arg1 + 0xf1) ^ *(arg2 + 0xf1)) & 1
char rax_19 = *(arg1 + 0xf1)
char rcx_4 = ((rax_19 ^ *(arg2 + 0xf1)) & 2) ^ rax_19
*(arg1 + 0xf1) = rcx_4
*(arg1 + 0xf1) = ((rcx_4 ^ *(arg2 + 0xf1)) & 4) ^ rcx_4
*(arg1 + 0xf2) = *(arg2 + 0xf2)

if (&arg1[0x1f] != arg2 + 0xf8)
    int64_t rsi_1 = sx.q(*(arg2 + 0x100))
    int32_t r8_1 = *(arg1 + 0x104)
    int64_t r14_1 = *(arg2 + 0xf8)
    arg1[0x20].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405c4a90(&arg1[0x1f], rsi_1.d, r8_1)
        memcpy(arg1[0x1f], r14_1, (rsi_1 << 2).d)
    else
        *(arg1 + 0x104) = rsi_1.d

if (&arg1[0x21] != arg2 + 0x108)
    int64_t rsi_2 = sx.q(*(arg2 + 0x110))
    int64_t rbp_1 = *(arg2 + 0x108)
    int32_t r8_4 = *(arg1 + 0x114)
    arg1[0x22].d = rsi_2.d
    
    if (rsi_2.d != 0 || r8_4 != 0)
        sub_1405c4a00(&arg1[0x21], rsi_2.d, r8_4)
        memcpy(arg1[0x21], rbp_1, (rsi_2 << 3).d)
    else
        *(arg1 + 0x114) = rsi_2.d

return arg1
