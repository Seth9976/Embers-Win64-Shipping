// 函数: sub_14177dea0
// 地址: 0x14177dea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rcx = *(*(arg1 + 0xa0) + (rdi << 3))

if (rcx != 0)
    j_sub_140a74f90(rcx)
    *(*(arg1 + 0xa0) + (rdi << 3)) = 0

int32_t rdx_1 = *(arg1 + 0x88)
int32_t rcx_3 = rdx_1 - rdi.d - 1

if (rcx_3 s>= 1)
    rcx_3 = 1

if (rcx_3 != 0)
    memcpy((rdi << 4) + *(arg1 + 0x80), (sx.q(rdx_1 - rcx_3) << 4) + *(arg1 + 0x80), rcx_3 << 4)
    rdx_1 = *(arg1 + 0x88)

*(arg1 + 0x88) = rdx_1 - 1
sub_1405a5010(arg1 + 0x80)
int32_t rdx_6 = *(arg1 + 0x68)
int32_t rcx_10 = rdx_6 - rdi.d - 1

if (rcx_10 s>= 1)
    rcx_10 = 1

if (rcx_10 != 0)
    memcpy(rdi * 0xc0 + *(arg1 + 0x60), sx.q(rdx_6 - rcx_10) * 0xc0 + *(arg1 + 0x60), rcx_10 * 0xc0)
    rdx_6 = *(arg1 + 0x68)

*(arg1 + 0x68) = rdx_6 - 1
sub_14177e920(arg1 + 0x60)
int32_t rdx_11 = *(arg1 + 0x78)
int32_t rcx_17 = rdx_11 - rdi.d - 1

if (rcx_17 s>= 1)
    rcx_17 = 1

if (rcx_17 != 0)
    memcpy(rdi * 0x60 + *(arg1 + 0x70), sx.q(rdx_11 - rcx_17) * 0x60 + *(arg1 + 0x70), 
        rcx_17 * 0x60)
    rdx_11 = *(arg1 + 0x78)

*(arg1 + 0x78) = rdx_11 - 1
sub_140d3e820(arg1 + 0x70)
int32_t r10 = *(arg1 + 0x98)
int32_t rdx_18 = r10 - rdi.d - 1

if (rdx_18 s>= 1)
    rdx_18 = 1

if (rdx_18 != 0)
    int64_t r9_1 = *(arg1 + 0x90)
    memcpy(r9_1 + rdi * 0xc, r9_1 + sx.q(r10 - rdx_18) * 0xc, rdx_18 * 0xc)
    r10 = *(arg1 + 0x98)

*(arg1 + 0x98) = r10 - 1
sub_140775970(arg1 + 0x90)
int32_t rdx_21 = *(arg1 + 0xa8)
int32_t rax_15 = rdx_21 - rdi.d - 1

if (rax_15 s>= 1)
    rax_15 = 1

if (rax_15 != 0)
    int64_t rcx_24 = *(arg1 + 0xa0)
    memcpy(rcx_24 + (rdi << 3), rcx_24 + (sx.q(rdx_21 - rax_15) << 3), rax_15 << 3)
    rdx_21 = *(arg1 + 0xa8)

*(arg1 + 0xa8) = rdx_21 - 1
int64_t result = sub_1405c53d0(arg1 + 0xa0)

if (rdi.d s< *(arg1 + 0xa8))
    result = *(arg1 + 0xa0)
    **(result + (rdi << 3)) = rdi.d

return result
