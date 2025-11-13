// 函数: sub_141e1f340
// 地址: 0x141e1f340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
float var_178[0x4]
float var_128[0x4]
float var_f8[0x4]
sub_141e1ff70(arg1, &var_128, 
    sub_141e1ff70(arg1, &var_f8, sub_141e1ff70(arg1, &var_178, zx.o(0), nullptr), nullptr), nullptr)
float var_108[0x4]
float zmm6_2[0x4]
float zmm7_2[0x4]

if (arg1[0x2e].b == 0)
    float var_d8[0x4]
    
    if ((*(*arg1 + 0x278))(arg1) == 0)
        zmm6_2 = var_d8
        zmm7_2 = var_108
    else
        float temp0_1[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0x55)
        var_d8[0] = var_d8[0] + 1f
        float temp0_2[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xaa)
        temp0_1[0] = temp0_1[0] + 1f
        temp0_2[0] = temp0_2[0] + 1f
        float temp0_3[0x4] = _mm_unpacklo_ps(temp0_1, 0)
        zmm6_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_d8, temp0_2[0].q), temp0_3[0].q)
        float var_d8_2[0x4] = zmm6_2
        float temp0_6[0x4] = _mm_shuffle_ps(var_108, var_108, 0x55)
        var_108[0] = var_108[0] + 1f
        float temp0_7[0x4] = _mm_shuffle_ps(var_108, var_108, 0xaa)
        temp0_6[0] = temp0_6[0] + 1f
        temp0_7[0] = temp0_7[0] + 1f
        float temp0_8[0x4] = _mm_unpacklo_ps(temp0_6, 0)
        zmm7_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_108, temp0_7[0].q), temp0_8[0].q)
        var_108 = zmm7_2
else
    zmm6_2 = data_142e6da00
    float var_d8_1[0x4] = zmm6_2
    zmm7_2 = zmm6_2
    var_108 = zmm6_2

float zmm3_1[0x4] = var_178
float zmm12[0x4] = zx.o(0)
float zmm8[0x4] = data_143f395f0
float zmm11[0x4] = zmm3_1 ^ 0x80000000
uint32_t zmm9[0x4] = data_143f39600
float zmm15[0x4] = data_143f396b0
float zmm10[0x4] = data_143f39670
float temp0_11[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
uint32_t zmm13[0x4] = _mm_and_ps(zmm8, zmm9)
float zmm1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55) ^ 0x80000000
float temp0_14[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
temp0_11[0] = zmm1[0]
float temp0_15[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
temp0_16[0] = (temp0_14 ^ 0x80000000)[0]
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x27)
float temp0_18[0x4] = _mm_min_ps(zmm13, zmm6_2)
temp0_17[0] = temp0_15[0]
uint32_t temp0_20 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_18, zmm15, 1))
zmm11 = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
uint32_t var_138[0x4] = zmm11
float zmm0_1[0x4]
float zmm5[0x4]
uint32_t zmm14[0x4]
float var_e8[0x4]

