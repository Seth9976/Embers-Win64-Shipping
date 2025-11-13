// 函数: sub_141f79b40
// 地址: 0x141f79b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c1f0(arg1, arg2)
*arg1 = &data_142e79898
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
arg1[0x16].b = *(arg2 + 0xb0)
*(arg1 + 0xb1) = *(arg2 + 0xb1)
*arg1 = &data_142e88db8
arg1[0x17] = *(arg2 + 0xb8)
*arg1 = &data_143286b38
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
char rcx_2 = ((rax_14 ^ *(arg2 + 0xf0)) & 2) ^ rax_14
arg1[0x1e].b = rcx_2
char rax_15 = ((rcx_2 ^ *(arg2 + 0xf0)) & 4) ^ rcx_2
arg1[0x1e].b = rax_15
char rcx_3 = ((rax_15 ^ *(arg2 + 0xf0)) & 8) ^ rax_15
arg1[0x1e].b = rcx_3
char rax_16 = ((rcx_3 ^ *(arg2 + 0xf0)) & 0x10) ^ rcx_3
arg1[0x1e].b = rax_16
char rcx_4 = ((rax_16 ^ *(arg2 + 0xf0)) & 0x20) ^ rax_16
arg1[0x1e].b = rcx_4
char rax_17 = ((rcx_4 ^ *(arg2 + 0xf0)) & 0x40) ^ rcx_4
arg1[0x1e].b = rax_17
arg1[0x1e].b = ((rax_17 ^ *(arg2 + 0xf0)) & 0x7f) ^ *(arg2 + 0xf0)
*(arg1 + 0xf1) ^= (*(arg1 + 0xf1) ^ *(arg2 + 0xf1)) & 1
char rax_19 = *(arg1 + 0xf1)
char rcx_5 = ((rax_19 ^ *(arg2 + 0xf1)) & 2) ^ rax_19
*(arg1 + 0xf1) = rcx_5
*(arg1 + 0xf1) = ((rcx_5 ^ *(arg2 + 0xf1)) & 4) ^ rcx_5
*(arg1 + 0xf2) = *(arg2 + 0xf2)
arg1[0x1f] = 0
int64_t rbp = sx.q(*(arg2 + 0x100))
int64_t r14_1 = *(arg2 + 0xf8)
arg1[0x20].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[0x1f], rbp.d, 0)
    memcpy(arg1[0x1f], r14_1, (rbp << 2).d)
else
    *(arg1 + 0x104) = 0

arg1[0x21] = 0
int64_t rbp_1 = sx.q(*(arg2 + 0x110))
int64_t rdi_1 = *(arg2 + 0x108)
arg1[0x22].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a00(&arg1[0x21], rbp_1.d, 0)
    memcpy(arg1[0x21], rdi_1, (rbp_1 << 3).d)
else
    *(arg1 + 0x114) = 0

return arg1
