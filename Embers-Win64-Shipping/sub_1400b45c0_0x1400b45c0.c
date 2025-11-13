// 函数: sub_1400b45c0
// 地址: 0x1400b45c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float var_88[0x4] = arg5
float zmm8[0x4]
float var_b8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_c8[0x4] = zmm7
float zmm6[0x4]
float var_d8[0x4] = zmm6
float zmm0[0x4] = arg6
int32_t r10_4 = ((arg9 s>> 0x1f u>> 0x1e) + arg9) & 0xfffffffc
float* r10_5
int64_t* r14
float zmm9[0x4]
float zmm10[0x4]
float zmm12[0x4]
uint32_t var_298[0x4]
float var_288[0x4]
uint32_t var_218[0x4]
float var_1a8[0x4]
uint64_t rsi
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
float zmm5[0x4]

if (r10_4 s<= 0)
    rsi = 0
    zmm9 = zx.o(0)
    zmm12 = zx.o(0)
    zmm10 = zx.o(0)
    var_298 = zx.o(0)
    r14 = arg8
    r10_5 = arg7
    
    if (0 s< arg9)
    label_1400b4f0a:
        float var_228_1[0x4] = zmm9
        float var_238_1[0x4] = zmm10
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi.d), 0), data_142e11d00)
        zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm1)
        zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm3
        int64_t rax_24 = sx.q(zmm1[0])
        void* rbx_1 = &(*arg4)[rax_24]
        zmm0 = (*arg4)[rax_24]
        int64_t rsi_1 = sx.q(_mm_extract_epi32(zmm1, 1))
        void* r11_1 = &(*arg4)[rsi_1]
        int64_t rax_27 = sx.q(_mm_extract_epi32(zmm1, 2))
        void* r15_1 = &(*arg4)[rax_27]
        int64_t rdi_9 = sx.q(_mm_extract_epi32(zmm1, 3))
        void* r12_1 = &(*arg4)[rdi_9]
        float temp0_193[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg4)[rsi_1], 0x10), 
                (*arg4)[rax_27], 0x20), 
            (*arg4)[rdi_9], 0x30)
        zmm2 = data_142fc95e0 & zmm3
        zmm8 = *(zx.q(zmm2[0]) + rbx_1)
        uint64_t rax_29 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rdi_10 = zx.q(_mm_extract_epi32(zmm2, 2))
        int32_t* rsi_2 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_199[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rax_29 + r11_1), 0x10), 
                *(rdi_10 + r15_1), 0x20), 
            *(rsi_2 + r12_1), 0x30)
        zmm2 = data_142fc95f0 & zmm3
        zmm6 = *(zx.q(zmm2[0]) + rbx_1)
        uint64_t rax_31 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rbx_2 = zx.q(_mm_extract_epi32(zmm2, 2))
        int32_t* rdi_11 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_205[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_31 + r11_1), 0x10), 
                *(rbx_2 + r15_1), 0x20), 
            *(rdi_11 + r12_1), 0x30)
        float var_e8_1[0x4] = zx.o(0)
        zmm7 = *(arg3 + 0xc)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        uint32_t var_1b8_3[0x4] = zmm7
        var_1a8 = zmm7
        uint32_t var_198_3[0x4] = zmm7
        uint32_t var_188_2[0x4] = zmm7
        zmm4 = *arg3
        zmm1 = *(arg3 + 4)
        zmm5 = *(arg3 + 8)
        float temp0_207[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_209[0x4] = _mm_mul_ps(temp0_199, zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_205)
        float temp0_211[0x4] = _mm_mul_ps(temp0_205, temp0_207)
        float temp0_212[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_213[0x4] = _mm_mul_ps(temp0_207, temp0_193)
        float temp0_214[0x4] = _mm_mul_ps(temp0_193, temp0_212)
        float temp0_215[0x4] = _mm_mul_ps(zx.o(0), zmm7)
        float temp0_217[0x4] = _mm_sub_ps(temp0_211, _mm_mul_ps(temp0_212, temp0_199))
        float temp0_218[0x4] = _mm_sub_ps(temp0_214, zmm4)
        float temp0_219[0x4] = _mm_sub_ps(temp0_209, temp0_213)
        float temp0_220[0x4] = _mm_sub_ps(temp0_215, temp0_215)
        float temp0_221[0x4] = _mm_add_ps(temp0_217, temp0_217)
        float temp0_222[0x4] = _mm_add_ps(temp0_218, temp0_218)
        float temp0_223[0x4] = _mm_add_ps(temp0_219, temp0_219)
        float temp0_224[0x4] = _mm_add_ps(temp0_220, temp0_220)
        var_218 = temp0_221
        float var_208_3[0x4] = temp0_222
        float var_1f8_3[0x4] = temp0_223
        float var_1e8_2[0x4] = temp0_224
        zmm10 = zmm7
        zmm8 = zmm7
        float temp0_225[0x4] = _mm_mul_ps(temp0_224, zmm7)
        zmm7 = _mm_mul_ps(zmm7, temp0_221)
        float temp0_227[0x4] = _mm_mul_ps(zmm10, temp0_222)
        float temp0_228[0x4] = _mm_mul_ps(zmm8, temp0_223)
        zmm7 = __addps_xmmps_memps(zmm7, temp0_193)
        float temp0_230[0x4] = __addps_xmmps_memps(temp0_227, temp0_199)
        float temp0_231[0x4] = __addps_xmmps_memps(temp0_228, temp0_205)
        float temp0_232[0x4] = __addps_xmmps_memps(temp0_225, var_e8_1)
        var_288 = zmm7
        float var_258_1[0x4] = temp0_232
        zmm4 = *arg3
        zmm5 = *(arg3 + 4)
        zmm1 = *(arg3 + 8)
        float temp0_233[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_235[0x4] = _mm_mul_ps(temp0_222, zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_223)
        float temp0_237[0x4] = _mm_mul_ps(temp0_223, temp0_233)
        float temp0_238[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_239[0x4] = _mm_mul_ps(temp0_233, temp0_221)
        float temp0_240[0x4] = _mm_mul_ps(temp0_221, temp0_238)
        float temp0_242[0x4] = _mm_sub_ps(temp0_237, _mm_mul_ps(temp0_238, temp0_222))
        float temp0_243[0x4] = _mm_sub_ps(temp0_240, zmm4)
        float temp0_244[0x4] = _mm_sub_ps(temp0_235, temp0_239)
        float temp0_245[0x4] = _mm_add_ps(temp0_242, zmm7)
        float temp0_246[0x4] = _mm_add_ps(temp0_243, temp0_230)
        float temp0_247[0x4] = _mm_add_ps(temp0_244, temp0_231)
        zmm10 = arg3[1].d
        arg5 = *(arg3 + 0x14)
        float temp0_249[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_245)
        float temp0_251[0x4] = _mm_add_ps(_mm_shuffle_ps(arg5, arg5, 0), temp0_246)
        zmm6 = *(arg3 + 0x18)
        float temp0_253[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_247)
        zmm8 = *arg2
        zmm9 = *(arg2 + 4)
        float temp0_254[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm7 = _mm_sub_ps(temp0_249, temp0_254)
        float temp0_256[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_257[0x4] = _mm_sub_ps(temp0_251, temp0_256)
        zmm15 = *(arg2 + 8)
        float temp0_258[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
        float temp0_259[0x4] = _mm_sub_ps(temp0_253, temp0_258)
        uint32_t var_1b8_4[0x4] = zmm7
        var_1a8 = temp0_257
        float var_198_4[0x4] = temp0_259
        zmm2 = *arg1
        zmm0 = (*arg1)[1]
        float temp0_260[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_261[0x4] = _mm_sub_ps(temp0_260, temp0_249)
        float temp0_262[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_263[0x4] = _mm_sub_ps(temp0_262, temp0_251)
        zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_249, temp0_254, 6), zmm3)
        char temp0_267 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3))
        zmm13 = (*arg1)[2]
        float temp0_268[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
        float temp0_269[0x4] = _mm_sub_ps(temp0_268, temp0_253)
        var_218 = temp0_261
        float var_208_4[0x4] = temp0_263
        float var_1f8_4[0x4] = temp0_269
        zmm10 = _mm_cmpeq_ps(temp0_249, temp0_254, 2)
        
        if (temp0_267 != 0xf)
            float temp0_271[0x4] = _mm_cmpeq_ps(temp0_251, temp0_256, 2)
            zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm3), temp0_271)
            zmm1 = _mm_andnot_ps(zmm10, zmm3)
        
        zmm9 = var_228_1
        arg5 = temp0_261
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3)) != 0xf)
            zmm4 = _mm_cmpeq_ps(temp0_253, temp0_258, 2)
            zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm3), zmm4)
            zmm1 = zmm10 ^ zmm3
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3)) != 0xf)
            zmm10 = _mm_and_ps(zmm10, zmm3)
            zmm4 = _mm_cmpeq_ps(temp0_260, temp0_249, 2)
            zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_260, temp0_249, 6), zmm10)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm10)) != 0xf)
                float temp0_288[0x4] = __cmpps_xmmps_memps_immb(temp0_262, temp0_251, 2)
                zmm4 = _mm_and_ps(_mm_and_ps(zmm4, zmm10), temp0_288)
                zmm2 = zmm4 ^ zmm10
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm10)) != 0xf)
                float temp0_293[0x4] = __cmpps_xmmps_memps_immb(temp0_268, temp0_253, 2)
                zmm4 = _mm_and_ps(_mm_and_ps(zmm4, zmm10), temp0_293)
            
            zmm10 = _mm_and_ps(zmm10, zmm4)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm3)) == 0)
            zmm8 = var_298
            zmm12 = zmm12
            zmm13 = temp0_253
        else
            arg5 = _mm_max_ps(arg5, zmm7)
            float temp0_300[0x4] = __maxps_xmmps_memps(temp0_263, temp0_257)
            float temp0_301[0x4] = __maxps_xmmps_memps(temp0_269, temp0_259)
            float temp0_302[0x4] = _mm_cmpeq_ps(temp0_300, arg5, 1)
            zmm2 = _mm_and_ps(zmm10, temp0_302)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm3)) != 0)
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_301, arg5, 5), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_301, zmm0)
            
            zmm13 = temp0_253
            zmm5 = _mm_andnot_ps(temp0_302, zmm10)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                float temp0_314[0x4] = _mm_cmpeq_ps(temp0_301, temp0_300, 1)
                zmm0 = _mm_and_ps(zmm5, temp0_314)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_300, zmm0)
                
                zmm2 = _mm_andnot_ps(temp0_314, zmm5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm3)) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_301, zmm2)
            
            zmm8 = var_298
            zmm12 = zmm12
        
        zmm0 = _mm_andnot_ps(zmm10, zmm3)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm10 ^= _mm_cmpeq_epi32(zmm0, zmm0)
            int64_t rcx = 0
            zmm0 = data_142d3f780
            
            while (true)
                float temp0_326[0x4] = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                uint32_t temp0_327[0x4] = _mm_and_ps(temp0_326, zmm10)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_327, zmm3)) != 0)
                    char temp0_330 = _mm_movemask_ps(temp0_327)
                    
                    if ((temp0_330 & 1) == 0)
                        if ((temp0_330 & 2) != 0)
                            goto label_1400b557e
                        
                        goto label_1400b54aa
                    
                    *(&var_288 + rcx) = zmm7[0]
                    
                    if ((temp0_330 & 2) != 0)
                    label_1400b557e:
                        *(&var_288[1] + rcx) = __extractps_memd_xmmps_immb(zmm7, 1)
                        
                        if ((temp0_330 & 4) == 0)
                            goto label_1400b54b2
                        
                        goto label_1400b558e
                    
                label_1400b54aa:
                    
                    if ((temp0_330 & 4) != 0)
                    label_1400b558e:
                        *(&var_288[2] + rcx) = __extractps_memd_xmmps_immb(zmm7, 2)
                        
                        if ((temp0_330 & 8) != 0)
                            *(&var_288[3] + rcx) = __extractps_memd_xmmps_immb(zmm7, 3)
                    else
                    label_1400b54b2:
                        
                        if ((temp0_330 & 8) != 0)
                            *(&var_288[3] + rcx) = __extractps_memd_xmmps_immb(zmm7, 3)
                
                zmm2 = _mm_andnot_ps(temp0_326, zmm10)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm3)) != 0)
                    zmm4 = *(&var_218 + rcx)
                    float temp0_335[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                    zmm6 = _mm_and_ps(zmm2, temp0_335)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm3)) != 0)
                        zmm4 ^= zmm0
                        char temp0_339 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_339 & 1) == 0)
                            if ((temp0_339 & 2) != 0)
                                goto label_1400b55b1
                            
                            goto label_1400b550b
                        
                        *(&var_288 + rcx) = zmm4[0]
                        
                        if ((temp0_339 & 2) != 0)
                        label_1400b55b1:
                            *(&var_288[1] + rcx) = __extractps_memd_xmmps_immb(zmm4, 1)
                            
                            if ((temp0_339 & 4) == 0)
                                goto label_1400b5513
                            
                            goto label_1400b55c1
                        
                    label_1400b550b:
                        
                        if ((temp0_339 & 4) != 0)
                        label_1400b55c1:
                            *(&var_288[2] + rcx) = __extractps_memd_xmmps_immb(zmm4, 2)
                            
                            if ((temp0_339 & 8) != 0)
                                *(&var_288[3] + rcx) = __extractps_memd_xmmps_immb(zmm4, 3)
                        else
                        label_1400b5513:
                            
                            if ((temp0_339 & 8) != 0)
                                *(&var_288[3] + rcx) = __extractps_memd_xmmps_immb(zmm4, 3)
                    
                    zmm5 = _mm_andnot_ps(temp0_335, zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                        char temp0_344 = _mm_movemask_ps(zmm5)
                        
                        if ((temp0_344 & 1) == 0)
                            if ((temp0_344 & 2) != 0)
                                goto label_1400b55e6
                            
                            goto label_1400b5542
                        
                        *(&var_288 + rcx) = 0
                        
                        if ((temp0_344 & 2) != 0)
                        label_1400b55e6:
                            *(&var_288[1] + rcx) = 0
                            
                            if ((temp0_344 & 4) == 0)
                                goto label_1400b554a
                            
                            goto label_1400b55f6
                        
                    label_1400b5542:
                        
                        if ((temp0_344 & 4) != 0)
                        label_1400b55f6:
                            *(&var_288[2] + rcx) = 0
                            
                            if ((temp0_344 & 8) != 0)
                                *(&var_288[3] + rcx) = 0
                        else
                        label_1400b554a:
                            
                            if ((temp0_344 & 8) != 0)
                                *(&var_288[3] + rcx) = 0
                
                if (rcx == 0x20)
                    break
                
                zmm7 = *(&var_1a8 + rcx)
                rcx += 0x10
            
            zmm0 = var_288
            zmm4 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
            float temp0_352[0x4] = _mm_add_ps(_mm_mul_ps(temp0_230, temp0_230), zmm4)
            float temp0_354[0x4] = _mm_add_ps(_mm_mul_ps(temp0_231, temp0_231), temp0_352)
            float temp0_355[0x4] = _mm_rsqrt_ps(temp0_354)
            float temp0_357[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_354, temp0_355), temp0_355)
            float temp0_360[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_357), temp0_355), data_142d3f640)
            float temp0_361[0x4] = _mm_rcp_ps(temp0_360)
            float temp0_362[0x4] = _mm_mul_ps(temp0_360, temp0_361)
            arg5 = _mm_blendv_ps(arg5, 
                _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_362), temp0_361), zmm10)
        
        zmm0 = arg6
        float temp0_367[0x4] = _mm_sub_ps(arg5, _mm_shuffle_ps(zmm0, zmm0, 0))
        zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_367, data_142fc95d0, 1), zmm3)
        char temp0_370 = _mm_movemask_ps(zmm0)
        zmm10 = var_238_1
        
        if (temp0_370 != 0)
            float temp0_371[0x4] = _mm_mul_ps(temp0_249, temp0_367)
            zmm2 = zmm10
            char temp2_1 = temp0_370 & 1
            
            if (temp2_1 != 0)
                zmm2 = zmm10
                zmm2[0] = zmm2[0] + temp0_371[0]
                zmm14 = _mm_mul_ps(temp0_251, temp0_367)
                zmm3 = zmm12
                
                if (temp2_1 != 0)
                    goto label_1400b5835
                
                goto label_1400b56c8
            
            zmm14 = _mm_mul_ps(temp0_251, temp0_367)
            zmm3 = zmm12
            
            if (temp2_1 != 0)
            label_1400b5835:
                zmm3 = zmm12
                zmm3[0] = zmm3[0] f+ zmm14[0]
                zmm13 = _mm_mul_ps(zmm13, temp0_367)
                zmm1 = zmm9
                
                if (temp2_1 != 0)
                    goto label_1400b56d6
                
                goto label_1400b584c
            
        label_1400b56c8:
            zmm13 = _mm_mul_ps(zmm13, temp0_367)
            zmm1 = zmm9
            bool cond:17_1
            bool cond:18_1
            bool cond:21_1
            bool cond:22_1
            
            if (temp2_1 != 0)
            label_1400b56d6:
                zmm1 = zmm9
                zmm1[0] = zmm1[0] + zmm13[0]
                zmm10 = _mm_add_ps(zmm10, temp0_371)
                char temp6_1 = temp0_370 & 2
                cond:17_1 = temp6_1 == 0
                cond:18_1 = temp6_1 != 0
                cond:21_1 = temp6_1 == 0
                cond:22_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                    goto label_1400b5859
                
                goto label_1400b56ec
            
        label_1400b584c:
            zmm10 = _mm_add_ps(zmm10, temp0_371)
            char temp5_1 = temp0_370 & 2
            cond:17_1 = temp5_1 == 0
            cond:18_1 = temp5_1 != 0
            cond:21_1 = temp5_1 == 0
            cond:22_1 = temp5_1 != 0
            
            if (temp5_1 != 0)
            label_1400b5859:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                zmm12 = _mm_add_ps(zmm12, zmm14)
                
                if (cond:18_1)
                    goto label_1400b56f6
                
                goto label_1400b586a
            
        label_1400b56ec:
            zmm12 = _mm_add_ps(zmm12, zmm14)
            
            if (not(cond:17_1))
            label_1400b56f6:
                zmm3 = _mm_blend_ps(zmm3, zmm12, 2)
                zmm9 = _mm_add_ps(zmm9, zmm13)
                
                if (cond:22_1)
                    goto label_1400b5874
                
                goto label_1400b5707
            
        label_1400b586a:
            zmm9 = _mm_add_ps(zmm9, zmm13)
            bool cond:25_1
            bool cond:26_1
            bool cond:29_1
            bool cond:30_1
            
            if (not(cond:21_1))
            label_1400b5874:
                zmm1 = _mm_blend_ps(zmm1, zmm9, 2)
                char temp10_1 = temp0_370 & 4
                cond:25_1 = temp10_1 == 0
                cond:26_1 = temp10_1 != 0
                cond:29_1 = temp10_1 == 0
                cond:30_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_1400b5710
                
                goto label_1400b5884
            
        label_1400b5707:
            char temp9_1 = temp0_370 & 4
            cond:25_1 = temp9_1 == 0
            cond:26_1 = temp9_1 != 0
            cond:29_1 = temp9_1 == 0
            cond:30_1 = temp9_1 != 0
            
            if (temp9_1 == 0)
            label_1400b5884:
                
                if (not(cond:25_1))
                label_1400b588a:
                    zmm3 = _mm_blend_ps(zmm3, zmm12, 4)
                    
                    if (cond:30_1)
                        goto label_1400b5723
                    
                    goto label_1400b5897
            else
            label_1400b5710:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                
                if (cond:26_1)
                    goto label_1400b588a
            
            bool cond:31_1
            bool cond:32_1
            bool cond:33_1
            bool cond:34_1
            
            if (not(cond:29_1))
            label_1400b5723:
                zmm1 = _mm_blend_ps(zmm1, zmm9, 4)
                char temp14_1 = temp0_370 & 8
                cond:31_1 = temp14_1 == 0
                cond:32_1 = temp14_1 != 0
                cond:33_1 = temp14_1 != 0
                cond:34_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                    goto label_1400b58a0
                
                goto label_1400b5733
            
        label_1400b5897:
            char temp13_1 = temp0_370 & 8
            cond:31_1 = temp13_1 == 0
            cond:32_1 = temp13_1 != 0
            cond:33_1 = temp13_1 != 0
            cond:34_1 = temp13_1 == 0
            
            if (temp13_1 != 0)
            label_1400b58a0:
                zmm10 = _mm_blend_ps(zmm10, zmm2, 7)
                
                if (cond:32_1)
                    goto label_1400b573d
                
                goto label_1400b58ad
            
        label_1400b5733:
            zmm10 = zmm2
            
            if (cond:31_1)
            label_1400b58ad:
                zmm12 = zmm3
                
                if (cond:33_1)
                    zmm1 = _mm_blend_ps(zmm1, zmm9, 8)
            else
            label_1400b573d:
                zmm12 = _mm_blend_ps(zmm12, zmm3, 7)
                
                if (not(cond:34_1))
                    zmm1 = _mm_blend_ps(zmm1, zmm9, 8)
            
            zmm8 = _mm_blendv_ps(zmm8, _mm_add_ps(temp0_367, zmm8), zmm0)
            zmm9 = zmm1
    else
        zmm8 = var_298
