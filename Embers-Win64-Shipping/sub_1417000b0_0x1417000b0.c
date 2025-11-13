// 函数: sub_1417000b0
// 地址: 0x1417000b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
float zmm15[0x4] = arg1[2]
float zmm13[0x4] = arg4
float zmm8[0x4] = arg2[2]
float zmm14[0x4] = data_143ef7530
void* const rsi = arg1[0xb][0].q
void* const rdi = *(arg1 + 0xb8)
float zmm9[0x4] = data_143ef72e0
float zmm10[0x4] = data_143ef72d0
float zmm11[0x4] = data_143ef72c0
float var_188[0x4]
uint32_t var_148[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm12[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm8), zmm14, 1)) == 0)
    zmm4 = *arg2
    zmm2 = *arg1
    arg4 = arg1[1]
    float temp0_132[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_132)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(arg4, zmm8)
    float temp0_137[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_138[0x4] = _mm_mul_ps(temp0_134, zmm9)
    float temp0_139[0x4] = _mm_mul_ps(temp0_137, zmm2)
    zmm12 = _mm_mul_ps(zmm15, zmm8)
    float temp0_141[0x4] = _mm_add_ps(temp0_138, temp0_139)
    float temp0_143[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_146[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_147[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xd2)
    float temp0_148[0x4] = _mm_mul_ps(temp0_143, zmm10)
    float temp0_149[0x4] = _mm_mul_ps(temp0_146, zmm11)
    float temp0_150[0x4] = _mm_add_ps(temp0_141, temp0_148)
    float temp0_151[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_152[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_153[0x4] = _mm_mul_ps(temp0_147, temp0_152)
    zmm6 = _mm_add_ps(temp0_150, temp0_149)
    float temp0_157[0x4] =
        _mm_sub_ps(temp0_153, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_151))
    float temp0_158[0x4] = _mm_add_ps(temp0_157, temp0_157)
    float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xd2)
    float temp0_160[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xc9)
    float temp0_161[0x4] = _mm_mul_ps(temp0_159, temp0_152)
    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_151)
    float temp0_163[0x4] = _mm_mul_ps(temp0_158, temp0_137)
    zmm7 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_161, temp0_162), _mm_add_ps(temp0_163, temp0_136)), arg2[1])
