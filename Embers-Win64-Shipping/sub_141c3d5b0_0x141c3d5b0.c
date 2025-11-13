// 函数: sub_141c3d5b0
// 地址: 0x141c3d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = zx.o(*arg3)
int64_t r11 = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
int64_t r10 = *arg1
float zmm6[0x4] = zx.o(*arg4)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
zmm5 = _mm_shuffle_pd(zmm5, zmm5, 0)
int64_t r8 = sx.q(result.d)
zmm6 = _mm_sub_ps(_mm_shuffle_pd(zmm6, zmm6, 0), zmm5)
float zmm1[0x4] = _mm_cvtepi32_ps(zx.o(result.d))
uint128_t zmm0 = data_142f5cd50
zmm1[0] = zmm1[0] * 0.5f
zmm6 = _mm_div_ps(zmm6, _mm_shuffle_ps(zmm1, zmm1, 0))
zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(zmm0, zmm6))

if (result.d s> 0)
    int64_t rcx = 0
    int32_t result_1 = 0
    
    do
        float zmm3[0x4] = *(r10 + (rcx << 2))
        zmm0 = *(r10 + (rcx << 2) + 4)
        result = sx.q(result_1)
        result_1 += 4
        rcx += 2
        float zmm4[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), _mm_unpacklo_ps(zmm3, zmm0.q)[0].q), 
            zmm5)
        zmm5 = _mm_add_ps(zmm5, zmm6)
        *(r11 + (result << 2)) = zmm4
    while (rcx s< r8)

return result
