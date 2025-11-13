// 函数: sub_140ae2000
// 地址: 0x140ae2000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
float zmm3[0x4] = *(arg2 + 4)
zmm5[0] = zmm5[0] f* *arg1
zmm3[0] = zmm3[0] f* arg1[1]
float zmm4[0x4] = *(arg2 + 8)
float zmm6[0x4]
float var_18[0x4] = zmm6
zmm4[0] = zmm4[0] f* arg1[2]
zmm3[0] = zmm3[0] + zmm5[0]
float zmm0[0x4] = arg1[3]
zmm3[0] = zmm3[0] + zmm4[0]
zmm5[0] = zmm5[0] * zmm3[0]
zmm3[0] = zmm3[0] * zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
zmm4[0] = zmm4[0] * zmm3[0]
temp0[0] = zmm3[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm4[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm0[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*arg4 = temp0_3
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
temp0_3[0] = temp0_3[0] * temp0_3[0]
temp0_5[0] = temp0_5[0] * temp0_5[0]
temp0_4[0] = temp0_4[0] * temp0_4[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
temp0_6[0] = temp0_6[0] * temp0_6[0]
temp0_3[0] = temp0_3[0] + temp0_4[0]
temp0_3[0] = temp0_3[0] + temp0_5[0]
temp0_3[0] = temp0_3[0] + temp0_6[0]

if (temp0_3[0] != 0f)
    zmm6 = *arg4
    zmm5 = data_143dbb130
    float temp0_7[0x4] = _mm_mul_ps(zmm6, zmm6)
    float temp0_9[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_7, temp0_7, 0x4e))
    float temp0_11[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x39), temp0_9)
    float temp0_12[0x4] = _mm_rsqrt_ps(temp0_11)
    float temp0_13[0x4] = _mm_mul_ps(zmm5, temp0_11)
    float temp0_18[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_12, temp0_12), temp0_13)), 
            temp0_12), 
        temp0_12)
    float temp0_21[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_18, temp0_18), temp0_13))
    float temp0_23[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_11, 2)
    *arg4 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_21, temp0_18), temp0_18), zmm6) ^ data_143dbb120, 
        temp0_23) ^ data_143dbb120
else
    *arg4 = data_14399f720

zmm4 = *arg1
zmm6 = *arg4 ^ 0x80000000
float zmm1[0x4] = (*arg4)[1] ^ 0x80000000
zmm3 = (*arg4)[3]
float zmm2[0x4] = (*arg4)[2] ^ 0x80000000
float temp0_28[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_28[0] = zmm1[0]
float temp0_29[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc6)
temp0_30[0] = zmm2[0]
float temp0_31[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x27)
temp0_32[0] = zmm3[0]
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x39)
float temp0_35[0x4] = _mm_mul_ps(temp0_29, _mm_shuffle_ps(temp0_33, temp0_33, 0x1b))
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), temp0_33)
float temp0_38[0x4] = __mulps_xmmps_memps(temp0_35, data_143dbb110)
float temp0_39[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
float temp0_40[0x4] = _mm_add_ps(temp0_38, temp0_37)
float result[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x4e)
float temp0_42[0x4] = _mm_mul_ps(temp0_39, _mm_shuffle_ps(temp0_33, temp0_33, 0xb1))
float temp0_43[0x4] = _mm_mul_ps(temp0_31, result)
float temp0_44[0x4] = __mulps_xmmps_memps(temp0_42, data_143dbb0f0)
*arg3 = _mm_add_ps(_mm_add_ps(temp0_40, __mulps_xmmps_memps(temp0_43, data_143dbb100)), temp0_44)
return result
