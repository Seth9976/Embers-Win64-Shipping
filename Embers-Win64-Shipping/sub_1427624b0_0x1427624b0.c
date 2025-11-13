// 函数: sub_1427624b0
// 地址: 0x1427624b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint64_t rbx_1 = zx.q(zx.d(*rax) * r9)
*(arg1 + 0x10) = &rax[1]
uint64_t r9_1 = zx.q(r9 * zx.d(rax[1]))
*(arg1 + 0x10) = &rax[2]
int128_t* rbx_2 = rbx_1 + *(arg1 + 0x70)
int32_t result = *(arg1 + 0x44)
float (* r9_2)[0x4] = r9_1 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t r10_1 = zx.q(result)
    uint64_t i
    
    do
        float (* r8_1)[0x4] = r9_2
        float zmm5[0x4] = *rbx_2
        r9_2 = &r9_2[1]
        rbx_2 = &rbx_2[1]
        int32_t rcx_1 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
        float zmm0[0x4] = rcx_1 u>> 9 | 0x3f800000
        zmm0[0] = zmm0[0] - 1f
        int64_t zmm2 = zmm0[0].q
        int64_t zmm1
        zmm1.d = ((rcx_1 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
        float zmm3[0x4] =
            ((rcx_1 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
        zmm3[0] = zmm3[0] - 1f
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, zmm2)
        *(arg1 + 0x8c) =
            ((rcx_1 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
        result = (((rcx_1 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
            + 0x3619636b) u>> 9 | 0x3f800000
        float result_1[0x4] = result
        result_1[0] = result_1[0] - 1f
        *r8_1 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(result_1, zmm1), temp0_1[0].q), zmm5)
        i = r10_1
        r10_1 -= 1
    while (i != 1)

return result
