// 函数: sub_1400e0920
// 地址: 0x1400e0920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
uint32_t zmm13[0x4]
uint32_t var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
float zmm9[0x4]
float var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_d8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_e8[0x4] = zmm6
uint128_t zmm1 = __mulps_xmmps_memps(*arg3 | arg3[1].d.q << 0x40, data_142e6d9f0)
uint128_t zmm2 = _mm_sub_ps(*arg2 | arg2[1].d.q << 0x40, zmm1)
int32_t var_2c8 = zmm2.d
uint128_t zmm0
zmm0.q = zmm2 u>> 0x40
int32_t var_2c4 = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
int32_t var_2c0 = zmm0.d
zmm2 = _mm_add_ps(*arg1 | arg1[1].d.q << 0x40, zmm1)
int32_t var_2d8 = zmm2.d
zmm0.q = zmm2 u>> 0x40
int32_t var_2d4 = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
int32_t var_2d0 = zmm0.d
int32_t r14_4 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
uint128_t var_358
uint128_t var_348
uint128_t var_318
int32_t result
uint64_t rdx
uint128_t zmm3
uint128_t zmm4
float zmm5[0x4]

if (r14_4 s<= 0)
    rdx = 0
    result = 0
else
    result = 0
    zmm13 = zx.o(0)
    rdx = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm1 = *(arg8 + sx.q((rdx << 2).d))
            uint128_t var_298_1 = zmm1
            zmm0 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1)
            int64_t rax_4 = sx.q(zmm0.d)
            int64_t rsi_3 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
            int64_t rbp_1 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            zmm1 = *(arg7 + (rbp_1 << 2) + 4)
            zmm2 = _mm_unpacklo_ps(*(arg7 + (rdi_2 << 2)), (*(arg7 + (rbp_1 << 2))).q)
            zmm0 = _mm_unpacklo_ps(*(arg7 + (rdi_2 << 2) + 4), zmm1.q)
            zmm4 = *(arg7 + (rax_4 << 2) + 4)
            zmm1 = _mm_unpacklo_ps(*(arg7 + (rax_4 << 2)), (*(arg7 + (rsi_3 << 2))).q).q
                | zmm2.q << 0x40
            zmm4 = _mm_unpacklo_ps(zmm4, (*(arg7 + (rsi_3 << 2) + 4)).q).q | zmm0.q << 0x40
            zmm2 = _mm_unpacklo_ps(*(arg7 + (rax_4 << 2) + 8), (*(arg7 + (rsi_3 << 2) + 8)).q).q
                | _mm_unpacklo_ps(*(arg7 + (rdi_2 << 2) + 8), (*(arg7 + (rbp_1 << 2) + 8)).q).q
                << 0x40
            var_318 = zmm1
            uint128_t var_2f8_1 = zmm2
            uint32_t var_2e8_1[0x4] = zmm13
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_358 = zmm0
            var_348 = zmm0
            uint128_t var_338_1 = zmm0
            uint128_t var_328_1 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_18[0x4] = _mm_mul_ps(zmm2, temp0_17)
            float temp0_19[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm3 = _mm_mul_ps(zmm1, temp0_19)
            float temp0_21[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm7 = _mm_mul_ps(zmm4, temp0_21)
            float temp0_24[0x4] = _mm_sub_ps(temp0_18, _mm_mul_ps(zmm4, temp0_19))
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm2, temp0_21))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_17))
            float temp0_29[0x4] = _mm_add_ps(temp0_24, temp0_24)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            zmm2 = _mm_mul_ps(zmm0, temp0_29)
            float temp0_33[0x4] = _mm_mul_ps(zmm0, zmm3)
            zmm2 = __addps_xmmps_memps(zmm2, var_318)
            float temp0_35[0x4] = __addps_xmmps_memps(temp0_33, zmm4)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), var_2f8_1)
            zmm6 = _mm_mul_ps(zmm7, temp0_17)
            zmm4 = _mm_mul_ps(temp0_29, temp0_19)
            zmm1 = _mm_mul_ps(zmm3, temp0_21)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_19)), zmm2)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(zmm7, temp0_21)), temp0_35)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_29, temp0_17)), zmm0)
            zmm2 = arg6[1].d
            zmm3 = *(arg6 + 0x14)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm4)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            uint128_t var_158 = zmm2
            uint128_t var_268_1 = zmm3
            uint128_t var_148 = zmm3
            uint128_t var_2a8_1 = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rax_5 = 0
            uint128_t var_2b8_1 = zmm2
            zmm0 = zmm2
            
            while (true)
                zmm2 = *(&var_2c8 + rax_5)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_58 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_58 != 0)
                    if ((temp0_58 & 1) == 0)
                        if ((temp0_58 & 2) != 0)
                            goto label_1400e0d9f
                        
                        goto label_1400e0cb3
                    
                    *(&var_358 + (rax_5 << 2)) = zmm2.d
                    
                    if ((temp0_58 & 2) != 0)
                    label_1400e0d9f:
                        *(&var_358:4 + (rax_5 << 2)) = zmm2.d
                        
                        if ((temp0_58 & 4) == 0)
                            goto label_1400e0cbd
                        
                        goto label_1400e0daf
                    
                label_1400e0cb3:
                    
                    if ((temp0_58 & 4) != 0)
                    label_1400e0daf:
                        *(&var_358:8 + (rax_5 << 2)) = zmm2.d
                        
                        if ((temp0_58 & 8) != 0)
                            *(&var_358:0xc + (rax_5 << 2)) = zmm2.d
                    else
                    label_1400e0cbd:
                        
                        if ((temp0_58 & 8) != 0)
                            *(&var_358:0xc + (rax_5 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_2d8 + rax_5)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_64 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_64 != 0)
                        if ((temp0_64 & 1) == 0)
                            if ((temp0_64 & 2) != 0)
                                goto label_1400e0dd3
                            
                            goto label_1400e0d13
                        
                        *(&var_358 + (rax_5 << 2)) = zmm3.d
                        
                        if ((temp0_64 & 2) != 0)
                        label_1400e0dd3:
                            *(&var_358:4 + (rax_5 << 2)) = zmm3.d
                            
                            if ((temp0_64 & 4) == 0)
                                goto label_1400e0d1d
                            
                            goto label_1400e0de3
                        
                    label_1400e0d13:
                        
                        if ((temp0_64 & 4) != 0)
                        label_1400e0de3:
                            *(&var_358:8 + (rax_5 << 2)) = zmm3.d
                            
                            if ((temp0_64 & 8) != 0)
                                *(&var_358:0xc + (rax_5 << 2)) = zmm3.d
                        else
                        label_1400e0d1d:
                            
                            if ((temp0_64 & 8) != 0)
                                *(&var_358:0xc + (rax_5 << 2)) = zmm3.d
                    
                    char temp0_67 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_67 != 0)
                        zmm0 = *(&var_158 + (rax_5 << 2))
                        
                        if ((temp0_67 & 1) == 0)
                            if ((temp0_67 & 2) != 0)
                                goto label_1400e0e0c
                            
                            goto label_1400e0d59
                        
                        *(&var_358 + (rax_5 << 2)) = zmm0.d
                        
                        if ((temp0_67 & 2) != 0)
                        label_1400e0e0c:
                            *(&var_358:4 + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_67 & 4) == 0)
                                goto label_1400e0d63
                            
                            goto label_1400e0e21
                        
                    label_1400e0d59:
                        
                        if ((temp0_67 & 4) != 0)
                        label_1400e0e21:
                            *(&var_358:8 + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_67 & 8) != 0)
                                *(&var_358:0xc + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_1400e0d63:
                            
                            if ((temp0_67 & 8) != 0)
                                *(&var_358:0xc + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (rax_5 == 8)
                    break
                
                zmm0 = *(&var_148 + (rax_5 << 2))
                rax_5 += 4
            
            zmm12 = var_358
            zmm10 = var_348
            zmm4 = *arg1
            zmm14 = *(arg1 + 4)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_sub_ps(zmm12, zmm4)
            float temp0_73[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            float temp0_74[0x4] = _mm_sub_ps(zmm10, temp0_73)
            zmm3 = arg1[1].d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1 = _mm_sub_ps(var_338_1, zmm3)
            zmm6 = *arg3
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm0 = _mm_div_ps(zmm0, zmm6)
            zmm8 = _mm_cmpeq_epi32(temp0_17, temp0_17)
            zmm15 = arg3[1].d
            zmm7 = _mm_cvttps_epi32(zmm0)
            uint32_t var_238_1[0x4] = zmm6
            zmm2 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), zmm6), zmm4)
            float temp0_84[0x4] =
                __divps_xmmps_memps(zx.o(*arg3)[0].q | zmm15[0].q << 0x40, data_142fc9600)
            zmm0 = _mm_shuffle_ps(temp0_84, temp0_84, 0)
            uint128_t var_288_1 = zmm0
            zmm2 = _mm_cmpeq_ps(_mm_add_ps(zmm2, zmm0), zmm12, 1)
            zmm13 = _mm_add_epi32(zmm7, zmm8)
            zmm0 = _mm_and_ps(zmm7, zmm2)
            zmm2 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm13), zmm0)
            zmm8 = *(arg3 + 4)
            float temp0_92[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_93[0x4] = _mm_div_ps(temp0_74, temp0_92)
            float temp0_94[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm1 = _mm_div_ps(zmm1, temp0_94)
            zmm6 = _mm_cvttps_epi32(temp0_93)
            zmm1 = _mm_cvttps_epi32(zmm1)
            float temp0_99[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_92)
            float temp0_101[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_94)
            float temp0_102[0x4] = _mm_add_ps(temp0_99, temp0_73)
            uint128_t var_278_1 = zmm3
            float temp0_103[0x4] = _mm_add_ps(temp0_101, zmm3)
            float temp0_104[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
            float temp0_105[0x4] = _mm_add_ps(temp0_102, temp0_104)
            float temp0_106[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
            var_358 = zmm2
            zmm0 = _mm_cmpeq_ps(temp0_105, zmm10, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm7 = zmm6
            
            float temp0_109[0x4] = _mm_add_ps(temp0_103, temp0_106)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_105, zmm10, 5)) != 0)
                zmm13 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
            
            zmm3 = __subps_xmmps_memps(zmm12, var_2b8_1)
            float var_2b8_2[0x4] = zmm10
            zmm6 = __subps_xmmps_memps(zmm10, var_268_1)
            zmm5 = _mm_and_ps(zmm7, zmm0)
            zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm13), zmm5)
            var_348 = zmm0
            zmm5 = var_338_1
            float temp0_118[0x4] = _mm_cmpeq_ps(temp0_109, zmm5, 1)
            
            if (_mm_movemask_ps(temp0_118) != 0)
                zmm7 = zmm1
            
            float temp0_120[0x4] = __subps_xmmps_memps(zmm5, var_2a8_1)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            zmm6 = _mm_mul_ps(zmm6, zmm6)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_109, zmm5, 5)) != 0)
                zmm13 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            uint32_t temp0_126[0x4] = _mm_and_ps(zmm7, temp0_118)
            zmm10 = _mm_or_ps(_mm_andnot_ps(temp0_118, zmm13), temp0_126)
            zmm13 = zx.o(0)
            zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm13), zmm6)
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), var_238_1), zmm4)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_92), temp0_73)
            float var_338_2[0x4] = zmm10
            float temp0_139[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_94), var_278_1)
            zmm7 = _mm_add_ps(var_288_1, zmm1)
            float temp0_141[0x4] = _mm_add_ps(temp0_104, zmm0)
            float temp0_142[0x4] = _mm_add_ps(temp0_106, temp0_139)
            zmm0 = _mm_sub_ps(zmm12, zmm7)
            zmm1 = _mm_sub_ps(var_2b8_2, temp0_141)
            zmm4 = _mm_sub_ps(zmm5, temp0_142)
            zmm0 = _mm_div_ps(zmm0, var_238_1)
            zmm1 = _mm_div_ps(zmm1, temp0_92)
            zmm4 = _mm_div_ps(zmm4, temp0_94)
            var_318 = zmm0
            uint128_t var_308_2 = zmm1
            uint128_t var_2f8_2 = zmm4
            float temp0_149[0x4] = _mm_mul_ps(temp0_120, temp0_120)
            int64_t rax_10 = 0
            zmm15 = _mm_cmpeq_epi32(temp0_94, temp0_94)
            char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm15))
            
            if (i == 0)
                goto label_1400e113f
            
            do
                if ((i & 1) == 0)
                    if ((i & 2) != 0)
                        goto label_1400e11e1
                    
                    goto label_1400e10ff
                
                *(&var_358 + (rax_10 << 2)) = 0
                
                if ((i & 2) != 0)
                label_1400e11e1:
                    *(&var_358:4 + (rax_10 << 2)) = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400e1109
                    
                    goto label_1400e11f3
                
            label_1400e10ff:
                
                if ((i & 4) == 0)
                label_1400e1109:
                    
                    if ((i & 8) != 0)
                        goto label_1400e1205
                    
                    goto label_1400e1113
                
            label_1400e11f3:
                *(&var_358:8 + (rax_10 << 2)) = 0
                
                if ((i & 8) != 0)
                label_1400e1205:
                    *(&var_358:0xc + (rax_10 << 2)) = 0
                    
                    if ((i & 1) == 0)
                        goto label_1400e111d
                    
                    goto label_1400e1217
                
            label_1400e1113:
                
                if ((i & 1) == 0)
                label_1400e111d:
                    
                    if ((i & 2) != 0)
                        goto label_1400e1229
                    
                    goto label_1400e1127
                
            label_1400e1217:
                *(&var_318 + (rax_10 << 2)) = 0
                
                if ((i & 2) != 0)
                label_1400e1229:
                    *(&var_318:4 + (rax_10 << 2)) = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400e1131
                    
                    goto label_1400e123b
                
            label_1400e1127:
                
                if ((i & 4) != 0)
                label_1400e123b:
                    *(&var_318:8 + (rax_10 << 2)) = 0
                    
                    if ((i & 8) != 0)
                        *(&var_318:0xc + (rax_10 << 2)) = 0
                else
                label_1400e1131:
                    
                    if ((i & 8) != 0)
                        *(&var_318:0xc + (rax_10 << 2)) = 0
                
            label_1400e113f:
                int32_t rdi_3 = *(arg4 + rax_10)
                char temp0_157 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rdi_3 - 1), 0), *(&var_358 + (rax_10 << 2))))
                
                if (temp0_157 != 0)
                    if ((temp0_157 & 1) == 0)
                        if ((temp0_157 & 2) != 0)
                            goto label_1400e126d
                        
                        goto label_1400e1177
                    
                    *(&var_358 + (rax_10 << 2)) = rdi_3 - 2
                    
                    if ((temp0_157 & 2) != 0)
                    label_1400e126d:
                        *(&var_358:4 + (rax_10 << 2)) = rdi_3 - 2
                        
                        if ((temp0_157 & 4) == 0)
                            goto label_1400e1181
                        
                        goto label_1400e127b
                    
                label_1400e1177:
                    
                    if ((temp0_157 & 4) == 0)
                    label_1400e1181:
                        
                        if ((temp0_157 & 8) != 0)
                            goto label_1400e1289
                        
                        goto label_1400e118b
                    
                label_1400e127b:
                    *(&var_358:8 + (rax_10 << 2)) = rdi_3 - 2
                    
                    if ((temp0_157 & 8) != 0)
                    label_1400e1289:
                        *(&var_358:0xc + (rax_10 << 2)) = rdi_3 - 2
                        
                        if ((temp0_157 & 1) == 0)
                            goto label_1400e1195
                        
                        goto label_1400e1297
                    
                label_1400e118b:
                    
                    if ((temp0_157 & 1) == 0)
                    label_1400e1195:
                        
                        if ((temp0_157 & 2) != 0)
                            goto label_1400e12a9
                        
                        goto label_1400e119f
                    
                label_1400e1297:
                    *(&var_318 + (rax_10 << 2)) = 0x3f800000
                    
                    if ((temp0_157 & 2) != 0)
                    label_1400e12a9:
                        *(&var_318:4 + (rax_10 << 2)) = 0x3f800000
                        
                        if ((temp0_157 & 4) == 0)
                            goto label_1400e11a9
                        
                        goto label_1400e12bb
                    
                label_1400e119f:
                    
                    if ((temp0_157 & 4) != 0)
                    label_1400e12bb:
                        *(&var_318:8 + (rax_10 << 2)) = 0x3f800000
                        
                        if ((temp0_157 & 8) != 0)
                            *(&var_318:0xc + (rax_10 << 2)) = 0x3f800000
                    else
                    label_1400e11a9:
                        
                        if ((temp0_157 & 8) != 0)
                            *(&var_318:0xc + (rax_10 << 2)) = 0x3f800000
                
                if (rax_10 == 8)
                    break
                
                zmm2 = *(&var_348 + (rax_10 << 2))
                rax_10 += 4
                i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm15))
            while (i != 0)
            
            zmm3 = _mm_add_ps(zmm3, temp0_149)
            zmm10 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm6 = var_358
            zmm8 = var_348
            zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm10), 0xe8)
            zmm5 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm10, zmm6), 0xe8), zmm1.q)
            zmm2 = _mm_add_epi32(zmm5, zmm8)
            zmm4 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm4), 0xe8).q)
            zmm1 = _mm_add_epi32(zmm12, var_338_2)
            uint128_t* rax_12 = *(arg5 + 0x10)
            zmm1 = _mm_slli_epi32(zmm1, 2)
            int64_t rsi_16 = sx.q(zmm1.d)
            zmm14 = zmm3
            int64_t rdi_6 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
            int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
            int64_t rbx_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
            zmm7 = *(rax_12 + rbx_2 + 4)
            zmm3 = _mm_unpacklo_ps(*(rax_12 + rbp_3), (*(rax_12 + rbx_2)).q)
            zmm0 = _mm_unpacklo_ps(*(rax_12 + rbp_3 + 4), zmm7[0].q)
            zmm11 = *(rax_12 + rsi_16 + 4)
            zmm1 = _mm_unpacklo_ps(*(rax_12 + rsi_16), (*(rax_12 + rdi_6))[0].q).q | zmm3.q << 0x40
            zmm11 = _mm_unpacklo_ps(zmm11, (*(rax_12 + rdi_6 + 4)).q)[0].q | zmm0.q << 0x40
            zmm6 = _mm_sub_epi32(zmm6, zmm15)
            zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm10), 0xe8)
            zmm6 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm10), 0xe8), zmm0.q)
            zmm0 = _mm_add_epi32(zmm6, zmm8)
            zmm3 = _mm_shuffle_epi32(zmm0, 0xf5)
            uint32_t temp0_198[0x4] = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm4), 0xe8).q), 
                    var_338_2), 
                2)
            zmm2 = _mm_add_epi32(zmm2, zmm10)
            zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
            zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8).q)
            zmm7 = zmm14
            zmm0 = _mm_sub_ps(
                _mm_unpacklo_ps(*(rax_12 + sx.q(temp0_198[0])), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_198, 0xe5).d))).q).q | _mm_unpacklo_ps(
                    *(rax_12 + sx.q(_mm_shuffle_epi32(temp0_198, 0x4e).d)), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_198, 0xe7)[0])))[0].q).q << 0x40, 
                zmm1)
            zmm10 = var_318
            zmm14 = var_308_2
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm10), zmm1)
            zmm8 = _mm_sub_epi32(zmm8, zmm15)
            zmm5 = _mm_add_epi32(zmm5, zmm8)
            zmm1 = _mm_shuffle_epi32(zmm5, 0xf5)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm4), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm4), 0xe8).q), 
                    var_338_2), 
                2)
            zmm1 = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm3.d)), 
                (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
                *(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])), 
                (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q)[0].q << 0x40
            zmm8 = _mm_add_epi32(zmm8, zmm6)
            zmm3 = _mm_shuffle_epi32(zmm8, 0xf5)
            uint32_t temp0_237[0x4] = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm4), 0xe8).q), 
                    var_338_2), 
                2)
            float temp0_239[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(temp0_237[0])), 
                (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_237, 0xe5).d))).q)
            zmm3 = _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_237, 0x4e).d)), 
                (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_237, 0xe7)[0])))[0].q)
            float temp0_245[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_239[0].q | zmm3.q << 0x40, zmm1), zmm10), zmm1)
            zmm4 = _mm_add_epi32(zmm4, var_338_2)
            zmm12 = _mm_add_epi32(zmm12, zmm4)
            zmm4 = _mm_add_epi32(zmm4, zmm2)
            zmm1 = _mm_slli_epi32(_mm_add_epi32(zmm2, var_338_2), 2)
            zmm2 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rax_12 + sx.q(zmm1.d) + 4), 
                            (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + 4)).q).q |
                            _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + 4), 
                            (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + 4)).q).q << 0x40, 
                        zmm11), 
                    zmm10), 
                zmm11)
            zmm12 = _mm_slli_epi32(zmm12, 2)
            zmm3 = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm12[0]) + 4), 
                (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm12, 0xe5).d) + 4)).q).q | _mm_unpacklo_ps(
                *(rax_12 + sx.q(_mm_shuffle_epi32(zmm12, 0x4e).d) + 4), 
                (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm12, 0xe7)[0]) + 4))[0].q).q << 0x40
            zmm4 = _mm_slli_epi32(zmm4, 2)
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rax_12 + sx.q(zmm4.d) + 4), 
                            (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + 4))[0].q).q |
                            _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + 4), 
                            (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d) + 4)).q)[0].q << 0x40, 
                        zmm3), 
                    zmm10), 
                zmm3)
            float temp0_276[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_245, zmm0), zmm14), zmm0)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm2), zmm14), zmm2), 
                        temp0_276), 
                    var_2f8_2), 
                temp0_276)
            zmm2 = _mm_cmpeq_ps(zmm7, zmm13, 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm7, zmm13, 7), zmm2)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm2 = _mm_rsqrt_ps(zmm7)
                zmm7 = _mm_mul_ps(_mm_mul_ps(zmm7, zmm2), zmm2)
                zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm7), zmm2), 
                    data_142d3f640)
                zmm2 = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, zmm2)
                zmm4 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), zmm2), zmm1), zmm0)
                zmm1 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm1), zmm4)
            
            zmm0 = *arg10
            char i_3 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
            if (i_3 == 0)
                result = 0
                rdx = zx.q(rdx.d + 4)
                
                if (rdx.d s>= r14_4)
                    break
                
                continue
            else
                uint64_t i_1 = zx.q(i_3)
                result = 0
                
                do
                    uint64_t rdi_7
                    
                    if (i_1 == 0)
                        rdi_7 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400e1791:
                            uint128_t var_1e8 = zmm1
                            uint64_t rdi_8 = zx.q(rdi_7.d) & 3
                            *arg10 = (*(&var_1e8 + (rdi_8 << 2))).d
                            uint128_t var_1d8 = var_298_1
                            *arg9 = *(&var_1d8 + (rdi_8 << 2))
                    else
                        uint64_t rflags_1
                        rdi_7, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rdi_7 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400e1791
                    result.b = 1
                while (i_1 != 0)
        
        rdx = zx.q(rdx.d + 4)
        
        if (rdx.d s>= r14_4)
            break

