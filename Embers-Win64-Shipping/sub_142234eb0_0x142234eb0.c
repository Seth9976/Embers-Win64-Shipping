// 函数: sub_142234eb0
// 地址: 0x142234eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
float zmm2[0x4] = arg3[1]
float zmm6[0x4] = data_142d4cc00
float var_30 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm2, temp0_1[0].q)
float var_30_2
float zmm5[0x4]

if (arg2 != 0)
    *(arg1 + 0x54) = temp0_3.q
    float temp0_43[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    *(arg1 + 0x5c) = var_30
    zmm5 = *arg3
    float temp0_44[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_45[0x4] = _mm_mul_ps(temp0_43, temp0_44)
    float temp0_46[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_47[0x4] = _mm_mul_ps(temp0_2, temp0_46)
    float temp0_48[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_49[0x4] = _mm_sub_ps(temp0_47, temp0_45)
    float temp0_50[0x4] = _mm_add_ps(temp0_49, temp0_49)
    float temp0_51[0x4] = _mm_mul_ps(temp0_48, temp0_50)
    float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc9), temp0_44)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xd2)
    float temp0_55[0x4] = _mm_add_ps(temp0_51, zmm6)
    float temp0_58[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_54, temp0_46), temp0_53), temp0_55)
    zmm5 = data_142d4cc20
    float temp0_59[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float var_30_3 = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)[0]
    *(arg1 + 0x60) = (_mm_unpacklo_ps(temp0_58, _mm_shuffle_ps(temp0_58, temp0_58, 0x55)[0].q)).q
    float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    *(arg1 + 0x68) = var_30_3
    zmm6 = *arg3
    float temp0_64[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_65[0x4] = _mm_mul_ps(temp0_63, temp0_64)
    float temp0_66[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_67[0x4] = _mm_mul_ps(temp0_59, temp0_66)
    float temp0_68[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_69[0x4] = _mm_sub_ps(temp0_67, temp0_65)
    float temp0_70[0x4] = _mm_add_ps(temp0_69, temp0_69)
    float temp0_71[0x4] = _mm_mul_ps(temp0_68, temp0_70)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xc9), temp0_64)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xd2)
    float temp0_75[0x4] = _mm_add_ps(temp0_71, zmm5)
    float temp0_78[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_74, temp0_66), temp0_73), temp0_75)
    var_30_2 = _mm_shuffle_ps(temp0_78, temp0_78, 0xaa)[0]
    *(arg1 + 0x6c) = (_mm_unpacklo_ps(temp0_78, _mm_shuffle_ps(temp0_78, temp0_78, 0x55)[0].q)).q
    *(arg1 + 0x74) = var_30_2
else
    *(arg1 + 0x30) = temp0_3.q
    float temp0_4[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    *(arg1 + 0x38) = var_30
    zmm5 = *arg3
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_6[0x4] = _mm_mul_ps(temp0_4, temp0_5)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_7)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_6)
    float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
    float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_5)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
    float temp0_16[0x4] = _mm_add_ps(temp0_12, zmm6)
    float temp0_19[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_7), temp0_14), temp0_16)
    zmm5 = data_142d4cc20
    float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float var_30_1 = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)[0]
    *(arg1 + 0x3c) = (_mm_unpacklo_ps(temp0_19, _mm_shuffle_ps(temp0_19, temp0_19, 0x55)[0].q)).q
    float temp0_24[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    *(arg1 + 0x44) = var_30_1
    zmm6 = *arg3
    float temp0_25[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_26[0x4] = _mm_mul_ps(temp0_24, temp0_25)
    float temp0_27[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_28[0x4] = _mm_mul_ps(temp0_20, temp0_27)
    float temp0_29[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_30[0x4] = _mm_sub_ps(temp0_28, temp0_26)
    float temp0_31[0x4] = _mm_add_ps(temp0_30, temp0_30)
    float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_31)
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc9), temp0_25)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xd2)
    float temp0_36[0x4] = _mm_add_ps(temp0_32, zmm5)
    float temp0_39[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_35, temp0_27), temp0_34), temp0_36)
    var_30_2 = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)[0]
    *(arg1 + 0x48) = (_mm_unpacklo_ps(temp0_39, _mm_shuffle_ps(temp0_39, temp0_39, 0x55)[0].q)).q
    *(arg1 + 0x50) = var_30_2
int128_t* var_38 = arg3
var_30_2.q = &arg_10
void** var_20 = &var_38
int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = sub_14222c310
return sub_142269c80(arg1 + 8, &var_28)
