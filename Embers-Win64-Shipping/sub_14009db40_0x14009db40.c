// 函数: sub_14009db40
// 地址: 0x14009db40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float var_68[0x4] = arg5
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm9[0x4]
float var_a8[0x4] = zmm9
float zmm8[0x4]
float var_b8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_c8[0x4] = zmm7
float zmm6[0x4]
float var_d8[0x4] = zmm6
float zmm1[0x4] = *arg10
float zmm0[0x4] = arg6
uint32_t result = _mm_movemask_ps(zmm1)
int32_t i = ((arg9 s>> 0x1f u>> 0x1e) + arg9) & 0xfffffffc
float var_298[0x4]
float var_288[0x4]
uint32_t var_278[0x4]
uint32_t var_218[0x4]
float var_1b8[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
uint32_t zmm5[0x4]
float zmm11[0x4]

if (result != 0xf)
    float var_188_2[0x4] = zmm1
    uint32_t var_2a8_2[0x4]
    uint64_t rdi_3
    
    if (i s<= 0)
        rdi_3 = 0
        zmm11 = zx.o(0)
        zmm12 = zx.o(0)
        zmm10 = zx.o(0)
        var_2a8_2 = zx.o(0)
        
        if (0 s< arg9)
        label_14009f143:
            float var_2c8_3[0x4] = zmm10
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi_3.d), 0), data_142e11d00)
            zmm4 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm1)
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm4
            int64_t rax_70 = sx.q(zmm1[0])
            void* rbx_7 = &(*arg4)[rax_70]
            zmm0 = (*arg4)[rax_70]
            int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* r14_2 = &(*arg4)[rbp_4]
            int64_t rax_72 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* r15_2 = &(*arg4)[rax_72]
            int64_t rsi_8 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rdi_5 = &(*arg4)[rsi_8]
            float temp0_498[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg4)[rbp_4], 0x10), 
                    (*arg4)[rax_72], 0x20), 
                (*arg4)[rsi_8], 0x30)
            zmm2 = data_142fc95e0 & zmm4
            zmm8 = *(zx.q(zmm2[0]) + rbx_7)
            uint64_t rax_74 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_5 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rsi_9 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_504[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_74 + r14_2), 0x10), *(rbp_5 + r15_2), 
                    0x20), 
                *(rsi_9 + rdi_5), 0x30)
            zmm2 = data_142fc95f0 & zmm4
            zmm6 = *(zx.q(zmm2[0]) + rbx_7)
            int32_t* rax_76 = zx.q(_mm_extract_epi32(zmm2, 1))
            int32_t* rbp_6 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rbx_8 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_510[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_76 + r14_2), 0x10), *(rbp_6 + r15_2), 
                    0x20), 
                *(rbx_8 + rdi_5), 0x30)
            float var_e8_2[0x4] = zx.o(0)
            zmm7 = (*arg3)[3]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            uint32_t var_1c8_7[0x4] = zmm7
            var_1b8 = zmm7
            uint32_t var_1a8_7[0x4] = zmm7
            uint32_t var_198_4[0x4] = zmm7
            zmm3 = *arg3
            zmm1 = (*arg3)[1]
            zmm5 = (*arg3)[2]
            float temp0_512[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_514[0x4] = _mm_mul_ps(temp0_504, zmm3)
            zmm3 = _mm_mul_ps(zmm3, temp0_510)
            float temp0_516[0x4] = _mm_mul_ps(temp0_510, temp0_512)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_518[0x4] = _mm_mul_ps(temp0_512, temp0_498)
            float temp0_519[0x4] = _mm_mul_ps(temp0_498, zmm5)
            float temp0_520[0x4] = _mm_mul_ps(zx.o(0), zmm7)
            float temp0_522[0x4] = _mm_sub_ps(temp0_516, _mm_mul_ps(zmm5, temp0_504))
            float temp0_523[0x4] = _mm_sub_ps(temp0_519, zmm3)
            float temp0_524[0x4] = _mm_sub_ps(temp0_514, temp0_518)
            float temp0_525[0x4] = _mm_sub_ps(temp0_520, temp0_520)
            float temp0_526[0x4] = _mm_add_ps(temp0_522, temp0_522)
            float temp0_527[0x4] = _mm_add_ps(temp0_523, temp0_523)
            float temp0_528[0x4] = _mm_add_ps(temp0_524, temp0_524)
            float temp0_529[0x4] = _mm_add_ps(temp0_525, temp0_525)
            var_218 = temp0_526
            float var_208_7[0x4] = temp0_527
            float var_1f8_7[0x4] = temp0_528
            float var_1e8_4[0x4] = temp0_529
            zmm10 = zmm7
            zmm8 = zmm7
            float temp0_530[0x4] = _mm_mul_ps(temp0_529, zmm7)
            zmm7 = _mm_mul_ps(zmm7, temp0_526)
            float temp0_532[0x4] = _mm_mul_ps(zmm10, temp0_527)
            float temp0_533[0x4] = _mm_mul_ps(zmm8, temp0_528)
            zmm7 = __addps_xmmps_memps(zmm7, temp0_498)
            float temp0_535[0x4] = __addps_xmmps_memps(temp0_532, temp0_504)
            float temp0_536[0x4] = __addps_xmmps_memps(temp0_533, temp0_510)
            float temp0_537[0x4] = __addps_xmmps_memps(temp0_530, var_e8_2)
            var_298 = zmm7
            float var_268_2[0x4] = temp0_537
            zmm3 = *arg3
            zmm5 = (*arg3)[1]
            zmm1 = (*arg3)[2]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_540[0x4] = _mm_mul_ps(temp0_527, zmm3)
            zmm3 = _mm_mul_ps(zmm3, temp0_528)
            float temp0_542[0x4] = _mm_mul_ps(temp0_528, zmm5)
            float temp0_543[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm5 = _mm_mul_ps(zmm5, temp0_526)
            float temp0_545[0x4] = _mm_mul_ps(temp0_526, temp0_543)
            float temp0_547[0x4] = _mm_sub_ps(temp0_542, _mm_mul_ps(temp0_543, temp0_527))
            float temp0_548[0x4] = _mm_sub_ps(temp0_545, zmm3)
            float temp0_549[0x4] = _mm_sub_ps(temp0_540, zmm5)
            float temp0_550[0x4] = _mm_add_ps(temp0_547, zmm7)
            float temp0_551[0x4] = _mm_add_ps(temp0_548, temp0_535)
            float temp0_552[0x4] = _mm_add_ps(temp0_549, temp0_536)
            zmm10 = arg3[1][0]
            zmm14 = (*arg3)[5]
            float temp0_554[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_550)
            float temp0_556[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_551)
            zmm7 = (*arg3)[6]
            zmm7 = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_552)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_559[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm5 = _mm_sub_ps(temp0_554, temp0_559)
            float temp0_561[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_562[0x4] = _mm_sub_ps(temp0_556, temp0_561)
            zmm15 = (*arg2)[2]
            float temp0_563[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_564[0x4] = _mm_sub_ps(zmm7, temp0_563)
            uint32_t var_1c8_8[0x4] = zmm5
            var_1b8 = temp0_562
            float var_1a8_8[0x4] = temp0_564
            zmm2 = *arg1
            zmm0 = (*arg1)[1]
            float temp0_565[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_566[0x4] = _mm_sub_ps(temp0_565, temp0_554)
            float temp0_567[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
            float temp0_568[0x4] = _mm_sub_ps(temp0_567, temp0_556)
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_554, temp0_559, 6), zmm4)
            char temp0_572 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4))
            arg5 = (*arg1)[2]
            float temp0_573[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
            uint32_t var_2b8_3[0x4] = zmm7
            float temp0_574[0x4] = _mm_sub_ps(temp0_573, zmm7)
            var_218 = temp0_566
            float var_208_8[0x4] = temp0_568
            float var_1f8_8[0x4] = temp0_574
            zmm10 = _mm_cmpeq_ps(temp0_554, temp0_559, 2)
            
            if (temp0_572 != 0xf)
                float temp0_576[0x4] = _mm_cmpeq_ps(temp0_556, temp0_561, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm4), temp0_576)
                zmm1 = _mm_andnot_ps(zmm10, zmm4)
            
            zmm8 = var_2b8_3
            zmm14 = temp0_566
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4)) != 0xf)
                zmm3 = _mm_cmpeq_ps(zmm8, temp0_563, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm4), zmm3)
                zmm1 = zmm10 ^ zmm4
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4)) == 0xf)
                arg5 = temp0_556
            else
                zmm10 = _mm_and_ps(zmm10, zmm4)
                zmm3 = _mm_cmpeq_ps(temp0_565, temp0_554, 2)
                zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_565, temp0_554, 6), zmm10)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm10)) != 0xf)
                    float temp0_593[0x4] = __cmpps_xmmps_memps_immb(temp0_567, temp0_556, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm10), temp0_593)
                    zmm2 = zmm3 ^ zmm10
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm10)) != 0xf)
                    float temp0_598[0x4] = _mm_cmpeq_ps(temp0_573, zmm8, 2)
                    zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm10), temp0_598)
                
                arg5 = temp0_556
                zmm10 = _mm_and_ps(zmm10, zmm3)
            
            uint32_t temp0_617 = _mm_movemask_ps(_mm_and_ps(zmm10, zmm4))
            float temp0_619[0x4]
            float temp0_620[0x4]
            uint32_t temp0_726
            
            if (temp0_617 != 0)
                zmm14 = _mm_max_ps(zmm14, zmm5)
                temp0_619 = __maxps_xmmps_memps(temp0_568, temp0_562)
                temp0_620 = __maxps_xmmps_memps(temp0_574, temp0_564)
                float temp0_621[0x4] = _mm_cmpeq_ps(temp0_619, zmm14, 1)
                zmm2 = _mm_and_ps(zmm10, temp0_621)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_620, zmm14, 5), zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm4)) != 0)
                        zmm14 = _mm_blendv_ps(zmm14, temp0_620, zmm0)
                
                zmm6 = _mm_andnot_ps(temp0_621, zmm10)
                temp0_726 = _mm_movemask_ps(_mm_and_ps(zmm6, zmm4))
            
            if (temp0_617 == 0 || temp0_726 == 0)
                zmm7 = var_188_2
                zmm8 = var_2a8_2
                zmm9 = var_2c8_3
            else
                float temp0_727[0x4] = _mm_cmpeq_ps(temp0_620, temp0_619, 1)
                zmm0 = _mm_and_ps(zmm6, temp0_727)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm4)) != 0)
                    zmm14 = _mm_blendv_ps(zmm14, temp0_619, zmm0)
                
                zmm2 = _mm_andnot_ps(temp0_727, zmm6)
                zmm7 = var_188_2
                zmm8 = var_2a8_2
                zmm9 = var_2c8_3
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                    zmm14 = _mm_blendv_ps(zmm14, temp0_620, zmm2)
            
            zmm0 = _mm_andnot_ps(zmm10, zmm4)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm10 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                int64_t rax_97 = 0
                zmm0 = data_142d3f780
                
                while (true)
                    float temp0_739[0x4] = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                    uint32_t temp0_740[0x4] = _mm_and_ps(temp0_739, zmm10)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_740, zmm4)) != 0)
                        char temp0_743 = _mm_movemask_ps(temp0_740)
                        
                        if ((temp0_743 & 1) == 0)
                            if ((temp0_743 & 2) != 0)
                                goto label_14009fc9f
                            
                            goto label_14009fbbc
                        
                        *(&var_298 + rax_97) = zmm5[0]
                        
                        if ((temp0_743 & 2) != 0)
                        label_14009fc9f:
                            *(&var_298[1] + rax_97) = __extractps_memd_xmmps_immb(zmm5, 1)
                            
                            if ((temp0_743 & 4) == 0)
                                goto label_14009fbc5
                            
                            goto label_14009fcb0
                        
                    label_14009fbbc:
                        
                        if ((temp0_743 & 4) != 0)
                        label_14009fcb0:
                            *(&var_298[2] + rax_97) = __extractps_memd_xmmps_immb(zmm5, 2)
                            
                            if ((temp0_743 & 8) != 0)
                                *(&var_298[3] + rax_97) = __extractps_memd_xmmps_immb(zmm5, 3)
                        else
                        label_14009fbc5:
                            
                            if ((temp0_743 & 8) != 0)
                                *(&var_298[3] + rax_97) = __extractps_memd_xmmps_immb(zmm5, 3)
                    
                    zmm2 = _mm_andnot_ps(temp0_739, zmm10)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                        zmm3 = *(&var_218 + rax_97)
                        zmm5 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        zmm6 = _mm_and_ps(zmm2, zmm5)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm4)) != 0)
                            zmm3 ^= zmm0
                            char temp0_752 = _mm_movemask_ps(zmm6)
                            
                            if ((temp0_752 & 1) == 0)
                                if ((temp0_752 & 2) != 0)
                                    goto label_14009fcd5
                                
                                goto label_14009fc21
                            
                            *(&var_298 + rax_97) = zmm3[0]
                            
                            if ((temp0_752 & 2) != 0)
                            label_14009fcd5:
                                *(&var_298[1] + rax_97) = __extractps_memd_xmmps_immb(zmm3, 1)
                                
                                if ((temp0_752 & 4) == 0)
                                    goto label_14009fc2a
                                
                                goto label_14009fce6
                            
                        label_14009fc21:
                            
                            if ((temp0_752 & 4) != 0)
                            label_14009fce6:
                                *(&var_298[2] + rax_97) = __extractps_memd_xmmps_immb(zmm3, 2)
                                
                                if ((temp0_752 & 8) != 0)
                                    *(&var_298[3] + rax_97) = __extractps_memd_xmmps_immb(zmm3, 3)
                            else
                            label_14009fc2a:
                                
                                if ((temp0_752 & 8) != 0)
                                    *(&var_298[3] + rax_97) = __extractps_memd_xmmps_immb(zmm3, 3)
                        
                        uint32_t temp0_754[0x4] = _mm_andnot_ps(zmm5, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_754, zmm4)) != 0)
                            char temp0_757 = _mm_movemask_ps(temp0_754)
                            
                            if ((temp0_757 & 1) == 0)
                                if ((temp0_757 & 2) != 0)
                                    goto label_14009fd0d
                                
                                goto label_14009fc5c
                            
                            *(&var_298 + rax_97) = 0
                            
                            if ((temp0_757 & 2) != 0)
                            label_14009fd0d:
                                *(&var_298[1] + rax_97) = 0
                                
                                if ((temp0_757 & 4) == 0)
                                    goto label_14009fc65
                                
                                goto label_14009fd1e
                            
                        label_14009fc5c:
                            
                            if ((temp0_757 & 4) != 0)
                            label_14009fd1e:
                                *(&var_298[2] + rax_97) = 0
                                
                                if ((temp0_757 & 8) != 0)
                                    *(&var_298[3] + rax_97) = 0
                            else
                            label_14009fc65:
                                
                                if ((temp0_757 & 8) != 0)
                                    *(&var_298[3] + rax_97) = 0
                    
                    if (rax_97 == 0x20)
                        break
                    
                    zmm5 = *(&var_1b8 + rax_97)
                    rax_97 += 0x10
                
                zmm0 = var_298
                zmm3 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                float temp0_765[0x4] = _mm_add_ps(_mm_mul_ps(temp0_535, temp0_535), zmm3)
                float temp0_767[0x4] = _mm_add_ps(_mm_mul_ps(temp0_536, temp0_536), temp0_765)
                float temp0_768[0x4] = _mm_rsqrt_ps(temp0_767)
                float temp0_770[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_767, temp0_768), temp0_768)
                float temp0_773[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_770), temp0_768), data_142d3f640)
                float temp0_774[0x4] = _mm_rcp_ps(temp0_773)
                float temp0_775[0x4] = _mm_mul_ps(temp0_773, temp0_774)
                zmm14 = _mm_blendv_ps(zmm14, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_775), temp0_774), zmm10)
            
            zmm0 = arg6
            float temp0_780[0x4] = _mm_sub_ps(zmm14, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_780, data_142fc95d0, 1), zmm4)
            result = _mm_movemask_ps(zmm0)
            zmm12 = zmm12
            zmm11 = zmm11
            zmm10 = zmm9
            
            if (result.b != 0)
                float temp0_784[0x4] = _mm_mul_ps(temp0_554, temp0_780)
                result = zx.d(result.b)
                zmm2 = zmm10
                char temp6_1 = result.b & 1
                
                if (temp6_1 == 0)
                    arg5 = _mm_mul_ps(arg5, temp0_780)
                    zmm4 = zmm12
                    zmm3 = var_2b8_3
                    
                    if (temp6_1 != 0)
                        goto label_14009fe6f
                    
                    goto label_14009fdf1
                
                zmm2 = zmm10
                zmm2[0] = zmm2[0] + temp0_784[0]
                arg5 = _mm_mul_ps(arg5, temp0_780)
                zmm4 = zmm12
                zmm3 = var_2b8_3
                
                if (temp6_1 != 0)
                label_14009fe6f:
                    zmm4 = zmm12
                    zmm4[0] = zmm4[0] f+ arg5[0]
                    zmm3 = _mm_mul_ps(zmm3, temp0_780)
                    zmm1 = zmm11
                    
                    if (temp6_1 == 0)
                        goto label_14009fdff
                    
                    goto label_14009fe86
                
            label_14009fdf1:
                zmm3 = _mm_mul_ps(zmm3, temp0_780)
                zmm1 = zmm11
                bool cond:30_1
                bool cond:31_1
                bool cond:38_1
                bool cond:39_1
                
                if (temp6_1 == 0)
                label_14009fdff:
                    zmm10 = _mm_add_ps(zmm10, temp0_784)
                    char temp14_1 = result.b & 2
                    cond:30_1 = temp14_1 != 0
                    cond:31_1 = temp14_1 == 0
                    cond:38_1 = temp14_1 == 0
                    cond:39_1 = temp14_1 != 0
                    
                    if (temp14_1 != 0)
                        goto label_14009fe9a
                    
                    goto label_14009fe0b
                
            label_14009fe86:
                zmm1 = zmm11
                zmm1[0] = zmm1[0] f+ zmm3[0]
                zmm10 = _mm_add_ps(zmm10, temp0_784)
                char temp13_1 = result.b & 2
                cond:30_1 = temp13_1 != 0
                cond:31_1 = temp13_1 == 0
                cond:38_1 = temp13_1 == 0
                cond:39_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                label_14009fe9a:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                    zmm12 = _mm_add_ps(zmm12, arg5)
                    
                    if (cond:31_1)
                        goto label_14009fe15
                    
                    goto label_14009feab
                
            label_14009fe0b:
                zmm12 = _mm_add_ps(zmm12, arg5)
                
                if (not(cond:30_1))
                label_14009fe15:
                    zmm11 = _mm_add_ps(zmm11, zmm3)
                    
                    if (cond:39_1)
                        goto label_14009febc
                    
                    goto label_14009fe1f
                
            label_14009feab:
                zmm4 = _mm_blend_ps(zmm4, zmm12, 2)
                zmm11 = _mm_add_ps(zmm11, zmm3)
                bool cond:46_1
                bool cond:47_1
                bool cond:54_1
                bool cond:55_1
                
                if (not(cond:38_1))
                label_14009febc:
                    zmm1 = _mm_blend_ps(zmm1, zmm11, 2)
                    char temp22_1 = result.b & 4
                    cond:46_1 = temp22_1 == 0
                    cond:47_1 = temp22_1 != 0
                    cond:54_1 = temp22_1 != 0
                    cond:55_1 = temp22_1 == 0
                    
                    if (temp22_1 == 0)
                        goto label_14009fe27
                    
                    goto label_14009fecb
                
            label_14009fe1f:
                char temp21_1 = result.b & 4
                cond:46_1 = temp21_1 == 0
                cond:47_1 = temp21_1 != 0
                cond:54_1 = temp21_1 != 0
                cond:55_1 = temp21_1 == 0
                
                if (temp21_1 != 0)
                label_14009fecb:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                    
                    if (not(cond:46_1))
                    label_14009fed8:
                        zmm4 = _mm_blend_ps(zmm4, zmm12, 4)
                        
                        if (cond:55_1)
                            goto label_14009fe33
                        
                        goto label_14009fee5
                else
                label_14009fe27:
                    
                    if (cond:47_1)
                        goto label_14009fed8
                
                bool cond:62_1
                bool cond:63_1
                bool cond:66_1
                bool cond:67_1
                
                if (not(cond:54_1))
                label_14009fe33:
                    char temp28_1 = result.b & 8
                    cond:62_1 = temp28_1 != 0
                    cond:63_1 = temp28_1 == 0
                    cond:66_1 = temp28_1 == 0
                    cond:67_1 = temp28_1 != 0
                    
                    if (temp28_1 == 0)
                        goto label_14009fef4
                    
                    goto label_14009fe3b
                
            label_14009fee5:
                zmm1 = _mm_blend_ps(zmm1, zmm11, 4)
                char temp27_1 = result.b & 8
                cond:62_1 = temp27_1 != 0
                cond:63_1 = temp27_1 == 0
                cond:66_1 = temp27_1 == 0
                cond:67_1 = temp27_1 != 0
                
                if (temp27_1 == 0)
                label_14009fef4:
                    zmm10 = zmm2
                    
                    if (cond:63_1)
                        goto label_14009fe48
                    
                    goto label_14009fefe
                
            label_14009fe3b:
                zmm10 = _mm_blend_ps(zmm10, zmm2, 7)
                
                if (cond:62_1)
                label_14009fefe:
                    zmm12 = _mm_blend_ps(zmm12, zmm4, 7)
                    
                    if (not(cond:66_1))
                        zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
                else
                label_14009fe48:
                    zmm12 = zmm4
                    
                    if (cond:67_1)
                        zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
                
                zmm8 = _mm_blendv_ps(zmm8, _mm_add_ps(temp0_780, zmm8), zmm0)
                zmm11 = zmm1
        else
            zmm7 = var_188_2
            zmm8 = var_2a8_2
    else
        arg5 = (*arg3)[3]
        float temp0_296[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
        float var_258_3[0x4] = *arg3
        float var_228_3[0x4] = (*arg3)[1]
        float var_1d8_3[0x4] = (*arg3)[2]
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_297[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_298[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_299[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg1
        zmm2 = (*arg1)[1]
        float temp0_300[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_301[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg1)[2]
        float temp0_302[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_303[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        rdi_3 = 0
        var_2a8_2 = zx.o(0)
        zmm10 = zx.o(0)
        zmm12 = zx.o(0)
        zmm11 = zx.o(0)
        
        do
            int64_t rax_41 = sx.q((rdi_3 << 2).d * 3)
            zmm0 = *(arg4 + rax_41)
            zmm1 = *(arg4 + rax_41 + 0x10)
            zmm6 = *(arg4 + rax_41 + 0x20)
            uint32_t temp0_304[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_305[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            float temp0_306[0x4] = _mm_shuffle_ps(zmm0, zmm1, 0xec)
            zmm5 = _mm_blend_epi16(_mm_shuffle_epi32(zmm6, 0x44), temp0_306, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm1, 0xf0), temp0_304, 3)
            zmm2 = _mm_blend_epi16(_mm_shuffle_epi32(zmm6, 0xa4), zmm0, 0x3f)
            zmm4 = _mm_shuffle_ps(_mm_blend_epi16(temp0_305, zmm1, 0xc), zmm6, 0xc4)
            var_218 = zmm5
            uint32_t var_1f8_5[0x4] = zmm4
            int128_t var_1e8_3 = zx.o(0)
            float var_1c8_5[0x4] = temp0_296
            var_1b8 = temp0_296
            float var_1a8_5[0x4] = temp0_296
            float temp0_315[0x4] = _mm_shuffle_ps(var_228_3, var_228_3, 0)
            float temp0_316[0x4] = _mm_mul_ps(temp0_315, zmm4)
            zmm3 = var_1d8_3
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm7 = _mm_mul_ps(zmm3, zmm5)
            float temp0_319[0x4] = _mm_shuffle_ps(var_258_3, var_258_3, 0)
            float temp0_320[0x4] = _mm_mul_ps(temp0_319, zmm2)
            float temp0_322[0x4] = _mm_sub_ps(temp0_316, _mm_mul_ps(zmm2, zmm3))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm4, temp0_319))
            float temp0_326[0x4] = _mm_sub_ps(temp0_320, _mm_mul_ps(zmm5, temp0_315))
            float temp0_327[0x4] = _mm_add_ps(temp0_322, temp0_322)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            float temp0_329[0x4] = _mm_add_ps(temp0_326, temp0_326)
            float temp0_330[0x4] = _mm_mul_ps(temp0_296, zmm7)
            zmm4 = _mm_mul_ps(temp0_327, zmm3)
            zmm5 = zmm7
            zmm7 = _mm_mul_ps(zmm7, zmm3)
            zmm3 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_329, temp0_315), zmm7), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_296, temp0_327), var_218))
            zmm7 = _mm_mul_ps(temp0_296, temp0_329)
            float temp0_339[0x4] = __addps_xmmps_memps(temp0_330, zmm2)
            zmm7 = __addps_xmmps_memps(zmm7, var_1f8_5)
            float var_198_3[0x4] = temp0_296
            zmm5 = _mm_mul_ps(zmm5, temp0_319)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_329, temp0_319)), temp0_339)
            zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, _mm_mul_ps(temp0_327, temp0_315)), zmm7)
            zmm9 = arg3[1][0]
            zmm15 = (*arg3)[5]
            float temp0_349[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm3)
            float temp0_351[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm4)
            zmm14 = (*arg3)[6]
            float temp0_353[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm5)
            zmm4 = temp0_297
            zmm8 = _mm_sub_ps(temp0_349, zmm4)
            float temp0_355[0x4] = __subps_xmmps_memps(temp0_351, temp0_298)
            float temp0_356[0x4] = __subps_xmmps_memps(temp0_353, temp0_299)
            float var_1c8_6[0x4] = zmm8
            var_1b8 = temp0_355
            float var_1a8_6[0x4] = temp0_356
            float temp0_357[0x4] = _mm_sub_ps(temp0_300, temp0_349)
            float temp0_358[0x4] = _mm_sub_ps(temp0_301, temp0_351)
            char temp0_360 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_349, zmm4, 6))
            float temp0_361[0x4] = _mm_sub_ps(temp0_302, temp0_353)
            var_218 = temp0_357
            float var_208_6[0x4] = temp0_358
            float var_1f8_6[0x4] = temp0_361
            
            if (temp0_360 != 0xf)
                float temp0_362[0x4] = _mm_cmpeq_ps(temp0_349, zmm4, 2)
                zmm4 = (*arg2)[1]
                zmm3 =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_351, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_362)
                zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                
                if (_mm_movemask_ps(zmm3 ^ zmm5) == 0xf)
                    goto label_14009ec68
                
                zmm4 = (*arg2)[2]
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_353, _mm_shuffle_ps(zmm4, zmm4, 0), 2), zmm3)
                zmm3 = zmm1 ^ zmm5
                
                if (_mm_movemask_ps(zmm3) == 0xf)
                    zmm4 = zmm10
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009ec81
                    
                    goto label_14009ec23
                
                zmm7 = *arg1
                zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
                zmm3 = _mm_and_ps(_mm_cmpeq_ps(zmm7, temp0_349, 6), zmm1)
                char temp0_376 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm1))
                zmm7 = _mm_cmpeq_ps(zmm7, temp0_349, 2)
                
                if (temp0_376 != 0xf)
                    zmm3 = (*arg1)[1]
                    zmm3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_351, 2)
                    zmm7 = _mm_and_ps(_mm_and_ps(zmm7, zmm1), zmm3)
                    zmm3 = _mm_andnot_ps(zmm7, zmm1)
                
                zmm4 = zmm10
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm1)
                
                if (_mm_movemask_ps(zmm3) != 0xf)
                    zmm3 = (*arg1)[2]
                    zmm3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_353, 2)
                    zmm7 = _mm_and_ps(_mm_and_ps(zmm7, zmm1), zmm3)
                
                zmm1 = _mm_and_ps(zmm1, zmm7)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    goto label_14009ec81
                
                goto label_14009ec23
            
            zmm3 = _mm_cmpeq_ps(temp0_349, zmm4, 2)
        label_14009ec68:
            zmm4 = zmm10
            zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f)
            zmm1 = zmm3
            float var_2b8[0x4]
            
            if (_mm_movemask_ps(zmm1) == 0)
            label_14009ec23:
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                zmm11 = zmm11
                zmm10 = zmm4
                zmm5 = data_142d3f780
                zmm6 = var_2b8
                zmm1 ^= zmm3
                
                if (_mm_movemask_ps(zmm1) != 0)
                label_14009edc6:
                    int64_t rbx_5 = 0
                    
                    while (true)
                        float temp0_430[0x4] = _mm_cmpeq_ps(zx.o(0), zmm8, 1)
                        uint32_t temp0_432 = _mm_movemask_ps(_mm_and_ps(temp0_430, zmm1))
                        
                        if (temp0_432 != 0)
                            char rax_63 = temp0_432.b
                            
                            if ((rax_63 & 1) == 0)
                                if ((rax_63 & 2) != 0)
                                    goto label_14009eebf
                                
                                goto label_14009ee04
                            
                            *(&var_298 + rbx_5) = zmm8[0]
                            
                            if ((rax_63 & 2) != 0)
                            label_14009eebf:
                                *(&var_298[1] + rbx_5) = __extractps_memd_xmmps_immb(zmm8, 1)
                                
                                if ((rax_63 & 4) == 0)
                                    goto label_14009ee0c
                                
                                goto label_14009eed0
                            
                        label_14009ee04:
                            
                            if ((rax_63 & 4) != 0)
                            label_14009eed0:
                                *(&var_298[2] + rbx_5) = __extractps_memd_xmmps_immb(zmm8, 2)
                                
                                if ((rax_63 & 8) != 0)
                                    *(&var_298[3] + rbx_5) = __extractps_memd_xmmps_immb(zmm8, 3)
                            else
                            label_14009ee0c:
                                
                                if ((rax_63 & 8) != 0)
                                    *(&var_298[3] + rbx_5) = __extractps_memd_xmmps_immb(zmm8, 3)
                        
                        zmm0 = _mm_andnot_ps(temp0_430, zmm1)
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            zmm3 = *(&var_218 + rbx_5)
                            float temp0_436[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            uint32_t temp0_438 = _mm_movemask_ps(_mm_and_ps(zmm0, temp0_436))
                            
                            if (temp0_438 != 0)
                                zmm3 ^= zmm5
                                char rax_66 = temp0_438.b
                                
                                if ((rax_66 & 1) == 0)
                                    if ((rax_66 & 2) != 0)
                                        goto label_14009eef4
                                    
                                    goto label_14009ee54
                                
                                *(&var_298 + rbx_5) = zmm3[0]
                                
                                if ((rax_66 & 2) != 0)
                                label_14009eef4:
                                    *(&var_298[1] + rbx_5) = __extractps_memd_xmmps_immb(zmm3, 1)
                                    
                                    if ((rax_66 & 4) == 0)
                                        goto label_14009ee5c
                                    
                                    goto label_14009ef04
                                
                            label_14009ee54:
                                
                                if ((rax_66 & 4) != 0)
                                label_14009ef04:
                                    *(&var_298[2] + rbx_5) = __extractps_memd_xmmps_immb(zmm3, 2)
                                    
                                    if ((rax_66 & 8) != 0)
                                        *(&var_298[3] + rbx_5) =
                                            __extractps_memd_xmmps_immb(zmm3, 3)
                                else
                                label_14009ee5c:
                                    
                                    if ((rax_66 & 8) != 0)
                                        *(&var_298[3] + rbx_5) =
                                            __extractps_memd_xmmps_immb(zmm3, 3)
                            
                            uint32_t temp0_441 = _mm_movemask_ps(_mm_andnot_ps(temp0_436, zmm0))
                            
                            if (temp0_441 != 0)
                                char rax_68 = temp0_441.b
                                
                                if ((rax_68 & 1) == 0)
                                    if ((rax_68 & 2) != 0)
                                        goto label_14009ef29
                                    
                                    goto label_14009ee84
                                
                                *(&var_298 + rbx_5) = 0
                                
                                if ((rax_68 & 2) != 0)
                                label_14009ef29:
                                    *(&var_298[1] + rbx_5) = 0
                                    
                                    if ((rax_68 & 4) == 0)
                                        goto label_14009ee8c
                                    
                                    goto label_14009ef39
                                
                            label_14009ee84:
                                
                                if ((rax_68 & 4) != 0)
                                label_14009ef39:
                                    *(&var_298[2] + rbx_5) = 0
                                    
                                    if ((rax_68 & 8) != 0)
                                        *(&var_298[3] + rbx_5) = 0
                                else
                                label_14009ee8c:
                                    
                                    if ((rax_68 & 8) != 0)
                                        *(&var_298[3] + rbx_5) = 0
                        
                        if (rbx_5 == 0x20)
                            break
                        
                        zmm8 = *(&var_1b8 + rbx_5)
                        rbx_5 += 0x10
                    
                    zmm0 = var_298
                    float temp0_447[0x4] =
                        __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                    float temp0_449[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), temp0_447)
                    zmm3 = _mm_add_ps(_mm_mul_ps(var_278, var_278), temp0_449)
                    float temp0_452[0x4] = _mm_rsqrt_ps(zmm3)
                    zmm3 = _mm_mul_ps(_mm_mul_ps(zmm3, temp0_452), temp0_452)
                    float temp0_457[0x4] = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm3), temp0_452), data_142d3f640)
                    float temp0_458[0x4] = _mm_rcp_ps(temp0_457)
                    float temp0_459[0x4] = _mm_mul_ps(temp0_457, temp0_458)
                    zmm6 = _mm_blendv_ps(zmm6, 
                        _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_459), temp0_458), zmm1)
            else
            label_14009ec81:
                float temp0_397[0x4] = _mm_max_ps(temp0_357, zmm8)
                float temp0_398[0x4] = _mm_max_ps(temp0_358, temp0_355)
                float temp0_399[0x4] = _mm_max_ps(temp0_361, temp0_356)
                zmm7 = _mm_cmpeq_ps(temp0_398, temp0_397, 1)
                uint32_t temp0_401[0x4] = _mm_and_ps(zmm1, zmm7)
                
                if (_mm_movemask_ps(temp0_401) != 0)
                    float temp0_403[0x4] = _mm_cmpeq_ps(temp0_399, temp0_397, 1)
                    zmm0 = _mm_and_ps(temp0_401, temp0_403)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm6 = _mm_blendv_ps(var_2b8, temp0_397, zmm0)
                        zmm2 = _mm_andnot_ps(temp0_403, temp0_401)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            goto label_14009ed8b
                        
                        goto label_14009ece0
                    
                    zmm6 = var_2b8
                    zmm2 = _mm_andnot_ps(temp0_403, temp0_401)
                    
                    if (_mm_movemask_ps(zmm2) == 0)
                    label_14009ece0:
                        zmm7 = _mm_andnot_ps(zmm7, zmm1)
                        
                        if (_mm_movemask_ps(zmm7) == 0)
                            goto label_14009ed9f
                        
                        goto label_14009ecf2
                    
                label_14009ed8b:
                    zmm6 = _mm_blendv_ps(zmm6, temp0_399, zmm2)
                    zmm7 = _mm_andnot_ps(zmm7, zmm1)
                    
                    if (_mm_movemask_ps(zmm7) != 0)
                        goto label_14009ecf2
                    
                    goto label_14009ed9f
                
                zmm6 = var_2b8
                zmm7 = _mm_andnot_ps(zmm7, zmm1)
                
                if (_mm_movemask_ps(zmm7) != 0)
                label_14009ecf2:
                    float temp0_411[0x4] = _mm_cmpeq_ps(temp0_399, temp0_398, 1)
                    zmm0 = _mm_and_ps(zmm7, temp0_411)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm6 = _mm_blendv_ps(zmm6, temp0_398, zmm0)
                    
                    zmm5 = data_142d3f780
                    zmm2 = _mm_andnot_ps(temp0_411, zmm7)
                    uint32_t temp0_416 = _mm_movemask_ps(zmm2)
                    zmm3 = _mm_cmpeq_epi32(temp0_401, temp0_401)
                    
                    if (temp0_416 != 0)
                        zmm6 = _mm_blendv_ps(zmm6, temp0_399, zmm2)
                    
                    zmm11 = zmm11
                    zmm10 = zmm4
                    zmm1 ^= zmm3
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009edc6
                else
                label_14009ed9f:
                    zmm3 = _mm_cmpeq_epi32(temp0_401, temp0_401)
                    zmm11 = zmm11
                    zmm10 = zmm4
                    zmm5 = data_142d3f780
                    zmm1 ^= zmm3
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009edc6
            
            var_2b8 = zmm6
            float temp0_463[0x4] = __subps_xmmps_memps(zmm6, temp0_303)
            float temp0_464[0x4] = __cmpps_xmmps_memps_immb(temp0_463, data_142fc95d0, 1)
            result = _mm_movemask_ps(temp0_464)
            
            if (result.b != 0)
                float temp0_466[0x4] = _mm_mul_ps(temp0_349, temp0_463)
                char rbx_6 = result.b
                zmm6 = zmm10
                char temp2_1 = rbx_6 & 1
                
                if (temp2_1 == 0)
                    zmm15 = _mm_mul_ps(temp0_351, temp0_463)
                    zmm7 = zmm12
                    
                    if (temp2_1 != 0)
                        goto label_14009f077
                    
                    goto label_14009eff1
                
                zmm6 = zmm10
                zmm6[0] = zmm6[0] + temp0_466[0]
                zmm15 = _mm_mul_ps(temp0_351, temp0_463)
                zmm7 = zmm12
                
                if (temp2_1 != 0)
                label_14009f077:
                    zmm7 = zmm12
                    zmm7[0] = zmm7[0] f+ zmm15[0]
                    zmm14 = _mm_mul_ps(temp0_353, temp0_463)
                    zmm2 = zmm11
                    
                    if (temp2_1 == 0)
                        goto label_14009efff
                    
                    goto label_14009f08e
                
            label_14009eff1:
                zmm14 = _mm_mul_ps(temp0_353, temp0_463)
                zmm2 = zmm11
                bool cond:17_1
                bool cond:18_1
                bool cond:24_1
                bool cond:25_1
                
                if (temp2_1 == 0)
                label_14009efff:
                    zmm10 = _mm_add_ps(zmm10, temp0_466)
                    char temp8_1 = rbx_6 & 2
                    cond:17_1 = temp8_1 != 0
                    cond:18_1 = temp8_1 == 0
                    cond:24_1 = temp8_1 == 0
                    cond:25_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_14009f0a4
                    
                    goto label_14009f00c
                
            label_14009f08e:
                zmm2 = zmm11
                zmm2[0] = zmm2[0] + zmm14[0]
                zmm10 = _mm_add_ps(zmm10, temp0_466)
                char temp7_1 = rbx_6 & 2
                cond:17_1 = temp7_1 != 0
                cond:18_1 = temp7_1 == 0
                cond:24_1 = temp7_1 == 0
                cond:25_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                label_14009f0a4:
                    zmm6 = _mm_blend_ps(zmm6, zmm10, 2)
                    zmm12 = _mm_add_ps(zmm12, zmm15)
                    
                    if (cond:18_1)
                        goto label_14009f016
                    
                    goto label_14009f0b5
                
            label_14009f00c:
                zmm12 = _mm_add_ps(zmm12, zmm15)
                
                if (not(cond:17_1))
                label_14009f016:
                    zmm11 = _mm_add_ps(zmm11, zmm14)
                    
                    if (cond:25_1)
                        goto label_14009f0c6
                    
                    goto label_14009f020
                
            label_14009f0b5:
                zmm7 = _mm_blend_ps(zmm7, zmm12, 2)
                zmm11 = _mm_add_ps(zmm11, zmm14)
                bool cond:32_1
                bool cond:33_1
                bool cond:40_1
                bool cond:41_1
                
                if (not(cond:24_1))
                label_14009f0c6:
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                    char temp16_1 = rbx_6 & 4
                    cond:32_1 = temp16_1 == 0
                    cond:33_1 = temp16_1 != 0
                    cond:40_1 = temp16_1 != 0
                    cond:41_1 = temp16_1 == 0
                    
                    if (temp16_1 == 0)
                        goto label_14009f029
                    
                    goto label_14009f0d6
                
            label_14009f020:
                char temp15_1 = rbx_6 & 4
                cond:32_1 = temp15_1 == 0
                cond:33_1 = temp15_1 != 0
                cond:40_1 = temp15_1 != 0
                cond:41_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_14009f0d6:
                    zmm6 = _mm_blend_ps(zmm6, zmm10, 4)
                    
                    if (not(cond:32_1))
                    label_14009f0e3:
                        zmm7 = _mm_blend_ps(zmm7, zmm12, 4)
                        
                        if (cond:41_1)
                            goto label_14009f035
                        
                        goto label_14009f0f0
                else
                label_14009f029:
                    
                    if (cond:33_1)
                        goto label_14009f0e3
                
                bool cond:48_1
                bool cond:49_1
                bool cond:56_1
                bool cond:57_1
                
                if (not(cond:40_1))
                label_14009f035:
                    char temp24_1 = rbx_6 & 8
                    cond:48_1 = temp24_1 != 0
                    cond:49_1 = temp24_1 == 0
                    cond:56_1 = temp24_1 == 0
                    cond:57_1 = temp24_1 != 0
                    
                    if (temp24_1 == 0)
                        goto label_14009f100
                    
                    goto label_14009f03e
                
            label_14009f0f0:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
                char temp23_1 = rbx_6 & 8
                cond:48_1 = temp23_1 != 0
                cond:49_1 = temp23_1 == 0
                cond:56_1 = temp23_1 == 0
                cond:57_1 = temp23_1 != 0
                
                if (temp23_1 == 0)
                label_14009f100:
                    zmm10 = zmm6
                    
                    if (cond:49_1)
                        goto label_14009f04b
                    
                    goto label_14009f10a
                
            label_14009f03e:
                zmm10 = _mm_blend_ps(zmm10, zmm6, 7)
                
                if (cond:48_1)
                label_14009f10a:
                    zmm12 = _mm_blend_ps(zmm12, zmm7, 7)
                    
                    if (not(cond:56_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                else
                label_14009f04b:
                    zmm12 = zmm7
                    
                    if (cond:57_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                
                var_2a8_2 = _mm_blendv_ps(var_2a8_2, _mm_add_ps(temp0_463, var_2a8_2), temp0_464)
                zmm11 = zmm2
            
            rdi_3 = zx.q(rdi_3.d + 4)
        while (rdi_3.d s< i)
        
        if (rdi_3.d s< arg9)
            goto label_14009f143
        
        zmm7 = var_188_2
        zmm8 = var_2a8_2
    zmm7 = _mm_cmpeq_epi32(zmm7, zx.o(0))
    zmm0 = zmm7 & not.o(zmm10)
    float temp0_807[0x4] = _mm_hadd_ps(zmm0, zmm0)
    float temp0_808[0x4] = _mm_hadd_ps(temp0_807, temp0_807)
    zmm1 = zmm7 & not.o(zmm12)
    float temp0_809[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_811[0x4] = _mm_insert_ps(temp0_808, _mm_hadd_ps(temp0_809, temp0_809), 0x1c)
    zmm1 = zmm7 & not.o(zmm11)
    float temp0_812[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_813[0x4] = _mm_hadd_ps(temp0_812, temp0_812)
    float temp0_815[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg8), arg8[1].d, 0x20), 
        temp0_811[0].q | temp0_813[0].q << 0x40)
    *arg8 = temp0_815[0]
    *(arg8 + 4) = __extractps_memd_xmmps_immb(temp0_815, 1)
    arg8[1].d = __extractps_memd_xmmps_immb(temp0_815, 2)
    zmm7 &= not.o(zmm8)
    zmm7 = _mm_hadd_ps(zmm7, zmm7)
    zmm7 = _mm_hadd_ps(zmm7, zmm7)
    zmm7[0] = zmm7[0] f+ *arg7
    *arg7 = zmm7[0]
else
    uint32_t var_2a8_1[0x4]
    uint64_t rdi
    
    if (i s<= 0)
        rdi = 0
        zmm11 = zx.o(0)
        zmm9 = zx.o(0)
        zmm5 = zx.o(0)
        var_2a8_1 = zx.o(0)
        
        if (0 s< arg9)
        label_14009e43f:
            float var_2c8_1[0x4] = zmm9
            uint32_t var_248_2[0x4] = zmm5
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi.d), 0), data_142e11d00)
            zmm4 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm1)
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm4
            int64_t rax_27 = sx.q(zmm1[0])
            void* rbx_3 = &(*arg4)[rax_27]
            zmm0 = (*arg4)[rax_27]
            int64_t rbp_1 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* r14_1 = &(*arg4)[rbp_1]
            int64_t rax_29 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* r15_1 = &(*arg4)[rax_29]
            int64_t rsi_5 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rdi_2 = &(*arg4)[rsi_5]
            float temp0_192[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg4)[rbp_1], 0x10), 
                    (*arg4)[rax_29], 0x20), 
                (*arg4)[rsi_5], 0x30)
            zmm2 = data_142fc95e0 & zmm4
            zmm8 = *(zx.q(zmm2[0]) + rbx_3)
            uint64_t rax_31 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_2 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rsi_6 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_198[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_31 + r14_1), 0x10), *(rbp_2 + r15_1), 
                    0x20), 
                *(rsi_6 + rdi_2), 0x30)
            zmm2 = data_142fc95f0 & zmm4
            zmm6 = *(zx.q(zmm2[0]) + rbx_3)
            uint64_t rax_33 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_3 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rbx_4 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_204[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_33 + r14_1), 0x10), *(rbp_3 + r15_1), 
                    0x20), 
                *(rbx_4 + rdi_2), 0x30)
            float var_e8_1[0x4] = zx.o(0)
            zmm7 = (*arg3)[3]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            uint32_t var_1c8_3[0x4] = zmm7
            var_1b8 = zmm7
            uint32_t var_1a8_3[0x4] = zmm7
            uint32_t var_198_2[0x4] = zmm7
            zmm5 = *arg3
            zmm1 = (*arg3)[1]
            zmm3 = (*arg3)[2]
            float temp0_206[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_208[0x4] = _mm_mul_ps(temp0_198, zmm5)
            zmm5 = _mm_mul_ps(zmm5, temp0_204)
            float temp0_210[0x4] = _mm_mul_ps(temp0_204, temp0_206)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_212[0x4] = _mm_mul_ps(temp0_206, temp0_192)
            float temp0_213[0x4] = _mm_mul_ps(temp0_192, zmm3)
            float temp0_214[0x4] = _mm_mul_ps(zx.o(0), zmm7)
            float temp0_216[0x4] = _mm_sub_ps(temp0_210, _mm_mul_ps(zmm3, temp0_198))
            float temp0_217[0x4] = _mm_sub_ps(temp0_213, zmm5)
            float temp0_218[0x4] = _mm_sub_ps(temp0_208, temp0_212)
            float temp0_219[0x4] = _mm_sub_ps(temp0_214, temp0_214)
            float temp0_220[0x4] = _mm_add_ps(temp0_216, temp0_216)
            float temp0_221[0x4] = _mm_add_ps(temp0_217, temp0_217)
            float temp0_222[0x4] = _mm_add_ps(temp0_218, temp0_218)
            float temp0_223[0x4] = _mm_add_ps(temp0_219, temp0_219)
            var_218 = temp0_220
            float var_208_3[0x4] = temp0_221
            float var_1f8_3[0x4] = temp0_222
            float var_1e8_2[0x4] = temp0_223
            zmm10 = zmm7
            zmm8 = zmm7
            float temp0_224[0x4] = _mm_mul_ps(temp0_223, zmm7)
            zmm7 = _mm_mul_ps(zmm7, temp0_220)
            float temp0_226[0x4] = _mm_mul_ps(zmm10, temp0_221)
            float temp0_227[0x4] = _mm_mul_ps(zmm8, temp0_222)
            zmm7 = __addps_xmmps_memps(zmm7, temp0_192)
            float temp0_229[0x4] = __addps_xmmps_memps(temp0_226, temp0_198)
            float temp0_230[0x4] = __addps_xmmps_memps(temp0_227, temp0_204)
            float temp0_231[0x4] = __addps_xmmps_memps(temp0_224, var_e8_1)
            var_298 = zmm7
            float var_268_1[0x4] = temp0_231
            zmm3 = *arg3
            zmm5 = (*arg3)[1]
            zmm1 = (*arg3)[2]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_234[0x4] = _mm_mul_ps(temp0_221, zmm3)
            zmm3 = _mm_mul_ps(zmm3, temp0_222)
            float temp0_236[0x4] = _mm_mul_ps(temp0_222, zmm5)
            float temp0_237[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm5 = _mm_mul_ps(zmm5, temp0_220)
            float temp0_239[0x4] = _mm_mul_ps(temp0_220, temp0_237)
            float temp0_241[0x4] = _mm_sub_ps(temp0_236, _mm_mul_ps(temp0_237, temp0_221))
            float temp0_242[0x4] = _mm_sub_ps(temp0_239, zmm3)
            float temp0_243[0x4] = _mm_sub_ps(temp0_234, zmm5)
            float temp0_244[0x4] = _mm_add_ps(temp0_241, zmm7)
            float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_229)
            float temp0_246[0x4] = _mm_add_ps(temp0_243, temp0_230)
            zmm10 = arg3[1][0]
            zmm7 = (*arg3)[5]
            float temp0_248[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_244)
            zmm7 = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_245)
            zmm5 = (*arg3)[6]
            zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_246)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_253[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm14 = _mm_sub_ps(temp0_248, temp0_253)
            float temp0_255[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_256[0x4] = _mm_sub_ps(zmm7, temp0_255)
            zmm15 = (*arg2)[2]
            float temp0_257[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_258[0x4] = _mm_sub_ps(zmm5, temp0_257)
            float var_1c8_4[0x4] = zmm14
            var_1b8 = temp0_256
            float var_1a8_4[0x4] = temp0_258
            zmm2 = *arg1
            zmm12 = (*arg1)[1]
            float temp0_259[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_260[0x4] = _mm_sub_ps(temp0_259, temp0_248)
            float temp0_261[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_262[0x4] = _mm_sub_ps(temp0_261, zmm7)
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_248, temp0_253, 6), zmm4)
            char temp0_266 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4))
            zmm3 = (*arg1)[2]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            uint32_t var_228_2[0x4] = zmm5
            float temp0_268[0x4] = _mm_sub_ps(zmm3, zmm5)
            var_218 = temp0_260
            float var_208_4[0x4] = temp0_262
            float var_1f8_4[0x4] = temp0_268
            uint32_t var_1d8_2[0x4] = zmm7
            zmm10 = _mm_cmpeq_ps(temp0_248, temp0_253, 2)
            
            if (temp0_266 != 0xf)
                zmm7 = _mm_cmpeq_ps(zmm7, temp0_255, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm4), zmm7)
                zmm1 = _mm_andnot_ps(zmm10, zmm4)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4)) != 0xf)
                zmm5 = _mm_cmpeq_ps(var_228_2, temp0_257, 2)
                zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm4), zmm5)
                zmm1 = zmm10 ^ zmm4
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm4)) == 0xf)
                zmm7 = temp0_260
            else
                zmm10 = _mm_and_ps(zmm10, zmm4)
                zmm5 = _mm_cmpeq_ps(temp0_259, temp0_248, 2)
                zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_259, temp0_248, 6), zmm10)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm10)) != 0xf)
                    float temp0_287[0x4] = __cmpps_xmmps_memps_immb(temp0_261, var_1d8_2, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm10), temp0_287)
                    zmm2 = zmm5 ^ zmm10
                
                zmm7 = temp0_260
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm10)) != 0xf)
                    zmm3 = __cmpps_xmmps_memps_immb(zmm3, var_228_2, 2)
                    zmm5 = _mm_and_ps(_mm_and_ps(zmm5, zmm10), zmm3)
                
                zmm10 = _mm_and_ps(zmm10, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm4)) != 0)
                zmm7 = _mm_max_ps(zmm7, zmm14)
                float temp0_605[0x4] = __maxps_xmmps_memps(temp0_262, temp0_256)
                float temp0_606[0x4] = __maxps_xmmps_memps(temp0_268, temp0_258)
                zmm3 = _mm_cmpeq_ps(temp0_605, zmm7, 1)
                zmm2 = _mm_and_ps(zmm10, zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_606, zmm7, 5), zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm4)) != 0)
                        zmm7 = _mm_blendv_ps(zmm7, temp0_606, zmm0)
                
                uint32_t temp0_630[0x4] = _mm_andnot_ps(zmm3, zmm10)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_630, zmm4)) != 0)
                    float temp0_633[0x4] = _mm_cmpeq_ps(temp0_606, temp0_605, 1)
                    zmm0 = _mm_and_ps(temp0_630, temp0_633)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm4)) != 0)
                        zmm7 = _mm_blendv_ps(zmm7, temp0_605, zmm0)
                    
                    zmm2 = _mm_andnot_ps(temp0_633, temp0_630)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                        zmm7 = _mm_blendv_ps(zmm7, temp0_606, zmm2)
            
            zmm8 = var_2a8_1
            zmm9 = var_2c8_1
            zmm11 = zmm11
            zmm0 = _mm_andnot_ps(zmm10, zmm4)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm10 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                int64_t rax_92 = 0
                zmm0 = data_142d3f780
                
                while (true)
                    float temp0_645[0x4] = _mm_cmpeq_ps(zx.o(0), zmm14, 1)
                    uint32_t temp0_646[0x4] = _mm_and_ps(temp0_645, zmm10)
                    
                    if (_mm_movemask_ps(_mm_and_ps(temp0_646, zmm4)) != 0)
                        char temp0_649 = _mm_movemask_ps(temp0_646)
                        
                        if ((temp0_649 & 1) == 0)
                            if ((temp0_649 & 2) != 0)
                                goto label_14009f860
                            
                            goto label_14009f77e
                        
                        *(&var_298 + rax_92) = zmm14[0]
                        
                        if ((temp0_649 & 2) != 0)
                        label_14009f860:
                            *(&var_298[1] + rax_92) = __extractps_memd_xmmps_immb(zmm14, 1)
                            
                            if ((temp0_649 & 4) == 0)
                                goto label_14009f787
                            
                            goto label_14009f872
                        
                    label_14009f77e:
                        
                        if ((temp0_649 & 4) != 0)
                        label_14009f872:
                            *(&var_298[2] + rax_92) = __extractps_memd_xmmps_immb(zmm14, 2)
                            
                            if ((temp0_649 & 8) != 0)
                                *(&var_298[3] + rax_92) = __extractps_memd_xmmps_immb(zmm14, 3)
                        else
                        label_14009f787:
                            
                            if ((temp0_649 & 8) != 0)
                                *(&var_298[3] + rax_92) = __extractps_memd_xmmps_immb(zmm14, 3)
                    
                    zmm2 = _mm_andnot_ps(temp0_645, zmm10)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm4)) != 0)
                        zmm5 = *(&var_218 + rax_92)
                        zmm3 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                        zmm6 = _mm_and_ps(zmm2, zmm3)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm4)) != 0)
                            zmm5 ^= zmm0
                            char temp0_658 = _mm_movemask_ps(zmm6)
                            
                            if ((temp0_658 & 1) == 0)
                                if ((temp0_658 & 2) != 0)
                                    goto label_14009f898
                                
                                goto label_14009f7e4
                            
                            *(&var_298 + rax_92) = zmm5[0]
                            
                            if ((temp0_658 & 2) != 0)
                            label_14009f898:
                                *(&var_298[1] + rax_92) = __extractps_memd_xmmps_immb(zmm5, 1)
                                
                                if ((temp0_658 & 4) == 0)
                                    goto label_14009f7ed
                                
                                goto label_14009f8a9
                            
                        label_14009f7e4:
                            
                            if ((temp0_658 & 4) != 0)
                            label_14009f8a9:
                                *(&var_298[2] + rax_92) = __extractps_memd_xmmps_immb(zmm5, 2)
                                
                                if ((temp0_658 & 8) != 0)
                                    *(&var_298[3] + rax_92) = __extractps_memd_xmmps_immb(zmm5, 3)
                            else
                            label_14009f7ed:
                                
                                if ((temp0_658 & 8) != 0)
                                    *(&var_298[3] + rax_92) = __extractps_memd_xmmps_immb(zmm5, 3)
                        
                        uint32_t temp0_660[0x4] = _mm_andnot_ps(zmm3, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(temp0_660, zmm4)) != 0)
                            char temp0_663 = _mm_movemask_ps(temp0_660)
                            
                            if ((temp0_663 & 1) == 0)
                                if ((temp0_663 & 2) != 0)
                                    goto label_14009f8d0
                                
                                goto label_14009f81f
                            
                            *(&var_298 + rax_92) = 0
                            
                            if ((temp0_663 & 2) != 0)
                            label_14009f8d0:
                                *(&var_298[1] + rax_92) = 0
                                
                                if ((temp0_663 & 4) == 0)
                                    goto label_14009f828
                                
                                goto label_14009f8e1
                            
                        label_14009f81f:
                            
                            if ((temp0_663 & 4) != 0)
                            label_14009f8e1:
                                *(&var_298[2] + rax_92) = 0
                                
                                if ((temp0_663 & 8) != 0)
                                    *(&var_298[3] + rax_92) = 0
                            else
                            label_14009f828:
                                
                                if ((temp0_663 & 8) != 0)
                                    *(&var_298[3] + rax_92) = 0
                    
                    if (rax_92 == 0x20)
                        break
                    
                    zmm14 = *(&var_1b8 + rax_92)
                    rax_92 += 0x10
                
                zmm0 = var_298
                zmm3 = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                float temp0_671[0x4] = _mm_add_ps(_mm_mul_ps(temp0_229, temp0_229), zmm3)
                float temp0_673[0x4] = _mm_add_ps(_mm_mul_ps(temp0_230, temp0_230), temp0_671)
                float temp0_674[0x4] = _mm_rsqrt_ps(temp0_673)
                float temp0_676[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_673, temp0_674), temp0_674)
                float temp0_679[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_676), temp0_674), data_142d3f640)
                float temp0_680[0x4] = _mm_rcp_ps(temp0_679)
                float temp0_681[0x4] = _mm_mul_ps(temp0_679, temp0_680)
                zmm7 = _mm_blendv_ps(zmm7, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_681), temp0_680), zmm10)
            
            zmm0 = arg6
            zmm7 = _mm_sub_ps(zmm7, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm7, data_142fc95d0, 1), zmm4)
            result = _mm_movemask_ps(zmm0)
            zmm5 = var_248_2
            
            if (result.b != 0)
                float temp0_690[0x4] = _mm_mul_ps(temp0_248, zmm7)
                result = zx.d(result.b)
                zmm2 = zmm5
                char temp3_1 = result.b & 1
                
                if (temp3_1 != 0)
                    zmm2 = zmm5
                    zmm2[0] = zmm2[0] + temp0_690[0]
                
                float temp0_691[0x4] = _mm_mul_ps(var_1d8_2, zmm7)
                zmm3 = zmm9
                
                if (temp3_1 == 0)
                    zmm4 = _mm_mul_ps(var_228_2, zmm7)
                    zmm1 = zmm11
                    
                    if (temp3_1 != 0)
                        goto label_14009fa09
                    
                    goto label_14009f9c7
                
                zmm3 = zmm9
                zmm3[0] = zmm3[0] f+ temp0_691[0]
                zmm4 = _mm_mul_ps(var_228_2, zmm7)
                zmm1 = zmm11
                bool cond:34_1
                bool cond:35_1
                bool cond:42_1
                bool cond:43_1
                
                if (temp3_1 != 0)
                label_14009fa09:
                    zmm1 = zmm11
                    zmm1[0] = zmm1[0] f+ zmm4[0]
                    zmm5 = __addps_xmmps_memps(zmm5, temp0_690)
                    char temp10_1 = result.b & 2
                    cond:34_1 = temp10_1 == 0
                    cond:35_1 = temp10_1 != 0
                    cond:42_1 = temp10_1 != 0
                    cond:43_1 = temp10_1 == 0
                    
                    if (temp10_1 == 0)
                        goto label_14009f9d0
                    
                    goto label_14009fa1a
                
            label_14009f9c7:
                zmm5 = __addps_xmmps_memps(zmm5, temp0_690)
                char temp9_1 = result.b & 2
                cond:34_1 = temp9_1 == 0
                cond:35_1 = temp9_1 != 0
                cond:42_1 = temp9_1 != 0
                cond:43_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                label_14009f9d0:
                    zmm9 = _mm_add_ps(zmm9, temp0_691)
                    
                    if (cond:35_1)
                        goto label_14009fa26
                    
                    goto label_14009f9d6
                
            label_14009fa1a:
                zmm2 = _mm_blend_ps(zmm2, zmm5, 2)
                zmm9 = _mm_add_ps(zmm9, temp0_691)
                
                if (not(cond:34_1))
                label_14009fa26:
                    zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                    zmm11 = _mm_add_ps(zmm11, zmm4)
                    
                    if (cond:43_1)
                        goto label_14009f9dc
                    
                    goto label_14009fa33
                
            label_14009f9d6:
                zmm11 = _mm_add_ps(zmm11, zmm4)
                bool cond:50_1
                bool cond:51_1
                bool cond:58_1
                bool cond:59_1
                
                if (not(cond:42_1))
                label_14009f9dc:
                    char temp18_1 = result.b & 4
                    cond:50_1 = temp18_1 != 0
                    cond:51_1 = temp18_1 == 0
                    cond:58_1 = temp18_1 == 0
                    cond:59_1 = temp18_1 != 0
                    
                    if (temp18_1 != 0)
                        goto label_14009fa3e
                    
                    goto label_14009f9e0
                
            label_14009fa33:
                zmm1 = _mm_blend_ps(zmm1, zmm11, 2)
                char temp17_1 = result.b & 4
                cond:50_1 = temp17_1 != 0
                cond:51_1 = temp17_1 == 0
                cond:58_1 = temp17_1 == 0
                cond:59_1 = temp17_1 != 0
                
                if (temp17_1 != 0)
                label_14009fa3e:
                    zmm2 = _mm_blend_ps(zmm2, zmm5, 4)
                    
                    if (cond:51_1)
                        goto label_14009f9e2
                    
                    goto label_14009fa46
                
            label_14009f9e0:
                
                if (not(cond:50_1))
                label_14009f9e2:
                    
                    if (cond:59_1)
                        goto label_14009fa4f
                    
                    goto label_14009f9e4
                
            label_14009fa46:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                bool cond:64_1
                bool cond:65_1
                bool cond:68_1
                bool cond:69_1
                
                if (not(cond:58_1))
                label_14009fa4f:
                    zmm1 = _mm_blend_ps(zmm1, zmm11, 4)
                    char temp26_1 = result.b & 8
                    cond:64_1 = temp26_1 == 0
                    cond:65_1 = temp26_1 != 0
                    cond:68_1 = temp26_1 != 0
                    cond:69_1 = temp26_1 == 0
                    
                    if (temp26_1 != 0)
                        goto label_14009f9e8
                    
                    goto label_14009fa5a
                
            label_14009f9e4:
                char temp25_1 = result.b & 8
                cond:64_1 = temp25_1 == 0
                cond:65_1 = temp25_1 != 0
                cond:68_1 = temp25_1 != 0
                cond:69_1 = temp25_1 == 0
                
                if (temp25_1 != 0)
                label_14009f9e8:
                    zmm5 = _mm_blend_ps(zmm5, zmm2, 7)
                    
                    if (cond:65_1)
                        goto label_14009fa5f
                    
                    goto label_14009f9f0
                
            label_14009fa5a:
                zmm5 = zmm2
                
                if (cond:64_1)
                label_14009f9f0:
                    zmm9 = zmm3
                    
                    if (cond:68_1)
                        zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
                else
                label_14009fa5f:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:69_1))
                        zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
                
                zmm8 = _mm_blendv_ps(zmm8, _mm_add_ps(zmm7, zmm8), zmm0)
                zmm11 = zmm1
        else
            zmm8 = var_2a8_1
    else
        zmm1 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float var_258_1[0x4] = *arg3
        float var_228_1[0x4] = (*arg3)[1]
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
        zmm5 = zx.o(0)
        
        do
            uint32_t var_248_1[0x4] = zmm5
            uint32_t var_2c8[0x4]
            __builtin_memset(&var_2c8, 0, 0x30)
            int64_t rax_4 = sx.q((rdi << 2).d * 3)
            zmm0 = *(arg4 + rax_4)
            zmm1 = *(arg4 + rax_4 + 0x10)
            zmm5 = *(arg4 + rax_4 + 0x20)
            uint32_t temp0_10[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_11[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm0, zmm1, 0xec)
            zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), temp0_12, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm1, 0xf0), temp0_10, 3)
            zmm2 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
            zmm7 = _mm_shuffle_ps(_mm_blend_epi16(temp0_11, zmm1, 0xc), zmm5, 0xc4)
            var_218 = zmm4
            uint32_t var_1f8_1[0x4] = zmm7
            int128_t var_1e8_1 = zx.o(0)
            float var_1c8_1[0x4] = temp0_1
            var_1b8 = temp0_1
            float var_1a8_1[0x4] = temp0_1
            float temp0_21[0x4] = _mm_shuffle_ps(var_228_1, var_228_1, 0)
            float temp0_22[0x4] = _mm_mul_ps(temp0_21, zmm7)
            zmm5 = var_1d8_1
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_24[0x4] = _mm_mul_ps(zmm5, zmm4)
            float temp0_25[0x4] = _mm_shuffle_ps(var_258_1, var_258_1, 0)
            zmm3 = _mm_mul_ps(temp0_25, zmm2)
            float temp0_28[0x4] = _mm_sub_ps(temp0_22, _mm_mul_ps(zmm2, zmm5))
            float temp0_30[0x4] = _mm_sub_ps(temp0_24, _mm_mul_ps(zmm7, temp0_25))
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm4, temp0_21))
            float temp0_33[0x4] = _mm_add_ps(temp0_28, temp0_28)
            float temp0_34[0x4] = _mm_add_ps(temp0_30, temp0_30)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_36[0x4] = _mm_mul_ps(temp0_1, temp0_34)
            zmm7 = _mm_mul_ps(temp0_33, zmm5)
            float temp0_38[0x4] = _mm_mul_ps(temp0_34, zmm5)
            zmm5 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, temp0_21), temp0_38), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_33), var_218))
            float temp0_44[0x4] = _mm_mul_ps(temp0_1, zmm3)
            float temp0_45[0x4] = __addps_xmmps_memps(temp0_36, zmm2)
            float temp0_46[0x4] = __addps_xmmps_memps(temp0_44, var_1f8_1)
            float var_198_1[0x4] = temp0_1
            zmm4 = _mm_mul_ps(temp0_34, temp0_25)
            zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, _mm_mul_ps(zmm3, temp0_25)), temp0_45)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_33, temp0_21)), temp0_46)
            zmm12 = arg3[1][0]
            zmm8 = (*arg3)[5]
            float temp0_55[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm5)
            float temp0_57[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm7)
            zmm14 = (*arg3)[6]
            float temp0_59[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm4)
            zmm4 = temp0_2
            zmm15 = _mm_sub_ps(temp0_55, zmm4)
            float temp0_61[0x4] = __subps_xmmps_memps(temp0_57, temp0_3)
            float temp0_62[0x4] = __subps_xmmps_memps(temp0_59, temp0_4)
            float var_1c8_2[0x4] = zmm15
            var_1b8 = temp0_61
            float var_1a8_2[0x4] = temp0_62
            float temp0_63[0x4] = _mm_sub_ps(temp0_5, temp0_55)
            float temp0_64[0x4] = _mm_sub_ps(temp0_6, temp0_57)
            char temp0_66 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_55, zmm4, 6))
            float temp0_67[0x4] = _mm_sub_ps(temp0_7, temp0_59)
            var_218 = temp0_63
            float var_208_2[0x4] = temp0_64
            float var_1f8_2[0x4] = temp0_67
            float var_2b8_1[0x4]
            
            if (temp0_66 == 0xf)
                zmm3 = _mm_cmpeq_ps(temp0_55, zmm4, 2)
            label_14009dff8:
                zmm7 = var_248_1
                zmm5 = var_2c8
                zmm11 = var_2b8_1
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f)
                
                if (_mm_movemask_ps(zmm1) != 0)
                label_14009e023:
                    float temp0_101[0x4] = _mm_max_ps(temp0_63, zmm15)
                    float temp0_102[0x4] = _mm_max_ps(temp0_64, temp0_61)
                    float temp0_103[0x4] = _mm_max_ps(temp0_67, temp0_62)
                    zmm3 = _mm_cmpeq_ps(temp0_102, temp0_101, 1)
                    uint32_t temp0_105[0x4] = _mm_and_ps(zmm1, zmm3)
                    
                    if (_mm_movemask_ps(temp0_105) != 0)
                        float temp0_107[0x4] = _mm_cmpeq_ps(temp0_103, temp0_101, 1)
                        zmm0 = _mm_and_ps(temp0_105, temp0_107)
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_101, zmm0)
                        
                        zmm2 = _mm_andnot_ps(temp0_107, temp0_105)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_103, zmm2)
                    
                    uint32_t temp0_114[0x4] = _mm_andnot_ps(zmm3, zmm1)
                    
                    if (_mm_movemask_ps(temp0_114) != 0)
                        float temp0_116[0x4] = _mm_cmpeq_ps(temp0_103, temp0_102, 1)
                        zmm0 = _mm_and_ps(temp0_114, temp0_116)
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_102, zmm0)
                        
                        zmm2 = _mm_andnot_ps(temp0_116, temp0_114)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            arg5 = _mm_blendv_ps(arg5, temp0_103, zmm2)
            else
                float temp0_68[0x4] = _mm_cmpeq_ps(temp0_55, zmm4, 2)
                zmm4 = (*arg2)[1]
                zmm3 =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_57, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_68)
                zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                
                if (_mm_movemask_ps(zmm3 ^ zmm5) == 0xf)
                    goto label_14009dff8
                
                zmm4 = (*arg2)[2]
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_59, _mm_shuffle_ps(zmm4, zmm4, 0), 2), zmm3)
                
                if (_mm_movemask_ps(zmm1 ^ zmm5) == 0xf)
                    zmm7 = var_248_1
                    zmm5 = var_2c8
                    zmm11 = var_2b8_1
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009e023
                else
                    zmm3 = *arg1
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm4 = _mm_and_ps(_mm_cmpeq_ps(zmm3, temp0_55, 6), zmm1)
                    char temp0_82 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm1))
                    zmm3 = _mm_cmpeq_ps(zmm3, temp0_55, 2)
                    
                    if (temp0_82 != 0xf)
                        zmm4 = (*arg1)[1]
                        zmm4 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_57, 2)
                        zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm1), zmm4)
                        zmm4 = _mm_andnot_ps(zmm3, zmm1)
                    
                    zmm7 = var_248_1
                    zmm5 = var_2c8
                    zmm11 = var_2b8_1
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm1)) != 0xf)
                        zmm4 = (*arg1)[2]
                        zmm4 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_59, 2)
                        zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm1), zmm4)
                    
                    zmm1 = _mm_and_ps(zmm1, zmm3)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009e023
            zmm6 = data_142d3f780
            zmm9 = zmm5
            zmm5 = zmm7
            zmm1 ^= data_142d3f800
            
            if (_mm_movemask_ps(zmm1) != 0)
                int64_t rbx_1 = 0
                
                while (true)
                    float temp0_124[0x4] = _mm_cmpeq_ps(zx.o(0), zmm15, 1)
                    uint32_t temp0_126 = _mm_movemask_ps(_mm_and_ps(temp0_124, zmm1))
                    
                    if (temp0_126 != 0)
                        char rax_20 = temp0_126.b
                        
                        if ((rax_20 & 1) == 0)
                            if ((rax_20 & 2) != 0)
                                goto label_14009e1bf
                            
                            goto label_14009e104
                        
                        *(&var_298 + rbx_1) = zmm15[0]
                        
                        if ((rax_20 & 2) != 0)
                        label_14009e1bf:
                            *(&var_298[1] + rbx_1) = __extractps_memd_xmmps_immb(zmm15, 1)
                            
                            if ((rax_20 & 4) == 0)
                                goto label_14009e10c
                            
                            goto label_14009e1d0
                        
                    label_14009e104:
                        
                        if ((rax_20 & 4) != 0)
                        label_14009e1d0:
                            *(&var_298[2] + rbx_1) = __extractps_memd_xmmps_immb(zmm15, 2)
                            
                            if ((rax_20 & 8) != 0)
                                *(&var_298[3] + rbx_1) = __extractps_memd_xmmps_immb(zmm15, 3)
                        else
                        label_14009e10c:
                            
                            if ((rax_20 & 8) != 0)
                                *(&var_298[3] + rbx_1) = __extractps_memd_xmmps_immb(zmm15, 3)
                    
                    zmm0 = _mm_andnot_ps(temp0_124, zmm1)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm3 = *(&var_218 + rbx_1)
                        float temp0_130[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        uint32_t temp0_132 = _mm_movemask_ps(_mm_and_ps(zmm0, temp0_130))
                        
                        if (temp0_132 != 0)
                            zmm3 ^= zmm6
                            char rax_23 = temp0_132.b
                            
                            if ((rax_23 & 1) == 0)
                                if ((rax_23 & 2) != 0)
                                    goto label_14009e1f4
                                
                                goto label_14009e154
                            
                            *(&var_298 + rbx_1) = zmm3[0]
                            
                            if ((rax_23 & 2) != 0)
                            label_14009e1f4:
                                *(&var_298[1] + rbx_1) = __extractps_memd_xmmps_immb(zmm3, 1)
                                
                                if ((rax_23 & 4) == 0)
                                    goto label_14009e15c
                                
                                goto label_14009e204
                            
                        label_14009e154:
                            
                            if ((rax_23 & 4) != 0)
                            label_14009e204:
                                *(&var_298[2] + rbx_1) = __extractps_memd_xmmps_immb(zmm3, 2)
                                
                                if ((rax_23 & 8) != 0)
                                    *(&var_298[3] + rbx_1) = __extractps_memd_xmmps_immb(zmm3, 3)
                            else
                            label_14009e15c:
                                
                                if ((rax_23 & 8) != 0)
                                    *(&var_298[3] + rbx_1) = __extractps_memd_xmmps_immb(zmm3, 3)
                        
                        uint32_t temp0_135 = _mm_movemask_ps(_mm_andnot_ps(temp0_130, zmm0))
                        
                        if (temp0_135 != 0)
                            char rax_25 = temp0_135.b
                            
                            if ((rax_25 & 1) == 0)
                                if ((rax_25 & 2) != 0)
                                    goto label_14009e229
                                
                                goto label_14009e184
                            
                            *(&var_298 + rbx_1) = 0
                            
                            if ((rax_25 & 2) != 0)
                            label_14009e229:
                                *(&var_298[1] + rbx_1) = 0
                                
                                if ((rax_25 & 4) == 0)
                                    goto label_14009e18c
                                
                                goto label_14009e239
                            
                        label_14009e184:
                            
                            if ((rax_25 & 4) != 0)
                            label_14009e239:
                                *(&var_298[2] + rbx_1) = 0
                                
                                if ((rax_25 & 8) != 0)
                                    *(&var_298[3] + rbx_1) = 0
                            else
                            label_14009e18c:
                                
                                if ((rax_25 & 8) != 0)
                                    *(&var_298[3] + rbx_1) = 0
                    
                    if (rbx_1 == 0x20)
                        break
                    
                    zmm15 = *(&var_1b8 + rbx_1)
                    rbx_1 += 0x10
                
                zmm0 = var_298
                float temp0_141[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                float temp0_143[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), temp0_141)
                zmm3 = _mm_add_ps(_mm_mul_ps(var_278, var_278), temp0_143)
                float temp0_146[0x4] = _mm_rsqrt_ps(zmm3)
                zmm3 = _mm_mul_ps(_mm_mul_ps(zmm3, temp0_146), temp0_146)
                float temp0_151[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm3), temp0_146), data_142d3f640)
                float temp0_152[0x4] = _mm_rcp_ps(temp0_151)
                float temp0_153[0x4] = _mm_mul_ps(temp0_151, temp0_152)
                arg5 = _mm_blendv_ps(arg5, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_153), temp0_152), zmm1)
            
            float temp0_157[0x4] = __subps_xmmps_memps(arg5, temp0_8)
            float temp0_158[0x4] = __cmpps_xmmps_memps_immb(temp0_157, data_142fc95d0, 1)
            result = _mm_movemask_ps(temp0_158)
            
            if (result.b != 0)
                float temp0_160[0x4] = _mm_mul_ps(temp0_55, temp0_157)
                char rbx_2 = result.b
                zmm6 = zmm5
                char temp1_1 = rbx_2 & 1
                
                if (temp1_1 == 0)
                    zmm8 = _mm_mul_ps(temp0_57, temp0_157)
                    zmm3 = zmm9
                    
                    if (temp1_1 != 0)
                        goto label_14009e376
                    
                    goto label_14009e2f1
                
                zmm6 = zmm5
                zmm6[0] = zmm6[0] + temp0_160[0]
                zmm8 = _mm_mul_ps(temp0_57, temp0_157)
                zmm3 = zmm9
                
                if (temp1_1 != 0)
                label_14009e376:
                    zmm3 = zmm9
                    zmm3[0] = zmm3[0] f+ zmm8[0]
                    zmm14 = _mm_mul_ps(temp0_59, temp0_157)
                    zmm2 = zmm11
                    
                    if (temp1_1 == 0)
                        goto label_14009e2ff
                    
                    goto label_14009e38d
                
            label_14009e2f1:
                zmm14 = _mm_mul_ps(temp0_59, temp0_157)
                zmm2 = zmm11
                bool cond:20_1
                bool cond:21_1
                bool cond:28_1
                bool cond:29_1
                
                if (temp1_1 == 0)
                label_14009e2ff:
                    zmm5 = _mm_add_ps(zmm5, temp0_160)
                    char temp5_1 = rbx_2 & 2
                    cond:20_1 = temp5_1 != 0
                    cond:21_1 = temp5_1 == 0
                    cond:28_1 = temp5_1 == 0
                    cond:29_1 = temp5_1 != 0
                    
                    if (temp5_1 != 0)
                        goto label_14009e3a3
                    
                    goto label_14009e30c
                
            label_14009e38d:
                zmm2 = zmm11
                zmm2[0] = zmm2[0] + zmm14[0]
                zmm5 = _mm_add_ps(zmm5, temp0_160)
                char temp4_1 = rbx_2 & 2
                cond:20_1 = temp4_1 != 0
                cond:21_1 = temp4_1 == 0
                cond:28_1 = temp4_1 == 0
                cond:29_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                label_14009e3a3:
                    zmm6 = _mm_blend_ps(zmm6, zmm5, 2)
                    zmm9 = _mm_add_ps(zmm9, zmm8)
                    
                    if (cond:21_1)
                        goto label_14009e316
                    
                    goto label_14009e3b3
                
            label_14009e30c:
                zmm9 = _mm_add_ps(zmm9, zmm8)
                
                if (not(cond:20_1))
                label_14009e316:
                    zmm11 = _mm_add_ps(zmm11, zmm14)
                    
                    if (cond:29_1)
                        goto label_14009e3c4
                    
                    goto label_14009e320
                
            label_14009e3b3:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                zmm11 = _mm_add_ps(zmm11, zmm14)
                bool cond:36_1
                bool cond:37_1
                bool cond:44_1
                bool cond:45_1
                
                if (not(cond:28_1))
                label_14009e3c4:
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                    char temp12_1 = rbx_2 & 4
                    cond:36_1 = temp12_1 == 0
                    cond:37_1 = temp12_1 != 0
                    cond:44_1 = temp12_1 != 0
                    cond:45_1 = temp12_1 == 0
                    
                    if (temp12_1 == 0)
                        goto label_14009e329
                    
                    goto label_14009e3d4
                
            label_14009e320:
                char temp11_1 = rbx_2 & 4
                cond:36_1 = temp11_1 == 0
                cond:37_1 = temp11_1 != 0
                cond:44_1 = temp11_1 != 0
                cond:45_1 = temp11_1 == 0
                
                if (temp11_1 != 0)
                label_14009e3d4:
                    zmm6 = _mm_blend_ps(zmm6, zmm5, 4)
                    
                    if (not(cond:36_1))
                    label_14009e3e0:
                        zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                        
                        if (cond:45_1)
                            goto label_14009e335
                        
                        goto label_14009e3ed
                else
                label_14009e329:
                    
                    if (cond:37_1)
                        goto label_14009e3e0
                
                bool cond:52_1
                bool cond:53_1
                bool cond:60_1
                bool cond:61_1
                
                if (not(cond:44_1))
                label_14009e335:
                    char temp20_1 = rbx_2 & 8
                    cond:52_1 = temp20_1 != 0
                    cond:53_1 = temp20_1 == 0
                    cond:60_1 = temp20_1 == 0
                    cond:61_1 = temp20_1 != 0
                    
                    if (temp20_1 == 0)
                        goto label_14009e3fd
                    
                    goto label_14009e33e
                
            label_14009e3ed:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
                char temp19_1 = rbx_2 & 8
                cond:52_1 = temp19_1 != 0
                cond:53_1 = temp19_1 == 0
                cond:60_1 = temp19_1 == 0
                cond:61_1 = temp19_1 != 0
                
                if (temp19_1 == 0)
                label_14009e3fd:
                    zmm5 = zmm6
                    
                    if (cond:53_1)
                        goto label_14009e34a
                    
                    goto label_14009e406
                
            label_14009e33e:
                zmm5 = _mm_blend_ps(zmm5, zmm6, 7)
                
                if (cond:52_1)
                label_14009e406:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:60_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                else
                label_14009e34a:
                    zmm9 = zmm3
                    
                    if (cond:61_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                
                var_2a8_1 = _mm_blendv_ps(var_2a8_1, _mm_add_ps(temp0_157, var_2a8_1), temp0_158)
                zmm11 = zmm2
            
            rdi = zx.q(rdi.d + 4)
        while (rdi.d s< i)
        
        if (rdi.d s< arg9)
            goto label_14009e43f
        
        zmm8 = var_2a8_1
    zmm5 = _mm_hadd_ps(zmm5, zmm5)
    zmm5 = _mm_hadd_ps(zmm5, zmm5)
    float temp0_713[0x4] = _mm_hadd_ps(zmm9, zmm9)
    zmm5 = _mm_insert_ps(zmm5, _mm_hadd_ps(temp0_713, temp0_713), 0x1c)
    float temp0_716[0x4] = _mm_hadd_ps(zmm11, zmm11)
    float temp0_717[0x4] = _mm_hadd_ps(temp0_716, temp0_716)
    float temp0_719[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg8), arg8[1].d, 0x20), 
        zmm5[0].q | temp0_717[0].q << 0x40)
    *arg8 = temp0_719[0]
    *(arg8 + 4) = __extractps_memd_xmmps_immb(temp0_719, 1)
    arg8[1].d = __extractps_memd_xmmps_immb(temp0_719, 2)
    float temp0_722[0x4] = _mm_hadd_ps(zmm8, zmm8)
    float temp0_723[0x4] = _mm_hadd_ps(temp0_722, temp0_722)
    temp0_723[0] = temp0_723[0] f+ *arg7
    *arg7 = temp0_723[0]
return result
