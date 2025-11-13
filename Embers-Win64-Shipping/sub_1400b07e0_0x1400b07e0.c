// 函数: sub_1400b07e0
// 地址: 0x1400b07e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm9[0x4]
float var_a8[0x4] = zmm9
uint32_t zmm7[0x4]
uint32_t var_c8[0x4] = zmm7
float zmm6[0x4]
float var_d8[0x4] = zmm6
float zmm1[0x4] = *arg9
uint32_t zmm0[0x4] = arg5
uint32_t result = _mm_movemask_ps(zmm1)
int32_t rsi_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
float zmm2[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]
uint32_t zmm5[0x4]
uint32_t zmm8[0x4]
float zmm12[0x4]

if (result != 0xf)
    float var_228_1[0x4] = zmm1
    float var_278_1[0x4]
    int32_t rdi_1
    
    if (rsi_4 s<= 0)
        rdi_1 = 0
        zmm12 = zx.o(0)
        zmm8 = zx.o(0)
        zmm13 = zx.o(0)
        var_278_1 = zx.o(0)
        
        if (0 s>= arg8)
            zmm2 = var_228_1
            zmm4 = var_278_1
        else
        label_1400b1486:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi_1), 0), data_142e11d00)
            zmm11 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
            zmm0 = __pmulld_xmmdq_memdq(zmm0, data_142fc95c0) & zmm11
            int64_t rax_12 = sx.q(zmm0[0])
            void* rbx_5 = &(*arg4)[rax_12]
            zmm1 = (*arg4)[rax_12]
            int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm0, 1))
            void* r14_2 = &(*arg4)[rbp_4]
            int64_t rax_14 = sx.q(_mm_extract_epi32(zmm0, 2))
            void* r15_2 = &(*arg4)[rax_14]
            int64_t rsi_9 = sx.q(_mm_extract_epi32(zmm0, 3))
            void* rdi_5 = &(*arg4)[rsi_9]
            float temp0_320[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm1, (*arg4)[rbp_4], 0x10), 
                    (*arg4)[rax_14], 0x20), 
                (*arg4)[rsi_9], 0x30)
            zmm0 = data_142fc95e0 & zmm11
            zmm2 = *(zx.q(zmm0[0]) + rbx_5)
            int32_t* rax_16 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rbp_5 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_10 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_326[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_16 + r14_2), 0x10), *(rbp_5 + r15_2), 
                    0x20), 
                *(rsi_10 + rdi_5), 0x30)
            zmm0 = data_142fc95f0 & zmm11
            zmm6 = *(zx.q(zmm0[0]) + rbx_5)
            int32_t* rax_18 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rbp_6 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rbx_6 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_332[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_18 + r14_2), 0x10), *(rbp_6 + r15_2), 
                    0x20), 
                *(rbx_6 + rdi_5), 0x30)
            zmm10 = zx.o(0)
            zmm7 = (*arg3)[3]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            uint32_t var_158_4[0x4] = zmm7
            uint32_t var_148_4[0x4] = zmm7
            uint32_t var_138_4[0x4] = zmm7
            uint32_t var_128_4[0x4] = zmm7
            zmm0 = *arg3
            zmm4 = (*arg3)[1]
            zmm3 = (*arg3)[2]
            float temp0_334[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            zmm5 = _mm_mul_ps(temp0_326, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_332)
            float temp0_338[0x4] = _mm_mul_ps(temp0_332, temp0_334)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_340[0x4] = _mm_mul_ps(temp0_334, temp0_320)
            float temp0_341[0x4] = _mm_mul_ps(temp0_320, zmm3)
            float temp0_342[0x4] = _mm_mul_ps(zmm7, zmm10)
            float temp0_344[0x4] = _mm_sub_ps(temp0_338, _mm_mul_ps(zmm3, temp0_326))
            float temp0_345[0x4] = _mm_sub_ps(temp0_341, zmm0)
            zmm5 = _mm_sub_ps(zmm5, temp0_340)
            float temp0_347[0x4] = _mm_sub_ps(temp0_342, temp0_342)
            float temp0_348[0x4] = _mm_add_ps(temp0_344, temp0_344)
            float temp0_349[0x4] = _mm_add_ps(temp0_345, temp0_345)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            float temp0_351[0x4] = _mm_add_ps(temp0_347, temp0_347)
            float var_268_4[0x4] = temp0_348
            float var_258_4[0x4] = temp0_349
            uint32_t var_248_4[0x4] = zmm5
            float var_238_4[0x4] = temp0_351
            float temp0_352[0x4] = _mm_mul_ps(zmm7, temp0_348)
            float temp0_353[0x4] = _mm_mul_ps(zmm7, temp0_349)
            float temp0_354[0x4] = _mm_mul_ps(zmm7, zmm5)
            float temp0_355[0x4] = __addps_xmmps_memps(temp0_352, temp0_320)
            float temp0_356[0x4] = __addps_xmmps_memps(temp0_353, temp0_326)
            float temp0_357[0x4] = __addps_xmmps_memps(temp0_354, temp0_332)
            float temp0_359[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_351, zmm7), zmm10)
            float var_118_2[0x4] = temp0_355
            float var_108_2[0x4] = temp0_356
            float var_f8_2[0x4] = temp0_357
            zmm3 = *arg3
            zmm0 = (*arg3)[1]
            zmm2 = (*arg3)[2]
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm7 = _mm_mul_ps(temp0_349, zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm5)
            zmm5 = _mm_mul_ps(zmm5, zmm0)
            float temp0_365[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_mul_ps(zmm0, temp0_348)
            float temp0_367[0x4] = _mm_mul_ps(temp0_348, temp0_365)
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(temp0_365, temp0_349))
            float temp0_370[0x4] = _mm_sub_ps(temp0_367, zmm3)
            zmm7 = _mm_sub_ps(zmm7, zmm0)
            zmm5 = _mm_add_ps(zmm5, temp0_355)
            float temp0_373[0x4] = _mm_add_ps(temp0_370, temp0_356)
            zmm7 = _mm_add_ps(zmm7, temp0_357)
            zmm2 = arg3[1][0]
            zmm1 = (*arg3)[5]
            float temp0_376[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm5)
            float temp0_378[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_373)
            zmm6 = (*arg3)[6]
            float temp0_380[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm7)
            zmm9 = *arg1
            zmm0 = *arg2
            zmm3 = (*arg2)[1]
            float temp0_382[0x4] = _mm_sub_ps(temp0_376, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_sub_ps(temp0_378, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm3 = (*arg2)[2]
            zmm5 = _mm_sub_ps(temp0_380, _mm_shuffle_ps(zmm3, zmm3, 0))
            float temp0_388[0x4] = _mm_add_ps(_mm_mul_ps(temp0_382, temp0_382), zmm10)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), temp0_388)
            zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm5), zmm0)
            float temp0_393[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm0 = _mm_rsqrt_ps(zmm5)
            zmm5 = _mm_mul_ps(_mm_mul_ps(zmm5, zmm0), zmm0)
            zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm0), 
                data_142d3f640)
            zmm0 = _mm_rcp_ps(zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm0)
            float temp0_404[0x4] =
                _mm_sub_ps(temp0_393, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), zmm0))
            zmm0 = arg5
            float temp0_406[0x4] = _mm_sub_ps(temp0_404, _mm_shuffle_ps(zmm0, zmm0, 0))
            float var_e8_2[0x4] = temp0_359
            uint32_t temp0_408[0x4] =
                _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_406, data_142fc95d0, 1), zmm11)
            result = _mm_movemask_ps(temp0_408)
            
            if (result.b == 0)
                zmm2 = var_228_1
                zmm4 = var_278_1
            else
                float temp0_410[0x4] = _mm_mul_ps(temp0_376, temp0_406)
                result = zx.d(result.b)
                zmm5 = zmm13
                char temp1_1 = result.b & 1
                
                if (temp1_1 == 0)
                    zmm1 = _mm_mul_ps(temp0_378, temp0_406)
                    zmm4 = zmm8
                    
                    if (temp1_1 != 0)
                        goto label_1400b196e
                    
                    goto label_1400b17c9
                
                zmm5 = zmm13
                zmm5[0] = zmm5[0] f+ temp0_410[0]
                zmm1 = _mm_mul_ps(temp0_378, temp0_406)
                zmm4 = zmm8
                
                if (temp1_1 != 0)
                label_1400b196e:
                    zmm4 = zmm8
                    zmm4[0] = zmm4[0] + zmm1[0]
                    zmm6 = _mm_mul_ps(temp0_380, temp0_406)
                    zmm3 = zmm12
                    
                    if (temp1_1 == 0)
                        goto label_1400b17d7
                    
                    goto label_1400b1984
                
            label_1400b17c9:
                zmm6 = _mm_mul_ps(temp0_380, temp0_406)
                zmm3 = zmm12
                bool cond:23_1
                bool cond:24_1
                bool cond:31_1
                bool cond:32_1
                
                if (temp1_1 == 0)
                label_1400b17d7:
                    zmm13 = _mm_add_ps(zmm13, temp0_410)
                    char temp6_1 = result.b & 2
                    cond:23_1 = temp6_1 != 0
                    cond:24_1 = temp6_1 == 0
                    cond:31_1 = temp6_1 == 0
                    cond:32_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_1400b1998
                    
                    goto label_1400b17e3
                
            label_1400b1984:
                zmm3 = zmm12
                zmm3[0] = zmm3[0] f+ zmm6[0]
                zmm13 = _mm_add_ps(zmm13, temp0_410)
                char temp5_1 = result.b & 2
                cond:23_1 = temp5_1 != 0
                cond:24_1 = temp5_1 == 0
                cond:31_1 = temp5_1 == 0
                cond:32_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                label_1400b1998:
                    zmm5 = _mm_blend_ps(zmm5, zmm13, 2)
                    zmm8 = _mm_add_ps(zmm8, zmm1)
                    
                    if (cond:24_1)
                        goto label_1400b17ed
                    
                    goto label_1400b19a9
                
            label_1400b17e3:
                zmm8 = _mm_add_ps(zmm8, zmm1)
                
                if (not(cond:23_1))
                label_1400b17ed:
                    zmm12 = _mm_add_ps(zmm12, zmm6)
                    
                    if (cond:32_1)
                        goto label_1400b19ba
                    
                    goto label_1400b17f7
                
            label_1400b19a9:
                zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                zmm12 = _mm_add_ps(zmm12, zmm6)
                bool cond:39_1
                bool cond:40_1
                bool cond:47_1
                bool cond:48_1
                
                if (not(cond:31_1))
                label_1400b19ba:
                    zmm3 = _mm_blend_ps(zmm3, zmm12, 2)
                    char temp14_1 = result.b & 4
                    cond:39_1 = temp14_1 == 0
                    cond:40_1 = temp14_1 != 0
                    cond:47_1 = temp14_1 != 0
                    cond:48_1 = temp14_1 == 0
                    
                    if (temp14_1 == 0)
                        goto label_1400b17ff
                    
                    goto label_1400b19c9
                
            label_1400b17f7:
                char temp13_1 = result.b & 4
                cond:39_1 = temp13_1 == 0
                cond:40_1 = temp13_1 != 0
                cond:47_1 = temp13_1 != 0
                cond:48_1 = temp13_1 == 0
                
                if (temp13_1 != 0)
                label_1400b19c9:
                    zmm5 = _mm_blend_ps(zmm5, zmm13, 4)
                    
                    if (not(cond:39_1))
                    label_1400b19d6:
                        zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                        
                        if (cond:48_1)
                            goto label_1400b180b
                        
                        goto label_1400b19e3
                else
                label_1400b17ff:
                    
                    if (cond:40_1)
                        goto label_1400b19d6
                
                bool cond:55_1
                bool cond:56_1
                bool cond:63_1
                bool cond:64_1
                
                if (not(cond:47_1))
                label_1400b180b:
                    char temp22_1 = result.b & 8
                    cond:55_1 = temp22_1 != 0
                    cond:56_1 = temp22_1 == 0
                    cond:63_1 = temp22_1 == 0
                    cond:64_1 = temp22_1 != 0
                    
                    if (temp22_1 == 0)
                        goto label_1400b19f2
                    
                    goto label_1400b1813
                
            label_1400b19e3:
                zmm3 = _mm_blend_ps(zmm3, zmm12, 4)
                char temp21_1 = result.b & 8
                cond:55_1 = temp21_1 != 0
                cond:56_1 = temp21_1 == 0
                cond:63_1 = temp21_1 == 0
                cond:64_1 = temp21_1 != 0
                
                if (temp21_1 == 0)
                label_1400b19f2:
                    zmm13 = zmm5
                    
                    if (cond:56_1)
                        goto label_1400b1820
                    
                    goto label_1400b19fc
                
            label_1400b1813:
                zmm13 = _mm_blend_ps(zmm13, zmm5, 7)
                
                if (cond:55_1)
                label_1400b19fc:
                    zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
                    
                    if (not(cond:63_1))
                        zmm3 = _mm_blend_ps(zmm3, zmm12, 8)
                else
                label_1400b1820:
                    zmm8 = zmm4
                    
                    if (cond:64_1)
                        zmm3 = _mm_blend_ps(zmm3, zmm12, 8)
                
                zmm4 = _mm_blendv_ps(var_278_1, _mm_add_ps(temp0_406, var_278_1), temp0_408)
                zmm12 = zmm3
                zmm2 = var_228_1
    else
        zmm9 = (*arg3)[3]
        float temp0_102[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float var_1a8_2[0x4] = *arg3
        float var_1b8_2[0x4] = (*arg3)[1]
        float var_1c8_2[0x4] = (*arg3)[2]
        zmm1 = *arg1
        float temp0_103[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_104[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_105[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_106[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        uint32_t var_218_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        int32_t rbx_2 = 0
        rdi_1 = 0
        var_278_1 = zx.o(0)
        zmm13 = zx.o(0)
        zmm8 = zx.o(0)
        zmm12 = zx.o(0)
        
        do
            int64_t rax_2 = sx.q(rbx_2)
            zmm0 = *(arg4 + rax_2)
            zmm2 = *(arg4 + rax_2 + 0x10)
            zmm3 = *(arg4 + rax_2 + 0x20)
            zmm4 = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_109[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
            zmm1 = _mm_blend_epi16(_mm_shuffle_epi32(zmm3, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), zmm4, 3)
            zmm5 = _mm_blend_epi16(_mm_shuffle_epi32(zmm3, 0xa4), zmm0, 0x3f)
            zmm7 = _mm_shuffle_ps(_mm_blend_epi16(temp0_109, zmm2, 0xc), zmm3, 0xc4)
            float var_268_2[0x4] = zmm1
            float var_258_2[0x4] = zmm5
            uint32_t var_248_2[0x4] = zmm7
            zmm15 = zx.o(0)
            float var_238_2[0x4] = zmm15
            float temp0_119[0x4] = _mm_shuffle_ps(var_1b8_2, var_1b8_2, 0)
            float temp0_120[0x4] = _mm_mul_ps(temp0_119, zmm7)
            float temp0_121[0x4] = _mm_shuffle_ps(var_1c8_2, var_1c8_2, 0)
            zmm3 = _mm_mul_ps(temp0_121, zmm1)
            zmm0 = var_1a8_2
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_124[0x4] = _mm_mul_ps(zmm0, zmm5)
            float temp0_126[0x4] = _mm_sub_ps(temp0_120, _mm_mul_ps(zmm5, temp0_121))
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm7, zmm0))
            float temp0_130[0x4] = _mm_sub_ps(temp0_124, _mm_mul_ps(zmm1, temp0_119))
            float temp0_131[0x4] = _mm_add_ps(temp0_126, temp0_126)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_133[0x4] = _mm_add_ps(temp0_130, temp0_130)
            zmm5 = _mm_mul_ps(temp0_102, zmm3)
            zmm7 = _mm_mul_ps(temp0_131, temp0_121)
            zmm1 = zmm3
            zmm3 = _mm_mul_ps(zmm3, temp0_121)
            float temp0_141[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_133, temp0_119), zmm3), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_102, temp0_131), var_268_2))
            zmm3 = _mm_mul_ps(temp0_102, temp0_133)
            float temp0_143[0x4] = _mm_mul_ps(zmm1, zmm0)
            float temp0_144[0x4] = _mm_mul_ps(temp0_133, zmm0)
            zmm5 = __addps_xmmps_memps(zmm5, var_258_2)
            zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, temp0_144), zmm5)
            zmm3 = __addps_xmmps_memps(zmm3, var_248_2)
            float temp0_151[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_143, _mm_mul_ps(temp0_131, temp0_119)), zmm3)
            zmm14 = arg3[1][0]
            zmm11 = (*arg3)[5]
            float temp0_153[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_141)
            float temp0_155[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm7)
            zmm10 = (*arg3)[6]
            float temp0_157[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_151)
            zmm0 = __subps_xmmps_memps(temp0_153, temp0_104)
            float temp0_159[0x4] = __subps_xmmps_memps(temp0_155, temp0_105)
            float temp0_160[0x4] = __subps_xmmps_memps(temp0_157, temp0_106)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), zmm15)
            float temp0_164[0x4] = _mm_add_ps(_mm_mul_ps(temp0_159, temp0_159), zmm0)
            float temp0_166[0x4] = _mm_add_ps(_mm_mul_ps(temp0_160, temp0_160), temp0_164)
            zmm0 = _mm_rsqrt_ps(temp0_166)
            float temp0_169[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_166, zmm0), zmm0)
            float temp0_172[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_169), zmm0), data_142d3f640)
            zmm0 = _mm_rcp_ps(temp0_172)
            float temp0_174[0x4] = _mm_mul_ps(temp0_172, zmm0)
            float var_158_2[0x4] = temp0_102
            float var_148_2[0x4] = temp0_102
            float var_138_2[0x4] = temp0_102
            float var_128_2[0x4] = temp0_102
            float temp0_178[0x4] = __subps_xmmps_memps(
                _mm_sub_ps(temp0_103, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_174), zmm0)), 
                var_218_2)
            zmm0 = __cmpps_xmmps_memps_immb(temp0_178, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                float temp0_181[0x4] = _mm_mul_ps(temp0_153, temp0_178)
                result = zx.d(result.b)
                zmm5 = zmm13
                char temp2_1 = result.b & 1
                
                if (temp2_1 == 0)
                    zmm11 = _mm_mul_ps(temp0_155, temp0_178)
                    zmm4 = zmm8
                    
                    if (temp2_1 != 0)
                        goto label_1400b0fb3
                    
                    goto label_1400b0f3a
                
                zmm5 = zmm13
                zmm5[0] = zmm5[0] f+ temp0_181[0]
                zmm11 = _mm_mul_ps(temp0_155, temp0_178)
                zmm4 = zmm8
                
                if (temp2_1 != 0)
                label_1400b0fb3:
                    zmm4 = zmm8
                    zmm4[0] = zmm4[0] + zmm11[0]
                    zmm10 = _mm_mul_ps(temp0_157, temp0_178)
                    zmm6 = zmm12
                    
                    if (temp2_1 == 0)
                        goto label_1400b0f48
                    
                    goto label_1400b0fca
                
            label_1400b0f3a:
                zmm10 = _mm_mul_ps(temp0_157, temp0_178)
                zmm6 = zmm12
                bool cond:17_1
                bool cond:18_1
                bool cond:25_1
                bool cond:26_1
                
                if (temp2_1 == 0)
                label_1400b0f48:
                    zmm13 = _mm_add_ps(zmm13, temp0_181)
                    char temp8_1 = result.b & 2
                    cond:17_1 = temp8_1 != 0
                    cond:18_1 = temp8_1 == 0
                    cond:25_1 = temp8_1 == 0
                    cond:26_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_1400b0fdf
                    
                    goto label_1400b0f54
                
            label_1400b0fca:
                zmm6 = zmm12
                zmm6[0] = zmm6[0] + zmm10[0]
                zmm13 = _mm_add_ps(zmm13, temp0_181)
                char temp7_1 = result.b & 2
                cond:17_1 = temp7_1 != 0
                cond:18_1 = temp7_1 == 0
                cond:25_1 = temp7_1 == 0
                cond:26_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                label_1400b0fdf:
                    zmm5 = _mm_blend_ps(zmm5, zmm13, 2)
                    zmm8 = _mm_add_ps(zmm8, zmm11)
                    
                    if (cond:18_1)
                        goto label_1400b0f5e
                    
                    goto label_1400b0ff0
                
            label_1400b0f54:
                zmm8 = _mm_add_ps(zmm8, zmm11)
                
                if (not(cond:17_1))
                label_1400b0f5e:
                    zmm12 = _mm_add_ps(zmm12, zmm10)
                    
                    if (cond:26_1)
                        goto label_1400b1001
                    
                    goto label_1400b0f68
                
            label_1400b0ff0:
                zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                zmm12 = _mm_add_ps(zmm12, zmm10)
                bool cond:35_1
                bool cond:36_1
                bool cond:41_1
                bool cond:42_1
                
                if (not(cond:25_1))
                label_1400b1001:
                    zmm6 = _mm_blend_ps(zmm6, zmm12, 2)
                    char temp16_1 = result.b & 4
                    cond:35_1 = temp16_1 == 0
                    cond:36_1 = temp16_1 != 0
                    cond:41_1 = temp16_1 != 0
                    cond:42_1 = temp16_1 == 0
                    
                    if (temp16_1 == 0)
                        goto label_1400b0f70
                    
                    goto label_1400b1010
                
            label_1400b0f68:
                char temp15_1 = result.b & 4
                cond:35_1 = temp15_1 == 0
                cond:36_1 = temp15_1 != 0
                cond:41_1 = temp15_1 != 0
                cond:42_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_1400b1010:
                    zmm5 = _mm_blend_ps(zmm5, zmm13, 4)
                    
                    if (not(cond:35_1))
                    label_1400b101d:
                        zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                        
                        if (cond:42_1)
                            goto label_1400b0f7c
                        
                        goto label_1400b102a
                else
                label_1400b0f70:
                    
                    if (cond:36_1)
                        goto label_1400b101d
                
                bool cond:51_1
                bool cond:52_1
                bool cond:57_1
                bool cond:58_1
                
                if (not(cond:41_1))
                label_1400b0f7c:
                    char temp24_1 = result.b & 8
                    cond:51_1 = temp24_1 != 0
                    cond:52_1 = temp24_1 == 0
                    cond:57_1 = temp24_1 == 0
                    cond:58_1 = temp24_1 != 0
                    
                    if (temp24_1 == 0)
                        goto label_1400b1039
                    
                    goto label_1400b0f84
                
            label_1400b102a:
                zmm6 = _mm_blend_ps(zmm6, zmm12, 4)
                char temp23_1 = result.b & 8
                cond:51_1 = temp23_1 != 0
                cond:52_1 = temp23_1 == 0
                cond:57_1 = temp23_1 == 0
                cond:58_1 = temp23_1 != 0
                
                if (temp23_1 == 0)
                label_1400b1039:
                    zmm13 = zmm5
                    
                    if (cond:52_1)
                        goto label_1400b0f91
                    
                    goto label_1400b1043
                
            label_1400b0f84:
                zmm13 = _mm_blend_ps(zmm13, zmm5, 7)
                
                if (cond:51_1)
                label_1400b1043:
                    zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
                    
                    if (not(cond:57_1))
                        zmm6 = _mm_blend_ps(zmm6, zmm12, 8)
                else
                label_1400b0f91:
                    zmm8 = zmm4
                    
                    if (cond:58_1)
                        zmm6 = _mm_blend_ps(zmm6, zmm12, 8)
                
                var_278_1 = _mm_blendv_ps(var_278_1, _mm_add_ps(temp0_178, var_278_1), zmm0)
                zmm12 = zmm6
            
            rdi_1 += 4
            rbx_2 += 0x30
        while (rdi_1 s< rsi_4)
        
        if (rdi_1 s< arg8)
            goto label_1400b1486
        
        zmm2 = var_228_1
        zmm4 = var_278_1
    zmm2 = _mm_cmpeq_epi32(zmm2, zx.o(0))
    zmm0 = zmm2 & not.o(zmm13)
    zmm0 = _mm_hadd_ps(zmm0, zmm0)
    zmm0 = _mm_hadd_ps(zmm0, zmm0)
    zmm1 = zmm2 & not.o(zmm8)
    float temp0_461[0x4] = _mm_hadd_ps(zmm1, zmm1)
    zmm0 = _mm_insert_ps(zmm0, _mm_hadd_ps(temp0_461, temp0_461), 0x1c)
    zmm1 = zmm2 & not.o(zmm12)
    float temp0_464[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_465[0x4] = _mm_hadd_ps(temp0_464, temp0_464)
    float temp0_467[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg7), arg7[1].d, 0x20), 
        zmm0[0].q | temp0_465[0].q << 0x40)
    *arg7 = temp0_467[0]
    *(arg7 + 4) = __extractps_memd_xmmps_immb(temp0_467, 1)
    arg7[1].d = __extractps_memd_xmmps_immb(temp0_467, 2)
    zmm2 &= not.o(zmm4)
