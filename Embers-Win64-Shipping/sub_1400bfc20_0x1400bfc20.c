// 函数: sub_1400bfc20
// 地址: 0x1400bfc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
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
float zmm6[0x4]
float var_d8[0x4] = zmm6
int128_t* result = arg10
float zmm1[0x4] = *result
uint32_t zmm0[0x4] = arg6
int32_t i = ((arg9 s>> 0x1f u>> 0x1e) + arg9) & 0xfffffffc
uint32_t var_2e8[0x4]
float var_2a8[0x4]
float var_298[0x4]
float var_288[0x4]
float var_248[0x4]
float var_238[0x4]
float var_1f8[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]
uint32_t zmm13[0x4]

if (_mm_movemask_ps(zmm1) != 0xf)
    float var_198_1[0x4] = zmm1
    float var_268_1[0x4]
    uint64_t rbx_1
    
    if (i s<= 0)
        rbx_1 = 0
        zmm14 = zx.o(0)
        zmm13 = zx.o(0)
        zmm11 = zx.o(0)
        var_268_1 = zx.o(0)
        
        if (0 s< arg9)
        label_1400c1017:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx_1.d), 0), data_142e11d00)
            zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm0)
            int64_t rsi_13 = sx.q(rbx_1.d << 2)
            uint32_t temp0_420 = _mm_movemask_ps(zmm9)
            uint32_t var_2b8_2[0x4] = zmm13
            float var_2d8_2[0x4] = zmm14
            
            if ((zx.q(temp0_420) & 0xfffffff9) != 9)
                if ((temp0_420.b & 1) != 0)
                    var_248[0] = *(arg5 + rsi_13)
                
                if ((temp0_420.b & 2) == 0)
                    if ((temp0_420.b & 4) != 0)
                        goto label_1400c1b57
                    
                    goto label_1400c113b
                
                var_248[1] = *(arg5 + rsi_13 + 4)
                
                if ((temp0_420.b & 4) == 0)
                label_1400c113b:
                    
                    if ((temp0_420.b & 8) != 0)
                        var_248[3] = *(arg5 + rsi_13 + 0xc)
                else
                label_1400c1b57:
                    var_248[2] = *(arg5 + rsi_13 + 8)
                    
                    if ((temp0_420.b & 8) != 0)
                        var_248[3] = *(arg5 + rsi_13 + 0xc)
                
                zmm1 = var_248
            else
                zmm1 = *(arg5 + rsi_13)
            
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm9
            int64_t rsi_15 = sx.q(zmm2[0])
            int64_t rax_42 = arg4 + (rsi_15 << 2)
            zmm1 = *(arg4 + (rsi_15 << 2))
            int64_t rdi_7 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            int64_t rsi_17 = arg4 + (rdi_7 << 2)
            float temp0_429[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rdi_7 << 2)))[0].q)
            int64_t rbx_4 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            int64_t rdi_9 = arg4 + (rbx_4 << 2)
            zmm3 = *(arg4 + (rbx_4 << 2))
            int64_t rbp_17 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            int64_t rbx_6 = arg4 + (rbp_17 << 2)
            float temp0_432[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + (rbp_17 << 2)))[0].q)
            zmm1 = temp0_429[0].q | temp0_432[0].q << 0x40
            zmm3 = data_142fc95e0 & zmm9
            float temp0_434[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_42), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_17))[0].q)
            float temp0_437[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_9), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_6))[0].q)
            zmm8 = temp0_434[0].q | temp0_437[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm9
            float temp0_439[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_42), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_17))[0].q)
            float temp0_442[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_9), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_6))[0].q)
            zmm5 = temp0_439[0].q | temp0_442[0].q << 0x40
            float var_f8_1[0x4] = zx.o(0)
            zmm6 = (*arg3)[3]
            float temp0_443[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float var_248_3[0x4] = temp0_443
            var_238 = temp0_443
            float var_228_5[0x4] = temp0_443
            float var_218_3[0x4] = temp0_443
            zmm7 = *arg3
            zmm2 = (*arg3)[1]
            zmm0 = (*arg3)[2]
            float temp0_444[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_445[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_446[0x4] = _mm_mul_ps(zmm8, temp0_445)
            float temp0_447[0x4] = _mm_mul_ps(temp0_445, zmm5)
            float temp0_448[0x4] = _mm_mul_ps(zmm5, temp0_444)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_450[0x4] = _mm_mul_ps(temp0_444, zmm1)
            float temp0_451[0x4] = _mm_mul_ps(zmm1, zmm0)
            float temp0_452[0x4] = _mm_mul_ps(zx.o(0), temp0_443)
            float temp0_454[0x4] = _mm_sub_ps(temp0_448, _mm_mul_ps(zmm0, zmm8))
            float temp0_455[0x4] = _mm_sub_ps(temp0_451, temp0_447)
            float temp0_456[0x4] = _mm_sub_ps(temp0_446, temp0_450)
            float temp0_457[0x4] = _mm_sub_ps(temp0_452, temp0_452)
            float temp0_458[0x4] = _mm_add_ps(temp0_454, temp0_454)
            float temp0_459[0x4] = _mm_add_ps(temp0_455, temp0_455)
            float temp0_460[0x4] = _mm_add_ps(temp0_456, temp0_456)
            float temp0_461[0x4] = _mm_add_ps(temp0_457, temp0_457)
            var_1f8 = temp0_458
            float var_1e8_5[0x4] = temp0_459
            float var_1d8_5[0x4] = temp0_460
            float var_1c8_3[0x4] = temp0_461
            float temp0_462[0x4] = _mm_mul_ps(temp0_461, temp0_443)
            float temp0_463[0x4] = _mm_mul_ps(temp0_443, temp0_458)
            float temp0_464[0x4] = _mm_mul_ps(temp0_443, temp0_459)
            float temp0_465[0x4] = _mm_mul_ps(temp0_443, temp0_460)
            float temp0_466[0x4] = __addps_xmmps_memps(temp0_463, zmm1)
            float temp0_467[0x4] = __addps_xmmps_memps(temp0_464, zmm8)
            float temp0_468[0x4] = __addps_xmmps_memps(temp0_465, zmm5)
            float temp0_469[0x4] = __addps_xmmps_memps(temp0_462, var_f8_1)
            var_2a8 = temp0_466
            float var_278_1[0x4] = temp0_469
            zmm0 = *arg3
            zmm2 = (*arg3)[1]
            zmm7 = (*arg3)[2]
            float temp0_470[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_472[0x4] = _mm_mul_ps(temp0_459, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_460)
            float temp0_474[0x4] = _mm_mul_ps(temp0_460, temp0_470)
            float temp0_475[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_476[0x4] = _mm_mul_ps(temp0_470, temp0_458)
            float temp0_477[0x4] = _mm_mul_ps(temp0_458, temp0_475)
            float temp0_479[0x4] = _mm_sub_ps(temp0_474, _mm_mul_ps(temp0_475, temp0_459))
            float temp0_480[0x4] = _mm_sub_ps(temp0_477, zmm0)
            float temp0_481[0x4] = _mm_sub_ps(temp0_472, temp0_476)
            float temp0_482[0x4] = _mm_add_ps(temp0_479, temp0_466)
            float temp0_483[0x4] = _mm_add_ps(temp0_480, temp0_467)
            float temp0_484[0x4] = _mm_add_ps(temp0_481, temp0_468)
            zmm10 = arg3[1][0]
            zmm13 = (*arg3)[5]
            float temp0_486[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_482)
            zmm13 = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_483)
            zmm2 = (*arg3)[6]
            float temp0_490[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_484)
            zmm3 = *arg2
            zmm8 = *(arg2 + 4)
            float temp0_491[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1 = _mm_sub_ps(temp0_486, temp0_491)
            float temp0_493[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm0 = _mm_sub_ps(zmm13, temp0_493)
            zmm12 = *(arg2 + 8)
            float temp0_495[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_496[0x4] = _mm_sub_ps(temp0_490, temp0_495)
            float var_248_4[0x4] = zmm1
            float var_208_3[0x4] = zmm0
            var_238 = zmm0
            float var_228_6[0x4] = temp0_496
            zmm4 = *arg1
            zmm14 = (*arg1)[1]
            float temp0_497[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_498[0x4] = _mm_sub_ps(temp0_497, temp0_486)
            float temp0_499[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            float temp0_500[0x4] = _mm_sub_ps(temp0_499, zmm13)
            zmm15 = (*arg1)[2]
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_486, temp0_491, 6), zmm9)
            char temp0_505 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9))
            zmm0 = _mm_sub_ps(zmm15, temp0_490)
            var_1f8 = temp0_498
            zmm2 = temp0_500
            float var_1e8_6[0x4] = temp0_500
            zmm5 = zmm0
            uint32_t var_1d8_6[0x4] = zmm0
            float var_258_3[0x4] = zmm13
            zmm10 = _mm_cmpeq_ps(temp0_486, temp0_491, 2)
            
            if (temp0_505 != 0xf)
                zmm13 = _mm_cmpeq_ps(zmm13, temp0_493, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm9), zmm13)
                zmm6 = _mm_andnot_ps(zmm10, zmm9)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9)) != 0xf)
                zmm0 = _mm_cmpeq_ps(temp0_490, temp0_495, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm9), zmm0)
                zmm6 = zmm10 ^ zmm9
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9)) == 0xf)
                zmm12 = temp0_490
                zmm8 = zmm2
                zmm6 = zmm5
            else
                zmm10 = _mm_and_ps(zmm10, zmm9)
                zmm0 = temp0_486
                zmm3 = _mm_cmpeq_ps(temp0_497, zmm0, 2)
                zmm4 = _mm_and_ps(_mm_cmpeq_ps(temp0_497, zmm0, 6), zmm10)
                zmm12 = temp0_490
                zmm8 = zmm2
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm10)) != 0xf)
                    float temp0_525[0x4] = __cmpps_xmmps_memps_immb(temp0_499, var_258_3, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm10), temp0_525)
                    zmm4 = zmm3 ^ zmm10
                
                zmm6 = zmm5
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm10)) != 0xf)
                    zmm15 = _mm_cmpeq_ps(zmm15, zmm12, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm10), zmm15)
                
                zmm10 = _mm_and_ps(zmm10, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm9)) == 0)
                zmm7 = var_198_1
                zmm13 = var_2b8_2
                zmm11 = zmm11
            else
                float temp0_644[0x4] = _mm_max_ps(temp0_498, zmm1)
                float temp0_645[0x4] = __maxps_xmmps_memps(zmm8, var_208_3)
                float temp0_646[0x4] = __maxps_xmmps_memps(zmm6, temp0_496)
                float temp0_647[0x4] = _mm_cmpeq_ps(temp0_645, temp0_644, 1)
                zmm5 = _mm_and_ps(zmm10, temp0_647)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm9)) != 0)
                    float temp0_651[0x4] = _mm_cmpeq_ps(temp0_646, temp0_644, 5)
                    zmm15 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_646, temp0_644, 1), zmm5), 
                        temp0_644)
                    zmm4 = _mm_and_ps(temp0_651, zmm5)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                        zmm15 = _mm_or_ps(zmm15, _mm_and_ps(zmm4, temp0_646))
                
                zmm7 = var_198_1
                zmm13 = var_2b8_2
                zmm11 = zmm11
                zmm3 = _mm_andnot_ps(temp0_647, zmm10)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm9)) != 0)
                    float temp0_681[0x4] = _mm_cmpeq_ps(temp0_646, temp0_645, 1)
                    zmm4 = _mm_and_ps(zmm3, temp0_681)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                        uint32_t temp0_685[0x4] = _mm_andnot_ps(zmm4, zmm15)
                        zmm15 = _mm_or_ps(_mm_and_ps(temp0_645, zmm4), temp0_685)
                    
                    zmm2 = _mm_andnot_ps(temp0_681, zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm9)) != 0)
                        uint32_t temp0_691[0x4] = _mm_andnot_ps(zmm2, zmm15)
                        zmm15 = _mm_or_ps(_mm_and_ps(temp0_646, zmm2), temp0_691)
            
            zmm14 = var_2d8_2
            
            if (_mm_movemask_ps(_mm_andnot_ps(zmm10, zmm9)) != 0)
                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2) ^ zmm10
                int64_t rax_77 = 0
                zmm8 = data_142d3f780
                
                while (true)
                    float temp0_697[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                    zmm4 = _mm_and_ps(temp0_697, zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                        char temp0_701 = _mm_movemask_ps(zmm4)
                        
                        if ((temp0_701 & 1) == 0)
                            if ((temp0_701 & 2) != 0)
                                goto label_1400c1d84
                            
                            goto label_1400c1c9c
                        
                        *(&var_2a8 + rax_77) = zmm1[0]
                        
                        if ((temp0_701 & 2) != 0)
                        label_1400c1d84:
                            *(&var_2a8[1] + rax_77) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            
                            if ((temp0_701 & 4) == 0)
                                goto label_1400c1ca5
                            
                            goto label_1400c1d98
                        
                    label_1400c1c9c:
                        
                        if ((temp0_701 & 4) != 0)
                        label_1400c1d98:
                            *(&var_2a8[2] + rax_77) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            if ((temp0_701 & 8) != 0)
                                *(&var_2a8[3] + rax_77) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        else
                        label_1400c1ca5:
                            
                            if ((temp0_701 & 8) != 0)
                                *(&var_2a8[3] + rax_77) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    
                    zmm3 = _mm_andnot_ps(temp0_697, zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm9)) != 0)
                        zmm4 = *(&var_1f8 + rax_77)
                        float temp0_706[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                        zmm5 = _mm_and_ps(zmm3, temp0_706)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm9)) != 0)
                            zmm4 ^= zmm8
                            char temp0_710 = _mm_movemask_ps(zmm5)
                            
                            if ((temp0_710 & 1) == 0)
                                if ((temp0_710 & 2) != 0)
                                    goto label_1400c1dc0
                                
                                goto label_1400c1d06
                            
                            *(&var_2a8 + rax_77) = zmm4[0]
                            
                            if ((temp0_710 & 2) != 0)
                            label_1400c1dc0:
                                *(&var_2a8[1] + rax_77) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                                
                                if ((temp0_710 & 4) == 0)
                                    goto label_1400c1d0f
                                
                                goto label_1400c1dd4
                            
                        label_1400c1d06:
                            
                            if ((temp0_710 & 4) != 0)
                            label_1400c1dd4:
                                *(&var_2a8[2] + rax_77) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                                
                                if ((temp0_710 & 8) != 0)
                                    *(&var_2a8[3] + rax_77) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                            else
                            label_1400c1d0f:
                                
                                if ((temp0_710 & 8) != 0)
                                    *(&var_2a8[3] + rax_77) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        
                        zmm1 = _mm_andnot_ps(temp0_706, zmm3)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm9)) != 0)
                            char temp0_715 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_715 & 1) == 0)
                                if ((temp0_715 & 2) != 0)
                                    goto label_1400c1df9
                                
                                goto label_1400c1d45
                            
                            *(&var_2a8 + rax_77) = 0
                            
                            if ((temp0_715 & 2) != 0)
                            label_1400c1df9:
                                *(&var_2a8[1] + rax_77) = 0
                                
                                if ((temp0_715 & 4) == 0)
                                    goto label_1400c1d4e
                                
                                goto label_1400c1e0a
                            
                        label_1400c1d45:
                            
                            if ((temp0_715 & 4) != 0)
                            label_1400c1e0a:
                                *(&var_2a8[2] + rax_77) = 0
                                
                                if ((temp0_715 & 8) != 0)
                                    *(&var_2a8[3] + rax_77) = 0
                            else
                            label_1400c1d4e:
                                
                                if ((temp0_715 & 8) != 0)
                                    *(&var_2a8[3] + rax_77) = 0
                    
                    if (rax_77 == 0x20)
                        break
                    
                    zmm1 = *(&var_238 + rax_77)
                    rax_77 += 0x10
                
                zmm0 = var_2a8
                float temp0_721[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                float temp0_723[0x4] = _mm_add_ps(_mm_mul_ps(temp0_467, temp0_467), temp0_721)
                float temp0_725[0x4] = _mm_add_ps(_mm_mul_ps(temp0_468, temp0_468), temp0_723)
                zmm0 = _mm_rsqrt_ps(temp0_725)
                float temp0_728[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_725, zmm0), zmm0)
                float temp0_731[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_728), zmm0), data_142d3f640)
                zmm0 = _mm_rcp_ps(temp0_731)
                float temp0_733[0x4] = _mm_mul_ps(temp0_731, zmm0)
                float temp0_735[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_733), zmm0)
                zmm15 = _mm_or_ps(_mm_and_ps(zmm15, zmm10), _mm_and_ps(temp0_735, zmm2))
            
            zmm0 = arg6
            float temp0_740[0x4] = _mm_sub_ps(zmm15, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_740, data_142fc95d0, 1), zmm9)
            result = zx.q(_mm_movemask_ps(zmm1))
            zmm5 = var_268_1
            
            if (result.b != 0)
                float temp0_744[0x4] = _mm_mul_ps(temp0_486, temp0_740)
                result = zx.q(result.b)
                zmm3 = zmm11
                char temp2_1 = result.b & 1
                
                if (temp2_1 == 0)
                    zmm6 = _mm_mul_ps(var_258_3, temp0_740)
                    zmm2 = zmm13
                    
                    if (temp2_1 != 0)
                        goto label_1400c201a
                    
                    goto label_1400c1ee4
                
                zmm3 = zmm11
                zmm3[0] = zmm3[0] + temp0_744[0]
                zmm6 = _mm_mul_ps(var_258_3, temp0_740)
                zmm2 = zmm13
                
                if (temp2_1 != 0)
                label_1400c201a:
                    zmm2 = zmm13
                    zmm2[0] = zmm2[0] + zmm6[0]
                    zmm12 = _mm_mul_ps(zmm12, temp0_740)
                    zmm0 = zmm14
                    
                    if (temp2_1 == 0)
                        goto label_1400c1ef2
                    
                    goto label_1400c2030
                
            label_1400c1ee4:
                zmm12 = _mm_mul_ps(zmm12, temp0_740)
                zmm0 = zmm14
                bool cond:41_1
                bool cond:42_1
                bool cond:49_1
                bool cond:50_1
                
                if (temp2_1 == 0)
                label_1400c1ef2:
                    zmm11 = _mm_add_ps(zmm11, temp0_744)
                    char temp9_1 = result.b & 2
                    cond:41_1 = temp9_1 != 0
                    cond:42_1 = temp9_1 == 0
                    cond:49_1 = temp9_1 == 0
                    cond:50_1 = temp9_1 != 0
                    
                    if (temp9_1 != 0)
                        goto label_1400c2051
                    
                    goto label_1400c1efe
                
            label_1400c2030:
                zmm0 = zmm14
                zmm0[0] = zmm0[0] f+ zmm12[0]
                zmm11 = _mm_add_ps(zmm11, temp0_744)
                char temp8_1 = result.b & 2
                cond:41_1 = temp8_1 != 0
                cond:42_1 = temp8_1 == 0
                cond:49_1 = temp8_1 == 0
                cond:50_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                label_1400c2051:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm3, 1), zmm3, 0xe2)
                    zmm13 = _mm_add_ps(zmm13, zmm6)
                    
                    if (cond:42_1)
                        goto label_1400c1f08
                    
                    goto label_1400c206a
                
            label_1400c1efe:
                zmm13 = _mm_add_ps(zmm13, zmm6)
                
                if (not(cond:41_1))
                label_1400c1f08:
                    zmm14 = _mm_add_ps(zmm14, zmm12)
                    
                    if (cond:50_1)
                        goto label_1400c2083
                    
                    goto label_1400c1f12
                
            label_1400c206a:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm2, 1), zmm2, 0xe2)
                zmm14 = _mm_add_ps(zmm14, zmm12)
                bool cond:58_1
                bool cond:59_1
                bool cond:66_1
                bool cond:67_1
                
                if (not(cond:49_1))
                label_1400c2083:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm0, 1), zmm0, 0xe2)
                    char temp17_1 = result.b & 4
                    cond:58_1 = temp17_1 == 0
                    cond:59_1 = temp17_1 != 0
                    cond:66_1 = temp17_1 != 0
                    cond:67_1 = temp17_1 == 0
                    
                    if (temp17_1 == 0)
                        goto label_1400c1f1a
                    
                    goto label_1400c2096
                
            label_1400c1f12:
                char temp16_1 = result.b & 4
                cond:58_1 = temp16_1 == 0
                cond:59_1 = temp16_1 != 0
                cond:66_1 = temp16_1 != 0
                cond:67_1 = temp16_1 == 0
                
                if (temp16_1 != 0)
                label_1400c2096:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm11, zmm3, 0x32), 0x84)
                    
                    if (not(cond:58_1))
                    label_1400c20a8:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm13, zmm2, 0x32), 0x84)
                        
                        if (cond:67_1)
                            goto label_1400c1f26
                        
                        goto label_1400c20ba
                else
                label_1400c1f1a:
                    
                    if (cond:59_1)
                        goto label_1400c20a8
                
                bool cond:70_1
                bool cond:71_1
                bool cond:74_1
                bool cond:75_1
                
                if (not(cond:66_1))
                label_1400c1f26:
                    char temp25_1 = result.b & 8
                    cond:70_1 = temp25_1 != 0
                    cond:71_1 = temp25_1 == 0
                    cond:74_1 = temp25_1 != 0
                    cond:75_1 = temp25_1 == 0
                    
                    if (temp25_1 != 0)
                        goto label_1400c20d0
                    
                    goto label_1400c1f2e
                
            label_1400c20ba:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm14, zmm0, 0x32), 0x84)
                char temp24_1 = result.b & 8
                cond:70_1 = temp24_1 != 0
                cond:71_1 = temp24_1 == 0
                cond:74_1 = temp24_1 != 0
                cond:75_1 = temp24_1 == 0
                
                if (temp24_1 != 0)
                label_1400c20d0:
                    zmm11 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm11, zmm3, 0x23), 0x24)
                    
                    if (cond:71_1)
                        goto label_1400c1f38
                    
                    goto label_1400c20e4
                
            label_1400c1f2e:
                zmm11 = zmm3
                
                if (cond:70_1)
                label_1400c20e4:
                    zmm13 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm13, zmm2, 0x23), 0x24)
                    
                    if (cond:74_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm14, zmm0, 0x23), 0x24)
                else
                label_1400c1f38:
                    zmm13 = zmm2
                    
                    if (not(cond:75_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm14, zmm0, 0x23), 0x24)
                
                zmm15 = _mm_and_ps(_mm_add_ps(temp0_740, zmm5), zmm1)
                zmm14 = zmm0
                zmm5 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm5), zmm15)
        else
            zmm7 = var_198_1
            zmm5 = var_268_1
    else
        zmm1 = (*arg3)[3]
        float temp0_207[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float var_1b8_2[0x4] = *arg3
        float var_258_2[0x4] = (*arg3)[1]
        float var_208_2[0x4] = (*arg3)[2]
        zmm12 = *arg2
        zmm1 = *(arg2 + 4)
        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0)
        float temp0_209[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *(arg2 + 8)
        float temp0_210[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg1
        zmm2 = (*arg1)[1]
        float temp0_211[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_212[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg1)[2]
        float temp0_213[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float var_178_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        rbx_1 = 0
        var_268_1 = zx.o(0)
        float var_1a8_2[0x4] = zmm12
        
        do
            float var_2d8_1[0x4]
            __builtin_memset(&var_2d8_1, 0, 0x30)
            zmm0 = *(arg5 + sx.q((rbx_1 << 2).d))
            zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
            int64_t rax_20 = sx.q(zmm1[0])
            int64_t rsi_9 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
            int64_t rdi_4 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
            int64_t rbp_10 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
            zmm1 = *(arg4 + (rbp_10 << 2) + 4)
            float temp0_243[0x4] =
                _mm_unpacklo_ps(*(arg4 + (rdi_4 << 2)), (*(arg4 + (rbp_10 << 2)))[0].q)
            zmm0 = _mm_unpacklo_ps(*(arg4 + (rdi_4 << 2) + 4), zmm1[0].q)
            zmm6 = *(arg4 + (rax_20 << 2) + 4)
            zmm1 = _mm_unpacklo_ps(*(arg4 + (rax_20 << 2)), (*(arg4 + (rsi_9 << 2)))[0].q)[0].q
                | temp0_243[0].q << 0x40
            zmm6 = _mm_unpacklo_ps(zmm6, (*(arg4 + (rsi_9 << 2) + 4))[0].q)[0].q | zmm0[0].q << 0x40
            float temp0_247[0x4] =
                _mm_unpacklo_ps(*(arg4 + (rax_20 << 2) + 8), (*(arg4 + (rsi_9 << 2) + 8))[0].q)
            zmm0 = _mm_unpacklo_ps(*(arg4 + (rdi_4 << 2) + 8), (*(arg4 + (rbp_10 << 2) + 8))[0].q)
            zmm2 = temp0_247[0].q | zmm0[0].q << 0x40
            var_1f8 = zmm1
            int128_t var_1c8_2 = zx.o(0)
            float var_248_2[0x4] = temp0_207
            var_238 = temp0_207
            float var_228_3[0x4] = temp0_207
            float temp0_249[0x4] = _mm_shuffle_ps(var_258_2, var_258_2, 0)
            zmm0 = _mm_mul_ps(zmm2, temp0_249)
            float temp0_251[0x4] = _mm_shuffle_ps(var_208_2, var_208_2, 0)
            float temp0_252[0x4] = _mm_mul_ps(zmm1, temp0_251)
            float temp0_253[0x4] = _mm_shuffle_ps(var_1b8_2, var_1b8_2, 0)
            float temp0_254[0x4] = _mm_mul_ps(zmm6, temp0_253)
            zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(zmm6, temp0_251))
            float temp0_258[0x4] = _mm_sub_ps(temp0_252, _mm_mul_ps(zmm2, temp0_253))
            float temp0_260[0x4] = _mm_sub_ps(temp0_254, _mm_mul_ps(zmm1, temp0_249))
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_262[0x4] = _mm_add_ps(temp0_258, temp0_258)
            float temp0_263[0x4] = _mm_add_ps(temp0_260, temp0_260)
            float temp0_264[0x4] = _mm_mul_ps(temp0_207, temp0_262)
            float temp0_265[0x4] = _mm_mul_ps(zmm0, temp0_251)
            float temp0_266[0x4] = _mm_mul_ps(temp0_262, temp0_251)
            float temp0_271[0x4] = _mm_add_ps(
                _mm_sub_ps(_mm_mul_ps(temp0_263, temp0_249), temp0_266), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_207, zmm0), var_1f8))
            float temp0_272[0x4] = _mm_mul_ps(temp0_207, temp0_263)
            float temp0_273[0x4] = __addps_xmmps_memps(temp0_264, zmm6)
            zmm3 = __addps_xmmps_memps(temp0_272, zmm2)
            float var_218_2[0x4] = temp0_207
            float temp0_275[0x4] = _mm_mul_ps(temp0_262, temp0_253)
            float temp0_278[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_265, _mm_mul_ps(temp0_263, temp0_253)), temp0_273)
            float temp0_281[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_275, _mm_mul_ps(zmm0, temp0_249)), zmm3)
            zmm15 = arg3[1][0]
            zmm8 = (*arg3)[5]
            float temp0_283[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_271)
            float temp0_285[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_278)
            zmm10 = (*arg3)[6]
            float temp0_287[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_281)
            zmm9 = _mm_sub_ps(temp0_283, zmm12)
            zmm13 = __subps_xmmps_memps(temp0_285, temp0_209)
            float temp0_290[0x4] = __subps_xmmps_memps(temp0_287, temp0_210)
            var_248 = zmm9
            var_238 = zmm13
            float var_228_4[0x4] = temp0_290
            float temp0_291[0x4] = _mm_sub_ps(temp0_211, temp0_283)
            float temp0_292[0x4] = _mm_sub_ps(temp0_212, temp0_285)
            char temp0_294 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_283, zmm12, 6))
            zmm0 = _mm_sub_ps(temp0_213, temp0_287)
            var_1f8 = temp0_291
            float var_1e8_4[0x4] = temp0_292
            uint32_t var_1d8_4[0x4] = zmm0
            
            if (temp0_294 != 0xf)
                float temp0_296[0x4] = _mm_cmpeq_ps(temp0_283, zmm12, 2)
                zmm4 = *(arg2 + 4)
                zmm1 =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_285, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_296)
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                
                if (_mm_movemask_ps(zmm1 ^ zmm3) == 0xf)
                    goto label_1400c0c43
                
                zmm2 = *(arg2 + 8)
                zmm12 = _mm_and_ps(_mm_cmpeq_ps(temp0_287, _mm_shuffle_ps(zmm2, zmm2, 0), 2), zmm1)
                
                if (_mm_movemask_ps(zmm12 ^ zmm3) != 0xf)
                    zmm2 = *arg1
                    float temp0_306[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_306, temp0_283, 6), zmm12)
                    char temp0_310 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm12))
                    zmm2 = _mm_cmpeq_ps(temp0_306, temp0_283, 2)
                    
                    if (temp0_310 != 0xf)
                        zmm1 = (*arg1)[1]
                        float temp0_313[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_285, 2)
                        zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm12), temp0_313)
                        zmm1 = _mm_andnot_ps(zmm2, zmm12)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm12)) != 0xf)
                        zmm1 = (*arg1)[2]
                        float temp0_320[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_287, 2)
                        zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm12), temp0_320)
                    
                    zmm12 = _mm_and_ps(zmm12, zmm2)
                
                if (_mm_movemask_ps(zmm12) == 0)
                    goto label_1400c0c54
                
                goto label_1400c0b9a
            
            zmm1 = _mm_cmpeq_ps(temp0_283, zmm12, 2)
        label_1400c0c43:
            zmm12 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
            float var_2c8_1[0x4]
            uint32_t var_2b8_1[0x4]
            
            if (_mm_movemask_ps(zmm12) != 0)
            label_1400c0b9a:
                float temp0_325[0x4] = _mm_max_ps(temp0_291, zmm9)
                float temp0_326[0x4] = _mm_max_ps(temp0_292, zmm13)
                zmm0 = _mm_max_ps(zmm0, temp0_290)
                float temp0_328[0x4] = _mm_cmpeq_ps(temp0_326, temp0_325, 1)
                zmm4 = _mm_and_ps(zmm12, temp0_328)
                
                if (_mm_movemask_ps(zmm4) == 0)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    zmm13 = var_2b8_1
                    zmm11 = var_2c8_1
                    zmm14 = var_2d8_1
                    zmm6 = data_142d3f780
                    zmm2 = _mm_andnot_ps(temp0_328, zmm12)
                    
                    if (_mm_movemask_ps(zmm2) == 0)
                        zmm7 = var_2e8
                    else
                    label_1400c0cab:
                        float temp0_353[0x4] = _mm_cmpeq_ps(zmm0, temp0_326, 1)
                        zmm4 = _mm_and_ps(zmm2, temp0_353)
                        
                        if (_mm_movemask_ps(zmm4) == 0)
                            zmm7 = var_2e8
                            zmm1 = _mm_andnot_ps(temp0_353, zmm2)
                            
                            if (_mm_movemask_ps(zmm1) != 0)
                                zmm2 = _mm_andnot_ps(zmm1, zmm7)
                                zmm7 = _mm_or_ps(_mm_and_ps(zmm0, zmm1), zmm2)
                        else
                            zmm5 = __andnps_xmmxud_memxud(zmm4, var_2e8)
                            zmm7 = _mm_or_ps(_mm_and_ps(temp0_326, zmm4), zmm5)
                            zmm1 = _mm_andnot_ps(temp0_353, zmm2)
                            
                            if (_mm_movemask_ps(zmm1) != 0)
                                zmm2 = _mm_andnot_ps(zmm1, zmm7)
                                zmm7 = _mm_or_ps(_mm_and_ps(zmm0, zmm1), zmm2)
                else
                    float temp0_331[0x4] = _mm_cmpeq_ps(zmm0, temp0_325, 1)
                    zmm5 = _mm_and_ps(zmm4, temp0_331)
                    uint32_t temp0_333 = _mm_movemask_ps(zmm5)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    
                    if (temp0_333 != 0)
                        zmm6 = __andnps_xmmxud_memxud(zmm5, var_2e8)
                        var_2e8 = _mm_or_ps(_mm_and_ps(temp0_325, zmm5), zmm6)
                    
                    zmm13 = var_2b8_1
                    zmm11 = var_2c8_1
                    zmm14 = var_2d8_1
                    zmm6 = data_142d3f780
                    zmm1 = _mm_andnot_ps(temp0_331, zmm4)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm4 = __andnps_xmmxud_memxud(zmm1, var_2e8)
                        var_2e8 = _mm_or_ps(_mm_and_ps(zmm1, zmm0), zmm4)
                    
                    zmm2 = _mm_andnot_ps(temp0_328, zmm12)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                        goto label_1400c0cab
                    
                    zmm7 = var_2e8
            else
            label_1400c0c54:
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                zmm13 = var_2b8_1
                zmm11 = var_2c8_1
                zmm14 = var_2d8_1
                zmm6 = data_142d3f780
                zmm7 = var_2e8
            zmm0 = zmm12 ^ zmm3
            result = zx.q(_mm_movemask_ps(zmm0))
            
            if (result.d != 0)
                int64_t rsi_10 = 0
                
                while (true)
                    float temp0_365[0x4] = _mm_cmpeq_ps(zx.o(0), zmm9, 1)
                    uint32_t temp0_367 = _mm_movemask_ps(_mm_and_ps(temp0_365, zmm0))
                    
                    if (temp0_367 != 0)
                        char rbp_12 = temp0_367.b
                        
                        if ((rbp_12 & 1) == 0)
                            if ((rbp_12 & 2) != 0)
                                goto label_1400c0e17
                            
                            goto label_1400c0d38
                        
                        *(&var_2a8 + rsi_10) = zmm9[0]
                        
                        if ((rbp_12 & 2) != 0)
                        label_1400c0e17:
                            *(&var_2a8[1] + rsi_10) = _mm_shuffle_epi32(zmm9, 0xe5)[0]
                            
                            if ((rbp_12 & 4) == 0)
                                goto label_1400c0d42
                            
                            goto label_1400c0e2d
                        
                    label_1400c0d38:
                        
                        if ((rbp_12 & 4) != 0)
                        label_1400c0e2d:
                            *(&var_2a8[2] + rsi_10) = _mm_shuffle_epi32(zmm9, 0x4e)[0]
                            
                            if ((rbp_12 & 8) != 0)
                                *(&var_2a8[3] + rsi_10) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
                        else
                        label_1400c0d42:
                            
                            if ((rbp_12 & 8) != 0)
                                *(&var_2a8[3] + rsi_10) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
                    
                    zmm2 = _mm_andnot_ps(temp0_365, zmm0)
                    result = zx.q(_mm_movemask_ps(zmm2))
                    
                    if (result.d != 0)
                        zmm1 = *(&var_1f8 + rsi_10)
                        float temp0_371[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        uint32_t temp0_373 = _mm_movemask_ps(_mm_and_ps(zmm2, temp0_371))
                        
                        if (temp0_373 != 0)
                            zmm1 ^= zmm6
                            char rbp_14 = temp0_373.b
                            
                            if ((rbp_14 & 1) == 0)
                                if ((rbp_14 & 2) != 0)
                                    goto label_1400c0e57
                                
                                goto label_1400c0d97
                            
                            *(&var_2a8 + rsi_10) = zmm1[0]
                            
                            if ((rbp_14 & 2) != 0)
                            label_1400c0e57:
                                *(&var_2a8[1] + rsi_10) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                
                                if ((rbp_14 & 4) == 0)
                                    goto label_1400c0da1
                                
                                goto label_1400c0e6c
                            
                        label_1400c0d97:
                            
                            if ((rbp_14 & 4) != 0)
                            label_1400c0e6c:
                                *(&var_2a8[2] + rsi_10) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                                
                                if ((rbp_14 & 8) != 0)
                                    *(&var_2a8[3] + rsi_10) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                            else
                            label_1400c0da1:
                                
                                if ((rbp_14 & 8) != 0)
                                    *(&var_2a8[3] + rsi_10) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        
                        uint32_t temp0_376 = _mm_movemask_ps(_mm_andnot_ps(temp0_371, zmm2))
                        
                        if (temp0_376 != 0)
                            char rbp_16 = temp0_376.b
                            
                            if ((rbp_16 & 1) == 0)
                                if ((rbp_16 & 2) != 0)
                                    goto label_1400c0e93
                                
                                goto label_1400c0dd2
                            
                            *(&var_2a8 + rsi_10) = 0
                            
                            if ((rbp_16 & 2) != 0)
                            label_1400c0e93:
                                *(&var_2a8[1] + rsi_10) = 0
                                
                                if ((rbp_16 & 4) == 0)
                                    goto label_1400c0ddc
                                
                                goto label_1400c0ea5
                            
                        label_1400c0dd2:
                            
                            if ((rbp_16 & 4) != 0)
                            label_1400c0ea5:
                                *(&var_2a8[2] + rsi_10) = 0
                                
                                if ((rbp_16 & 8) != 0)
                                    *(&var_2a8[3] + rsi_10) = 0
                            else
                            label_1400c0ddc:
                                
                                if ((rbp_16 & 8) != 0)
                                    *(&var_2a8[3] + rsi_10) = 0
                    
                    if (rsi_10 == 0x20)
                        break
                    
                    zmm9 = *(&var_238 + rsi_10)
                    rsi_10 += 0x10
                
                zmm1 = var_2a8
                float temp0_382[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, zmm1), data_142d8f750)
                float temp0_384[0x4] = _mm_add_ps(_mm_mul_ps(var_298, var_298), temp0_382)
                float temp0_386[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), temp0_384)
                float temp0_387[0x4] = _mm_rsqrt_ps(temp0_386)
                float temp0_389[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_386, temp0_387), temp0_387)
                float temp0_392[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_389), temp0_387), data_142d3f640)
                float temp0_393[0x4] = _mm_rcp_ps(temp0_392)
                float temp0_394[0x4] = _mm_mul_ps(temp0_392, temp0_393)
                float temp0_396[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_394), temp0_393)
                zmm7 = _mm_or_ps(_mm_and_ps(zmm7, zmm12), _mm_and_ps(temp0_396, zmm0))
            
            var_2e8 = zmm7
            float temp0_400[0x4] = __subps_xmmps_memps(zmm7, var_178_2)
            zmm0 = __cmpps_xmmps_memps_immb(temp0_400, data_142fc95d0, 1)
            char temp0_402 = _mm_movemask_ps(zmm0)
            zmm12 = var_1a8_2
            
            if (temp0_402 != 0)
                float temp0_403[0x4] = _mm_mul_ps(temp0_283, temp0_400)
                zmm2 = zmm11
                char temp0_404 = temp0_402 & 1
                
                if (temp0_404 == 0)
                    zmm8 = _mm_mul_ps(temp0_285, temp0_400)
                    zmm4 = zmm13
                    
                    if (temp0_404 != 0)
                        goto label_1400c0757
                    
                    goto label_1400c0f6f
                
                zmm2 = zmm11
                zmm2[0] = zmm2[0] + temp0_403[0]
                zmm8 = _mm_mul_ps(temp0_285, temp0_400)
                zmm4 = zmm13
                
                if (temp0_404 != 0)
                label_1400c0757:
                    zmm4 = zmm13
                    zmm4[0] = zmm4[0] + zmm8[0]
                    zmm10 = _mm_mul_ps(temp0_287, temp0_400)
                    zmm5 = zmm14
                    
                    if (temp0_404 == 0)
                        goto label_1400c0f7d
                    
                    goto label_1400c076e
                
            label_1400c0f6f:
                zmm10 = _mm_mul_ps(temp0_287, temp0_400)
                zmm5 = zmm14
                bool cond:19_1
                bool cond:20_1
                bool cond:27_1
                bool cond:28_1
                
                if (temp0_404 == 0)
                label_1400c0f7d:
                    zmm11 = _mm_add_ps(zmm11, temp0_403)
                    char temp4_1 = temp0_402 & 2
                    cond:19_1 = temp4_1 != 0
                    cond:20_1 = temp4_1 == 0
                    cond:27_1 = temp4_1 == 0
                    cond:28_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_1400c0791
                    
                    goto label_1400c0f8b
                
            label_1400c076e:
                zmm5 = zmm14
                zmm5[0] = zmm5[0] + zmm10[0]
                zmm11 = _mm_add_ps(zmm11, temp0_403)
                char temp3_1 = temp0_402 & 2
                cond:19_1 = temp3_1 != 0
                cond:20_1 = temp3_1 == 0
                cond:27_1 = temp3_1 == 0
                cond:28_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                label_1400c0791:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm2, 1), zmm2, 0xe2)
                    zmm13 = _mm_add_ps(zmm13, zmm8)
                    
                    if (cond:20_1)
                        goto label_1400c0f95
                    
                    goto label_1400c07aa
                
            label_1400c0f8b:
                zmm13 = _mm_add_ps(zmm13, zmm8)
                
                if (not(cond:19_1))
                label_1400c0f95:
                    zmm14 = _mm_add_ps(zmm14, zmm10)
                    
                    if (cond:28_1)
                        goto label_1400c07c3
                    
                    goto label_1400c0f9f
                
            label_1400c07aa:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm4, 1), zmm4, 0xe2)
                zmm14 = _mm_add_ps(zmm14, zmm10)
                bool cond:37_1
                bool cond:38_1
                bool cond:43_1
                bool cond:44_1
                
                if (not(cond:27_1))
                label_1400c07c3:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm5, 1), zmm5, 0xe2)
                    char temp11_1 = temp0_402 & 4
                    cond:37_1 = temp11_1 == 0
                    cond:38_1 = temp11_1 != 0
                    cond:43_1 = temp11_1 != 0
                    cond:44_1 = temp11_1 == 0
                    
                    if (temp11_1 == 0)
                        goto label_1400c0fa9
                    
                    goto label_1400c07d8
                
            label_1400c0f9f:
                char temp10_1 = temp0_402 & 4
                cond:37_1 = temp10_1 == 0
                cond:38_1 = temp10_1 != 0
                cond:43_1 = temp10_1 != 0
                cond:44_1 = temp10_1 == 0
                
                if (temp10_1 != 0)
                label_1400c07d8:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm11, zmm2, 0x32), 0x84)
                    
                    if (not(cond:37_1))
                    label_1400c07ea:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x32), 0x84)
                        
                        if (cond:44_1)
                            goto label_1400c0fb5
                        
                        goto label_1400c07fc
                else
                label_1400c0fa9:
                    
                    if (cond:38_1)
                        goto label_1400c07ea
                
                bool cond:54_1
                bool cond:55_1
                bool cond:60_1
                bool cond:61_1
                
                if (not(cond:43_1))
                label_1400c0fb5:
                    char temp19_1 = temp0_402 & 8
                    cond:54_1 = temp19_1 != 0
                    cond:55_1 = temp19_1 == 0
                    cond:60_1 = temp19_1 != 0
                    cond:61_1 = temp19_1 == 0
                    
                    if (temp19_1 != 0)
                        goto label_1400c0814
                    
                    goto label_1400c0fbf
                
            label_1400c07fc:
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm14, zmm5, 0x32), 0x84)
                char temp18_1 = temp0_402 & 8
                cond:54_1 = temp18_1 != 0
                cond:55_1 = temp18_1 == 0
                cond:60_1 = temp18_1 != 0
                cond:61_1 = temp18_1 == 0
                
                if (temp18_1 != 0)
                label_1400c0814:
                    zmm11 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm11, zmm2, 0x23), 0x24)
                    
                    if (cond:55_1)
                        goto label_1400c0fc9
                    
                    goto label_1400c0828
                
            label_1400c0fbf:
                zmm11 = zmm2
                
                if (cond:54_1)
                label_1400c0828:
                    zmm13 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x23), 0x24)
                    
                    if (cond:60_1)
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm14, zmm5, 0x23), 0x24)
                else
                label_1400c0fc9:
                    zmm13 = zmm4
                    
                    if (not(cond:61_1))
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm14, zmm5, 0x23), 0x24)
                
                zmm7 = _mm_and_ps(_mm_add_ps(temp0_400, var_268_1), zmm0)
                zmm14 = zmm5
                var_268_1 = _mm_or_ps(_mm_andnot_ps(zmm0, var_268_1), zmm7)
            
            rbx_1 = zx.q(rbx_1.d + 4)
        while (rbx_1.d s< i)
        
        if (rbx_1.d s< arg9)
            goto label_1400c1017
        
        zmm7 = var_198_1
        zmm5 = var_268_1
    zmm7 = _mm_cmpeq_epi32(zmm7, zx.o(0))
    zmm0 = zmm7 & not.o(zmm11)
    float temp0_758[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
    zmm0 = _mm_shuffle_ps(temp0_758, temp0_758, 0xe5)
    zmm0[0] = zmm0[0] f+ temp0_758[0]
    zmm1 = zmm7 & not.o(zmm13)
    float temp0_761[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_762[0x4] = _mm_shuffle_ps(temp0_761, temp0_761, 0xe5)
    temp0_762[0] = temp0_762[0] + temp0_761[0]
    zmm0 = _mm_unpacklo_ps(zmm0, temp0_762[0].q)
    zmm1 = zmm7 & not.o(zmm14)
    float temp0_765[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_766[0x4] = _mm_shuffle_ps(temp0_765, temp0_765, 0xe5)
    temp0_766[0] = temp0_766[0] + temp0_765[0]
    float temp0_767[0x4] =
        _mm_add_ps(zx.o(*arg8)[0].q | arg8[1].d[0].q << 0x40, zmm0[0].q | temp0_766[0].q << 0x40)
    zmm0 = temp0_767
    *arg8 = temp0_767[0]
    float temp0_768[0x4] = _mm_shuffle_ps(temp0_767, temp0_767, 0xe5)
    zmm0[0].q = zmm0 u>> 0x40
    *(arg8 + 4) = temp0_768[0]
    arg8[1].d = zmm0[0]
    zmm7 &= not.o(zmm5)
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm7, 0xee), zmm7)
else
    float var_268[0x4]
    uint64_t rbx
    
    if (i s<= 0)
        rbx = 0
        zmm13 = zx.o(0)
        zmm12 = zx.o(0)
        zmm10 = zx.o(0)
        var_268 = zx.o(0)
        
        if (0 s>= arg9)
            zmm3 = var_268
        else
        label_1400c1090:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
            zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm0)
            int64_t rsi_14 = sx.q(rbx.d << 2)
            uint32_t temp0_425 = _mm_movemask_ps(zmm9)
            float var_2b8_3[0x4] = zmm12
            uint32_t var_2d8_3[0x4] = zmm13
            
            if ((zx.q(temp0_425) & 0xfffffff9) != 9)
                if ((temp0_425.b & 1) == 0)
                    if ((temp0_425.b & 2) != 0)
                        goto label_1400c1b87
                    
                    goto label_1400c1591
                
                var_248[0] = *(arg5 + rsi_14)
                
                if ((temp0_425.b & 2) != 0)
                label_1400c1b87:
                    var_248[1] = *(arg5 + rsi_14 + 4)
                    
                    if ((temp0_425.b & 4) == 0)
                        goto label_1400c159b
                    
                    goto label_1400c1b9d
                
            label_1400c1591:
                
                if ((temp0_425.b & 4) != 0)
                label_1400c1b9d:
                    var_248[2] = *(arg5 + rsi_14 + 8)
                    
                    if ((temp0_425.b & 8) != 0)
                        var_248[3] = *(arg5 + rsi_14 + 0xc)
                else
                label_1400c159b:
                    
                    if ((temp0_425.b & 8) != 0)
                        var_248[3] = *(arg5 + rsi_14 + 0xc)
                
                zmm1 = var_248
            else
                zmm1 = *(arg5 + rsi_14)
            
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm9
            int64_t rsi_18 = sx.q(zmm2[0])
            int64_t rax_53 = arg4 + (rsi_18 << 2)
            zmm1 = *(arg4 + (rsi_18 << 2))
            int64_t rdi_10 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            int64_t rsi_20 = arg4 + (rdi_10 << 2)
            float temp0_537[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rdi_10 << 2)))[0].q)
            int64_t rbx_7 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            int64_t rdi_12 = arg4 + (rbx_7 << 2)
            zmm3 = *(arg4 + (rbx_7 << 2))
            int64_t rbp_23 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            int64_t rbx_9 = arg4 + (rbp_23 << 2)
            float temp0_540[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + (rbp_23 << 2)))[0].q)
            zmm1 = temp0_537[0].q | temp0_540[0].q << 0x40
            zmm3 = data_142fc95e0 & zmm9
            float temp0_542[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_53), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_20))[0].q)
            float temp0_545[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_12), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_9))[0].q)
            zmm8 = temp0_542[0].q | temp0_545[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm9
            float temp0_547[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_53), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_20))[0].q)
            float temp0_550[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_12), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_9))[0].q)
            zmm5 = temp0_547[0].q | temp0_550[0].q << 0x40
            float var_f8_2[0x4] = zx.o(0)
            zmm6 = (*arg3)[3]
            float temp0_551[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float var_248_5[0x4] = temp0_551
            var_238 = temp0_551
            float var_228_7[0x4] = temp0_551
            float var_218_4[0x4] = temp0_551
            zmm7 = *arg3
            zmm2 = (*arg3)[1]
            zmm0 = (*arg3)[2]
            float temp0_552[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_553[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_554[0x4] = _mm_mul_ps(zmm8, temp0_553)
            float temp0_555[0x4] = _mm_mul_ps(temp0_553, zmm5)
            float temp0_556[0x4] = _mm_mul_ps(zmm5, temp0_552)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_558[0x4] = _mm_mul_ps(temp0_552, zmm1)
            float temp0_559[0x4] = _mm_mul_ps(zmm1, zmm0)
            float temp0_560[0x4] = _mm_mul_ps(zx.o(0), temp0_551)
            float temp0_562[0x4] = _mm_sub_ps(temp0_556, _mm_mul_ps(zmm0, zmm8))
            float temp0_563[0x4] = _mm_sub_ps(temp0_559, temp0_555)
            float temp0_564[0x4] = _mm_sub_ps(temp0_554, temp0_558)
            float temp0_565[0x4] = _mm_sub_ps(temp0_560, temp0_560)
            float temp0_566[0x4] = _mm_add_ps(temp0_562, temp0_562)
            float temp0_567[0x4] = _mm_add_ps(temp0_563, temp0_563)
            float temp0_568[0x4] = _mm_add_ps(temp0_564, temp0_564)
            float temp0_569[0x4] = _mm_add_ps(temp0_565, temp0_565)
            var_1f8 = temp0_566
            float var_1e8_7[0x4] = temp0_567
            float var_1d8_7[0x4] = temp0_568
            float var_1c8_4[0x4] = temp0_569
            float temp0_570[0x4] = _mm_mul_ps(temp0_569, temp0_551)
            float temp0_571[0x4] = _mm_mul_ps(temp0_551, temp0_566)
            float temp0_572[0x4] = _mm_mul_ps(temp0_551, temp0_567)
            float temp0_573[0x4] = _mm_mul_ps(temp0_551, temp0_568)
            float temp0_574[0x4] = __addps_xmmps_memps(temp0_571, zmm1)
            float temp0_575[0x4] = __addps_xmmps_memps(temp0_572, zmm8)
            float temp0_576[0x4] = __addps_xmmps_memps(temp0_573, zmm5)
            float temp0_577[0x4] = __addps_xmmps_memps(temp0_570, var_f8_2)
            var_2a8 = temp0_574
            float var_278_2[0x4] = temp0_577
            zmm0 = *arg3
            zmm2 = (*arg3)[1]
            zmm7 = (*arg3)[2]
            float temp0_578[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_580[0x4] = _mm_mul_ps(temp0_567, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_568)
            float temp0_582[0x4] = _mm_mul_ps(temp0_568, temp0_578)
            float temp0_583[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_584[0x4] = _mm_mul_ps(temp0_578, temp0_566)
            float temp0_585[0x4] = _mm_mul_ps(temp0_566, temp0_583)
            float temp0_587[0x4] = _mm_sub_ps(temp0_582, _mm_mul_ps(temp0_583, temp0_567))
            float temp0_588[0x4] = _mm_sub_ps(temp0_585, zmm0)
            float temp0_589[0x4] = _mm_sub_ps(temp0_580, temp0_584)
            float temp0_590[0x4] = _mm_add_ps(temp0_587, temp0_574)
            float temp0_591[0x4] = _mm_add_ps(temp0_588, temp0_575)
            float temp0_592[0x4] = _mm_add_ps(temp0_589, temp0_576)
            zmm11 = arg3[1][0]
            zmm12 = (*arg3)[5]
            float temp0_594[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_590)
            float temp0_596[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm12, zmm12, 0), temp0_591)
            zmm5 = (*arg3)[6]
            zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_592)
            zmm2 = *arg2
            zmm8 = *(arg2 + 4)
            float temp0_599[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_sub_ps(temp0_594, temp0_599)
            float temp0_601[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm0 = _mm_sub_ps(temp0_596, temp0_601)
            zmm14 = *(arg2 + 8)
            float temp0_603[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            float temp0_604[0x4] = _mm_sub_ps(zmm5, temp0_603)
            float var_248_6[0x4] = zmm1
            uint32_t var_1a8_4[0x4] = zmm0
            var_238 = zmm0
            float var_228_8[0x4] = temp0_604
            zmm3 = *arg1
            zmm13 = (*arg1)[1]
            float temp0_605[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_606[0x4] = _mm_sub_ps(temp0_605, temp0_594)
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
            float temp0_608[0x4] = _mm_sub_ps(zmm13, temp0_596)
            zmm15 = (*arg1)[2]
            float temp0_609[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_594, temp0_599, 6), zmm9)
            char temp0_613 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9))
            zmm0 = _mm_sub_ps(temp0_609, zmm5)
            var_1f8 = temp0_606
            float var_1e8_8[0x4] = temp0_608
            uint32_t var_258_4[0x4] = zmm0
            uint32_t var_1d8_8[0x4] = zmm0
            zmm11 = _mm_cmpeq_ps(temp0_594, temp0_599, 2)
            
            if (temp0_613 != 0xf)
                zmm0 = _mm_cmpeq_ps(temp0_596, temp0_601, 2)
                zmm11 = _mm_and_ps(_mm_and_ps(zmm11, zmm9), zmm0)
                zmm6 = _mm_andnot_ps(zmm11, zmm9)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9)) != 0xf)
                zmm0 = _mm_cmpeq_ps(zmm5, temp0_603, 2)
                zmm11 = _mm_and_ps(_mm_and_ps(zmm11, zmm9), zmm0)
                zmm6 = zmm11 ^ zmm9
            
            zmm14 = zmm5
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9)) == 0xf)
                zmm6 = var_258_4
                zmm7 = temp0_608
            else
                zmm11 = _mm_and_ps(zmm11, zmm9)
                zmm0 = temp0_594
                zmm2 = _mm_cmpeq_ps(temp0_605, zmm0, 2)
                zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_605, zmm0, 6), zmm11)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm11)) != 0xf)
                    zmm13 = _mm_cmpeq_ps(zmm13, temp0_596, 2)
                    zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm11), zmm13)
                    zmm3 = zmm2 ^ zmm11
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm11)) != 0xf)
                    float temp0_638[0x4] = _mm_cmpeq_ps(temp0_609, zmm5, 2)
                    zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm11), temp0_638)
                
                zmm6 = var_258_4
                zmm7 = temp0_608
                zmm11 = _mm_and_ps(zmm11, zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm11, zmm9)) == 0)
                zmm12 = var_2b8_3
                zmm10 = zmm10
                zmm13 = var_2d8_3
                zmm7 = zmm14
            else
                float temp0_662[0x4] = _mm_max_ps(temp0_606, zmm1)
                float temp0_663[0x4] = __maxps_xmmps_memps(zmm7, var_1a8_4)
                zmm6 = __maxps_xmmps_memps(zmm6, temp0_604)
                float temp0_665[0x4] = _mm_cmpeq_ps(temp0_663, temp0_662, 1)
                zmm4 = _mm_and_ps(zmm11, temp0_665)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                    float temp0_669[0x4] = _mm_cmpeq_ps(zmm6, temp0_662, 5)
                    zmm5 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zmm6, temp0_662, 1), zmm4), temp0_662)
                    zmm3 = _mm_and_ps(temp0_669, zmm4)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm9)) != 0)
                        zmm5 = _mm_or_ps(zmm5, _mm_and_ps(zmm3, zmm6))
                
                zmm13 = var_2d8_3
                zmm2 = _mm_andnot_ps(temp0_665, zmm11)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm9)) == 0)
                    zmm12 = var_2b8_3
                    zmm10 = zmm10
                    zmm7 = zmm14
                else
                    float temp0_795[0x4] = _mm_cmpeq_ps(zmm6, temp0_663, 1)
                    zmm4 = _mm_and_ps(zmm2, temp0_795)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                        uint32_t temp0_799[0x4] = _mm_andnot_ps(zmm4, zmm5)
                        zmm5 = _mm_or_ps(_mm_and_ps(temp0_663, zmm4), temp0_799)
                    
                    zmm3 = _mm_andnot_ps(temp0_795, zmm2)
                    zmm12 = var_2b8_3
                    zmm10 = zmm10
                    zmm7 = zmm14
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm9)) != 0)
                        uint32_t temp0_805[0x4] = _mm_andnot_ps(zmm3, zmm5)
                        zmm6 = _mm_or_ps(_mm_and_ps(zmm6, zmm3), temp0_805)
                        zmm5 = zmm6
            
            if (_mm_movemask_ps(_mm_andnot_ps(zmm11, zmm9)) == 0)
                zmm0 = arg6
            else
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm6) ^ zmm11
                int64_t rax_82 = 0
                zmm7 = data_142d3f780
                
                while (true)
                    float temp0_811[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                    zmm3 = _mm_and_ps(temp0_811, zmm6)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm9)) != 0)
                        char temp0_815 = _mm_movemask_ps(zmm3)
                        
                        if ((temp0_815 & 1) == 0)
                            if ((temp0_815 & 2) != 0)
                                goto label_1400c22c4
                            
                            goto label_1400c21dc
                        
                        *(&var_2a8 + rax_82) = zmm1[0]
                        
                        if ((temp0_815 & 2) != 0)
                        label_1400c22c4:
                            *(&var_2a8[1] + rax_82) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            
                            if ((temp0_815 & 4) == 0)
                                goto label_1400c21e5
                            
                            goto label_1400c22d8
                        
                    label_1400c21dc:
                        
                        if ((temp0_815 & 4) != 0)
                        label_1400c22d8:
                            *(&var_2a8[2] + rax_82) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            if ((temp0_815 & 8) != 0)
                                *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        else
                        label_1400c21e5:
                            
                            if ((temp0_815 & 8) != 0)
                                *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    
                    zmm2 = _mm_andnot_ps(temp0_811, zmm6)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm9)) != 0)
                        zmm3 = *(&var_1f8 + rax_82)
                        float temp0_820[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        zmm4 = _mm_and_ps(zmm2, temp0_820)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                            zmm3 ^= zmm7
                            char temp0_824 = _mm_movemask_ps(zmm4)
                            
                            if ((temp0_824 & 1) == 0)
                                if ((temp0_824 & 2) != 0)
                                    goto label_1400c2300
                                
                                goto label_1400c2245
                            
                            *(&var_2a8 + rax_82) = zmm3[0]
                            
                            if ((temp0_824 & 2) != 0)
                            label_1400c2300:
                                *(&var_2a8[1] + rax_82) = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                                
                                if ((temp0_824 & 4) == 0)
                                    goto label_1400c224e
                                
                                goto label_1400c2314
                            
                        label_1400c2245:
                            
                            if ((temp0_824 & 4) != 0)
                            label_1400c2314:
                                *(&var_2a8[2] + rax_82) = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                
                                if ((temp0_824 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                            else
                            label_1400c224e:
                                
                                if ((temp0_824 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        
                        zmm1 = _mm_andnot_ps(temp0_820, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm9)) != 0)
                            char temp0_829 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_829 & 1) == 0)
                                if ((temp0_829 & 2) != 0)
                                    goto label_1400c2339
                                
                                goto label_1400c2284
                            
                            *(&var_2a8 + rax_82) = 0
                            
                            if ((temp0_829 & 2) != 0)
                            label_1400c2339:
                                *(&var_2a8[1] + rax_82) = 0
                                
                                if ((temp0_829 & 4) == 0)
                                    goto label_1400c228d
                                
                                goto label_1400c234a
                            
                        label_1400c2284:
                            
                            if ((temp0_829 & 4) != 0)
                            label_1400c234a:
                                *(&var_2a8[2] + rax_82) = 0
                                
                                if ((temp0_829 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = 0
                            else
                            label_1400c228d:
                                
                                if ((temp0_829 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = 0
                    
                    if (rax_82 == 0x20)
                        break
                    
                    zmm1 = *(&var_238 + rax_82)
                    rax_82 += 0x10
                
                zmm0 = var_2a8
                float temp0_835[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                float temp0_837[0x4] = _mm_add_ps(_mm_mul_ps(temp0_575, temp0_575), temp0_835)
                float temp0_839[0x4] = _mm_add_ps(_mm_mul_ps(temp0_576, temp0_576), temp0_837)
                zmm0 = _mm_rsqrt_ps(temp0_839)
                float temp0_842[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_839, zmm0), zmm0)
                float temp0_845[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_842), zmm0), data_142d3f640)
                zmm0 = _mm_rcp_ps(temp0_845)
                float temp0_847[0x4] = _mm_mul_ps(temp0_845, zmm0)
                float temp0_849[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_847), zmm0)
                zmm5 = _mm_or_ps(_mm_and_ps(zmm5, zmm11), _mm_and_ps(temp0_849, zmm6))
                zmm0 = arg6
                zmm7 = zmm14
            
            float temp0_854[0x4] = _mm_sub_ps(zmm5, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_854, data_142fc95d0, 1), zmm9)
            result = zx.q(_mm_movemask_ps(zmm1))
            
            if (result.b == 0)
                zmm3 = var_268
            else
                float temp0_858[0x4] = _mm_mul_ps(temp0_594, temp0_854)
                result = zx.q(result.b)
                zmm3 = zmm10
                char temp7_1 = result.b & 1
                
                if (temp7_1 == 0)
                    zmm8 = _mm_mul_ps(temp0_596, temp0_854)
                    zmm2 = zmm12
                    
                    if (temp7_1 != 0)
                        goto label_1400c25ba
                    
                    goto label_1400c2423
                
                zmm3 = zmm10
                zmm3[0] = zmm3[0] + temp0_858[0]
                zmm8 = _mm_mul_ps(temp0_596, temp0_854)
                zmm2 = zmm12
                
                if (temp7_1 != 0)
                label_1400c25ba:
                    zmm2 = zmm12
                    zmm2[0] = zmm2[0] + zmm8[0]
                    zmm7 = _mm_mul_ps(zmm7, temp0_854)
                    zmm0 = zmm13
                    
                    if (temp7_1 == 0)
                        goto label_1400c2430
                    
                    goto label_1400c25d0
                
            label_1400c2423:
                zmm7 = _mm_mul_ps(zmm7, temp0_854)
                zmm0 = zmm13
                bool cond:45_1
                bool cond:46_1
                bool cond:51_1
                bool cond:52_1
                
                if (temp7_1 == 0)
                label_1400c2430:
                    zmm10 = _mm_add_ps(zmm10, temp0_858)
                    char temp15_1 = result.b & 2
                    cond:45_1 = temp15_1 != 0
                    cond:46_1 = temp15_1 == 0
                    cond:51_1 = temp15_1 == 0
                    cond:52_1 = temp15_1 != 0
                    
                    if (temp15_1 != 0)
                        goto label_1400c25f0
                    
                    goto label_1400c243c
                
            label_1400c25d0:
                zmm0 = zmm13
                zmm0[0] = zmm0[0] f+ zmm7[0]
                zmm10 = _mm_add_ps(zmm10, temp0_858)
                char temp14_1 = result.b & 2
                cond:45_1 = temp14_1 != 0
                cond:46_1 = temp14_1 == 0
                cond:51_1 = temp14_1 == 0
                cond:52_1 = temp14_1 != 0
                
                if (temp14_1 != 0)
                label_1400c25f0:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 1), zmm3, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm8)
                    
                    if (cond:46_1)
                        goto label_1400c2446
                    
                    goto label_1400c2609
                
            label_1400c243c:
                zmm12 = _mm_add_ps(zmm12, zmm8)
                
                if (not(cond:45_1))
                label_1400c2446:
                    zmm13 = _mm_add_ps(zmm13, zmm7)
                    
                    if (cond:52_1)
                        goto label_1400c2622
                    
                    goto label_1400c2450
                
            label_1400c2609:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
                zmm13 = _mm_add_ps(zmm13, zmm7)
                bool cond:62_1
                bool cond:63_1
                bool cond:68_1
                bool cond:69_1
                
                if (not(cond:51_1))
                label_1400c2622:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm0, 1), zmm0, 0xe2)
                    char temp23_1 = result.b & 4
                    cond:62_1 = temp23_1 == 0
                    cond:63_1 = temp23_1 != 0
                    cond:68_1 = temp23_1 != 0
                    cond:69_1 = temp23_1 == 0
                    
                    if (temp23_1 == 0)
                        goto label_1400c2458
                    
                    goto label_1400c2635
                
            label_1400c2450:
                char temp22_1 = result.b & 4
                cond:62_1 = temp22_1 == 0
                cond:63_1 = temp22_1 != 0
                cond:68_1 = temp22_1 != 0
                cond:69_1 = temp22_1 == 0
                
                if (temp22_1 != 0)
                label_1400c2635:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x32), 0x84)
                    
                    if (not(cond:62_1))
                    label_1400c2647:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x32), 0x84)
                        
                        if (cond:69_1)
                            goto label_1400c2464
                        
                        goto label_1400c2659
                else
                label_1400c2458:
                    
                    if (cond:63_1)
                        goto label_1400c2647
                
                bool cond:72_1
                bool cond:73_1
                bool cond:76_1
                bool cond:77_1
                
                if (not(cond:68_1))
                label_1400c2464:
                    char temp27_1 = result.b & 8
                    cond:72_1 = temp27_1 != 0
                    cond:73_1 = temp27_1 == 0
                    cond:76_1 = temp27_1 != 0
                    cond:77_1 = temp27_1 == 0
                    
                    if (temp27_1 != 0)
                        goto label_1400c266f
                    
                    goto label_1400c246c
                
            label_1400c2659:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x32), 0x84)
                char temp26_1 = result.b & 8
                cond:72_1 = temp26_1 != 0
                cond:73_1 = temp26_1 == 0
                cond:76_1 = temp26_1 != 0
                cond:77_1 = temp26_1 == 0
                
                if (temp26_1 != 0)
                label_1400c266f:
                    zmm10 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x23), 0x24)
                    
                    if (cond:73_1)
                        goto label_1400c2476
                    
                    goto label_1400c2683
                
            label_1400c246c:
                zmm10 = zmm3
                
                if (cond:72_1)
                label_1400c2683:
                    zmm12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x23), 0x24)
                    
                    if (cond:76_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x23), 0x24)
                else
                label_1400c2476:
                    zmm12 = zmm2
                    
                    if (not(cond:77_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x23), 0x24)
                
                zmm5 = _mm_and_ps(_mm_add_ps(temp0_854, var_268), zmm1)
                zmm13 = zmm0
                zmm3 = _mm_or_ps(_mm_andnot_ps(zmm1, var_268), zmm5)
    else
        zmm9 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float var_1b8_1[0x4] = *arg3
        float var_258_1[0x4] = (*arg3)[1]
        float var_208_1[0x4] = (*arg3)[2]
        zmm11 = *arg2
        zmm1 = *(arg2 + 4)
        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *(arg2 + 8)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg1
        zmm2 = (*arg1)[1]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg1)[2]
        float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        uint32_t var_178_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        rbx = 0
        var_268 = zx.o(0)
        float var_1a8_1[0x4] = zmm11
        
        do
            uint32_t var_2d8[0x4]
            __builtin_memset(&var_2d8, 0, 0x30)
            zmm0 = *(arg5 + sx.q((rbx << 2).d))
            zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
            int64_t rsi_4 = sx.q(zmm1[0])
            int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
            int64_t rax_1 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
            zmm1 = *(arg4 + (rdi_2 << 2) + 4)
            float temp0_35[0x4] =
                _mm_unpacklo_ps(*(arg4 + (rax_1 << 2)), (*(arg4 + (rdi_2 << 2)))[0].q)
            zmm0 = _mm_unpacklo_ps(*(arg4 + (rax_1 << 2) + 4), zmm1[0].q)
            zmm5 = *(arg4 + (rsi_4 << 2) + 4)
            zmm2 = _mm_unpacklo_ps(*(arg4 + (rsi_4 << 2)), (*(arg4 + (rbp_2 << 2)))[0].q)[0].q
                | temp0_35[0].q << 0x40
            zmm5 = _mm_unpacklo_ps(zmm5, (*(arg4 + (rbp_2 << 2) + 4))[0].q)[0].q | zmm0[0].q << 0x40
            float temp0_39[0x4] =
                _mm_unpacklo_ps(*(arg4 + (rsi_4 << 2) + 8), (*(arg4 + (rbp_2 << 2) + 8))[0].q)
            zmm0 = _mm_unpacklo_ps(*(arg4 + (rax_1 << 2) + 8), (*(arg4 + (rdi_2 << 2) + 8))[0].q)
            zmm1 = temp0_39[0].q | zmm0[0].q << 0x40
            var_1f8 = zmm2
            int128_t var_1c8_1 = zx.o(0)
            float var_248_1[0x4] = temp0_1
            var_238 = temp0_1
            float var_228_1[0x4] = temp0_1
            float temp0_41[0x4] = _mm_shuffle_ps(var_258_1, var_258_1, 0)
            zmm0 = _mm_mul_ps(zmm1, temp0_41)
            float temp0_43[0x4] = _mm_shuffle_ps(var_208_1, var_208_1, 0)
            float temp0_44[0x4] = _mm_mul_ps(zmm2, temp0_43)
            float temp0_45[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
            float temp0_46[0x4] = _mm_mul_ps(zmm5, temp0_45)
            zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(zmm5, temp0_43))
            float temp0_50[0x4] = _mm_sub_ps(temp0_44, _mm_mul_ps(zmm1, temp0_45))
            float temp0_52[0x4] = _mm_sub_ps(temp0_46, _mm_mul_ps(zmm2, temp0_41))
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_54[0x4] = _mm_add_ps(temp0_50, temp0_50)
            float temp0_55[0x4] = _mm_add_ps(temp0_52, temp0_52)
            float temp0_56[0x4] = _mm_mul_ps(temp0_1, temp0_54)
            float temp0_57[0x4] = _mm_mul_ps(zmm0, temp0_43)
            float temp0_58[0x4] = _mm_mul_ps(temp0_54, temp0_43)
            float temp0_63[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_55, temp0_41), temp0_58), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, zmm0), var_1f8))
            float temp0_64[0x4] = _mm_mul_ps(temp0_1, temp0_55)
            float temp0_65[0x4] = __addps_xmmps_memps(temp0_56, zmm5)
            float temp0_66[0x4] = __addps_xmmps_memps(temp0_64, zmm1)
            float var_218_1[0x4] = temp0_1
            float temp0_67[0x4] = _mm_mul_ps(temp0_54, temp0_45)
            float temp0_70[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_57, _mm_mul_ps(temp0_55, temp0_45)), temp0_65)
            float temp0_73[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_67, _mm_mul_ps(zmm0, temp0_41)), temp0_66)
            zmm14 = arg3[1][0]
            zmm7 = (*arg3)[5]
            float temp0_75[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_63)
            float temp0_77[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_70)
            zmm8 = (*arg3)[6]
            float temp0_79[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_73)
            zmm15 = _mm_sub_ps(temp0_75, zmm11)
            float temp0_81[0x4] = __subps_xmmps_memps(temp0_77, temp0_3)
            zmm13 = __subps_xmmps_memps(temp0_79, temp0_4)
            var_248 = zmm15
            var_238 = temp0_81
            uint32_t var_228_2[0x4] = zmm13
            float temp0_83[0x4] = _mm_sub_ps(temp0_5, temp0_75)
            zmm0 = _mm_sub_ps(temp0_6, temp0_77)
            char temp0_86 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_75, zmm11, 6))
            float temp0_87[0x4] = _mm_sub_ps(temp0_7, temp0_79)
            var_1f8 = temp0_83
            uint32_t var_1e8_2[0x4] = zmm0
            float var_1d8_2[0x4] = temp0_87
            
            if (temp0_86 != 0xf)
                float temp0_88[0x4] = _mm_cmpeq_ps(temp0_75, zmm11, 2)
                zmm4 = *(arg2 + 4)
                zmm1 =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_77, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_88)
                zmm2 = _mm_cmpeq_epi32(temp0_65, temp0_65)
                
                if (_mm_movemask_ps(zmm1 ^ zmm2) == 0xf)
                    goto label_1400c0293
                
                zmm3 = *(arg2 + 8)
                zmm11 = _mm_and_ps(_mm_cmpeq_ps(temp0_79, _mm_shuffle_ps(zmm3, zmm3, 0), 2), zmm1)
                
                if (_mm_movemask_ps(zmm11 ^ zmm2) != 0xf)
                    zmm1 = *arg1
                    float temp0_98[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                    zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_98, temp0_75, 6), zmm11)
                    char temp0_102 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm11))
                    zmm1 = _mm_cmpeq_ps(temp0_98, temp0_75, 2)
                    
                    if (temp0_102 != 0xf)
                        zmm3 = (*arg1)[1]
                        float temp0_105[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_77, 2)
                        zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm11), temp0_105)
                        zmm3 = _mm_andnot_ps(zmm1, zmm11)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm11)) != 0xf)
                        zmm3 = (*arg1)[2]
                        float temp0_112[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_79, 2)
                        zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm11), temp0_112)
                    
                    zmm11 = _mm_and_ps(zmm11, zmm1)
                
                if (_mm_movemask_ps(zmm11) == 0)
                    goto label_1400c02a4
                
                goto label_1400c01ed
            
            zmm1 = _mm_cmpeq_ps(temp0_75, zmm11, 2)
        label_1400c0293:
            zmm11 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
            float var_2c8[0x4]
            float var_2b8[0x4]
            
            if (_mm_movemask_ps(zmm11) != 0)
            label_1400c01ed:
                float temp0_117[0x4] = _mm_max_ps(temp0_83, zmm15)
                zmm0 = _mm_max_ps(zmm0, temp0_81)
                float temp0_119[0x4] = _mm_max_ps(temp0_87, zmm13)
                float temp0_120[0x4] = _mm_cmpeq_ps(zmm0, temp0_117, 1)
                zmm4 = _mm_and_ps(zmm11, temp0_120)
                
                if (_mm_movemask_ps(zmm4) == 0)
                    zmm12 = var_2b8
                    zmm10 = var_2c8
                    zmm13 = var_2d8
                    zmm5 = _mm_cmpeq_epi32(temp0_70, temp0_70)
                    zmm1 = _mm_andnot_ps(temp0_120, zmm11)
                    
                    if (_mm_movemask_ps(zmm1) == 0)
                        zmm6 = var_2e8
                    else
                    label_1400c02e4:
                        float temp0_145[0x4] = _mm_cmpeq_ps(temp0_119, zmm0, 1)
                        zmm4 = _mm_and_ps(zmm1, temp0_145)
                        
                        if (_mm_movemask_ps(zmm4) != 0)
                            zmm2 = __andnps_xmmxud_memxud(zmm4, var_2e8)
                            var_2e8 = _mm_or_ps(_mm_and_ps(zmm0, zmm4), zmm2)
                        
                        zmm3 = _mm_andnot_ps(temp0_145, zmm1)
                        
                        if (_mm_movemask_ps(zmm3) == 0)
                            zmm6 = var_2e8
                        else
                            uint32_t temp0_153[0x4] = __andnps_xmmxud_memxud(zmm3, var_2e8)
                            zmm6 = _mm_or_ps(_mm_and_ps(temp0_119, zmm3), temp0_153)
                else
                    float temp0_123[0x4] = _mm_cmpeq_ps(temp0_119, temp0_117, 1)
                    zmm5 = _mm_and_ps(zmm4, temp0_123)
                    
                    if (_mm_movemask_ps(zmm5) != 0)
                        zmm2 = __andnps_xmmxud_memxud(zmm5, var_2e8)
                        var_2e8 = _mm_or_ps(_mm_and_ps(temp0_117, zmm5), zmm2)
                    
                    zmm12 = var_2b8
                    zmm10 = var_2c8
                    zmm13 = var_2d8
                    zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                    zmm3 = _mm_andnot_ps(temp0_123, zmm4)
                    
                    if (_mm_movemask_ps(zmm3) != 0)
                        zmm2 = __andnps_xmmxud_memxud(zmm3, var_2e8)
                        var_2e8 = _mm_or_ps(_mm_and_ps(zmm3, temp0_119), zmm2)
                    
                    zmm1 = _mm_andnot_ps(temp0_120, zmm11)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_1400c02e4
                    
                    zmm6 = var_2e8
            else
            label_1400c02a4:
                zmm12 = var_2b8
                zmm10 = var_2c8
                zmm13 = var_2d8
                zmm5 = _mm_cmpeq_epi32(temp0_70, temp0_70)
                zmm6 = var_2e8
            zmm0 = zmm11 ^ zmm5
            result = zx.q(_mm_movemask_ps(zmm0))
            
            if (result.d != 0)
                int64_t rsi_5 = 0
                zmm5 = data_142d3f780
                
                while (true)
                    float temp0_157[0x4] = _mm_cmpeq_ps(zx.o(0), zmm15, 1)
                    uint32_t temp0_159 = _mm_movemask_ps(_mm_and_ps(temp0_157, zmm0))
                    
                    if (temp0_159 != 0)
                        char rbp_4 = temp0_159.b
                        
                        if ((rbp_4 & 1) == 0)
                            if ((rbp_4 & 2) != 0)
                                goto label_1400c0467
                            
                            goto label_1400c0388
                        
                        *(&var_2a8 + rsi_5) = zmm15[0]
                        
                        if ((rbp_4 & 2) != 0)
                        label_1400c0467:
                            *(&var_2a8[1] + rsi_5) = _mm_shuffle_epi32(zmm15, 0xe5)[0]
                            
                            if ((rbp_4 & 4) == 0)
                                goto label_1400c0392
                            
                            goto label_1400c047d
                        
                    label_1400c0388:
                        
                        if ((rbp_4 & 4) != 0)
                        label_1400c047d:
                            *(&var_2a8[2] + rsi_5) = _mm_shuffle_epi32(zmm15, 0x4e)[0]
                            
                            if ((rbp_4 & 8) != 0)
                                *(&var_2a8[3] + rsi_5) = _mm_shuffle_epi32(zmm15, 0xe7)[0]
                        else
                        label_1400c0392:
                            
                            if ((rbp_4 & 8) != 0)
                                *(&var_2a8[3] + rsi_5) = _mm_shuffle_epi32(zmm15, 0xe7)[0]
                    
                    zmm1 = _mm_andnot_ps(temp0_157, zmm0)
                    result = zx.q(_mm_movemask_ps(zmm1))
                    
                    if (result.d != 0)
                        zmm4 = *(&var_1f8 + rsi_5)
                        float temp0_163[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                        uint32_t temp0_165 = _mm_movemask_ps(_mm_and_ps(zmm1, temp0_163))
                        
                        if (temp0_165 != 0)
                            zmm4 ^= zmm5
                            char rbp_6 = temp0_165.b
                            
                            if ((rbp_6 & 1) == 0)
                                if ((rbp_6 & 2) != 0)
                                    goto label_1400c04a7
                                
                                goto label_1400c03e7
                            
                            *(&var_2a8 + rsi_5) = zmm4[0]
                            
                            if ((rbp_6 & 2) != 0)
                            label_1400c04a7:
                                *(&var_2a8[1] + rsi_5) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                                
                                if ((rbp_6 & 4) == 0)
                                    goto label_1400c03f1
                                
                                goto label_1400c04bc
                            
                        label_1400c03e7:
                            
                            if ((rbp_6 & 4) != 0)
                            label_1400c04bc:
                                *(&var_2a8[2] + rsi_5) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                                
                                if ((rbp_6 & 8) != 0)
                                    *(&var_2a8[3] + rsi_5) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                            else
                            label_1400c03f1:
                                
                                if ((rbp_6 & 8) != 0)
                                    *(&var_2a8[3] + rsi_5) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        
                        uint32_t temp0_168 = _mm_movemask_ps(_mm_andnot_ps(temp0_163, zmm1))
                        
                        if (temp0_168 != 0)
                            char rbp_8 = temp0_168.b
                            
                            if ((rbp_8 & 1) == 0)
                                if ((rbp_8 & 2) != 0)
                                    goto label_1400c04e3
                                
                                goto label_1400c0422
                            
                            *(&var_2a8 + rsi_5) = 0
                            
                            if ((rbp_8 & 2) != 0)
                            label_1400c04e3:
                                *(&var_2a8[1] + rsi_5) = 0
                                
                                if ((rbp_8 & 4) == 0)
                                    goto label_1400c042c
                                
                                goto label_1400c04f5
                            
                        label_1400c0422:
                            
                            if ((rbp_8 & 4) != 0)
                            label_1400c04f5:
                                *(&var_2a8[2] + rsi_5) = 0
                                
                                if ((rbp_8 & 8) != 0)
                                    *(&var_2a8[3] + rsi_5) = 0
                            else
                            label_1400c042c:
                                
                                if ((rbp_8 & 8) != 0)
                                    *(&var_2a8[3] + rsi_5) = 0
                    
                    if (rsi_5 == 0x20)
                        break
                    
                    zmm15 = *(&var_238 + rsi_5)
                    rsi_5 += 0x10
                
                zmm1 = var_2a8
                float temp0_174[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, zmm1), data_142d8f750)
                float temp0_176[0x4] = _mm_add_ps(_mm_mul_ps(var_298, var_298), temp0_174)
                float temp0_178[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), temp0_176)
                float temp0_179[0x4] = _mm_rsqrt_ps(temp0_178)
                float temp0_181[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_178, temp0_179), temp0_179)
                float temp0_184[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_181), temp0_179), data_142d3f640)
                float temp0_185[0x4] = _mm_rcp_ps(temp0_184)
                float temp0_186[0x4] = _mm_mul_ps(temp0_184, temp0_185)
                float temp0_188[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_186), temp0_185)
                zmm6 = _mm_or_ps(_mm_and_ps(zmm6, zmm11), _mm_and_ps(temp0_188, zmm0))
            
            var_2e8 = zmm6
            float temp0_192[0x4] = __subps_xmmps_memps(zmm6, var_178_1)
            zmm0 = __cmpps_xmmps_memps_immb(temp0_192, data_142fc95d0, 1)
            char temp0_194 = _mm_movemask_ps(zmm0)
            zmm11 = var_1a8_1
            
            if (temp0_194 != 0)
                float temp0_195[0x4] = _mm_mul_ps(temp0_75, temp0_192)
                zmm1 = zmm10
                char temp1_1 = temp0_194 & 1
                
                if (temp1_1 == 0)
                    zmm7 = _mm_mul_ps(temp0_77, temp0_192)
                    zmm3 = zmm12
                    
                    if (temp1_1 != 0)
                        goto label_1400bfdc6
                    
                    goto label_1400c05be
                
                zmm1 = zmm10
                zmm1[0] = zmm1[0] + temp0_195[0]
                zmm7 = _mm_mul_ps(temp0_77, temp0_192)
                zmm3 = zmm12
                
                if (temp1_1 != 0)
                label_1400bfdc6:
                    zmm3 = zmm12
                    zmm3[0] = zmm3[0] + zmm7[0]
                    zmm8 = _mm_mul_ps(temp0_79, temp0_192)
                    zmm4 = zmm13
                    
                    if (temp1_1 == 0)
                        goto label_1400c05cc
                    
                    goto label_1400bfddc
                
            label_1400c05be:
                zmm8 = _mm_mul_ps(temp0_79, temp0_192)
                zmm4 = zmm13
                bool cond:23_1
                bool cond:24_1
                bool cond:31_1
                bool cond:32_1
                
                if (temp1_1 == 0)
                label_1400c05cc:
                    zmm10 = _mm_add_ps(zmm10, temp0_195)
                    char temp6_1 = temp0_194 & 2
                    cond:23_1 = temp6_1 != 0
                    cond:24_1 = temp6_1 == 0
                    cond:31_1 = temp6_1 == 0
                    cond:32_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_1400bfdff
                    
                    goto label_1400c05da
                
            label_1400bfddc:
                zmm4 = zmm13
                zmm4[0] = zmm4[0] + zmm8[0]
                zmm10 = _mm_add_ps(zmm10, temp0_195)
                char temp5_1 = temp0_194 & 2
                cond:23_1 = temp5_1 != 0
                cond:24_1 = temp5_1 == 0
                cond:31_1 = temp5_1 == 0
                cond:32_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                label_1400bfdff:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 1), zmm1, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm7)
                    
                    if (cond:24_1)
                        goto label_1400c05e4
                    
                    goto label_1400bfe18
                
            label_1400c05da:
                zmm12 = _mm_add_ps(zmm12, zmm7)
                
                if (not(cond:23_1))
                label_1400c05e4:
                    zmm13 = _mm_add_ps(zmm13, zmm8)
                    
                    if (cond:32_1)
                        goto label_1400bfe31
                    
                    goto label_1400c05ee
                
            label_1400bfe18:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm3, 1), zmm3, 0xe2)
                zmm13 = _mm_add_ps(zmm13, zmm8)
                bool cond:39_1
                bool cond:40_1
                bool cond:47_1
                bool cond:48_1
                
                if (not(cond:31_1))
                label_1400bfe31:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm4, 1), zmm4, 0xe2)
                    char temp13_1 = temp0_194 & 4
                    cond:39_1 = temp13_1 == 0
                    cond:40_1 = temp13_1 != 0
                    cond:47_1 = temp13_1 != 0
                    cond:48_1 = temp13_1 == 0
                    
                    if (temp13_1 == 0)
                        goto label_1400c05f8
                    
                    goto label_1400bfe46
                
            label_1400c05ee:
                char temp12_1 = temp0_194 & 4
                cond:39_1 = temp12_1 == 0
                cond:40_1 = temp12_1 != 0
                cond:47_1 = temp12_1 != 0
                cond:48_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                label_1400bfe46:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x32), 0x84)
                    
                    if (not(cond:39_1))
                    label_1400bfe58:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x32), 0x84)
                        
                        if (cond:48_1)
                            goto label_1400c0604
                        
                        goto label_1400bfe6a
                else
                label_1400c05f8:
                    
                    if (cond:40_1)
                        goto label_1400bfe58
                
                bool cond:56_1
                bool cond:57_1
                bool cond:64_1
                bool cond:65_1
                
                if (not(cond:47_1))
                label_1400c0604:
                    char temp21_1 = temp0_194 & 8
                    cond:56_1 = temp21_1 != 0
                    cond:57_1 = temp21_1 == 0
                    cond:64_1 = temp21_1 != 0
                    cond:65_1 = temp21_1 == 0
                    
                    if (temp21_1 != 0)
                        goto label_1400bfe82
                    
                    goto label_1400c060e
                
            label_1400bfe6a:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x32), 0x84)
                char temp20_1 = temp0_194 & 8
                cond:56_1 = temp20_1 != 0
                cond:57_1 = temp20_1 == 0
                cond:64_1 = temp20_1 != 0
                cond:65_1 = temp20_1 == 0
                
                if (temp20_1 != 0)
                label_1400bfe82:
                    zmm10 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
                    
                    if (cond:57_1)
                        goto label_1400c0618
                    
                    goto label_1400bfe96
                
            label_1400c060e:
                zmm10 = zmm1
                
                if (cond:56_1)
                label_1400bfe96:
                    zmm12 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x23), 0x24)
                    
                    if (cond:64_1)
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x23), 0x24)
                else
                label_1400c0618:
                    zmm12 = zmm3
                    
                    if (not(cond:65_1))
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x23), 0x24)
                
                zmm6 = _mm_and_ps(_mm_add_ps(temp0_192, var_268), zmm0)
                zmm13 = zmm4
                var_268 = _mm_or_ps(_mm_andnot_ps(zmm0, var_268), zmm6)
            
            rbx = zx.q(rbx.d + 4)
        while (rbx.d s< i)
        
        if (rbx.d s< arg9)
            goto label_1400c1090
        
        zmm3 = var_268
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
    float temp0_872[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    temp0_872[0] = temp0_872[0] f+ zmm0[0]
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm12, zmm12[0].q), zmm12)
    float temp0_875[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    temp0_875[0] = temp0_875[0] f+ zmm0[0]
    float temp0_876[0x4] = _mm_unpacklo_ps(temp0_872, temp0_875[0].q)
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm13, zmm13[0].q), zmm13)
    float temp0_879[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    temp0_879[0] = temp0_879[0] f+ zmm0[0]
    float temp0_880[0x4] = _mm_add_ps(zx.o(*arg8)[0].q | arg8[1].d[0].q << 0x40, 
        temp0_876[0].q | temp0_879[0].q << 0x40)
    zmm0 = temp0_880
    *arg8 = temp0_880[0]
    float temp0_881[0x4] = _mm_shuffle_ps(temp0_880, temp0_880, 0xe5)
    zmm0[0].q = zmm0 u>> 0x40
    *(arg8 + 4) = temp0_881[0]
    arg8[1].d = zmm0[0]
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm3, 0xee), zmm3)
float temp0_884[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
temp0_884[0] = temp0_884[0] f+ zmm0[0]
temp0_884[0] = temp0_884[0] f+ *arg7
*arg7 = temp0_884[0]
return result
