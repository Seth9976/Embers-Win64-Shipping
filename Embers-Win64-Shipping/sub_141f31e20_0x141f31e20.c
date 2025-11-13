// 函数: sub_141f31e20
// 地址: 0x141f31e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm12[0x4]
float var_98[0x4] = zmm12
float zmm15[0x4]
float var_c8[0x4] = zmm15
uint128_t var_138[0x3]
uint128_t* rax_2 = sub_141f3cf60(arg1, &var_138)
int64_t rcx = arg1[0x19]
int64_t* rax_3 = arg1[0x18]
int128_t zmm13 = zx.o(0)
int64_t var_1a8
float var_188[0x4]
float var_178[0x4]
float var_168[0x4]
uint32_t var_148[0x4]
uint128_t var_108[0x3]
float zmm6[0x4]
float zmm7[0x4]
float zmm14[0x4]

if (rax_3 == 0)
    zmm6 = *rax_2
    zmm7 = rax_2[1]
    zmm14 = rax_2[2]
else if ((*(arg1 + 0x14c) & 0x1c) != 0)
    var_1a8 = rcx
    zmm13 = sub_141f355c0(arg1, &var_188, rax_2, rax_3, var_1a8)
    zmm14 = var_168
    zmm7 = var_178
    zmm6 = var_188
else
    int128_t* rax_4 = (*(*rax_3 + 0x408))(rax_3, &var_108, rcx, 0)
    zmm15 = rax_2[2]
    float zmm8_1[0x4] = rax_4[2]
    float zmm3_1[0x4]
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm15, zmm8_1), data_143f3b4e0, 1))
            == 0)
        float zmm4_1[0x4] = *rax_4
        float zmm2_1[0x4] = *rax_2
        zmm3_1 = rax_2[1]
        float temp0_133[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
        float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), temp0_133)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float temp0_137[0x4] = _mm_mul_ps(zmm3_1, zmm8_1)
        float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f3b3b0)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        float temp0_140[0x4] = _mm_mul_ps(zmm2_1, temp0_139)
        zmm14 = _mm_mul_ps(zmm15, zmm8_1)
        float temp0_142[0x4] = _mm_add_ps(temp0_138, temp0_140)
        float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
        float temp0_147[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
        float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f3b3a0)
        float temp0_149[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f3b390)
        float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
        float temp0_152[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        float temp0_153[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
        zmm6 = _mm_add_ps(temp0_151, temp0_150)
        float temp0_158[0x4] =
            _mm_sub_ps(temp0_154, _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
        float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
        float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
        float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
        zmm7 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
            rax_4[1])
    else
        float zmm1_1[0x4] = *rax_4
        zmm11 = data_143f3b4b0
        zmm9 = rax_4[1]
        float temp0_4[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
        float temp0_8[0x4] = _mm_mul_ps(zmm1_1, temp0_4)
        float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_6)
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
        float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_7)
        float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
        _mm_mul_ps(zmm15, zmm8_1)
        float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_10)
        float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_13)
        zmm3_1 = *rax_2
        float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_15)
        float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm8_1)
        float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
        float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8_1)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
        zmm1_1 = __andps_xmmxud_memxud(temp0_22, data_143f3b4c0)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x32)
        float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1_1, 0), temp0_25, 0x82)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1_1, 0x31)
        float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0x10), temp0_28, 0x88)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1_1, 0xe8)
        float temp0_33[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
        zmm11[0].q = zmm9 u>> 0x40
        float temp0_34[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
        float temp0_37[0x4] = _mm_mul_ps(zmm3_1, temp0_33)
        float temp0_39[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_33, temp0_33, 0x29))
        float temp0_41[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(temp0_33, temp0_33, 0x12))
        float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
            _mm_shuffle_ps(temp0_37, temp0_37, 1))
        float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
        float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
        float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm15)
        float temp0_49[0x4] = _mm_mul_ps(temp0_36, temp0_46)
        zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm15), data_143f3b4c0)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_49, zmm1_1, 0x32), 0x82)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1_1, 0x10)
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x31)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
        float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_30)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
        float zmm5_1[0x4] = rax_2[1]
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1_1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
        zmm11[0].q = zmm5_1 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(zmm5_1, zmm11, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        var_188 = temp0_75
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
        var_178 = temp0_88
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
        var_168 = temp0_99
        int96_t var_158_1 =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_95, temp0_98), temp0_97), temp0_101)[0].12
        zmm11, zmm13, zmm14 = sub_1407740e0(&var_188, 0x322bcc77)
        float zmm2_2[0x4] = var_188[0]
        float zmm4_2[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f3b4e0, zmm14, 2), data_143f3b4d0 ^ zmm11)
            ^ data_143f3b4d0
        zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
        uint32_t zmm0_2[0x4] = var_188[2]
        float zmm3_2 = var_178[0]
        float zmm1_2 = var_188[1] * zmm4_2[0]
        zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
        var_188[0] = zmm2_2[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        var_188[1] = zmm1_2
        zmm1_2 = var_178[1] * temp0_107[0]
        var_188[2] = zmm0_2[0]
        zmm0_2 = var_178[2]
        zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
        zmm3_2 = zmm3_2 * temp0_107[0]
        zmm2_2 = var_168[0]
        float temp0_108[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        var_178[1] = zmm1_2
        zmm1_2 = var_168[1]
        var_178[2] = zmm0_2[0]
        zmm0_2 = var_168[2]
        zmm1_2 = zmm1_2 * temp0_108[0]
        zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
        zmm2_2[0] = zmm2_2[0] * temp0_108[0]
        var_168[1] = zmm1_2
        var_168[2] = zmm0_2[0]
        var_178[0] = zmm3_2
        var_168[0] = zmm2_2[0]
        sub_14077e4a0(&var_148, &var_188)
        uint32_t zmm5_2[0x4] = var_148
        zmm6 = data_143f3b3d0
        float temp0_109[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
        float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
        float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
        float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                temp0_114), 
            temp0_114)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
        float temp0_125[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_158_1:4.d, 0)
        zmm6 =
            _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f3b3c0, temp0_125) ^ data_143f3b3c0
        zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), temp0_128[0].q)