else
    zmm13 = *(arg3 + 0xc)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
    float var_2a8_1[0x4] = *arg3
    float var_248_1[0x4] = *(arg3 + 4)
    uint32_t var_1c8_1[0x4] = *(arg3 + 8)
    zmm1 = *arg2
    zmm2 = *(arg2 + 4)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = *(arg2 + 8)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm1 = *arg1
    zmm2 = (*arg1)[1]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = (*arg1)[2]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    rsi = 0
    var_298 = zx.o(0)
    zmm12 = zx.o(0)
    
    while (true)
        uint32_t var_238[0x4]
        __builtin_memset(&var_238, 0, 0x20)
        float var_2b8_1[0x4] = zmm12
        int64_t rax_3 = sx.q((rsi << 2).d * 3)
        zmm0 = *(arg4 + rax_3)
        zmm1 = *(arg4 + rax_3 + 0x10)
        zmm5 = *(arg4 + rax_3 + 0x20)
        uint32_t temp0_9[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
        uint32_t temp0_10[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm0, zmm1, 0xec)
        zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), temp0_11, 0x3f)
        zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm1, 0xf0), temp0_9, 3)
        zmm2 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
        zmm7 = _mm_shuffle_ps(_mm_blend_epi16(temp0_10, zmm1, 0xc), zmm5, 0xc4)
        var_218 = zmm3
        uint32_t var_1f8_1[0x4] = zmm7
        int128_t var_1e8_1 = zx.o(0)
        float var_1b8_1[0x4] = temp0_1
        var_1a8 = temp0_1
        float var_198_1[0x4] = temp0_1
        float temp0_20[0x4] = _mm_shuffle_ps(var_248_1, var_248_1, 0)
        float temp0_21[0x4] = _mm_mul_ps(temp0_20, zmm7)
        zmm4 = _mm_shuffle_ps(var_1c8_1, var_1c8_1, 0)
        float temp0_23[0x4] = _mm_mul_ps(zmm4, zmm3)
        float temp0_24[0x4] = _mm_shuffle_ps(var_2a8_1, var_2a8_1, 0)
        float temp0_25[0x4] = _mm_mul_ps(temp0_24, zmm2)
        float temp0_27[0x4] = _mm_sub_ps(temp0_21, _mm_mul_ps(zmm2, zmm4))
        float temp0_29[0x4] = _mm_sub_ps(temp0_23, _mm_mul_ps(zmm7, temp0_24))
        float temp0_31[0x4] = _mm_sub_ps(temp0_25, _mm_mul_ps(zmm3, temp0_20))
        float temp0_32[0x4] = _mm_add_ps(temp0_27, temp0_27)
        float temp0_33[0x4] = _mm_add_ps(temp0_29, temp0_29)
        float temp0_34[0x4] = _mm_add_ps(temp0_31, temp0_31)
        float temp0_35[0x4] = _mm_mul_ps(temp0_1, temp0_33)
        zmm7 = _mm_mul_ps(temp0_32, zmm4)
        float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm4)
        zmm4 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_34, temp0_20), temp0_37), 
            __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_32), var_218))
        float temp0_43[0x4] = _mm_mul_ps(temp0_1, temp0_34)
        float temp0_44[0x4] = __addps_xmmps_memps(temp0_35, zmm2)
        float temp0_45[0x4] = __addps_xmmps_memps(temp0_43, var_1f8_1)
        float var_188_1[0x4] = temp0_1
        zmm3 = _mm_mul_ps(temp0_33, temp0_24)
        zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, _mm_mul_ps(temp0_34, temp0_24)), temp0_44)
        zmm3 = _mm_add_ps(_mm_sub_ps(zmm3, _mm_mul_ps(temp0_32, temp0_20)), temp0_45)
        zmm12 = arg3[1].d
        zmm15 = *(arg3 + 0x14)
        float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4)
        float temp0_56[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm7)
        zmm14 = *(arg3 + 0x18)
        float temp0_58[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm3)
        zmm4 = temp0_2
        zmm8 = _mm_sub_ps(temp0_54, zmm4)
        float temp0_60[0x4] = __subps_xmmps_memps(temp0_56, temp0_3)
        float temp0_61[0x4] = __subps_xmmps_memps(temp0_58, temp0_4)
        float var_1b8_2[0x4] = zmm8
        var_1a8 = temp0_60
        float var_198_2[0x4] = temp0_61
        float temp0_62[0x4] = _mm_sub_ps(temp0_5, temp0_54)
        float temp0_63[0x4] = _mm_sub_ps(temp0_6, temp0_56)
        char temp0_65 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_54, zmm4, 6))
        float temp0_66[0x4] = _mm_sub_ps(temp0_7, temp0_58)
        var_218 = temp0_62
        float var_208_2[0x4] = temp0_63
        float var_1f8_2[0x4] = temp0_66
        
        if (temp0_65 != 0xf)
            float temp0_67[0x4] = _mm_cmpeq_ps(temp0_54, zmm4, 2)
            zmm4 = *(arg2 + 4)
            zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_56, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_67)
            zmm6 = _mm_cmpeq_epi32(temp0_45, temp0_45)
            
            if (_mm_movemask_ps(zmm3 ^ zmm6) == 0xf)
                goto label_1400b4a18
            
            zmm4 = *(arg2 + 8)
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_58, _mm_shuffle_ps(zmm4, zmm4, 0), 2), zmm3)
            
            if (_mm_movemask_ps(zmm1 ^ zmm6) == 0xf)
                zmm4 = var_238
                
                if (_mm_movemask_ps(zmm1) != 0)
                    goto label_1400b4a39
                
                goto label_1400b4b00
            
            zmm6 = *arg1
            float temp0_77[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_77, temp0_54, 6), zmm1)
            char temp0_81 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm1))
            zmm6 = _mm_cmpeq_ps(temp0_77, temp0_54, 2)
            
            if (temp0_81 != 0xf)
                zmm3 = (*arg1)[1]
                zmm3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_56, 2)
                zmm6 = _mm_and_ps(_mm_and_ps(zmm6, zmm1), zmm3)
                zmm3 = _mm_andnot_ps(zmm6, zmm1)
            
            zmm4 = var_238
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm1)) != 0xf)
                zmm3 = (*arg1)[2]
                zmm3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_58, 2)
                zmm6 = _mm_and_ps(_mm_and_ps(zmm6, zmm1), zmm3)
            
            zmm1 = _mm_and_ps(zmm1, zmm6)
            
            if (_mm_movemask_ps(zmm1) != 0)
                goto label_1400b4a39
            
            goto label_1400b4b00
        
        zmm3 = _mm_cmpeq_ps(temp0_54, zmm4, 2)
    label_1400b4a18:
        zmm4 = var_238
        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f)
        float var_228[0x4]
        
        if (_mm_movemask_ps(zmm1) == 0)
        label_1400b4b00:
            zmm9 = var_228
            zmm5 = data_142d3f780
            zmm10 = zmm4
            zmm1 ^= data_142d3f800
            
            if (_mm_movemask_ps(zmm1) != 0)
            label_1400b4b26:
                int64_t rax_20 = 0
                
                while (true)
                    float temp0_125[0x4] = _mm_cmpeq_ps(zx.o(0), zmm8, 1)
                    uint32_t temp0_127 = _mm_movemask_ps(_mm_and_ps(temp0_125, zmm1))
                    
                    if (temp0_127 != 0)
                        char rdi_2 = temp0_127.b
                        
                        if ((rdi_2 & 1) == 0)
                            if ((rdi_2 & 2) != 0)
                                goto label_1400b4c41
                            
                            goto label_1400b4b68
                        
                        *(&var_288 + rax_20) = zmm8[0]
                        
                        if ((rdi_2 & 2) != 0)
                        label_1400b4c41:
                            *(&var_288[1] + rax_20) = __extractps_memd_xmmps_immb(zmm8, 1)
                            
                            if ((rdi_2 & 4) == 0)
                                goto label_1400b4b72
                            
                            goto label_1400b4c54
                        
                    label_1400b4b68:
                        
                        if ((rdi_2 & 4) != 0)
                        label_1400b4c54:
                            *(&var_288[2] + rax_20) = __extractps_memd_xmmps_immb(zmm8, 2)
                            
                            if ((rdi_2 & 8) != 0)
                                *(&var_288[3] + rax_20) = __extractps_memd_xmmps_immb(zmm8, 3)
                        else
                        label_1400b4b72:
                            
                            if ((rdi_2 & 8) != 0)
                                *(&var_288[3] + rax_20) = __extractps_memd_xmmps_immb(zmm8, 3)
                    
                    zmm0 = _mm_andnot_ps(temp0_125, zmm1)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm4 = *(&var_218 + rax_20)
                        float temp0_131[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                        uint32_t temp0_133 = _mm_movemask_ps(_mm_and_ps(zmm0, temp0_131))
                        
                        if (temp0_133 != 0)
                            zmm4 ^= zmm5
                            char rdi_5 = temp0_133.b
                            
                            if ((rdi_5 & 1) == 0)
                                if ((rdi_5 & 2) != 0)
                                    goto label_1400b4c7c
                                
                                goto label_1400b4bc4
                            
                            *(&var_288 + rax_20) = zmm4[0]
                            
                            if ((rdi_5 & 2) != 0)
                            label_1400b4c7c:
                                *(&var_288[1] + rax_20) = __extractps_memd_xmmps_immb(zmm4, 1)
                                
                                if ((rdi_5 & 4) == 0)
                                    goto label_1400b4bce
                                
                                goto label_1400b4c8e
                            
                        label_1400b4bc4:
                            
                            if ((rdi_5 & 4) != 0)
                            label_1400b4c8e:
                                *(&var_288[2] + rax_20) = __extractps_memd_xmmps_immb(zmm4, 2)
                                
                                if ((rdi_5 & 8) != 0)
                                    *(&var_288[3] + rax_20) = __extractps_memd_xmmps_immb(zmm4, 3)
                            else
                            label_1400b4bce:
                                
                                if ((rdi_5 & 8) != 0)
                                    *(&var_288[3] + rax_20) = __extractps_memd_xmmps_immb(zmm4, 3)
                        
                        uint32_t temp0_136 = _mm_movemask_ps(_mm_andnot_ps(temp0_131, zmm0))
                        
                        if (temp0_136 != 0)
                            char rdi_7 = temp0_136.b
                            
                            if ((rdi_7 & 1) == 0)
                                if ((rdi_7 & 2) != 0)
                                    goto label_1400b4cb7
                                
                                goto label_1400b4bfc
                            
                            *(&var_288 + rax_20) = 0
                            
                            if ((rdi_7 & 2) != 0)
                            label_1400b4cb7:
                                *(&var_288[1] + rax_20) = 0
                                
                                if ((rdi_7 & 4) == 0)
                                    goto label_1400b4c06
                                
                                goto label_1400b4cc9
                            
                        label_1400b4bfc:
                            
                            if ((rdi_7 & 4) != 0)
                            label_1400b4cc9:
                                *(&var_288[2] + rax_20) = 0
                                
                                if ((rdi_7 & 8) != 0)
                                    *(&var_288[3] + rax_20) = 0
                            else
                            label_1400b4c06:
                                
                                if ((rdi_7 & 8) != 0)
                                    *(&var_288[3] + rax_20) = 0
                    
                    if (rax_20 == 0x20)
                        break
                    
                    zmm8 = *(&var_1a8 + rax_20)
                    rax_20 += 0x10
                
                zmm0 = var_288
                float temp0_142[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                float var_278[0x4]
                float temp0_144[0x4] = _mm_add_ps(_mm_mul_ps(var_278, var_278), temp0_142)
                uint32_t var_268[0x4]
                zmm3 = _mm_add_ps(_mm_mul_ps(var_268, var_268), temp0_144)
                float temp0_147[0x4] = _mm_rsqrt_ps(zmm3)
                zmm3 = _mm_mul_ps(_mm_mul_ps(zmm3, temp0_147), temp0_147)
                float temp0_152[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm3), temp0_147), data_142d3f640)
                float temp0_153[0x4] = _mm_rcp_ps(temp0_152)
                float temp0_154[0x4] = _mm_mul_ps(temp0_152, temp0_153)
                arg5 = _mm_blendv_ps(arg5, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_154), temp0_153), zmm1)
        else
        label_1400b4a39:
            float temp0_100[0x4] = _mm_max_ps(temp0_62, zmm8)
            float temp0_101[0x4] = _mm_max_ps(temp0_63, temp0_60)
            float temp0_102[0x4] = _mm_max_ps(temp0_66, temp0_61)
            float temp0_103[0x4] = _mm_cmpeq_ps(temp0_101, temp0_100, 1)
            uint32_t temp0_104[0x4] = _mm_and_ps(zmm1, temp0_103)
            
            if (_mm_movemask_ps(temp0_104) != 0)
                float temp0_106[0x4] = _mm_cmpeq_ps(temp0_102, temp0_100, 1)
                zmm0 = _mm_and_ps(temp0_104, temp0_106)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_100, zmm0)
                
                zmm2 = _mm_andnot_ps(temp0_106, temp0_104)
                
                if (_mm_movemask_ps(zmm2) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_102, zmm2)
            
            zmm6 = _mm_andnot_ps(temp0_103, zmm1)
            
            if (_mm_movemask_ps(zmm6) == 0)
                goto label_1400b4b00
            
            float temp0_115[0x4] = _mm_cmpeq_ps(temp0_102, temp0_101, 1)
            zmm0 = _mm_and_ps(zmm6, temp0_115)
            
            if (_mm_movemask_ps(zmm0) != 0)
                arg5 = _mm_blendv_ps(arg5, temp0_101, zmm0)
            
            zmm5 = data_142d3f780
            zmm10 = zmm4
            zmm2 = _mm_andnot_ps(temp0_115, zmm6)
            
            if (_mm_movemask_ps(zmm2) != 0)
                arg5 = _mm_blendv_ps(arg5, temp0_102, zmm2)
            
            zmm9 = var_228
            zmm1 ^= data_142d3f800
            
            if (_mm_movemask_ps(zmm1) != 0)
                goto label_1400b4b26
        float temp0_158[0x4] = __subps_xmmps_memps(arg5, temp0_8)
        float temp0_159[0x4] = __cmpps_xmmps_memps_immb(temp0_158, data_142fc95d0, 1)
        char temp0_160 = _mm_movemask_ps(temp0_159)
        
        if (temp0_160 == 0)
            zmm12 = var_2b8_1
            rsi = zx.q(rsi.d + 4)
            
            if (rsi.d s>= r10_4)
                break
        else
            float temp0_161[0x4] = _mm_mul_ps(temp0_54, temp0_158)
            zmm5 = zmm10
            char temp1_1 = temp0_160 & 1
            
            if (temp1_1 != 0)
                zmm5 = zmm10
                zmm5[0] = zmm5[0] + temp0_161[0]
                zmm15 = _mm_mul_ps(temp0_56, temp0_158)
                zmm6 = var_2b8_1
                
                if (temp1_1 != 0)
                    goto label_1400b4e4e
                
                goto label_1400b4d8a
            
            zmm15 = _mm_mul_ps(temp0_56, temp0_158)
            zmm6 = var_2b8_1
            
            if (temp1_1 != 0)
            label_1400b4e4e:
                zmm6 = var_2b8_1
                zmm6[0] = zmm6[0] + zmm15[0]
                zmm14 = _mm_mul_ps(temp0_58, temp0_158)
                zmm2 = zmm9
                
                if (temp1_1 != 0)
                    goto label_1400b4d98
                
                goto label_1400b4e65
            
        label_1400b4d8a:
            zmm14 = _mm_mul_ps(temp0_58, temp0_158)
            zmm2 = zmm9
            bool cond:7_1
            bool cond:8_1
            bool cond:11_1
            bool cond:12_1
            
            if (temp1_1 != 0)
            label_1400b4d98:
                zmm2 = zmm9
                zmm2[0] = zmm2[0] + zmm14[0]
                zmm10 = _mm_add_ps(zmm10, temp0_161)
                char temp4_1 = temp0_160 & 2
                cond:7_1 = temp4_1 == 0
                cond:8_1 = temp4_1 != 0
                cond:11_1 = temp4_1 == 0
                cond:12_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                    goto label_1400b4e71
                
                goto label_1400b4db2
            
        label_1400b4e65:
            zmm10 = _mm_add_ps(zmm10, temp0_161)
            char temp3_1 = temp0_160 & 2
            cond:7_1 = temp3_1 == 0
            cond:8_1 = temp3_1 != 0
            cond:11_1 = temp3_1 == 0
            cond:12_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
            label_1400b4e71:
                zmm5 = _mm_blend_ps(zmm5, zmm10, 2)
                zmm12 = _mm_add_ps(var_2b8_1, zmm15)
                
                if (cond:8_1)
                    goto label_1400b4dbc
                
                goto label_1400b4e87
            
        label_1400b4db2:
            zmm12 = _mm_add_ps(var_2b8_1, zmm15)
            
            if (not(cond:7_1))
            label_1400b4dbc:
                zmm6 = _mm_blend_ps(zmm6, zmm12, 2)
                zmm9 = _mm_add_ps(zmm9, zmm14)
                
                if (cond:12_1)
                    goto label_1400b4e91
                
                goto label_1400b4dcd
            
        label_1400b4e87:
            zmm9 = _mm_add_ps(zmm9, zmm14)
            bool cond:15_1
            bool cond:16_1
            bool cond:19_1
            bool cond:20_1
            
            if (not(cond:11_1))
            label_1400b4e91:
                zmm2 = _mm_blend_ps(zmm2, zmm9, 2)
                char temp8_1 = temp0_160 & 4
                cond:15_1 = temp8_1 == 0
                cond:16_1 = temp8_1 != 0
                cond:19_1 = temp8_1 == 0
                cond:20_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                    goto label_1400b4dd5
                
                goto label_1400b4ea0
            
        label_1400b4dcd:
            char temp7_1 = temp0_160 & 4
            cond:15_1 = temp7_1 == 0
            cond:16_1 = temp7_1 != 0
            cond:19_1 = temp7_1 == 0
            cond:20_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
            label_1400b4ea0:
                
                if (not(cond:15_1))
                label_1400b4ea6:
                    zmm6 = _mm_blend_ps(zmm6, zmm12, 4)
                    
                    if (cond:20_1)
                        goto label_1400b4de8
                    
                    goto label_1400b4eb3
            else
            label_1400b4dd5:
                zmm5 = _mm_blend_ps(zmm5, zmm10, 4)
                
                if (cond:16_1)
                    goto label_1400b4ea6
            
            bool cond:23_1
            bool cond:24_1
            bool cond:27_1
            bool cond:28_1
            
            if (not(cond:19_1))
            label_1400b4de8:
                zmm2 = _mm_blend_ps(zmm2, zmm9, 4)
                char temp12_1 = temp0_160 & 8
                cond:23_1 = temp12_1 == 0
                cond:24_1 = temp12_1 != 0
                cond:27_1 = temp12_1 != 0
                cond:28_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                    goto label_1400b4ebb
                
                goto label_1400b4df7
            
        label_1400b4eb3:
            char temp11_1 = temp0_160 & 8
            cond:23_1 = temp11_1 == 0
            cond:24_1 = temp11_1 != 0
            cond:27_1 = temp11_1 != 0
            cond:28_1 = temp11_1 == 0
            
            if (temp11_1 != 0)
            label_1400b4ebb:
                zmm10 = _mm_blend_ps(zmm10, zmm5, 7)
                
                if (cond:24_1)
                    goto label_1400b4e01
                
                goto label_1400b4ec8
            
        label_1400b4df7:
            zmm10 = zmm5
            
            if (cond:23_1)
            label_1400b4ec8:
                zmm12 = zmm6
                
                if (cond:27_1)
                    zmm2 = _mm_blend_ps(zmm2, zmm9, 8)
            else
            label_1400b4e01:
                zmm12 = _mm_blend_ps(zmm12, zmm6, 7)
                
                if (not(cond:28_1))
                    zmm2 = _mm_blend_ps(zmm2, zmm9, 8)
            
            var_298 = _mm_blendv_ps(var_298, _mm_add_ps(temp0_158, var_298), temp0_159)
            zmm9 = zmm2
            rsi = zx.q(rsi.d + 4)
            
            if (rsi.d s>= r10_4)
                break
    
    r14 = arg8
    r10_5 = arg7
    
    if (rsi.d s< arg9)
        goto label_1400b4f0a
    
    zmm8 = var_298
float temp0_384[0x4] = _mm_hadd_ps(zmm10, zmm10)
float temp0_385[0x4] = _mm_hadd_ps(temp0_384, temp0_384)
float temp0_386[0x4] = _mm_hadd_ps(zmm12, zmm12)
float temp0_388[0x4] = _mm_insert_ps(temp0_385, _mm_hadd_ps(temp0_386, temp0_386), 0x1c)
float temp0_389[0x4] = _mm_hadd_ps(zmm9, zmm9)
float temp0_390[0x4] = _mm_hadd_ps(temp0_389, temp0_389)
float result[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*r14), r14[1].d, 0x20), 
    temp0_388[0].q | temp0_390[0].q << 0x40)
*r14 = result[0]
*(r14 + 4) = __extractps_memd_xmmps_immb(result, 1)
r14[1].d = __extractps_memd_xmmps_immb(result, 2)
float temp0_394[0x4] = _mm_hadd_ps(zmm8, zmm8)
float temp0_395[0x4] = _mm_hadd_ps(temp0_394, temp0_394)
temp0_395[0] = temp0_395[0] + *r10_5
*r10_5 = temp0_395[0]
return result
