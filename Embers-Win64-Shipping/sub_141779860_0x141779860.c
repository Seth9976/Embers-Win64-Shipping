// 函数: sub_141779860
// 地址: 0x141779860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg1
float zmm6[0x4] = data_143ef7c40
float temp0[0x4] = _mm_mul_ps(zmm5, zmm5)
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(zmm6, temp0_4)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_14[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
float temp0_16[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_4, 2)
float zmm0[0x4] = 0xbf800000
zmm6 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm5) ^ data_143ef7c30, 
    temp0_16) ^ data_143ef7c30
float var_28 = zmm6[0]
float temp0_21[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)

if (not(temp0_21[0] < -1f))
    zmm0 = __minss_xmmss_memss(temp0_21[0], 0x3f800000)

int128_t result = acosf(zmm0[0])
result.d = result.d f+ result.d

if (not(result.d f<= 3.14159274f))
    result.d = result.d f+ -6.28318548f

if (var_28[0] >= 0f)
    return result

return result ^ data_142d3f780
