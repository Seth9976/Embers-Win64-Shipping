// 函数: sub_140ae0920
// 地址: 0x140ae0920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = arg1[1]
float zmm7[0x4] = arg2[2]
float temp0[0x4] = _mm_rcp_ps(zmm7)
float temp0_1[0x4] = _mm_mul_ps(temp0, temp0)
float temp0_4[0x4] = _mm_sub_ps(_mm_add_ps(temp0, temp0), _mm_mul_ps(temp0_1, zmm7))
float temp0_5[0x4] = _mm_mul_ps(temp0_4, temp0_4)
float temp0_6[0x4] = _mm_add_ps(temp0_4, temp0_4)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm7)
zmm7 = __andps_xmmxud_memxud(zmm7, data_143dbb000)
float temp0_9[0x4] = _mm_sub_ps(temp0_6, temp0_7)
zmm7 = __andps_xmmxud_memxud(
    _mm_and_ps(_mm_cmpeq_ps(zmm7, _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 2), temp0_9 ^ zx.o(0))
        ^ temp0_9, 
    data_143dbb020)
arg1[2] = __mulps_xmmps_memps(zmm7, arg1[2])
float temp0_15[0x4] = __subps_xmmps_memps(zmm5, arg2[1])
float temp0_16[0x4] = __mulps_xmmps_memps(*arg2, data_143dbb040)
zmm5 = __andps_xmmxud_memxud(temp0_15, data_143dbb020)
float temp0_18[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
float temp0_21[0x4] = _mm_mul_ps(temp0_18, temp0_20)
float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_19)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xff)
float temp0_25[0x4] = _mm_sub_ps(temp0_23, temp0_21)
float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_25)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xc9), temp0_20)
float temp0_34[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xd2), temp0_19), temp0_28), 
    _mm_add_ps(_mm_mul_ps(temp0_24, temp0_26), zmm5))
float temp0_35[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0)
arg1[1] = _mm_mul_ps(temp0_34, zmm7)
float zmm2[0x4] = *arg1
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_35)
float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
float temp0_40[0x4] = _mm_mul_ps(zmm2, temp0_24)
float temp0_41[0x4] = __mulps_xmmps_memps(temp0_38, data_143dbb110)
float temp0_42[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
float temp0_43[0x4] = _mm_add_ps(temp0_41, temp0_40)
float result[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
float temp0_44[0x4] = _mm_mul_ps(temp0_39, result)
float temp0_46[0x4] = _mm_mul_ps(temp0_42, _mm_shuffle_ps(temp0_16, temp0_16, 0xaa))
*arg1 = _mm_add_ps(_mm_add_ps(temp0_43, __mulps_xmmps_memps(temp0_44, data_143dbb100)), 
    __mulps_xmmps_memps(temp0_46, data_143dbb0f0))
return result
