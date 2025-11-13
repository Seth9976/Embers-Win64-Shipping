// 函数: sub_14013b2f0
// 地址: 0x14013b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg8
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
int32_t zmm10[0x4]
int32_t var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float var_d8[0x4] = arg7
float var_e8[0x4] = arg6
int64_t r11 = sx.q(arg11)
int64_t r15
r15.b = arg10
float zmm11[0x4] = arg9
int32_t rax_1 = *(&data_143442780 + (r11 << 2)) * *(&data_143442760 + (r11 << 2))
int32_t rcx_4 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
double zmm0[0x2]
float zmm1[0x4]
int32_t zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (rcx_4 s<= 0)
    uint64_t result = zx.q(arg12)
    
    if (0 s< result.d)
        zmm3 = zmm11
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(0, 0), data_142e11d00)
        int32_t temp0_163[0x4] = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & temp0_163
        int64_t rax_31 = sx.q(zmm0[0].d)
        int64_t rdx_6 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rbp_8 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rdi_6 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm4 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg2 + rax_31)), *(arg2 + rdx_6), 1), 
                *(arg2 + rbp_8), 2), 
            *(arg2 + rdi_6), 3)
        zmm0 = data_142fc95e0 & temp0_163
        int32_t* r12_1 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* r15_1 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* r14_2 = zx.q(_mm_extract_epi32(zmm0, 3))
        uint64_t r11_2 = zx.q(zmm0[0].d)
        uint32_t temp0_177[0x4] = _mm_slli_epi32(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(r11_2 + arg2 + rax_31)), 
                        *(r12_1 + arg2 + rdx_6), 1), 
                    *(r15_1 + arg2 + rbp_8), 2), 
                *(r14_2 + arg2 + rdi_6), 3), 
            4)
        zmm0 = temp0_177 & temp0_163
        int64_t rax_33 = sx.q(zmm0[0].d)
        int64_t rdx_8 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rsi_4 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rdi_8 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm11 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_33)), *(arg3 + rdx_8), 1), 
                *(arg3 + rsi_4), 2), 
            *(arg3 + rdi_8), 3)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r11_2 + arg3 + rax_33)), *(r12_1 + arg3 + rdx_8), 
                    1), 
                *(r15_1 + arg3 + rsi_4), 2), 
            *(r14_2 + arg3 + rdi_8), 3)
        arg7 = zx.o(0)
        zmm12 = _mm_shuffle_epi32(zmm11, 0x4e)
        zmm0 = _mm_cmpgt_epi32(data_1434422d0, zmm1) & temp0_163
        char temp0_189 = _mm_movemask_ps(zmm0)
        zmm2 = zx.o(0)
        char temp0_190
        
        if (temp0_189 != 0)
            temp0_190 = _mm_movemask_ps(temp0_163)
            arg8 = zx.o(0)
            zmm2 = zmm0
            zmm8 = zx.o(0)
            zmm13 = zx.o(0)
        
        if (temp0_189 == 0 || temp0_190 != temp0_189)
            int32_t temp0_191[0x4] = _mm_cmpeq_epi32(arg5, arg5)
            zmm2 ^= temp0_191
            arg8 = zx.o(0)
            zmm8 = zx.o(0)
            
            if (not(0f >= zmm3[0]))
                int32_t temp0_192[0x4] = _mm_add_epi32(temp0_191, zmm1)
                
                if (zmm3[0] >= 1f)
                    arg7 = zx.o(0)
                    arg8 = _mm_blendv_ps(zx.o(0), temp0_192, _mm_and_ps(zmm2, temp0_163))
                    zmm8 = arg8
                else
                    float temp0_193[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                    float temp0_195[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(temp0_192), temp0_193)
                    zmm0 = _mm_and_ps(zmm2, temp0_163)
                    zmm10 = _mm_round_ps(temp0_195, 9)
                    arg8 = _mm_blendv_ps(zx.o(0), 
                        _mm_min_epi32(_mm_cvttps_epi32(zmm10), temp0_192), zmm0)
                    arg7 = zx.o(0)
                    
                    if (arg10 != 1)
                        arg7 = _mm_sub_ps(temp0_195, zmm10)
                    
                    zmm8 = _mm_blendv_ps(zx.o(0), 
                        _mm_min_epi32(_mm_sub_epi32(arg8, _mm_cmpeq_epi32(zmm10, zmm10)), 
                            temp0_192), 
                        zmm0)
            
            zmm13 = _mm_blendv_ps(zx.o(0), arg7, zmm2)
        
        zmm3 = _mm_cvtepi32_epi64(zmm11[0].q)
        arg6 = _mm_cvtepi32_epi64(zmm12[0].q)
        int32_t rcx_16 = r11.d
        int32_t rax_36
        rax_36.b = rcx_16 == 3
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_36)), 0)
        zmm0 &= __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0)
        zmm2 = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm0)
        arg7 = _mm_cvtepi32_epi64(zmm2[0].q)
        arg5 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm2, 0x4e)[0])
        zmm14 = _mm_shuffle_epi32(zx.o(rax_1), 0)
        uint64_t rsi_5 = zx.q(rcx_16)
        int32_t var_258_2[0x4] = arg5
        float var_298_2[0x4] = arg7
        float var_208_1[0x4] = arg6
        int32_t var_238
        var_238.o = zmm3
        int32_t rax_56
        
        if (rcx_16 u> 6)
        label_14013cf68:
            char temp0_334 = _mm_movemask_ps(temp0_163)
            arg7 = zx.o(0)
            rax_56 = r11.d
            
            if ((temp0_334 & 4) != 0)
                arg7 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
            
            if ((temp0_334 & 8) != 0)
                arg7 = _mm_blend_epi16(arg7, zx.o(0), 0xc0)
            
        label_14013cfc2:
            zmm12 = arg7
            arg6 = arg7
            goto label_14013d047
        
        int32_t temp0_218[0x4] = _mm_mullo_epi32(arg8, zmm14)
        zmm0 = _mm_cvtepi32_epi64(temp0_218[0].q)
        float temp0_221[0x4] = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_218, 0x4e)[0].q)
        int32_t var_268
        
        switch (rsi_5)
            case 0, 1
                var_268.o = zmm14
                int32_t temp0_222[0x4] = _mm_add_epi64(arg7, zmm3)
                zmm3 = _mm_add_epi64(_mm_add_epi64(arg5, arg6), temp0_221)
                int32_t temp0_225[0x4] = _mm_add_epi64(temp0_222, zmm0)
                zmm1 = _mm_shuffle_epi32(temp0_163, 0x50)
                arg5 = _mm_blendv_ps(zx.o(0), temp0_225, zmm1)
                zmm2 = _mm_shuffle_epi32(temp0_163, 0xfa)
                float temp0_229[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                int64_t rax_38 = _mm_extract_epi64(arg5, 1)
                void* rdx_12 = arg4 + rax_38
                int32_t var_1d8_1 = (*(arg4 + rax_38))[0].d
                int64_t rax_39 = temp0_229[0].q
                void* rcx_17 = arg4 + rax_39
                int64_t rbx_7 = _mm_extract_epi64(temp0_229, 1)
                zmm3 = data_1434426c0
                float temp0_230[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                double var_1e8_2[0x2] = *(arg4 + rax_39)
                float temp0_231[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                double var_278_2[0x2] = *(arg4 + rbx_7)
                void* rbp_11 = arg5[0].q + arg4
                zmm12 = *(temp0_230[0].q + rbp_11)
                zmm10 = *(_mm_extract_epi64(temp0_230, 1) + rdx_12)
                double var_288_1[0x2] = *(temp0_231[0].q + rcx_17)
                void* rbx_8 = arg4 + rbx_7
                zmm14 = *(_mm_extract_epi64(temp0_231, 1) + rbx_8)
                zmm3 = data_1434426e0
                arg5 = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                arg6 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                arg7 = *(arg5[0].q + rbp_11)
                zmm2 = *(_mm_extract_epi64(arg5, 1) + rdx_12)
                float (* rax_46)[0x4] = arg6[0].q
                double (* rdx_13)[0x2] = _mm_extract_epi64(arg6, 1)
                zmm1 = *(rax_46 + rcx_17)
                zmm0 = *(rdx_13 + rbx_8)
                char temp0_234 = _mm_movemask_ps(temp0_163)
                int64_t rax_47
                bool cond:13
                bool cond:14
                bool cond:16
                bool cond:17
                
                if ((temp0_234 & 1) == 0)
                    char temp2_1 = temp0_234 & 2
                    cond:13 = temp2_1 != 0
                    cond:14 = temp2_1 == 0
                    cond:16 = temp2_1 != 0
                    cond:17 = temp2_1 == 0
                    rax_47 = r11
                    zmm3 = zmm14
                    
                    if (temp2_1 == 0)
                        goto label_14013cfe4
                    
                    goto label_14013caf8
                
                arg6 = *rbp_11
                char temp1_1 = temp0_234 & 2
                cond:13 = temp1_1 != 0
                cond:14 = temp1_1 == 0
                cond:16 = temp1_1 != 0
                cond:17 = temp1_1 == 0
                rax_47 = r11
                zmm3 = zmm14
                
                if (temp1_1 == 0)
                label_14013cfe4:
                    zmm14 = var_268.o
                    
                    if (cond:14)
                        goto label_14013cb10
                    
                    goto label_14013cff1
                
            label_14013caf8:
                arg6 = __insertps_xmmps_memd_immb(arg6, var_1d8_1, 0x10)
                zmm14 = var_268.o
                
                if (cond:13)
                label_14013cff1:
                    zmm12 = _mm_insert_ps(zmm12, zmm10, 0x10)
                    
                    if (cond:16)
                    label_14013cb16:
                        float temp0_236[0x4] = _mm_insert_ps(arg7, zmm2, 0x10)
                        
                        if ((temp0_234 & 4) != 0)
                            return sub_14013d007(temp0_234, zmm1, arg3, arg4, rax_47, rsi_5, arg1, 
                                zmm0, zmm3, arg6, temp0_236, zmm8, temp0_163, zmm11, zmm12, zmm14, 
                                arg8) __tailcall
                        
                        jump(0x14013cb25)
                else
                label_14013cb10:
                    
                    if (not(cond:17))
                        goto label_14013cb16
                
                if ((temp0_234 & 4) == 0)
                    jump(0x14013cb25)
                
                return sub_14013d007(temp0_234, zmm1, arg3, arg4, rax_47, rsi_5, arg1, zmm0, zmm3, 
                    arg6, arg7, zmm8, temp0_163, zmm11, zmm12, zmm14, arg8) __tailcall
            case 2
                zmm1 = _mm_add_epi64(arg7, zmm3)
                zmm3 = _mm_add_epi64(_mm_add_epi64(arg5, arg6), temp0_221)
                zmm1 = _mm_add_epi64(zmm1, zmm0)
                zmm2 = _mm_shuffle_epi32(temp0_163, 0x50)
                arg5 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                zmm10 = _mm_shuffle_epi32(temp0_163, 0xfa)
                float temp0_244[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm10)
                zmm1 = data_1434426b0
                float temp0_245[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                float temp0_246[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm10)
                int64_t rcx_20 = arg5[0].q
                void* rbx_9 = arg4 + rcx_20
                int64_t rdx_15 = _mm_extract_epi64(arg5, 1)
                void* rbp_12 = arg4 + rdx_15
                void* rax_49 = temp0_245[0].q
                int64_t rdi_9 = _mm_extract_epi64(temp0_245, 1)
                arg5 = data_1434426c0
                float temp0_247[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                int32_t temp0_248[0x4] =
                    __pinsrw_xmmdq_memw_immb(zx.o(*(rax_49 + rbx_9)), *(rdi_9 + rbp_12), 1)
                void* rax_51 = temp0_247[0].q
                int16_t* rdi_10 = _mm_extract_epi64(temp0_247, 1)
                int64_t rbx_10 = temp0_244[0].q
                zmm3 = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_51 + rbx_9)), *(rdi_10 + rbp_12), 1)
                void* rax_53 = arg4 + rbx_10
                int64_t rbp_13 = _mm_extract_epi64(temp0_244, 1)
                int16_t* rdi_11 = temp0_246[0].q
                float temp0_250[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm10)
                int32_t temp0_251[0x4] = __pinsrw_xmmdq_memw_immb(temp0_248, *(rdi_11 + rax_53), 2)
                zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(temp0_250[0].q + rax_53), 2)
                void* rax_54 = arg4 + rbp_13
                int32_t temp0_253[0x4] = __pinsrw_xmmdq_memw_immb(temp0_251, 
                    *(_mm_extract_epi64(temp0_246, 1) + rax_54), 3)
                zmm3 =
                    __pinsrw_xmmdq_memw_immb(zmm3, *(_mm_extract_epi64(temp0_250, 1) + rax_54), 3)
                zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_20)), *(arg4 + rdx_15), 1), 
                        *(arg4 + rbx_10), 2), 
                    *(arg4 + rbp_13), 3)[0])
                zmm1 = data_1434424d0
                float temp0_260[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                zmm0 = data_1434426d0
                float temp0_261[0x4] = _mm_div_ps(temp0_260, zmm0)
                float temp0_265[0x4] = _mm_div_ps(
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(temp0_253[0].q), zmm1)), zmm0)
                float temp0_269[0x4] = _mm_div_ps(
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm3[0].q), zmm1)), zmm0)
                zmm0 = data_143442710
                arg6 = _mm_mul_ps(temp0_261, zmm0)
                zmm12 = _mm_mul_ps(temp0_265, zmm0)
                arg7 = _mm_mul_ps(temp0_269, zmm0)
                rax_56 = r11.d
            label_14013d047:
                arg8 = _mm_cmpeq_epi32(arg8, zmm8) & not.o(temp0_163)
                char temp0_342 = _mm_movemask_ps(arg8)
                
                if (temp0_342 != 0)
                    if (rax_56 u<= 6)
                        zmm8 = _mm_mullo_epi32(zmm8, zmm14)
                        zmm0 = _mm_cvtepi32_epi64(zmm8[0].q)
                        zmm14 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm8, 0x4e)[0].q)
                        
                        switch (jump_table_14013d99c[rsi_5])
                            case 0x841f0f
                                undefined
                            case 0xfffff6ed
                                int32_t temp0_347[0x4] = __paddq_xmmdq_memdq(var_298_2, var_238.o)
                                zmm1 =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(var_258_2, var_208_1), zmm14)
                                int32_t temp0_350[0x4] = _mm_add_epi64(temp0_347, zmm0)
                                zmm14 = _mm_shuffle_epi32(arg8, 0x50)
                                float temp0_352[0x4] = _mm_blendv_ps(zx.o(0), temp0_350, zmm14)
                                zmm2 = _mm_shuffle_epi32(arg8, 0xfa)
                                arg5 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                                int64_t rax_66 = _mm_extract_epi64(temp0_352, 1)
                                void* rbp_15 = arg4 + rax_66
                                zmm8 = *(arg4 + rax_66)
                                int64_t rax_67 = arg5[0].q
                                void* rdx_23 = arg4 + rax_67
                                double var_298_3[0x2] = *(arg4 + rax_67)
                                int64_t rax_68 = _mm_extract_epi64(arg5, 1)
                                zmm10 = data_1434426c0
                                arg5 = _mm_blendv_ps(zx.o(0), zmm10, zmm14)
                                void* rdi_18 = arg4 + rax_68
                                float temp0_356[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm2)
                                double var_208_2[0x2] = *(arg4 + rax_68)
                                void* rbx_15 = temp0_352[0].q + arg4
                                zmm3 = *(arg5[0].q + rbx_15)
                                zmm11 = *(_mm_extract_epi64(arg5, 1) + rbp_15)
                                arg8 = *(temp0_356[0].q + rdx_23)
                                double var_258_3[0x2] = *(_mm_extract_epi64(temp0_356, 1) + rdi_18)
                                zmm10 = data_1434426e0
                                arg5 = _mm_blendv_ps(zx.o(0), zmm10, zmm14)
                                float temp0_358[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm2)
                                zmm0 = *(arg5[0].q + rbx_15)
                                zmm10 = *(_mm_extract_epi64(arg5, 1) + rbp_15)
                                int32_t (* rax_75)[0x4] = temp0_358[0].q
                                float (* rbp_16)[0x4] = _mm_extract_epi64(temp0_358, 1)
                                
                                if ((temp0_342 & 1) != 0)
                                    jump(0x14013d699)
                                
                                return sub_14013d1cb(temp0_342, temp0_342, *(rax_75 + rdx_23), 
                                    zmm3, arg1, zmm0, temp0_358, arg6, arg7, zmm8, temp0_163, 
                                    zmm10, zmm11, zmm12, zmm13, *(rbp_16 + rdi_18), arg8) __tailcall
                            case 0xfffff8c8
                                zmm3 = __paddq_xmmdq_memdq(var_298_2, var_238.o)
                                int32_t temp0_362[0x4] =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(var_258_2, var_208_1), zmm14)
                                zmm3 = _mm_add_epi64(zmm3, zmm0)
                                zmm11 = _mm_shuffle_epi32(arg8, 0x50)
                                float temp0_365[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm11)
                                zmm8 = _mm_shuffle_epi32(arg8, 0xfa)
                                float temp0_367[0x4] = _mm_blendv_ps(zx.o(0), temp0_362, zmm8)
                                int64_t rdx_27 = temp0_365[0].q
                                int64_t rbp_17 = _mm_extract_epi64(temp0_365, 1)
                                zmm10 = data_1434426b0
                                float temp0_368[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm11)
                                void* rbx_16 = arg4 + rdx_27
                                float temp0_369[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm8)
                                void* rdi_19 = arg4 + rbp_17
                                zmm2 = zx.o(*(temp0_368[0].q + rbx_16))
                                int64_t rax_79 = _mm_extract_epi64(temp0_368, 1)
                                zmm10 = data_1434426c0
                                float temp0_370[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm11)
                                int32_t temp0_371[0x4] =
                                    __pinsrw_xmmdq_memw_immb(zmm2, *(rax_79 + rdi_19), 1)
                                int32_t temp0_372[0x4] = __pinsrw_xmmdq_memw_immb(
                                    zx.o(*(temp0_370[0].q + rbx_16)), 
                                    *(_mm_extract_epi64(temp0_370, 1) + rdi_19), 1)
                                int64_t rax_82 = temp0_367[0].q
                                void* rbx_18 = arg4 + rax_82
                                float temp0_373[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm8)
                                int32_t temp0_374[0x4] = __pinsrw_xmmdq_memw_immb(temp0_371, 
                                    *(temp0_369[0].q + rbx_18), 2)
                                int32_t temp0_375[0x4] = __pinsrw_xmmdq_memw_immb(temp0_372, 
                                    *(temp0_373[0].q + rbx_18), 2)
                                zmm0 = __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_27)), 
                                        *(arg4 + rbp_17), 1), 
                                    *(arg4 + rax_82), 2)
                                int64_t rax_83 = _mm_extract_epi64(temp0_367, 1)
                                zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(arg4 + rax_83), 3)
                                void* rax_84 = arg4 + rax_83
                                int32_t temp0_379[0x4] = __pinsrw_xmmdq_memw_immb(temp0_374, 
                                    *(_mm_extract_epi64(temp0_369, 1) + rax_84), 3)
                                int32_t temp0_380[0x4] = __pinsrw_xmmdq_memw_immb(temp0_375, 
                                    *(_mm_extract_epi64(temp0_373, 1) + rax_84), 3)
                                zmm0 = _mm_cvtepu16_epi32(zmm0[0])
                                zmm8 = data_1434424d0
                                float temp0_383[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm8))
                                zmm10 = data_1434426d0
                                float temp0_384[0x4] = _mm_div_ps(temp0_383, zmm10)
                                float temp0_388[0x4] = _mm_div_ps(
                                    _mm_cvtepi32_ps(_mm_add_epi32(
                                        _mm_cvtepu16_epi32(temp0_379[0].q), zmm8)), 
                                    zmm10)
                                zmm0 = _mm_div_ps(
                                    _mm_cvtepi32_ps(_mm_add_epi32(
                                        _mm_cvtepu16_epi32(temp0_380[0].q), zmm8)), 
                                    zmm10)
                                zmm2 = data_143442710
                                _mm_mul_ps(temp0_384, zmm2)
                                _mm_mul_ps(temp0_388, zmm2)
                                _mm_mul_ps(zmm0, zmm2)
                                jump(sub_14013d1cb+0x530)
                            case 0xfffffa67
                                int32_t temp0_397[0x4] =
                                    _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f)
                                zmm11 &= temp0_397
                                int64_t rax_86 = sx.q(zmm11[0])
                                void* rdi_22 = arg4 + rax_86
                                zmm1 = *(arg4 + rax_86)
                                int64_t rax_88 = sx.q(_mm_extract_epi32(zmm11, 1))
                                void* r8_4 = arg4 + rax_88
                                int64_t rsi_6 = sx.q(_mm_extract_epi32(zmm11, 2))
                                void* rbp_19 = arg4 + rsi_6
                                int64_t rdx_31 = sx.q(_mm_extract_epi32(zmm11, 3))
                                void* rbx_20 = arg4 + rdx_31
                                float temp0_403[0x4] = __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(zmm1, *(arg4 + rax_88), 0x10), 
                                        *(arg4 + rsi_6), 0x20), 
                                    *(arg4 + rdx_31), 0x30)
                                zmm2 = data_142fc95e0 & temp0_397
                                zmm11 = *(zx.q(zmm2[0]) + rdi_22)
                                uint64_t rax_90 = zx.q(_mm_extract_epi32(zmm2, 1))
                                uint64_t rdx_32 = zx.q(_mm_extract_epi32(zmm2, 2))
                                uint64_t rsi_7 = zx.q(_mm_extract_epi32(zmm2, 3))
                                float temp0_409[0x4] = __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(zmm11, *(rax_90 + r8_4), 0x10), 
                                        *(rdx_32 + rbp_19), 0x20), 
                                    *(rsi_7 + rbx_20), 0x30)
                                zmm3 = data_142fc95f0 & temp0_397
                                zmm8 = *(zx.q(zmm3[0]) + rdi_22)
                                uint64_t rax_92 = zx.q(_mm_extract_epi32(zmm3, 1))
                                int32_t* rdx_33 = zx.q(_mm_extract_epi32(zmm3, 2))
                                int32_t* rsi_8 = zx.q(_mm_extract_epi32(zmm3, 3))
                                float temp0_415[0x4] = __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(zmm8, *(rax_92 + r8_4), 0x10), 
                                        *(rdx_33 + rbp_19), 0x20), 
                                    *(rsi_8 + rbx_20), 0x30)
                                zmm2 = data_143442650 & temp0_397
                                zmm3 = *(zx.q(zmm2[0]) + rdi_22)
                                uint64_t rax_94 = zx.q(_mm_extract_epi32(zmm2, 1))
                                uint64_t rdx_34 = zx.q(_mm_extract_epi32(zmm2, 2))
                                uint64_t rsi_9 = zx.q(_mm_extract_epi32(zmm2, 3))
                                float temp0_421[0x4] = __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(zmm3, *(rax_94 + r8_4), 0x10), 
                                        *(rdx_34 + rbp_19), 0x20), 
                                    *(rsi_9 + rbx_20), 0x30)
                                zmm2 = data_143442660 & temp0_397
                                zmm10 = *(zx.q(zmm2[0]) + rdi_22)
                                uint64_t rax_96 = zx.q(_mm_extract_epi32(zmm2, 1))
                                uint64_t rdx_35 = zx.q(_mm_extract_epi32(zmm2, 2))
                                int32_t* rsi_10 = zx.q(_mm_extract_epi32(zmm2, 3))
                                zmm10 = __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(zmm10, *(rax_96 + r8_4), 0x10), 
                                        *(rdx_35 + rbp_19), 0x20), 
                                    *(rsi_10 + rbx_20), 0x30)
                                arg5 = temp0_397 & data_143442670
                                var_268.o = zmm13
                                zmm13 = *(zx.q(arg5[0]) + rdi_22)
                                int32_t* rax_98 = zx.q(_mm_extract_epi32(arg5, 1))
                                int32_t* rdx_36 = zx.q(_mm_extract_epi32(arg5, 2))
                                int32_t* rdi_23 = zx.q(_mm_extract_epi32(arg5, 3))
                                float temp0_433[0x4] = __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(zmm13, *(rax_98 + r8_4), 0x10), 
                                        *(rdx_36 + rbp_19), 0x20), 
                                    *(rdi_23 + rbx_20), 0x30)
                                int32_t temp0_434[0x4] = __paddq_xmmdq_memdq(var_298_2, var_238.o)
                                int32_t temp0_436[0x4] =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(var_258_2, var_208_1), zmm14)
                                float temp0_439[0x4] = _mm_blendv_ps(zx.o(0), 
                                    _mm_add_epi64(temp0_434, zmm0), _mm_shuffle_epi32(arg8, 0x50))
                                zmm2 =
                                    _mm_blendv_ps(zx.o(0), temp0_436, _mm_shuffle_epi32(arg8, 0xfa))
                                int64_t rax_99 = temp0_439[0].q
                                int64_t rdx_37 = _mm_extract_epi64(temp0_439, 1)
                                int64_t rbp_20 = zmm2[0].q
                                int64_t rbx_21 = _mm_extract_epi64(zmm2, 1)
                                zmm0 = __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(
                                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_99)), 
                                            *(arg4 + rdx_37), 1), 
                                        *(arg4 + rbp_20), 2), 
                                    *(arg4 + rbx_21), 3)
                                zmm2 = zmm0
                                arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                                zmm0 &= data_143442680
                                zmm2 = _mm_srli_epi32(zmm2, 0x15)
                                __addps_xmmps_memps(
                                    _mm_mul_ps(
                                        __divps_xmmps_memps(
                                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, 
                                                data_143442490)), 
                                            data_1434426a0), 
                                        temp0_421), 
                                    temp0_403)
                                zmm0 = data_143442440
                                float temp0_453[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                                arg5 = data_143442690
                                _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_453, arg5), zmm10), 
                                    temp0_409)
                                _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm0)), 
                                            arg5), 
                                        temp0_433), 
                                    temp0_415)
                                jump(sub_14013d1cb+0x530)
                    
                    if ((temp0_342 & 4) != 0)
                        _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                    
                    if ((temp0_342 & 8) == 0)
                        jump(0x14013d257)
                    
                    jump(0x14013d251)
                
                float temp0_462[0x4] = _mm_unpacklo_ps(arg7, 0)
                zmm2 = _mm_unpackhi_ps(arg7, zx.o(0))
                zmm0 = _mm_unpacklo_ps(arg6, zmm12[0].q)
                float temp0_465[0x4] = _mm_unpackhi_ps(arg6, zmm12)
                float var_168[0x4] = _mm_insert_ps(zmm0, arg7, 0x28)
                double var_158_1[0x2] = _mm_unpackhi_pd(zmm0, temp0_462[0].q)
                double var_148_1[0x2] = _mm_insert_ps(temp0_465, arg7, 0xa8)
                float var_138_1[0x4] = _mm_unpackhi_pd(temp0_465, zmm2[0].q)
                uint64_t i = zx.q(_mm_movemask_ps(temp0_163))
                
                do
                    uint64_t rcx_35
                    uint64_t rflags_1
                    
                    if (i == 0)
                        rcx_35 = 0x40
                    else
                        rcx_35, rflags_1 = _bit_scan_forward(i)
                    float var_178[0x4] = zmm4
                    result = sx.q(var_178[zx.q(rcx_35.d) & 3]) * 0x30
                    *(arg1 + result + 0x10) = (&var_168)[rcx_35]
                    i &= rol.q(-2, rcx_35.b)
                while (i != 0)
            case 3
                zmm1 = temp0_163 & zmm11
                int64_t rax_58 = sx.q(zmm1[0])
                void* r10_5 = arg4 + rax_58
                int32_t temp0_273 = _mm_extract_epi32(zmm1, 1)
                zmm2 = *(arg4 + rax_58)
                int64_t rax_59 = sx.q(temp0_273)
                void* r8_2 = arg4 + rax_59
                int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm1, 2))
                void* rbp_14 = arg4 + rdx_18
                int64_t rcx_22 = sx.q(_mm_extract_epi32(zmm1, 3))
                int32_t var_1e8_3[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(arg4 + rax_59), 0x10), *(arg4 + rdx_18), 
                        0x20), 
                    *(arg4 + rcx_22), 0x30)
                void* rdx_19 = arg4 + rcx_22
                var_268.o = zmm14
                float temp0_280[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r11_2 + r10_5), *(r12_1 + r8_2), 0x10), 
                    *(r15_1 + rbp_14), 0x20)
                zmm10 = data_142fc95f0 & temp0_163
                uint64_t r15_2 = zx.q(_mm_extract_epi32(zmm10, 1))
                uint64_t r12_2 = zx.q(_mm_extract_epi32(zmm10, 2))
                int32_t* var_278 = zx.q(_mm_extract_epi32(zmm10, 3))
                zmm2 = data_143442650 & temp0_163
                zmm1 = *(zx.q(zmm2[0]) + r10_5)
                uint64_t rcx_24 = zx.q(_mm_extract_epi32(zmm2, 1))
                uint64_t rdi_15 = zx.q(_mm_extract_epi32(zmm2, 2))
                uint64_t rbx_11 = zx.q(_mm_extract_epi32(zmm2, 3))
                float temp0_289[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rcx_24 + r8_2), 0x10), 
                        *(rdi_15 + rbp_14), 0x20), 
                    *(rbx_11 + rdx_19), 0x30)
                arg6 = zmm3
                zmm3 = data_143442660 & temp0_163
                zmm2 = *(zx.q(zmm3[0]) + r10_5)
                uint64_t rcx_26 = zx.q(_mm_extract_epi32(zmm3, 1))
                uint64_t rdi_16 = zx.q(_mm_extract_epi32(zmm3, 2))
                uint64_t rbx_12 = zx.q(_mm_extract_epi32(zmm3, 3))
                zmm2 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(rcx_26 + r8_2), 0x10), 
                        *(rdi_16 + rbp_14), 0x20), 
                    *(rbx_12 + rdx_19), 0x30)
                zmm3 = _mm_add_epi64(arg7, arg6)
                int32_t temp0_298[0x4] =
                    _mm_add_epi64(__paddq_xmmdq_memdq(arg5, var_208_1), temp0_221)
                float temp0_301[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm0), 
                    _mm_shuffle_epi32(temp0_163, 0x50))
                float temp0_303[0x4] =
                    _mm_blendv_ps(zx.o(0), temp0_298, _mm_shuffle_epi32(temp0_163, 0xfa))
                zmm0 = data_143442670 & temp0_163
                int32_t* rdi_17 = zx.q(_mm_extract_epi32(zmm0, 1))
                int32_t* rbx_13 = zx.q(_mm_extract_epi32(zmm0, 2))
                uint64_t r11_4 = zx.q(_mm_extract_epi32(zmm0, 3))
                int64_t rcx_27 = temp0_301[0].q
                int64_t rax_61 = _mm_extract_epi64(temp0_301, 1)
                int64_t rcx_28 = temp0_303[0].q
                int32_t temp0_307[0x4] =
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_27)), *(arg4 + rax_61), 1)
                int64_t rax_62 = _mm_extract_epi64(temp0_303, 1)
                int32_t temp0_309[0x4] = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(temp0_307, *(arg4 + rcx_28), 2), *(arg4 + rax_62), 3)
                arg7 = _mm_srli_epi32(temp0_309, 0xa) & data_143442480
                int32_t temp0_311[0x4] =
                    __paddd_xmmdq_memdq(temp0_309 & data_143442680, data_143442490)
                uint64_t rax_63 = zx.q(zmm10[0])
                float temp0_313[0x4] =
                    __divps_xmmps_memps(_mm_cvtepi32_ps(temp0_311), data_1434426a0)
                uint64_t rcx_29 = zx.q(zmm0[0].d)
                arg6 = __addps_xmmps_memps(_mm_mul_ps(temp0_313, temp0_289), var_1e8_3)
                zmm0 = data_143442440
                float temp0_317[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg7, zmm0))
                zmm1 = data_143442690
                zmm12 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_317, zmm1), zmm2), 
                    __insertps_xmmps_memd_immb(temp0_280, *(r14_2 + rdx_19), 0x30))
                zmm14 = var_268.o
                zmm2 = __insertps_xmmps_memd_immb(*(rax_63 + r10_5), *(r15_2 + r8_2), 0x10)
                zmm3 = _mm_add_epi32(_mm_srli_epi32(temp0_309, 0x15), zmm0)
                zmm2 = __insertps_xmmps_memd_immb(zmm2, *(r12_2 + rbp_14), 0x20)
                arg7 = _mm_add_ps(
                    _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(zmm3), zmm1), 
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(rcx_29 + r10_5), *(rdi_17 + r8_2), 
                                    0x10), 
                                *(rbx_13 + rbp_14), 0x20), 
                            *(r11_4 + rdx_19), 0x30)), 
                    __insertps_xmmps_memd_immb(zmm2, *(var_278 + rdx_19), 0x30))
                rax_56 = r11.d
                goto label_14013d047
            case 4, 5
                goto label_14013cf68
            case 6
                char temp0_337 = _mm_movemask_ps(temp0_163)
                arg7 = zx.o(0)
                rax_56 = r11.d
                
                if ((temp0_337 & 4) != 0)
                    arg7 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                
                if ((temp0_337 & 8) != 0)
                    arg7 = _mm_blend_epi16(arg7, zx.o(0), 0xc0)
                
                goto label_14013cfc2
    
    return result

