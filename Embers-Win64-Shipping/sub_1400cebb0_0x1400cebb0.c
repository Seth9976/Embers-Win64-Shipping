// 函数: sub_1400cebb0
// 地址: 0x1400cebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
uint128_t zmm14
uint128_t var_68 = zmm14
uint128_t zmm13
uint128_t var_78 = zmm13
int32_t zmm12[0x4]
int32_t var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_e8[0x4] = zmm6
float zmm4[0x4] = *arg12
uint128_t zmm0 = __mulps_xmmps_memps(*arg3 | arg3[1].d.q << 0x40, data_142e6d9f0)
uint32_t result = _mm_movemask_ps(zmm4)
uint128_t zmm1 = _mm_sub_ps(*arg2 | arg2[1].d.q << 0x40, zmm0)
uint128_t zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
uint128_t zmm3 = _mm_unpackhi_pd(zmm1, zmm1.q)
uint128_t var_3e8
uint128_t var_3d8
uint128_t var_3a8
float zmm5[0x4]
float zmm9[0x4]
float zmm10[0x4]

if (result != 0xf)
    int32_t var_278 = zmm1.d
    int32_t var_274_1 = zmm2.d
    int32_t var_270_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, *arg1 | arg1[1].d.q << 0x40)
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    zmm2 = _mm_unpackhi_pd(zmm0, zmm0.q)
    int32_t var_288 = zmm0.d
    int32_t var_284_1 = zmm1.d
    int32_t var_280_1 = zmm2.d
    int32_t i = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
    float var_248_1[0x4] = zmm4
    float var_358_2[0x4]
    float var_348[0x4]
    float var_318[0x4]
    float var_308[0x4]
    float var_2e8[0x4]
    float var_2d8[0x4]
    float var_2c8[0x4]
    float var_2b8[0x4]
    float var_2a8[0x4]
    int32_t var_298[0x4]
    uint64_t rdx_5
    
    if (i s> 0)
        zmm0 = arg8
        uint128_t var_238_2 = _mm_shuffle_ps(zmm0, zmm0, 0)
        rdx_5 = 0
        __builtin_memset(&var_358_2, 0, 0x40)
        
        do
            int64_t rax_84 = sx.q((rdx_5 << 2).d * 3)
            zmm4 = *(arg7 + rax_84)
            zmm0 = *(arg7 + rax_84 + 0x10)
            zmm1 = *(arg7 + rax_84 + 0x20)
            zmm6 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5).q), 
                zmm1, 0xc4)
            zmm2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            float temp0_458[0x4] = _mm_shuffle_ps(zmm4, zmm0, 5)
            float temp0_461[0x4] = _mm_shuffle_ps(temp0_458, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_458, zmm0, 0xf8), 0x22), 0x28)
            var_3a8 = zmm2
            int128_t var_378_3 = zx.o(0)
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3e8 = zmm0
            var_3d8 = zmm0
            float var_3c8_4[0x4] = zmm0
            uint128_t var_3b8_3 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
            float temp0_463[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm3 = _mm_mul_ps(temp0_463, zmm6)
            float temp0_465[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_466[0x4] = _mm_mul_ps(temp0_465, zmm2)
            float temp0_467[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_468[0x4] = _mm_mul_ps(temp0_467, temp0_461)
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(temp0_461, temp0_465))
            float temp0_472[0x4] = _mm_sub_ps(temp0_466, _mm_mul_ps(zmm6, temp0_467))
            float temp0_474[0x4] = _mm_sub_ps(temp0_468, _mm_mul_ps(zmm2, temp0_463))
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_476[0x4] = _mm_add_ps(temp0_472, temp0_472)
            float temp0_477[0x4] = _mm_add_ps(temp0_474, temp0_474)
            float temp0_478[0x4] = _mm_mul_ps(zmm0, zmm3)
            float temp0_479[0x4] = _mm_mul_ps(zmm0, temp0_476)
            float temp0_480[0x4] = __addps_xmmps_memps(temp0_478, var_3a8)
            float temp0_481[0x4] = __addps_xmmps_memps(temp0_479, temp0_461)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_477), zmm6)
            zmm1 = _mm_mul_ps(temp0_477, temp0_463)
            zmm2 = _mm_mul_ps(zmm3, temp0_465)
            zmm6 = _mm_mul_ps(temp0_476, temp0_467)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_476, temp0_465)), temp0_480)
            zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(temp0_477, temp0_467)), temp0_481)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_463)), zmm0)
            zmm4 = arg6[1].d
            zmm3 = *(arg6 + 0x14)
            float temp0_497[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm1)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm2)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
            float var_1b8[0x4] = temp0_497
            var_298 = zmm3
            uint128_t var_1a8 = zmm3
            float var_368_4[0x4] = zmm0
            uint128_t var_198_1 = zmm0
            int64_t rbx_7 = 0
            zmm0 = temp0_497
            
            while (true)
                zmm2 = *(&var_278 + rbx_7)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_504 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_504 != 0)
                    if ((temp0_504 & 1) == 0)
                        if ((temp0_504 & 2) != 0)
                            goto label_1400d041d
                        
                        goto label_1400d034d
                    
                    *(&var_3e8 + (rbx_7 << 2)) = zmm2.d
                    
                    if ((temp0_504 & 2) != 0)
                    label_1400d041d:
                        *(&var_3e8:4 + (rbx_7 << 2)) = zmm2.d
                        
                        if ((temp0_504 & 4) == 0)
                            goto label_1400d0355
                        
                        goto label_1400d042b
                    
                label_1400d034d:
                    
                    if ((temp0_504 & 4) != 0)
                    label_1400d042b:
                        *(&var_3e8:8 + (rbx_7 << 2)) = zmm2.d
                        
                        if ((temp0_504 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_7 << 2)) = zmm2.d
                    else
                    label_1400d0355:
                        
                        if ((temp0_504 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_7 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_288 + rbx_7)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_510 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_510 != 0)
                        if ((temp0_510 & 1) == 0)
                            if ((temp0_510 & 2) != 0)
                                goto label_1400d044b
                            
                            goto label_1400d03a2
                        
                        *(&var_3e8 + (rbx_7 << 2)) = zmm3.d
                        
                        if ((temp0_510 & 2) != 0)
                        label_1400d044b:
                            *(&var_3e8:4 + (rbx_7 << 2)) = zmm3.d
                            
                            if ((temp0_510 & 4) == 0)
                                goto label_1400d03aa
                            
                            goto label_1400d0459
                        
                    label_1400d03a2:
                        
                        if ((temp0_510 & 4) != 0)
                        label_1400d0459:
                            *(&var_3e8:8 + (rbx_7 << 2)) = zmm3.d
                            
                            if ((temp0_510 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_7 << 2)) = zmm3.d
                        else
                        label_1400d03aa:
                            
                            if ((temp0_510 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_7 << 2)) = zmm3.d
                    
                    char temp0_513 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_513 != 0)
                        zmm0 = *(&var_1b8 + (rbx_7 << 2))
                        
                        if ((temp0_513 & 1) == 0)
                            if ((temp0_513 & 2) != 0)
                                goto label_1400d047e
                            
                            goto label_1400d03de
                        
                        *(&var_3e8 + (rbx_7 << 2)) = zmm0.d
                        
                        if ((temp0_513 & 2) != 0)
                        label_1400d047e:
                            *(&var_3e8:4 + (rbx_7 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_513 & 4) == 0)
                                goto label_1400d03e6
                            
                            goto label_1400d0491
                        
                    label_1400d03de:
                        
                        if ((temp0_513 & 4) != 0)
                        label_1400d0491:
                            *(&var_3e8:8 + (rbx_7 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_513 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_7 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_1400d03e6:
                            
                            if ((temp0_513 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_7 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (rbx_7 == 8)
                    break
                
                zmm0 = *(&var_1a8 + (rbx_7 << 2))
                rbx_7 += 4
            
            zmm12 = var_3e8
            zmm13 = var_3d8
            zmm6 = *arg1
            zmm9 = *(arg1 + 4)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm0 = _mm_sub_ps(zmm12, zmm6)
            float temp0_519[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm3 = _mm_sub_ps(zmm13, temp0_519)
            zmm5 = arg1[1].d
            float temp0_521[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_2b8 = var_3c8_4
            float temp0_522[0x4] = _mm_sub_ps(var_3c8_4, temp0_521)
            zmm4 = *arg3
            float temp0_523[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, temp0_523)
            zmm2 = arg3[1].d
            zmm15 = _mm_cvttps_epi32(zmm0)
            var_2c8 = temp0_523
            var_2e8 = zmm6
            zmm1 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_523), zmm6)
            zmm14 = __divps_xmmps_memps(*arg3 | zmm2.q << 0x40, data_142fc9600)
            zmm0 = _mm_shuffle_ps(zmm14, zmm14, 0)
            var_318 = zmm0
            zmm1 = _mm_cmpeq_ps(_mm_add_ps(zmm1, zmm0), zmm12, 1)
            zmm0 = __paddd_xmmdq_memdq(zmm15, data_142d3f800)
            zmm4 = _mm_and_ps(zmm15, zmm1)
            zmm1 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm4)
            zmm8 = *(arg3 + 4)
            float temp0_537[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm3 = _mm_div_ps(zmm3, temp0_537)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_540[0x4] = _mm_div_ps(temp0_522, zmm2)
            zmm6 = _mm_cvttps_epi32(zmm3)
            zmm3 = _mm_cvttps_epi32(temp0_540)
            float temp0_544[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_537)
            float temp0_546[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm2)
            var_2d8 = temp0_519
            float temp0_547[0x4] = _mm_add_ps(temp0_544, temp0_519)
            float temp0_548[0x4] = _mm_add_ps(temp0_546, temp0_521)
            float temp0_549[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
            float temp0_550[0x4] = _mm_add_ps(temp0_547, temp0_549)
            zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
            var_3e8 = zmm1
            float temp0_552[0x4] = _mm_cmpeq_ps(temp0_550, zmm13, 1)
            
            if (_mm_movemask_ps(temp0_552) != 0)
                zmm15 = zmm6
            
            float temp0_554[0x4] = _mm_add_ps(temp0_548, zmm14)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_550, zmm13, 5)) != 0)
                zmm0 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
            
            var_2a8 = zmm12
            float temp0_558[0x4] = __subps_xmmps_memps(zmm12, temp0_497)
            var_308 = zmm13
            zmm6 = __subps_xmmps_memps(zmm13, var_298)
            zmm4 = _mm_and_ps(zmm15, temp0_552)
            zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_552, zmm0), zmm4)
            var_3d8 = zmm9
            zmm13 = _mm_cmpeq_ps(temp0_554, var_2b8, 1)
            
            if (_mm_movemask_ps(zmm13) != 0)
                zmm15 = zmm3
            
            zmm12 = __subps_xmmps_memps(var_2b8, var_368_4)
            float temp0_566[0x4] = _mm_mul_ps(temp0_558, temp0_558)
            zmm6 = _mm_mul_ps(zmm6, zmm6)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_554, var_2b8, 5)) != 0)
                zmm0 = __paddd_xmmdq_memdq(zmm3, data_142d3f800)
            
            zmm15 = _mm_and_ps(zmm15, zmm13)
            zmm13 = _mm_or_ps(_mm_andnot_ps(zmm13, zmm0), zmm15)
            float temp0_575[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_566, data_142d8f750), zmm6)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), var_2c8), var_2e8)
            float temp0_581[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_537), var_2d8)
            float var_3c8_5[0x4] = zmm13
            zmm6 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm2), temp0_521)
            zmm3 = _mm_add_ps(var_318, zmm0)
            float temp0_586[0x4] = _mm_add_ps(temp0_549, temp0_581)
            zmm14 = _mm_add_ps(zmm14, zmm6)
            zmm0 = _mm_sub_ps(var_2a8, zmm3)
            float temp0_589[0x4] = _mm_sub_ps(var_308, temp0_586)
            float temp0_590[0x4] = _mm_sub_ps(var_2b8, zmm14)
            zmm0 = _mm_div_ps(zmm0, var_2c8)
            float temp0_592[0x4] = _mm_div_ps(temp0_589, temp0_537)
            float temp0_593[0x4] = _mm_div_ps(temp0_590, zmm2)
            var_3a8 = zmm0
            zmm12 = _mm_mul_ps(zmm12, zmm12)
            int64_t rbx_8 = 0
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            char j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3))
            
            if (j == 0)
                goto label_1400d079c
            
            do
                if ((j & 1) == 0)
                    if ((j & 2) != 0)
                        goto label_1400d082f
                    
                    goto label_1400d0768
                
                *(&var_3e8 + (rbx_8 << 2)) = 0
                
                if ((j & 2) != 0)
                label_1400d082f:
                    *(&var_3e8:4 + (rbx_8 << 2)) = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400d0770
                    
                    goto label_1400d083f
                
            label_1400d0768:
                
                if ((j & 4) == 0)
                label_1400d0770:
                    
                    if ((j & 8) != 0)
                        goto label_1400d084f
                    
                    goto label_1400d0778
                
            label_1400d083f:
                *(&var_3e8:8 + (rbx_8 << 2)) = 0
                
                if ((j & 8) != 0)
                label_1400d084f:
                    *(&var_3e8:0xc + (rbx_8 << 2)) = 0
                    
                    if ((j & 1) == 0)
                        goto label_1400d0780
                    
                    goto label_1400d085f
                
            label_1400d0778:
                
                if ((j & 1) == 0)
                label_1400d0780:
                    
                    if ((j & 2) != 0)
                        goto label_1400d086f
                    
                    goto label_1400d0788
                
            label_1400d085f:
                *(&var_3a8 + (rbx_8 << 2)) = 0
                
                if ((j & 2) != 0)
                label_1400d086f:
                    *(&var_3a8:4 + (rbx_8 << 2)) = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400d0790
                    
                    goto label_1400d087f
                
            label_1400d0788:
                
                if ((j & 4) != 0)
                label_1400d087f:
                    *(&var_3a8:8 + (rbx_8 << 2)) = 0
                    
                    if ((j & 8) != 0)
                        *(&var_3a8:0xc + (rbx_8 << 2)) = 0
                else
                label_1400d0790:
                    
                    if ((j & 8) != 0)
                        *(&var_3a8:0xc + (rbx_8 << 2)) = 0
                
            label_1400d079c:
                int32_t rbp_10 = *(arg4 + rbx_8)
                char temp0_602 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rbp_10 - 1), 0), *(&var_3e8 + (rbx_8 << 2))))
                
                if (temp0_602 != 0)
                    if ((temp0_602 & 1) == 0)
                        if ((temp0_602 & 2) != 0)
                            goto label_1400d08ab
                        
                        goto label_1400d07ce
                    
                    *(&var_3e8 + (rbx_8 << 2)) = rbp_10 - 2
                    
                    if ((temp0_602 & 2) != 0)
                    label_1400d08ab:
                        *(&var_3e8:4 + (rbx_8 << 2)) = rbp_10 - 2
                        
                        if ((temp0_602 & 4) == 0)
                            goto label_1400d07d6
                        
                        goto label_1400d08b7
                    
                label_1400d07ce:
                    
                    if ((temp0_602 & 4) == 0)
                    label_1400d07d6:
                        
                        if ((temp0_602 & 8) != 0)
                            goto label_1400d08c3
                        
                        goto label_1400d07de
                    
                label_1400d08b7:
                    *(&var_3e8:8 + (rbx_8 << 2)) = rbp_10 - 2
                    
                    if ((temp0_602 & 8) != 0)
                    label_1400d08c3:
                        *(&var_3e8:0xc + (rbx_8 << 2)) = rbp_10 - 2
                        
                        if ((temp0_602 & 1) == 0)
                            goto label_1400d07e6
                        
                        goto label_1400d08cf
                    
                label_1400d07de:
                    
                    if ((temp0_602 & 1) == 0)
                    label_1400d07e6:
                        
                        if ((temp0_602 & 2) != 0)
                            goto label_1400d08df
                        
                        goto label_1400d07ee
                    
                label_1400d08cf:
                    *(&var_3a8 + (rbx_8 << 2)) = 0x3f800000
                    
                    if ((temp0_602 & 2) != 0)
                    label_1400d08df:
                        *(&var_3a8:4 + (rbx_8 << 2)) = 0x3f800000
                        
                        if ((temp0_602 & 4) == 0)
                            goto label_1400d07f6
                        
                        goto label_1400d08ef
                    
                label_1400d07ee:
                    
                    if ((temp0_602 & 4) != 0)
                    label_1400d08ef:
                        *(&var_3a8:8 + (rbx_8 << 2)) = 0x3f800000
                        
                        if ((temp0_602 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_8 << 2)) = 0x3f800000
                    else
                    label_1400d07f6:
                        
                        if ((temp0_602 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_8 << 2)) = 0x3f800000
                
                if (rbx_8 == 8)
                    break
                
                zmm1 = *(&var_3d8 + (rbx_8 << 2))
                rbx_8 += 4
                j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3))
            while (j != 0)
            
            float temp0_603[0x4] = _mm_add_ps(temp0_575, zmm12)
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm1 = var_3e8
            zmm15 = var_3d8
            zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm1, 0xf5), zmm8), 0xe8)
            zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm1), 0xe8), zmm0.q)
            zmm5 = _mm_add_epi32(zmm13, zmm15)
            zmm2 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm2), 0xe8).q)
            zmm0 = _mm_add_epi32(zmm14, var_3c8_5)
            float (* rbx_9)[0x4] = *(arg5 + 0x10)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int64_t rax_101 = sx.q(zmm0.d)
            int64_t rsi_5 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            int64_t rdi_5 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            int64_t rbp_13 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            zmm6 = *(rbx_9 + rbp_13 + 4)
            float temp0_624[0x4] = _mm_unpacklo_ps(*(rbx_9 + rdi_5), (*(rbx_9 + rbp_13)).q)
            float temp0_625[0x4] = _mm_unpacklo_ps(*(rbx_9 + rdi_5 + 4), zmm6[0].q)
            zmm12 = *(rbx_9 + rax_101 + 4)
            zmm0 = _mm_unpacklo_ps(*(rbx_9 + rax_101), (*(rbx_9 + rsi_5))[0].q).q
                | temp0_624[0].q << 0x40
            zmm12 =
                _mm_unpacklo_ps(zmm12, (*(rbx_9 + rsi_5 + 4))[0].q)[0].q | temp0_625[0].q << 0x40
            zmm1 = _mm_sub_epi32(zmm1, zmm3)
            zmm4 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm1, 0xf5), zmm8), 0xe8)
            zmm1 = _mm_mul_epu32(zmm1, zmm8)
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            zmm6 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm1, 0xe8), zmm4[0].q)
            zmm1 = _mm_add_epi32(zmm6, zmm15)
            zmm4 = _mm_shuffle_epi32(zmm1, 0xf5)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8)[0].q), 
                    var_3c8_5), 
                2)
            zmm5 = _mm_add_epi32(zmm5, zmm8)
            zmm4 = _mm_shuffle_epi32(zmm5, 0xf5)
            zmm10 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8)[0].q)
            float temp0_653[0x4] = _mm_unpacklo_ps(*(rbx_9 + sx.q(zmm1.d)), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])))[0].q)
            float temp0_656[0x4] = _mm_unpacklo_ps(
                *(rbx_9 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d))).q)
            float temp0_657[0x4] = _mm_sub_ps(temp0_653[0].q | temp0_656[0].q << 0x40, zmm0)
            zmm11 = var_3a8
            float temp0_659[0x4] = _mm_add_ps(_mm_mul_ps(temp0_657, zmm11), zmm0)
            zmm15 = _mm_sub_epi32(zmm15, zmm3)
            zmm13 = _mm_add_epi32(zmm13, zmm15)
            zmm0 = _mm_shuffle_epi32(zmm13, 0xf5)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm13, zmm2), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm2), 0xe8).q), 
                    var_3c8_5), 
                2)
            zmm0 = _mm_unpacklo_ps(*(rbx_9 + sx.q(zmm1.d)), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rbx_9 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d))).q).q << 0x40
            zmm15 = _mm_add_epi32(zmm15, zmm6)
            zmm1 = _mm_shuffle_epi32(zmm15, 0xf5)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm15, zmm2), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8).q), 
                    var_3c8_5), 
                2)
            float temp0_685[0x4] = _mm_unpacklo_ps(*(rbx_9 + sx.q(zmm3.d)), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5).d))).q)
            zmm1 = _mm_unpacklo_ps(*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q)
            float temp0_691[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_685[0].q | zmm1.q << 0x40, zmm0), zmm11), zmm0)
            zmm2 = _mm_add_epi32(zmm2, var_3c8_5)
            zmm14 = _mm_add_epi32(zmm14, zmm2)
            zmm2 = _mm_add_epi32(zmm2, zmm10)
            zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, var_3c8_5), 2)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbx_9 + sx.q(zmm10[0]) + 4), 
                            (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm10, 0xe5).d) + 4)).q).q |
                            _mm_unpacklo_ps(*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm10, 0x4e).d) + 4), 
                            (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm10, 0xe7).d) + 4)).q).q << 0x40, 
                        zmm12), 
                    zmm11), 
                zmm12)
            zmm14 = _mm_slli_epi32(zmm14, 2)
            zmm1 = _mm_unpacklo_ps(*(rbx_9 + sx.q(zmm14.d) + 4), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + 4)).q).q | _mm_unpacklo_ps(
                *(rbx_9 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + 4), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + 4))[0].q).q << 0x40
            zmm2 = _mm_slli_epi32(zmm2, 2)
            zmm6 = _mm_unpacklo_ps(*(rbx_9 + sx.q(zmm2.d) + 4), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d) + 4)).q)
            zmm3 = _mm_unpacklo_ps(*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d) + 4), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d) + 4)).q)
            zmm6 = zmm6[0].q | zmm3.q << 0x40
            zmm3 = temp0_603
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm1), zmm11), zmm1)
            float temp0_722[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_691, temp0_659), temp0_592), temp0_659)
            zmm6 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm0), temp0_592), zmm0), 
                        temp0_722), 
                    temp0_593), 
                temp0_722)
            zmm1 = _mm_cmpeq_ps(zmm3, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm3, zx.o(0), 7), zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm1 = _mm_rsqrt_ps(zmm3)
                zmm3 = _mm_mul_ps(_mm_mul_ps(zmm3, zmm1), zmm1)
                zmm2 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm3), zmm1), 
                    data_142d3f640)
                zmm1 = _mm_rcp_ps(zmm2)
                zmm2 = _mm_mul_ps(zmm2, zmm1)
                zmm3 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm2), zmm1), zmm6), zmm0)
                zmm6 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm6), zmm3)
            
            float var_328_2[0x4]
            zmm9 = var_328_2
            float var_338_2[0x4]
            zmm10 = var_338_2
            zmm11 = var_348
            zmm6 = __subps_xmmps_memps(zmm6, var_238_2)
            zmm0 = __cmpps_xmmps_memps_immb(zmm6, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                float temp0_750[0x4] = _mm_mul_ps(var_1b8, zmm6)
                float temp0_751[0x4] = _mm_mul_ps(var_1a8, zmm6)
                float temp0_752[0x4] = _mm_mul_ps(var_198_1, zmm6)
                char rbx_10 = result.b
                zmm3 = zmm10
                char temp1_1 = rbx_10 & 1
                
                if (temp1_1 == 0)
                    zmm2 = zmm9
                    
                    if (temp1_1 != 0)
                        goto label_1400d0086
                    
                    goto label_1400d0de5
                
                zmm3.d = zmm10.d f+ temp0_750[0]
                zmm2 = zmm9
                
                if (temp1_1 != 0)
                label_1400d0086:
                    zmm2.d = zmm9.d f+ temp0_751[0]
                    zmm1 = zmm11
                    
                    if (temp1_1 == 0)
                        goto label_1400d0def
                    
                    goto label_1400d0098
                
            label_1400d0de5:
                zmm1 = zmm11
                bool cond:20_1
                bool cond:21_1
                bool cond:28_1
                bool cond:29_1
                
                if (temp1_1 == 0)
                label_1400d0def:
                    zmm10 = _mm_add_ps(zmm10, temp0_750)
                    char temp7_1 = rbx_10 & 2
                    cond:20_1 = temp7_1 != 0
                    cond:21_1 = temp7_1 == 0
                    cond:28_1 = temp7_1 == 0
                    cond:29_1 = temp7_1 != 0
                    
                    if (temp7_1 != 0)
                        goto label_1400d00b5
                    
                    goto label_1400d0dfc
                
            label_1400d0098:
                zmm1.d = zmm11.d f+ temp0_752[0]
                zmm10 = _mm_add_ps(zmm10, temp0_750)
                char temp6_1 = rbx_10 & 2
                cond:20_1 = temp6_1 != 0
                cond:21_1 = temp6_1 == 0
                cond:28_1 = temp6_1 == 0
                cond:29_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                label_1400d00b5:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 1), zmm3, 0xe2)
                    zmm9 = _mm_add_ps(zmm9, temp0_751)
                    
                    if (cond:21_1)
                        goto label_1400d0e06
                    
                    goto label_1400d00ce
                
            label_1400d0dfc:
                zmm9 = _mm_add_ps(zmm9, temp0_751)
                
                if (not(cond:20_1))
                label_1400d0e06:
                    zmm11 = _mm_add_ps(zmm11, temp0_752)
                    
                    if (cond:29_1)
                        goto label_1400d00e7
                    
                    goto label_1400d0e10
                
            label_1400d00ce:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm2, 1), zmm2, 0xe2)
                zmm11 = _mm_add_ps(zmm11, temp0_752)
                bool cond:36_1
                bool cond:37_1
                bool cond:44_1
                bool cond:45_1
                
                if (not(cond:28_1))
                label_1400d00e7:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 1), zmm1, 0xe2)
                    char temp15_1 = rbx_10 & 4
                    cond:36_1 = temp15_1 == 0
                    cond:37_1 = temp15_1 != 0
                    cond:44_1 = temp15_1 != 0
                    cond:45_1 = temp15_1 == 0
                    
                    if (temp15_1 == 0)
                        goto label_1400d0e19
                    
                    goto label_1400d00fb
                
            label_1400d0e10:
                char temp14_1 = rbx_10 & 4
                cond:36_1 = temp14_1 == 0
                cond:37_1 = temp14_1 != 0
                cond:44_1 = temp14_1 != 0
                cond:45_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                label_1400d00fb:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x32), 0x84)
                    
                    if (not(cond:36_1))
                    label_1400d010d:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x32), 0x84)
                        
                        if (cond:45_1)
                            goto label_1400d0e25
                        
                        goto label_1400d011f
                else
                label_1400d0e19:
                    
                    if (cond:37_1)
                        goto label_1400d010d
                
                bool cond:52_1
                bool cond:53_1
                bool cond:60_1
                bool cond:61_1
                
                if (not(cond:44_1))
                label_1400d0e25:
                    char temp23_1 = rbx_10 & 8
                    cond:52_1 = temp23_1 != 0
                    cond:53_1 = temp23_1 == 0
                    cond:60_1 = temp23_1 != 0
                    cond:61_1 = temp23_1 == 0
                    
                    if (temp23_1 != 0)
                        goto label_1400d0136
                    
                    goto label_1400d0e2e
                
            label_1400d011f:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x32), 0x84)
                char temp22_1 = rbx_10 & 8
                cond:52_1 = temp22_1 != 0
                cond:53_1 = temp22_1 == 0
                cond:60_1 = temp22_1 != 0
                cond:61_1 = temp22_1 == 0
                
                if (temp22_1 != 0)
                label_1400d0136:
                    zmm10 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x23), 0x24)
                    
                    if (cond:53_1)
                        goto label_1400d0e38
                    
                    goto label_1400d014a
                
            label_1400d0e2e:
                zmm10 = zmm3
                
                if (cond:52_1)
                label_1400d014a:
                    zmm9 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x23), 0x24)
                    
                    if (cond:60_1)
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
                else
                label_1400d0e38:
                    zmm9 = zmm2
                    
                    if (not(cond:61_1))
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
                
                zmm2 = var_358_2
                uint32_t temp0_759[0x4] = _mm_and_ps(_mm_add_ps(zmm6, zmm2), zmm0)
                zmm11 = zmm1
                var_358_2 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm2), temp0_759)
            
            rdx_5 = zx.q(rdx_5.d + 4)
        while (rdx_5.d s< i)
        
        if (rdx_5.d s>= arg11)
            goto label_1400d285a
        
        goto label_1400d0e7d
    
    rdx_5 = 0
    zmm11 = zx.o(0)
    zmm9 = zx.o(0)
    zmm10 = zx.o(0)
    var_358_2 = zx.o(0)
    
    if (0 s< arg11)
    label_1400d0e7d:
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_5.d), 0), data_142e11d00)
        zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm1)
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
        int64_t rdx_6 = sx.q(zmm2.d)
        void* rax_152 = &(*arg7)[rdx_6]
        zmm1 = (*arg7)[rdx_6]
        int64_t rbp_14 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        void* rdx_8 = &(*arg7)[rbp_14]
        zmm1 = _mm_unpacklo_ps(zmm1, (*arg7)[rbp_14].q)
        int64_t rbp_16 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        void* rbx_11 = &(*arg7)[rbp_16]
        zmm3 = (*arg7)[rbp_16]
        int64_t rsi_6 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        void* r10_9 = &(*arg7)[rsi_6]
        zmm1 = zmm1.q | _mm_unpacklo_ps(zmm3, (*arg7)[rsi_6].q).q << 0x40
        zmm3 = data_142fc95e0 & zmm0
        float (* r14_2)[0x4] = zx.q(zmm3.d)
        zmm8 = *(r14_2 + rax_152)
        float (* r15_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
        float temp0_774[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_2 + rdx_8))[0].q)
        float (* r13_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
        zmm4 = *(r13_2 + rbx_11)
        float (* rbp_18)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        float temp0_777[0x4] = _mm_unpacklo_ps(zmm4, (*(rbp_18 + r10_9)).q)
        zmm8 = temp0_774[0].q | temp0_777[0].q << 0x40
        zmm3 = data_142fc95f0 & zmm0
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_152), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_8))[0].q)
        float temp0_782[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_11), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + r10_9)).q)
        zmm6 = zmm6[0].q | temp0_782[0].q << 0x40
        uint128_t var_228_2 = zmm1
        float var_208_2[0x4] = zmm6
        float var_1f8_2[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        float temp0_783[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_3e8 = temp0_783
        var_3d8 = temp0_783
        zmm7 = *arg6
        zmm2 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_785[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_786[0x4] = _mm_mul_ps(zmm8, temp0_785)
        float temp0_787[0x4] = _mm_mul_ps(temp0_785, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        float temp0_789[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm2, zmm1)
        zmm1 = _mm_mul_ps(zmm1, temp0_789)
        zmm3 = _mm_mul_ps(zx.o(0), temp0_783)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_789, zmm8))
        zmm1 = _mm_sub_ps(zmm1, temp0_787)
        float temp0_796[0x4] = _mm_sub_ps(temp0_786, zmm2)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        float temp0_800[0x4] = _mm_add_ps(temp0_796, temp0_796)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_3a8 = zmm6
        uint128_t var_398_6 = zmm1
        float var_378_4[0x4] = zmm3
        zmm3 = _mm_mul_ps(zmm3, temp0_783)
        zmm2 = _mm_mul_ps(temp0_783, zmm6)
        float temp0_804[0x4] = _mm_mul_ps(temp0_783, zmm1)
        float temp0_805[0x4] = _mm_mul_ps(temp0_783, temp0_800)
        zmm2 = __addps_xmmps_memps(zmm2, var_228_2)
        float temp0_807[0x4] = __addps_xmmps_memps(temp0_804, zmm8)
        float temp0_808[0x4] = __addps_xmmps_memps(temp0_805, var_208_2)
        float var_3b8_4[0x4] = temp0_783
        uint128_t var_128_2 = zmm2
        float var_118_2[0x4] = temp0_807
        float var_108_2[0x4] = temp0_808
        uint128_t var_f8_2 = __addps_xmmps_memps(zmm3, var_1f8_2)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        float temp0_810[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_811[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(zmm1, temp0_811)
        float temp0_813[0x4] = _mm_mul_ps(temp0_811, temp0_800)
        float temp0_814[0x4] = _mm_mul_ps(temp0_800, temp0_810)
        float temp0_815[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_816[0x4] = _mm_mul_ps(temp0_810, zmm6)
        zmm6 = _mm_mul_ps(zmm6, temp0_815)
        float temp0_819[0x4] = _mm_sub_ps(temp0_814, _mm_mul_ps(temp0_815, zmm1))
        zmm6 = _mm_sub_ps(zmm6, temp0_813)
        zmm3 = _mm_sub_ps(zmm3, temp0_816)
        float temp0_822[0x4] = _mm_add_ps(temp0_819, zmm2)
        zmm6 = _mm_add_ps(zmm6, temp0_807)
        zmm3 = _mm_add_ps(zmm3, temp0_808)
        zmm4 = arg6[1].d
        zmm2 = *(arg6 + 0x14)
        float temp0_826[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_822)
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
        zmm1 = *(arg6 + 0x18)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
        float var_2f8_4[0x4] = zmm2
        uint128_t var_1d8_1 = zmm2
        float var_368_6[0x4] = zmm1
        uint128_t var_1c8_1 = zmm1
        zmm1 = temp0_826
        zmm3 = var_278
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_832[0x4] = _mm_cmpeq_ps(zmm2, zmm1, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_832, zmm0)) != 0)
            char temp0_835 = _mm_movemask_ps(temp0_832)
            
            if ((temp0_835 & 1) == 0)
                if ((temp0_835 & 2) != 0)
                    goto label_1400d127d
                
                goto label_1400d11a3
            
            var_3e8.d = zmm3.d
            
            if ((temp0_835 & 2) != 0)
            label_1400d127d:
                var_3e8:4.d = zmm3.d
                
                if ((temp0_835 & 4) == 0)
                    goto label_1400d11ab
                
                goto label_1400d128b
            
        label_1400d11a3:
            
            if ((temp0_835 & 4) != 0)
            label_1400d128b:
                var_3e8:8.d = zmm3.d
                
                if ((temp0_835 & 8) != 0)
                    var_3e8:0xc.d = zmm3.d
            else
            label_1400d11ab:
                
                if ((temp0_835 & 8) != 0)
                    var_3e8:0xc.d = zmm3.d
        
        zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 5)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
            zmm5 = var_288
            zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0)
            uint32_t temp0_841[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm3, 1), zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_841, zmm0)) != 0)
                char temp0_844 = _mm_movemask_ps(temp0_841)
                
                if ((temp0_844 & 1) == 0)
                    if ((temp0_844 & 2) != 0)
                        goto label_1400d12ab
                    
                    goto label_1400d1204
                
                var_3e8.d = zmm5[0]
                
                if ((temp0_844 & 2) != 0)
                label_1400d12ab:
                    var_3e8:4.d = zmm5[0]
                    
                    if ((temp0_844 & 4) == 0)
                        goto label_1400d120c
                    
                    goto label_1400d12b9
                
            label_1400d1204:
                
                if ((temp0_844 & 4) != 0)
                label_1400d12b9:
                    var_3e8:8.d = zmm5[0]
                    
                    if ((temp0_844 & 8) != 0)
                        var_3e8:0xc.d = zmm5[0]
                else
                label_1400d120c:
                    
                    if ((temp0_844 & 8) != 0)
                        var_3e8:0xc.d = zmm5[0]
            
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm3, 5), zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm0)) != 0)
                zmm2 = temp0_826
                char temp0_849 = _mm_movemask_ps(zmm1)
                
                if ((temp0_849 & 1) == 0)
                    if ((temp0_849 & 2) != 0)
                        goto label_1400d12de
                    
                    goto label_1400d1246
                
                var_3e8.d = zmm2.d
                
                if ((temp0_849 & 2) != 0)
                label_1400d12de:
                    var_3e8:4.d = _mm_shuffle_epi32(zmm2, 0xe5).d
                    
                    if ((temp0_849 & 4) == 0)
                        goto label_1400d124e
                    
                    goto label_1400d12f1
                
            label_1400d1246:
                
                if ((temp0_849 & 4) != 0)
                label_1400d12f1:
                    var_3e8:8.d = _mm_shuffle_epi32(zmm2, 0x4e).d
                    
                    if ((temp0_849 & 8) != 0)
                        var_3e8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                else
                label_1400d124e:
                    
                    if ((temp0_849 & 8) != 0)
                        var_3e8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
        
        return sub_1400d1160(arg1, 0, arg3, arg4, rbp_18, arg5, r13_2, r14_2, r15_2, zmm0, 
            temp0_826, zmm11, temp0_800, var_378_4, var_368_6, var_358_2, var_348, zmm10, zmm9, 
            var_318, var_308, var_2f8_4, var_2e8, var_2d8, var_2c8, var_2b8, var_2a8, var_298)
            __tailcall
    
