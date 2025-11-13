// 函数: sub_1400f4d10
// 地址: 0x1400f4d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_18[0x4] = zmm8
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm6[0x4]
float var_38[0x4] = zmm6
int32_t i = arg3 - 1

if (i s<= 0)
    return 

int64_t i_1 = sx.q(i)
int32_t* r10_1 = arg2 + (i_1 << 2)
int128_t* rdx_2 = &arg1[i_1 * 3]
zmm8 = data_142d3f690
float zmm1[0x4] = data_142d3f7c0
float zmm2[0x4] = data_142d3f7d0
float zmm3[0x4] = data_142d3f7b0

do
    float zmm0[0x4] = *rdx_2
    float temp0_1[0x4] = _mm_mul_ps(arg1[sx.q(*r10_1) * 3], zmm8)
    float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0xff), zmm0)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0)
    float temp0_8[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_4), zmm1), temp0_3)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x55)
    float temp0_13[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_9), zmm2), temp0_8)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xaa)
    *rdx_2 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_14), zmm3), 
        temp0_13)
    i -= 1
    r10_1 = &r10_1[-1]
    rdx_2 = &rdx_2[-3]
while (i s> 0)
