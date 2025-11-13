// 函数: sub_1400d9c80
// 地址: 0x1400d9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float result_32[0x4]
float result_37[0x4] = result_32
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm9[0x4]
float var_a8[0x4] = zmm9
float result_50[0x4]
float result_51[0x4] = result_50
float result_40[0x4]
float result_47[0x4] = result_40
float result_16[0x4]
float result_29[0x4] = result_16
uint32_t result[0x4] = arg6
int32_t i = ((arg9 s>> 0x1f u>> 0x1e) + arg9) & 0xfffffffc
int32_t* r10_4
int64_t* r11
uint32_t result_39[0x4]
float result_6[0x4]
float result_31[0x4]
uint32_t result_7[0x4]
uint32_t result_1[0x4]
uint32_t result_21[0x4]
float result_44[0x4]
float result_3[0x4]
float result_28[0x4]
uint64_t rbx
float result_38[0x4]
float result_14[0x4]
float result_15[0x4]
uint32_t result_30[0x4]

if (i s<= 0)
    rbx = 0
    result_7 = zx.o(0)
    result_31 = zx.o(0)
    result_6 = zx.o(0)
    result_21 = zx.o(0)
    r11 = arg8
    r10_4 = arg7
    
    if (0 s>= arg9)
        result_39 = result_21
    else
    label_1400da6d9:
        result = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
        zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), result)
        int64_t rsi_3 = sx.q(rbx.d << 2)
        uint32_t temp0_209 = _mm_movemask_ps(zmm9)
        float result_34[0x4] = result_31
        uint32_t result_11[0x4] = result_7
        
        if ((zx.q(temp0_209) & 0xfffffff9) != 9)
            if ((temp0_209.b & 1) == 0)
                if ((temp0_209.b & 2) != 0)
                    goto label_1400dac3d
                
                goto label_1400da734
            
            result_44[0] = *(arg5 + rsi_3)
            
            if ((temp0_209.b & 2) != 0)
            label_1400dac3d:
                result_44[1] = *(arg5 + rsi_3 + 4)
                
                if ((temp0_209.b & 4) == 0)
                    goto label_1400da73e
                
                goto label_1400dac53
            
        label_1400da734:
            
            if ((temp0_209.b & 4) != 0)
            label_1400dac53:
                result_44[2] = *(arg5 + rsi_3 + 8)
                
                if ((temp0_209.b & 8) != 0)
                    result_44[3] = *(arg5 + rsi_3 + 0xc)
            else
            label_1400da73e:
                
                if ((temp0_209.b & 8) != 0)
                    result_44[3] = *(arg5 + rsi_3 + 0xc)
            
            result_38 = result_44
        else
            result_38 = *(arg5 + rsi_3)
        
        result_14 = _mm_add_epi32(_mm_add_epi32(result_38, result_38), result_38) & zmm9
        int64_t rsi_4 = sx.q(result_14[0])
        int64_t rax_23 = arg4 + (rsi_4 << 2)
        result_38 = *(arg4 + (rsi_4 << 2))
        int64_t rdi_6 = sx.q(_mm_shuffle_epi32(result_14, 0xe5)[0])
        int64_t rsi_6 = arg4 + (rdi_6 << 2)
        float temp0_213[0x4] = _mm_unpacklo_ps(result_38, (*(arg4 + (rdi_6 << 2)))[0].q)
        int64_t rbx_2 = sx.q(_mm_shuffle_epi32(result_14, 0x4e)[0])
        int64_t rdi_8 = arg4 + (rbx_2 << 2)
        result_15 = *(arg4 + (rbx_2 << 2))
        int64_t rbp_12 = sx.q(_mm_shuffle_epi32(result_14, 0xe7)[0])
        int64_t rbx_4 = arg4 + (rbp_12 << 2)
        float temp0_216[0x4] = _mm_unpacklo_ps(result_15, (*(arg4 + (rbp_12 << 2)))[0].q)
        result_38 = temp0_213[0].q | temp0_216[0].q << 0x40
        result_15 = data_142fc95e0 & zmm9
        float temp0_218[0x4] = _mm_unpacklo_ps(*(zx.q(result_15[0]) + rax_23), 
            (*(zx.q(_mm_shuffle_epi32(result_15, 0xe5)[0]) + rsi_6))[0].q)
        result_39 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(result_15, 0x4e)[0]) + rdi_8), 
            (*(zx.q(_mm_shuffle_epi32(result_15, 0xe7)[0]) + rbx_4))[0].q)
        result_50 = temp0_218[0].q | result_39[0].q << 0x40
        result_15 = data_142fc95f0 & zmm9
        result_30 = _mm_unpacklo_ps(*(zx.q(result_15[0]) + rax_23), 
            (*(zx.q(_mm_shuffle_epi32(result_15, 0xe5)[0]) + rsi_6))[0].q)
        result_39 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(result_15, 0x4e)[0]) + rdi_8), 
            (*(zx.q(_mm_shuffle_epi32(result_15, 0xe7)[0]) + rbx_4))[0].q)
        result_30 = result_30[0].q | result_39[0].q << 0x40
        float result_36[0x4] = result_30
        float var_e8_1[0x4] = zx.o(0)
        result_16 = *(arg3 + 0xc)
        float result_19[0x4] = _mm_shuffle_ps(result_16, result_16, 0)
        float result_23[0x4] = result_19
        result_3 = result_19
        float result_25[0x4] = result_19
        float result_27[0x4] = result_19
        result_40 = *arg3
        result_14 = *(arg3 + 4)
        result = *(arg3 + 8)
        float temp0_227[0x4] = _mm_shuffle_ps(result_14, result_14, 0)
        float temp0_228[0x4] = _mm_shuffle_ps(result_40, result_40, 0)
        result_39 = _mm_mul_ps(result_50, temp0_228)
        float temp0_230[0x4] = _mm_mul_ps(temp0_228, result_30)
        result_30 = _mm_mul_ps(result_30, temp0_227)
        result = _mm_shuffle_ps(result, result, 0)
        float temp0_233[0x4] = _mm_mul_ps(temp0_227, result_38)
        float temp0_234[0x4] = _mm_mul_ps(result_38, result)
        float temp0_235[0x4] = _mm_mul_ps(zx.o(0), result_19)
        result_30 = _mm_sub_ps(result_30, _mm_mul_ps(result, result_50))
        float temp0_238[0x4] = _mm_sub_ps(temp0_234, temp0_230)
        result_39 = _mm_sub_ps(result_39, temp0_233)
        float temp0_240[0x4] = _mm_sub_ps(temp0_235, temp0_235)
        result_30 = _mm_add_ps(result_30, result_30)
        float temp0_242[0x4] = _mm_add_ps(temp0_238, temp0_238)
        result_39 = _mm_add_ps(result_39, result_39)
        float temp0_244[0x4] = _mm_add_ps(temp0_240, temp0_240)
        result_28 = result_30
        float var_1c8_2[0x4] = temp0_242
        uint32_t result_46[0x4] = result_39
        float var_1a8_2[0x4] = temp0_244
        float temp0_245[0x4] = _mm_mul_ps(temp0_244, result_19)
        float temp0_246[0x4] = _mm_mul_ps(result_19, result_30)
        float temp0_247[0x4] = _mm_mul_ps(result_19, temp0_242)
        float temp0_248[0x4] = _mm_mul_ps(result_19, result_39)
        float result_20[0x4] = __addps_xmmps_memps(temp0_246, result_38)
        float temp0_249[0x4] = __addps_xmmps_memps(temp0_247, result_50)
        float temp0_250[0x4] = __addps_xmmps_memps(temp0_248, result_36)
        float temp0_251[0x4] = __addps_xmmps_memps(temp0_245, var_e8_1)
        result_1 = result_20
        float var_258_1[0x4] = temp0_251
        result = *arg3
        result_14 = *(arg3 + 4)
        result_40 = *(arg3 + 8)
        float temp0_252[0x4] = _mm_shuffle_ps(result_14, result_14, 0)
        result = _mm_shuffle_ps(result, result, 0)
        float temp0_254[0x4] = _mm_mul_ps(temp0_242, result)
        result = _mm_mul_ps(result, result_39)
        result_39 = _mm_mul_ps(result_39, temp0_252)
        float temp0_257[0x4] = _mm_shuffle_ps(result_40, result_40, 0)
        float temp0_258[0x4] = _mm_mul_ps(temp0_252, result_30)
        result_30 = _mm_mul_ps(result_30, temp0_257)
        result_39 = _mm_sub_ps(result_39, _mm_mul_ps(temp0_257, temp0_242))
        result_30 = _mm_sub_ps(result_30, result)
        float temp0_263[0x4] = _mm_sub_ps(temp0_254, temp0_258)
        result_39 = _mm_add_ps(result_39, result_20)
        result_30 = _mm_add_ps(result_30, temp0_249)
        float temp0_266[0x4] = _mm_add_ps(temp0_263, temp0_250)
        zmm11 = arg3[1].d
        result_31 = *(arg3 + 0x14)
        float result_8[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), result_39)
        float temp0_269[0x4] = _mm_add_ps(_mm_shuffle_ps(result_31, result_31, 0), result_30)
        result_30 = *(arg3 + 0x18)
        result_30 = _mm_add_ps(_mm_shuffle_ps(result_30, result_30, 0), temp0_266)
        result_38 = *arg2
        result_50 = *(arg2 + 4)
        float temp0_272[0x4] = _mm_shuffle_ps(result_38, result_38, 0)
        result_39 = _mm_sub_ps(result_8, temp0_272)
        float temp0_274[0x4] = _mm_shuffle_ps(result_50, result_50, 0)
        result = _mm_sub_ps(temp0_269, temp0_274)
        result_32 = *(arg2 + 8)
        float temp0_276[0x4] = _mm_shuffle_ps(result_32, result_32, 0)
        float temp0_277[0x4] = _mm_sub_ps(result_30, temp0_276)
        uint32_t result_45[0x4] = result_39
        uint32_t result_5[0x4] = result
        result_3 = result
        float var_1f8_1[0x4] = temp0_277
        result_14 = *arg1
        result_7 = (*arg1)[1]
        float temp0_278[0x4] = _mm_shuffle_ps(result_14, result_14, 0)
        float result_42[0x4] = _mm_sub_ps(temp0_278, result_8)
        result_7 = _mm_shuffle_ps(result_7, result_7, 0)
        float result_48[0x4] = _mm_sub_ps(result_7, temp0_269)
        zmm15 = (*arg1)[2]
        float temp0_280[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
        result_16 = _mm_and_ps(_mm_cmpeq_ps(result_8, temp0_272, 6), zmm9)
        char temp0_284 = _mm_movemask_ps(_mm_cmpeq_epi32(result_16, zmm9))
        result = _mm_sub_ps(temp0_280, result_30)
        result_28 = result_42
        float result_49[0x4] = result_48
        uint32_t result_2[0x4] = result
        uint32_t result_4[0x4] = result
        zmm11 = _mm_cmpeq_ps(result_8, temp0_272, 2)
        
        if (temp0_284 != 0xf)
            result = _mm_cmpeq_ps(temp0_269, temp0_274, 2)
            zmm11 = _mm_and_ps(_mm_and_ps(zmm11, zmm9), result)
            result_16 = _mm_andnot_ps(zmm11, zmm9)
        
        result_15 = result_30
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(result_16, zmm9)) != 0xf)
            result = _mm_cmpeq_ps(result_15, temp0_276, 2)
            zmm11 = _mm_and_ps(_mm_and_ps(zmm11, zmm9), result)
            result_16 = zmm11 ^ zmm9
        
        result_32 = result_15
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(result_16, zmm9)) == 0xf)
            result_16 = result_2
            result_40 = result_48
        else
            zmm11 = _mm_and_ps(zmm11, zmm9)
            result = result_8
            result_38 = _mm_cmpeq_ps(temp0_278, result, 2)
            result_14 = _mm_and_ps(_mm_cmpeq_ps(temp0_278, result, 6), zmm11)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(result_14, zmm11)) != 0xf)
                result_7 = _mm_cmpeq_ps(result_7, temp0_269, 2)
                result_38 = _mm_and_ps(_mm_and_ps(result_38, zmm11), result_7)
                result_14 = result_38 ^ zmm11
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(result_14, zmm11)) != 0xf)
                float temp0_309[0x4] = _mm_cmpeq_ps(temp0_280, result_15, 2)
                result_38 = _mm_and_ps(_mm_and_ps(result_38, zmm11), temp0_309)
            
            result_16 = result_2
            result_40 = result_48
            zmm11 = _mm_and_ps(zmm11, result_38)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm11, zmm9)) == 0)
            result_31 = result_34
            result_6 = result_6
            result_7 = result_11
            result_40 = result_32
        else
            float temp0_315[0x4] = _mm_max_ps(result_42, result_39)
            float temp0_316[0x4] = __maxps_xmmps_memps(result_40, result_5)
            result_16 = __maxps_xmmps_memps(result_16, temp0_277)
            float temp0_318[0x4] = _mm_cmpeq_ps(temp0_316, temp0_315, 1)
            result_15 = _mm_and_ps(zmm11, temp0_318)
            
            if (_mm_movemask_ps(_mm_and_ps(result_15, zmm9)) != 0)
                float temp0_322[0x4] = _mm_cmpeq_ps(result_16, temp0_315, 5)
                result_30 = _mm_and_ps(
                    _mm_and_ps(_mm_cmpeq_ps(result_16, temp0_315, 1), result_15), temp0_315)
                result_14 = _mm_and_ps(temp0_322, result_15)
                
                if (_mm_movemask_ps(_mm_and_ps(result_14, zmm9)) != 0)
                    result_30 = _mm_or_ps(result_30, _mm_and_ps(result_14, result_16))
            
            result_7 = result_11
            result_38 = _mm_andnot_ps(temp0_318, zmm11)
            
            if (_mm_movemask_ps(_mm_and_ps(result_38, zmm9)) == 0)
                result_31 = result_34
                result_6 = result_6
                result_40 = result_32
            else
                float temp0_334[0x4] = _mm_cmpeq_ps(result_16, temp0_316, 1)
                result_15 = _mm_and_ps(result_38, temp0_334)
                
                if (_mm_movemask_ps(_mm_and_ps(result_15, zmm9)) != 0)
                    uint32_t temp0_338[0x4] = _mm_andnot_ps(result_15, result_30)
                    result_30 = _mm_or_ps(_mm_and_ps(temp0_316, result_15), temp0_338)
                
                result_14 = _mm_andnot_ps(temp0_334, result_38)
                result_31 = result_34
                result_6 = result_6
                result_40 = result_32
                
                if (_mm_movemask_ps(_mm_and_ps(result_14, zmm9)) != 0)
                    uint32_t temp0_344[0x4] = _mm_andnot_ps(result_14, result_30)
                    result_16 = _mm_or_ps(_mm_and_ps(result_16, result_14), temp0_344)
                    result_30 = result_16
        
        if (_mm_movemask_ps(_mm_andnot_ps(zmm11, zmm9)) == 0)
            result = arg6
        else
            result_16 = _mm_cmpeq_epi32(result_16, result_16) ^ zmm11
            int64_t rax_42 = 0
            result_40 = data_142d3f780
            
            while (true)
                float temp0_350[0x4] = _mm_cmpeq_ps(zx.o(0), result_39, 1)
                result_14 = _mm_and_ps(temp0_350, result_16)
                
                if (_mm_movemask_ps(_mm_and_ps(result_14, zmm9)) != 0)
                    char temp0_354 = _mm_movemask_ps(result_14)
                    
                    if ((temp0_354 & 1) == 0)
                        if ((temp0_354 & 2) != 0)
                            goto label_1400dae44
                        
                        goto label_1400dad5c
                    
                    *(&result_1 + rax_42) = result_39[0]
                    
                    if ((temp0_354 & 2) != 0)
                    label_1400dae44:
                        *(&result_1[1] + rax_42) = _mm_shuffle_epi32(result_39, 0xe5)[0]
                        
                        if ((temp0_354 & 4) == 0)
                            goto label_1400dad65
                        
                        goto label_1400dae58
                    
                label_1400dad5c:
                    
                    if ((temp0_354 & 4) != 0)
                    label_1400dae58:
                        *(&result_1[2] + rax_42) = _mm_shuffle_epi32(result_39, 0x4e)[0]
                        
                        if ((temp0_354 & 8) != 0)
                            *(&result_1[3] + rax_42) = _mm_shuffle_epi32(result_39, 0xe7)[0]
                    else
                    label_1400dad65:
                        
                        if ((temp0_354 & 8) != 0)
                            *(&result_1[3] + rax_42) = _mm_shuffle_epi32(result_39, 0xe7)[0]
                
                result_38 = _mm_andnot_ps(temp0_350, result_16)
                
                if (_mm_movemask_ps(_mm_and_ps(result_38, zmm9)) != 0)
                    result_15 = *(&result_28 + rax_42)
                    float temp0_359[0x4] = _mm_cmpeq_ps(zx.o(0), result_15, 1)
                    uint32_t temp0_360[0x4] = _mm_and_ps(result_38, temp0_359)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_360, zmm9)) != 0)
                        result_15 ^= result_40
                        char temp0_363 = _mm_movemask_ps(temp0_360)
                        
                        if ((temp0_363 & 1) == 0)
                            if ((temp0_363 & 2) != 0)
                                goto label_1400dae80
                            
                            goto label_1400dadc5
                        
                        *(&result_1 + rax_42) = result_15[0]
                        
                        if ((temp0_363 & 2) != 0)
                        label_1400dae80:
                            *(&result_1[1] + rax_42) = _mm_shuffle_epi32(result_15, 0xe5)[0]
                            
                            if ((temp0_363 & 4) == 0)
                                goto label_1400dadce
                            
                            goto label_1400dae94
                        
                    label_1400dadc5:
                        
                        if ((temp0_363 & 4) != 0)
                        label_1400dae94:
                            *(&result_1[2] + rax_42) = _mm_shuffle_epi32(result_15, 0x4e)[0]
                            
                            if ((temp0_363 & 8) != 0)
                                *(&result_1[3] + rax_42) = _mm_shuffle_epi32(result_15, 0xe7)[0]
                        else
                        label_1400dadce:
                            
                            if ((temp0_363 & 8) != 0)
                                *(&result_1[3] + rax_42) = _mm_shuffle_epi32(result_15, 0xe7)[0]
                    
                    result_14 = _mm_andnot_ps(temp0_359, result_38)
                    
                    if (_mm_movemask_ps(_mm_and_ps(result_14, zmm9)) != 0)
                        char temp0_368 = _mm_movemask_ps(result_14)
                        
                        if ((temp0_368 & 1) == 0)
                            if ((temp0_368 & 2) != 0)
                                goto label_1400daeb9
                            
                            goto label_1400dae04
                        
                        *(&result_1 + rax_42) = 0
                        
                        if ((temp0_368 & 2) != 0)
                        label_1400daeb9:
                            *(&result_1[1] + rax_42) = 0
                            
                            if ((temp0_368 & 4) == 0)
                                goto label_1400dae0d
                            
                            goto label_1400daeca
                        
                    label_1400dae04:
                        
                        if ((temp0_368 & 4) != 0)
                        label_1400daeca:
                            *(&result_1[2] + rax_42) = 0
                            
                            if ((temp0_368 & 8) != 0)
                                *(&result_1[3] + rax_42) = 0
                        else
                        label_1400dae0d:
                            
                            if ((temp0_368 & 8) != 0)
                                *(&result_1[3] + rax_42) = 0
                
                if (rax_42 == 0x20)
                    break
                
                result_39 = *(&result_3 + rax_42)
                rax_42 += 0x10
            
            result = result_1
            float temp0_374[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(result, result))
            float temp0_376[0x4] = _mm_add_ps(_mm_mul_ps(temp0_249, temp0_249), temp0_374)
            float temp0_378[0x4] = _mm_add_ps(_mm_mul_ps(temp0_250, temp0_250), temp0_376)
            result = _mm_rsqrt_ps(temp0_378)
            float temp0_381[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_378, result), result)
            float temp0_384[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_381), result), data_142d3f640)
            result = _mm_rcp_ps(temp0_384)
            float temp0_386[0x4] = _mm_mul_ps(temp0_384, result)
            float temp0_388[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_386), result)
            result_30 = _mm_or_ps(_mm_and_ps(result_30, zmm11), _mm_and_ps(temp0_388, result_16))
            result = arg6
            result_40 = result_32
        
        result_30 = _mm_sub_ps(result_30, _mm_shuffle_ps(result, result, 0))
        uint32_t temp0_395[0x4] =
            _mm_and_ps(__cmpps_xmmps_memps_immb(result_30, data_142fc95d0, 1), zmm9)
        char temp0_396 = _mm_movemask_ps(temp0_395)
        
        if (temp0_396 == 0)
            result_39 = result_21
        else
            float temp0_397[0x4] = _mm_mul_ps(result_8, result_30)
            result_14 = result_6
            char temp3_1 = temp0_396 & 1
            result_16 = result_21
            
            if (temp3_1 == 0)
                result_50 = _mm_mul_ps(temp0_269, result_30)
                result_38 = result_31
                
                if (temp3_1 != 0)
                    goto label_1400db135
                
                goto label_1400dafa3
            
            result_14 = result_6
            result_14[0] = result_14[0] + temp0_397[0]
            result_50 = _mm_mul_ps(temp0_269, result_30)
            result_38 = result_31
            
            if (temp3_1 != 0)
            label_1400db135:
                result_38 = result_31
                result_38[0] = result_38[0] + result_50[0]
                result_40 = _mm_mul_ps(result_40, result_30)
                result = result_7
                
                if (temp3_1 == 0)
                    goto label_1400dafb0
                
                goto label_1400db14b
            
        label_1400dafa3:
            result_40 = _mm_mul_ps(result_40, result_30)
            result = result_7
            bool cond:21_1
            bool cond:22_1
            bool cond:25_1
            bool cond:26_1
            
            if (temp3_1 == 0)
            label_1400dafb0:
                result_6 = _mm_add_ps(result_6, temp0_397)
                char temp7_1 = temp0_396 & 2
                cond:21_1 = temp7_1 != 0
                cond:22_1 = temp7_1 == 0
                cond:25_1 = temp7_1 == 0
                cond:26_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                    goto label_1400db16b
                
                goto label_1400dafbc
            
        label_1400db14b:
            result = result_7
            result[0] = result[0] f+ result_40[0]
            result_6 = _mm_add_ps(result_6, temp0_397)
            char temp6_1 = temp0_396 & 2
            cond:21_1 = temp6_1 != 0
            cond:22_1 = temp6_1 == 0
            cond:25_1 = temp6_1 == 0
            cond:26_1 = temp6_1 != 0
            
            if (temp6_1 != 0)
            label_1400db16b:
                result_14 = _mm_shuffle_ps(_mm_shuffle_ps(result_6, result_14, 1), result_14, 0xe2)
                result_31 = _mm_add_ps(result_31, result_50)
                
                if (cond:22_1)
                    goto label_1400dafc6
                
                goto label_1400db184
            
        label_1400dafbc:
            result_31 = _mm_add_ps(result_31, result_50)
            
            if (not(cond:21_1))
            label_1400dafc6:
                result_7 = _mm_add_ps(result_7, result_40)
                
                if (cond:26_1)
                    goto label_1400db19d
                
                goto label_1400dafd0
            
        label_1400db184:
            result_38 = _mm_shuffle_ps(_mm_shuffle_ps(result_31, result_38, 1), result_38, 0xe2)
            result_7 = _mm_add_ps(result_7, result_40)
            bool cond:30_1
            bool cond:31_1
            bool cond:34_1
            bool cond:35_1
            
            if (not(cond:25_1))
            label_1400db19d:
                result = _mm_shuffle_ps(_mm_shuffle_ps(result_7, result, 1), result, 0xe2)
                char temp11_1 = temp0_396 & 4
                cond:30_1 = temp11_1 == 0
                cond:31_1 = temp11_1 != 0
                cond:34_1 = temp11_1 != 0
                cond:35_1 = temp11_1 == 0
                
                if (temp11_1 == 0)
                    goto label_1400dafd8
                
                goto label_1400db1b0
            
        label_1400dafd0:
            char temp10_1 = temp0_396 & 4
            cond:30_1 = temp10_1 == 0
            cond:31_1 = temp10_1 != 0
            cond:34_1 = temp10_1 != 0
            cond:35_1 = temp10_1 == 0
            
            if (temp10_1 != 0)
            label_1400db1b0:
                result_14 =
                    _mm_shuffle_ps(result_14, _mm_shuffle_ps(result_6, result_14, 0x32), 0x84)
                
                if (not(cond:30_1))
                label_1400db1c2:
                    result_38 =
                        _mm_shuffle_ps(result_38, _mm_shuffle_ps(result_31, result_38, 0x32), 0x84)
                    
                    if (cond:35_1)
                        goto label_1400dafe4
                    
                    goto label_1400db1d4
            else
            label_1400dafd8:
                
                if (cond:31_1)
                    goto label_1400db1c2
            
            bool cond:36_1
            bool cond:37_1
            bool cond:38_1
            bool cond:39_1
            
            if (not(cond:34_1))
            label_1400dafe4:
                char temp13_1 = temp0_396 & 8
                cond:36_1 = temp13_1 != 0
                cond:37_1 = temp13_1 == 0
                cond:38_1 = temp13_1 != 0
                cond:39_1 = temp13_1 == 0
                
                if (temp13_1 != 0)
                    goto label_1400db1ea
                
                goto label_1400dafec
            
        label_1400db1d4:
            result = _mm_shuffle_ps(result, _mm_shuffle_ps(result_7, result, 0x32), 0x84)
            char temp12_1 = temp0_396 & 8
            cond:36_1 = temp12_1 != 0
            cond:37_1 = temp12_1 == 0
            cond:38_1 = temp12_1 != 0
            cond:39_1 = temp12_1 == 0
            
            if (temp12_1 != 0)
            label_1400db1ea:
                result_6 =
                    _mm_shuffle_ps(result_14, _mm_shuffle_ps(result_6, result_14, 0x23), 0x24)
                
                if (cond:37_1)
                    goto label_1400daff6
                
                goto label_1400db1fe
            
        label_1400dafec:
            result_6 = result_14
            
            if (cond:36_1)
            label_1400db1fe:
                result_31 =
                    _mm_shuffle_ps(result_38, _mm_shuffle_ps(result_31, result_38, 0x23), 0x24)
                
                if (cond:38_1)
                    result = _mm_shuffle_ps(result, _mm_shuffle_ps(result_7, result, 0x23), 0x24)
            else
            label_1400daff6:
                result_31 = result_38
                
                if (not(cond:39_1))
                    result = _mm_shuffle_ps(result, _mm_shuffle_ps(result_7, result, 0x23), 0x24)
            
            uint32_t temp0_406[0x4] = _mm_and_ps(_mm_add_ps(result_30, result_16), temp0_395)
            result_39 = _mm_or_ps(_mm_andnot_ps(temp0_395, result_16), temp0_406)
            result_7 = result
