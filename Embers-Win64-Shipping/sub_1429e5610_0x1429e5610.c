// 函数: sub_1429e5610
// 地址: 0x1429e5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t r10 = sx.q(*(arg1 + 0x368) * arg4 + arg5)
int64_t* r11 = *(arg1 + 0x408) + (r10 << 3)
*(arg2 + 0x1a8) = r11
int32_t r10_1 = 0
*r11 = r10 * 0x44 + *(arg1 + 0x3d0)
***(arg2 + 0x1a8) = arg3

if (arg9 s> 0)
    do
        int32_t rax_7
        rax_7.b = r10_1 == 0
        
        while (rax_7 s< arg8)
            int64_t* r9 = *(arg2 + 0x1a8)
            int32_t rcx_3 = *(arg1 + 0x368) * r10_1 + rax_7
            rax_7 += 1
            r9[sx.q(rcx_3)] = *r9
        
        r10_1 += 1
    while (r10_1 s< arg9)

void* rdx = arg2 + 8
int64_t i_1 = 3
int64_t i

do
    char rcx_5 = (*rdx).b
    rdx += 0x80
    char rcx_6 = (*(rdx - 0x7c)).b
    *(rdx - 0x18) = ((arg6 * 2) s>> rcx_5).w
    *(rdx - 0x16) = ((arg7 * 2) s>> rcx_6).w
    *(rdx - 0x14) = arg10 - *(rdx - 0x80)
    *(rdx - 0x13) = arg11 - rcx_6
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t r8_1 = sx.q(arg5 * 2)
char rcx_8 = *(arg2 + 0xc)
uint64_t rdx_2 = zx.q(arg4 * 2) & 0xf
*(arg2 + 0x40) = (r8_1 s>> *(arg2 + 8)) + *(arg2 + 0x200)
*(arg2 + 0x48) = (zx.q(rdx_2.d) s>> rcx_8) + 0x218 + arg2
*(arg2 + 0xc0) = (r8_1 s>> *(arg2 + 0x88)) + *(arg2 + 0x208)
*(arg2 + 0xc8) = (zx.q(rdx_2.d) s>> *(arg2 + 0x8c)) + 0x228 + arg2
*(arg2 + 0x140) = (r8_1 s>> *(arg2 + 0x108)) + *(arg2 + 0x210)
*(arg2 + 0x148) = arg2 + 0x238 + (rdx_2 s>> *(arg2 + 0x10c))
int32_t rdx_5 = *(arg1 + 0x364) - arg5
int32_t rcx_14 = *(arg1 + 0x35c) - arg4
*(arg2 + 0x1d8) = neg.d(arg4) << 6
*(arg2 + 0x1dc) = (rcx_14 - arg7) << 6
*(arg2 + 0x1d0) = neg.d(arg5) << 6
*(arg2 + 0x1d4) = (rdx_5 - arg6) << 6
int64_t rcx_19

if (arg4 == 0)
    rcx_19 = 0
else
    rcx_19 = *(*(arg2 + 0x1a8) - (sx.q(*(arg2 + 0x1a0)) << 3))

*(arg2 + 0x1b8) = rcx_19

if (arg5 s> *(arg2 + 0x198))
    rsi = *(*(arg2 + 0x1a8) - 8)

*(arg2 + 0x1b0) = rsi
sub_142a28ab0(arg2, *(arg1 + 0x4578) + 0x70 + sx.q(*(arg1 + 0x330)) * 0xd0, zx.q(arg4), arg5)
return **(arg2 + 0x1a8)
