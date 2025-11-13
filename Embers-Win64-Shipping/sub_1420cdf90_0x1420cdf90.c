// 函数: sub_1420cdf90
// 地址: 0x1420cdf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
zmm3[0] = zmm3[0] f- *arg3
float zmm0[0x4] = *(arg2 + 8)
zmm0[0] = zmm0[0] f- arg3[2]
float zmm2[0x4] = *(arg2 + 4)
zmm2[0] = zmm2[0] f- arg3[1]
uint32_t zmm5[0x4] = data_143f47e10
float temp0[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
arg1[2] = zmm0[0]
arg1[1] = zmm2[0]
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
zmm2 = data_143f47e40
*arg1 = zmm3[0]
float zmm7[0x4] = data_143f47e30
float temp0_3[0x4] = _mm_div_ps(temp0_2, zmm7)
uint32_t temp0_4[0x4] = _mm_and_ps(zmm5, zmm7)
float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3))
float temp0_11[0x4] = _mm_sub_ps(temp0_2, 
    _mm_mul_ps(
        _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_3, data_143f47e10), 2), 
            temp0_6 ^ temp0_3) ^ temp0_6, 
        zmm7))
float temp0_14[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_4), _mm_min_ps(temp0_11, temp0_4))
float temp0_15[0x4] = _mm_add_ps(zmm7, temp0_14)
float zmm8[0x4] = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_14, 2), temp0_15 ^ temp0_14) ^ temp0_15
float temp0_18[0x4] = _mm_cmpeq_ps(data_143f47e20, zmm8, 1)
float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, temp0_18) ^ zmm8
*arg1 = zmm1[0]
float temp0_21[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
arg1[2] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
arg1[1] = temp0_21[0]
return arg1
