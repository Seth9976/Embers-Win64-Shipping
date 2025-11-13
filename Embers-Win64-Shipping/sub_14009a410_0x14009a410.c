// 函数: sub_14009a410
// 地址: 0x14009a410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float var_68[0x4] = arg5
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm9[0x4]
float var_a8[0x4] = zmm9
float zmm8[0x4]
float var_b8[0x4] = zmm8
float zmm7[0x4]
float var_c8[0x4] = zmm7
float zmm6[0x4]
float var_d8[0x4] = zmm6
int128_t* result = arg11
float zmm1[0x4] = *result
float zmm0[0x4] = arg7
int32_t i = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
float var_2a8[0x4]
float var_298[0x4]
float var_288[0x4]
float var_228[0x4]
float var_218[0x4]
float var_1d8[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]
float zmm10[0x4]

if (_mm_movemask_ps(zmm1) != 0xf)
    float var_168_1[0x4] = zmm1
    float var_2b8_2[0x4]
    uint64_t rbx_2
    
    if (i s<= 0)
        rbx_2 = 0
        zmm11 = zx.o(0)
        zmm12 = zx.o(0)
        zmm10 = zx.o(0)
        var_2b8_2 = zx.o(0)
        
        if (0 s< arg10)
        label_14009b718:
            zmm2 = zmm10
            float var_258_3[0x4] = zmm11
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx_2.d), 0), data_142e11d00)
            zmm10 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm0)
            int64_t rsi_14 = sx.q(rbx_2.d << 2)
            uint32_t temp0_389 = _mm_movemask_ps(zmm10)
            float var_2c8_3[0x4] = zmm2
            
            if ((zx.q(temp0_389) & 0xfffffff9) != 9)
                if ((temp0_389.b & 1) != 0)
                    var_228[0] = *(arg6 + rsi_14)
                
                if ((temp0_389.b & 2) == 0)
                    if ((temp0_389.b & 4) != 0)
                        goto label_14009c1b2
                    
                    goto label_14009bc3f
                
                var_228[1] = *(arg6 + rsi_14 + 4)
                
                if ((temp0_389.b & 4) == 0)
                label_14009bc3f:
                    
                    if ((temp0_389.b & 8) != 0)
                        var_228[3] = *(arg6 + rsi_14 + 0xc)
                else
                label_14009c1b2:
                    var_228[2] = *(arg6 + rsi_14 + 8)
                    
                    if ((temp0_389.b & 8) != 0)
                        var_228[3] = *(arg6 + rsi_14 + 0xc)
                
                zmm1 = var_228
            else
                zmm1 = *(arg6 + rsi_14)
            
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm10
            int64_t rax_58 = sx.q(zmm1[0])
            int64_t rbx_6 = arg4 + (rax_58 << 2)
            zmm0 = *(arg4 + (rax_58 << 2))
            int64_t rbp_20 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t r14_2 = arg4 + (rbp_20 << 2)
            int64_t rax_60 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t r15_2 = arg4 + (rax_60 << 2)
            int64_t rsi_19 = sx.q(_mm_extract_epi32(zmm1, 3))
            int64_t rdi_10 = arg4 + (rsi_19 << 2)
            float temp0_506[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg4 + (rbp_20 << 2)), 0x10), 
                    *(arg4 + (rax_60 << 2)), 0x20), 
                *(arg4 + (rsi_19 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm10
            zmm8 = *(zx.q(zmm2[0]) + rbx_6)
            uint64_t rax_62 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_21 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rsi_20 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_512[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_62 + r14_2), 0x10), *(rbp_21 + r15_2), 
                    0x20), 
                *(rsi_20 + rdi_10), 0x30)
            zmm2 = data_142fc95f0 & zmm10
            zmm6 = *(zx.q(zmm2[0]) + rbx_6)
            uint64_t rax_64 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_22 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rbx_7 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_518[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_64 + r14_2), 0x10), *(rbp_22 + r15_2), 
                    0x20), 
                *(rbx_7 + rdi_10), 0x30)
            float var_e8_2[0x4] = zx.o(0)
            zmm7 = (*arg3)[3]
            float temp0_519[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float var_228_5[0x4] = temp0_519
            var_218 = temp0_519
            float var_208_7[0x4] = temp0_519
            float var_1f8_4[0x4] = temp0_519
            zmm3 = *arg3
            zmm1 = (*arg3)[1]
            zmm4 = (*arg3)[2]
            float temp0_520[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_521[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_522[0x4] = _mm_mul_ps(temp0_512, temp0_521)
            float temp0_523[0x4] = _mm_mul_ps(temp0_521, temp0_518)
            float temp0_524[0x4] = _mm_mul_ps(temp0_518, temp0_520)
            float temp0_525[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_526[0x4] = _mm_mul_ps(temp0_520, temp0_506)
            float temp0_527[0x4] = _mm_mul_ps(temp0_506, temp0_525)
            float temp0_528[0x4] = _mm_mul_ps(zx.o(0), temp0_519)
            float temp0_530[0x4] = _mm_sub_ps(temp0_524, _mm_mul_ps(temp0_525, temp0_512))
            float temp0_531[0x4] = _mm_sub_ps(temp0_527, temp0_523)
            float temp0_532[0x4] = _mm_sub_ps(temp0_522, temp0_526)
            float temp0_533[0x4] = _mm_sub_ps(temp0_528, temp0_528)
            float temp0_534[0x4] = _mm_add_ps(temp0_530, temp0_530)
            float temp0_535[0x4] = _mm_add_ps(temp0_531, temp0_531)
            float temp0_536[0x4] = _mm_add_ps(temp0_532, temp0_532)
            float temp0_537[0x4] = _mm_add_ps(temp0_533, temp0_533)
            var_1d8 = temp0_534
            float var_1c8_7[0x4] = temp0_535
            float var_1b8_7[0x4] = temp0_536
            float var_1a8_4[0x4] = temp0_537
            float temp0_538[0x4] = _mm_mul_ps(temp0_537, temp0_519)
            float temp0_539[0x4] = _mm_mul_ps(temp0_519, temp0_534)
            float temp0_540[0x4] = _mm_mul_ps(temp0_519, temp0_535)
            float temp0_541[0x4] = _mm_mul_ps(temp0_519, temp0_536)
            float temp0_542[0x4] = __addps_xmmps_memps(temp0_539, temp0_506)
            float temp0_543[0x4] = __addps_xmmps_memps(temp0_540, temp0_512)
            float temp0_544[0x4] = __addps_xmmps_memps(temp0_541, temp0_518)
            float temp0_545[0x4] = __addps_xmmps_memps(temp0_538, var_e8_2)
            var_2a8 = temp0_542
            float var_278_2[0x4] = temp0_545
            zmm4 = *arg3
            zmm1 = (*arg3)[1]
            zmm3 = (*arg3)[2]
            float temp0_546[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_547[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_548[0x4] = _mm_mul_ps(temp0_535, temp0_547)
            float temp0_549[0x4] = _mm_mul_ps(temp0_547, temp0_536)
            float temp0_550[0x4] = _mm_mul_ps(temp0_536, temp0_546)
            float temp0_551[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_552[0x4] = _mm_mul_ps(temp0_546, temp0_534)
            float temp0_553[0x4] = _mm_mul_ps(temp0_534, temp0_551)
            float temp0_555[0x4] = _mm_sub_ps(temp0_550, _mm_mul_ps(temp0_551, temp0_535))
            float temp0_556[0x4] = _mm_sub_ps(temp0_553, temp0_549)
            float temp0_557[0x4] = _mm_sub_ps(temp0_548, temp0_552)
            float temp0_558[0x4] = _mm_add_ps(temp0_555, temp0_542)
            float temp0_559[0x4] = _mm_add_ps(temp0_556, temp0_543)
            float temp0_560[0x4] = _mm_add_ps(temp0_557, temp0_544)
            zmm11 = arg3[1][0]
            zmm14 = (*arg3)[5]
            float temp0_562[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_558)
            float temp0_564[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_559)
            zmm4 = (*arg3)[6]
            float temp0_566[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_560)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_567[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm5 = _mm_sub_ps(temp0_562, temp0_567)
            float temp0_569[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_570[0x4] = _mm_sub_ps(temp0_564, temp0_569)
            zmm15 = (*arg2)[2]
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_572[0x4] = _mm_sub_ps(temp0_566, zmm15)
            float var_228_6[0x4] = zmm5
            var_218 = temp0_570
            float var_208_8[0x4] = temp0_572
            zmm2 = *arg1
            zmm7 = (*arg1)[1]
            float temp0_573[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_574[0x4] = _mm_sub_ps(temp0_573, temp0_562)
            float temp0_575[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_576[0x4] = _mm_sub_ps(temp0_575, temp0_564)
            zmm6 = (*arg1)[2]
            float temp0_577[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_562, temp0_567, 6), zmm10)
            char temp0_581 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm10))
            float temp0_582[0x4] = _mm_sub_ps(temp0_577, temp0_566)
            var_1d8 = temp0_574
            float var_1c8_8[0x4] = temp0_576
            float var_1b8_8[0x4] = temp0_582
            zmm1 = _mm_cmpeq_ps(temp0_562, temp0_567, 2)
            
            if (temp0_581 != 0xf)
                float temp0_584[0x4] = _mm_cmpeq_ps(temp0_564, temp0_569, 2)
                zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm10), temp0_584)
                zmm3 = _mm_andnot_ps(zmm1, zmm10)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm10)) != 0xf)
                float temp0_590[0x4] = _mm_cmpeq_ps(temp0_566, zmm15, 2)
                zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm10), temp0_590)
                zmm3 = zmm1 ^ zmm10
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm10)) == 0xf)
                zmm7 = var_168_1
            else
                zmm1 = _mm_and_ps(zmm1, zmm10)
                zmm0 = _mm_cmpeq_ps(temp0_573, temp0_562, 2)
                zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_573, temp0_562, 6), zmm1)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm1)) != 0xf)
                    float temp0_601[0x4] = __cmpps_xmmps_memps_immb(temp0_575, temp0_564, 2)
                    zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm1), temp0_601)
                    zmm2 = zmm0 ^ zmm1
                
                zmm7 = var_168_1
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm1)) != 0xf)
                    float temp0_606[0x4] = _mm_cmpeq_ps(temp0_577, temp0_566, 2)
                    zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm1), temp0_606)
                
                zmm1 = _mm_and_ps(zmm1, zmm0)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm10)) == 0)
                zmm8 = var_2b8_2
                zmm9 = var_2c8_3
                zmm14 = temp0_564
                zmm11 = temp0_562
            else
                zmm15 = _mm_max_ps(temp0_574, zmm5)
                float temp0_627[0x4] = __maxps_xmmps_memps(temp0_576, temp0_570)
                float temp0_628[0x4] = __maxps_xmmps_memps(temp0_582, temp0_572)
                float temp0_629[0x4] = _mm_cmpeq_ps(temp0_627, zmm15, 1)
                zmm2 = _mm_and_ps(zmm1, temp0_629)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm10)) != 0)
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_628, zmm15, 5), zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm10)) != 0)
                        zmm15 = _mm_blendv_ps(zmm15, temp0_628, zmm0)
                
                zmm14 = temp0_564
                zmm6 = _mm_andnot_ps(temp0_629, zmm1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm10)) == 0)
                    zmm8 = var_2b8_2
                    zmm9 = var_2c8_3
                    zmm11 = temp0_562
                else
                    float temp0_735[0x4] = _mm_cmpeq_ps(temp0_628, temp0_627, 1)
                    zmm0 = _mm_and_ps(zmm6, temp0_735)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm10)) != 0)
                        zmm15 = _mm_blendv_ps(zmm15, temp0_627, zmm0)
                    
                    zmm2 = _mm_andnot_ps(temp0_735, zmm6)
                    zmm11 = temp0_562
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm10)) != 0)
                        zmm15 = _mm_blendv_ps(zmm15, temp0_628, zmm2)
                    
                    zmm8 = var_2b8_2
                    zmm9 = var_2c8_3
            
            zmm0 = _mm_andnot_ps(zmm1, zmm10)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                int64_t rax_89 = 0
                zmm0 = data_142d3f780
                
                while (true)
                    float temp0_747[0x4] = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                    zmm3 = _mm_and_ps(temp0_747, zmm1)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm10)) != 0)
                        char temp0_751 = _mm_movemask_ps(zmm3)
                        
                        if ((temp0_751 & 1) == 0)
                            if ((temp0_751 & 2) != 0)
                                goto label_14009c7af
                            
                            goto label_14009c6cc
                        
                        *(&var_2a8 + rax_89) = zmm5[0]
                        
                        if ((temp0_751 & 2) != 0)
                        label_14009c7af:
                            *(&var_2a8[1] + rax_89) = __extractps_memd_xmmps_immb(zmm5, 1)
                            
                            if ((temp0_751 & 4) == 0)
                                goto label_14009c6d5
                            
                            goto label_14009c7c0
                        
                    label_14009c6cc:
                        
                        if ((temp0_751 & 4) != 0)
                        label_14009c7c0:
                            *(&var_2a8[2] + rax_89) = __extractps_memd_xmmps_immb(zmm5, 2)
                            
                            if ((temp0_751 & 8) != 0)
                                *(&var_2a8[3] + rax_89) = __extractps_memd_xmmps_immb(zmm5, 3)
                        else
                        label_14009c6d5:
                            
                            if ((temp0_751 & 8) != 0)
                                *(&var_2a8[3] + rax_89) = __extractps_memd_xmmps_immb(zmm5, 3)
                    
                    zmm2 = _mm_andnot_ps(temp0_747, zmm1)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm10)) != 0)
                        zmm3 = *(&var_1d8 + rax_89)
                        float temp0_756[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        zmm6 = _mm_and_ps(zmm2, temp0_756)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm10)) != 0)
                            zmm3 ^= zmm0
                            char temp0_760 = _mm_movemask_ps(zmm6)
                            
                            if ((temp0_760 & 1) == 0)
                                if ((temp0_760 & 2) != 0)
                                    goto label_14009c7e5
                                
                                goto label_14009c732
                            
                            *(&var_2a8 + rax_89) = zmm3[0]
                            
                            if ((temp0_760 & 2) != 0)
                            label_14009c7e5:
                                *(&var_2a8[1] + rax_89) = __extractps_memd_xmmps_immb(zmm3, 1)
                                
                                if ((temp0_760 & 4) == 0)
                                    goto label_14009c73b
                                
                                goto label_14009c7f6
                            
                        label_14009c732:
                            
                            if ((temp0_760 & 4) != 0)
                            label_14009c7f6:
                                *(&var_2a8[2] + rax_89) = __extractps_memd_xmmps_immb(zmm3, 2)
                                
                                if ((temp0_760 & 8) != 0)
                                    *(&var_2a8[3] + rax_89) = __extractps_memd_xmmps_immb(zmm3, 3)
                            else
                            label_14009c73b:
                                
                                if ((temp0_760 & 8) != 0)
                                    *(&var_2a8[3] + rax_89) = __extractps_memd_xmmps_immb(zmm3, 3)
                        
                        zmm5 = _mm_andnot_ps(temp0_756, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm10)) != 0)
                            char temp0_765 = _mm_movemask_ps(zmm5)
                            
                            if ((temp0_765 & 1) == 0)
                                if ((temp0_765 & 2) != 0)
                                    goto label_14009c81d
                                
                                goto label_14009c76e
                            
                            *(&var_2a8 + rax_89) = 0
                            
                            if ((temp0_765 & 2) != 0)
                            label_14009c81d:
                                *(&var_2a8[1] + rax_89) = 0
                                
                                if ((temp0_765 & 4) == 0)
                                    goto label_14009c777
                                
                                goto label_14009c82e
                            
                        label_14009c76e:
                            
                            if ((temp0_765 & 4) != 0)
                            label_14009c82e:
                                *(&var_2a8[2] + rax_89) = 0
                                
                                if ((temp0_765 & 8) != 0)
                                    *(&var_2a8[3] + rax_89) = 0
                            else
                            label_14009c777:
                                
                                if ((temp0_765 & 8) != 0)
                                    *(&var_2a8[3] + rax_89) = 0
                    
                    if (rax_89 == 0x20)
                        break
                    
                    zmm5 = *(&var_218 + rax_89)
                    rax_89 += 0x10
                
                zmm0 = var_2a8
                float temp0_771[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                float temp0_773[0x4] = _mm_add_ps(_mm_mul_ps(temp0_543, temp0_543), temp0_771)
                float temp0_775[0x4] = _mm_add_ps(_mm_mul_ps(temp0_544, temp0_544), temp0_773)
                float temp0_776[0x4] = _mm_rsqrt_ps(temp0_775)
                float temp0_778[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_775, temp0_776), temp0_776)
                float temp0_781[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_778), temp0_776), data_142d3f640)
                float temp0_782[0x4] = _mm_rcp_ps(temp0_781)
                float temp0_783[0x4] = _mm_mul_ps(temp0_781, temp0_782)
                zmm15 = _mm_blendv_ps(zmm15, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_783), temp0_782), zmm1)
            
            zmm0 = arg7
            float temp0_788[0x4] = _mm_sub_ps(zmm15, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_788, data_142fc95d0, 1), zmm10)
            result = zx.q(_mm_movemask_ps(zmm0))
            zmm12 = zmm12
            
            if (result.b == 0)
                zmm11 = var_258_3
                zmm10 = zmm9
            else
                float temp0_792[0x4] = _mm_mul_ps(zmm11, temp0_788)
                result = zx.q(result.b)
                zmm2 = zmm9
                char temp7_1 = result.b & 1
                
                if (temp7_1 == 0)
                    zmm14 = _mm_mul_ps(zmm14, temp0_788)
                    zmm4 = zmm12
                    zmm5 = temp0_566
                    
                    if (temp7_1 != 0)
                        goto label_14009c994
                    
                    goto label_14009c905
                
                zmm2 = zmm9
                zmm2[0] = zmm2[0] + temp0_792[0]
                zmm14 = _mm_mul_ps(zmm14, temp0_788)
                zmm4 = zmm12
                zmm5 = temp0_566
                
                if (temp7_1 != 0)
                label_14009c994:
                    zmm4 = zmm12
                    zmm4[0] = zmm4[0] + zmm14[0]
                    zmm5 = _mm_mul_ps(zmm5, temp0_788)
                    zmm1 = var_258_3
                    
                    if (temp7_1 == 0)
                        goto label_14009c912
                    
                    goto label_14009c9aa
                
            label_14009c905:
                zmm5 = _mm_mul_ps(zmm5, temp0_788)
                zmm1 = var_258_3
                bool cond:43_1
                bool cond:44_1
                bool cond:49_1
                bool cond:50_1
                
                if (temp7_1 == 0)
                label_14009c912:
                    zmm10 = _mm_add_ps(zmm9, temp0_792)
                    char temp14_1 = result.b & 2
                    cond:43_1 = temp14_1 != 0
                    cond:44_1 = temp14_1 == 0
                    cond:49_1 = temp14_1 == 0
                    cond:50_1 = temp14_1 != 0
                    
                    if (temp14_1 != 0)
                        goto label_14009c9bd
                    
                    goto label_14009c91e
                
            label_14009c9aa:
                zmm1 = var_258_3
                zmm1[0] = zmm1[0] + zmm5[0]
                zmm10 = _mm_add_ps(zmm9, temp0_792)
                char temp13_1 = result.b & 2
                cond:43_1 = temp13_1 != 0
                cond:44_1 = temp13_1 == 0
                cond:49_1 = temp13_1 == 0
                cond:50_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                label_14009c9bd:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                    zmm12 = _mm_add_ps(zmm12, zmm14)
                    
                    if (cond:44_1)
                        goto label_14009c928
                    
                    goto label_14009c9ce
                
            label_14009c91e:
                zmm12 = _mm_add_ps(zmm12, zmm14)
                
                if (not(cond:43_1))
                label_14009c928:
                    zmm3 = _mm_add_ps(var_258_3, zmm5)
                    
                    if (cond:50_1)
                        goto label_14009c9de
                    
                    goto label_14009c931
                
            label_14009c9ce:
                zmm4 = _mm_blend_ps(zmm4, zmm12, 2)
                zmm3 = _mm_add_ps(var_258_3, zmm5)
                bool cond:59_1
                bool cond:60_1
                bool cond:63_1
                bool cond:64_1
                
                if (not(cond:49_1))
                label_14009c9de:
                    zmm1 = _mm_blend_ps(zmm1, zmm3, 2)
                    char temp22_1 = result.b & 4
                    cond:59_1 = temp22_1 == 0
                    cond:60_1 = temp22_1 != 0
                    cond:63_1 = temp22_1 != 0
                    cond:64_1 = temp22_1 == 0
                    
                    if (temp22_1 == 0)
                        goto label_14009c939
                    
                    goto label_14009c9ec
                
            label_14009c931:
                char temp21_1 = result.b & 4
                cond:59_1 = temp21_1 == 0
                cond:60_1 = temp21_1 != 0
                cond:63_1 = temp21_1 != 0
                cond:64_1 = temp21_1 == 0
                
                if (temp21_1 != 0)
                label_14009c9ec:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                    
                    if (not(cond:59_1))
                    label_14009c9f9:
                        zmm4 = _mm_blend_ps(zmm4, zmm12, 4)
                        
                        if (cond:64_1)
                            goto label_14009c945
                        
                        goto label_14009ca06
                else
                label_14009c939:
                    
                    if (cond:60_1)
                        goto label_14009c9f9
                
                bool cond:67_1
                bool cond:68_1
                bool cond:71_1
                bool cond:72_1
                
                if (not(cond:63_1))
                label_14009c945:
                    char temp26_1 = result.b & 8
                    cond:67_1 = temp26_1 != 0
                    cond:68_1 = temp26_1 == 0
                    cond:71_1 = temp26_1 == 0
                    cond:72_1 = temp26_1 != 0
                    
                    if (temp26_1 == 0)
                        goto label_14009ca14
                    
                    goto label_14009c94d
                
            label_14009ca06:
                zmm1 = _mm_blend_ps(zmm1, zmm3, 4)
                char temp25_1 = result.b & 8
                cond:67_1 = temp25_1 != 0
                cond:68_1 = temp25_1 == 0
                cond:71_1 = temp25_1 == 0
                cond:72_1 = temp25_1 != 0
                
                if (temp25_1 == 0)
                label_14009ca14:
                    zmm10 = zmm2
                    
                    if (cond:68_1)
                        goto label_14009c95a
                    
                    goto label_14009ca1e
                
            label_14009c94d:
                zmm10 = _mm_blend_ps(zmm10, zmm2, 7)
                
                if (cond:67_1)
                label_14009ca1e:
                    zmm12 = _mm_blend_ps(zmm12, zmm4, 7)
                    
                    if (not(cond:71_1))
                        zmm1 = _mm_blend_ps(zmm1, zmm3, 8)
                else
                label_14009c95a:
                    zmm12 = zmm4
                    
                    if (cond:72_1)
                        zmm1 = _mm_blend_ps(zmm1, zmm3, 8)
                
                zmm8 = _mm_blendv_ps(zmm8, _mm_add_ps(temp0_788, zmm8), zmm0)
                zmm11 = zmm1
        else
            zmm7 = var_168_1
            zmm8 = var_2b8_2
    else
        arg5 = (*arg3)[3]
        float temp0_191[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
        float var_238_2[0x4] = *arg3
        float var_248_2[0x4] = (*arg3)[1]
        float var_1e8_2[0x4] = (*arg3)[2]
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_192[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_193[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_194[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg1
        zmm2 = (*arg1)[1]
        float temp0_195[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_196[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg1)[2]
        float temp0_197[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_198[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        rbx_2 = 0
        zmm12 = zx.o(0)
        zmm11 = zx.o(0)
        
        do
            float var_2c8_2[0x4]
            __builtin_memset(&var_2c8_2, 0, 0x20)
            zmm0 = __pmulld_xmmdq_memdq(*(arg6 + sx.q((rbx_2 << 2).d)), data_142fc95c0)
            int64_t rax_20 = sx.q(zmm0[0])
            int64_t rsi_10 = sx.q(_mm_extract_epi32(zmm0, 1))
            int64_t rdi_5 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rbp_10 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm3 = *(arg4 + (rax_20 << 2) + 4)
            float temp0_205[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + (rax_20 << 2)), *(arg4 + (rsi_10 << 2)), 
                        0x10), 
                    *(arg4 + (rdi_5 << 2)), 0x20), 
                *(arg4 + (rbp_10 << 2)), 0x30)
            float temp0_208[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(arg4 + (rsi_10 << 2) + 4), 0x10), 
                    *(arg4 + (rdi_5 << 2) + 4), 0x20), 
                *(arg4 + (rbp_10 << 2) + 4), 0x30)
            float temp0_211[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + (rax_20 << 2) + 8), 
                        *(arg4 + (rsi_10 << 2) + 8), 0x10), 
                    *(arg4 + (rdi_5 << 2) + 8), 0x20), 
                *(arg4 + (rbp_10 << 2) + 8), 0x30)
            var_1d8 = temp0_205
            int128_t var_1a8_2 = zx.o(0)
            float var_228_2[0x4] = temp0_191
            var_218 = temp0_191
            float var_208_3[0x4] = temp0_191
            float temp0_212[0x4] = _mm_shuffle_ps(var_248_2, var_248_2, 0)
            float temp0_213[0x4] = _mm_mul_ps(temp0_211, temp0_212)
            float temp0_214[0x4] = _mm_shuffle_ps(var_1e8_2, var_1e8_2, 0)
            float temp0_215[0x4] = _mm_mul_ps(temp0_205, temp0_214)
            float temp0_216[0x4] = _mm_shuffle_ps(var_238_2, var_238_2, 0)
            float temp0_217[0x4] = _mm_mul_ps(temp0_208, temp0_216)
            float temp0_219[0x4] = _mm_sub_ps(temp0_213, _mm_mul_ps(temp0_208, temp0_214))
            float temp0_221[0x4] = _mm_sub_ps(temp0_215, _mm_mul_ps(temp0_211, temp0_216))
            float temp0_223[0x4] = _mm_sub_ps(temp0_217, _mm_mul_ps(temp0_205, temp0_212))
            float temp0_224[0x4] = _mm_add_ps(temp0_219, temp0_219)
            float temp0_225[0x4] = _mm_add_ps(temp0_221, temp0_221)
            float temp0_226[0x4] = _mm_add_ps(temp0_223, temp0_223)
            float temp0_227[0x4] = _mm_mul_ps(temp0_191, temp0_225)
            float temp0_228[0x4] = _mm_mul_ps(temp0_224, temp0_214)
            float temp0_229[0x4] = _mm_mul_ps(temp0_225, temp0_214)
            float temp0_234[0x4] = _mm_add_ps(
                _mm_sub_ps(_mm_mul_ps(temp0_226, temp0_212), temp0_229), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_191, temp0_224), var_1d8))
            float temp0_235[0x4] = _mm_mul_ps(temp0_191, temp0_226)
            float temp0_236[0x4] = __addps_xmmps_memps(temp0_227, temp0_208)
            float temp0_237[0x4] = __addps_xmmps_memps(temp0_235, temp0_211)
            float var_1f8_2[0x4] = temp0_191
            float temp0_238[0x4] = _mm_mul_ps(temp0_225, temp0_216)
            float temp0_241[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_228, _mm_mul_ps(temp0_226, temp0_216)), temp0_236)
            float temp0_244[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_238, _mm_mul_ps(temp0_224, temp0_212)), temp0_237)
            zmm9 = arg3[1][0]
            zmm15 = (*arg3)[5]
            float temp0_246[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_234)
            float temp0_248[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_241)
            zmm14 = (*arg3)[6]
            float temp0_250[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_244)
            zmm8 = _mm_sub_ps(temp0_246, temp0_192)
            float temp0_252[0x4] = __subps_xmmps_memps(temp0_248, temp0_193)
            float temp0_253[0x4] = __subps_xmmps_memps(temp0_250, temp0_194)
            var_228 = zmm8
            var_218 = temp0_252
            float var_208_4[0x4] = temp0_253
            float temp0_254[0x4] = _mm_sub_ps(temp0_195, temp0_246)
            float temp0_255[0x4] = _mm_sub_ps(temp0_196, temp0_248)
            char temp0_257 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_246, temp0_192, 6))
            float temp0_258[0x4] = _mm_sub_ps(temp0_197, temp0_250)
            var_1d8 = temp0_254
            float var_1c8_4[0x4] = temp0_255
            float var_1b8_4[0x4] = temp0_258
            
            if (temp0_257 != 0xf)
                float temp0_259[0x4] = _mm_cmpeq_ps(temp0_246, temp0_192, 2)
                zmm4 = (*arg2)[1]
                zmm3 =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_248, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_259)
                zmm5 = _mm_cmpeq_epi32(temp0_234, temp0_234)
                
                if (_mm_movemask_ps(zmm3 ^ zmm5) == 0xf)
                    goto label_14009b208
                
                zmm4 = (*arg2)[2]
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_250, _mm_shuffle_ps(zmm4, zmm4, 0), 2), zmm3)
                zmm3 = zmm1 ^ zmm5
                
                if (_mm_movemask_ps(zmm3) == 0xf)
                    zmm4 = var_2c8_2
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        goto label_14009b221
                    
                    goto label_14009b1c4
                
                zmm7 = *arg1
                float temp0_269[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
                zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_269, temp0_246, 6), zmm1)
                char temp0_273 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm1))
                zmm7 = _mm_cmpeq_ps(temp0_269, temp0_246, 2)
                
                if (temp0_273 != 0xf)
                    zmm3 = (*arg1)[1]
                    float temp0_276[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_248, 2)
                    zmm7 = _mm_and_ps(_mm_and_ps(zmm7, zmm1), temp0_276)
                    zmm3 = _mm_andnot_ps(zmm7, zmm1)
                
                zmm4 = var_2c8_2
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm1)
                
                if (_mm_movemask_ps(zmm3) != 0xf)
                    zmm3 = (*arg1)[2]
                    zmm3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_250, 2)
                    zmm7 = _mm_and_ps(_mm_and_ps(zmm7, zmm1), zmm3)
                
                zmm1 = _mm_and_ps(zmm1, zmm7)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    goto label_14009b221
                
                goto label_14009b1c4
            
            zmm3 = _mm_cmpeq_ps(temp0_246, temp0_192, 2)
        label_14009b208:
            zmm4 = var_2c8_2
            zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f)
            zmm1 = zmm3
            float var_268[0x4]
            
            if (_mm_movemask_ps(zmm1) == 0)
            label_14009b1c4:
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                zmm11 = zmm11
                zmm10 = zmm4
                zmm5 = data_142d3f780
                zmm6 = var_268
                zmm1 ^= zmm3
                result = zx.q(_mm_movemask_ps(zmm1))
                
                if (result.d != 0)
                label_14009b363:
                    int64_t rsi_11 = 0
                    
                    while (true)
                        float temp0_327[0x4] = _mm_cmpeq_ps(zx.o(0), zmm8, 1)
                        uint32_t temp0_329 = _mm_movemask_ps(_mm_and_ps(temp0_327, zmm1))
                        
                        if (temp0_329 != 0)
                            char rbp_12 = temp0_329.b
                            
                            if ((rbp_12 & 1) == 0)
                                if ((rbp_12 & 2) != 0)
                                    goto label_14009b481
                                
                                goto label_14009b3a8
                            
                            *(&var_2a8 + rsi_11) = zmm8[0]
                            
                            if ((rbp_12 & 2) != 0)
                            label_14009b481:
                                *(&var_2a8[1] + rsi_11) = __extractps_memd_xmmps_immb(zmm8, 1)
                                
                                if ((rbp_12 & 4) == 0)
                                    goto label_14009b3b2
                                
                                goto label_14009b494
                            
                        label_14009b3a8:
                            
                            if ((rbp_12 & 4) != 0)
                            label_14009b494:
                                *(&var_2a8[2] + rsi_11) = __extractps_memd_xmmps_immb(zmm8, 2)
                                
                                if ((rbp_12 & 8) != 0)
                                    *(&var_2a8[3] + rsi_11) = __extractps_memd_xmmps_immb(zmm8, 3)
                            else
                            label_14009b3b2:
                                
                                if ((rbp_12 & 8) != 0)
                                    *(&var_2a8[3] + rsi_11) = __extractps_memd_xmmps_immb(zmm8, 3)
                        
                        zmm0 = _mm_andnot_ps(temp0_327, zmm1)
                        result = zx.q(_mm_movemask_ps(zmm0))
                        
                        if (result.d != 0)
                            zmm3 = *(&var_1d8 + rsi_11)
                            float temp0_333[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            uint32_t temp0_335 = _mm_movemask_ps(_mm_and_ps(zmm0, temp0_333))
                            
                            if (temp0_335 != 0)
                                zmm3 ^= zmm5
                                char rbp_14 = temp0_335.b
                                
                                if ((rbp_14 & 1) == 0)
                                    if ((rbp_14 & 2) != 0)
                                        goto label_14009b4bc
                                    
                                    goto label_14009b404
                                
                                *(&var_2a8 + rsi_11) = zmm3[0]
                                
                                if ((rbp_14 & 2) != 0)
                                label_14009b4bc:
                                    *(&var_2a8[1] + rsi_11) = __extractps_memd_xmmps_immb(zmm3, 1)
                                    
                                    if ((rbp_14 & 4) == 0)
                                        goto label_14009b40e
                                    
                                    goto label_14009b4ce
                                
                            label_14009b404:
                                
                                if ((rbp_14 & 4) != 0)
                                label_14009b4ce:
                                    *(&var_2a8[2] + rsi_11) = __extractps_memd_xmmps_immb(zmm3, 2)
                                    
                                    if ((rbp_14 & 8) != 0)
                                        *(&var_2a8[3] + rsi_11) =
                                            __extractps_memd_xmmps_immb(zmm3, 3)
                                else
                                label_14009b40e:
                                    
                                    if ((rbp_14 & 8) != 0)
                                        *(&var_2a8[3] + rsi_11) =
                                            __extractps_memd_xmmps_immb(zmm3, 3)
                            
                            uint32_t temp0_338 = _mm_movemask_ps(_mm_andnot_ps(temp0_333, zmm0))
                            
                            if (temp0_338 != 0)
                                char rbp_16 = temp0_338.b
                                
                                if ((rbp_16 & 1) == 0)
                                    if ((rbp_16 & 2) != 0)
                                        goto label_14009b4f7
                                    
                                    goto label_14009b43c
                                
                                *(&var_2a8 + rsi_11) = 0
                                
                                if ((rbp_16 & 2) != 0)
                                label_14009b4f7:
                                    *(&var_2a8[1] + rsi_11) = 0
                                    
                                    if ((rbp_16 & 4) == 0)
                                        goto label_14009b446
                                    
                                    goto label_14009b509
                                
                            label_14009b43c:
                                
                                if ((rbp_16 & 4) != 0)
                                label_14009b509:
                                    *(&var_2a8[2] + rsi_11) = 0
                                    
                                    if ((rbp_16 & 8) != 0)
                                        *(&var_2a8[3] + rsi_11) = 0
                                else
                                label_14009b446:
                                    
                                    if ((rbp_16 & 8) != 0)
                                        *(&var_2a8[3] + rsi_11) = 0
                        
                        if (rsi_11 == 0x20)
                            break
                        
                        zmm8 = *(&var_218 + rsi_11)
                        rsi_11 += 0x10
                    
                    zmm0 = var_2a8
                    float temp0_344[0x4] =
                        __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                    float temp0_346[0x4] = _mm_add_ps(_mm_mul_ps(var_298, var_298), temp0_344)
                    float temp0_348[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), temp0_346)
                    float temp0_349[0x4] = _mm_rsqrt_ps(temp0_348)
                    float temp0_351[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_348, temp0_349), temp0_349)
                    float temp0_354[0x4] = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_351), temp0_349), 
                        data_142d3f640)
                    float temp0_355[0x4] = _mm_rcp_ps(temp0_354)
                    float temp0_356[0x4] = _mm_mul_ps(temp0_354, temp0_355)
                    zmm6 = _mm_blendv_ps(zmm6, 
                        _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_356), temp0_355), zmm1)
            else
            label_14009b221:
                float temp0_294[0x4] = _mm_max_ps(temp0_254, zmm8)
                float temp0_295[0x4] = _mm_max_ps(temp0_255, temp0_252)
                float temp0_296[0x4] = _mm_max_ps(temp0_258, temp0_253)
                float temp0_297[0x4] = _mm_cmpeq_ps(temp0_295, temp0_294, 1)
                zmm3 = _mm_and_ps(zmm1, temp0_297)
                
                if (_mm_movemask_ps(zmm3) != 0)
                    float temp0_300[0x4] = _mm_cmpeq_ps(temp0_296, temp0_294, 1)
                    zmm0 = _mm_and_ps(zmm3, temp0_300)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm6 = _mm_blendv_ps(var_268, temp0_294, zmm0)
                        zmm2 = _mm_andnot_ps(temp0_300, zmm3)
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            goto label_14009b32b
                        
                        goto label_14009b280
                    
                    zmm6 = var_268
                    zmm2 = _mm_andnot_ps(temp0_300, zmm3)
                    
                    if (_mm_movemask_ps(zmm2) == 0)
                    label_14009b280:
                        zmm7 = _mm_andnot_ps(temp0_297, zmm1)
                        
                        if (_mm_movemask_ps(zmm7) == 0)
                            goto label_14009b33f
                        
                        goto label_14009b292
                    
                label_14009b32b:
                    zmm6 = _mm_blendv_ps(zmm6, temp0_296, zmm2)
                    zmm7 = _mm_andnot_ps(temp0_297, zmm1)
                    
                    if (_mm_movemask_ps(zmm7) != 0)
                        goto label_14009b292
                    
                    goto label_14009b33f
                
                zmm6 = var_268
                zmm7 = _mm_andnot_ps(temp0_297, zmm1)
                
                if (_mm_movemask_ps(zmm7) != 0)
                label_14009b292:
                    float temp0_308[0x4] = _mm_cmpeq_ps(temp0_296, temp0_295, 1)
                    zmm0 = _mm_and_ps(zmm7, temp0_308)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm6 = _mm_blendv_ps(zmm6, temp0_295, zmm0)
                    
                    zmm5 = data_142d3f780
                    zmm2 = _mm_andnot_ps(temp0_308, zmm7)
                    uint32_t temp0_313 = _mm_movemask_ps(zmm2)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    
                    if (temp0_313 != 0)
                        zmm6 = _mm_blendv_ps(zmm6, temp0_296, zmm2)
                    
                    zmm11 = zmm11
                    zmm10 = zmm4
                    zmm1 ^= zmm3
                    result = zx.q(_mm_movemask_ps(zmm1))
                    
                    if (result.d != 0)
                        goto label_14009b363
                else
                label_14009b33f:
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    zmm11 = zmm11
                    zmm10 = zmm4
                    zmm5 = data_142d3f780
                    zmm1 ^= zmm3
                    result = zx.q(_mm_movemask_ps(zmm1))
                    
                    if (result.d != 0)
                        goto label_14009b363
            
            var_268 = zmm6
            float temp0_360[0x4] = __subps_xmmps_memps(zmm6, temp0_198)
            float temp0_361[0x4] = __cmpps_xmmps_memps_immb(temp0_360, data_142fc95d0, 1)
            char temp0_362 = _mm_movemask_ps(temp0_361)
            
            if (temp0_362 != 0)
                float temp0_363[0x4] = _mm_mul_ps(temp0_246, temp0_360)
                zmm6 = zmm10
                char temp2_1 = temp0_362 & 1
                
                if (temp2_1 == 0)
                    zmm15 = _mm_mul_ps(temp0_248, temp0_360)
                    zmm7 = zmm12
                    
                    if (temp2_1 != 0)
                        goto label_14009b647
                    
                    goto label_14009b5c4
                
                zmm6 = zmm10
                zmm6[0] = zmm6[0] + temp0_363[0]
                zmm15 = _mm_mul_ps(temp0_248, temp0_360)
                zmm7 = zmm12
                
                if (temp2_1 != 0)
                label_14009b647:
                    zmm7 = zmm12
                    zmm7[0] = zmm7[0] + zmm15[0]
                    zmm14 = _mm_mul_ps(temp0_250, temp0_360)
                    zmm2 = zmm11
                    
                    if (temp2_1 == 0)
                        goto label_14009b5d2
                    
                    goto label_14009b65e
                
            label_14009b5c4:
                zmm14 = _mm_mul_ps(temp0_250, temp0_360)
                zmm2 = zmm11
                bool cond:18_1
                bool cond:19_1
                bool cond:24_1
                bool cond:25_1
                
                if (temp2_1 == 0)
                label_14009b5d2:
                    zmm10 = _mm_add_ps(zmm10, temp0_363)
                    char temp6_1 = temp0_362 & 2
                    cond:18_1 = temp6_1 != 0
                    cond:19_1 = temp6_1 == 0
                    cond:24_1 = temp6_1 == 0
                    cond:25_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_14009b675
                    
                    goto label_14009b5e0
                
            label_14009b65e:
                zmm2 = zmm11
                zmm2[0] = zmm2[0] + zmm14[0]
                zmm10 = _mm_add_ps(zmm10, temp0_363)
                char temp5_1 = temp0_362 & 2
                cond:18_1 = temp5_1 != 0
                cond:19_1 = temp5_1 == 0
                cond:24_1 = temp5_1 == 0
                cond:25_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                label_14009b675:
                    zmm6 = _mm_blend_ps(zmm6, zmm10, 2)
                    zmm12 = _mm_add_ps(zmm12, zmm15)
                    
                    if (cond:19_1)
                        goto label_14009b5ea
                    
                    goto label_14009b686
                
            label_14009b5e0:
                zmm12 = _mm_add_ps(zmm12, zmm15)
                
                if (not(cond:18_1))
                label_14009b5ea:
                    zmm11 = _mm_add_ps(zmm11, zmm14)
                    
                    if (cond:25_1)
                        goto label_14009b697
                    
                    goto label_14009b5f4
                
            label_14009b686:
                zmm7 = _mm_blend_ps(zmm7, zmm12, 2)
                zmm11 = _mm_add_ps(zmm11, zmm14)
                bool cond:35_1
                bool cond:36_1
                bool cond:41_1
                bool cond:42_1
                
                if (not(cond:24_1))
                label_14009b697:
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                    char temp12_1 = temp0_362 & 4
                    cond:35_1 = temp12_1 == 0
                    cond:36_1 = temp12_1 != 0
                    cond:41_1 = temp12_1 != 0
                    cond:42_1 = temp12_1 == 0
                    
                    if (temp12_1 == 0)
                        goto label_14009b5fe
                    
                    goto label_14009b6a8
                
            label_14009b5f4:
                char temp11_1 = temp0_362 & 4
                cond:35_1 = temp11_1 == 0
                cond:36_1 = temp11_1 != 0
                cond:41_1 = temp11_1 != 0
                cond:42_1 = temp11_1 == 0
                
                if (temp11_1 != 0)
                label_14009b6a8:
                    zmm6 = _mm_blend_ps(zmm6, zmm10, 4)
                    
                    if (not(cond:35_1))
                    label_14009b6b5:
                        zmm7 = _mm_blend_ps(zmm7, zmm12, 4)
                        
                        if (cond:42_1)
                            goto label_14009b60a
                        
                        goto label_14009b6c2
                else
                label_14009b5fe:
                    
                    if (cond:36_1)
                        goto label_14009b6b5
                
                bool cond:51_1
                bool cond:52_1
                bool cond:57_1
                bool cond:58_1
                
                if (not(cond:41_1))
                label_14009b60a:
                    char temp20_1 = temp0_362 & 8
                    cond:51_1 = temp20_1 != 0
                    cond:52_1 = temp20_1 == 0
                    cond:57_1 = temp20_1 == 0
                    cond:58_1 = temp20_1 != 0
                    
                    if (temp20_1 == 0)
                        goto label_14009b6d3
                    
                    goto label_14009b614
                
            label_14009b6c2:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
                char temp19_1 = temp0_362 & 8
                cond:51_1 = temp19_1 != 0
                cond:52_1 = temp19_1 == 0
                cond:57_1 = temp19_1 == 0
                cond:58_1 = temp19_1 != 0
                
                if (temp19_1 == 0)
                label_14009b6d3:
                    zmm10 = zmm6
                    
                    if (cond:52_1)
                        goto label_14009b621
                    
                    goto label_14009b6dd
                
            label_14009b614:
                zmm10 = _mm_blend_ps(zmm10, zmm6, 7)
                
                if (cond:51_1)
                label_14009b6dd:
                    zmm12 = _mm_blend_ps(zmm12, zmm7, 7)
                    
                    if (not(cond:57_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                else
                label_14009b621:
                    zmm12 = zmm7
                    
                    if (cond:58_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                
                var_2b8_2 = _mm_blendv_ps(var_2b8_2, _mm_add_ps(temp0_360, var_2b8_2), temp0_361)
                zmm11 = zmm2
            
            rbx_2 = zx.q(rbx_2.d + 4)
        while (rbx_2.d s< i)
        
        if (rbx_2.d s< arg10)
            goto label_14009b718
        
        zmm7 = var_168_1
        zmm8 = var_2b8_2
    zmm7 = _mm_cmpeq_epi32(zmm7, zx.o(0))
    zmm0 = zmm7 & not.o(zmm10)
    float temp0_815[0x4] = _mm_hadd_ps(zmm0, zmm0)
    float temp0_816[0x4] = _mm_hadd_ps(temp0_815, temp0_815)
    zmm1 = zmm7 & not.o(zmm12)
    float temp0_817[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_819[0x4] = _mm_insert_ps(temp0_816, _mm_hadd_ps(temp0_817, temp0_817), 0x1c)
    zmm1 = zmm7 & not.o(zmm11)
    float temp0_820[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_821[0x4] = _mm_hadd_ps(temp0_820, temp0_820)
    float temp0_823[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg9), arg9[1].d, 0x20), 
        temp0_819[0].q | temp0_821[0].q << 0x40)
    *arg9 = temp0_823[0]
    *(arg9 + 4) = __extractps_memd_xmmps_immb(temp0_823, 1)
    arg9[1].d = __extractps_memd_xmmps_immb(temp0_823, 2)
    zmm7 &= not.o(zmm8)
    float temp0_826[0x4] = _mm_hadd_ps(zmm7, zmm7)
    float temp0_827[0x4] = _mm_hadd_ps(temp0_826, temp0_826)
    temp0_827[0] = temp0_827[0] f+ *arg8
    *arg8 = temp0_827[0]
else
    float var_2b8_1[0x4]
    uint64_t rbx
    
    if (i s<= 0)
        rbx = 0
        zmm5 = zx.o(0)
        zmm9 = zx.o(0)
        zmm10 = zx.o(0)
        var_2b8_1 = zx.o(0)
        
        if (0 s< arg10)
        label_14009ad72:
            float var_268_2[0x4] = zmm5
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
            zmm11 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm0)
            int64_t rsi_8 = sx.q(rbx.d << 2)
            uint32_t temp0_190 = _mm_movemask_ps(zmm11)
            float var_258_1[0x4] = zmm10
            float var_2c8_1[0x4] = zmm9
            
            if ((zx.q(temp0_190) & 0xfffffff9) != 9)
                if ((temp0_190.b & 1) != 0)
                    var_228[0] = *(arg6 + rsi_8)
                
                if ((temp0_190.b & 2) == 0)
                    if ((temp0_190.b & 4) != 0)
                        goto label_14009c181
                    
                    goto label_14009b7f5
                
                var_228[1] = *(arg6 + rsi_8 + 4)
                
                if ((temp0_190.b & 4) == 0)
                label_14009b7f5:
                    
                    if ((temp0_190.b & 8) != 0)
                        var_228[3] = *(arg6 + rsi_8 + 0xc)
                else
                label_14009c181:
                    var_228[2] = *(arg6 + rsi_8 + 8)
                    
                    if ((temp0_190.b & 8) != 0)
                        var_228[3] = *(arg6 + rsi_8 + 0xc)
                
                zmm1 = var_228
            else
                zmm1 = *(arg6 + rsi_8)
            
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm11
            int64_t rax_43 = sx.q(zmm1[0])
            int64_t rbx_4 = arg4 + (rax_43 << 2)
            zmm0 = *(arg4 + (rax_43 << 2))
            int64_t rbp_17 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t r14_1 = arg4 + (rbp_17 << 2)
            int64_t rax_45 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t r15_1 = arg4 + (rax_45 << 2)
            int64_t rsi_16 = sx.q(_mm_extract_epi32(zmm1, 3))
            int64_t rdi_8 = arg4 + (rsi_16 << 2)
            float temp0_396[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg4 + (rbp_17 << 2)), 0x10), 
                    *(arg4 + (rax_45 << 2)), 0x20), 
                *(arg4 + (rsi_16 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm11
            zmm8 = *(zx.q(zmm2[0]) + rbx_4)
            uint64_t rax_47 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_18 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rsi_17 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_402[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_47 + r14_1), 0x10), *(rbp_18 + r15_1), 
                    0x20), 
                *(rsi_17 + rdi_8), 0x30)
            zmm2 = data_142fc95f0 & zmm11
            zmm6 = *(zx.q(zmm2[0]) + rbx_4)
            uint64_t rax_49 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rbp_19 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rbx_5 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_408[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_49 + r14_1), 0x10), *(rbp_19 + r15_1), 
                    0x20), 
                *(rbx_5 + rdi_8), 0x30)
            float var_e8_1[0x4] = zx.o(0)
            zmm7 = (*arg3)[3]
            float temp0_409[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float var_228_3[0x4] = temp0_409
            var_218 = temp0_409
            float var_208_5[0x4] = temp0_409
            float var_1f8_3[0x4] = temp0_409
            zmm5 = *arg3
            zmm1 = (*arg3)[1]
            zmm4 = (*arg3)[2]
            float temp0_410[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_411[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_412[0x4] = _mm_mul_ps(temp0_402, temp0_411)
            float temp0_413[0x4] = _mm_mul_ps(temp0_411, temp0_408)
            float temp0_414[0x4] = _mm_mul_ps(temp0_408, temp0_410)
            float temp0_415[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_416[0x4] = _mm_mul_ps(temp0_410, temp0_396)
            float temp0_417[0x4] = _mm_mul_ps(temp0_396, temp0_415)
            float temp0_418[0x4] = _mm_mul_ps(zx.o(0), temp0_409)
            float temp0_420[0x4] = _mm_sub_ps(temp0_414, _mm_mul_ps(temp0_415, temp0_402))
            float temp0_421[0x4] = _mm_sub_ps(temp0_417, temp0_413)
            float temp0_422[0x4] = _mm_sub_ps(temp0_412, temp0_416)
            float temp0_423[0x4] = _mm_sub_ps(temp0_418, temp0_418)
            float temp0_424[0x4] = _mm_add_ps(temp0_420, temp0_420)
            float temp0_425[0x4] = _mm_add_ps(temp0_421, temp0_421)
            float temp0_426[0x4] = _mm_add_ps(temp0_422, temp0_422)
            float temp0_427[0x4] = _mm_add_ps(temp0_423, temp0_423)
            var_1d8 = temp0_424
            float var_1c8_5[0x4] = temp0_425
            float var_1b8_5[0x4] = temp0_426
            float var_1a8_3[0x4] = temp0_427
            float temp0_428[0x4] = _mm_mul_ps(temp0_427, temp0_409)
            float temp0_429[0x4] = _mm_mul_ps(temp0_409, temp0_424)
            float temp0_430[0x4] = _mm_mul_ps(temp0_409, temp0_425)
            float temp0_431[0x4] = _mm_mul_ps(temp0_409, temp0_426)
            float temp0_432[0x4] = __addps_xmmps_memps(temp0_429, temp0_396)
            float temp0_433[0x4] = __addps_xmmps_memps(temp0_430, temp0_402)
            float temp0_434[0x4] = __addps_xmmps_memps(temp0_431, temp0_408)
            float temp0_435[0x4] = __addps_xmmps_memps(temp0_428, var_e8_1)
            var_2a8 = temp0_432
            float var_278_1[0x4] = temp0_435
            zmm4 = *arg3
            zmm5 = (*arg3)[1]
            zmm1 = (*arg3)[2]
            float temp0_436[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_437[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_438[0x4] = _mm_mul_ps(temp0_425, temp0_437)
            float temp0_439[0x4] = _mm_mul_ps(temp0_437, temp0_426)
            float temp0_440[0x4] = _mm_mul_ps(temp0_426, temp0_436)
            float temp0_441[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_442[0x4] = _mm_mul_ps(temp0_436, temp0_424)
            float temp0_443[0x4] = _mm_mul_ps(temp0_424, temp0_441)
            float temp0_445[0x4] = _mm_sub_ps(temp0_440, _mm_mul_ps(temp0_441, temp0_425))
            float temp0_446[0x4] = _mm_sub_ps(temp0_443, temp0_439)
            float temp0_447[0x4] = _mm_sub_ps(temp0_438, temp0_442)
            float temp0_448[0x4] = _mm_add_ps(temp0_445, temp0_432)
            float temp0_449[0x4] = _mm_add_ps(temp0_446, temp0_433)
            float temp0_450[0x4] = _mm_add_ps(temp0_447, temp0_434)
            zmm7 = arg3[1][0]
            zmm10 = (*arg3)[5]
            float temp0_452[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_448)
            float temp0_454[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_449)
            zmm5 = (*arg3)[6]
            float temp0_456[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_450)
            zmm8 = *arg2
            zmm9 = (*arg2)[1]
            float temp0_457[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm14 = _mm_sub_ps(temp0_452, temp0_457)
            float temp0_459[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_460[0x4] = _mm_sub_ps(temp0_454, temp0_459)
            zmm15 = (*arg2)[2]
            float temp0_461[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_462[0x4] = _mm_sub_ps(temp0_456, temp0_461)
            float var_228_4[0x4] = zmm14
            var_218 = temp0_460
            float var_208_6[0x4] = temp0_462
            zmm2 = *arg1
            zmm3 = (*arg1)[1]
            float temp0_463[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_464[0x4] = _mm_sub_ps(temp0_463, temp0_452)
            float temp0_465[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_466[0x4] = _mm_sub_ps(temp0_465, temp0_454)
            zmm6 = (*arg1)[2]
            float temp0_467[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm4 = _mm_and_ps(_mm_cmpeq_ps(temp0_452, temp0_457, 6), zmm11)
            char temp0_471 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm11))
            float temp0_472[0x4] = _mm_sub_ps(temp0_467, temp0_456)
            var_1d8 = temp0_464
            float var_1c8_6[0x4] = temp0_466
            float var_1b8_6[0x4] = temp0_472
            zmm1 = _mm_cmpeq_ps(temp0_452, temp0_457, 2)
            
            if (temp0_471 != 0xf)
                float temp0_474[0x4] = _mm_cmpeq_ps(temp0_454, temp0_459, 2)
                zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm11), temp0_474)
                zmm4 = _mm_andnot_ps(zmm1, zmm11)
            
            zmm10 = var_258_1
            zmm9 = var_2c8_1
            zmm7 = temp0_464
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm11)) != 0xf)
                float temp0_480[0x4] = _mm_cmpeq_ps(temp0_456, temp0_461, 2)
                zmm1 = _mm_and_ps(_mm_and_ps(zmm1, zmm11), temp0_480)
                zmm4 = zmm1 ^ zmm11
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm11)) == 0xf)
                zmm5 = temp0_472
            else
                zmm1 = _mm_and_ps(zmm1, zmm11)
                zmm0 = _mm_cmpeq_ps(temp0_463, temp0_452, 2)
                zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_463, temp0_452, 6), zmm1)
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm1)) != 0xf)
                    float temp0_491[0x4] = __cmpps_xmmps_memps_immb(temp0_465, temp0_454, 2)
                    zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm1), temp0_491)
                    zmm2 = zmm0 ^ zmm1
                
                if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm1)) != 0xf)
                    float temp0_496[0x4] = __cmpps_xmmps_memps_immb(temp0_467, temp0_456, 2)
                    zmm0 = _mm_and_ps(_mm_and_ps(zmm0, zmm1), temp0_496)
                
                zmm5 = temp0_472
                zmm1 = _mm_and_ps(zmm1, zmm0)
            
            uint32_t temp0_611 = _mm_movemask_ps(_mm_and_ps(zmm1, zmm11))
            float temp0_613[0x4]
            float temp0_614[0x4]
            uint32_t temp0_640
            
            if (temp0_611 != 0)
                zmm7 = _mm_max_ps(zmm7, zmm14)
                temp0_613 = __maxps_xmmps_memps(temp0_466, temp0_460)
                temp0_614 = __maxps_xmmps_memps(zmm5, temp0_462)
                float temp0_615[0x4] = _mm_cmpeq_ps(temp0_613, zmm7, 1)
                zmm2 = _mm_and_ps(zmm1, temp0_615)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm11)) != 0)
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_614, zmm7, 5), zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm11)) != 0)
                        zmm7 = _mm_blendv_ps(zmm7, temp0_614, zmm0)
                
                zmm3 = _mm_andnot_ps(temp0_615, zmm1)
                temp0_640 = _mm_movemask_ps(_mm_and_ps(zmm3, zmm11))
            
            if (temp0_611 == 0 || temp0_640 == 0)
                zmm8 = var_2b8_1
            else
                float temp0_641[0x4] = _mm_cmpeq_ps(temp0_614, temp0_613, 1)
                zmm0 = _mm_and_ps(zmm3, temp0_641)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm11)) != 0)
                    zmm7 = _mm_blendv_ps(zmm7, temp0_613, zmm0)
                
                zmm2 = _mm_andnot_ps(temp0_641, zmm3)
                zmm8 = var_2b8_1
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm11)) != 0)
                    zmm7 = _mm_blendv_ps(zmm7, temp0_614, zmm2)
            
            zmm0 = _mm_andnot_ps(zmm1, zmm11)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                int64_t rax_84 = 0
                zmm0 = data_142d3f780
                
                while (true)
                    float temp0_653[0x4] = _mm_cmpeq_ps(zx.o(0), zmm14, 1)
                    zmm3 = _mm_and_ps(temp0_653, zmm1)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm11)) != 0)
                        char temp0_657 = _mm_movemask_ps(zmm3)
                        
                        if ((temp0_657 & 1) == 0)
                            if ((temp0_657 & 2) != 0)
                                goto label_14009c370
                            
                            goto label_14009c28e
                        
                        *(&var_2a8 + rax_84) = zmm14[0]
                        
                        if ((temp0_657 & 2) != 0)
                        label_14009c370:
                            *(&var_2a8[1] + rax_84) = __extractps_memd_xmmps_immb(zmm14, 1)
                            
                            if ((temp0_657 & 4) == 0)
                                goto label_14009c297
                            
                            goto label_14009c382
                        
                    label_14009c28e:
                        
                        if ((temp0_657 & 4) != 0)
                        label_14009c382:
                            *(&var_2a8[2] + rax_84) = __extractps_memd_xmmps_immb(zmm14, 2)
                            
                            if ((temp0_657 & 8) != 0)
                                *(&var_2a8[3] + rax_84) = __extractps_memd_xmmps_immb(zmm14, 3)
                        else
                        label_14009c297:
                            
                            if ((temp0_657 & 8) != 0)
                                *(&var_2a8[3] + rax_84) = __extractps_memd_xmmps_immb(zmm14, 3)
                    
                    zmm2 = _mm_andnot_ps(temp0_653, zmm1)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm11)) != 0)
                        zmm5 = *(&var_1d8 + rax_84)
                        float temp0_662[0x4] = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                        zmm6 = _mm_and_ps(zmm2, temp0_662)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm11)) != 0)
                            zmm5 ^= zmm0
                            char temp0_666 = _mm_movemask_ps(zmm6)
                            
                            if ((temp0_666 & 1) == 0)
                                if ((temp0_666 & 2) != 0)
                                    goto label_14009c3a8
                                
                                goto label_14009c2f5
                            
                            *(&var_2a8 + rax_84) = zmm5[0]
                            
                            if ((temp0_666 & 2) != 0)
                            label_14009c3a8:
                                *(&var_2a8[1] + rax_84) = __extractps_memd_xmmps_immb(zmm5, 1)
                                
                                if ((temp0_666 & 4) == 0)
                                    goto label_14009c2fe
                                
                                goto label_14009c3b9
                            
                        label_14009c2f5:
                            
                            if ((temp0_666 & 4) != 0)
                            label_14009c3b9:
                                *(&var_2a8[2] + rax_84) = __extractps_memd_xmmps_immb(zmm5, 2)
                                
                                if ((temp0_666 & 8) != 0)
                                    *(&var_2a8[3] + rax_84) = __extractps_memd_xmmps_immb(zmm5, 3)
                            else
                            label_14009c2fe:
                                
                                if ((temp0_666 & 8) != 0)
                                    *(&var_2a8[3] + rax_84) = __extractps_memd_xmmps_immb(zmm5, 3)
                        
                        zmm3 = _mm_andnot_ps(temp0_662, zmm2)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm11)) != 0)
                            char temp0_671 = _mm_movemask_ps(zmm3)
                            
                            if ((temp0_671 & 1) == 0)
                                if ((temp0_671 & 2) != 0)
                                    goto label_14009c3e0
                                
                                goto label_14009c331
                            
                            *(&var_2a8 + rax_84) = 0
                            
                            if ((temp0_671 & 2) != 0)
                            label_14009c3e0:
                                *(&var_2a8[1] + rax_84) = 0
                                
                                if ((temp0_671 & 4) == 0)
                                    goto label_14009c33a
                                
                                goto label_14009c3f1
                            
                        label_14009c331:
                            
                            if ((temp0_671 & 4) != 0)
                            label_14009c3f1:
                                *(&var_2a8[2] + rax_84) = 0
                                
                                if ((temp0_671 & 8) != 0)
                                    *(&var_2a8[3] + rax_84) = 0
                            else
                            label_14009c33a:
                                
                                if ((temp0_671 & 8) != 0)
                                    *(&var_2a8[3] + rax_84) = 0
                    
                    if (rax_84 == 0x20)
                        break
                    
                    zmm14 = *(&var_218 + rax_84)
                    rax_84 += 0x10
                
                zmm0 = var_2a8
                float temp0_677[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
                float temp0_679[0x4] = _mm_add_ps(_mm_mul_ps(temp0_433, temp0_433), temp0_677)
                float temp0_681[0x4] = _mm_add_ps(_mm_mul_ps(temp0_434, temp0_434), temp0_679)
                float temp0_682[0x4] = _mm_rsqrt_ps(temp0_681)
                float temp0_684[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_681, temp0_682), temp0_682)
                float temp0_687[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_684), temp0_682), data_142d3f640)
                float temp0_688[0x4] = _mm_rcp_ps(temp0_687)
                float temp0_689[0x4] = _mm_mul_ps(temp0_687, temp0_688)
                zmm7 = _mm_blendv_ps(zmm7, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_689), temp0_688), zmm1)
            
            zmm0 = arg7
            float temp0_694[0x4] = _mm_sub_ps(zmm7, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_694, data_142fc95d0, 1), zmm11)
            result = zx.q(_mm_movemask_ps(zmm0))
            
            if (result.b == 0)
                zmm5 = var_268_2
            else
                float temp0_698[0x4] = _mm_mul_ps(temp0_452, temp0_694)
                result = zx.q(result.b)
                zmm2 = zmm10
                char temp8_1 = result.b & 1
                
                if (temp8_1 != 0)
                    zmm2 = zmm10
                    zmm2[0] = zmm2[0] + temp0_698[0]
                
                float temp0_699[0x4] = _mm_mul_ps(temp0_454, temp0_694)
                zmm3 = zmm9
                
                if (temp8_1 == 0)
                    zmm5 = _mm_mul_ps(temp0_456, temp0_694)
                    zmm1 = var_268_2
                    
                    if (temp8_1 != 0)
                        goto label_14009c511
                    
                    goto label_14009c4c7
                
                zmm3 = zmm9
                zmm3[0] = zmm3[0] + temp0_699[0]
                zmm5 = _mm_mul_ps(temp0_456, temp0_694)
                zmm1 = var_268_2
                bool cond:45_1
                bool cond:46_1
                bool cond:53_1
                bool cond:54_1
                
                if (temp8_1 != 0)
                label_14009c511:
                    zmm1 = var_268_2
                    zmm1[0] = zmm1[0] + zmm5[0]
                    zmm10 = _mm_add_ps(zmm10, temp0_698)
                    char temp16_1 = result.b & 2
                    cond:45_1 = temp16_1 == 0
                    cond:46_1 = temp16_1 != 0
                    cond:53_1 = temp16_1 != 0
                    cond:54_1 = temp16_1 == 0
                    
                    if (temp16_1 == 0)
                        goto label_14009c4cf
                    
                    goto label_14009c520
                
            label_14009c4c7:
                zmm10 = _mm_add_ps(zmm10, temp0_698)
                char temp15_1 = result.b & 2
                cond:45_1 = temp15_1 == 0
                cond:46_1 = temp15_1 != 0
                cond:53_1 = temp15_1 != 0
                cond:54_1 = temp15_1 == 0
                
                if (temp15_1 == 0)
                label_14009c4cf:
                    zmm9 = _mm_add_ps(zmm9, temp0_699)
                    
                    if (cond:46_1)
                        goto label_14009c52d
                    
                    goto label_14009c4d5
                
            label_14009c520:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                zmm9 = _mm_add_ps(zmm9, temp0_699)
                
                if (not(cond:45_1))
                label_14009c52d:
                    zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                    zmm4 = _mm_add_ps(var_268_2, zmm5)
                    
                    if (cond:54_1)
                        goto label_14009c4da
                    
                    goto label_14009c539
                
            label_14009c4d5:
                zmm4 = _mm_add_ps(var_268_2, zmm5)
                bool cond:61_1
                bool cond:62_1
                bool cond:65_1
                bool cond:66_1
                
                if (not(cond:53_1))
                label_14009c4da:
                    char temp24_1 = result.b & 4
                    cond:61_1 = temp24_1 != 0
                    cond:62_1 = temp24_1 == 0
                    cond:65_1 = temp24_1 == 0
                    cond:66_1 = temp24_1 != 0
                    
                    if (temp24_1 != 0)
                        goto label_14009c543
                    
                    goto label_14009c4de
                
            label_14009c539:
                zmm1 = _mm_blend_ps(zmm1, zmm4, 2)
                char temp23_1 = result.b & 4
                cond:61_1 = temp23_1 != 0
                cond:62_1 = temp23_1 == 0
                cond:65_1 = temp23_1 == 0
                cond:66_1 = temp23_1 != 0
                
                if (temp23_1 != 0)
                label_14009c543:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                    
                    if (cond:62_1)
                        goto label_14009c4e0
                    
                    goto label_14009c54c
                
            label_14009c4de:
                
                if (not(cond:61_1))
                label_14009c4e0:
                    
                    if (cond:66_1)
                        goto label_14009c555
                    
                    goto label_14009c4e2
                
            label_14009c54c:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                bool cond:69_1
                bool cond:70_1
                bool cond:73_1
                bool cond:74_1
                
                if (not(cond:65_1))
                label_14009c555:
                    zmm1 = _mm_blend_ps(zmm1, zmm4, 4)
                    char temp28_1 = result.b & 8
                    cond:69_1 = temp28_1 == 0
                    cond:70_1 = temp28_1 != 0
                    cond:73_1 = temp28_1 != 0
                    cond:74_1 = temp28_1 == 0
                    
                    if (temp28_1 != 0)
                        goto label_14009c4e6
                    
                    goto label_14009c55f
                
            label_14009c4e2:
                char temp27_1 = result.b & 8
                cond:69_1 = temp27_1 == 0
                cond:70_1 = temp27_1 != 0
                cond:73_1 = temp27_1 != 0
                cond:74_1 = temp27_1 == 0
                
                if (temp27_1 != 0)
                label_14009c4e6:
                    zmm10 = _mm_blend_ps(zmm10, zmm2, 7)
                    
                    if (cond:70_1)
                        goto label_14009c565
                    
                    goto label_14009c4ef
                
            label_14009c55f:
                zmm10 = zmm2
                
                if (cond:69_1)
                label_14009c4ef:
                    zmm9 = zmm3
                    
                    if (cond:73_1)
                        zmm1 = _mm_blend_ps(zmm1, zmm4, 8)
                else
                label_14009c565:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:74_1))
                        zmm1 = _mm_blend_ps(zmm1, zmm4, 8)
                
                zmm8 = _mm_blendv_ps(zmm8, _mm_add_ps(temp0_694, zmm8), zmm0)
                zmm5 = zmm1
        else
            zmm8 = var_2b8_1
    else
        zmm11 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        float var_238_1[0x4] = *arg3
        float var_248_1[0x4] = (*arg3)[1]
        float var_1e8_1[0x4] = (*arg3)[2]
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
        rbx = 0
        
        do
            float var_268_1[0x4]
            __builtin_memset(&var_268_1, 0, 0x20)
            float var_2c8[0x4]
            __builtin_memset(&var_2c8, 0, 0x20)
            zmm0 = __pmulld_xmmdq_memdq(*(arg6 + sx.q((rbx << 2).d)), data_142fc95c0)
            int64_t rsi_4 = sx.q(zmm0[0])
            int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 1))
            int64_t rax_1 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rdi_2 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm6 = *(arg4 + (rsi_4 << 2) + 4)
            float temp0_15[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + (rsi_4 << 2)), *(arg4 + (rbp_2 << 2)), 
                        0x10), 
                    *(arg4 + (rax_1 << 2)), 0x20), 
                *(arg4 + (rdi_2 << 2)), 0x30)
            float temp0_18[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(arg4 + (rbp_2 << 2) + 4), 0x10), 
                    *(arg4 + (rax_1 << 2) + 4), 0x20), 
                *(arg4 + (rdi_2 << 2) + 4), 0x30)
            float temp0_21[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + (rsi_4 << 2) + 8), 
                        *(arg4 + (rbp_2 << 2) + 8), 0x10), 
                    *(arg4 + (rax_1 << 2) + 8), 0x20), 
                *(arg4 + (rdi_2 << 2) + 8), 0x30)
            var_1d8 = temp0_15
            int128_t var_1a8_1 = zx.o(0)
            float var_228_1[0x4] = temp0_1
            var_218 = temp0_1
            float var_208_1[0x4] = temp0_1
            float temp0_22[0x4] = _mm_shuffle_ps(var_248_1, var_248_1, 0)
            float temp0_23[0x4] = _mm_mul_ps(temp0_21, temp0_22)
            float temp0_24[0x4] = _mm_shuffle_ps(var_1e8_1, var_1e8_1, 0)
            float temp0_25[0x4] = _mm_mul_ps(temp0_15, temp0_24)
            float temp0_26[0x4] = _mm_shuffle_ps(var_238_1, var_238_1, 0)
            float temp0_27[0x4] = _mm_mul_ps(temp0_18, temp0_26)
            float temp0_29[0x4] = _mm_sub_ps(temp0_23, _mm_mul_ps(temp0_18, temp0_24))
            float temp0_31[0x4] = _mm_sub_ps(temp0_25, _mm_mul_ps(temp0_21, temp0_26))
            float temp0_33[0x4] = _mm_sub_ps(temp0_27, _mm_mul_ps(temp0_15, temp0_22))
            float temp0_34[0x4] = _mm_add_ps(temp0_29, temp0_29)
            float temp0_35[0x4] = _mm_add_ps(temp0_31, temp0_31)
            float temp0_36[0x4] = _mm_add_ps(temp0_33, temp0_33)
            float temp0_37[0x4] = _mm_mul_ps(temp0_1, temp0_35)
            float temp0_38[0x4] = _mm_mul_ps(temp0_34, temp0_24)
            float temp0_39[0x4] = _mm_mul_ps(temp0_35, temp0_24)
            float temp0_44[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_36, temp0_22), temp0_39), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_34), var_1d8))
            float temp0_45[0x4] = _mm_mul_ps(temp0_1, temp0_36)
            float temp0_46[0x4] = __addps_xmmps_memps(temp0_37, temp0_18)
            float temp0_47[0x4] = __addps_xmmps_memps(temp0_45, temp0_21)
            float var_1f8_1[0x4] = temp0_1
            float temp0_48[0x4] = _mm_mul_ps(temp0_35, temp0_26)
            float temp0_49[0x4] = _mm_mul_ps(temp0_36, temp0_26)
            float temp0_51[0x4] = _mm_add_ps(_mm_sub_ps(temp0_38, temp0_49), temp0_46)
            float temp0_54[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_48, _mm_mul_ps(temp0_34, temp0_22)), temp0_47)
            zmm15 = arg3[1][0]
            zmm14 = (*arg3)[5]
            float temp0_56[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_44)
            float temp0_58[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_51)
            zmm12 = (*arg3)[6]
            float temp0_60[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm12, zmm12, 0), temp0_54)
            zmm8 = _mm_sub_ps(temp0_56, temp0_2)
            float temp0_62[0x4] = __subps_xmmps_memps(temp0_58, temp0_3)
            float temp0_63[0x4] = __subps_xmmps_memps(temp0_60, temp0_4)
            var_228 = zmm8
            var_218 = temp0_62
            float var_208_2[0x4] = temp0_63
            float temp0_64[0x4] = _mm_sub_ps(temp0_5, temp0_56)
            float temp0_65[0x4] = _mm_sub_ps(temp0_6, temp0_58)
            char temp0_67 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_56, temp0_2, 6))
            float temp0_68[0x4] = _mm_sub_ps(temp0_7, temp0_60)
            var_1d8 = temp0_64
            float var_1c8_2[0x4] = temp0_65
            float var_1b8_2[0x4] = temp0_68
            
            if (temp0_67 != 0xf)
                float temp0_69[0x4] = _mm_cmpeq_ps(temp0_56, temp0_2, 2)
                zmm4 = (*arg2)[1]
                zmm3 =
                    _mm_and_ps(_mm_cmpeq_ps(temp0_58, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_69)
                zmm5 = _mm_cmpeq_epi32(temp0_49, temp0_49)
                
                if (_mm_movemask_ps(zmm3 ^ zmm5) == 0xf)
                    goto label_14009a8cd
                
                zmm4 = (*arg2)[2]
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_60, _mm_shuffle_ps(zmm4, zmm4, 0), 2), zmm3)
                zmm3 = zmm1 ^ zmm5
                
                if (_mm_movemask_ps(zmm3) != 0xf)
                    zmm3 = *arg1
                    float temp0_79[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm4 = _mm_and_ps(_mm_cmpeq_ps(temp0_79, temp0_56, 6), zmm1)
                    char temp0_83 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm1))
                    zmm3 = _mm_cmpeq_ps(temp0_79, temp0_56, 2)
                    
                    if (temp0_83 != 0xf)
                        zmm4 = (*arg1)[1]
                        float temp0_86[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_58, 2)
                        zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm1), temp0_86)
                        zmm4 = _mm_andnot_ps(zmm3, zmm1)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm1)) != 0xf)
                        zmm4 = (*arg1)[2]
                        float temp0_93[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_60, 2)
                        zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm1), temp0_93)
                    
                    zmm1 = _mm_and_ps(zmm1, zmm3)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    goto label_14009a8e1
                
                goto label_14009a9a0
            
            zmm3 = _mm_cmpeq_ps(temp0_56, temp0_2, 2)
        label_14009a8cd:
            zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f)
            zmm1 = zmm3
            float var_258[0x4]
            
            if (_mm_movemask_ps(zmm1) == 0)
            label_14009a9a0:
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                zmm10 = var_258
                zmm9 = var_2c8
                zmm5 = var_268_1
                zmm6 = data_142d3f780
                zmm1 ^= zmm3
                result = zx.q(_mm_movemask_ps(zmm1))
                
                if (result.d != 0)
                label_14009a9c9:
                    int64_t rsi_5 = 0
                    
                    while (true)
                        float temp0_128[0x4] = _mm_cmpeq_ps(zx.o(0), zmm8, 1)
                        uint32_t temp0_130 = _mm_movemask_ps(_mm_and_ps(temp0_128, zmm1))
                        
                        if (temp0_130 != 0)
                            char rbp_4 = temp0_130.b
                            
                            if ((rbp_4 & 1) == 0)
                                if ((rbp_4 & 2) != 0)
                                    goto label_14009aae1
                                
                                goto label_14009aa08
                            
                            *(&var_2a8 + rsi_5) = zmm8[0]
                            
                            if ((rbp_4 & 2) != 0)
                            label_14009aae1:
                                *(&var_2a8[1] + rsi_5) = __extractps_memd_xmmps_immb(zmm8, 1)
                                
                                if ((rbp_4 & 4) == 0)
                                    goto label_14009aa12
                                
                                goto label_14009aaf4
                            
                        label_14009aa08:
                            
                            if ((rbp_4 & 4) != 0)
                            label_14009aaf4:
                                *(&var_2a8[2] + rsi_5) = __extractps_memd_xmmps_immb(zmm8, 2)
                                
                                if ((rbp_4 & 8) != 0)
                                    *(&var_2a8[3] + rsi_5) = __extractps_memd_xmmps_immb(zmm8, 3)
                            else
                            label_14009aa12:
                                
                                if ((rbp_4 & 8) != 0)
                                    *(&var_2a8[3] + rsi_5) = __extractps_memd_xmmps_immb(zmm8, 3)
                        
                        zmm0 = _mm_andnot_ps(temp0_128, zmm1)
                        result = zx.q(_mm_movemask_ps(zmm0))
                        
                        if (result.d != 0)
                            zmm3 = *(&var_1d8 + rsi_5)
                            float temp0_134[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            uint32_t temp0_136 = _mm_movemask_ps(_mm_and_ps(zmm0, temp0_134))
                            
                            if (temp0_136 != 0)
                                zmm3 ^= zmm6
                                char rbp_6 = temp0_136.b
                                
                                if ((rbp_6 & 1) == 0)
                                    if ((rbp_6 & 2) != 0)
                                        goto label_14009ab1c
                                    
                                    goto label_14009aa64
                                
                                *(&var_2a8 + rsi_5) = zmm3[0]
                                
                                if ((rbp_6 & 2) != 0)
                                label_14009ab1c:
                                    *(&var_2a8[1] + rsi_5) = __extractps_memd_xmmps_immb(zmm3, 1)
                                    
                                    if ((rbp_6 & 4) == 0)
                                        goto label_14009aa6e
                                    
                                    goto label_14009ab2e
                                
                            label_14009aa64:
                                
                                if ((rbp_6 & 4) != 0)
                                label_14009ab2e:
                                    *(&var_2a8[2] + rsi_5) = __extractps_memd_xmmps_immb(zmm3, 2)
                                    
                                    if ((rbp_6 & 8) != 0)
                                        *(&var_2a8[3] + rsi_5) =
                                            __extractps_memd_xmmps_immb(zmm3, 3)
                                else
                                label_14009aa6e:
                                    
                                    if ((rbp_6 & 8) != 0)
                                        *(&var_2a8[3] + rsi_5) =
                                            __extractps_memd_xmmps_immb(zmm3, 3)
                            
                            uint32_t temp0_139 = _mm_movemask_ps(_mm_andnot_ps(temp0_134, zmm0))
                            
                            if (temp0_139 != 0)
                                char rbp_8 = temp0_139.b
                                
                                if ((rbp_8 & 1) == 0)
                                    if ((rbp_8 & 2) != 0)
                                        goto label_14009ab57
                                    
                                    goto label_14009aa9c
                                
                                *(&var_2a8 + rsi_5) = 0
                                
                                if ((rbp_8 & 2) != 0)
                                label_14009ab57:
                                    *(&var_2a8[1] + rsi_5) = 0
                                    
                                    if ((rbp_8 & 4) == 0)
                                        goto label_14009aaa6
                                    
                                    goto label_14009ab69
                                
                            label_14009aa9c:
                                
                                if ((rbp_8 & 4) != 0)
                                label_14009ab69:
                                    *(&var_2a8[2] + rsi_5) = 0
                                    
                                    if ((rbp_8 & 8) != 0)
                                        *(&var_2a8[3] + rsi_5) = 0
                                else
                                label_14009aaa6:
                                    
                                    if ((rbp_8 & 8) != 0)
                                        *(&var_2a8[3] + rsi_5) = 0
                        
                        if (rsi_5 == 0x20)
                            break
                        
                        zmm8 = *(&var_218 + rsi_5)
                        rsi_5 += 0x10
                    
                    zmm0 = var_2a8
                    float temp0_145[0x4] =
                        __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm0), data_142d8f750)
                    float temp0_147[0x4] = _mm_add_ps(_mm_mul_ps(var_298, var_298), temp0_145)
                    float temp0_149[0x4] = _mm_add_ps(_mm_mul_ps(var_288, var_288), temp0_147)
                    float temp0_150[0x4] = _mm_rsqrt_ps(temp0_149)
                    float temp0_152[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_149, temp0_150), temp0_150)
                    float temp0_155[0x4] = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_152), temp0_150), 
                        data_142d3f640)
                    float temp0_156[0x4] = _mm_rcp_ps(temp0_155)
                    float temp0_157[0x4] = _mm_mul_ps(temp0_155, temp0_156)
                    arg5 = _mm_blendv_ps(arg5, 
                        _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_157), temp0_156), zmm1)
            else
            label_14009a8e1:
                float temp0_102[0x4] = _mm_max_ps(temp0_64, zmm8)
                float temp0_103[0x4] = _mm_max_ps(temp0_65, temp0_62)
                float temp0_104[0x4] = _mm_max_ps(temp0_68, temp0_63)
                float temp0_105[0x4] = _mm_cmpeq_ps(temp0_103, temp0_102, 1)
                zmm4 = _mm_and_ps(zmm1, temp0_105)
                
                if (_mm_movemask_ps(zmm4) != 0)
                    float temp0_108[0x4] = _mm_cmpeq_ps(temp0_104, temp0_102, 1)
                    zmm0 = _mm_and_ps(zmm4, temp0_108)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg5 = _mm_blendv_ps(arg5, temp0_102, zmm0)
                    
                    zmm2 = _mm_andnot_ps(temp0_108, zmm4)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                        arg5 = _mm_blendv_ps(arg5, temp0_104, zmm2)
                
                zmm3 = _mm_andnot_ps(temp0_105, zmm1)
                
                if (_mm_movemask_ps(zmm3) == 0)
                    goto label_14009a9a0
                
                float temp0_117[0x4] = _mm_cmpeq_ps(temp0_104, temp0_103, 1)
                zmm0 = _mm_and_ps(zmm3, temp0_117)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_103, zmm0)
                
                zmm5 = var_268_1
                zmm6 = data_142d3f780
                zmm2 = _mm_andnot_ps(temp0_117, zmm3)
                uint32_t temp0_122 = _mm_movemask_ps(zmm2)
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                
                if (temp0_122 != 0)
                    arg5 = _mm_blendv_ps(arg5, temp0_104, zmm2)
                
                zmm10 = var_258
                zmm9 = var_2c8
                zmm1 ^= zmm3
                result = zx.q(_mm_movemask_ps(zmm1))
                
                if (result.d != 0)
                    goto label_14009a9c9
            float temp0_161[0x4] = __subps_xmmps_memps(arg5, temp0_8)
            float temp0_162[0x4] = __cmpps_xmmps_memps_immb(temp0_161, data_142fc95d0, 1)
            char temp0_163 = _mm_movemask_ps(temp0_162)
            
            if (temp0_163 != 0)
                float temp0_164[0x4] = _mm_mul_ps(temp0_56, temp0_161)
                zmm6 = zmm10
                char temp1_1 = temp0_163 & 1
                
                if (temp1_1 == 0)
                    zmm14 = _mm_mul_ps(temp0_58, temp0_161)
                    zmm3 = zmm9
                    
                    if (temp1_1 != 0)
                        goto label_14009aca7
                    
                    goto label_14009ac21
                
                zmm6 = zmm10
                zmm6[0] = zmm6[0] + temp0_164[0]
                zmm14 = _mm_mul_ps(temp0_58, temp0_161)
                zmm3 = zmm9
                
                if (temp1_1 != 0)
                label_14009aca7:
                    zmm3 = zmm9
                    zmm3[0] = zmm3[0] + zmm14[0]
                    zmm12 = _mm_mul_ps(temp0_60, temp0_161)
                    zmm2 = zmm5
                    
                    if (temp1_1 == 0)
                        goto label_14009ac2e
                    
                    goto label_14009acbd
                
            label_14009ac21:
                zmm12 = _mm_mul_ps(temp0_60, temp0_161)
                zmm2 = zmm5
                bool cond:15_1
                bool cond:16_1
                bool cond:20_1
                bool cond:21_1
                
                if (temp1_1 == 0)
                label_14009ac2e:
                    zmm10 = _mm_add_ps(zmm10, temp0_164)
                    char temp4_1 = temp0_163 & 2
                    cond:15_1 = temp4_1 != 0
                    cond:16_1 = temp4_1 == 0
                    cond:20_1 = temp4_1 == 0
                    cond:21_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_14009acd3
                    
                    goto label_14009ac3c
                
            label_14009acbd:
                zmm2 = zmm5
                zmm2[0] = zmm2[0] + zmm12[0]
                zmm10 = _mm_add_ps(zmm10, temp0_164)
                char temp3_1 = temp0_163 & 2
                cond:15_1 = temp3_1 != 0
                cond:16_1 = temp3_1 == 0
                cond:20_1 = temp3_1 == 0
                cond:21_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                label_14009acd3:
                    zmm6 = _mm_blend_ps(zmm6, zmm10, 2)
                    zmm9 = _mm_add_ps(zmm9, zmm14)
                    
                    if (cond:16_1)
                        goto label_14009ac46
                    
                    goto label_14009ace4
                
            label_14009ac3c:
                zmm9 = _mm_add_ps(zmm9, zmm14)
                
                if (not(cond:15_1))
                label_14009ac46:
                    zmm5 = _mm_add_ps(zmm5, zmm12)
                    
                    if (cond:21_1)
                        goto label_14009acf5
                    
                    goto label_14009ac50
                
            label_14009ace4:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                zmm5 = _mm_add_ps(zmm5, zmm12)
                bool cond:31_1
                bool cond:32_1
                bool cond:39_1
                bool cond:40_1
                
                if (not(cond:20_1))
                label_14009acf5:
                    zmm2 = _mm_blend_ps(zmm2, zmm5, 2)
                    char temp10_1 = temp0_163 & 4
                    cond:31_1 = temp10_1 == 0
                    cond:32_1 = temp10_1 != 0
                    cond:39_1 = temp10_1 != 0
                    cond:40_1 = temp10_1 == 0
                    
                    if (temp10_1 == 0)
                        goto label_14009ac5a
                    
                    goto label_14009ad05
                
            label_14009ac50:
                char temp9_1 = temp0_163 & 4
                cond:31_1 = temp9_1 == 0
                cond:32_1 = temp9_1 != 0
                cond:39_1 = temp9_1 != 0
                cond:40_1 = temp9_1 == 0
                
                if (temp9_1 != 0)
                label_14009ad05:
                    zmm6 = _mm_blend_ps(zmm6, zmm10, 4)
                    
                    if (not(cond:31_1))
                    label_14009ad12:
                        zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                        
                        if (cond:40_1)
                            goto label_14009ac66
                        
                        goto label_14009ad1f
                else
                label_14009ac5a:
                    
                    if (cond:32_1)
                        goto label_14009ad12
                
                bool cond:47_1
                bool cond:48_1
                bool cond:55_1
                bool cond:56_1
                
                if (not(cond:39_1))
                label_14009ac66:
                    char temp18_1 = temp0_163 & 8
                    cond:47_1 = temp18_1 != 0
                    cond:48_1 = temp18_1 == 0
                    cond:55_1 = temp18_1 == 0
                    cond:56_1 = temp18_1 != 0
                    
                    if (temp18_1 == 0)
                        goto label_14009ad2f
                    
                    goto label_14009ac70
                
            label_14009ad1f:
                zmm2 = _mm_blend_ps(zmm2, zmm5, 4)
                char temp17_1 = temp0_163 & 8
                cond:47_1 = temp17_1 != 0
                cond:48_1 = temp17_1 == 0
                cond:55_1 = temp17_1 == 0
                cond:56_1 = temp17_1 != 0
                
                if (temp17_1 == 0)
                label_14009ad2f:
                    zmm10 = zmm6
                    
                    if (cond:48_1)
                        goto label_14009ac7d
                    
                    goto label_14009ad39
                
            label_14009ac70:
                zmm10 = _mm_blend_ps(zmm10, zmm6, 7)
                
                if (cond:47_1)
                label_14009ad39:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:55_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm5, 8)
                else
                label_14009ac7d:
                    zmm9 = zmm3
                    
                    if (cond:56_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm5, 8)
                
                var_2b8_1 = _mm_blendv_ps(var_2b8_1, _mm_add_ps(temp0_161, var_2b8_1), temp0_162)
                zmm5 = zmm2
            
            rbx = zx.q(rbx.d + 4)
        while (rbx.d s< i)
        
        if (rbx.d s< arg10)
            goto label_14009ad72
        
        zmm8 = var_2b8_1
    float temp0_719[0x4] = _mm_hadd_ps(zmm10, zmm10)
    float temp0_720[0x4] = _mm_hadd_ps(temp0_719, temp0_719)
    float temp0_721[0x4] = _mm_hadd_ps(zmm9, zmm9)
    float temp0_723[0x4] = _mm_insert_ps(temp0_720, _mm_hadd_ps(temp0_721, temp0_721), 0x1c)
    float temp0_724[0x4] = _mm_hadd_ps(zmm5, zmm5)
    float temp0_725[0x4] = _mm_hadd_ps(temp0_724, temp0_724)
    float temp0_727[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg9), arg9[1].d, 0x20), 
        temp0_723[0].q | temp0_725[0].q << 0x40)
    *arg9 = temp0_727[0]
    *(arg9 + 4) = __extractps_memd_xmmps_immb(temp0_727, 1)
    arg9[1].d = __extractps_memd_xmmps_immb(temp0_727, 2)
    float temp0_730[0x4] = _mm_hadd_ps(zmm8, zmm8)
    float temp0_731[0x4] = _mm_hadd_ps(temp0_730, temp0_730)
    temp0_731[0] = temp0_731[0] f+ *arg8
    *arg8 = temp0_731[0]
return result