double var_198[0x2] = _mm_shuffle_ps(zmm11, zmm11, 0)
int32_t rcx_5
rcx_5.b = r11.d == 3
double var_188[0x2] = _mm_shuffle_epi32(zx.o(neg.d(rcx_5)), 0)
double var_1e8_1[0x2] = _mm_shuffle_epi32(zx.o(rax_1), 0)
int32_t rdx = 0
arg6 = _mm_cmpeq_epi32(arg6, arg6)
int32_t rbp_1 = 0
int32_t* var_1b8 = arg2
int32_t var_208[0x4]
uint64_t rdx_2
char temp0_135

while (true)
    int64_t rcx_7 = sx.q(rdx)
    zmm3 = *(arg2 + rcx_7)
    zmm1 = *(arg2 + rcx_7 + 0x10)
    float var_278_1[0x4] = zmm1
    zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm3, zmm1, 0xdd), 4)
    int64_t rdx_1 = sx.q(zmm0[0].d)
    int64_t r10_1 = sx.q(*(arg3 + rdx_1))
    int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 1))
    int64_t rsi_1 = sx.q(*(arg3 + rbp_2))
    int64_t rax_2 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rbx_3 = sx.q(*(arg3 + rax_2))
    int64_t rcx_9 = sx.q(_mm_extract_epi32(zmm0, 3))
    int64_t rdi_2 = sx.q(*(arg3 + rcx_9))
    zmm12 = _mm_insert_epi32(
        _mm_insert_epi32(_mm_insert_epi32(zx.o(r10_1.d), rsi_1.d, 1), rbx_3.d, 2), rdi_2.d, 3)
    zmm1 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rdx_1 + 4)), *(arg3 + rbp_2 + 4), 1), 
            *(arg3 + rax_2 + 4), 2), 
        *(arg3 + rcx_9 + 4), 3)
    zmm9 = _mm_shuffle_epi32(zmm12, 0x4e)
    zmm0 = _mm_cmpgt_epi32(data_1434422d0, zmm1)
    rdx_2 = zx.q(_mm_movemask_ps(zmm0))
    zmm2 = var_208
    float var_298_1[0x4] = zmm3
    
    if (rdx_2.b == 0)
        zmm0 = zx.o(0) ^ arg6
        
        if (0f < zmm11[0])
        label_14013b574:
            bool cond:5_1 = zmm11[0] >= 1f
            int32_t temp0_22[0x4] = _mm_add_epi32(zmm1, arg6)
            
            if (cond:5_1)
                zmm2 = _mm_blendv_ps(zmm2, temp0_22, zmm0)
                arg7 = _mm_blendv_ps(arg7, temp0_22, zmm0)
                zmm4 = zx.o(0)
            else
                float temp0_24[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(temp0_22), var_198)
                float temp0_25[0x4] = _mm_round_ps(temp0_24, 9)
                zmm2 =
                    _mm_blendv_ps(zmm2, _mm_min_epi32(_mm_cvttps_epi32(temp0_25), temp0_22), zmm0)
                zmm4 = zx.o(0)
                
                if (r15.b != 1)
                    zmm4 = _mm_sub_ps(temp0_24, temp0_25)
                
                arg6 = _mm_min_epi32(_mm_sub_epi32(zmm2, _mm_cmpeq_epi32(temp0_25, temp0_25)), 
                    temp0_22)
                arg7 = _mm_blendv_ps(arg7, arg6, zmm0)
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
            
            zmm8 = zmm2
            arg8 = _mm_blendv_ps(arg8, zmm4, zmm0)
        else
        label_14013b5f1:
            zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
            arg7 = _mm_blendv_ps(arg7, zx.o(0), zmm0)
            zmm8 = zmm2
            arg8 = _mm_blendv_ps(arg8, zx.o(0), zmm0)
    else
        zmm8 = _mm_andnot_ps(zmm0, zmm2)
        zmm4 = _mm_andnot_ps(zmm0, arg7)
        arg5 = _mm_andnot_ps(zmm0, arg8)
        
        if (rdx_2.b != 0xf)
            zmm2 = zmm8
            arg7 = zmm4
            arg8 = arg5
            zmm0 ^= arg6
            
            if (0f >= zmm11[0])
                goto label_14013b5f1
            
            goto label_14013b574
        
        zmm2 = zmm8
        arg7 = zmm4
        arg8 = arg5
    
    zmm10 = _mm_cvtepi32_epi64(zmm12[0].q)
    arg5 = _mm_cvtepi32_epi64(zmm9[0].q)
    zmm4 = zx.o(0)
    zmm0 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & var_188
    float temp0_43[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm0)
    zmm9 = _mm_cvtepi32_epi64(temp0_43[0].q)
    zmm11 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_43, 0x4e)[0])
    zmm1 = __pmulld_xmmdq_memdq(zmm8, var_1e8_1)
    zmm0 = _mm_cvtepi32_epi64(zmm1[0].q)
    zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
    var_208 = zmm2
    float var_258_1[0x4] = arg8
    
    if (r11.d u< 2)
        zmm3 = _mm_add_epi64(zmm9, zmm10)
        zmm4 = _mm_add_epi64(_mm_add_epi64(zmm11, arg5), zmm1)
        zmm3 = _mm_add_epi64(zmm3, zmm0)
        int64_t rax_7 = zmm3[0].q
        int64_t rcx_10 = _mm_extract_epi64(zmm3, 1)
        rdx_2 = zmm4[0].q
        int64_t rbp_3 = _mm_extract_epi64(zmm4, 1)
        zmm14 = *(arg4 + rax_7 + 4)
        zmm13 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(arg4 + rax_7), *(arg4 + rcx_10), 0x10), 
                *(arg4 + rdx_2), 0x20), 
            *(arg4 + rbp_3), 0x30)
        zmm14 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm14, *(arg4 + rcx_10 + 4), 0x10), *(arg4 + rdx_2 + 4), 
                0x20), 
            *(arg4 + rbp_3 + 4), 0x30)
        zmm4 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(arg4 + rax_7 + 8), *(arg4 + rcx_10 + 8), 0x10), 
                *(arg4 + rdx_2 + 8), 0x20), 
            *(arg4 + rbp_3 + 8), 0x30)
    else if (r11.d == 2)
        zmm3 = _mm_add_epi64(zmm9, zmm10)
        zmm4 = _mm_add_epi64(_mm_add_epi64(zmm11, arg5), zmm1)
        zmm3 = _mm_add_epi64(zmm3, zmm0)
        int64_t rbx_4 = _mm_extract_epi64(zmm3, 1)
        int64_t rax_8 = zmm3[0].q
        rdx_2 = zmm4[0].q
        int64_t rcx_11 = _mm_extract_epi64(zmm4, 1)
        zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
            __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_8)), *(arg4 + rbx_4), 1), 
                *(arg4 + rdx_2), 2), 
            *(arg4 + rcx_11), 3)[0])
        zmm1 = data_1434424d0
        float temp0_115[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
        zmm0 = __pinsrw_xmmdq_memw_immb(
            __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_8 + 2)), *(arg4 + rbx_4 + 2), 1), 
                *(arg4 + rdx_2 + 2), 2), 
            *(arg4 + rcx_11 + 2), 3)
        zmm3 = data_1434426d0
        float temp0_119[0x4] = _mm_div_ps(temp0_115, zmm3)
        float temp0_122[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0[0]), zmm1))
        zmm0 = __pinsrw_xmmdq_memw_immb(
            __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_8 + 4)), *(arg4 + rbx_4 + 4), 1), 
                *(arg4 + rdx_2 + 4), 2), 
            *(arg4 + rcx_11 + 4), 3)
        float temp0_126[0x4] = _mm_div_ps(temp0_122, zmm3)
        float temp0_130[0x4] =
            _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0[0]), zmm1)), zmm3)
        zmm0 = data_143442710
        zmm13 = _mm_mul_ps(temp0_119, zmm0)
        zmm14 = _mm_mul_ps(temp0_126, zmm0)
        zmm4 = _mm_mul_ps(temp0_130, zmm0)
    else
        zmm14 = zx.o(0)
        zmm13 = zx.o(0)
        
        if (r11.d == 3)
            zmm3 = _mm_add_epi64(zmm9, zmm10)
            zmm4 = _mm_add_epi64(zmm11, arg5)
            zmm3 = _mm_add_epi64(zmm3, zmm0)
            zmm0 = zx.o(*(arg4 + zmm3[0].q))
            int64_t rax_4 = _mm_extract_epi64(zmm3, 1)
            zmm4 = _mm_add_epi64(zmm4, zmm1)
            zmm0 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(zmm0, *(arg4 + rax_4), 1), 
                    *(arg4 + zmm4[0].q), 2), 
                *(arg4 + _mm_extract_epi64(zmm4, 1)), 3)
            zmm4 = *(arg4 + r10_1 + 4)
            float temp0_60[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_1), *(arg4 + rsi_1), 0x10), 
                    *(arg4 + rbx_3), 0x20), 
                *(arg4 + rdi_2), 0x30)
            float temp0_63[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(arg4 + rsi_1 + 4), 0x10), 
                    *(arg4 + rbx_3 + 4), 0x20), 
                *(arg4 + rdi_2 + 4), 0x30)
            float temp0_66[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 0xc), *(arg4 + rsi_1 + 0xc), 0x10), 
                    *(arg4 + rbx_3 + 0xc), 0x20), 
                *(arg4 + rdi_2 + 0xc), 0x30)
            zmm2 = arg5
            arg5 = zmm0
            arg8 = arg7
            arg7 = zmm0
            float temp0_70[0x4] = _mm_mul_ps(
                __divps_xmmps_memps(
                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, data_143442490)), 
                    data_1434426a0), 
                temp0_66)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 0x10), *(arg4 + rsi_1 + 0x10), 
                        0x10), 
                    *(arg4 + rbx_3 + 0x10), 0x20), 
                *(arg4 + rdi_2 + 0x10), 0x30)
            zmm13 = _mm_add_ps(temp0_70, temp0_60)
            arg7 = _mm_srli_epi32(arg7, 0xa) & data_143442480
            zmm1 = data_143442440
            zmm3 = zmm1
            float temp0_77[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg7, zmm1))
            zmm1 = data_143442690
            float temp0_79[0x4] = _mm_mul_ps(_mm_div_ps(temp0_77, zmm1), zmm0)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 8), *(arg4 + rsi_1 + 8), 0x10), 
                *(arg4 + rbx_3 + 8), 0x20)
            zmm14 = _mm_add_ps(temp0_79, temp0_63)
            float temp0_85[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 0x14), *(arg4 + rsi_1 + 0x14), 
                        0x10), 
                    *(arg4 + rbx_3 + 0x14), 0x20), 
                *(arg4 + rdi_2 + 0x14), 0x30)
            float temp0_88[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(arg5, 0x15), zmm3))
            arg5 = zmm2
            arg7 = arg8
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_88, zmm1), temp0_85), 
                __insertps_xmmps_memd_immb(zmm0, *(arg4 + rdi_2 + 8), 0x30))
    
    arg8 = _mm_cmpeq_epi32(zmm8, arg7) ^ arg6
    temp0_135 = _mm_movemask_ps(arg8)
    
    if (temp0_135 != 0)
        break
    
    arg8 = var_258_1
    zmm10 = var_278_1
    zmm11 = zx.o(arg9)
    zmm2 = _mm_unpacklo_ps(zmm4, 0)
    zmm0 = _mm_unpackhi_ps(zmm4, zx.o(0))
    arg5 = _mm_unpacklo_ps(zmm13, zmm14[0].q)
    float temp0_143[0x4] = _mm_unpackhi_ps(zmm13, zmm14)
    float temp0_144[0x4] = _mm_insert_ps(arg5, zmm4, 0x28)
    float var_128_1[0x4] = temp0_144
    int64_t rax_17 = sx.q(var_298_1[0]) * 0x30
    *(arg1 + rax_17 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 0)
    arg5 = _mm_unpackhi_pd(arg5, zmm2[0].q)
    *(arg1 + rax_17 + 0x14) = __extractps_memd_xmmps_immb(zmm14, 0)
    *(arg1 + rax_17 + 0x18) = __extractps_memd_xmmps_immb(zmm4, 0)
    *(arg1 + rax_17 + 0x1c) = 0
    int64_t rax_21 = sx.q(_mm_extract_epi32(var_298_1, 2)) * 0x30
    *(arg1 + rax_21 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 1)
    int32_t var_118_1[0x4] = arg5
    *(arg1 + rax_21 + 0x14) = __extractps_memd_xmmps_immb(zmm14, 1)
    zmm2 = _mm_insert_ps(temp0_143, zmm4, 0xa8)
    *(arg1 + rax_21 + 0x18) = __extractps_memd_xmmps_immb(zmm4, 1)
    *(arg1 + rax_21 + 0x1c) = 0
    int64_t rax_25 = sx.q(zmm10[0]) * 0x30
    *(arg1 + rax_25 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 2)
    int32_t var_108_1[0x4] = zmm2
    *(arg1 + rax_25 + 0x14) = __extractps_memd_xmmps_immb(zmm14, 2)
    zmm1 = _mm_unpackhi_pd(temp0_143, zmm0[0])
    *(arg1 + rax_25 + 0x18) = __extractps_memd_xmmps_immb(zmm4, 2)
    *(arg1 + rax_25 + 0x1c) = 0
    *(arg1 + sx.q(_mm_extract_epi32(zmm10, 2)) * 0x30 + 0x10) = zmm1
    rbp_1 += 4
    rdx += 0x20
    arg6 = _mm_cmpeq_epi32(temp0_144, temp0_144)
    
    if (rbp_1 s>= rcx_4)
        jump(sub_14013c3cc+0x2e1)

float var_1d8[0x4] = arg7

if (r11.d u<= 6)
    zmm1 = _mm_mullo_epi32(var_1e8_1, arg7)
    zmm0 = _mm_cvtepi32_epi64(zmm1[0].q)
    zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
    
    switch (r11.d)
        case 0, 1
            return sub_14013ba4e(zmm0, rdx_2, arg3, arg4, r11, arg2, arg1, temp0_135, r15, zmm3, 
                zmm4, arg5, zmm9, zmm10, zmm11, zmm13, zmm14, arg8, var_208) __tailcall
        case 2
            jump(sub_14013ba4e+0x1ba)
        case 3
            jump(sub_14013ba4e+0x351)

if ((zx.q(temp0_135) & 1) == 0)
    jump(sub_14013c210-0x8e)

jump(sub_14013ba4e+0x194)
