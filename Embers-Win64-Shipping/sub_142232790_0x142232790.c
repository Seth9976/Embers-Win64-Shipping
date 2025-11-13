// 函数: sub_142232790
// 地址: 0x142232790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg3[2]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_118 = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float var_114 = temp0[0]
float var_110 = temp0_1[0]
void** var_f8
float zmm9[0x4] = sub_142231560(arg1, &var_f8, &var_118, &data_143dbb0c0)
sub_140ade170(arg1 + 0x3c, &var_118)
float zmm2[0x4] = *(arg1 + 0x34)
int128_t zmm13 = zx.o(0)
float zmm14[0x4] = data_14399f668
float zmm15[0x4] = arg3[2]
float zmm4[0x4] = *arg3
float zmm5[0x4] = var_118.o
float temp0_2[0x4] = _mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x38))[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm14, data_14399f670[0].q)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_7[0x4] = _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
uint32_t result =
    _mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_7, zmm15), data_143f51400, 1))
float zmm1_1[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]

if (result == 0)
    zmm8 = 0x322bcc77
    float temp0_140[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_142[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), temp0_140)
    float temp0_143[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
    float temp0_144[0x4] = _mm_mul_ps(temp0_5, zmm15)
    float temp0_145[0x4] = __mulps_xmmps_memps(temp0_142, data_143f513c0)
    float temp0_146[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_147[0x4] = _mm_mul_ps(temp0_146, zmm5)
    float temp0_148[0x4] = _mm_shuffle_ps(temp0_144, temp0_144, 0xd2)
    float temp0_149[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
    float temp0_150[0x4] = _mm_add_ps(temp0_145, temp0_147)
    float temp0_152[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm4, zmm4, 0x55))
    float temp0_154[0x4] = _mm_mul_ps(temp0_149, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
    float temp0_155[0x4] = __mulps_xmmps_memps(temp0_152, data_143f513b0)
    float temp0_156[0x4] = _mm_shuffle_ps(temp0_144, temp0_144, 0xc9)
    float temp0_157[0x4] = __mulps_xmmps_memps(temp0_154, data_143f513a0)
    float temp0_158[0x4] = _mm_add_ps(temp0_150, temp0_155)
    float temp0_159[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_160[0x4] = _mm_mul_ps(temp0_156, temp0_159)
    float temp0_161[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_162[0x4] = _mm_mul_ps(temp0_148, temp0_161)
    zmm6 = _mm_add_ps(temp0_158, temp0_157)
    float temp0_164[0x4] = _mm_sub_ps(temp0_162, temp0_160)
    float temp0_165[0x4] = _mm_add_ps(temp0_164, temp0_164)
    float temp0_166[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xd2)
    float temp0_167[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xc9)
    float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_161)
    float temp0_169[0x4] = _mm_mul_ps(temp0_167, temp0_159)
    float temp0_170[0x4] = _mm_mul_ps(temp0_165, temp0_146)
    zmm7 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_168, temp0_169), _mm_add_ps(temp0_170, temp0_144)), arg3[1])
else
    zmm8 = arg3[1]
    float temp0_11[0x4] = _mm_shuffle_ps(zmm4, zmm4, 4)
    float temp0_12[0x4] = _mm_add_ps(zmm4, zmm4)
    float zmm10[0x4] = data_143f51330
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x29), temp0_11)
    float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm4)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x12), temp0_16)
    float temp0_19[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_22[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x1a), _mm_shuffle_ps(temp0_15, temp0_15, 1))
    float temp0_23[0x4] = _mm_add_ps(temp0_18, temp0_14)
    float temp0_24[0x4] = _mm_sub_ps(temp0_14, temp0_18)
    float temp0_25[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
    float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm15)
    float temp0_27[0x4] = _mm_mul_ps(temp0_19, temp0_24)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_22), zmm15), data_143f51340)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, zmm1_1, 0x32)
    float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1_1, 0), temp0_31, 0x82)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_26, zmm1_1, 0x31)
    float temp0_36[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1_1, 0x10), temp0_34, 0x88)
    float temp0_38[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, temp0_27, 0x12), zmm1_1, 0xe8)
    float temp0_39[0x4] = _mm_add_ps(zmm5, zmm5)
    zmm10[0].q = zmm8 u>> 0x40
    float temp0_40[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
    float temp0_41[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
    float temp0_43[0x4] = _mm_mul_ps(zmm5, temp0_39)
    float temp0_45[0x4] = _mm_mul_ps(temp0_25, _mm_shuffle_ps(temp0_39, temp0_39, 0x29))
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x12)
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x1a)
    float temp0_48[0x4] = _mm_mul_ps(temp0_41, temp0_46)
    float temp0_50[0x4] = _mm_add_ps(temp0_47, _mm_shuffle_ps(temp0_43, temp0_43, 1))
    float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_45)
    float temp0_52[0x4] = _mm_sub_ps(temp0_45, temp0_48)
    float temp0_53[0x4] = _mm_sub_ps(zmm10, temp0_50)
    float temp0_54[0x4] = _mm_mul_ps(temp0_51, temp0_7)
    float temp0_55[0x4] = _mm_mul_ps(temp0_42, temp0_52)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_53, temp0_7), data_143f51340)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, zmm1_1, 0x32)
    float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, zmm1_1, 0), temp0_58, 0x82)
    float temp0_63[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm1_1, 0x10), 
        _mm_shuffle_ps(temp0_54, zmm1_1, 0x31), 0x88)
    float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_36)
    zmm10[0].q = temp0_5 u>> 0x40
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_5, zmm10, 0xc4)
    float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_33)
    float temp0_70[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, temp0_55, 0x12), zmm1_1, 0xe8)
    float temp0_71[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
    float temp0_72[0x4] = _mm_add_ps(temp0_65, temp0_68)
    float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), temp0_40)
    float temp0_75[0x4] = _mm_mul_ps(temp0_71, temp0_38)
    float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0), temp0_33)
    float temp0_78[0x4] = _mm_add_ps(temp0_72, temp0_75)
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_38)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_74)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0x55), temp0_36)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
    float var_158[0x4] = temp0_81
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
    float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_77)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_36)
    float temp0_88[0x4] = _mm_mul_ps(temp0_84, temp0_40)
    float temp0_89[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0)
    float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_80)
    float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_33)
    float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xaa), temp0_38)
    float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_88)
    float temp0_95[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xff)
    float temp0_96[0x4] = _mm_add_ps(temp0_87, temp0_91)
    float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_40)
    float temp0_98[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
    int96_t var_148_1 = temp0_94[0].12
    float temp0_99[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
    float temp0_100[0x4] = _mm_add_ps(temp0_96, temp0_93)
    float temp0_101[0x4] = _mm_mul_ps(temp0_99, temp0_36)
    float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_38)
    float temp0_104[0x4] = _mm_mul_ps(temp0_98, temp0_33)
    float temp0_105[0x4] = _mm_add_ps(temp0_100, temp0_97)
    float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_40)
    float temp0_108[0x4] = _mm_add_ps(temp0_101, temp0_104)
    int96_t var_138_1 = temp0_105[0].12
    int96_t var_128_1 = _mm_add_ps(_mm_add_ps(temp0_108, temp0_103), temp0_107)[0].12
    int512_t zmm9_1
    int128_t zmm10_1
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm8, zmm9_1, zmm10_1, zmm13, zmm14_1, zmm15_1 = sub_1407740e0(&var_158, 0x322bcc77)
    float zmm2_1[0x4] = var_158[0]
    float zmm1_2 = var_158[1]
    float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f51400, _mm_mul_ps(zmm14_1, zmm15_1), 2), 
        data_143f513f0 ^ zmm10_1) ^ data_143f513f0
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    uint32_t zmm0_2[0x4] = var_158[2]
    zmm0_2[0] = zmm0_2[0] f* zmm4_1[0]
    zmm1_2 = zmm1_2 * zmm4_1[0]
    var_158[0] = zmm2_1[0]
    float temp0_114[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_158[2] = zmm0_2[0]
    zmm0_2 = var_148_1:8.d
    zmm0_2[0] = zmm0_2[0] f* temp0_114[0]
    var_158[1] = zmm1_2
    zmm1_2 = var_148_1:4.d * temp0_114[0]
    float zmm3_1 = var_148_1.d * temp0_114[0]
    zmm2_1 = var_138_1.d
    float temp0_115[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_148_1:8.d = zmm0_2[0]
    zmm0_2 = var_138_1:8.d
    var_148_1:4.d = zmm1_2
    zmm0_2[0] = zmm0_2[0] f* temp0_115[0]
    zmm2_1[0] = zmm2_1[0] * temp0_115[0]
    zmm1_2 = var_138_1:4.d * temp0_115[0]
    var_138_1:8.d = zmm0_2[0]
    var_148_1.d = zmm3_1
    var_138_1.d = zmm2_1[0]
    var_138_1:4.d = zmm1_2
    uint32_t var_108[0x4]
    result = sub_14077e4a0(&var_108, &var_158)
    zmm5 = var_108
    zmm6 = data_143f513e0
    zmm9_1.o = zmm9
    float temp0_116[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_118[0x4] = _mm_add_ps(temp0_116, _mm_shuffle_ps(temp0_116, temp0_116, 0x4e))
    float temp0_120[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x39), temp0_118)
    float temp0_121[0x4] = _mm_rsqrt_ps(temp0_120)
    float temp0_122[0x4] = _mm_mul_ps(temp0_120, zmm6)
    float temp0_127[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_122)), 
            temp0_121), 
        temp0_121)
    float temp0_130[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_127, temp0_127), temp0_122))
    float temp0_132[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_120, 2)
    float temp0_134[0x4] = _mm_add_ps(_mm_mul_ps(temp0_130, temp0_127), temp0_127)
    float temp0_135[0x4] = _mm_unpacklo_ps(var_128_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_134, zmm5) ^ data_143f513d0, temp0_132) ^ data_143f513d0
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_135[0].q)

