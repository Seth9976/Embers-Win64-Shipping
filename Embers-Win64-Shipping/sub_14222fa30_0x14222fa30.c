// 函数: sub_14222fa30
// 地址: 0x14222fa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg3[2]
float zmm10[0x4]
float var_68[0x4] = zmm10
float zmm11[0x4]
float var_78[0x4] = zmm11
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_168 = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float var_164 = temp0[0]
float var_160 = temp0_1[0]
void** var_108
sub_142231560(arg1, &var_108, &var_168, &data_143dbb0c0)
sub_140ade170(arg1 + 0x3c, &var_168)
float zmm2[0x4] = *(arg1 + 0x34)
int128_t zmm13 = zx.o(0)
float zmm14[0x4] = data_14399f668
float zmm15[0x4] = arg3[2]
float zmm5[0x4] = *arg3
float zmm6[0x4] = var_168.o
float temp0_2[0x4] = _mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x38))[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm14, data_14399f670[0].q)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_7[0x4] = _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
float zmm1_1[0x4]
float zmm7[0x4]
float zmm8[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_7, zmm15), data_143f51400, 1)) == 0)
    float temp0_140[0x4] = _mm_mul_ps(temp0_5, zmm15)
    float temp0_141[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
    float temp0_142[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
    float temp0_144[0x4] = _mm_mul_ps(temp0_141, _mm_shuffle_ps(zmm5, zmm5, 0))
    float temp0_145[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xd2)
    float temp0_146[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_147[0x4] = __mulps_xmmps_memps(temp0_144, data_143f513c0)
    float temp0_148[0x4] = _mm_mul_ps(temp0_146, zmm6)
    float temp0_149[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
    float temp0_150[0x4] = _mm_add_ps(temp0_147, temp0_148)
    float temp0_152[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm5, zmm5, 0x55))
    float temp0_154[0x4] = _mm_mul_ps(temp0_149, _mm_shuffle_ps(zmm5, zmm5, 0xaa))
    float temp0_155[0x4] = __mulps_xmmps_memps(temp0_152, data_143f513b0)
    float temp0_156[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xc9)
    float temp0_157[0x4] = __mulps_xmmps_memps(temp0_154, data_143f513a0)
    float temp0_158[0x4] = _mm_add_ps(temp0_150, temp0_155)
    float temp0_159[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_160[0x4] = _mm_mul_ps(temp0_156, temp0_159)
    float temp0_161[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_162[0x4] = _mm_mul_ps(temp0_145, temp0_161)
    zmm7 = _mm_add_ps(temp0_158, temp0_157)
    float temp0_164[0x4] = _mm_sub_ps(temp0_162, temp0_160)
    float temp0_165[0x4] = _mm_add_ps(temp0_164, temp0_164)
    float temp0_166[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xd2)
    float temp0_167[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xc9)
    float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_161)
    float temp0_169[0x4] = _mm_mul_ps(temp0_167, temp0_159)
    float temp0_170[0x4] = _mm_mul_ps(temp0_165, temp0_146)
    zmm8 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_168, temp0_169), _mm_add_ps(temp0_170, temp0_140)), arg3[1])
else
    zmm10 = data_143f51330
    zmm8 = arg3[1]
    float temp0_11[0x4] = _mm_add_ps(zmm5, zmm5)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_15[0x4] = _mm_mul_ps(zmm5, temp0_11)
    float temp0_17[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(temp0_11, temp0_11, 0x29))
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x12)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x1a)
    float temp0_20[0x4] = _mm_mul_ps(temp0_13, temp0_18)
    float temp0_22[0x4] = _mm_add_ps(temp0_19, _mm_shuffle_ps(temp0_15, temp0_15, 1))
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_17)
    float temp0_24[0x4] = _mm_sub_ps(temp0_17, temp0_20)
    float temp0_25[0x4] = _mm_sub_ps(zmm10, temp0_22)
    float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm15)
    float temp0_27[0x4] = _mm_mul_ps(temp0_14, temp0_24)
    float temp0_28[0x4] = _mm_add_ps(zmm6, zmm6)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_25, zmm15), data_143f51340)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, zmm1_1, 0x32)
    float temp0_32[0x4] = _mm_mul_ps(temp0_28, zmm6)
    float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1_1, 0), temp0_31, 0x82)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_26, zmm1_1, 0x31)
    float temp0_37[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1_1, 0x10), temp0_35, 0x88)
    float temp0_39[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, temp0_27, 0x12), zmm1_1, 0xe8)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x29)
    zmm10[0].q = zmm8 u>> 0x40
    float temp0_41[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
    float temp0_43[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(zmm6, zmm6, 4))
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x1a)
    float temp0_45[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_47[0x4] = _mm_add_ps(temp0_44, _mm_shuffle_ps(temp0_32, temp0_32, 1))
    float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x12), temp0_45)
    float temp0_50[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
    float temp0_51[0x4] = _mm_add_ps(temp0_49, temp0_43)
    float temp0_52[0x4] = _mm_sub_ps(temp0_43, temp0_49)
    float temp0_53[0x4] = _mm_mul_ps(temp0_51, temp0_7)
    float temp0_54[0x4] = _mm_mul_ps(temp0_50, temp0_52)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_47), temp0_7), data_143f51340)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_54, zmm1_1, 0x32)
    float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1_1, 0), temp0_58, 0x82)
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_53, zmm1_1, 0x31)
    float temp0_63[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, zmm1_1, 0x10), temp0_61, 0x88)
    float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, temp0_54, 0x12), zmm1_1, 0xe8)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
    float temp0_67[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_68[0x4] = _mm_mul_ps(temp0_66, temp0_39)
    float temp0_69[0x4] = _mm_mul_ps(temp0_67, temp0_37)
    zmm10[0].q = temp0_5 u>> 0x40
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_5, zmm10, 0xc4)
    float temp0_71[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), temp0_41)
    float temp0_75[0x4] = _mm_add_ps(temp0_69, _mm_mul_ps(temp0_71, temp0_34))
    float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0), temp0_34)
    float temp0_78[0x4] = _mm_add_ps(temp0_75, temp0_68)
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_39)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_73)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0x55), temp0_37)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
    float var_158[0x4] = temp0_81
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_77)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_37)
    float temp0_88[0x4] = _mm_mul_ps(temp0_84, temp0_41)
    float temp0_89[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_80)
    float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
    float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_39)
    float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_88)
    float temp0_95[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
    float temp0_96[0x4] = _mm_add_ps(temp0_87, temp0_91)
    float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_41)
    float temp0_98[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0)
    int96_t var_148_1 = temp0_94[0].12
    float temp0_99[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
    float temp0_100[0x4] = _mm_add_ps(temp0_96, temp0_93)
    float temp0_101[0x4] = _mm_mul_ps(temp0_99, temp0_37)
    float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xaa), temp0_39)
    float temp0_104[0x4] = _mm_mul_ps(temp0_98, temp0_34)
    float temp0_105[0x4] = _mm_add_ps(temp0_100, temp0_97)
    float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xff), temp0_41)
    float temp0_108[0x4] = _mm_add_ps(temp0_101, temp0_104)
    int96_t var_138_1 = temp0_105[0].12
    int96_t var_128_1 = _mm_add_ps(_mm_add_ps(temp0_108, temp0_103), temp0_107)[0].12
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm10, zmm13, zmm14_1, zmm15_1 = sub_1407740e0(&var_158, 0x322bcc77)
    float zmm2_1[0x4] = var_158[0]
    float zmm1_2 = var_158[1]
    float zmm4_2[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f51400, _mm_mul_ps(zmm15_1, zmm14_1), 2), 
        data_143f513f0 ^ zmm10)
    uint32_t zmm0_2[0x4] = var_158[2]
    zmm4_2 ^= data_143f513f0
    zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
    zmm1_2 = zmm1_2 * zmm4_2[0]
    var_158[0] = zmm2_1[0]
    zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
    var_158[1] = zmm1_2
    float temp0_114[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
    zmm1_2 = var_148_1:4.d * temp0_114[0]
    var_158[2] = zmm0_2[0]
    zmm0_2 = var_148_1:8.d
    zmm0_2[0] = zmm0_2[0] f* temp0_114[0]
    float zmm3_1 = var_148_1.d * temp0_114[0]
    zmm2_1 = var_138_1.d
    float temp0_115[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
    var_148_1:4.d = zmm1_2
    var_148_1:8.d = zmm0_2[0]
    zmm0_2 = var_138_1:8.d
    zmm1_2 = var_138_1:4.d * temp0_115[0]
    zmm0_2[0] = zmm0_2[0] f* temp0_115[0]
    zmm2_1[0] = zmm2_1[0] * temp0_115[0]
    var_138_1:4.d = zmm1_2
    var_138_1:8.d = zmm0_2[0]
    var_148_1.d = zmm3_1
    var_138_1.d = zmm2_1[0]
    uint32_t var_118[0x4]
    sub_14077e4a0(&var_118, &var_158)
    zmm5 = var_118
    zmm7 = data_143f513e0
    float temp0_116[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_118[0x4] = _mm_add_ps(temp0_116, _mm_shuffle_ps(temp0_116, temp0_116, 0x4e))
    float temp0_120[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x39), temp0_118)
    float temp0_121[0x4] = _mm_rsqrt_ps(temp0_120)
    float temp0_122[0x4] = _mm_mul_ps(temp0_120, zmm7)
    float temp0_127[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_122)), 
            temp0_121), 
        temp0_121)
    float temp0_130[0x4] = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_127, temp0_127), temp0_122))
    float temp0_132[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_120, 2)
    float temp0_134[0x4] = _mm_add_ps(_mm_mul_ps(temp0_130, temp0_127), temp0_127)
    float temp0_135[0x4] = _mm_unpacklo_ps(var_128_1:4.d, 0)
    zmm7 = _mm_and_ps(_mm_mul_ps(temp0_134, zmm5) ^ data_143f513d0, temp0_132) ^ data_143f513d0
    zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_135[0].q)