else
    arg4 = *arg2
    zmm10 = data_143ef72f0
    float temp0_3[0x4] = _mm_add_ps(arg4, arg4)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
    float temp0_5[0x4] = _mm_shuffle_ps(arg4, arg4, 4)
    float temp0_6[0x4] = _mm_shuffle_ps(arg4, arg4, 0xff)
    _mm_mul_ps(zmm8, zmm15)
    float temp0_8[0x4] = _mm_mul_ps(arg4, temp0_3)
    float temp0_10[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_3, temp0_3, 0x29))
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x12)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
    float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_11)
    float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
    float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_10)
    float temp0_17[0x4] = _mm_sub_ps(temp0_10, temp0_13)
    arg4 = *arg1
    float temp0_18[0x4] = _mm_sub_ps(zmm10, temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm8)
    float temp0_20[0x4] = _mm_mul_ps(temp0_4, temp0_17)
    float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm8)
    zmm8 = arg2[1]
    float temp0_22[0x4] = _mm_shuffle_ps(arg4, arg4, 4)
    zmm1 = __andps_xmmxud_memxud(temp0_21, data_143ef7300)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x32)
    float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1, 0), temp0_24, 0x82)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_19, zmm1, 0x31)
    float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0x10), temp0_27, 0x88)
    float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, temp0_20, 0x12), zmm1, 0xe8)
    float temp0_32[0x4] = _mm_add_ps(arg4, arg4)
    zmm10[0].q = zmm8 u>> 0x40
    float temp0_33[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
    float temp0_34[0x4] = _mm_shuffle_ps(arg4, arg4, 0xff)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_36[0x4] = _mm_mul_ps(arg4, temp0_32)
    float temp0_38[0x4] = _mm_mul_ps(temp0_22, _mm_shuffle_ps(temp0_32, temp0_32, 0x29))
    float temp0_40[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(temp0_32, temp0_32, 0x12))
    float temp0_43[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), _mm_shuffle_ps(temp0_36, temp0_36, 1))
    float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
    float temp0_45[0x4] = _mm_sub_ps(temp0_38, temp0_40)
    float temp0_46[0x4] = _mm_sub_ps(zmm10, temp0_43)
    float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm15)
    float temp0_48[0x4] = _mm_mul_ps(temp0_35, temp0_45)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_46, zmm15), data_143ef7300)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), 
        _mm_shuffle_ps(temp0_48, zmm1, 0x32), 0x82)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x10)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, _mm_shuffle_ps(temp0_47, zmm1, 0x31), 0x88)
    float temp0_58[0x4] = _mm_mul_ps(temp0_55, temp0_29)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
    zmm5 = arg1[1]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, zmm1, 0xe8)
    float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_31)
    zmm10[0].q = zmm5 u>> 0x40
    float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), temp0_33)
    float temp0_68[0x4] = _mm_add_ps(temp0_58, _mm_mul_ps(temp0_64, temp0_26))
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_26)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_62)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_31)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_29)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
    var_188 = temp0_74
    float temp0_78[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_29)
    float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_33)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
    float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_26)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_31)
    float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_33)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
    int96_t var_178_1 = temp0_87[0].12
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_29)
    float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_31)
    float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_26)
    float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_33)
    float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
    int96_t var_168_1 = temp0_98[0].12
    int96_t var_158_1 = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), temp0_100)[0].12
    zmm10, zmm12, zmm13, zmm14 = sub_1407740e0(&var_188, 0x322bcc77)
    float zmm2_1[0x4] = var_188[0]
    float zmm1_1 = var_188[1]
    zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm12, 2), data_143ef7520 ^ zmm10) ^ data_143ef7520
    zmm2_1[0] = zmm2_1[0] * zmm14[0]
    uint32_t zmm0_1[0x4] = var_188[2]
    zmm0_1[0] = zmm0_1[0] f* zmm14[0]
    zmm1_1 = zmm1_1 * zmm14[0]
    var_188[0] = zmm2_1[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
    var_188[2] = zmm0_1[0]
    zmm0_1 = var_178_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_106[0]
    var_188[1] = zmm1_1
    zmm1_1 = var_178_1:4.d * temp0_106[0]
    float zmm3 = var_178_1.d * temp0_106[0]
    zmm2_1 = var_168_1.d
    var_178_1:8.d = zmm0_1[0]
    zmm0_1 = var_168_1:8.d
    var_178_1:4.d = zmm1_1
    float temp0_107[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
    zmm2_1[0] = zmm2_1[0] * temp0_107[0]
    zmm1_1 = var_168_1:4.d * temp0_107[0]
    var_168_1:8.d = zmm0_1[0]
    var_178_1.d = zmm3
    var_168_1.d = zmm2_1[0]
    var_168_1:4.d = zmm1_1
    sub_14077e4a0(&var_148, &var_188)
    zmm5 = var_148
    zmm6 = data_143ef72b0
    zmm14 = data_143ef7530
    zmm9 = data_143ef72e0
    zmm10 = data_143ef72d0
    zmm11 = data_143ef72c0
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
    float temp0_127[0x4] = _mm_unpacklo_ps(var_158_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm5) ^ data_143ef72a0, temp0_124) ^ data_143ef72a0
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), temp0_127[0].q)

