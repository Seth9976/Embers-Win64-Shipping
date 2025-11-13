// 函数: sub_141f37870
// 地址: 0x141f37870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
float zmm11[0x4]

if ((*(arg1 + 0x14c) & 1) == 0)
    zmm11 = sub_1405c6ac0(arg1, 0, 0)

void* rax_3 = *(arg1[0x14] + 0x130)
int128_t* rax_4

if (rax_3 == 0)
    rax_4 = &data_143dbb0c0
else
    rax_4 = rax_3 + 0x1c0

float var_e8[0x4] = *rax_4
float zmm1[0x4] = rax_4[1]
float var_c8[0x4] = rax_4[2]
float var_78[0x4] = zmm11
float var_118[0x4]
sub_140ad7d70(&var_e8, &var_118, &arg1[0x38])
float zmm14[0x4] = arg3[2]
float zmm7[0x4] = *(arg1 + 0x1e0)
float zmm13[0x4] = data_143f3b4e0
uint32_t zmm8[0x4] = data_143f3b4c0
float var_168[0x4]
uint32_t var_128[0x4]
float zmm1_1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm6[0x4]
float zmm11_1[0x4]
float zmm12[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7), zmm13, 1)) == 0)
    zmm4 = *(arg1 + 0x1c0)
    zmm2 = *arg3
    zmm3 = arg3[1]
    float temp0_132[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_132)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(zmm3, zmm7)
    float temp0_137[0x4] = __mulps_xmmps_memps(temp0_134, data_143f3b3b0)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_139[0x4] = _mm_mul_ps(zmm2, temp0_138)
    zmm12 = _mm_mul_ps(zmm14, zmm7)
    float temp0_141[0x4] = _mm_add_ps(temp0_137, temp0_139)
    float temp0_143[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_146[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_147[0x4] = __mulps_xmmps_memps(temp0_143, data_143f3b3a0)
    float temp0_148[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xd2)
    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_146, data_143f3b390)
    float temp0_150[0x4] = _mm_add_ps(temp0_141, temp0_147)
    float temp0_151[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_152[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_153[0x4] = _mm_mul_ps(temp0_148, temp0_152)
    zmm6 = _mm_add_ps(temp0_150, temp0_149)
    float temp0_157[0x4] =
        _mm_sub_ps(temp0_153, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_151))
    float temp0_158[0x4] = _mm_add_ps(temp0_157, temp0_157)
    float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xd2)
    float temp0_160[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xc9)
    float temp0_161[0x4] = _mm_mul_ps(temp0_159, temp0_152)
    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_151)
    float temp0_163[0x4] = _mm_mul_ps(temp0_158, temp0_138)
    zmm11_1 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_161, temp0_162), _mm_add_ps(temp0_163, temp0_136)), 
        *(arg1 + 0x1d0))