float zmm9_1[0x4] = *arg2
zmm11 = (*arg2)[1]
float zmm12[0x4] = (*arg2)[2]
float temp0_175[0x4] = __mulps_xmmps_memps(zmm7, data_143f51410)
float temp0_176[0x4] = _mm_unpacklo_ps(zmm11, 0)
float temp0_179[0x4] =
    _mm_sub_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm9_1, zmm12[0].q), temp0_176[0].q), zmm8)
float temp0_180[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xc9)
float temp0_181[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xd2)
float temp0_182[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xff)
zmm5 = __andps_xmmxud_memxud(temp0_179, data_143f51340)
float temp0_185[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_181)
float temp0_188[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_180), temp0_185)
float temp0_189[0x4] = _mm_add_ps(temp0_188, temp0_188)
float temp0_190[0x4] = _mm_mul_ps(temp0_182, temp0_189)
float temp0_192[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_189, temp0_189, 0xc9), temp0_181)
float temp0_193[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xd2)
float temp0_194[0x4] = _mm_add_ps(temp0_190, zmm5)
int32_t var_bc
zmm2 = var_bc
float temp0_195[0x4] = _mm_mul_ps(temp0_193, temp0_180)
zmm2[0] = zmm2[0] * 0.5f
float zmm0_1[0x4] = zmm2 ^ 0x80000000
float temp0_197[0x4] = _mm_add_ps(_mm_sub_ps(temp0_195, temp0_192), temp0_194)
float temp0_198[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0xaa)

