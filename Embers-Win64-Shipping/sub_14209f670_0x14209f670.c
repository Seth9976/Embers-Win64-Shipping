// 函数: sub_14209f670
// 地址: 0x14209f670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)

if (rbx_1.d s>= *(arg1 + 0x78))
    return 

int32_t rcx = *(arg1 + 0x78)
int32_t rdx_1 = rcx - rbx_1.d
int64_t rbp_1 = rbx_1 * 0x2c
int64_t rsi_1 = sx.q((rbx_1 + 1).d)

if (rdx_1 != 1)
    int64_t rcx_1 = *(arg1 + 0x70)
    memmove(rcx_1 + rbp_1, rsi_1 * 0x2c + rcx_1, (rdx_1 - 1) * 0x2c)
    rcx = *(arg1 + 0x78)

*(arg1 + 0x78) = rcx - 1
sub_141febab0(arg1 + 0x70)
int32_t rcx_4 = *(arg1 + 0x90)
int32_t rax_5 = rcx_4 - rbx_1.d

if (rax_5 != 1)
    int64_t rcx_5 = *(arg1 + 0x88)
    memmove(rcx_5 + rbp_1, rsi_1 * 0x2c + rcx_5, (rax_5 - 1) * 0x2c)
    rcx_4 = *(arg1 + 0x90)

*(arg1 + 0x90) = rcx_4 - 1
sub_141febab0(arg1 + 0x88)
int32_t rcx_8 = *(arg1 + 0xa8)
int32_t rax_10 = rcx_8 - rbx_1.d

if (rax_10 != 1)
    int64_t r9_1 = *(arg1 + 0xa0)
    memmove(r9_1 + rbx_1 * 0xc, r9_1 + rsi_1 * 0xc, (rax_10 - 1) * 0xc)
    rcx_8 = *(arg1 + 0xa8)

*(arg1 + 0xa8) = rcx_8 - 1
sub_140775970(arg1 + 0xa0)
sub_141f55fe0(arg1 + 0x70, *(arg1 + 0xb8), 1)
sub_141f55fe0(arg1 + 0x88, *(arg1 + 0xbc), 1)
