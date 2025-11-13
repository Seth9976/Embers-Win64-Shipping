// 函数: sub_1420aad50
// 地址: 0x1420aad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
uint64_t var_d8 = __security_cookie ^ &var_1b8
int64_t r14 = sx.q(arg2)
uint64_t result

if (arg2 s< 0 || r14.d s>= arg1[0x94].d)
    result.b = 0
else
    uint32_t zmm8[0x4]
    uint32_t var_58_1[0x4] = zmm8
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    float (* rsi_3)[0x4] = (r14 << 6) + arg1[0x93]
    float zmm13[0x4]
    float var_a8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    float var_138[0x4]
    float var_108[0x4]
    float (* rax_1)[0x4]
    float zmm1[0x4]
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm10[0x4]
    
    if (arg4 == 0)
        rax_1 = &var_138
        zmm1 = arg3[1]
        var_138 = *arg3
        float var_118_1[0x4] = arg3[2]
        float var_128_1[0x4] = zmm1
    else
        rax_1, zmm6, zmm7, arg5, zmm10 = sub_140ad7d70(arg3, &var_108, &arg1[0x38])
    
    zmm11 = *rax_1
    zmm12 = rax_1[2]
    float zmm4[0x4] = data_143f47560
    float temp0_1[0x4] = _mm_add_ps(zmm11, zmm11)
    zmm8 = rax_1[1]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    uint32_t var_148[0x4] = zmm8
    float temp0_4[0x4] = _mm_mul_ps(zmm11, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float temp0_8[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_1, temp0_1, 0x12))
    float temp0_11[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x1a), _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float temp0_12[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
    float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
    float temp0_15[0x4] = _mm_mul_ps(zmm12, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
    float temp0_17[0x4] = _mm_sub_ps(zmm4, temp0_11)
    zmm4[0].q = zmm8 u>> 0x40
    float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, zmm12), data_143f47570)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
    *rsi_3 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_20, 0x82)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
    rsi_3[1] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_23, 0x88)
    rsi_3[2] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
    rsi_3[3] = _mm_shuffle_ps(zmm8, zmm4, 0xc4)
    
    if ((arg1[0x11].b & 4) != 0)
        float var_128_2[0x4]
        float var_118_2[0x4]
        
        if (arg4 == 0)
            float var_38_1[0x4] = zmm6
            zmm6 = *(arg1 + 0x1c0)
            float var_48_1[0x4] = zmm7
            zmm7 = *(arg1 + 0x1e0)
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm12, zmm7), data_143f47880, 
                    1)) == 0)
                float temp0_152[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), _mm_shuffle_ps(zmm11, zmm11, 0x1b))
                float temp0_153[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                float temp0_154[0x4] = _mm_mul_ps(zmm7, zmm8)
                float temp0_155[0x4] = __mulps_xmmps_memps(temp0_152, data_143f47840)
                float temp0_156[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_157[0x4] = _mm_mul_ps(zmm12, zmm7)
                float temp0_158[0x4] = _mm_mul_ps(temp0_156, zmm11)
                float temp0_159[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0xd2)
                var_118_2 = temp0_157
                float temp0_160[0x4] = _mm_add_ps(temp0_155, temp0_158)
                float temp0_162[0x4] = _mm_mul_ps(temp0_153, _mm_shuffle_ps(zmm11, zmm11, 0x4e))
                float temp0_165[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm11, zmm11, 0xb1))
                float temp0_166[0x4] = __mulps_xmmps_memps(temp0_162, data_143f47830)
                float temp0_167[0x4] = __mulps_xmmps_memps(temp0_165, data_143f47820)
                float temp0_169[0x4] = _mm_add_ps(_mm_add_ps(temp0_160, temp0_166), temp0_167)
                float temp0_170[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0xc9)
                var_138 = temp0_169
                float temp0_171[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float temp0_172[0x4] = _mm_mul_ps(temp0_170, temp0_171)
                float temp0_173[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_175[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_159, temp0_173), temp0_172)
                float temp0_176[0x4] = _mm_add_ps(temp0_175, temp0_175)
                float temp0_177[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xd2)
                float temp0_178[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xc9)
                float temp0_179[0x4] = _mm_mul_ps(temp0_177, temp0_173)
                float temp0_180[0x4] = _mm_mul_ps(temp0_178, temp0_171)
                float temp0_181[0x4] = _mm_mul_ps(temp0_176, temp0_156)
                var_128_2 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_179, temp0_180), _mm_add_ps(temp0_181, temp0_154)), 
                    *(arg1 + 0x1d0))
            else
                zmm8 = data_143f47560
                float temp0_32[0x4] = _mm_add_ps(zmm6, zmm6)
                float temp0_33[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                float temp0_34[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
                float temp0_35[0x4] = _mm_mul_ps(temp0_1, zmm11)
                zmm11 = var_148
                float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x29), temp0_34)
                float temp0_38[0x4] = _mm_mul_ps(zmm6, temp0_32)
                float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), 
                    _mm_shuffle_ps(zmm6, zmm6, 0xff))
                zmm6 = *(arg1 + 0x1d0)
                float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0x1a), 
                    _mm_shuffle_ps(temp0_38, temp0_38, 1))
                float temp0_45[0x4] = _mm_mul_ps(temp0_13, zmm12)
                float var_78_1[0x4] = zmm10
                float temp0_46[0x4] = _mm_add_ps(temp0_41, temp0_37)
                float temp0_47[0x4] = _mm_sub_ps(temp0_37, temp0_41)
                _mm_mul_ps(zmm12, zmm7)
                float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm7)
                float temp0_50[0x4] = _mm_mul_ps(temp0_33, temp0_47)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm8, temp0_44), zmm7), 
                    data_143f47570)
                float temp0_54[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x32)
                float temp0_56[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0), temp0_54, 0x82)
                float temp0_57[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x31)
                float temp0_59[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1, 0x10), temp0_57, 0x88)
                float zmm0[0x4] = zmm8
                float temp0_61[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, temp0_50, 0x12), zmm1, 0xe8)
                zmm0[0].q = zmm6 u>> 0x40
                float temp0_62[0x4] = _mm_shuffle_ps(zmm6, zmm0, 0xc4)
                zmm1 = __andps_xmmxud_memxud(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm8, 
                            _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x1a), 
                                _mm_shuffle_ps(temp0_35, temp0_35, 1))), 
                        zmm12), 
                    data_143f47570)
                float temp0_69[0x4] = _mm_shuffle_ps(temp0_16, zmm1, 0x32)
                float temp0_71[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_45, zmm1, 0), temp0_69, 0x82)
                float temp0_72[0x4] = _mm_shuffle_ps(temp0_45, zmm1, 0x31)
                float temp0_74[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm1, 0x10), temp0_72, 0x88)
                zmm0 = zmm8
                zmm0[0].q = zmm11 u>> 0x40
                float temp0_75[0x4] = _mm_shuffle_ps(zmm11, zmm0, 0xc4)
                float temp0_76[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
                float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0), temp0_56)
                float temp0_79[0x4] = _mm_mul_ps(temp0_76, temp0_59)
                float temp0_81[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_45, temp0_16, 0x12), zmm1, 0xe8)
                float temp0_82[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xaa)
                float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_78)
                float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xff), temp0_62)
                float temp0_86[0x4] = _mm_mul_ps(temp0_82, temp0_61)
                float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0), temp0_56)
                float temp0_89[0x4] = _mm_add_ps(temp0_83, temp0_86)
                float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xaa), temp0_61)
                float temp0_92[0x4] = _mm_add_ps(temp0_89, temp0_85)
                float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x55), temp0_59)
                float temp0_95[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xff)
                float var_188[0x4] = temp0_92
                float temp0_96[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0x55)
                float temp0_97[0x4] = _mm_add_ps(temp0_94, temp0_88)
                float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_59)
                float temp0_99[0x4] = _mm_mul_ps(temp0_95, temp0_62)
                float temp0_100[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0)
                float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_91)
                float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_56)
                float temp0_104[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xaa), temp0_61)
                float temp0_105[0x4] = _mm_add_ps(temp0_101, temp0_99)
                float temp0_106[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0xff)
                float temp0_107[0x4] = _mm_add_ps(temp0_98, temp0_102)
                float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_62)
                float temp0_109[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0)
                int96_t var_178_1 = temp0_105[0].12
                float temp0_110[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x55)
                float temp0_111[0x4] = _mm_add_ps(temp0_107, temp0_104)
                float temp0_112[0x4] = _mm_mul_ps(temp0_110, temp0_59)
                float temp0_114[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xaa), temp0_61)
                float temp0_115[0x4] = _mm_mul_ps(temp0_109, temp0_56)
                float temp0_116[0x4] = _mm_add_ps(temp0_111, temp0_108)
                float temp0_118[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xff), temp0_62)
                float temp0_119[0x4] = _mm_add_ps(temp0_112, temp0_115)
                int96_t var_168_1 = temp0_116[0].12
                int96_t var_158_1 = _mm_add_ps(_mm_add_ps(temp0_119, temp0_114), temp0_118)[0].12
                int128_t zmm8_1
                int512_t zmm9
                float zmm10_1[0x4]
                zmm8_1, zmm9, zmm10_1 = sub_1407740e0(&var_188, 0x322bcc77)
                float zmm2_1[0x4] = var_188[0]
                float zmm1_1 = var_188[1]
                float zmm4_1[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(data_143f47880, zmm10_1, 2), data_143f47870 ^ zmm8_1)
                uint32_t zmm0_1[0x4] = var_188[2]
                zmm4_1 ^= data_143f47870
                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                zmm1_1 = zmm1_1 * zmm4_1[0]
                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                var_188[0] = zmm2_1[0]
                float temp0_124[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                var_188[1] = zmm1_1
                var_188[2] = zmm0_1[0]
                zmm0_1 = var_178_1:8.d
                float zmm3_1 = var_178_1.d * temp0_124[0]
                zmm1_1 = var_178_1:4.d * temp0_124[0]
                zmm0_1[0] = zmm0_1[0] f* temp0_124[0]
                zmm2_1 = var_168_1.d
                var_178_1.d = zmm3_1
                var_178_1:4.d = zmm1_1
                var_178_1:8.d = zmm0_1[0]
                zmm0_1 = var_168_1:8.d
                float temp0_125[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                zmm2_1[0] = zmm2_1[0] * temp0_125[0]
                zmm1_1 = var_168_1:4.d * temp0_125[0]
                zmm0_1[0] = zmm0_1[0] f* temp0_125[0]
                var_168_1.d = zmm2_1[0]
                var_168_1:4.d = zmm1_1
                var_168_1:8.d = zmm0_1[0]
                sub_14077e4a0(&var_148, &var_188)
                zmm6 = var_148
                float zmm5_1[0x4] = data_143f47860
                zmm9.o = arg5
                float temp0_126[0x4] = _mm_mul_ps(zmm6, zmm6)
                var_118_2 = zmm10_1
                float temp0_128[0x4] =
                    _mm_add_ps(temp0_126, _mm_shuffle_ps(temp0_126, temp0_126, 0x4e))
                float temp0_130[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0x39), temp0_128)
                float temp0_131[0x4] = _mm_rsqrt_ps(temp0_130)
                float temp0_132[0x4] = _mm_mul_ps(temp0_130, zmm5_1)
                float temp0_137[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_1, 
                            _mm_mul_ps(_mm_mul_ps(temp0_131, temp0_131), temp0_132)), 
                        temp0_131), 
                    temp0_131)
                float temp0_140[0x4] =
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_137, temp0_137), temp0_132))
                float temp0_142[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_130, 2)
                float temp0_144[0x4] = _mm_add_ps(_mm_mul_ps(temp0_140, temp0_137), temp0_137)
                float temp0_145[0x4] = _mm_unpacklo_ps(var_158_1:4.d, 0)
                zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_144, zmm6) ^ data_143f47850, temp0_142)
                    ^ data_143f47850
                var_128_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), 
                    temp0_145[0].q)
                var_138 = zmm5_1
        else
            zmm1 = arg3[1]
            var_138 = *arg3
            var_118_2 = arg3[2]
            var_128_2 = zmm1
        
        var_108 = var_138
        float var_e8_1[0x4] = var_118_2
        float var_f8_1[0x4] = var_128_2
        sub_1420aac20(arg1, r14.d, &var_108, arg7)
    
    (*(*arg1 + 0x968))(arg1, zx.q(r14.d))
    *(arg1 + 0x50c) += 1
    
    if (arg6 != 0)
        sub_141ee8490(arg1)
    
    result.b = 1

__security_check_cookie(var_d8 ^ &var_1b8)
return result
