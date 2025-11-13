// 函数: sub_1400aeeb0
// 地址: 0x1400aeeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm8[0x4]
float var_b8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_c8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_d8[0x4] = zmm6
float zmm0[0x4] = *arg9
float zmm9[0x4] = arg5
uint32_t result = _mm_movemask_ps(zmm0)
int32_t rsi_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
float zmm1[0x4]
uint32_t zmm2[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]
uint32_t zmm11[0x4]
float zmm12[0x4]

if (result != 0xf)
    float var_278_2[0x4] = zmm0
    float var_288_1[0x4]
    int32_t rdi_1
    
    if (rsi_4 s<= 0)
        rdi_1 = 0
        zmm11 = zx.o(0)
        zmm13 = zx.o(0)
        zmm12 = zx.o(0)
        var_288_1 = zx.o(0)
        
        if (0 s>= arg8)
            zmm6 = var_278_2
            zmm7 = var_288_1
        else
        label_1400afaf1:
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi_1), 0), data_142e11d00)
            zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm1)
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm8
            int64_t rax_12 = sx.q(zmm1[0])
            void* rbx_5 = &(*arg4)[rax_12]
            zmm0 = (*arg4)[rax_12]
            int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* r14_2 = &(*arg4)[rbp_4]
            int64_t rax_14 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* r15_2 = &(*arg4)[rax_14]
            int64_t rsi_9 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rdi_5 = &(*arg4)[rsi_9]
            float temp0_290[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg4)[rbp_4], 0x10), 
                    (*arg4)[rax_14], 0x20), 
                (*arg4)[rsi_9], 0x30)
            zmm2 = data_142fc95e0 & zmm8
            zmm1 = *(zx.q(zmm2[0]) + rbx_5)
            uint64_t rax_16 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_5 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rsi_10 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_296[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm1, *(rax_16 + r14_2), 0x10), *(rbp_5 + r15_2), 
                    0x20), 
                *(rsi_10 + rdi_5), 0x30)
            zmm2 = data_142fc95f0 & zmm8
            zmm4 = *(zx.q(zmm2[0]) + rbx_5)
            int32_t* rax_18 = zx.q(_mm_extract_epi32(zmm2, 1))
            int32_t* rbp_6 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rbx_6 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_302[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_18 + r14_2), 0x10), *(rbp_6 + r15_2), 
                    0x20), 
                *(rbx_6 + rdi_5), 0x30)
            int128_t var_168_2 = zx.o(0)
            zmm5 = (*arg3)[3]
            float temp0_303[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float var_158_4[0x4] = temp0_303
            float var_148_4[0x4] = temp0_303
            float var_138_4[0x4] = temp0_303
            float var_128_4[0x4] = temp0_303
            zmm6 = *arg3
            zmm7 = (*arg3)[1]
            zmm3 = (*arg3)[2]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm2 = _mm_mul_ps(temp0_296, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_302)
            float temp0_308[0x4] = _mm_mul_ps(temp0_302, zmm7)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm7 = _mm_mul_ps(zmm7, temp0_290)
            float temp0_311[0x4] = _mm_mul_ps(temp0_290, zmm3)
            float temp0_312[0x4] = _mm_mul_ps(zx.o(0), temp0_303)
            float temp0_314[0x4] = _mm_sub_ps(temp0_308, _mm_mul_ps(zmm3, temp0_296))
            float temp0_315[0x4] = _mm_sub_ps(temp0_311, zmm6)
            zmm2 = _mm_sub_ps(zmm2, zmm7)
            float temp0_317[0x4] = _mm_sub_ps(temp0_312, temp0_312)
            float temp0_318[0x4] = _mm_add_ps(temp0_314, temp0_314)
            float temp0_319[0x4] = _mm_add_ps(temp0_315, temp0_315)
            zmm2 = _mm_add_ps(zmm2, zmm2)
            float temp0_321[0x4] = _mm_add_ps(temp0_317, temp0_317)
            float var_268_4[0x4] = temp0_318
            float var_258_4[0x4] = temp0_319
            uint32_t var_248_4[0x4] = zmm2
            float var_238_4[0x4] = temp0_321
            float temp0_322[0x4] = _mm_mul_ps(temp0_321, temp0_303)
            float temp0_323[0x4] = _mm_mul_ps(temp0_303, temp0_318)
            float temp0_324[0x4] = _mm_mul_ps(temp0_303, temp0_319)
            float temp0_325[0x4] = _mm_mul_ps(temp0_303, zmm2)
            float temp0_326[0x4] = __addps_xmmps_memps(temp0_323, temp0_290)
            float temp0_327[0x4] = __addps_xmmps_memps(temp0_324, temp0_296)
            float temp0_328[0x4] = __addps_xmmps_memps(temp0_325, temp0_302)
            float temp0_329[0x4] = __addps_xmmps_memps(temp0_322, zx.o(0))
            float var_118_2[0x4] = temp0_326
            float var_108_2[0x4] = temp0_327
            float var_f8_2[0x4] = temp0_328
            zmm3 = *arg3
            zmm1 = (*arg3)[1]
            zmm6 = (*arg3)[2]
            float temp0_330[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm7 = _mm_mul_ps(temp0_319, zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm2)
            zmm2 = _mm_mul_ps(zmm2, temp0_330)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_336[0x4] = _mm_mul_ps(temp0_330, temp0_318)
            float temp0_337[0x4] = _mm_mul_ps(temp0_318, zmm6)
            zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(zmm6, temp0_319))
            float temp0_340[0x4] = _mm_sub_ps(temp0_337, zmm3)
            zmm7 = _mm_sub_ps(zmm7, temp0_336)
            zmm2 = _mm_add_ps(zmm2, temp0_326)
            float temp0_343[0x4] = _mm_add_ps(temp0_340, temp0_327)
            zmm7 = _mm_add_ps(zmm7, temp0_328)
            zmm6 = arg3[1][0]
            zmm1 = (*arg3)[5]
            zmm6 = _mm_add_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm2)
            float temp0_348[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_343)
            zmm5 = (*arg3)[6]
            float temp0_350[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm7)
            zmm0 = *arg2
            zmm2 = (*arg2)[1]
            zmm3 = _mm_sub_ps(zmm6, _mm_shuffle_ps(zmm0, zmm0, 0))
            float temp0_354[0x4] = _mm_sub_ps(temp0_348, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = (*arg2)[2]
            float temp0_356[0x4] = _mm_sub_ps(temp0_350, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = *arg1
            zmm7 = (*arg1)[1]
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
            zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_354), zmm2)
            zmm2 = (*arg1)[2]
            zmm0 = arg5
            zmm2 = _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_356), zmm7), 
                _mm_shuffle_ps(zmm0, zmm0, 0))
            float var_e8_2[0x4] = temp0_329
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm2, data_142fc95d0, 1), zmm8)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b == 0)
                zmm6 = var_278_2
                zmm7 = var_288_1
            else
                zmm6 = _mm_mul_ps(zmm6, zmm2)
                result = zx.d(result.b)
                zmm8 = zmm12
                char temp1_1 = result.b & 1
                
                if (temp1_1 == 0)
                    zmm1 = _mm_mul_ps(temp0_348, zmm2)
                    zmm4 = zmm13
                    
                    if (temp1_1 != 0)
                        goto label_1400affaf
                    
                    goto label_1400afe01
                
                zmm8 = zmm12
                zmm8[0] = zmm8[0] f+ zmm6[0]
                zmm1 = _mm_mul_ps(temp0_348, zmm2)
                zmm4 = zmm13
                
                if (temp1_1 == 0)
                label_1400afe01:
                    zmm5 = _mm_mul_ps(temp0_350, zmm2)
                    zmm3 = zmm11
                    
                    if (temp1_1 != 0)
                        zmm3 = zmm11
                        zmm3[0] = zmm3[0] f+ zmm5[0]
                else
                label_1400affaf:
                    zmm4 = zmm13
                    zmm4[0] = zmm4[0] + zmm1[0]
                    zmm5 = _mm_mul_ps(temp0_350, zmm2)
                    zmm3 = zmm11
                    
                    if (temp1_1 != 0)
                        zmm3 = zmm11
                        zmm3[0] = zmm3[0] f+ zmm5[0]
                
                float temp0_373[0x4] = _mm_add_ps(zmm12, zmm6)
                char temp5_1 = result.b & 2
                zmm6 = var_278_2
                zmm7 = var_288_1
                
                if (temp5_1 == 0)
                    zmm13 = _mm_add_ps(zmm13, zmm1)
                    
                    if (temp5_1 != 0)
                        goto label_1400affda
                    
                    goto label_1400afe32
                
                zmm8 = _mm_blend_ps(zmm8, temp0_373, 2)
                zmm13 = _mm_add_ps(zmm13, zmm1)
                
                if (temp5_1 != 0)
                label_1400affda:
                    zmm4 = _mm_blend_ps(zmm4, zmm13, 2)
                    zmm11 = _mm_add_ps(zmm11, zmm5)
                    
                    if (temp5_1 == 0)
                        goto label_1400afe3c
                    
                    goto label_1400affeb
                
            label_1400afe32:
                zmm11 = _mm_add_ps(zmm11, zmm5)
                bool cond:40_1
                bool cond:41_1
                bool cond:48_1
                bool cond:49_1
                
                if (temp5_1 == 0)
                label_1400afe3c:
                    char temp13_1 = result.b & 4
                    cond:40_1 = temp13_1 != 0
                    cond:41_1 = temp13_1 == 0
                    cond:48_1 = temp13_1 == 0
                    cond:49_1 = temp13_1 != 0
                    
                    if (temp13_1 != 0)
                        goto label_1400afffa
                    
                    goto label_1400afe44
                
            label_1400affeb:
                zmm3 = _mm_blend_ps(zmm3, zmm11, 2)
                char temp12_1 = result.b & 4
                cond:40_1 = temp12_1 != 0
                cond:41_1 = temp12_1 == 0
                cond:48_1 = temp12_1 == 0
                cond:49_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                label_1400afffa:
                    zmm8 = _mm_blend_ps(zmm8, temp0_373, 4)
                    
                    if (cond:41_1)
                        goto label_1400afe4a
                    
                    goto label_1400b0007
                
            label_1400afe44:
                
                if (not(cond:40_1))
                label_1400afe4a:
                    
                    if (cond:49_1)
                        goto label_1400b0014
                    
                    goto label_1400afe50
                
            label_1400b0007:
                zmm4 = _mm_blend_ps(zmm4, zmm13, 4)
                bool cond:56_1
                bool cond:57_1
                bool cond:64_1
                bool cond:65_1
                
                if (not(cond:48_1))
                label_1400b0014:
                    zmm3 = _mm_blend_ps(zmm3, zmm11, 4)
                    char temp21_1 = result.b & 8
                    cond:56_1 = temp21_1 == 0
                    cond:57_1 = temp21_1 != 0
                    cond:64_1 = temp21_1 != 0
                    cond:65_1 = temp21_1 == 0
                    
                    if (temp21_1 != 0)
                        goto label_1400afe58
                    
                    goto label_1400b0023
                
            label_1400afe50:
                char temp20_1 = result.b & 8
                cond:56_1 = temp20_1 == 0
                cond:57_1 = temp20_1 != 0
                cond:64_1 = temp20_1 != 0
                cond:65_1 = temp20_1 == 0
                
                if (temp20_1 != 0)
                label_1400afe58:
                    zmm12 = _mm_blend_ps(temp0_373, zmm8, 7)
                    
                    if (cond:57_1)
                        goto label_1400b002d
                    
                    goto label_1400afe65
                
            label_1400b0023:
                zmm12 = zmm8
                
                if (cond:56_1)
                label_1400afe65:
                    zmm13 = zmm4
                    
                    if (cond:64_1)
                        zmm3 = _mm_blend_ps(zmm3, zmm11, 8)
                else
                label_1400b002d:
                    zmm13 = _mm_blend_ps(zmm13, zmm4, 7)
                    
                    if (not(cond:65_1))
                        zmm3 = _mm_blend_ps(zmm3, zmm11, 8)
                
                zmm7 = _mm_blendv_ps(zmm7, _mm_add_ps(zmm2, zmm7), zmm0)
                zmm11 = zmm3
    else
        zmm8 = (*arg3)[3]
        float temp0_92[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float var_1a8_2[0x4] = *arg3
        float var_1b8_2[0x4] = (*arg3)[1]
        float var_1c8_2[0x4] = (*arg3)[2]
        zmm0 = *arg2
        zmm1 = (*arg2)[1]
        float temp0_93[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_94[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm0 = (*arg2)[2]
        float temp0_95[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        zmm0 = *arg1
        zmm1 = (*arg1)[1]
        float temp0_96[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_97[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm0 = (*arg1)[2]
        float temp0_98[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_99[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        int32_t rbx_2 = 0
        rdi_1 = 0
        var_288_1 = zx.o(0)
        zmm12 = zx.o(0)
        zmm13 = zx.o(0)
        zmm11 = zx.o(0)
        
        do
            int64_t rax_2 = sx.q(rbx_2)
            zmm0 = *(arg4 + rax_2)
            zmm1 = *(arg4 + rax_2 + 0x10)
            zmm5 = *(arg4 + rax_2 + 0x20)
            zmm4 = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_101[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            float temp0_102[0x4] = _mm_shuffle_ps(zmm0, zmm1, 0xec)
            zmm2 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), temp0_102, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm1, 0xf0), zmm4, 3)
            zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
            zmm7 = _mm_shuffle_ps(_mm_blend_epi16(temp0_101, zmm1, 0xc), zmm5, 0xc4)
            uint32_t var_268_2[0x4] = zmm2
            uint32_t var_258_2[0x4] = zmm3
            uint32_t var_248_2[0x4] = zmm7
            int128_t var_238_2 = zx.o(0)
            float temp0_111[0x4] = _mm_shuffle_ps(var_1b8_2, var_1b8_2, 0)
            float temp0_112[0x4] = _mm_mul_ps(temp0_111, zmm7)
            float temp0_113[0x4] = _mm_shuffle_ps(var_1c8_2, var_1c8_2, 0)
            zmm6 = _mm_mul_ps(temp0_113, zmm2)
            float temp0_115[0x4] = _mm_shuffle_ps(var_1a8_2, var_1a8_2, 0)
            float temp0_116[0x4] = _mm_mul_ps(temp0_115, zmm3)
            float temp0_118[0x4] = _mm_sub_ps(temp0_112, _mm_mul_ps(zmm3, temp0_113))
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm7, temp0_115))
            float temp0_122[0x4] = _mm_sub_ps(temp0_116, _mm_mul_ps(zmm2, temp0_111))
            float temp0_123[0x4] = _mm_add_ps(temp0_118, temp0_118)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            float temp0_125[0x4] = _mm_add_ps(temp0_122, temp0_122)
            zmm3 = _mm_mul_ps(temp0_92, zmm6)
            zmm7 = _mm_mul_ps(temp0_123, temp0_113)
            zmm2 = zmm6
            zmm6 = _mm_mul_ps(zmm6, temp0_113)
            float temp0_133[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_125, temp0_111), zmm6), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_92, temp0_123), var_268_2))
            zmm6 = _mm_mul_ps(temp0_92, temp0_125)
            zmm2 = _mm_mul_ps(zmm2, temp0_115)
            float temp0_136[0x4] = _mm_mul_ps(temp0_125, temp0_115)
            zmm3 = __addps_xmmps_memps(zmm3, var_258_2)
            zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, temp0_136), zmm3)
            float temp0_140[0x4] = _mm_mul_ps(temp0_123, temp0_111)
            float var_158_2[0x4] = temp0_92
            float var_148_2[0x4] = temp0_92
            float var_138_2[0x4] = temp0_92
            zmm6 = __addps_xmmps_memps(zmm6, var_248_2)
            float var_128_2[0x4] = temp0_92
            zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, temp0_140), zmm6)
            zmm3 = arg3[1][0]
            zmm15 = (*arg3)[5]
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_133)
            float temp0_147[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm7)
            zmm14 = (*arg3)[6]
            float temp0_149[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm2)
            float temp0_151[0x4] =
                __mulps_xmmps_memps(__subps_xmmps_memps(zmm3, temp0_93), temp0_96)
            float temp0_154[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(__subps_xmmps_memps(temp0_147, temp0_94), temp0_97), temp0_151)
            float temp0_158[0x4] = _mm_sub_ps(
                _mm_add_ps(__mulps_xmmps_memps(__subps_xmmps_memps(temp0_149, temp0_95), temp0_98), 
                    temp0_154), 
                temp0_99)
            float temp0_159[0x4] = __cmpps_xmmps_memps_immb(temp0_158, data_142fc95d0, 1)
            result = _mm_movemask_ps(temp0_159)
            
            if (result.b != 0)
                zmm3 = _mm_mul_ps(zmm3, temp0_158)
                result = zx.d(result.b)
                zmm5 = zmm12
                char temp2_1 = result.b & 1
                
                if (temp2_1 == 0)
                    zmm15 = _mm_mul_ps(temp0_147, temp0_158)
                    zmm4 = zmm13
                    
                    if (temp2_1 != 0)
                        goto label_1400af652
                    
                    goto label_1400af5d3
                
                zmm5 = zmm12
                zmm5[0] = zmm5[0] f+ zmm3[0]
                zmm15 = _mm_mul_ps(temp0_147, temp0_158)
                zmm4 = zmm13
                
                if (temp2_1 != 0)
                label_1400af652:
                    zmm4 = zmm13
                    zmm4[0] = zmm4[0] + zmm15[0]
                    zmm14 = _mm_mul_ps(temp0_149, temp0_158)
                    zmm6 = zmm11
                    
                    if (temp2_1 == 0)
                        goto label_1400af5e1
                    
                    goto label_1400af669
                
            label_1400af5d3:
                zmm14 = _mm_mul_ps(temp0_149, temp0_158)
                zmm6 = zmm11
                bool cond:18_1
                bool cond:19_1
                bool cond:26_1
                bool cond:27_1
                
                if (temp2_1 == 0)
                label_1400af5e1:
                    zmm12 = _mm_add_ps(zmm12, zmm3)
                    char temp7_1 = result.b & 2
                    cond:18_1 = temp7_1 != 0
                    cond:19_1 = temp7_1 == 0
                    cond:26_1 = temp7_1 == 0
                    cond:27_1 = temp7_1 != 0
                    
                    if (temp7_1 != 0)
                        goto label_1400af67e
                    
                    goto label_1400af5ed
                
            label_1400af669:
                zmm6 = zmm11
                zmm6[0] = zmm6[0] f+ zmm14[0]
                zmm12 = _mm_add_ps(zmm12, zmm3)
                char temp6_1 = result.b & 2
                cond:18_1 = temp6_1 != 0
                cond:19_1 = temp6_1 == 0
                cond:26_1 = temp6_1 == 0
                cond:27_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                label_1400af67e:
                    zmm5 = _mm_blend_ps(zmm5, zmm12, 2)
                    zmm13 = _mm_add_ps(zmm13, zmm15)
                    
                    if (cond:19_1)
                        goto label_1400af5f7
                    
                    goto label_1400af68f
                
            label_1400af5ed:
                zmm13 = _mm_add_ps(zmm13, zmm15)
                
                if (not(cond:18_1))
                label_1400af5f7:
                    zmm11 = _mm_add_ps(zmm11, zmm14)
                    
                    if (cond:27_1)
                        goto label_1400af6a0
                    
                    goto label_1400af601
                
            label_1400af68f:
                zmm4 = _mm_blend_ps(zmm4, zmm13, 2)
                zmm11 = _mm_add_ps(zmm11, zmm14)
                bool cond:36_1
                bool cond:37_1
                bool cond:42_1
                bool cond:43_1
                
                if (not(cond:26_1))
                label_1400af6a0:
                    zmm6 = _mm_blend_ps(zmm6, zmm11, 2)
                    char temp15_1 = result.b & 4
                    cond:36_1 = temp15_1 == 0
                    cond:37_1 = temp15_1 != 0
                    cond:42_1 = temp15_1 != 0
                    cond:43_1 = temp15_1 == 0
                    
                    if (temp15_1 == 0)
                        goto label_1400af609
                    
                    goto label_1400af6af
                
            label_1400af601:
                char temp14_1 = result.b & 4
                cond:36_1 = temp14_1 == 0
                cond:37_1 = temp14_1 != 0
                cond:42_1 = temp14_1 != 0
                cond:43_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                label_1400af6af:
                    zmm5 = _mm_blend_ps(zmm5, zmm12, 4)
                    
                    if (not(cond:36_1))
                    label_1400af6bc:
                        zmm4 = _mm_blend_ps(zmm4, zmm13, 4)
                        
                        if (cond:43_1)
                            goto label_1400af615
                        
                        goto label_1400af6c9
                else
                label_1400af609:
                    
                    if (cond:37_1)
                        goto label_1400af6bc
                
                bool cond:52_1
                bool cond:53_1
                bool cond:58_1
                bool cond:59_1
                
                if (not(cond:42_1))
                label_1400af615:
                    char temp23_1 = result.b & 8
                    cond:52_1 = temp23_1 != 0
                    cond:53_1 = temp23_1 == 0
                    cond:58_1 = temp23_1 == 0
                    cond:59_1 = temp23_1 != 0
                    
                    if (temp23_1 == 0)
                        goto label_1400af6d8
                    
                    goto label_1400af61d
                
            label_1400af6c9:
                zmm6 = _mm_blend_ps(zmm6, zmm11, 4)
                char temp22_1 = result.b & 8
                cond:52_1 = temp22_1 != 0
                cond:53_1 = temp22_1 == 0
                cond:58_1 = temp22_1 == 0
                cond:59_1 = temp22_1 != 0
                
                if (temp22_1 == 0)
                label_1400af6d8:
                    zmm12 = zmm5
                    
                    if (cond:53_1)
                        goto label_1400af62a
                    
                    goto label_1400af6e2
                
            label_1400af61d:
                zmm12 = _mm_blend_ps(zmm12, zmm5, 7)
                
                if (cond:52_1)
                label_1400af6e2:
                    zmm13 = _mm_blend_ps(zmm13, zmm4, 7)
                    
                    if (not(cond:58_1))
                        zmm6 = _mm_blend_ps(zmm6, zmm11, 8)
                else
                label_1400af62a:
                    zmm13 = zmm4
                    
                    if (cond:59_1)
                        zmm6 = _mm_blend_ps(zmm6, zmm11, 8)
                
                var_288_1 = _mm_blendv_ps(var_288_1, _mm_add_ps(temp0_158, var_288_1), temp0_159)
                zmm11 = zmm6
            
            rdi_1 += 4
            rbx_2 += 0x30
        while (rdi_1 s< rsi_4)
        
        if (rdi_1 s< arg8)
            goto label_1400afaf1
        
        zmm6 = var_278_2
        zmm7 = var_288_1
    zmm6 = _mm_cmpeq_epi32(zmm6, zx.o(0))
    zmm0 = zmm6 & not.o(zmm12)
    float temp0_418[0x4] = _mm_hadd_ps(zmm0, zmm0)
    float temp0_419[0x4] = _mm_hadd_ps(temp0_418, temp0_418)
    zmm1 = zmm6 & not.o(zmm13)
    float temp0_420[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_422[0x4] = _mm_insert_ps(temp0_419, _mm_hadd_ps(temp0_420, temp0_420), 0x1c)
    zmm1 = zmm6 & not.o(zmm11)
    float temp0_423[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_424[0x4] = _mm_hadd_ps(temp0_423, temp0_423)
    float temp0_426[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg7), arg7[1].d, 0x20), 
        temp0_422[0].q | temp0_424[0].q << 0x40)
    *arg7 = temp0_426[0]
    *(arg7 + 4) = __extractps_memd_xmmps_immb(temp0_426, 1)
    arg7[1].d = __extractps_memd_xmmps_immb(temp0_426, 2)
    zmm6 &= not.o(zmm7)
