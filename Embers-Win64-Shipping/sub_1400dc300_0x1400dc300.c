// 函数: sub_1400dc300
// 地址: 0x1400dc300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_38[0x4] = zmm15
float zmm14[0x4]
float var_48[0x4] = zmm14
uint32_t zmm11[0x4]
uint32_t var_78[0x4] = zmm11
float zmm9[0x4]
float var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
float zmm7[0x4]
float var_b8[0x4] = zmm7
float zmm6[0x4]
float var_c8[0x4] = zmm6
float zmm0[0x4] = arg5
int32_t i = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
int32_t* r10_4
int64_t* r14
uint32_t zmm4[0x4]
float zmm10[0x4]
float zmm12[0x4]
float zmm13[0x4]
float var_288[0x4]
float var_238_1[0x4]
uint32_t var_208[0x4]
float var_188[0x4]
uint64_t rsi
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm5[0x4]

if (i s<= 0)
    rsi = 0
    zmm13 = zx.o(0)
    zmm12 = zx.o(0)
    zmm10 = zx.o(0)
    var_238_1 = zx.o(0)
    r14 = arg7
    r10_4 = arg6
    
    if (0 s>= arg8)
        zmm4 = var_238_1
    else
    label_1400dccf6:
        float var_228_1[0x4] = zmm13
        float var_2a8_1[0x4] = zmm10
        float var_298_1[0x4] = zmm12
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi.d), 0), data_142e11d00)
        zmm13 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm1)
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm13
        int64_t rax_23 = sx.q(zmm2[0])
        void* r11_1 = &(*arg4)[rax_23]
        zmm1 = (*arg4)[rax_23]
        int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
        void* rax_25 = &(*arg4)[rbx_1]
        float temp0_214[0x4] = _mm_unpacklo_ps(zmm1, (*arg4)[rbx_1][0].q)
        int64_t rbx_3 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
        void* rdi_8 = &(*arg4)[rbx_3]
        zmm3 = (*arg4)[rbx_3]
        int64_t rsi_1 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
        void* rbx_5 = &(*arg4)[rsi_1]
        zmm3 = _mm_unpacklo_ps(zmm3, (*arg4)[rsi_1][0].q)
        zmm1 = temp0_214[0].q | zmm3[0].q << 0x40
        zmm3 = data_142fc95e0 & zmm13
        float temp0_219[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + r11_1), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rax_25))[0].q)
        zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_8), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_5))[0].q)
        zmm8 = temp0_219[0].q | zmm4[0].q << 0x40
        zmm3 = data_142fc95f0 & zmm13
        zmm5 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + r11_1), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rax_25))[0].q)
        zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_8), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_5))[0].q)
        zmm5 = zmm5[0].q | zmm4[0].q << 0x40
        float var_e8_1[0x4] = zmm5
        float var_d8_1[0x4] = zx.o(0)
        zmm6 = *(arg3 + 0xc)
        float temp0_228[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float var_198_3[0x4] = temp0_228
        var_188 = temp0_228
        float var_178_3[0x4] = temp0_228
        float var_168_2[0x4] = temp0_228
        zmm7 = *arg3
        zmm2 = *(arg3 + 4)
        zmm4 = *(arg3 + 8)
        float temp0_229[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_230[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_231[0x4] = _mm_mul_ps(zmm8, temp0_230)
        float temp0_232[0x4] = _mm_mul_ps(temp0_230, zmm5)
        zmm5 = _mm_mul_ps(zmm5, temp0_229)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_235[0x4] = _mm_mul_ps(temp0_229, zmm1)
        float temp0_236[0x4] = _mm_mul_ps(zmm1, zmm4)
        zmm3 = _mm_mul_ps(zx.o(0), temp0_228)
        zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, zmm8))
        float temp0_240[0x4] = _mm_sub_ps(temp0_236, temp0_232)
        float temp0_241[0x4] = _mm_sub_ps(temp0_231, temp0_235)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        zmm5 = _mm_add_ps(zmm5, zmm5)
        float temp0_244[0x4] = _mm_add_ps(temp0_240, temp0_240)
        float temp0_245[0x4] = _mm_add_ps(temp0_241, temp0_241)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_208 = zmm5
        float var_1f8_3[0x4] = temp0_244
        float var_1e8_3[0x4] = temp0_245
        uint32_t var_1d8_2[0x4] = zmm3
        zmm3 = _mm_mul_ps(zmm3, temp0_228)
        float temp0_248[0x4] = _mm_mul_ps(temp0_228, zmm5)
        float temp0_249[0x4] = _mm_mul_ps(temp0_228, temp0_244)
        float temp0_250[0x4] = _mm_mul_ps(temp0_228, temp0_245)
        float temp0_251[0x4] = __addps_xmmps_memps(temp0_248, zmm1)
        float temp0_252[0x4] = __addps_xmmps_memps(temp0_249, zmm8)
        float temp0_253[0x4] = __addps_xmmps_memps(temp0_250, var_e8_1)
        zmm3 = __addps_xmmps_memps(zmm3, var_d8_1)
        var_288 = temp0_251
        uint32_t var_258_1[0x4] = zmm3
        zmm4 = *arg3
        zmm2 = *(arg3 + 4)
        zmm7 = *(arg3 + 8)
        float temp0_255[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(temp0_244, zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_245)
        float temp0_259[0x4] = _mm_mul_ps(temp0_245, temp0_255)
        float temp0_260[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_261[0x4] = _mm_mul_ps(temp0_255, zmm5)
        zmm5 = _mm_mul_ps(zmm5, temp0_260)
        float temp0_264[0x4] = _mm_sub_ps(temp0_259, _mm_mul_ps(temp0_260, temp0_244))
        zmm5 = _mm_sub_ps(zmm5, zmm4)
        zmm3 = _mm_sub_ps(zmm3, temp0_261)
        float temp0_267[0x4] = _mm_add_ps(temp0_264, temp0_251)
        zmm5 = _mm_add_ps(zmm5, temp0_252)
        zmm3 = _mm_add_ps(zmm3, temp0_253)
        zmm9 = arg3[1].d
        zmm10 = *(arg3 + 0x14)
        float temp0_271[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_267)
        float temp0_273[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm5)
        zmm0 = *(arg3 + 0x18)
        float temp0_275[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
        zmm5 = *arg2
        zmm8 = (*arg2)[1]
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm4 = _mm_sub_ps(temp0_271, zmm5)
        float temp0_278[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_279[0x4] = _mm_sub_ps(temp0_273, temp0_278)
        zmm12 = (*arg2)[2]
        float temp0_280[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
        float temp0_281[0x4] = _mm_sub_ps(temp0_275, temp0_280)
        uint32_t var_198_4[0x4] = zmm4
        var_188 = temp0_279
        float var_178_4[0x4] = temp0_281
        zmm11 = *arg1
        zmm14 = (*arg1)[1]
        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0)
        float temp0_283[0x4] = _mm_sub_ps(zmm11, temp0_271)
        float temp0_284[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
        zmm3 = _mm_sub_ps(temp0_284, temp0_273)
        zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_271, zmm5, 6), zmm13)
        char temp0_289 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13))
        zmm15 = (*arg1)[2]
        float temp0_290[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
        float temp0_291[0x4] = _mm_sub_ps(temp0_290, temp0_275)
        var_208 = temp0_283
        zmm0 = zmm3
        uint32_t var_1f8_4[0x4] = zmm3
        zmm3 = temp0_291
        float var_1e8_4[0x4] = temp0_291
        zmm9 = _mm_cmpeq_ps(temp0_271, zmm5, 2)
        
        if (temp0_289 != 0xf)
            float temp0_293[0x4] = _mm_cmpeq_ps(temp0_273, temp0_278, 2)
            zmm9 = _mm_and_ps(_mm_and_ps(zmm9, zmm13), temp0_293)
            zmm6 = _mm_andnot_ps(zmm9, zmm13)
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13)) != 0xf)
            zmm5 = _mm_cmpeq_ps(temp0_275, temp0_280, 2)
            zmm9 = _mm_and_ps(_mm_and_ps(zmm9, zmm13), zmm5)
            zmm6 = zmm9 ^ zmm13
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13)) == 0xf)
            zmm6 = zmm0
            zmm0 = zmm3
            zmm7 = temp0_283
        else
            zmm9 = _mm_and_ps(zmm9, zmm13)
            zmm5 = _mm_cmpeq_ps(zmm11, temp0_271, 2)
            zmm11 = _mm_and_ps(_mm_cmpeq_ps(zmm11, temp0_271, 6), zmm9)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm11, zmm9)) != 0xf)
                float temp0_310[0x4] = __cmpps_xmmps_memps_immb(temp0_284, temp0_273, 2)
                zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm9), temp0_310)
                zmm11 = zmm5 ^ zmm9
            
            zmm6 = zmm0
            zmm0 = zmm3
            zmm7 = temp0_283
            zmm11 = _mm_cmpeq_epi32(zmm11, zmm9)
            
            if (_mm_movemask_ps(zmm11) != 0xf)
                float temp0_315[0x4] = _mm_cmpeq_ps(temp0_290, temp0_275, 2)
                zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm9), temp0_315)
            
            zmm9 = _mm_and_ps(zmm9, zmm5)
        
        uint32_t temp0_320 = _mm_movemask_ps(_mm_and_ps(zmm9, zmm13))
        float temp0_322[0x4]
        uint32_t temp0_339
        
        if (temp0_320 != 0)
            float temp0_321[0x4] = _mm_max_ps(zmm7, zmm4)
            temp0_322 = __maxps_xmmps_memps(zmm6, temp0_279)
            zmm0 = __maxps_xmmps_memps(zmm0, temp0_281)
            float temp0_324[0x4] = _mm_cmpeq_ps(temp0_322, temp0_321, 1)
            uint32_t temp0_325[0x4] = _mm_and_ps(zmm9, temp0_324)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_325, zmm13)) != 0)
                float temp0_328[0x4] = _mm_cmpeq_ps(zmm0, temp0_321, 5)
                zmm11 =
                    _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_321, 1), temp0_325), temp0_321)
                zmm2 = _mm_and_ps(temp0_328, temp0_325)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) != 0)
                    zmm11 = _mm_or_ps(zmm11, _mm_and_ps(zmm2, zmm0))
            
            zmm1 = _mm_andnot_ps(temp0_324, zmm9)
            temp0_339 = _mm_movemask_ps(_mm_and_ps(zmm1, zmm13))
        
        if (temp0_320 == 0 || temp0_339 == 0)
            zmm12 = var_298_1
            zmm10 = var_2a8_1
        else
            float temp0_340[0x4] = _mm_cmpeq_ps(zmm0, temp0_322, 1)
            uint32_t temp0_341[0x4] = _mm_and_ps(zmm1, temp0_340)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_341, zmm13)) != 0)
                uint32_t temp0_344[0x4] = _mm_andnot_ps(temp0_341, zmm11)
                zmm11 = _mm_or_ps(_mm_and_ps(temp0_322, temp0_341), temp0_344)
            
            zmm2 = _mm_andnot_ps(temp0_340, zmm1)
            zmm12 = var_298_1
            zmm10 = var_2a8_1
            
            if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) != 0)
                zmm1 = _mm_andnot_ps(zmm2, zmm11)
                zmm0 = _mm_or_ps(_mm_and_ps(zmm0, zmm2), zmm1)
                zmm11 = zmm0
        
        zmm5 = temp0_273
        
        if (_mm_movemask_ps(_mm_andnot_ps(zmm9, zmm13)) != 0)
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm9
            int64_t rcx = 0
            zmm7 = data_142d3f780
            
            while (true)
                float temp0_356[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                zmm2 = _mm_and_ps(temp0_356, zmm0)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) != 0)
                    char temp0_360 = _mm_movemask_ps(zmm2)
                    
                    if ((temp0_360 & 1) == 0)
                        if ((temp0_360 & 2) != 0)
                            goto label_1400dd3a3
                        
                        goto label_1400dd2ca
                    
                    *(&var_288 + rcx) = zmm4[0]
                    
                    if ((temp0_360 & 2) != 0)
                    label_1400dd3a3:
                        *(&var_288[1] + rcx) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                        
                        if ((temp0_360 & 4) == 0)
                            goto label_1400dd2d2
                        
                        goto label_1400dd3b6
                    
                label_1400dd2ca:
                    
                    if ((temp0_360 & 4) != 0)
                    label_1400dd3b6:
                        *(&var_288[2] + rcx) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                        
                        if ((temp0_360 & 8) != 0)
                            *(&var_288[3] + rcx) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    else
                    label_1400dd2d2:
                        
                        if ((temp0_360 & 8) != 0)
                            *(&var_288[3] + rcx) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                
                zmm1 = _mm_andnot_ps(temp0_356, zmm0)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm13)) != 0)
                    zmm3 = *(&var_208 + rcx)
                    float temp0_365[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                    uint32_t temp0_366[0x4] = _mm_and_ps(zmm1, temp0_365)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_366, zmm13)) != 0)
                        zmm3 ^= zmm7
                        char temp0_369 = _mm_movemask_ps(temp0_366)
                        
                        if ((temp0_369 & 1) == 0)
                            if ((temp0_369 & 2) != 0)
                                goto label_1400dd3dc
                            
                            goto label_1400dd32f
                        
                        *(&var_288 + rcx) = zmm3[0]
                        
                        if ((temp0_369 & 2) != 0)
                        label_1400dd3dc:
                            *(&var_288[1] + rcx) = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                            
                            if ((temp0_369 & 4) == 0)
                                goto label_1400dd337
                            
                            goto label_1400dd3ef
                        
                    label_1400dd32f:
                        
                        if ((temp0_369 & 4) != 0)
                        label_1400dd3ef:
                            *(&var_288[2] + rcx) = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                            
                            if ((temp0_369 & 8) != 0)
                                *(&var_288[3] + rcx) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        else
                        label_1400dd337:
                            
                            if ((temp0_369 & 8) != 0)
                                *(&var_288[3] + rcx) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                    
                    zmm2 = _mm_andnot_ps(temp0_365, zmm1)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) != 0)
                        char temp0_374 = _mm_movemask_ps(zmm2)
                        
                        if ((temp0_374 & 1) == 0)
                            if ((temp0_374 & 2) != 0)
                                goto label_1400dd412
                            
                            goto label_1400dd36a
                        
                        *(&var_288 + rcx) = 0
                        
                        if ((temp0_374 & 2) != 0)
                        label_1400dd412:
                            *(&var_288[1] + rcx) = 0
                            
                            if ((temp0_374 & 4) == 0)
                                goto label_1400dd372
                            
                            goto label_1400dd422
                        
                    label_1400dd36a:
                        
                        if ((temp0_374 & 4) != 0)
                        label_1400dd422:
                            *(&var_288[2] + rcx) = 0
                            
                            if ((temp0_374 & 8) != 0)
                                *(&var_288[3] + rcx) = 0
                        else
                        label_1400dd372:
                            
                            if ((temp0_374 & 8) != 0)
                                *(&var_288[3] + rcx) = 0
                
                if (rcx == 0x20)
                    break
                
                zmm4 = *(&var_188 + rcx)
                rcx += 0x10
            
            zmm1 = var_288
            zmm3 = temp0_253
            zmm4 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm1, zmm1))
            float temp0_382[0x4] = _mm_add_ps(_mm_mul_ps(temp0_252, temp0_252), zmm4)
            zmm3 = _mm_add_ps(_mm_mul_ps(zmm3, zmm3), temp0_382)
            float temp0_385[0x4] = _mm_rsqrt_ps(zmm3)
            zmm3 = _mm_mul_ps(_mm_mul_ps(zmm3, temp0_385), temp0_385)
            float temp0_390[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm3), temp0_385), data_142d3f640)
            float temp0_391[0x4] = _mm_rcp_ps(temp0_390)
            float temp0_392[0x4] = _mm_mul_ps(temp0_390, temp0_391)
            zmm3 = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_392), temp0_391)
            zmm11 = _mm_or_ps(_mm_and_ps(zmm11, zmm9), _mm_and_ps(zmm3, zmm0))
        
        zmm0 = arg5
        zmm11 = _mm_sub_ps(zmm11, _mm_shuffle_ps(zmm0, zmm0, 0))
        uint32_t temp0_401[0x4] =
            _mm_and_ps(__cmpps_xmmps_memps_immb(zmm11, data_142fc95d0, 1), zmm13)
        char temp0_402 = _mm_movemask_ps(temp0_401)
        zmm13 = var_228_1
        
        if (temp0_402 == 0)
            zmm4 = var_238_1
        else
            zmm3 = _mm_mul_ps(temp0_271, zmm11)
            zmm2 = zmm10
            char temp1_1 = temp0_402 & 1
            
            if (temp1_1 == 0)
                zmm5 = _mm_mul_ps(zmm5, zmm11)
                zmm1 = zmm12
                
                if (temp1_1 != 0)
                    goto label_1400dd68f
                
                goto label_1400dd4f1
            
            zmm2 = zmm10
            zmm2[0] = zmm2[0] f+ zmm3[0]
            zmm5 = _mm_mul_ps(zmm5, zmm11)
            zmm1 = zmm12
            
            if (temp1_1 != 0)
            label_1400dd68f:
                zmm1 = zmm12
                zmm1[0] = zmm1[0] f+ zmm5[0]
                zmm8 = _mm_mul_ps(temp0_275, zmm11)
                zmm0 = zmm13
                
                if (temp1_1 == 0)
                    goto label_1400dd4ff
                
                goto label_1400dd6a5
            
        label_1400dd4f1:
            zmm8 = _mm_mul_ps(temp0_275, zmm11)
            zmm0 = zmm13
            bool cond:17_1
            bool cond:18_1
            bool cond:19_1
            bool cond:20_1
            
            if (temp1_1 == 0)
            label_1400dd4ff:
                zmm10 = _mm_add_ps(zmm10, zmm3)
                char temp5_1 = temp0_402 & 2
                cond:17_1 = temp5_1 != 0
                cond:18_1 = temp5_1 == 0
                cond:19_1 = temp5_1 == 0
                cond:20_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                    goto label_1400dd6c7
                
                goto label_1400dd50c
            
        label_1400dd6a5:
            zmm0 = zmm13
            zmm0[0] = zmm0[0] + zmm8[0]
            zmm10 = _mm_add_ps(zmm10, zmm3)
            char temp4_1 = temp0_402 & 2
            cond:17_1 = temp4_1 != 0
            cond:18_1 = temp4_1 == 0
            cond:19_1 = temp4_1 == 0
            cond:20_1 = temp4_1 != 0
            
            if (temp4_1 != 0)
            label_1400dd6c7:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm2, 1), zmm2, 0xe2)
                zmm6 = var_238_1
                zmm12 = _mm_add_ps(zmm12, zmm5)
                
                if (cond:18_1)
                    goto label_1400dd51e
                
                goto label_1400dd6e8
            
        label_1400dd50c:
            zmm6 = var_238_1
            zmm12 = _mm_add_ps(zmm12, zmm5)
            
            if (not(cond:17_1))
            label_1400dd51e:
                zmm13 = _mm_add_ps(zmm13, zmm8)
                
                if (cond:20_1)
                    goto label_1400dd701
                
                goto label_1400dd528
            
        label_1400dd6e8:
            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 1), zmm1, 0xe2)
            zmm13 = _mm_add_ps(zmm13, zmm8)
            bool cond:25_1
            bool cond:26_1
            bool cond:27_1
            bool cond:28_1
            
            if (not(cond:19_1))
            label_1400dd701:
                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm0, 1), zmm0, 0xe2)
                char temp9_1 = temp0_402 & 4
                cond:25_1 = temp9_1 == 0
                cond:26_1 = temp9_1 != 0
                cond:27_1 = temp9_1 != 0
                cond:28_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                    goto label_1400dd531
                
                goto label_1400dd715
            
        label_1400dd528:
            char temp8_1 = temp0_402 & 4
            cond:25_1 = temp8_1 == 0
            cond:26_1 = temp8_1 != 0
            cond:27_1 = temp8_1 != 0
            cond:28_1 = temp8_1 == 0
            
            if (temp8_1 != 0)
            label_1400dd715:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x32), 0x84)
                
                if (not(cond:25_1))
                label_1400dd727:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x32), 0x84)
                    
                    if (cond:28_1)
                        goto label_1400dd53d
                    
                    goto label_1400dd739
            else
            label_1400dd531:
                
                if (cond:26_1)
                    goto label_1400dd727
            
            bool cond:33_1
            bool cond:34_1
            bool cond:35_1
            bool cond:36_1
            
            if (not(cond:27_1))
            label_1400dd53d:
                char temp13_1 = temp0_402 & 8
                cond:33_1 = temp13_1 != 0
                cond:34_1 = temp13_1 == 0
                cond:35_1 = temp13_1 != 0
                cond:36_1 = temp13_1 == 0
                
                if (temp13_1 != 0)
                    goto label_1400dd750
                
                goto label_1400dd546
            
        label_1400dd739:
            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x32), 0x84)
            char temp12_1 = temp0_402 & 8
            cond:33_1 = temp12_1 != 0
            cond:34_1 = temp12_1 == 0
            cond:35_1 = temp12_1 != 0
            cond:36_1 = temp12_1 == 0
            
            if (temp12_1 != 0)
            label_1400dd750:
                zmm10 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x23), 0x24)
                
                if (cond:34_1)
                    goto label_1400dd550
                
                goto label_1400dd764
            
        label_1400dd546:
            zmm10 = zmm2
            
            if (cond:33_1)
            label_1400dd764:
                zmm12 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x23), 0x24)
                
                if (cond:35_1)
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x23), 0x24)
            else
            label_1400dd550:
                zmm12 = zmm1
                
                if (not(cond:36_1))
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x23), 0x24)
            
            uint32_t temp0_412[0x4] = _mm_and_ps(_mm_add_ps(zmm11, zmm6), temp0_401)
            zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_401, zmm6), temp0_412)
            zmm13 = zmm0