if (temp0_20 == 0)
    float zmm4[0x4] = var_f8
    float temp0_153[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), _mm_shuffle_ps(zmm4, zmm4, 0))
    float temp0_154[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
    float temp0_155[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
    float temp0_156[0x4] = _mm_mul_ps(zx.o(0), zmm6_2)
    float temp0_157[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_158[0x4] = _mm_mul_ps(temp0_153, zmm10)
    float temp0_159[0x4] = _mm_mul_ps(temp0_157, zmm11)
    zmm14 = _mm_mul_ps(zmm13, zmm6_2)
    float temp0_161[0x4] = _mm_add_ps(temp0_158, temp0_159)
    float temp0_163[0x4] = _mm_mul_ps(temp0_154, _mm_shuffle_ps(zmm4, zmm4, 0x55))
    float temp0_165[0x4] = _mm_mul_ps(temp0_155, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
    float temp0_166[0x4] = __mulps_xmmps_memps(temp0_163, data_143f39660)
    float temp0_167[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xc9)
    float temp0_168[0x4] = __mulps_xmmps_memps(temp0_165, data_143f39650)
    float temp0_169[0x4] = _mm_add_ps(temp0_161, temp0_166)
    float temp0_170[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_171[0x4] = _mm_mul_ps(temp0_167, temp0_170)
    float temp0_172[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    zmm8 = _mm_add_ps(temp0_169, temp0_168)
    float temp0_176[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_156, temp0_156, 0xd2), temp0_172), temp0_171)
    float temp0_177[0x4] = _mm_add_ps(temp0_176, temp0_176)
    zmm9 = _mm_shuffle_ps(temp0_177, temp0_177, 0xd2)
    float temp0_179[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0xc9)
    zmm9 = _mm_mul_ps(zmm9, temp0_172)
    float temp0_181[0x4] = _mm_mul_ps(temp0_179, temp0_170)
    float temp0_182[0x4] = _mm_mul_ps(temp0_177, temp0_157)
    zmm9 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(zmm9, temp0_181), _mm_add_ps(temp0_182, temp0_156)), var_e8)
else
    zmm1 = var_f8
    float temp0_22[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
    float temp0_23[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_24[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_25[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    _mm_mul_ps(zmm13, zmm6_2)
    float temp0_27[0x4] = _mm_mul_ps(zmm1, temp0_23)
    float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x29), temp0_24)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x12)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x1a)
    float temp0_32[0x4] = _mm_mul_ps(temp0_30, temp0_25)
    float temp0_34[0x4] = _mm_add_ps(temp0_31, _mm_shuffle_ps(temp0_27, temp0_27, 1))
    float temp0_35[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
    float temp0_36[0x4] = _mm_add_ps(temp0_32, temp0_29)
    float temp0_37[0x4] = _mm_sub_ps(temp0_29, temp0_32)
    float temp0_38[0x4] = _mm_sub_ps(zmm8, temp0_34)
    float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm6_2)
    float temp0_40[0x4] = _mm_mul_ps(temp0_22, temp0_37)
    float temp0_41[0x4] = _mm_mul_ps(temp0_38, zmm6_2)
    float temp0_42[0x4] = _mm_shuffle_ps(zmm11, zmm11, 4)
    zmm1 = _mm_and_ps(temp0_41, zmm9)
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_40, zmm1, 0x32)
    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_39, zmm1, 0), temp0_44, 0x82)
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_39, zmm1, 0x31)
    float temp0_49[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_40, zmm1, 0x10), temp0_47, 0x88)
    float temp0_51[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_39, temp0_40, 0x12), zmm1, 0xe8)
    float temp0_52[0x4] = _mm_add_ps(zmm11, zmm11)
    zmm8[0].q = var_e8 u>> 0x40
    float temp0_53[0x4] = _mm_shuffle_ps(var_e8, zmm8, 0xc4)
    float temp0_54[0x4] = _mm_mul_ps(zmm11, temp0_52)
    float temp0_56[0x4] = _mm_mul_ps(temp0_42, _mm_shuffle_ps(temp0_52, temp0_52, 0x29))
    float temp0_59[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), _mm_shuffle_ps(temp0_52, temp0_52, 0x12))
    zmm1 = data_143f395f0
    float temp0_60[0x4] = _mm_add_ps(temp0_59, temp0_56)
    float temp0_61[0x4] = _mm_sub_ps(temp0_56, temp0_59)
    float temp0_64[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x1a), _mm_shuffle_ps(temp0_54, temp0_54, 1))
    float temp0_65[0x4] = _mm_mul_ps(temp0_60, zmm13)
    float temp0_66[0x4] = _mm_mul_ps(temp0_35, temp0_61)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_64), zmm13), data_143f39600)
    float temp0_72[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, zmm1, 0), 
        _mm_shuffle_ps(temp0_66, zmm1, 0x32), 0x82)
    float temp0_73[0x4] = _mm_shuffle_ps(temp0_66, zmm1, 0x10)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
    float temp0_76[0x4] = _mm_shuffle_ps(temp0_73, _mm_shuffle_ps(temp0_65, zmm1, 0x31), 0x88)
    zmm0_1 = data_143f395f0
    float temp0_77[0x4] = _mm_mul_ps(temp0_74, temp0_49)
    float temp0_79[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, temp0_66, 0x12), zmm1, 0xe8)
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xaa), temp0_51)
    zmm0_1[0].q = zx.o(0) u>> 0x40
    float temp0_82[0x4] = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
    float temp0_83[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
    float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xff), temp0_53)
    float temp0_87[0x4] = _mm_add_ps(temp0_77, _mm_mul_ps(temp0_83, zmm9))
    float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0), zmm9)
    float temp0_90[0x4] = _mm_add_ps(temp0_87, temp0_81)
    float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xaa), temp0_51)
    float temp0_93[0x4] = _mm_add_ps(temp0_90, temp0_85)
    float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x55), temp0_49)
    float temp0_96[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xff)
    var_178 = temp0_93
    float temp0_97[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0x55)
    float temp0_98[0x4] = _mm_add_ps(temp0_95, temp0_89)
    float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_49)
    float temp0_100[0x4] = _mm_mul_ps(temp0_96, temp0_53)
    float temp0_101[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0)
    float temp0_102[0x4] = _mm_add_ps(temp0_98, temp0_92)
    float temp0_103[0x4] = _mm_mul_ps(temp0_101, zmm9)
    float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0xaa), temp0_51)
    float temp0_106[0x4] = _mm_add_ps(temp0_102, temp0_100)
    float temp0_107[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xff)
    float temp0_108[0x4] = _mm_add_ps(temp0_99, temp0_103)
    float temp0_109[0x4] = _mm_mul_ps(temp0_107, temp0_53)
    float temp0_110[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0)
    int96_t var_168_1 = temp0_106[0].12
    float temp0_111[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0x55)
    float temp0_112[0x4] = _mm_add_ps(temp0_108, temp0_105)
    float temp0_113[0x4] = _mm_mul_ps(temp0_111, temp0_49)
    float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0xaa), temp0_51)
    float temp0_116[0x4] = _mm_mul_ps(temp0_110, zmm9)
    float temp0_117[0x4] = _mm_add_ps(temp0_112, temp0_109)
    float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0xff), temp0_53)
    float temp0_120[0x4] = _mm_add_ps(temp0_113, temp0_116)
    int96_t var_158_1 = temp0_117[0].12
    int96_t var_148_1 = _mm_add_ps(_mm_add_ps(temp0_120, temp0_115), temp0_119)[0].12
    zmm11, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_178, 0x322bcc77)
    float zmm2_4[0x4] = var_178[0]
    float zmm1_1 = var_178[1]
    zmm15 =
        _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm14, 2), data_143f396a0 ^ data_143f395f0) ^ data_143f396a0
    zmm2_4[0] = zmm2_4[0] * zmm15[0]
    zmm1_1 = zmm1_1 * zmm15[0]
    uint32_t zmm0_2[0x4] = var_178[2]
    zmm0_2[0] = zmm0_2[0] f* zmm15[0]
    var_178[0] = zmm2_4[0]
    float temp0_125[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
    var_178[2] = zmm0_2[0]
    zmm0_2 = var_168_1:8.d
    zmm0_2[0] = zmm0_2[0] f* temp0_125[0]
    var_178[1] = zmm1_1
    zmm1_1 = var_168_1:4.d * temp0_125[0]
    float zmm3_2 = var_168_1.d * temp0_125[0]
    zmm2_4 = var_158_1.d
    var_168_1:8.d = zmm0_2[0]
    zmm0_2 = var_158_1:8.d
    var_168_1:4.d = zmm1_1
    float temp0_126[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
    zmm0_2[0] = zmm0_2[0] f* temp0_126[0]
    zmm2_4[0] = zmm2_4[0] * temp0_126[0]
    zmm1_1 = var_158_1:4.d * temp0_126[0]
    var_158_1:8.d = zmm0_2[0]
    var_168_1.d = zmm3_2
    var_158_1.d = zmm2_4[0]
    var_158_1:4.d = zmm1_1
    sub_14077e4a0(&var_138, &var_178)
    zmm5 = var_138
    zmm8 = data_143f39690
    zmm7_2 = var_108
    zmm15 = data_143f396b0
    zmm10 = data_143f39670
    float temp0_127[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_129[0x4] = _mm_add_ps(temp0_127, _mm_shuffle_ps(temp0_127, temp0_127, 0x4e))
    float temp0_131[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0x39), temp0_129)
    float temp0_132[0x4] = _mm_rsqrt_ps(temp0_131)
    float temp0_133[0x4] = _mm_mul_ps(temp0_131, zmm8)
    float temp0_138[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_132, temp0_132), temp0_133)), 
            temp0_132), 
        temp0_132)
    float temp0_141[0x4] = _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_138, temp0_138), temp0_133))
    float temp0_143[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_131, 2)
    float temp0_145[0x4] = _mm_add_ps(_mm_mul_ps(temp0_141, temp0_138), temp0_138)
    float temp0_146[0x4] = _mm_unpacklo_ps(var_148_1:4.d, 0)
    zmm8 = _mm_and_ps(_mm_mul_ps(temp0_145, zmm5) ^ data_143f39680, temp0_143) ^ data_143f39680
    zmm9 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_148_1.d, var_148_1:8.d[0].q), temp0_146[0].q)
