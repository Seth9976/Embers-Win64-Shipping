// 函数: sub_141db7640
// 地址: 0x141db7640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e259f0
arg1[1].b = *(arg2 + 8)
*(arg1 + 9) = *(arg2 + 9)
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].b = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4].d = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
sub_141adec50(&arg1[5], arg2 + 0x28)
arg1[0x15] = *(arg2 + 0xa8)
*arg1 = &data_143209430
arg1[0x16].b ^= (arg1[0x16].b ^ *(arg2 + 0xb0)) & 1
char rax_9 = arg1[0x16].b
char rcx_1 = ((*(arg2 + 0xb0) ^ rax_9) & 2) ^ rax_9
arg1[0x16].b = rcx_1
char rax_10 = ((*(arg2 + 0xb0) ^ rcx_1) & 4) ^ rcx_1
arg1[0x16].b = rax_10
char rcx_2 = ((*(arg2 + 0xb0) ^ rax_10) & 8) ^ rax_10
arg1[0x16].b = rcx_2
char rax_11 = ((*(arg2 + 0xb0) ^ rcx_2) & 0x10) ^ rcx_2
arg1[0x16].b = rax_11
char rdx_1 = ((*(arg2 + 0xb0) ^ rax_11) & 0x20) ^ rax_11
arg1[0x16].b = rdx_1
char rcx_3 = ((*(arg2 + 0xb0) ^ rdx_1) & 0x40) ^ rdx_1
arg1[0x16].b = rcx_3
arg1[0x16].b = ((*(arg2 + 0xb0) ^ rcx_3) & 0x7f) ^ *(arg2 + 0xb0)
*(arg1 + 0xb1) ^= (*(arg1 + 0xb1) ^ *(arg2 + 0xb1)) & 1
char rax_14 = *(arg1 + 0xb1)
char rcx_4 = ((rax_14 ^ *(arg2 + 0xb1)) & 2) ^ rax_14
*(arg1 + 0xb1) = rcx_4
char rdx_2 = ((rcx_4 ^ *(arg2 + 0xb1)) & 4) ^ rcx_4
*(arg1 + 0xb1) = rdx_2
*(arg1 + 0xb1) = ((rdx_2 ^ *(arg2 + 0xb1)) & 8) ^ rdx_2
*(arg1 + 0xb2) = *(arg2 + 0xb2)
*(arg1 + 0xb4) = *(arg2 + 0xb4)
arg1[0x17].b = *(arg2 + 0xb8)
*(arg1 + 0xb9) = *(arg2 + 0xb9)
*(arg1 + 0xba) = *(arg2 + 0xba)
*(arg1 + 0xbb) = *(arg2 + 0xbb)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
arg1[0x18].d = *(arg2 + 0xc0)
*(arg1 + 0xc4) = *(arg2 + 0xc4)
arg1[0x19].d = *(arg2 + 0xc8)
sub_141adec50(&arg1[0x1a], arg2 + 0xd0)
arg1[0x2a] = *(arg2 + 0x150)
sub_141adec50(&arg1[0x2b], arg2 + 0x158)
arg1[0x3b] = *(arg2 + 0x1d8)
arg1[0x3c].d = *(arg2 + 0x1e0)
*(arg1 + 0x1e4) = *(arg2 + 0x1e4)
arg1[0x3d].d = *(arg2 + 0x1e8)
*(arg1 + 0x1ec) = *(arg2 + 0x1ec)
arg1[0x3e].d = *(arg2 + 0x1f0)
*(arg1 + 0x1f4) = *(arg2 + 0x1f4)
arg1[0x3f].d = *(arg2 + 0x1f8)
*(arg1 + 0x1fc) = *(arg2 + 0x1fc)
arg1[0x40].d = *(arg2 + 0x200)
*(arg1 + 0x204) = *(arg2 + 0x204)
arg1[0x41].d = *(arg2 + 0x208)
*(arg1 + 0x20c) = *(arg2 + 0x20c)
arg1[0x42].d = *(arg2 + 0x210)
*(arg1 + 0x214) = *(arg2 + 0x214)
arg1[0x43].d = *(arg2 + 0x218)
*(arg1 + 0x21c) = *(arg2 + 0x21c)
arg1[0x44].d = *(arg2 + 0x220)
*(arg1 + 0x224) = *(arg2 + 0x224)
arg1[0x45].d = *(arg2 + 0x228)
*(arg1 + 0x22c) = *(arg2 + 0x22c)
arg1[0x46].d = *(arg2 + 0x230)
*(arg1 + 0x234) = *(arg2 + 0x234)
sub_141adec50(&arg1[0x47], arg2 + 0x238)
arg1[0x57] = *(arg2 + 0x2b8)
arg1[0x58] = 0
int32_t i_1 = *(arg2 + 0x2c8)
void* rdi = *(arg2 + 0x2c0)
arg1[0x59].d = i_1

if (i_1 != 0)
    sub_140976950(&arg1[0x58], i_1, 0)
    int64_t* rbx_1 = arg1[0x58]
    char* rdi_1 = rdi + 8
    int32_t i
    
    do
        *rbx_1 = *(rdi_1 - 8)
        rbx_1[1].b = *rdi_1
        *(rbx_1 + 0xc) = *(rdi_1 + 4)
        rbx_1[2].d = *(rdi_1 + 8)
        *(rbx_1 + 0x14) = *(rdi_1 + 0xc)
        rbx_1[3].d = *(rdi_1 + 0x10)
        *(rbx_1 + 0x1c) = *(rdi_1 + 0x14)
        sub_141adec50(&rbx_1[4], &rdi_1[0x18])
        int64_t rax_58 = *(rdi_1 + 0x98)
        rdi_1 = &rdi_1[0xa8]
        rbx_1[0x14] = rax_58
        rbx_1 = &rbx_1[0x15]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x2cc) = 0

arg1[0x5a].d = *(arg2 + 0x2d0)
*(arg1 + 0x2d4) = *(arg2 + 0x2d4)
arg1[0x5b].d = *(arg2 + 0x2d8)
*(arg1 + 0x2dc) = *(arg2 + 0x2dc)
arg1[0x5c].d = *(arg2 + 0x2e0)
sub_141adec50(&arg1[0x5d], arg2 + 0x2e8)
arg1[0x6d] = *(arg2 + 0x368)
arg1[0x6e] = 0
int64_t rdi_2 = sx.q(*(arg2 + 0x378))
int64_t rbp = *(arg2 + 0x370)
arg1[0x6f].d = rdi_2.d

if (rdi_2.d != 0)
    sub_1405c4a00(&arg1[0x6e], rdi_2.d, 0)
    memcpy(arg1[0x6e], rbp, (rdi_2 << 3).d)
else
    *(arg1 + 0x37c) = 0

arg1[0x70] = 0
int64_t rbp_1 = sx.q(*(arg2 + 0x388))
int64_t r15 = *(arg2 + 0x380)
arg1[0x71].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a00(&arg1[0x70], rbp_1.d, 0)
    memcpy(arg1[0x70], r15, (rbp_1 << 3).d)
else
    *(arg1 + 0x38c) = 0

arg1[0x72] = 0
int64_t rdi_3 = sx.q(*(arg2 + 0x398))
int64_t rsi_1 = *(arg2 + 0x390)
arg1[0x73].d = rdi_3.d

if (rdi_3.d != 0)
    sub_1405c4a00(&arg1[0x72], rdi_3.d, 0)
    memcpy(arg1[0x72], rsi_1, (rdi_3 << 3).d)
else
    *(arg1 + 0x39c) = 0

return arg1