zmm15 = arg1[5]
float var_108[0x4] = zmm6
zmm6 = arg3[2]
float var_f8[0x4] = zmm7
float var_e8[0x4] = zmm12

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm6), zmm14, 1)) == 0)
    zmm4 = *arg3
    zmm2 = arg1[3]
    arg4 = arg1[4]
    float temp0_300[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_302[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_300)
    float temp0_303[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_304[0x4] = _mm_mul_ps(arg4, zmm6)
    float temp0_305[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_306[0x4] = _mm_mul_ps(temp0_302, zmm9)
    float temp0_307[0x4] = _mm_mul_ps(temp0_305, zmm2)
    zmm12 = _mm_mul_ps(zmm6, zmm15)
    float temp0_309[0x4] = _mm_add_ps(temp0_306, temp0_307)
    float temp0_311[0x4] = _mm_mul_ps(temp0_303, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_314[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_315[0x4] = _mm_mul_ps(temp0_311, zmm10)
    float temp0_316[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_317[0x4] = _mm_mul_ps(temp0_314, zmm11)
    float temp0_318[0x4] = _mm_add_ps(temp0_309, temp0_315)
    float temp0_319[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_321[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0xd2), temp0_319)
    zmm6 = _mm_add_ps(temp0_318, temp0_317)
    float temp0_325[0x4] =
        _mm_sub_ps(temp0_321, _mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0xc9), temp0_316))
    float temp0_326[0x4] = _mm_add_ps(temp0_325, temp0_325)
    float temp0_327[0x4] = _mm_mul_ps(temp0_305, temp0_326)
    float temp0_329[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_326, temp0_326, 0xd2), temp0_319)
    float temp0_330[0x4] = _mm_shuffle_ps(temp0_326, temp0_326, 0xc9)
    float temp0_331[0x4] = _mm_add_ps(temp0_327, temp0_304)
    zmm7 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_329, _mm_mul_ps(temp0_330, temp0_316)), temp0_331), arg3[1])