else
    float var_288[0x4]
    int32_t rdi
    
    if (rsi_4 s<= 0)
        rdi = 0
        zmm10 = zx.o(0)
        zmm12 = zx.o(0)
        zmm11 = zx.o(0)
        var_288 = zx.o(0)
        
        if (0 s>= arg8)
            zmm6 = var_288
        else
        label_1400af749:
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi), 0), data_142e11d00)
            zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm1)
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm8
            int64_t rax_4 = sx.q(zmm1[0])
            void* rbx_3 = &(*arg4)[rax_4]
            zmm0 = (*arg4)[rax_4]
            int64_t rbp_1 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* r14_1 = &(*arg4)[rbp_1]
            int64_t rax_6 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* r15_1 = &(*arg4)[rax_6]
            int64_t rsi_6 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rdi_3 = &(*arg4)[rsi_6]
            float temp0_193[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg4)[rbp_1], 0x10), 
                    (*arg4)[rax_6], 0x20), 
                (*arg4)[rsi_6], 0x30)
            zmm2 = data_142fc95e0 & zmm8
            zmm1 = *(zx.q(zmm2[0]) + rbx_3)
            uint64_t rax_8 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_2 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rsi_7 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_199[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm1, *(rax_8 + r14_1), 0x10), *(rbp_2 + r15_1), 
                    0x20), 
                *(rsi_7 + rdi_3), 0x30)
            zmm2 = data_142fc95f0 & zmm8
            zmm3 = *(zx.q(zmm2[0]) + rbx_3)
            uint64_t rax_10 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_3 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rbx_4 = zx.q(_mm_extract_epi32(zmm2, 3))
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rax_10 + r14_1), 0x10), *(rbp_3 + r15_1), 
                    0x20), 
                *(rbx_4 + rdi_3), 0x30)
            uint32_t var_178_1[0x4] = zmm3
            int128_t var_168_1 = zx.o(0)
            zmm4 = (*arg3)[3]
            float temp0_206[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float var_158_3[0x4] = temp0_206
            float var_148_3[0x4] = temp0_206
            float var_138_3[0x4] = temp0_206
            float var_128_3[0x4] = temp0_206
            zmm5 = *arg3
            zmm7 = (*arg3)[1]
            zmm6 = (*arg3)[2]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_208[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm2 = _mm_mul_ps(temp0_199, temp0_208)
            float temp0_210[0x4] = _mm_mul_ps(temp0_208, zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm7)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm7 = _mm_mul_ps(zmm7, temp0_193)
            float temp0_214[0x4] = _mm_mul_ps(temp0_193, zmm6)
            float temp0_215[0x4] = _mm_mul_ps(zx.o(0), temp0_206)
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm6, temp0_199))
            float temp0_218[0x4] = _mm_sub_ps(temp0_214, temp0_210)
            zmm2 = _mm_sub_ps(zmm2, zmm7)
            float temp0_220[0x4] = _mm_sub_ps(temp0_215, temp0_215)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_222[0x4] = _mm_add_ps(temp0_218, temp0_218)
            zmm2 = _mm_add_ps(zmm2, zmm2)
            float temp0_224[0x4] = _mm_add_ps(temp0_220, temp0_220)
            uint32_t var_268_3[0x4] = zmm3
            float var_258_3[0x4] = temp0_222
            uint32_t var_248_3[0x4] = zmm2
            float var_238_3[0x4] = temp0_224
            float temp0_225[0x4] = _mm_mul_ps(temp0_224, temp0_206)
            float temp0_226[0x4] = _mm_mul_ps(temp0_206, zmm3)
            float temp0_227[0x4] = _mm_mul_ps(temp0_206, temp0_222)
            float temp0_228[0x4] = _mm_mul_ps(temp0_206, zmm2)
            float temp0_229[0x4] = __addps_xmmps_memps(temp0_226, temp0_193)
            float temp0_230[0x4] = __addps_xmmps_memps(temp0_227, temp0_199)
            float temp0_231[0x4] = __addps_xmmps_memps(temp0_228, var_178_1)
            float temp0_232[0x4] = __addps_xmmps_memps(temp0_225, zx.o(0))
            float var_118_1[0x4] = temp0_229
            float var_108_1[0x4] = temp0_230
            float var_f8_1[0x4] = temp0_231
            zmm6 = *arg3
            zmm1 = (*arg3)[1]
            zmm5 = (*arg3)[2]
            float temp0_233[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm7 = _mm_mul_ps(temp0_222, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm2)
            zmm2 = _mm_mul_ps(zmm2, temp0_233)
            float temp0_238[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_239[0x4] = _mm_mul_ps(temp0_233, zmm3)
            zmm3 = _mm_mul_ps(zmm3, temp0_238)
            zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(temp0_238, temp0_222))
            zmm3 = _mm_sub_ps(zmm3, zmm6)
            zmm7 = _mm_sub_ps(zmm7, temp0_239)
            zmm2 = _mm_add_ps(zmm2, temp0_229)
            zmm3 = _mm_add_ps(zmm3, temp0_230)
            zmm7 = _mm_add_ps(zmm7, temp0_231)
            zmm6 = arg3[1][0]
            zmm1 = (*arg3)[5]
            zmm6 = _mm_add_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm2)
            float temp0_251[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
            zmm4 = (*arg3)[6]
            float temp0_253[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm7)
            zmm0 = *arg2
            zmm2 = (*arg2)[1]
            zmm3 = _mm_sub_ps(zmm6, _mm_shuffle_ps(zmm0, zmm0, 0))
            float temp0_257[0x4] = _mm_sub_ps(temp0_251, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = (*arg2)[2]
            float temp0_259[0x4] = _mm_sub_ps(temp0_253, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = *arg1
            zmm7 = (*arg1)[1]
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
            zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_257), zmm2)
            zmm2 = (*arg1)[2]
            zmm0 = arg5
            zmm2 = _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_259), zmm7), 
                _mm_shuffle_ps(zmm0, zmm0, 0))
            float var_e8_1[0x4] = temp0_232
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm2, data_142fc95d0, 1), zmm8)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b == 0)
                zmm6 = var_288
            else
                zmm6 = _mm_mul_ps(zmm6, zmm2)
                result = zx.d(result.b)
                zmm3 = zmm11
                char temp3_1 = result.b & 1
                
                if (temp3_1 == 0)
                    zmm1 = _mm_mul_ps(temp0_251, zmm2)
                    zmm7 = zmm12
                    
                    if (temp3_1 != 0)
                        goto label_1400afe98
                    
                    goto label_1400afa59
                
                zmm3 = zmm11
                zmm3[0] = zmm3[0] f+ zmm6[0]
                zmm1 = _mm_mul_ps(temp0_251, zmm2)
                zmm7 = zmm12
                
                if (temp3_1 != 0)
                label_1400afe98:
                    zmm7 = zmm12
                    zmm7[0] = zmm7[0] f+ zmm1[0]
                    zmm4 = _mm_mul_ps(temp0_253, zmm2)
                    zmm5 = zmm10
                    
                    if (temp3_1 == 0)
                        goto label_1400afa66
                    
                    goto label_1400afead
                
            label_1400afa59:
                zmm4 = _mm_mul_ps(temp0_253, zmm2)
                zmm5 = zmm10
                bool cond:28_1
                bool cond:29_1
                bool cond:34_1
                bool cond:35_1
                
                if (temp3_1 == 0)
                label_1400afa66:
                    zmm11 = _mm_add_ps(zmm11, zmm6)
                    char temp9_1 = result.b & 2
                    cond:28_1 = temp9_1 != 0
                    cond:29_1 = temp9_1 == 0
                    cond:34_1 = temp9_1 == 0
                    cond:35_1 = temp9_1 != 0
                    zmm6 = var_288
                    
                    if (temp9_1 != 0)
                        goto label_1400afec5
                    
                    goto label_1400afa76
                
            label_1400afead:
                zmm5 = zmm10
                zmm5[0] = zmm5[0] + zmm4[0]
                zmm11 = _mm_add_ps(zmm11, zmm6)
                char temp8_1 = result.b & 2
                cond:28_1 = temp8_1 != 0
                cond:29_1 = temp8_1 == 0
                cond:34_1 = temp8_1 == 0
                cond:35_1 = temp8_1 != 0
                zmm6 = var_288
                
                if (temp8_1 != 0)
                label_1400afec5:
                    zmm3 = _mm_blend_ps(zmm3, zmm11, 2)
                    zmm12 = _mm_add_ps(zmm12, zmm1)
                    
                    if (cond:29_1)
                        goto label_1400afa80
                    
                    goto label_1400afed6
                
            label_1400afa76:
                zmm12 = _mm_add_ps(zmm12, zmm1)
                
                if (not(cond:28_1))
                label_1400afa80:
                    zmm10 = _mm_add_ps(zmm10, zmm4)
                    
                    if (cond:35_1)
                        goto label_1400afee7
                    
                    goto label_1400afa8a
                
            label_1400afed6:
                zmm7 = _mm_blend_ps(zmm7, zmm12, 2)
                zmm10 = _mm_add_ps(zmm10, zmm4)
                bool cond:44_1
                bool cond:45_1
                bool cond:50_1
                bool cond:51_1
                
                if (not(cond:34_1))
                label_1400afee7:
                    zmm5 = _mm_blend_ps(zmm5, zmm10, 2)
                    char temp17_1 = result.b & 4
                    cond:44_1 = temp17_1 == 0
                    cond:45_1 = temp17_1 != 0
                    cond:50_1 = temp17_1 != 0
                    cond:51_1 = temp17_1 == 0
                    
                    if (temp17_1 == 0)
                        goto label_1400afa92
                    
                    goto label_1400afef6
                
            label_1400afa8a:
                char temp16_1 = result.b & 4
                cond:44_1 = temp16_1 == 0
                cond:45_1 = temp16_1 != 0
                cond:50_1 = temp16_1 != 0
                cond:51_1 = temp16_1 == 0
                
                if (temp16_1 != 0)
                label_1400afef6:
                    zmm3 = _mm_blend_ps(zmm3, zmm11, 4)
                    
                    if (not(cond:44_1))
                    label_1400aff03:
                        zmm7 = _mm_blend_ps(zmm7, zmm12, 4)
                        
                        if (cond:51_1)
                            goto label_1400afa9e
                        
                        goto label_1400aff10
                else
                label_1400afa92:
                    
                    if (cond:45_1)
                        goto label_1400aff03
                
                bool cond:60_1
                bool cond:61_1
                bool cond:66_1
                bool cond:67_1
                
                if (not(cond:50_1))
                label_1400afa9e:
                    char temp25_1 = result.b & 8
                    cond:60_1 = temp25_1 != 0
                    cond:61_1 = temp25_1 == 0
                    cond:66_1 = temp25_1 == 0
                    cond:67_1 = temp25_1 != 0
                    
                    if (temp25_1 == 0)
                        goto label_1400aff1f
                    
                    goto label_1400afaa6
                
            label_1400aff10:
                zmm5 = _mm_blend_ps(zmm5, zmm10, 4)
                char temp24_1 = result.b & 8
                cond:60_1 = temp24_1 != 0
                cond:61_1 = temp24_1 == 0
                cond:66_1 = temp24_1 == 0
                cond:67_1 = temp24_1 != 0
                
                if (temp24_1 == 0)
                label_1400aff1f:
                    zmm11 = zmm3
                    
                    if (cond:61_1)
                        goto label_1400afab3
                    
                    goto label_1400aff29
                
            label_1400afaa6:
                zmm11 = _mm_blend_ps(zmm11, zmm3, 7)
                
                if (cond:60_1)
                label_1400aff29:
                    zmm12 = _mm_blend_ps(zmm12, zmm7, 7)
                    
                    if (not(cond:66_1))
                        zmm5 = _mm_blend_ps(zmm5, zmm10, 8)
                else
                label_1400afab3:
                    zmm12 = zmm7
                    
                    if (cond:67_1)
                        zmm5 = _mm_blend_ps(zmm5, zmm10, 8)
                
                zmm6 = _mm_blendv_ps(zmm6, _mm_add_ps(zmm2, zmm6), zmm0)
                zmm10 = zmm5
    else
        zmm15 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
        float var_1a8_1[0x4] = *arg3
        float var_1b8_1[0x4] = (*arg3)[1]
        float var_1c8_1[0x4] = (*arg3)[2]
        zmm0 = *arg2
        zmm1 = (*arg2)[1]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm0 = (*arg2)[2]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        zmm0 = *arg1
        zmm1 = (*arg1)[1]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm0 = (*arg1)[2]
        float temp0_7[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        int32_t rbx_1 = 0
        rdi = 0
        var_288 = zx.o(0)
        zmm11 = zx.o(0)
        zmm12 = zx.o(0)
        zmm10 = zx.o(0)
        
        do
            int64_t rax_1 = sx.q(rbx_1)
            zmm0 = *(arg4 + rax_1)
            zmm1 = *(arg4 + rax_1 + 0x10)
            zmm2 = *(arg4 + rax_1 + 0x20)
            uint32_t temp0_9[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_10[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            float temp0_11[0x4] = _mm_shuffle_ps(zmm0, zmm1, 0xec)
            zmm7 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0x44), temp0_11, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm1, 0xf0), temp0_9, 3)
            zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xa4), zmm0, 0x3f)
            zmm6 = _mm_shuffle_ps(_mm_blend_epi16(temp0_10, zmm1, 0xc), zmm2, 0xc4)
            uint32_t var_258_1[0x4] = zmm3
            uint32_t var_248_1[0x4] = zmm6
            int128_t var_238_1 = zx.o(0)
            float temp0_20[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
            float temp0_21[0x4] = _mm_mul_ps(temp0_20, zmm6)
            zmm2 = var_1c8_1
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_23[0x4] = _mm_mul_ps(zmm2, zmm7)
            float temp0_24[0x4] = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0)
            float temp0_25[0x4] = _mm_mul_ps(temp0_24, zmm3)
            float temp0_27[0x4] = _mm_sub_ps(temp0_21, _mm_mul_ps(zmm3, zmm2))
            float temp0_29[0x4] = _mm_sub_ps(temp0_23, _mm_mul_ps(zmm6, temp0_24))
            float temp0_31[0x4] = _mm_sub_ps(temp0_25, _mm_mul_ps(zmm7, temp0_20))
            float temp0_32[0x4] = _mm_add_ps(temp0_27, temp0_27)
            float temp0_33[0x4] = _mm_add_ps(temp0_29, temp0_29)
            float temp0_34[0x4] = _mm_add_ps(temp0_31, temp0_31)
            zmm3 = _mm_mul_ps(temp0_1, temp0_33)
            zmm6 = _mm_mul_ps(temp0_32, zmm2)
            float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm2)
            zmm2 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_34, temp0_20), temp0_37), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_32), zmm7))
            float temp0_43[0x4] = _mm_mul_ps(temp0_1, temp0_34)
            zmm7 = _mm_mul_ps(temp0_33, temp0_24)
            float temp0_45[0x4] = _mm_mul_ps(temp0_34, temp0_24)
            zmm3 = __addps_xmmps_memps(zmm3, var_258_1)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, temp0_45), zmm3)
            float temp0_49[0x4] = _mm_mul_ps(temp0_32, temp0_20)
            float var_158_1[0x4] = temp0_1
            float var_148_1[0x4] = temp0_1
            float var_138_1[0x4] = temp0_1
            float temp0_50[0x4] = __addps_xmmps_memps(temp0_43, var_248_1)
            float var_128_1[0x4] = temp0_1
            zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, temp0_49), temp0_50)
            zmm8 = arg3[1][0]
            zmm14 = (*arg3)[5]
            float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm2)
            float temp0_56[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm6)
            zmm13 = (*arg3)[6]
            float temp0_58[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), zmm7)
            float temp0_60[0x4] =
                __mulps_xmmps_memps(__subps_xmmps_memps(temp0_54, temp0_2), temp0_5)
            float temp0_63[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(__subps_xmmps_memps(temp0_56, temp0_3), temp0_6), temp0_60)
            float temp0_67[0x4] = __subps_xmmps_memps(
                _mm_add_ps(__mulps_xmmps_memps(__subps_xmmps_memps(temp0_58, temp0_4), temp0_7), 
                    temp0_63), 
                temp0_8)
            float temp0_68[0x4] = __cmpps_xmmps_memps_immb(temp0_67, data_142fc95d0, 1)
            result = _mm_movemask_ps(temp0_68)
            
            if (result.b != 0)
                float temp0_70[0x4] = _mm_mul_ps(temp0_54, temp0_67)
                result = zx.d(result.b)
                zmm3 = zmm11
                char temp4_1 = result.b & 1
                
                if (temp4_1 == 0)
                    zmm14 = _mm_mul_ps(temp0_56, temp0_67)
                    zmm4 = zmm12
                    
                    if (temp4_1 != 0)
                        goto label_1400af273
                    
                    goto label_1400af1f8
                
                zmm3 = zmm11
                zmm3[0] = zmm3[0] f+ temp0_70[0]
                zmm14 = _mm_mul_ps(temp0_56, temp0_67)
                zmm4 = zmm12
                
                if (temp4_1 != 0)
                label_1400af273:
                    zmm4 = zmm12
                    zmm4[0] = zmm4[0] + zmm14[0]
                    zmm13 = _mm_mul_ps(temp0_58, temp0_67)
                    zmm5 = zmm10
                    
                    if (temp4_1 == 0)
                        goto label_1400af206
                    
                    goto label_1400af28a
                
            label_1400af1f8:
                zmm13 = _mm_mul_ps(temp0_58, temp0_67)
                zmm5 = zmm10
                bool cond:22_1
                bool cond:23_1
                bool cond:30_1
                bool cond:31_1
                
                if (temp4_1 == 0)
                label_1400af206:
                    zmm11 = _mm_add_ps(zmm11, temp0_70)
                    char temp11_1 = result.b & 2
                    cond:22_1 = temp11_1 != 0
                    cond:23_1 = temp11_1 == 0
                    cond:30_1 = temp11_1 == 0
                    cond:31_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_1400af29f
                    
                    goto label_1400af212
                
            label_1400af28a:
                zmm5 = zmm10
                zmm5[0] = zmm5[0] + zmm13[0]
                zmm11 = _mm_add_ps(zmm11, temp0_70)
                char temp10_1 = result.b & 2
                cond:22_1 = temp10_1 != 0
                cond:23_1 = temp10_1 == 0
                cond:30_1 = temp10_1 == 0
                cond:31_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                label_1400af29f:
                    zmm3 = _mm_blend_ps(zmm3, zmm11, 2)
                    zmm12 = _mm_add_ps(zmm12, zmm14)
                    
                    if (cond:23_1)
                        goto label_1400af21c
                    
                    goto label_1400af2b0
                
            label_1400af212:
                zmm12 = _mm_add_ps(zmm12, zmm14)
                
                if (not(cond:22_1))
                label_1400af21c:
                    zmm10 = _mm_add_ps(zmm10, zmm13)
                    
                    if (cond:31_1)
                        goto label_1400af2c1
                    
                    goto label_1400af226
                
            label_1400af2b0:
                zmm4 = _mm_blend_ps(zmm4, zmm12, 2)
                zmm10 = _mm_add_ps(zmm10, zmm13)
                bool cond:38_1
                bool cond:39_1
                bool cond:46_1
                bool cond:47_1
                
                if (not(cond:30_1))
                label_1400af2c1:
                    zmm5 = _mm_blend_ps(zmm5, zmm10, 2)
                    char temp19_1 = result.b & 4
                    cond:38_1 = temp19_1 == 0
                    cond:39_1 = temp19_1 != 0
                    cond:46_1 = temp19_1 != 0
                    cond:47_1 = temp19_1 == 0
                    
                    if (temp19_1 == 0)
                        goto label_1400af22e
                    
                    goto label_1400af2d0
                
            label_1400af226:
                char temp18_1 = result.b & 4
                cond:38_1 = temp18_1 == 0
                cond:39_1 = temp18_1 != 0
                cond:46_1 = temp18_1 != 0
                cond:47_1 = temp18_1 == 0
                
                if (temp18_1 != 0)
                label_1400af2d0:
                    zmm3 = _mm_blend_ps(zmm3, zmm11, 4)
                    
                    if (not(cond:38_1))
                    label_1400af2dd:
                        zmm4 = _mm_blend_ps(zmm4, zmm12, 4)
                        
                        if (cond:47_1)
                            goto label_1400af23a
                        
                        goto label_1400af2ea
                else
                label_1400af22e:
                    
                    if (cond:39_1)
                        goto label_1400af2dd
                
                bool cond:54_1
                bool cond:55_1
                bool cond:62_1
                bool cond:63_1
                
                if (not(cond:46_1))
                label_1400af23a:
                    char temp27_1 = result.b & 8
                    cond:54_1 = temp27_1 != 0
                    cond:55_1 = temp27_1 == 0
                    cond:62_1 = temp27_1 == 0
                    cond:63_1 = temp27_1 != 0
                    
                    if (temp27_1 == 0)
                        goto label_1400af2f9
                    
                    goto label_1400af242
                
            label_1400af2ea:
                zmm5 = _mm_blend_ps(zmm5, zmm10, 4)
                char temp26_1 = result.b & 8
                cond:54_1 = temp26_1 != 0
                cond:55_1 = temp26_1 == 0
                cond:62_1 = temp26_1 == 0
                cond:63_1 = temp26_1 != 0
                
                if (temp26_1 == 0)
                label_1400af2f9:
                    zmm11 = zmm3
                    
                    if (cond:55_1)
                        goto label_1400af24f
                    
                    goto label_1400af303
                
            label_1400af242:
                zmm11 = _mm_blend_ps(zmm11, zmm3, 7)
                
                if (cond:54_1)
                label_1400af303:
                    zmm12 = _mm_blend_ps(zmm12, zmm4, 7)
                    
                    if (not(cond:62_1))
                        zmm5 = _mm_blend_ps(zmm5, zmm10, 8)
                else
                label_1400af24f:
                    zmm12 = zmm4
                    
                    if (cond:63_1)
                        zmm5 = _mm_blend_ps(zmm5, zmm10, 8)
                
                var_288 = _mm_blendv_ps(var_288, _mm_add_ps(temp0_67, var_288), temp0_68)
                zmm10 = zmm5
            
            rdi += 4
            rbx_1 += 0x30
        while (rdi s< rsi_4)
        
        if (rdi s< arg8)
            goto label_1400af749
        
        zmm6 = var_288
    zmm11 = _mm_hadd_ps(zmm11, zmm11)
    zmm11 = _mm_hadd_ps(zmm11, zmm11)
    float temp0_394[0x4] = _mm_hadd_ps(zmm12, zmm12)
    zmm11 = _mm_insert_ps(zmm11, _mm_hadd_ps(temp0_394, temp0_394), 0x1c)
    float temp0_397[0x4] = _mm_hadd_ps(zmm10, zmm10)
    float temp0_398[0x4] = _mm_hadd_ps(temp0_397, temp0_397)
    float temp0_400[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg7), arg7[1].d, 0x20), 
        zmm11[0].q | temp0_398[0].q << 0x40)
    *arg7 = temp0_400[0]
    *(arg7 + 4) = __extractps_memd_xmmps_immb(temp0_400, 1)
    arg7[1].d = __extractps_memd_xmmps_immb(temp0_400, 2)
zmm6 = _mm_hadd_ps(zmm6, zmm6)
zmm6 = _mm_hadd_ps(zmm6, zmm6)
zmm6[0] = zmm6[0] f+ *arg6
*arg6 = zmm6[0]
return result
