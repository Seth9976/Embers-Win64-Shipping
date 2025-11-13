// 函数: sub_14275f5f0
// 地址: 0x14275f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint32_t r10 = 0
int32_t r9 = *(arg1 + 0x80)
uint32_t r11 = zx.d(*rax)
uint64_t result = &rax[2]
*(arg1 + 0x10) = &rax[1]
int32_t r9_1 = *(arg1 + 0x40)
*(arg1 + 0x10) = result
int32_t* r11_2 = zx.q(r11 * r9) + *(arg1 + 0x70)
int32_t* r8_3 = zx.q(zx.d(rax[1]) * r9) + *(arg1 + 0x70)

if (r9_1 s>= 4)
    uint64_t rax_3 = zx.q(((r9_1 - 4) u>> 2) + 1)
    uint64_t i_2 = zx.q(rax_3.d)
    r10 = (rax_3 << 2).d
    uint64_t i
    
    do
        void* rdx_1 = &r8_3[3]
        int32_t rax_4 = *(arg1 + 0x8c) * 0xbb38435
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*r11_2))
        *(arg1 + 0x8c) = rax_4 + 0x3619636b
        *r8_3 = int.d((((rax_4 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        int32_t rax_9 = *(arg1 + 0x8c) * 0xbb38435
        zmm0 = _mm_cvtepi32_ps(zx.o(r11_2[1]))
        *(arg1 + 0x8c) = rax_9 + 0x3619636b
        r8_3[1] = int.d((((rax_9 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        int32_t rax_14 = *(arg1 + 0x8c) * 0xbb38435
        zmm0 = _mm_cvtepi32_ps(zx.o(r11_2[2]))
        *(arg1 + 0x8c) = rax_14 + 0x3619636b
        r8_3[2] = int.d((((rax_14 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        r8_3 = rdx_1 + 4
        int32_t rcx_3 = r11_2[3]
        r11_2 = &r11_2[4]
        int32_t rax_20 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x8c) = rax_20
        result = zx.q(int.d(((rax_20 u>> 9 | 0x3f800000) - 1f) f* _mm_cvtepi32_ps(zx.o(rcx_3)).d))
        *rdx_1 = result.d
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r10 s< r9_1)
    uint64_t i_3 = zx.q(r9_1 - r10)
    uint64_t i_1
    
    do
        int32_t* rdx_2 = r8_3
        int32_t rcx_4 = *r11_2
        r8_3 = &r8_3[1]
        r11_2 = &r11_2[1]
        int32_t rax_24 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x8c) = rax_24
        result = zx.q(int.d(((rax_24 u>> 9 | 0x3f800000) - 1f) f* _mm_cvtepi32_ps(zx.o(rcx_4)).d))
        *rdx_2 = result.d
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