else
    zmm1_1 = *(arg1 + 0x1c0)
    float zmm10_1[0x4] = data_143f3b4b0
    float temp0_3[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
    _mm_mul_ps(zmm7, zmm14)
    float temp0_8[0x4] = _mm_mul_ps(zmm1_1, temp0_3)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x29), temp0_5)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x12)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
    float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_6)
    float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
    float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_10)
    float temp0_17[0x4] = _mm_sub_ps(temp0_10, temp0_13)
    float temp0_18[0x4] = _mm_sub_ps(zmm10_1, temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm7)
    float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm7)
    float temp0_21[0x4] = _mm_mul_ps(temp0_4, temp0_17)
    zmm1_1 = _mm_and_ps(temp0_20, zmm8)
    zmm8 = *(arg1 + 0x1d0)
    float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1_1, 0), 
        _mm_shuffle_ps(temp0_21, zmm1_1, 0x32), 0x82)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_19, zmm1_1, 0x31)
    float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0x10), temp0_26, 0x88)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, temp0_21, 0x12), zmm1_1, 0xe8)
    zmm1_1 = *arg3
    zmm10_1[0].q = zmm8 u>> 0x40
    float temp0_31[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
    zmm8 = _mm_shuffle_ps(zmm8, zmm10_1, 0xc4)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
    float temp0_36[0x4] = _mm_mul_ps(zmm1_1, temp0_31)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x29), temp0_34)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x12), temp0_35)
    float temp0_43[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), _mm_shuffle_ps(temp0_36, temp0_36, 1))
    float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
    float temp0_45[0x4] = _mm_sub_ps(temp0_38, temp0_40)
    float temp0_46[0x4] = _mm_sub_ps(zmm10_1, temp0_43)
    float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm14)
    float temp0_48[0x4] = _mm_mul_ps(temp0_33, temp0_45)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_46, zmm14), data_143f3b4c0)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1_1, 0), 
        _mm_shuffle_ps(temp0_48, zmm1_1, 0x32), 0x82)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x10)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_47, zmm1_1, 0x31)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_55, 0x88)
    float temp0_58[0x4] = _mm_mul_ps(temp0_56, temp0_28)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
    float zmm5[0x4] = arg3[1]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, zmm1_1, 0xe8)
    float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_30)
    zmm10_1[0].q = zmm5 u>> 0x40
    float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm10_1, 0xc4)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), zmm8)
    float temp0_68[0x4] = _mm_add_ps(temp0_58, _mm_mul_ps(temp0_64, temp0_25))
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_25)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_62)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_30)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_28)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
    var_168 = temp0_74
    float temp0_78[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_28)
    float temp0_81[0x4] = _mm_mul_ps(temp0_77, zmm8)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
    float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_25)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_30)
    float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, zmm8)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
    int96_t var_158_1 = temp0_87[0].12
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_28)
    float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_30)
    float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_25)
    float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), zmm8)
    float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
    int96_t var_148_1 = temp0_98[0].12
    int96_t var_138_1 = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), temp0_100)[0].12
    zmm10_1, zmm12, zmm13 = sub_1407740e0(&var_168, 0x322bcc77)
    float zmm2_1[0x4] = var_168[0]
    float zmm1_2 = var_168[1]
    zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm12, 2), data_143f3b4d0 ^ zmm10_1) ^ data_143f3b4d0
    zmm2_1[0] = zmm2_1[0] * zmm13[0]
    uint32_t zmm0_2[0x4] = var_168[2]
    zmm0_2[0] = zmm0_2[0] f* zmm13[0]
    zmm1_2 = zmm1_2 * zmm13[0]
    var_168[0] = zmm2_1[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
    var_168[2] = zmm0_2[0]
    zmm0_2 = var_158_1:8.d
    zmm0_2[0] = zmm0_2[0] f* temp0_106[0]
    var_168[1] = zmm1_2
    zmm1_2 = var_158_1:4.d * temp0_106[0]
    float zmm3_1 = var_158_1.d * temp0_106[0]
    zmm2_1 = var_148_1.d
    var_158_1:8.d = zmm0_2[0]
    zmm0_2 = var_148_1:8.d
    var_158_1:4.d = zmm1_2
    float temp0_107[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
    zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
    zmm2_1[0] = zmm2_1[0] * temp0_107[0]
    zmm1_2 = var_148_1:4.d * temp0_107[0]
    var_148_1:8.d = zmm0_2[0]
    var_158_1.d = zmm3_1
    var_148_1.d = zmm2_1[0]
    var_148_1:4.d = zmm1_2
    sub_14077e4a0(&var_128, &var_168)
    zmm5 = var_128
    zmm6 = data_143f3b3d0
    zmm13 = data_143f3b4e0
    zmm8 = data_143f3b4c0
    float temp0_108[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_110[0x4] = _mm_add_ps(temp0_108, _mm_shuffle_ps(temp0_108, temp0_108, 0x4e))
    float temp0_112[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0x39), temp0_110)
    float temp0_113[0x4] = _mm_rsqrt_ps(temp0_112)
    float temp0_114[0x4] = _mm_mul_ps(temp0_112, zmm6)
    float temp0_119[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_113, temp0_113), temp0_114)), 
            temp0_113), 
        temp0_113)
    float temp0_122[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_114))
    float temp0_124[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_112, 2)
    float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_122, temp0_119), temp0_119)
    float temp0_127[0x4] = _mm_unpacklo_ps(var_138_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm5) ^ data_143f3b3c0, temp0_124) ^ data_143f3b3c0
    zmm11_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), temp0_127[0].q)

