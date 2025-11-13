// 函数: sub_141543150
// 地址: 0x141543150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8

switch (zx.d(*(arg2 + 8)))
    case 1
        sub_1415308e0(arg4, arg1, arg2, arg3)
    case 3
        sub_141532820(arg4, arg1, arg2, arg3)
    case 4
        float zmm6[0x4] = arg3[2]
        float zmm14[0x4] = *(arg2 + 0x40)
        float zmm1[0x4]
        float zmm7[0x4]
        float zmm13[0x4]
        float zmm3[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm6), data_143ef7530, 1)) == 0)
            float zmm4[0x4] = *arg3
            float zmm2[0x4] = *(arg2 + 0x20)
            zmm3 = *(arg2 + 0x30)
            float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
            float temp0_136[0x4] = _mm_mul_ps(zmm3, zmm6)
            float temp0_137[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143ef72e0)
            float temp0_139[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            zmm13 = _mm_mul_ps(zmm6, zmm14)
            float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm2))
            float temp0_144[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_147[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143ef72d0)
            float temp0_149[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xd2)
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143ef72c0)
            float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
            zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
            float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
            zmm6 = _mm_add_ps(temp0_151, temp0_150)
            float temp0_158[0x4] =
                _mm_sub_ps(temp0_154, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), zmm1))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, zmm1)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
            zmm7 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_136)), 
                arg3[1])
        else
            zmm1 = *arg3
            float temp0_4[0x4] = _mm_add_ps(zmm1, zmm1)
            float zmm9[0x4] = arg3[1]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float zmm11[0x4] = data_143ef72f0
            float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm1)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
            float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x1a)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), temp0_10)
            float temp0_15[0x4] = _mm_add_ps(temp0_11, _mm_shuffle_ps(temp0_7, temp0_7, 1))
            _mm_mul_ps(zmm14, zmm6)
            float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_9)
            float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_13)
            zmm3 = *(arg2 + 0x20)
            float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_15)
            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm6)
            float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm6)
            float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            zmm1 = __andps_xmmxud_memxud(temp0_22, data_143ef7300)
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
            float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_25, 0x82)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
            float temp0_30[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_28, 0x88)
            float temp0_32[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
            float temp0_33[0x4] = _mm_add_ps(zmm3, zmm3)
            zmm11[0].q = zmm9 u>> 0x40
            float temp0_34[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x29)
            float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm3)
            float temp0_38[0x4] = _mm_mul_ps(temp0_23, temp0_36)
            float temp0_39[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x12)
            float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_39)
            float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                _mm_shuffle_ps(temp0_37, temp0_37, 1))
            float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_38)
            float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_41)
            float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
            float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
            float temp0_49[0x4] = _mm_mul_ps(temp0_35, temp0_46)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143ef7300)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
                _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_58[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), temp0_55, 0x88)
            float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_30)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
            float zmm5[0x4] = *(arg2 + 0x30)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
            zmm11[0].q = zmm5 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
            float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
            float var_158[0x4] = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_148_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_138_1 = temp0_99[0].12
            int96_t var_128_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            int128_t zmm11_1
            float zmm15_1[0x4]
            zmm11_1, zmm13, zmm15_1 = sub_1407740e0(&var_158, 0x322bcc77)
            uint32_t zmm0_1[0x4] = data_143ef7520 ^ zmm11_1
            float temp0_105[0x4] = _mm_cmpeq_ps(zmm15_1, zmm13, 2)
            float zmm2_1[0x4] = var_158[0]
            float zmm1_1 = var_158[1]
            zmm15_1 = _mm_and_ps(temp0_105, zmm0_1) ^ data_143ef7520
            zmm0_1 = var_158[2]
            zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
            zmm1_1 = zmm1_1 * zmm15_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
            var_158[0] = zmm2_1[0]
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
            var_158[1] = zmm1_1
            zmm1_1 = var_148_1:4.d * temp0_107[0]
            var_158[2] = zmm0_1[0]
            zmm0_1 = var_148_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
            float zmm3_1 = var_148_1.d * temp0_107[0]
            zmm2_1 = var_138_1.d
            var_148_1:4.d = zmm1_1
            var_148_1:8.d = zmm0_1[0]
            zmm0_1 = var_138_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
            zmm1_1 = var_138_1:4.d * temp0_108[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_138_1:4.d = zmm1_1
            var_138_1:8.d = zmm0_1[0]
            var_148_1.d = zmm3_1
            var_138_1.d = zmm2_1[0]
            uint32_t var_118[0x4]
            sub_14077e4a0(&var_118, &var_158)
            uint32_t zmm5_1[0x4] = var_118
            zmm6 = data_143ef72b0
            float temp0_109[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                    temp0_114), 
                temp0_114)
            zmm1 = zx.o(0)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            float temp0_125[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_128_1:4.d, 0)
            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_1) ^ data_143ef72a0, temp0_125)
                ^ data_143ef72a0
            zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_128[0].q)
        float var_108[0x4] = zmm6
        float var_f8_1[0x4] = zmm7
        float var_e8_1[0x4] = zmm13
        sub_141543150(arg1, zmm1, &var_108, arg4)
    case 8
        sub_14153ce60(arg4, arg1, arg2, arg3)
    case 0x40
        sub_14153af20(arg4, arg1, *(arg2 + 0x10), arg3)
    case 0x41
        sub_1415308e0(arg4, arg1, *(arg2 + 0x10), arg3)
    case 0x43
        sub_141532820(arg4, arg1, *(arg2 + 0x10), arg3)
    case 0x48
        sub_14153ce60(arg4, arg1, *(arg2 + 0x10), arg3)
    case 0x80
        int64_t var_178_1 = arg4[5]
        sub_1415d7ad0(arg1, *arg4, arg4[1], arg2, arg3, arg4[2], (*arg4[3])[0], (*arg4[4])[0])
    case 0x81
        int64_t var_178_2 = arg4[5]
        sub_1415d73d0(arg1, *arg4, arg4[1], arg2, arg3, arg4[2], (*arg4[3])[0], (*arg4[4])[0])
    case 0x83
        int64_t var_178_3 = arg4[5]
        sub_1415d7750(arg1, *arg4, arg4[1], arg2, arg3, arg4[2], (*arg4[3])[0], (*arg4[4])[0])
    case 0x88
        int64_t var_178_4 = arg4[5]
        sub_1415d7e50(arg1, *arg4, arg4[1], arg2, arg3, arg4[2], (*arg4[3])[0], (*arg4[4])[0])
    default
        sub_14153af20(arg4, arg1, arg2, arg3)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
