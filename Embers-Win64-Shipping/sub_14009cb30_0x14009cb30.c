// 函数: sub_14009cb30
// 地址: 0x14009cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm9[0x4]
float var_a8[0x4] = zmm9
float zmm8[0x4]
float var_b8[0x4] = zmm8
float var_c8[0x4] = arg5
float zmm6[0x4]
float var_d8[0x4] = zmm6
int32_t r12_4 = ((arg9 s>> 0x1f u>> 0x1e) + arg9) & 0xfffffffc
int32_t result
int32_t var_248[0x4]
float var_1f8[0x4]
int32_t var_1e8[0x4]
float var_1b8[0x4]
uint64_t rbp
int32_t zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r12_4 s<= 0)
    rbp = 0
    result = 0
    
    if (0 s< arg9)
    label_14009d2b8:
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            int32_t temp0_157[0x4] =
                __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp.d), 0), data_142e11d00)
            zmm12 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), temp0_157)
            int64_t rax_21 = sx.q(rbp.d << 2)
            uint32_t temp0_160 = _mm_movemask_ps(zmm12)
            
            if ((zx.q(temp0_160) & 0xfffffff9) != 9)
                if ((temp0_160.b & 1) == 0)
                    if ((temp0_160.b & 2) != 0)
                        goto label_14009d795
                    
                    goto label_14009d322
                
                var_1f8[0] = *(arg6 + rax_21)
                
                if ((temp0_160.b & 2) != 0)
                label_14009d795:
                    var_1f8[1] = *(arg6 + rax_21 + 4)
                    
                    if ((temp0_160.b & 4) == 0)
                        goto label_14009d32c
                    
                    goto label_14009d7a8
                
            label_14009d322:
                
                if ((temp0_160.b & 4) != 0)
                label_14009d7a8:
                    var_1f8[2] = *(arg6 + rax_21 + 8)
                    
                    if ((temp0_160.b & 8) != 0)
                        var_1f8[3] = *(arg6 + rax_21 + 0xc)
                else
                label_14009d32c:
                    
                    if ((temp0_160.b & 8) != 0)
                        var_1f8[3] = *(arg6 + rax_21 + 0xc)
                
                zmm0 = var_1f8
            else
                zmm0 = *(arg6 + rax_21)
            
            int32_t var_208_2[0x4] = zmm0
            zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm0) & zmm12
            int64_t rax_24 = sx.q(zmm1[0])
            int64_t rbx_4 = arg4 + (rax_24 << 2)
            zmm0 = *(arg4 + (rax_24 << 2))
            int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t r14_1 = arg4 + (rbp_2 << 2)
            int64_t rax_26 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t r15_1 = arg4 + (rax_26 << 2)
            int64_t rsi_15 = sx.q(_mm_extract_epi32(zmm1, 3))
            int64_t rdi_5 = arg4 + (rsi_15 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg4 + (rbp_2 << 2)), 0x10), 
                    *(arg4 + (rax_26 << 2)), 0x20), 
                *(arg4 + (rsi_15 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm12
            zmm8 = *(zx.q(zmm2[0]) + rbx_4)
            uint64_t rax_28 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_3 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rsi_16 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_173[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_28 + r14_1), 0x10), *(rbp_3 + r15_1), 
                    0x20), 
                *(rsi_16 + rdi_5), 0x30)
            zmm2 = data_142fc95f0 & zmm12
            zmm5 = *(zx.q(zmm2[0]) + rbx_4)
            uint64_t rax_30 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_4 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rbx_5 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_179[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rax_30 + r14_1), 0x10), *(rbp_4 + r15_1), 
                    0x20), 
                *(rbx_5 + rdi_5), 0x30)
            int32_t var_118_1[0x4] = zmm0
            float var_e8_1[0x4] = zx.o(0)
            zmm6 = *(arg3 + 0xc)
            float temp0_180[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float var_1f8_2[0x4] = temp0_180
            var_1e8 = temp0_180
            float var_1d8_3[0x4] = temp0_180
            float var_1c8_2[0x4] = temp0_180
            arg5 = *arg3
            zmm1 = *(arg3 + 4)
            zmm4 = *(arg3 + 8)
            float temp0_181[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_182[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
            float temp0_183[0x4] = _mm_mul_ps(temp0_173, temp0_182)
            float temp0_184[0x4] = _mm_mul_ps(temp0_182, temp0_179)
            float temp0_185[0x4] = _mm_mul_ps(temp0_179, temp0_181)
            float temp0_186[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_187[0x4] = _mm_mul_ps(temp0_181, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_186)
            float temp0_189[0x4] = _mm_mul_ps(zx.o(0), temp0_180)
            float temp0_191[0x4] = _mm_sub_ps(temp0_185, _mm_mul_ps(temp0_186, temp0_173))
            zmm0 = _mm_sub_ps(zmm0, temp0_184)
            float temp0_193[0x4] = _mm_sub_ps(temp0_183, temp0_187)
            float temp0_194[0x4] = _mm_sub_ps(temp0_189, temp0_189)
            float temp0_195[0x4] = _mm_add_ps(temp0_191, temp0_191)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_197[0x4] = _mm_add_ps(temp0_193, temp0_193)
            float temp0_198[0x4] = _mm_add_ps(temp0_194, temp0_194)
            var_1b8 = temp0_195
            int32_t var_1a8_3[0x4] = zmm0
            float var_198_3[0x4] = temp0_197
            float var_188_2[0x4] = temp0_198
            float temp0_199[0x4] = _mm_mul_ps(temp0_198, temp0_180)
            float temp0_200[0x4] = _mm_mul_ps(temp0_180, temp0_195)
            float temp0_201[0x4] = _mm_mul_ps(temp0_180, zmm0)
            float temp0_202[0x4] = _mm_mul_ps(temp0_180, temp0_197)
            float temp0_203[0x4] = __addps_xmmps_memps(temp0_200, var_118_1)
            float temp0_204[0x4] = __addps_xmmps_memps(temp0_201, temp0_173)
            float temp0_205[0x4] = __addps_xmmps_memps(temp0_202, temp0_179)
            float temp0_206[0x4] = __addps_xmmps_memps(temp0_199, var_e8_1)
            var_248 = temp0_203
            float var_218_1[0x4] = temp0_206
            zmm4 = *arg3
            zmm1 = *(arg3 + 4)
            arg5 = *(arg3 + 8)
            float temp0_207[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_208[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_209[0x4] = _mm_mul_ps(zmm0, temp0_208)
            float temp0_210[0x4] = _mm_mul_ps(temp0_208, temp0_197)
            float temp0_211[0x4] = _mm_mul_ps(temp0_197, temp0_207)
            float temp0_212[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
            float temp0_213[0x4] = _mm_mul_ps(temp0_207, temp0_195)
            float temp0_214[0x4] = _mm_mul_ps(temp0_195, temp0_212)
            float temp0_216[0x4] = _mm_sub_ps(temp0_211, _mm_mul_ps(temp0_212, zmm0))
            float temp0_217[0x4] = _mm_sub_ps(temp0_214, temp0_210)
            float temp0_218[0x4] = _mm_sub_ps(temp0_209, temp0_213)
            float temp0_219[0x4] = _mm_add_ps(temp0_216, temp0_203)
            float temp0_220[0x4] = _mm_add_ps(temp0_217, temp0_204)
            float temp0_221[0x4] = _mm_add_ps(temp0_218, temp0_205)
            zmm10 = arg3[1].d
            zmm0 = *(arg3 + 0x14)
            float temp0_223[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_219)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_220)
            zmm11 = *(arg3 + 0x18)
            float temp0_227[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_221)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_228[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm6 = _mm_sub_ps(temp0_223, temp0_228)
            float temp0_230[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_231[0x4] = _mm_sub_ps(zmm0, temp0_230)
            zmm3 = (*arg2)[2]
            float temp0_232[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_233[0x4] = _mm_sub_ps(temp0_227, temp0_232)
            float var_1f8_3[0x4] = zmm6
            var_1e8 = temp0_231
            float var_1d8_4[0x4] = temp0_233
            zmm5 = *arg1
            zmm15 = (*arg1)[1]
            float temp0_234[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm14 = _mm_sub_ps(temp0_234, temp0_223)
            float temp0_236[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_237[0x4] = _mm_sub_ps(temp0_236, zmm0)
            zmm13 = (*arg1)[2]
            float temp0_238[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_223, temp0_228, 6), zmm12)
            char temp0_242 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm12))
            float temp0_243[0x4] = _mm_sub_ps(temp0_238, temp0_227)
            var_1b8 = zmm14
            float var_1a8_4[0x4] = temp0_237
            float var_198_4[0x4] = temp0_243
            arg5 = _mm_cmpeq_ps(temp0_223, temp0_228, 2)
            
            if (temp0_242 != 0xf)
                float temp0_245[0x4] = _mm_cmpeq_ps(zmm0, temp0_230, 2)
                arg5 = _mm_and_ps(_mm_and_ps(arg5, zmm12), temp0_245)
                zmm1 = _mm_andnot_ps(arg5, zmm12)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm12)) != 0xf)
                float temp0_251[0x4] = _mm_cmpeq_ps(temp0_227, temp0_232, 2)
                arg5 = _mm_and_ps(_mm_and_ps(arg5, zmm12), temp0_251)
                zmm1 = arg5 ^ zmm12
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm12)) == 0xf)
                zmm8 = var_208_2
                zmm5 = temp0_243
            else
                arg5 = _mm_and_ps(arg5, zmm12)
                zmm3 = _mm_cmpeq_ps(temp0_234, temp0_223, 2)
                zmm5 = _mm_and_ps(_mm_cmpeq_ps(temp0_234, temp0_223, 6), arg5)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm5, arg5)) != 0xf)
                    float temp0_262[0x4] = _mm_cmpeq_ps(temp0_236, zmm0, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, arg5), temp0_262)
                    zmm5 = zmm3 ^ arg5
                
                zmm8 = var_208_2
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm5, arg5)) != 0xf)
                    float temp0_267[0x4] = _mm_cmpeq_ps(temp0_238, temp0_227, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, arg5), temp0_267)
                
                zmm5 = temp0_243
                arg5 = _mm_and_ps(arg5, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(arg5, zmm12)) != 0)
                zmm14 = _mm_max_ps(zmm14, zmm6)
                float temp0_274[0x4] = __maxps_xmmps_memps(temp0_237, temp0_231)
                float temp0_275[0x4] = __maxps_xmmps_memps(zmm5, temp0_233)
                float temp0_276[0x4] = _mm_cmpeq_ps(temp0_274, zmm14, 1)
                zmm1 = _mm_and_ps(arg5, temp0_276)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm12)) != 0)
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_275, zmm14, 5), zmm1)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm12)) != 0)
                        zmm14 = _mm_blendv_ps(zmm14, temp0_275, zmm0)
                
                zmm3 = _mm_andnot_ps(temp0_276, arg5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm12)) != 0)
                    float temp0_288[0x4] = _mm_cmpeq_ps(temp0_275, temp0_274, 1)
                    zmm0 = _mm_and_ps(zmm3, temp0_288)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm12)) != 0)
                        zmm14 = _mm_blendv_ps(zmm14, temp0_274, zmm0)
                    
                    zmm2 = _mm_andnot_ps(temp0_288, zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm12)) != 0)
                        zmm14 = _mm_blendv_ps(zmm14, temp0_275, zmm2)
            
            zmm0 = _mm_andnot_ps(arg5, zmm12)
            
            if (_mm_movemask_ps(zmm0) != 0)
                arg5 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                int64_t rax_43 = 0
                zmm0 = data_142d3f780
                
                while (true)
                    float temp0_300[0x4] = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                    zmm1 = _mm_and_ps(temp0_300, arg5)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm12)) != 0)
                        char temp0_304 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_304 & 1) == 0)
                            if ((temp0_304 & 2) != 0)
                                goto label_14009d94f
                            
                            goto label_14009d869
                        
                        *(&var_248 + rax_43) = zmm6[0]
                        
                        if ((temp0_304 & 2) != 0)
                        label_14009d94f:
                            *(&var_248[1] + rax_43) = __extractps_memd_xmmps_immb(zmm6, 1)
                            
                            if ((temp0_304 & 4) == 0)
                                goto label_14009d872
                            
                            goto label_14009d960
                        
                    label_14009d869:
                        
                        if ((temp0_304 & 4) != 0)
                        label_14009d960:
                            *(&var_248[2] + rax_43) = __extractps_memd_xmmps_immb(zmm6, 2)
                            
                            if ((temp0_304 & 8) != 0)
                                *(&var_248[3] + rax_43) = __extractps_memd_xmmps_immb(zmm6, 3)
                        else
                        label_14009d872:
                            
                            if ((temp0_304 & 8) != 0)
                                *(&var_248[3] + rax_43) = __extractps_memd_xmmps_immb(zmm6, 3)
                    
                    zmm2 = _mm_andnot_ps(temp0_300, arg5)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm12)) != 0)
                        zmm5 = *(&var_1b8 + rax_43)
                        float temp0_309[0x4] = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                        zmm1 = _mm_and_ps(zmm2, temp0_309)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm12)) != 0)
                            zmm5 ^= zmm0
                            char temp0_313 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_313 & 1) == 0)
                                if ((temp0_313 & 2) != 0)
                                    goto label_14009d985
                                
                                goto label_14009d8cf
                            
                            *(&var_248 + rax_43) = zmm5[0]
                            
                            if ((temp0_313 & 2) != 0)
                            label_14009d985:
                                *(&var_248[1] + rax_43) = __extractps_memd_xmmps_immb(zmm5, 1)
                                
                                if ((temp0_313 & 4) == 0)
                                    goto label_14009d8d8
                                
                                goto label_14009d996
                            
                        label_14009d8cf:
                            
                            if ((temp0_313 & 4) != 0)
                            label_14009d996:
                                *(&var_248[2] + rax_43) = __extractps_memd_xmmps_immb(zmm5, 2)
                                
                                if ((temp0_313 & 8) != 0)
                                    *(&var_248[3] + rax_43) = __extractps_memd_xmmps_immb(zmm5, 3)
                            else
                            label_14009d8d8:
                                
                                if ((temp0_313 & 8) != 0)
                                    *(&var_248[3] + rax_43) = __extractps_memd_xmmps_immb(zmm5, 3)
                        
                        zmm3 = _mm_andnot_ps(temp0_309, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm12)) != 0)
                            char temp0_318 = _mm_movemask_ps(zmm3)
                            
                            if ((temp0_318 & 1) == 0)
                                if ((temp0_318 & 2) != 0)
                                    goto label_14009d9bd
                                
                                goto label_14009d90b
                            
                            *(&var_248 + rax_43) = 0
                            
                            if ((temp0_318 & 2) != 0)
                            label_14009d9bd:
                                *(&var_248[1] + rax_43) = 0
                                
                                if ((temp0_318 & 4) == 0)
                                    goto label_14009d914
                                
                                goto label_14009d9ce
                            
                        label_14009d90b:
                            
                            if ((temp0_318 & 4) != 0)
                            label_14009d9ce:
                                *(&var_248[2] + rax_43) = 0
                                
                                if ((temp0_318 & 8) != 0)
                                    *(&var_248[3] + rax_43) = 0
                            else
                            label_14009d914:
                                
                                if ((temp0_318 & 8) != 0)
                                    *(&var_248[3] + rax_43) = 0
                    
                    if (rax_43 == 0x20)
                        break
                    
                    zmm6 = *(&var_1e8 + rax_43)
                    rax_43 += 0x10
                
                zmm0 = var_248
                float temp0_324[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                float temp0_326[0x4] = _mm_add_ps(_mm_mul_ps(temp0_204, temp0_204), temp0_324)
                float temp0_328[0x4] = _mm_add_ps(_mm_mul_ps(temp0_205, temp0_205), temp0_326)
                zmm0 = _mm_rsqrt_ps(temp0_328)
                float temp0_331[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_328, zmm0), zmm0)
                float temp0_334[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_331), zmm0), data_142d3f640)
                zmm0 = _mm_rcp_ps(temp0_334)
                float temp0_336[0x4] = _mm_mul_ps(temp0_334, zmm0)
                zmm14 = _mm_blendv_ps(zmm14, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_336), zmm0), arg5)
            
            zmm0 = *arg8
            uint32_t i_3 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm14, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm12))
            
            if (i_3 == 0)
                return 0
            
            uint64_t i = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx
                
                if (i == 0)
                    rdx = 0x40
                    i &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_14009da91:
                        float var_158[0x4] = zmm14
                        uint64_t rdx_1 = zx.q(rdx.d) & 3
                        *arg8 = var_158[rdx_1][0]
                        float var_148[0x4] = zmm8
                        *arg7 = var_148[rdx_1]
                else
                    uint64_t rflags_2
                    rdx, rflags_2 = _bit_scan_forward(i)
                    i &= not.q(1 << (rdx u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_14009da91
                result.b = 1
            while (i != 0)
else
    result = 0
    rbp = 0
    
    while (true)
        char rbx_1 = result.b
        result.b = 1
        
        if ((rbx_1 & 1) == 0)
            float var_258_1[0x4] = arg5
            zmm0 = *(arg6 + sx.q((rbp << 2).d))
            float var_208_1[0x4] = zmm0
            int32_t temp0_2[0x4] = __pmulld_xmmdq_memdq(zmm0, data_142fc95c0)
            int64_t rax_4 = sx.q(temp0_2[0])
            int64_t rsi_2 = sx.q(_mm_extract_epi32(temp0_2, 1))
            int64_t rdi_2 = sx.q(_mm_extract_epi32(temp0_2, 2))
            int64_t rbx_3 = sx.q(_mm_extract_epi32(temp0_2, 3))
            arg5 = *(arg4 + (rax_4 << 2) + 4)
            float temp0_8[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + (rax_4 << 2)), *(arg4 + (rsi_2 << 2)), 
                        0x10), 
                    *(arg4 + (rdi_2 << 2)), 0x20), 
                *(arg4 + (rbx_3 << 2)), 0x30)
            float temp0_11[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg5, *(arg4 + (rsi_2 << 2) + 4), 0x10), 
                    *(arg4 + (rdi_2 << 2) + 4), 0x20), 
                *(arg4 + (rbx_3 << 2) + 4), 0x30)
            float temp0_14[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + (rax_4 << 2) + 8), 
                        *(arg4 + (rsi_2 << 2) + 8), 0x10), 
                    *(arg4 + (rdi_2 << 2) + 8), 0x20), 
                *(arg4 + (rbx_3 << 2) + 8), 0x30)
            var_1b8 = temp0_8
            int128_t var_188_1 = zx.o(0)
            zmm0 = *(arg3 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            int32_t var_1f8_1[0x4] = zmm0
            var_1e8 = zmm0
            int32_t var_1d8_1[0x4] = zmm0
            int32_t var_1c8_1[0x4] = zmm0
            zmm9 = *arg3
            zmm8 = *(arg3 + 4)
            zmm10 = *(arg3 + 8)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
            float temp0_18[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_19[0x4] = _mm_mul_ps(temp0_8, temp0_18)
            float temp0_20[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_21[0x4] = _mm_mul_ps(temp0_11, temp0_20)
            float temp0_23[0x4] = _mm_sub_ps(temp0_17, _mm_mul_ps(temp0_11, temp0_18))
            float temp0_25[0x4] = _mm_sub_ps(temp0_19, _mm_mul_ps(temp0_14, temp0_20))
            float temp0_27[0x4] = _mm_sub_ps(temp0_21, _mm_mul_ps(temp0_8, temp0_16))
            float temp0_28[0x4] = _mm_add_ps(temp0_23, temp0_23)
            float temp0_29[0x4] = _mm_add_ps(temp0_25, temp0_25)
            float temp0_30[0x4] = _mm_add_ps(temp0_27, temp0_27)
            float temp0_31[0x4] = _mm_mul_ps(zmm0, temp0_28)
            float temp0_32[0x4] = _mm_mul_ps(zmm0, temp0_29)
            zmm0 = _mm_mul_ps(zmm0, temp0_30)
            float temp0_34[0x4] = __addps_xmmps_memps(temp0_31, var_1b8)
            float temp0_35[0x4] = __addps_xmmps_memps(temp0_32, temp0_11)
            zmm0 = __addps_xmmps_memps(zmm0, temp0_14)
            float temp0_37[0x4] = _mm_mul_ps(temp0_30, temp0_16)
            float temp0_38[0x4] = _mm_mul_ps(temp0_28, temp0_18)
            float temp0_39[0x4] = _mm_mul_ps(temp0_29, temp0_20)
            float temp0_42[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_37, _mm_mul_ps(temp0_29, temp0_18)), temp0_34)
            float temp0_45[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_38, _mm_mul_ps(temp0_30, temp0_20)), temp0_35)
            float temp0_48[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_39, _mm_mul_ps(temp0_28, temp0_16)), zmm0)
            zmm15 = arg3[1].d
            zmm11 = *(arg3 + 0x14)
            float temp0_50[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_42)
            float temp0_52[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_45)
            zmm2 = *(arg3 + 0x18)
            float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_48)
            zmm1 = *arg2
            arg5 = (*arg2)[1]
            float temp0_55[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm4 = _mm_sub_ps(temp0_50, temp0_55)
            float temp0_57[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
            zmm0 = _mm_sub_ps(temp0_52, temp0_57)
            zmm14 = (*arg2)[2]
            float temp0_59[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            float temp0_60[0x4] = _mm_sub_ps(temp0_54, temp0_59)
            var_1f8 = zmm4
            int32_t var_178_1[0x4] = zmm0
            var_1e8 = zmm0
            float var_1d8_2[0x4] = temp0_60
            zmm3 = *arg1
            zmm6 = (*arg1)[1]
            float temp0_61[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_62[0x4] = _mm_sub_ps(temp0_61, temp0_50)
            float temp0_63[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_64[0x4] = _mm_sub_ps(temp0_63, temp0_52)
            zmm5 = (*arg1)[2]
            float temp0_65[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            char temp0_67 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_50, temp0_55, 6))
            float temp0_68[0x4] = _mm_sub_ps(temp0_65, temp0_54)
            var_1b8 = temp0_62
            float var_1a8_2[0x4] = temp0_64
            float var_198_2[0x4] = temp0_68
            
            if (temp0_67 == 0xf)
                zmm0 = _mm_cmpeq_ps(temp0_50, temp0_55, 2)
                zmm10 = _mm_cmpeq_epi32(temp0_18, temp0_18)
            label_14009cf4b:
                zmm6 = data_142d3f780
                arg5 = var_258_1
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm0, 0x1f), 0x1f)
                
                if (_mm_movemask_ps(zmm1) != 0)
                label_14009cf6f:
                    float temp0_98[0x4] = _mm_max_ps(temp0_62, zmm4)
                    float temp0_99[0x4] = __maxps_xmmps_memps(temp0_64, var_178_1)
                    float temp0_100[0x4] = _mm_max_ps(temp0_68, temp0_60)
                    float temp0_101[0x4] = _mm_cmpeq_ps(temp0_99, temp0_98, 1)
                    zmm5 = _mm_and_ps(zmm1, temp0_101)
                    
                    if (_mm_movemask_ps(zmm5) != 0)
                        float temp0_104[0x4] = _mm_cmpeq_ps(temp0_100, temp0_98, 1)
                        zmm0 = _mm_and_ps(zmm5, temp0_104)
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_98, zmm0)
                        
                        zmm2 = _mm_andnot_ps(temp0_104, zmm5)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_100, zmm2)
                    
                    zmm3 = _mm_andnot_ps(temp0_101, zmm1)
                    
                    if (_mm_movemask_ps(zmm3) != 0)
                        float temp0_113[0x4] = _mm_cmpeq_ps(temp0_100, temp0_99, 1)
                        zmm0 = _mm_and_ps(zmm3, temp0_113)
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_99, zmm0)
                        
                        zmm2 = _mm_andnot_ps(temp0_113, zmm3)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_100, zmm2)
            else
                float temp0_69[0x4] = _mm_cmpeq_ps(temp0_50, temp0_55, 2)
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_52, temp0_57, 2), temp0_69)
                zmm10 = _mm_cmpeq_epi32(temp0_69, temp0_69)
                
                if (_mm_movemask_ps(zmm0 ^ zmm10) == 0xf)
                    goto label_14009cf4b
                
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_54, temp0_59, 2), zmm0)
                
                if (_mm_movemask_ps(zmm1 ^ zmm10) == 0xf)
                    zmm6 = data_142d3f780
                    arg5 = var_258_1
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009cf6f
                else
                    arg5 = _mm_and_ps(_mm_cmpeq_ps(temp0_61, temp0_50, 6), zmm1)
                    char temp0_80 = _mm_movemask_ps(_mm_cmpeq_epi32(arg5, zmm1))
                    zmm3 = _mm_cmpeq_ps(temp0_61, temp0_50, 2)
                    
                    if (temp0_80 != 0xf)
                        float temp0_82[0x4] = _mm_cmpeq_ps(temp0_63, temp0_52, 2)
                        zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm1), temp0_82)
                        arg5 = _mm_andnot_ps(zmm3, zmm1)
                    
                    zmm6 = data_142d3f780
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(arg5, zmm1)) != 0xf)
                        float temp0_88[0x4] = _mm_cmpeq_ps(temp0_65, temp0_54, 2)
                        zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm1), temp0_88)
                    
                    arg5 = var_258_1
                    zmm1 = _mm_and_ps(zmm1, zmm3)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009cf6f
            
            zmm1 ^= zmm10
            
            if (_mm_movemask_ps(zmm1) != 0)
                int64_t rax_19 = 0
                
                while (true)
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                    uint32_t temp0_123 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm1))
                    
                    if (temp0_123 != 0)
                        char rsi_4 = temp0_123.b
                        
                        if ((rsi_4 & 1) == 0)
                            if ((rsi_4 & 2) != 0)
                                goto label_14009d120
                            
                            goto label_14009d053
                        
                        *(&var_248 + rax_19) = zmm4[0]
                        
                        if ((rsi_4 & 2) != 0)
                        label_14009d120:
                            *(&var_248[1] + rax_19) = __extractps_memd_xmmps_immb(zmm4, 1)
                            
                            if ((rsi_4 & 4) == 0)
                                goto label_14009d05d
                            
                            goto label_14009d132
                        
                    label_14009d053:
                        
                        if ((rsi_4 & 4) != 0)
                        label_14009d132:
                            *(&var_248[2] + rax_19) = __extractps_memd_xmmps_immb(zmm4, 2)
                            
                            if ((rsi_4 & 8) != 0)
                                *(&var_248[3] + rax_19) = __extractps_memd_xmmps_immb(zmm4, 3)
                        else
                        label_14009d05d:
                            
                            if ((rsi_4 & 8) != 0)
                                *(&var_248[3] + rax_19) = __extractps_memd_xmmps_immb(zmm4, 3)
                    
                    zmm0 = _mm_andnot_ps(zmm0, zmm1)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm3 = *(&var_1b8 + rax_19)
                        float temp0_127[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        uint32_t temp0_129 = _mm_movemask_ps(_mm_and_ps(zmm0, temp0_127))
                        
                        if (temp0_129 != 0)
                            zmm3 ^= zmm6
                            char rsi_7 = temp0_129.b
                            
                            if ((rsi_7 & 1) == 0)
                                if ((rsi_7 & 2) != 0)
                                    goto label_14009d159
                                
                                goto label_14009d0ae
                            
                            *(&var_248 + rax_19) = zmm3[0]
                            
                            if ((rsi_7 & 2) != 0)
                            label_14009d159:
                                *(&var_248[1] + rax_19) = __extractps_memd_xmmps_immb(zmm3, 1)
                                
                                if ((rsi_7 & 4) == 0)
                                    goto label_14009d0b8
                                
                                goto label_14009d16b
                            
                        label_14009d0ae:
                            
                            if ((rsi_7 & 4) != 0)
                            label_14009d16b:
                                *(&var_248[2] + rax_19) = __extractps_memd_xmmps_immb(zmm3, 2)
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_248[3] + rax_19) = __extractps_memd_xmmps_immb(zmm3, 3)
                            else
                            label_14009d0b8:
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_248[3] + rax_19) = __extractps_memd_xmmps_immb(zmm3, 3)
                        
                        uint32_t temp0_132 = _mm_movemask_ps(_mm_andnot_ps(temp0_127, zmm0))
                        
                        if (temp0_132 != 0)
                            char rsi_9 = temp0_132.b
                            
                            if ((rsi_9 & 1) == 0)
                                if ((rsi_9 & 2) != 0)
                                    goto label_14009d194
                                
                                goto label_14009d0e6
                            
                            *(&var_248 + rax_19) = 0
                            
                            if ((rsi_9 & 2) != 0)
                            label_14009d194:
                                *(&var_248[1] + rax_19) = 0
                                
                                if ((rsi_9 & 4) == 0)
                                    goto label_14009d0f0
                                
                                goto label_14009d1a6
                            
                        label_14009d0e6:
                            
                            if ((rsi_9 & 4) != 0)
                            label_14009d1a6:
                                *(&var_248[2] + rax_19) = 0
                                
                                if ((rsi_9 & 8) != 0)
                                    *(&var_248[3] + rax_19) = 0
                            else
                            label_14009d0f0:
                                
                                if ((rsi_9 & 8) != 0)
                                    *(&var_248[3] + rax_19) = 0
                    
                    if (rax_19 == 0x20)
                        break
                    
                    zmm4 = *(&var_1e8 + rax_19)
                    rax_19 += 0x10
                
                zmm0 = var_248
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                float var_238[0x4]
                float temp0_140[0x4] = _mm_add_ps(_mm_mul_ps(var_238, var_238), zmm0)
                float var_228[0x4]
                float temp0_142[0x4] = _mm_add_ps(_mm_mul_ps(var_228, var_228), temp0_140)
                zmm0 = _mm_rsqrt_ps(temp0_142)
                float temp0_145[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_142, zmm0), zmm0)
                float temp0_148[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_145), zmm0), data_142d3f640)
                zmm0 = _mm_rcp_ps(temp0_148)
                float temp0_150[0x4] = _mm_mul_ps(temp0_148, zmm0)
                arg5 = _mm_blendv_ps(arg5, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_150), zmm0), 
                    zmm1)
            
            zmm0 = *arg8
            char i_2 = _mm_movemask_ps(_mm_cmpeq_ps(arg5, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
            if (i_2 == 0)
                result = 0
                rbp = zx.q(rbp.d + 4)
                
                if (rbp.d s>= r12_4)
                    break
                
                continue
            else
                uint64_t i_1 = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rsi_10
                    
                    if (i_1 == 0)
                        rsi_10 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_14009d271:
                            float var_138[0x4] = arg5
                            uint64_t rsi_11 = zx.q(rsi_10.d) & 3
                            *arg8 = var_138[rsi_11][0]
                            float var_128[0x4] = var_208_1
                            *arg7 = var_128[rsi_11]
                    else
                        uint64_t rflags_1
                        rsi_10, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rsi_10 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_14009d271
                    result.b = 1
                while (i_1 != 0)
        
        rbp = zx.q(rbp.d + 4)
        
        if (rbp.d s>= r12_4)
            break
    
    if (rbp.d s< arg9)
        goto label_14009d2b8
return result
