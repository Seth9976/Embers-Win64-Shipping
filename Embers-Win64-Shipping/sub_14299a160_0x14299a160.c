// 函数: sub_14299a160
// 地址: 0x14299a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
int64_t i_1 = 2
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
float zmm11[0x4]
float var_68[0x4] = zmm11
float zmm12[0x4] = data_143205560
float zmm13[0x4] = data_1435b5a00
float zmm14[0x4] = data_1435b59e0
float zmm15[0x4] = data_1435b59b0
void* result
int64_t i

do
    result = &arg1[4]
    int64_t j_1 = 2
    float zmm0[0x4]
    int64_t j
    
    do
        zmm0 = *(result + 0x80)
        float zmm3[0x4] = *(result + 0xa0)
        zmm10 = *(result + 0x60)
        zmm7 = *(result - 0x20)
        zmm8 = *(result + 0x20)
        float temp0_1[0x4] = _mm_sub_ps(zmm10, zmm0)
        zmm9 = *(result - 0x40)
        float temp0_2[0x4] = _mm_add_ps(zmm10, zmm0)
        float temp0_3[0x4] = __addps_xmmps_memps(zmm7, *result)
        float temp0_4[0x4] = __addps_xmmps_memps(zmm8, *(result + 0x40))
        float temp0_5[0x4] = __subps_xmmps_memps(zmm7, *result)
        float temp0_6[0x4] = __subps_xmmps_memps(zmm8, *(result + 0x40))
        float temp0_7[0x4] = _mm_add_ps(temp0_2, temp0_3)
        float temp0_8[0x4] = _mm_add_ps(zmm9, zmm3)
        float temp0_9[0x4] = _mm_sub_ps(zmm9, zmm3)
        float temp0_10[0x4] = _mm_sub_ps(temp0_3, temp0_2)
        float temp0_11[0x4] = _mm_mul_ps(temp0_7, zmm12)
        float temp0_12[0x4] = _mm_add_ps(temp0_4, temp0_8)
        float temp0_13[0x4] = _mm_mul_ps(temp0_10, zmm12)
        float temp0_14[0x4] = _mm_sub_ps(temp0_8, temp0_4)
        float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm12)
        float temp0_16[0x4] = _mm_sub_ps(temp0_9, temp0_13)
        float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_9)
        float temp0_18[0x4] = _mm_add_ps(temp0_11, temp0_15)
        float temp0_19[0x4] = _mm_sub_ps(temp0_15, temp0_11)
        float temp0_20[0x4] = __mulps_xmmps_memps(temp0_18, data_142d3f640)
        float temp0_21[0x4] = __mulps_xmmps_memps(temp0_19, data_142d3f640)
        *(result - 0x40) = temp0_20
        float temp0_22[0x4] = __mulps_xmmps_memps(temp0_14, data_1435b5950)
        *(result + 0x40) = temp0_21
        float temp0_23[0x4] = _mm_sub_ps(temp0_5, temp0_1)
        float temp0_24[0x4] = _mm_mul_ps(temp0_14, zmm14)
        float temp0_25[0x4] = _mm_add_ps(temp0_1, temp0_5)
        float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm14)
        float temp0_27[0x4] = __mulps_xmmps_memps(temp0_23, data_1435b5950)
        float temp0_28[0x4] = __mulps_xmmps_memps(temp0_25, data_1432055a0)
        float temp0_29[0x4] = _mm_sub_ps(temp0_22, temp0_26)
        float temp0_30[0x4] = _mm_add_ps(temp0_27, temp0_24)
        float temp0_31[0x4] = __mulps_xmmps_memps(temp0_16, data_1435b5970)
        float temp0_32[0x4] = _mm_mul_ps(temp0_16, zmm15)
        float temp0_33[0x4] = _mm_add_ps(temp0_28, temp0_6)
        *(result + 0x80) = temp0_29
        *result = temp0_30
        float temp0_34[0x4] = _mm_sub_ps(temp0_28, temp0_6)
        float temp0_35[0x4] = _mm_mul_ps(temp0_33, zmm15)
        float temp0_36[0x4] = __mulps_xmmps_memps(temp0_33, data_1435b5970)
        float temp0_37[0x4] = _mm_add_ps(temp0_31, temp0_35)
        float temp0_38[0x4] = _mm_sub_ps(temp0_32, temp0_36)
        float temp0_39[0x4] = __mulps_xmmps_memps(temp0_34, data_1435b5920)
        float temp0_40[0x4] = _mm_mul_ps(temp0_34, zmm13)
        *(result + 0x20) = temp0_38
        float temp0_41[0x4] = __mulps_xmmps_memps(temp0_17, data_1435b5920)
        float temp0_42[0x4] = _mm_mul_ps(temp0_17, zmm13)
        *(result + 0x60) = temp0_37
        float temp0_43[0x4] = _mm_add_ps(temp0_41, temp0_40)
        float temp0_44[0x4] = _mm_sub_ps(temp0_42, temp0_39)
        *(result + 0xa0) = temp0_43
        *(result - 0x20) = temp0_44
        result += 0x10
        j = j_1
        j_1 -= 1
    while (j != 1)
    float zmm1[0x4] = arg1[0xb]
    zmm0 = arg1[0xf]
    zmm9 = *arg1
    zmm8 = arg1[9]
    float temp0_45[0x4] = __shufps_xmmps_memps_immb(zmm9, arg1[2], 0xee)
    float temp0_46[0x4] = __shufps_xmmps_memps_immb(zmm9, arg1[2], 0x44)
    float zmm4[0x4] = arg1[0xd]
    zmm6 = arg1[4]
    float temp0_47[0x4] = _mm_shuffle_ps(zmm8, zmm1, 0x44)
    float temp0_48[0x4] = __shufps_xmmps_memps_immb(zmm6, arg1[6], 0xee)
    float temp0_49[0x4] = __shufps_xmmps_memps_immb(zmm6, arg1[6], 0x44)
    float temp0_50[0x4] = _mm_shuffle_ps(zmm8, zmm1, 0xee)
    float temp0_51[0x4] = _mm_shuffle_ps(zmm4, zmm0, 0xee)
    float temp0_52[0x4] = _mm_shuffle_ps(zmm4, zmm0, 0x44)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_45, temp0_48, 0x88)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_46, temp0_49, 0x88)
    arg1[4] = temp0_53
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_50, temp0_51, 0x88)
    *arg1 = temp0_54
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_47, temp0_52, 0x88)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_45, temp0_48, 0xdd)
    zmm6 = arg1[5]
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_50, temp0_51, 0xdd)
    zmm4 = arg1[0xc]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_46, temp0_49, 0xdd)
    float temp0_60[0x4] = __shufps_xmmps_memps_immb(zmm6, arg1[7], 0x44)
    float temp0_61[0x4] = __shufps_xmmps_memps_immb(zmm6, arg1[7], 0xee)
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_47, temp0_52, 0xdd)
    arg1[9] = temp0_56
    zmm0 = arg1[0xe]
    float temp0_63[0x4] = _mm_shuffle_ps(zmm4, zmm0, 0xee)
    arg1[0xd] = temp0_55
    zmm1 = arg1[0xa]
    float temp0_64[0x4] = _mm_shuffle_ps(zmm4, zmm0, 0x44)
    arg1[6] = temp0_57
    zmm9 = arg1[1]
    arg1[0xf] = temp0_58
    zmm8 = arg1[8]
    arg1[2] = temp0_59
    float temp0_65[0x4] = __shufps_xmmps_memps_immb(zmm9, arg1[3], 0x44)
    float temp0_66[0x4] = __shufps_xmmps_memps_immb(zmm9, arg1[3], 0xee)
    arg1[0xb] = temp0_62
    float temp0_67[0x4] = _mm_shuffle_ps(zmm8, zmm1, 0x44)
    float temp0_68[0x4] = _mm_shuffle_ps(zmm8, zmm1, 0xee)
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_65, temp0_60, 0x88)
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_66, temp0_61, 0x88)
    arg1[8] = temp0_69
    arg1[0xc] = temp0_70
    float temp0_71[0x4] = _mm_shuffle_ps(temp0_67, temp0_64, 0x88)
    float temp0_72[0x4] = _mm_shuffle_ps(temp0_68, temp0_63, 0x88)
    float temp0_73[0x4] = _mm_shuffle_ps(temp0_65, temp0_60, 0xdd)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_66, temp0_61, 0xdd)
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_67, temp0_64, 0xdd)
    float temp0_76[0x4] = _mm_shuffle_ps(temp0_68, temp0_63, 0xdd)
    arg1[1] = temp0_71
    arg1[5] = temp0_72
    arg1[0xa] = temp0_73
    arg1[0xe] = temp0_74
    arg1[3] = temp0_75
    arg1[7] = temp0_76
    i = i_1
    i_1 -= 1
while (i != 1)
return result
