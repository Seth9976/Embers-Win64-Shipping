// 函数: sub_1424e3130
// 地址: 0x1424e3130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg2[2]
float zmm3[0x4] = data_143f65bc0
uint32_t zmm9[0x4] = data_143f65b80
float zmm0[0x4]
uint32_t zmm1[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm2, zmm9), 1)) == 0)
    zmm1 = data_143dbb0d0
    *arg1 = data_143dbb0c0
    zmm0 = data_143dbb0e0
    arg1[1] = zmm1
    arg1[2] = zmm0
    return arg1

zmm0 = data_143f65c20
float zmm5[0x4] = arg2[1]
float temp0_3[0x4] = __mulps_xmmps_memps(*arg2, data_143f65bd0)
zmm0[0].q = zmm2 u>> 0x40
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm0, 0xc4)
zmm1 = _mm_rcp_ps(temp0_4)
uint32_t temp0_6[0x4] = _mm_and_ps(zmm9, temp0_4)
*arg1 = temp0_3
float temp0_7[0x4] = _mm_mul_ps(zmm1, zmm1)
zmm1 = _mm_add_ps(zmm1, zmm1)
zmm9 = _mm_cmpeq_ps(temp0_6, zmm3, 2)
float temp0_10[0x4] = _mm_mul_ps(temp0_7, temp0_4)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
zmm1 = _mm_sub_ps(zmm1, temp0_10)
float temp0_13[0x4] = _mm_mul_ps(zmm1, zmm1)
zmm1 = _mm_add_ps(zmm1, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_4)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
zmm1 = _mm_sub_ps(zmm1, temp0_15)
uint32_t temp0_20[0x4] =
    __andps_xmmxud_memxud(_mm_and_ps(zmm9, zx.o(0) ^ zmm1) ^ zmm1, data_143f65be0)
float temp0_21[0x4] = _mm_mul_ps(zmm5, temp0_20)
arg1[2] = temp0_20
float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_11)
float temp0_26[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), temp0_16), temp0_23)
float temp0_27[0x4] = _mm_add_ps(temp0_26, temp0_26)
float temp0_28[0x4] = _mm_mul_ps(temp0_17, temp0_27)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), temp0_16)
float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_21)
arg1[1] = __andps_xmmxud_memxud(
    _mm_sub_ps(zx.o(0), 
        _mm_add_ps(
            _mm_sub_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), temp0_11)), 
            temp0_31)), 
    data_143f65be0)
return arg1