else
    zmm9 = *(arg3 + 0xc)
    float result_17[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float var_178_1[0x4] = *arg3
    float var_228_1[0x4] = *(arg3 + 4)
    float var_238_1[0x4] = *(arg3 + 8)
    zmm11 = *arg2
    result_38 = *(arg2 + 4)
    zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(result_38, result_38, 0)
    result_38 = *(arg2 + 8)
    float temp0_3[0x4] = _mm_shuffle_ps(result_38, result_38, 0)
    result_38 = *arg1
    result_14 = (*arg1)[1]
    float temp0_4[0x4] = _mm_shuffle_ps(result_38, result_38, 0)
    float temp0_5[0x4] = _mm_shuffle_ps(result_14, result_14, 0)
    result_38 = (*arg1)[2]
    float temp0_6[0x4] = _mm_shuffle_ps(result_38, result_38, 0)
    uint32_t var_168_1[0x4] = _mm_shuffle_ps(result, result, 0)
    rbx = 0
    result_21 = zx.o(0)
    float var_188_1[0x4] = zmm11
    
    do
        uint32_t result_10[0x4]
        __builtin_memset(&result_10, 0, 0x30)
        result = *(arg5 + sx.q((rbx << 2).d))
        result_38 = _mm_add_epi32(_mm_add_epi32(result, result), result)
        int64_t rbp_4 = sx.q(result_38[0])
        int64_t rdi_2 = sx.q(_mm_shuffle_epi32(result_38, 0xe5)[0])
        int64_t rax_2 = sx.q(_mm_shuffle_epi32(result_38, 0x4e)[0])
        int64_t rsi_2 = sx.q(_mm_shuffle_epi32(result_38, 0xe7)[0])
        result_38 = *(arg4 + (rsi_2 << 2) + 4)
        float temp0_34[0x4] = _mm_unpacklo_ps(*(arg4 + (rax_2 << 2)), (*(arg4 + (rsi_2 << 2)))[0].q)
        result = _mm_unpacklo_ps(*(arg4 + (rax_2 << 2) + 4), result_38[0].q)
        result_30 = *(arg4 + (rbp_4 << 2) + 4)
        result_14 = _mm_unpacklo_ps(*(arg4 + (rbp_4 << 2)), (*(arg4 + (rdi_2 << 2)))[0].q)[0].q
            | temp0_34[0].q << 0x40
        result_30 =
            _mm_unpacklo_ps(result_30, (*(arg4 + (rdi_2 << 2) + 4))[0].q)[0].q | result[0].q << 0x40
        float temp0_38[0x4] =
            _mm_unpacklo_ps(*(arg4 + (rbp_4 << 2) + 8), (*(arg4 + (rdi_2 << 2) + 8))[0].q)
        result = _mm_unpacklo_ps(*(arg4 + (rax_2 << 2) + 8), (*(arg4 + (rsi_2 << 2) + 8))[0].q)
        result_38 = temp0_38[0].q | result[0].q << 0x40
        result_28 = result_14
        uint32_t result_35[0x4] = result_30
        int128_t var_1a8_1 = zx.o(0)
        float result_22[0x4] = result_17
        result_3 = result_17
        float result_24[0x4] = result_17
        float temp0_40[0x4] = _mm_shuffle_ps(var_228_1, var_228_1, 0)
        result = _mm_mul_ps(result_38, temp0_40)
        float temp0_42[0x4] = _mm_shuffle_ps(var_238_1, var_238_1, 0)
        float temp0_43[0x4] = _mm_mul_ps(result_14, temp0_42)
        float temp0_44[0x4] = _mm_shuffle_ps(var_178_1, var_178_1, 0)
        result_39 = _mm_mul_ps(result_30, temp0_44)
        result = _mm_sub_ps(result, _mm_mul_ps(result_30, temp0_42))
        float temp0_49[0x4] = _mm_sub_ps(temp0_43, _mm_mul_ps(result_38, temp0_44))
        result_39 = _mm_sub_ps(result_39, _mm_mul_ps(result_14, temp0_40))
        result = _mm_add_ps(result, result)
        float temp0_53[0x4] = _mm_add_ps(temp0_49, temp0_49)
        result_39 = _mm_add_ps(result_39, result_39)
        float temp0_55[0x4] = _mm_mul_ps(result_17, temp0_53)
        result_30 = _mm_mul_ps(result, temp0_42)
        float temp0_57[0x4] = _mm_mul_ps(temp0_53, temp0_42)
        float temp0_62[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(result_39, temp0_40), temp0_57), 
            __addps_xmmps_memps(_mm_mul_ps(result_17, result), result_28))
        float temp0_63[0x4] = _mm_mul_ps(result_17, result_39)
        float temp0_64[0x4] = __addps_xmmps_memps(temp0_55, result_35)
        float temp0_65[0x4] = __addps_xmmps_memps(temp0_63, result_38)
        float result_26[0x4] = result_17
        float temp0_66[0x4] = _mm_mul_ps(temp0_53, temp0_44)
        result_30 = _mm_add_ps(_mm_sub_ps(result_30, _mm_mul_ps(result_39, temp0_44)), temp0_64)
        float temp0_72[0x4] =
            _mm_add_ps(_mm_sub_ps(temp0_66, _mm_mul_ps(result, temp0_40)), temp0_65)
        result_32 = arg3[1].d
        result_39 = *(arg3 + 0x14)
        float temp0_74[0x4] = _mm_add_ps(_mm_shuffle_ps(result_32, result_32, 0), temp0_62)
        result_39 = _mm_add_ps(_mm_shuffle_ps(result_39, result_39, 0), result_30)
        zmm15 = *(arg3 + 0x18)
        float temp0_78[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_72)
        result_50 = _mm_sub_ps(temp0_74, zmm11)
        float result_18[0x4] = __subps_xmmps_memps(result_39, temp0_2)
        result_7 = __subps_xmmps_memps(temp0_78, temp0_3)
        result_44 = result_50
        result_3 = result_18
        uint32_t result_13[0x4] = result_7
        float result_41[0x4] = _mm_sub_ps(temp0_4, temp0_74)
        float temp0_81[0x4] = _mm_sub_ps(temp0_5, result_39)
        char temp0_83 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_74, zmm11, 6))
        float temp0_84[0x4] = _mm_sub_ps(temp0_6, temp0_78)
        result_28 = result_41
        float var_1c8_1[0x4] = temp0_81
        float var_1b8_2[0x4] = temp0_84
        
        if (temp0_83 != 0xf)
            float temp0_85[0x4] = _mm_cmpeq_ps(temp0_74, zmm11, 2)
            result_15 = *(arg2 + 4)
            result = _mm_and_ps(
                _mm_cmpeq_ps(result_39, _mm_shuffle_ps(result_15, result_15, 0), 2), temp0_85)
            result_38 = _mm_cmpeq_epi32(temp0_64, temp0_64)
            
            if (_mm_movemask_ps(result ^ result_38) == 0xf)
                goto label_1400da2c3
            
            result_14 = *(arg2 + 8)
            zmm11 = _mm_and_ps(_mm_cmpeq_ps(temp0_78, _mm_shuffle_ps(result_14, result_14, 0), 2), 
                result)
            
            if (_mm_movemask_ps(zmm11 ^ result_38) != 0xf)
                result = *arg1
                result = _mm_shuffle_ps(result, result, 0)
                result_14 = _mm_and_ps(_mm_cmpeq_ps(result, temp0_74, 6), zmm11)
                char temp0_99 = _mm_movemask_ps(_mm_cmpeq_epi32(result_14, zmm11))
                result = _mm_cmpeq_ps(result, temp0_74, 2)
                
                if (temp0_99 != 0xf)
                    result_14 = (*arg1)[1]
                    float temp0_102[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(result_14, result_14, 0), result_39, 2)
                    result = _mm_and_ps(_mm_and_ps(result, zmm11), temp0_102)
                    result_14 = _mm_andnot_ps(result, zmm11)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(result_14, zmm11)) != 0xf)
                    result_14 = (*arg1)[2]
                    float temp0_109[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(result_14, result_14, 0), temp0_78, 2)
                    result = _mm_and_ps(_mm_and_ps(result, zmm11), temp0_109)
                
                zmm11 = _mm_and_ps(zmm11, result)
            
            if (_mm_movemask_ps(zmm11) == 0)
                goto label_1400da2d4
            
            goto label_1400da21d
        
        result = _mm_cmpeq_ps(temp0_74, zmm11, 2)
    label_1400da2c3:
        zmm11 = _mm_srai_epi32(_mm_slli_epi32(result, 0x1f), 0x1f)
        uint32_t result_43[0x4]
        float result_12[0x4]
        float result_33[0x4]
        
        if (_mm_movemask_ps(zmm11) != 0)
        label_1400da21d:
            float temp0_114[0x4] = _mm_max_ps(result_41, result_50)
            float temp0_115[0x4] = _mm_max_ps(temp0_81, result_18)
            float temp0_116[0x4] = _mm_max_ps(temp0_84, result_7)
            result = _mm_cmpeq_ps(temp0_115, temp0_114, 1)
            result_15 = _mm_and_ps(zmm11, result)
            
            if (_mm_movemask_ps(result_15) == 0)
                result_31 = result_33
                result_6 = result_12
                result_7 = result_10
                result_30 = _mm_cmpeq_epi32(result_30, result_30)
                result = _mm_andnot_ps(result, zmm11)
                
                if (_mm_movemask_ps(result) == 0)
                    result_40 = result_43
                else
                label_1400da314:
                    float temp0_142[0x4] = _mm_cmpeq_ps(temp0_116, temp0_115, 1)
                    result_15 = _mm_and_ps(result, temp0_142)
                    
                    if (_mm_movemask_ps(result_15) != 0)
                        result_38 = __andnps_xmmxud_memxud(result_15, result_43)
                        result_43 = _mm_or_ps(_mm_and_ps(temp0_115, result_15), result_38)
                    
                    result_14 = _mm_andnot_ps(temp0_142, result)
                    
                    if (_mm_movemask_ps(result_14) == 0)
                        result_40 = result_43
                    else
                        uint32_t temp0_150[0x4] = __andnps_xmmxud_memxud(result_14, result_43)
                        result_40 = _mm_or_ps(_mm_and_ps(temp0_116, result_14), temp0_150)
            else
                float temp0_120[0x4] = _mm_cmpeq_ps(temp0_116, temp0_114, 1)
                uint32_t temp0_121[0x4] = _mm_and_ps(result_15, temp0_120)
                
                if (_mm_movemask_ps(temp0_121) != 0)
                    result_38 = __andnps_xmmxud_memxud(temp0_121, result_43)
                    result_43 = _mm_or_ps(_mm_and_ps(temp0_114, temp0_121), result_38)
                
                result_31 = result_33
                result_6 = result_12
                result_7 = result_10
                result_30 = _mm_cmpeq_epi32(temp0_121, temp0_121)
                result_14 = _mm_andnot_ps(temp0_120, result_15)
                
                if (_mm_movemask_ps(result_14) != 0)
                    result_38 = __andnps_xmmxud_memxud(result_14, result_43)
                    result_43 = _mm_or_ps(_mm_and_ps(result_14, temp0_116), result_38)
                
                result = _mm_andnot_ps(result, zmm11)
                
                if (_mm_movemask_ps(result) != 0)
                    goto label_1400da314
                
                result_40 = result_43
        else
        label_1400da2d4:
            result_31 = result_33
            result_6 = result_12
            result_7 = result_10
            result_30 = _mm_cmpeq_epi32(result_30, result_30)
            result_40 = result_43
        result_16 = zmm11 ^ result_30
        
        if (_mm_movemask_ps(result_16) != 0)
            int64_t rdi_3 = 0
            result_30 = data_142d3f780
            
            while (true)
                result = _mm_cmpeq_ps(zx.o(0), result_50, 1)
                uint32_t temp0_156 = _mm_movemask_ps(_mm_and_ps(result, result_16))
                
                if (temp0_156 != 0)
                    char rbp_6 = temp0_156.b
                    
                    if ((rbp_6 & 1) == 0)
                        if ((rbp_6 & 2) != 0)
                            goto label_1400da497
                        
                        goto label_1400da3b8
                    
                    *(&result_1 + rdi_3) = result_50[0]
                    
                    if ((rbp_6 & 2) != 0)
                    label_1400da497:
                        *(&result_1[1] + rdi_3) = _mm_shuffle_epi32(result_50, 0xe5)[0]
                        
                        if ((rbp_6 & 4) == 0)
                            goto label_1400da3c2
                        
                        goto label_1400da4ad
                    
                label_1400da3b8:
                    
                    if ((rbp_6 & 4) != 0)
                    label_1400da4ad:
                        *(&result_1[2] + rdi_3) = _mm_shuffle_epi32(result_50, 0x4e)[0]
                        
                        if ((rbp_6 & 8) != 0)
                            *(&result_1[3] + rdi_3) = _mm_shuffle_epi32(result_50, 0xe7)[0]
                    else
                    label_1400da3c2:
                        
                        if ((rbp_6 & 8) != 0)
                            *(&result_1[3] + rdi_3) = _mm_shuffle_epi32(result_50, 0xe7)[0]
                
                uint32_t temp0_158[0x4] = _mm_andnot_ps(result, result_16)
                
                if (_mm_movemask_ps(temp0_158) != 0)
                    result_15 = *(&result_28 + rdi_3)
                    float temp0_160[0x4] = _mm_cmpeq_ps(zx.o(0), result_15, 1)
                    uint32_t temp0_162 = _mm_movemask_ps(_mm_and_ps(temp0_158, temp0_160))
                    
                    if (temp0_162 != 0)
                        result_15 ^= result_30
                        char rbp_8 = temp0_162.b
                        
                        if ((rbp_8 & 1) == 0)
                            if ((rbp_8 & 2) != 0)
                                goto label_1400da4d7
                            
                            goto label_1400da417
                        
                        *(&result_1 + rdi_3) = result_15[0]
                        
                        if ((rbp_8 & 2) != 0)
                        label_1400da4d7:
                            *(&result_1[1] + rdi_3) = _mm_shuffle_epi32(result_15, 0xe5)[0]
                            
                            if ((rbp_8 & 4) == 0)
                                goto label_1400da421
                            
                            goto label_1400da4ec
                        
                    label_1400da417:
                        
                        if ((rbp_8 & 4) != 0)
                        label_1400da4ec:
                            *(&result_1[2] + rdi_3) = _mm_shuffle_epi32(result_15, 0x4e)[0]
                            
                            if ((rbp_8 & 8) != 0)
                                *(&result_1[3] + rdi_3) = _mm_shuffle_epi32(result_15, 0xe7)[0]
                        else
                        label_1400da421:
                            
                            if ((rbp_8 & 8) != 0)
                                *(&result_1[3] + rdi_3) = _mm_shuffle_epi32(result_15, 0xe7)[0]
                    
                    uint32_t temp0_165 = _mm_movemask_ps(_mm_andnot_ps(temp0_160, temp0_158))
                    
                    if (temp0_165 != 0)
                        char rbp_10 = temp0_165.b
                        
                        if ((rbp_10 & 1) == 0)
                            if ((rbp_10 & 2) != 0)
                                goto label_1400da513
                            
                            goto label_1400da452
                        
                        *(&result_1 + rdi_3) = 0
                        
                        if ((rbp_10 & 2) != 0)
                        label_1400da513:
                            *(&result_1[1] + rdi_3) = 0
                            
                            if ((rbp_10 & 4) == 0)
                                goto label_1400da45c
                            
                            goto label_1400da525
                        
                    label_1400da452:
                        
                        if ((rbp_10 & 4) != 0)
                        label_1400da525:
                            *(&result_1[2] + rdi_3) = 0
                            
                            if ((rbp_10 & 8) != 0)
                                *(&result_1[3] + rdi_3) = 0
                        else
                        label_1400da45c:
                            
                            if ((rbp_10 & 8) != 0)
                                *(&result_1[3] + rdi_3) = 0
                
                if (rdi_3 == 0x20)
                    break
                
                result_50 = *(&result_3 + rdi_3)
                rdi_3 += 0x10
            
            result = result_1
            result = __addps_xmmps_memps(_mm_mul_ps(result, result), data_142d8f750)
            float var_278[0x4]
            float temp0_173[0x4] = _mm_add_ps(_mm_mul_ps(var_278, var_278), result)
            float var_268[0x4]
            float temp0_175[0x4] = _mm_add_ps(_mm_mul_ps(var_268, var_268), temp0_173)
            result = _mm_rsqrt_ps(temp0_175)
            float temp0_178[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_175, result), result)
            float temp0_181[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_178), result), data_142d3f640)
            result = _mm_rcp_ps(temp0_181)
            float temp0_183[0x4] = _mm_mul_ps(temp0_181, result)
            float temp0_185[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_183), result)
            result_40 = _mm_or_ps(_mm_and_ps(result_40, zmm11), _mm_and_ps(temp0_185, result_16))
        
        result_43 = result_40
        float temp0_189[0x4] = __subps_xmmps_memps(result_40, var_168_1)
        float temp0_190[0x4] = __cmpps_xmmps_memps_immb(temp0_189, data_142fc95d0, 1)
        char temp0_191 = _mm_movemask_ps(temp0_190)
        zmm11 = var_188_1
        
        if (temp0_191 != 0)
            float temp0_192[0x4] = _mm_mul_ps(temp0_74, temp0_189)
            result = result_6
            char temp0_193 = temp0_191 & 1
            
            if (temp0_193 == 0)
                result_39 = _mm_mul_ps(result_39, temp0_189)
                result_14 = result_31
                
                if (temp0_193 != 0)
                    goto label_1400d9df6
                
                goto label_1400da5ee
            
            result = result_6
            result[0] = result[0] f+ temp0_192[0]
            result_39 = _mm_mul_ps(result_39, temp0_189)
            result_14 = result_31
            
            if (temp0_193 != 0)
            label_1400d9df6:
                result_14 = result_31
                result_14[0] = result_14[0] f+ result_39[0]
                zmm15 = _mm_mul_ps(temp0_78, temp0_189)
                result_15 = result_7
                
                if (temp0_193 == 0)
                    goto label_1400da5fc
                
                goto label_1400d9e0c
            
        label_1400da5ee:
            zmm15 = _mm_mul_ps(temp0_78, temp0_189)
            result_15 = result_7
            bool cond:11_1
            bool cond:12_1
            bool cond:15_1
            bool cond:16_1
            
            if (temp0_193 == 0)
            label_1400da5fc:
                result_6 = _mm_add_ps(result_6, temp0_192)
                char temp2_1 = temp0_191 & 2
                cond:11_1 = temp2_1 != 0
                cond:12_1 = temp2_1 == 0
                cond:15_1 = temp2_1 == 0
                cond:16_1 = temp2_1 != 0
                
                if (temp2_1 != 0)
                    goto label_1400d9e2f
                
                goto label_1400da60a
            
        label_1400d9e0c:
            result_15 = result_7
            result_15[0] = result_15[0] + zmm15[0]
            result_6 = _mm_add_ps(result_6, temp0_192)
            char temp1_1 = temp0_191 & 2
            cond:11_1 = temp1_1 != 0
            cond:12_1 = temp1_1 == 0
            cond:15_1 = temp1_1 == 0
            cond:16_1 = temp1_1 != 0
            
            if (temp1_1 != 0)
            label_1400d9e2f:
                result = _mm_shuffle_ps(_mm_shuffle_ps(result_6, result, 1), result, 0xe2)
                result_31 = _mm_add_ps(result_31, result_39)
                
                if (cond:12_1)
                    goto label_1400da614
                
                goto label_1400d9e48
            
        label_1400da60a:
            result_31 = _mm_add_ps(result_31, result_39)
            
            if (not(cond:11_1))
            label_1400da614:
                result_7 = _mm_add_ps(result_7, zmm15)
                
                if (cond:16_1)
                    goto label_1400d9e61
                
                goto label_1400da61e
            
        label_1400d9e48:
            result_14 = _mm_shuffle_ps(_mm_shuffle_ps(result_31, result_14, 1), result_14, 0xe2)
            result_7 = _mm_add_ps(result_7, zmm15)
            bool cond:19_1
            bool cond:20_1
            bool cond:23_1
            bool cond:24_1
            
            if (not(cond:15_1))
            label_1400d9e61:
                result_15 = _mm_shuffle_ps(_mm_shuffle_ps(result_7, result_15, 1), result_15, 0xe2)
                char temp5_1 = temp0_191 & 4
                cond:19_1 = temp5_1 == 0
                cond:20_1 = temp5_1 != 0
                cond:23_1 = temp5_1 != 0
                cond:24_1 = temp5_1 == 0
                
                if (temp5_1 == 0)
                    goto label_1400da628
                
                goto label_1400d9e76
            
        label_1400da61e:
            char temp4_1 = temp0_191 & 4
            cond:19_1 = temp4_1 == 0
            cond:20_1 = temp4_1 != 0
            cond:23_1 = temp4_1 != 0
            cond:24_1 = temp4_1 == 0
            
            if (temp4_1 != 0)
            label_1400d9e76:
                result = _mm_shuffle_ps(result, _mm_shuffle_ps(result_6, result, 0x32), 0x84)
                
                if (not(cond:19_1))
                label_1400d9e88:
                    result_14 =
                        _mm_shuffle_ps(result_14, _mm_shuffle_ps(result_31, result_14, 0x32), 0x84)
                    
                    if (cond:24_1)
                        goto label_1400da634
                    
                    goto label_1400d9e9a
            else
            label_1400da628:
                
                if (cond:20_1)
                    goto label_1400d9e88
            
            bool cond:28_1
            bool cond:29_1
            bool cond:32_1
            bool cond:33_1
            
            if (not(cond:23_1))
            label_1400da634:
                char temp9_1 = temp0_191 & 8
                cond:28_1 = temp9_1 != 0
                cond:29_1 = temp9_1 == 0
                cond:32_1 = temp9_1 != 0
                cond:33_1 = temp9_1 == 0
                
                if (temp9_1 != 0)
                    goto label_1400d9eb2
                
                goto label_1400da63e
            
        label_1400d9e9a:
            result_15 = _mm_shuffle_ps(result_15, _mm_shuffle_ps(result_7, result_15, 0x32), 0x84)
            char temp8_1 = temp0_191 & 8
            cond:28_1 = temp8_1 != 0
            cond:29_1 = temp8_1 == 0
            cond:32_1 = temp8_1 != 0
            cond:33_1 = temp8_1 == 0
            
            if (temp8_1 != 0)
            label_1400d9eb2:
                result_6 = _mm_shuffle_ps(result, _mm_shuffle_ps(result_6, result, 0x23), 0x24)
                
                if (cond:29_1)
                    goto label_1400da648
                
                goto label_1400d9ec6
            
        label_1400da63e:
            result_6 = result
            
            if (cond:28_1)
            label_1400d9ec6:
                result_31 =
                    _mm_shuffle_ps(result_14, _mm_shuffle_ps(result_31, result_14, 0x23), 0x24)
                
                if (cond:32_1)
                    result_15 =
                        _mm_shuffle_ps(result_15, _mm_shuffle_ps(result_7, result_15, 0x23), 0x24)
            else
            label_1400da648:
                result_31 = result_14
                
                if (not(cond:33_1))
                    result_15 =
                        _mm_shuffle_ps(result_15, _mm_shuffle_ps(result_7, result_15, 0x23), 0x24)
            
            result_40 = _mm_and_ps(_mm_add_ps(temp0_189, result_21), temp0_190)
            result_7 = result_15
            result_21 = _mm_or_ps(_mm_andnot_ps(temp0_190, result_21), result_40)
        
        rbx = zx.q(rbx.d + 4)
    while (rbx.d s< i)
    
    r11 = arg8
    r10_4 = arg7
    
    if (rbx.d s< arg9)
        goto label_1400da6d9
    
    result_39 = result_21
