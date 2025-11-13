// 函数: sub_14275f7e0
// 地址: 0x14275f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint32_t r11 = 0
int32_t r9 = 0
uint32_t rdx = zx.d(*rax)
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rcx = rdx
int32_t rax_1 = *r10

if (rdx s>= rax_1)
    int64_t rdx_1 = 0
    
    do
        rcx -= rax_1
        rdx_1 += 1
        rax_1 = r10[rdx_1]
        r9 += 1
    while (rcx s>= rax_1)

int32_t r9_1 = *(arg1 + 0x40)
int32_t rdi = *(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r9) << 3)))
void* result = &rax[2]
uint64_t rdx_4 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
*(arg1 + 0x10) = result
int32_t* rdx_5 = rdx_4 + *(arg1 + 0x70)
uint128_t zmm2

if (r9_1 s>= 4)
    uint64_t rax_6 = zx.q(((r9_1 - 4) u>> 2) + 1)
    zmm2 = _mm_cvtepi32_ps(zx.o(rdi))
    uint64_t i_3 = zx.q(rax_6.d)
    r11 = (rax_6 << 2).d
    uint64_t i
    
    do
        void* rcx_3 = &rdx_5[3]
        int32_t rax_8 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x8c) = rax_8
        *rdx_5 = int.d(((rax_8 u>> 9 | 0x3f800000) - 1f) f* zmm2.d)
        int32_t rax_13 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x8c) = rax_13
        rdx_5[1] = int.d(((rax_13 u>> 9 | 0x3f800000) - 1f) f* zmm2.d)
        int32_t rax_18 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x8c) = rax_18
        rdx_5[2] = int.d(((rax_18 u>> 9 | 0x3f800000) - 1f) f* zmm2.d)
        rdx_5 = rcx_3 + 4
        int32_t rax_23 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x8c) = rax_23
        result = zx.q(int.d(((rax_23 u>> 9 | 0x3f800000) - 1f) f* zmm2.d))
        *rcx_3 = result.d
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r11 s< r9_1)
    uint64_t i_2 = zx.q(r9_1 - r11)
    zmm2 = _mm_cvtepi32_ps(zx.o(rdi))
    uint64_t i_1
    
    do
        int32_t* rcx_4 = rdx_5
        rdx_5 = &rdx_5[1]
        int32_t rax_27 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x8c) = rax_27
        result = zx.q(int.d(((rax_27 u>> 9 | 0x3f800000) - 1f) f* zmm2.d))
        *rcx_4 = result.d
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
