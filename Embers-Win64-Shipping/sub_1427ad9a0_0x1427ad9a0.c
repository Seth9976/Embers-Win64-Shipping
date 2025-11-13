// 函数: sub_1427ad9a0
// 地址: 0x1427ad9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg3
float zmm6[0x4]
float var_18[0x4] = zmm6
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
float zmm12[0x4]
float var_78[0x4] = zmm12
int32_t var_f8
float var_f0_1
float result

if (*(arg1 + 0x465) != 0)
    zmm6 = *(arg1 + 0x1e0)
    float zmm0[0x4] = *(arg3 + 8)
    zmm7 = *(arg1 + 0x1d0)
    float zmm2[0x4] = *(arg3 + 4)
    float zmm4[0x4] = *arg3
    float temp0_1[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f88a10)
    float temp0_4[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
    float temp0_5[0x4] = _mm_rcp_ps(zmm6)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    float temp0_7[0x4] = _mm_sub_ps(temp0_4, zmm7)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    zmm4 = __andps_xmmxud_memxud(temp0_7, data_143f889b0)
    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_8)
    float temp0_15[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_6), temp0_12)
    float temp0_16[0x4] = _mm_mul_ps(temp0_5, temp0_5)
    float temp0_17[0x4] = _mm_add_ps(temp0_5, temp0_5)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_20[0x4] = _mm_sub_ps(temp0_17, _mm_mul_ps(temp0_16, zmm6))
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_6)
    float temp0_23[0x4] = _mm_mul_ps(temp0_20, temp0_20)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_20)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm6)
    float temp0_27[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f88a00), data_143f889f0, 2)
    float temp0_28[0x4] = _mm_sub_ps(temp0_24, temp0_25)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
    zmm6 = _mm_and_ps(temp0_27, temp0_28 ^ zx.o(0))
    float temp0_31[0x4] = _mm_mul_ps(temp0_29, temp0_8)
    zmm6 ^= temp0_28
    float temp0_32[0x4] = _mm_unpacklo_ps((*arg4)[1], 0)
    float temp0_33[0x4] = _mm_sub_ps(temp0_22, temp0_31)
    float temp0_34[0x4] = _mm_mul_ps(temp0_9, temp0_18)
    float zmm3[0x4] = *arg4
    float temp0_36[0x4] = _mm_add_ps(temp0_33, _mm_add_ps(temp0_34, zmm4))
    float temp0_39[0x4] =
        _mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*arg4)[2][0].q), temp0_32[0].q), zmm7)
    float temp0_40[0x4] = _mm_mul_ps(temp0_36, zmm6)
    zmm3 = __andps_xmmxud_memxud(temp0_39, data_143f889b0)
    float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), temp0_8)
    float temp0_46[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_6), temp0_43)
    float temp0_47[0x4] = _mm_add_ps(temp0_46, temp0_46)
    float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc9), temp0_8)
    float temp0_50[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xd2)
    float zmm14[0x4] = *(arg1 + 0x440)
    float zmm13[0x4] = *(arg1 + 0x448)
    zmm11 = *(arg1 + 0x44c)
    float temp0_51[0x4] = _mm_mul_ps(temp0_9, temp0_47)
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, temp0_6)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xaa)
    float temp0_54[0x4] = _mm_add_ps(temp0_51, zmm3)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x55)
    float temp0_56[0x4] = _mm_sub_ps(temp0_52, temp0_49)
    zmm13 ^= 0x80000000
    zmm14 ^= 0x80000000
    temp0_40[0] = temp0_40[0] * zmm13[0]
    temp0_55[0] = temp0_55[0] * zmm14[0]
    float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_54)
    zmm10 = *(arg1 + 0x444) ^ 0x80000000
    temp0_55[0] = temp0_55[0] * zmm13[0]
    temp0_53[0] = temp0_53[0] * zmm10[0]
    float temp0_58[0x4] = _mm_mul_ps(temp0_57, zmm6)
    temp0_53[0] = temp0_53[0] - temp0_55[0]
    temp0_53[0] = temp0_53[0] * zmm14[0]
    temp0_40[0] = temp0_40[0] - temp0_53[0]
    temp0_40[0] = temp0_40[0] * zmm10[0]
    temp0_53[0] = temp0_53[0] + temp0_53[0]
    temp0_55[0] = temp0_55[0] - temp0_40[0]
    temp0_40[0] = temp0_40[0] + temp0_40[0]
    zmm11[0] = zmm11[0] * temp0_53[0]
    zmm13[0] = zmm13[0] * temp0_53[0]
    temp0_55[0] = temp0_55[0] + temp0_55[0]
    zmm13[0] = zmm13[0] * temp0_40[0]
    temp0_40[0] = temp0_40[0] + zmm11[0]
    zmm14[0] = zmm14[0] * temp0_40[0]
    zmm10[0] = zmm10[0] * temp0_55[0]
    zmm10[0] = zmm10[0] - zmm13[0]
    zmm14[0] = zmm14[0] * temp0_55[0]
    zmm13[0] = zmm13[0] - zmm14[0]
    zmm10[0] = zmm10[0] * temp0_53[0]
    zmm10[0] = zmm10[0] + temp0_40[0]
    zmm14[0] = zmm14[0] - zmm10[0]
    zmm11[0] = zmm11[0] * temp0_40[0]
    zmm11[0] = zmm11[0] * temp0_55[0]
    temp0_55[0] = temp0_55[0] + zmm11[0]
    float var_108 = zmm10[0]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
    temp0_53[0] = temp0_53[0] + zmm11[0]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
    temp0_59[0] = temp0_59[0] * zmm13[0]
    temp0_60[0] = temp0_60[0] * zmm10[0]
    zmm13[0] = zmm13[0] + temp0_55[0]
    zmm14[0] = zmm14[0] + temp0_53[0]
    temp0_60[0] = temp0_60[0] - temp0_59[0]
    temp0_60[0] = temp0_60[0] * zmm14[0]
    float var_100_1 = zmm14[0]
    temp0_58[0] = temp0_58[0] * zmm13[0]
    float var_104_1 = zmm13[0]
    temp0_58[0] = temp0_58[0] - temp0_60[0]
    char rax = *(arg1 + 0x461)
    temp0_60[0] = temp0_60[0] + temp0_60[0]
    temp0_59[0] = temp0_59[0] * zmm14[0]
    temp0_58[0] = temp0_58[0] * zmm10[0]
    temp0_58[0] = temp0_58[0] + temp0_58[0]
    zmm10[0] = zmm10[0] * temp0_60[0]
    temp0_59[0] = temp0_59[0] - temp0_58[0]
    zmm13[0] = zmm13[0] * temp0_58[0]
    zmm13[0] = zmm13[0] * temp0_60[0]
    temp0_59[0] = temp0_59[0] + temp0_59[0]
    zmm10[0] = zmm10[0] * temp0_59[0]
    zmm10[0] = zmm10[0] - zmm13[0]
    zmm14[0] = zmm14[0] * temp0_59[0]
    zmm14[0] = zmm14[0] * temp0_58[0]
    zmm13[0] = zmm13[0] - zmm14[0]
    zmm11[0] = zmm11[0] * temp0_60[0]
    zmm11[0] = zmm11[0] * temp0_58[0]
    zmm14[0] = zmm14[0] - zmm10[0]
    zmm11[0] = zmm11[0] * temp0_59[0]
    temp0_58[0] = temp0_58[0] + zmm11[0]
    temp0_59[0] = temp0_59[0] + zmm11[0]
    temp0_60[0] = temp0_60[0] + zmm11[0]
    zmm10[0] = zmm10[0] + temp0_58[0]
    zmm13[0] = zmm13[0] + temp0_59[0]
    zmm14[0] = zmm14[0] + temp0_60[0]
    float var_118 = zmm10[0]
    float var_114_1 = zmm13[0]
    float var_110_1 = zmm14[0]
    
    if (rax == 0 || *(arg1 + 0x464) == 0)
        zmm2 = *(arg1 + 0x430)
        zmm3 = 0x80000000
    else
        zmm3 = 0x80000000
        zmm2 = *(arg1 + 0x430) ^ 0x80000000
    
    float zmm1[0x4]
    
    if (rax == 0 || *(arg1 + 0x463) == 0)
        zmm1 = *(arg1 + 0x42c)
    else
        zmm1 = *(arg1 + 0x42c) ^ zmm3
    
    if (rax == 0 || *(arg1 + 0x462) == 0)
        zmm0 = *(arg1 + 0x428)
    else
        zmm0 = *(arg1 + 0x428) ^ zmm3
    
    zmm7 = *(arg1 + 0x420)
    char var_b0_1 = 1
    zmm7[0] = zmm7[0] * zmm2[0]
    int32_t var_128 = 0x322bcc77
    int32_t var_124_1 = 0x322bcc77
    zmm7[0] = zmm7[0] f* *(arg1 + 0x450)
    zmm7[0] = zmm7[0] * zmm0[0]
    zmm7[0] = zmm7[0] * 0.5f
    zmm7[0] = zmm7[0] * zmm1[0]
    zmm7[0] = zmm7[0] f* *(arg1 + 0x458)
    zmm7[0] = zmm7[0] f* *(arg1 + 0x454)
    zmm7[0] = zmm7[0] + zmm7[0]
    zmm7[0] = zmm7[0] * 0.5f
    zmm7[0] = zmm7[0] - zmm7[0]
    zmm7[0] = zmm7[0] * 0.5f
    zmm7[0] = zmm7[0] + zmm7[0]
    zmm7[0] = zmm7[0] - zmm7[0]
    zmm7[0] = zmm7[0] + zmm7[0]
    zmm7[0] = zmm7[0] - zmm7[0]
    var_f0_1 = zmm7[0]
    float var_c0_1 = var_f0_1
    float var_b4_1 = zmm7[0]
    int64_t var_c8 = (_mm_unpacklo_ps(zmm7, zmm7[0].q)).q
    int64_t var_bc_1 = (_mm_unpacklo_ps(zmm7, zmm7[0].q)).q
    int32_t var_120_2 = 0x322bcc77
    uint64_t var_d8[0x2]
    int32_t arg_8
    result = sub_140ad9790(&var_c8, &var_108, &var_118, &var_128, &var_f8, &var_d8, &arg_8)