zmm3_1 = var_128
float temp0_187[0x4] = _mm_min_ps(zmm13, zmm7_2)
var_f8 = zmm8
uint32_t var_e8_1[0x4] = zmm9
uint32_t var_d8_3[0x4] = zmm14
float var_118[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_187, zmm15, 1)) == 0)
    float temp0_319[0x4] = _mm_mul_ps(zmm12, zmm7_2)
    float temp0_320[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x1b)
    float temp0_321[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
    float temp0_323[0x4] = _mm_mul_ps(temp0_320, _mm_shuffle_ps(zmm3_1, zmm3_1, 0))
    float temp0_324[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    float temp0_325[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
    float temp0_326[0x4] = _mm_mul_ps(temp0_324, zmm11)
    float temp0_327[0x4] = _mm_mul_ps(temp0_323, zmm10)
    float temp0_328[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
    zmm14 = _mm_mul_ps(zmm13, zmm7_2)
    float temp0_330[0x4] = _mm_add_ps(temp0_327, temp0_326)
    float temp0_332[0x4] = _mm_mul_ps(temp0_321, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55))
    float temp0_334[0x4] = _mm_mul_ps(temp0_328, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa))
    float temp0_335[0x4] = __mulps_xmmps_memps(temp0_332, data_143f39660)
    float temp0_336[0x4] = _mm_shuffle_ps(temp0_319, temp0_319, 0xc9)
    float temp0_337[0x4] = __mulps_xmmps_memps(temp0_334, data_143f39650)
    float temp0_338[0x4] = _mm_add_ps(temp0_330, temp0_335)
    float temp0_339[0x4] = _mm_mul_ps(temp0_336, temp0_325)
    float temp0_340[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
    float temp0_342[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0xd2), temp0_340)
    zmm6_2 = _mm_add_ps(temp0_338, temp0_337)
    float temp0_344[0x4] = _mm_sub_ps(temp0_342, temp0_339)
    float temp0_345[0x4] = _mm_add_ps(temp0_344, temp0_344)
    float temp0_346[0x4] = _mm_mul_ps(temp0_324, temp0_345)
    float temp0_348[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_345, temp0_345, 0xd2), temp0_340)
    float temp0_349[0x4] = _mm_shuffle_ps(temp0_345, temp0_345, 0xc9)
    float temp0_350[0x4] = _mm_add_ps(temp0_346, temp0_319)
    zmm5 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_348, _mm_mul_ps(temp0_349, temp0_325)), temp0_350), var_118)
