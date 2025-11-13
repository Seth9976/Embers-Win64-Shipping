// 函数: sub_14173f1a0
// 地址: 0x14173f1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
uint64_t rbx = arg4
uint64_t rdi = arg3
uint64_t r13
uint64_t var_38 = r13
float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm11[0x4]
float var_a8[0x4] = zmm11
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm13[0x4]
float var_c8[0x4] = zmm13
float zmm14[0x4]
float var_d8[0x4] = zmm14
int32_t* var_198 = arg9
float zmm15[0x4]
float var_e8[0x4] = zmm15
uint64_t result

while (true)
    uint64_t rdx_3 = rbx
    void* rcx = rdi
    uint64_t r14_1 = rdi
    uint64_t rsi_1 = rbx
    char var_1f8_1
    
    if (rdi == 0)
        var_1f8_1 = 7
    else
        result.b = *(rdi + 8) & 0x3f
        var_1f8_1 = result.b
    
    if (rsi_1 == 0)
        r13.b = 7
    else
        r13.b = *(rbx + 8) & 0x3f
    
    if (r14_1 != 0 && rsi_1 != 0)
        char r12_1 = *(rdi + 8)
        char r15_1 = *(rbx + 8)
        int32_t* var_218_1
        uint64_t* var_210_1
        int32_t* var_208_1
        float var_1e8[0x4]
        uint32_t var_168[0x4]
        float var_158[0x4]
        float (* rax_12)[0x4]
        uint64_t r8
        uint64_t r9
        float zmm0[0x4]
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        float zmm4[0x4]
        float zmm5[0x4]
        
        if (r12_1 == 4)
            int128_t* rax_11
            
            if (r15_1 == r12_1)
                zmm13 = data_143ef7530
                zmm15 = data_143ef72e0
                zmm9 = data_143ef72d0
                
                if (r12_1 != 4)
                    rdi = 0
                
                zmm8 = arg5[2]
                zmm10 = data_143ef72c0
                
                if (r15_1 != 4)
                    rbx = 0
                
                zmm14 = *(rdi + 0x40)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), zmm13, 1)) == 0)
                    zmm4 = *arg5
                    zmm2 = *(rdi + 0x20)
                    zmm3 = *(rdi + 0x30)
                    float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
                    float temp0_136[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    float temp0_137[0x4] = _mm_mul_ps(zmm3, zmm8)
                    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    float temp0_139[0x4] = _mm_mul_ps(temp0_135, zmm15)
                    float temp0_140[0x4] = _mm_mul_ps(temp0_138, zmm2)
                    zmm12 = _mm_mul_ps(zmm14, zmm8)
                    float temp0_142[0x4] = _mm_add_ps(temp0_139, temp0_140)
                    float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    float temp0_148[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
                    float temp0_149[0x4] = _mm_mul_ps(temp0_144, zmm9)
                    float temp0_150[0x4] = _mm_mul_ps(temp0_147, zmm10)
                    float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_149)
                    float temp0_152[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    float temp0_153[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    float temp0_154[0x4] = _mm_mul_ps(temp0_148, temp0_153)
                    zmm6 = _mm_add_ps(temp0_151, temp0_150)
                    float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                        _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
                    float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
                    float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
                    float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
                    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
                    float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
                    float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_138)
                    zmm7 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), 
                            _mm_add_ps(temp0_164, temp0_137)), 
                        arg5[1])
                else
                    zmm3 = *arg5
                    zmm10 = data_143ef72f0
                    float temp0_4[0x4] = _mm_add_ps(zmm3, zmm3)
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                    _mm_mul_ps(zmm14, zmm8)
                    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_6)
                    float temp0_10[0x4] = _mm_mul_ps(temp0_4, zmm3)
                    float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
                    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_11)
                    float temp0_16[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                        _mm_shuffle_ps(temp0_10, temp0_10, 1))
                    float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_9)
                    float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_13)
                    zmm3 = *(rdi + 0x20)
                    float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_16)
                    float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm8)
                    float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
                    float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8)
                    zmm8 = arg5[1]
                    float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                    zmm1 = __andps_xmmxud_memxud(temp0_22, data_143ef7300)
                    float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
                    float temp0_27[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_25, 0x82)
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
                    float temp0_30[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_28, 0x88)
                    float temp0_32[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
                    float temp0_33[0x4] = _mm_add_ps(zmm3, zmm3)
                    zmm10[0].q = zmm8 u>> 0x40
                    float temp0_34[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                    float temp0_35[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x29)
                    float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm3)
                    float temp0_38[0x4] = _mm_mul_ps(temp0_23, temp0_36)
                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x12)
                    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_39)
                    float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                        _mm_shuffle_ps(temp0_37, temp0_37, 1))
                    float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_38)
                    float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_41)
                    float temp0_47[0x4] = _mm_sub_ps(zmm10, temp0_44)
                    float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
                    float temp0_49[0x4] = _mm_mul_ps(temp0_35, temp0_46)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143ef7300)
                    float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
                        _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
                    float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x10)
                    float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
                    float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                    float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
                    float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_30)
                    float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
                    zmm5 = *(rdi + 0x30)
                    float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
                    float temp0_63[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
                    zmm10[0].q = zmm5 u>> 0x40
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
                    float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
                    float temp0_67[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
                    float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
                    float temp0_71[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
                    float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
                    float temp0_74[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
                    float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
                    float temp0_77[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
                    float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
                    var_1e8 = temp0_75
                    float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                    float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                    float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
                    float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
                    float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                    float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
                    float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
                    float temp0_87[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
                    float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
                    float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                    float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
                    float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
                    float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                    int96_t var_1d8_1 = temp0_88[0].12
                    float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                    float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
                    float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
                    float temp0_97[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
                    float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
                    float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
                    float temp0_101[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
                    float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
                    int96_t var_1c8_1 = temp0_99[0].12
                    int96_t var_1b8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
                    zmm10, zmm12, zmm13, zmm15 = sub_1407740e0(&var_1e8, 0x322bcc77)
                    float zmm2_1[0x4] = var_1e8[0]
                    float zmm1_1 = var_1e8[1]
                    zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm12, 2), data_143ef7520 ^ zmm10)
                        ^ data_143ef7520
                    zmm2_1[0] = zmm2_1[0] * zmm13[0]
                    uint32_t zmm0_1[0x4] = var_1e8[2]
                    zmm0_1[0] = zmm0_1[0] f* zmm13[0]
                    zmm1_1 = zmm1_1 * zmm13[0]
                    var_1e8[0] = zmm2_1[0]
                    float temp0_107[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                    var_1e8[2] = zmm0_1[0]
                    zmm0_1 = var_1d8_1:8.d
                    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
                    var_1e8[1] = zmm1_1
                    zmm1_1 = var_1d8_1:4.d * temp0_107[0]
                    float zmm3_1 = var_1d8_1.d * temp0_107[0]
                    zmm2_1 = var_1c8_1.d
                    var_1d8_1:8.d = zmm0_1[0]
                    zmm0_1 = var_1c8_1:8.d
                    var_1d8_1:4.d = zmm1_1
                    float temp0_108[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                    zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
                    zmm2_1[0] = zmm2_1[0] * temp0_108[0]
                    zmm1_1 = var_1c8_1:4.d * temp0_108[0]
                    var_1c8_1:8.d = zmm0_1[0]
                    var_1d8_1.d = zmm3_1
                    var_1c8_1.d = zmm2_1[0]
                    var_1c8_1:4.d = zmm1_1
                    sub_14077e4a0(&var_168, &var_1e8)
                    zmm5 = var_168
                    zmm6 = data_143ef72b0
                    zmm13 = data_143ef7530
                    zmm9 = data_143ef72d0
                    zmm10 = data_143ef72c0
                    float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
                    float temp0_111[0x4] =
                        _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                    float temp0_113[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                    float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                    float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
                    float temp0_120[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, 
                                _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                            temp0_114), 
                        temp0_114)
                    float temp0_123[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                    float temp0_125[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                    float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
                    float temp0_128[0x4] = _mm_unpacklo_ps(var_1b8_1:4.d, 0)
                    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5) ^ data_143ef72a0, temp0_125)
                        ^ data_143ef72a0
                    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1b8_1.d, var_1b8_1:8.d[0].q), 
                        temp0_128[0].q)
                
                zmm14 = *(rbx + 0x40)
                var_158 = zmm6
                float var_148_1[0x4] = zmm7
                zmm8 = arg6[2]
                float var_138_1[0x4] = zmm12
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), zmm13, 1)) == 0)
                    zmm4 = *arg6
                    zmm2 = *(rbx + 0x20)
                    zmm3 = *(rbx + 0x30)
                    float temp0_301[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    float temp0_303[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_301)
                    float temp0_304[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm3 = _mm_mul_ps(zmm3, zmm8)
                    float temp0_306[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    float temp0_307[0x4] = _mm_mul_ps(temp0_303, zmm15)
                    float temp0_308[0x4] = _mm_mul_ps(temp0_306, zmm2)
                    zmm12 = _mm_mul_ps(zmm14, zmm8)
                    float temp0_310[0x4] = _mm_add_ps(temp0_307, temp0_308)
                    float temp0_312[0x4] = _mm_mul_ps(temp0_304, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    float temp0_315[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    float temp0_316[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                    float temp0_317[0x4] = _mm_mul_ps(temp0_312, zmm9)
                    float temp0_318[0x4] = _mm_mul_ps(temp0_315, zmm10)
                    float temp0_319[0x4] = _mm_add_ps(temp0_310, temp0_317)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    float temp0_321[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    float temp0_322[0x4] = _mm_mul_ps(temp0_316, temp0_321)
                    zmm6 = _mm_add_ps(temp0_319, temp0_318)
                    float temp0_326[0x4] =
                        _mm_sub_ps(temp0_322, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1))
                    float temp0_327[0x4] = _mm_add_ps(temp0_326, temp0_326)
                    float temp0_328[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)
                    float temp0_329[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
                    float temp0_330[0x4] = _mm_mul_ps(temp0_328, temp0_321)
                    zmm0 = _mm_mul_ps(temp0_329, zmm1)
                    float temp0_332[0x4] = _mm_mul_ps(temp0_327, temp0_306)
                    float temp0_333[0x4] = _mm_sub_ps(temp0_330, zmm0)
                    zmm2 = _mm_add_ps(temp0_332, zmm3)
                    zmm7 = __addps_xmmps_memps(_mm_add_ps(temp0_333, zmm2), arg6[1])
                else
                    zmm3 = *arg6
                    zmm10 = data_143ef72f0
                    float temp0_172[0x4] = _mm_add_ps(zmm3, zmm3)
                    float temp0_173[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                    float temp0_174[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                    float temp0_175[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    _mm_mul_ps(zmm14, zmm8)
                    float temp0_177[0x4] = _mm_mul_ps(zmm3, temp0_172)
                    float temp0_179[0x4] =
                        _mm_mul_ps(temp0_174, _mm_shuffle_ps(temp0_172, temp0_172, 0x29))
                    float temp0_180[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x12)
                    float temp0_181[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x1a)
                    float temp0_182[0x4] = _mm_mul_ps(temp0_175, temp0_180)
                    float temp0_184[0x4] =
                        _mm_add_ps(temp0_181, _mm_shuffle_ps(temp0_177, temp0_177, 1))
                    float temp0_185[0x4] = _mm_add_ps(temp0_182, temp0_179)
                    float temp0_186[0x4] = _mm_sub_ps(temp0_179, temp0_182)
                    zmm3 = *(rbx + 0x20)
                    float temp0_187[0x4] = _mm_sub_ps(zmm10, temp0_184)
                    float temp0_188[0x4] = _mm_mul_ps(temp0_185, zmm8)
                    float temp0_189[0x4] = _mm_mul_ps(temp0_173, temp0_186)
                    float temp0_190[0x4] = _mm_mul_ps(temp0_187, zmm8)
                    zmm8 = arg6[1]
                    float temp0_191[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                    zmm1 = __andps_xmmxud_memxud(temp0_190, data_143ef7300)
                    float temp0_193[0x4] = _mm_shuffle_ps(temp0_189, zmm1, 0x32)
                    float temp0_195[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, zmm1, 0), temp0_193, 0x82)
                    float temp0_196[0x4] = _mm_shuffle_ps(temp0_188, zmm1, 0x31)
                    float temp0_198[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, zmm1, 0x10), temp0_196, 0x88)
                    float temp0_200[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, temp0_189, 0x12), zmm1, 0xe8)
                    float temp0_201[0x4] = _mm_add_ps(zmm3, zmm3)
                    zmm10[0].q = zmm8 u>> 0x40
                    float temp0_202[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                    float temp0_203[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    float temp0_204[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    float temp0_205[0x4] = _mm_mul_ps(zmm3, temp0_201)
                    float temp0_207[0x4] =
                        _mm_mul_ps(temp0_191, _mm_shuffle_ps(temp0_201, temp0_201, 0x29))
                    float temp0_209[0x4] =
                        _mm_mul_ps(temp0_203, _mm_shuffle_ps(temp0_201, temp0_201, 0x12))
                    float temp0_212[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0x1a), 
                        _mm_shuffle_ps(temp0_205, temp0_205, 1))
                    float temp0_213[0x4] = _mm_add_ps(temp0_209, temp0_207)
                    float temp0_214[0x4] = _mm_sub_ps(temp0_207, temp0_209)
                    float temp0_215[0x4] = _mm_sub_ps(zmm10, temp0_212)
                    float temp0_216[0x4] = _mm_mul_ps(temp0_213, zmm14)
                    float temp0_217[0x4] = _mm_mul_ps(temp0_204, temp0_214)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_215, zmm14), data_143ef7300)
                    float temp0_222[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_216, zmm1, 0), 
                        _mm_shuffle_ps(temp0_217, zmm1, 0x32), 0x82)
                    float temp0_223[0x4] = _mm_shuffle_ps(temp0_217, zmm1, 0x10)
                    float temp0_225[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0x55), temp0_198)
                    float temp0_227[0x4] =
                        _mm_shuffle_ps(temp0_223, _mm_shuffle_ps(temp0_216, zmm1, 0x31), 0x88)
                    float temp0_228[0x4] = _mm_shuffle_ps(temp0_216, temp0_217, 0x12)
                    zmm5 = *(rbx + 0x30)
                    float temp0_229[0x4] = _mm_shuffle_ps(temp0_228, zmm1, 0xe8)
                    float temp0_231[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xaa), temp0_200)
                    zmm10[0].q = zmm5 u>> 0x40
                    float temp0_232[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
                    float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0)
                    float temp0_235[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xff), temp0_202)
                    float temp0_237[0x4] = _mm_add_ps(temp0_225, _mm_mul_ps(temp0_233, temp0_195))
                    float temp0_239[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0), temp0_195)
                    float temp0_240[0x4] = _mm_add_ps(temp0_237, temp0_231)
                    float temp0_242[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xaa), temp0_200)
                    float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_235)
                    float temp0_245[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0x55), temp0_198)
                    float temp0_246[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0xff)
                    var_1e8 = temp0_243
                    float temp0_247[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0x55)
                    float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_239)
                    float temp0_249[0x4] = _mm_mul_ps(temp0_247, temp0_198)
                    float temp0_250[0x4] = _mm_mul_ps(temp0_246, temp0_202)
                    float temp0_251[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0)
                    float temp0_252[0x4] = _mm_add_ps(temp0_248, temp0_242)
                    float temp0_253[0x4] = _mm_mul_ps(temp0_251, temp0_195)
                    float temp0_255[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xaa), temp0_200)
                    float temp0_256[0x4] = _mm_add_ps(temp0_249, temp0_253)
                    float temp0_257[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0xff)
                    float temp0_258[0x4] = _mm_add_ps(temp0_252, temp0_250)
                    float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_202)
                    float temp0_260[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
                    float temp0_261[0x4] = _mm_add_ps(temp0_256, temp0_255)
                    float temp0_262[0x4] = _mm_mul_ps(temp0_260, temp0_195)
                    int96_t var_1d8_2 = temp0_258[0].12
                    float temp0_263[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
                    float temp0_264[0x4] = _mm_add_ps(temp0_261, temp0_259)
                    float temp0_265[0x4] = _mm_mul_ps(temp0_263, temp0_198)
                    int96_t var_1c8_2 = temp0_264[0].12
                    float temp0_266[0x4] = _mm_add_ps(temp0_265, temp0_262)
                    float temp0_268[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_200)
                    float temp0_270[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xff), temp0_202)
                    int96_t var_1b8_2 =
                        _mm_add_ps(_mm_add_ps(temp0_266, temp0_268), temp0_270)[0].12
                    zmm10, zmm12, zmm13 = sub_1407740e0(&var_1e8, 0x322bcc77)
                    float zmm2_2[0x4] = var_1e8[0]
                    float zmm1_2 = var_1e8[1]
                    zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm12, 2), data_143ef7520 ^ zmm10)
                        ^ data_143ef7520
                    zmm2_2[0] = zmm2_2[0] * zmm13[0]
                    uint32_t zmm0_2[0x4] = var_1e8[2]
                    zmm0_2[0] = zmm0_2[0] f* zmm13[0]
                    zmm1_2 = zmm1_2 * zmm13[0]
                    var_1e8[0] = zmm2_2[0]
                    float temp0_275[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                    var_1e8[2] = zmm0_2[0]
                    zmm0_2 = var_1d8_2:8.d
                    zmm0_2[0] = zmm0_2[0] f* temp0_275[0]
                    var_1e8[1] = zmm1_2
                    zmm1_2 = var_1d8_2:4.d * temp0_275[0]
                    float zmm3_2 = var_1d8_2.d * temp0_275[0]
                    zmm2_2 = var_1c8_2.d
                    var_1d8_2:8.d = zmm0_2[0]
                    zmm0_2 = var_1c8_2:8.d
                    var_1d8_2:4.d = zmm1_2
                    float temp0_276[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                    zmm0_2[0] = zmm0_2[0] f* temp0_276[0]
                    zmm2_2[0] = zmm2_2[0] * temp0_276[0]
                    zmm1_2 = var_1c8_2:4.d * temp0_276[0]
                    var_1c8_2:8.d = zmm0_2[0]
                    var_1d8_2.d = zmm3_2
                    var_1c8_2.d = zmm2_2[0]
                    var_1c8_2:4.d = zmm1_2
                    sub_14077e4a0(&var_168, &var_1e8)
                    float zmm5_1[0x4] = var_168
                    zmm6 = data_143ef72b0
                    float temp0_277[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                    float temp0_279[0x4] =
                        _mm_add_ps(temp0_277, _mm_shuffle_ps(temp0_277, temp0_277, 0x4e))
                    float temp0_281[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_279, temp0_279, 0x39), temp0_279)
                    float temp0_282[0x4] = _mm_rsqrt_ps(temp0_281)
                    zmm3 = _mm_mul_ps(temp0_281, zmm6)
                    float temp0_288[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_282, temp0_282), zmm3)), 
                            temp0_282), 
                        temp0_282)
                    zmm1 = zx.o(0)
                    float temp0_291[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), zmm3))
                    float temp0_293[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_281, 2)
                    float temp0_295[0x4] = _mm_add_ps(_mm_mul_ps(temp0_291, temp0_288), temp0_288)
                    zmm2 = _mm_unpacklo_ps(var_1b8_2:4.d, 0)
                    zmm0 = var_1b8_2:8.d
                    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_295, zmm5_1) ^ data_143ef72a0, temp0_293)
                        ^ data_143ef72a0
                    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1b8_2.d, zmm0[0].q), zmm2[0].q)
                
                r9 = *(rbx + 0x10)
                var_208_1 = var_198
                var_210_1 = arg8
                var_218_1 = arg7
                float var_128[0x4]
                rax_11 = &var_128
                var_128 = zmm6
                float var_118_1[0x4] = zmm7
                float var_108_1[0x4] = zmm12
            label_14173fca9:
                r8 = *(rdi + 0x10)
                int128_t* var_220_1 = rax_11
                rax_12 = &var_158
            label_14173fcbe:
                float (* var_228_1)[0x4] = rax_12
                result =
                    sub_14173f1a0(zmm0, zmm1, r8, zmm2, r9, zmm3, var_218_1, var_210_1, var_208_1)
                break
                break
            
            if (r12_1 == r12_1)
                if (r12_1 != 4)
                    rdi = 0
                
                zmm6 = arg5[2]
                zmm14 = *(rdi + 0x40)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm6), data_143ef7530, 1)) == 0)
                    zmm4 = *arg5
                    zmm2 = *(rdi + 0x20)
                    zmm3 = *(rdi + 0x30)
                    float temp0_637[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    float temp0_639[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_637)
                    float temp0_640[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm3 = _mm_mul_ps(zmm3, zmm6)
                    float temp0_642[0x4] = __mulps_xmmps_memps(temp0_639, data_143ef72e0)
                    float temp0_643[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm13 = _mm_mul_ps(zmm6, zmm14)
                    float temp0_646[0x4] = _mm_add_ps(temp0_642, _mm_mul_ps(temp0_643, zmm2))
                    float temp0_648[0x4] = _mm_mul_ps(temp0_640, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    float temp0_651[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    float temp0_652[0x4] = __mulps_xmmps_memps(temp0_648, data_143ef72d0)
                    zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    float temp0_654[0x4] = __mulps_xmmps_memps(temp0_651, data_143ef72c0)
                    float temp0_655[0x4] = _mm_add_ps(temp0_646, temp0_652)
                    float temp0_656[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    float temp0_658[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_656)
                    zmm6 = _mm_add_ps(temp0_655, temp0_654)
                    float temp0_662[0x4] =
                        _mm_sub_ps(temp0_658, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm2))
                    zmm1 = _mm_add_ps(temp0_662, temp0_662)
                    float temp0_664[0x4] = _mm_mul_ps(temp0_643, zmm1)
                    float temp0_666[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_656)
                    float temp0_667[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    float temp0_668[0x4] = _mm_add_ps(temp0_664, zmm3)
                    zmm0 = _mm_mul_ps(temp0_667, zmm2)
                    zmm7 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_666, zmm0), temp0_668), 
                        arg5[1])
                else
                    zmm1 = *arg5
                    zmm11 = data_143ef72f0
                    zmm9 = arg5[1]
                    float temp0_508[0x4] = _mm_add_ps(zmm1, zmm1)
                    float temp0_509[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    float temp0_510[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                    _mm_mul_ps(zmm14, zmm6)
                    float temp0_512[0x4] = _mm_mul_ps(temp0_508, zmm1)
                    float temp0_514[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_508, temp0_508, 0x29), temp0_510)
                    float temp0_515[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                    float temp0_516[0x4] = _mm_shuffle_ps(temp0_512, temp0_512, 0x1a)
                    float temp0_518[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_508, temp0_508, 0x12), temp0_515)
                    float temp0_520[0x4] =
                        _mm_add_ps(temp0_516, _mm_shuffle_ps(temp0_512, temp0_512, 1))
                    float temp0_521[0x4] = _mm_add_ps(temp0_518, temp0_514)
                    float temp0_522[0x4] = _mm_sub_ps(temp0_514, temp0_518)
                    zmm3 = *(rdi + 0x20)
                    float temp0_523[0x4] = _mm_sub_ps(zmm11, temp0_520)
                    float temp0_524[0x4] = _mm_mul_ps(temp0_521, zmm6)
                    float temp0_525[0x4] = _mm_mul_ps(temp0_509, temp0_522)
                    float temp0_526[0x4] = _mm_mul_ps(temp0_523, zmm6)
                    float temp0_527[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                    zmm1 = __andps_xmmxud_memxud(temp0_526, data_143ef7300)
                    float temp0_529[0x4] = _mm_shuffle_ps(temp0_525, zmm1, 0x32)
                    float temp0_531[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_524, zmm1, 0), temp0_529, 0x82)
                    float temp0_532[0x4] = _mm_shuffle_ps(temp0_524, zmm1, 0x31)
                    float temp0_534[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_525, zmm1, 0x10), temp0_532, 0x88)
                    float temp0_536[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_524, temp0_525, 0x12), zmm1, 0xe8)
                    float temp0_537[0x4] = _mm_add_ps(zmm3, zmm3)
                    zmm11[0].q = zmm9 u>> 0x40
                    float temp0_538[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                    float temp0_539[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    float temp0_540[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    float temp0_541[0x4] = _mm_mul_ps(zmm3, temp0_537)
                    float temp0_543[0x4] =
                        _mm_mul_ps(temp0_527, _mm_shuffle_ps(temp0_537, temp0_537, 0x29))
                    float temp0_545[0x4] =
                        _mm_mul_ps(temp0_539, _mm_shuffle_ps(temp0_537, temp0_537, 0x12))
                    float temp0_548[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_541, temp0_541, 0x1a), 
                        _mm_shuffle_ps(temp0_541, temp0_541, 1))
                    float temp0_549[0x4] = _mm_add_ps(temp0_545, temp0_543)
                    float temp0_550[0x4] = _mm_sub_ps(temp0_543, temp0_545)
                    float temp0_551[0x4] = _mm_sub_ps(zmm11, temp0_548)
                    float temp0_552[0x4] = _mm_mul_ps(temp0_549, zmm14)
                    float temp0_553[0x4] = _mm_mul_ps(temp0_540, temp0_550)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_551, zmm14), data_143ef7300)
                    float temp0_558[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_552, zmm1, 0), 
                        _mm_shuffle_ps(temp0_553, zmm1, 0x32), 0x82)
                    float temp0_559[0x4] = _mm_shuffle_ps(temp0_553, zmm1, 0x10)
                    float temp0_560[0x4] = _mm_shuffle_ps(temp0_552, zmm1, 0x31)
                    float temp0_561[0x4] = _mm_shuffle_ps(temp0_558, temp0_558, 0x55)
                    float temp0_562[0x4] = _mm_shuffle_ps(temp0_559, temp0_560, 0x88)
                    float temp0_563[0x4] = _mm_mul_ps(temp0_561, temp0_534)
                    float temp0_564[0x4] = _mm_shuffle_ps(temp0_552, temp0_553, 0x12)
                    zmm5 = *(rdi + 0x30)
                    float temp0_565[0x4] = _mm_shuffle_ps(temp0_564, zmm1, 0xe8)
                    float temp0_567[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_558, temp0_558, 0xaa), temp0_536)
                    zmm11[0].q = zmm5 u>> 0x40
                    float temp0_568[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                    float temp0_569[0x4] = _mm_shuffle_ps(temp0_558, temp0_558, 0)
                    float temp0_571[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_558, temp0_558, 0xff), temp0_538)
                    float temp0_573[0x4] = _mm_add_ps(temp0_563, _mm_mul_ps(temp0_569, temp0_531))
                    float temp0_575[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_562, temp0_562, 0), temp0_531)
                    float temp0_576[0x4] = _mm_add_ps(temp0_573, temp0_567)
                    float temp0_578[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_562, temp0_562, 0xaa), temp0_536)
                    float temp0_579[0x4] = _mm_add_ps(temp0_576, temp0_571)
                    float temp0_581[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_562, temp0_562, 0x55), temp0_534)
                    float temp0_582[0x4] = _mm_shuffle_ps(temp0_562, temp0_562, 0xff)
                    var_1e8 = temp0_579
                    float temp0_583[0x4] = _mm_shuffle_ps(temp0_565, temp0_565, 0x55)
                    float temp0_584[0x4] = _mm_add_ps(temp0_581, temp0_575)
                    float temp0_585[0x4] = _mm_mul_ps(temp0_583, temp0_534)
                    float temp0_586[0x4] = _mm_mul_ps(temp0_582, temp0_538)
                    float temp0_587[0x4] = _mm_shuffle_ps(temp0_565, temp0_565, 0)
                    float temp0_588[0x4] = _mm_add_ps(temp0_584, temp0_578)
                    float temp0_589[0x4] = _mm_mul_ps(temp0_587, temp0_531)
                    float temp0_591[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_565, temp0_565, 0xaa), temp0_536)
                    float temp0_592[0x4] = _mm_add_ps(temp0_588, temp0_586)
                    float temp0_593[0x4] = _mm_shuffle_ps(temp0_565, temp0_565, 0xff)
                    float temp0_594[0x4] = _mm_add_ps(temp0_585, temp0_589)
                    float temp0_595[0x4] = _mm_mul_ps(temp0_593, temp0_538)
                    float temp0_596[0x4] = _mm_shuffle_ps(temp0_568, temp0_568, 0)
                    int96_t var_1d8_4 = temp0_592[0].12
                    float temp0_597[0x4] = _mm_shuffle_ps(temp0_568, temp0_568, 0x55)
                    float temp0_598[0x4] = _mm_add_ps(temp0_594, temp0_591)
                    float temp0_599[0x4] = _mm_mul_ps(temp0_597, temp0_534)
                    float temp0_601[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0xaa), temp0_536)
                    float temp0_602[0x4] = _mm_mul_ps(temp0_596, temp0_531)
                    float temp0_603[0x4] = _mm_add_ps(temp0_598, temp0_595)
                    float temp0_605[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0xff), temp0_538)
                    float temp0_606[0x4] = _mm_add_ps(temp0_599, temp0_602)
                    int96_t var_1c8_4 = temp0_603[0].12
                    int96_t var_1b8_4 =
                        _mm_add_ps(_mm_add_ps(temp0_606, temp0_601), temp0_605)[0].12
                    zmm11, zmm13, zmm15 = sub_1407740e0(&var_1e8, 0x322bcc77)
                    float zmm2_4[0x4] = var_1e8[0]
                    float zmm1_4 = var_1e8[1]
                    zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143ef7520 ^ zmm11)
                        ^ data_143ef7520
                    zmm2_4[0] = zmm2_4[0] * zmm15[0]
                    uint32_t zmm0_4[0x4] = var_1e8[2]
                    zmm0_4[0] = zmm0_4[0] f* zmm15[0]
                    zmm1_4 = zmm1_4 * zmm15[0]
                    var_1e8[0] = zmm2_4[0]
                    float temp0_611[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                    var_1e8[2] = zmm0_4[0]
                    zmm0_4 = var_1d8_4:8.d
                    zmm0_4[0] = zmm0_4[0] f* temp0_611[0]
                    var_1e8[1] = zmm1_4
                    zmm1_4 = var_1d8_4:4.d * temp0_611[0]
                    float zmm3_4 = var_1d8_4.d * temp0_611[0]
                    zmm2_4 = var_1c8_4.d
                    var_1d8_4:8.d = zmm0_4[0]
                    zmm0_4 = var_1c8_4:8.d
                    var_1d8_4:4.d = zmm1_4
                    float temp0_612[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                    zmm0_4[0] = zmm0_4[0] f* temp0_612[0]
                    zmm2_4[0] = zmm2_4[0] * temp0_612[0]
                    zmm1_4 = var_1c8_4:4.d * temp0_612[0]
                    var_1c8_4:8.d = zmm0_4[0]
                    var_1d8_4.d = zmm3_4
                    var_1c8_4.d = zmm2_4[0]
                    var_1c8_4:4.d = zmm1_4
                    sub_14077e4a0(&var_168, &var_1e8)
                    float zmm5_3[0x4] = var_168
                    zmm6 = data_143ef72b0
                    float temp0_613[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                    float temp0_615[0x4] =
                        _mm_add_ps(temp0_613, _mm_shuffle_ps(temp0_613, temp0_613, 0x4e))
                    float temp0_617[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_615, temp0_615, 0x39), temp0_615)
                    float temp0_618[0x4] = _mm_rsqrt_ps(temp0_617)
                    zmm3 = _mm_mul_ps(temp0_617, zmm6)
                    float temp0_624[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_618, temp0_618), zmm3)), 
                            temp0_618), 
                        temp0_618)
                    zmm1 = zx.o(0)
                    float temp0_627[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_624, temp0_624), zmm3))
                    float temp0_629[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_617, 2)
                    float temp0_631[0x4] = _mm_add_ps(_mm_mul_ps(temp0_627, temp0_624), temp0_624)
                    zmm2 = _mm_unpacklo_ps(var_1b8_4:4.d, 0)
                    zmm0 = var_1b8_4:8.d
                    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_631, zmm5_3) ^ data_143ef72a0, temp0_629)
                        ^ data_143ef72a0
                    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1b8_4.d, zmm0[0].q), zmm2[0].q)
                
                r9 = rsi_1
                var_208_1 = var_198
                var_210_1 = arg8
                var_218_1 = arg7
                rax_11 = arg6
                var_158 = zmm6
                float var_148_3[0x4] = zmm7
                float var_138_3[0x4] = zmm13
                goto label_14173fca9
        
        if (r15_1 == 4)
            if (r15_1 != 4)
                rbx = 0
            
            zmm8 = arg6[2]
            zmm14 = *(rbx + 0x40)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143ef7530, 1)) == 0)
                zmm4 = *arg6
                zmm2 = *(rbx + 0x20)
                zmm3 = *(rbx + 0x30)
                float temp0_469[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_471[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_469)
                float temp0_472[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                zmm3 = _mm_mul_ps(zmm3, zmm8)
                float temp0_474[0x4] = __mulps_xmmps_memps(temp0_471, data_143ef72e0)
                float temp0_475[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                float temp0_476[0x4] = _mm_mul_ps(zmm2, temp0_475)
                zmm13 = _mm_mul_ps(zmm14, zmm8)
                float temp0_478[0x4] = _mm_add_ps(temp0_474, temp0_476)
                float temp0_480[0x4] = _mm_mul_ps(temp0_472, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_483[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_484[0x4] = __mulps_xmmps_memps(temp0_480, data_143ef72d0)
                float temp0_485[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                float temp0_486[0x4] = __mulps_xmmps_memps(temp0_483, data_143ef72c0)
                float temp0_487[0x4] = _mm_add_ps(temp0_478, temp0_484)
                zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_489[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_490[0x4] = _mm_mul_ps(temp0_485, temp0_489)
                zmm6 = _mm_add_ps(temp0_487, temp0_486)
                float temp0_494[0x4] =
                    _mm_sub_ps(temp0_490, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1))
                float temp0_495[0x4] = _mm_add_ps(temp0_494, temp0_494)
                float temp0_496[0x4] = _mm_shuffle_ps(temp0_495, temp0_495, 0xd2)
                float temp0_497[0x4] = _mm_shuffle_ps(temp0_495, temp0_495, 0xc9)
                float temp0_498[0x4] = _mm_mul_ps(temp0_496, temp0_489)
                zmm0 = _mm_mul_ps(temp0_497, zmm1)
                float temp0_500[0x4] = _mm_mul_ps(temp0_495, temp0_475)
                float temp0_501[0x4] = _mm_sub_ps(temp0_498, zmm0)
                zmm2 = _mm_add_ps(temp0_500, zmm3)
                zmm7 = __addps_xmmps_memps(_mm_add_ps(temp0_501, zmm2), arg6[1])
            else
                zmm3 = *arg6
                zmm11 = data_143ef72f0
                zmm9 = arg6[1]
                float temp0_340[0x4] = _mm_add_ps(zmm3, zmm3)
                float temp0_341[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                float temp0_342[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_343[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_344[0x4] = _mm_mul_ps(zmm3, temp0_340)
                float temp0_346[0x4] =
                    _mm_mul_ps(temp0_342, _mm_shuffle_ps(temp0_340, temp0_340, 0x29))
                float temp0_347[0x4] = _mm_shuffle_ps(temp0_340, temp0_340, 0x12)
                float temp0_348[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0x1a)
                float temp0_349[0x4] = _mm_mul_ps(temp0_343, temp0_347)
                float temp0_351[0x4] =
                    _mm_add_ps(temp0_348, _mm_shuffle_ps(temp0_344, temp0_344, 1))
                _mm_mul_ps(zmm14, zmm8)
                float temp0_353[0x4] = _mm_add_ps(temp0_349, temp0_346)
                float temp0_354[0x4] = _mm_sub_ps(temp0_346, temp0_349)
                zmm3 = *(rbx + 0x20)
                float temp0_355[0x4] = _mm_sub_ps(zmm11, temp0_351)
                float temp0_356[0x4] = _mm_mul_ps(temp0_353, zmm8)
                float temp0_357[0x4] = _mm_mul_ps(temp0_341, temp0_354)
                float temp0_358[0x4] = _mm_mul_ps(temp0_355, zmm8)
                float temp0_359[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                zmm1 = __andps_xmmxud_memxud(temp0_358, data_143ef7300)
                float temp0_361[0x4] = _mm_shuffle_ps(temp0_357, zmm1, 0x32)
                float temp0_363[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_356, zmm1, 0), temp0_361, 0x82)
                float temp0_364[0x4] = _mm_shuffle_ps(temp0_356, zmm1, 0x31)
                float temp0_366[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_357, zmm1, 0x10), temp0_364, 0x88)
                float temp0_368[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_356, temp0_357, 0x12), zmm1, 0xe8)
                float temp0_369[0x4] = _mm_add_ps(zmm3, zmm3)
                zmm11[0].q = zmm9 u>> 0x40
                float temp0_370[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                float temp0_371[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_372[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float temp0_373[0x4] = _mm_mul_ps(zmm3, temp0_369)
                float temp0_375[0x4] =
                    _mm_mul_ps(temp0_359, _mm_shuffle_ps(temp0_369, temp0_369, 0x29))
                float temp0_377[0x4] =
                    _mm_mul_ps(temp0_371, _mm_shuffle_ps(temp0_369, temp0_369, 0x12))
                float temp0_380[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_373, temp0_373, 0x1a), 
                    _mm_shuffle_ps(temp0_373, temp0_373, 1))
                float temp0_381[0x4] = _mm_add_ps(temp0_377, temp0_375)
                float temp0_382[0x4] = _mm_sub_ps(temp0_375, temp0_377)
                float temp0_383[0x4] = _mm_sub_ps(zmm11, temp0_380)
                float temp0_384[0x4] = _mm_mul_ps(temp0_381, zmm14)
                float temp0_385[0x4] = _mm_mul_ps(temp0_372, temp0_382)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_383, zmm14), data_143ef7300)
                float temp0_390[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_384, zmm1, 0), 
                    _mm_shuffle_ps(temp0_385, zmm1, 0x32), 0x82)
                float temp0_391[0x4] = _mm_shuffle_ps(temp0_385, zmm1, 0x10)
                float temp0_392[0x4] = _mm_shuffle_ps(temp0_384, zmm1, 0x31)
                float temp0_393[0x4] = _mm_shuffle_ps(temp0_390, temp0_390, 0)
                float temp0_394[0x4] = _mm_shuffle_ps(temp0_391, temp0_392, 0x88)
                float temp0_395[0x4] = _mm_mul_ps(temp0_393, temp0_363)
                float temp0_396[0x4] = _mm_shuffle_ps(temp0_384, temp0_385, 0x12)
                zmm5 = *(rbx + 0x30)
                float temp0_397[0x4] = _mm_shuffle_ps(temp0_396, zmm1, 0xe8)
                float temp0_399[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0xaa), temp0_368)
                zmm11[0].q = zmm5 u>> 0x40
                float temp0_400[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                float temp0_401[0x4] = _mm_shuffle_ps(temp0_390, temp0_390, 0x55)
                float temp0_403[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0xff), temp0_370)
                float temp0_405[0x4] = _mm_add_ps(temp0_395, _mm_mul_ps(temp0_401, temp0_366))
                float temp0_407[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_394, temp0_394, 0), temp0_363)
                float temp0_408[0x4] = _mm_add_ps(temp0_405, temp0_399)
                float temp0_410[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_394, temp0_394, 0xaa), temp0_368)
                float temp0_411[0x4] = _mm_add_ps(temp0_408, temp0_403)
                float temp0_413[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_394, temp0_394, 0x55), temp0_366)
                float temp0_414[0x4] = _mm_shuffle_ps(temp0_394, temp0_394, 0xff)
                var_1e8 = temp0_411
                float temp0_415[0x4] = _mm_shuffle_ps(temp0_397, temp0_397, 0x55)
                float temp0_416[0x4] = _mm_add_ps(temp0_413, temp0_407)
                float temp0_417[0x4] = _mm_mul_ps(temp0_415, temp0_366)
                float temp0_418[0x4] = _mm_mul_ps(temp0_414, temp0_370)
                float temp0_419[0x4] = _mm_shuffle_ps(temp0_397, temp0_397, 0)
                float temp0_420[0x4] = _mm_add_ps(temp0_416, temp0_410)
                float temp0_421[0x4] = _mm_mul_ps(temp0_419, temp0_363)
                float temp0_423[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_397, temp0_397, 0xaa), temp0_368)
                float temp0_424[0x4] = _mm_add_ps(temp0_420, temp0_418)
                float temp0_425[0x4] = _mm_shuffle_ps(temp0_397, temp0_397, 0xff)
                float temp0_426[0x4] = _mm_add_ps(temp0_417, temp0_421)
                float temp0_427[0x4] = _mm_mul_ps(temp0_425, temp0_370)
                float temp0_428[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0)
                int96_t var_1d8_3 = temp0_424[0].12
                float temp0_429[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0x55)
                float temp0_430[0x4] = _mm_add_ps(temp0_426, temp0_423)
                float temp0_431[0x4] = _mm_mul_ps(temp0_429, temp0_366)
                float temp0_433[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xaa), temp0_368)
                float temp0_434[0x4] = _mm_mul_ps(temp0_428, temp0_363)
                float temp0_435[0x4] = _mm_add_ps(temp0_430, temp0_427)
                float temp0_437[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xff), temp0_370)
                float temp0_438[0x4] = _mm_add_ps(temp0_431, temp0_434)
                int96_t var_1c8_3 = temp0_435[0].12
                int96_t var_1b8_3 = _mm_add_ps(_mm_add_ps(temp0_438, temp0_433), temp0_437)[0].12
                zmm11, zmm13, zmm15 = sub_1407740e0(&var_1e8, 0x322bcc77)
                float zmm2_3[0x4] = var_1e8[0]
                float zmm1_3 = var_1e8[1]
                zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143ef7520 ^ zmm11)
                    ^ data_143ef7520
                zmm2_3[0] = zmm2_3[0] * zmm15[0]
                uint32_t zmm0_3[0x4] = var_1e8[2]
                zmm0_3[0] = zmm0_3[0] f* zmm15[0]
                zmm1_3 = zmm1_3 * zmm15[0]
                var_1e8[0] = zmm2_3[0]
                float temp0_443[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                var_1e8[2] = zmm0_3[0]
                zmm0_3 = var_1d8_3:8.d
                zmm0_3[0] = zmm0_3[0] f* temp0_443[0]
                var_1e8[1] = zmm1_3
                zmm1_3 = var_1d8_3:4.d * temp0_443[0]
                float zmm3_3 = var_1d8_3.d * temp0_443[0]
                zmm2_3 = var_1c8_3.d
                var_1d8_3:8.d = zmm0_3[0]
                zmm0_3 = var_1c8_3:8.d
                var_1d8_3:4.d = zmm1_3
                float temp0_444[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                zmm0_3[0] = zmm0_3[0] f* temp0_444[0]
                zmm2_3[0] = zmm2_3[0] * temp0_444[0]
                zmm1_3 = var_1c8_3:4.d * temp0_444[0]
                var_1c8_3:8.d = zmm0_3[0]
                var_1d8_3.d = zmm3_3
                var_1c8_3.d = zmm2_3[0]
                var_1c8_3:4.d = zmm1_3
                sub_14077e4a0(&var_168, &var_1e8)
                uint32_t zmm5_2[0x4] = var_168
                zmm6 = data_143ef72b0
                float temp0_445[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                float temp0_447[0x4] =
                    _mm_add_ps(temp0_445, _mm_shuffle_ps(temp0_445, temp0_445, 0x4e))
                float temp0_449[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_447, temp0_447, 0x39), temp0_447)
                float temp0_450[0x4] = _mm_rsqrt_ps(temp0_449)
                zmm3 = _mm_mul_ps(temp0_449, zmm6)
                float temp0_456[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_450, temp0_450), zmm3)), 
                        temp0_450), 
                    temp0_450)
                zmm1 = zx.o(0)
                float temp0_459[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_456, temp0_456), zmm3))
                float temp0_461[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_449, 2)
                float temp0_463[0x4] = _mm_add_ps(_mm_mul_ps(temp0_459, temp0_456), temp0_456)
                zmm2 = _mm_unpacklo_ps(var_1b8_3:4.d, 0)
                zmm0 = var_1b8_3:8.d
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_463, zmm5_2) ^ data_143ef72a0, temp0_461)
                    ^ data_143ef72a0
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1b8_3.d, zmm0[0].q), zmm2[0].q)
            
            r8 = r14_1
            r9 = *(rbx + 0x10)
            var_208_1 = var_198
            var_210_1 = arg8
            var_218_1 = arg7
            int128_t* var_220_5 = &var_158
            rax_12 = arg5
            var_158 = zmm6
            float var_148_2[0x4] = zmm7
            float var_138_2[0x4] = zmm13
            goto label_14173fcbe
        
        result.b = r15_1 | r12_1
        
        if ((result.b & 0x40) != 0)
            if ((r12_1 & 0x40) != 0)
                rdi = sub_14173e680(rcx)
            
            if ((r15_1 & 0x40) != 0)
                rbx = sub_14173e680(rsi_1)
            
            if (rdi == 0)
                if (rbx == 0)
                    rcx = r14_1
                    rdx_3 = rsi_1
                else
                    rdi = r14_1
                    continue
            else if (rbx != 0)
                continue
            else
                rbx = rsi_1
                continue
        
        if (r12_1 == 5)
            rdi.b = 0
            
            if (*(r14_1 + 8) != r12_1)
                rcx = nullptr
            
            int64_t* i = *(rcx + 0x10)
            
            for (void* r14_2 = &i[sx.q(*(rcx + 0x18))]; i != r14_2; i = &i[1])
                rdi = zx.q(rdi.b)
                
                if (sub_14173f1a0(arg1, arg2, *i, rsi_1, arg5, arg6, arg7, arg8, var_198) != 0)
                    rdi = 1
            
            result = zx.q(rdi.b)
            break
        
        if (r15_1 == 5)
            rdi.b = 0
            
            if (*(rsi_1 + 8) != r15_1)
                rdx_3 = 0
            
            int64_t* rbx_1 = *(rdx_3 + 0x10)
            void* rsi_2 = &rbx_1[sx.q(*(rdx_3 + 0x18))]
            
            if (rbx_1 == rsi_2)
                result = zx.q(rdi.b)
                break
            
            do
                rdi = zx.q(rdi.b)
                
                if (sub_14173f1a0(arg1, arg2, r14_1, *rbx_1, arg5, arg6, arg7, arg8, var_198) != 0)
                    rdi = 1
                
                rbx_1 = &rbx_1[1]
            while (rbx_1 != rsi_2)
            
            result = zx.q(rdi.b)
            break
        
        void* rax_17 = sub_14173e5e0(arg2, rsi_1)
        
        if (sub_141554ef0(var_1f8_1, sub_14173e5e0(arg1, r14_1), r13.b, rax_17).b != 0)
            result = sub_14173e8a0(arg1, arg2, r14_1, rsi_1, arg5, arg6, arg7, arg8, var_198)
            break
    
    result.b = 0
    break

__security_check_cookie(rax_1 ^ &var_248)
return result