float var_f8[0x4]
float var_108[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_f8, zmm12), zmm13, 1)) == 0)
    float temp0_279[0x4] = _mm_mul_ps(var_108, zmm12)
    float temp0_280[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_281[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_282[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_284[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_279, temp0_279, 0xc9), temp0_280)
    float temp0_287[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_279, temp0_279, 0xd2), temp0_281), temp0_284)
    float temp0_288[0x4] = _mm_add_ps(temp0_287, temp0_287)
    float temp0_289[0x4] = _mm_mul_ps(temp0_282, temp0_288)
    zmm8 = _mm_mul_ps(_mm_shuffle_ps(temp0_288, temp0_288, 0xd2), temp0_281)
    float temp0_292[0x4] = _mm_shuffle_ps(temp0_288, temp0_288, 0xc9)
    float temp0_293[0x4] = _mm_add_ps(temp0_289, temp0_279)
    zmm8 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm8, _mm_mul_ps(temp0_292, temp0_280)), temp0_293), 
        zmm11_1)
else
    float zmm9_1[0x4] = data_143f3b4b0
    float temp0_171[0x4] = _mm_add_ps(zmm6, zmm6)
    float temp0_172[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
    float temp0_173[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
    float temp0_174[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xc9)
    float temp0_176[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0x29), temp0_172)
    float temp0_177[0x4] = _mm_mul_ps(temp0_171, zmm6)
    float temp0_180[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0x12), _mm_shuffle_ps(zmm6, zmm6, 0xff))
    float temp0_183[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_177, temp0_177, 0x1a), 
        _mm_shuffle_ps(temp0_177, temp0_177, 1))
    zmm3 = var_118
    float temp0_184[0x4] = _mm_add_ps(temp0_180, temp0_176)
    float temp0_185[0x4] = _mm_sub_ps(temp0_176, temp0_180)
    float temp0_186[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_187[0x4] = _mm_mul_ps(temp0_184, zmm12)
    float temp0_188[0x4] = _mm_mul_ps(temp0_173, temp0_185)
    zmm1_1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm9_1, temp0_183), zmm12), zmm8)
    float temp0_192[0x4] = _mm_shuffle_ps(temp0_188, zmm1_1, 0x32)
    zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_187, zmm1_1, 0), temp0_192, 0x82)
    float temp0_195[0x4] = _mm_shuffle_ps(temp0_187, zmm1_1, 0x31)
    float temp0_197[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, zmm1_1, 0x10), temp0_195, 0x88)
    float temp0_199[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_187, temp0_188, 0x12), zmm1_1, 0xe8)
    float temp0_200[0x4] = _mm_add_ps(zmm3, zmm3)
    zmm9_1[0].q = zmm11_1 u>> 0x40
    float temp0_201[0x4] = _mm_shuffle_ps(zmm11_1, zmm9_1, 0xc4)
    float temp0_202[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_203[0x4] = _mm_mul_ps(zmm3, temp0_200)
    float temp0_205[0x4] = _mm_mul_ps(temp0_186, _mm_shuffle_ps(temp0_200, temp0_200, 0x29))
    float temp0_206[0x4] = _mm_shuffle_ps(temp0_200, temp0_200, 0x12)
    float temp0_207[0x4] = _mm_shuffle_ps(temp0_203, temp0_203, 0x1a)
    float temp0_208[0x4] = _mm_mul_ps(temp0_202, temp0_206)
    float temp0_210[0x4] = _mm_add_ps(temp0_207, _mm_shuffle_ps(temp0_203, temp0_203, 1))
    float temp0_211[0x4] = _mm_add_ps(temp0_208, temp0_205)
    float temp0_212[0x4] = _mm_sub_ps(temp0_205, temp0_208)
    float temp0_213[0x4] = _mm_sub_ps(zmm9_1, temp0_210)
    float temp0_214[0x4] = _mm_mul_ps(temp0_211, var_f8)
    float temp0_215[0x4] = _mm_mul_ps(temp0_174, temp0_212)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_213, var_f8), data_143f3b4c0)
    float temp0_218[0x4] = _mm_shuffle_ps(temp0_215, zmm1_1, 0x32)
    float temp0_220[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_214, zmm1_1, 0), temp0_218, 0x82)
    float temp0_221[0x4] = _mm_shuffle_ps(temp0_214, zmm1_1, 0x31)
    float temp0_223[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_215, zmm1_1, 0x10), temp0_221, 0x88)
    float temp0_225[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_214, temp0_215, 0x12), zmm1_1, 0xe8)
    float temp0_226[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0x55)
    float temp0_227[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xaa)
    float temp0_228[0x4] = _mm_mul_ps(temp0_226, temp0_197)
    float temp0_229[0x4] = _mm_mul_ps(temp0_227, temp0_199)
    zmm9_1[0].q = var_108 u>> 0x40
    float temp0_230[0x4] = _mm_shuffle_ps(var_108, zmm9_1, 0xc4)
    float temp0_231[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0)
    float temp0_233[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0xff), temp0_201)
    float temp0_235[0x4] = _mm_add_ps(temp0_228, _mm_mul_ps(temp0_231, zmm8))
    float temp0_237[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0), zmm8)
    float temp0_238[0x4] = _mm_add_ps(temp0_235, temp0_229)
    float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0xaa), temp0_199)
    float temp0_241[0x4] = _mm_add_ps(temp0_238, temp0_233)
    float temp0_243[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0x55), temp0_197)
    float temp0_244[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0xff)
    var_168 = temp0_241
    float temp0_245[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0x55)
    float temp0_246[0x4] = _mm_add_ps(temp0_243, temp0_237)
    float temp0_247[0x4] = _mm_mul_ps(temp0_245, temp0_197)
    float temp0_248[0x4] = _mm_mul_ps(temp0_244, temp0_201)
    float temp0_249[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0)
    float temp0_250[0x4] = _mm_add_ps(temp0_246, temp0_240)
    float temp0_251[0x4] = _mm_mul_ps(temp0_249, zmm8)
    float temp0_253[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0xaa), temp0_199)
    float temp0_254[0x4] = _mm_add_ps(temp0_247, temp0_251)
    float temp0_255[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xff)
    float temp0_256[0x4] = _mm_add_ps(temp0_250, temp0_248)
    float temp0_257[0x4] = _mm_mul_ps(temp0_255, temp0_201)
    float temp0_258[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0)
    float temp0_259[0x4] = _mm_add_ps(temp0_254, temp0_253)
    float temp0_260[0x4] = _mm_mul_ps(temp0_258, zmm8)
    int96_t var_158_2 = temp0_256[0].12
    float temp0_261[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0x55)
    float temp0_262[0x4] = _mm_add_ps(temp0_259, temp0_257)
    float temp0_263[0x4] = _mm_mul_ps(temp0_261, temp0_197)
    int96_t var_148_2 = temp0_262[0].12
    float temp0_264[0x4] = _mm_add_ps(temp0_263, temp0_260)
    float temp0_266[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xaa), temp0_199)
    float temp0_268[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xff), temp0_201)
    int96_t var_138_2 = _mm_add_ps(_mm_add_ps(temp0_264, temp0_266), temp0_268)[0].12
    int128_t zmm9_2
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    zmm9_2, zmm12_1, zmm13_1, zmm14_1 = sub_1407740e0(&var_168, 0x322bcc77)
    float zmm2_2[0x4] = var_168[0]
    float zmm1_3 = var_168[1]
    zmm13_1 =
        _mm_and_ps(_mm_cmpeq_ps(zmm13_1, _mm_mul_ps(zmm14_1, zmm12_1), 2), data_143f3b4d0 ^ zmm9_2)
    uint32_t zmm0_3[0x4] = var_168[2]
    zmm13_1 ^= data_143f3b4d0
    zmm2_2[0] = zmm2_2[0] * zmm13_1[0]
    zmm1_3 = zmm1_3 * zmm13_1[0]
    var_168[0] = zmm2_2[0]
    zmm0_3[0] = zmm0_3[0] f* zmm13_1[0]
    var_168[1] = zmm1_3
    float temp0_274[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x55)
    zmm1_3 = var_158_2:4.d * temp0_274[0]
    var_168[2] = zmm0_3[0]
    zmm0_3 = var_158_2:8.d
    zmm0_3[0] = zmm0_3[0] f* temp0_274[0]
    float zmm3_2 = var_158_2.d * temp0_274[0]
    zmm2_2 = var_148_2.d
    var_158_2:4.d = zmm1_3
    var_158_2:8.d = zmm0_3[0]
    zmm0_3 = var_148_2:8.d
    float temp0_275[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa)
    zmm1_3 = var_148_2:4.d * temp0_275[0]
    zmm0_3[0] = zmm0_3[0] f* temp0_275[0]
    zmm2_2[0] = zmm2_2[0] * temp0_275[0]
    var_148_2:4.d = zmm1_3
    var_148_2:8.d = zmm0_3[0]
    var_158_2.d = zmm3_2
    var_148_2.d = zmm2_2[0]
    sub_14077e4a0(&var_128, &var_168)
    zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_2.d, var_138_2:8.d[0].q), 
        _mm_unpacklo_ps(var_138_2:4.d, 0)[0].q)
    int32_t var_178_1 = 0x322bcc77
