// 函数: sub_14207e0e0
// 地址: 0x14207e0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t result = sx.q(arg2)
int32_t var_1f0 = result.d

if (arg2 s< 0)
    result.b = 0
else
    int32_t rcx = arg1[0x94].d
    
    if (result.d s>= rcx)
        result.b = 0
    else
        int32_t r8 = arg3 + result.d
        
        if (r8 - 1 s< 0 || r8 - 1 s>= rcx)
            result.b = 0
        else
            int64_t r12_1 = sx.q(r8)
            int32_t r15_1 = result.d
            
            if (result s< r12_1)
                float zmm6[0x4] = data_143f47570
                float zmm8[0x4]
                float var_68_1[0x4] = zmm8
                float zmm11[0x4]
                float var_98_1[0x4] = zmm11
                float zmm12[0x4]
                float var_a8_1[0x4] = zmm12
                float zmm13[0x4]
                float var_b8_1[0x4] = zmm13
                float zmm14[0x4]
                float var_c8_1[0x4] = zmm14
                float zmm15[0x4]
                float var_d8_1[0x4] = zmm15
                float zmm7[0x4]
                float var_58_1[0x4] = zmm7
                int64_t rsi_2 = result << 6
                float zmm9[0x4]
                float var_78_1[0x4] = zmm9
                int64_t i_1 = r12_1 - result
                float zmm10[0x4]
                float var_88_1[0x4] = zmm10
                int64_t i
                
                do
                    int64_t r14_1 = arg1[0x93]
                    float var_178[0x4]
                    float var_148[0x4]
                    float (* rax_2)[0x4]
                    float zmm1[0x4]
                    
                    if (arg5 == 0)
                        rax_2 = &var_178
                        zmm1 = arg4[1]
                        var_178 = *arg4
                        float var_158_1[0x4] = arg4[2]
                        float var_168_1[0x4] = zmm1
                    else
                        rax_2 = sub_140ad7d70(arg4, &var_148, &arg1[0x38])
                        zmm6 = data_143f47570
                    
                    zmm11 = *rax_2
                    zmm12 = rax_2[2]
                    float zmm4[0x4] = data_143f47560
                    float temp0_1[0x4] = _mm_add_ps(zmm11, zmm11)
                    zmm8 = rax_2[1]
                    float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 4)
                    float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                    float var_198_1[0x4] = zmm8
                    float temp0_4[0x4] = _mm_mul_ps(zmm11, temp0_1)
                    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
                    float temp0_8[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_1, temp0_1, 0x12))
                    float temp0_11[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x1a), 
                        _mm_shuffle_ps(temp0_4, temp0_4, 1))
                    float temp0_12[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                    float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
                    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
                    float temp0_15[0x4] = _mm_mul_ps(zmm12, temp0_13)
                    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
                    float temp0_17[0x4] = _mm_sub_ps(zmm4, temp0_11)
                    zmm4[0].q = zmm8 u>> 0x40
                    float zmm2[0x4] = _mm_and_ps(_mm_mul_ps(temp0_17, zmm12), zmm6)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
                    *(rsi_2 + r14_1) =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_20, 0x82)
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
                    *(rsi_2 + r14_1 + 0x10) =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_23, 0x88)
                    *(rsi_2 + r14_1 + 0x20) =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
                    *(rsi_2 + r14_1 + 0x30) = _mm_shuffle_ps(zmm8, zmm4, 0xc4)
                    
                    if ((arg1[0x11].b & 4) != 0)
                        int128_t* rax_3
                        
                        if (arg5 == 0)
                            zmm7 = *(arg1 + 0x1e0)
                            zmm1 = data_143f47880
                            zmm6 = *(arg1 + 0x1c0)
                            float var_188_1[0x4] = zmm1
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm7), zmm1, 1))
                                    == 0)
                                float temp0_152[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), 
                                    _mm_shuffle_ps(zmm11, zmm11, 0x1b))
                                float temp0_153[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                float temp0_154[0x4] = _mm_mul_ps(zmm7, zmm8)
                                float temp0_155[0x4] =
                                    __mulps_xmmps_memps(temp0_152, data_143f47840)
                                float temp0_156[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                                float temp0_157[0x4] = _mm_mul_ps(zmm12, zmm7)
                                float temp0_158[0x4] = _mm_mul_ps(temp0_156, zmm11)
                                float temp0_159[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0xd2)
                                float var_158_3[0x4] = temp0_157
                                float temp0_160[0x4] = _mm_add_ps(temp0_155, temp0_158)
                                float temp0_162[0x4] =
                                    _mm_mul_ps(temp0_153, _mm_shuffle_ps(zmm11, zmm11, 0x4e))
                                float temp0_165[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), 
                                    _mm_shuffle_ps(zmm11, zmm11, 0xb1))
                                float temp0_166[0x4] =
                                    __mulps_xmmps_memps(temp0_162, data_143f47830)
                                float temp0_167[0x4] =
                                    __mulps_xmmps_memps(temp0_165, data_143f47820)
                                float temp0_169[0x4] =
                                    _mm_add_ps(_mm_add_ps(temp0_160, temp0_166), temp0_167)
                                float temp0_170[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0xc9)
                                var_178 = temp0_169
                                float temp0_171[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                                float temp0_172[0x4] = _mm_mul_ps(temp0_170, temp0_171)
                                float temp0_173[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                                float temp0_175[0x4] =
                                    _mm_sub_ps(_mm_mul_ps(temp0_159, temp0_173), temp0_172)
                                float temp0_176[0x4] = _mm_add_ps(temp0_175, temp0_175)
                                float temp0_177[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xd2)
                                float temp0_178[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xc9)
                                float temp0_179[0x4] = _mm_mul_ps(temp0_177, temp0_173)
                                float temp0_180[0x4] = _mm_mul_ps(temp0_178, temp0_171)
                                float temp0_181[0x4] = _mm_mul_ps(temp0_176, temp0_156)
                                float var_168_3[0x4] = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(temp0_179, temp0_180), 
                                        _mm_add_ps(temp0_181, temp0_154)), 
                                    *(arg1 + 0x1d0))
                            else
                                zmm8 = data_143f47560
                                float temp0_32[0x4] = _mm_add_ps(zmm6, zmm6)
                                float temp0_33[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                                float temp0_34[0x4] = _mm_mul_ps(temp0_1, zmm11)
                                float temp0_35[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
                                float temp0_37[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x29), temp0_35)
                                float temp0_38[0x4] = _mm_mul_ps(zmm6, temp0_32)
                                float temp0_41[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_32, temp0_32, 0x12), 
                                    _mm_shuffle_ps(zmm6, zmm6, 0xff))
                                zmm6 = *(arg1 + 0x1d0)
                                float temp0_44[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_38, temp0_38, 0x1a), 
                                    _mm_shuffle_ps(temp0_38, temp0_38, 1))
                                _mm_mul_ps(zmm12, zmm7)
                                float temp0_46[0x4] = _mm_mul_ps(temp0_13, zmm12)
                                float temp0_47[0x4] = _mm_add_ps(temp0_41, temp0_37)
                                float temp0_48[0x4] = _mm_sub_ps(temp0_37, temp0_41)
                                float temp0_49[0x4] = _mm_mul_ps(temp0_47, zmm7)
                                float temp0_50[0x4] = _mm_mul_ps(temp0_33, temp0_48)
                                zmm1 = __andps_xmmxud_memxud(
                                    _mm_mul_ps(_mm_sub_ps(zmm8, temp0_44), zmm7), data_143f47570)
                                float temp0_54[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x32)
                                float temp0_56[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_49, zmm1, 0), temp0_54, 0x82)
                                float temp0_57[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x31)
                                float temp0_59[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_50, zmm1, 0x10), temp0_57, 0x88)
                                float temp0_61[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_49, temp0_50, 0x12), zmm1, 0xe8)
                                zmm8[0].q = zmm6 u>> 0x40
                                float temp0_62[0x4] = _mm_shuffle_ps(zmm6, zmm8, 0xc4)
                                zmm1 = __andps_xmmxud_memxud(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm8, 
                                            _mm_add_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x1a), 
                                                _mm_shuffle_ps(temp0_34, temp0_34, 1))), 
                                        zmm12), 
                                    data_143f47570)
                                float temp0_69[0x4] = _mm_shuffle_ps(temp0_16, zmm1, 0x32)
                                float temp0_71[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_46, zmm1, 0), temp0_69, 0x82)
                                float temp0_72[0x4] = _mm_shuffle_ps(temp0_46, zmm1, 0x31)
                                float temp0_74[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_16, zmm1, 0x10), temp0_72, 0x88)
                                float temp0_75[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
                                zmm8[0].q = var_198_1 u>> 0x40
                                float temp0_76[0x4] = _mm_shuffle_ps(var_198_1, zmm8, 0xc4)
                                float temp0_77[0x4] = _mm_mul_ps(temp0_75, temp0_59)
                                float temp0_78[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0)
                                float temp0_80[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_46, temp0_16, 0x12), zmm1, 0xe8)
                                float temp0_81[0x4] = _mm_mul_ps(temp0_78, temp0_56)
                                float temp0_83[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xaa), temp0_61)
                                float temp0_85[0x4] =
                                    _mm_add_ps(_mm_add_ps(temp0_77, temp0_81), temp0_83)
                                float temp0_87[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xff), temp0_62)
                                float temp0_88[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0)
                                float temp0_90[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xaa), temp0_61)
                                float temp0_91[0x4] = _mm_add_ps(temp0_85, temp0_87)
                                float temp0_92[0x4] = _mm_mul_ps(temp0_88, temp0_56)
                                float temp0_94[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x55), temp0_59)
                                float var_1e8[0x4] = temp0_91
                                float temp0_96[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0x55), temp0_59)
                                float temp0_97[0x4] = _mm_add_ps(temp0_94, temp0_92)
                                float temp0_99[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xff), temp0_62)
                                float temp0_101[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0), temp0_56)
                                float temp0_102[0x4] = _mm_add_ps(temp0_97, temp0_90)
                                float temp0_104[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xaa), temp0_61)
                                float temp0_105[0x4] = _mm_add_ps(temp0_96, temp0_101)
                                float temp0_106[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xff)
                                float temp0_107[0x4] = _mm_add_ps(temp0_102, temp0_99)
                                float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_62)
                                float temp0_109[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0)
                                float temp0_110[0x4] = _mm_add_ps(temp0_105, temp0_104)
                                float temp0_111[0x4] = _mm_mul_ps(temp0_109, temp0_56)
                                int96_t var_1d8_1 = temp0_107[0].12
                                float temp0_112[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xaa)
                                float temp0_114[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x55), temp0_59)
                                float temp0_115[0x4] = _mm_add_ps(temp0_110, temp0_108)
                                float temp0_116[0x4] = _mm_mul_ps(temp0_112, temp0_61)
                                float temp0_117[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xff)
                                float temp0_118[0x4] = _mm_add_ps(temp0_114, temp0_111)
                                float temp0_119[0x4] = _mm_mul_ps(temp0_117, temp0_62)
                                int96_t var_1c8_1 = temp0_115[0].12
                                int96_t var_1b8_1 =
                                    _mm_add_ps(_mm_add_ps(temp0_118, temp0_116), temp0_119)[0].12
                                int128_t zmm8_1
                                float zmm10_1[0x4]
                                zmm8_1, zmm10_1 = sub_1407740e0(&var_1e8, 0x322bcc77)
                                float zmm2_1[0x4] = var_1e8[0]
                                float zmm1_1 = var_1e8[1]
                                float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_188_1, zmm10_1, 2), 
                                    data_143f47870 ^ zmm8_1)
                                uint32_t zmm0_1[0x4] = var_1e8[2]
                                zmm4_1 ^= data_143f47870
                                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                                zmm1_1 = zmm1_1 * zmm4_1[0]
                                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                                var_1e8[0] = zmm2_1[0]
                                float temp0_124[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                                float zmm3_1 = var_1d8_1.d * temp0_124[0]
                                var_1e8[1] = zmm1_1
                                zmm1_1 = var_1d8_1:4.d * temp0_124[0]
                                var_1e8[2] = zmm0_1[0]
                                zmm0_1 = var_1d8_1:8.d
                                zmm0_1[0] = zmm0_1[0] f* temp0_124[0]
                                zmm2_1 = var_1c8_1.d
                                float temp0_125[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                                var_1d8_1.d = zmm3_1
                                var_1d8_1:4.d = zmm1_1
                                var_1d8_1:8.d = zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] * temp0_125[0]
                                zmm0_1 = var_1c8_1:8.d
                                zmm1_1 = var_1c8_1:4.d * temp0_125[0]
                                zmm0_1[0] = zmm0_1[0] f* temp0_125[0]
                                var_1c8_1:4.d = zmm1_1
                                var_1c8_1.d = zmm2_1[0]
                                var_1c8_1:8.d = zmm0_1[0]
                                uint32_t var_1a8[0x4]
                                sub_14077e4a0(&var_1a8, &var_1e8)
                                uint32_t zmm5_1[0x4] = var_1a8
                                float zmm6_1[0x4] = data_143f47860
                                float temp0_126[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                                float var_158_2[0x4] = zmm10_1
                                float temp0_128[0x4] = _mm_add_ps(temp0_126, 
                                    _mm_shuffle_ps(temp0_126, temp0_126, 0x4e))
                                float temp0_130[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_128, temp0_128, 0x39), temp0_128)
                                float temp0_131[0x4] = _mm_rsqrt_ps(temp0_130)
                                float temp0_132[0x4] = _mm_mul_ps(temp0_130, zmm6_1)
                                float temp0_137[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6_1, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_131, temp0_131), 
                                                temp0_132)), 
                                        temp0_131), 
                                    temp0_131)
                                float temp0_140[0x4] = _mm_sub_ps(zmm6_1, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_137, temp0_137), temp0_132))
                                float temp0_142[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_130, 2)
                                float temp0_144[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_140, temp0_137), temp0_137)
                                float temp0_145[0x4] = _mm_unpacklo_ps(var_1b8_1:4.d, 0)
                                zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_144, zmm5_1) ^ data_143f47850, 
                                    temp0_142) ^ data_143f47850
                                float var_168_2[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_1b8_1.d, var_1b8_1:8.d[0].q), 
                                    temp0_145[0].q)
                                var_1a8 = zmm6_1
                                var_178 = zmm6_1
                            
                            rax_3 = &var_178
                        else
                            float var_118[0x4]
                            rax_3 = &var_118
                            zmm1 = arg4[1]
                            var_118 = *arg4
                            float var_f8_1[0x4] = arg4[2]
                            float var_108_1[0x4] = zmm1
                        
                        zmm1 = rax_3[1]
                        var_148 = *rax_3
                        float var_128_1[0x4] = rax_3[2]
                        float var_138_1[0x4] = zmm1
                        sub_1420aac20(arg1, r15_1, &var_148, arg7)
                        zmm6 = data_143f47570
                    
                    r15_1 += 1
                    rsi_2 += 0x40
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            (*(*arg1 + 0x968))(arg1, zx.q(var_1f0))
            *(arg1 + 0x50c) += 1
            
            if (arg6 != 0)
                sub_141ee8490(arg1)
            
            result.b = 1

__security_check_cookie(rax_1 ^ &var_218)
return result