float temp0_175[0x4] = __mulps_xmmps_memps(zmm6, data_143f51410)
float zmm0_1[0x4] = (*arg2)[2]
zmm5 = *arg2
float temp0_176[0x4] = _mm_unpacklo_ps((*arg2)[1], 0)
float temp0_178[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm0_1[0].q), temp0_176[0].q)
float temp0_179[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xd2)
float temp0_180[0x4] = _mm_sub_ps(temp0_178, zmm7)
float temp0_181[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xc9)
float temp0_182[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xff)
zmm5 = __andps_xmmxud_memxud(temp0_180, data_143f51340)
float temp0_185[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_179)
float temp0_188[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_181), temp0_185)
float temp0_189[0x4] = _mm_add_ps(temp0_188, temp0_188)
float temp0_190[0x4] = _mm_mul_ps(temp0_182, temp0_189)
float temp0_191[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xc9)
float temp0_192[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xd2)
float temp0_193[0x4] = _mm_mul_ps(temp0_191, temp0_179)
float temp0_194[0x4] = _mm_mul_ps(temp0_192, temp0_181)
float temp0_195[0x4] = _mm_add_ps(temp0_190, zmm5)
float temp0_197[0x4] = _mm_add_ps(_mm_sub_ps(temp0_194, temp0_193), temp0_195)
float temp0_198[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0x55)
zmm1_1 = _mm_and_ps(temp0_197, 0x7fffffff)
zmm2 = _mm_and_ps(temp0_198, 0x7fffffff)
zmm4 = _mm_and_ps(_mm_shuffle_ps(temp0_197, temp0_197, 0xaa), 0x7fffffff)
zmm2[0] = zmm2[0] * zmm2[0]
int32_t var_ac
zmm0_1 = var_ac
zmm0_1[0] = zmm0_1[0] * 0.5f
zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
zmm4[0] = zmm4[0] - zmm0_1[0]
zmm2[0] = zmm2[0] + zmm1_1[0]
float temp0_203[0x4] = _mm_max_ss(zmm4[0], zmm13.d)
temp0_203[0] = temp0_203[0] * temp0_203[0]
zmm2[0] = zmm2[0] + temp0_203[0]
float temp0_204[0x4] = _mm_sqrt_ss(0, zmm2[0])
int32_t var_b0
temp0_204[0] = temp0_204[0] f- var_b0
_mm_max_ss(temp0_204[0], zmm13.d)[0] > zmm8[0]
return result
