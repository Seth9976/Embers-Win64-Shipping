// 函数: sub_1407cd1b0
// 地址: 0x1407cd1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d3c6e0(arg1 + 0x28)
int64_t* result_1 = result
void* r13 = result[0x86]

if (r13 != 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x34))
    void* r12_3 = ((r8_1 + 4) << 4) + arg1
    void* rsi_3 = ((r8_1 + 6) << 4) + arg1
    void* rax = sub_140d3c6e0(&result[0x87])
    
    if (rax == 0)
        sub_141f56900(result, r12_3)
        return sub_140780b40(rsi_3, &result[(sx.q(*(result + 0x494)) + 0x45) * 2])
    
    int64_t rbx_1 = sx.q(result[0x97].d)
    
    if (rbx_1.d == 0)
        int32_t rax_1 = *(r13 + 0x1b0)
        int32_t rcx_2 = *(r12_3 + 0xc)
        int32_t rdx_1 = 0
        *(r12_3 + 8) = 0
        
        if (rcx_2 != rax_1)
            sub_1405a52a0(r12_3, rax_1)
            rdx_1 = *(r12_3 + 8)
            rcx_2 = *(r12_3 + 0xc)
        
        int32_t r8_3 = *(r13 + 0x1b0) + rdx_1
        *(r12_3 + 8) = r8_3
        
        if (r8_3 s> rcx_2)
            sub_1405c4fe0(r12_3)
        
        int32_t rdx_3 = *(r13 + 0x1b0)
        *(rsi_3 + 8) = 0
        
        if (*(rsi_3 + 0xc) != rdx_3)
            sub_1405a5220(rsi_3, rdx_3)
        
        return sub_140783960(rsi_3, *(r13 + 0x1b0))
    
    int32_t rax_2 = *(r12_3 + 8)
    
    if (rbx_1.d s> rax_2)
        *(r12_3 + 8) = rbx_1.d
        
        if (rbx_1.d s> *(r12_3 + 0xc))
            sub_1405c4fe0(r12_3)
    else if (rbx_1.d s< rax_2 && rbx_1.d != rax_2)
        *(r12_3 + 8) = rbx_1.d
        sub_1407c3fe0(r12_3)
    
    result = zx.q(*(rsi_3 + 8))
    
    if (rbx_1.d s> result.d)
        *(rsi_3 + 8) = rbx_1.d
        
        if (rbx_1.d s> *(rsi_3 + 0xc))
            result = sub_140638970(rsi_3)
    else if (rbx_1.d s< result.d && rbx_1.d != result.d)
        *(rsi_3 + 8) = rbx_1.d
        result = sub_1407c4120(rsi_3)
    
    int32_t r14_1 = 0
    int64_t r10_1 = rbx_1
    void* r8_7 = ((sx.q(*(rax + 0x494)) + 0x45) << 4) + rax
    void* var_148_1 = r8_7
    
    if (rbx_1.d s> 0)
        float (* rdi_2)[0x4] = nullptr
        int64_t r15_1 = 0
        uint32_t zmm15[0x4] = data_143ce0350
        int128_t* rbx_2 = nullptr
        float zmm6[0x4]
        float var_58_1[0x4] = zmm6
        int64_t r9_1 = 0
        float zmm7[0x4]
        float var_68_1[0x4] = zmm7
        float zmm8[0x4]
        float var_78_1[0x4] = zmm8
        float zmm9[0x4]
        float var_88_1[0x4] = zmm9
        float zmm10[0x4]
        float var_98_1[0x4] = zmm10
        float zmm11[0x4]
        float var_a8_1[0x4] = zmm11
        float zmm12[0x4]
        float var_b8_1[0x4] = zmm12
        float zmm13[0x4]
        float var_c8_1[0x4] = zmm13
        float zmm14[0x4]
        float var_d8_1[0x4] = zmm14
        int64_t arg_10 = 0
        
        do
            int64_t rcx_11
            
            if (r15_1 s>= 0 && r14_1 s< result_1[0x97].d)
                rcx_11 = sx.q(*(result_1[0x96] + (r15_1 << 2)))
            
            float zmm1[0x4]
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (r15_1 s< 0 || r14_1 s>= result_1[0x97].d || rcx_11.d == 0xffffffff
                    || rcx_11.d s>= *(r8_7 + 8))
                int64_t rcx_13 = sx.q(*(*(r13 + 0x1a8) + r9_1 + 8))
                float zmm4[0x4]
                
                if (rcx_13.d s< 0 || rcx_13.d s>= *(rsi_3 + 8) || rcx_13.d s>= r14_1)
                    int64_t rcx_19 = *(r13 + 0x1b8)
                    int64_t rax_10 = *rsi_3
                    *(rbx_2 + rax_10) = *(rbx_2 + rcx_19)
                    *(rbx_2 + rax_10 + 0x10) = *(rbx_2 + rcx_19 + 0x10)
                    *(rbx_2 + rax_10 + 0x20) = *(rbx_2 + rcx_19 + 0x20)
                else
                    int128_t* rdx_9 = *rsi_3
                    int64_t r8_8 = *(r13 + 0x1b8)
                    void* rcx_16 = &rdx_9[rcx_13 * 3]
                    zmm6 = *(rbx_2 + r8_8 + 0x20)
                    zmm13 = *(rcx_16 + 0x20)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm6), data_143ce07b0, 1))
                            == 0)
                        zmm4 = *(rbx_2 + r8_8)
                        zmm2 = *rcx_16
                        zmm3 = *(rcx_16 + 0x10)
                        float temp0_205[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                        float temp0_207[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_205)
                        float temp0_208[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                        float temp0_209[0x4] = _mm_mul_ps(zmm3, zmm6)
                        float temp0_210[0x4] = __mulps_xmmps_memps(temp0_207, data_143ce0330)
                        float temp0_211[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                        float temp0_212[0x4] = _mm_mul_ps(zmm2, temp0_211)
                        zmm12 = _mm_mul_ps(zmm6, zmm13)
                        float temp0_214[0x4] = _mm_add_ps(temp0_210, temp0_212)
                        float temp0_216[0x4] =
                            _mm_mul_ps(temp0_208, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                        float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), 
                            _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                        float temp0_220[0x4] = __mulps_xmmps_memps(temp0_216, data_143ce0320)
                        float temp0_221[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                        float temp0_222[0x4] = __mulps_xmmps_memps(temp0_219, data_143ce0310)
                        float temp0_223[0x4] = _mm_add_ps(temp0_214, temp0_220)
                        float temp0_224[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                        float temp0_226[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_209, temp0_209, 0xd2), temp0_224)
                        zmm6 = _mm_add_ps(temp0_223, temp0_222)
                        float temp0_230[0x4] = _mm_sub_ps(temp0_226, 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_209, temp0_209, 0xc9), temp0_221))
                        float temp0_231[0x4] = _mm_add_ps(temp0_230, temp0_230)
                        float temp0_232[0x4] = _mm_mul_ps(temp0_211, temp0_231)
                        float temp0_234[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xd2), temp0_224)
                        float temp0_235[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0xc9)
                        float temp0_236[0x4] = _mm_add_ps(temp0_232, temp0_209)
                        zmm7 = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(temp0_234, _mm_mul_ps(temp0_235, temp0_221)), 
                                temp0_236), 
                            *(rbx_2 + r8_8 + 0x10))
                    else
                        zmm1 = *(rbx_2 + r8_8)
                        zmm10 = data_143ce0340
                        zmm8 = *(rbx_2 + r8_8 + 0x10)
                        float temp0_76[0x4] = _mm_add_ps(zmm1, zmm1)
                        float temp0_77[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                        float temp0_78[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                        _mm_mul_ps(zmm13, zmm6)
                        float temp0_80[0x4] = _mm_mul_ps(temp0_76, zmm1)
                        float temp0_82[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x29), temp0_78)
                        float temp0_83[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                        float temp0_84[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x1a)
                        float temp0_86[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x12), temp0_83)
                        float temp0_88[0x4] =
                            _mm_add_ps(temp0_84, _mm_shuffle_ps(temp0_80, temp0_80, 1))
                        float temp0_89[0x4] = _mm_add_ps(temp0_86, temp0_82)
                        float temp0_90[0x4] = _mm_sub_ps(temp0_82, temp0_86)
                        zmm3 = *rcx_16
                        float temp0_91[0x4] = _mm_sub_ps(zmm10, temp0_88)
                        float temp0_92[0x4] = _mm_mul_ps(temp0_89, zmm6)
                        float temp0_93[0x4] = _mm_mul_ps(temp0_77, temp0_90)
                        float temp0_94[0x4] = _mm_mul_ps(temp0_91, zmm6)
                        float temp0_95[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                        zmm1 = _mm_and_ps(temp0_94, zmm15)
                        float temp0_97[0x4] = _mm_shuffle_ps(temp0_93, zmm1, 0x32)
                        float temp0_99[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_92, zmm1, 0), temp0_97, 0x82)
                        float temp0_100[0x4] = _mm_shuffle_ps(temp0_92, zmm1, 0x31)
                        float temp0_102[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_93, zmm1, 0x10), temp0_100, 0x88)
                        float temp0_104[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_92, temp0_93, 0x12), zmm1, 0xe8)
                        float temp0_105[0x4] = _mm_add_ps(zmm3, zmm3)
                        zmm10[0].q = zmm8 u>> 0x40
                        float temp0_106[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                        float temp0_107[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                        float temp0_108[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0x29)
                        float temp0_109[0x4] = _mm_mul_ps(temp0_105, zmm3)
                        float temp0_110[0x4] = _mm_mul_ps(temp0_95, temp0_108)
                        float temp0_111[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0x12)
                        float temp0_113[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_111)
                        float temp0_116[0x4] = _mm_add_ps(
                            _mm_shuffle_ps(temp0_109, temp0_109, 0x1a), 
                            _mm_shuffle_ps(temp0_109, temp0_109, 1))
                        float temp0_117[0x4] = _mm_add_ps(temp0_113, temp0_110)
                        float temp0_118[0x4] = _mm_sub_ps(temp0_110, temp0_113)
                        float temp0_119[0x4] = _mm_sub_ps(zmm10, temp0_116)
                        float temp0_120[0x4] = _mm_mul_ps(temp0_117, zmm13)
                        float temp0_121[0x4] = _mm_mul_ps(temp0_107, temp0_118)
                        zmm1 = _mm_and_ps(_mm_mul_ps(temp0_119, zmm13), zmm15)
                        float temp0_126[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_120, zmm1, 0), 
                            _mm_shuffle_ps(temp0_121, zmm1, 0x32), 0x82)
                        float temp0_127[0x4] = _mm_shuffle_ps(temp0_121, zmm1, 0x10)
                        float temp0_128[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0x55)
                        float temp0_130[0x4] =
                            _mm_shuffle_ps(temp0_127, _mm_shuffle_ps(temp0_120, zmm1, 0x31), 0x88)
                        float temp0_131[0x4] = _mm_mul_ps(temp0_128, temp0_102)
                        float temp0_132[0x4] = _mm_shuffle_ps(temp0_120, temp0_121, 0x12)
                        float zmm5[0x4] = *(rcx_16 + 0x10)
                        float temp0_133[0x4] = _mm_shuffle_ps(temp0_132, zmm1, 0xe8)
                        float temp0_135[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xaa), temp0_104)
                        zmm10[0].q = zmm5 u>> 0x40
                        float temp0_136[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
                        float temp0_137[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0)
                        float temp0_139[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xff), temp0_106)
                        float temp0_141[0x4] =
                            _mm_add_ps(temp0_131, _mm_mul_ps(temp0_137, temp0_99))
                        float temp0_143[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_130, temp0_130, 0), temp0_99)
                        float temp0_144[0x4] = _mm_add_ps(temp0_141, temp0_135)
                        float temp0_146[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_130, temp0_130, 0xaa), temp0_104)
                        float temp0_147[0x4] = _mm_add_ps(temp0_144, temp0_139)
                        float temp0_149[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_130, temp0_130, 0x55), temp0_102)
                        float temp0_150[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xff)
                        float var_128[0x4] = temp0_147
                        float temp0_151[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0x55)
                        float temp0_152[0x4] = _mm_add_ps(temp0_149, temp0_143)
                        float temp0_153[0x4] = _mm_mul_ps(temp0_151, temp0_102)
                        float temp0_154[0x4] = _mm_mul_ps(temp0_150, temp0_106)
                        float temp0_155[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0)
                        float temp0_156[0x4] = _mm_add_ps(temp0_152, temp0_146)
                        float temp0_157[0x4] = _mm_mul_ps(temp0_155, temp0_99)
                        float temp0_159[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0xaa), temp0_104)
                        float temp0_160[0x4] = _mm_add_ps(temp0_156, temp0_154)
                        float temp0_161[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xff)
                        float temp0_162[0x4] = _mm_add_ps(temp0_153, temp0_157)
                        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_106)
                        float temp0_164[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0)
                        int96_t var_118_1 = temp0_160[0].12
                        float temp0_165[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0x55)
                        float temp0_166[0x4] = _mm_add_ps(temp0_162, temp0_159)
                        float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_102)
                        float temp0_169[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xaa), temp0_104)
                        float temp0_170[0x4] = _mm_mul_ps(temp0_164, temp0_99)
                        float temp0_171[0x4] = _mm_add_ps(temp0_166, temp0_163)
                        float temp0_173[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xff), temp0_106)
                        float temp0_174[0x4] = _mm_add_ps(temp0_167, temp0_170)
                        int96_t var_108_1 = temp0_171[0].12
                        int96_t var_f8_1 =
                            _mm_add_ps(_mm_add_ps(temp0_174, temp0_169), temp0_173)[0].12
                        zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_128, 0x322bcc77)
                        float zmm2_1[0x4] = var_128[0]
                        float zmm1_1 = var_128[1]
                        zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm12, 2), data_143ce0390 ^ zmm10)
                            ^ data_143ce0390
                        zmm2_1[0] = zmm2_1[0] * zmm14[0]
                        uint32_t zmm0_1[0x4] = var_128[2]
                        zmm0_1[0] = zmm0_1[0] f* zmm14[0]
                        zmm1_1 = zmm1_1 * zmm14[0]
                        var_128[0] = zmm2_1[0]
                        float temp0_179[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                        var_128[2] = zmm0_1[0]
                        zmm0_1 = var_118_1:8.d
                        zmm0_1[0] = zmm0_1[0] f* temp0_179[0]
                        var_128[1] = zmm1_1
                        zmm1_1 = var_118_1:4.d * temp0_179[0]
                        float zmm3_1 = var_118_1.d * temp0_179[0]
                        zmm2_1 = var_108_1.d
                        var_118_1:8.d = zmm0_1[0]
                        zmm0_1 = var_108_1:8.d
                        var_118_1:4.d = zmm1_1
                        float temp0_180[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                        zmm0_1[0] = zmm0_1[0] f* temp0_180[0]
                        zmm2_1[0] = zmm2_1[0] * temp0_180[0]
                        zmm1_1 = var_108_1:4.d * temp0_180[0]
                        var_108_1:8.d = zmm0_1[0]
                        var_118_1.d = zmm3_1
                        var_108_1.d = zmm2_1[0]
                        var_108_1:4.d = zmm1_1
                        uint32_t var_138[0x4]
                        sub_14077e4a0(&var_138, &var_128)
                        zmm5 = var_138
                        zmm6 = data_143ce07a0
                        rdx_9 = *rsi_3
                        r9_1 = arg_10
                        r10_1 = rbx_1
                        float temp0_181[0x4] = _mm_mul_ps(zmm5, zmm5)
                        float temp0_183[0x4] =
                            _mm_add_ps(temp0_181, _mm_shuffle_ps(temp0_181, temp0_181, 0x4e))
                        float temp0_185[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_183, temp0_183, 0x39), temp0_183)
                        float temp0_186[0x4] = _mm_rsqrt_ps(temp0_185)
                        float temp0_187[0x4] = _mm_mul_ps(temp0_185, zmm6)
                        float temp0_192[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm6, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_186, temp0_186), temp0_187)), 
                                temp0_186), 
                            temp0_186)
                        float temp0_195[0x4] = _mm_sub_ps(zmm6, 
                            _mm_mul_ps(_mm_mul_ps(temp0_192, temp0_192), temp0_187))
                        float temp0_197[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_185, 2)
                        float temp0_199[0x4] =
                            _mm_add_ps(_mm_mul_ps(temp0_195, temp0_192), temp0_192)
                        float temp0_200[0x4] = _mm_unpacklo_ps(var_f8_1:4.d, 0)
                        zmm6 = _mm_and_ps(_mm_mul_ps(temp0_199, zmm5) ^ data_143ce0790, temp0_197)
                            ^ data_143ce0790
                        zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_f8_1.d, var_f8_1:8.d[0].q), 
                            temp0_200[0].q)
                        var_138 = zmm6
                    
                    r8_7 = var_148_1
                    *(rdx_9 + rbx_2) = zmm6
                    *(rdx_9 + rbx_2 + 0x10) = zmm7
                    *(rdx_9 + rbx_2 + 0x20) = zmm12
                
                int64_t rax_11 = *rsi_3
                zmm3 = *(rbx_2 + rax_11)
                float temp0_241[0x4] = _mm_add_ps(zmm3, zmm3)
                float temp0_242[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_243[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_244[0x4] = _mm_mul_ps(zmm3, temp0_241)
                float temp0_246[0x4] =
                    _mm_mul_ps(temp0_242, _mm_shuffle_ps(temp0_241, temp0_241, 0x29))
                float temp0_247[0x4] = _mm_shuffle_ps(temp0_241, temp0_241, 0x12)
                float temp0_248[0x4] = _mm_shuffle_ps(temp0_244, temp0_244, 0x1a)
                float temp0_249[0x4] = _mm_mul_ps(temp0_243, temp0_247)
                zmm1 = *(rbx_2 + rax_11 + 0x20)
                float temp0_251[0x4] =
                    _mm_add_ps(temp0_248, _mm_shuffle_ps(temp0_244, temp0_244, 1))
                float temp0_252[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                zmm4 = data_143ce0340
                float temp0_253[0x4] = _mm_add_ps(temp0_249, temp0_246)
                float temp0_254[0x4] = _mm_sub_ps(temp0_246, temp0_249)
                float temp0_255[0x4] = _mm_mul_ps(temp0_253, zmm1)
                float temp0_256[0x4] = _mm_mul_ps(temp0_252, temp0_254)
                zmm2 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_251), zmm1), zmm15)
                float temp0_260[0x4] = _mm_shuffle_ps(temp0_256, zmm2, 0x32)
                float temp0_262[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_255, zmm2, 0), temp0_260, 0x82)
                float temp0_263[0x4] = _mm_shuffle_ps(temp0_255, zmm2, 0x31)
                float temp0_265[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_256, zmm2, 0x10), temp0_263, 0x88)
                float zmm0[0x4] = *(rbx_2 + rax_11 + 0x10)
                result = *r12_3
                float temp0_266[0x4] = _mm_shuffle_ps(temp0_255, temp0_256, 0x12)
                zmm4[0].q = zmm0 u>> 0x40
                float temp0_267[0x4] = _mm_shuffle_ps(temp0_266, zmm2, 0xe8)
                *(result + rdi_2) = temp0_262
                *(result + rdi_2 + 0x10) = temp0_265
                float temp0_268[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
                *(result + rdi_2 + 0x20) = temp0_267
                *(result + rdi_2 + 0x30) = temp0_268
            else
                int64_t rax_5 = *rsi_3
                int64_t rcx_12 = *r8_7
                int64_t rdx_8 = rcx_11 * 6
                *(rbx_2 + rax_5) = *(rcx_12 + (rdx_8 << 3))
                *(rbx_2 + rax_5 + 0x10) = *(rcx_12 + (rdx_8 << 3) + 0x10)
                *(rbx_2 + rax_5 + 0x20) = *(rcx_12 + (rdx_8 << 3) + 0x20)
                int64_t rax_6 = *r8_7
                zmm1 = *(rax_6 + (rdx_8 << 3))
                zmm8 = *(rax_6 + (rdx_8 << 3) + 0x10)
                float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
                float temp0_5[0x4] = _mm_mul_ps(temp0_1, zmm1)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_6)
                zmm1 = *(rax_6 + (rdx_8 << 3) + 0x20)
                int64_t rax_7 = *(r13 + 0x2e0)
                float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x1a)
                float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                float temp0_11[0x4] = _mm_add_ps(temp0_8, temp0_4)
                float temp0_12[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 1)
                float temp0_13[0x4] = _mm_sub_ps(temp0_4, temp0_8)
                zmm3 = data_143ce0340
                float temp0_14[0x4] = _mm_add_ps(temp0_9, temp0_12)
                float temp0_15[0x4] = _mm_mul_ps(temp0_11, zmm1)
                float temp0_16[0x4] = _mm_mul_ps(temp0_10, temp0_13)
                float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_14)
                zmm3[0].q = zmm8 u>> 0x40
                float temp0_18[0x4] = _mm_shuffle_ps(zmm8, zmm3, 0xc4)
                zmm2 = _mm_and_ps(_mm_mul_ps(temp0_17, zmm1), zmm15)
                float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
                float temp0_23[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
                float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
                float temp0_26[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x10)
                zmm2 = *(rdi_2 + rax_7)
                float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_24, 0x88)
                float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_32[0x4] = _mm_mul_ps(temp0_30, temp0_23)
                float temp0_33[0x4] = _mm_mul_ps(temp0_29, temp0_28)
                float temp0_34[0x4] = _mm_mul_ps(temp0_31, temp0_26)
                float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                float temp0_36[0x4] = _mm_add_ps(temp0_33, temp0_32)
                float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_18)
                float temp0_39[0x4] = _mm_add_ps(_mm_add_ps(temp0_36, temp0_34), temp0_37)
                zmm2 = *(rdi_2 + rax_7 + 0x10)
                float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_44[0x4] =
                    _mm_add_ps(_mm_mul_ps(temp0_40, temp0_28), _mm_mul_ps(temp0_41, temp0_23))
                float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), temp0_26)
                float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                float temp0_50[0x4] = _mm_add_ps(_mm_add_ps(temp0_44, temp0_46), temp0_48)
                zmm2 = *(rdi_2 + rax_7 + 0x20)
                float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_53[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_28)
                float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_26)
                float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                float temp0_61[0x4] = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_51, temp0_23), temp0_54), temp0_55), 
                    temp0_57)
                zmm2 = *(rdi_2 + rax_7 + 0x30)
                result = *r12_3
                float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_63[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_64[0x4] = _mm_mul_ps(temp0_62, temp0_28)
                float temp0_65[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                *(result + rdi_2) = temp0_39
                *(result + rdi_2 + 0x10) = temp0_50
                float temp0_66[0x4] = _mm_mul_ps(temp0_63, temp0_23)
                float temp0_67[0x4] = _mm_mul_ps(temp0_65, temp0_26)
                float temp0_68[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                float temp0_69[0x4] = _mm_add_ps(temp0_64, temp0_66)
                float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_18)
                *(result + rdi_2 + 0x20) = temp0_61
                *(result + rdi_2 + 0x30) = _mm_add_ps(_mm_add_ps(temp0_69, temp0_67), temp0_70)
            r9_1 += 0xc
            r14_1 += 1
            r15_1 += 1
            arg_10 = r9_1
            rbx_2 = &rbx_2[3]
            rdi_2 = &rdi_2[4]
        while (r15_1 s< r10_1)

return result