else
    zmm9 = *(arg3 + 0xc)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float var_248_1[0x4] = *arg3
    float var_1a8_1[0x4] = *(arg3 + 4)
    float var_218_1[0x4] = *(arg3 + 8)
    zmm11 = *arg2
    zmm1 = (*arg2)[1]
    zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm1 = (*arg2)[2]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm1 = *arg1
    zmm2 = (*arg1)[1]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = (*arg1)[2]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    rsi = 0
    __builtin_memset(&var_238_1, 0, 0x20)
    uint32_t var_1b8_1[0x4] = zmm11
    
    do
        float var_2a8[0x4]
        __builtin_memset(&var_2a8, 0, 0x20)
        int64_t rax_3 = sx.q((rsi << 2).d * 3)
        zmm7 = *(arg4 + rax_3)
        zmm0 = *(arg4 + rax_3 + 0x10)
        zmm1 = *(arg4 + rax_3 + 0x20)
        zmm5 = _mm_shuffle_ps(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
            zmm1, 0xc4)
        zmm4 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm7, zmm0, 5)
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_36, 
            _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_36, zmm0, 0xf8), 0x22), 0x28)
        var_208 = zmm4
        int128_t var_1d8_1 = zx.o(0)
        float var_198_1[0x4] = temp0_1
        var_188 = temp0_1
        float var_178_1[0x4] = temp0_1
        float temp0_40[0x4] = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0)
        float temp0_41[0x4] = _mm_mul_ps(temp0_40, zmm5)
        float temp0_42[0x4] = _mm_shuffle_ps(var_218_1, var_218_1, 0)
        float temp0_43[0x4] = _mm_mul_ps(temp0_42, zmm4)
        float temp0_44[0x4] = _mm_shuffle_ps(var_248_1, var_248_1, 0)
        zmm3 = _mm_mul_ps(temp0_44, temp0_39)
        float temp0_47[0x4] = _mm_sub_ps(temp0_41, _mm_mul_ps(temp0_39, temp0_42))
        float temp0_49[0x4] = _mm_sub_ps(temp0_43, _mm_mul_ps(zmm5, temp0_44))
        zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm4, temp0_40))
        float temp0_52[0x4] = _mm_add_ps(temp0_47, temp0_47)
        float temp0_53[0x4] = _mm_add_ps(temp0_49, temp0_49)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm4 = _mm_mul_ps(temp0_1, temp0_53)
        float temp0_56[0x4] = _mm_mul_ps(temp0_52, temp0_42)
        float temp0_57[0x4] = _mm_mul_ps(temp0_53, temp0_42)
        float temp0_62[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, temp0_40), temp0_57), 
            __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_52), var_208))
        float temp0_63[0x4] = _mm_mul_ps(temp0_1, zmm3)
        zmm4 = __addps_xmmps_memps(zmm4, temp0_39)
        float temp0_65[0x4] = __addps_xmmps_memps(temp0_63, zmm5)
        float var_168_1[0x4] = temp0_1
        zmm5 = _mm_mul_ps(temp0_53, temp0_44)
        float temp0_69[0x4] = _mm_add_ps(_mm_sub_ps(temp0_56, _mm_mul_ps(zmm3, temp0_44)), zmm4)
        float temp0_70[0x4] = _mm_mul_ps(temp0_52, temp0_40)
        zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, temp0_70), temp0_65)
        zmm14 = arg3[1].d
        zmm4 = *(arg3 + 0x14)
        float temp0_74[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_62)
        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_69)
        zmm15 = *(arg3 + 0x18)
        float temp0_78[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm5)
        zmm8 = _mm_sub_ps(temp0_74, zmm11)
        float temp0_80[0x4] = __subps_xmmps_memps(zmm4, temp0_3)
        float temp0_81[0x4] = __subps_xmmps_memps(temp0_78, temp0_4)
        float var_198_2[0x4] = zmm8
        var_188 = temp0_80
        float var_178_2[0x4] = temp0_81
        float temp0_82[0x4] = _mm_sub_ps(temp0_5, temp0_74)
        float temp0_83[0x4] = _mm_sub_ps(temp0_6, zmm4)
        char temp0_85 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_74, zmm11, 6))
        float temp0_86[0x4] = _mm_sub_ps(temp0_7, temp0_78)
        var_208 = temp0_82
        float var_1f8_2[0x4] = temp0_83
        float var_1e8_2[0x4] = temp0_86
        
        if (temp0_85 != 0xf)
            float temp0_87[0x4] = _mm_cmpeq_ps(temp0_74, zmm11, 2)
            zmm3 = (*arg2)[1]
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm4, _mm_shuffle_ps(zmm3, zmm3, 0), 2), temp0_87)
            zmm1 = _mm_cmpeq_epi32(temp0_70, temp0_70)
            
            if (_mm_movemask_ps(zmm0 ^ zmm1) == 0xf)
                goto label_1400dc8e3
            
            zmm2 = (*arg2)[2]
            zmm11 = _mm_and_ps(_mm_cmpeq_ps(temp0_78, _mm_shuffle_ps(zmm2, zmm2, 0), 2), zmm0)
            
            if (_mm_movemask_ps(zmm11 ^ zmm1) != 0xf)
                zmm0 = *arg1
                float temp0_97[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
                zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_97, temp0_74, 6), zmm11)
                char temp0_101 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm11))
                zmm0 = _mm_cmpeq_ps(temp0_97, temp0_74, 2)
                
                if (temp0_101 != 0xf)
                    zmm2 = (*arg1)[1]
                    float temp0_104[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4, 2)
                    zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm11), temp0_104)
                    zmm2 = _mm_andnot_ps(zmm0, zmm11)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm11)) != 0xf)
                    zmm2 = (*arg1)[2]
                    float temp0_111[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_78, 2)
                    zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm11), temp0_111)
                
                zmm11 = _mm_and_ps(zmm11, zmm0)
            
            if (_mm_movemask_ps(zmm11) == 0)
                goto label_1400dc8f4
            
            goto label_1400dc82f
        
        zmm0 = _mm_cmpeq_ps(temp0_74, zmm11, 2)
    label_1400dc8e3:
        zmm11 = _mm_srai_epi32(_mm_slli_epi32(zmm0, 0x1f), 0x1f)
        uint32_t var_2b8[0x4]
        float var_298[0x4]
        float var_228[0x4]
        
        if (_mm_movemask_ps(zmm11) != 0)
        label_1400dc82f:
            float temp0_116[0x4] = _mm_max_ps(temp0_82, zmm8)
            float temp0_117[0x4] = _mm_max_ps(temp0_83, temp0_80)
            float temp0_118[0x4] = _mm_max_ps(temp0_86, temp0_81)
            float temp0_119[0x4] = _mm_cmpeq_ps(temp0_117, temp0_116, 1)
            uint32_t temp0_120[0x4] = _mm_and_ps(zmm11, temp0_119)
            
            if (_mm_movemask_ps(temp0_120) == 0)
                zmm12 = var_298
                zmm10 = var_2a8
                zmm13 = var_228
                zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                zmm0 = _mm_andnot_ps(temp0_119, zmm11)
                
                if (_mm_movemask_ps(zmm0) == 0)
                    zmm7 = var_2b8
                else
                label_1400dc937:
                    float temp0_144[0x4] = _mm_cmpeq_ps(temp0_118, temp0_117, 1)
                    uint32_t temp0_145[0x4] = _mm_and_ps(zmm0, temp0_144)
                    
                    if (_mm_movemask_ps(temp0_145) != 0)
                        zmm1 = __andnps_xmmxud_memxud(temp0_145, var_2b8)
                        var_2b8 = _mm_or_ps(_mm_and_ps(temp0_117, temp0_145), zmm1)
                    
                    zmm2 = _mm_andnot_ps(temp0_144, zmm0)
                    
                    if (_mm_movemask_ps(zmm2) == 0)
                        zmm7 = var_2b8
                    else
                        zmm0 = __andnps_xmmxud_memxud(zmm2, var_2b8)
                        zmm7 = _mm_or_ps(_mm_and_ps(temp0_118, zmm2), zmm0)
            else
                float temp0_122[0x4] = _mm_cmpeq_ps(temp0_118, temp0_116, 1)
                uint32_t temp0_123[0x4] = _mm_and_ps(temp0_120, temp0_122)
                
                if (_mm_movemask_ps(temp0_123) != 0)
                    zmm1 = __andnps_xmmxud_memxud(temp0_123, var_2b8)
                    var_2b8 = _mm_or_ps(_mm_and_ps(temp0_116, temp0_123), zmm1)
                
                zmm12 = var_298
                zmm10 = var_2a8
                zmm13 = var_228
                zmm5 = _mm_cmpeq_epi32(temp0_123, temp0_123)
                zmm2 = _mm_andnot_ps(temp0_122, temp0_120)
                
                if (_mm_movemask_ps(zmm2) != 0)
                    zmm1 = __andnps_xmmxud_memxud(zmm2, var_2b8)
                    var_2b8 = _mm_or_ps(_mm_and_ps(zmm2, temp0_118), zmm1)
                
                zmm0 = _mm_andnot_ps(temp0_119, zmm11)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    goto label_1400dc937
                
                zmm7 = var_2b8
        else
        label_1400dc8f4:
            zmm12 = var_298
            zmm10 = var_2a8
            zmm13 = var_228
            zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
            zmm7 = var_2b8
        zmm6 = zmm11 ^ zmm5
        
        if (_mm_movemask_ps(zmm6) != 0)
            int64_t rax_19 = 0
            zmm5 = data_142d3f780
            
            while (true)
                float temp0_156[0x4] = _mm_cmpeq_ps(zx.o(0), zmm8, 1)
                uint32_t temp0_158 = _mm_movemask_ps(_mm_and_ps(temp0_156, zmm6))
                
                if (temp0_158 != 0)
                    char rdi_2 = temp0_158.b
                    
                    if ((rdi_2 & 1) == 0)
                        if ((rdi_2 & 2) != 0)
                            goto label_1400dcac7
                        
                        goto label_1400dc9e8
                    
                    *(&var_288 + rax_19) = zmm8[0]
                    
                    if ((rdi_2 & 2) != 0)
                    label_1400dcac7:
                        *(&var_288[1] + rax_19) = _mm_shuffle_epi32(zmm8, 0xe5)[0]
                        
                        if ((rdi_2 & 4) == 0)
                            goto label_1400dc9f2
                        
                        goto label_1400dcadd
                    
                label_1400dc9e8:
                    
                    if ((rdi_2 & 4) != 0)
                    label_1400dcadd:
                        *(&var_288[2] + rax_19) = _mm_shuffle_epi32(zmm8, 0x4e)[0]
                        
                        if ((rdi_2 & 8) != 0)
                            *(&var_288[3] + rax_19) = _mm_shuffle_epi32(zmm8, 0xe7)[0]
                    else
                    label_1400dc9f2:
                        
                        if ((rdi_2 & 8) != 0)
                            *(&var_288[3] + rax_19) = _mm_shuffle_epi32(zmm8, 0xe7)[0]
                
                zmm0 = _mm_andnot_ps(temp0_156, zmm6)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm3 = *(&var_208 + rax_19)
                    float temp0_162[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                    uint32_t temp0_164 = _mm_movemask_ps(_mm_and_ps(zmm0, temp0_162))
                    
                    if (temp0_164 != 0)
                        zmm3 ^= zmm5
                        char rdi_5 = temp0_164.b
                        
                        if ((rdi_5 & 1) == 0)
                            if ((rdi_5 & 2) != 0)
                                goto label_1400dcb07
                            
                            goto label_1400dca47
                        
                        *(&var_288 + rax_19) = zmm3[0]
                        
                        if ((rdi_5 & 2) != 0)
                        label_1400dcb07:
                            *(&var_288[1] + rax_19) = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                            
                            if ((rdi_5 & 4) == 0)
                                goto label_1400dca51
                            
                            goto label_1400dcb1c
                        
                    label_1400dca47:
                        
                        if ((rdi_5 & 4) != 0)
                        label_1400dcb1c:
                            *(&var_288[2] + rax_19) = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                            
                            if ((rdi_5 & 8) != 0)
                                *(&var_288[3] + rax_19) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        else
                        label_1400dca51:
                            
                            if ((rdi_5 & 8) != 0)
                                *(&var_288[3] + rax_19) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                    
                    uint32_t temp0_167 = _mm_movemask_ps(_mm_andnot_ps(temp0_162, zmm0))
                    
                    if (temp0_167 != 0)
                        char rdi_7 = temp0_167.b
                        
                        if ((rdi_7 & 1) == 0)
                            if ((rdi_7 & 2) != 0)
                                goto label_1400dcb43
                            
                            goto label_1400dca82
                        
                        *(&var_288 + rax_19) = 0
                        
                        if ((rdi_7 & 2) != 0)
                        label_1400dcb43:
                            *(&var_288[1] + rax_19) = 0
                            
                            if ((rdi_7 & 4) == 0)
                                goto label_1400dca8c
                            
                            goto label_1400dcb55
                        
                    label_1400dca82:
                        
                        if ((rdi_7 & 4) != 0)
                        label_1400dcb55:
                            *(&var_288[2] + rax_19) = 0
                            
                            if ((rdi_7 & 8) != 0)
                                *(&var_288[3] + rax_19) = 0
                        else
                        label_1400dca8c:
                            
                            if ((rdi_7 & 8) != 0)
                                *(&var_288[3] + rax_19) = 0
                
                if (rax_19 == 0x20)
                    break
                
                zmm8 = *(&var_188 + rax_19)
                rax_19 += 0x10
            
            zmm0 = var_288
            float temp0_173[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
            float var_278[0x4]
            float temp0_175[0x4] = _mm_add_ps(_mm_mul_ps(var_278, var_278), temp0_173)
            float var_268[0x4]
            float temp0_177[0x4] = _mm_add_ps(_mm_mul_ps(var_268, var_268), temp0_175)
            float temp0_178[0x4] = _mm_rsqrt_ps(temp0_177)
            float temp0_180[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_177, temp0_178), temp0_178)
            float temp0_183[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_180), temp0_178), data_142d3f640)
            float temp0_184[0x4] = _mm_rcp_ps(temp0_183)
            float temp0_185[0x4] = _mm_mul_ps(temp0_183, temp0_184)
            float temp0_187[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_185), temp0_184)
            zmm7 = _mm_or_ps(_mm_and_ps(zmm7, zmm11), _mm_and_ps(temp0_187, zmm6))
        
        var_2b8 = zmm7
        float temp0_191[0x4] = __subps_xmmps_memps(zmm7, temp0_8)
        float temp0_192[0x4] = __cmpps_xmmps_memps_immb(temp0_191, data_142fc95d0, 1)
        char temp0_193 = _mm_movemask_ps(temp0_192)
        zmm11 = var_1b8_1
        
        if (temp0_193 != 0)
            float temp0_194[0x4] = _mm_mul_ps(temp0_74, temp0_191)
            zmm0 = zmm10
            char temp0_195 = temp0_193 & 1
            
            if (temp0_195 == 0)
                zmm4 = _mm_mul_ps(zmm4, temp0_191)
                zmm2 = zmm12
                
                if (temp0_195 != 0)
                    goto label_1400dc476
                
                goto label_1400dcc1a
            
            zmm0 = zmm10
            zmm0[0] = zmm0[0] + temp0_194[0]
            zmm4 = _mm_mul_ps(zmm4, temp0_191)
            zmm2 = zmm12
            
            if (temp0_195 != 0)
            label_1400dc476:
                zmm2 = zmm12
                zmm2[0] = zmm2[0] f+ zmm4[0]
                zmm15 = _mm_mul_ps(temp0_78, temp0_191)
                zmm3 = zmm13
                
                if (temp0_195 == 0)
                    goto label_1400dcc28
                
                goto label_1400dc48c
            
        label_1400dcc1a:
            zmm15 = _mm_mul_ps(temp0_78, temp0_191)
            zmm3 = zmm13
            bool cond:13_1
            bool cond:14_1
            bool cond:15_1
            bool cond:16_1
            
            if (temp0_195 == 0)
            label_1400dcc28:
                zmm10 = _mm_add_ps(zmm10, temp0_194)
                char temp3_1 = temp0_193 & 2
                cond:13_1 = temp3_1 != 0
                cond:14_1 = temp3_1 == 0
                cond:15_1 = temp3_1 == 0
                cond:16_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_1400dc4ad
                
                goto label_1400dcc34
            
        label_1400dc48c:
            zmm3 = zmm13
            zmm3[0] = zmm3[0] f+ zmm15[0]
            zmm10 = _mm_add_ps(zmm10, temp0_194)
            char temp2_1 = temp0_193 & 2
            cond:13_1 = temp2_1 != 0
            cond:14_1 = temp2_1 == 0
            cond:15_1 = temp2_1 == 0
            cond:16_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
            label_1400dc4ad:
                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm0, 1), zmm0, 0xe2)
                zmm12 = _mm_add_ps(zmm12, zmm4)
                
                if (cond:14_1)
                    goto label_1400dcc3e
                
                goto label_1400dc4c6
            
        label_1400dcc34:
            zmm12 = _mm_add_ps(zmm12, zmm4)
            
            if (not(cond:13_1))
            label_1400dcc3e:
                zmm13 = _mm_add_ps(zmm13, zmm15)
                
                if (cond:16_1)
                    goto label_1400dc4df
                
                goto label_1400dcc48
            
        label_1400dc4c6:
            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
            zmm13 = _mm_add_ps(zmm13, zmm15)
            bool cond:21_1
            bool cond:22_1
            bool cond:23_1
            bool cond:24_1
            
            if (not(cond:15_1))
            label_1400dc4df:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm3, 1), zmm3, 0xe2)
                char temp7_1 = temp0_193 & 4
                cond:21_1 = temp7_1 == 0
                cond:22_1 = temp7_1 != 0
                cond:23_1 = temp7_1 != 0
                cond:24_1 = temp7_1 == 0
                
                if (temp7_1 == 0)
                    goto label_1400dcc50
                
                goto label_1400dc4f2
            
        label_1400dcc48:
            char temp6_1 = temp0_193 & 4
            cond:21_1 = temp6_1 == 0
            cond:22_1 = temp6_1 != 0
            cond:23_1 = temp6_1 != 0
            cond:24_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
            label_1400dc4f2:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm10, zmm0, 0x32), 0x84)
                
                if (not(cond:21_1))
                label_1400dc504:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x32), 0x84)
                    
                    if (cond:24_1)
                        goto label_1400dcc5c
                    
                    goto label_1400dc516
            else
            label_1400dcc50:
                
                if (cond:22_1)
                    goto label_1400dc504
            
            bool cond:29_1
            bool cond:30_1
            bool cond:31_1
            bool cond:32_1
            
            if (not(cond:23_1))
            label_1400dcc5c:
                char temp11_1 = temp0_193 & 8
                cond:29_1 = temp11_1 != 0
                cond:30_1 = temp11_1 == 0
                cond:31_1 = temp11_1 != 0
                cond:32_1 = temp11_1 == 0
                
                if (temp11_1 != 0)
                    goto label_1400dc52c
                
                goto label_1400dcc64
            
        label_1400dc516:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm13, zmm3, 0x32), 0x84)
            char temp10_1 = temp0_193 & 8
            cond:29_1 = temp10_1 != 0
            cond:30_1 = temp10_1 == 0
            cond:31_1 = temp10_1 != 0
            cond:32_1 = temp10_1 == 0
            
            if (temp10_1 != 0)
            label_1400dc52c:
                zmm10 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm10, zmm0, 0x23), 0x24)
                
                if (cond:30_1)
                    goto label_1400dcc6e
                
                goto label_1400dc540
            
        label_1400dcc64:
            zmm10 = zmm0
            
            if (cond:29_1)
            label_1400dc540:
                zmm12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x23), 0x24)
                
                if (cond:31_1)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm13, zmm3, 0x23), 0x24)
            else
            label_1400dcc6e:
                zmm12 = zmm2
                
                if (not(cond:32_1))
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm13, zmm3, 0x23), 0x24)
            
            zmm0 = var_238_1
            zmm7 = _mm_and_ps(_mm_add_ps(temp0_191, zmm0), temp0_192)
            zmm13 = zmm3
            var_238_1 = _mm_or_ps(_mm_andnot_ps(temp0_192, zmm0), zmm7)
        
        rsi = zx.q(rsi.d + 4)
    while (rsi.d s< i)
    
    r14 = arg7
    r10_4 = arg6
    
    if (rsi.d s< arg8)
        goto label_1400dccf6
    
    zmm4 = var_238_1
