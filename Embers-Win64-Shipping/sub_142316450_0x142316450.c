// 函数: sub_142316450
// 地址: 0x142316450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg3 != 0)
    result = sub_141f5e0e0(arg3, *(arg1 + 0x30))

if (arg3 == 0 || result == 0xffffffff)
    result.b = 0
else
    float var_f8[0x4]
    sub_141f5e2b0(arg3, &var_f8, result)
    int32_t var_154
    float arg_20
    sub_141a0e800(&var_154, &arg_20, *(arg1 + 0x44))
    int32_t var_158
    int32_t arg_18
    sub_141a0e800(&var_158, &arg_18, *(arg1 + 0x48))
    int32_t var_150
    int32_t var_14c
    sub_141a0e800(&var_150, &var_14c, *(arg1 + 0x4c))
    float zmm5_1[0x4] = arg_18
    float zmm4_1[0x4] = var_158
    float zmm6[0x4] = arg_20
    float zmm15[0x4] = var_150
    float zmm3_1[0x4] = var_154
    float zmm12_1 = zmm15[0]
    float zmm14[0x4] = var_14c
    float zmm9_1[0x4] = *(arg1 + 0x50)
    float zmm1_1[0x4] = *(arg1 + 0x54)
    zmm14[0] = zmm14[0] * zmm4_1[0]
    int32_t var_13c_1 = 0
    zmm12_1 = zmm12_1 * zmm3_1[0]
    int32_t var_12c_1 = 0
    zmm14[0] = zmm14[0] * zmm3_1[0]
    int32_t var_11c_1 = 0
    zmm15[0] = zmm15[0] * zmm6[0]
    float zmm11_1 = zmm12_1 * zmm5_1[0]
    zmm14[0] = zmm14[0] * zmm5_1[0]
    zmm11_1 = zmm11_1 - zmm14[0]
    zmm12_1 = zmm12_1 * zmm4_1[0]
    zmm14[0] = zmm14[0] * zmm4_1[0]
    zmm14[0] = zmm14[0] * zmm5_1[0]
    zmm5_1[0] = zmm5_1[0] * zmm6[0]
    zmm12_1 = zmm12_1 + zmm14[0]
    zmm4_1[0] = zmm4_1[0] * zmm6[0]
    zmm14[0] = zmm14[0] * zmm6[0]
    zmm15[0] = zmm15[0] * zmm4_1[0]
    zmm15[0] = zmm15[0] * zmm5_1[0]
    zmm14[0] = zmm14[0] + zmm15[0]
    zmm5_1[0] = zmm5_1[0] * zmm9_1[0]
    float zmm0_1[0x4] = *(arg1 + 0x38)
    zmm15[0] = zmm15[0] - zmm14[0]
    zmm4_1[0] = zmm4_1[0] * zmm9_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm3_1[0]
    zmm3_1 = *(arg1 + 0x58)
    zmm14[0] = zmm14[0] * zmm3_1[0]
    zmm15[0] = zmm15[0] * zmm1_1[0]
    float zmm13[0x4] = zmm14 ^ data_142d3f780
    zmm15[0] = zmm15[0] * zmm3_1[0]
    float zmm10_1[0x4] = zmm15 ^ data_142d3f780
    zmm14[0] = zmm14[0] * zmm3_1[0]
    arg_18 = zmm15[0]
    zmm11_1 = zmm11_1 * zmm1_1[0]
    arg_20 = zmm14[0]
    zmm12_1 = zmm12_1 * zmm1_1[0]
    zmm14 = *(arg1 + 0x3c)
    float var_148[0x4]
    var_148[0] = zmm5_1[0]
    zmm15 = *(arg1 + 0x40)
    float temp0_1[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
    temp0_1[0] = zmm4_1[0]
    float zmm7_1[0x4] = var_f8
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm9_1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
    float var_c8[0x4]
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), var_c8)
    float temp0_9[0x4] = _mm_mul_ps(temp0_4, zmm7_1)
    float var_d8[0x4]
    float temp0_10[0x4] = _mm_mul_ps(temp0_5, var_d8)
    float var_e8[0x4]
    float temp0_14[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_6, var_e8), temp0_9), temp0_10), temp0_8)
    float var_138[0x4]
    var_138[0] = zmm11_1
    float temp0_15[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
    temp0_15[0] = zmm12_1
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
    temp0_16[0] = zmm10_1[0]
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
    float temp0_18[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
    temp0_18[0] = zmm14[0]
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), var_c8)
    float temp0_24[0x4] = _mm_mul_ps(temp0_20, zmm7_1)
    float temp0_25[0x4] = _mm_mul_ps(temp0_21, var_d8)
    float temp0_26[0x4] = _mm_mul_ps(temp0_19, var_e8)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
    temp0_27[0] = zmm15[0]
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x27)
    float temp0_29[0x4] = _mm_add_ps(temp0_26, temp0_24)
    zmm0_1 = arg_18
    float temp0_31[0x4] = _mm_add_ps(_mm_add_ps(temp0_29, temp0_25), temp0_23)
    float var_128[0x4]
    var_128[0] = zmm13[0]
    float temp0_32[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
    temp0_32[0] = zmm0_1[0]
    zmm0_1 = arg_20
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
    temp0_33[0] = zmm0_1[0]
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0)
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, var_e8)
    float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm7_1)
    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xff), var_c8)
    float temp0_42[0x4] = _mm_add_ps(temp0_38, temp0_39)
    float temp0_43[0x4] = _mm_mul_ps(temp0_37, var_d8)
    temp0_28[0] = 0x3f800000
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x39)
    float temp0_46[0x4] = _mm_add_ps(_mm_add_ps(temp0_42, temp0_43), temp0_41)
    result.b = 1
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
    float temp0_48[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0)
    float temp0_49[0x4] = _mm_mul_ps(temp0_47, var_e8)
    float temp0_50[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)
    *arg2 = temp0_14
    float temp0_51[0x4] = _mm_mul_ps(temp0_48, zmm7_1)
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, var_d8)
    float temp0_53[0x4] = _mm_add_ps(temp0_49, temp0_51)
    float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xff), var_c8)
    arg2[1] = temp0_31
    float temp0_56[0x4] = _mm_add_ps(temp0_53, temp0_52)
    arg2[2] = temp0_46
    arg2[3] = _mm_add_ps(temp0_56, temp0_55)

return result