if (not(temp0_198[0] < zmm0_1[0]))
    zmm0_1 = _mm_min_ss(temp0_198[0], zmm2[0])

float temp0_200[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_202[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zx.o(0), zmm0_1[0].q), 0)
float temp0_203[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
float temp0_205[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0xc9), temp0_203)
float temp0_207[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0xd2), temp0_200)
float temp0_208[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_209[0x4] = _mm_sub_ps(temp0_207, temp0_205)
float temp0_210[0x4] = _mm_add_ps(temp0_209, temp0_209)
float temp0_211[0x4] = _mm_mul_ps(temp0_208, temp0_210)
float temp0_212[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0xc9)
float temp0_213[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0xd2)
float temp0_214[0x4] = _mm_mul_ps(temp0_212, temp0_203)
float temp0_215[0x4] = _mm_mul_ps(temp0_213, temp0_200)
float temp0_216[0x4] = _mm_add_ps(temp0_211, temp0_202)
float temp0_219[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_215, temp0_214), temp0_216), zmm8)
temp0_219[0] = temp0_219[0] - zmm9_1[0]
float temp0_220[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0x55)
temp0_220[0] = temp0_220[0] - zmm11[0]
float temp0_221[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xaa)
temp0_221[0] = temp0_221[0] - zmm12[0]
temp0_219[0] = temp0_219[0] * temp0_219[0]
temp0_220[0] = temp0_220[0] * temp0_220[0]
temp0_221[0] = temp0_221[0] * temp0_221[0]
temp0_220[0] = temp0_220[0] + temp0_219[0]
temp0_220[0] = temp0_220[0] + temp0_221[0]
float temp0_222[0x4] = _mm_sqrt_ss(0, temp0_220[0])
bool cond:0 = temp0_222[0] > 9.99999994e-09f
int32_t var_c0
temp0_222[0] = temp0_222[0] f- var_c0
float* rdx_1
rdx_1.b = cond:0
float temp0_223[0x4] = _mm_max_ss(temp0_222[0], zmm13.d)
float rax_1
int32_t* rcx_3
float zmm3[0x4]
float zmm4_1[0x4]

