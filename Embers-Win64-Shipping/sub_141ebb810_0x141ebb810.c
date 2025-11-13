// 函数: sub_141ebb810
// 地址: 0x141ebb810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm11[0x4]
float var_78[0x4] = zmm11
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
float zmm4[0x4] = *arg3
float zmm2[0x4] = data_143dbb1fc
float zmm14[0x4] = *arg4
float zmm7[0x4] = arg3[2]
float zmm13[0x4] = data_143f3a620
float zmm5[0x4] = data_14399f720
float zmm8[0x4] = data_143f3a560
float zmm9[0x4] = data_143f3a550
float zmm10[0x4] = data_143f3a540
float temp0[0x4] = _mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm14, (*(arg4 + 8))[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(*(arg4 + 4), 0)[0].q)
uint32_t var_118[0x4]
float var_108[0x4]
float zmm1[0x4]
float zmm6[0x4]
float zmm15[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(temp0_5, zmm7), zmm13, 1)) == 0)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_140[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), temp0_138)
    float temp0_141[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
    float temp0_142[0x4] = _mm_mul_ps(temp0_3, zmm7)
    float temp0_143[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_144[0x4] = _mm_mul_ps(temp0_140, zmm8)
    float temp0_145[0x4] = _mm_mul_ps(temp0_143, zmm5)
    float temp0_146[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xd2)
    float temp0_147[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
    zmm15 = _mm_mul_ps(temp0_5, zmm7)
    float temp0_149[0x4] = _mm_add_ps(temp0_144, temp0_145)
    float temp0_151[0x4] = _mm_mul_ps(temp0_141, _mm_shuffle_ps(zmm4, zmm4, 0x55))
    float temp0_153[0x4] = _mm_mul_ps(temp0_147, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
    float temp0_154[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xc9)
    float temp0_155[0x4] = _mm_mul_ps(temp0_151, zmm9)
    float temp0_156[0x4] = _mm_mul_ps(temp0_153, zmm10)
    float temp0_157[0x4] = _mm_add_ps(temp0_149, temp0_155)
    float temp0_158[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_159[0x4] = _mm_mul_ps(temp0_154, temp0_158)
    float temp0_160[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_161[0x4] = _mm_mul_ps(temp0_146, temp0_160)
    zmm6 = _mm_add_ps(temp0_157, temp0_156)
    float temp0_163[0x4] = _mm_sub_ps(temp0_161, temp0_159)
    float temp0_164[0x4] = _mm_add_ps(temp0_163, temp0_163)
    float temp0_165[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xd2)
    float temp0_166[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xc9)
    float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_160)
    float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_158)
    float temp0_169[0x4] = _mm_mul_ps(temp0_164, temp0_143)
    zmm13 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_167, temp0_168), _mm_add_ps(temp0_169, temp0_142)), arg3[1])
else
    zmm10 = data_143f3a510
    zmm8 = arg3[1]
    float temp0_9[0x4] = _mm_add_ps(zmm4, zmm4)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm4, zmm4, 4)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    _mm_mul_ps(temp0_5, zmm7)
    float temp0_13[0x4] = _mm_mul_ps(zmm4, temp0_9)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x29), temp0_10)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x12)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x1a)
    float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_11)
    float temp0_20[0x4] = _mm_add_ps(temp0_17, _mm_shuffle_ps(temp0_13, temp0_13, 1))
    float temp0_21[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_15)
    float temp0_23[0x4] = _mm_sub_ps(temp0_15, temp0_18)
    float temp0_24[0x4] = _mm_add_ps(zmm5, zmm5)
    float temp0_25[0x4] = _mm_mul_ps(temp0_22, zmm7)
    float temp0_26[0x4] = _mm_mul_ps(temp0_21, temp0_23)
    float temp0_27[0x4] = _mm_sub_ps(zmm10, temp0_20)
    float temp0_28[0x4] = _mm_mul_ps(zmm5, temp0_24)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_27, zmm7), data_143f3a520)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_26, zmm1, 0x32)
    float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1, 0), temp0_31, 0x82)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_25, zmm1, 0x31)
    float temp0_36[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1, 0x10), temp0_34, 0x88)
    float temp0_38[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, temp0_26, 0x12), zmm1, 0xe8)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x29)
    zmm10[0].q = zmm8 u>> 0x40
    float temp0_40[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
    float temp0_42[0x4] = _mm_mul_ps(temp0_39, _mm_shuffle_ps(zmm5, zmm5, 4))
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x1a)
    float temp0_44[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_46[0x4] = _mm_add_ps(temp0_43, _mm_shuffle_ps(temp0_28, temp0_28, 1))
    float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0x12), temp0_44)
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
    float temp0_50[0x4] = _mm_add_ps(temp0_48, temp0_42)
    float temp0_51[0x4] = _mm_sub_ps(temp0_42, temp0_48)
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, temp0_5)
    float temp0_53[0x4] = _mm_mul_ps(temp0_49, temp0_51)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_46), temp0_5), data_143f3a520)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, zmm1, 0x32)
    float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, zmm1, 0), temp0_57, 0x82)
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_52, zmm1, 0x31)
    float temp0_62[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1, 0x10), temp0_60, 0x88)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_52, temp0_53, 0x12)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
    float temp0_65[0x4] = _mm_shuffle_ps(temp0_63, zmm1, 0xe8)
    float temp0_66[0x4] = _mm_mul_ps(temp0_64, temp0_36)
    float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_38)
    zmm10[0].q = temp0_3 u>> 0x40
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_3, zmm10, 0xc4)
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), temp0_40)
    float temp0_74[0x4] = _mm_add_ps(temp0_66, _mm_mul_ps(temp0_70, temp0_33))
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_33)
    float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_68)
    float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_38)
    float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_72)
    float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_36)
    float temp0_83[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
    var_108 = temp0_80
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_76)
    float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_36)
    float temp0_87[0x4] = _mm_mul_ps(temp0_83, temp0_40)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_79)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_33)
    float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_38)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_87)
    float temp0_94[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
    float temp0_95[0x4] = _mm_add_ps(temp0_86, temp0_90)
    float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_40)
    float temp0_97[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0)
    int96_t var_f8_1 = temp0_93[0].12
    float temp0_98[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
    float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_92)
    float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_36)
    float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_38)
    float temp0_103[0x4] = _mm_mul_ps(temp0_97, temp0_33)
    float temp0_104[0x4] = _mm_add_ps(temp0_99, temp0_96)
    float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xff), temp0_40)
    float temp0_107[0x4] = _mm_add_ps(temp0_100, temp0_103)
    int96_t var_e8_1 = temp0_104[0].12
    int96_t var_d8_1 = _mm_add_ps(_mm_add_ps(temp0_107, temp0_102), temp0_106)[0].12
    zmm10, zmm13, zmm15 = sub_1407740e0(&var_108, 0x322bcc77)
    float zmm2_1[0x4] = var_108[0]
    float zmm1_1 = var_108[1]
    zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm15, 2), data_143f3a610 ^ zmm10)
    uint32_t zmm0_1[0x4] = var_108[2]
    zmm13 ^= data_143f3a610
    zmm2_1[0] = zmm2_1[0] * zmm13[0]
    zmm1_1 = zmm1_1 * zmm13[0]
    var_108[0] = zmm2_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm13[0]
    var_108[1] = zmm1_1
    var_108[2] = zmm0_1[0]
    zmm0_1 = var_f8_1:8.d
    float temp0_112[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
    zmm1_1 = var_f8_1:4.d * temp0_112[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_112[0]
    float zmm3_1 = var_f8_1.d * temp0_112[0]
    zmm2_1 = var_e8_1.d
    var_f8_1:4.d = zmm1_1
    var_f8_1:8.d = zmm0_1[0]
    zmm0_1 = var_e8_1:8.d
    float temp0_113[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
    zmm1_1 = var_e8_1:4.d * temp0_113[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_113[0]
    zmm2_1[0] = zmm2_1[0] * temp0_113[0]
    var_e8_1:4.d = zmm1_1
    var_e8_1:8.d = zmm0_1[0]
    var_f8_1.d = zmm3_1
    var_e8_1.d = zmm2_1[0]
    sub_14077e4a0(&var_118, &var_108)
    zmm5 = var_118
    zmm6 = data_143f3a5f0
    zmm8 = data_143f3a560
    zmm9 = data_143f3a550
    zmm10 = data_143f3a540
    float temp0_114[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_116[0x4] = _mm_add_ps(temp0_114, _mm_shuffle_ps(temp0_114, temp0_114, 0x4e))
    float temp0_118[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0x39), temp0_116)
    float temp0_119[0x4] = _mm_rsqrt_ps(temp0_118)
    float temp0_120[0x4] = _mm_mul_ps(temp0_118, zmm6)
    float temp0_125[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_120)), 
            temp0_119), 
        temp0_119)
    float temp0_128[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_125, temp0_125), temp0_120))
    float temp0_130[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_118, 2)
    float temp0_132[0x4] = _mm_add_ps(_mm_mul_ps(temp0_128, temp0_125), temp0_125)
    float temp0_133[0x4] = _mm_unpacklo_ps(var_d8_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_132, zmm5) ^ data_143f3a5e0, temp0_130) ^ data_143f3a5e0
    zmm13 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_d8_1.d, var_d8_1:8.d[0].q), temp0_133[0].q)

