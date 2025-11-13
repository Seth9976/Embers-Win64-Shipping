// 函数: sub_141f64290
// 地址: 0x141f64290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x430)
arg3[3].d = 0xffffffff
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm9[0x4]
float var_58[0x4] = zmm9
*arg3 = data_143dbb0c0
float zmm10[0x4]
float var_68[0x4] = zmm10
arg3[1] = data_143dbb0d0
float zmm11[0x4]
float var_78[0x4] = zmm11
float zmm12[0x4]
float var_88[0x4] = zmm12
arg3[2] = data_143dbb0e0
int64_t result = *(rsi + 0x1b8)
int64_t rbx = sx.q(arg2)
float zmm15[0x4]
float var_b8[0x4] = zmm15
int64_t rcx_1 = rbx * 6
float zmm6[0x4] = *(result + (rcx_1 << 3))
float zmm13[0x4] = *(result + (rcx_1 << 3) + 0x10)
float zmm14[0x4] = *(result + (rcx_1 << 3) + 0x20)

if (rbx.d == 0xffffffff)
label_141f6483b:
    result.b = 0
else
    while (true)
        rbx = sx.q(*(*(rsi + 0x1a8) + sx.q(rbx.d) * 0xc + 8))
        
        if (rbx.d == 0xffffffff)
            goto label_141f6483b
        
        int32_t rcx_3 = *(*(arg1 + 0x4b0) + (rbx << 2))
        arg3[3].d = rcx_3
        
        if (rcx_3 != 0xffffffff)
            *arg3 = zmm6
            result.b = 1
            arg3[1] = zmm13
            arg3[2] = zmm14
            break
        
        int128_t* rcx_6 = rbx * 0x30 + *(rsi + 0x1b8)
        float zmm5[0x4] = *rcx_6
        zmm7 = rcx_6[2]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7), data_143f3b8f0, 1)) == 0)
            float temp0_135[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), _mm_shuffle_ps(zmm6, zmm6, 0x1b))
            float temp0_136[0x4] = _mm_mul_ps(zmm7, zmm13)
            float temp0_137[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f3b8b0)
            float temp0_139[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            zmm14 = _mm_mul_ps(zmm14, zmm7)
            float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm6))
            float temp0_144[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm6, zmm6, 0x4e))
            float temp0_147[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm6, zmm6, 0xb1))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f3b8a0)
            float temp0_149[0x4] = __mulps_xmmps_memps(temp0_147, data_143f3b890)
            float temp0_150[0x4] = _mm_add_ps(temp0_142, temp0_148)
            float temp0_151[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            zmm6 = _mm_add_ps(temp0_150, temp0_149)
            float temp0_158[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xd2), temp0_152), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_151))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_152)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_151)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
            zmm13 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_136)), 
                rcx_6[1])
        else
            zmm10 = data_143f3b870
            float temp0_4[0x4] = _mm_add_ps(zmm5, zmm5)
            zmm8 = rcx_6[1]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_8[0x4] = _mm_mul_ps(zmm5, temp0_4)
            float temp0_10[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
            float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_11)
            float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
            _mm_mul_ps(zmm7, zmm14)
            float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_10)
            float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_13)
            float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_15)
            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm7)
            float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm7)
            float temp0_23[0x4] = _mm_add_ps(zmm6, zmm6)
            float zmm1[0x4] = __andps_xmmxud_memxud(temp0_22, data_143f3b880)
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
            float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm6)
            float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_25, 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_29, 0x88)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x29)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(zmm6, zmm6, 4))
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x1a)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_41[0x4] = _mm_add_ps(temp0_38, _mm_shuffle_ps(temp0_26, temp0_26, 1))
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x12), temp0_39)
            float temp0_44[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_37)
            float temp0_46[0x4] = _mm_sub_ps(temp0_37, temp0_43)
            float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm14)
            float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_46)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_41), zmm14), 
                data_143f3b880)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x32)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), temp0_52, 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x31)
            float temp0_57[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0x10), temp0_55, 0x88)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, zmm1, 0xe8)
            float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_31)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
            zmm10[0].q = zmm13 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
            float temp0_69[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_65, temp0_28))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_28)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_33)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_31)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
            float var_f8[0x4] = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_31)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_28)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_e8_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_31)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_28)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_d8_1 = temp0_99[0].12
            int96_t var_c8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            zmm10, zmm12, zmm15 = sub_1407740e0(&var_f8, 0x322bcc77)
            float zmm2_1[0x4] = var_f8[0]
            float zmm1_1 = var_f8[1]
            zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), data_143f3b8e0 ^ zmm10)
            uint32_t zmm0_1[0x4] = var_f8[2]
            zmm15 ^= data_143f3b8e0
            zmm2_1[0] = zmm2_1[0] * zmm15[0]
            zmm1_1 = zmm1_1 * zmm15[0]
            var_f8[0] = zmm2_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm15[0]
            var_f8[1] = zmm1_1
            var_f8[2] = zmm0_1[0]
            zmm0_1 = var_e8_1:8.d
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            zmm1_1 = var_e8_1:4.d * temp0_107[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
            float zmm3_1 = var_e8_1.d * temp0_107[0]
            zmm2_1 = var_d8_1.d
            var_e8_1:4.d = zmm1_1
            var_e8_1:8.d = zmm0_1[0]
            zmm0_1 = var_d8_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm1_1 = var_d8_1:4.d * temp0_108[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_d8_1:4.d = zmm1_1
            var_d8_1:8.d = zmm0_1[0]
            var_e8_1.d = zmm3_1
            var_d8_1.d = zmm2_1[0]
            uint32_t var_108[0x4]
            sub_14077e4a0(&var_108, &var_f8)
            zmm5 = var_108
            zmm14 = zmm12
            zmm6 = data_143f3b8d0
            float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                    temp0_114), 
                temp0_114)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            float temp0_125[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_c8_1:4.d, 0)
            zmm6 =
                _mm_and_ps(_mm_mul_ps(temp0_127, zmm5) ^ data_143f3b8c0, temp0_125) ^ data_143f3b8c0
            zmm13 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8_1.d, var_c8_1:8.d[0].q), temp0_128[0].q)
            var_108 = zmm6

return result
