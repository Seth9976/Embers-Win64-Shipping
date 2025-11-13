// 函数: sub_1400f4c50
// 地址: 0x1400f4c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_18[0x4] = zmm7
float zmm6[0x4]
float var_28[0x4] = zmm6

if (arg3 s< 2)
    return 

int128_t* r9_1 = &arg1[3]
int64_t i = 1
float zmm0[0x4] = data_142d3f7c0
float zmm1[0x4] = data_142d3f7d0
float zmm2[0x4] = data_142d3f7b0

do
    float zmm3[0x4] = *r9_1
    float zmm4[0x4] = arg1[sx.q(*(arg2 + (i << 2))) * 3]
    float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm3)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_7[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_3), zmm0), temp0_2)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_12[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm3, zmm3, 1), temp0_8), zmm1), temp0_7)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    *r9_1 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xb1), temp0_13), zmm2), 
        temp0_12)
    i += 1
    r9_1 = &r9_1[3]
while (zx.q(arg3) != i)
