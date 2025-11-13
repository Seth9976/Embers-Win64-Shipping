// 函数: sub_1400b2240
// 地址: 0x1400b2240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_37[0x4]
float result_40[0x4] = result_37
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float var_78[0x4] = arg5
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm8[0x4]
float var_b8[0x4] = zmm8
float result_41[0x4]
float result_42[0x4] = result_41
uint32_t result[0x4] = arg7
int32_t i = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
int32_t* r10_4
int64_t* r11
float result_7[0x4]
float result_36[0x4]
uint32_t result_29[0x4]
float var_2b8[0x4]
float result_1[0x4]
float result_19[0x4]
float result_2[0x4]
float result_3[0x4]
uint64_t rbx
float result_10[0x4]
uint32_t result_11[0x4]
float result_28[0x4]
float zmm4[0x4]
float result_35[0x4]

if (i s<= 0)
    rbx = 0
    result_7 = zx.o(0)
    result_36 = zx.o(0)
    result_29 = zx.o(0)
    var_2b8 = zx.o(0)
    r11 = arg9
    r10_4 = arg8
    
    if (0 s< arg10)
    label_1400b2bcc:
        float result_9[0x4] = result_7
        result = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
        zmm11 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), result)
        int64_t rsi_3 = sx.q(rbx.d << 2)
        uint32_t temp0_191 = _mm_movemask_ps(zmm11)
        uint32_t result_32[0x4] = result_29
        float result_39[0x4] = result_36
        
        if ((zx.q(temp0_191) & 0xfffffff9) != 9)
            if ((temp0_191.b & 1) != 0)
                result_19[0] = *(arg6 + rsi_3)
            
            if ((temp0_191.b & 2) == 0)
                if ((temp0_191.b & 4) != 0)
                    goto label_1400b3115
                
                goto label_1400b2c73
            
            result_19[1] = *(arg6 + rsi_3 + 4)
            
            if ((temp0_191.b & 4) == 0)
            label_1400b2c73:
                
                if ((temp0_191.b & 8) != 0)
                    result_19[3] = *(arg6 + rsi_3 + 0xc)
            else
            label_1400b3115:
                result_19[2] = *(arg6 + rsi_3 + 8)
                
                if ((temp0_191.b & 8) != 0)
                    result_19[3] = *(arg6 + rsi_3 + 0xc)
            
            result_10 = result_19
        else
            result_10 = *(arg6 + rsi_3)
        
        result_10 = __pmulld_xmmdq_memdq(result_10, data_142fc95c0) & zmm11
        int64_t rax_26 = sx.q(result_10[0])
        int64_t rbx_2 = arg4 + (rax_26 << 2)
        result = *(arg4 + (rax_26 << 2))
        int64_t rbp_12 = sx.q(_mm_extract_epi32(result_10, 1))
        int64_t r14_1 = arg4 + (rbp_12 << 2)
        int64_t rax_28 = sx.q(_mm_extract_epi32(result_10, 2))
        int64_t r15_1 = arg4 + (rax_28 << 2)
        int64_t rsi_5 = sx.q(_mm_extract_epi32(result_10, 3))
        int64_t rdi_7 = arg4 + (rsi_5 << 2)
        result = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(result, *(arg4 + (rbp_12 << 2)), 0x10), 
                *(arg4 + (rax_28 << 2)), 0x20), 
            *(arg4 + (rsi_5 << 2)), 0x30)
        result_11 = data_142fc95e0 & zmm11
        zmm8 = *(zx.q(result_11[0]) + rbx_2)
        uint64_t rax_30 = zx.q(_mm_extract_epi32(result_11, 1))
        uint64_t rbp_13 = zx.q(_mm_extract_epi32(result_11, 2))
        uint64_t rsi_6 = zx.q(_mm_extract_epi32(result_11, 3))
        float temp0_204[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rax_30 + r14_1), 0x10), 
                *(rbp_13 + r15_1), 0x20), 
            *(rsi_6 + rdi_7), 0x30)
        result_11 = data_142fc95f0 & zmm11
        result_41 = *(zx.q(result_11[0]) + rbx_2)
        uint64_t rax_32 = zx.q(_mm_extract_epi32(result_11, 1))
        uint64_t rbp_14 = zx.q(_mm_extract_epi32(result_11, 2))
        uint64_t rbx_3 = zx.q(_mm_extract_epi32(result_11, 3))
        float temp0_210[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(result_41, *(rax_32 + r14_1), 0x10), *(rbp_14 + r15_1), 
                0x20), 
            *(rbx_3 + rdi_7), 0x30)
        uint32_t result_6[0x4] = result
        float var_e8_1[0x4] = zx.o(0)
        result_7 = *(arg3 + 0xc)
        float result_15[0x4] = _mm_shuffle_ps(result_7, result_7, 0)
        float result_21[0x4] = result_15
        result_2 = result_15
        float result_24[0x4] = result_15
        float result_26[0x4] = result_15
        zmm4 = *arg3
        result_10 = *(arg3 + 4)
        result_28 = *(arg3 + 8)
        float temp0_211[0x4] = _mm_shuffle_ps(result_10, result_10, 0)
        float temp0_212[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_213[0x4] = _mm_mul_ps(temp0_204, temp0_212)
        float temp0_214[0x4] = _mm_mul_ps(temp0_212, temp0_210)
        float temp0_215[0x4] = _mm_mul_ps(temp0_210, temp0_211)
        float temp0_216[0x4] = _mm_shuffle_ps(result_28, result_28, 0)
        float temp0_217[0x4] = _mm_mul_ps(temp0_211, result)
        result = _mm_mul_ps(result, temp0_216)
        result_11 = _mm_mul_ps(zx.o(0), result_15)
        float temp0_221[0x4] = _mm_sub_ps(temp0_215, _mm_mul_ps(temp0_216, temp0_204))
        result = _mm_sub_ps(result, temp0_214)
        float temp0_223[0x4] = _mm_sub_ps(temp0_213, temp0_217)
        result_11 = _mm_sub_ps(result_11, result_11)
        float result_16[0x4] = _mm_add_ps(temp0_221, temp0_221)
        result = _mm_add_ps(result, result)
        float temp0_226[0x4] = _mm_add_ps(temp0_223, temp0_223)
        result_11 = _mm_add_ps(result_11, result_11)
        result_3 = result_16
        uint32_t result_4[0x4] = result
        float var_1a8_3[0x4] = temp0_226
        uint32_t result_27[0x4] = result_11
        result_11 = _mm_mul_ps(result_11, result_15)
        float temp0_229[0x4] = _mm_mul_ps(result_15, result_16)
        float temp0_230[0x4] = _mm_mul_ps(result_15, result)
        float temp0_231[0x4] = _mm_mul_ps(result_15, temp0_226)
        float result_17[0x4] = __addps_xmmps_memps(temp0_229, result_6)
        float result_30[0x4] = __addps_xmmps_memps(temp0_230, temp0_204)
        float temp0_232[0x4] = __addps_xmmps_memps(temp0_231, temp0_210)
        result_11 = __addps_xmmps_memps(result_11, var_e8_1)
        result_1 = result_17
        uint32_t result_18[0x4] = result_11
        result_28 = *arg3
        zmm4 = *(arg3 + 4)
        result_10 = *(arg3 + 8)
        float temp0_234[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_235[0x4] = _mm_shuffle_ps(result_28, result_28, 0)
        result_11 = _mm_mul_ps(result, temp0_235)
        float temp0_237[0x4] = _mm_mul_ps(temp0_235, temp0_226)
        float temp0_238[0x4] = _mm_mul_ps(temp0_226, temp0_234)
        float temp0_239[0x4] = _mm_shuffle_ps(result_10, result_10, 0)
        float temp0_240[0x4] = _mm_mul_ps(temp0_234, result_16)
        float temp0_241[0x4] = _mm_mul_ps(result_16, temp0_239)
        float temp0_243[0x4] = _mm_sub_ps(temp0_238, _mm_mul_ps(temp0_239, result))
        float temp0_244[0x4] = _mm_sub_ps(temp0_241, temp0_237)
        result_11 = _mm_sub_ps(result_11, temp0_240)
        float temp0_246[0x4] = _mm_add_ps(temp0_243, result_17)
        float temp0_247[0x4] = _mm_add_ps(temp0_244, result_30)
        result_11 = _mm_add_ps(result_11, temp0_232)
        result_7 = arg3[1].d
        result_29 = *(arg3 + 0x14)
        float temp0_250[0x4] = _mm_add_ps(_mm_shuffle_ps(result_7, result_7, 0), temp0_246)
        result_29 = _mm_add_ps(_mm_shuffle_ps(result_29, result_29, 0), temp0_247)
        result_28 = *(arg3 + 0x18)
        float temp0_254[0x4] = _mm_add_ps(_mm_shuffle_ps(result_28, result_28, 0), result_11)
        zmm8 = *arg2
        result_36 = *(arg2 + 4)
        float temp0_255[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm14 = _mm_sub_ps(temp0_250, temp0_255)
        float temp0_257[0x4] = _mm_shuffle_ps(result_36, result_36, 0)
        result = _mm_sub_ps(result_29, temp0_257)
        result_37 = *(arg2 + 8)
        float temp0_259[0x4] = _mm_shuffle_ps(result_37, result_37, 0)
        float temp0_260[0x4] = _mm_sub_ps(temp0_254, temp0_259)
        float var_218[0x4] = zmm14
        float result_5[0x4] = result
        result_2 = result
        float var_1f8_1[0x4] = temp0_260
        result_11 = *arg1
        result_41 = (*arg1)[1]
        result_11 = _mm_shuffle_ps(result_11, result_11, 0)
        result = _mm_sub_ps(result_11, temp0_250)
        float temp0_263[0x4] = _mm_shuffle_ps(result_41, result_41, 0)
        float temp0_264[0x4] = _mm_sub_ps(temp0_263, result_29)
        result_35 = (*arg1)[2]
        float temp0_265[0x4] = _mm_shuffle_ps(result_35, result_35, 0)
        zmm4 = _mm_and_ps(_mm_cmpeq_ps(temp0_250, temp0_255, 6), zmm11)
        char temp0_269 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm11))
        float temp0_270[0x4] = _mm_sub_ps(temp0_265, temp0_254)
        result_3 = result
        float var_1b8_2[0x4] = temp0_264
        float var_1a8_4[0x4] = temp0_270
        uint32_t result_33[0x4] = result_29
        result_10 = _mm_cmpeq_ps(temp0_250, temp0_255, 2)
        
        if (temp0_269 != 0xf)
            float temp0_272[0x4] = _mm_cmpeq_ps(result_29, temp0_257, 2)
            result_10 = _mm_and_ps(_mm_and_ps(result_10, zmm11), temp0_272)
            zmm4 = _mm_andnot_ps(result_10, zmm11)
        
        result_29 = result_32
        result_36 = result_39
        result_7 = result
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm11)) != 0xf)
            float temp0_278[0x4] = _mm_cmpeq_ps(temp0_254, temp0_259, 2)
            result_10 = _mm_and_ps(_mm_and_ps(result_10, zmm11), temp0_278)
            zmm4 = result_10 ^ zmm11
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm11)) == 0xf)
            zmm4 = temp0_270
        else
            result_10 = _mm_and_ps(result_10, zmm11)
            result = _mm_cmpeq_ps(result_11, temp0_250, 2)
            result_11 = _mm_and_ps(_mm_cmpeq_ps(result_11, temp0_250, 6), result_10)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(result_11, result_10)) != 0xf)
                float temp0_289[0x4] = __cmpps_xmmps_memps_immb(temp0_263, result_33, 2)
                result = _mm_and_ps(_mm_and_ps(result, result_10), temp0_289)
                result_11 = result ^ result_10
            
            zmm4 = temp0_270
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(result_11, result_10)) != 0xf)
                float temp0_294[0x4] = __cmpps_xmmps_memps_immb(temp0_265, temp0_254, 2)
                result = _mm_and_ps(_mm_and_ps(result, result_10), temp0_294)
            
            result_10 = _mm_and_ps(result_10, result)
        
        if (_mm_movemask_ps(_mm_and_ps(result_10, zmm11)) != 0)
            result_7 = _mm_max_ps(result_7, zmm14)
            float temp0_301[0x4] = __maxps_xmmps_memps(temp0_264, result_5)
            float temp0_302[0x4] = __maxps_xmmps_memps(zmm4, temp0_260)
            float temp0_303[0x4] = _mm_cmpeq_ps(temp0_301, result_7, 1)
            uint32_t temp0_304[0x4] = _mm_and_ps(result_10, temp0_303)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_304, zmm11)) != 0)
                uint32_t temp0_308[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_302, result_7, 5), temp0_304)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_308, zmm11)) != 0)
                    result_7 = _mm_blendv_ps(result_7, temp0_302, temp0_308)
            
            result_35 = _mm_andnot_ps(temp0_303, result_10)
            
            if (_mm_movemask_ps(_mm_and_ps(result_35, zmm11)) != 0)
                result_11 = _mm_cmpeq_ps(temp0_302, temp0_301, 1)
                uint32_t temp0_316[0x4] = _mm_and_ps(result_35, result_11)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_316, zmm11)) != 0)
                    result_7 = _mm_blendv_ps(result_7, temp0_301, temp0_316)
                
                uint32_t temp0_320[0x4] = _mm_andnot_ps(result_11, result_35)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_320, zmm11)) != 0)
                    result_7 = _mm_blendv_ps(result_7, temp0_302, temp0_320)
        
        zmm8 = var_2b8
        arg5 = arg7
        uint32_t temp0_324[0x4] = _mm_andnot_ps(result_10, zmm11)
        
        if (_mm_movemask_ps(temp0_324) != 0)
            result_10 ^= _mm_cmpeq_epi32(temp0_324, temp0_324)
            int64_t rax_47 = 0
            result = data_142d3f780
            
            while (true)
                result_11 = _mm_cmpeq_ps(zx.o(0), zmm14, 1)
                zmm4 = _mm_and_ps(result_11, result_10)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm11)) != 0)
                    char temp0_331 = _mm_movemask_ps(zmm4)
                    
                    if ((temp0_331 & 1) == 0)
                        if ((temp0_331 & 2) != 0)
                            goto label_1400b32d0
                        
                        goto label_1400b31ee
                    
                    *(&result_1 + rax_47) = zmm14[0]
                    
                    if ((temp0_331 & 2) != 0)
                    label_1400b32d0:
                        *(&result_1[1] + rax_47) = __extractps_memd_xmmps_immb(zmm14, 1)
                        
                        if ((temp0_331 & 4) == 0)
                            goto label_1400b31f7
                        
                        goto label_1400b32e2
                    
                label_1400b31ee:
                    
                    if ((temp0_331 & 4) != 0)
                    label_1400b32e2:
                        *(&result_1[2] + rax_47) = __extractps_memd_xmmps_immb(zmm14, 2)
                        
                        if ((temp0_331 & 8) != 0)
                            *(&result_1[3] + rax_47) = __extractps_memd_xmmps_immb(zmm14, 3)
                    else
                    label_1400b31f7:
                        
                        if ((temp0_331 & 8) != 0)
                            *(&result_1[3] + rax_47) = __extractps_memd_xmmps_immb(zmm14, 3)
                
                uint32_t temp0_333[0x4] = _mm_andnot_ps(result_11, result_10)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_333, zmm11)) != 0)
                    zmm4 = *(&result_3 + rax_47)
                    float temp0_336[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                    result_41 = _mm_and_ps(temp0_333, temp0_336)
                    
                    if (_mm_movemask_ps(_mm_and_ps(result_41, zmm11)) != 0)
                        zmm4 ^= result
                        char temp0_340 = _mm_movemask_ps(result_41)
                        
                        if ((temp0_340 & 1) == 0)
                            if ((temp0_340 & 2) != 0)
                                goto label_1400b3308
                            
                            goto label_1400b3255
                        
                        *(&result_1 + rax_47) = zmm4[0]
                        
                        if ((temp0_340 & 2) != 0)
                        label_1400b3308:
                            *(&result_1[1] + rax_47) = __extractps_memd_xmmps_immb(zmm4, 1)
                            
                            if ((temp0_340 & 4) == 0)
                                goto label_1400b325e
                            
                            goto label_1400b3319
                        
                    label_1400b3255:
                        
                        if ((temp0_340 & 4) != 0)
                        label_1400b3319:
                            *(&result_1[2] + rax_47) = __extractps_memd_xmmps_immb(zmm4, 2)
                            
                            if ((temp0_340 & 8) != 0)
                                *(&result_1[3] + rax_47) = __extractps_memd_xmmps_immb(zmm4, 3)
                        else
                        label_1400b325e:
                            
                            if ((temp0_340 & 8) != 0)
                                *(&result_1[3] + rax_47) = __extractps_memd_xmmps_immb(zmm4, 3)
                    
                    result_35 = _mm_andnot_ps(temp0_336, temp0_333)
                    
                    if (_mm_movemask_ps(_mm_and_ps(result_35, zmm11)) != 0)
                        char temp0_345 = _mm_movemask_ps(result_35)
                        
                        if ((temp0_345 & 1) == 0)
                            if ((temp0_345 & 2) != 0)
                                goto label_1400b3340
                            
                            goto label_1400b3291
                        
                        *(&result_1 + rax_47) = 0
                        
                        if ((temp0_345 & 2) != 0)
                        label_1400b3340:
                            *(&result_1[1] + rax_47) = 0
                            
                            if ((temp0_345 & 4) == 0)
                                goto label_1400b329a
                            
                            goto label_1400b3351
                        
                    label_1400b3291:
                        
                        if ((temp0_345 & 4) != 0)
                        label_1400b3351:
                            *(&result_1[2] + rax_47) = 0
                            
                            if ((temp0_345 & 8) != 0)
                                *(&result_1[3] + rax_47) = 0
                        else
                        label_1400b329a:
                            
                            if ((temp0_345 & 8) != 0)
                                *(&result_1[3] + rax_47) = 0
                
                if (rax_47 == 0x20)
                    break
                
                zmm14 = *(&result_2 + rax_47)
                rax_47 += 0x10
            
            result = result_1
            result_11 = result_30
            float temp0_351[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(result, result))
            result_11 = _mm_add_ps(_mm_mul_ps(result_11, result_11), temp0_351)
            float temp0_355[0x4] = _mm_add_ps(_mm_mul_ps(temp0_232, temp0_232), result_11)
            result = _mm_rsqrt_ps(temp0_355)
            float temp0_358[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_355, result), result)
            result_11 = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_358), result), data_142d3f640)
            result = _mm_rcp_ps(result_11)
            result_11 = _mm_mul_ps(result_11, result)
            result_7 = _mm_blendv_ps(result_7, 
                _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, result_11), result), result_10)
        
        float temp0_368[0x4] = _mm_sub_ps(result_7, _mm_shuffle_ps(arg5, arg5, 0))
        uint32_t temp0_370[0x4] =
            _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_368, data_142fc95d0, 1), zmm11)
        char temp0_371 = _mm_movemask_ps(temp0_370)
        
        if (temp0_371 == 0)
            result_7 = result_9
        else
            float temp0_372[0x4] = _mm_mul_ps(temp0_250, temp0_368)
            result_11 = result_29
            char temp4_1 = temp0_371 & 1
            
            if (temp4_1 != 0)
                result_11 = result_29
                result_11[0] = result_11[0] f+ temp0_372[0]
            
            float temp0_373[0x4] = _mm_mul_ps(result_33, temp0_368)
            result_28 = result_36
            
            if (temp4_1 == 0)
                result_35 = _mm_mul_ps(temp0_254, temp0_368)
                result_10 = result_9
                
                if (temp4_1 != 0)
                    goto label_1400b346a
                
                goto label_1400b3420
            
            result_28 = result_36
            result_28[0] = result_28[0] + temp0_373[0]
            result_35 = _mm_mul_ps(temp0_254, temp0_368)
            result_10 = result_9
            bool cond:19_1
            bool cond:20_1
            bool cond:21_1
            bool cond:22_1
            
            if (temp4_1 != 0)
            label_1400b346a:
                result_10 = result_9
                result_10[0] = result_10[0] + result_35[0]
                result_29 = _mm_add_ps(result_29, temp0_372)
                char temp8_1 = temp0_371 & 2
                cond:19_1 = temp8_1 == 0
                cond:20_1 = temp8_1 != 0
                cond:21_1 = temp8_1 != 0
                cond:22_1 = temp8_1 == 0
                
                if (temp8_1 == 0)
                    goto label_1400b3428
                
                goto label_1400b3479
            
        label_1400b3420:
            result_29 = _mm_add_ps(result_29, temp0_372)
            char temp7_1 = temp0_371 & 2
            cond:19_1 = temp7_1 == 0
            cond:20_1 = temp7_1 != 0
            cond:21_1 = temp7_1 != 0
            cond:22_1 = temp7_1 == 0
            
            if (temp7_1 == 0)
            label_1400b3428:
                result_36 = _mm_add_ps(result_36, temp0_373)
                
                if (cond:20_1)
                    goto label_1400b3486
                
                goto label_1400b342e
            
        label_1400b3479:
            result_11 = _mm_blend_ps(result_11, result_29, 2)
            result_36 = _mm_add_ps(result_36, temp0_373)
            
            if (not(cond:19_1))
            label_1400b3486:
                result_28 = _mm_blend_ps(result_28, result_36, 2)
                zmm4 = _mm_add_ps(result_9, result_35)
                
                if (cond:22_1)
                    goto label_1400b3433
                
                goto label_1400b3492
            
        label_1400b342e:
            zmm4 = _mm_add_ps(result_9, result_35)
            bool cond:27_1
            bool cond:28_1
            bool cond:29_1
            bool cond:30_1
            
            if (not(cond:21_1))
            label_1400b3433:
                char temp12_1 = temp0_371 & 4
                cond:27_1 = temp12_1 != 0
                cond:28_1 = temp12_1 == 0
                cond:29_1 = temp12_1 == 0
                cond:30_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                    goto label_1400b349c
                
                goto label_1400b3437
            
        label_1400b3492:
            result_10 = _mm_blend_ps(result_10, zmm4, 2)
            char temp11_1 = temp0_371 & 4
            cond:27_1 = temp11_1 != 0
            cond:28_1 = temp11_1 == 0
            cond:29_1 = temp11_1 == 0
            cond:30_1 = temp11_1 != 0
            
            if (temp11_1 != 0)
            label_1400b349c:
                result_11 = _mm_blend_ps(result_11, result_29, 4)
                
                if (cond:28_1)
                    goto label_1400b3439
                
                goto label_1400b34a5
            
        label_1400b3437:
            
            if (not(cond:27_1))
            label_1400b3439:
                
                if (cond:30_1)
                    goto label_1400b34ae
                
                goto label_1400b343b
            
        label_1400b34a5:
            result_28 = _mm_blend_ps(result_28, result_36, 4)
            bool cond:31_1
            bool cond:32_1
            bool cond:33_1
            bool cond:34_1
            
            if (not(cond:29_1))
            label_1400b34ae:
                result_10 = _mm_blend_ps(result_10, zmm4, 4)
                char temp14_1 = temp0_371 & 8
                cond:31_1 = temp14_1 == 0
                cond:32_1 = temp14_1 != 0
                cond:33_1 = temp14_1 != 0
                cond:34_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                    goto label_1400b343f
                
                goto label_1400b34b8
            
        label_1400b343b:
            char temp13_1 = temp0_371 & 8
            cond:31_1 = temp13_1 == 0
            cond:32_1 = temp13_1 != 0
            cond:33_1 = temp13_1 != 0
            cond:34_1 = temp13_1 == 0
            
            if (temp13_1 != 0)
            label_1400b343f:
                result_29 = _mm_blend_ps(result_29, result_11, 7)
                
                if (cond:32_1)
                    goto label_1400b34be
                
                goto label_1400b3448
            
        label_1400b34b8:
            result_29 = result_11
            
            if (cond:31_1)
            label_1400b3448:
                result_36 = result_28
                
                if (cond:33_1)
                    result_10 = _mm_blend_ps(result_10, zmm4, 8)
            else
            label_1400b34be:
                result_36 = _mm_blend_ps(result_36, result_28, 7)
                
                if (not(cond:34_1))
                    result_10 = _mm_blend_ps(result_10, zmm4, 8)
            
            zmm8 = _mm_blendv_ps(zmm8, _mm_add_ps(temp0_368, zmm8), temp0_370)
            result_7 = result_10
    else
        zmm8 = var_2b8
