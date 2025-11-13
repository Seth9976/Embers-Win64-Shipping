// 函数: sub_1400dd780
// 地址: 0x1400dd780
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
float zmm7[0x4]
float var_c8[0x4] = zmm7
uint32_t var_d8[0x4] = arg5
int32_t r15_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
int32_t result
uint32_t var_248[0x4]
uint32_t var_208[0x4]
uint32_t var_1a8[0x4]
uint64_t rdi
uint32_t zmm0[0x4]
float zmm1[0x4]
uint32_t zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
float zmm5[0x4]

if (r15_4 s<= 0)
    rdi = 0
    result = 0
    
    if (0 s< arg8)
    label_1400ddef9:
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm3 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi.d), 0), data_142e11d00)
            zmm1 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm3)
            uint32_t var_1c8_2[0x4] = zmm3
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm3, zmm3), zmm3) & zmm1
            int64_t rsi_8 = sx.q(zmm2[0])
            void* rax_21 = arg4 + (rsi_8 << 2)
            zmm0 = *(arg4 + (rsi_8 << 2))
            int64_t rdi_1 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            void* rsi_10 = arg4 + (rdi_1 << 2)
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg4 + (rdi_1 << 2)))[0].q)
            int64_t rbx_2 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            void* rdi_3 = arg4 + (rbx_2 << 2)
            zmm3 = *(arg4 + (rbx_2 << 2))
            int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbx_4 = arg4 + (rbp_3 << 2)
            zmm3 = _mm_unpacklo_ps(zmm3, (*(arg4 + (rbp_3 << 2)))[0].q)
            zmm0 = zmm0[0].q | zmm3[0].q << 0x40
            zmm3 = data_142fc95e0 & zmm1
            float temp0_178[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_21), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_10))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_4))[0].q)
            zmm8 = temp0_178[0].q | zmm4[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm1
            float temp0_183[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_21), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_10))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_4))[0].q)
            zmm5 = temp0_183[0].q | zmm4[0].q << 0x40
            uint32_t var_118_1[0x4] = zmm0
            float var_108_1[0x4] = zmm8
            float var_e8_1[0x4] = zx.o(0)
            arg5 = *(arg3 + 0xc)
            arg5 = _mm_shuffle_ps(arg5, arg5, 0)
            uint32_t var_1b8_3[0x4] = arg5
            var_1a8 = arg5
            uint32_t var_198_3[0x4] = arg5
            uint32_t var_188_2[0x4] = arg5
            zmm7 = *arg3
            zmm2 = *(arg3 + 4)
            zmm4 = *(arg3 + 8)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_189[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_190[0x4] = _mm_mul_ps(zmm8, temp0_189)
            float temp0_191[0x4] = _mm_mul_ps(temp0_189, zmm5)
            float temp0_192[0x4] = _mm_mul_ps(zmm5, zmm2)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm2 = _mm_mul_ps(zmm2, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm4)
            zmm3 = _mm_mul_ps(zx.o(0), arg5)
            float temp0_198[0x4] = _mm_sub_ps(temp0_192, _mm_mul_ps(zmm4, zmm8))
            zmm0 = _mm_sub_ps(zmm0, temp0_191)
            float temp0_200[0x4] = _mm_sub_ps(temp0_190, zmm2)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            float temp0_202[0x4] = _mm_add_ps(temp0_198, temp0_198)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_204[0x4] = _mm_add_ps(temp0_200, temp0_200)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_208 = temp0_202
            uint32_t var_1f8_3[0x4] = zmm0
            float var_1e8_3[0x4] = temp0_204
            uint32_t var_1d8_2[0x4] = zmm3
            zmm8 = arg5
            zmm10 = arg5
            zmm3 = _mm_mul_ps(zmm3, arg5)
            arg5 = _mm_mul_ps(arg5, temp0_202)
            float temp0_208[0x4] = _mm_mul_ps(zmm8, zmm0)
            float temp0_209[0x4] = _mm_mul_ps(zmm10, temp0_204)
            arg5 = __addps_xmmps_memps(arg5, var_118_1)
            float temp0_211[0x4] = __addps_xmmps_memps(temp0_208, var_108_1)
            float temp0_212[0x4] = __addps_xmmps_memps(temp0_209, zmm5)
            zmm3 = __addps_xmmps_memps(zmm3, var_e8_1)
            var_248 = arg5
            uint32_t var_218_1[0x4] = zmm3
            zmm4 = *arg3
            zmm2 = *(arg3 + 4)
            zmm7 = *(arg3 + 8)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm0, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_204)
            float temp0_218[0x4] = _mm_mul_ps(temp0_204, zmm2)
            float temp0_219[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm2 = _mm_mul_ps(zmm2, temp0_202)
            float temp0_221[0x4] = _mm_mul_ps(temp0_202, temp0_219)
            float temp0_223[0x4] = _mm_sub_ps(temp0_218, _mm_mul_ps(temp0_219, zmm0))
            float temp0_224[0x4] = _mm_sub_ps(temp0_221, zmm4)
            zmm3 = _mm_sub_ps(zmm3, zmm2)
            float temp0_226[0x4] = _mm_add_ps(temp0_223, arg5)
            float temp0_227[0x4] = _mm_add_ps(temp0_224, temp0_211)
            zmm3 = _mm_add_ps(zmm3, temp0_212)
            zmm2 = arg3[1].d
            zmm11 = *(arg3 + 0x14)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_226)
            float temp0_232[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_227)
            zmm0 = *(arg3 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_235[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm4 = _mm_sub_ps(zmm2, temp0_235)
            float temp0_237[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm3 = _mm_sub_ps(temp0_232, temp0_237)
            zmm5 = (*arg2)[2]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            arg5 = _mm_sub_ps(zmm0, zmm5)
            uint32_t var_1b8_4[0x4] = zmm4
            float var_168_1[0x4] = zmm3
            var_1a8 = zmm3
            uint32_t var_178_1[0x4] = arg5
            uint32_t var_198_4[0x4] = arg5
            zmm7 = *arg1
            zmm14 = (*arg1)[1]
            float temp0_241[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_242[0x4] = _mm_sub_ps(temp0_241, zmm2)
            float temp0_243[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            arg5 = _mm_and_ps(_mm_cmpeq_ps(zmm2, temp0_235, 6), zmm1)
            char temp0_247 = _mm_movemask_ps(_mm_cmpeq_epi32(arg5, zmm1))
            float temp0_248[0x4] = _mm_sub_ps(temp0_243, temp0_232)
            zmm15 = (*arg1)[2]
            float temp0_249[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm3 = _mm_sub_ps(temp0_249, zmm0)
            var_208 = temp0_242
            float var_1f8_4[0x4] = temp0_248
            uint32_t var_258_2[0x4] = zmm3
            uint32_t var_1e8_4[0x4] = zmm3
            zmm10 = _mm_cmpeq_ps(zmm2, temp0_235, 2)
            
            if (temp0_247 != 0xf)
                zmm3 = _mm_cmpeq_ps(temp0_232, temp0_237, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm1), zmm3)
                arg5 = _mm_andnot_ps(zmm10, zmm1)
            
            zmm3 = _mm_cmpeq_epi32(arg5, zmm1)
            
            if (_mm_movemask_ps(zmm3) != 0xf)
                zmm3 = _mm_cmpeq_ps(zmm0, zmm5, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm1), zmm3)
                arg5 = zmm10 ^ zmm1
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(arg5, zmm1)) == 0xf)
                zmm7 = var_258_2
            else
                zmm10 = _mm_and_ps(zmm10, zmm1)
                zmm5 = _mm_cmpeq_ps(temp0_241, zmm2, 2)
                zmm7 = _mm_and_ps(_mm_cmpeq_ps(temp0_241, zmm2, 6), zmm10)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm7, zmm10)) != 0xf)
                    float temp0_269[0x4] = _mm_cmpeq_ps(temp0_243, temp0_232, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm10), temp0_269)
                    zmm7 = zmm5 ^ zmm10
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm7, zmm10)) != 0xf)
                    float temp0_274[0x4] = _mm_cmpeq_ps(temp0_249, zmm0, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm10), temp0_274)
                
                zmm7 = var_258_2
                zmm10 = _mm_and_ps(zmm10, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm1)) != 0)
                float temp0_280[0x4] = _mm_max_ps(temp0_242, zmm4)
                float temp0_281[0x4] = __maxps_xmmps_memps(temp0_248, var_168_1)
                float temp0_282[0x4] = __maxps_xmmps_memps(zmm7, var_178_1)
                zmm0 = _mm_cmpeq_ps(temp0_281, temp0_280, 1)
                zmm5 = _mm_and_ps(zmm10, zmm0)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                    zmm2 = _mm_cmpeq_ps(temp0_282, temp0_280, 5)
                    zmm3 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_282, temp0_280, 1), zmm5), 
                        temp0_280)
                    uint32_t temp0_291[0x4] = _mm_and_ps(zmm2, zmm5)
                    zmm5 = _mm_and_ps(temp0_291, zmm1)
                    
                    if (_mm_movemask_ps(zmm5) != 0)
                        zmm3 = _mm_or_ps(zmm3, _mm_and_ps(temp0_291, temp0_282))
                
                uint32_t temp0_296[0x4] = _mm_andnot_ps(zmm0, zmm10)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_296, zmm1)) != 0)
                    zmm2 = _mm_cmpeq_ps(temp0_282, temp0_281, 1)
                    zmm5 = _mm_and_ps(temp0_296, zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                        uint32_t temp0_303[0x4] = _mm_andnot_ps(zmm5, zmm3)
                        zmm3 = _mm_or_ps(_mm_and_ps(temp0_281, zmm5), temp0_303)
                    
                    uint32_t temp0_306[0x4] = _mm_andnot_ps(zmm2, temp0_296)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_306, zmm1)) != 0)
                        uint32_t temp0_309[0x4] = _mm_andnot_ps(temp0_306, zmm3)
                        zmm3 = _mm_or_ps(_mm_and_ps(temp0_282, temp0_306), temp0_309)
            
            if (_mm_movemask_ps(_mm_andnot_ps(zmm10, zmm1)) != 0)
                zmm5 = _mm_cmpeq_epi32(zmm5, zmm5) ^ zmm10
                int64_t rax_37 = 0
                zmm8 = data_142d3f780
                
                while (true)
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                    uint32_t temp0_316[0x4] = _mm_and_ps(zmm0, zmm5)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_316, zmm1)) != 0)
                        char temp0_319 = _mm_movemask_ps(temp0_316)
                        
                        if ((temp0_319 & 1) == 0)
                            if ((temp0_319 & 2) != 0)
                                goto label_1400de544
                            
                            goto label_1400de45b
                        
                        *(&var_248 + rax_37) = zmm4[0]
                        
                        if ((temp0_319 & 2) != 0)
                        label_1400de544:
                            *(&var_248[1] + rax_37) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                            
                            if ((temp0_319 & 4) == 0)
                                goto label_1400de464
                            
                            goto label_1400de558
                        
                    label_1400de45b:
                        
                        if ((temp0_319 & 4) != 0)
                        label_1400de558:
                            *(&var_248[2] + rax_37) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                            
                            if ((temp0_319 & 8) != 0)
                                *(&var_248[3] + rax_37) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        else
                        label_1400de464:
                            
                            if ((temp0_319 & 8) != 0)
                                *(&var_248[3] + rax_37) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    
                    uint32_t temp0_321[0x4] = _mm_andnot_ps(zmm0, zmm5)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_321, zmm1)) != 0)
                        zmm7 = *(&var_208 + rax_37)
                        zmm4 = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                        uint32_t temp0_325[0x4] = _mm_and_ps(temp0_321, zmm4)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_325, zmm1)) != 0)
                            zmm7 ^= zmm8
                            char temp0_328 = _mm_movemask_ps(temp0_325)
                            
                            if ((temp0_328 & 1) == 0)
                                if ((temp0_328 & 2) != 0)
                                    goto label_1400de580
                                
                                goto label_1400de4c0
                            
                            *(&var_248 + rax_37) = zmm7[0]
                            
                            if ((temp0_328 & 2) != 0)
                            label_1400de580:
                                *(&var_248[1] + rax_37) = _mm_shuffle_epi32(zmm7, 0xe5)[0]
                                
                                if ((temp0_328 & 4) == 0)
                                    goto label_1400de4c9
                                
                                goto label_1400de594
                            
                        label_1400de4c0:
                            
                            if ((temp0_328 & 4) != 0)
                            label_1400de594:
                                *(&var_248[2] + rax_37) = _mm_shuffle_epi32(zmm7, 0x4e)[0]
                                
                                if ((temp0_328 & 8) != 0)
                                    *(&var_248[3] + rax_37) = _mm_shuffle_epi32(zmm7, 0xe7)[0]
                            else
                            label_1400de4c9:
                                
                                if ((temp0_328 & 8) != 0)
                                    *(&var_248[3] + rax_37) = _mm_shuffle_epi32(zmm7, 0xe7)[0]
                        
                        uint32_t temp0_330[0x4] = _mm_andnot_ps(zmm4, temp0_321)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_330, zmm1)) != 0)
                            char temp0_333 = _mm_movemask_ps(temp0_330)
                            
                            if ((temp0_333 & 1) == 0)
                                if ((temp0_333 & 2) != 0)
                                    goto label_1400de5b9
                                
                                goto label_1400de4fe
                            
                            *(&var_248 + rax_37) = 0
                            
                            if ((temp0_333 & 2) != 0)
                            label_1400de5b9:
                                *(&var_248[1] + rax_37) = 0
                                
                                if ((temp0_333 & 4) == 0)
                                    goto label_1400de507
                                
                                goto label_1400de5ca
                            
                        label_1400de4fe:
                            
                            if ((temp0_333 & 4) != 0)
                            label_1400de5ca:
                                *(&var_248[2] + rax_37) = 0
                                
                                if ((temp0_333 & 8) != 0)
                                    *(&var_248[3] + rax_37) = 0
                            else
                            label_1400de507:
                                
                                if ((temp0_333 & 8) != 0)
                                    *(&var_248[3] + rax_37) = 0
                    
                    if (rax_37 == 0x20)
                        break
                    
                    zmm4 = *(&var_1a8 + rax_37)
                    rax_37 += 0x10
                
                zmm0 = var_248
                zmm2 = temp0_211
                zmm4 = temp0_212
                arg5 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                zmm2 = _mm_add_ps(_mm_mul_ps(zmm2, zmm2), arg5)
                zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm4), zmm2)
                zmm0 = _mm_rsqrt_ps(zmm4)
                zmm4 = _mm_mul_ps(_mm_mul_ps(zmm4, zmm0), zmm0)
                zmm2 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm4), zmm0), 
                    data_142d3f640)
                zmm0 = _mm_rcp_ps(zmm2)
                zmm2 = _mm_mul_ps(zmm2, zmm0)
                zmm4 = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm2), zmm0)
                zmm3 = _mm_or_ps(_mm_and_ps(zmm3, zmm10), _mm_and_ps(zmm4, zmm5))
            
            zmm0 = *arg7
            uint32_t i_3 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm3, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm1))
            
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
                    label_1400de691:
                        uint32_t var_158[0x4] = zmm3
                        uint64_t rdx_1 = zx.q(rdx.d) & 3
                        *arg7 = var_158[rdx_1][0]
                        float var_148[0x4] = var_1c8_2
                        *arg6 = var_148[rdx_1]
                else
                    uint64_t rflags_2
                    rdx, rflags_2 = _bit_scan_forward(i)
                    i &= not.q(1 << (rdx u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400de691
                result.b = 1
            while (i != 0)
else
    result = 0
    rdi = 0
    
    while (true)
        char rbx_1 = result.b
        result.b = 1
        
        if ((rbx_1 & 1) == 0)
            uint32_t var_258_1[0x4] = arg5
            int64_t rax_3 = sx.q((rdi << 2).d * 3)
            zmm4 = *(arg4 + rax_3)
            zmm0 = *(arg4 + rax_3 + 0x10)
            zmm1 = *(arg4 + rax_3 + 0x20)
            arg5 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
                zmm1, 0xc4)
            zmm2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            zmm4 = _mm_shuffle_ps(zmm4, zmm0, 5)
            zmm4 = _mm_shuffle_ps(zmm4, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm0, 0xf8), 0x22), 0x28)
            var_208 = zmm2
            uint32_t var_1f8_1[0x4] = zmm4
            int128_t var_1d8_1 = zx.o(0)
            zmm0 = *(arg3 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            uint32_t var_1b8_1[0x4] = zmm0
            var_1a8 = zmm0
            uint32_t var_198_1[0x4] = zmm0
            uint32_t var_188_1[0x4] = zmm0
            zmm9 = *arg3
            zmm8 = *(arg3 + 4)
            zmm10 = *(arg3 + 8)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm3 = _mm_mul_ps(temp0_13, arg5)
            float temp0_15[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_16[0x4] = _mm_mul_ps(temp0_15, zmm2)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_18[0x4] = _mm_mul_ps(temp0_17, zmm4)
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm4, temp0_15))
            float temp0_22[0x4] = _mm_sub_ps(temp0_16, _mm_mul_ps(arg5, temp0_17))
            float temp0_24[0x4] = _mm_sub_ps(temp0_18, _mm_mul_ps(zmm2, temp0_13))
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_22)
            float temp0_27[0x4] = _mm_add_ps(temp0_24, temp0_24)
            zmm4 = _mm_mul_ps(zmm0, zmm3)
            float temp0_29[0x4] = _mm_mul_ps(zmm0, temp0_26)
            zmm0 = _mm_mul_ps(zmm0, temp0_27)
            zmm4 = __addps_xmmps_memps(zmm4, var_208)
            float temp0_32[0x4] = __addps_xmmps_memps(temp0_29, var_1f8_1)
            zmm0 = __addps_xmmps_memps(zmm0, arg5)
            float temp0_34[0x4] = _mm_mul_ps(temp0_27, temp0_13)
            zmm2 = _mm_mul_ps(zmm3, temp0_15)
            arg5 = _mm_mul_ps(temp0_26, temp0_17)
            float temp0_39[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_34, _mm_mul_ps(temp0_26, temp0_15)), zmm4)
            zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(temp0_27, temp0_17)), temp0_32)
            arg5 = _mm_add_ps(_mm_sub_ps(arg5, _mm_mul_ps(zmm3, temp0_13)), zmm0)
            zmm9 = arg3[1].d
            zmm10 = *(arg3 + 0x14)
            float temp0_47[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_39)
            float temp0_49[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm2)
            zmm14 = *(arg3 + 0x18)
            float temp0_51[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), arg5)
            zmm0 = *arg2
            zmm7 = (*arg2)[1]
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            zmm4 = _mm_sub_ps(temp0_47, zmm0)
            float temp0_54[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_55[0x4] = _mm_sub_ps(temp0_49, temp0_54)
            zmm13 = (*arg2)[2]
            float temp0_56[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            float temp0_57[0x4] = _mm_sub_ps(temp0_51, temp0_56)
            uint32_t var_1b8_2[0x4] = zmm4
            var_1a8 = temp0_55
            float var_198_2[0x4] = temp0_57
            zmm5 = *arg1
            zmm3 = (*arg1)[1]
            float temp0_58[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_59[0x4] = _mm_sub_ps(temp0_58, temp0_47)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_61[0x4] = _mm_sub_ps(zmm3, temp0_49)
            zmm8 = (*arg1)[2]
            float temp0_62[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            char temp0_64 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_47, zmm0, 6))
            float temp0_65[0x4] = _mm_sub_ps(temp0_62, temp0_51)
            var_208 = temp0_59
            float var_1f8_2[0x4] = temp0_61
            float var_1e8_2[0x4] = temp0_65
            
            if (temp0_64 == 0xf)
                zmm0 = _mm_cmpeq_ps(temp0_47, zmm0, 2)
            label_1400ddb32:
                zmm13 = _mm_cmpeq_epi32(temp0_56, temp0_56)
                zmm8 = data_142d3f780
                arg5 = var_258_1
                zmm9 = _mm_srai_epi32(_mm_slli_epi32(zmm0, 0x1f), 0x1f)
                
                if (_mm_movemask_ps(zmm9) != 0)
                label_1400ddb5e:
                    float temp0_96[0x4] = _mm_max_ps(temp0_59, zmm4)
                    float temp0_97[0x4] = __maxps_xmmps_memps(temp0_61, temp0_55)
                    float temp0_98[0x4] = _mm_max_ps(temp0_65, temp0_57)
                    zmm0 = _mm_cmpeq_ps(temp0_97, temp0_96, 1)
                    uint32_t temp0_100[0x4] = _mm_and_ps(zmm9, zmm0)
                    
                    if (_mm_movemask_ps(temp0_100) != 0)
                        zmm2 = _mm_cmpeq_ps(temp0_98, temp0_96, 1)
                        zmm5 = _mm_and_ps(temp0_100, zmm2)
                        
                        if (_mm_movemask_ps(zmm5) != 0)
                            zmm7 = _mm_andnot_ps(zmm5, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(temp0_96, zmm5), zmm7)
                        
                        uint32_t temp0_108[0x4] = _mm_andnot_ps(zmm2, temp0_100)
                        
                        if (_mm_movemask_ps(temp0_108) != 0)
                            zmm1 = _mm_andnot_ps(temp0_108, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(temp0_108, temp0_98), zmm1)
                    
                    uint32_t temp0_113[0x4] = _mm_andnot_ps(zmm0, zmm9)
                    
                    if (_mm_movemask_ps(temp0_113) != 0)
                        float temp0_115[0x4] = _mm_cmpeq_ps(temp0_98, temp0_97, 1)
                        uint32_t temp0_116[0x4] = _mm_and_ps(temp0_113, temp0_115)
                        
                        if (_mm_movemask_ps(temp0_116) != 0)
                            uint32_t temp0_118[0x4] = _mm_andnot_ps(temp0_116, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(temp0_97, temp0_116), temp0_118)
                        
                        zmm1 = _mm_andnot_ps(temp0_115, temp0_113)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            uint32_t temp0_123[0x4] = _mm_andnot_ps(zmm1, arg5)
                            arg5 = _mm_or_ps(_mm_and_ps(temp0_98, zmm1), temp0_123)
            else
                zmm2 = _mm_cmpeq_ps(temp0_47, zmm0, 2)
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_49, temp0_54, 2), zmm2)
                arg5 = _mm_cmpeq_epi32(arg5, arg5)
                
                if (_mm_movemask_ps(zmm0 ^ arg5) == 0xf)
                    goto label_1400ddb32
                
                zmm7 = _mm_and_ps(_mm_cmpeq_ps(temp0_51, temp0_56, 2), zmm0)
                bool cond:1_1 = _mm_movemask_ps(zmm7 ^ arg5) == 0xf
                zmm13 = _mm_cmpeq_epi32(temp0_56, temp0_56)
                
                if (cond:1_1)
                    zmm8 = data_142d3f780
                    arg5 = var_258_1
                    zmm9 = zmm7
                    
                    if (_mm_movemask_ps(zmm9) != 0)
                        goto label_1400ddb5e
                else
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_58, temp0_47, 6), zmm7)
                    char temp0_78 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm0, zmm7))
                    zmm5 = _mm_cmpeq_ps(temp0_58, temp0_47, 2)
                    
                    if (temp0_78 != 0xf)
                        zmm3 = _mm_cmpeq_ps(zmm3, temp0_49, 2)
                        zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm7), zmm3)
                        zmm0 = _mm_andnot_ps(zmm5, zmm7)
                    
                    arg5 = var_258_1
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm0, zmm7)) != 0xf)
                        float temp0_86[0x4] = _mm_cmpeq_ps(temp0_62, temp0_51, 2)
                        zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm7), temp0_86)
                    
                    zmm8 = data_142d3f780
                    zmm9 = _mm_and_ps(zmm7, zmm5)
                    
                    if (_mm_movemask_ps(zmm9) != 0)
                        goto label_1400ddb5e
            
            zmm7 = zmm9 ^ zmm13
            
            if (_mm_movemask_ps(zmm7) != 0)
                int64_t rax_18 = 0
                
                while (true)
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                    uint32_t temp0_129 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm7))
                    
                    if (temp0_129 != 0)
                        char rsi_2 = temp0_129.b
                        
                        if ((rsi_2 & 1) == 0)
                            if ((rsi_2 & 2) != 0)
                                goto label_1400ddd45
                            
                            goto label_1400ddc66
                        
                        *(&var_248 + rax_18) = zmm4[0]
                        
                        if ((rsi_2 & 2) != 0)
                        label_1400ddd45:
                            *(&var_248[1] + rax_18) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                            
                            if ((rsi_2 & 4) == 0)
                                goto label_1400ddc70
                            
                            goto label_1400ddd5a
                        
                    label_1400ddc66:
                        
                        if ((rsi_2 & 4) != 0)
                        label_1400ddd5a:
                            *(&var_248[2] + rax_18) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                            
                            if ((rsi_2 & 8) != 0)
                                *(&var_248[3] + rax_18) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        else
                        label_1400ddc70:
                            
                            if ((rsi_2 & 8) != 0)
                                *(&var_248[3] + rax_18) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    
                    uint32_t temp0_131[0x4] = _mm_andnot_ps(zmm0, zmm7)
                    
                    if (_mm_movemask_ps(temp0_131) != 0)
                        zmm2 = *(&var_208 + rax_18)
                        float temp0_133[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                        uint32_t temp0_135 = _mm_movemask_ps(_mm_and_ps(temp0_131, temp0_133))
                        
                        if (temp0_135 != 0)
                            zmm2 ^= zmm8
                            char rsi_5 = temp0_135.b
                            
                            if ((rsi_5 & 1) == 0)
                                if ((rsi_5 & 2) != 0)
                                    goto label_1400ddd84
                                
                                goto label_1400ddcc2
                            
                            *(&var_248 + rax_18) = zmm2[0]
                            
                            if ((rsi_5 & 2) != 0)
                            label_1400ddd84:
                                *(&var_248[1] + rax_18) = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                
                                if ((rsi_5 & 4) == 0)
                                    goto label_1400ddccc
                                
                                goto label_1400ddd99
                            
                        label_1400ddcc2:
                            
                            if ((rsi_5 & 4) != 0)
                            label_1400ddd99:
                                *(&var_248[2] + rax_18) = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                
                                if ((rsi_5 & 8) != 0)
                                    *(&var_248[3] + rax_18) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            else
                            label_1400ddccc:
                                
                                if ((rsi_5 & 8) != 0)
                                    *(&var_248[3] + rax_18) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        uint32_t temp0_138 = _mm_movemask_ps(_mm_andnot_ps(temp0_133, temp0_131))
                        
                        if (temp0_138 != 0)
                            char rsi_7 = temp0_138.b
                            
                            if ((rsi_7 & 1) == 0)
                                if ((rsi_7 & 2) != 0)
                                    goto label_1400dddc0
                                
                                goto label_1400ddcfd
                            
                            *(&var_248 + rax_18) = 0
                            
                            if ((rsi_7 & 2) != 0)
                            label_1400dddc0:
                                *(&var_248[1] + rax_18) = 0
                                
                                if ((rsi_7 & 4) == 0)
                                    goto label_1400ddd07
                                
                                goto label_1400dddd2
                            
                        label_1400ddcfd:
                            
                            if ((rsi_7 & 4) != 0)
                            label_1400dddd2:
                                *(&var_248[2] + rax_18) = 0
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_248[3] + rax_18) = 0
                            else
                            label_1400ddd07:
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_248[3] + rax_18) = 0
                    
                    if (rax_18 == 0x20)
                        break
                    
                    zmm4 = *(&var_1a8 + rax_18)
                    rax_18 += 0x10
                
                zmm0 = var_248
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                float var_238[0x4]
                float temp0_146[0x4] = _mm_add_ps(_mm_mul_ps(var_238, var_238), zmm0)
                uint32_t var_228[0x4]
                zmm2 = _mm_add_ps(_mm_mul_ps(var_228, var_228), temp0_146)
                zmm0 = _mm_rsqrt_ps(zmm2)
                zmm2 = _mm_mul_ps(_mm_mul_ps(zmm2, zmm0), zmm0)
                float temp0_154[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm2), zmm0), data_142d3f640)
                zmm0 = _mm_rcp_ps(temp0_154)
                float temp0_156[0x4] = _mm_mul_ps(temp0_154, zmm0)
                zmm2 = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_156), zmm0)
                arg5 = _mm_or_ps(_mm_and_ps(arg5, zmm9), _mm_and_ps(zmm2, zmm7))
            
            zmm0 = *arg7
            char i_2 = _mm_movemask_ps(_mm_cmpeq_ps(arg5, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
            if (i_2 == 0)
                result = 0
                rdi = zx.q(rdi.d + 4)
                
                if (rdi.d s>= r15_4)
                    break
                
                continue
            else
                zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi.d), 0), data_142e11d00)
                uint64_t i_1 = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rbp_1
                    
                    if (i_1 == 0)
                        rbp_1 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400ddeb1:
                            uint32_t var_138[0x4] = arg5
                            uint64_t rbp_2 = zx.q(rbp_1.d) & 3
                            *arg7 = var_138[rbp_2][0]
                            uint32_t var_128[0x4] = zmm0
                            *arg6 = var_128[rbp_2]
                    else
                        uint64_t rflags_1
                        rbp_1, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rbp_1 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400ddeb1
                    result.b = 1
                while (i_1 != 0)
        
        rdi = zx.q(rdi.d + 4)
        
        if (rdi.d s>= r15_4)
            break
    
    if (rdi.d s< arg8)
        goto label_1400ddef9
return result
