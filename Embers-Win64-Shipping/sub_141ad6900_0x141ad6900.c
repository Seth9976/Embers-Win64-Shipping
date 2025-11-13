// 函数: sub_141ad6900
// 地址: 0x141ad6900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(arg2)
uint128_t zmm0
float zmm5[0x4]
float zmm6[0x4]

if (arg2 == 0)
    zmm5 = *arg4
    zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, (*(arg3 + 8)).q), 
        _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q)
else
    if (r10 == 1)
        *arg1 = *arg3
        arg1[1].d = *(arg3 + 8)
        return arg1
    
    if (r10 != 2)
        *arg1 = data_143dbb1f8.q
        arg1[1].d = data_143dbb200
        return arg1
    
    zmm0 = *(arg3 + 8)
    float temp0_1[0x4] = __mulps_xmmps_memps(*arg4, data_143f2b8e0)
    float temp0_4[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, zmm0.q), _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    float temp0_10[0x4] = _mm_mul_ps(temp0_8, temp0_9)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    float temp0_12[0x4] = _mm_sub_ps(temp0_10, zmm0)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_5)
    float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_4)
    float temp0_21[0x4] = _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_9), zmm0), temp0_17)
    zmm5 = *arg5
    zmm0 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
    zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_21, zmm0.q), _mm_unpacklo_ps(temp0_23, 0)[0].q)

float temp0_30[0x4] = __mulps_xmmps_memps(zmm5, data_143f2b8e0)
zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_32[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_33)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc9)
float temp0_36[0x4] = _mm_mul_ps(temp0_32, temp0_35)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xff)
float temp0_38[0x4] = _mm_sub_ps(temp0_36, zmm0)
float temp0_39[0x4] = _mm_add_ps(temp0_38, temp0_38)
float temp0_40[0x4] = _mm_mul_ps(temp0_37, temp0_39)
zmm0 = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
float temp0_42[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_33)
float temp0_44[0x4] = _mm_mul_ps(temp0_42, temp0_35)
float temp0_45[0x4] = _mm_add_ps(temp0_40, zmm6)
float temp0_47[0x4] = _mm_add_ps(_mm_sub_ps(temp0_44, zmm0), temp0_45)
*arg1 = temp0_47[0]
zmm0 = _mm_shuffle_ps(temp0_47, temp0_47, 0x55)
arg1[1].d = _mm_shuffle_ps(temp0_47, temp0_47, 0xaa)[0]
*(arg1 + 4) = zmm0.d
return arg1
