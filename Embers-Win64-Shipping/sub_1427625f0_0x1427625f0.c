// 函数: sub_1427625f0
// 地址: 0x1427625f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r10 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r10

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r10[rcx]
        rdx += 1
    while (r8 s>= rax_1)

float zmm5[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t r10_2 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
*(arg1 + 0x10) = &rax[2]
int32_t result = *(arg1 + 0x44)
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float (* r10_3)[0x4] = r10_2 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t r11_1 = zx.q(result)
    uint64_t i
    
    do
        float (* r8_1)[0x4] = r10_3
        r10_3 = &r10_3[1]
        int32_t rcx_4 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        float zmm0[0x4] = rcx_4 u>> 9 | 0x3f800000
        zmm0[0] = zmm0[0] - 1f
        int64_t zmm2 = zmm0[0].q
        int64_t zmm1
        zmm1.d = ((rcx_4 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
        float zmm3[0x4] =
            ((rcx_4 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
        zmm3[0] = zmm3[0] - 1f
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, zmm2)
        *(arg1 + 0x8c) =
            ((rcx_4 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
        result = (((rcx_4 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
            + 0x3619636b) u>> 9 | 0x3f800000
        float result_1[0x4] = result
        result_1[0] = result_1[0] - 1f
        *r8_1 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(result_1, zmm1), temp0_1[0].q), temp0)
        i = r11_1
        r11_1 -= 1
    while (i != 1)

return result