float temp0_416[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
float temp0_417[0x4] = _mm_shuffle_ps(temp0_416, temp0_416, 0xe5)
temp0_417[0] = temp0_417[0] + temp0_416[0]
float temp0_419[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm12, zmm12[0].q), zmm12)
float temp0_420[0x4] = _mm_shuffle_ps(temp0_419, temp0_419, 0xe5)
temp0_420[0] = temp0_420[0] + temp0_419[0]
float temp0_421[0x4] = _mm_unpacklo_ps(temp0_417, temp0_420[0].q)
float temp0_423[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm13, zmm13[0].q), zmm13)
float temp0_424[0x4] = _mm_shuffle_ps(temp0_423, temp0_423, 0xe5)
temp0_424[0] = temp0_424[0] + temp0_423[0]
float temp0_425[0x4] =
    _mm_add_ps(zx.o(*r14)[0].q | r14[1].d[0].q << 0x40, temp0_421[0].q | temp0_424[0].q << 0x40)
*r14 = temp0_425[0]
float temp0_426[0x4] = _mm_shuffle_ps(temp0_425, temp0_425, 0xe5)
temp0_425[0].q = temp0_425 u>> 0x40
*(r14 + 4) = temp0_426[0]
r14[1].d = temp0_425[0]
float result[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm4, 0xee), zmm4)
float temp0_428[0x4] = _mm_shuffle_ps(result, result, 0xe5)
temp0_428[0] = temp0_428[0] + result[0]
temp0_428[0] = temp0_428[0] f+ *r10_4
*r10_4 = temp0_428[0]
return result
