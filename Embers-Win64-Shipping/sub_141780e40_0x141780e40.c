// 函数: sub_141780e40
// 地址: 0x141780e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg1
float zmm6[0x4]
float var_18[0x4] = zmm6
float var_38_1[0x4]
float zmm5[0x4]

if (zmm2[0] == 0f)
    var_38_1 = data_14399f720
else
    float zmm1[0x4] = *(arg1 + 0xc)
    zmm5 = data_143ef7c40
    float var_38[0x4]
    var_38[1].q = 0
    zmm6 = var_38
    zmm6[0] = zmm2[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x93)
    temp0_1[0] = zmm1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
    float temp0_3[0x4] = _mm_mul_ps(temp0_2, temp0_2)
    float temp0_5[0x4] = _mm_add_ps(temp0_3, _mm_shuffle_ps(temp0_3, temp0_3, 0x4e))
    float temp0_7[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x39), temp0_5)
    float temp0_8[0x4] = _mm_rsqrt_ps(temp0_7)
    float temp0_9[0x4] = _mm_mul_ps(zmm5, temp0_7)
    float temp0_14[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_8, temp0_8), temp0_9)), temp0_8), 
        temp0_8)
    float temp0_17[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_14, temp0_14), temp0_9))
    float temp0_19[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_7, 2)
    var_38_1 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_17, temp0_14), temp0_14), temp0_2) ^ data_143ef7c30, 
        temp0_19) ^ data_143ef7c30

*arg3 = var_38_1
zmm5 = *arg1
float zmm7[0x4] = var_38_1 ^ 0x80000000
float temp0_24[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
zmm2 = _mm_shuffle_ps(var_38_1, var_38_1, 0x55) ^ 0x80000000
float zmm3[0x4] = _mm_shuffle_ps(var_38_1, var_38_1, 0xaa) ^ 0x80000000
temp0_24[0] = zmm2[0]
float temp0_27[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
temp0_27[0] = zmm3[0]
float temp0_28[0x4] = _mm_shuffle_ps(var_38_1, var_38_1, 0xff)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x27)
float temp0_30[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_31[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
temp0_29[0] = temp0_28[0]
float temp0_32[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x39)
float temp0_34[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(temp0_32, temp0_32, 0x1b))
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), temp0_32)
float temp0_37[0x4] = __mulps_xmmps_memps(temp0_34, data_143ef7c70)
float temp0_38[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
float temp0_39[0x4] = _mm_add_ps(temp0_37, temp0_36)
float temp0_40[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x4e)
float temp0_42[0x4] = _mm_mul_ps(temp0_38, _mm_shuffle_ps(temp0_32, temp0_32, 0xb1))
float temp0_43[0x4] = _mm_mul_ps(temp0_31, temp0_40)
float temp0_44[0x4] = __mulps_xmmps_memps(temp0_42, data_143ef7c50)
*arg2 = _mm_add_ps(_mm_add_ps(temp0_39, __mulps_xmmps_memps(temp0_43, data_143ef7c60)), temp0_44)
