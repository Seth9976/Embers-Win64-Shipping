// 函数: sub_141eb7240
// 地址: 0x141eb7240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int64_t result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg2)

if (result.b != 0)
    void* var_f8_1 = nullptr
    int32_t result_1 = 0
    int32_t var_ec_1 = 0x20
    void var_1f8
    sub_142215230(&var_1f8, arg2)
    int128_t* rcx_2 = arg1[1]
    void* r15_1 = &var_1f8
    float zmm15[0x4] = data_14399f668
    int64_t zmm0_1 = *(rcx_2 + 8)
    float zmm8[0x4] = *rcx_2
    float zmm13[0x4] = **arg1
    float (* rax_3)[0x4] = arg1[2]
    void* rcx_3 = var_f8_1
    float temp0_1[0x4] = _mm_unpacklo_ps(*(rcx_2 + 4), 0)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm8, zmm0_1)
    zmm0_1 = data_14399f670
    
    if (rcx_3 != 0)
        r15_1 = rcx_3
    
    float zmm6[0x4] = *rax_3
    zmm8 = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float temp0_4[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm15, zmm0_1)
    zmm0_1 = (*rax_3)[2]
    zmm15 = _mm_unpacklo_ps(temp0_5, temp0_4[0].q)
    result = sx.q(result_1)
    zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0_1), _mm_unpacklo_ps((*rax_3)[1], 0)[0].q)
    void* r13_1 = r15_1 + (result << 3)
    float var_238_1[0x4] = zmm8
    float var_278_1[0x4] = zmm6
    
    if (r15_1 != r13_1)
        uint32_t zmm7[0x4]
        uint32_t var_58_1[0x4] = zmm7
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        float zmm10[0x4]
        float var_88_1[0x4] = zmm10
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        float zmm14[0x4]
        float var_c8_1[0x4] = zmm14
        
        do
            result.b = sub_14226e880(r15_1).b - 5
            
            if (result.b u> 1)
                float var_228[0x4]
                sub_14226de10(&var_228, r15_1)
                zmm12 = data_143f3a620
                zmm7 = data_143f3a520
                float var_208[0x4]
                float var_2e8_1[0x4] = var_208
                uint32_t temp0_12 =
                    _mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_208, zmm15), zmm12, 1))
                float var_378[0x4] = zmm12
                float zmm1_1[0x4]
                float zmm3_1[0x4]
                float zmm5_1[0x4]
                float var_218[0x4]
                
                if (temp0_12 == 0)
                    zmm14 = var_218
                    zmm5_1 = var_2e8_1
                    float temp0_142[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                    float temp0_143[0x4] = _mm_mul_ps(zmm14, zmm15)
                    float temp0_144[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
                    float temp0_146[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xc9), temp0_144)
                    float temp0_149[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xd2), temp0_142), 
                        temp0_146)
                    float temp0_150[0x4] = _mm_add_ps(temp0_149, temp0_149)
                    float temp0_152[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xd2), temp0_142)
                    float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), temp0_150)
                    float temp0_156[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xc9), temp0_144)
                    float temp0_157[0x4] = _mm_add_ps(temp0_154, temp0_143)
                    float temp0_159[0x4] = _mm_add_ps(_mm_sub_ps(temp0_152, temp0_156), temp0_157)
                    zmm1_1 = var_378
                    zmm12 = _mm_add_ps(temp0_159, zmm8)
                else
                    zmm10 = data_143f3a510
                    float temp0_13[0x4] = _mm_add_ps(zmm13, zmm13)
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                    float temp0_16[0x4] = _mm_shuffle_ps(var_208, var_208, 0xc9)
                    float temp0_17[0x4] = _mm_mul_ps(zmm13, temp0_13)
                    float temp0_19[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x29), temp0_14)
                    float temp0_20[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                    float temp0_22[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x12), temp0_20)
                    float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0x1a), 
                        _mm_shuffle_ps(temp0_17, temp0_17, 1))
                    zmm3_1 = var_228
                    float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_19)
                    float temp0_27[0x4] = _mm_sub_ps(temp0_19, temp0_22)
                    float temp0_28[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                    float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm15)
                    float temp0_30[0x4] = _mm_mul_ps(temp0_15, temp0_27)
                    zmm1_1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_25), zmm15), zmm7)
                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_30, zmm1_1, 0x32)
                    float temp0_36[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, zmm1_1, 0), temp0_34, 0x82)
                    float temp0_37[0x4] = _mm_shuffle_ps(temp0_29, zmm1_1, 0x31)
                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_30, zmm1_1, 0x10), temp0_37, 0x88)
                    float temp0_41[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, temp0_30, 0x12), zmm1_1, 0xe8)
                    float temp0_42[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                    zmm10[0].q = zmm8 u>> 0x40
                    float temp0_43[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                    float temp0_45[0x4] = _mm_mul_ps(zmm3_1, temp0_42)
                    float temp0_47[0x4] =
                        _mm_mul_ps(temp0_28, _mm_shuffle_ps(temp0_42, temp0_42, 0x29))
                    float temp0_48[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x12)
                    float temp0_49[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x1a)
                    float temp0_50[0x4] = _mm_mul_ps(temp0_44, temp0_48)
                    float temp0_52[0x4] =
                        _mm_add_ps(temp0_49, _mm_shuffle_ps(temp0_45, temp0_45, 1))
                    float temp0_53[0x4] = _mm_add_ps(temp0_50, temp0_47)
                    float temp0_54[0x4] = _mm_sub_ps(temp0_47, temp0_50)
                    float temp0_55[0x4] = _mm_sub_ps(zmm10, temp0_52)
                    float temp0_56[0x4] = _mm_mul_ps(temp0_53, var_208)
                    float temp0_57[0x4] = _mm_mul_ps(temp0_16, temp0_54)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_55, var_208), data_143f3a520)
                    float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, zmm1_1, 0x32)
                    float temp0_62[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_56, zmm1_1, 0), temp0_60, 0x82)
                    float temp0_63[0x4] = _mm_shuffle_ps(temp0_56, zmm1_1, 0x31)
                    float temp0_65[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_57, zmm1_1, 0x10), temp0_63, 0x88)
                    float temp0_66[0x4] = _mm_shuffle_ps(temp0_56, temp0_57, 0x12)
                    float temp0_67[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
                    float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, zmm1_1, 0xe8)
                    float temp0_70[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_41)
                    float temp0_71[0x4] = _mm_mul_ps(temp0_67, zmm7)
                    zmm10[0].q = var_218 u>> 0x40
                    float temp0_72[0x4] = _mm_shuffle_ps(var_218, zmm10, 0xc4)
                    float temp0_73[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
                    float temp0_75[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), temp0_43)
                    float temp0_77[0x4] = _mm_add_ps(temp0_71, _mm_mul_ps(temp0_73, temp0_36))
                    float temp0_79[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0), temp0_36)
                    float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_70)
                    float temp0_82[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_41)
                    float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_75)
                    float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0x55), zmm7)
                    float temp0_86[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
                    var_378 = temp0_83
                    float temp0_87[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
                    float temp0_88[0x4] = _mm_add_ps(temp0_85, temp0_79)
                    float temp0_89[0x4] = _mm_mul_ps(temp0_87, zmm7)
                    float temp0_90[0x4] = _mm_mul_ps(temp0_86, temp0_43)
                    float temp0_91[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0)
                    float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_82)
                    float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_36)
                    float temp0_95[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_41)
                    float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_90)
                    float temp0_97[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xff)
                    float temp0_98[0x4] = _mm_add_ps(temp0_89, temp0_93)
                    float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_43)
                    float temp0_100[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
                    int96_t var_368_1 = temp0_96[0].12
                    float temp0_101[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
                    float temp0_102[0x4] = _mm_add_ps(temp0_98, temp0_95)
                    float temp0_103[0x4] = _mm_mul_ps(temp0_101, zmm7)
                    float temp0_105[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xaa), temp0_41)
                    float temp0_106[0x4] = _mm_mul_ps(temp0_100, temp0_36)
                    float temp0_107[0x4] = _mm_add_ps(temp0_102, temp0_99)
                    float temp0_109[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xff), temp0_43)
                    float temp0_110[0x4] = _mm_add_ps(temp0_103, temp0_106)
                    int96_t var_358_1 = temp0_107[0].12
                    int96_t var_348_1 =
                        _mm_add_ps(_mm_add_ps(temp0_110, temp0_105), temp0_109)[0].12
                    zmm10, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_378, 0x322bcc77)
                    float zmm2_2[0x4] = var_378[0]
                    float zmm1_2 = var_378[1]
                    zmm12 = _mm_and_ps(_mm_cmpeq_ps(zmm12, _mm_mul_ps(zmm14, zmm15), 2), 
                        data_143f3a610 ^ zmm10)
                    uint32_t zmm0_3[0x4] = var_378[2]
                    zmm12 ^= data_143f3a610
                    zmm2_2[0] = zmm2_2[0] * zmm12[0]
                    zmm1_2 = zmm1_2 * zmm12[0]
                    zmm0_3[0] = zmm0_3[0] f* zmm12[0]
                    var_378[0] = zmm2_2[0]
                    var_378[1] = zmm1_2
                    float temp0_116[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    zmm1_2 = var_368_1:4.d * temp0_116[0]
                    var_378[2] = zmm0_3[0]
                    zmm0_3 = var_368_1:8.d
                    zmm0_3[0] = zmm0_3[0] f* temp0_116[0]
                    float zmm3_2 = var_368_1.d * temp0_116[0]
                    zmm2_2 = var_358_1.d
                    var_368_1:4.d = zmm1_2
                    var_368_1:8.d = zmm0_3[0]
                    zmm0_3 = var_358_1:8.d
                    float temp0_117[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                    zmm1_2 = var_358_1:4.d * temp0_117[0]
                    zmm0_3[0] = zmm0_3[0] f* temp0_117[0]
                    zmm2_2[0] = zmm2_2[0] * temp0_117[0]
                    var_358_1:4.d = zmm1_2
                    var_358_1:8.d = zmm0_3[0]
                    var_368_1.d = zmm3_2
                    var_358_1.d = zmm2_2[0]
                    uint32_t var_2a8[0x4]
                    sub_14077e4a0(&var_2a8, &var_378)
                    zmm6 = var_2a8
                    zmm5_1 = data_143f3a5f0
                    zmm14 = var_218
                    zmm7 = data_143f3a520
                    float temp0_118[0x4] = _mm_mul_ps(zmm6, zmm6)
                    float temp0_120[0x4] =
                        _mm_add_ps(temp0_118, _mm_shuffle_ps(temp0_118, temp0_118, 0x4e))
                    float temp0_122[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_120, temp0_120, 0x39), temp0_120)
                    float temp0_123[0x4] = _mm_rsqrt_ps(temp0_122)
                    float temp0_124[0x4] = _mm_mul_ps(temp0_122, zmm5_1)
                    float temp0_129[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_123, temp0_123), temp0_124)), 
                            temp0_123), 
                        temp0_123)
                    float temp0_132[0x4] =
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_129, temp0_129), temp0_124))
                    float temp0_134[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_122, 2)
                    float temp0_136[0x4] = _mm_add_ps(_mm_mul_ps(temp0_132, temp0_129), temp0_129)
                    float temp0_137[0x4] = _mm_unpacklo_ps(var_348_1:4.d, 0)
                    zmm1_1 = data_143f3a620
                    var_378 = zmm1_1
                    float temp0_138[0x4] = _mm_mul_ps(temp0_136, zmm6)
                    zmm6 = var_278_1
                    var_2a8 = _mm_and_ps(temp0_138 ^ data_143f3a5e0, temp0_134) ^ data_143f3a5e0
                    zmm5_1 = var_208
                    var_2e8_1 = zmm5_1
                    zmm12 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_348_1.d, var_348_1:8.d[0].q), 
                        temp0_137[0].q)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5_1, zmm15), zmm1_1, 1)) == 0)
                    float temp0_293[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                    float temp0_294[0x4] = _mm_mul_ps(zmm14, zmm15)
                    float temp0_295[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
                    float temp0_297[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_294, temp0_294, 0xc9), temp0_295)
                    float temp0_300[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_294, temp0_294, 0xd2), temp0_293), 
                        temp0_297)
                    float temp0_301[0x4] = _mm_add_ps(temp0_300, temp0_300)
                    float temp0_303[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_301, temp0_301, 0xd2), temp0_293)
                    float temp0_304[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                    float temp0_305[0x4] = _mm_shuffle_ps(temp0_301, temp0_301, 0xc9)
                    float temp0_306[0x4] = _mm_mul_ps(temp0_304, temp0_301)
                    float temp0_307[0x4] = _mm_mul_ps(temp0_305, temp0_295)
                    float temp0_308[0x4] = _mm_add_ps(temp0_306, temp0_294)
                    zmm8 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_303, temp0_307), temp0_308), zmm6)
                else
                    zmm10 = data_143f3a510
                    float temp0_164[0x4] = _mm_add_ps(zmm13, zmm13)
                    float temp0_165[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
                    float temp0_166[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                    float temp0_167[0x4] = _mm_mul_ps(zmm13, temp0_164)
                    float temp0_169[0x4] =
                        _mm_mul_ps(temp0_165, _mm_shuffle_ps(temp0_164, temp0_164, 0x29))
                    float temp0_172[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), 
                        _mm_shuffle_ps(temp0_164, temp0_164, 0x12))
                    float temp0_173[0x4] = _mm_add_ps(temp0_172, temp0_169)
                    float temp0_174[0x4] = _mm_sub_ps(temp0_169, temp0_172)
                    float temp0_177[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_167, temp0_167, 0x1a), 
                        _mm_shuffle_ps(temp0_167, temp0_167, 1))
                    zmm3_1 = var_228
                    float temp0_178[0x4] = _mm_mul_ps(temp0_173, zmm15)
                    float temp0_179[0x4] = _mm_mul_ps(temp0_166, temp0_174)
                    float temp0_180[0x4] = _mm_sub_ps(zmm10, temp0_177)
                    float temp0_181[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                    zmm1_1 = _mm_and_ps(_mm_mul_ps(temp0_180, zmm15), zmm7)
                    float temp0_184[0x4] = _mm_shuffle_ps(temp0_179, zmm1_1, 0x32)
                    float temp0_186[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_178, zmm1_1, 0), temp0_184, 0x82)
                    float temp0_187[0x4] = _mm_shuffle_ps(temp0_178, zmm1_1, 0x31)
                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_179, zmm1_1, 0x10), temp0_187, 0x88)
                    float temp0_191[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_178, temp0_179, 0x12), zmm1_1, 0xe8)
                    float temp0_192[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                    zmm10[0].q = zmm6 u>> 0x40
                    float temp0_193[0x4] = _mm_shuffle_ps(zmm6, zmm10, 0xc4)
                    float temp0_194[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                    float temp0_195[0x4] = _mm_mul_ps(zmm3_1, temp0_192)
                    float temp0_197[0x4] =
                        _mm_mul_ps(temp0_181, _mm_shuffle_ps(temp0_192, temp0_192, 0x29))
                    float temp0_199[0x4] =
                        _mm_mul_ps(temp0_194, _mm_shuffle_ps(temp0_192, temp0_192, 0x12))
                    float temp0_202[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_195, temp0_195, 0x1a), 
                        _mm_shuffle_ps(temp0_195, temp0_195, 1))
                    float temp0_203[0x4] = _mm_add_ps(temp0_199, temp0_197)
                    float temp0_204[0x4] = _mm_sub_ps(temp0_197, temp0_199)
                    float temp0_205[0x4] = _mm_sub_ps(zmm10, temp0_202)
                    float temp0_206[0x4] = _mm_mul_ps(temp0_203, zmm5_1)
                    float temp0_207[0x4] = __shufps_xmmps_memps_immb(zmm5_1, var_2e8_1, 0xc9)
                    float temp0_208[0x4] = __mulps_xmmps_memps(temp0_205, var_2e8_1)
                    float temp0_209[0x4] = _mm_mul_ps(temp0_207, temp0_204)
                    zmm1_1 = __andps_xmmxud_memxud(temp0_208, data_143f3a520)
                    float temp0_213[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_206, zmm1_1, 0), 
                        _mm_shuffle_ps(temp0_209, zmm1_1, 0x32), 0x82)
                    float temp0_214[0x4] = _mm_shuffle_ps(temp0_206, zmm1_1, 0x31)
                    float temp0_216[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_209, zmm1_1, 0x10), temp0_214, 0x88)
                    float temp0_218[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_206, temp0_209, 0x12), zmm1_1, 0xe8)
                    float temp0_219[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0xaa)
                    float temp0_220[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0x55)
                    float temp0_221[0x4] = _mm_mul_ps(temp0_219, temp0_191)
                    float temp0_222[0x4] = _mm_mul_ps(temp0_220, zmm7)
                    zmm10[0].q = zmm14 u>> 0x40
                    float temp0_223[0x4] = _mm_shuffle_ps(zmm14, zmm10, 0xc4)
                    float temp0_224[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0)
                    float temp0_226[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_213, temp0_213, 0xff), temp0_193)
                    float temp0_228[0x4] = _mm_add_ps(temp0_222, _mm_mul_ps(temp0_224, temp0_186))
                    float temp0_230[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_216, temp0_216, 0), temp0_186)
                    float temp0_231[0x4] = _mm_add_ps(temp0_228, temp0_221)
                    float temp0_233[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_216, temp0_216, 0xaa), temp0_191)
                    float temp0_234[0x4] = _mm_add_ps(temp0_231, temp0_226)
                    float temp0_236[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_216, temp0_216, 0x55), zmm7)
                    float temp0_237[0x4] = _mm_shuffle_ps(temp0_216, temp0_216, 0xff)
                    float var_338[0x4] = temp0_234
                    float temp0_238[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0x55)
                    float temp0_239[0x4] = _mm_add_ps(temp0_236, temp0_230)
                    float temp0_240[0x4] = _mm_mul_ps(temp0_238, zmm7)
                    float temp0_241[0x4] = _mm_mul_ps(temp0_237, temp0_193)
                    float temp0_242[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0)
                    float temp0_243[0x4] = _mm_add_ps(temp0_239, temp0_233)
                    float temp0_244[0x4] = _mm_mul_ps(temp0_242, temp0_186)
                    float temp0_246[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_218, temp0_218, 0xaa), temp0_191)
                    float temp0_247[0x4] = _mm_add_ps(temp0_243, temp0_241)
                    float temp0_248[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0xff)
                    float temp0_249[0x4] = _mm_add_ps(temp0_240, temp0_244)
                    float temp0_250[0x4] = _mm_mul_ps(temp0_248, temp0_193)
                    float temp0_251[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0)
                    int96_t var_328_1 = temp0_247[0].12
                    float temp0_252[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0x55)
                    float temp0_253[0x4] = _mm_add_ps(temp0_249, temp0_246)
                    float temp0_254[0x4] = _mm_mul_ps(temp0_252, zmm7)
                    float temp0_256[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0xaa), temp0_191)
                    float temp0_257[0x4] = _mm_mul_ps(temp0_251, temp0_186)
                    float temp0_258[0x4] = _mm_add_ps(temp0_253, temp0_250)
                    float temp0_260[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0xff), temp0_193)
                    float temp0_261[0x4] = _mm_add_ps(temp0_254, temp0_257)
                    int96_t var_318_1 = temp0_258[0].12
                    int96_t var_308_1 =
                        _mm_add_ps(_mm_add_ps(temp0_261, temp0_256), temp0_260)[0].12
                    int128_t zmm10_1
                    float zmm15_1[0x4]
                    zmm10_1, zmm12, zmm15_1 = sub_1407740e0(&var_338, 0x322bcc77)
                    float zmm2_3[0x4] = var_338[0]
                    float zmm1_3 = var_338[1]
                    float zmm4_2[0x4] = _mm_and_ps(
                        _mm_cmpeq_ps(var_378, _mm_mul_ps(var_2e8_1, zmm15_1), 2), 
                        data_143f3a610 ^ zmm10_1)
                    float zmm0_4[0x4] = var_338[2]
                    zmm4_2 ^= data_143f3a610
                    zmm2_3[0] = zmm2_3[0] * zmm4_2[0]
                    zmm1_3 = zmm1_3 * zmm4_2[0]
                    zmm0_4[0] = zmm0_4[0] * zmm4_2[0]
                    var_338[0] = zmm2_3[0]
                    var_338[1] = zmm1_3
                    float temp0_267[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                    zmm1_3 = var_328_1:4.d * temp0_267[0]
                    var_338[2] = zmm0_4[0]
                    zmm0_4 = var_328_1:8.d
                    zmm0_4[0] = zmm0_4[0] * temp0_267[0]
                    float zmm3_3 = var_328_1.d * temp0_267[0]
                    zmm2_3 = var_318_1.d
                    float temp0_268[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                    var_328_1:4.d = zmm1_3
                    var_328_1:8.d = zmm0_4[0]
                    zmm0_4 = var_318_1:8.d
                    zmm1_3 = var_318_1:4.d * temp0_268[0]
                    zmm0_4[0] = zmm0_4[0] * temp0_268[0]
                    zmm2_3[0] = zmm2_3[0] * temp0_268[0]
                    var_318_1:4.d = zmm1_3
                    var_318_1:8.d = zmm0_4[0]
                    var_328_1.d = zmm3_3
                    var_318_1.d = zmm2_3[0]
                    uint32_t var_298[0x4]
                    sub_14077e4a0(&var_298, &var_338)
                    zmm6 = var_298
                    float zmm5_2[0x4] = data_143f3a5f0
                    float temp0_269[0x4] = _mm_mul_ps(zmm6, zmm6)
                    float temp0_271[0x4] =
                        _mm_add_ps(temp0_269, _mm_shuffle_ps(temp0_269, temp0_269, 0x4e))
                    float temp0_273[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_271, temp0_271, 0x39), temp0_271)
                    float temp0_274[0x4] = _mm_rsqrt_ps(temp0_273)
                    float temp0_275[0x4] = _mm_mul_ps(temp0_273, zmm5_2)
                    float temp0_280[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_2, 
                                _mm_mul_ps(_mm_mul_ps(temp0_274, temp0_274), temp0_275)), 
                            temp0_274), 
                        temp0_274)
                    float temp0_283[0x4] =
                        _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_280, temp0_280), temp0_275))
                    float temp0_285[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_273, 2)
                    float temp0_287[0x4] = _mm_add_ps(_mm_mul_ps(temp0_283, temp0_280), temp0_280)
                    float temp0_288[0x4] = _mm_unpacklo_ps(var_308_1:4.d, 0)
                    zmm5_2 = _mm_and_ps(_mm_mul_ps(temp0_287, zmm6) ^ data_143f3a5e0, temp0_285)
                        ^ data_143f3a5e0
                    zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_308_1.d, var_308_1:8.d[0].q), 
                        temp0_288[0].q)
                    var_298 = zmm5_2
                
                float zmm2_1[0x4] = var_228
                float (* rax_6)[0x4] = *arg1
                float temp0_312[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b)
                zmm3_1 = *rax_6
                float temp0_314[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), temp0_312)
                float temp0_315[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                float temp0_316[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                float temp0_317[0x4] = _mm_mul_ps(temp0_315, zmm2_1)
                float temp0_318[0x4] = __mulps_xmmps_memps(temp0_314, data_143f3a560)
                float temp0_319[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                float temp0_320[0x4] = _mm_add_ps(temp0_318, temp0_317)
                float temp0_322[0x4] = _mm_mul_ps(temp0_316, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
                float temp0_324[0x4] = _mm_mul_ps(temp0_319, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
                float temp0_325[0x4] = __mulps_xmmps_memps(temp0_322, data_143f3a550)
                float temp0_326[0x4] = __mulps_xmmps_memps(temp0_324, data_143f3a540)
                float var_248[0x4] = _mm_add_ps(_mm_add_ps(temp0_320, temp0_325), temp0_326)
                void var_2f8
                sub_14226c680(&var_2f8, r15_1)
                int64_t* rax_7 = arg1[6]
                float var_260_1 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)[0]
                int64_t var_2d8 = 0
                int64_t* rcx_11 = *rax_7
                float var_254_1 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)[0]
                int32_t var_2d0_1 = 0
                int64_t rax_8 = *rcx_11
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                float temp0_332[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                int128_t* rax_9 = (*(rax_8 + 0x4b0))(rcx_11)
                sub_142259c00(&var_378)
                int32_t* rax_10 = arg1[4]
                int32_t r14_1 = data_143f3a5c8
                void* rdi_1 = arg1[5]
                void* rsi_1 = arg1[3]
                var_378 = *rax_9
                int128_t var_368_2 = rax_9[1]
                char rbx_2 = (*rax_10).b
                sub_140b34200("GeomSweepMultiple", r14_1)
                float var_2c0_1 = var_260_1
                float var_2b0_1 = var_254_1
                void* var_288 = &var_2f8
                float (* var_280_1)[0x4] = &var_248
                int32_t* var_398_1 = &data_143f3a680
                float (* var_3a0_1)[0x4] = &var_378
                int64_t var_2c8 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
                int64_t var_2b8 = (_mm_unpacklo_ps(zmm12, temp0_332[0].q)).q
                char rax_13
                rax_13, zmm13, zmm15 = sub_141eb37e0(rsi_1, &var_2d8, &var_288, &var_2b8, &var_2c8, 
                    rbx_2, rdi_1, var_3a0_1, var_398_1)
                sub_140b38680("GeomSweepMultiple", r14_1)
                
                if (rax_13 != 0)
                    *arg1[7] = 1
                
                int64_t* rbx_4 = arg1[8]
                int64_t rsi_2 = var_2d8
                
                if (var_2d0_1 != 0)
                    int32_t rcx_14 = rbx_4[1].d
                    int32_t rdx_8 = var_2d0_1 + rcx_14
                    
                    if (rdx_8 s> *(rbx_4 + 0xc))
                        sub_1405a5390(rbx_4, rdx_8)
                        rcx_14 = rbx_4[1].d
                    
                    memcpy(sx.q(rcx_14) * 0x88 + *rbx_4, rsi_2, var_2d0_1 * 0x88)
                    rbx_4[1].d += var_2d0_1
                
                if (rsi_2 != 0)
                    sub_140a74f90(rsi_2)
                
                result = sub_14225b2b0(&var_2f8)
                zmm6 = var_278_1
                zmm8 = var_238_1
            
            r15_1 += 8
        while (r15_1 != r13_1)
        
        rcx_3 = var_f8_1
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)

__security_check_cookie(rax_1 ^ &var_3d8)
return result
