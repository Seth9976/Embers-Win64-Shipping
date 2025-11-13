// 函数: sub_1400db210
// 地址: 0x1400db210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
uint32_t zmm14[0x4]
uint32_t var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm11[0x4]
float var_88[0x4] = zmm11
uint32_t zmm10[0x4]
uint32_t var_98[0x4] = zmm10
float zmm9[0x4]
float var_a8[0x4] = zmm9
float zmm8[0x4]
float var_b8[0x4] = zmm8
uint32_t var_c8[0x4] = arg5
uint32_t zmm6[0x4]
uint32_t var_d8[0x4] = zmm6
int32_t r12_4 = ((arg9 s>> 0x1f u>> 0x1e) + arg9) & 0xfffffffc
int32_t result
int32_t var_258[0x4]
float var_208[0x4]
int32_t var_1f8[0x4]
int32_t var_1c8[0x4]
uint64_t rbp
int32_t zmm0[0x4]
int32_t zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r12_4 s<= 0)
    rbp = 0
    result = 0
    
    if (0 s< arg9)
    label_1400dba18:
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            int32_t temp0_167[0x4] =
                __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp.d), 0), data_142e11d00)
            zmm12 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), temp0_167)
            int64_t rax_21 = sx.q(rbp.d << 2)
            uint32_t temp0_170 = _mm_movemask_ps(zmm12)
            
            if ((zx.q(temp0_170) & 0xfffffff9) != 9)
                if ((temp0_170.b & 1) == 0)
                    if ((temp0_170.b & 2) != 0)
                        goto label_1400dbf33
                    
                    goto label_1400dba82
                
                var_208[0] = *(arg6 + rax_21)
                
                if ((temp0_170.b & 2) != 0)
                label_1400dbf33:
                    var_208[1] = *(arg6 + rax_21 + 4)
                    
                    if ((temp0_170.b & 4) == 0)
                        goto label_1400dba8c
                    
                    goto label_1400dbf46
                
            label_1400dba82:
                
                if ((temp0_170.b & 4) != 0)
                label_1400dbf46:
                    var_208[2] = *(arg6 + rax_21 + 8)
                    
                    if ((temp0_170.b & 8) != 0)
                        var_208[3] = *(arg6 + rax_21 + 0xc)
                else
                label_1400dba8c:
                    
                    if ((temp0_170.b & 8) != 0)
                        var_208[3] = *(arg6 + rax_21 + 0xc)
                
                zmm0 = var_208
            else
                zmm0 = *(arg6 + rax_21)
            
            int32_t var_188_2[0x4] = zmm0
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm12
            int64_t rsi_12 = sx.q(zmm2[0])
            int64_t rax_24 = arg4 + (rsi_12 << 2)
            zmm0 = *(arg4 + (rsi_12 << 2))
            int64_t rdi_6 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            int64_t rsi_14 = arg4 + (rdi_6 << 2)
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg4 + (rdi_6 << 2)))[0].q)
            int64_t rbx_4 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            int64_t rdi_8 = arg4 + (rbx_4 << 2)
            zmm3 = *(arg4 + (rbx_4 << 2))
            int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            int64_t rbx_6 = arg4 + (rbp_2 << 2)
            zmm3 = _mm_unpacklo_ps(zmm3, (*(arg4 + (rbp_2 << 2)))[0].q)
            zmm0 = zmm0[0].q | zmm3[0].q << 0x40
            zmm3 = data_142fc95e0 & zmm12
            float temp0_179[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_24), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_14))[0].q)
            float temp0_182[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_8), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_6))[0].q)
            zmm8 = temp0_179[0].q | temp0_182[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm12
            float temp0_184[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_24), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_14))[0].q)
            float temp0_187[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_8), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_6))[0].q)
            zmm5 = temp0_184[0].q | temp0_187[0].q << 0x40
            int32_t var_118_1[0x4] = zmm0
            float var_108_1[0x4] = zmm8
            float var_e8_1[0x4] = zx.o(0)
            zmm6 = *(arg3 + 0xc)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            uint32_t var_208_2[0x4] = zmm6
            var_1f8 = zmm6
            uint32_t var_1e8_3[0x4] = zmm6
            uint32_t var_1d8_2[0x4] = zmm6
            arg5 = *arg3
            zmm2 = *(arg3 + 4)
            zmm1 = *(arg3 + 8)
            float temp0_189[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            arg5 = _mm_shuffle_ps(arg5, arg5, 0)
            float temp0_191[0x4] = _mm_mul_ps(zmm8, arg5)
            arg5 = _mm_mul_ps(arg5, zmm5)
            float temp0_193[0x4] = _mm_mul_ps(zmm5, temp0_189)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_195[0x4] = _mm_mul_ps(temp0_189, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm1)
            zmm3 = _mm_mul_ps(zx.o(0), zmm6)
            float temp0_199[0x4] = _mm_sub_ps(temp0_193, _mm_mul_ps(zmm1, zmm8))
            zmm0 = _mm_sub_ps(zmm0, arg5)
            float temp0_201[0x4] = _mm_sub_ps(temp0_191, temp0_195)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            float temp0_203[0x4] = _mm_add_ps(temp0_199, temp0_199)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_205[0x4] = _mm_add_ps(temp0_201, temp0_201)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_1c8 = temp0_203
            int32_t var_1b8_3[0x4] = zmm0
            float var_1a8_3[0x4] = temp0_205
            uint32_t var_198_2[0x4] = zmm3
            zmm8 = zmm6
            zmm9 = zmm6
            zmm3 = _mm_mul_ps(zmm3, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_203)
            float temp0_209[0x4] = _mm_mul_ps(zmm8, zmm0)
            float temp0_210[0x4] = _mm_mul_ps(zmm9, temp0_205)
            zmm6 = __addps_xmmps_memps(zmm6, var_118_1)
            float temp0_212[0x4] = __addps_xmmps_memps(temp0_209, var_108_1)
            float temp0_213[0x4] = __addps_xmmps_memps(temp0_210, zmm5)
            zmm3 = __addps_xmmps_memps(zmm3, var_e8_1)
            var_258 = zmm6
            uint32_t var_228_1[0x4] = zmm3
            zmm1 = *arg3
            zmm2 = *(arg3 + 4)
            arg5 = *(arg3 + 8)
            float temp0_215[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm3 = _mm_mul_ps(zmm0, zmm1)
            zmm1 = _mm_mul_ps(zmm1, temp0_205)
            float temp0_219[0x4] = _mm_mul_ps(temp0_205, temp0_215)
            arg5 = _mm_shuffle_ps(arg5, arg5, 0)
            float temp0_221[0x4] = _mm_mul_ps(temp0_215, temp0_203)
            float temp0_222[0x4] = _mm_mul_ps(temp0_203, arg5)
            float temp0_224[0x4] = _mm_sub_ps(temp0_219, _mm_mul_ps(arg5, zmm0))
            float temp0_225[0x4] = _mm_sub_ps(temp0_222, zmm1)
            zmm3 = _mm_sub_ps(zmm3, temp0_221)
            float temp0_227[0x4] = _mm_add_ps(temp0_224, zmm6)
            float temp0_228[0x4] = _mm_add_ps(temp0_225, temp0_212)
            zmm3 = _mm_add_ps(zmm3, temp0_213)
            zmm2 = arg3[1].d
            zmm11 = *(arg3 + 0x14)
            float temp0_231[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_227)
            float temp0_233[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_228)
            zmm0 = *(arg3 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_236[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm4 = _mm_sub_ps(temp0_231, temp0_236)
            float temp0_238[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm1 = _mm_sub_ps(temp0_233, temp0_238)
            zmm5 = (*arg2)[2]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm3 = _mm_sub_ps(zmm0, zmm5)
            float var_208_3[0x4] = zmm4
            int32_t var_168_1[0x4] = zmm1
            var_1f8 = zmm1
            uint32_t var_178_1[0x4] = zmm3
            uint32_t var_1e8_4[0x4] = zmm3
            arg5 = *arg1
            zmm15 = (*arg1)[1]
            arg5 = _mm_shuffle_ps(arg5, arg5, 0)
            zmm14 = _mm_sub_ps(arg5, temp0_231)
            float temp0_244[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm3 = _mm_sub_ps(temp0_244, temp0_233)
            zmm13 = (*arg1)[2]
            float temp0_246[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_231, temp0_236, 6), zmm12)
            char temp0_250 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm12))
            zmm1 = _mm_sub_ps(temp0_246, zmm0)
            var_1c8 = zmm14
            uint32_t var_218_2[0x4] = zmm3
            uint32_t var_1b8_4[0x4] = zmm3
            int32_t var_268_2[0x4] = zmm1
            int32_t var_1a8_4[0x4] = zmm1
            zmm10 = _mm_cmpeq_ps(temp0_231, temp0_236, 2)
            
            if (temp0_250 != 0xf)
                zmm3 = _mm_cmpeq_ps(temp0_233, temp0_238, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm12), zmm3)
                zmm6 = _mm_andnot_ps(zmm10, zmm12)
            
            zmm3 = _mm_cmpeq_epi32(zmm6, zmm12)
            
            if (_mm_movemask_ps(zmm3) != 0xf)
                zmm3 = _mm_cmpeq_ps(zmm0, zmm5, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm12), zmm3)
                zmm6 = zmm10 ^ zmm12
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm12)) == 0xf)
                zmm1 = var_218_2
                arg5 = var_268_2
            else
                uint32_t temp0_264[0x4] = _mm_and_ps(zmm10, zmm12)
                zmm5 = _mm_cmpeq_ps(arg5, temp0_231, 2)
                arg5 = _mm_and_ps(_mm_cmpeq_ps(arg5, temp0_231, 6), temp0_264)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(arg5, temp0_264)) != 0xf)
                    float temp0_270[0x4] = _mm_cmpeq_ps(temp0_244, temp0_233, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, temp0_264), temp0_270)
                    arg5 = zmm5 ^ temp0_264
                
                zmm1 = var_218_2
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(arg5, temp0_264)) != 0xf)
                    float temp0_275[0x4] = _mm_cmpeq_ps(temp0_246, zmm0, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, temp0_264), temp0_275)
                
                arg5 = var_268_2
                zmm10 = _mm_and_ps(temp0_264, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm12)) != 0)
                zmm14 = _mm_max_ps(zmm14, zmm4)
                zmm1 = __maxps_xmmps_memps(zmm1, var_168_1)
                arg5 = __maxps_xmmps_memps(arg5, var_178_1)
                zmm0 = _mm_cmpeq_ps(zmm1, zmm14, 1)
                zmm5 = _mm_and_ps(zmm10, zmm0)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm12)) != 0)
                    float temp0_288[0x4] = _mm_cmpeq_ps(arg5, zmm14, 5)
                    zmm3 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(arg5, zmm14, 1), zmm5), zmm14)
                    zmm2 = _mm_and_ps(temp0_288, zmm5)
                    zmm5 = _mm_and_ps(zmm2, zmm12)
                    
                    if (_mm_movemask_ps(zmm5) != 0)
                        zmm3 = _mm_or_ps(zmm3, _mm_and_ps(zmm2, arg5))
                
                zmm0 = _mm_andnot_ps(zmm0, zmm10)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm12)) != 0)
                    float temp0_300[0x4] = _mm_cmpeq_ps(arg5, zmm1, 1)
                    zmm5 = _mm_and_ps(zmm0, temp0_300)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm12)) != 0)
                        uint32_t temp0_304[0x4] = _mm_andnot_ps(zmm5, zmm3)
                        zmm3 = _mm_or_ps(_mm_and_ps(zmm1, zmm5), temp0_304)
                    
                    zmm2 = _mm_andnot_ps(temp0_300, zmm0)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm12)) != 0)
                        zmm0 = _mm_andnot_ps(zmm2, zmm3)
                        zmm3 = _mm_or_ps(_mm_and_ps(arg5, zmm2), zmm0)
            
            if (_mm_movemask_ps(_mm_andnot_ps(zmm10, zmm12)) != 0)
                zmm5 = _mm_cmpeq_epi32(zmm5, zmm5) ^ zmm10
                int64_t rax_40 = 0
                zmm0 = data_142d3f780
                
                while (true)
                    float temp0_316[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                    uint32_t temp0_317[0x4] = _mm_and_ps(temp0_316, zmm5)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_317, zmm12)) != 0)
                        char temp0_320 = _mm_movemask_ps(temp0_317)
                        
                        if ((temp0_320 & 1) == 0)
                            if ((temp0_320 & 2) != 0)
                                goto label_1400dc104
                            
                            goto label_1400dc019
                        
                        *(&var_258 + rax_40) = zmm4[0]
                        
                        if ((temp0_320 & 2) != 0)
                        label_1400dc104:
                            *(&var_258[1] + rax_40) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                            
                            if ((temp0_320 & 4) == 0)
                                goto label_1400dc022
                            
                            goto label_1400dc118
                        
                    label_1400dc019:
                        
                        if ((temp0_320 & 4) != 0)
                        label_1400dc118:
                            *(&var_258[2] + rax_40) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                            
                            if ((temp0_320 & 8) != 0)
                                *(&var_258[3] + rax_40) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        else
                        label_1400dc022:
                            
                            if ((temp0_320 & 8) != 0)
                                *(&var_258[3] + rax_40) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    
                    zmm2 = _mm_andnot_ps(temp0_316, zmm5)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm12)) != 0)
                        arg5 = *(&var_1c8 + rax_40)
                        float temp0_325[0x4] = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                        uint32_t temp0_326[0x4] = _mm_and_ps(zmm2, temp0_325)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_326, zmm12)) != 0)
                            arg5 ^= zmm0
                            char temp0_329 = _mm_movemask_ps(temp0_326)
                            
                            if ((temp0_329 & 1) == 0)
                                if ((temp0_329 & 2) != 0)
                                    goto label_1400dc140
                                
                                goto label_1400dc082
                            
                            *(&var_258 + rax_40) = arg5[0]
                            
                            if ((temp0_329 & 2) != 0)
                            label_1400dc140:
                                *(&var_258[1] + rax_40) = _mm_shuffle_epi32(arg5, 0xe5)[0]
                                
                                if ((temp0_329 & 4) == 0)
                                    goto label_1400dc08b
                                
                                goto label_1400dc154
                            
                        label_1400dc082:
                            
                            if ((temp0_329 & 4) != 0)
                            label_1400dc154:
                                *(&var_258[2] + rax_40) = _mm_shuffle_epi32(arg5, 0x4e)[0]
                                
                                if ((temp0_329 & 8) != 0)
                                    *(&var_258[3] + rax_40) = _mm_shuffle_epi32(arg5, 0xe7)[0]
                            else
                            label_1400dc08b:
                                
                                if ((temp0_329 & 8) != 0)
                                    *(&var_258[3] + rax_40) = _mm_shuffle_epi32(arg5, 0xe7)[0]
                        
                        zmm4 = _mm_andnot_ps(temp0_325, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm12)) != 0)
                            char temp0_334 = _mm_movemask_ps(zmm4)
                            
                            if ((temp0_334 & 1) == 0)
                                if ((temp0_334 & 2) != 0)
                                    goto label_1400dc179
                                
                                goto label_1400dc0c1
                            
                            *(&var_258 + rax_40) = 0
                            
                            if ((temp0_334 & 2) != 0)
                            label_1400dc179:
                                *(&var_258[1] + rax_40) = 0
                                
                                if ((temp0_334 & 4) == 0)
                                    goto label_1400dc0ca
                                
                                goto label_1400dc18a
                            
                        label_1400dc0c1:
                            
                            if ((temp0_334 & 4) != 0)
                            label_1400dc18a:
                                *(&var_258[2] + rax_40) = 0
                                
                                if ((temp0_334 & 8) != 0)
                                    *(&var_258[3] + rax_40) = 0
                            else
                            label_1400dc0ca:
                                
                                if ((temp0_334 & 8) != 0)
                                    *(&var_258[3] + rax_40) = 0
                    
                    if (rax_40 == 0x20)
                        break
                    
                    zmm4 = *(&var_1f8 + rax_40)
                    rax_40 += 0x10
                
                zmm0 = var_258
                zmm1 = temp0_212
                float temp0_340[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm1), temp0_340)
                float temp0_344[0x4] = _mm_add_ps(_mm_mul_ps(temp0_213, temp0_213), zmm1)
                zmm0 = _mm_rsqrt_ps(temp0_344)
                float temp0_347[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_344, zmm0), zmm0)
                zmm1 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_347), zmm0), 
                    data_142d3f640)
                zmm0 = _mm_rcp_ps(zmm1)
                zmm1 = _mm_mul_ps(zmm1, zmm0)
                float temp0_354[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm1), zmm0)
                zmm3 = _mm_or_ps(_mm_and_ps(zmm3, zmm10), _mm_and_ps(temp0_354, zmm5))
            
            zmm0 = *arg8
            uint32_t i_3 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm3, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm12))
            
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
                    label_1400dc251:
                        uint32_t var_158[0x4] = zmm3
                        uint64_t rdx_1 = zx.q(rdx.d) & 3
                        *arg8 = var_158[rdx_1][0]
                        int32_t var_148[0x4] = var_188_2
                        *arg7 = var_148[rdx_1]
                else
                    uint64_t rflags_2
                    rdx, rflags_2 = _bit_scan_forward(i)
                    i &= not.q(1 << (rdx u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400dc251
                result.b = 1
            while (i != 0)
else
    result = 0
    rbp = 0
    
    while (true)
        char rbx_1 = result.b
        result.b = 1
        
        if ((rbx_1 & 1) == 0)
            uint32_t var_268_1[0x4] = arg5
            zmm1 = *(arg6 + sx.q((rbp << 2).d))
            int32_t var_218_1[0x4] = zmm1
            int32_t temp0_3[0x4] = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1)
            int64_t rax_4 = sx.q(temp0_3[0])
            int64_t rsi_2 = sx.q(_mm_shuffle_epi32(temp0_3, 0xe5)[0])
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(temp0_3, 0x4e)[0])
            int64_t rbx_3 = sx.q(_mm_shuffle_epi32(temp0_3, 0xe7)[0])
            zmm1 = *(arg4 + (rbx_3 << 2) + 4)
            float temp0_7[0x4] =
                _mm_unpacklo_ps(*(arg4 + (rdi_2 << 2)), (*(arg4 + (rbx_3 << 2)))[0].q)
            zmm0 = _mm_unpacklo_ps(*(arg4 + (rdi_2 << 2) + 4), zmm1[0].q)
            zmm4 = *(arg4 + (rax_4 << 2) + 4)
            zmm1 = _mm_unpacklo_ps(*(arg4 + (rax_4 << 2)), (*(arg4 + (rsi_2 << 2)))[0].q)[0].q
                | temp0_7[0].q << 0x40
            zmm4 = _mm_unpacklo_ps(zmm4, (*(arg4 + (rsi_2 << 2) + 4))[0].q)[0].q | zmm0[0].q << 0x40
            float temp0_11[0x4] =
                _mm_unpacklo_ps(*(arg4 + (rax_4 << 2) + 8), (*(arg4 + (rsi_2 << 2) + 8))[0].q)
            zmm0 = _mm_unpacklo_ps(*(arg4 + (rdi_2 << 2) + 8), (*(arg4 + (rbx_3 << 2) + 8))[0].q)
            zmm2 = temp0_11[0].q | zmm0[0].q << 0x40
            var_1c8 = zmm1
            int128_t var_198_1 = zx.o(0)
            zmm0 = *(arg3 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            int32_t var_208_1[0x4] = zmm0
            var_1f8 = zmm0
            int32_t var_1e8_1[0x4] = zmm0
            int32_t var_1d8_1[0x4] = zmm0
            zmm9 = *arg3
            zmm8 = *(arg3 + 4)
            zmm10 = *(arg3 + 8)
            float temp0_14[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_15[0x4] = _mm_mul_ps(zmm2, temp0_14)
            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm3 = _mm_mul_ps(zmm1, zmm10)
            float temp0_18[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            arg5 = _mm_mul_ps(zmm4, temp0_18)
            float temp0_21[0x4] = _mm_sub_ps(temp0_15, _mm_mul_ps(zmm4, zmm10))
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm2, temp0_18))
            arg5 = _mm_sub_ps(arg5, _mm_mul_ps(zmm1, temp0_14))
            float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            arg5 = _mm_add_ps(arg5, arg5)
            float temp0_29[0x4] = _mm_mul_ps(zmm0, temp0_26)
            float temp0_30[0x4] = _mm_mul_ps(zmm0, zmm3)
            zmm0 = _mm_mul_ps(zmm0, arg5)
            float temp0_32[0x4] = __addps_xmmps_memps(temp0_29, var_1c8)
            float temp0_33[0x4] = __addps_xmmps_memps(temp0_30, zmm4)
            zmm0 = __addps_xmmps_memps(zmm0, zmm2)
            zmm6 = _mm_mul_ps(arg5, temp0_14)
            float temp0_36[0x4] = _mm_mul_ps(temp0_26, zmm10)
            zmm1 = _mm_mul_ps(zmm3, temp0_18)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, zmm10)), temp0_32)
            float temp0_43[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_36, _mm_mul_ps(arg5, temp0_18)), temp0_33)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_26, temp0_14)), zmm0)
            zmm15 = arg3[1].d
            zmm10 = *(arg3 + 0x14)
            float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm6)
            zmm10 = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_43)
            arg5 = *(arg3 + 0x18)
            arg5 = _mm_add_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm1)
            zmm3 = *arg2
            zmm6 = (*arg2)[1]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm2 = _mm_sub_ps(temp0_48, zmm3)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm0 = _mm_sub_ps(zmm10, zmm6)
            zmm13 = (*arg2)[2]
            float temp0_57[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm14 = _mm_sub_ps(arg5, temp0_57)
            var_208 = zmm2
            int32_t var_188_1[0x4] = zmm0
            var_1f8 = zmm0
            uint32_t var_1e8_2[0x4] = zmm14
            zmm0 = *arg1
            zmm4 = (*arg1)[1]
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            zmm1 = _mm_sub_ps(zmm0, temp0_48)
            float temp0_61[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_62[0x4] = _mm_sub_ps(temp0_61, zmm10)
            zmm8 = (*arg1)[2]
            float temp0_63[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            char temp0_65 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_48, zmm3, 6))
            float temp0_66[0x4] = _mm_sub_ps(temp0_63, arg5)
            var_1c8 = zmm1
            float var_1b8_2[0x4] = temp0_62
            float var_1a8_2[0x4] = temp0_66
            
            if (temp0_65 == 0xf)
                zmm5 = _mm_cmpeq_ps(temp0_48, zmm3, 2)
                zmm13 = _mm_cmpeq_epi32(temp0_57, temp0_57)
                zmm3 = data_142d3f780
                arg5 = var_268_1
            label_1400db672:
                zmm9 = _mm_srai_epi32(_mm_slli_epi32(zmm5, 0x1f), 0x1f)
                
                if (_mm_movemask_ps(zmm9) != 0)
                label_1400db683:
                    zmm1 = _mm_max_ps(zmm1, zmm2)
                    float temp0_99[0x4] = __maxps_xmmps_memps(temp0_62, var_188_1)
                    float temp0_100[0x4] = _mm_max_ps(temp0_66, zmm14)
                    zmm0 = _mm_cmpeq_ps(temp0_99, zmm1, 1)
                    zmm5 = _mm_and_ps(zmm9, zmm0)
                    
                    if (_mm_movemask_ps(zmm5) != 0)
                        float temp0_104[0x4] = _mm_cmpeq_ps(temp0_100, zmm1, 1)
                        uint32_t temp0_105[0x4] = _mm_and_ps(zmm5, temp0_104)
                        
                        if (_mm_movemask_ps(temp0_105) != 0)
                            zmm8 = _mm_andnot_ps(temp0_105, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(zmm1, temp0_105), zmm8)
                        
                        zmm4 = _mm_andnot_ps(temp0_104, zmm5)
                        
                        if (_mm_movemask_ps(zmm4) != 0)
                            zmm1 = _mm_andnot_ps(zmm4, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(zmm4, temp0_100), zmm1)
                    
                    zmm0 = _mm_andnot_ps(zmm0, zmm9)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm1 = _mm_cmpeq_ps(temp0_100, temp0_99, 1)
                        zmm4 = _mm_and_ps(zmm0, zmm1)
                        
                        if (_mm_movemask_ps(zmm4) != 0)
                            zmm5 = _mm_andnot_ps(zmm4, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(temp0_99, zmm4), zmm5)
                        
                        zmm1 = _mm_andnot_ps(zmm1, zmm0)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm0 = _mm_andnot_ps(zmm1, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(temp0_100, zmm1), zmm0)
            else
                float temp0_67[0x4] = _mm_cmpeq_ps(temp0_48, zmm3, 2)
                zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm10, zmm6, 2), temp0_67)
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                
                if (_mm_movemask_ps(zmm5 ^ zmm6) == 0xf)
                    zmm3 = data_142d3f780
                    arg5 = var_268_1
                    zmm13 = _mm_cmpeq_epi32(temp0_57, temp0_57)
                    goto label_1400db672
                
                zmm9 = _mm_and_ps(_mm_cmpeq_ps(arg5, temp0_57, 2), zmm5)
                bool cond:1_1 = _mm_movemask_ps(zmm9 ^ zmm6) == 0xf
                zmm13 = _mm_cmpeq_epi32(temp0_57, temp0_57)
                
                if (cond:1_1)
                    zmm3 = data_142d3f780
                    arg5 = var_268_1
                    
                    if (_mm_movemask_ps(zmm9) != 0)
                        goto label_1400db683
                else
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_48, 6), zmm9)
                    char temp0_79 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9))
                    zmm0 = _mm_cmpeq_ps(zmm0, temp0_48, 2)
                    
                    if (temp0_79 != 0xf)
                        float temp0_81[0x4] = _mm_cmpeq_ps(temp0_61, zmm10, 2)
                        zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm9), temp0_81)
                        zmm6 = _mm_andnot_ps(zmm0, zmm9)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9)) != 0xf)
                        float temp0_87[0x4] = _mm_cmpeq_ps(temp0_63, arg5, 2)
                        zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm9), temp0_87)
                    
                    zmm3 = data_142d3f780
                    arg5 = var_268_1
                    zmm9 = _mm_and_ps(zmm9, zmm0)
                    
                    if (_mm_movemask_ps(zmm9) != 0)
                        goto label_1400db683
            
            zmm6 = zmm9 ^ zmm13
            
            if (_mm_movemask_ps(zmm6) != 0)
                int64_t rax_19 = 0
                
                while (true)
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                    uint32_t temp0_131 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm6))
                    
                    if (temp0_131 != 0)
                        char rdi_3 = temp0_131.b
                        
                        if ((rdi_3 & 1) == 0)
                            if ((rdi_3 & 2) != 0)
                                goto label_1400db875
                            
                            goto label_1400db793
                        
                        *(&var_258 + rax_19) = zmm2[0]
                        
                        if ((rdi_3 & 2) != 0)
                        label_1400db875:
                            *(&var_258[1] + rax_19) = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            
                            if ((rdi_3 & 4) == 0)
                                goto label_1400db79d
                            
                            goto label_1400db88a
                        
                    label_1400db793:
                        
                        if ((rdi_3 & 4) != 0)
                        label_1400db88a:
                            *(&var_258[2] + rax_19) = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            
                            if ((rdi_3 & 8) != 0)
                                *(&var_258[3] + rax_19) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        else
                        label_1400db79d:
                            
                            if ((rdi_3 & 8) != 0)
                                *(&var_258[3] + rax_19) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                    
                    zmm0 = _mm_andnot_ps(zmm0, zmm6)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm2 = *(&var_1c8 + rax_19)
                        zmm1 = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                        uint32_t temp0_137 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm1))
                        
                        if (temp0_137 != 0)
                            zmm2 ^= zmm3
                            char rdi_4 = temp0_137.b
                            
                            if ((rdi_4 & 1) == 0)
                                if ((rdi_4 & 2) != 0)
                                    goto label_1400db8b4
                                
                                goto label_1400db7f1
                            
                            *(&var_258 + rax_19) = zmm2[0]
                            
                            if ((rdi_4 & 2) != 0)
                            label_1400db8b4:
                                *(&var_258[1] + rax_19) = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                
                                if ((rdi_4 & 4) == 0)
                                    goto label_1400db7fb
                                
                                goto label_1400db8c9
                            
                        label_1400db7f1:
                            
                            if ((rdi_4 & 4) != 0)
                            label_1400db8c9:
                                *(&var_258[2] + rax_19) = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                
                                if ((rdi_4 & 8) != 0)
                                    *(&var_258[3] + rax_19) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            else
                            label_1400db7fb:
                                
                                if ((rdi_4 & 8) != 0)
                                    *(&var_258[3] + rax_19) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        uint32_t temp0_140 = _mm_movemask_ps(_mm_andnot_ps(zmm1, zmm0))
                        
                        if (temp0_140 != 0)
                            char rsi_7 = temp0_140.b
                            
                            if ((rsi_7 & 1) == 0)
                                if ((rsi_7 & 2) != 0)
                                    goto label_1400db8f0
                                
                                goto label_1400db82c
                            
                            *(&var_258 + rax_19) = 0
                            
                            if ((rsi_7 & 2) != 0)
                            label_1400db8f0:
                                *(&var_258[1] + rax_19) = 0
                                
                                if ((rsi_7 & 4) == 0)
                                    goto label_1400db836
                                
                                goto label_1400db902
                            
                        label_1400db82c:
                            
                            if ((rsi_7 & 4) != 0)
                            label_1400db902:
                                *(&var_258[2] + rax_19) = 0
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_258[3] + rax_19) = 0
                            else
                            label_1400db836:
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_258[3] + rax_19) = 0
                    
                    if (rax_19 == 0x20)
                        break
                    
                    zmm2 = *(&var_1f8 + rax_19)
                    rax_19 += 0x10
                
                zmm0 = var_258
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                int32_t var_248[0x4]
                zmm1 = _mm_add_ps(_mm_mul_ps(var_248, var_248), zmm0)
                float var_238[0x4]
                float temp0_150[0x4] = _mm_add_ps(_mm_mul_ps(var_238, var_238), zmm1)
                zmm0 = _mm_rsqrt_ps(temp0_150)
                float temp0_153[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_150, zmm0), zmm0)
                zmm1 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_153), zmm0), 
                    data_142d3f640)
                zmm0 = _mm_rcp_ps(zmm1)
                zmm1 = _mm_mul_ps(zmm1, zmm0)
                float temp0_160[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm1), zmm0)
                arg5 = _mm_or_ps(_mm_and_ps(arg5, zmm9), _mm_and_ps(temp0_160, zmm6))
            
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
                    uint64_t rsi_8
                    
                    if (i_1 == 0)
                        rsi_8 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400db9d1:
                            uint32_t var_138[0x4] = arg5
                            uint64_t rsi_9 = zx.q(rsi_8.d) & 3
                            *arg8 = var_138[rsi_9][0]
                            int32_t var_128[0x4] = var_218_1
                            *arg7 = var_128[rsi_9]
                    else
                        uint64_t rflags_1
                        rsi_8, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rsi_8 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400db9d1
                    result.b = 1
                while (i_1 != 0)
        
        rbp = zx.q(rbp.d + 4)
        
        if (rbp.d s>= r12_4)
            break
    
    if (rbp.d s< arg9)
        goto label_1400dba18
return result