result = _mm_add_ps(_mm_unpackhi_pd(result_6, result_6[0].q), result_6)
float temp0_411[0x4] = _mm_shuffle_ps(result, result, 0xe5)
temp0_411[0] = temp0_411[0] f+ result[0]
result = _mm_add_ps(_mm_unpackhi_pd(result_31, result_31[0].q), result_31)
float temp0_414[0x4] = _mm_shuffle_ps(result, result, 0xe5)
temp0_414[0] = temp0_414[0] f+ result[0]
float temp0_415[0x4] = _mm_unpacklo_ps(temp0_411, temp0_414[0].q)
result = _mm_add_ps(_mm_unpackhi_pd(result_7, result_7[0].q), result_7)
float temp0_418[0x4] = _mm_shuffle_ps(result, result, 0xe5)
temp0_418[0] = temp0_418[0] f+ result[0]
float result_9[0x4] =
    _mm_add_ps(zx.o(*r11)[0].q | r11[1].d[0].q << 0x40, temp0_415[0].q | temp0_418[0].q << 0x40)
result = result_9
*r11 = result_9[0]
float temp0_419[0x4] = _mm_shuffle_ps(result_9, result_9, 0xe5)
result[0].q = result u>> 0x40
*(r11 + 4) = temp0_419[0]
r11[1].d = result[0]
result = _mm_add_ps(_mm_shuffle_epi32(result_39, 0xee), result_39)
float temp0_422[0x4] = _mm_shuffle_ps(result, result, 0xe5)
temp0_422[0] = temp0_422[0] f+ result[0]
temp0_422[0] = temp0_422[0] f+ *r10_4
*r10_4 = temp0_422[0]
return result
