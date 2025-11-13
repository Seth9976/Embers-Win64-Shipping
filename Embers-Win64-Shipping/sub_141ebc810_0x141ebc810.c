// 函数: sub_141ebc810
// 地址: 0x141ebc810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm14[0x4] = arg4
float var_f8[0x4]
sub_140ade170(arg1 + 0x3c, &var_f8)
float zmm0[0x4] = *(arg1 + 0x38)
float zmm5[0x4] = *arg3
float zmm3[0x4] = *(arg1 + 0x30)
float zmm15[0x4] = data_14399f668
float zmm6[0x4] = arg3[2]
float zmm13[0x4] = var_f8
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x34), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm15, zmm0[0].q), temp0_3[0].q)
float temp0_6[0x4] = _mm_unpacklo_ps(zmm14, 0)
float temp0_8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, zmm14[0].q), temp0_6[0].q)
float temp0_9[0x4] = _mm_min_ps(temp0_5, zmm6)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, temp0_2)
float zmm7[0x4]
float zmm8_1[0x4]
float zmm9[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(temp0_9, data_143f3a620, 1)) == 0)
    float temp0_142[0x4] = _mm_mul_ps(temp0_10, zmm6)
    float temp0_143[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_144[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_145[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_142, temp0_142, 0xc9), temp0_144)
    float temp0_150[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_142, temp0_142, 0xd2), temp0_143), temp0_147)
    float temp0_151[0x4] = _mm_add_ps(temp0_150, temp0_150)
    float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xc9), temp0_144)
    float temp0_155[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xd2), temp0_143)
    float temp0_156[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x4e)
    float temp0_157[0x4] = _mm_mul_ps(temp0_151, temp0_145)
    float temp0_158[0x4] = _mm_sub_ps(temp0_155, temp0_153)
    float temp0_159[0x4] = _mm_mul_ps(temp0_145, zmm13)
    float temp0_160[0x4] = _mm_mul_ps(temp0_5, zmm6)
    float temp0_161[0x4] = _mm_add_ps(temp0_157, temp0_142)
    float temp0_162[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
    float temp0_163[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
    var_f8 = temp0_160
    float temp0_164[0x4] = _mm_add_ps(temp0_158, temp0_161)
    zmm7 = var_f8
    float temp0_166[0x4] = _mm_mul_ps(temp0_162, _mm_shuffle_ps(zmm5, zmm5, 0))
    zmm9 = __addps_xmmps_memps(temp0_164, arg3[1])
    float temp0_169[0x4] = _mm_mul_ps(temp0_156, _mm_shuffle_ps(zmm5, zmm5, 0x55))
    float temp0_170[0x4] = __mulps_xmmps_memps(temp0_166, data_143f3a560)
    float temp0_171[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
    float temp0_172[0x4] = __mulps_xmmps_memps(temp0_169, data_143f3a550)
    float temp0_173[0x4] = _mm_add_ps(temp0_170, temp0_159)
    float temp0_175[0x4] = __mulps_xmmps_memps(_mm_mul_ps(temp0_163, temp0_171), data_143f3a540)
    zmm6 = _mm_add_ps(_mm_add_ps(temp0_173, temp0_172), temp0_175)
else
    zmm8_1 = arg3[1]
    float temp0_13[0x4] = _mm_add_ps(zmm5, zmm5)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
    float temp0_15[0x4] = _mm_mul_ps(zmm6, temp0_5)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_17[0x4] = _mm_mul_ps(zmm5, temp0_13)
    var_f8 = temp0_15
    float temp0_19[0x4] = _mm_mul_ps(temp0_14, _mm_shuffle_ps(temp0_13, temp0_13, 0x29))
    float temp0_20[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_23[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0x1a), _mm_shuffle_ps(temp0_17, temp0_17, 1))
    float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x12), temp0_16)
    float zmm10[0x4] = data_143f3a510
    float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_19)
    float temp0_27[0x4] = _mm_sub_ps(temp0_19, temp0_25)
    float temp0_28[0x4] = _mm_add_ps(zmm13, zmm13)
    float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm6)
    float temp0_30[0x4] = _mm_mul_ps(temp0_20, temp0_27)
    float temp0_31[0x4] = _mm_mul_ps(temp0_28, zmm13)
    float zmm1[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_23), zmm6), data_143f3a520)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_30, zmm1, 0x32)
    float temp0_37[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, zmm1, 0), temp0_35, 0x82)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_29, zmm1, 0x31)
    float temp0_40[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_30, zmm1, 0x10), temp0_38, 0x88)
    float temp0_42[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, temp0_30, 0x12), zmm1, 0xe8)
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x29)
    zmm10[0].q = zmm8_1 u>> 0x40
    float temp0_44[0x4] = _mm_shuffle_ps(zmm8_1, zmm10, 0xc4)
    float temp0_46[0x4] = _mm_mul_ps(temp0_43, _mm_shuffle_ps(zmm13, zmm13, 4))
    float temp0_49[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x1a), _mm_shuffle_ps(temp0_31, temp0_31, 1))
    float temp0_50[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
    float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x12), temp0_50)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
    float temp0_54[0x4] = _mm_add_ps(temp0_52, temp0_46)
    float temp0_55[0x4] = _mm_sub_ps(temp0_46, temp0_52)
    float temp0_56[0x4] = _mm_mul_ps(temp0_54, temp0_5)
    float temp0_57[0x4] = _mm_mul_ps(temp0_53, temp0_55)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_49), temp0_5), data_143f3a520)
    float temp0_63[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_56, zmm1, 0), 
        _mm_shuffle_ps(temp0_57, zmm1, 0x32), 0x82)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_57, zmm1, 0x10)
    float temp0_65[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_67[0x4] = _mm_shuffle_ps(temp0_64, _mm_shuffle_ps(temp0_56, zmm1, 0x31), 0x88)
    float temp0_68[0x4] = _mm_mul_ps(temp0_65, temp0_40)
    zmm10[0].q = temp0_10 u>> 0x40
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_10, zmm10, 0xc4)
    float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0), temp0_37)
    float temp0_73[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_56, temp0_57, 0x12), zmm1, 0xe8)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xaa)
    float temp0_75[0x4] = _mm_add_ps(temp0_68, temp0_71)
    float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_44)
    float temp0_78[0x4] = _mm_mul_ps(temp0_74, temp0_42)
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0), temp0_37)
    float temp0_81[0x4] = _mm_add_ps(temp0_75, temp0_78)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xaa), temp0_42)
    float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_77)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x55), temp0_40)
    float temp0_87[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
    float var_e8[0x4] = temp0_84
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0x55)
    float temp0_89[0x4] = _mm_add_ps(temp0_86, temp0_80)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_40)
    float temp0_91[0x4] = _mm_mul_ps(temp0_87, temp0_44)
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_83)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_37)
    float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xaa), temp0_42)
    float temp0_97[0x4] = _mm_add_ps(temp0_93, temp0_91)
    float temp0_98[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xff)
    float temp0_99[0x4] = _mm_add_ps(temp0_90, temp0_94)
    float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_44)
    float temp0_101[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0)
    int96_t var_d8_1 = temp0_97[0].12
    float temp0_102[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
    float temp0_103[0x4] = _mm_add_ps(temp0_99, temp0_96)
    float temp0_104[0x4] = _mm_mul_ps(temp0_102, temp0_40)
    float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_42)
    float temp0_107[0x4] = _mm_mul_ps(temp0_101, temp0_37)
    float temp0_108[0x4] = _mm_add_ps(temp0_103, temp0_100)
    float temp0_110[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xff), temp0_44)
    float temp0_111[0x4] = _mm_add_ps(temp0_104, temp0_107)
    int96_t var_c8_1 = temp0_108[0].12
    int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_111, temp0_106), temp0_110)[0].12
    int128_t zmm10_1
    zmm10_1, zmm14 = sub_1407740e0(&var_e8, 0x322bcc77)
    zmm7 = var_f8
    float zmm2_1[0x4] = var_e8[0]
    float zmm1_1 = var_e8[1]
    float zmm4_1[0x4] =
        _mm_and_ps(_mm_cmpeq_ps(data_143f3a620, zmm7, 2), data_143f3a610 ^ zmm10_1) ^ data_143f3a610
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    uint32_t zmm0_1[0x4] = var_e8[2]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    var_e8[0] = zmm2_1[0]
    float temp0_116[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_e8[2] = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_116[0]
    var_e8[1] = zmm1_1
    zmm1_1 = var_d8_1:4.d * temp0_116[0]
    float zmm3_1 = var_d8_1.d * temp0_116[0]
    zmm2_1 = var_c8_1.d
    float temp0_117[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_d8_1:8.d = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    var_d8_1:4.d = zmm1_1
    zmm0_1[0] = zmm0_1[0] f* temp0_117[0]
    zmm2_1[0] = zmm2_1[0] * temp0_117[0]
    zmm1_1 = var_c8_1:4.d * temp0_117[0]
    var_c8_1:8.d = zmm0_1[0]
    var_d8_1.d = zmm3_1
    var_c8_1.d = zmm2_1[0]
    var_c8_1:4.d = zmm1_1
    sub_14077e4a0(&var_f8, &var_e8)
    zmm5 = var_f8
    zmm6 = data_143f3a5f0
    float temp0_118[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_120[0x4] = _mm_add_ps(temp0_118, _mm_shuffle_ps(temp0_118, temp0_118, 0x4e))
    float temp0_122[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_120, temp0_120, 0x39), temp0_120)
    float temp0_123[0x4] = _mm_rsqrt_ps(temp0_122)
    float temp0_124[0x4] = _mm_mul_ps(temp0_122, zmm6)
    float temp0_129[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_123, temp0_123), temp0_124)), 
            temp0_123), 
        temp0_123)
    float temp0_132[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_129, temp0_129), temp0_124))
    float temp0_134[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_122, 2)
    float temp0_136[0x4] = _mm_add_ps(_mm_mul_ps(temp0_132, temp0_129), temp0_129)
    float temp0_137[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_136, zmm5) ^ data_143f3a5e0, temp0_134) ^ data_143f3a5e0
    zmm9 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_137[0].q)