if (rdx_1.b == 0)
    rcx_3 = arg5
    *rcx_3 = data_143dbb1f8.q
    rax_1 = data_143dbb200
else
    rcx_3 = arg5
    zmm4_1 = 0x3f000000
    zmm3 = zx.o(0)
    zmm2 = 0x3f000000
    zmm3[0] = temp0_220[0]
    float temp0_224[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_224[0] = temp0_224[0] * temp0_224[0]
    zmm3[0] = zmm3[0] * temp0_224[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_224[0] = temp0_224[0] * zmm2[0]
    temp0_224[0] = temp0_224[0] + temp0_224[0]
    temp0_224[0] = temp0_224[0] * temp0_224[0]
    zmm3[0] = zmm3[0] * temp0_224[0]
    zmm4_1[0] = 0.5f - zmm3[0]
    temp0_224[0] = temp0_224[0] * zmm4_1[0]
    temp0_224[0] = temp0_224[0] + temp0_224[0]
    temp0_219[0] = temp0_219[0] * temp0_224[0]
    temp0_220[0] = temp0_220[0] * temp0_224[0]
    temp0_221[0] = temp0_221[0] * temp0_224[0]
    *rcx_3 = (_mm_unpacklo_ps(temp0_219 ^ 0x80000000, (temp0_220 ^ 0x80000000)[0].q)).q
    rax_1 = (temp0_221 ^ 0x80000000)[0]

rcx_3[2] = rax_1
temp0_223[0] = temp0_223[0] f* rcx_3[1]
temp0_223[0] = temp0_223[0] f* rcx_3[2]
zmm4_1 = *arg2
temp0_223[0] = temp0_223[0] f* *rcx_3
zmm3 = (*arg2)[1]
zmm3[0] = zmm3[0] - temp0_223[0]
zmm1_1 = (*arg2)[2]
zmm1_1[0] = zmm1_1[0] - temp0_223[0]
zmm4_1[0] = zmm4_1[0] - temp0_223[0]
float result = zmm1_1[0]
*arg4 = (_mm_unpacklo_ps(zmm4_1, zmm3[0].q)).q
arg4[1].d = result
return result