*(arg1 + 0x1c0) = zmm6
*(arg1 + 0x1d0) = zmm7
*(arg1 + 0x1e0) = zmm14
float zmm0_1[0x4] = *arg2
zmm0_1[0] = zmm0_1[0] f+ arg1[0x20].d
arg1[0x20].d = zmm0_1[0]
zmm0_1 = (*arg2)[1]
zmm0_1[0] = zmm0_1[0] f+ *(arg1 + 0x104)
*(arg1 + 0x104) = zmm0_1[0]
zmm0_1 = arg1[0x21].d
zmm0_1[0] = zmm0_1[0] + (*arg2)[2]
arg1[0x21].d = zmm0_1[0]

if (arg1[0x18] == 0 || (*(arg1 + 0x14c) & 4) != 0)
    zmm7[0] = zmm7[0] + *arg2
    float temp0_169[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    temp0_169[0] = temp0_169[0] + (*arg2)[1]
    float temp0_170[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    temp0_170[0] = temp0_170[0] + (*arg2)[2]
    *(arg1 + 0x11c) = (_mm_unpacklo_ps(zmm7, temp0_169[0].q)).q
    *(arg1 + 0x124) = temp0_170[0]
    uint128_t* rax_6 = sub_141f3cf60(arg1, &var_108)
    int64_t rcx_7 = arg1[0x19]
    int64_t* rax_7 = arg1[0x18]
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    
    if (rax_7 == 0)
        zmm6_1 = *rax_6
        zmm7_1 = rax_6[1]
        zmm14 = rax_6[2]
    else if ((*(arg1 + 0x14c) & 0x1c) != 0)
        zmm13 = sub_141f355c0(arg1, &var_188, rax_6, rax_7, rcx_7)
        zmm14 = var_168
        zmm7_1 = var_178
        zmm6_1 = var_188
    else
        float (* rax_8)[0x4] = (*(*rax_7 + 0x408))(rax_7, &var_138, rcx_7, 0, var_1a8)
        zmm15 = rax_6[2]
        float zmm8_2[0x4] = rax_8[2]
        float zmm3_4[0x4]
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm15, zmm8_2), data_143f3b4e0, 1))
                == 0)
            float zmm4_4[0x4] = *rax_8
            float zmm2_3[0x4] = *rax_6
            zmm3_4 = rax_6[1]
            float temp0_304[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0)
            float temp0_306[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x1b), temp0_304)
            float temp0_307[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x55)
            float temp0_308[0x4] = _mm_mul_ps(zmm3_4, zmm8_2)
            float temp0_309[0x4] = __mulps_xmmps_memps(temp0_306, data_143f3b3b0)
            float temp0_310[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xff)
            zmm14 = _mm_mul_ps(zmm15, zmm8_2)
            float temp0_313[0x4] = _mm_add_ps(temp0_309, _mm_mul_ps(temp0_310, zmm2_3))
            float temp0_315[0x4] = _mm_mul_ps(temp0_307, _mm_shuffle_ps(zmm2_3, zmm2_3, 0x4e))
            float temp0_318[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_4, zmm4_4, 0xaa), 
                _mm_shuffle_ps(zmm2_3, zmm2_3, 0xb1))
            float temp0_319[0x4] = __mulps_xmmps_memps(temp0_315, data_143f3b3a0)
            float temp0_320[0x4] = _mm_shuffle_ps(temp0_308, temp0_308, 0xd2)
            float temp0_321[0x4] = __mulps_xmmps_memps(temp0_318, data_143f3b390)
            float temp0_322[0x4] = _mm_add_ps(temp0_313, temp0_319)
            float temp0_323[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xd2)
            float temp0_324[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xc9)
            float temp0_325[0x4] = _mm_mul_ps(temp0_320, temp0_324)
            zmm6_1 = _mm_add_ps(temp0_322, temp0_321)
            float temp0_329[0x4] = _mm_sub_ps(temp0_325, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_308, 0xc9), temp0_323))
            float temp0_330[0x4] = _mm_add_ps(temp0_329, temp0_329)
            float temp0_331[0x4] = _mm_shuffle_ps(temp0_330, temp0_330, 0xd2)
            float temp0_332[0x4] = _mm_shuffle_ps(temp0_330, temp0_330, 0xc9)
            float temp0_333[0x4] = _mm_mul_ps(temp0_331, temp0_324)
            float temp0_334[0x4] = _mm_mul_ps(temp0_332, temp0_323)
            float temp0_335[0x4] = _mm_mul_ps(temp0_330, temp0_310)
            zmm7_1 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_333, temp0_334), _mm_add_ps(temp0_335, temp0_308)), 
                rax_8[1])
        else
            zmm3_4 = *rax_8
            zmm11 = data_143f3b4b0
            zmm9 = rax_8[1]
            float temp0_175[0x4] = _mm_add_ps(zmm3_4, zmm3_4)
            float temp0_176[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xc9)
            float temp0_177[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 4)
            float temp0_178[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xff)
            float temp0_179[0x4] = _mm_mul_ps(zmm3_4, temp0_175)
            float temp0_181[0x4] = _mm_mul_ps(temp0_177, _mm_shuffle_ps(temp0_175, temp0_175, 0x29))
            float temp0_182[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0x12)
            float temp0_183[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0x1a)
            float temp0_184[0x4] = _mm_mul_ps(temp0_178, temp0_182)
            float temp0_186[0x4] = _mm_add_ps(temp0_183, _mm_shuffle_ps(temp0_179, temp0_179, 1))
            _mm_mul_ps(zmm15, zmm8_2)
            float temp0_188[0x4] = _mm_add_ps(temp0_184, temp0_181)
            float temp0_189[0x4] = _mm_sub_ps(temp0_181, temp0_184)
            float temp0_190[0x4] = _mm_sub_ps(zmm11, temp0_186)
            float temp0_191[0x4] = _mm_mul_ps(temp0_188, zmm8_2)
            float temp0_192[0x4] = _mm_mul_ps(temp0_190, zmm8_2)
            float temp0_193[0x4] = _mm_mul_ps(temp0_176, temp0_189)
            float zmm1_3[0x4] = __andps_xmmxud_memxud(temp0_192, data_143f3b4c0)
            float temp0_197[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_191, zmm1_3, 0), 
                _mm_shuffle_ps(temp0_193, zmm1_3, 0x32), 0x82)
            float temp0_198[0x4] = _mm_shuffle_ps(temp0_191, zmm1_3, 0x31)
            float temp0_200[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_193, zmm1_3, 0x10), temp0_198, 0x88)
            float temp0_202[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_191, temp0_193, 0x12), zmm1_3, 0xe8)
            zmm1_3 = *rax_6
            zmm11[0].q = zmm9 u>> 0x40
            float temp0_203[0x4] = _mm_add_ps(zmm1_3, zmm1_3)
            float temp0_204[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
            float temp0_205[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
            float temp0_206[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 4)
            float temp0_207[0x4] = _mm_mul_ps(temp0_203, zmm1_3)
            float temp0_209[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_203, temp0_203, 0x29), temp0_206)
            float temp0_210[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xff)
            float temp0_211[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0x1a)
            float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_203, temp0_203, 0x12), temp0_210)
            float temp0_215[0x4] = _mm_add_ps(temp0_211, _mm_shuffle_ps(temp0_207, temp0_207, 1))
            float temp0_216[0x4] = _mm_add_ps(temp0_213, temp0_209)
            float temp0_217[0x4] = _mm_sub_ps(temp0_209, temp0_213)
            float temp0_218[0x4] = _mm_sub_ps(zmm11, temp0_215)
            float temp0_219[0x4] = _mm_mul_ps(temp0_216, zmm15)
            float temp0_220[0x4] = _mm_mul_ps(temp0_205, temp0_217)
            zmm1_3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_218, zmm15), data_143f3b4c0)
            float temp0_225[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_219, zmm1_3, 0), 
                _mm_shuffle_ps(temp0_220, zmm1_3, 0x32), 0x82)
            float temp0_226[0x4] = _mm_shuffle_ps(temp0_220, zmm1_3, 0x10)
            float temp0_228[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0x55), temp0_200)
            float temp0_230[0x4] =
                _mm_shuffle_ps(temp0_226, _mm_shuffle_ps(temp0_219, zmm1_3, 0x31), 0x88)
            float temp0_231[0x4] = _mm_shuffle_ps(temp0_219, temp0_220, 0x12)
            float zmm5_3[0x4] = rax_6[1]
            float temp0_232[0x4] = _mm_shuffle_ps(temp0_231, zmm1_3, 0xe8)
            float temp0_234[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0xaa), temp0_202)
            zmm11[0].q = zmm5_3 u>> 0x40
            float temp0_235[0x4] = _mm_shuffle_ps(zmm5_3, zmm11, 0xc4)
            float temp0_236[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0)
            float temp0_238[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0xff), temp0_204)
            float temp0_240[0x4] = _mm_add_ps(temp0_228, _mm_mul_ps(temp0_236, temp0_197))
            float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0), temp0_197)
            float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_234)
            float temp0_245[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xaa), temp0_202)
            float temp0_246[0x4] = _mm_add_ps(temp0_243, temp0_238)
            float temp0_248[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0x55), temp0_200)
            float temp0_249[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0xff)
            var_188 = temp0_246
            float temp0_250[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
            float temp0_251[0x4] = _mm_add_ps(temp0_248, temp0_242)
            float temp0_252[0x4] = _mm_mul_ps(temp0_250, temp0_200)
            float temp0_253[0x4] = _mm_mul_ps(temp0_249, temp0_204)
            float temp0_254[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
            float temp0_255[0x4] = _mm_add_ps(temp0_251, temp0_245)
            float temp0_256[0x4] = _mm_mul_ps(temp0_254, temp0_197)
            float temp0_258[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_202)
            float temp0_259[0x4] = _mm_add_ps(temp0_252, temp0_256)
            float temp0_260[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xff)
            float temp0_261[0x4] = _mm_add_ps(temp0_255, temp0_253)
            float temp0_262[0x4] = _mm_mul_ps(temp0_260, temp0_204)
            float temp0_263[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0)
            float temp0_264[0x4] = _mm_add_ps(temp0_259, temp0_258)
            float temp0_265[0x4] = _mm_mul_ps(temp0_263, temp0_197)
            int96_t var_178_1 = temp0_261[0].12
            float temp0_266[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0x55)
            float temp0_267[0x4] = _mm_add_ps(temp0_264, temp0_262)
            float temp0_268[0x4] = _mm_mul_ps(temp0_266, temp0_200)
            int96_t var_168_1 = temp0_267[0].12
            float temp0_269[0x4] = _mm_add_ps(temp0_268, temp0_265)
            float temp0_271[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xaa), temp0_202)
            float temp0_273[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xff), temp0_204)
            int96_t var_158_2 = _mm_add_ps(_mm_add_ps(temp0_269, temp0_271), temp0_273)[0].12
            zmm11, zmm13, zmm14 = sub_1407740e0(&var_188, 0x322bcc77)
            uint32_t zmm2_4[0x4] = var_188[0]
            uint32_t zmm4_5[0x4] =
                _mm_and_ps(data_143f3b4d0 ^ zmm11, _mm_cmpeq_ps(data_143f3b4e0, zmm14, 2))
                ^ data_143f3b4d0
            zmm2_4[0] = zmm2_4[0] f* zmm4_5[0]
            float zmm1_4[0x4] = var_188[1]
            float zmm0_4 = var_188[2]
            zmm1_4[0] = zmm1_4[0] f* zmm4_5[0]
            zmm0_4 = zmm0_4 f* zmm4_5[0]
            var_188[0] = zmm2_4[0]
            zmm2_4 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x55)
            var_188[1] = zmm1_4[0]
            zmm1_4 = var_178_1:4.d
            zmm1_4[0] = zmm1_4[0] f* zmm2_4[0]
            var_188[2] = zmm0_4
            zmm0_4 = var_178_1:8.d f* zmm2_4[0]
            float zmm3_5 = var_178_1.d f* zmm2_4[0]
            zmm2_4 = var_168_1.d
            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa)
            var_178_1:4.d = zmm1_4[0]
            zmm1_4 = var_168_1:4.d
            var_178_1:8.d = zmm0_4
            zmm1_4[0] = zmm1_4[0] f* zmm4_5[0]
            zmm0_4 = var_168_1:8.d f* zmm4_5[0]
            zmm2_4[0] = zmm2_4[0] f* zmm4_5[0]
            var_168_1:4.d = zmm1_4[0]
            var_168_1:8.d = zmm0_4
            var_178_1.d = zmm3_5
            var_168_1.d = zmm2_4[0]
            sub_14077e4a0(&var_148, &var_188)
            uint32_t zmm5_4[0x4] = var_148
            zmm6_1 = data_143f3b3d0
            uint32_t zmm1_5[0x4] = _mm_mul_ps(zmm5_4, zmm5_4)
            zmm1_5 = _mm_add_ps(zmm1_5, _mm_shuffle_ps(zmm1_5, zmm1_5, 0x4e))
            uint32_t zmm4_6[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_5, zmm1_5, 0x39), zmm1_5)
            zmm1_5 = _mm_rsqrt_ps(zmm4_6)
            uint32_t zmm3_6[0x4] = _mm_mul_ps(zmm4_6, zmm6_1)
            float temp0_291[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_5, zmm1_5), zmm3_6)), 
                    zmm1_5), 
                zmm1_5)
            float temp0_294[0x4] =
                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_291, temp0_291), zmm3_6))
            uint32_t zmm0_5[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_6, 2)
            float temp0_298[0x4] = _mm_add_ps(_mm_mul_ps(temp0_294, temp0_291), temp0_291)
            float temp0_299[0x4] = _mm_unpacklo_ps(var_158_2:4.d, 0)
            zmm6_1 =
                _mm_and_ps(_mm_mul_ps(temp0_298, zmm5_4) ^ data_143f3b3c0, zmm0_5) ^ data_143f3b3c0
            zmm7_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_2.d, var_158_2:8.d[0].q), temp0_299[0].q)
    
    *(arg1 + 0x1c0) = zmm6_1
    *(arg1 + 0x1d0) = zmm7_1
    *(arg1 + 0x1e0) = zmm14

