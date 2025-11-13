// 函数: sub_1400d64a0
// 地址: 0x1400d64a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_38[0x4] = zmm15
float zmm14[0x4]
float var_48[0x4] = zmm14
float zmm13[0x4]
float var_58[0x4] = zmm13
float zmm11[0x4]
float var_78[0x4] = zmm11
uint32_t zmm10[0x4]
uint32_t var_88[0x4] = zmm10
uint32_t zmm9[0x4]
uint32_t var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
float zmm7[0x4]
float var_b8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_c8[0x4] = zmm6
float zmm1[0x4] = *arg9
float zmm0[0x4] = arg5
uint32_t result = _mm_movemask_ps(zmm1)
int32_t rsi_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
float zmm2[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]
uint32_t zmm5[0x4]
float zmm12[0x4]

if (result != 0xf)
    float var_268_2[0x4] = zmm1
    uint32_t var_288_2[0x4]
    int32_t rdi_4
    
    if (rsi_4 s<= 0)
        rdi_4 = 0
        zmm11 = zx.o(0)
        zmm12 = zx.o(0)
        zmm13 = zx.o(0)
        var_288_2 = zx.o(0)
        
        if (0 s>= arg8)
            zmm6 = var_268_2
            zmm3 = var_288_2
        else
        label_1400d71ae:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi_4), 0), data_142e11d00)
            zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm8
            int64_t rsi_8 = sx.q(zmm2[0])
            void* rax_9 = arg4 + (rsi_8 << 2)
            zmm1 = *(arg4 + (rsi_8 << 2))
            int64_t rdi_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            void* rsi_10 = arg4 + (rdi_5 << 2)
            float temp0_305[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rdi_5 << 2)))[0].q)
            int64_t rbx_6 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            void* rdi_7 = arg4 + (rbx_6 << 2)
            zmm0 = *(arg4 + (rbx_6 << 2))
            int64_t rbp_7 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbx_8 = arg4 + (rbp_7 << 2)
            float temp0_308[0x4] = _mm_unpacklo_ps(zmm0, (*(arg4 + (rbp_7 << 2)))[0].q)
            zmm1 = temp0_305[0].q | temp0_308[0].q << 0x40
            zmm2 = data_142fc95e0 & zmm8
            zmm9 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_9), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_10))[0].q)
            zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_8))[0].q)
            zmm9 = zmm9[0].q | zmm3[0].q << 0x40
            zmm2 = data_142fc95f0 & zmm8
            float temp0_315[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_9), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_10))[0].q)
            zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_8))[0].q)
            zmm4 = temp0_315[0].q | zmm3[0].q << 0x40
            uint32_t var_178_2[0x4] = zmm9
            zmm10 = zx.o(0)
            float var_158_2[0x4] = zmm10
            zmm5 = (*arg3)[3]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            uint32_t var_148_4[0x4] = zmm5
            uint32_t var_138_4[0x4] = zmm5
            uint32_t var_128_4[0x4] = zmm5
            uint32_t var_118_4[0x4] = zmm5
            zmm3 = *arg3
            zmm7 = (*arg3)[1]
            zmm0 = (*arg3)[2]
            float temp0_320[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_322[0x4] = _mm_mul_ps(zmm9, zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm4)
            float temp0_324[0x4] = _mm_mul_ps(zmm4, temp0_320)
            float temp0_325[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_326[0x4] = _mm_mul_ps(temp0_320, zmm1)
            float temp0_327[0x4] = _mm_mul_ps(zmm1, temp0_325)
            zmm10 = _mm_mul_ps(zmm10, zmm5)
            float temp0_330[0x4] = _mm_sub_ps(temp0_324, _mm_mul_ps(temp0_325, zmm9))
            float temp0_331[0x4] = _mm_sub_ps(temp0_327, zmm3)
            float temp0_332[0x4] = _mm_sub_ps(temp0_322, temp0_326)
            zmm10 = _mm_sub_ps(zmm10, zmm10)
            float temp0_334[0x4] = _mm_add_ps(temp0_330, temp0_330)
            float temp0_335[0x4] = _mm_add_ps(temp0_331, temp0_331)
            float temp0_336[0x4] = _mm_add_ps(temp0_332, temp0_332)
            zmm10 = _mm_add_ps(zmm10, zmm10)
            float var_258_4[0x4] = temp0_334
            float var_248_4[0x4] = temp0_335
            float var_238_4[0x4] = temp0_336
            uint32_t var_228_4[0x4] = zmm10
            zmm9 = zmm5
            zmm14 = zmm5
            zmm10 = _mm_mul_ps(zmm10, zmm5)
            zmm5 = _mm_mul_ps(zmm5, temp0_334)
            zmm9 = _mm_mul_ps(zmm9, temp0_335)
            float temp0_341[0x4] = _mm_mul_ps(zmm14, temp0_336)
            zmm5 = __addps_xmmps_memps(zmm5, zmm1)
            zmm9 = __addps_xmmps_memps(zmm9, var_178_2)
            float temp0_344[0x4] = __addps_xmmps_memps(temp0_341, zmm4)
            zmm10 = __addps_xmmps_memps(zmm10, var_158_2)
            uint32_t var_108_2[0x4] = zmm5
            uint32_t var_f8_2[0x4] = zmm9
            float var_e8_2[0x4] = temp0_344
            zmm6 = *arg3
            zmm0 = (*arg3)[1]
            zmm7 = (*arg3)[2]
            float temp0_346[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm3 = _mm_mul_ps(temp0_335, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_336)
            float temp0_350[0x4] = _mm_mul_ps(temp0_336, temp0_346)
            float temp0_351[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_352[0x4] = _mm_mul_ps(temp0_346, temp0_334)
            float temp0_353[0x4] = _mm_mul_ps(temp0_334, temp0_351)
            float temp0_355[0x4] = _mm_sub_ps(temp0_350, _mm_mul_ps(temp0_351, temp0_335))
            float temp0_356[0x4] = _mm_sub_ps(temp0_353, zmm6)
            zmm3 = _mm_sub_ps(zmm3, temp0_352)
            float temp0_358[0x4] = _mm_add_ps(temp0_355, zmm5)
            float temp0_359[0x4] = _mm_add_ps(temp0_356, zmm9)
            zmm3 = _mm_add_ps(zmm3, temp0_344)
            zmm0 = arg3[1][0]
            zmm7 = (*arg3)[5]
            float temp0_362[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_358)
            float temp0_364[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_359)
            zmm5 = (*arg3)[6]
            zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm3)
            zmm1 = *arg2
            zmm2 = (*arg2)[1]
            zmm3 = _mm_sub_ps(temp0_362, _mm_shuffle_ps(zmm1, zmm1, 0))
            float temp0_370[0x4] = _mm_sub_ps(temp0_364, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = (*arg2)[2]
            float temp0_372[0x4] = _mm_sub_ps(zmm5, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = *arg1
            zmm6 = (*arg1)[1]
            float temp0_374[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_370), temp0_374)
            zmm1 = (*arg1)[2]
            zmm2 = arg5
            float temp0_382[0x4] = _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_372), zmm6), 
                _mm_shuffle_ps(zmm2, zmm2, 0))
            uint32_t var_d8_2[0x4] = zmm10
            zmm2 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_382, data_142fc95d0, 1), zmm8)
            result = _mm_movemask_ps(zmm2)
            
            if (result.b == 0)
                zmm6 = var_268_2
                zmm3 = var_288_2
            else
                float temp0_386[0x4] = _mm_mul_ps(temp0_362, temp0_382)
                result = zx.d(result.b)
                zmm4 = zmm13
                char temp0_387 = result.b & 1
                
                if (temp0_387 == 0)
                    zmm7 = _mm_mul_ps(temp0_364, temp0_382)
                    zmm3 = zmm12
                    
                    if (temp0_387 != 0)
                        goto label_1400d76d1
                    
                    goto label_1400d74eb
                
                zmm4 = zmm13
                zmm4[0] = zmm4[0] + temp0_386[0]
                zmm7 = _mm_mul_ps(temp0_364, temp0_382)
                zmm3 = zmm12
                
                if (temp0_387 != 0)
                label_1400d76d1:
                    zmm3 = zmm12
                    zmm3[0] = zmm3[0] f+ zmm7[0]
                    zmm5 = _mm_mul_ps(zmm5, temp0_382)
                    zmm8 = zmm11
                    
                    if (temp0_387 == 0)
                        goto label_1400d74f8
                    
                    goto label_1400d76e6
                
            label_1400d74eb:
                zmm5 = _mm_mul_ps(zmm5, temp0_382)
                zmm8 = zmm11
                bool cond:21_1
                bool cond:22_1
                bool cond:29_1
                bool cond:30_1
                
                if (temp0_387 == 0)
                label_1400d74f8:
                    zmm13 = _mm_add_ps(zmm13, temp0_386)
                    char temp5_1 = result.b & 2
                    cond:21_1 = temp5_1 != 0
                    cond:22_1 = temp5_1 == 0
                    cond:29_1 = temp5_1 == 0
                    cond:30_1 = temp5_1 != 0
                    zmm6 = var_268_2
                    
                    if (temp5_1 != 0)
                        goto label_1400d770d
                    
                    goto label_1400d750a
                
            label_1400d76e6:
                zmm8 = zmm11
                zmm8[0] = zmm8[0] f+ zmm5[0]
                zmm13 = _mm_add_ps(zmm13, temp0_386)
                char temp4_1 = result.b & 2
                cond:21_1 = temp4_1 != 0
                cond:22_1 = temp4_1 == 0
                cond:29_1 = temp4_1 == 0
                cond:30_1 = temp4_1 != 0
                zmm6 = var_268_2
                
                if (temp4_1 != 0)
                label_1400d770d:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm4, 1), zmm4, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm7)
                    
                    if (cond:22_1)
                        goto label_1400d7514
                    
                    goto label_1400d7726
                
            label_1400d750a:
                zmm12 = _mm_add_ps(zmm12, zmm7)
                
                if (not(cond:21_1))
                label_1400d7514:
                    zmm11 = _mm_add_ps(zmm11, zmm5)
                    
                    if (cond:30_1)
                        goto label_1400d7741
                    
                    goto label_1400d751e
                
            label_1400d7726:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm3, 1), zmm3, 0xe2)
                zmm11 = _mm_add_ps(zmm11, zmm5)
                bool cond:36_1
                bool cond:37_1
                bool cond:43_1
                bool cond:44_1
                
                if (not(cond:29_1))
                label_1400d7741:
                    zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm8, 1), zmm8, 0xe2)
                    char temp13_1 = result.b & 4
                    cond:36_1 = temp13_1 == 0
                    cond:37_1 = temp13_1 != 0
                    cond:43_1 = temp13_1 != 0
                    cond:44_1 = temp13_1 == 0
                    
                    if (temp13_1 == 0)
                        goto label_1400d7526
                    
                    goto label_1400d7755
                
            label_1400d751e:
                char temp12_1 = result.b & 4
                cond:36_1 = temp12_1 == 0
                cond:37_1 = temp12_1 != 0
                cond:43_1 = temp12_1 != 0
                cond:44_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                label_1400d7755:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x32), 0x84)
                    
                    if (not(cond:36_1))
                    label_1400d7767:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x32), 0x84)
                        
                        if (cond:44_1)
                            goto label_1400d7532
                        
                        goto label_1400d777a
                else
                label_1400d7526:
                    
                    if (cond:37_1)
                        goto label_1400d7767
                
                bool cond:51_1
                bool cond:52_1
                bool cond:59_1
                bool cond:60_1
                
                if (not(cond:43_1))
                label_1400d7532:
                    char temp21_1 = result.b & 8
                    cond:51_1 = temp21_1 != 0
                    cond:52_1 = temp21_1 == 0
                    cond:59_1 = temp21_1 != 0
                    cond:60_1 = temp21_1 == 0
                    
                    if (temp21_1 != 0)
                        goto label_1400d7791
                    
                    goto label_1400d753a
                
            label_1400d777a:
                zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x32), 0x84)
                char temp20_1 = result.b & 8
                cond:51_1 = temp20_1 != 0
                cond:52_1 = temp20_1 == 0
                cond:59_1 = temp20_1 != 0
                cond:60_1 = temp20_1 == 0
                
                if (temp20_1 != 0)
                label_1400d7791:
                    zmm13 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x23), 0x24)
                    
                    if (cond:52_1)
                        goto label_1400d7544
                    
                    goto label_1400d77a5
                
            label_1400d753a:
                zmm13 = zmm4
                
                if (cond:51_1)
                label_1400d77a5:
                    zmm12 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x23), 0x24)
                    
                    if (cond:59_1)
                        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x23), 0x24)
                else
                label_1400d7544:
                    zmm12 = zmm3
                    
                    if (not(cond:60_1))
                        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x23), 0x24)
                
                zmm0 = var_288_2
                zmm1 = _mm_and_ps(_mm_add_ps(temp0_382, zmm0), zmm2)
                zmm11 = zmm8
                zmm3 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm0), zmm1)
    else
        zmm8 = (*arg3)[3]
        float temp0_197[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float var_278_2[0x4] = *arg3
        float var_198_2[0x4] = (*arg3)[1]
        float var_1a8_2[0x4] = (*arg3)[2]
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_198[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_199[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_200[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg1
        zmm2 = (*arg1)[1]
        float temp0_201[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_202[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg1)[2]
        float temp0_203[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_204[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        int32_t rbx_5 = 0
        rdi_4 = 0
        var_288_2 = zx.o(0)
        zmm13 = zx.o(0)
        zmm12 = zx.o(0)
        zmm11 = zx.o(0)
        
        do
            int64_t rax_7 = sx.q(rbx_5)
            zmm7 = *(arg4 + rax_7)
            zmm0 = *(arg4 + rax_7 + 0x10)
            zmm1 = *(arg4 + rax_7 + 0x20)
            zmm6 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0x4e), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
                zmm1, 0xc4)
            zmm3 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            float temp0_232[0x4] = _mm_shuffle_ps(zmm7, zmm0, 5)
            float temp0_235[0x4] = _mm_shuffle_ps(temp0_232, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_232, zmm0, 0xf8), 0x22), 0x28)
            uint32_t var_258_3[0x4] = zmm3
            uint32_t var_238_3[0x4] = zmm6
            int128_t var_228_3 = zx.o(0)
            zmm9 = var_198_2
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_237[0x4] = _mm_mul_ps(zmm9, zmm6)
            float temp0_238[0x4] = _mm_shuffle_ps(var_1a8_2, var_1a8_2, 0)
            float temp0_239[0x4] = _mm_mul_ps(temp0_238, zmm3)
            float temp0_240[0x4] = _mm_shuffle_ps(var_278_2, var_278_2, 0)
            zmm5 = _mm_mul_ps(temp0_240, temp0_235)
            float temp0_243[0x4] = _mm_sub_ps(temp0_237, _mm_mul_ps(temp0_235, temp0_238))
            float temp0_245[0x4] = _mm_sub_ps(temp0_239, _mm_mul_ps(zmm6, temp0_240))
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm3, zmm9))
            float temp0_248[0x4] = _mm_add_ps(temp0_243, temp0_243)
            float temp0_249[0x4] = _mm_add_ps(temp0_245, temp0_245)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            zmm3 = _mm_mul_ps(temp0_197, temp0_249)
            float temp0_252[0x4] = _mm_mul_ps(temp0_248, temp0_238)
            float temp0_253[0x4] = _mm_mul_ps(temp0_249, temp0_238)
            float temp0_258[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm5, zmm9), temp0_253), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_197, temp0_248), var_258_3))
            float temp0_259[0x4] = _mm_mul_ps(temp0_197, zmm5)
            zmm6 = _mm_mul_ps(temp0_249, temp0_240)
            zmm5 = _mm_mul_ps(zmm5, temp0_240)
            zmm3 = __addps_xmmps_memps(zmm3, temp0_235)
            float temp0_264[0x4] = _mm_add_ps(_mm_sub_ps(temp0_252, zmm5), zmm3)
            float temp0_265[0x4] = _mm_mul_ps(temp0_248, zmm9)
            float var_148_3[0x4] = temp0_197
            float var_138_3[0x4] = temp0_197
            float var_128_3[0x4] = temp0_197
            float temp0_266[0x4] = __addps_xmmps_memps(temp0_259, var_238_3)
            float var_118_3[0x4] = temp0_197
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, temp0_265), temp0_266)
            zmm0 = arg3[1][0]
            zmm15 = (*arg3)[5]
            float temp0_270[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_258)
            float temp0_272[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_264)
            zmm14 = (*arg3)[6]
            float temp0_274[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm6)
            float temp0_276[0x4] =
                __mulps_xmmps_memps(__subps_xmmps_memps(temp0_270, temp0_198), temp0_201)
            float temp0_279[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(__subps_xmmps_memps(temp0_272, temp0_199), temp0_202), 
                temp0_276)
            zmm9 = __subps_xmmps_memps(
                _mm_add_ps(
                    __mulps_xmmps_memps(__subps_xmmps_memps(temp0_274, temp0_200), temp0_203), 
                    temp0_279), 
                temp0_204)
            zmm10 = __cmpps_xmmps_memps_immb(zmm9, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm10)
            
            if (result.b != 0)
                float temp0_286[0x4] = _mm_mul_ps(temp0_270, zmm9)
                result = zx.d(result.b)
                zmm4 = zmm13
                char temp1_1 = result.b & 1
                
                if (temp1_1 == 0)
                    zmm15 = _mm_mul_ps(temp0_272, zmm9)
                    zmm3 = zmm12
                    
                    if (temp1_1 != 0)
                        goto label_1400d6e16
                    
                    goto label_1400d70c9
                
                zmm4 = zmm13
                zmm4[0] = zmm4[0] + temp0_286[0]
                zmm15 = _mm_mul_ps(temp0_272, zmm9)
                zmm3 = zmm12
                
                if (temp1_1 != 0)
                label_1400d6e16:
                    zmm3 = zmm12
                    zmm3[0] = zmm3[0] f+ zmm15[0]
                    zmm14 = _mm_mul_ps(temp0_274, zmm9)
                    zmm5 = zmm11
                    
                    if (temp1_1 == 0)
                        goto label_1400d70d7
                    
                    goto label_1400d6e2d
                
            label_1400d70c9:
                zmm14 = _mm_mul_ps(temp0_274, zmm9)
                zmm5 = zmm11
                bool cond:23_1
                bool cond:24_1
                bool cond:31_1
                bool cond:32_1
                
                if (temp1_1 == 0)
                label_1400d70d7:
                    zmm13 = _mm_add_ps(zmm13, temp0_286)
                    char temp7_1 = result.b & 2
                    cond:23_1 = temp7_1 != 0
                    cond:24_1 = temp7_1 == 0
                    cond:31_1 = temp7_1 == 0
                    cond:32_1 = temp7_1 != 0
                    
                    if (temp7_1 != 0)
                        goto label_1400d6e4e
                    
                    goto label_1400d70e3
                
            label_1400d6e2d:
                zmm5 = zmm11
                zmm5[0] = zmm5[0] f+ zmm14[0]
                zmm13 = _mm_add_ps(zmm13, temp0_286)
                char temp6_1 = result.b & 2
                cond:23_1 = temp6_1 != 0
                cond:24_1 = temp6_1 == 0
                cond:31_1 = temp6_1 == 0
                cond:32_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                label_1400d6e4e:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm4, 1), zmm4, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm15)
                    
                    if (cond:24_1)
                        goto label_1400d70ed
                    
                    goto label_1400d6e67
                
            label_1400d70e3:
                zmm12 = _mm_add_ps(zmm12, zmm15)
                
                if (not(cond:23_1))
                label_1400d70ed:
                    zmm11 = _mm_add_ps(zmm11, zmm14)
                    
                    if (cond:32_1)
                        goto label_1400d6e80
                    
                    goto label_1400d70f7
                
            label_1400d6e67:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm3, 1), zmm3, 0xe2)
                zmm11 = _mm_add_ps(zmm11, zmm14)
                bool cond:38_1
                bool cond:39_1
                bool cond:45_1
                bool cond:46_1
                
                if (not(cond:31_1))
                label_1400d6e80:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm5, 1), zmm5, 0xe2)
                    char temp15_1 = result.b & 4
                    cond:38_1 = temp15_1 == 0
                    cond:39_1 = temp15_1 != 0
                    cond:45_1 = temp15_1 != 0
                    cond:46_1 = temp15_1 == 0
                    
                    if (temp15_1 == 0)
                        goto label_1400d70ff
                    
                    goto label_1400d6e93
                
            label_1400d70f7:
                char temp14_1 = result.b & 4
                cond:38_1 = temp14_1 == 0
                cond:39_1 = temp14_1 != 0
                cond:45_1 = temp14_1 != 0
                cond:46_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                label_1400d6e93:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x32), 0x84)
                    
                    if (not(cond:38_1))
                    label_1400d6ea5:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x32), 0x84)
                        
                        if (cond:46_1)
                            goto label_1400d710b
                        
                        goto label_1400d6eb7
                else
                label_1400d70ff:
                    
                    if (cond:39_1)
                        goto label_1400d6ea5
                
                bool cond:53_1
                bool cond:54_1
                bool cond:61_1
                bool cond:62_1
                
                if (not(cond:45_1))
                label_1400d710b:
                    char temp23_1 = result.b & 8
                    cond:53_1 = temp23_1 != 0
                    cond:54_1 = temp23_1 == 0
                    cond:61_1 = temp23_1 != 0
                    cond:62_1 = temp23_1 == 0
                    
                    if (temp23_1 != 0)
                        goto label_1400d6ecd
                    
                    goto label_1400d7113
                
            label_1400d6eb7:
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x32), 0x84)
                char temp22_1 = result.b & 8
                cond:53_1 = temp22_1 != 0
                cond:54_1 = temp22_1 == 0
                cond:61_1 = temp22_1 != 0
                cond:62_1 = temp22_1 == 0
                
                if (temp22_1 != 0)
                label_1400d6ecd:
                    zmm13 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x23), 0x24)
                    
                    if (cond:54_1)
                        goto label_1400d711d
                    
                    goto label_1400d6ee1
                
            label_1400d7113:
                zmm13 = zmm4
                
                if (cond:53_1)
                label_1400d6ee1:
                    zmm12 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x23), 0x24)
                    
                    if (cond:61_1)
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x23), 0x24)
                else
                label_1400d711d:
                    zmm12 = zmm3
                    
                    if (not(cond:62_1))
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x23), 0x24)
                
                zmm0 = var_288_2
                uint32_t temp0_295[0x4] = _mm_and_ps(_mm_add_ps(zmm9, zmm0), zmm10)
                zmm11 = zmm5
                var_288_2 = _mm_or_ps(_mm_andnot_ps(zmm10, zmm0), temp0_295)
            
            rdi_4 += 4
            rbx_5 += 0x30
        while (rdi_4 s< rsi_4)
        
        if (rdi_4 s< arg8)
            goto label_1400d71ae
        
        zmm6 = var_268_2
        zmm3 = var_288_2
    zmm6 = _mm_cmpeq_epi32(zmm6, zx.o(0))
    zmm0 = zmm6 & not.o(zmm13)
    float temp0_401[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
    float temp0_402[0x4] = _mm_shuffle_ps(temp0_401, temp0_401, 0xe5)
    temp0_402[0] = temp0_402[0] + temp0_401[0]
    zmm1 = zmm6 & not.o(zmm12)
    float temp0_404[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_405[0x4] = _mm_shuffle_ps(temp0_404, temp0_404, 0xe5)
    temp0_405[0] = temp0_405[0] + temp0_404[0]
    float temp0_406[0x4] = _mm_unpacklo_ps(temp0_402, temp0_405[0].q)
    zmm1 = zmm6 & not.o(zmm11)
    float temp0_408[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_409[0x4] = _mm_shuffle_ps(temp0_408, temp0_408, 0xe5)
    temp0_409[0] = temp0_409[0] + temp0_408[0]
    float temp0_410[0x4] = _mm_add_ps(zx.o(*arg7)[0].q | arg7[1].d[0].q << 0x40, 
        temp0_406[0].q | temp0_409[0].q << 0x40)
    *arg7 = temp0_410[0]
    float temp0_411[0x4] = _mm_shuffle_ps(temp0_410, temp0_410, 0xe5)
    temp0_410[0].q = temp0_410 u>> 0x40
    *(arg7 + 4) = temp0_411[0]
    arg7[1].d = temp0_410[0]
    zmm6 &= not.o(zmm3)
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm6, 0xee), zmm6)
else
    uint32_t var_278_1[0x4]
    int32_t rdi
    
    if (rsi_4 s<= 0)
        rdi = 0
        zmm4 = zx.o(0)
        zmm12 = zx.o(0)
        zmm10 = zx.o(0)
        var_278_1 = zx.o(0)
        
        if (0 s< arg8)
        label_1400d699a:
            float var_288_1[0x4] = zmm4
            zmm15 = zmm10
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi), 0), data_142e11d00)
            zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm8
            int64_t rsi_5 = sx.q(zmm2[0])
            void* rax_3 = arg4 + (rsi_5 << 2)
            zmm1 = *(arg4 + (rsi_5 << 2))
            int64_t rdi_1 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            void* rsi_7 = arg4 + (rdi_1 << 2)
            float temp0_109[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rdi_1 << 2)))[0].q)
            int64_t rbx_2 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            void* rdi_3 = arg4 + (rbx_2 << 2)
            zmm0 = *(arg4 + (rbx_2 << 2))
            int64_t rbp_1 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbx_4 = arg4 + (rbp_1 << 2)
            float temp0_112[0x4] = _mm_unpacklo_ps(zmm0, (*(arg4 + (rbp_1 << 2)))[0].q)
            zmm1 = temp0_109[0].q | temp0_112[0].q << 0x40
            zmm2 = data_142fc95e0 & zmm8
            zmm9 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_7))[0].q)
            zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_4))[0].q)
            zmm9 = zmm9[0].q | zmm3[0].q << 0x40
            zmm2 = data_142fc95f0 & zmm8
            float temp0_119[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_7))[0].q)
            zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_4))[0].q)
            zmm4 = temp0_119[0].q | zmm3[0].q << 0x40
            uint32_t var_178_1[0x4] = zmm9
            zmm11 = zx.o(0)
            zmm5 = (*arg3)[3]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            uint32_t var_148_2[0x4] = zmm5
            uint32_t var_138_2[0x4] = zmm5
            uint32_t var_128_2[0x4] = zmm5
            uint32_t var_118_2[0x4] = zmm5
            zmm2 = *arg3
            zmm7 = (*arg3)[1]
            zmm0 = (*arg3)[2]
            float temp0_124[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_125[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = _mm_mul_ps(zmm9, temp0_125)
            float temp0_127[0x4] = _mm_mul_ps(temp0_125, zmm4)
            float temp0_128[0x4] = _mm_mul_ps(zmm4, temp0_124)
            float temp0_129[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_130[0x4] = _mm_mul_ps(temp0_124, zmm1)
            float temp0_131[0x4] = _mm_mul_ps(zmm1, temp0_129)
            float temp0_132[0x4] = _mm_mul_ps(zmm11, zmm5)
            float temp0_134[0x4] = _mm_sub_ps(temp0_128, _mm_mul_ps(temp0_129, zmm9))
            float temp0_135[0x4] = _mm_sub_ps(temp0_131, temp0_127)
            zmm3 = _mm_sub_ps(zmm3, temp0_130)
            float temp0_137[0x4] = _mm_sub_ps(temp0_132, temp0_132)
            float temp0_138[0x4] = _mm_add_ps(temp0_134, temp0_134)
            float temp0_139[0x4] = _mm_add_ps(temp0_135, temp0_135)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_141[0x4] = _mm_add_ps(temp0_137, temp0_137)
            float var_258_2[0x4] = temp0_138
            float var_248_2[0x4] = temp0_139
            uint32_t var_238_2[0x4] = zmm3
            float var_228_2[0x4] = temp0_141
            zmm9 = zmm5
            zmm13 = zmm5
            float temp0_142[0x4] = _mm_mul_ps(temp0_141, zmm5)
            zmm5 = _mm_mul_ps(zmm5, temp0_138)
            zmm9 = _mm_mul_ps(zmm9, temp0_139)
            float temp0_145[0x4] = _mm_mul_ps(zmm13, zmm3)
            zmm5 = __addps_xmmps_memps(zmm5, zmm1)
            zmm9 = __addps_xmmps_memps(zmm9, var_178_1)
            float temp0_148[0x4] = __addps_xmmps_memps(temp0_145, zmm4)
            float temp0_149[0x4] = __addps_xmmps_memps(temp0_142, zmm11)
            uint32_t var_108_1[0x4] = zmm5
            uint32_t var_f8_1[0x4] = zmm9
            float var_e8_1[0x4] = temp0_148
            zmm6 = *arg3
            zmm0 = (*arg3)[1]
            zmm7 = (*arg3)[2]
            float temp0_150[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_152[0x4] = _mm_mul_ps(temp0_139, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm3)
            zmm3 = _mm_mul_ps(zmm3, temp0_150)
            float temp0_155[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_156[0x4] = _mm_mul_ps(temp0_150, temp0_138)
            float temp0_157[0x4] = _mm_mul_ps(temp0_138, temp0_155)
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(temp0_155, temp0_139))
            float temp0_160[0x4] = _mm_sub_ps(temp0_157, zmm6)
            float temp0_161[0x4] = _mm_sub_ps(temp0_152, temp0_156)
            zmm3 = _mm_add_ps(zmm3, zmm5)
            float temp0_163[0x4] = _mm_add_ps(temp0_160, zmm9)
            float temp0_164[0x4] = _mm_add_ps(temp0_161, temp0_148)
            zmm0 = arg3[1][0]
            zmm7 = (*arg3)[5]
            float temp0_166[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
            float temp0_168[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_163)
            zmm4 = (*arg3)[6]
            float temp0_170[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_164)
            zmm1 = *arg2
            zmm2 = (*arg2)[1]
            zmm3 = _mm_sub_ps(temp0_166, _mm_shuffle_ps(zmm1, zmm1, 0))
            float temp0_174[0x4] = _mm_sub_ps(temp0_168, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = (*arg2)[2]
            zmm5 = _mm_sub_ps(temp0_170, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = *arg1
            zmm6 = (*arg1)[1]
            float temp0_178[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_174), temp0_178)
            zmm1 = (*arg1)[2]
            zmm2 = arg5
            float temp0_186[0x4] = _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm5), zmm6), 
                _mm_shuffle_ps(zmm2, zmm2, 0))
            float var_d8_1[0x4] = temp0_149
            uint32_t temp0_188[0x4] =
                _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_186, data_142fc95d0, 1), zmm8)
            result = _mm_movemask_ps(temp0_188)
            
            if (result.b == 0)
                zmm5 = var_278_1
                zmm10 = zmm15
                zmm4 = var_288_1
            else
                float temp0_190[0x4] = _mm_mul_ps(temp0_166, temp0_186)
                result = zx.d(result.b)
                zmm3 = zmm15
                char temp2_1 = result.b & 1
                
                if (temp2_1 == 0)
                    zmm7 = _mm_mul_ps(temp0_168, temp0_186)
                    zmm2 = zmm12
                    
                    if (temp2_1 != 0)
                        goto label_1400d7644
                    
                    goto label_1400d6ce8
                
                zmm3 = zmm15
                zmm3[0] = zmm3[0] f+ temp0_190[0]
                zmm7 = _mm_mul_ps(temp0_168, temp0_186)
                zmm2 = zmm12
                
                if (temp2_1 != 0)
                label_1400d7644:
                    zmm2 = zmm12
                    zmm2[0] = zmm2[0] + zmm7[0]
                    zmm4 = _mm_mul_ps(temp0_170, temp0_186)
                    zmm6 = var_288_1
                    zmm10 = zmm6
                    
                    if (temp2_1 == 0)
                        goto label_1400d6cf9
                    
                    goto label_1400d765d
                
            label_1400d6ce8:
                zmm4 = _mm_mul_ps(temp0_170, temp0_186)
                zmm6 = var_288_1
                zmm10 = zmm6
                bool cond:25_1
                bool cond:26_1
                bool cond:33_1
                
                if (temp2_1 == 0)
                label_1400d6cf9:
                    zmm15 = _mm_add_ps(zmm15, temp0_190)
                    char temp9_1 = result.b & 2
                    cond:25_1 = temp9_1 != 0
                    cond:26_1 = temp9_1 == 0
                    cond:33_1 = temp9_1 == 0
                    zmm8 = var_278_1
                    
                    if (temp9_1 == 0)
                        goto label_1400d7678
                    
                    goto label_1400d6d0b
                
            label_1400d765d:
                zmm10 = zmm6
                zmm10[0] = zmm10[0] f+ zmm4[0]
                zmm15 = _mm_add_ps(zmm15, temp0_190)
                char temp8_1 = result.b & 2
                cond:25_1 = temp8_1 != 0
                cond:26_1 = temp8_1 == 0
                cond:33_1 = temp8_1 == 0
                zmm8 = var_278_1
                
                if (temp8_1 != 0)
                label_1400d6d0b:
                    zmm9 = zmm15
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm3, 1), zmm3, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm7)
                    
                    if (cond:25_1)
                        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
                else
                label_1400d7678:
                    zmm9 = zmm15
                    zmm12 = _mm_add_ps(zmm12, zmm7)
                    
                    if (not(cond:26_1))
                        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
                
                float temp0_420[0x4] = _mm_add_ps(var_288_1, zmm4)
                bool cond:40_1
                bool cond:47_1
                bool cond:48_1
                
                if (cond:33_1)
                    zmm4 = temp0_420
                    char temp16_1 = result.b & 4
                    cond:40_1 = temp16_1 != 0
                    cond:47_1 = temp16_1 == 0
                    cond:48_1 = temp16_1 != 0
                    
                    if (temp16_1 != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
                else
                    zmm4 = temp0_420
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_420, zmm10, 1), zmm10, 0xe2)
                    char temp17_1 = result.b & 4
                    cond:40_1 = temp17_1 != 0
                    cond:47_1 = temp17_1 == 0
                    cond:48_1 = temp17_1 != 0
                    
                    if (temp17_1 != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
                
                if (not(cond:40_1))
                    if (cond:48_1)
                        goto label_1400d7919
                    
                    goto label_1400d77d3
                
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x32), 0x84)
                bool cond:55_1
                bool cond:56_1
                bool cond:63_1
                bool cond:64_1
                
                if (not(cond:47_1))
                label_1400d7919:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm4, zmm10, 0x32), 0x84)
                    char temp25_1 = result.b & 8
                    cond:55_1 = temp25_1 == 0
                    cond:56_1 = temp25_1 != 0
                    cond:63_1 = temp25_1 == 0
                    cond:64_1 = temp25_1 != 0
                    
                    if (temp25_1 == 0)
                        goto label_1400d77db
                    
                    goto label_1400d792b
                
            label_1400d77d3:
                char temp24_1 = result.b & 8
                cond:55_1 = temp24_1 == 0
                cond:56_1 = temp24_1 != 0
                cond:63_1 = temp24_1 == 0
                cond:64_1 = temp24_1 != 0
                
                if (temp24_1 == 0)
                label_1400d77db:
                    
                    if (cond:56_1)
                        goto label_1400d7940
                    
                    goto label_1400d77e1
                
            label_1400d792b:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
                
                if (cond:55_1)
                label_1400d77e1:
                    zmm12 = zmm2
                    
                    if (not(cond:63_1))
                        zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm4, zmm10, 0x23), 0x24)
                else
                label_1400d7940:
                    zmm12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x23), 0x24)
                    
                    if (cond:64_1)
                        zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm4, zmm10, 0x23), 0x24)
                
                zmm1 = _mm_and_ps(_mm_add_ps(temp0_186, zmm8), temp0_188)
                zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_188, zmm8), zmm1)
                zmm4 = zmm10
                zmm10 = zmm3
        else
            zmm5 = var_278_1
    else
        zmm11 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        float var_198_1[0x4] = *arg3
        float var_1a8_1[0x4] = (*arg3)[1]
        float var_1b8_1[0x4] = (*arg3)[2]
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg1
        zmm2 = (*arg1)[1]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg1)[2]
        float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        int32_t rbx_1 = 0
        rdi = 0
        zmm10 = zx.o(0)
        zmm12 = zx.o(0)
        
        do
            uint32_t var_288[0x4]
            __builtin_memset(&var_288, 0, 0x20)
            int64_t rax_1 = sx.q(rbx_1)
            zmm6 = *(arg4 + rax_1)
            zmm0 = *(arg4 + rax_1 + 0x10)
            zmm1 = *(arg4 + rax_1 + 0x20)
            zmm5 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm6, 0x4e), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
                zmm1, 0xc4)
            zmm3 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            zmm6 = _mm_shuffle_ps(zmm6, zmm0, 5)
            zmm6 = _mm_shuffle_ps(zmm6, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm6, zmm0, 0xf8), 0x22), 0x28)
            uint32_t var_258_1[0x4] = zmm3
            uint32_t var_248_1[0x4] = zmm6
            uint32_t var_238_1[0x4] = zmm5
            int128_t var_228_1 = zx.o(0)
            float temp0_40[0x4] = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0)
            float temp0_41[0x4] = _mm_mul_ps(temp0_40, zmm5)
            float temp0_42[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
            float temp0_43[0x4] = _mm_mul_ps(temp0_42, zmm3)
            float temp0_44[0x4] = _mm_shuffle_ps(var_198_1, var_198_1, 0)
            float temp0_45[0x4] = _mm_mul_ps(temp0_44, zmm6)
            float temp0_47[0x4] = _mm_sub_ps(temp0_41, _mm_mul_ps(zmm6, temp0_42))
            float temp0_49[0x4] = _mm_sub_ps(temp0_43, _mm_mul_ps(zmm5, temp0_44))
            float temp0_51[0x4] = _mm_sub_ps(temp0_45, _mm_mul_ps(zmm3, temp0_40))
            float temp0_52[0x4] = _mm_add_ps(temp0_47, temp0_47)
            float temp0_53[0x4] = _mm_add_ps(temp0_49, temp0_49)
            float temp0_54[0x4] = _mm_add_ps(temp0_51, temp0_51)
            zmm3 = _mm_mul_ps(temp0_1, temp0_53)
            zmm6 = _mm_mul_ps(temp0_52, temp0_42)
            float temp0_57[0x4] = _mm_mul_ps(temp0_53, temp0_42)
            float temp0_62[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_54, temp0_40), temp0_57), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_52), var_258_1))
            float temp0_63[0x4] = _mm_mul_ps(temp0_1, temp0_54)
            zmm5 = _mm_mul_ps(temp0_53, temp0_44)
            float temp0_65[0x4] = _mm_mul_ps(temp0_54, temp0_44)
            zmm3 = __addps_xmmps_memps(zmm3, var_248_1)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, temp0_65), zmm3)
            float temp0_69[0x4] = _mm_mul_ps(temp0_52, temp0_40)
            float var_148_1[0x4] = temp0_1
            float var_138_1[0x4] = temp0_1
            float var_128_1[0x4] = temp0_1
            float temp0_70[0x4] = __addps_xmmps_memps(temp0_63, var_238_1)
            float var_118_1[0x4] = temp0_1
            zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, temp0_69), temp0_70)
            zmm8 = arg3[1][0]
            zmm14 = (*arg3)[5]
            float temp0_74[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_62)
            float temp0_76[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm6)
            zmm13 = (*arg3)[6]
            float temp0_78[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), zmm5)
            float temp0_80[0x4] =
                __mulps_xmmps_memps(__subps_xmmps_memps(temp0_74, temp0_2), temp0_5)
            float temp0_83[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(__subps_xmmps_memps(temp0_76, temp0_3), temp0_6), temp0_80)
            float temp0_87[0x4] = __subps_xmmps_memps(
                _mm_add_ps(__mulps_xmmps_memps(__subps_xmmps_memps(temp0_78, temp0_4), temp0_7), 
                    temp0_83), 
                temp0_8)
            zmm9 = __cmpps_xmmps_memps_immb(temp0_87, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm9)
            
            if (result.b == 0)
                zmm4 = var_288
            else
                float temp0_90[0x4] = _mm_mul_ps(temp0_74, temp0_87)
                result = zx.d(result.b)
                zmm3 = zmm10
                char temp3_1 = result.b & 1
                
                if (temp3_1 == 0)
                    zmm14 = _mm_mul_ps(temp0_76, temp0_87)
                    zmm2 = zmm12
                    zmm6 = var_288
                    
                    if (temp3_1 != 0)
                        goto label_1400d662b
                    
                    goto label_1400d68f4
                
                zmm3 = zmm10
                zmm3[0] = zmm3[0] f+ temp0_90[0]
                zmm14 = _mm_mul_ps(temp0_76, temp0_87)
                zmm2 = zmm12
                zmm6 = var_288
                
                if (temp3_1 != 0)
                label_1400d662b:
                    zmm2 = zmm12
                    zmm2[0] = zmm2[0] + zmm14[0]
                    zmm13 = _mm_mul_ps(temp0_78, temp0_87)
                    zmm4 = zmm6
                    
                    if (temp3_1 == 0)
                        goto label_1400d6901
                    
                    goto label_1400d6641
                
            label_1400d68f4:
                zmm13 = _mm_mul_ps(temp0_78, temp0_87)
                zmm4 = zmm6
                bool cond:27_1
                bool cond:28_1
                bool cond:34_1
                bool cond:35_1
                
                if (temp3_1 == 0)
                label_1400d6901:
                    zmm10 = _mm_add_ps(zmm10, temp0_90)
                    char temp11_1 = result.b & 2
                    cond:27_1 = temp11_1 != 0
                    cond:28_1 = temp11_1 == 0
                    cond:34_1 = temp11_1 == 0
                    cond:35_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_1400d6661
                    
                    goto label_1400d690d
                
            label_1400d6641:
                zmm4 = zmm6
                zmm4[0] = zmm4[0] + zmm13[0]
                zmm10 = _mm_add_ps(zmm10, temp0_90)
                char temp10_1 = result.b & 2
                cond:27_1 = temp10_1 != 0
                cond:28_1 = temp10_1 == 0
                cond:34_1 = temp10_1 == 0
                cond:35_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                label_1400d6661:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 1), zmm3, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm14)
                    
                    if (cond:28_1)
                        goto label_1400d6917
                    
                    goto label_1400d667a
                
            label_1400d690d:
                zmm12 = _mm_add_ps(zmm12, zmm14)
                
                if (not(cond:27_1))
                label_1400d6917:
                    zmm6 = _mm_add_ps(zmm6, zmm13)
                    
                    if (cond:35_1)
                        goto label_1400d6692
                    
                    goto label_1400d6921
                
            label_1400d667a:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
                zmm6 = _mm_add_ps(zmm6, zmm13)
                bool cond:41_1
                bool cond:42_1
                bool cond:49_1
                bool cond:50_1
                
                if (not(cond:34_1))
                label_1400d6692:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 1), zmm4, 0xe2)
                    char temp19_1 = result.b & 4
                    cond:41_1 = temp19_1 == 0
                    cond:42_1 = temp19_1 != 0
                    cond:49_1 = temp19_1 != 0
                    cond:50_1 = temp19_1 == 0
                    
                    if (temp19_1 == 0)
                        goto label_1400d6929
                    
                    goto label_1400d66a5
                
            label_1400d6921:
                char temp18_1 = result.b & 4
                cond:41_1 = temp18_1 == 0
                cond:42_1 = temp18_1 != 0
                cond:49_1 = temp18_1 != 0
                cond:50_1 = temp18_1 == 0
                
                if (temp18_1 != 0)
                label_1400d66a5:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x32), 0x84)
                    
                    if (not(cond:41_1))
                    label_1400d66b7:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x32), 0x84)
                        
                        if (cond:50_1)
                            goto label_1400d6935
                        
                        goto label_1400d66c8
                else
                label_1400d6929:
                    
                    if (cond:42_1)
                        goto label_1400d66b7
                
                bool cond:57_1
                bool cond:58_1
                bool cond:65_1
                bool cond:66_1
                
                if (not(cond:49_1))
                label_1400d6935:
                    char temp27_1 = result.b & 8
                    cond:57_1 = temp27_1 != 0
                    cond:58_1 = temp27_1 == 0
                    cond:65_1 = temp27_1 != 0
                    cond:66_1 = temp27_1 == 0
                    
                    if (temp27_1 != 0)
                        goto label_1400d66de
                    
                    goto label_1400d693d
                
            label_1400d66c8:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm6, zmm4, 0x32), 0x84)
                char temp26_1 = result.b & 8
                cond:57_1 = temp26_1 != 0
                cond:58_1 = temp26_1 == 0
                cond:65_1 = temp26_1 != 0
                cond:66_1 = temp26_1 == 0
                
                if (temp26_1 != 0)
                label_1400d66de:
                    zmm10 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x23), 0x24)
                    
                    if (cond:58_1)
                        goto label_1400d6947
                    
                    goto label_1400d66f2
                
            label_1400d693d:
                zmm10 = zmm3
                
                if (cond:57_1)
                label_1400d66f2:
                    zmm12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x23), 0x24)
                    
                    if (cond:65_1)
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm6, zmm4, 0x23), 0x24)
                else
                label_1400d6947:
                    zmm12 = zmm2
                    
                    if (not(cond:66_1))
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm6, zmm4, 0x23), 0x24)
                
                zmm0 = var_278_1
                zmm15 = _mm_and_ps(_mm_add_ps(temp0_87, zmm0), zmm9)
                var_278_1 = _mm_or_ps(_mm_andnot_ps(zmm9, zmm0), zmm15)
            
            rdi += 4
            rbx_1 += 0x30
        while (rdi s< rsi_4)
        
        if (rdi s< arg8)
            goto label_1400d699a
        
        zmm5 = var_278_1
    float temp0_453[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
    float temp0_454[0x4] = _mm_shuffle_ps(temp0_453, temp0_453, 0xe5)
    temp0_454[0] = temp0_454[0] + temp0_453[0]
    float temp0_456[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm12, zmm12[0].q), zmm12)
    float temp0_457[0x4] = _mm_shuffle_ps(temp0_456, temp0_456, 0xe5)
    temp0_457[0] = temp0_457[0] + temp0_456[0]
    float temp0_458[0x4] = _mm_unpacklo_ps(temp0_454, temp0_457[0].q)
    float temp0_460[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm4, zmm4[0].q), zmm4)
    float temp0_461[0x4] = _mm_shuffle_ps(temp0_460, temp0_460, 0xe5)
    temp0_461[0] = temp0_461[0] + temp0_460[0]
    float temp0_462[0x4] = _mm_add_ps(zx.o(*arg7)[0].q | arg7[1].d[0].q << 0x40, 
        temp0_458[0].q | temp0_461[0].q << 0x40)
    *arg7 = temp0_462[0]
    float temp0_463[0x4] = _mm_shuffle_ps(temp0_462, temp0_462, 0xe5)
    temp0_462[0].q = temp0_462 u>> 0x40
    *(arg7 + 4) = temp0_463[0]
    arg7[1].d = temp0_462[0]
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm5, 0xee), zmm5)
float temp0_466[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
temp0_466[0] = temp0_466[0] + zmm0[0]
temp0_466[0] = temp0_466[0] f+ *arg6
*arg6 = temp0_466[0]
return result
