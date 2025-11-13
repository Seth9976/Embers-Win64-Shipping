// 函数: sub_141c3c9b0
// 地址: 0x141c3c9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = zx.o(0)
uint128_t zmm8 = zx.o(*arg4)
uint128_t zmm9 = zx.o(arg4[1])
uint128_t zmm10 = zx.o(*arg5)
float zmm11[0x4] = zx.o(arg5[1])
zmm8 = _mm_shuffle_pd(zmm8, zmm8, 0)
zmm10 = _mm_shuffle_pd(zmm10, zmm10, 0)
zmm9 = _mm_shuffle_pd(zmm9, zmm9, 0)
zmm10 = _mm_sub_ps(zmm10, zmm8)
float temp0_5[0x4] = _mm_sub_ps(_mm_shuffle_pd(zmm11, zmm11, 0), zmm9)
result[0] = float.s(arg3)
result[0] = result[0] * 0.5f
float result_1[0x4] = result
result = data_142f5cd50
float temp0_6[0x4] = _mm_shuffle_ps(result_1, result_1, 0)
zmm10 = _mm_div_ps(zmm10, temp0_6)
float temp0_8[0x4] = _mm_div_ps(temp0_5, temp0_6)
zmm8 = _mm_add_ps(zmm8, _mm_mul_ps(result, zmm10))
result = __mulps_xmmps_memps(temp0_8, data_142f5cd50)
zmm9 = _mm_add_ps(zmm9, result)

if (arg3 s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    void* rcx = arg1 + 0xc
    uint64_t i_1 = zx.q(((arg3 - 1) u>> 1) + 1)
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    uint64_t i
    
    do
        result_1 = *(rcx - 0xc)
        zmm6 = *(rcx - 8)
        int64_t zmm5 = *rcx
        result = *(rcx - 4)
        float temp0_13[0x4] = _mm_unpacklo_ps(result_1, result[0].q)
        float temp0_14[0x4] = _mm_unpacklo_ps(zmm6, zmm5)
        rcx += 0x10
        float temp0_15[0x4] = _mm_unpacklo_ps(zmm6, zmm5)
        float temp0_18[0x4] =
            _mm_mul_ps(_mm_unpacklo_ps(temp0_13, _mm_unpacklo_ps(result_1, result[0].q)[0].q), zmm8)
        zmm8 = _mm_add_ps(zmm8, zmm10)
        float temp0_21[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_14, temp0_15[0].q), zmm9)
        zmm9 = _mm_add_ps(zmm9, temp0_8)
        *arg2 = _mm_add_ps(temp0_18, temp0_21)
        arg2 = &arg2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