else
    float temp0_190[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
    float temp0_191[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
    float temp0_192[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    float temp0_193[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xc9)
    _mm_mul_ps(zmm13, zmm7_2)
    float temp0_195[0x4] = _mm_mul_ps(zmm3_1, temp0_190)
    float temp0_197[0x4] = _mm_mul_ps(temp0_191, _mm_shuffle_ps(temp0_190, temp0_190, 0x29))
    float temp0_198[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0x12)
    float temp0_199[0x4] = _mm_shuffle_ps(temp0_195, temp0_195, 0x1a)
    float temp0_200[0x4] = _mm_mul_ps(temp0_192, temp0_198)
    zmm1 = data_143f395f0
    float temp0_202[0x4] = _mm_add_ps(temp0_199, _mm_shuffle_ps(temp0_195, temp0_195, 1))
    float temp0_203[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
    float temp0_204[0x4] = _mm_add_ps(temp0_200, temp0_197)
    float temp0_205[0x4] = _mm_sub_ps(temp0_197, temp0_200)
    float temp0_206[0x4] = _mm_sub_ps(zmm1, temp0_202)
    float temp0_207[0x4] = _mm_mul_ps(temp0_204, zmm7_2)
    float temp0_208[0x4] = _mm_mul_ps(temp0_193, temp0_205)
    float temp0_209[0x4] = _mm_mul_ps(temp0_206, zmm7_2)
    float temp0_210[0x4] = _mm_add_ps(zmm11, zmm11)
    zmm1 = __andps_xmmxud_memxud(temp0_209, data_143f39600)
    float temp0_212[0x4] = _mm_shuffle_ps(temp0_208, zmm1, 0x32)
    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_207, zmm1, 0), temp0_212, 0x82)
    float temp0_215[0x4] = _mm_shuffle_ps(temp0_207, zmm1, 0x31)
    float temp0_217[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_208, zmm1, 0x10), temp0_215, 0x88)
    zmm0_1 = data_143f395f0
    float temp0_218[0x4] = _mm_mul_ps(zmm11, temp0_210)
    float temp0_220[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_207, temp0_208, 0x12), zmm1, 0xe8)
    float temp0_221[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0x29)
    zmm0_1[0].q = var_118 u>> 0x40
    float temp0_222[0x4] = _mm_shuffle_ps(var_118, zmm0_1, 0xc4)
    float temp0_224[0x4] = _mm_mul_ps(temp0_221, _mm_shuffle_ps(zmm11, zmm11, 4))
    float temp0_227[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_218, temp0_218, 0x1a), 
        _mm_shuffle_ps(temp0_218, temp0_218, 1))
    float temp0_228[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    float temp0_230[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_210, temp0_210, 0x12), temp0_228)
    zmm11 = data_143f395f0
    float temp0_231[0x4] = _mm_add_ps(temp0_230, temp0_224)
    float temp0_232[0x4] = _mm_sub_ps(temp0_224, temp0_230)
    float temp0_233[0x4] = _mm_mul_ps(temp0_231, zmm13)
    float temp0_234[0x4] = _mm_mul_ps(temp0_203, temp0_232)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_227), zmm13), data_143f39600)
    float temp0_238[0x4] = _mm_shuffle_ps(temp0_234, zmm1, 0x32)
    float temp0_240[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_233, zmm1, 0), temp0_238, 0x82)
    float temp0_241[0x4] = _mm_shuffle_ps(temp0_233, zmm1, 0x31)
    float temp0_243[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_234, zmm1, 0x10), temp0_241, 0x88)
    float temp0_244[0x4] = _mm_shuffle_ps(temp0_233, temp0_234, 0x12)
    float temp0_245[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0x55)
    float temp0_246[0x4] = _mm_shuffle_ps(temp0_244, zmm1, 0xe8)
    float temp0_247[0x4] = _mm_mul_ps(temp0_245, temp0_217)
    float temp0_249[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0xaa), temp0_220)
    zmm11[0].q = zmm12 u>> 0x40
    float temp0_250[0x4] = _mm_shuffle_ps(zmm12, zmm11, 0xc4)
    float temp0_251[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0)
    float temp0_253[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0xff), temp0_222)
    float temp0_255[0x4] = _mm_add_ps(temp0_247, _mm_mul_ps(temp0_251, zmm9))
    float temp0_257[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_243, temp0_243, 0), zmm9)
    float temp0_258[0x4] = _mm_add_ps(temp0_255, temp0_249)
    float temp0_260[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_243, temp0_243, 0xaa), temp0_220)
    float temp0_261[0x4] = _mm_add_ps(temp0_258, temp0_253)
    float temp0_263[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_243, temp0_243, 0x55), temp0_217)
    float temp0_264[0x4] = _mm_shuffle_ps(temp0_243, temp0_243, 0xff)
    var_178 = temp0_261
    float temp0_265[0x4] = _mm_shuffle_ps(temp0_246, temp0_246, 0x55)
    float temp0_266[0x4] = _mm_add_ps(temp0_263, temp0_257)
    float temp0_267[0x4] = _mm_mul_ps(temp0_265, temp0_217)
    float temp0_268[0x4] = _mm_mul_ps(temp0_264, temp0_222)
    float temp0_269[0x4] = _mm_shuffle_ps(temp0_246, temp0_246, 0)
    float temp0_270[0x4] = _mm_add_ps(temp0_266, temp0_260)
    float temp0_271[0x4] = _mm_mul_ps(temp0_269, zmm9)
    float temp0_273[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_246, temp0_246, 0xaa), temp0_220)
    float temp0_274[0x4] = _mm_add_ps(temp0_267, temp0_271)
    float temp0_275[0x4] = _mm_shuffle_ps(temp0_246, temp0_246, 0xff)
    float temp0_276[0x4] = _mm_add_ps(temp0_270, temp0_268)
    float temp0_277[0x4] = _mm_mul_ps(temp0_275, temp0_222)
    float temp0_278[0x4] = _mm_shuffle_ps(temp0_250, temp0_250, 0)
    float temp0_279[0x4] = _mm_add_ps(temp0_274, temp0_273)
    float temp0_280[0x4] = _mm_mul_ps(temp0_278, zmm9)
    int96_t var_168_2 = temp0_276[0].12
    float temp0_281[0x4] = _mm_shuffle_ps(temp0_250, temp0_250, 0x55)
    float temp0_282[0x4] = _mm_add_ps(temp0_279, temp0_277)
    float temp0_283[0x4] = _mm_mul_ps(temp0_281, temp0_217)
    int96_t var_158_2 = temp0_282[0].12
    float temp0_284[0x4] = _mm_add_ps(temp0_283, temp0_280)
    float temp0_286[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_250, temp0_250, 0xaa), temp0_220)
    float temp0_288[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_250, temp0_250, 0xff), temp0_222)
    int96_t var_148_2 = _mm_add_ps(_mm_add_ps(temp0_284, temp0_286), temp0_288)[0].12
    int128_t zmm11_1
    float zmm15_1[0x4]
    zmm11_1, zmm14, zmm15_1 = sub_1407740e0(&var_178, 0x322bcc77)
    float zmm2_5[0x4] = var_178[0]
    float zmm1_2 = var_178[1]
    float zmm0_3 = var_178[2]
    uint32_t zmm4_1[0x4] =
        _mm_and_ps(data_143f396a0 ^ zmm11_1, _mm_cmpeq_ps(zmm15_1, zmm14, 2)) ^ data_143f396a0
    zmm2_5[0] = zmm2_5[0] f* zmm4_1[0]
    zmm1_2 = zmm1_2 f* zmm4_1[0]
    var_178[0] = zmm2_5[0]
    zmm0_3 = zmm0_3 f* zmm4_1[0]
    var_178[1] = zmm1_2
    var_178[2] = zmm0_3
    float temp0_293[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    zmm1_2 = var_168_2:4.d * temp0_293[0]
    zmm0_3 = var_168_2:8.d * temp0_293[0]
    float zmm3_3 = var_168_2.d * temp0_293[0]
    zmm2_5 = var_158_2.d
    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_168_2:4.d = zmm1_2
    var_168_2:8.d = zmm0_3
    zmm1_2 = var_158_2:4.d f* zmm4_1[0]
    zmm0_3 = var_158_2:8.d f* zmm4_1[0]
    zmm2_5[0] = zmm2_5[0] f* zmm4_1[0]
    var_158_2:4.d = zmm1_2
    var_158_2:8.d = zmm0_3
    var_168_2.d = zmm3_3
    var_158_2.d = zmm2_5[0]
    sub_14077e4a0(&var_138, &var_178)
    zmm5 = var_138
    zmm6_2 = data_143f39690
    float temp0_295[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_297[0x4] = _mm_add_ps(temp0_295, _mm_shuffle_ps(temp0_295, temp0_295, 0x4e))
    float temp0_299[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_297, temp0_297, 0x39), temp0_297)
    float temp0_300[0x4] = _mm_rsqrt_ps(temp0_299)
    float temp0_301[0x4] = _mm_mul_ps(temp0_299, zmm6_2)
    float temp0_306[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_300, temp0_300), temp0_301)), 
            temp0_300), 
        temp0_300)
    float temp0_309[0x4] =
        _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_306, temp0_306), temp0_301))
    float temp0_311[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_299, 2)
    float temp0_313[0x4] = _mm_add_ps(_mm_mul_ps(temp0_309, temp0_306), temp0_306)
    float temp0_314[0x4] = _mm_unpacklo_ps(var_148_2:4.d, 0)
    zmm6_2 = _mm_and_ps(_mm_mul_ps(temp0_313, zmm5) ^ data_143f39680, temp0_311) ^ data_143f39680
    zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_148_2.d, var_148_2:8.d[0].q), temp0_314[0].q)
var_128 = zmm6_2
float var_118_1[0x4] = zmm5
uint32_t var_108_1[0x4] = zmm14
sub_140ad7d70(&var_128, arg2, &var_f8)
__security_check_cookie(rax_1 ^ &var_1a8)
return arg2
