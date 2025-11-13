// 函数: sub_142650c20
// 地址: 0x142650c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
float zmm3[0x4] = *arg3
int32_t i_1 = 0
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
float zmm6[0x4]
float var_28[0x4] = zmm6
float temp0_2[0x4] = _mm_mul_ps(zmm3, temp0)
float temp0_4[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x1a)
float temp0_8[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), _mm_shuffle_ps(temp0, temp0, 0x12))
float zmm1[0x4] = arg3[2]
float zmm10[0x4] = arg3[1]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 1)
float temp0_10[0x4] = _mm_add_ps(temp0_8, temp0_4)
float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_12[0x4] = _mm_sub_ps(temp0_4, temp0_8)
zmm3 = data_143f71430
float temp0_13[0x4] = _mm_add_ps(temp0_5, temp0_9)
int32_t i = 0
float temp0_14[0x4] = _mm_mul_ps(temp0_10, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_12)
float temp0_16[0x4] = _mm_sub_ps(zmm3, temp0_13)
zmm3[0].q = zmm10 u>> 0x40
zmm10 = _mm_shuffle_ps(zmm10, zmm3, 0xc4)
float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_16, zmm1), data_143f71440)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x32)
float zmm8[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm2, 0), temp0_20, 0x82)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_14, zmm2, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x10)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_14, temp0_15, 0x12)
float zmm9[0x4] = _mm_shuffle_ps(temp0_24, temp0_23, 0x88)
float zmm7[0x4] = _mm_shuffle_ps(temp0_25, zmm2, 0xe8)
float var_e8[0x4]
float var_78[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (*(arg1 + 0x88) s> 0)
    float (* r14_1)[0x4] = nullptr
    
    do
        zmm3 = data_142d4cc00
        zmm4 = data_142d4cc20
        zmm5 = data_142d4cc30
        int64_t rax = *(arg1 + 0x80)
        int32_t var_6c_1 = 0x3f800000
        int32_t var_f8_1 = arg4
        zmm1 = *(r14_1 + rax + 4)
        var_78[0] = (*(r14_1 + rax))[0]
        zmm2 = *(r14_1 + rax + 8)
        float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm8)
        float temp0_30[0x4] = _mm_shuffle_ps(var_78, var_78, 0xe1)
        temp0_30[0] = zmm1[0]
        float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm7)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
        temp0_33[0] = zmm2[0]
        float temp0_34[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm10)
        float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm9)
        float temp0_38[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
        float temp0_39[0x4] = _mm_add_ps(temp0_37, temp0_29)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm8)
        float temp0_42[0x4] = _mm_add_ps(temp0_39, temp0_32)
        float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm7)
        float temp0_45[0x4] = _mm_add_ps(temp0_42, temp0_36)
        float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm9)
        float temp0_48[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        var_e8 = temp0_45
        float temp0_49[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_41)
        float temp0_51[0x4] = _mm_mul_ps(temp0_49, zmm9)
        float temp0_52[0x4] = _mm_mul_ps(temp0_48, zmm10)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_54[0x4] = _mm_add_ps(temp0_50, temp0_44)
        float temp0_55[0x4] = _mm_mul_ps(temp0_53, zmm8)
        float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm7)
        float temp0_58[0x4] = _mm_add_ps(temp0_54, temp0_52)
        float temp0_59[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_60[0x4] = _mm_add_ps(temp0_51, temp0_55)
        float temp0_61[0x4] = _mm_mul_ps(temp0_59, zmm10)
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0)
        float var_d8_1[0x4] = temp0_58
        float temp0_63[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
        float temp0_64[0x4] = _mm_add_ps(temp0_60, temp0_57)
        float temp0_65[0x4] = _mm_mul_ps(temp0_63, zmm9)
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)
        float temp0_67[0x4] = _mm_mul_ps(temp0_62, zmm8)
        float temp0_68[0x4] = _mm_add_ps(temp0_64, temp0_61)
        float temp0_69[0x4] = _mm_mul_ps(temp0_66, zmm7)
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xff)
        float temp0_71[0x4] = _mm_add_ps(temp0_65, temp0_67)
        float temp0_72[0x4] = _mm_mul_ps(temp0_70, zmm10)
        float var_c8_1[0x4] = temp0_68
        *(r14_1 + rax + 0xc)
        float var_b8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_71, temp0_69), temp0_72)
        *(r14_1 + rax + 0x10)
        result, zmm7, zmm8, zmm9, zmm10 = sub_142650870(arg2, &var_e8)
        i += 1
        r14_1 = &(*r14_1)[5]
    while (i s< *(arg1 + 0x88))

if (*(arg1 + 0x98) s> 0)
    float (* r14_2)[0x4] = nullptr
    
    do
        zmm3 = data_142d4cc00
        zmm4 = data_142d4cc20
        zmm5 = data_142d4cc30
        int64_t rdx_1 = *(arg1 + 0x90)
        int32_t var_6c_2 = 0x3f800000
        zmm1 = *(r14_2 + rdx_1 + 4)
        var_78[0] = (*(r14_2 + rdx_1))[0]
        zmm2 = *(r14_2 + rdx_1 + 8)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm8)
        float temp0_77[0x4] = _mm_shuffle_ps(var_78, var_78, 0xe1)
        temp0_77[0] = zmm1[0]
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm7)
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc6)
        temp0_80[0] = zmm2[0]
        float temp0_81[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm10)
        float temp0_84[0x4] = _mm_mul_ps(temp0_81, zmm9)
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xc9)
        float temp0_86[0x4] = _mm_add_ps(temp0_84, temp0_76)
        float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm8)
        float temp0_89[0x4] = _mm_add_ps(temp0_86, temp0_79)
        float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm7)
        float temp0_92[0x4] = _mm_add_ps(temp0_89, temp0_83)
        float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm9)
        float temp0_95[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        var_e8 = temp0_92
        float temp0_96[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        float temp0_97[0x4] = _mm_add_ps(temp0_94, temp0_88)
        float temp0_98[0x4] = _mm_mul_ps(temp0_96, zmm9)
        float temp0_99[0x4] = _mm_mul_ps(temp0_95, zmm10)
        float temp0_100[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_91)
        float temp0_102[0x4] = _mm_mul_ps(temp0_100, zmm8)
        float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm7)
        float temp0_105[0x4] = _mm_add_ps(temp0_101, temp0_99)
        float temp0_106[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_107[0x4] = _mm_add_ps(temp0_98, temp0_102)
        float temp0_108[0x4] = _mm_mul_ps(temp0_106, zmm10)
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0)
        float var_d8_2[0x4] = temp0_105
        float temp0_110[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
        float temp0_111[0x4] = _mm_add_ps(temp0_107, temp0_104)
        float temp0_112[0x4] = _mm_mul_ps(temp0_110, zmm9)
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
        float temp0_114[0x4] = _mm_mul_ps(temp0_109, zmm8)
        float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm7)
        float temp0_116[0x4] = _mm_add_ps(temp0_111, temp0_108)
        float temp0_117[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xff)
        float temp0_118[0x4] = _mm_add_ps(temp0_112, temp0_114)
        float temp0_119[0x4] = _mm_mul_ps(temp0_117, zmm10)
        float var_c8_2[0x4] = temp0_116
        float var_b8_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_118, temp0_115), temp0_119)
        result, zmm7, zmm8, zmm9 =
            sub_142650370(arg2, &var_e8, rdx_1 + 0xc + sx.q(i_1) * 0x18, arg4)
        i_1 += 1
        r14_2 = &(*r14_2)[6]
    while (i_1 s< *(arg1 + 0x98))

return result
