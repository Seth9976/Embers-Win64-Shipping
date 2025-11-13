// 函数: sub_140ad8030
// 地址: 0x140ad8030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg3
float zmm5[0x4] = arg1[1]
float zmm8[0x4] = arg1[2]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_1[0x4] = _mm_rcp_ps(zmm8)
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_3[0x4] = _mm_mul_ps(temp0_1, temp0_1)
float temp0_6[0x4] = _mm_sub_ps(_mm_add_ps(temp0_1, temp0_1), _mm_mul_ps(temp0_3, zmm8))
float temp0_7[0x4] = _mm_mul_ps(temp0_6, temp0_6)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_6)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm8)
float temp0_11[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm8, data_143dbb000), data_143dbb030, 2)
float temp0_12[0x4] = _mm_sub_ps(temp0_8, temp0_9)
zmm8 = _mm_and_ps(temp0_11, zx.o(0) ^ temp0_12)
float temp0_14[0x4] = __mulps_xmmps_memps(*arg1, data_143dbb040)
float temp0_16[0x4] =
    __mulps_xmmps_memps(__andps_xmmxud_memxud(zmm8 ^ temp0_12, data_143dbb020), arg3[2])
float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_19[0x4] = _mm_mul_ps(temp0, _mm_shuffle_ps(temp0_14, temp0_14, 0x1b))
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_14)
float temp0_22[0x4] = __mulps_xmmps_memps(temp0_19, data_143dbb110)
float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
arg2[2] = temp0_16
float temp0_24[0x4] = _mm_add_ps(temp0_22, temp0_21)
float temp0_26[0x4] = _mm_mul_ps(temp0_17, _mm_shuffle_ps(temp0_14, temp0_14, 0x4e))
float temp0_28[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_14, temp0_14, 0xb1))
float temp0_29[0x4] = __mulps_xmmps_memps(temp0_26, data_143dbb100)
float temp0_30[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_31[0x4] = __mulps_xmmps_memps(temp0_28, data_143dbb0f0)
float temp0_33[0x4] = _mm_add_ps(_mm_add_ps(temp0_24, temp0_29), temp0_31)
*arg2 = temp0_33
float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
float temp0_36[0x4] = _mm_mul_ps(temp0_30, temp0_34)
float temp0_38[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_2, temp0_35), temp0_36)
float temp0_39[0x4] = _mm_add_ps(temp0_38, temp0_38)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd2), temp0_35)
float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc9), temp0_34)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xff), temp0_39)
float temp0_46[0x4] = _mm_sub_ps(temp0_41, temp0_43)
arg2[1] = __andps_xmmxud_memxud(
    _mm_sub_ps(arg3[1], _mm_mul_ps(_mm_add_ps(temp0_46, _mm_add_ps(temp0_45, zmm5)), temp0_16)), 
    data_143dbb020)
return arg2