else
    float var_278[0x4]
    int32_t rdi
    
    if (rsi_4 s<= 0)
        rdi = 0
        zmm11 = zx.o(0)
        zmm12 = zx.o(0)
        zmm8 = zx.o(0)
        var_278 = zx.o(0)
        
        if (0 s>= arg8)
            zmm2 = var_278
        else
        label_1400b10aa:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi), 0), data_142e11d00)
            zmm13 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
            zmm0 = __pmulld_xmmdq_memdq(zmm0, data_142fc95c0) & zmm13
            int64_t rax_4 = sx.q(zmm0[0])
            void* rbx_3 = &(*arg4)[rax_4]
            zmm1 = (*arg4)[rax_4]
            int64_t rbp_1 = sx.q(_mm_extract_epi32(zmm0, 1))
            void* r14_1 = &(*arg4)[rbp_1]
            int64_t rax_6 = sx.q(_mm_extract_epi32(zmm0, 2))
            void* r15_1 = &(*arg4)[rax_6]
            int64_t rsi_6 = sx.q(_mm_extract_epi32(zmm0, 3))
            void* rdi_3 = &(*arg4)[rsi_6]
            float temp0_213[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm1, (*arg4)[rbp_1], 0x10), 
                    (*arg4)[rax_6], 0x20), 
                (*arg4)[rsi_6], 0x30)
            zmm0 = data_142fc95e0 & zmm13
            zmm2 = *(zx.q(zmm0[0]) + rbx_3)
            uint64_t rax_8 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rbp_2 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_7 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_219[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_8 + r14_1), 0x10), *(rbp_2 + r15_1), 
                    0x20), 
                *(rsi_7 + rdi_3), 0x30)
            zmm0 = data_142fc95f0 & zmm13
            zmm5 = *(zx.q(zmm0[0]) + rbx_3)
            uint64_t rax_10 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rbp_3 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rbx_4 = zx.q(_mm_extract_epi32(zmm0, 3))
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rax_10 + r14_1), 0x10), *(rbp_3 + r15_1), 
                    0x20), 
                *(rbx_4 + rdi_3), 0x30)
            uint32_t var_178_1[0x4] = zmm5
            zmm10 = zx.o(0)
            zmm7 = (*arg3)[3]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            uint32_t var_158_3[0x4] = zmm7
            uint32_t var_148_3[0x4] = zmm7
            uint32_t var_138_3[0x4] = zmm7
            uint32_t var_128_3[0x4] = zmm7
            zmm0 = *arg3
            zmm3 = (*arg3)[1]
            zmm6 = (*arg3)[2]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_229[0x4] = _mm_mul_ps(temp0_219, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm5)
            zmm5 = _mm_mul_ps(zmm5, zmm3)
            float temp0_232[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm3 = _mm_mul_ps(zmm3, temp0_213)
            float temp0_234[0x4] = _mm_mul_ps(temp0_213, temp0_232)
            float temp0_235[0x4] = _mm_mul_ps(zmm7, zmm10)
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(temp0_232, temp0_219))
            float temp0_238[0x4] = _mm_sub_ps(temp0_234, zmm0)
            float temp0_239[0x4] = _mm_sub_ps(temp0_229, zmm3)
            float temp0_240[0x4] = _mm_sub_ps(temp0_235, temp0_235)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            float temp0_242[0x4] = _mm_add_ps(temp0_238, temp0_238)
            float temp0_243[0x4] = _mm_add_ps(temp0_239, temp0_239)
            float temp0_244[0x4] = _mm_add_ps(temp0_240, temp0_240)
            uint32_t var_268_3[0x4] = zmm5
            float var_258_3[0x4] = temp0_242
            float var_248_3[0x4] = temp0_243
            float var_238_3[0x4] = temp0_244
            zmm3 = _mm_mul_ps(zmm7, zmm5)
            float temp0_246[0x4] = _mm_mul_ps(zmm7, temp0_242)
            float temp0_247[0x4] = _mm_mul_ps(zmm7, temp0_243)
            zmm3 = __addps_xmmps_memps(zmm3, temp0_213)
            float temp0_249[0x4] = __addps_xmmps_memps(temp0_246, temp0_219)
            float temp0_250[0x4] = __addps_xmmps_memps(temp0_247, var_178_1)
            float temp0_252[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_244, zmm7), zmm10)
            uint32_t var_118_1[0x4] = zmm3
            float var_108_1[0x4] = temp0_249
            float var_f8_1[0x4] = temp0_250
            zmm6 = *arg3
            zmm0 = (*arg3)[1]
            zmm2 = (*arg3)[2]
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_254[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm7 = _mm_mul_ps(temp0_242, temp0_254)
            float temp0_256[0x4] = _mm_mul_ps(temp0_254, temp0_243)
            float temp0_257[0x4] = _mm_mul_ps(temp0_243, zmm0)
            float temp0_258[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_mul_ps(zmm0, zmm5)
            zmm5 = _mm_mul_ps(zmm5, temp0_258)
            float temp0_262[0x4] = _mm_sub_ps(temp0_257, _mm_mul_ps(temp0_258, temp0_242))
            zmm5 = _mm_sub_ps(zmm5, temp0_256)
            zmm7 = _mm_sub_ps(zmm7, zmm0)
            float temp0_265[0x4] = _mm_add_ps(temp0_262, zmm3)
            zmm5 = _mm_add_ps(zmm5, temp0_249)
            zmm7 = _mm_add_ps(zmm7, temp0_250)
            zmm2 = arg3[1][0]
            zmm1 = (*arg3)[5]
            float temp0_269[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_265)
            float temp0_271[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm5)
            zmm3 = (*arg3)[6]
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm7)
            zmm9 = *arg1
            zmm0 = *arg2
            zmm4 = (*arg2)[1]
            zmm5 = _mm_sub_ps(temp0_269, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_sub_ps(temp0_271, _mm_shuffle_ps(zmm4, zmm4, 0))
            zmm4 = (*arg2)[2]
            float temp0_279[0x4] = _mm_sub_ps(zmm3, _mm_shuffle_ps(zmm4, zmm4, 0))
            zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm5), zmm10)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), zmm5)
            float temp0_285[0x4] = _mm_add_ps(_mm_mul_ps(temp0_279, temp0_279), zmm0)
            float temp0_286[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm0 = _mm_rsqrt_ps(temp0_285)
            float temp0_289[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_285, zmm0), zmm0)
            float temp0_292[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_289), zmm0), data_142d3f640)
            zmm0 = _mm_rcp_ps(temp0_292)
            float temp0_294[0x4] = _mm_mul_ps(temp0_292, zmm0)
            float temp0_297[0x4] =
                _mm_sub_ps(temp0_286, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_294), zmm0))
            zmm0 = arg5
            float temp0_299[0x4] = _mm_sub_ps(temp0_297, _mm_shuffle_ps(zmm0, zmm0, 0))
            float var_e8_1[0x4] = temp0_252
            uint32_t temp0_301[0x4] =
                _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_299, data_142fc95d0, 1), zmm13)
            result = _mm_movemask_ps(temp0_301)
            
            if (result.b == 0)
                zmm2 = var_278
            else
                float temp0_303[0x4] = _mm_mul_ps(temp0_269, temp0_299)
                result = zx.d(result.b)
                zmm6 = zmm8
                char temp3_1 = result.b & 1
                
                if (temp3_1 == 0)
                    zmm1 = _mm_mul_ps(temp0_271, temp0_299)
                    zmm4 = zmm12
                    
                    if (temp3_1 != 0)
                        goto label_1400b1854
                    
                    goto label_1400b13ed
                
                zmm6 = zmm8
                zmm6[0] = zmm6[0] + temp0_303[0]
                zmm1 = _mm_mul_ps(temp0_271, temp0_299)
                zmm4 = zmm12
                
                if (temp3_1 != 0)
                label_1400b1854:
                    zmm4 = zmm12
                    zmm4[0] = zmm4[0] + zmm1[0]
                    zmm3 = _mm_mul_ps(zmm3, temp0_299)
                    zmm5 = zmm11
                    
                    if (temp3_1 == 0)
                        goto label_1400b13fb
                    
                    goto label_1400b186a
                
            label_1400b13ed:
                zmm3 = _mm_mul_ps(zmm3, temp0_299)
                zmm5 = zmm11
                bool cond:27_1
                bool cond:28_1
                bool cond:33_1
                bool cond:34_1
                
                if (temp3_1 == 0)
                label_1400b13fb:
                    zmm8 = _mm_add_ps(zmm8, temp0_303)
                    char temp10_1 = result.b & 2
                    cond:27_1 = temp10_1 != 0
                    cond:28_1 = temp10_1 == 0
                    cond:33_1 = temp10_1 == 0
                    cond:34_1 = temp10_1 != 0
                    zmm2 = var_278
                    
                    if (temp10_1 != 0)
                        goto label_1400b1882
                    
                    goto label_1400b140b
                
            label_1400b186a:
                zmm5 = zmm11
                zmm5[0] = zmm5[0] f+ zmm3[0]
                zmm8 = _mm_add_ps(zmm8, temp0_303)
                char temp9_1 = result.b & 2
                cond:27_1 = temp9_1 != 0
                cond:28_1 = temp9_1 == 0
                cond:33_1 = temp9_1 == 0
                cond:34_1 = temp9_1 != 0
                zmm2 = var_278
                
                if (temp9_1 != 0)
                label_1400b1882:
                    zmm6 = _mm_blend_ps(zmm6, zmm8, 2)
                    zmm12 = _mm_add_ps(zmm12, zmm1)
                    
                    if (cond:28_1)
                        goto label_1400b1415
                    
                    goto label_1400b1893
                
            label_1400b140b:
                zmm12 = _mm_add_ps(zmm12, zmm1)
                
                if (not(cond:27_1))
                label_1400b1415:
                    zmm11 = _mm_add_ps(zmm11, zmm3)
                    
                    if (cond:34_1)
                        goto label_1400b18a4
                    
                    goto label_1400b141f
                
            label_1400b1893:
                zmm4 = _mm_blend_ps(zmm4, zmm12, 2)
                zmm11 = _mm_add_ps(zmm11, zmm3)
                bool cond:43_1
                bool cond:44_1
                bool cond:49_1
                bool cond:50_1
                
                if (not(cond:33_1))
                label_1400b18a4:
                    zmm5 = _mm_blend_ps(zmm5, zmm11, 2)
                    char temp18_1 = result.b & 4
                    cond:43_1 = temp18_1 == 0
                    cond:44_1 = temp18_1 != 0
                    cond:49_1 = temp18_1 != 0
                    cond:50_1 = temp18_1 == 0
                    
                    if (temp18_1 == 0)
                        goto label_1400b1427
                    
                    goto label_1400b18b3
                
            label_1400b141f:
                char temp17_1 = result.b & 4
                cond:43_1 = temp17_1 == 0
                cond:44_1 = temp17_1 != 0
                cond:49_1 = temp17_1 != 0
                cond:50_1 = temp17_1 == 0
                
                if (temp17_1 != 0)
                label_1400b18b3:
                    zmm6 = _mm_blend_ps(zmm6, zmm8, 4)
                    
                    if (not(cond:43_1))
                    label_1400b18c0:
                        zmm4 = _mm_blend_ps(zmm4, zmm12, 4)
                        
                        if (cond:50_1)
                            goto label_1400b1433
                        
                        goto label_1400b18cd
                else
                label_1400b1427:
                    
                    if (cond:44_1)
                        goto label_1400b18c0
                
                bool cond:59_1
                bool cond:60_1
                bool cond:65_1
                bool cond:66_1
                
                if (not(cond:49_1))
                label_1400b1433:
                    char temp26_1 = result.b & 8
                    cond:59_1 = temp26_1 != 0
                    cond:60_1 = temp26_1 == 0
                    cond:65_1 = temp26_1 == 0
                    cond:66_1 = temp26_1 != 0
                    
                    if (temp26_1 == 0)
                        goto label_1400b18dc
                    
                    goto label_1400b143b
                
            label_1400b18cd:
                zmm5 = _mm_blend_ps(zmm5, zmm11, 4)
                char temp25_1 = result.b & 8
                cond:59_1 = temp25_1 != 0
                cond:60_1 = temp25_1 == 0
                cond:65_1 = temp25_1 == 0
                cond:66_1 = temp25_1 != 0
                
                if (temp25_1 == 0)
                label_1400b18dc:
                    zmm8 = zmm6
                    
                    if (cond:60_1)
                        goto label_1400b1448
                    
                    goto label_1400b18e6
                
            label_1400b143b:
                zmm8 = _mm_blend_ps(zmm8, zmm6, 7)
                
                if (cond:59_1)
                label_1400b18e6:
                    zmm12 = _mm_blend_ps(zmm12, zmm4, 7)
                    
                    if (not(cond:65_1))
                        zmm5 = _mm_blend_ps(zmm5, zmm11, 8)
                else
                label_1400b1448:
                    zmm12 = zmm4
                    
                    if (cond:66_1)
                        zmm5 = _mm_blend_ps(zmm5, zmm11, 8)
                
                zmm2 = _mm_blendv_ps(zmm2, _mm_add_ps(temp0_299, zmm2), temp0_301)
                zmm11 = zmm5
    else
        zmm15 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
        float var_1a8_1[0x4] = *arg3
        float var_1b8_1[0x4] = (*arg3)[1]
        float var_1c8_1[0x4] = (*arg3)[2]
        zmm1 = *arg1
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        uint32_t var_218_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        int32_t rbx_1 = 0
        rdi = 0
        var_278 = zx.o(0)
        zmm8 = zx.o(0)
        zmm12 = zx.o(0)
        zmm11 = zx.o(0)
        
        do
            int64_t rax_1 = sx.q(rbx_1)
            zmm0 = *(arg4 + rax_1)
            zmm1 = *(arg4 + rax_1 + 0x10)
            zmm2 = *(arg4 + rax_1 + 0x20)
            uint32_t temp0_7[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            zmm6 = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm1, 0xec)
            zmm7 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm1, 0xf0), temp0_7, 3)
            zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xa4), zmm0, 0x3f)
            float temp0_17[0x4] = _mm_shuffle_ps(_mm_blend_epi16(zmm6, zmm1, 0xc), zmm2, 0xc4)
            zmm14 = zx.o(0)
            float var_238_1[0x4] = zmm14
            float temp0_18[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
            zmm3 = _mm_mul_ps(temp0_18, temp0_17)
            float temp0_20[0x4] = _mm_shuffle_ps(var_1c8_1, var_1c8_1, 0)
            float temp0_21[0x4] = _mm_mul_ps(temp0_20, zmm7)
            zmm0 = var_1a8_1
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            zmm5 = _mm_mul_ps(zmm0, zmm4)
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm4, temp0_20))
            float temp0_27[0x4] = _mm_sub_ps(temp0_21, _mm_mul_ps(temp0_17, zmm0))
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm7, temp0_18))
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_31[0x4] = _mm_add_ps(temp0_27, temp0_27)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            float temp0_33[0x4] = _mm_mul_ps(temp0_1, temp0_31)
            float temp0_34[0x4] = _mm_mul_ps(zmm3, temp0_20)
            float temp0_35[0x4] = _mm_mul_ps(temp0_31, temp0_20)
            float temp0_40[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm5, temp0_18), temp0_35), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, zmm3), zmm7))
            float temp0_41[0x4] = _mm_mul_ps(temp0_1, zmm5)
            zmm7 = _mm_mul_ps(temp0_31, zmm0)
            zmm5 = _mm_mul_ps(zmm5, zmm0)
            float temp0_44[0x4] = __addps_xmmps_memps(temp0_33, zmm4)
            float temp0_46[0x4] = _mm_add_ps(_mm_sub_ps(temp0_34, zmm5), temp0_44)
            float temp0_47[0x4] = __addps_xmmps_memps(temp0_41, temp0_17)
            zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, _mm_mul_ps(zmm3, temp0_18)), temp0_47)
            zmm13 = arg3[1][0]
            zmm10 = (*arg3)[5]
            float temp0_52[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_40)
            float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_46)
            zmm9 = (*arg3)[6]
            float temp0_56[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm7)
            zmm0 = __subps_xmmps_memps(temp0_52, temp0_3)
            float temp0_58[0x4] = __subps_xmmps_memps(temp0_54, temp0_4)
            float temp0_59[0x4] = __subps_xmmps_memps(temp0_56, temp0_5)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), zmm14)
            float temp0_63[0x4] = _mm_add_ps(_mm_mul_ps(temp0_58, temp0_58), zmm0)
            float temp0_65[0x4] = _mm_add_ps(_mm_mul_ps(temp0_59, temp0_59), temp0_63)
            zmm0 = _mm_rsqrt_ps(temp0_65)
            float temp0_68[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_65, zmm0), zmm0)
            float temp0_71[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_68), zmm0), data_142d3f640)
            zmm0 = _mm_rcp_ps(temp0_71)
            float temp0_73[0x4] = _mm_mul_ps(temp0_71, zmm0)
            float var_158_1[0x4] = temp0_1
            float var_148_1[0x4] = temp0_1
            float var_138_1[0x4] = temp0_1
            float var_128_1[0x4] = temp0_1
            float temp0_77[0x4] = __subps_xmmps_memps(
                _mm_sub_ps(temp0_2, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_73), zmm0)), 
                var_218_1)
            zmm0 = __cmpps_xmmps_memps_immb(temp0_77, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                float temp0_80[0x4] = _mm_mul_ps(temp0_52, temp0_77)
                result = zx.d(result.b)
                zmm3 = zmm8
                char temp4_1 = result.b & 1
                
                if (temp4_1 == 0)
                    zmm10 = _mm_mul_ps(temp0_54, temp0_77)
                    zmm4 = zmm12
                    
                    if (temp4_1 != 0)
                        goto label_1400b0bb3
                    
                    goto label_1400b0b3a
                
                zmm3 = zmm8
                zmm3[0] = zmm3[0] f+ temp0_80[0]
                zmm10 = _mm_mul_ps(temp0_54, temp0_77)
                zmm4 = zmm12
                
                if (temp4_1 != 0)
                label_1400b0bb3:
                    zmm4 = zmm12
                    zmm4[0] = zmm4[0] + zmm10[0]
                    zmm9 = _mm_mul_ps(temp0_56, temp0_77)
                    zmm5 = zmm11
                    
                    if (temp4_1 == 0)
                        goto label_1400b0b48
                    
                    goto label_1400b0bca
                
            label_1400b0b3a:
                zmm9 = _mm_mul_ps(temp0_56, temp0_77)
                zmm5 = zmm11
                bool cond:21_1
                bool cond:22_1
                bool cond:29_1
                bool cond:30_1
                
                if (temp4_1 == 0)
                label_1400b0b48:
                    zmm8 = _mm_add_ps(zmm8, temp0_80)
                    char temp12_1 = result.b & 2
                    cond:21_1 = temp12_1 != 0
                    cond:22_1 = temp12_1 == 0
                    cond:29_1 = temp12_1 == 0
                    cond:30_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_1400b0bdf
                    
                    goto label_1400b0b54
                
            label_1400b0bca:
                zmm5 = zmm11
                zmm5[0] = zmm5[0] f+ zmm9[0]
                zmm8 = _mm_add_ps(zmm8, temp0_80)
                char temp11_1 = result.b & 2
                cond:21_1 = temp11_1 != 0
                cond:22_1 = temp11_1 == 0
                cond:29_1 = temp11_1 == 0
                cond:30_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                label_1400b0bdf:
                    zmm3 = _mm_blend_ps(zmm3, zmm8, 2)
                    zmm12 = _mm_add_ps(zmm12, zmm10)
                    
                    if (cond:22_1)
                        goto label_1400b0b5e
                    
                    goto label_1400b0bf0
                
            label_1400b0b54:
                zmm12 = _mm_add_ps(zmm12, zmm10)
                
                if (not(cond:21_1))
                label_1400b0b5e:
                    zmm11 = _mm_add_ps(zmm11, zmm9)
                    
                    if (cond:30_1)
                        goto label_1400b0c01
                    
                    goto label_1400b0b68
                
            label_1400b0bf0:
                zmm4 = _mm_blend_ps(zmm4, zmm12, 2)
                zmm11 = _mm_add_ps(zmm11, zmm9)
                bool cond:37_1
                bool cond:38_1
                bool cond:45_1
                bool cond:46_1
                
                if (not(cond:29_1))
                label_1400b0c01:
                    zmm5 = _mm_blend_ps(zmm5, zmm11, 2)
                    char temp20_1 = result.b & 4
                    cond:37_1 = temp20_1 == 0
                    cond:38_1 = temp20_1 != 0
                    cond:45_1 = temp20_1 != 0
                    cond:46_1 = temp20_1 == 0
                    
                    if (temp20_1 == 0)
                        goto label_1400b0b70
                    
                    goto label_1400b0c10
                
            label_1400b0b68:
                char temp19_1 = result.b & 4
                cond:37_1 = temp19_1 == 0
                cond:38_1 = temp19_1 != 0
                cond:45_1 = temp19_1 != 0
                cond:46_1 = temp19_1 == 0
                
                if (temp19_1 != 0)
                label_1400b0c10:
                    zmm3 = _mm_blend_ps(zmm3, zmm8, 4)
                    
                    if (not(cond:37_1))
                    label_1400b0c1d:
                        zmm4 = _mm_blend_ps(zmm4, zmm12, 4)
                        
                        if (cond:46_1)
                            goto label_1400b0b7c
                        
                        goto label_1400b0c2a
                else
                label_1400b0b70:
                    
                    if (cond:38_1)
                        goto label_1400b0c1d
                
                bool cond:53_1
                bool cond:54_1
                bool cond:61_1
                bool cond:62_1
                
                if (not(cond:45_1))
                label_1400b0b7c:
                    char temp28_1 = result.b & 8
                    cond:53_1 = temp28_1 != 0
                    cond:54_1 = temp28_1 == 0
                    cond:61_1 = temp28_1 == 0
                    cond:62_1 = temp28_1 != 0
                    
                    if (temp28_1 == 0)
                        goto label_1400b0c39
                    
                    goto label_1400b0b84
                
            label_1400b0c2a:
                zmm5 = _mm_blend_ps(zmm5, zmm11, 4)
                char temp27_1 = result.b & 8
                cond:53_1 = temp27_1 != 0
                cond:54_1 = temp27_1 == 0
                cond:61_1 = temp27_1 == 0
                cond:62_1 = temp27_1 != 0
                
                if (temp27_1 == 0)
                label_1400b0c39:
                    zmm8 = zmm3
                    
                    if (cond:54_1)
                        goto label_1400b0b91
                    
                    goto label_1400b0c43
                
            label_1400b0b84:
                zmm8 = _mm_blend_ps(zmm8, zmm3, 7)
                
                if (cond:53_1)
                label_1400b0c43:
                    zmm12 = _mm_blend_ps(zmm12, zmm4, 7)
                    
                    if (not(cond:61_1))
                        zmm5 = _mm_blend_ps(zmm5, zmm11, 8)
                else
                label_1400b0b91:
                    zmm12 = zmm4
                    
                    if (cond:62_1)
                        zmm5 = _mm_blend_ps(zmm5, zmm11, 8)
                
                var_278 = _mm_blendv_ps(var_278, _mm_add_ps(temp0_77, var_278), zmm0)
                zmm11 = zmm5
            
            rdi += 4
            rbx_1 += 0x30
        while (rdi s< rsi_4)
        
        if (rdi s< arg8)
            goto label_1400b10aa
        
        zmm2 = var_278
    zmm8 = _mm_hadd_ps(zmm8, zmm8)
    zmm8 = _mm_hadd_ps(zmm8, zmm8)
    float temp0_434[0x4] = _mm_hadd_ps(zmm12, zmm12)
    zmm8 = _mm_insert_ps(zmm8, _mm_hadd_ps(temp0_434, temp0_434), 0x1c)
    float temp0_437[0x4] = _mm_hadd_ps(zmm11, zmm11)
    float temp0_438[0x4] = _mm_hadd_ps(temp0_437, temp0_437)
    zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg7), arg7[1].d, 0x20), 
        zmm8[0].q | temp0_438[0].q << 0x40)
    *arg7 = zmm0[0]
    *(arg7 + 4) = __extractps_memd_xmmps_immb(zmm0, 1)
    arg7[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
float temp0_470[0x4] = _mm_hadd_ps(zmm2, zmm2)
float temp0_471[0x4] = _mm_hadd_ps(temp0_470, temp0_470)
temp0_471[0] = temp0_471[0] f+ *arg6
*arg6 = temp0_471[0]
return result
