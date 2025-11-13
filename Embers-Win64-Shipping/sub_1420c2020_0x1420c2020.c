// 函数: sub_1420c2020
// 地址: 0x1420c2020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = data_142d4cc30
float zmm4[0x4] = data_142d4cc20
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
float zmm7[0x4] = *arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_3[0x4] = _mm_mul_ps(temp0_1, temp0_2)
float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
float temp0_5[0x4] = _mm_mul_ps(temp0, temp0_4)
float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_7[0x4] = _mm_sub_ps(temp0_3, temp0_5)
float temp0_8[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xd2)
float temp0_11[0x4] = _mm_mul_ps(temp0_9, temp0_4)
float temp0_13[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_10, temp0_2), temp0_11)
float temp0_14[0x4] = _mm_mul_ps(temp0_6, temp0_8)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_2)
float temp0_18[0x4] = _mm_add_ps(temp0_13, _mm_add_ps(temp0_14, zmm3))
float var_4c = temp0_18[0]
float var_48 = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)[0]
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_4)
float var_44 = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)[0]
float temp0_23[0x4] = _mm_sub_ps(temp0_16, temp0_21)
float temp0_24[0x4] = _mm_add_ps(temp0_23, temp0_23)
float temp0_25[0x4] = _mm_mul_ps(temp0_6, temp0_24)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xd2)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xc9), temp0_4)
float temp0_29[0x4] = _mm_add_ps(temp0_25, zmm4)
float temp0_30[0x4] = _mm_mul_ps(temp0_26, temp0_2)
zmm4 = data_142d4cc00
float temp0_31[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_32[0x4] = _mm_sub_ps(temp0_30, temp0_28)
float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_2)
float temp0_34[0x4] = _mm_add_ps(temp0_32, temp0_29)
float var_40 = temp0_34[0]
float var_3c = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)[0]
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_4)
float var_38 = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)[0]
float temp0_39[0x4] = _mm_sub_ps(temp0_33, temp0_37)
float temp0_40[0x4] = _mm_add_ps(temp0_39, temp0_39)
float temp0_41[0x4] = _mm_mul_ps(temp0_6, temp0_40)
float temp0_42[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xc9)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xd2), temp0_2)
float temp0_45[0x4] = _mm_mul_ps(temp0_42, temp0_4)
float temp0_46[0x4] = _mm_add_ps(temp0_41, zmm4)
float temp0_48[0x4] = _mm_add_ps(_mm_sub_ps(temp0_44, temp0_45), temp0_46)
float zmm6[0x4] = (*arg1)[1]
zmm7 = *arg1
float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x55)
float var_34 = temp0_48[0]
float temp0_50[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xaa)
float var_30 = temp0_49[0]
zmm7[0] = zmm7[0] * zmm7[0]
float var_2c = temp0_50[0]
float zmm1[0x4] = (*arg1)[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm1[0]
int64_t var_58
float arg_8

if (zmm7[0] != 1f)
    if (zmm7[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float temp0_51[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        float zmm2[0x4] = 0x3f000000
        zmm7[0] = zmm7[0] * 0.5f
        temp0_51[0] = temp0_51[0] * temp0_51[0]
        zmm7[0] = zmm7[0] * temp0_51[0]
        zmm2[0] = 0.5f - zmm7[0]
        temp0_51[0] = temp0_51[0] * zmm2[0]
        temp0_51[0] = temp0_51[0] + temp0_51[0]
        temp0_51[0] = temp0_51[0] * temp0_51[0]
        zmm7[0] = zmm7[0] * temp0_51[0]
        zmm4[0] = 0.5f - zmm7[0]
        temp0_51[0] = temp0_51[0] * zmm4[0]
        temp0_51[0] = temp0_51[0] + temp0_51[0]
        arg_8 = temp0_51[0]
        zmm1 = temp0_51
        temp0_51[0] = temp0_51[0] * zmm7[0]
        temp0_51[0] = temp0_51[0] * (*arg1)[2]
        var_58.d = temp0_51[0]
        zmm1[0] = zmm1[0] * zmm6[0]
        float var_50_2 = temp0_51[0]
    else
        zmm1 = data_143dbb1fc
        var_58.d = data_143dbb1f8[0]
        float var_50_1 = data_143dbb200[0]
    
    var_58:4.d = zmm1[0]
else
    float rax_1 = (*arg1)[2]
    var_58 = *arg1
    float var_50 = rax_1

float* result = sub_140ad7530(&arg_8, &var_58, &var_34, &var_40, &var_4c)
*arg3 = arg_8 * 57.2957764f
*arg4 = arg5 * 57.2957764f
return result
