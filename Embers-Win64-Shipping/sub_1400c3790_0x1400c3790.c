// 函数: sub_1400c3790
// 地址: 0x1400c3790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_38[0x4] = zmm15
float zmm14[0x4]
float var_48[0x4] = zmm14
float zmm13[0x4]
float var_58[0x4] = zmm13
float zmm11[0x4]
float var_78[0x4] = zmm11
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm9[0x4]
float var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_b8[0x4] = zmm7
float zmm6[0x4]
float var_c8[0x4] = zmm6
float zmm1[0x4] = *arg9
float zmm0[0x4] = arg5
uint32_t result = _mm_movemask_ps(zmm1)
int32_t i = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
float var_2a8[0x4]
float var_298[0x4]
float var_288[0x4]
uint32_t var_228[0x4]
float var_1b8[0x4]
float zmm2[0x4]
float zmm3[0x4]
uint32_t zmm4[0x4]
uint32_t zmm5[0x4]
float zmm12[0x4]

if (result != 0xf)
    float var_e8_1[0x4] = zmm1
    float var_258_2[0x4]
    uint64_t rdi_1
    
    if (i s<= 0)
        rdi_1 = 0
        zmm11 = zx.o(0)
        zmm14 = zx.o(0)
        zmm12 = zx.o(0)
        var_258_2 = zx.o(0)
        
        if (0 s< arg8)
        label_1400c4a5b:
            float var_268_2[0x4] = zmm11
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi_1.d), 0), data_142e11d00)
            zmm13 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm1)
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm13
            int64_t rsi_4 = sx.q(zmm2[0])
            void* rax_53 = arg4 + (rsi_4 << 2)
            zmm1 = *(arg4 + (rsi_4 << 2))
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            void* rsi_6 = arg4 + (rdi_2 << 2)
            float temp0_421[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rdi_2 << 2)))[0].q)
            int64_t rbx_5 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            void* rdi_4 = arg4 + (rbx_5 << 2)
            zmm3 = *(arg4 + (rbx_5 << 2))
            int64_t rbp_1 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbx_7 = arg4 + (rbp_1 << 2)
            float temp0_424[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + (rbp_1 << 2)))[0].q)
            zmm1 = temp0_421[0].q | temp0_424[0].q << 0x40
            zmm3 = data_142fc95e0 & zmm13
            float temp0_426[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_53), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_6))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_4), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_7))[0].q)
            zmm8 = temp0_426[0].q | zmm4[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm13
            zmm5 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_53), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_6))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_4), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_7))[0].q)
            zmm5 = zmm5[0].q | zmm4[0].q << 0x40
            uint32_t var_108_1[0x4] = zmm5
            float var_f8_1[0x4] = zx.o(0)
            zmm6 = (*arg3)[3]
            float temp0_435[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float var_1c8_5[0x4] = temp0_435
            var_1b8 = temp0_435
            float var_1a8_5[0x4] = temp0_435
            float var_198_3[0x4] = temp0_435
            zmm7 = *arg3
            zmm2 = (*arg3)[1]
            zmm4 = (*arg3)[2]
            float temp0_436[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_438[0x4] = _mm_mul_ps(zmm8, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm5)
            zmm5 = _mm_mul_ps(zmm5, temp0_436)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_442[0x4] = _mm_mul_ps(temp0_436, zmm1)
            float temp0_443[0x4] = _mm_mul_ps(zmm1, zmm4)
            float temp0_444[0x4] = _mm_mul_ps(zx.o(0), temp0_435)
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, zmm8))
            float temp0_447[0x4] = _mm_sub_ps(temp0_443, zmm7)
            float temp0_448[0x4] = _mm_sub_ps(temp0_438, temp0_442)
            float temp0_449[0x4] = _mm_sub_ps(temp0_444, temp0_444)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            float temp0_451[0x4] = _mm_add_ps(temp0_447, temp0_447)
            float temp0_452[0x4] = _mm_add_ps(temp0_448, temp0_448)
            float temp0_453[0x4] = _mm_add_ps(temp0_449, temp0_449)
            var_228 = zmm5
            float var_218_5[0x4] = temp0_451
            float var_208_5[0x4] = temp0_452
            float var_1f8_3[0x4] = temp0_453
            float temp0_454[0x4] = _mm_mul_ps(temp0_453, temp0_435)
            float temp0_455[0x4] = _mm_mul_ps(temp0_435, zmm5)
            float temp0_456[0x4] = _mm_mul_ps(temp0_435, temp0_451)
            float temp0_457[0x4] = _mm_mul_ps(temp0_435, temp0_452)
            float temp0_458[0x4] = __addps_xmmps_memps(temp0_455, zmm1)
            float temp0_459[0x4] = __addps_xmmps_memps(temp0_456, zmm8)
            float temp0_460[0x4] = __addps_xmmps_memps(temp0_457, var_108_1)
            float temp0_461[0x4] = __addps_xmmps_memps(temp0_454, var_f8_1)
            var_2a8 = temp0_458
            uint32_t var_288_1[0x4] = temp0_460
            float var_278_1[0x4] = temp0_461
            zmm4 = *arg3
            zmm2 = (*arg3)[1]
            zmm7 = (*arg3)[2]
            float temp0_462[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_464[0x4] = _mm_mul_ps(temp0_451, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_452)
            float temp0_466[0x4] = _mm_mul_ps(temp0_452, temp0_462)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_468[0x4] = _mm_mul_ps(temp0_462, zmm5)
            zmm5 = _mm_mul_ps(zmm5, zmm7)
            float temp0_471[0x4] = _mm_sub_ps(temp0_466, _mm_mul_ps(zmm7, temp0_451))
            zmm5 = _mm_sub_ps(zmm5, zmm4)
            float temp0_473[0x4] = _mm_sub_ps(temp0_464, temp0_468)
            float temp0_474[0x4] = _mm_add_ps(temp0_471, temp0_458)
            zmm5 = _mm_add_ps(zmm5, temp0_459)
            float temp0_476[0x4] = _mm_add_ps(temp0_473, temp0_460)
            zmm10 = arg3[1][0]
            zmm11 = (*arg3)[5]
            float temp0_478[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_474)
            zmm11 = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm5)
            zmm0 = (*arg3)[6]
            float temp0_482[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_476)
            zmm2 = *arg2
            zmm8 = (*arg2)[1]
            float temp0_483[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_sub_ps(temp0_478, temp0_483)
            float temp0_485[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_486[0x4] = _mm_sub_ps(zmm11, temp0_485)
            zmm9 = (*arg2)[2]
            float temp0_487[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm4 = _mm_sub_ps(temp0_482, temp0_487)
            float var_1c8_6[0x4] = zmm1
            var_1b8 = temp0_486
            float var_1e8_3[0x4] = zmm4
            uint32_t var_1a8_6[0x4] = zmm4
            zmm3 = *arg1
            zmm5 = (*arg1)[1]
            float temp0_489[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_490[0x4] = _mm_sub_ps(temp0_489, temp0_478)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_492[0x4] = _mm_sub_ps(zmm5, zmm11)
            zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_478, temp0_483, 6), zmm13)
            char temp0_496 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13))
            zmm4 = (*arg1)[2]
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_498[0x4] = _mm_sub_ps(zmm4, temp0_482)
            var_228 = temp0_490
            float var_218_6[0x4] = temp0_492
            float var_208_6[0x4] = temp0_498
            uint32_t var_248_3[0x4] = temp0_478
            float var_238_3[0x4] = zmm11
            zmm10 = _mm_cmpeq_ps(temp0_478, temp0_483, 2)
            
            if (temp0_496 != 0xf)
                zmm11 = _mm_cmpeq_ps(zmm11, temp0_485, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm13), zmm11)
                zmm6 = _mm_andnot_ps(zmm10, zmm13)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13)) != 0xf)
                float temp0_506[0x4] = _mm_cmpeq_ps(temp0_482, temp0_487, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm13), temp0_506)
                zmm6 = zmm10 ^ zmm13
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13)) != 0xf)
                zmm10 = _mm_and_ps(zmm10, zmm13)
                zmm0 = var_248_3
                zmm2 = _mm_cmpeq_ps(temp0_489, zmm0, 2)
                zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_489, zmm0, 6), zmm10)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm10)) != 0xf)
                    zmm5 = __cmpps_xmmps_memps_immb(zmm5, var_238_3, 2)
                    zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm10), zmm5)
                    zmm3 = zmm2 ^ zmm10
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm10)) != 0xf)
                    zmm4 = __cmpps_xmmps_memps_immb(zmm4, temp0_482, 2)
                    zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm10), zmm4)
                
                zmm10 = _mm_and_ps(zmm10, zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm13)) == 0)
                zmm0 = arg5
                zmm14 = zmm14
                zmm12 = zmm12
            else
                float temp0_528[0x4] = _mm_max_ps(temp0_490, zmm1)
                float temp0_529[0x4] = __maxps_xmmps_memps(temp0_492, temp0_486)
                float temp0_530[0x4] = __maxps_xmmps_memps(temp0_498, var_1e8_3)
                float temp0_531[0x4] = _mm_cmpeq_ps(temp0_529, temp0_528, 1)
                uint32_t temp0_532[0x4] = _mm_and_ps(zmm10, temp0_531)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_532, zmm13)) != 0)
                    float temp0_535[0x4] = _mm_cmpeq_ps(temp0_530, temp0_528, 5)
                    zmm11 = _mm_and_ps(
                        _mm_and_ps(_mm_cmpeq_ps(temp0_530, temp0_528, 1), temp0_532), temp0_528)
                    zmm2 = _mm_and_ps(temp0_535, temp0_532)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) != 0)
                        zmm11 = _mm_or_ps(zmm11, _mm_and_ps(zmm2, temp0_530))
                
                zmm0 = arg5
                zmm3 = _mm_andnot_ps(temp0_531, zmm10)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm13)) == 0)
                    zmm14 = zmm14
                    zmm12 = zmm12
                else
                    float temp0_677[0x4] = _mm_cmpeq_ps(temp0_530, temp0_529, 1)
                    uint32_t temp0_678[0x4] = _mm_and_ps(zmm3, temp0_677)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_678, zmm13)) != 0)
                        uint32_t temp0_681[0x4] = _mm_andnot_ps(temp0_678, zmm11)
                        zmm11 = _mm_or_ps(_mm_and_ps(temp0_529, temp0_678), temp0_681)
                    
                    zmm2 = _mm_andnot_ps(temp0_677, zmm3)
                    zmm12 = zmm12
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) != 0)
                        zmm3 = _mm_andnot_ps(zmm2, zmm11)
                        zmm11 = _mm_or_ps(_mm_and_ps(temp0_530, zmm2), zmm3)
                    
                    zmm14 = zmm14
            
            zmm2 = _mm_andnot_ps(zmm10, zmm13)
            
            if (_mm_movemask_ps(zmm2) != 0)
                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2) ^ zmm10
                int64_t rax_82 = 0
                zmm7 = data_142d3f780
                
                while (true)
                    float temp0_693[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                    uint32_t temp0_694[0x4] = _mm_and_ps(temp0_693, zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_694, zmm13)) != 0)
                        char temp0_697 = _mm_movemask_ps(temp0_694)
                        
                        if ((temp0_697 & 1) == 0)
                            if ((temp0_697 & 2) != 0)
                                goto label_1400c5654
                            
                            goto label_1400c556c
                        
                        *(&var_2a8 + rax_82) = zmm1[0]
                        
                        if ((temp0_697 & 2) != 0)
                        label_1400c5654:
                            *(&var_2a8[1] + rax_82) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            
                            if ((temp0_697 & 4) == 0)
                                goto label_1400c5575
                            
                            goto label_1400c5668
                        
                    label_1400c556c:
                        
                        if ((temp0_697 & 4) != 0)
                        label_1400c5668:
                            *(&var_2a8[2] + rax_82) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            if ((temp0_697 & 8) != 0)
                                *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        else
                        label_1400c5575:
                            
                            if ((temp0_697 & 8) != 0)
                                *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    
                    zmm3 = _mm_andnot_ps(temp0_693, zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm13)) != 0)
                        zmm4 = *(&var_228 + rax_82)
                        float temp0_702[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                        uint32_t temp0_703[0x4] = _mm_and_ps(zmm3, temp0_702)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_703, zmm13)) != 0)
                            zmm4 ^= zmm7
                            char temp0_706 = _mm_movemask_ps(temp0_703)
                            
                            if ((temp0_706 & 1) == 0)
                                if ((temp0_706 & 2) != 0)
                                    goto label_1400c5690
                                
                                goto label_1400c55d5
                            
                            *(&var_2a8 + rax_82) = zmm4[0]
                            
                            if ((temp0_706 & 2) != 0)
                            label_1400c5690:
                                *(&var_2a8[1] + rax_82) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                                
                                if ((temp0_706 & 4) == 0)
                                    goto label_1400c55de
                                
                                goto label_1400c56a4
                            
                        label_1400c55d5:
                            
                            if ((temp0_706 & 4) != 0)
                            label_1400c56a4:
                                *(&var_2a8[2] + rax_82) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                                
                                if ((temp0_706 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                            else
                            label_1400c55de:
                                
                                if ((temp0_706 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        
                        zmm1 = _mm_andnot_ps(temp0_702, zmm3)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm13)) != 0)
                            char temp0_711 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_711 & 1) == 0)
                                if ((temp0_711 & 2) != 0)
                                    goto label_1400c56c9
                                
                                goto label_1400c5614
                            
                            *(&var_2a8 + rax_82) = 0
                            
                            if ((temp0_711 & 2) != 0)
                            label_1400c56c9:
                                *(&var_2a8[1] + rax_82) = 0
                                
                                if ((temp0_711 & 4) == 0)
                                    goto label_1400c561d
                                
                                goto label_1400c56da
                            
                        label_1400c5614:
                            
                            if ((temp0_711 & 4) != 0)
                            label_1400c56da:
                                *(&var_2a8[2] + rax_82) = 0
                                
                                if ((temp0_711 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = 0
                            else
                            label_1400c561d:
                                
                                if ((temp0_711 & 8) != 0)
                                    *(&var_2a8[3] + rax_82) = 0
                    
                    if (rax_82 == 0x20)
                        break
                    
                    zmm1 = *(&var_1b8 + rax_82)
                    rax_82 += 0x10
                
                zmm1 = var_2a8
                zmm5 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm1, zmm1))
                float temp0_719[0x4] = _mm_add_ps(_mm_mul_ps(temp0_459, temp0_459), zmm5)
                zmm4 = _mm_add_ps(_mm_mul_ps(var_288_1, var_288_1), temp0_719)
                float temp0_722[0x4] = _mm_rsqrt_ps(zmm4)
                zmm4 = _mm_mul_ps(_mm_mul_ps(zmm4, temp0_722), temp0_722)
                float temp0_727[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm4), temp0_722), data_142d3f640)
                float temp0_728[0x4] = _mm_rcp_ps(temp0_727)
                float temp0_729[0x4] = _mm_mul_ps(temp0_727, temp0_728)
                zmm4 = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_729), temp0_728)
                zmm11 = _mm_or_ps(_mm_and_ps(zmm11, zmm10), _mm_and_ps(zmm4, zmm2))
            
            float temp0_736[0x4] = _mm_sub_ps(zmm11, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_736, data_142fc95d0, 1), zmm13)
            result = _mm_movemask_ps(zmm1)
            zmm5 = var_e8_1
            zmm8 = var_258_2
            
            if (result.b == 0)
                zmm11 = var_268_2
            else
                zmm4 = _mm_mul_ps(var_248_3, temp0_736)
                result = zx.d(result.b)
                zmm3 = zmm12
                char temp2_1 = result.b & 1
                
                if (temp2_1 != 0)
                    zmm3 = zmm12
                    zmm3[0] = zmm3[0] f+ zmm4[0]
                
                zmm7 = _mm_mul_ps(var_238_3, temp0_736)
                zmm2 = zmm14
                
                if (temp2_1 != 0)
                    zmm2 = zmm14
                    zmm2[0] = zmm2[0] f+ zmm7[0]
                    zmm6 = _mm_mul_ps(temp0_482, temp0_736)
                    zmm0 = var_268_2
                    
                    if (temp2_1 != 0)
                        goto label_1400c588f
                    
                    goto label_1400c57da
                
                zmm6 = _mm_mul_ps(temp0_482, temp0_736)
                zmm0 = var_268_2
                bool cond:33_1
                bool cond:34_1
                bool cond:39_1
                bool cond:40_1
                
                if (temp2_1 != 0)
                label_1400c588f:
                    zmm0 = var_268_2
                    zmm0[0] = zmm0[0] + zmm6[0]
                    zmm12 = _mm_add_ps(zmm12, zmm4)
                    char temp9_1 = result.b & 2
                    cond:33_1 = temp9_1 == 0
                    cond:34_1 = temp9_1 != 0
                    cond:39_1 = temp9_1 == 0
                    cond:40_1 = temp9_1 != 0
                    
                    if (temp9_1 != 0)
                        goto label_1400c57f2
                    
                    goto label_1400c58a3
                
            label_1400c57da:
                zmm12 = _mm_add_ps(zmm12, zmm4)
                char temp8_1 = result.b & 2
                cond:33_1 = temp8_1 == 0
                cond:34_1 = temp8_1 != 0
                cond:39_1 = temp8_1 == 0
                cond:40_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                label_1400c57f2:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm3, 1), zmm3, 0xe2)
                    zmm14 = _mm_add_ps(zmm14, zmm7)
                    
                    if (cond:34_1)
                        goto label_1400c58b9
                    
                    goto label_1400c57ff
                
            label_1400c58a3:
                zmm14 = _mm_add_ps(zmm14, zmm7)
                
                if (not(cond:33_1))
                label_1400c58b9:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm2, 1), zmm2, 0xe2)
                    zmm9 = _mm_add_ps(var_268_2, zmm6)
                    
                    if (cond:40_1)
                        goto label_1400c5815
                    
                    goto label_1400c58c6
                
            label_1400c57ff:
                zmm9 = _mm_add_ps(var_268_2, zmm6)
                bool cond:49_1
                bool cond:50_1
                bool cond:55_1
                bool cond:56_1
                
                if (not(cond:39_1))
                label_1400c5815:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm0, 1), zmm0, 0xe2)
                    char temp17_1 = result.b & 4
                    cond:49_1 = temp17_1 == 0
                    cond:50_1 = temp17_1 != 0
                    cond:55_1 = temp17_1 == 0
                    cond:56_1 = temp17_1 != 0
                    
                    if (temp17_1 != 0)
                        goto label_1400c58d6
                    
                    goto label_1400c5820
                
            label_1400c58c6:
                char temp16_1 = result.b & 4
                cond:49_1 = temp16_1 == 0
                cond:50_1 = temp16_1 != 0
                cond:55_1 = temp16_1 == 0
                cond:56_1 = temp16_1 != 0
                
                if (temp16_1 == 0)
                label_1400c5820:
                    
                    if (not(cond:49_1))
                    label_1400c582e:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm14, zmm2, 0x32), 0x84)
                        
                        if (cond:56_1)
                            goto label_1400c58ee
                        
                        goto label_1400c5838
                else
                label_1400c58d6:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x32), 0x84)
                    
                    if (cond:50_1)
                        goto label_1400c582e
                
                bool cond:65_1
                bool cond:66_1
                bool cond:69_1
                bool cond:70_1
                
                if (not(cond:55_1))
                label_1400c58ee:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x32), 0x84)
                    char temp25_1 = result.b & 8
                    cond:65_1 = temp25_1 == 0
                    cond:66_1 = temp25_1 != 0
                    cond:69_1 = temp25_1 == 0
                    cond:70_1 = temp25_1 != 0
                    
                    if (temp25_1 != 0)
                        goto label_1400c584a
                    
                    goto label_1400c58fa
                
            label_1400c5838:
                char temp24_1 = result.b & 8
                cond:65_1 = temp24_1 == 0
                cond:66_1 = temp24_1 != 0
                cond:69_1 = temp24_1 == 0
                cond:70_1 = temp24_1 != 0
                
                if (temp24_1 != 0)
                label_1400c584a:
                    zmm12 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x23), 0x24)
                    
                    if (cond:66_1)
                        goto label_1400c590e
                    
                    goto label_1400c5854
                
            label_1400c58fa:
                zmm12 = zmm3
                
                if (cond:65_1)
                label_1400c5854:
                    zmm14 = zmm2
                    
                    if (not(cond:69_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x23), 0x24)
                else
                label_1400c590e:
                    zmm14 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm14, zmm2, 0x23), 0x24)
                    
                    if (cond:70_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x23), 0x24)
                
                zmm11 = _mm_and_ps(_mm_add_ps(temp0_736, zmm8), zmm1)
                zmm1 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm8), zmm11)
                zmm11 = zmm0
                zmm8 = zmm1
        else
            zmm5 = var_e8_1
            zmm8 = var_258_2
    else
        zmm1 = (*arg3)[3]
        float temp0_206[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float var_248_2[0x4] = *arg3
        float var_238_2[0x4] = (*arg3)[1]
        float var_1d8_2[0x4] = (*arg3)[2]
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_207[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_208[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_209[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg1
        zmm2 = (*arg1)[1]
        float temp0_210[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_211[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg1)[2]
        float temp0_212[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_213[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        rdi_1 = 0
        
        do
            float var_268_1[0x4]
            __builtin_memset(&var_268_1, 0, 0x20)
            int64_t rax_29 = sx.q((rdi_1 << 2).d * 3)
            zmm1 = *(arg4 + rax_29)
            zmm0 = *(arg4 + rax_29 + 0x10)
            zmm2 = *(arg4 + rax_29 + 0x20)
            float temp0_219[0x4] = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm1, 0x4e), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
                zmm2, 0xc4)
            zmm5 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm0, 0x21), 0x2c)
            float temp0_222[0x4] = _mm_shuffle_ps(zmm1, zmm0, 5)
            float temp0_225[0x4] = _mm_shuffle_ps(temp0_222, 
                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(temp0_222, zmm0, 0xf8), 0x22), 0x28)
            var_228 = zmm5
            int128_t var_1f8_2 = zx.o(0)
            zmm3 = temp0_206
            float var_1c8_3[0x4] = zmm3
            var_1b8 = zmm3
            float var_1a8_3[0x4] = zmm3
            float temp0_226[0x4] = _mm_shuffle_ps(var_238_2, var_238_2, 0)
            float temp0_227[0x4] = _mm_mul_ps(temp0_226, temp0_219)
            float temp0_228[0x4] = _mm_shuffle_ps(var_1d8_2, var_1d8_2, 0)
            zmm7 = _mm_mul_ps(temp0_228, zmm5)
            float temp0_230[0x4] = _mm_shuffle_ps(var_248_2, var_248_2, 0)
            zmm4 = _mm_mul_ps(temp0_230, temp0_225)
            float temp0_233[0x4] = _mm_sub_ps(temp0_227, _mm_mul_ps(temp0_225, temp0_228))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(temp0_219, temp0_230))
            zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(zmm5, temp0_226))
            float temp0_238[0x4] = _mm_add_ps(temp0_233, temp0_233)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            zmm4 = _mm_add_ps(zmm4, zmm4)
            zmm5 = _mm_mul_ps(zmm3, zmm7)
            float temp0_242[0x4] = _mm_mul_ps(temp0_238, temp0_228)
            zmm1 = zmm7
            zmm7 = _mm_mul_ps(zmm7, temp0_228)
            float temp0_248[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm4, temp0_226), zmm7), 
                __addps_xmmps_memps(_mm_mul_ps(zmm3, temp0_238), var_228))
            zmm7 = _mm_mul_ps(zmm3, zmm4)
            zmm5 = __addps_xmmps_memps(zmm5, temp0_225)
            zmm7 = __addps_xmmps_memps(zmm7, temp0_219)
            float var_198_2[0x4] = zmm3
            float temp0_252[0x4] = _mm_mul_ps(zmm1, temp0_230)
            float temp0_255[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_242, _mm_mul_ps(zmm4, temp0_230)), zmm5)
            float temp0_258[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_252, _mm_mul_ps(temp0_238, temp0_226)), zmm7)
            zmm15 = arg3[1][0]
            zmm8 = (*arg3)[5]
            float temp0_260[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_248)
            float temp0_262[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_255)
            zmm10 = (*arg3)[6]
            float temp0_264[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_258)
            zmm4 = temp0_207
            zmm9 = _mm_sub_ps(temp0_260, zmm4)
            float temp0_266[0x4] = __subps_xmmps_memps(temp0_262, temp0_208)
            float temp0_267[0x4] = __subps_xmmps_memps(temp0_264, temp0_209)
            float var_1c8_4[0x4] = zmm9
            var_1b8 = temp0_266
            float var_1a8_4[0x4] = temp0_267
            float temp0_268[0x4] = _mm_sub_ps(temp0_210, temp0_260)
            zmm7 = _mm_sub_ps(temp0_211, temp0_262)
            char temp0_271 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_260, zmm4, 6))
            float temp0_272[0x4] = _mm_sub_ps(temp0_212, temp0_264)
            var_228 = temp0_268
            uint32_t var_218_4[0x4] = zmm7
            float var_208_4[0x4] = temp0_272
            float var_2d8_1[0x4]
            __builtin_memset(&var_2d8_1, 0, 0x20)
            
            if (temp0_271 != 0xf)
                float temp0_273[0x4] = _mm_cmpeq_ps(temp0_260, zmm4, 2)
                zmm4 = (*arg2)[1]
                zmm1 =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_262, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_273)
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                
                if (_mm_movemask_ps(zmm1 ^ zmm3) == 0xf)
                    goto label_1400c45c2
                
                zmm2 = (*arg2)[2]
                zmm12 = _mm_and_ps(_mm_cmpeq_ps(temp0_264, _mm_shuffle_ps(zmm2, zmm2, 0), 2), zmm1)
                
                if (_mm_movemask_ps(zmm12 ^ zmm3) != 0xf)
                    zmm2 = *arg1
                    float temp0_283[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_283, temp0_260, 6), zmm12)
                    char temp0_287 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm12))
                    zmm2 = _mm_cmpeq_ps(temp0_283, temp0_260, 2)
                    
                    if (temp0_287 != 0xf)
                        zmm1 = (*arg1)[1]
                        float temp0_290[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_262, 2)
                        zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm12), temp0_290)
                        zmm1 = _mm_andnot_ps(zmm2, zmm12)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm12)) != 0xf)
                        zmm1 = (*arg1)[2]
                        float temp0_297[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_264, 2)
                        zmm2 = _mm_and_ps(_mm_and_ps(zmm2, zmm12), temp0_297)
                    
                    zmm12 = _mm_and_ps(zmm12, zmm2)
                
                if (_mm_movemask_ps(zmm12) == 0)
                    goto label_1400c45d3
                
                goto label_1400c4510
            
            zmm1 = _mm_cmpeq_ps(temp0_260, zmm4, 2)
        label_1400c45c2:
            zmm12 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
            uint32_t var_2b8[0x4]
            float var_2c8_1[0x4]
            
            if (_mm_movemask_ps(zmm12) != 0)
            label_1400c4510:
                float temp0_302[0x4] = _mm_max_ps(temp0_268, zmm9)
                zmm7 = _mm_max_ps(zmm7, temp0_266)
                float temp0_304[0x4] = _mm_max_ps(temp0_272, temp0_267)
                float temp0_305[0x4] = _mm_cmpeq_ps(zmm7, temp0_302, 1)
                uint32_t temp0_306[0x4] = _mm_and_ps(zmm12, temp0_305)
                
                if (_mm_movemask_ps(temp0_306) == 0)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    zmm14 = var_2c8_1
                    zmm11 = var_268_1
                    zmm6 = data_142d3f780
                    zmm13 = var_2b8
                    zmm2 = _mm_andnot_ps(temp0_305, zmm12)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                    label_1400c462b:
                        float temp0_330[0x4] = _mm_cmpeq_ps(temp0_304, zmm7, 1)
                        uint32_t temp0_331[0x4] = _mm_and_ps(zmm2, temp0_330)
                        
                        if (_mm_movemask_ps(temp0_331) != 0)
                            uint32_t temp0_333[0x4] = _mm_andnot_ps(temp0_331, zmm13)
                            zmm13 = _mm_or_ps(_mm_and_ps(zmm7, temp0_331), temp0_333)
                        
                        zmm1 = _mm_andnot_ps(temp0_330, zmm2)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm2 = _mm_andnot_ps(zmm1, zmm13)
                            zmm13 = _mm_or_ps(_mm_and_ps(temp0_304, zmm1), zmm2)
                else
                    float temp0_308[0x4] = _mm_cmpeq_ps(temp0_304, temp0_302, 1)
                    uint32_t temp0_309[0x4] = _mm_and_ps(temp0_306, temp0_308)
                    uint32_t temp0_310 = _mm_movemask_ps(temp0_309)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    uint32_t temp0_317[0x4]
                    
                    if (temp0_310 == 0)
                        zmm14 = var_2c8_1
                        zmm11 = var_268_1
                        zmm6 = data_142d3f780
                        zmm13 = var_2b8
                        zmm1 = _mm_andnot_ps(temp0_308, temp0_306)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            temp0_317 = _mm_andnot_ps(zmm1, zmm13)
                            zmm13 = _mm_or_ps(_mm_and_ps(zmm1, temp0_304), temp0_317)
                    else
                        zmm6 = __andnps_xmmxud_memxud(temp0_309, var_2b8)
                        zmm13 = _mm_or_ps(_mm_and_ps(temp0_302, temp0_309), zmm6)
                        zmm14 = var_2c8_1
                        zmm11 = var_268_1
                        zmm6 = data_142d3f780
                        zmm1 = _mm_andnot_ps(temp0_308, temp0_306)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            temp0_317 = _mm_andnot_ps(zmm1, zmm13)
                            zmm13 = _mm_or_ps(_mm_and_ps(zmm1, temp0_304), temp0_317)
                    zmm2 = _mm_andnot_ps(temp0_305, zmm12)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                        goto label_1400c462b
            else
            label_1400c45d3:
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                zmm14 = var_2c8_1
                zmm11 = var_268_1
                zmm6 = data_142d3f780
                zmm13 = var_2b8
            zmm0 = zmm12 ^ zmm3
            
            if (_mm_movemask_ps(zmm0) != 0)
                int64_t rbx_3 = 0
                
                while (true)
                    float temp0_342[0x4] = _mm_cmpeq_ps(zx.o(0), zmm9, 1)
                    uint32_t temp0_344 = _mm_movemask_ps(_mm_and_ps(temp0_342, zmm0))
                    
                    if (temp0_344 != 0)
                        char rax_46 = temp0_344.b
                        
                        if ((rax_46 & 1) == 0)
                            if ((rax_46 & 2) != 0)
                                goto label_1400c4775
                            
                            goto label_1400c46b4
                        
                        *(&var_2a8 + rbx_3) = zmm9[0]
                        
                        if ((rax_46 & 2) != 0)
                        label_1400c4775:
                            *(&var_2a8[1] + rbx_3) = _mm_shuffle_epi32(zmm9, 0xe5)[0]
                            
                            if ((rax_46 & 4) == 0)
                                goto label_1400c46bc
                            
                            goto label_1400c4789
                        
                    label_1400c46b4:
                        
                        if ((rax_46 & 4) != 0)
                        label_1400c4789:
                            *(&var_2a8[2] + rbx_3) = _mm_shuffle_epi32(zmm9, 0x4e)[0]
                            
                            if ((rax_46 & 8) != 0)
                                *(&var_2a8[3] + rbx_3) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
                        else
                        label_1400c46bc:
                            
                            if ((rax_46 & 8) != 0)
                                *(&var_2a8[3] + rbx_3) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
                    
                    zmm2 = _mm_andnot_ps(temp0_342, zmm0)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                        zmm1 = *(&var_228 + rbx_3)
                        zmm4 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        uint32_t temp0_350 = _mm_movemask_ps(_mm_and_ps(zmm2, zmm4))
                        
                        if (temp0_350 != 0)
                            zmm1 ^= zmm6
                            char rax_49 = temp0_350.b
                            
                            if ((rax_49 & 1) == 0)
                                if ((rax_49 & 2) != 0)
                                    goto label_1400c47af
                                
                                goto label_1400c4707
                            
                            *(&var_2a8 + rbx_3) = zmm1[0]
                            
                            if ((rax_49 & 2) != 0)
                            label_1400c47af:
                                *(&var_2a8[1] + rbx_3) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                
                                if ((rax_49 & 4) == 0)
                                    goto label_1400c470f
                                
                                goto label_1400c47c2
                            
                        label_1400c4707:
                            
                            if ((rax_49 & 4) != 0)
                            label_1400c47c2:
                                *(&var_2a8[2] + rbx_3) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                                
                                if ((rax_49 & 8) != 0)
                                    *(&var_2a8[3] + rbx_3) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                            else
                            label_1400c470f:
                                
                                if ((rax_49 & 8) != 0)
                                    *(&var_2a8[3] + rbx_3) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        
                        uint32_t temp0_353 = _mm_movemask_ps(_mm_andnot_ps(zmm4, zmm2))
                        
                        if (temp0_353 != 0)
                            char rax_51 = temp0_353.b
                            
                            if ((rax_51 & 1) == 0)
                                if ((rax_51 & 2) != 0)
                                    goto label_1400c47e5
                                
                                goto label_1400c473a
                            
                            *(&var_2a8 + rbx_3) = 0
                            
                            if ((rax_51 & 2) != 0)
                            label_1400c47e5:
                                *(&var_2a8[1] + rbx_3) = 0
                                
                                if ((rax_51 & 4) == 0)
                                    goto label_1400c4742
                                
                                goto label_1400c47f5
                            
                        label_1400c473a:
                            
                            if ((rax_51 & 4) != 0)
                            label_1400c47f5:
                                *(&var_2a8[2] + rbx_3) = 0
                                
                                if ((rax_51 & 8) != 0)
                                    *(&var_2a8[3] + rbx_3) = 0
                            else
                            label_1400c4742:
                                
                                if ((rax_51 & 8) != 0)
                                    *(&var_2a8[3] + rbx_3) = 0
                    
                    if (rbx_3 == 0x20)
                        break
                    
                    zmm9 = *(&var_1b8 + rbx_3)
                    rbx_3 += 0x10
                
                zmm1 = var_2a8
                zmm4 = var_288
                float temp0_359[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, zmm1), data_142d8f750)
                float temp0_361[0x4] = _mm_add_ps(_mm_mul_ps(var_298, var_298), temp0_359)
                zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm4), temp0_361)
                float temp0_364[0x4] = _mm_rsqrt_ps(zmm4)
                zmm4 = _mm_mul_ps(_mm_mul_ps(zmm4, temp0_364), temp0_364)
                float temp0_369[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm4), temp0_364), data_142d3f640)
                float temp0_370[0x4] = _mm_rcp_ps(temp0_369)
                float temp0_371[0x4] = _mm_mul_ps(temp0_369, temp0_370)
                zmm4 = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_371), temp0_370)
                zmm13 = _mm_or_ps(_mm_and_ps(zmm13, zmm12), _mm_and_ps(zmm4, zmm0))
            
            zmm7 = __subps_xmmps_memps(zmm13, temp0_213)
            float temp0_378[0x4] = __cmpps_xmmps_memps_immb(zmm7, data_142fc95d0, 1)
            result = _mm_movemask_ps(temp0_378)
            zmm12 = var_2d8_1
            
            if (result.b != 0)
                float temp0_380[0x4] = _mm_mul_ps(temp0_260, zmm7)
                char rbx_4 = result.b
                zmm2 = zmm12
                char temp0_381 = rbx_4 & 1
                
                if (temp0_381 != 0)
                    zmm2 = zmm12
                    zmm2[0] = zmm2[0] + temp0_380[0]
                    zmm8 = _mm_mul_ps(temp0_262, zmm7)
                    zmm4 = zmm14
                    
                    if (temp0_381 != 0)
                        goto label_1400c497e
                    
                    goto label_1400c48c2
                
                zmm8 = _mm_mul_ps(temp0_262, zmm7)
                zmm4 = zmm14
                
                if (temp0_381 != 0)
                label_1400c497e:
                    zmm4 = zmm14
                    zmm4[0] = zmm4[0] f+ zmm8[0]
                    zmm10 = _mm_mul_ps(temp0_264, zmm7)
                    zmm5 = zmm11
                    
                    if (temp0_381 != 0)
                        goto label_1400c48d0
                    
                    goto label_1400c4995
                
            label_1400c48c2:
                zmm10 = _mm_mul_ps(temp0_264, zmm7)
                zmm5 = zmm11
                bool cond:25_1
                bool cond:26_1
                bool cond:31_1
                bool cond:32_1
                
                if (temp0_381 != 0)
                label_1400c48d0:
                    zmm5 = zmm11
                    zmm5[0] = zmm5[0] f+ zmm10[0]
                    zmm12 = _mm_add_ps(zmm12, temp0_380)
                    char temp4_1 = rbx_4 & 2
                    cond:25_1 = temp4_1 == 0
                    cond:26_1 = temp4_1 != 0
                    cond:31_1 = temp4_1 == 0
                    cond:32_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_1400c49ae
                    
                    goto label_1400c48e6
                
            label_1400c4995:
                zmm12 = _mm_add_ps(zmm12, temp0_380)
                char temp3_1 = rbx_4 & 2
                cond:25_1 = temp3_1 == 0
                cond:26_1 = temp3_1 != 0
                cond:31_1 = temp3_1 == 0
                cond:32_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                label_1400c49ae:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
                    zmm14 = _mm_add_ps(zmm14, zmm8)
                    
                    if (cond:26_1)
                        goto label_1400c48fc
                    
                    goto label_1400c49bb
                
            label_1400c48e6:
                zmm14 = _mm_add_ps(zmm14, zmm8)
                
                if (not(cond:25_1))
                label_1400c48fc:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm4, 1), zmm4, 0xe2)
                    zmm11 = _mm_add_ps(zmm11, zmm10)
                    
                    if (cond:32_1)
                        goto label_1400c49d1
                    
                    goto label_1400c4909
                
            label_1400c49bb:
                zmm11 = _mm_add_ps(zmm11, zmm10)
                bool cond:41_1
                bool cond:42_1
                bool cond:47_1
                bool cond:48_1
                
                if (not(cond:31_1))
                label_1400c49d1:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm5, 1), zmm5, 0xe2)
                    char temp11_1 = rbx_4 & 4
                    cond:41_1 = temp11_1 == 0
                    cond:42_1 = temp11_1 != 0
                    cond:47_1 = temp11_1 == 0
                    cond:48_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_1400c491a
                    
                    goto label_1400c49dd
                
            label_1400c4909:
                char temp10_1 = rbx_4 & 4
                cond:41_1 = temp10_1 == 0
                cond:42_1 = temp10_1 != 0
                cond:47_1 = temp10_1 == 0
                cond:48_1 = temp10_1 != 0
                
                if (temp10_1 == 0)
                label_1400c49dd:
                    
                    if (not(cond:41_1))
                    label_1400c49eb:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm14, zmm4, 0x32), 0x84)
                        
                        if (cond:48_1)
                            goto label_1400c4932
                        
                        goto label_1400c49f5
                else
                label_1400c491a:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x32), 0x84)
                    
                    if (cond:42_1)
                        goto label_1400c49eb
                
                bool cond:57_1
                bool cond:58_1
                bool cond:63_1
                bool cond:64_1
                
                if (not(cond:47_1))
                label_1400c4932:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x32), 0x84)
                    char temp19_1 = rbx_4 & 8
                    cond:57_1 = temp19_1 == 0
                    cond:58_1 = temp19_1 != 0
                    cond:63_1 = temp19_1 == 0
                    cond:64_1 = temp19_1 != 0
                    
                    if (temp19_1 != 0)
                        goto label_1400c4a08
                    
                    goto label_1400c493f
                
            label_1400c49f5:
                char temp18_1 = rbx_4 & 8
                cond:57_1 = temp18_1 == 0
                cond:58_1 = temp18_1 != 0
                cond:63_1 = temp18_1 == 0
                cond:64_1 = temp18_1 != 0
                
                if (temp18_1 != 0)
                label_1400c4a08:
                    zmm12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x23), 0x24)
                    
                    if (cond:58_1)
                        goto label_1400c4953
                    
                    goto label_1400c4a12
                
            label_1400c493f:
                zmm12 = zmm2
                
                if (cond:57_1)
                label_1400c4a12:
                    zmm14 = zmm4
                    
                    if (not(cond:63_1))
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x23), 0x24)
                else
                label_1400c4953:
                    zmm14 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm14, zmm4, 0x23), 0x24)
                    
                    if (cond:64_1)
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x23), 0x24)
                
                uint32_t temp0_411[0x4] = _mm_and_ps(_mm_add_ps(zmm7, var_258_2), temp0_378)
                zmm11 = zmm5
                var_258_2 = _mm_or_ps(_mm_andnot_ps(temp0_378, var_258_2), temp0_411)
            
            var_2b8 = zmm13
            rdi_1 = zx.q(rdi_1.d + 4)
        while (rdi_1.d s< i)
        
        if (rdi_1.d s< arg8)
            goto label_1400c4a5b
        
        zmm5 = var_e8_1
        zmm8 = var_258_2
    zmm5 = _mm_cmpeq_epi32(zmm5, zx.o(0))
    zmm0 = zmm5 & not.o(zmm12)
    float temp0_774[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
    float temp0_775[0x4] = _mm_shuffle_ps(temp0_774, temp0_774, 0xe5)
    temp0_775[0] = temp0_775[0] + temp0_774[0]
    zmm1 = zmm5 & not.o(zmm14)
    float temp0_777[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_778[0x4] = _mm_shuffle_ps(temp0_777, temp0_777, 0xe5)
    temp0_778[0] = temp0_778[0] + temp0_777[0]
    float temp0_779[0x4] = _mm_unpacklo_ps(temp0_775, temp0_778[0].q)
    zmm1 = zmm5 & not.o(zmm11)
    float temp0_781[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_782[0x4] = _mm_shuffle_ps(temp0_781, temp0_781, 0xe5)
    temp0_782[0] = temp0_782[0] + temp0_781[0]
    float temp0_783[0x4] = _mm_add_ps(zx.o(*arg7)[0].q | arg7[1].d[0].q << 0x40, 
        temp0_779[0].q | temp0_782[0].q << 0x40)
    *arg7 = temp0_783[0]
    float temp0_784[0x4] = _mm_shuffle_ps(temp0_783, temp0_783, 0xe5)
    temp0_783[0].q = temp0_783 u>> 0x40
    *(arg7 + 4) = temp0_784[0]
    arg7[1].d = temp0_783[0]
    zmm5 &= not.o(zmm8)
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm5, 0xee), zmm5)
else
    float var_258_1[0x4]
    uint64_t rdi
    
    if (i s<= 0)
        rdi = 0
        zmm13 = zx.o(0)
        zmm12 = zx.o(0)
        zmm10 = zx.o(0)
        var_258_1 = zx.o(0)
        
        if (0 s>= arg8)
            zmm3 = var_258_1
        else
        label_1400c4f48:
            float var_268_3[0x4] = zmm13
            float var_2b8_3[0x4] = zmm10
            float var_2c8_3[0x4] = zmm12
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi.d), 0), data_142e11d00)
            zmm13 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm1)
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm13
            int64_t rsi_7 = sx.q(zmm2[0])
            void* rax_66 = arg4 + (rsi_7 << 2)
            zmm1 = *(arg4 + (rsi_7 << 2))
            int64_t rdi_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            void* rsi_9 = arg4 + (rdi_5 << 2)
            float temp0_551[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rdi_5 << 2)))[0].q)
            int64_t rbx_8 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            void* rdi_7 = arg4 + (rbx_8 << 2)
            zmm3 = *(arg4 + (rbx_8 << 2))
            int64_t rbp_7 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbx_10 = arg4 + (rbp_7 << 2)
            float temp0_554[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + (rbp_7 << 2)))[0].q)
            zmm1 = temp0_551[0].q | temp0_554[0].q << 0x40
            zmm3 = data_142fc95e0 & zmm13
            float temp0_556[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_66), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_9))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_10))[0].q)
            zmm8 = temp0_556[0].q | zmm4[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm13
            zmm5 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_66), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_9))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_10))[0].q)
            zmm5 = zmm5[0].q | zmm4[0].q << 0x40
            uint32_t var_108_2[0x4] = zmm5
            float var_f8_2[0x4] = zx.o(0)
            zmm6 = (*arg3)[3]
            float temp0_565[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float var_1c8_7[0x4] = temp0_565
            var_1b8 = temp0_565
            float var_1a8_7[0x4] = temp0_565
            float var_198_4[0x4] = temp0_565
            zmm7 = *arg3
            zmm2 = (*arg3)[1]
            zmm4 = (*arg3)[2]
            float temp0_566[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_568[0x4] = _mm_mul_ps(zmm8, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm5)
            zmm5 = _mm_mul_ps(zmm5, temp0_566)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_572[0x4] = _mm_mul_ps(temp0_566, zmm1)
            float temp0_573[0x4] = _mm_mul_ps(zmm1, zmm4)
            float temp0_574[0x4] = _mm_mul_ps(zx.o(0), temp0_565)
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, zmm8))
            float temp0_577[0x4] = _mm_sub_ps(temp0_573, zmm7)
            float temp0_578[0x4] = _mm_sub_ps(temp0_568, temp0_572)
            float temp0_579[0x4] = _mm_sub_ps(temp0_574, temp0_574)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            float temp0_581[0x4] = _mm_add_ps(temp0_577, temp0_577)
            float temp0_582[0x4] = _mm_add_ps(temp0_578, temp0_578)
            float temp0_583[0x4] = _mm_add_ps(temp0_579, temp0_579)
            var_228 = zmm5
            float var_218_7[0x4] = temp0_581
            float var_208_7[0x4] = temp0_582
            float var_1f8_4[0x4] = temp0_583
            float temp0_584[0x4] = _mm_mul_ps(temp0_583, temp0_565)
            float temp0_585[0x4] = _mm_mul_ps(temp0_565, zmm5)
            float temp0_586[0x4] = _mm_mul_ps(temp0_565, temp0_581)
            float temp0_587[0x4] = _mm_mul_ps(temp0_565, temp0_582)
            float temp0_588[0x4] = __addps_xmmps_memps(temp0_585, zmm1)
            float temp0_589[0x4] = __addps_xmmps_memps(temp0_586, zmm8)
            float temp0_590[0x4] = __addps_xmmps_memps(temp0_587, var_108_2)
            float temp0_591[0x4] = __addps_xmmps_memps(temp0_584, var_f8_2)
            var_2a8 = temp0_588
            float var_278_2[0x4] = temp0_591
            zmm4 = *arg3
            zmm2 = (*arg3)[1]
            zmm7 = (*arg3)[2]
            float temp0_592[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_594[0x4] = _mm_mul_ps(temp0_581, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_582)
            float temp0_596[0x4] = _mm_mul_ps(temp0_582, temp0_592)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_598[0x4] = _mm_mul_ps(temp0_592, zmm5)
            zmm5 = _mm_mul_ps(zmm5, zmm7)
            float temp0_601[0x4] = _mm_sub_ps(temp0_596, _mm_mul_ps(zmm7, temp0_581))
            zmm5 = _mm_sub_ps(zmm5, zmm4)
            float temp0_603[0x4] = _mm_sub_ps(temp0_594, temp0_598)
            float temp0_604[0x4] = _mm_add_ps(temp0_601, temp0_588)
            zmm5 = _mm_add_ps(zmm5, temp0_589)
            float temp0_606[0x4] = _mm_add_ps(temp0_603, temp0_590)
            zmm9 = arg3[1][0]
            zmm11 = (*arg3)[5]
            float temp0_608[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_604)
            zmm11 = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm5)
            zmm10 = (*arg3)[6]
            float temp0_612[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_606)
            zmm5 = *arg2
            zmm8 = (*arg2)[1]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm1 = _mm_sub_ps(temp0_608, zmm5)
            float temp0_615[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_616[0x4] = _mm_sub_ps(zmm11, temp0_615)
            zmm7 = (*arg2)[2]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_618[0x4] = _mm_sub_ps(temp0_612, zmm7)
            float var_1c8_8[0x4] = zmm1
            var_1b8 = temp0_616
            float var_1a8_8[0x4] = temp0_618
            zmm2 = *arg1
            zmm12 = (*arg1)[1]
            float temp0_619[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_620[0x4] = _mm_sub_ps(temp0_619, temp0_608)
            float temp0_621[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_622[0x4] = _mm_sub_ps(temp0_621, zmm11)
            zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_608, zmm5, 6), zmm13)
            char temp0_626 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13))
            zmm3 = (*arg1)[2]
            float temp0_627[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_628[0x4] = _mm_sub_ps(temp0_627, temp0_612)
            var_228 = temp0_620
            float var_218_8[0x4] = temp0_622
            float var_208_8[0x4] = temp0_628
            float var_248_4[0x4] = zmm11
            zmm9 = _mm_cmpeq_ps(temp0_608, zmm5, 2)
            
            if (temp0_626 != 0xf)
                zmm11 = _mm_cmpeq_ps(zmm11, temp0_615, 2)
                zmm9 = _mm_and_ps(_mm_and_ps(zmm9, zmm13), zmm11)
                zmm6 = _mm_andnot_ps(zmm9, zmm13)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13)) != 0xf)
                zmm5 = _mm_cmpeq_ps(temp0_612, zmm7, 2)
                zmm9 = _mm_and_ps(_mm_and_ps(zmm9, zmm13), zmm5)
                zmm6 = zmm9 ^ zmm13
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm13)) == 0xf)
                zmm6 = temp0_622
            else
                zmm9 = _mm_and_ps(zmm9, zmm13)
                zmm4 = temp0_608
                zmm5 = _mm_cmpeq_ps(temp0_619, zmm4, 2)
                zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_619, zmm4, 6), zmm9)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm9)) != 0xf)
                    float temp0_647[0x4] = __cmpps_xmmps_memps_immb(temp0_621, var_248_4, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm9), temp0_647)
                    zmm2 = zmm5 ^ zmm9
                
                zmm6 = temp0_622
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm9)) != 0xf)
                    float temp0_652[0x4] = _mm_cmpeq_ps(temp0_627, temp0_612, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm9), temp0_652)
                
                zmm9 = _mm_and_ps(zmm9, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm9, zmm13)) == 0)
                zmm15 = temp0_612
                zmm0 = zx.o(arg5)
                zmm8 = zmm0
                zmm12 = var_2c8_3
                zmm10 = var_2b8_3
            else
                float temp0_658[0x4] = _mm_max_ps(temp0_620, zmm1)
                float temp0_659[0x4] = __maxps_xmmps_memps(zmm6, temp0_616)
                float temp0_660[0x4] = __maxps_xmmps_memps(temp0_628, temp0_618)
                float temp0_661[0x4] = _mm_cmpeq_ps(temp0_659, temp0_658, 1)
                uint32_t temp0_662[0x4] = _mm_and_ps(zmm9, temp0_661)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_662, zmm13)) != 0)
                    float temp0_665[0x4] = _mm_cmpeq_ps(temp0_660, temp0_658, 5)
                    zmm11 = _mm_and_ps(
                        _mm_and_ps(_mm_cmpeq_ps(temp0_660, temp0_658, 1), temp0_662), temp0_658)
                    zmm3 = _mm_and_ps(temp0_665, temp0_662)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm13)) != 0)
                        zmm11 = _mm_or_ps(zmm11, _mm_and_ps(zmm3, temp0_660))
                
                zmm0 = zx.o(arg5)
                zmm8 = zmm0
                zmm2 = _mm_andnot_ps(temp0_661, zmm9)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) == 0)
                    zmm15 = temp0_612
                    zmm12 = var_2c8_3
                    zmm10 = var_2b8_3
                else
                    float temp0_790[0x4] = _mm_cmpeq_ps(temp0_660, temp0_659, 1)
                    uint32_t temp0_791[0x4] = _mm_and_ps(zmm2, temp0_790)
                    zmm15 = temp0_612
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_791, zmm13)) != 0)
                        uint32_t temp0_794[0x4] = _mm_andnot_ps(temp0_791, zmm11)
                        zmm11 = _mm_or_ps(_mm_and_ps(temp0_659, temp0_791), temp0_794)
                    
                    zmm3 = _mm_andnot_ps(temp0_790, zmm2)
                    zmm12 = var_2c8_3
                    zmm10 = var_2b8_3
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm13)) != 0)
                        zmm2 = _mm_andnot_ps(zmm3, zmm11)
                        zmm11 = _mm_or_ps(_mm_and_ps(temp0_660, zmm3), zmm2)
            
            zmm5 = var_248_4
            
            if (_mm_movemask_ps(_mm_andnot_ps(zmm9, zmm13)) != 0)
                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm9
                int64_t rax_87 = 0
                zmm7 = data_142d3f780
                
                while (true)
                    float temp0_806[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                    zmm3 = _mm_and_ps(temp0_806, zmm0)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm13)) != 0)
                        char temp0_810 = _mm_movemask_ps(zmm3)
                        
                        if ((temp0_810 & 1) == 0)
                            if ((temp0_810 & 2) != 0)
                                goto label_1400c5bb4
                            
                            goto label_1400c5acc
                        
                        *(&var_2a8 + rax_87) = zmm1[0]
                        
                        if ((temp0_810 & 2) != 0)
                        label_1400c5bb4:
                            *(&var_2a8[1] + rax_87) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            
                            if ((temp0_810 & 4) == 0)
                                goto label_1400c5ad5
                            
                            goto label_1400c5bc8
                        
                    label_1400c5acc:
                        
                        if ((temp0_810 & 4) != 0)
                        label_1400c5bc8:
                            *(&var_2a8[2] + rax_87) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            if ((temp0_810 & 8) != 0)
                                *(&var_2a8[3] + rax_87) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        else
                        label_1400c5ad5:
                            
                            if ((temp0_810 & 8) != 0)
                                *(&var_2a8[3] + rax_87) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    
                    zmm2 = _mm_andnot_ps(temp0_806, zmm0)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm13)) != 0)
                        zmm3 = *(&var_228 + rax_87)
                        float temp0_815[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        uint32_t temp0_816[0x4] = _mm_and_ps(zmm2, temp0_815)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_816, zmm13)) != 0)
                            zmm3 ^= zmm7
                            char temp0_819 = _mm_movemask_ps(temp0_816)
                            
                            if ((temp0_819 & 1) == 0)
                                if ((temp0_819 & 2) != 0)
                                    goto label_1400c5bf0
                                
                                goto label_1400c5b35
                            
                            *(&var_2a8 + rax_87) = zmm3[0]
                            
                            if ((temp0_819 & 2) != 0)
                            label_1400c5bf0:
                                *(&var_2a8[1] + rax_87) = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                                
                                if ((temp0_819 & 4) == 0)
                                    goto label_1400c5b3e
                                
                                goto label_1400c5c04
                            
                        label_1400c5b35:
                            
                            if ((temp0_819 & 4) != 0)
                            label_1400c5c04:
                                *(&var_2a8[2] + rax_87) = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                
                                if ((temp0_819 & 8) != 0)
                                    *(&var_2a8[3] + rax_87) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                            else
                            label_1400c5b3e:
                                
                                if ((temp0_819 & 8) != 0)
                                    *(&var_2a8[3] + rax_87) = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        
                        zmm1 = _mm_andnot_ps(temp0_815, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm13)) != 0)
                            char temp0_824 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_824 & 1) == 0)
                                if ((temp0_824 & 2) != 0)
                                    goto label_1400c5c29
                                
                                goto label_1400c5b74
                            
                            *(&var_2a8 + rax_87) = 0
                            
                            if ((temp0_824 & 2) != 0)
                            label_1400c5c29:
                                *(&var_2a8[1] + rax_87) = 0
                                
                                if ((temp0_824 & 4) == 0)
                                    goto label_1400c5b7d
                                
                                goto label_1400c5c3a
                            
                        label_1400c5b74:
                            
                            if ((temp0_824 & 4) != 0)
                            label_1400c5c3a:
                                *(&var_2a8[2] + rax_87) = 0
                                
                                if ((temp0_824 & 8) != 0)
                                    *(&var_2a8[3] + rax_87) = 0
                            else
                            label_1400c5b7d:
                                
                                if ((temp0_824 & 8) != 0)
                                    *(&var_2a8[3] + rax_87) = 0
                    
                    if (rax_87 == 0x20)
                        break
                    
                    zmm1 = *(&var_1b8 + rax_87)
                    rax_87 += 0x10
                
                zmm1 = var_2a8
                zmm4 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm1, zmm1))
                float temp0_832[0x4] = _mm_add_ps(_mm_mul_ps(temp0_589, temp0_589), zmm4)
                float temp0_834[0x4] = _mm_add_ps(_mm_mul_ps(temp0_590, temp0_590), temp0_832)
                float temp0_835[0x4] = _mm_rsqrt_ps(temp0_834)
                float temp0_837[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_834, temp0_835), temp0_835)
                float temp0_840[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_837), temp0_835), data_142d3f640)
                float temp0_841[0x4] = _mm_rcp_ps(temp0_840)
                float temp0_842[0x4] = _mm_mul_ps(temp0_840, temp0_841)
                float temp0_844[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_842), temp0_841)
                zmm11 = _mm_or_ps(_mm_and_ps(zmm11, zmm9), _mm_and_ps(temp0_844, zmm0))
            
            float temp0_849[0x4] = _mm_sub_ps(zmm11, _mm_shuffle_ps(zmm8, zmm8, 0))
            zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_849, data_142fc95d0, 1), zmm13)
            result = _mm_movemask_ps(zmm1)
            zmm13 = var_268_3
            
            if (result.b == 0)
                zmm3 = var_258_1
            else
                zmm4 = _mm_mul_ps(temp0_608, temp0_849)
                result = zx.d(result.b)
                zmm3 = zmm10
                char temp5_1 = result.b & 1
                
                if (temp5_1 != 0)
                    zmm3 = zmm10
                    zmm3[0] = zmm3[0] f+ zmm4[0]
                    zmm5 = _mm_mul_ps(zmm5, temp0_849)
                    zmm2 = zmm12
                    
                    if (temp5_1 != 0)
                        goto label_1400c5dc6
                    
                    goto label_1400c5d06
                
                zmm5 = _mm_mul_ps(zmm5, temp0_849)
                zmm2 = zmm12
                
                if (temp5_1 != 0)
                label_1400c5dc6:
                    zmm2 = zmm12
                    zmm2[0] = zmm2[0] f+ zmm5[0]
                    zmm15 = _mm_mul_ps(zmm15, temp0_849)
                    zmm0 = zmm13
                    
                    if (temp5_1 != 0)
                        goto label_1400c5d14
                    
                    goto label_1400c5ddc
                
            label_1400c5d06:
                zmm15 = _mm_mul_ps(zmm15, temp0_849)
                zmm0 = zmm13
                bool cond:35_1
                bool cond:36_1
                bool cond:43_1
                bool cond:44_1
                
                if (temp5_1 != 0)
                label_1400c5d14:
                    zmm0 = zmm13
                    zmm0[0] = zmm0[0] + zmm15[0]
                    zmm10 = _mm_add_ps(zmm10, zmm4)
                    char temp13_1 = result.b & 2
                    cond:35_1 = temp13_1 == 0
                    cond:36_1 = temp13_1 != 0
                    cond:43_1 = temp13_1 == 0
                    cond:44_1 = temp13_1 != 0
                    
                    if (temp13_1 != 0)
                        goto label_1400c5df4
                    
                    goto label_1400c5d29
                
            label_1400c5ddc:
                zmm10 = _mm_add_ps(zmm10, zmm4)
                char temp12_1 = result.b & 2
                cond:35_1 = temp12_1 == 0
                cond:36_1 = temp12_1 != 0
                cond:43_1 = temp12_1 == 0
                cond:44_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                label_1400c5df4:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 1), zmm3, 0xe2)
                    zmm6 = var_258_1
                    zmm12 = _mm_add_ps(zmm12, zmm5)
                    
                    if (cond:36_1)
                        goto label_1400c5d47
                    
                    goto label_1400c5e09
                
            label_1400c5d29:
                zmm6 = var_258_1
                zmm12 = _mm_add_ps(zmm12, zmm5)
                
                if (not(cond:35_1))
                label_1400c5d47:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
                    zmm13 = _mm_add_ps(zmm13, zmm15)
                    
                    if (cond:44_1)
                        goto label_1400c5e1f
                    
                    goto label_1400c5d54
                
            label_1400c5e09:
                zmm13 = _mm_add_ps(zmm13, zmm15)
                bool cond:51_1
                bool cond:52_1
                bool cond:59_1
                bool cond:60_1
                
                if (not(cond:43_1))
                label_1400c5e1f:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm0, 1), zmm0, 0xe2)
                    char temp21_1 = result.b & 4
                    cond:51_1 = temp21_1 == 0
                    cond:52_1 = temp21_1 != 0
                    cond:59_1 = temp21_1 == 0
                    cond:60_1 = temp21_1 != 0
                    
                    if (temp21_1 != 0)
                        goto label_1400c5d64
                    
                    goto label_1400c5e2a
                
            label_1400c5d54:
                char temp20_1 = result.b & 4
                cond:51_1 = temp20_1 == 0
                cond:52_1 = temp20_1 != 0
                cond:59_1 = temp20_1 == 0
                cond:60_1 = temp20_1 != 0
                
                if (temp20_1 == 0)
                label_1400c5e2a:
                    
                    if (not(cond:51_1))
                    label_1400c5e38:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x32), 0x84)
                        
                        if (cond:60_1)
                            goto label_1400c5d7c
                        
                        goto label_1400c5e42
                else
                label_1400c5d64:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x32), 0x84)
                    
                    if (cond:52_1)
                        goto label_1400c5e38
                
                bool cond:67_1
                bool cond:68_1
                bool cond:71_1
                bool cond:72_1
                
                if (not(cond:59_1))
                label_1400c5d7c:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x32), 0x84)
                    char temp27_1 = result.b & 8
                    cond:67_1 = temp27_1 == 0
                    cond:68_1 = temp27_1 != 0
                    cond:71_1 = temp27_1 == 0
                    cond:72_1 = temp27_1 != 0
                    
                    if (temp27_1 != 0)
                        goto label_1400c5e54
                    
                    goto label_1400c5d88
                
            label_1400c5e42:
                char temp26_1 = result.b & 8
                cond:67_1 = temp26_1 == 0
                cond:68_1 = temp26_1 != 0
                cond:71_1 = temp26_1 == 0
                cond:72_1 = temp26_1 != 0
                
                if (temp26_1 != 0)
                label_1400c5e54:
                    zmm10 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x23), 0x24)
                    
                    if (cond:68_1)
                        goto label_1400c5d9c
                    
                    goto label_1400c5e5e
                
            label_1400c5d88:
                zmm10 = zmm3
                
                if (cond:67_1)
                label_1400c5e5e:
                    zmm12 = zmm2
                    
                    if (not(cond:71_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x23), 0x24)
                else
                label_1400c5d9c:
                    zmm12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x23), 0x24)
                    
                    if (cond:72_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm13, zmm0, 0x23), 0x24)
                
                zmm11 = _mm_and_ps(_mm_add_ps(temp0_849, zmm6), zmm1)
                zmm13 = zmm0
                zmm3 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm6), zmm11)
    else
        zmm9 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float var_248_1[0x4] = *arg3
        float var_238_1[0x4] = (*arg3)[1]
        float var_1d8_1[0x4] = (*arg3)[2]
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
        rdi = 0
        
        do
            float var_268[0x4]
            __builtin_memset(&var_268, 0, 0x20)
            float var_2c8[0x4]
            __builtin_memset(&var_2c8, 0, 0x20)
            int64_t rax_3 = sx.q((rdi << 2).d * 3)
            zmm7 = *(arg4 + rax_3)
            zmm0 = *(arg4 + rax_3 + 0x10)
            zmm1 = *(arg4 + rax_3 + 0x20)
            zmm5 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0x4e), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
                zmm1, 0xc4)
            zmm4 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            zmm7 = _mm_shuffle_ps(zmm7, zmm0, 5)
            zmm7 = _mm_shuffle_ps(zmm7, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm7, zmm0, 0xf8), 0x22), 0x28)
            var_228 = zmm4
            int128_t var_1f8_1 = zx.o(0)
            float var_1c8_1[0x4] = temp0_1
            var_1b8 = temp0_1
            float var_1a8_1[0x4] = temp0_1
            float temp0_19[0x4] = _mm_shuffle_ps(var_238_1, var_238_1, 0)
            float temp0_20[0x4] = _mm_mul_ps(temp0_19, zmm5)
            float temp0_21[0x4] = _mm_shuffle_ps(var_1d8_1, var_1d8_1, 0)
            float temp0_22[0x4] = _mm_mul_ps(temp0_21, zmm4)
            float temp0_23[0x4] = _mm_shuffle_ps(var_248_1, var_248_1, 0)
            float temp0_24[0x4] = _mm_mul_ps(temp0_23, zmm7)
            float temp0_26[0x4] = _mm_sub_ps(temp0_20, _mm_mul_ps(zmm7, temp0_21))
            float temp0_28[0x4] = _mm_sub_ps(temp0_22, _mm_mul_ps(zmm5, temp0_23))
            float temp0_30[0x4] = _mm_sub_ps(temp0_24, _mm_mul_ps(zmm4, temp0_19))
            float temp0_31[0x4] = _mm_add_ps(temp0_26, temp0_26)
            float temp0_32[0x4] = _mm_add_ps(temp0_28, temp0_28)
            float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_30)
            zmm4 = _mm_mul_ps(temp0_1, temp0_32)
            float temp0_35[0x4] = _mm_mul_ps(temp0_31, temp0_21)
            float temp0_36[0x4] = _mm_mul_ps(temp0_32, temp0_21)
            float temp0_41[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_33, temp0_19), temp0_36), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_31), var_228))
            float temp0_42[0x4] = _mm_mul_ps(temp0_1, temp0_33)
            zmm4 = __addps_xmmps_memps(zmm4, zmm7)
            float temp0_44[0x4] = __addps_xmmps_memps(temp0_42, zmm5)
            float var_198_1[0x4] = temp0_1
            zmm5 = _mm_mul_ps(temp0_32, temp0_23)
            float temp0_48[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_35, _mm_mul_ps(temp0_33, temp0_23)), zmm4)
            zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, _mm_mul_ps(temp0_31, temp0_19)), temp0_44)
            zmm14 = arg3[1][0]
            zmm7 = (*arg3)[5]
            float temp0_53[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_41)
            zmm7 = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_48)
            zmm8 = (*arg3)[6]
            float temp0_57[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm5)
            zmm15 = _mm_sub_ps(temp0_53, temp0_2)
            float temp0_59[0x4] = __subps_xmmps_memps(zmm7, temp0_3)
            float temp0_60[0x4] = __subps_xmmps_memps(temp0_57, temp0_4)
            float var_1c8_2[0x4] = zmm15
            var_1b8 = temp0_59
            float var_1a8_2[0x4] = temp0_60
            float temp0_61[0x4] = _mm_sub_ps(temp0_5, temp0_53)
            float temp0_62[0x4] = _mm_sub_ps(temp0_6, zmm7)
            char temp0_64 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_53, temp0_2, 6))
            float temp0_65[0x4] = _mm_sub_ps(temp0_7, temp0_57)
            var_228 = temp0_61
            float var_218_2[0x4] = temp0_62
            float var_208_2[0x4] = temp0_65
            
            if (temp0_64 != 0xf)
                float temp0_66[0x4] = _mm_cmpeq_ps(temp0_53, temp0_2, 2)
                zmm4 = (*arg2)[1]
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm7, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_66)
                zmm2 = _mm_cmpeq_epi32(temp0_2, temp0_2)
                
                if (_mm_movemask_ps(zmm1 ^ zmm2) == 0xf)
                    goto label_1400c3c92
                
                zmm3 = (*arg2)[2]
                zmm11 = _mm_and_ps(_mm_cmpeq_ps(temp0_57, _mm_shuffle_ps(zmm3, zmm3, 0), 2), zmm1)
                
                if (_mm_movemask_ps(zmm11 ^ zmm2) != 0xf)
                    zmm1 = *arg1
                    float temp0_76[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                    zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_76, temp0_53, 6), zmm11)
                    char temp0_80 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm11))
                    zmm1 = _mm_cmpeq_ps(temp0_76, temp0_53, 2)
                    
                    if (temp0_80 != 0xf)
                        zmm3 = (*arg1)[1]
                        float temp0_83[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm7, 2)
                        zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm11), temp0_83)
                        zmm3 = _mm_andnot_ps(zmm1, zmm11)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm11)) != 0xf)
                        zmm3 = (*arg1)[2]
                        float temp0_90[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_57, 2)
                        zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm11), temp0_90)
                    
                    zmm11 = _mm_and_ps(zmm11, zmm1)
                
                if (_mm_movemask_ps(zmm11) == 0)
                    goto label_1400c3ca3
                
                goto label_1400c3beb
            
            zmm1 = _mm_cmpeq_ps(temp0_53, temp0_2, 2)
        label_1400c3c92:
            zmm11 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
            uint32_t var_2d8[0x4]
            float var_2b8_1[0x4]
            
            if (_mm_movemask_ps(zmm11) != 0)
            label_1400c3beb:
                float temp0_95[0x4] = _mm_max_ps(temp0_61, zmm15)
                float temp0_96[0x4] = _mm_max_ps(temp0_62, temp0_59)
                float temp0_97[0x4] = _mm_max_ps(temp0_65, temp0_60)
                float temp0_98[0x4] = _mm_cmpeq_ps(temp0_96, temp0_95, 1)
                uint32_t temp0_99[0x4] = _mm_and_ps(zmm11, temp0_98)
                
                if (_mm_movemask_ps(temp0_99) == 0)
                    zmm12 = var_2c8
                    zmm10 = var_2b8_1
                    zmm13 = var_268
                    zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                    zmm1 = _mm_andnot_ps(temp0_98, zmm11)
                    
                    if (_mm_movemask_ps(zmm1) == 0)
                        zmm6 = var_2d8
                    else
                    label_1400c3ce4:
                        float temp0_123[0x4] = _mm_cmpeq_ps(temp0_97, temp0_96, 1)
                        uint32_t temp0_124[0x4] = _mm_and_ps(zmm1, temp0_123)
                        
                        if (_mm_movemask_ps(temp0_124) != 0)
                            zmm2 = __andnps_xmmxud_memxud(temp0_124, var_2d8)
                            var_2d8 = _mm_or_ps(_mm_and_ps(temp0_96, temp0_124), zmm2)
                        
                        zmm3 = _mm_andnot_ps(temp0_123, zmm1)
                        
                        if (_mm_movemask_ps(zmm3) == 0)
                            zmm6 = var_2d8
                        else
                            zmm0 = __andnps_xmmxud_memxud(zmm3, var_2d8)
                            zmm6 = _mm_or_ps(_mm_and_ps(temp0_97, zmm3), zmm0)
                else
                    float temp0_101[0x4] = _mm_cmpeq_ps(temp0_97, temp0_95, 1)
                    uint32_t temp0_102[0x4] = _mm_and_ps(temp0_99, temp0_101)
                    
                    if (_mm_movemask_ps(temp0_102) != 0)
                        zmm2 = __andnps_xmmxud_memxud(temp0_102, var_2d8)
                        var_2d8 = _mm_or_ps(_mm_and_ps(temp0_95, temp0_102), zmm2)
                    
                    zmm12 = var_2c8
                    zmm10 = var_2b8_1
                    zmm13 = var_268
                    zmm5 = _mm_cmpeq_epi32(temp0_102, temp0_102)
                    zmm3 = _mm_andnot_ps(temp0_101, temp0_99)
                    
                    if (_mm_movemask_ps(zmm3) != 0)
                        zmm2 = __andnps_xmmxud_memxud(zmm3, var_2d8)
                        var_2d8 = _mm_or_ps(_mm_and_ps(zmm3, temp0_97), zmm2)
                    
                    zmm1 = _mm_andnot_ps(temp0_98, zmm11)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_1400c3ce4
                    
                    zmm6 = var_2d8
            else
            label_1400c3ca3:
                zmm12 = var_2c8
                zmm10 = var_2b8_1
                zmm13 = var_268
                zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                zmm6 = var_2d8
            zmm0 = zmm11 ^ zmm5
            
            if (_mm_movemask_ps(zmm0) != 0)
                int64_t rbx_1 = 0
                zmm5 = data_142d3f780
                
                while (true)
                    float temp0_135[0x4] = _mm_cmpeq_ps(zx.o(0), zmm15, 1)
                    uint32_t temp0_137 = _mm_movemask_ps(_mm_and_ps(temp0_135, zmm0))
                    
                    if (temp0_137 != 0)
                        char rax_20 = temp0_137.b
                        
                        if ((rax_20 & 1) == 0)
                            if ((rax_20 & 2) != 0)
                                goto label_1400c3e45
                            
                            goto label_1400c3d84
                        
                        *(&var_2a8 + rbx_1) = zmm15[0]
                        
                        if ((rax_20 & 2) != 0)
                        label_1400c3e45:
                            *(&var_2a8[1] + rbx_1) = _mm_shuffle_epi32(zmm15, 0xe5)[0]
                            
                            if ((rax_20 & 4) == 0)
                                goto label_1400c3d8c
                            
                            goto label_1400c3e59
                        
                    label_1400c3d84:
                        
                        if ((rax_20 & 4) != 0)
                        label_1400c3e59:
                            *(&var_2a8[2] + rbx_1) = _mm_shuffle_epi32(zmm15, 0x4e)[0]
                            
                            if ((rax_20 & 8) != 0)
                                *(&var_2a8[3] + rbx_1) = _mm_shuffle_epi32(zmm15, 0xe7)[0]
                        else
                        label_1400c3d8c:
                            
                            if ((rax_20 & 8) != 0)
                                *(&var_2a8[3] + rbx_1) = _mm_shuffle_epi32(zmm15, 0xe7)[0]
                    
                    zmm1 = _mm_andnot_ps(temp0_135, zmm0)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm4 = *(&var_228 + rbx_1)
                        float temp0_141[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                        uint32_t temp0_143 = _mm_movemask_ps(_mm_and_ps(zmm1, temp0_141))
                        
                        if (temp0_143 != 0)
                            zmm4 ^= zmm5
                            char rax_23 = temp0_143.b
                            
                            if ((rax_23 & 1) == 0)
                                if ((rax_23 & 2) != 0)
                                    goto label_1400c3e7f
                                
                                goto label_1400c3dd7
                            
                            *(&var_2a8 + rbx_1) = zmm4[0]
                            
                            if ((rax_23 & 2) != 0)
                            label_1400c3e7f:
                                *(&var_2a8[1] + rbx_1) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                                
                                if ((rax_23 & 4) == 0)
                                    goto label_1400c3ddf
                                
                                goto label_1400c3e92
                            
                        label_1400c3dd7:
                            
                            if ((rax_23 & 4) != 0)
                            label_1400c3e92:
                                *(&var_2a8[2] + rbx_1) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                                
                                if ((rax_23 & 8) != 0)
                                    *(&var_2a8[3] + rbx_1) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                            else
                            label_1400c3ddf:
                                
                                if ((rax_23 & 8) != 0)
                                    *(&var_2a8[3] + rbx_1) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        
                        uint32_t temp0_146 = _mm_movemask_ps(_mm_andnot_ps(temp0_141, zmm1))
                        
                        if (temp0_146 != 0)
                            char rax_25 = temp0_146.b
                            
                            if ((rax_25 & 1) == 0)
                                if ((rax_25 & 2) != 0)
                                    goto label_1400c3eb5
                                
                                goto label_1400c3e0a
                            
                            *(&var_2a8 + rbx_1) = 0
                            
                            if ((rax_25 & 2) != 0)
                            label_1400c3eb5:
                                *(&var_2a8[1] + rbx_1) = 0
                                
                                if ((rax_25 & 4) == 0)
                                    goto label_1400c3e12
                                
                                goto label_1400c3ec5
                            
                        label_1400c3e0a:
                            
                            if ((rax_25 & 4) != 0)
                            label_1400c3ec5:
                                *(&var_2a8[2] + rbx_1) = 0
                                
                                if ((rax_25 & 8) != 0)
                                    *(&var_2a8[3] + rbx_1) = 0
                            else
                            label_1400c3e12:
                                
                                if ((rax_25 & 8) != 0)
                                    *(&var_2a8[3] + rbx_1) = 0
                    
                    if (rbx_1 == 0x20)
                        break
                    
                    zmm15 = *(&var_1b8 + rbx_1)
                    rbx_1 += 0x10
                
                zmm1 = var_2a8
                float temp0_152[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, zmm1), data_142d8f750)
                float temp0_154[0x4] = _mm_add_ps(_mm_mul_ps(var_298, var_298), temp0_152)
                float temp0_156[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), temp0_154)
                float temp0_157[0x4] = _mm_rsqrt_ps(temp0_156)
                float temp0_159[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_156, temp0_157), temp0_157)
                float temp0_162[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_159), temp0_157), data_142d3f640)
                float temp0_163[0x4] = _mm_rcp_ps(temp0_162)
                float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_163)
                float temp0_166[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_164), temp0_163)
                zmm6 = _mm_or_ps(_mm_and_ps(zmm6, zmm11), _mm_and_ps(temp0_166, zmm0))
            
            var_2d8 = zmm6
            float temp0_170[0x4] = __subps_xmmps_memps(zmm6, temp0_8)
            float temp0_171[0x4] = __cmpps_xmmps_memps_immb(temp0_170, data_142fc95d0, 1)
            result = _mm_movemask_ps(temp0_171)
            
            if (result.b != 0)
                float temp0_173[0x4] = _mm_mul_ps(temp0_53, temp0_170)
                char rbx_2 = result.b
                zmm1 = zmm10
                char temp1_1 = rbx_2 & 1
                
                if (temp1_1 != 0)
                    zmm1 = zmm10
                    zmm1[0] = zmm1[0] + temp0_173[0]
                    zmm7 = _mm_mul_ps(zmm7, temp0_170)
                    zmm3 = zmm12
                    
                    if (temp1_1 != 0)
                        goto label_1400c403d
                    
                    goto label_1400c3f8b
                
                zmm7 = _mm_mul_ps(zmm7, temp0_170)
                zmm3 = zmm12
                
                if (temp1_1 != 0)
                label_1400c403d:
                    zmm3 = zmm12
                    zmm3[0] = zmm3[0] f+ zmm7[0]
                    zmm8 = _mm_mul_ps(temp0_57, temp0_170)
                    zmm4 = zmm13
                    
                    if (temp1_1 != 0)
                        goto label_1400c3f99
                    
                    goto label_1400c4053
                
            label_1400c3f8b:
                zmm8 = _mm_mul_ps(temp0_57, temp0_170)
                zmm4 = zmm13
                bool cond:21_1
                bool cond:22_1
                bool cond:29_1
                bool cond:30_1
                
                if (temp1_1 != 0)
                label_1400c3f99:
                    zmm4 = zmm13
                    zmm4[0] = zmm4[0] f+ zmm8[0]
                    zmm10 = _mm_add_ps(zmm10, temp0_173)
                    char temp7_1 = rbx_2 & 2
                    cond:21_1 = temp7_1 == 0
                    cond:22_1 = temp7_1 != 0
                    cond:29_1 = temp7_1 == 0
                    cond:30_1 = temp7_1 != 0
                    
                    if (temp7_1 != 0)
                        goto label_1400c406c
                    
                    goto label_1400c3faf
                
            label_1400c4053:
                zmm10 = _mm_add_ps(zmm10, temp0_173)
                char temp6_1 = rbx_2 & 2
                cond:21_1 = temp6_1 == 0
                cond:22_1 = temp6_1 != 0
                cond:29_1 = temp6_1 == 0
                cond:30_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                label_1400c406c:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 1), zmm1, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm7)
                    
                    if (cond:22_1)
                        goto label_1400c3fc5
                    
                    goto label_1400c4079
                
            label_1400c3faf:
                zmm12 = _mm_add_ps(zmm12, zmm7)
                
                if (not(cond:21_1))
                label_1400c3fc5:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm3, 1), zmm3, 0xe2)
                    zmm13 = _mm_add_ps(zmm13, zmm8)
                    
                    if (cond:30_1)
                        goto label_1400c408f
                    
                    goto label_1400c3fd2
                
            label_1400c4079:
                zmm13 = _mm_add_ps(zmm13, zmm8)
                bool cond:37_1
                bool cond:38_1
                bool cond:45_1
                bool cond:46_1
                
                if (not(cond:29_1))
                label_1400c408f:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm4, 1), zmm4, 0xe2)
                    char temp15_1 = rbx_2 & 4
                    cond:37_1 = temp15_1 == 0
                    cond:38_1 = temp15_1 != 0
                    cond:45_1 = temp15_1 == 0
                    cond:46_1 = temp15_1 != 0
                    
                    if (temp15_1 != 0)
                        goto label_1400c3fe3
                    
                    goto label_1400c409b
                
            label_1400c3fd2:
                char temp14_1 = rbx_2 & 4
                cond:37_1 = temp14_1 == 0
                cond:38_1 = temp14_1 != 0
                cond:45_1 = temp14_1 == 0
                cond:46_1 = temp14_1 != 0
                
                if (temp14_1 == 0)
                label_1400c409b:
                    
                    if (not(cond:37_1))
                    label_1400c40a9:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x32), 0x84)
                        
                        if (cond:46_1)
                            goto label_1400c3ffb
                        
                        goto label_1400c40b3
                else
                label_1400c3fe3:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x32), 0x84)
                    
                    if (cond:38_1)
                        goto label_1400c40a9
                
                bool cond:53_1
                bool cond:54_1
                bool cond:61_1
                bool cond:62_1
                
                if (not(cond:45_1))
                label_1400c3ffb:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x32), 0x84)
                    char temp23_1 = rbx_2 & 8
                    cond:53_1 = temp23_1 == 0
                    cond:54_1 = temp23_1 != 0
                    cond:61_1 = temp23_1 == 0
                    cond:62_1 = temp23_1 != 0
                    
                    if (temp23_1 != 0)
                        goto label_1400c40c6
                    
                    goto label_1400c4008
                
            label_1400c40b3:
                char temp22_1 = rbx_2 & 8
                cond:53_1 = temp22_1 == 0
                cond:54_1 = temp22_1 != 0
                cond:61_1 = temp22_1 == 0
                cond:62_1 = temp22_1 != 0
                
                if (temp22_1 != 0)
                label_1400c40c6:
                    zmm10 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
                    
                    if (cond:54_1)
                        goto label_1400c401c
                    
                    goto label_1400c40d0
                
            label_1400c4008:
                zmm10 = zmm1
                
                if (cond:53_1)
                label_1400c40d0:
                    zmm12 = zmm3
                    
                    if (not(cond:61_1))
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x23), 0x24)
                else
                label_1400c401c:
                    zmm12 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm12, zmm3, 0x23), 0x24)
                    
                    if (cond:62_1)
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x23), 0x24)
                
                zmm6 = _mm_and_ps(_mm_add_ps(temp0_170, var_258_1), temp0_171)
                zmm13 = zmm4
                var_258_1 = _mm_or_ps(_mm_andnot_ps(temp0_171, var_258_1), zmm6)
            
            rdi = zx.q(rdi.d + 4)
        while (rdi.d s< i)
        
        if (rdi.d s< arg8)
            goto label_1400c4f48
        
        zmm3 = var_258_1
    float temp0_887[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
    float temp0_888[0x4] = _mm_shuffle_ps(temp0_887, temp0_887, 0xe5)
    temp0_888[0] = temp0_888[0] + temp0_887[0]
    float temp0_890[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm12, zmm12[0].q), zmm12)
    float temp0_891[0x4] = _mm_shuffle_ps(temp0_890, temp0_890, 0xe5)
    temp0_891[0] = temp0_891[0] + temp0_890[0]
    float temp0_892[0x4] = _mm_unpacklo_ps(temp0_888, temp0_891[0].q)
    float temp0_894[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm13, zmm13[0].q), zmm13)
    float temp0_895[0x4] = _mm_shuffle_ps(temp0_894, temp0_894, 0xe5)
    temp0_895[0] = temp0_895[0] + temp0_894[0]
    float temp0_896[0x4] = _mm_add_ps(zx.o(*arg7)[0].q | arg7[1].d[0].q << 0x40, 
        temp0_892[0].q | temp0_895[0].q << 0x40)
    *arg7 = temp0_896[0]
    float temp0_897[0x4] = _mm_shuffle_ps(temp0_896, temp0_896, 0xe5)
    temp0_896[0].q = temp0_896 u>> 0x40
    *(arg7 + 4) = temp0_897[0]
    arg7[1].d = temp0_896[0]
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm3, 0xee), zmm3)
float temp0_900[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
temp0_900[0] = temp0_900[0] + zmm0[0]
temp0_900[0] = temp0_900[0] f+ *arg6
*arg6 = temp0_900[0]
return result