int64_t rsi_2 = 0
int64_t rdx_8

if ((arg1[0x11].b & 4) == 0
        || (arg3 != 0 && (zmm13.d f!= *arg2 || zmm13.d f!= (*arg2)[1] || zmm13.d f!= (*arg2)[2])))
    rdx_8 = 1
else
    rdx_8 = 0

(*(*arg1 + 0x460))(arg1, rdx_8, 0)

if (arg3 == 0)
    sub_141ee8690(arg1)
else if (not(zmm13.d f!= *arg2) && not(zmm13.d f!= (*arg2)[1]) && not(zmm13.d f!= (*arg2)[2]))
    sub_141ee8690(arg1)

if ((*(arg1 + 0x14d) & 2) != 0 && arg3 == 0)
    int64_t rdx_9
    rdx_9.b = 1
    (*(*arg1 + 0x4a8))(arg1, rdx_9)

int64_t* r14 = arg1[0x1a]
void* result = &r14[arg1[0x1b]]
uint64_t rbx_2 = sx.q(arg1[0x1b].d) << 3 u>> 3

if (r14 u> result)
    rbx_2 = 0

if (rbx_2 != 0)
    do
        int64_t* rcx_16 = *r14
        
        if (rcx_16 != 0)
            result = (*(*rcx_16 + 0x3d8))(rcx_16, arg2, zx.q(arg3))
        
        r14 = &r14[1]
        rsi_2 += 1
    while (rsi_2 != rbx_2)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