zmm4 = *(arg1 + 0x1c0)
zmm7 = zmm8
zmm2 = *arg3
float temp0_298[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
zmm7[0] = zmm7[0] - zmm1[0]
float temp0_299[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
float temp0_300[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
temp0_299[0] = temp0_299[0] - temp0_300[0]
float temp0_301[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
float temp0_303[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm8[0] = zmm8[0] f- temp0_301[0]
float temp0_304[0x4] = _mm_mul_ps(temp0_298, temp0_303)
float temp0_305[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
float temp0_307[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm2)
float temp0_308[0x4] = __mulps_xmmps_memps(temp0_304, data_143f3b3b0)
float temp0_309[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
float temp0_310[0x4] = _mm_add_ps(temp0_308, temp0_307)
float temp0_312[0x4] = _mm_mul_ps(temp0_305, _mm_shuffle_ps(zmm4, zmm4, 0x55))
float temp0_314[0x4] = _mm_mul_ps(temp0_309, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
float temp0_315[0x4] = __mulps_xmmps_memps(temp0_312, data_143f3b3a0)
float temp0_316[0x4] = __mulps_xmmps_memps(temp0_314, data_143f3b390)
zmm3 = zmm4 ^ 0x80000000
float temp0_317[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float temp0_318[0x4] = _mm_add_ps(temp0_310, temp0_315)
temp0_317[0] = (_mm_shuffle_ps(zmm4, zmm4, 0x55) ^ 0x80000000)[0]
float temp0_320[0x4] = _mm_add_ps(temp0_318, temp0_316)
float temp0_321[0x4] = _mm_shuffle_ps(temp0_317, temp0_317, 0xc6)
zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xaa) ^ 0x80000000
float temp0_323[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
temp0_321[0] = zmm2[0]
float temp0_324[0x4] = _mm_shuffle_ps(temp0_321, temp0_321, 0x27)
float temp0_325[0x4] = _mm_shuffle_ps(temp0_320, temp0_320, 0)
temp0_324[0] = temp0_323[0]
float temp0_326[0x4] = _mm_shuffle_ps(temp0_324, temp0_324, 0x39)
float temp0_328[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_326, temp0_326, 0x1b), temp0_325)
float temp0_329[0x4] = _mm_shuffle_ps(temp0_326, temp0_326, 0x4e)
float temp0_331[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_320, temp0_320, 0xff), temp0_326)
float temp0_332[0x4] = __mulps_xmmps_memps(temp0_328, data_143f3b3b0)
float temp0_333[0x4] = _mm_shuffle_ps(temp0_326, temp0_326, 0xb1)
float temp0_334[0x4] = _mm_add_ps(temp0_332, temp0_331)
float temp0_336[0x4] = _mm_mul_ps(temp0_329, _mm_shuffle_ps(temp0_320, temp0_320, 0x55))
float temp0_338[0x4] = _mm_mul_ps(temp0_333, _mm_shuffle_ps(temp0_320, temp0_320, 0xaa))
float temp0_339[0x4] = __mulps_xmmps_memps(temp0_336, data_143f3b3a0)
float temp0_340[0x4] = __mulps_xmmps_memps(temp0_338, data_143f3b390)
float temp0_342[0x4] = _mm_add_ps(_mm_add_ps(temp0_334, temp0_339), temp0_340)
float temp0_343[0x4] = _mm_unpacklo_ps(zmm7, zmm8[0].q)
*arg2 = temp0_342
arg2[1] = _mm_unpacklo_ps(temp0_343, _mm_unpacklo_ps(temp0_299, 0)[0].q)
arg2[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
__security_check_cookie(rax_1 ^ &var_198)
return arg2