else
    zmm1 = *arg3
    zmm10 = data_143ef72f0
    zmm8 = arg3[1]
    float temp0_171[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_172[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_173[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    _mm_mul_ps(zmm15, zmm6)
    float temp0_175[0x4] = _mm_mul_ps(temp0_171, zmm1)
    float temp0_177[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0x29), temp0_173)
    float temp0_178[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_179[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0x1a)
    float temp0_181[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0x12), temp0_178)
    float temp0_183[0x4] = _mm_add_ps(temp0_179, _mm_shuffle_ps(temp0_175, temp0_175, 1))
    float temp0_184[0x4] = _mm_add_ps(temp0_181, temp0_177)
    float temp0_185[0x4] = _mm_sub_ps(temp0_177, temp0_181)
    arg4 = arg1[3]
    float temp0_186[0x4] = _mm_sub_ps(zmm10, temp0_183)
    float temp0_187[0x4] = _mm_mul_ps(temp0_184, zmm6)
    float temp0_188[0x4] = _mm_mul_ps(temp0_172, temp0_185)
    float temp0_189[0x4] = _mm_mul_ps(temp0_186, zmm6)
    float temp0_190[0x4] = _mm_shuffle_ps(arg4, arg4, 4)
    zmm1 = __andps_xmmxud_memxud(temp0_189, data_143ef7300)
    float temp0_192[0x4] = _mm_shuffle_ps(temp0_188, zmm1, 0x32)
    float temp0_194[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_187, zmm1, 0), temp0_192, 0x82)
    float temp0_195[0x4] = _mm_shuffle_ps(temp0_187, zmm1, 0x31)
    float temp0_197[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, zmm1, 0x10), temp0_195, 0x88)
    float temp0_199[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_187, temp0_188, 0x12), zmm1, 0xe8)
    float temp0_200[0x4] = _mm_add_ps(arg4, arg4)
    zmm10[0].q = zmm8 u>> 0x40
    float temp0_201[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
    float temp0_202[0x4] = _mm_shuffle_ps(arg4, arg4, 0xff)
    float temp0_203[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_204[0x4] = _mm_mul_ps(arg4, temp0_200)
    float temp0_206[0x4] = _mm_mul_ps(temp0_190, _mm_shuffle_ps(temp0_200, temp0_200, 0x29))
    float temp0_208[0x4] = _mm_mul_ps(temp0_202, _mm_shuffle_ps(temp0_200, temp0_200, 0x12))
    float temp0_211[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0x1a), 
        _mm_shuffle_ps(temp0_204, temp0_204, 1))
    float temp0_212[0x4] = _mm_add_ps(temp0_208, temp0_206)
    float temp0_213[0x4] = _mm_sub_ps(temp0_206, temp0_208)
    float temp0_214[0x4] = _mm_sub_ps(zmm10, temp0_211)
    float temp0_215[0x4] = _mm_mul_ps(temp0_212, zmm15)
    float temp0_216[0x4] = _mm_mul_ps(temp0_203, temp0_213)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_214, zmm15), data_143ef7300)
    float temp0_221[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_215, zmm1, 0), 
        _mm_shuffle_ps(temp0_216, zmm1, 0x32), 0x82)
    float temp0_222[0x4] = _mm_shuffle_ps(temp0_216, zmm1, 0x10)
    float temp0_224[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_221, temp0_221, 0x55), temp0_197)
    float temp0_226[0x4] = _mm_shuffle_ps(temp0_222, _mm_shuffle_ps(temp0_215, zmm1, 0x31), 0x88)
    float temp0_227[0x4] = _mm_shuffle_ps(temp0_215, temp0_216, 0x12)
    zmm5 = arg1[4]
    float temp0_228[0x4] = _mm_shuffle_ps(temp0_227, zmm1, 0xe8)
    float temp0_230[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_221, temp0_221, 0xaa), temp0_199)
    zmm10[0].q = zmm5 u>> 0x40
    float temp0_231[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
    float temp0_232[0x4] = _mm_shuffle_ps(temp0_221, temp0_221, 0)
    float temp0_234[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_221, temp0_221, 0xff), temp0_201)
    float temp0_236[0x4] = _mm_add_ps(temp0_224, _mm_mul_ps(temp0_232, temp0_194))
    float temp0_238[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0), temp0_194)
    float temp0_239[0x4] = _mm_add_ps(temp0_236, temp0_230)
    float temp0_241[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xaa), temp0_199)
    float temp0_242[0x4] = _mm_add_ps(temp0_239, temp0_234)
    float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0x55), temp0_197)
    float temp0_245[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xff)
    var_188 = temp0_242
    float temp0_246[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0x55)
    float temp0_247[0x4] = _mm_add_ps(temp0_244, temp0_238)
    float temp0_248[0x4] = _mm_mul_ps(temp0_246, temp0_197)
    float temp0_249[0x4] = _mm_mul_ps(temp0_245, temp0_201)
    float temp0_250[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0)
    float temp0_251[0x4] = _mm_add_ps(temp0_247, temp0_241)
    float temp0_252[0x4] = _mm_mul_ps(temp0_250, temp0_194)
    float temp0_254[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0xaa), temp0_199)
    float temp0_255[0x4] = _mm_add_ps(temp0_248, temp0_252)
    float temp0_256[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xff)
    float temp0_257[0x4] = _mm_add_ps(temp0_251, temp0_249)
    float temp0_258[0x4] = _mm_mul_ps(temp0_256, temp0_201)
    float temp0_259[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0)
    float temp0_260[0x4] = _mm_add_ps(temp0_255, temp0_254)
    float temp0_261[0x4] = _mm_mul_ps(temp0_259, temp0_194)
    int96_t var_178_2 = temp0_257[0].12
    float temp0_262[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0x55)
    float temp0_263[0x4] = _mm_add_ps(temp0_260, temp0_258)
    float temp0_264[0x4] = _mm_mul_ps(temp0_262, temp0_197)
    int96_t var_168_2 = temp0_263[0].12
    float temp0_265[0x4] = _mm_add_ps(temp0_264, temp0_261)
    float temp0_267[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xaa), temp0_199)
    float temp0_269[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xff), temp0_201)
    int96_t var_158_2 = _mm_add_ps(_mm_add_ps(temp0_265, temp0_267), temp0_269)[0].12
    int128_t zmm10_1
    float zmm14_1[0x4]
    zmm10_1, zmm12, zmm13, zmm14_1 = sub_1407740e0(&var_188, 0x322bcc77)
    float zmm2_2[0x4] = var_188[0]
    float zmm1_2 = var_188[1]
    zmm14_1 = _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm12, 2), data_143ef7520 ^ zmm10_1) ^ data_143ef7520
    zmm2_2[0] = zmm2_2[0] * zmm14_1[0]
    uint32_t zmm0_2[0x4] = var_188[2]
    zmm0_2[0] = zmm0_2[0] f* zmm14_1[0]
    zmm1_2 = zmm1_2 * zmm14_1[0]
    var_188[0] = zmm2_2[0]
    float temp0_274[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
    var_188[2] = zmm0_2[0]
    zmm0_2 = var_178_2:8.d
    zmm0_2[0] = zmm0_2[0] f* temp0_274[0]
    var_188[1] = zmm1_2
    zmm1_2 = var_178_2:4.d * temp0_274[0]
    float zmm3_1 = var_178_2.d * temp0_274[0]
    zmm2_2 = var_168_2.d
    var_178_2:8.d = zmm0_2[0]
    zmm0_2 = var_168_2:8.d
    var_178_2:4.d = zmm1_2
    float temp0_275[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
    zmm0_2[0] = zmm0_2[0] f* temp0_275[0]
    zmm2_2[0] = zmm2_2[0] * temp0_275[0]
    zmm1_2 = var_168_2:4.d * temp0_275[0]
    var_168_2:8.d = zmm0_2[0]
    var_178_2.d = zmm3_1
    var_168_2.d = zmm2_2[0]
    var_168_2:4.d = zmm1_2
    sub_14077e4a0(&var_148, &var_188)
    uint32_t zmm5_1[0x4] = var_148
    zmm6 = data_143ef72b0
    float temp0_276[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    float temp0_278[0x4] = _mm_add_ps(temp0_276, _mm_shuffle_ps(temp0_276, temp0_276, 0x4e))
    float temp0_280[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_278, temp0_278, 0x39), temp0_278)
    float temp0_281[0x4] = _mm_rsqrt_ps(temp0_280)
    float temp0_282[0x4] = _mm_mul_ps(temp0_280, zmm6)
    float temp0_287[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_281, temp0_281), temp0_282)), 
            temp0_281), 
        temp0_281)
    float temp0_290[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_287, temp0_287), temp0_282))
    uint32_t zmm0_3[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_280, 2)
    float temp0_294[0x4] = _mm_add_ps(_mm_mul_ps(temp0_290, temp0_287), temp0_287)
    float temp0_295[0x4] = _mm_unpacklo_ps(var_158_2:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_294, zmm5_1) ^ data_143ef72a0, zmm0_3) ^ data_143ef72a0
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_2.d, var_158_2:8.d[0].q), temp0_295[0].q)

float result = (*arg1)[0x2b]
float var_138[0x4] = zmm6
float var_128[0x4] = zmm7
float var_118[0x4] = zmm12

if (result == 9)
    float (* var_1a8_1)[0x4] = arg1
    
    if (*(rdi + 8) != 1)
        rdi = nullptr
    
    if (*(rsi + 8) != 3)
        rsi = nullptr
    
    int64_t var_1b0_1 = arg5
    result = sub_1416fbbe0(rsi, &var_108, rdi + 0x10, &var_138, zmm13[0])
else if (result == 0x12 && arg1[0xd][0] == 3)
    int128_t* r8 = &var_138
    int128_t* rdx_3 = &var_108
    
    if ((*(arg1[0xb][0].q i+ 8) & 0x3f) != 8)
        result = sub_1416ff370(arg1, rdx_3, r8)
    else
        result = sub_141700fa0(arg1, rdx_3, r8)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
