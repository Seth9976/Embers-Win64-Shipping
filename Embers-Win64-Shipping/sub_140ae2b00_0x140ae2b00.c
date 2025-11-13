// 函数: sub_140ae2b00
// 地址: 0x140ae2b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    int32_t rax = data_143dbb200
    *(arg2 + 0xc) = data_143dbb1f8.q
    *(arg2 + 0x14) = rax
    *arg2 = *(arg2 + 0xc)
    arg2[1].d = rax
    arg2[3].b = 0
    return arg2

float zmm2[0x4] = *(arg1 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*arg1, (*(arg1 + 8)).q)
uint128_t zmm0 = *(arg1 + 0x14)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(arg1[1].d, 0)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0xc), zmm0.q), temp0_3[0].q)
float temp0_6[0x4] = _mm_add_ps(temp0_5, temp0_2)
float temp0_7[0x4] = _mm_sub_ps(temp0_5, temp0_2)
float temp0_8[0x4] = __mulps_xmmps_memps(temp0_6, data_142e6d9f0)
float temp0_9[0x4] = __mulps_xmmps_memps(temp0_7, data_142e6d9f0)
zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_8, temp0_8, 0), *arg3)
float temp0_13[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_8, temp0_8, 0x55), arg3[1])
float temp0_15[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_9, temp0_9, 0x55), arg3[1])
float temp0_16[0x4] = _mm_add_ps(temp0_13, zmm0)
float temp0_18[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_8, temp0_8, 0xaa), arg3[2])
zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_9, temp0_9, 0), *arg3)
float temp0_21[0x4] = _mm_add_ps(temp0_16, temp0_18)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xaa)
float zmm1[0x4] = data_143dbb000
float temp0_23[0x4] = __mulps_xmmps_memps(temp0_22, arg3[2])
float zmm6[0x4] = _mm_and_ps(temp0_15, zmm1)
zmm0 = _mm_and_ps(zmm0, zmm1)
float temp0_26[0x4] = __addps_xmmps_memps(temp0_21, arg3[3])
float temp0_29[0x4] = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_and_ps(temp0_23, zmm1))
float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_29)
float temp0_31[0x4] = _mm_add_ps(temp0_29, temp0_26)
zmm0 = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xe1)
temp0_34[0] = zmm0.d
float temp0_35[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc6)
temp0_36[0] = temp0_33[0]
float temp0_37[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
temp0_38[0] = temp0_31[0]
zmm0 = _mm_unpacklo_ps(temp0_35, temp0_37[0].q)
*arg2 = _mm_shuffle_ps(temp0_38, temp0_38, 0x39)
arg2[2] = zmm0.q
arg2[3].d = 1.d
return arg2