if (*(arg1 + 0x465) == 0 || result.b == 0)
    result.b = 0
else
    zmm11 = *(arg1 + 0x448)
    zmm12 = *(arg1 + 0x440)
    zmm9 = *(arg1 + 0x444)
    float zmm2_1[0x4] = var_f8
    float zmm3_1[0x4] = *(arg1 + 0x44c)
    zmm10 = var_f0_1
    int32_t var_f4
    zmm6 = var_f4
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm9[0] = zmm9[0] * zmm10[0]
    zmm11[0] = zmm11[0] * zmm2_1[0]
    zmm9[0] = zmm9[0] - zmm11[0]
    zmm12[0] = zmm12[0] * zmm6[0]
    zmm12[0] = zmm12[0] * zmm10[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm11[0] = zmm11[0] - zmm12[0]
    zmm9[0] = zmm9[0] * zmm2_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm9[0]
    zmm12[0] = zmm12[0] - zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
    zmm11[0] = zmm11[0] * zmm9[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm9[0] = zmm9[0] * zmm12[0]
    zmm9[0] = zmm9[0] - zmm11[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm12[0] = zmm12[0] * zmm11[0]
    zmm9[0] = zmm9[0] + zmm3_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm12[0]
    zmm11[0] = zmm11[0] - zmm12[0]
    zmm3_1[0] = zmm3_1[0] * zmm11[0]
    zmm12[0] = zmm12[0] - zmm9[0]
    zmm3_1[0] = zmm3_1[0] + zmm10[0]
    float zmm4_1[0x4] = *(arg1 + 0x1c0)
    zmm3_1[0] = zmm3_1[0] + zmm6[0]
    zmm12[0] = zmm12[0] + zmm3_1[0]
    zmm11[0] = zmm11[0] + zmm3_1[0]
    float temp0_63[0x4] = _mm_unpacklo_ps(zmm9, zmm12[0].q)
    float temp0_64[0x4] = _mm_unpacklo_ps(zmm11, 0)
    float temp0_65[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
    float temp0_67[0x4] =
        __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_63, temp0_64[0].q), *(arg1 + 0x1e0))
    float temp0_68[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
    float temp0_69[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xc9), temp0_68)
    float temp0_74[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xd2), temp0_65), temp0_71)
    float temp0_75[0x4] = _mm_add_ps(temp0_74, temp0_74)
    float temp0_76[0x4] = _mm_mul_ps(temp0_69, temp0_75)
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xd2), temp0_65)
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xc9)
    float temp0_80[0x4] = _mm_add_ps(temp0_76, temp0_67)
    float temp0_84[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_78, _mm_mul_ps(temp0_79, temp0_68)), temp0_80), *(arg1 + 0x1d0))
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
    float temp0_86[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
    float var_e0_1 = temp0_86[0]
    sub_140d3a3a0(arg2 + 0x70, arg1)
    temp0_86[0] = temp0_86[0] f- rsi[2]
    temp0_84[0] = temp0_84[0] f- *rsi
    float temp0_87[0x4] = _mm_unpacklo_ps(temp0_84, temp0_85[0].q)
    temp0_85[0] = temp0_85[0] f- rsi[1]
    *(arg2 + 0x1c) = temp0_87.q
    temp0_86[0] = temp0_86[0] * temp0_86[0]
    *(arg2 + 0x24) = var_e0_1
    result.b = 1
    temp0_84[0] = temp0_84[0] * temp0_84[0]
    temp0_85[0] = temp0_85[0] * temp0_85[0]
    temp0_85[0] = temp0_85[0] + temp0_84[0]
    temp0_85[0] = temp0_85[0] + temp0_86[0]
    *(arg2 + 0xc) = _mm_sqrt_ss(0, temp0_85[0])[0]

return result