label_1400d285a:
    zmm3 = _mm_cmpeq_epi32(var_248_1, zx.o(0))
    zmm0 = zmm3 & not.o(zmm10)
    zmm1 = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
    zmm0.d = _mm_shuffle_ps(zmm1, zmm1, 0xe5).d f+ zmm1.d
    zmm1 = zmm3 & not.o(zmm9)
    zmm2 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    zmm1.d = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d f+ zmm2.d
    zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
    zmm1 = zmm3 & not.o(zmm11)
    zmm2 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    zmm1.d = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d f+ zmm2.d
    zmm2 = _mm_add_ps(*arg10 | arg10[1].d.q << 0x40, zmm0.q | zmm1.q << 0x40)
    *arg10 = zmm2.d
    zmm0.q = zmm2 u>> 0x40
    *(arg10 + 4) = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
    arg10[1].d = zmm0.d
    zmm3 &= not.o(var_358_2)
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm3, 0xee), zmm3)
else
    int32_t var_258 = zmm1.d
    int32_t var_254_1 = zmm2.d
    int32_t var_250_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, *arg1 | arg1[1].d.q << 0x40)
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    zmm2 = _mm_unpackhi_pd(zmm0, zmm0.q)
    int32_t var_268 = zmm0.d
    int32_t var_264_1 = zmm1.d
    int32_t var_260_1 = zmm2.d
    int32_t i_1 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
    int32_t var_358_1[0x4]
    uint64_t rdx
    
    if (i_1 s> 0)
        zmm0 = arg8
        uint128_t var_238_1 = _mm_shuffle_ps(zmm0, zmm0, 0)
        rdx = 0
        __builtin_memset(&var_358_1, 0, 0x40)
        
        do
            int64_t rax_3 = sx.q((rdx << 2).d * 3)
            zmm4 = *(arg7 + rax_3)
            zmm0 = *(arg7 + rax_3 + 0x10)
            zmm1 = *(arg7 + rax_3 + 0x20)
            zmm6 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5).q), 
                zmm1, 0xc4)
            zmm2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm4, zmm0, 5)
            float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_34, zmm0, 0xf8), 0x22), 0x28)
            var_3a8 = zmm2
            int128_t var_378_1 = zx.o(0)
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3e8 = zmm0
            var_3d8 = zmm0
            uint128_t var_3c8_1 = zmm0
            uint128_t var_3b8_1 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm3 = _mm_mul_ps(temp0_39, zmm6)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_42[0x4] = _mm_mul_ps(temp0_41, zmm2)
            float temp0_43[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_44[0x4] = _mm_mul_ps(temp0_43, temp0_37)
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(temp0_37, temp0_41))
            float temp0_48[0x4] = _mm_sub_ps(temp0_42, _mm_mul_ps(zmm6, temp0_43))
            float temp0_50[0x4] = _mm_sub_ps(temp0_44, _mm_mul_ps(zmm2, temp0_39))
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_52[0x4] = _mm_add_ps(temp0_48, temp0_48)
            float temp0_53[0x4] = _mm_add_ps(temp0_50, temp0_50)
            float temp0_54[0x4] = _mm_mul_ps(zmm0, zmm3)
            float temp0_55[0x4] = _mm_mul_ps(zmm0, temp0_52)
            float temp0_56[0x4] = __addps_xmmps_memps(temp0_54, var_3a8)
            float temp0_57[0x4] = __addps_xmmps_memps(temp0_55, temp0_37)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_53), zmm6)
            zmm1 = _mm_mul_ps(temp0_53, temp0_39)
            zmm2 = _mm_mul_ps(zmm3, temp0_41)
            zmm6 = _mm_mul_ps(temp0_52, temp0_43)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_52, temp0_41)), temp0_56)
            zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(temp0_53, temp0_43)), temp0_57)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_39)), zmm0)
            zmm3 = arg6[1].d
            zmm4 = *(arg6 + 0x14)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm1)
            float temp0_75[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm2)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
            uint128_t var_158 = zmm3
            float var_148[0x4] = temp0_75
            uint128_t var_368_1 = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rbx_1 = 0
            uint128_t var_298_1 = zmm3
            zmm0 = zmm3
            
            while (true)
                zmm2 = *(&var_258 + rbx_1)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_80 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_80 != 0)
                    if ((temp0_80 & 1) == 0)
                        if ((temp0_80 & 2) != 0)
                            goto label_1400cf0dd
                        
                        goto label_1400cf00d
                    
                    *(&var_3e8 + (rbx_1 << 2)) = zmm2.d
                    
                    if ((temp0_80 & 2) != 0)
                    label_1400cf0dd:
                        *(&var_3e8:4 + (rbx_1 << 2)) = zmm2.d
                        
                        if ((temp0_80 & 4) == 0)
                            goto label_1400cf015
                        
                        goto label_1400cf0eb
                    
                label_1400cf00d:
                    
                    if ((temp0_80 & 4) != 0)
                    label_1400cf0eb:
                        *(&var_3e8:8 + (rbx_1 << 2)) = zmm2.d
                        
                        if ((temp0_80 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_1 << 2)) = zmm2.d
                    else
                    label_1400cf015:
                        
                        if ((temp0_80 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_1 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_268 + rbx_1)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_86 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_86 != 0)
                        if ((temp0_86 & 1) == 0)
                            if ((temp0_86 & 2) != 0)
                                goto label_1400cf10b
                            
                            goto label_1400cf062
                        
                        *(&var_3e8 + (rbx_1 << 2)) = zmm3.d
                        
                        if ((temp0_86 & 2) != 0)
                        label_1400cf10b:
                            *(&var_3e8:4 + (rbx_1 << 2)) = zmm3.d
                            
                            if ((temp0_86 & 4) == 0)
                                goto label_1400cf06a
                            
                            goto label_1400cf119
                        
                    label_1400cf062:
                        
                        if ((temp0_86 & 4) != 0)
                        label_1400cf119:
                            *(&var_3e8:8 + (rbx_1 << 2)) = zmm3.d
                            
                            if ((temp0_86 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_1 << 2)) = zmm3.d
                        else
                        label_1400cf06a:
                            
                            if ((temp0_86 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_1 << 2)) = zmm3.d
                    
                    char temp0_89 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_89 != 0)
                        zmm0 = *(&var_158 + (rbx_1 << 2))
                        
                        if ((temp0_89 & 1) == 0)
                            if ((temp0_89 & 2) != 0)
                                goto label_1400cf13e
                            
                            goto label_1400cf09e
                        
                        *(&var_3e8 + (rbx_1 << 2)) = zmm0.d
                        
                        if ((temp0_89 & 2) != 0)
                        label_1400cf13e:
                            *(&var_3e8:4 + (rbx_1 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_89 & 4) == 0)
                                goto label_1400cf0a6
                            
                            goto label_1400cf151
                        
                    label_1400cf09e:
                        
                        if ((temp0_89 & 4) != 0)
                        label_1400cf151:
                            *(&var_3e8:8 + (rbx_1 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_89 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_1 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_1400cf0a6:
                            
                            if ((temp0_89 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_1 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (rbx_1 == 8)
                    break
                
                zmm0 = *(&var_148 + (rbx_1 << 2))
                rbx_1 += 4
            
            zmm8 = var_3e8
            zmm11 = var_3d8
            zmm5 = var_3c8_1
            zmm2 = *arg1
            zmm1 = *(arg1 + 4)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_sub_ps(zmm8, zmm2)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm6 = _mm_sub_ps(zmm11, zmm1)
            zmm7 = arg1[1].d
            float temp0_97[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_98[0x4] = _mm_sub_ps(zmm5, temp0_97)
            zmm3 = *arg3
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_div_ps(zmm0, zmm3)
            zmm10 = _mm_cmpeq_epi32(temp0_41, temp0_41)
            zmm15 = arg3[1].d
            zmm12 = _mm_cvttps_epi32(zmm0)
            uint128_t var_308_1 = zmm3
            uint128_t var_2e8_1 = zmm2
            float temp0_105[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), zmm3), zmm2)
            zmm13 = __divps_xmmps_memps(*arg3 | zmm15[0].q << 0x40, data_142fc9600)
            float temp0_107[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            float temp0_109[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_105, temp0_107), zmm8, 1)
            zmm14 = _mm_add_epi32(zmm12, zmm10)
            zmm0 = _mm_and_ps(zmm12, temp0_109)
            zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_109, zmm14), zmm0)
            zmm10 = *(arg3 + 4)
            float temp0_114[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm6 = _mm_div_ps(zmm6, temp0_114)
            float temp0_116[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_117[0x4] = _mm_div_ps(temp0_98, temp0_116)
            zmm2 = _mm_cvttps_epi32(zmm6)
            zmm0 = _mm_cvttps_epi32(temp0_117)
            zmm6 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_114)
            uint128_t var_318_1 = zmm0
            zmm3 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_116)
            uint128_t var_2c8_1 = zmm1
            zmm6 = _mm_add_ps(zmm6, zmm1)
            zmm3 = _mm_add_ps(zmm3, temp0_97)
            float temp0_126[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            zmm6 = _mm_add_ps(zmm6, temp0_126)
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            var_3e8 = zmm4
            zmm0 = _mm_cmpeq_ps(zmm6, zmm11, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm12 = zmm2
            
            zmm3 = _mm_add_ps(zmm3, zmm13)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm6, zmm11, 5)) != 0)
                zmm14 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            float var_2a8_1[0x4] = zmm8
            float temp0_135[0x4] = __subps_xmmps_memps(zmm8, var_298_1)
            zmm2 = __subps_xmmps_memps(zmm11, temp0_75)
            uint32_t temp0_137[0x4] = _mm_and_ps(zmm12, zmm0)
            zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm14), temp0_137)
            var_3d8 = zmm0
            zmm6 = zmm5
            float temp0_140[0x4] = _mm_cmpeq_ps(zmm3, zmm6, 1)
            
            if (_mm_movemask_ps(temp0_140) != 0)
                zmm12 = var_318_1
            
            zmm1 = __subps_xmmps_memps(zmm6, var_368_1)
            float temp0_143[0x4] = _mm_mul_ps(temp0_135, temp0_135)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, zmm6, 5)) != 0)
                zmm14 = __paddd_xmmdq_memdq(var_318_1, data_142d3f800)
            
            zmm12 = _mm_and_ps(zmm12, temp0_140)
            zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_140, zmm14), zmm12)
            float temp0_152[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_143, data_142d8f750), zmm2)
            zmm5 = var_308_1
            zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm5), var_2e8_1)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_114), var_2c8_1)
            float var_3c8_2[0x4] = zmm8
            zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_116), temp0_97)
            float temp0_162[0x4] = _mm_add_ps(temp0_107, zmm2)
            float temp0_163[0x4] = _mm_add_ps(temp0_126, zmm0)
            zmm13 = _mm_add_ps(zmm13, zmm3)
            zmm0 = _mm_sub_ps(var_2a8_1, temp0_162)
            float temp0_166[0x4] = _mm_sub_ps(zmm11, temp0_163)
            zmm6 = _mm_sub_ps(zmm6, zmm13)
            zmm0 = _mm_div_ps(zmm0, zmm5)
            float temp0_169[0x4] = _mm_div_ps(temp0_166, temp0_114)
            zmm6 = _mm_div_ps(zmm6, temp0_116)
            var_3a8 = zmm0
            uint32_t var_388_2[0x4] = zmm6
            zmm1 = _mm_mul_ps(zmm1, zmm1)
            int64_t rbx_2 = 0
            zmm15 = _mm_cmpeq_epi32(temp0_116, temp0_116)
            char j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm15))
            
            if (j_1 == 0)
                goto label_1400cf44d
            
            do
                if ((j_1 & 1) == 0)
                    if ((j_1 & 2) != 0)
                        goto label_1400cf4df
                    
                    goto label_1400cf419
                
                *(&var_3e8 + (rbx_2 << 2)) = 0
                
                if ((j_1 & 2) != 0)
                label_1400cf4df:
                    *(&var_3e8:4 + (rbx_2 << 2)) = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400cf421
                    
                    goto label_1400cf4ef
                
            label_1400cf419:
                
                if ((j_1 & 4) == 0)
                label_1400cf421:
                    
                    if ((j_1 & 8) != 0)
                        goto label_1400cf4ff
                    
                    goto label_1400cf429
                
            label_1400cf4ef:
                *(&var_3e8:8 + (rbx_2 << 2)) = 0
                
                if ((j_1 & 8) != 0)
                label_1400cf4ff:
                    *(&var_3e8:0xc + (rbx_2 << 2)) = 0
                    
                    if ((j_1 & 1) == 0)
                        goto label_1400cf431
                    
                    goto label_1400cf50f
                
            label_1400cf429:
                
                if ((j_1 & 1) == 0)
                label_1400cf431:
                    
                    if ((j_1 & 2) != 0)
                        goto label_1400cf51f
                    
                    goto label_1400cf439
                
            label_1400cf50f:
                *(&var_3a8 + (rbx_2 << 2)) = 0
                
                if ((j_1 & 2) != 0)
                label_1400cf51f:
                    *(&var_3a8:4 + (rbx_2 << 2)) = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400cf441
                    
                    goto label_1400cf52f
                
            label_1400cf439:
                
                if ((j_1 & 4) != 0)
                label_1400cf52f:
                    *(&var_3a8:8 + (rbx_2 << 2)) = 0
                    
                    if ((j_1 & 8) != 0)
                        *(&var_3a8:0xc + (rbx_2 << 2)) = 0
                else
                label_1400cf441:
                    
                    if ((j_1 & 8) != 0)
                        *(&var_3a8:0xc + (rbx_2 << 2)) = 0
                
            label_1400cf44d:
                int32_t rbp_1 = *(arg4 + rbx_2)
                char temp0_179 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rbp_1 - 1), 0), *(&var_3e8 + (rbx_2 << 2))))
                
                if (temp0_179 != 0)
                    if ((temp0_179 & 1) == 0)
                        if ((temp0_179 & 2) != 0)
                            goto label_1400cf55b
                        
                        goto label_1400cf47f
                    
                    *(&var_3e8 + (rbx_2 << 2)) = rbp_1 - 2
                    
                    if ((temp0_179 & 2) != 0)
                    label_1400cf55b:
                        *(&var_3e8:4 + (rbx_2 << 2)) = rbp_1 - 2
                        
                        if ((temp0_179 & 4) == 0)
                            goto label_1400cf487
                        
                        goto label_1400cf567
                    
                label_1400cf47f:
                    
                    if ((temp0_179 & 4) == 0)
                    label_1400cf487:
                        
                        if ((temp0_179 & 8) != 0)
                            goto label_1400cf573
                        
                        goto label_1400cf48f
                    
                label_1400cf567:
                    *(&var_3e8:8 + (rbx_2 << 2)) = rbp_1 - 2
                    
                    if ((temp0_179 & 8) != 0)
                    label_1400cf573:
                        *(&var_3e8:0xc + (rbx_2 << 2)) = rbp_1 - 2
                        
                        if ((temp0_179 & 1) == 0)
                            goto label_1400cf497
                        
                        goto label_1400cf57f
                    
                label_1400cf48f:
                    
                    if ((temp0_179 & 1) == 0)
                    label_1400cf497:
                        
                        if ((temp0_179 & 2) != 0)
                            goto label_1400cf58f
                        
                        goto label_1400cf49f
                    
                label_1400cf57f:
                    *(&var_3a8 + (rbx_2 << 2)) = 0x3f800000
                    
                    if ((temp0_179 & 2) != 0)
                    label_1400cf58f:
                        *(&var_3a8:4 + (rbx_2 << 2)) = 0x3f800000
                        
                        if ((temp0_179 & 4) == 0)
                            goto label_1400cf4a7
                        
                        goto label_1400cf59f
                    
                label_1400cf49f:
                    
                    if ((temp0_179 & 4) != 0)
                    label_1400cf59f:
                        *(&var_3a8:8 + (rbx_2 << 2)) = 0x3f800000
                        
                        if ((temp0_179 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_2 << 2)) = 0x3f800000
                    else
                    label_1400cf4a7:
                        
                        if ((temp0_179 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_2 << 2)) = 0x3f800000
                
                if (rbx_2 == 8)
                    break
                
                zmm4 = *(&var_3d8 + (rbx_2 << 2))
                rbx_2 += 4
                j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm15))
            while (j_1 != 0)
            
            uint128_t var_368_2 = _mm_add_ps(temp0_152, zmm1)
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm0 = var_3e8
            zmm14 = var_3d8
            zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm8), 0xe8)
            zmm7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm0), 0xe8), zmm1.q)
            zmm3 = _mm_add_epi32(zmm7, zmm14)
            zmm1 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm1), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm1), 0xe8)[0].q)
            zmm6 = _mm_add_epi32(zmm13, var_3c8_2)
            float (* rbx_3)[0x4] = *(arg5 + 0x10)
            uint32_t temp0_197[0x4] = _mm_slli_epi32(zmm6, 2)
            int64_t rax_20 = sx.q(temp0_197[0])
            int64_t rbp_4 = sx.q(_mm_shuffle_epi32(temp0_197, 0xe5)[0])
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(temp0_197, 0x4e)[0])
            int64_t rsi_2 = sx.q(_mm_shuffle_epi32(temp0_197, 0xe7)[0])
            zmm6 = *(rbx_3 + rsi_2 + 4)
            zmm2 = _mm_unpacklo_ps(*(rbx_3 + rdi_2), (*(rbx_3 + rsi_2))[0].q)
            float temp0_202[0x4] = _mm_unpacklo_ps(*(rbx_3 + rdi_2 + 4), zmm6[0].q)
            zmm11 = *(rbx_3 + rax_20 + 4)
            zmm6 = _mm_unpacklo_ps(*(rbx_3 + rax_20), (*(rbx_3 + rbp_4))[0].q)[0].q | zmm2.q << 0x40
            zmm11 = _mm_unpacklo_ps(zmm11, (*(rbx_3 + rbp_4 + 4)).q)[0].q | temp0_202[0].q << 0x40
            zmm0 = _mm_sub_epi32(zmm0, zmm15)
            zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm8), 0xe8)
            int32_t temp0_211[0x4] =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm8), 0xe8), zmm2.q)
            zmm0 = _mm_add_epi32(temp0_211, zmm14)
            zmm2 = _mm_shuffle_epi32(zmm0, 0xf5)
            zmm0 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm1), 0xe8).q), 
                    var_3c8_2), 
                2)
            zmm3 = _mm_add_epi32(zmm3, zmm8)
            zmm2 = _mm_shuffle_epi32(zmm3, 0xf5)
            zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm1), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm1), 0xe8).q)
            float temp0_229[0x4] = _mm_unpacklo_ps(*(rbx_3 + sx.q(zmm0.d)), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d))).q)
            zmm2 = _mm_unpacklo_ps(*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d))).q)
            float temp0_233[0x4] = _mm_sub_ps(temp0_229[0].q | zmm2.q << 0x40, zmm6)
            zmm2 = var_3a8
            float temp0_235[0x4] = _mm_add_ps(_mm_mul_ps(temp0_233, zmm2), zmm6)
            zmm14 = _mm_sub_epi32(zmm14, zmm15)
            zmm7 = _mm_add_epi32(zmm7, zmm14)
            zmm0 = _mm_shuffle_epi32(zmm7, 0xf5)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm1), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8).q), 
                    var_3c8_2), 
                2)
            zmm6 = _mm_unpacklo_ps(*(rbx_3 + sx.q(zmm4[0])), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q)
            zmm0 = _mm_unpacklo_ps(*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
            zmm6 = zmm6[0].q | zmm0.q << 0x40
            zmm14 = _mm_add_epi32(zmm14, temp0_211)
            zmm0 = _mm_shuffle_epi32(zmm14, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm14, zmm1), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8).q), 
                    var_3c8_2), 
                2)
            float temp0_261[0x4] = _mm_unpacklo_ps(*(rbx_3 + sx.q(zmm5[0])), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d))).q)
            zmm0 = _mm_unpacklo_ps(*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
            float temp0_267[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_261[0].q | zmm0.q << 0x40, zmm6), zmm2), zmm6)
            zmm1 = _mm_add_epi32(zmm1, var_3c8_2)
            zmm13 = _mm_add_epi32(zmm13, zmm1)
            zmm1 = _mm_add_epi32(zmm1, zmm3)
            zmm3 = _mm_slli_epi32(_mm_add_epi32(zmm3, var_3c8_2), 2)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbx_3 + sx.q(zmm3.d) + 4), 
                            (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + 4))[0].q).q |
                            _mm_unpacklo_ps(*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + 4), 
                            (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + 4)).q)[0].q << 0x40, 
                        zmm11), 
                    zmm2), 
                zmm11)
            zmm13 = _mm_slli_epi32(zmm13, 2)
            zmm3 = _mm_unpacklo_ps(*(rbx_3 + sx.q(zmm13.d) + 4), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm13, 0xe5)[0]) + 4))[0].q).q | _mm_unpacklo_ps(
                *(rbx_3 + sx.q(_mm_shuffle_epi32(zmm13, 0x4e)[0]) + 4), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm13, 0xe7)[0]) + 4))[0].q)[0].q << 0x40
            zmm1 = _mm_slli_epi32(zmm1, 2)
            float temp0_289[0x4] = _mm_unpacklo_ps(*(rbx_3 + sx.q(zmm1.d) + 4), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + 4))[0].q)
            zmm6 = _mm_unpacklo_ps(*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + 4), 
                (*(rbx_3 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + 4)).q)
            zmm5 = temp0_289[0].q | zmm6[0].q << 0x40
            zmm6 = var_368_2
            float temp0_295[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, zmm3), zmm2), zmm3)
            float temp0_298[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_267, temp0_235), temp0_169), temp0_235)
            zmm5 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_295, zmm0), temp0_169), zmm0), 
                        temp0_298), 
                    var_388_2), 
                temp0_298)
            zmm1 = _mm_cmpeq_ps(zmm6, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm6, zx.o(0), 7), zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm1 = _mm_rsqrt_ps(zmm6)
                zmm6 = _mm_mul_ps(_mm_mul_ps(zmm6, zmm1), zmm1)
                zmm2 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm6), zmm1), 
                    data_142d3f640)
                zmm1 = _mm_rcp_ps(zmm2)
                zmm2 = _mm_mul_ps(zmm2, zmm1)
                zmm3 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm2), zmm1), zmm5), zmm0)
                zmm5 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm5), zmm3)
            
            float var_328[0x4]
            zmm8 = var_328
            float var_338[0x4]
            zmm9 = var_338
            float var_348_1[0x4]
            zmm10 = var_348_1
            float temp0_323[0x4] = __subps_xmmps_memps(zmm5, var_238_1)
            zmm0 = __cmpps_xmmps_memps_immb(temp0_323, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                float temp0_326[0x4] = _mm_mul_ps(var_158, temp0_323)
                zmm6 = _mm_mul_ps(var_148, temp0_323)
                float temp0_328[0x4] = _mm_mul_ps(var_138_1, temp0_323)
                char rbx_4 = result.b
                zmm3 = zmm9
                char temp3_1 = rbx_4 & 1
                
                if (temp3_1 == 0)
                    zmm2 = zmm8
                    
                    if (temp3_1 != 0)
                        goto label_1400ced46
                    
                    goto label_1400cfa89
                
                zmm3.d = zmm9.d f+ temp0_326[0]
                zmm2 = zmm8
                
                if (temp3_1 != 0)
                label_1400ced46:
                    zmm2.d = zmm8.d f+ zmm6[0]
                    zmm1 = zmm10
                    
                    if (temp3_1 == 0)
                        goto label_1400cfa93
                    
                    goto label_1400ced58
                
            label_1400cfa89:
                zmm1 = zmm10
                bool cond:24_1
                bool cond:25_1
                bool cond:32_1
                bool cond:33_1
                
                if (temp3_1 == 0)
                label_1400cfa93:
                    zmm9 = _mm_add_ps(zmm9, temp0_326)
                    char temp11_1 = rbx_4 & 2
                    cond:24_1 = temp11_1 != 0
                    cond:25_1 = temp11_1 == 0
                    cond:32_1 = temp11_1 == 0
                    cond:33_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_1400ced75
                    
                    goto label_1400cfaa0
                
            label_1400ced58:
                zmm1.d = zmm10.d f+ temp0_328[0]
                zmm9 = _mm_add_ps(zmm9, temp0_326)
                char temp10_1 = rbx_4 & 2
                cond:24_1 = temp10_1 != 0
                cond:25_1 = temp10_1 == 0
                cond:32_1 = temp10_1 == 0
                cond:33_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                label_1400ced75:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm3, 1), zmm3, 0xe2)
                    zmm8 = _mm_add_ps(zmm8, zmm6)
                    
                    if (cond:25_1)
                        goto label_1400cfaaa
                    
                    goto label_1400ced8e
                
            label_1400cfaa0:
                zmm8 = _mm_add_ps(zmm8, zmm6)
                
                if (not(cond:24_1))
                label_1400cfaaa:
                    zmm10 = _mm_add_ps(zmm10, temp0_328)
                    
                    if (cond:33_1)
                        goto label_1400ceda7
                    
                    goto label_1400cfab4
                
            label_1400ced8e:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
                zmm10 = _mm_add_ps(zmm10, temp0_328)
                bool cond:40_1
                bool cond:41_1
                bool cond:48_1
                bool cond:49_1
                
                if (not(cond:32_1))
                label_1400ceda7:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 1), zmm1, 0xe2)
                    char temp19_1 = rbx_4 & 4
                    cond:40_1 = temp19_1 == 0
                    cond:41_1 = temp19_1 != 0
                    cond:48_1 = temp19_1 != 0
                    cond:49_1 = temp19_1 == 0
                    
                    if (temp19_1 == 0)
                        goto label_1400cfabd
                    
                    goto label_1400cedbb
                
            label_1400cfab4:
                char temp18_1 = rbx_4 & 4
                cond:40_1 = temp18_1 == 0
                cond:41_1 = temp18_1 != 0
                cond:48_1 = temp18_1 != 0
                cond:49_1 = temp18_1 == 0
                
                if (temp18_1 != 0)
                label_1400cedbb:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
                    
                    if (not(cond:40_1))
                    label_1400cedcd:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                        
                        if (cond:49_1)
                            goto label_1400cfac9
                        
                        goto label_1400ceddf
                else
                label_1400cfabd:
                    
                    if (cond:41_1)
                        goto label_1400cedcd
                
                bool cond:56_1
                bool cond:57_1
                bool cond:64_1
                bool cond:65_1
                
                if (not(cond:48_1))
                label_1400cfac9:
                    char temp27_1 = rbx_4 & 8
                    cond:56_1 = temp27_1 != 0
                    cond:57_1 = temp27_1 == 0
                    cond:64_1 = temp27_1 != 0
                    cond:65_1 = temp27_1 == 0
                    
                    if (temp27_1 != 0)
                        goto label_1400cedf6
                    
                    goto label_1400cfad2
                
            label_1400ceddf:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x32), 0x84)
                char temp26_1 = rbx_4 & 8
                cond:56_1 = temp26_1 != 0
                cond:57_1 = temp26_1 == 0
                cond:64_1 = temp26_1 != 0
                cond:65_1 = temp26_1 == 0
                
                if (temp26_1 != 0)
                label_1400cedf6:
                    zmm9 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
                    
                    if (cond:57_1)
                        goto label_1400cfadc
                    
                    goto label_1400cee0a
                
            label_1400cfad2:
                zmm9 = zmm3
                
                if (cond:56_1)
                label_1400cee0a:
                    zmm8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                    
                    if (cond:64_1)
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
                else
                label_1400cfadc:
                    zmm8 = zmm2
                    
                    if (not(cond:65_1))
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
                
                zmm2 = var_358_1
                zmm5 = _mm_and_ps(_mm_add_ps(temp0_323, zmm2), zmm0)
                zmm10 = zmm1
                var_358_1 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm2), zmm5)
            
            rdx = zx.q(rdx.d + 4)
        while (rdx.d s< i_1)
        
        if (rdx.d s>= arg11)
            goto label_1400d27a5
        
        goto label_1400cfb21
    
    rdx = 0
    zmm10 = zx.o(0)
    zmm8 = zx.o(0)
    zmm9 = zx.o(0)
    var_358_1 = zx.o(0)
    
    if (0 s< arg11)
    label_1400cfb21:
        int32_t var_348_2[0x4] = zmm10
        float var_338_1[0x4] = zmm9
        int32_t var_328_1[0x4] = zmm8
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx.d), 0), data_142e11d00)
        zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm1)
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
        int64_t rdx_1 = sx.q(zmm2.d)
        void* rax_71 = &(*arg7)[rdx_1]
        zmm1 = (*arg7)[rdx_1]
        int64_t rbp_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        void* rdx_3 = &(*arg7)[rbp_5]
        zmm1 = _mm_unpacklo_ps(zmm1, (*arg7)[rbp_5].q)
        int64_t rbp_7 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        void* rbx_5 = &(*arg7)[rbp_7]
        zmm3 = (*arg7)[rbp_7]
        int64_t rdi_3 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        void* rbp_9 = &(*arg7)[rdi_3]
        zmm1 = zmm1.q | _mm_unpacklo_ps(zmm3, (*arg7)[rdi_3].q).q << 0x40
        zmm3 = data_142fc95e0 & zmm0
        int32_t (* r14_1)[0x4] = zx.q(zmm3.d)
        zmm8 = *(r14_1 + rax_71)
        int32_t (* r15_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
        float temp0_350[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_1 + rdx_3))[0].q)
        int32_t (* r13_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
        zmm4 = *(r13_1 + rbx_5)
        int32_t (* r10_4)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        float temp0_353[0x4] = _mm_unpacklo_ps(zmm4, (*(r10_4 + rbp_9)).q)
        zmm8 = temp0_350[0].q | temp0_353[0].q << 0x40
        zmm3 = data_142fc95f0 & zmm0
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_71), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_3))[0].q)
        float temp0_358[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_5), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_9)).q)
        zmm6 = zmm6[0].q | temp0_358[0].q << 0x40
        uint128_t var_228_1 = zmm1
        uint32_t var_208_1[0x4] = zmm6
        float var_1f8_1[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        float temp0_359[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_3e8 = temp0_359
        var_3d8 = temp0_359
        zmm7 = *arg6
        zmm2 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_361[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_362[0x4] = _mm_mul_ps(zmm8, temp0_361)
        float temp0_363[0x4] = _mm_mul_ps(temp0_361, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        float temp0_365[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm2, zmm1)
        zmm1 = _mm_mul_ps(zmm1, temp0_365)
        zmm3 = _mm_mul_ps(zx.o(0), temp0_359)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_365, zmm8))
        zmm1 = _mm_sub_ps(zmm1, temp0_363)
        float temp0_372[0x4] = _mm_sub_ps(temp0_362, zmm2)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        float temp0_376[0x4] = _mm_add_ps(temp0_372, temp0_372)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_3a8 = zmm6
        uint128_t var_398_3 = zmm1
        float var_388_3[0x4] = temp0_376
        float var_378_2[0x4] = zmm3
        zmm3 = _mm_mul_ps(zmm3, temp0_359)
        zmm2 = _mm_mul_ps(temp0_359, zmm6)
        float temp0_380[0x4] = _mm_mul_ps(temp0_359, zmm1)
        float temp0_381[0x4] = _mm_mul_ps(temp0_359, temp0_376)
        zmm2 = __addps_xmmps_memps(zmm2, var_228_1)
        float temp0_383[0x4] = __addps_xmmps_memps(temp0_380, zmm8)
        float temp0_384[0x4] = __addps_xmmps_memps(temp0_381, var_208_1)
        float var_3b8_2[0x4] = temp0_359
        uint128_t var_128_1 = zmm2
        float var_118_1[0x4] = temp0_383
        float var_108_1[0x4] = temp0_384
        uint128_t var_f8_1 = __addps_xmmps_memps(zmm3, var_1f8_1)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        float temp0_386[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_387[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(zmm1, temp0_387)
        float temp0_389[0x4] = _mm_mul_ps(temp0_387, temp0_376)
        float temp0_390[0x4] = _mm_mul_ps(temp0_376, temp0_386)
        float temp0_391[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_392[0x4] = _mm_mul_ps(temp0_386, zmm6)
        zmm6 = _mm_mul_ps(zmm6, temp0_391)
        float temp0_395[0x4] = _mm_sub_ps(temp0_390, _mm_mul_ps(temp0_391, zmm1))
        zmm6 = _mm_sub_ps(zmm6, temp0_389)
        zmm3 = _mm_sub_ps(zmm3, temp0_392)
        float temp0_398[0x4] = _mm_add_ps(temp0_395, zmm2)
        zmm6 = _mm_add_ps(zmm6, temp0_383)
        zmm3 = _mm_add_ps(zmm3, temp0_384)
        zmm1 = arg6[1].d
        zmm2 = *(arg6 + 0x14)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_398)
        float temp0_404[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
        zmm2 = *(arg6 + 0x18)
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
        uint128_t var_188 = zmm1
        uint32_t var_2f8_2[0x4] = temp0_404
        float var_178[0x4] = temp0_404
        uint128_t var_368_3 = zmm2
        uint128_t var_168_1 = zmm2
        int64_t rdx_4 = 0
        zmm2 = zmm1
        
        while (true)
            zmm4 = *(&var_258 + rdx_4)
            zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_408[0x4] = _mm_cmpeq_ps(zmm3, zmm2, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_408, zmm0)) != 0)
                char temp0_411 = _mm_movemask_ps(temp0_408)
                
                if ((temp0_411 & 1) == 0)
                    if ((temp0_411 & 2) != 0)
                        goto label_1400cff3d
                    
                    goto label_1400cfe63
                
                *(&var_3e8 + (rdx_4 << 2)) = zmm4[0]
                
                if ((temp0_411 & 2) != 0)
                label_1400cff3d:
                    *(&var_3e8:4 + (rdx_4 << 2)) = zmm4[0]
                    
                    if ((temp0_411 & 4) == 0)
                        goto label_1400cfe6b
                    
                    goto label_1400cff4b
                
            label_1400cfe63:
                
                if ((temp0_411 & 4) != 0)
                label_1400cff4b:
                    *(&var_3e8:8 + (rdx_4 << 2)) = zmm4[0]
                    
                    if ((temp0_411 & 8) != 0)
                        *(&var_3e8:0xc + (rdx_4 << 2)) = zmm4[0]
                else
                label_1400cfe6b:
                    
                    if ((temp0_411 & 8) != 0)
                        *(&var_3e8:0xc + (rdx_4 << 2)) = zmm4[0]
            
            zmm3 = _mm_cmpeq_ps(zmm3, zmm2, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                zmm5 = *(&var_268 + rdx_4)
                float temp0_415[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                uint32_t temp0_417[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm2, temp0_415, 1), zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_417, zmm0)) != 0)
                    char temp0_420 = _mm_movemask_ps(temp0_417)
                    
                    if ((temp0_420 & 1) == 0)
                        if ((temp0_420 & 2) != 0)
                            goto label_1400cff6b
                        
                        goto label_1400cfec4
                    
                    *(&var_3e8 + (rdx_4 << 2)) = zmm5[0]
                    
                    if ((temp0_420 & 2) != 0)
                    label_1400cff6b:
                        *(&var_3e8:4 + (rdx_4 << 2)) = zmm5[0]
                        
                        if ((temp0_420 & 4) == 0)
                            goto label_1400cfecc
                        
                        goto label_1400cff79
                    
                label_1400cfec4:
                    
                    if ((temp0_420 & 4) != 0)
                    label_1400cff79:
                        *(&var_3e8:8 + (rdx_4 << 2)) = zmm5[0]
                        
                        if ((temp0_420 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_4 << 2)) = zmm5[0]
                    else
                    label_1400cfecc:
                        
                        if ((temp0_420 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_4 << 2)) = zmm5[0]
                
                zmm2 = _mm_and_ps(_mm_cmpeq_ps(zmm2, temp0_415, 5), zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm0)) != 0)
                    zmm3 = *(&var_188 + (rdx_4 << 2))
                    char temp0_425 = _mm_movemask_ps(zmm2)
                    
                    if ((temp0_425 & 1) == 0)
                        if ((temp0_425 & 2) != 0)
                            goto label_1400cff9e
                        
                        goto label_1400cff06
                    
                    *(&var_3e8 + (rdx_4 << 2)) = zmm3.d
                    
                    if ((temp0_425 & 2) != 0)
                    label_1400cff9e:
                        *(&var_3e8:4 + (rdx_4 << 2)) = _mm_shuffle_epi32(zmm3, 0xe5).d
                        
                        if ((temp0_425 & 4) == 0)
                            goto label_1400cff0e
                        
                        goto label_1400cffb1
                    
                label_1400cff06:
                    
                    if ((temp0_425 & 4) != 0)
                    label_1400cffb1:
                        *(&var_3e8:8 + (rdx_4 << 2)) = _mm_shuffle_epi32(zmm3, 0x4e).d
                        
                        if ((temp0_425 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_4 << 2)) = _mm_shuffle_epi32(zmm3, 0xe7).d
                    else
                    label_1400cff0e:
                        
                        if ((temp0_425 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_4 << 2)) = _mm_shuffle_epi32(zmm3, 0xe7).d
            
            if (rdx_4 == 8)
                break
            
            zmm2 = *(&var_178 + (rdx_4 << 2))
            rdx_4 += 4
        
        zmm10 = var_3e8
        zmm12 = var_3d8
        zmm6 = _mm_sub_ps(zmm10, zmm1)
        zmm3 = *arg1
        zmm7 = *(arg1 + 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm1 = _mm_sub_ps(zmm10, zmm3)
        float temp0_856[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm2 = _mm_sub_ps(zmm12, temp0_856)
        zmm4 = *arg3
        zmm5 = *(arg3 + 4)
        float temp0_858[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_858)
        float temp0_860[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm2 = _mm_div_ps(zmm2, temp0_860)
        zmm8 = arg3[1].d
        zmm15 = _mm_cvttps_epi32(zmm1)
        zmm11 = _mm_cvttps_epi32(zmm2)
        uint32_t var_308_3[0x4] = temp0_858
        uint32_t var_2d8_2[0x4] = zmm3
        zmm1 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_858), zmm3)
        float temp0_867[0x4] =
            __divps_xmmps_memps(zx.o(*arg3)[0].q | zmm8[0].q << 0x40, data_142fc9600)
        zmm2 = _mm_shuffle_ps(temp0_867, temp0_867, 0)
        int32_t var_2e8_2[0x4] = zmm2
        float var_298_2[0x4] = zmm10
        zmm1 = _mm_cmpeq_ps(_mm_add_ps(zmm1, zmm2), zmm10, 1)
        zmm3 = _mm_add_epi32(zmm15, _mm_cmpeq_epi32(zmm2, zmm2))
        zmm2 = _mm_and_ps(zmm15, zmm1)
        zmm1 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm3), zmm2)
        zmm13 = zmm11
        int32_t var_2b8_2[0x4] = temp0_860
        uint32_t var_2c8_2[0x4] = temp0_856
        float temp0_878[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), temp0_860), temp0_856)
        float temp0_879[0x4] = _mm_shuffle_ps(temp0_867, temp0_867, 0x55)
        float temp0_880[0x4] = _mm_add_ps(temp0_878, temp0_879)
        float temp0_881[0x4] = _mm_cmpeq_ps(temp0_880, zmm12, 1)
        char temp0_883 = _mm_movemask_ps(_mm_and_ps(temp0_881, zmm0))
        zmm5 = arg1[1].d
        float temp0_884[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm14 = temp0_359
        float temp0_885[0x4] = _mm_sub_ps(zmm14, temp0_884)
        float temp0_886[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm9 = _mm_cvttps_epi32(_mm_div_ps(temp0_885, temp0_886))
        zmm7 = zmm12
        int32_t var_318_2[0x4] = zmm9
        zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_886), temp0_884)
        float temp0_892[0x4] = _mm_shuffle_ps(temp0_867, temp0_867, 0xaa)
        var_3e8 = zmm1
        zmm2 = _mm_cmpeq_ps(temp0_880, zmm7, 5)
        
        if (temp0_883 != 0)
            zmm15 = zmm13
        
        int32_t var_2a8_2[0x4] = zmm7
        float temp0_894[0x4] = __subps_xmmps_memps(zmm7, var_2f8_2)
        zmm6 = _mm_mul_ps(zmm6, zmm6)
        zmm12 = _mm_add_ps(zmm12, temp0_892)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm0)) != 0)
            zmm3 = __paddd_xmmdq_memdq(zmm13, data_142d3f800)
        
        zmm2 = __subps_xmmps_memps(zmm14, var_368_3)
        zmm6 = _mm_add_ps(zmm6, zx.o(0))
        float temp0_902[0x4] = _mm_mul_ps(temp0_894, temp0_894)
        uint32_t temp0_903[0x4] = _mm_and_ps(zmm15, temp0_881)
        zmm10 = _mm_or_ps(_mm_andnot_ps(temp0_881, zmm3), temp0_903)
        var_3d8 = zmm10
        float temp0_906[0x4] = _mm_cmpeq_ps(zmm12, zmm14, 5)
        zmm12 = _mm_cmpeq_ps(zmm12, zmm14, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm0)) != 0)
            zmm15 = var_318_2
        
        zmm13 = _mm_add_ps(zmm6, temp0_902)
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_906, zmm0)) != 0)
            zmm3 = __paddd_xmmdq_memdq(var_318_2, data_142d3f800)
        
        zmm13 = _mm_add_ps(zmm13, zmm2)
        float var_368_7[0x4] = zmm13
        zmm15 = _mm_and_ps(zmm15, zmm12)
        zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm3), zmm15)
        zmm9 = var_308_3
        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm9), var_2d8_2)
        zmm7 = var_2b8_2
        zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), zmm7), var_2c8_2)
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_886), temp0_884)
        float temp0_928[0x4] = _mm_add_ps(var_2e8_2, zmm2)
        float temp0_929[0x4] = _mm_add_ps(temp0_879, zmm3)
        float temp0_930[0x4] = _mm_add_ps(temp0_892, zmm6)
        zmm2 = _mm_sub_ps(var_298_2, temp0_928)
        zmm3 = _mm_sub_ps(var_2a8_2, temp0_929)
        zmm14 = _mm_sub_ps(zmm14, temp0_930)
        zmm2 = _mm_div_ps(zmm2, zmm9)
        zmm3 = _mm_div_ps(zmm3, zmm7)
        zmm14 = _mm_div_ps(zmm14, temp0_886)
        var_3a8 = zmm2
        uint128_t var_398_7 = zmm3
        int32_t var_388_7[0x4] = zmm14
        zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
        zmm1 = _mm_cmpeq_epi32(zmm1, zmm2)
        
        if (_mm_movemask_ps(zmm1 & zmm0) != 0)
            char temp0_940 = _mm_movemask_ps(zmm1)
            
            if ((temp0_940 & 1) == 0)
                if ((temp0_940 & 2) != 0)
                    goto label_1400d169f
                
                goto label_1400d15df
            
            var_3e8.d = 0
            
            if ((temp0_940 & 2) != 0)
            label_1400d169f:
                var_3e8:4.d = 0
                
                if ((temp0_940 & 4) == 0)
                    goto label_1400d15e7
                
                goto label_1400d16af
            
        label_1400d15df:
            
            if ((temp0_940 & 4) == 0)
            label_1400d15e7:
                
                if ((temp0_940 & 8) != 0)
                    goto label_1400d16bf
                
                goto label_1400d15ef
            
        label_1400d16af:
            var_3e8:8.d = 0
            
            if ((temp0_940 & 8) != 0)
            label_1400d16bf:
                var_3e8:0xc.d = 0
                
                if ((temp0_940 & 1) == 0)
                    goto label_1400d15f7
                
                goto label_1400d16cf
            
        label_1400d15ef:
            
            if ((temp0_940 & 1) == 0)
            label_1400d15f7:
                
                if ((temp0_940 & 2) != 0)
                    goto label_1400d16df
                
                goto label_1400d15ff
            
        label_1400d16cf:
            var_3a8.d = 0
            
            if ((temp0_940 & 2) != 0)
            label_1400d16df:
                var_3a8:4.d = 0
                
                if ((temp0_940 & 4) == 0)
                    goto label_1400d1607
                
                goto label_1400d16ef
            
        label_1400d15ff:
            
            if ((temp0_940 & 4) != 0)
            label_1400d16ef:
                var_3a8:8.d = 0
                
                if ((temp0_940 & 8) != 0)
                    var_3a8:0xc.d = 0
            else
            label_1400d1607:
                
                if ((temp0_940 & 8) != 0)
                    var_3a8:0xc.d = 0
        
        int32_t rdx_10 = *arg4
        zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_10 - 1), 0), var_3e8)
        
        if (_mm_movemask_ps(zmm1 & zmm0) != 0)
            rdx_10 -= 2
            char temp0_944 = _mm_movemask_ps(zmm1)
            
            if ((temp0_944 & 1) == 0)
                if ((temp0_944 & 2) != 0)
                    goto label_1400d171b
                
                goto label_1400d164d
            
            var_3e8.d = rdx_10
            
            if ((temp0_944 & 2) != 0)
            label_1400d171b:
                var_3e8:4.d = rdx_10
                
                if ((temp0_944 & 4) == 0)
                    goto label_1400d1655
                
                goto label_1400d1727
            
        label_1400d164d:
            
            if ((temp0_944 & 4) == 0)
            label_1400d1655:
                
                if ((temp0_944 & 8) != 0)
                    goto label_1400d1733
                
                goto label_1400d165d
            
        label_1400d1727:
            var_3e8:8.d = rdx_10
            
            if ((temp0_944 & 8) != 0)
            label_1400d1733:
                var_3e8:0xc.d = rdx_10
                
                if ((temp0_944 & 1) == 0)
                    goto label_1400d1665
                
                goto label_1400d173f
            
        label_1400d165d:
            
            if ((temp0_944 & 1) == 0)
            label_1400d1665:
                
                if ((temp0_944 & 2) != 0)
                    goto label_1400d174f
                
                goto label_1400d166d
            
        label_1400d173f:
            var_3a8.d = 0x3f800000
            
            if ((temp0_944 & 2) != 0)
            label_1400d174f:
                var_3a8:4.d = 0x3f800000
                
                if ((temp0_944 & 4) == 0)
                    goto label_1400d1675
                
                goto label_1400d175f
            
        label_1400d166d:
            
            if ((temp0_944 & 4) != 0)
            label_1400d175f:
                var_3a8:8.d = 0x3f800000
                
                if ((temp0_944 & 8) != 0)
                    var_3a8:0xc.d = 0x3f800000
            else
            label_1400d1675:
                
                if ((temp0_944 & 8) != 0)
                    var_3a8:0xc.d = 0x3f800000
        
        return sub_1400d15b0(0, rdx_10, zmm2, arg4, arg10, r10_4, arg5, r13_1, r14_1, r15_1, zmm0, 
            zmm13, var_388_7, var_378_2, var_368_7, var_358_1, var_348_2, var_338_1, var_328_1, 
            var_318_2, var_308_3, var_2f8_2, var_2e8_2, var_2d8_2, var_2c8_2, var_2b8_2, var_2a8_2, 
            var_298_2) __tailcall
    
label_1400d27a5:
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm9, zmm9[0].q), zmm9)
    zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
    zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
    zmm1 = _mm_unpacklo_ps(zmm1, zmm2.q)
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
    zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
    zmm2 = _mm_add_ps(*arg10 | arg10[1].d.q << 0x40, zmm1.q | zmm2.q << 0x40)
    *arg10 = zmm2.d
    zmm0.q = zmm2 u>> 0x40
    *(arg10 + 4) = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
    arg10[1].d = zmm0.d
    zmm1 = var_358_1
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm1.d = zmm1.d f+ *arg9
*arg9 = zmm1.d
return result
