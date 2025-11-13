// 函数: sub_1400a0010
// 地址: 0x1400a0010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
uint32_t zmm12[0x4]
uint32_t var_78[0x4] = zmm12
float zmm11[0x4]
float var_88[0x4] = zmm11
float var_98[0x4] = arg5
float zmm9[0x4]
float var_a8[0x4] = zmm9
float zmm8[0x4]
float var_b8[0x4] = zmm8
float zmm7[0x4]
float var_c8[0x4] = zmm7
float zmm6[0x4]
float var_d8[0x4] = zmm6
int32_t r15_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
int32_t result
uint32_t var_248[0x4]
uint32_t var_208[0x4]
uint32_t var_1a8[0x4]
uint64_t rdi
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
uint32_t zmm5[0x4]

if (r15_4 s<= 0)
    rdi = 0
    result = 0
    
    if (0 s< arg8)
    label_1400a074a:
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm2 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi.d), 0), data_142e11d00)
            zmm4 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm2)
            float var_1c8_2[0x4] = zmm2
            zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm2) & zmm4
            int64_t rax_21 = sx.q(zmm1[0])
            void* rbx_2 = arg4 + (rax_21 << 2)
            zmm0 = *(arg4 + (rax_21 << 2))
            int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* r14_1 = arg4 + (rbp_3 << 2)
            int64_t rax_23 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* r15_5 = arg4 + (rax_23 << 2)
            int64_t rsi_9 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rdi_2 = arg4 + (rsi_9 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg4 + (rbp_3 << 2)), 0x10), 
                    *(arg4 + (rax_23 << 2)), 0x20), 
                *(arg4 + (rsi_9 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm4
            zmm8 = *(zx.q(zmm2[0]) + rbx_2)
            uint64_t rax_25 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_4 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rsi_10 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_172[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_25 + r14_1), 0x10), *(rbp_4 + r15_5), 
                    0x20), 
                *(rsi_10 + rdi_2), 0x30)
            zmm2 = data_142fc95f0 & zmm4
            zmm5 = *(zx.q(zmm2[0]) + rbx_2)
            int32_t* rax_27 = zx.q(_mm_extract_epi32(zmm2, 1))
            int32_t* rbp_5 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rbx_3 = zx.q(_mm_extract_epi32(zmm2, 3))
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rax_27 + r14_1), 0x10), *(rbp_5 + r15_5), 
                    0x20), 
                *(rbx_3 + rdi_2), 0x30)
            uint32_t var_118_1[0x4] = zmm0
            uint32_t var_f8_1[0x4] = zmm5
            float var_e8_1[0x4] = zx.o(0)
            zmm6 = *(arg3 + 0xc)
            float temp0_179[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float var_1b8_3[0x4] = temp0_179
            var_1a8 = temp0_179
            float var_198_3[0x4] = temp0_179
            float var_188_2[0x4] = temp0_179
            zmm7 = *arg3
            zmm1 = *(arg3 + 4)
            zmm3 = *(arg3 + 8)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_181[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_182[0x4] = _mm_mul_ps(temp0_172, temp0_181)
            float temp0_183[0x4] = _mm_mul_ps(temp0_181, zmm5)
            zmm5 = _mm_mul_ps(zmm5, zmm1)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1 = _mm_mul_ps(zmm1, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm3)
            float temp0_188[0x4] = _mm_mul_ps(zx.o(0), temp0_179)
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm3, temp0_172))
            zmm0 = _mm_sub_ps(zmm0, temp0_183)
            float temp0_192[0x4] = _mm_sub_ps(temp0_182, zmm1)
            float temp0_193[0x4] = _mm_sub_ps(temp0_188, temp0_188)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_196[0x4] = _mm_add_ps(temp0_192, temp0_192)
            float temp0_197[0x4] = _mm_add_ps(temp0_193, temp0_193)
            var_208 = zmm5
            uint32_t var_1f8_3[0x4] = zmm0
            float var_1e8_3[0x4] = temp0_196
            float var_1d8_2[0x4] = temp0_197
            float temp0_198[0x4] = _mm_mul_ps(temp0_197, temp0_179)
            float temp0_199[0x4] = _mm_mul_ps(temp0_179, zmm5)
            float temp0_200[0x4] = _mm_mul_ps(temp0_179, zmm0)
            float temp0_201[0x4] = _mm_mul_ps(temp0_179, temp0_196)
            float temp0_202[0x4] = __addps_xmmps_memps(temp0_199, var_118_1)
            float temp0_203[0x4] = __addps_xmmps_memps(temp0_200, temp0_172)
            float temp0_204[0x4] = __addps_xmmps_memps(temp0_201, var_f8_1)
            float temp0_205[0x4] = __addps_xmmps_memps(temp0_198, var_e8_1)
            var_248 = temp0_202
            float var_218_1[0x4] = temp0_205
            zmm3 = *arg3
            zmm1 = *(arg3 + 4)
            zmm7 = *(arg3 + 8)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_208[0x4] = _mm_mul_ps(zmm0, zmm3)
            zmm3 = _mm_mul_ps(zmm3, temp0_196)
            float temp0_210[0x4] = _mm_mul_ps(temp0_196, zmm1)
            float temp0_211[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm1 = _mm_mul_ps(zmm1, zmm5)
            zmm5 = _mm_mul_ps(zmm5, temp0_211)
            float temp0_215[0x4] = _mm_sub_ps(temp0_210, _mm_mul_ps(temp0_211, zmm0))
            zmm5 = _mm_sub_ps(zmm5, zmm3)
            float temp0_217[0x4] = _mm_sub_ps(temp0_208, zmm1)
            float temp0_218[0x4] = _mm_add_ps(temp0_215, temp0_202)
            zmm5 = _mm_add_ps(zmm5, temp0_203)
            float temp0_220[0x4] = _mm_add_ps(temp0_217, temp0_204)
            arg5 = arg3[1].d
            zmm0 = *(arg3 + 0x14)
            float temp0_222[0x4] = _mm_add_ps(_mm_shuffle_ps(arg5, arg5, 0), temp0_218)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm5)
            zmm11 = *(arg3 + 0x18)
            float temp0_226[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_220)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_227[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm6 = _mm_sub_ps(temp0_222, temp0_227)
            float temp0_229[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm1 = _mm_sub_ps(zmm0, temp0_229)
            zmm3 = (*arg2)[2]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_232[0x4] = _mm_sub_ps(temp0_226, zmm3)
            float var_1b8_4[0x4] = zmm6
            float var_168_1[0x4] = zmm1
            var_1a8 = zmm1
            float var_198_4[0x4] = temp0_232
            zmm5 = *arg1
            zmm14 = (*arg1)[1]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm13 = _mm_sub_ps(zmm5, temp0_222)
            float temp0_235[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_222, temp0_227, 6), zmm4)
            char temp0_239 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4))
            zmm12 = _mm_sub_ps(temp0_235, zmm0)
            zmm15 = (*arg1)[2]
            float temp0_241[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_242[0x4] = _mm_sub_ps(temp0_241, temp0_226)
            var_208 = zmm13
            uint32_t var_1f8_4[0x4] = zmm12
            float var_1e8_4[0x4] = temp0_242
            zmm7 = _mm_cmpeq_ps(temp0_222, temp0_227, 2)
            
            if (temp0_239 != 0xf)
                zmm1 = _mm_cmpeq_ps(zmm0, temp0_229, 2)
                zmm7 = _mm_and_ps(_mm_and_ps(zmm7, zmm4), zmm1)
                zmm1 = _mm_andnot_ps(zmm7, zmm4)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4)) != 0xf)
                zmm1 = _mm_cmpeq_ps(temp0_226, zmm3, 2)
                zmm7 = _mm_and_ps(_mm_and_ps(zmm7, zmm4), zmm1)
                zmm1 = zmm7 ^ zmm4
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4)) == 0xf)
                zmm5 = temp0_242
            else
                zmm7 = _mm_and_ps(zmm7, zmm4)
                zmm3 = _mm_cmpeq_ps(zmm5, temp0_222, 2)
                zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm5, temp0_222, 6), zmm7)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm5, zmm7)) != 0xf)
                    float temp0_261[0x4] = _mm_cmpeq_ps(temp0_235, zmm0, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm7), temp0_261)
                    zmm5 = zmm3 ^ zmm7
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm5, zmm7)) != 0xf)
                    float temp0_266[0x4] = _mm_cmpeq_ps(temp0_241, temp0_226, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm7), temp0_266)
                
                zmm5 = temp0_242
                zmm7 = _mm_and_ps(zmm7, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm7, zmm4)) != 0)
                zmm13 = _mm_max_ps(zmm13, zmm6)
                zmm12 = __maxps_xmmps_memps(zmm12, var_168_1)
                zmm5 = __maxps_xmmps_memps(zmm5, temp0_232)
                zmm3 = _mm_cmpeq_ps(zmm12, zmm13, 1)
                uint32_t temp0_276[0x4] = _mm_and_ps(zmm7, zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_276, zmm4)) != 0)
                    uint32_t temp0_280[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm5, zmm13, 5), temp0_276)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_280, zmm4)) != 0)
                        zmm13 = _mm_blendv_ps(zmm13, zmm5, temp0_280)
                
                uint32_t temp0_284[0x4] = _mm_andnot_ps(zmm3, zmm7)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_284, zmm4)) != 0)
                    float temp0_287[0x4] = _mm_cmpeq_ps(zmm5, zmm12, 1)
                    uint32_t temp0_288[0x4] = _mm_and_ps(temp0_284, temp0_287)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_288, zmm4)) != 0)
                        zmm13 = _mm_blendv_ps(zmm13, zmm12, temp0_288)
                    
                    zmm2 = _mm_andnot_ps(temp0_287, temp0_284)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                        zmm13 = _mm_blendv_ps(zmm13, zmm5, zmm2)
            
            uint32_t temp0_296[0x4] = _mm_andnot_ps(zmm7, zmm4)
            
            if (_mm_movemask_ps(temp0_296) != 0)
                zmm7 ^= _mm_cmpeq_epi32(temp0_296, temp0_296)
                int64_t rax_40 = 0
                zmm0 = data_142d3f780
                
                while (true)
                    float temp0_299[0x4] = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                    uint32_t temp0_300[0x4] = _mm_and_ps(temp0_299, zmm7)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_300, zmm4)) != 0)
                        char temp0_303 = _mm_movemask_ps(temp0_300)
                        
                        if ((temp0_303 & 1) == 0)
                            if ((temp0_303 & 2) != 0)
                                goto label_1400a0d2f
                            
                            goto label_1400a0c5b
                        
                        *(&var_248 + rax_40) = zmm6[0]
                        
                        if ((temp0_303 & 2) != 0)
                        label_1400a0d2f:
                            *(&var_248[1] + rax_40) = __extractps_memd_xmmps_immb(zmm6, 1)
                            
                            if ((temp0_303 & 4) == 0)
                                goto label_1400a0c64
                            
                            goto label_1400a0d40
                        
                    label_1400a0c5b:
                        
                        if ((temp0_303 & 4) != 0)
                        label_1400a0d40:
                            *(&var_248[2] + rax_40) = __extractps_memd_xmmps_immb(zmm6, 2)
                            
                            if ((temp0_303 & 8) != 0)
                                *(&var_248[3] + rax_40) = __extractps_memd_xmmps_immb(zmm6, 3)
                        else
                        label_1400a0c64:
                            
                            if ((temp0_303 & 8) != 0)
                                *(&var_248[3] + rax_40) = __extractps_memd_xmmps_immb(zmm6, 3)
                    
                    zmm2 = _mm_andnot_ps(temp0_299, zmm7)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                        zmm5 = *(&var_208 + rax_40)
                        zmm3 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                        uint32_t temp0_309[0x4] = _mm_and_ps(zmm2, zmm3)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_309, zmm4)) != 0)
                            zmm5 ^= zmm0
                            char temp0_312 = _mm_movemask_ps(temp0_309)
                            
                            if ((temp0_312 & 1) == 0)
                                if ((temp0_312 & 2) != 0)
                                    goto label_1400a0d65
                                
                                goto label_1400a0cbc
                            
                            *(&var_248 + rax_40) = zmm5[0]
                            
                            if ((temp0_312 & 2) != 0)
                            label_1400a0d65:
                                *(&var_248[1] + rax_40) = __extractps_memd_xmmps_immb(zmm5, 1)
                                
                                if ((temp0_312 & 4) == 0)
                                    goto label_1400a0cc5
                                
                                goto label_1400a0d76
                            
                        label_1400a0cbc:
                            
                            if ((temp0_312 & 4) != 0)
                            label_1400a0d76:
                                *(&var_248[2] + rax_40) = __extractps_memd_xmmps_immb(zmm5, 2)
                                
                                if ((temp0_312 & 8) != 0)
                                    *(&var_248[3] + rax_40) = __extractps_memd_xmmps_immb(zmm5, 3)
                            else
                            label_1400a0cc5:
                                
                                if ((temp0_312 & 8) != 0)
                                    *(&var_248[3] + rax_40) = __extractps_memd_xmmps_immb(zmm5, 3)
                        
                        uint32_t temp0_314[0x4] = _mm_andnot_ps(zmm3, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_314, zmm4)) != 0)
                            char temp0_317 = _mm_movemask_ps(temp0_314)
                            
                            if ((temp0_317 & 1) == 0)
                                if ((temp0_317 & 2) != 0)
                                    goto label_1400a0d9d
                                
                                goto label_1400a0cf7
                            
                            *(&var_248 + rax_40) = 0
                            
                            if ((temp0_317 & 2) != 0)
                            label_1400a0d9d:
                                *(&var_248[1] + rax_40) = 0
                                
                                if ((temp0_317 & 4) == 0)
                                    goto label_1400a0d00
                                
                                goto label_1400a0dae
                            
                        label_1400a0cf7:
                            
                            if ((temp0_317 & 4) != 0)
                            label_1400a0dae:
                                *(&var_248[2] + rax_40) = 0
                                
                                if ((temp0_317 & 8) != 0)
                                    *(&var_248[3] + rax_40) = 0
                            else
                            label_1400a0d00:
                                
                                if ((temp0_317 & 8) != 0)
                                    *(&var_248[3] + rax_40) = 0
                    
                    if (rax_40 == 0x20)
                        break
                    
                    zmm6 = *(&var_1a8 + rax_40)
                    rax_40 += 0x10
                
                zmm0 = var_248
                zmm1 = temp0_203
                zmm3 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm1), zmm3)
                float temp0_327[0x4] = _mm_add_ps(_mm_mul_ps(temp0_204, temp0_204), zmm1)
                zmm0 = _mm_rsqrt_ps(temp0_327)
                float temp0_330[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_327, zmm0), zmm0)
                zmm1 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_330), zmm0), 
                    data_142d3f640)
                zmm0 = _mm_rcp_ps(zmm1)
                zmm1 = _mm_mul_ps(zmm1, zmm0)
                zmm13 =
                    _mm_blendv_ps(zmm13, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm1), zmm0), zmm7)
            
            zmm0 = *arg7
            uint32_t i_3 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm13, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm4))
            
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
                    label_1400a0e71:
                        float var_158[0x4] = zmm13
                        uint64_t rdx_1 = zx.q(rdx.d) & 3
                        *arg7 = var_158[rdx_1][0]
                        uint32_t var_148[0x4] = var_1c8_2
                        *arg6 = var_148[rdx_1]
                else
                    uint64_t rflags_2
                    rdx, rflags_2 = _bit_scan_forward(i)
                    i &= not.q(1 << (rdx u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400a0e71
                result.b = 1
            while (i != 0)
else
    result = 0
    rdi = 0
    
    while (true)
        char rbx_1 = result.b
        result.b = 1
        
        if ((rbx_1 & 1) == 0)
            float var_258_1[0x4] = arg5
            int64_t rax_3 = sx.q((rdi << 2).d * 3)
            zmm0 = *(arg4 + rax_3)
            zmm2 = *(arg4 + rax_3 + 0x10)
            zmm5 = *(arg4 + rax_3 + 0x20)
            uint32_t temp0_2[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_3[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
            zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), temp0_2, 3)
            zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
            zmm1 = _mm_shuffle_ps(_mm_blend_epi16(temp0_3, zmm2, 0xc), zmm5, 0xc4)
            var_208 = zmm4
            uint32_t var_1f8_1[0x4] = zmm3
            int128_t var_1d8_1 = zx.o(0)
            zmm0 = *(arg3 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            uint32_t var_1b8_1[0x4] = zmm0
            var_1a8 = zmm0
            uint32_t var_198_1[0x4] = zmm0
            uint32_t var_188_1[0x4] = zmm0
            zmm9 = *arg3
            zmm8 = *(arg3 + 4)
            arg5 = *(arg3 + 8)
            float temp0_14[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_15[0x4] = _mm_mul_ps(temp0_14, zmm1)
            float temp0_16[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
            float temp0_17[0x4] = _mm_mul_ps(temp0_16, zmm4)
            float temp0_18[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm5 = _mm_mul_ps(temp0_18, zmm3)
            float temp0_21[0x4] = _mm_sub_ps(temp0_15, _mm_mul_ps(zmm3, temp0_16))
            float temp0_23[0x4] = _mm_sub_ps(temp0_17, _mm_mul_ps(zmm1, temp0_18))
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, temp0_14))
            float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
            float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_23)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            zmm3 = _mm_mul_ps(zmm0, temp0_26)
            float temp0_30[0x4] = _mm_mul_ps(zmm0, temp0_27)
            zmm0 = _mm_mul_ps(zmm0, zmm5)
            zmm3 = __addps_xmmps_memps(zmm3, var_208)
            float temp0_33[0x4] = __addps_xmmps_memps(temp0_30, var_1f8_1)
            zmm0 = __addps_xmmps_memps(zmm0, zmm1)
            zmm4 = _mm_mul_ps(zmm5, temp0_14)
            float temp0_36[0x4] = _mm_mul_ps(temp0_26, temp0_16)
            zmm1 = _mm_mul_ps(temp0_27, temp0_18)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_27, temp0_16)), zmm3)
            float temp0_43[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_36, _mm_mul_ps(zmm5, temp0_18)), temp0_33)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_26, temp0_14)), zmm0)
            arg5 = arg3[1].d
            zmm0 = *(arg3 + 0x14)
            float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm4)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_43)
            zmm2 = *(arg3 + 0x18)
            float temp0_52[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm1)
            zmm1 = *arg2
            zmm14 = (*arg2)[1]
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm3 = _mm_sub_ps(temp0_48, zmm1)
            float temp0_55[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            float temp0_56[0x4] = _mm_sub_ps(zmm0, temp0_55)
            zmm13 = (*arg2)[2]
            float temp0_57[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm4 = _mm_sub_ps(temp0_52, temp0_57)
            uint32_t var_1b8_2[0x4] = zmm3
            var_1a8 = temp0_56
            uint32_t var_1c8_1[0x4] = zmm4
            uint32_t var_198_2[0x4] = zmm4
            zmm8 = *arg1
            zmm5 = (*arg1)[1]
            float temp0_59[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_60[0x4] = _mm_sub_ps(temp0_59, temp0_48)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm12 = _mm_sub_ps(zmm5, zmm0)
            zmm4 = (*arg1)[2]
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            char temp0_65 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_48, zmm1, 6))
            float temp0_66[0x4] = _mm_sub_ps(zmm4, temp0_52)
            var_208 = temp0_60
            uint32_t var_1f8_2[0x4] = zmm12
            float var_1e8_2[0x4] = temp0_66
            
            if (temp0_65 == 0xf)
                zmm13 = temp0_56
                zmm7 = _mm_cmpeq_ps(temp0_48, zmm1, 2)
                zmm9 = _mm_cmpeq_epi32(temp0_18, temp0_18)
            label_1400a03d9:
                zmm6 = data_142d3f780
                arg5 = var_258_1
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm7, 0x1f), 0x1f)
                
                if (_mm_movemask_ps(zmm1) != 0)
                label_1400a03fe:
                    float temp0_96[0x4] = _mm_max_ps(temp0_60, zmm3)
                    zmm12 = _mm_max_ps(zmm12, zmm13)
                    float temp0_98[0x4] = __maxps_xmmps_memps(temp0_66, var_1c8_1)
                    zmm4 = _mm_cmpeq_ps(zmm12, temp0_96, 1)
                    uint32_t temp0_100[0x4] = _mm_and_ps(zmm1, zmm4)
                    
                    if (_mm_movemask_ps(temp0_100) != 0)
                        float temp0_102[0x4] = _mm_cmpeq_ps(temp0_98, temp0_96, 1)
                        uint32_t temp0_103[0x4] = _mm_and_ps(temp0_100, temp0_102)
                        
                        if (_mm_movemask_ps(temp0_103) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_96, temp0_103)
                        
                        zmm2 = _mm_andnot_ps(temp0_102, temp0_100)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_98, zmm2)
                    
                    uint32_t temp0_109[0x4] = _mm_andnot_ps(zmm4, zmm1)
                    
                    if (_mm_movemask_ps(temp0_109) != 0)
                        float temp0_111[0x4] = _mm_cmpeq_ps(temp0_98, zmm12, 1)
                        uint32_t temp0_112[0x4] = _mm_and_ps(temp0_109, temp0_111)
                        
                        if (_mm_movemask_ps(temp0_112) != 0)
                            arg5 = _mm_blendv_ps(arg5, zmm12, temp0_112)
                        
                        zmm2 = _mm_andnot_ps(temp0_111, temp0_109)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_98, zmm2)
            else
                float temp0_67[0x4] = _mm_cmpeq_ps(temp0_48, zmm1, 2)
                zmm7 = _mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_55, 2), temp0_67)
                zmm9 = _mm_cmpeq_epi32(temp0_67, temp0_67)
                
                if (_mm_movemask_ps(zmm7 ^ zmm9) == 0xf)
                    zmm13 = temp0_56
                    goto label_1400a03d9
                
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_52, temp0_57, 2), zmm7)
                zmm13 = temp0_56
                
                if (_mm_movemask_ps(zmm1 ^ zmm9) == 0xf)
                    zmm6 = data_142d3f780
                    arg5 = var_258_1
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_1400a03fe
                else
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_59, temp0_48, 6), zmm1)
                    char temp0_78 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm1))
                    zmm8 = _mm_cmpeq_ps(temp0_59, temp0_48, 2)
                    
                    if (temp0_78 != 0xf)
                        zmm5 = _mm_cmpeq_ps(zmm5, zmm0, 2)
                        zmm8 = _mm_and_ps(_mm_and_ps(zmm8, zmm1), zmm5)
                        zmm6 = _mm_andnot_ps(zmm8, zmm1)
                    
                    arg5 = var_258_1
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm1)) != 0xf)
                        zmm4 = _mm_cmpeq_ps(zmm4, temp0_52, 2)
                        zmm8 = _mm_and_ps(_mm_and_ps(zmm8, zmm1), zmm4)
                    
                    zmm6 = data_142d3f780
                    zmm1 = _mm_and_ps(zmm1, zmm8)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_1400a03fe
            
            zmm1 ^= zmm9
            
            if (_mm_movemask_ps(zmm1) != 0)
                int64_t rax_18 = 0
                
                while (true)
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                    uint32_t temp0_121 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm1))
                    
                    if (temp0_121 != 0)
                        char rsi_2 = temp0_121.b
                        
                        if ((rsi_2 & 1) == 0)
                            if ((rsi_2 & 2) != 0)
                                goto label_1400a05a0
                            
                            goto label_1400a04d6
                        
                        *(&var_248 + rax_18) = zmm3[0]
                        
                        if ((rsi_2 & 2) != 0)
                        label_1400a05a0:
                            *(&var_248[1] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 1)
                            
                            if ((rsi_2 & 4) == 0)
                                goto label_1400a04e0
                            
                            goto label_1400a05b2
                        
                    label_1400a04d6:
                        
                        if ((rsi_2 & 4) != 0)
                        label_1400a05b2:
                            *(&var_248[2] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 2)
                            
                            if ((rsi_2 & 8) != 0)
                                *(&var_248[3] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 3)
                        else
                        label_1400a04e0:
                            
                            if ((rsi_2 & 8) != 0)
                                *(&var_248[3] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 3)
                    
                    uint32_t temp0_123[0x4] = _mm_andnot_ps(zmm0, zmm1)
                    
                    if (_mm_movemask_ps(temp0_123) != 0)
                        zmm3 = *(&var_208 + rax_18)
                        float temp0_125[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        uint32_t temp0_127 = _mm_movemask_ps(_mm_and_ps(temp0_123, temp0_125))
                        
                        if (temp0_127 != 0)
                            zmm3 ^= zmm6
                            char rsi_5 = temp0_127.b
                            
                            if ((rsi_5 & 1) == 0)
                                if ((rsi_5 & 2) != 0)
                                    goto label_1400a05d9
                                
                                goto label_1400a052e
                            
                            *(&var_248 + rax_18) = zmm3[0]
                            
                            if ((rsi_5 & 2) != 0)
                            label_1400a05d9:
                                *(&var_248[1] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 1)
                                
                                if ((rsi_5 & 4) == 0)
                                    goto label_1400a0538
                                
                                goto label_1400a05eb
                            
                        label_1400a052e:
                            
                            if ((rsi_5 & 4) != 0)
                            label_1400a05eb:
                                *(&var_248[2] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 2)
                                
                                if ((rsi_5 & 8) != 0)
                                    *(&var_248[3] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 3)
                            else
                            label_1400a0538:
                                
                                if ((rsi_5 & 8) != 0)
                                    *(&var_248[3] + rax_18) = __extractps_memd_xmmps_immb(zmm3, 3)
                        
                        uint32_t temp0_130 = _mm_movemask_ps(_mm_andnot_ps(temp0_125, temp0_123))
                        
                        if (temp0_130 != 0)
                            char rsi_7 = temp0_130.b
                            
                            if ((rsi_7 & 1) == 0)
                                if ((rsi_7 & 2) != 0)
                                    goto label_1400a0614
                                
                                goto label_1400a0566
                            
                            *(&var_248 + rax_18) = 0
                            
                            if ((rsi_7 & 2) != 0)
                            label_1400a0614:
                                *(&var_248[1] + rax_18) = 0
                                
                                if ((rsi_7 & 4) == 0)
                                    goto label_1400a0570
                                
                                goto label_1400a0626
                            
                        label_1400a0566:
                            
                            if ((rsi_7 & 4) != 0)
                            label_1400a0626:
                                *(&var_248[2] + rax_18) = 0
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_248[3] + rax_18) = 0
                            else
                            label_1400a0570:
                                
                                if ((rsi_7 & 8) != 0)
                                    *(&var_248[3] + rax_18) = 0
                    
                    if (rax_18 == 0x20)
                        break
                    
                    zmm3 = *(&var_1a8 + rax_18)
                    rax_18 += 0x10
                
                zmm0 = var_248
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                float var_238[0x4]
                float temp0_138[0x4] = _mm_add_ps(_mm_mul_ps(var_238, var_238), zmm0)
                uint32_t var_228[0x4]
                zmm3 = _mm_add_ps(_mm_mul_ps(var_228, var_228), temp0_138)
                zmm0 = _mm_rsqrt_ps(zmm3)
                zmm3 = _mm_mul_ps(_mm_mul_ps(zmm3, zmm0), zmm0)
                float temp0_146[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm3), zmm0), data_142d3f640)
                zmm0 = _mm_rcp_ps(temp0_146)
                float temp0_148[0x4] = _mm_mul_ps(temp0_146, zmm0)
                arg5 = _mm_blendv_ps(arg5, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_148), zmm0), 
                    zmm1)
            
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
                        label_1400a0701:
                            float var_138[0x4] = arg5
                            uint64_t rbp_2 = zx.q(rbp_1.d) & 3
                            *arg7 = var_138[rbp_2][0]
                            uint32_t var_128[0x4] = zmm0
                            *arg6 = var_128[rbp_2]
                    else
                        uint64_t rflags_1
                        rbp_1, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rbp_1 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400a0701
                    result.b = 1
                while (i_1 != 0)
        
        rdi = zx.q(rdi.d + 4)
        
        if (rdi.d s>= r15_4)
            break
    
    if (rdi.d s< arg8)
        goto label_1400a074a
return result