else
    zmm11 = *(arg3 + 0xc)
    float result_12[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    float var_228_1[0x4] = *arg3
    float var_1d8_1[0x4] = *(arg3 + 4)
    float var_238_1[0x4] = *(arg3 + 8)
    result_10 = *arg2
    result_11 = *(arg2 + 4)
    float temp0_1[0x4] = _mm_shuffle_ps(result_10, result_10, 0)
    uint32_t var_188_1[0x4] = _mm_shuffle_ps(result_11, result_11, 0)
    result_10 = *(arg2 + 8)
    float temp0_3[0x4] = _mm_shuffle_ps(result_10, result_10, 0)
    result_10 = *arg1
    result_11 = (*arg1)[1]
    float temp0_4[0x4] = _mm_shuffle_ps(result_10, result_10, 0)
    uint32_t var_148_1[0x4] = _mm_shuffle_ps(result_11, result_11, 0)
    result_10 = (*arg1)[2]
    float temp0_6[0x4] = _mm_shuffle_ps(result_10, result_10, 0)
    uint32_t var_168_1[0x4] = _mm_shuffle_ps(result, result, 0)
    rbx = 0
    var_2b8 = zx.o(0)
    
    do
        float result_8[0x4]
        __builtin_memset(&result_8, 0, 0x30)
        result = __pmulld_xmmdq_memdq(*(arg6 + sx.q((rbx << 2).d)), data_142fc95c0)
        int64_t rbp_4 = sx.q(result[0])
        int64_t rdi_2 = sx.q(_mm_extract_epi32(result, 1))
        int64_t rax_2 = sx.q(_mm_extract_epi32(result, 2))
        int64_t rsi_2 = sx.q(_mm_extract_epi32(result, 3))
        result_41 = *(arg4 + (rbp_4 << 2) + 4)
        float result_13[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(arg4 + (rbp_4 << 2)), *(arg4 + (rdi_2 << 2)), 0x10), 
                *(arg4 + (rax_2 << 2)), 0x20), 
            *(arg4 + (rsi_2 << 2)), 0x30)
        float temp0_16[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(result_41, *(arg4 + (rdi_2 << 2) + 4), 0x10), 
                *(arg4 + (rax_2 << 2) + 4), 0x20), 
            *(arg4 + (rsi_2 << 2) + 4), 0x30)
        float temp0_19[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(arg4 + (rbp_4 << 2) + 8), *(arg4 + (rdi_2 << 2) + 8), 
                    0x10), 
                *(arg4 + (rax_2 << 2) + 8), 0x20), 
            *(arg4 + (rsi_2 << 2) + 8), 0x30)
        result_3 = result_13
        int128_t var_198_1 = zx.o(0)
        float result_20[0x4] = result_12
        result_2 = result_12
        float result_22[0x4] = result_12
        float temp0_20[0x4] = _mm_shuffle_ps(var_1d8_1, var_1d8_1, 0)
        result = _mm_mul_ps(temp0_19, temp0_20)
        float temp0_22[0x4] = _mm_shuffle_ps(var_238_1, var_238_1, 0)
        result_11 = _mm_mul_ps(result_13, temp0_22)
        float temp0_24[0x4] = _mm_shuffle_ps(var_228_1, var_228_1, 0)
        float temp0_25[0x4] = _mm_mul_ps(temp0_16, temp0_24)
        result = _mm_sub_ps(result, _mm_mul_ps(temp0_16, temp0_22))
        result_11 = _mm_sub_ps(result_11, _mm_mul_ps(temp0_19, temp0_24))
        float temp0_31[0x4] = _mm_sub_ps(temp0_25, _mm_mul_ps(result_13, temp0_20))
        result = _mm_add_ps(result, result)
        result_11 = _mm_add_ps(result_11, result_11)
        float temp0_34[0x4] = _mm_add_ps(temp0_31, temp0_31)
        float temp0_35[0x4] = _mm_mul_ps(result_12, result_11)
        float temp0_36[0x4] = _mm_mul_ps(result, temp0_22)
        result_10 = result_11
        result_11 = _mm_mul_ps(result_11, temp0_22)
        float temp0_42[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_34, temp0_20), result_11), 
            __addps_xmmps_memps(_mm_mul_ps(result_12, result), result_3))
        result_11 = _mm_mul_ps(result_12, temp0_34)
        float temp0_44[0x4] = __addps_xmmps_memps(temp0_35, temp0_16)
        result_11 = __addps_xmmps_memps(result_11, temp0_19)
        float result_25[0x4] = result_12
        float temp0_46[0x4] = _mm_mul_ps(result_10, temp0_24)
        float temp0_49[0x4] =
            _mm_add_ps(_mm_sub_ps(temp0_36, _mm_mul_ps(temp0_34, temp0_24)), temp0_44)
        float temp0_52[0x4] =
            _mm_add_ps(_mm_sub_ps(temp0_46, _mm_mul_ps(result, temp0_20)), result_11)
        zmm8 = arg3[1].d
        zmm14 = *(arg3 + 0x14)
        float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_42)
        float temp0_56[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_49)
        zmm13 = *(arg3 + 0x18)
        float temp0_58[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_52)
        result_37 = _mm_sub_ps(temp0_54, temp0_1)
        result = __subps_xmmps_memps(temp0_56, var_188_1)
        result_11 = __subps_xmmps_memps(temp0_58, temp0_3)
        result_19 = result_37
        result_2 = result
        uint32_t result_23[0x4] = result_11
        float result_14[0x4] = _mm_sub_ps(temp0_4, temp0_54)
        result_29 = _mm_sub_ps(var_148_1, temp0_56)
        char temp0_64 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_54, temp0_1, 6))
        float temp0_65[0x4] = _mm_sub_ps(temp0_6, temp0_58)
        result_3 = result_14
        uint32_t result_34[0x4] = result_29
        float var_1a8_2[0x4] = temp0_65
        
        if (temp0_64 != 0xf)
            float temp0_66[0x4] = _mm_cmpeq_ps(temp0_54, temp0_1, 2)
            zmm4 = *(arg2 + 4)
            result_28 =
                _mm_and_ps(_mm_cmpeq_ps(temp0_56, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_66)
            result_41 = _mm_cmpeq_epi32(temp0_44, temp0_44)
            
            if (_mm_movemask_ps(result_28 ^ result_41) == 0xf)
                goto label_1400b279d
            
            zmm4 = *(arg2 + 8)
            result_10 =
                _mm_and_ps(_mm_cmpeq_ps(temp0_58, _mm_shuffle_ps(zmm4, zmm4, 0), 2), result_28)
            result_28 = result_10 ^ result_41
            
            if (_mm_movemask_ps(result_28) != 0xf)
                result_41 = *arg1
                float temp0_76[0x4] = _mm_shuffle_ps(result_41, result_41, 0)
                result_28 = _mm_and_ps(_mm_cmpeq_ps(temp0_76, temp0_54, 6), result_10)
                char temp0_80 = _mm_movemask_ps(_mm_cmpeq_epi32(result_28, result_10))
                result_41 = _mm_cmpeq_ps(temp0_76, temp0_54, 2)
                
                if (temp0_80 != 0xf)
                    result_28 = (*arg1)[1]
                    float temp0_83[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(result_28, result_28, 0), temp0_56, 2)
                    result_41 = _mm_and_ps(_mm_and_ps(result_41, result_10), temp0_83)
                    result_28 = _mm_andnot_ps(result_41, result_10)
                
                result_28 = _mm_cmpeq_epi32(result_28, result_10)
                
                if (_mm_movemask_ps(result_28) != 0xf)
                    result_28 = (*arg1)[2]
                    result_28 = _mm_cmpeq_ps(_mm_shuffle_ps(result_28, result_28, 0), temp0_58, 2)
                    result_41 = _mm_and_ps(_mm_and_ps(result_41, result_10), result_28)
                
                result_10 = _mm_and_ps(result_10, result_41)
            
            if (_mm_movemask_ps(result_10) == 0)
                goto label_1400b27b1
            
            goto label_1400b26c7
        
        result_28 = _mm_cmpeq_ps(temp0_54, temp0_1, 2)
    label_1400b279d:
        result_28 = _mm_srai_epi32(_mm_slli_epi32(result_28, 0x1f), 0x1f)
        result_10 = result_28
        float result_38[0x4]
        uint32_t result_31[0x4]
        
        if (_mm_movemask_ps(result_10) != 0)
        label_1400b26c7:
            float temp0_95[0x4] = _mm_max_ps(result_14, result_37)
            result_29 = _mm_max_ps(result_29, result)
            float temp0_97[0x4] = _mm_max_ps(temp0_65, result_11)
            float temp0_98[0x4] = _mm_cmpeq_ps(result_29, temp0_95, 1)
            result_28 = _mm_and_ps(result_10, temp0_98)
            
            if (_mm_movemask_ps(result_28) != 0)
                result_11 = _mm_cmpeq_ps(temp0_97, temp0_95, 1)
                uint32_t temp0_102[0x4] = _mm_and_ps(result_28, result_11)
                
                if (_mm_movemask_ps(temp0_102) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_95, temp0_102)
                
                result_35 = data_142d3f780
                uint32_t temp0_105[0x4] = _mm_andnot_ps(result_11, result_28)
                
                if (_mm_movemask_ps(temp0_105) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_97, temp0_105)
                
                result_41 = _mm_andnot_ps(temp0_98, result_10)
                
                if (_mm_movemask_ps(result_41) == 0)
                    goto label_1400b27f5
                
                goto label_1400b2733
            
            result_35 = data_142d3f780
            result_41 = _mm_andnot_ps(temp0_98, result_10)
            
            if (_mm_movemask_ps(result_41) != 0)
            label_1400b2733:
                result_11 = _mm_cmpeq_ps(temp0_97, result_29, 1)
                uint32_t temp0_111[0x4] = _mm_and_ps(result_41, result_11)
                uint32_t temp0_112 = _mm_movemask_ps(temp0_111)
                result_28 = _mm_cmpeq_epi32(result_28, result_28)
                
                if (temp0_112 != 0)
                    arg5 = _mm_blendv_ps(arg5, result_29, temp0_111)
                
                result_7 = result_8
                uint32_t temp0_115[0x4] = _mm_andnot_ps(result_11, result_41)
                
                if (_mm_movemask_ps(temp0_115) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_97, temp0_115)
                
                result_29 = result_31
                result_36 = result_38
                result_10 ^= result_28
                
                if (_mm_movemask_ps(result_10) != 0)
                    goto label_1400b2818
            else
            label_1400b27f5:
                result_28 = _mm_cmpeq_epi32(result_28, result_28)
                result_29 = result_31
                result_36 = result_38
                result_7 = result_8
                result_10 ^= result_28
                
                if (_mm_movemask_ps(result_10) != 0)
                    goto label_1400b2818
        else
        label_1400b27b1:
            result_28 = _mm_cmpeq_epi32(result_28, result_28)
            result_29 = result_31
            result_36 = result_38
            result_7 = result_8
            result_35 = data_142d3f780
            result_10 ^= result_28
            
            if (_mm_movemask_ps(result_10) != 0)
            label_1400b2818:
                int64_t rdi_3 = 0
                
                while (true)
                    result = _mm_cmpeq_ps(zx.o(0), result_37, 1)
                    uint32_t temp0_131 = _mm_movemask_ps(_mm_and_ps(result, result_10))
                    
                    if (temp0_131 != 0)
                        char rbp_6 = temp0_131.b
                        
                        if ((rbp_6 & 1) == 0)
                            if ((rbp_6 & 2) != 0)
                                goto label_1400b2931
                            
                            goto label_1400b2858
                        
                        *(&result_1 + rdi_3) = result_37[0]
                        
                        if ((rbp_6 & 2) != 0)
                        label_1400b2931:
                            *(&result_1[1] + rdi_3) = __extractps_memd_xmmps_immb(result_37, 1)
                            
                            if ((rbp_6 & 4) == 0)
                                goto label_1400b2862
                            
                            goto label_1400b2944
                        
                    label_1400b2858:
                        
                        if ((rbp_6 & 4) != 0)
                        label_1400b2944:
                            *(&result_1[2] + rdi_3) = __extractps_memd_xmmps_immb(result_37, 2)
                            
                            if ((rbp_6 & 8) != 0)
                                *(&result_1[3] + rdi_3) = __extractps_memd_xmmps_immb(result_37, 3)
                        else
                        label_1400b2862:
                            
                            if ((rbp_6 & 8) != 0)
                                *(&result_1[3] + rdi_3) = __extractps_memd_xmmps_immb(result_37, 3)
                    
                    uint32_t temp0_133[0x4] = _mm_andnot_ps(result, result_10)
                    
                    if (_mm_movemask_ps(temp0_133) != 0)
                        result_28 = *(&result_3 + rdi_3)
                        result_11 = _mm_cmpeq_ps(zx.o(0), result_28, 1)
                        uint32_t temp0_137 = _mm_movemask_ps(_mm_and_ps(temp0_133, result_11))
                        
                        if (temp0_137 != 0)
                            result_28 ^= result_35
                            char rbp_8 = temp0_137.b
                            
                            if ((rbp_8 & 1) == 0)
                                if ((rbp_8 & 2) != 0)
                                    goto label_1400b296c
                                
                                goto label_1400b28b4
                            
                            *(&result_1 + rdi_3) = result_28[0]
                            
                            if ((rbp_8 & 2) != 0)
                            label_1400b296c:
                                *(&result_1[1] + rdi_3) = __extractps_memd_xmmps_immb(result_28, 1)
                                
                                if ((rbp_8 & 4) == 0)
                                    goto label_1400b28be
                                
                                goto label_1400b297e
                            
                        label_1400b28b4:
                            
                            if ((rbp_8 & 4) != 0)
                            label_1400b297e:
                                *(&result_1[2] + rdi_3) = __extractps_memd_xmmps_immb(result_28, 2)
                                
                                if ((rbp_8 & 8) != 0)
                                    *(&result_1[3] + rdi_3) =
                                        __extractps_memd_xmmps_immb(result_28, 3)
                            else
                            label_1400b28be:
                                
                                if ((rbp_8 & 8) != 0)
                                    *(&result_1[3] + rdi_3) =
                                        __extractps_memd_xmmps_immb(result_28, 3)
                        
                        uint32_t temp0_140 = _mm_movemask_ps(_mm_andnot_ps(result_11, temp0_133))
                        
                        if (temp0_140 != 0)
                            char rbp_10 = temp0_140.b
                            
                            if ((rbp_10 & 1) == 0)
                                if ((rbp_10 & 2) != 0)
                                    goto label_1400b29a7
                                
                                goto label_1400b28ec
                            
                            *(&result_1 + rdi_3) = 0
                            
                            if ((rbp_10 & 2) != 0)
                            label_1400b29a7:
                                *(&result_1[1] + rdi_3) = 0
                                
                                if ((rbp_10 & 4) == 0)
                                    goto label_1400b28f6
                                
                                goto label_1400b29b9
                            
                        label_1400b28ec:
                            
                            if ((rbp_10 & 4) != 0)
                            label_1400b29b9:
                                *(&result_1[2] + rdi_3) = 0
                                
                                if ((rbp_10 & 8) != 0)
                                    *(&result_1[3] + rdi_3) = 0
                            else
                            label_1400b28f6:
                                
                                if ((rbp_10 & 8) != 0)
                                    *(&result_1[3] + rdi_3) = 0
                    
                    if (rdi_3 == 0x20)
                        break
                    
                    result_37 = *(&result_2 + rdi_3)
                    rdi_3 += 0x10
                
                result = result_1
                result = __addps_xmmps_memps(_mm_mul_ps(result, result), data_142d8f750)
                uint32_t var_298[0x4]
                result_11 = _mm_add_ps(_mm_mul_ps(var_298, var_298), result)
                float var_288[0x4]
                float temp0_150[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), result_11)
                result = _mm_rsqrt_ps(temp0_150)
                float temp0_153[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_150, result), result)
                result_11 = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_153), result), data_142d3f640)
                result = _mm_rcp_ps(result_11)
                result_11 = _mm_mul_ps(result_11, result)
                arg5 = _mm_blendv_ps(arg5, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, result_11), result), result_10)
        float temp0_162[0x4] = __subps_xmmps_memps(arg5, var_168_1)
        result = __cmpps_xmmps_memps_immb(temp0_162, data_142fc95d0, 1)
        char temp0_164 = _mm_movemask_ps(result)
        
        if (temp0_164 != 0)
            float temp0_165[0x4] = _mm_mul_ps(temp0_54, temp0_162)
            result_35 = result_29
            char temp1_1 = temp0_164 & 1
            
            if (temp1_1 == 0)
                zmm14 = _mm_mul_ps(temp0_56, temp0_162)
                result_41 = result_36
                
                if (temp1_1 != 0)
                    goto label_1400b2af7
                
                goto label_1400b2a71
            
            result_35 = result_29
            result_35[0] = result_35[0] + temp0_165[0]
            zmm14 = _mm_mul_ps(temp0_56, temp0_162)
            result_41 = result_36
            
            if (temp1_1 != 0)
            label_1400b2af7:
                result_41 = result_36
                result_41[0] = result_41[0] + zmm14[0]
                zmm13 = _mm_mul_ps(temp0_58, temp0_162)
                result_11 = result_7
                
                if (temp1_1 == 0)
                    goto label_1400b2a7e
                
                goto label_1400b2b0d
            
        label_1400b2a71:
            zmm13 = _mm_mul_ps(temp0_58, temp0_162)
            result_11 = result_7
            bool cond:7_1
            bool cond:8_1
            bool cond:10_1
            bool cond:11_1
            
            if (temp1_1 == 0)
            label_1400b2a7e:
                result_29 = _mm_add_ps(result_29, temp0_165)
                char temp3_1 = temp0_164 & 2
                cond:7_1 = temp3_1 != 0
                cond:8_1 = temp3_1 == 0
                cond:10_1 = temp3_1 == 0
                cond:11_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_1400b2b23
                
                goto label_1400b2a8c
            
        label_1400b2b0d:
            result_11 = result_7
            result_11[0] = result_11[0] f+ zmm13[0]
            result_29 = _mm_add_ps(result_29, temp0_165)
            char temp2_1 = temp0_164 & 2
            cond:7_1 = temp2_1 != 0
            cond:8_1 = temp2_1 == 0
            cond:10_1 = temp2_1 == 0
            cond:11_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
            label_1400b2b23:
                result_35 = _mm_blend_ps(result_35, result_29, 2)
                result_36 = _mm_add_ps(result_36, zmm14)
                
                if (cond:8_1)
                    goto label_1400b2a96
                
                goto label_1400b2b34
            
        label_1400b2a8c:
            result_36 = _mm_add_ps(result_36, zmm14)
            
            if (not(cond:7_1))
            label_1400b2a96:
                result_7 = _mm_add_ps(result_7, zmm13)
                
                if (cond:11_1)
                    goto label_1400b2b45
                
                goto label_1400b2aa0
            
        label_1400b2b34:
            result_41 = _mm_blend_ps(result_41, result_36, 2)
            result_7 = _mm_add_ps(result_7, zmm13)
            bool cond:15_1
            bool cond:16_1
            bool cond:17_1
            bool cond:18_1
            
            if (not(cond:10_1))
            label_1400b2b45:
                result_11 = _mm_blend_ps(result_11, result_7, 2)
                char temp6_1 = temp0_164 & 4
                cond:15_1 = temp6_1 == 0
                cond:16_1 = temp6_1 != 0
                cond:17_1 = temp6_1 != 0
                cond:18_1 = temp6_1 == 0
                
                if (temp6_1 == 0)
                    goto label_1400b2aaa
                
                goto label_1400b2b55
            
        label_1400b2aa0:
            char temp5_1 = temp0_164 & 4
            cond:15_1 = temp5_1 == 0
            cond:16_1 = temp5_1 != 0
            cond:17_1 = temp5_1 != 0
            cond:18_1 = temp5_1 == 0
            
            if (temp5_1 != 0)
            label_1400b2b55:
                result_35 = _mm_blend_ps(result_35, result_29, 4)
                
                if (not(cond:15_1))
                label_1400b2b62:
                    result_41 = _mm_blend_ps(result_41, result_36, 4)
                    
                    if (cond:18_1)
                        goto label_1400b2ab6
                    
                    goto label_1400b2b6f
            else
            label_1400b2aaa:
                
                if (cond:16_1)
                    goto label_1400b2b62
            
            bool cond:23_1
            bool cond:24_1
            bool cond:25_1
            bool cond:26_1
            
            if (not(cond:17_1))
            label_1400b2ab6:
                char temp10_1 = temp0_164 & 8
                cond:23_1 = temp10_1 != 0
                cond:24_1 = temp10_1 == 0
                cond:25_1 = temp10_1 == 0
                cond:26_1 = temp10_1 != 0
                
                if (temp10_1 == 0)
                    goto label_1400b2b7f
                
                goto label_1400b2ac0
            
        label_1400b2b6f:
            result_11 = _mm_blend_ps(result_11, result_7, 4)
            char temp9_1 = temp0_164 & 8
            cond:23_1 = temp9_1 != 0
            cond:24_1 = temp9_1 == 0
            cond:25_1 = temp9_1 == 0
            cond:26_1 = temp9_1 != 0
            
            if (temp9_1 == 0)
            label_1400b2b7f:
                result_29 = result_35
                
                if (cond:24_1)
                    goto label_1400b2acd
                
                goto label_1400b2b89
            
        label_1400b2ac0:
            result_29 = _mm_blend_ps(result_29, result_35, 7)
            
            if (cond:23_1)
            label_1400b2b89:
                result_36 = _mm_blend_ps(result_36, result_41, 7)
                
                if (not(cond:25_1))
                    result_11 = _mm_blend_ps(result_11, result_7, 8)
            else
            label_1400b2acd:
                result_36 = result_41
                
                if (cond:26_1)
                    result_11 = _mm_blend_ps(result_11, result_7, 8)
            
            var_2b8 = _mm_blendv_ps(var_2b8, _mm_add_ps(temp0_162, var_2b8), result)
            result_7 = result_11
        
        rbx = zx.q(rbx.d + 4)
    while (rbx.d s< i)
    
    r11 = arg9
    r10_4 = arg8
    
    if (rbx.d s< arg10)
        goto label_1400b2bcc
    
    zmm8 = var_2b8
result_29 = _mm_hadd_ps(result_29, result_29)
result_29 = _mm_hadd_ps(result_29, result_29)
float temp0_395[0x4] = _mm_hadd_ps(result_36, result_36)
result_29 = _mm_insert_ps(result_29, _mm_hadd_ps(temp0_395, temp0_395), 0x1c)
float temp0_398[0x4] = _mm_hadd_ps(result_7, result_7)
float temp0_399[0x4] = _mm_hadd_ps(temp0_398, temp0_398)
result = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*r11), r11[1].d, 0x20), 
    result_29[0].q | temp0_399[0].q << 0x40)
*r11 = result[0]
*(r11 + 4) = __extractps_memd_xmmps_immb(result, 1)
r11[1].d = __extractps_memd_xmmps_immb(result, 2)
float temp0_404[0x4] = _mm_hadd_ps(zmm8, zmm8)
float temp0_405[0x4] = _mm_hadd_ps(temp0_404, temp0_404)
temp0_405[0] = temp0_405[0] f+ *r10_4
*r10_4 = temp0_405[0]
return result