float zmm4[0x4] = data_142d4cc30
float temp0_178[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_179[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_180[0x4] = _mm_mul_ps(zmm4, zmm7)
arg2[3].b = 1
float temp0_181[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_183[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xc9), temp0_178)
float temp0_186[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xd2), temp0_179), temp0_183)
float temp0_187[0x4] = _mm_add_ps(temp0_186, temp0_186)
float temp0_188[0x4] = _mm_mul_ps(temp0_181, temp0_187)
float temp0_189[0x4] = _mm_shuffle_ps(temp0_187, temp0_187, 0xd2)
float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_187, temp0_187, 0xc9), temp0_178)
float temp0_192[0x4] = _mm_mul_ps(temp0_189, temp0_179)
float temp0_193[0x4] = _mm_add_ps(temp0_188, temp0_180)
float temp0_194[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
zmm14[0] = zmm14[0] * 0.5f
zmm14[0] = zmm14[0] f* *(arg1 + 0x4c)
float temp0_195[0x4] = _mm_sub_ps(temp0_192, temp0_191)
zmm14[0] = zmm14[0] f* *(arg1 + 0x50)
zmm14[0] = zmm14[0] f* *(arg1 + 0x48)
float temp0_196[0x4] = _mm_add_ps(temp0_195, temp0_193)
zmm7 = _mm_and_ps(temp0_196, 0x7fffffff)
zmm6 = _mm_and_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0x55), 0x7fffffff)
zmm7[0] = zmm7[0] * zmm14[0]
zmm6[0] = zmm6[0] * zmm14[0]
zmm8_1 = _mm_and_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0xaa), 0x7fffffff)
zmm7[0] = zmm7[0] + zmm9[0]
zmm8_1[0] = zmm8_1[0] * zmm14[0]
zmm6[0] = zmm6[0] + temp0_194[0]
float temp0_202[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
temp0_194[0] = temp0_194[0] - zmm6[0]
zmm9[0] = zmm9[0] - zmm7[0]
zmm7[0] = zmm7[0] + zmm14[0]
zmm8_1[0] = zmm8_1[0] + temp0_202[0]
temp0_202[0] = temp0_202[0] - zmm8_1[0]
zmm9[0] = zmm9[0] - zmm14[0]
temp0_194[0] = temp0_194[0] - zmm14[0]
zmm6[0] = zmm6[0] + zmm14[0]
zmm8_1[0] = zmm8_1[0] + zmm14[0]
temp0_202[0] = temp0_202[0] - zmm14[0]
var_f8[2] = zmm8_1[0]
*arg2 = (_mm_unpacklo_ps(zmm9, temp0_194[0].q)).q
arg2[1].d = temp0_202[0]
float rax_2 = var_f8[2]
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm7, zmm6[0].q)).q
*(arg2 + 0x14) = rax_2
return arg2
