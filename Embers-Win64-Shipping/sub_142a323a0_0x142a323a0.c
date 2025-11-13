// 函数: sub_142a323a0
// 地址: 0x142a323a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm5[0x8]
zmm5[0].o = zx.o(0)
int32_t rax = 0
int64_t zmm6[0x4] = zmm5
int64_t zmm7[0x4] = zmm5
int64_t zmm1[0x4]
int16_t zmm2[0x10]
uint32_t zmm4[0x8]

if (arg3 s> 0)
    int64_t r9 = 0
    
    do
        zmm2 = *(arg1 + (r9 << 1))
        zmm1 = _mm256_sub_epi16(*(arg2 + (r9 << 1)), zmm2)
        int64_t zmm3[0x4] = _mm256_madd_epi16(zmm1, zmm1)
        int16_t zmm0[0x10] = _mm256_unpacklo_epi32(zmm3, zmm5)
        zmm4 = _mm256_madd_epi16(zmm2, zmm2)
        int64_t temp0_5[0x4] = _mm256_add_epi64(zmm0, zmm6)
        zmm2 = _mm256_unpackhi_epi32(zmm3, zmm5)
        rax += 0x10
        zmm0 = _mm256_unpacklo_epi32(zmm4, zmm5)
        zmm6 = _mm256_add_epi64(temp0_5, zmm2)
        r9 = sx.q(rax)
        zmm7 = _mm256_add_epi64(_mm256_add_epi64(zmm0, zmm7), _mm256_unpackhi_epi32(zmm4, zmm5))
    while (r9 s< arg3)

zmm1 = _mm256_srli_si256(zmm7, 8)
zmm4 = _mm256_add_epi64(zmm1, zmm7)
int64_t temp0_15[0x4] = _mm256_add_epi64(_mm256_srli_si256(zmm6, 8), zmm6)
zmm2[0].o = _mm256_extractf128_ps(temp0_15[0].o, 1)
zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_15[0].o)
temp0_15[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
int64_t result = zmm1[0]
zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(temp0_15[0].o, zmm4[0].o)
*arg4 = zmm1[0]
_mm256_zeroupper()
return result