if (rdx.d s< arg11)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx.d), 0), data_142e11d00)
        zmm1 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm0)
        int64_t rax_15 = sx.q(rdx.d << 2)
        uint32_t temp0_307 = _mm_movemask_ps(zmm1)
        
        if ((zx.q(temp0_307) & 0xfffffff9) != 9)
            if ((temp0_307.b & 1) == 0)
                if ((temp0_307.b & 2) != 0)
                    goto label_1400e2726
                
                goto label_1400e1851
            
            var_358.d = *(arg8 + rax_15)
            
            if ((temp0_307.b & 2) != 0)
            label_1400e2726:
                var_358:4.d = *(arg8 + rax_15 + 4)
                
                if ((temp0_307.b & 4) == 0)
                    goto label_1400e185a
                
                goto label_1400e273f
            
        label_1400e1851:
            
            if ((temp0_307.b & 4) != 0)
            label_1400e273f:
                var_358:8.d = *(arg8 + rax_15 + 8)
                
                if ((temp0_307.b & 8) != 0)
                    var_358:0xc.d = *(arg8 + rax_15 + 0xc)
            else
            label_1400e185a:
                
                if ((temp0_307.b & 8) != 0)
                    var_358:0xc.d = *(arg8 + rax_15 + 0xc)
            
            zmm0 = var_358
        else
            zmm0 = *(arg8 + rax_15)
        
        uint128_t var_288_2 = zmm0
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm1
        int64_t rdx_5 = sx.q(zmm2.d)
        int64_t rax_18 = arg7 + (rdx_5 << 2)
        zmm0 = *(arg7 + (rdx_5 << 2))
        int64_t rsi_68 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        int64_t rdx_7 = arg7 + (rsi_68 << 2)
        zmm0 = _mm_unpacklo_ps(zmm0, (*(arg7 + (rsi_68 << 2))).q)
        int64_t rdi_9 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        int64_t rsi_70 = arg7 + (rdi_9 << 2)
        zmm3 = *(arg7 + (rdi_9 << 2))
        int64_t rdi_11 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        int64_t rbp_4 = arg7 + (rdi_11 << 2)
        zmm0 = zmm0.q | _mm_unpacklo_ps(zmm3, (*(arg7 + (rdi_11 << 2))).q).q << 0x40
        zmm3 = data_142fc95e0 & zmm1
        uint64_t r12_1 = zx.q(zmm3.d)
        zmm8 = *(r12_1 + rax_18)
        uint32_t (* r15_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d)
        float temp0_316[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_2 + rdx_7)).q)
        uint32_t (* r14_5)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
        zmm4 = *(r14_5 + rsi_70)
        uint128_t* rbx_3 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        zmm4 = _mm_unpacklo_ps(zmm4, (*(rbx_3 + rbp_4)).q)
        zmm8 = temp0_316[0].q | zmm4.q << 0x40
        zmm3 = data_142fc95f0 & zmm1
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_18), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d) + rdx_7)).q)
        zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) + rsi_70), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_4)).q)
        zmm6 = zmm6[0].q | zmm4.q << 0x40
        uint128_t var_1c8_1 = zmm0
        uint32_t var_1a8_1[0x4] = zmm6
        float var_198_1[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        float temp0_325[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_358 = temp0_325
        var_348 = temp0_325
        zmm7 = *arg6
        zmm2 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_328[0x4] = _mm_mul_ps(zmm8, zmm7)
        zmm7 = _mm_mul_ps(zmm7, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm2, zmm0)
        zmm0 = _mm_mul_ps(zmm0, zmm4)
        zmm3 = _mm_mul_ps(zx.o(0), temp0_325)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, zmm8))
        zmm0 = _mm_sub_ps(zmm0, zmm7)
        float temp0_338[0x4] = _mm_sub_ps(temp0_328, zmm2)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        float temp0_342[0x4] = _mm_add_ps(temp0_338, temp0_338)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_318 = zmm6
        uint128_t var_308_3 = zmm0
        float var_2f8_3[0x4] = temp0_342
        uint128_t var_2e8_2 = zmm3
        zmm3 = _mm_mul_ps(zmm3, temp0_325)
        zmm2 = _mm_mul_ps(temp0_325, zmm6)
        float temp0_346[0x4] = _mm_mul_ps(temp0_325, zmm0)
        float temp0_347[0x4] = _mm_mul_ps(temp0_325, temp0_342)
        zmm2 = __addps_xmmps_memps(zmm2, var_1c8_1)
        float temp0_349[0x4] = __addps_xmmps_memps(temp0_346, zmm8)
        float temp0_350[0x4] = __addps_xmmps_memps(temp0_347, var_1a8_1)
        float var_328_2[0x4] = temp0_325
        uint128_t var_128_1 = zmm2
        float var_118_1[0x4] = temp0_349
        float var_108_1[0x4] = temp0_350
        uint128_t var_f8_1 = __addps_xmmps_memps(zmm3, var_198_1)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        float temp0_352[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(zmm0, zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_342)
        float temp0_356[0x4] = _mm_mul_ps(temp0_342, temp0_352)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_358[0x4] = _mm_mul_ps(temp0_352, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm7)
        float temp0_361[0x4] = _mm_sub_ps(temp0_356, _mm_mul_ps(zmm7, zmm0))
        zmm6 = _mm_sub_ps(zmm6, zmm4)
        zmm3 = _mm_sub_ps(zmm3, temp0_358)
        float temp0_364[0x4] = _mm_add_ps(temp0_361, zmm2)
        zmm6 = _mm_add_ps(zmm6, temp0_349)
        zmm3 = _mm_add_ps(zmm3, temp0_350)
        zmm8 = arg6[1].d
        zmm2 = *(arg6 + 0x14)
        float temp0_368[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_364)
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
        zmm0 = *(arg6 + 0x18)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
        float var_188[0x4] = temp0_368
        uint128_t var_278_2 = zmm2
        uint128_t var_178 = zmm2
        uint128_t var_2a8_2 = zmm0
        uint128_t var_168_1 = zmm0
        int64_t rax_22 = 0
        zmm0 = temp0_368
        
        while (true)
            zmm3 = *(&var_2c8 + rax_22)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm4 = _mm_cmpeq_ps(zmm2, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm1)) != 0)
                char temp0_377 = _mm_movemask_ps(zmm4)
                
                if ((temp0_377 & 1) == 0)
                    if ((temp0_377 & 2) != 0)
                        goto label_1400e1c5e
                    
                    goto label_1400e1b75
                
                *(&var_358 + (rax_22 << 2)) = zmm3.d
                
                if ((temp0_377 & 2) != 0)
                label_1400e1c5e:
                    *(&var_358:4 + (rax_22 << 2)) = zmm3.d
                    
                    if ((temp0_377 & 4) == 0)
                        goto label_1400e1b7e
                    
                    goto label_1400e1c6d
                
            label_1400e1b75:
                
                if ((temp0_377 & 4) != 0)
                label_1400e1c6d:
                    *(&var_358:8 + (rax_22 << 2)) = zmm3.d
                    
                    if ((temp0_377 & 8) != 0)
                        *(&var_358:0xc + (rax_22 << 2)) = zmm3.d
                else
                label_1400e1b7e:
                    
                    if ((temp0_377 & 8) != 0)
                        *(&var_358:0xc + (rax_22 << 2)) = zmm3.d
            
            zmm2 = _mm_cmpeq_ps(zmm2, zmm0, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
                zmm4 = *(&var_2d8 + rax_22)
                zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 1), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                    char temp0_386 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_386 & 1) == 0)
                        if ((temp0_386 & 2) != 0)
                            goto label_1400e1c8f
                        
                        goto label_1400e1bda
                    
                    *(&var_358 + (rax_22 << 2)) = zmm4.d
                    
                    if ((temp0_386 & 2) != 0)
                    label_1400e1c8f:
                        *(&var_358:4 + (rax_22 << 2)) = zmm4.d
                        
                        if ((temp0_386 & 4) == 0)
                            goto label_1400e1be3
                        
                        goto label_1400e1c9e
                    
                label_1400e1bda:
                    
                    if ((temp0_386 & 4) != 0)
                    label_1400e1c9e:
                        *(&var_358:8 + (rax_22 << 2)) = zmm4.d
                        
                        if ((temp0_386 & 8) != 0)
                            *(&var_358:0xc + (rax_22 << 2)) = zmm4.d
                    else
                    label_1400e1be3:
                        
                        if ((temp0_386 & 8) != 0)
                            *(&var_358:0xc + (rax_22 << 2)) = zmm4.d
                
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 5), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm1)) != 0)
                    zmm2 = *(&var_188 + (rax_22 << 2))
                    char temp0_391 = _mm_movemask_ps(zmm0)
                    
                    if ((temp0_391 & 1) == 0)
                        if ((temp0_391 & 2) != 0)
                            goto label_1400e1cc5
                        
                        goto label_1400e1c20
                    
                    *(&var_358 + (rax_22 << 2)) = zmm2.d
                    
                    if ((temp0_391 & 2) != 0)
                    label_1400e1cc5:
                        *(&var_358:4 + (rax_22 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5).d
                        
                        if ((temp0_391 & 4) == 0)
                            goto label_1400e1c29
                        
                        goto label_1400e1cd9
                    
                label_1400e1c20:
                    
                    if ((temp0_391 & 4) != 0)
                    label_1400e1cd9:
                        *(&var_358:8 + (rax_22 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e).d
                        
                        if ((temp0_391 & 8) != 0)
                            *(&var_358:0xc + (rax_22 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                    else
                    label_1400e1c29:
                        
                        if ((temp0_391 & 8) != 0)
                            *(&var_358:0xc + (rax_22 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
            
            if (rax_22 == 8)
                break
            
            zmm0 = *(&var_178 + (rax_22 << 2))
            rax_22 += 4
        
        zmm9 = var_358
        zmm12 = var_348
        float temp0_395[0x4] = _mm_sub_ps(zmm9, temp0_368)
        zmm7 = *arg1
        zmm4 = *(arg1 + 4)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm0 = _mm_sub_ps(zmm9, zmm7)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_sub_ps(zmm12, zmm4)
        zmm3 = *arg3
        zmm5 = *(arg3 + 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm0 = _mm_div_ps(zmm0, zmm3)
        float temp0_402[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm2 = _mm_div_ps(zmm2, temp0_402)
        zmm10 = arg3[1].d
        zmm13 = _mm_cvttps_epi32(zmm0)
        zmm2 = _mm_cvttps_epi32(zmm2)
        uint128_t var_238_2 = zmm3
        uint32_t var_258_2[0x4] = zmm7
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm3), zmm7)
        zmm3 = __divps_xmmps_memps(*arg3 | zmm10[0].q << 0x40, data_142fc9600)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
        uint128_t var_268_2 = zmm0
        float var_2b8_3[0x4] = zmm9
        zmm6 = _mm_cmpeq_ps(_mm_add_ps(zmm6, zmm0), zmm9, 1)
        zmm7 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm0, zmm0))
        zmm0 = _mm_and_ps(zmm13, zmm6)
        zmm6 = _mm_or_ps(_mm_andnot_ps(zmm6, zmm7), zmm0)
        zmm15 = zmm2
        uint128_t var_248_2 = zmm4
        float temp0_420[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_402), zmm4)
        float temp0_421[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_422[0x4] = _mm_add_ps(temp0_420, temp0_421)
        float temp0_423[0x4] = _mm_cmpeq_ps(temp0_422, zmm12, 1)
        char temp0_425 = _mm_movemask_ps(_mm_and_ps(temp0_423, zmm1))
        zmm11 = arg1[1].d
        float temp0_426[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        zmm0 = temp0_325
        float temp0_427[0x4] = _mm_sub_ps(zmm0, temp0_426)
        float temp0_428[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        zmm4 = _mm_cvttps_epi32(_mm_div_ps(temp0_427, temp0_428))
        uint128_t var_298_2 = zmm4
        float temp0_433[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_428), temp0_426)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        var_358 = zmm6
        zmm2 = _mm_cmpeq_ps(temp0_422, zmm12, 5)
        
        if (temp0_425 != 0)
            zmm13 = zmm15
        
        float var_218_2[0x4] = zmm12
        float temp0_436[0x4] = __subps_xmmps_memps(zmm12, var_278_2)
        float temp0_437[0x4] = _mm_mul_ps(temp0_395, temp0_395)
        float temp0_438[0x4] = _mm_add_ps(temp0_433, zmm3)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm1)) != 0)
            zmm7 = __paddd_xmmdq_memdq(zmm15, data_142d3f800)
        
        zmm2 = __subps_xmmps_memps(zmm0, var_2a8_2)
        float temp0_443[0x4] = _mm_add_ps(temp0_437, zx.o(0))
        float temp0_444[0x4] = _mm_mul_ps(temp0_436, temp0_436)
        zmm4 = _mm_and_ps(zmm13, temp0_423)
        zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_423, zmm7), zmm4)
        var_348 = zmm9
        float temp0_448[0x4] = _mm_cmpeq_ps(temp0_438, zmm0, 5)
        float temp0_449[0x4] = _mm_cmpeq_ps(temp0_438, zmm0, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_449, zmm1)) != 0)
            zmm13 = var_298_2
        
        float temp0_452[0x4] = _mm_add_ps(temp0_443, temp0_444)
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_448, zmm1)) != 0)
            zmm7 = __paddd_xmmdq_memdq(var_298_2, data_142d3f800)
        
        float temp0_457[0x4] = _mm_add_ps(temp0_452, zmm2)
        uint32_t temp0_458[0x4] = _mm_and_ps(zmm13, temp0_449)
        zmm12 = _mm_or_ps(_mm_andnot_ps(temp0_449, zmm7), temp0_458)
        zmm13 = var_238_2
        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), zmm13), var_258_2)
        zmm4 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_402), var_248_2)
        float temp0_469[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_428), temp0_426)
        zmm7 = _mm_add_ps(var_268_2, zmm2)
        float temp0_471[0x4] = _mm_add_ps(temp0_421, zmm4)
        zmm3 = _mm_add_ps(zmm3, temp0_469)
        zmm2 = _mm_sub_ps(var_2b8_3, zmm7)
        zmm4 = _mm_sub_ps(var_218_2, temp0_471)
        zmm0 = _mm_sub_ps(zmm0, zmm3)
        zmm2 = _mm_div_ps(zmm2, zmm13)
        zmm4 = _mm_div_ps(zmm4, temp0_402)
        zmm0 = _mm_div_ps(zmm0, temp0_428)
        var_318 = zmm2
        uint128_t var_308_4 = zmm4
        uint128_t var_2f8_4 = zmm0
        int64_t rax_27 = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
            
            if (_mm_movemask_ps(zmm6 & zmm1) != 0)
                char temp0_482 = _mm_movemask_ps(zmm6)
                
                if ((temp0_482 & 1) == 0)
                    if ((temp0_482 & 2) != 0)
                        goto label_1400e2090
                    
                    goto label_1400e1fc1
                
                *(&var_358 + (rax_27 << 2)) = 0
                
                if ((temp0_482 & 2) != 0)
                label_1400e2090:
                    *(&var_358:4 + (rax_27 << 2)) = 0
                    
                    if ((temp0_482 & 4) == 0)
                        goto label_1400e1fca
                    
                    goto label_1400e20a1
                
            label_1400e1fc1:
                
                if ((temp0_482 & 4) == 0)
                label_1400e1fca:
                    
                    if ((temp0_482 & 8) != 0)
                        goto label_1400e20b2
                    
                    goto label_1400e1fd3
                
            label_1400e20a1:
                *(&var_358:8 + (rax_27 << 2)) = 0
                
                if ((temp0_482 & 8) != 0)
                label_1400e20b2:
                    *(&var_358:0xc + (rax_27 << 2)) = 0
                    
                    if ((temp0_482 & 1) == 0)
                        goto label_1400e1fdc
                    
                    goto label_1400e20c3
                
            label_1400e1fd3:
                
                if ((temp0_482 & 1) == 0)
                label_1400e1fdc:
                    
                    if ((temp0_482 & 2) != 0)
                        goto label_1400e20d4
                    
                    goto label_1400e1fe5
                
            label_1400e20c3:
                *(&var_318 + (rax_27 << 2)) = 0
                
                if ((temp0_482 & 2) != 0)
                label_1400e20d4:
                    *(&var_318:4 + (rax_27 << 2)) = 0
                    
                    if ((temp0_482 & 4) == 0)
                        goto label_1400e1fee
                    
                    goto label_1400e20e5
                
            label_1400e1fe5:
                
                if ((temp0_482 & 4) != 0)
                label_1400e20e5:
                    *(&var_318:8 + (rax_27 << 2)) = 0
                    
                    if ((temp0_482 & 8) != 0)
                        *(&var_318:0xc + (rax_27 << 2)) = 0
                else
                label_1400e1fee:
                    
                    if ((temp0_482 & 8) != 0)
                        *(&var_318:0xc + (rax_27 << 2)) = 0
            
            int32_t rdx_15 = *(arg4 + rax_27)
            zmm2 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_15 - 1), 0), 
                *(&var_358 + (rax_27 << 2)))
            
            if (_mm_movemask_ps(zmm2 & zmm1) != 0)
                char temp0_486 = _mm_movemask_ps(zmm2)
                
                if ((temp0_486 & 1) == 0)
                    if ((temp0_486 & 2) != 0)
                        goto label_1400e210c
                    
                    goto label_1400e2037
                
                *(&var_358 + (rax_27 << 2)) = rdx_15 - 2
                
                if ((temp0_486 & 2) != 0)
                label_1400e210c:
                    *(&var_358:4 + (rax_27 << 2)) = rdx_15 - 2
                    
                    if ((temp0_486 & 4) == 0)
                        goto label_1400e2040
                    
                    goto label_1400e2119
                
            label_1400e2037:
                
                if ((temp0_486 & 4) == 0)
                label_1400e2040:
                    
                    if ((temp0_486 & 8) != 0)
                        goto label_1400e2126
                    
                    goto label_1400e2049
                
            label_1400e2119:
                *(&var_358:8 + (rax_27 << 2)) = rdx_15 - 2
                
                if ((temp0_486 & 8) != 0)
                label_1400e2126:
                    *(&var_358:0xc + (rax_27 << 2)) = rdx_15 - 2
                    
                    if ((temp0_486 & 1) == 0)
                        goto label_1400e2052
                    
                    goto label_1400e2133
                
            label_1400e2049:
                
                if ((temp0_486 & 1) == 0)
                label_1400e2052:
                    
                    if ((temp0_486 & 2) != 0)
                        goto label_1400e2144
                    
                    goto label_1400e205b
                
            label_1400e2133:
                *(&var_318 + (rax_27 << 2)) = 0x3f800000
                
                if ((temp0_486 & 2) != 0)
                label_1400e2144:
                    *(&var_318:4 + (rax_27 << 2)) = 0x3f800000
                    
                    if ((temp0_486 & 4) == 0)
                        goto label_1400e2064
                    
                    goto label_1400e2155
                
            label_1400e205b:
                
                if ((temp0_486 & 4) != 0)
                label_1400e2155:
                    *(&var_318:8 + (rax_27 << 2)) = 0x3f800000
                    
                    if ((temp0_486 & 8) != 0)
                        *(&var_318:0xc + (rax_27 << 2)) = 0x3f800000
                else
                label_1400e2064:
                    
                    if ((temp0_486 & 8) != 0)
                        *(&var_318:0xc + (rax_27 << 2)) = 0x3f800000
            
            if (rax_27 == 8)
                break
            
            zmm6 = *(&var_348 + (rax_27 << 2))
            rax_27 += 4
        
        zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm4 = var_358
        zmm2 = var_348
        zmm10 = zmm12
        zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
        zmm7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), zmm0.q)
        zmm0 = _mm_add_epi32(zmm7, zmm2)
        zmm3 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm3), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm3), 0xe8)[0].q)
        zmm6 = _mm_add_epi32(zmm14, zmm10)
        float (* rcx_5)[0x4] = *(arg5 + 0x10)
        zmm6 = _mm_slli_epi32(zmm6, 2) & zmm1
        int64_t rax_30 = sx.q(zmm6[0])
        zmm15 = *(rcx_5 + rax_30)
        int64_t rax_32 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
        float temp0_505[0x4] = _mm_unpacklo_ps(zmm15, (*(rcx_5 + rax_32))[0].q)
        int64_t rdx_17 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
        zmm5 = *(rcx_5 + rdx_17)
        int64_t rbp_5 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
        float temp0_508[0x4] = _mm_unpacklo_ps(zmm5, (*(rcx_5 + rbp_5))[0].q)
        zmm15 = temp0_505[0].q | temp0_508[0].q << 0x40
        zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
        zmm4 = _mm_sub_epi32(zmm4, zmm13)
        zmm5 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
        zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm8), 0xe8), zmm5[0].q)
        zmm4 = _mm_add_epi32(zmm12, zmm2)
        zmm5 = _mm_shuffle_epi32(zmm4, 0xf5)
        zmm4 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8)[0].q), 
                zmm10), 
            2)
        zmm0 = _mm_add_epi32(zmm0, zmm8)
        zmm5 = _mm_shuffle_epi32(zmm0, 0xf5)
        zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm3), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8).q)
        zmm4 &= zmm1
        zmm6 = _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm4.d)), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q)
        zmm0 = _mm_unpacklo_ps(*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q)
        zmm6 = _mm_sub_ps(zmm6[0].q | zmm0.q << 0x40, zmm15)
        zmm11 = var_318
        zmm9 = var_308_4
        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm11), zmm15)
        zmm2 = _mm_sub_epi32(zmm2, zmm13)
        zmm7 = _mm_add_epi32(zmm7, zmm2)
        zmm0 = _mm_shuffle_epi32(zmm7, 0xf5)
        zmm4 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm3), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm3), 0xe8).q), 
                zmm10), 
            2) & zmm1
        zmm0 = _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm4.d)), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
            *(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q)[0].q << 0x40
        zmm2 = _mm_add_epi32(zmm2, zmm12)
        zmm4 = _mm_shuffle_epi32(zmm2, 0xf5)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm3), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8).q), 
                zmm10), 
            2) & zmm1
        zmm2 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm5[0])), 
                        (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d))).q).q | _mm_unpacklo_ps(
                        *(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)), 
                        (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q).q << 0x40, 
                    zmm0), 
                zmm11), 
            zmm0)
        zmm0 = _mm_unpacklo_ps(*(r12_1 + rcx_5 + rax_30), (*(r15_2 + rcx_5 + rax_32)).q).q
            | _mm_unpacklo_ps(*(r14_5 + rcx_5 + rdx_17), (*(rbx_3 + rcx_5 + rbp_5))[0].q).q << 0x40
        zmm3 = _mm_add_epi32(zmm3, zmm10)
        zmm14 = _mm_add_epi32(zmm14, zmm3)
        zmm3 = _mm_add_epi32(zmm3, zmm8)
        zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2) & zmm1
        float temp0_581[0x4] = _mm_unpacklo_ps(*(r12_1 + sx.q(zmm8[0]) + rcx_5), 
            (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5).d) + rcx_5)).q)
        zmm4 = _mm_unpacklo_ps(*(r14_5 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) + rcx_5), 
            (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + rcx_5))[0].q)
        float temp0_587[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_581[0].q | zmm4.q << 0x40, zmm0), zmm11), zmm0)
        zmm14 = _mm_slli_epi32(zmm14, 2) & zmm1
        zmm0 = _mm_unpacklo_ps(*(r12_1 + sx.q(zmm14[0]) + rcx_5), 
            (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rcx_5)).q).q | _mm_unpacklo_ps(
            *(r14_5 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rcx_5), 
            (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rcx_5))[0].q).q << 0x40
        zmm3 = _mm_slli_epi32(zmm3, 2) & zmm1
        zmm4 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r12_1 + sx.q(zmm3.d) + rcx_5), 
                        (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rcx_5))[0].q).q |
                        _mm_unpacklo_ps(*(r14_5 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rcx_5), 
                        (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rcx_5)).q)[0].q << 0x40, 
                    zmm0), 
                zmm11), 
            zmm0)
        zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm2, zmm6), zmm9), zmm6)
        zmm4 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_587), zmm9), temp0_587), 
                    zmm2), 
                var_2f8_4), 
            zmm2)
        zmm2 = _mm_cmpeq_ps(temp0_457, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_457, 7), zmm2), zmm1)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm2 = _mm_rsqrt_ps(temp0_457)
            float temp0_619[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_457, zmm2), zmm2)
            zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_619), zmm2), 
                data_142d3f640)
            zmm2 = _mm_rcp_ps(zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm2)
            zmm5 = _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), zmm2), zmm4), 
                zmm0)
            zmm4 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm4), zmm5)
        
        zmm0 = *arg10
        uint32_t i_4 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm4, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm1))
        
        if (i_4 == 0)
            return 0
        
        uint64_t i_2 = zx.q(i_4)
        result = 0
        
        do
            uint64_t rdx_20
            
            if (i_2 == 0)
                rdx_20 = 0x40
                i_2 &= 0xfffffffffffffffe
                
                if ((result.b & 1) == 0)
                label_1400e2661:
                    uint128_t var_208 = zmm4
                    uint64_t rdx_21 = zx.q(rdx_20.d) & 3
                    *arg10 = (*(&var_208 + (rdx_21 << 2))).d
                    uint128_t var_1f8 = var_288_2
                    *arg9 = *(&var_1f8 + (rdx_21 << 2))
            else
                uint64_t rflags_2
                rdx_20, rflags_2 = _bit_scan_forward(i_2)
                i_2 &= not.q(1 << (rdx_20 u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400e2661
            result.b = 1
        while (i_2 != 0)

return result