float zmm12[0x4] = *(arg1 + 0x90)

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm15), data_143f3a620, 1)) == 0)
    zmm2 = *(arg1 + 0x70)
    zmm4 = *(arg1 + 0x80)
    float temp0_306[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
    float temp0_308[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_306)
    float temp0_309[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    float temp0_310[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_311[0x4] = _mm_mul_ps(zmm2, temp0_310)
    float temp0_312[0x4] = _mm_mul_ps(temp0_308, zmm8)
    float temp0_313[0x4] = _mm_mul_ps(zmm4, zmm15)
    float temp0_314[0x4] = _mm_mul_ps(zmm12, zmm15)
    float temp0_315[0x4] = _mm_add_ps(temp0_312, temp0_311)
    float temp0_317[0x4] = _mm_mul_ps(temp0_309, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_320[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_321[0x4] = _mm_mul_ps(temp0_317, zmm9)
    float temp0_322[0x4] = _mm_shuffle_ps(temp0_313, temp0_313, 0xd2)
    float temp0_323[0x4] = _mm_mul_ps(temp0_320, zmm10)
    float var_e8_3[0x4] = temp0_314
    float temp0_325[0x4] = _mm_add_ps(_mm_add_ps(temp0_315, temp0_321), temp0_323)
    float temp0_326[0x4] = _mm_shuffle_ps(temp0_313, temp0_313, 0xc9)
    var_108 = temp0_325
    float temp0_327[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_328[0x4] = _mm_mul_ps(temp0_326, temp0_327)
    float temp0_329[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_331[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_322, temp0_329), temp0_328)
    float temp0_332[0x4] = _mm_add_ps(temp0_331, temp0_331)
    float temp0_333[0x4] = _mm_mul_ps(temp0_310, temp0_332)
    float temp0_335[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_332, temp0_332, 0xd2), temp0_329)
    float temp0_336[0x4] = _mm_shuffle_ps(temp0_332, temp0_332, 0xc9)
    float temp0_337[0x4] = _mm_add_ps(temp0_333, temp0_313)
    float var_f8_3[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_sub_ps(temp0_335, _mm_mul_ps(temp0_336, temp0_327)), temp0_337), zmm13)
else
    zmm9 = data_143f3a510
    float temp0_177[0x4] = _mm_add_ps(zmm6, zmm6)
    float temp0_178[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
    float temp0_179[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_180[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
    _mm_mul_ps(zmm12, zmm15)
    float temp0_183[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_177, temp0_177, 0x29), temp0_178)
    float temp0_184[0x4] = _mm_mul_ps(temp0_177, zmm6)
    float temp0_187[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(temp0_177, temp0_177, 0x12), _mm_shuffle_ps(zmm6, zmm6, 0xff))
    float temp0_190[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_184, temp0_184, 0x1a), 
        _mm_shuffle_ps(temp0_184, temp0_184, 1))
    float zmm3[0x4] = *(arg1 + 0x70)
    float temp0_191[0x4] = _mm_add_ps(temp0_187, temp0_183)
    float temp0_192[0x4] = _mm_sub_ps(temp0_183, temp0_187)
    float temp0_193[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_194[0x4] = _mm_mul_ps(temp0_191, zmm15)
    float temp0_195[0x4] = _mm_mul_ps(temp0_179, temp0_192)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, temp0_190), zmm15), data_143f3a520)
    float temp0_199[0x4] = _mm_shuffle_ps(temp0_195, zmm1, 0x32)
    float temp0_201[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_194, zmm1, 0), temp0_199, 0x82)
    float temp0_202[0x4] = _mm_shuffle_ps(temp0_194, zmm1, 0x31)
    float temp0_204[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_195, zmm1, 0x10), temp0_202, 0x88)
    float temp0_206[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_194, temp0_195, 0x12), zmm1, 0xe8)
    float temp0_207[0x4] = _mm_add_ps(zmm3, zmm3)
    zmm9[0].q = zmm13 u>> 0x40
    float temp0_208[0x4] = _mm_shuffle_ps(zmm13, zmm9, 0xc4)
    float temp0_209[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_210[0x4] = _mm_mul_ps(zmm3, temp0_207)
    float temp0_212[0x4] = _mm_mul_ps(temp0_193, _mm_shuffle_ps(temp0_207, temp0_207, 0x29))
    float temp0_214[0x4] = _mm_mul_ps(temp0_209, _mm_shuffle_ps(temp0_207, temp0_207, 0x12))
    float temp0_217[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_210, temp0_210, 0x1a), 
        _mm_shuffle_ps(temp0_210, temp0_210, 1))
    float temp0_218[0x4] = _mm_add_ps(temp0_214, temp0_212)
    float temp0_219[0x4] = _mm_sub_ps(temp0_212, temp0_214)
    float temp0_220[0x4] = _mm_sub_ps(zmm9, temp0_217)
    float temp0_221[0x4] = _mm_mul_ps(temp0_218, zmm12)
    float temp0_222[0x4] = _mm_mul_ps(temp0_180, temp0_219)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_220, zmm12), data_143f3a520)
    float temp0_225[0x4] = _mm_shuffle_ps(temp0_222, zmm1, 0x32)
    float temp0_227[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_221, zmm1, 0), temp0_225, 0x82)
    float temp0_230[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_222, zmm1, 0x10), 
        _mm_shuffle_ps(temp0_221, zmm1, 0x31), 0x88)
    float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0x55), temp0_204)
    float temp0_233[0x4] = _mm_shuffle_ps(temp0_221, temp0_222, 0x12)
    zmm5 = *(arg1 + 0x80)
    float temp0_234[0x4] = _mm_shuffle_ps(temp0_233, zmm1, 0xe8)
    float temp0_236[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xaa), temp0_206)
    zmm9[0].q = zmm5 u>> 0x40
    float temp0_237[0x4] = _mm_shuffle_ps(zmm5, zmm9, 0xc4)
    float temp0_238[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0)
    float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xff), temp0_208)
    float temp0_242[0x4] = _mm_add_ps(temp0_232, _mm_mul_ps(temp0_238, temp0_201))
    float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0), temp0_201)
    float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_236)
    float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xaa), temp0_206)
    float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_240)
    float temp0_250[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0x55), temp0_204)
    float temp0_251[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0xff)
    float var_158[0x4] = temp0_248
    float temp0_252[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0x55)
    float temp0_253[0x4] = _mm_add_ps(temp0_250, temp0_244)
    float temp0_254[0x4] = _mm_mul_ps(temp0_252, temp0_204)
    float temp0_255[0x4] = _mm_mul_ps(temp0_251, temp0_208)
    float temp0_256[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0)
    float temp0_257[0x4] = _mm_add_ps(temp0_253, temp0_247)
    float temp0_258[0x4] = _mm_mul_ps(temp0_256, temp0_201)
    float temp0_260[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_234, temp0_234, 0xaa), temp0_206)
    float temp0_261[0x4] = _mm_add_ps(temp0_254, temp0_258)
    float temp0_262[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0xff)
    float temp0_263[0x4] = _mm_add_ps(temp0_257, temp0_255)
    float temp0_264[0x4] = _mm_mul_ps(temp0_262, temp0_208)
    float temp0_265[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0)
    float temp0_266[0x4] = _mm_add_ps(temp0_261, temp0_260)
    float temp0_267[0x4] = _mm_mul_ps(temp0_265, temp0_201)
    int96_t var_148_1 = temp0_263[0].12
    float temp0_268[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0x55)
    float temp0_269[0x4] = _mm_add_ps(temp0_266, temp0_264)
    float temp0_270[0x4] = _mm_mul_ps(temp0_268, temp0_204)
    int96_t var_138_1 = temp0_269[0].12
    float temp0_271[0x4] = _mm_add_ps(temp0_270, temp0_267)
    float temp0_273[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xaa), temp0_206)
    float temp0_275[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xff), temp0_208)
    int96_t var_128_1 = _mm_add_ps(_mm_add_ps(temp0_271, temp0_273), temp0_275)[0].12
    int128_t zmm9_1
    float zmm14_1[0x4]
    zmm9_1, zmm11, zmm14_1 = sub_1407740e0(&var_158, 0x322bcc77)
    float zmm2_2[0x4] = var_158[0]
    float zmm1_2 = var_158[1]
    zmm14_1 = _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm11, 2), data_143f3a610 ^ zmm9_1)
    uint32_t zmm0_2[0x4] = var_158[2]
    zmm14_1 ^= data_143f3a610
    zmm2_2[0] = zmm2_2[0] * zmm14_1[0]
    zmm1_2 = zmm1_2 * zmm14_1[0]
    zmm0_2[0] = zmm0_2[0] f* zmm14_1[0]
    var_158[0] = zmm2_2[0]
    float temp0_280[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
    var_158[2] = zmm0_2[0]
    zmm0_2 = var_148_1:8.d
    zmm0_2[0] = zmm0_2[0] f* temp0_280[0]
    var_158[1] = zmm1_2
    zmm1_2 = var_148_1:4.d * temp0_280[0]
    float zmm3_2 = var_148_1.d * temp0_280[0]
    zmm2_2 = var_138_1.d
    var_148_1:8.d = zmm0_2[0]
    zmm0_2 = var_138_1:8.d
    var_148_1:4.d = zmm1_2
    float temp0_281[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
    zmm0_2[0] = zmm0_2[0] f* temp0_281[0]
    zmm2_2[0] = zmm2_2[0] * temp0_281[0]
    zmm1_2 = var_138_1:4.d * temp0_281[0]
    var_138_1:8.d = zmm0_2[0]
    var_148_1.d = zmm3_2
    var_138_1.d = zmm2_2[0]
    var_138_1:4.d = zmm1_2
    sub_14077e4a0(&var_118, &var_158)
    uint32_t zmm6_1[0x4] = var_118
    float zmm5_1[0x4] = data_143f3a5f0
    float temp0_282[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
    float var_e8_2[0x4] = zmm11
    float temp0_284[0x4] = _mm_add_ps(temp0_282, _mm_shuffle_ps(temp0_282, temp0_282, 0x4e))
    float temp0_286[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_284, temp0_284, 0x39), temp0_284)
    float temp0_287[0x4] = _mm_rsqrt_ps(temp0_286)
    float temp0_288[0x4] = _mm_mul_ps(temp0_286, zmm5_1)
    float temp0_293[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_287, temp0_287), temp0_288)), 
            temp0_287), 
        temp0_287)
    float temp0_296[0x4] =
        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_293, temp0_293), temp0_288))
    uint32_t zmm0_3[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_286, 2)
    float temp0_300[0x4] = _mm_add_ps(_mm_mul_ps(temp0_296, temp0_293), temp0_293)
    float temp0_301[0x4] = _mm_unpacklo_ps(var_128_1:4.d, 0)
    zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_300, zmm6_1) ^ data_143f3a5e0, zmm0_3) ^ data_143f3a5e0
    float var_f8_2[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_301[0].q)
    var_108 = zmm5_1

sub_140ae2c60(arg1 + 0x50, arg2, &var_108)
__security_check_cookie(rax_1 ^ &var_188)
return arg2
