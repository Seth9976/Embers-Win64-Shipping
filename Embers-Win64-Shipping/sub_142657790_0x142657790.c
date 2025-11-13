// 函数: sub_142657790
// 地址: 0x142657790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(*(arg1 + 0xa0) + 0x130)
int128_t* r8_1

if (r8 == 0)
    r8_1 = &data_143dbb0c0
else
    r8_1 = r8 + 0x1c0

float zmm5[0x4] = *r8_1
float temp0_3[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x110), (*(arg1 + 0x118))[0].q), 
        _mm_unpacklo_ps(*(arg1 + 0x114), 0)[0].q), 
    r8_1[2])
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_5)
float temp0_11[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4), temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_4)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_5)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_21[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_16, temp0_17), temp0_18), r8_1[1])
*arg2 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
arg2[1] = temp0_22[0]
return arg2
