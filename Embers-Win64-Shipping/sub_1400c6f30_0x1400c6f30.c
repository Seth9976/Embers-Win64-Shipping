// 函数: sub_1400c6f30
// 地址: 0x1400c6f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
int32_t zmm14[0x4]
int32_t var_68[0x4] = zmm14
uint128_t zmm13
uint128_t var_78 = zmm13
int32_t zmm12[0x4]
int32_t var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm8[0x4]
float var_c8[0x4] = zmm8
uint128_t zmm7
uint128_t var_d8 = zmm7
uint128_t zmm6
uint128_t var_e8 = zmm6
uint128_t zmm4 = *arg13
uint128_t zmm0 = __mulps_xmmps_memps(*arg3 | arg3[1].d.q << 0x40, data_142e6d9f0)
uint32_t result = _mm_movemask_ps(zmm4)
uint128_t zmm1 = _mm_sub_ps(*arg2 | arg2[1].d.q << 0x40, zmm0)
uint128_t zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
uint128_t zmm3 = _mm_unpackhi_pd(zmm1, zmm1.q)
int32_t* rcx
uint128_t var_3e8
uint128_t var_3d8
uint128_t var_3a8
float zmm5[0x4]
float zmm9[0x4]
uint128_t zmm10

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
    int32_t i = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
    uint128_t var_248_1 = zmm4
    uint128_t var_358_2
    uint64_t rdx_4
    
    if (i s> 0)
        zmm0 = arg9
        float var_238_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        rdx_4 = 0
        __builtin_memset(&var_358_2, 0, 0x40)
        
        do
            zmm0 = *(arg8 + sx.q((rdx_4 << 2).d))
            zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
            int64_t rax_75 = sx.q(zmm1.d)
            int64_t rsi_6 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
            int64_t rdi_4 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
            int64_t rbx_9 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
            zmm1 = *(arg7 + (rbx_9 << 2) + 4)
            zmm2 = _mm_unpacklo_ps(*(arg7 + (rdi_4 << 2)), (*(arg7 + (rbx_9 << 2))).q)
            zmm0 = _mm_unpacklo_ps(*(arg7 + (rdi_4 << 2) + 4), zmm1.q)
            zmm4 = *(arg7 + (rax_75 << 2) + 4)
            zmm1 = _mm_unpacklo_ps(*(arg7 + (rax_75 << 2)), (*(arg7 + (rsi_6 << 2))).q).q
                | zmm2.q << 0x40
            zmm4 = _mm_unpacklo_ps(zmm4, (*(arg7 + (rsi_6 << 2) + 4)).q).q | zmm0.q << 0x40
            zmm2 = _mm_unpacklo_ps(*(arg7 + (rax_75 << 2) + 8), (*(arg7 + (rsi_6 << 2) + 8)).q).q
                | _mm_unpacklo_ps(*(arg7 + (rdi_4 << 2) + 8), (*(arg7 + (rbx_9 << 2) + 8)).q).q
                << 0x40
            var_3a8 = zmm1
            uint128_t var_388_3 = zmm2
            int128_t var_378_2 = zx.o(0)
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3e8 = zmm0
            var_3d8 = zmm0
            uint128_t var_3c8_3 = zmm0
            uint128_t var_3b8_2 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
            float temp0_379[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_380[0x4] = _mm_mul_ps(zmm2, temp0_379)
            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm3 = _mm_mul_ps(zmm1, zmm10)
            float temp0_383[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm7 = _mm_mul_ps(zmm4, temp0_383)
            float temp0_386[0x4] = _mm_sub_ps(temp0_380, _mm_mul_ps(zmm4, zmm10))
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm2, temp0_383))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_379))
            float temp0_391[0x4] = _mm_add_ps(temp0_386, temp0_386)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            zmm2 = _mm_mul_ps(zmm0, temp0_391)
            float temp0_395[0x4] = _mm_mul_ps(zmm0, zmm3)
            zmm2 = __addps_xmmps_memps(zmm2, var_3a8)
            float temp0_397[0x4] = __addps_xmmps_memps(temp0_395, zmm4)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), var_388_3)
            zmm6 = _mm_mul_ps(zmm7, temp0_379)
            zmm4 = _mm_mul_ps(temp0_391, zmm10)
            zmm1 = _mm_mul_ps(zmm3, temp0_383)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, zmm10)), zmm2)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(zmm7, temp0_383)), temp0_397)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_391, temp0_379)), zmm0)
            zmm3 = arg6[1].d
            zmm2 = *(arg6 + 0x14)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm6)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            uint128_t var_1b8 = zmm3
            float var_298_2[0x4] = zmm2
            uint128_t var_1a8 = zmm2
            float var_368_3[0x4] = zmm0
            uint128_t var_198_1 = zmm0
            int64_t rbx_10 = 0
            float var_308_2[0x4] = zmm3
            zmm0 = zmm3
            
            while (true)
                zmm2 = *(&var_278 + rbx_10)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_420 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_420 != 0)
                    if ((temp0_420 & 1) == 0)
                        if ((temp0_420 & 2) != 0)
                            goto label_1400c841d
                        
                        goto label_1400c834d
                    
                    *(&var_3e8 + (rbx_10 << 2)) = zmm2.d
                    
                    if ((temp0_420 & 2) != 0)
                    label_1400c841d:
                        *(&var_3e8:4 + (rbx_10 << 2)) = zmm2.d
                        
                        if ((temp0_420 & 4) == 0)
                            goto label_1400c8355
                        
                        goto label_1400c842b
                    
                label_1400c834d:
                    
                    if ((temp0_420 & 4) != 0)
                    label_1400c842b:
                        *(&var_3e8:8 + (rbx_10 << 2)) = zmm2.d
                        
                        if ((temp0_420 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_10 << 2)) = zmm2.d
                    else
                    label_1400c8355:
                        
                        if ((temp0_420 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_10 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_288 + rbx_10)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_426 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_426 != 0)
                        if ((temp0_426 & 1) == 0)
                            if ((temp0_426 & 2) != 0)
                                goto label_1400c844b
                            
                            goto label_1400c83a2
                        
                        *(&var_3e8 + (rbx_10 << 2)) = zmm3.d
                        
                        if ((temp0_426 & 2) != 0)
                        label_1400c844b:
                            *(&var_3e8:4 + (rbx_10 << 2)) = zmm3.d
                            
                            if ((temp0_426 & 4) == 0)
                                goto label_1400c83aa
                            
                            goto label_1400c8459
                        
                    label_1400c83a2:
                        
                        if ((temp0_426 & 4) != 0)
                        label_1400c8459:
                            *(&var_3e8:8 + (rbx_10 << 2)) = zmm3.d
                            
                            if ((temp0_426 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_10 << 2)) = zmm3.d
                        else
                        label_1400c83aa:
                            
                            if ((temp0_426 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_10 << 2)) = zmm3.d
                    
                    char temp0_429 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_429 != 0)
                        zmm0 = *(&var_1b8 + (rbx_10 << 2))
                        
                        if ((temp0_429 & 1) == 0)
                            if ((temp0_429 & 2) != 0)
                                goto label_1400c847e
                            
                            goto label_1400c83de
                        
                        *(&var_3e8 + (rbx_10 << 2)) = zmm0.d
                        
                        if ((temp0_429 & 2) != 0)
                        label_1400c847e:
                            *(&var_3e8:4 + (rbx_10 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_429 & 4) == 0)
                                goto label_1400c83e6
                            
                            goto label_1400c8491
                        
                    label_1400c83de:
                        
                        if ((temp0_429 & 4) != 0)
                        label_1400c8491:
                            *(&var_3e8:8 + (rbx_10 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_429 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_10 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_1400c83e6:
                            
                            if ((temp0_429 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_10 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (rbx_10 == 8)
                    break
                
                zmm0 = *(&var_1a8 + (rbx_10 << 2))
                rbx_10 += 4
            
            zmm12 = var_3e8
            zmm13 = var_3d8
            zmm6 = *arg1
            zmm9 = *(arg1 + 4)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm0 = _mm_sub_ps(zmm12, zmm6)
            float temp0_435[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm3 = _mm_sub_ps(zmm13, temp0_435)
            zmm5 = arg1[1].d
            float temp0_437[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm7 = _mm_sub_ps(var_3c8_3, temp0_437)
            zmm4 = *arg3
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, zmm4)
            zmm2 = arg3[1].d
            zmm15 = _mm_cvttps_epi32(zmm0)
            uint128_t var_2c8_2 = zmm4
            uint128_t var_2e8_2 = zmm6
            zmm1 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm4), zmm6)
            zmm14 = __divps_xmmps_memps(zx.o(*arg3)[0].q | zmm2.q << 0x40, data_142fc9600)
            zmm0 = _mm_shuffle_ps(zmm14, zmm14, 0)
            uint128_t var_318_2 = zmm0
            zmm1 = _mm_cmpeq_ps(_mm_add_ps(zmm1, zmm0), zmm12, 1)
            zmm0 = __paddd_xmmdq_memdq(zmm15, data_142d3f800)
            zmm4 = _mm_and_ps(zmm15, zmm1)
            zmm1 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm4)
            zmm8 = *(arg3 + 4)
            float temp0_453[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm3 = _mm_div_ps(zmm3, temp0_453)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_div_ps(zmm7, zmm2)
            uint128_t temp0_457 = _mm_cvttps_epi32(zmm3)
            zmm3 = _mm_cvttps_epi32(zmm7)
            zmm4 = _mm_mul_ps(_mm_cvtepi32_ps(temp0_457), temp0_453)
            float temp0_462[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm2)
            zmm4 = _mm_add_ps(zmm4, temp0_435)
            float temp0_464[0x4] = _mm_add_ps(temp0_462, temp0_437)
            zmm10 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
            zmm4 = _mm_add_ps(zmm4, zmm10)
            zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
            var_3e8 = zmm1
            float temp0_468[0x4] = _mm_cmpeq_ps(zmm4, zmm13, 1)
            
            if (_mm_movemask_ps(temp0_468) != 0)
                zmm15 = temp0_457
            
            float temp0_470[0x4] = _mm_add_ps(temp0_464, zmm14)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm4, zmm13, 5)) != 0)
                zmm0 = __paddd_xmmdq_memdq(temp0_457, data_142d3f800)
            
            int32_t var_2a8_2[0x4] = zmm12
            zmm7 = __subps_xmmps_memps(zmm12, var_308_2)
            uint128_t var_308_3 = zmm13
            zmm6 = __subps_xmmps_memps(zmm13, var_298_2)
            zmm4 = _mm_and_ps(zmm15, temp0_468)
            zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_468, zmm0), zmm4)
            var_3d8 = zmm9
            zmm13 = _mm_cmpeq_ps(temp0_470, var_3c8_3, 1)
            
            if (_mm_movemask_ps(zmm13) != 0)
                zmm15 = zmm3
            
            zmm12 = __subps_xmmps_memps(var_3c8_3, var_368_3)
            zmm7 = _mm_mul_ps(zmm7, zmm7)
            zmm6 = _mm_mul_ps(zmm6, zmm6)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_470, var_3c8_3, 5)) != 0)
                zmm0 = __paddd_xmmdq_memdq(zmm3, data_142d3f800)
            
            zmm15 = _mm_and_ps(zmm15, zmm13)
            zmm13 = _mm_or_ps(_mm_andnot_ps(zmm13, zmm0), zmm15)
            zmm7 = _mm_add_ps(__addps_xmmps_memps(zmm7, data_142d8f750), zmm6)
            zmm11 = var_2c8_2
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm11), var_2e8_2)
            zmm4 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_453), temp0_435)
            zmm6 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm2), temp0_437)
            zmm3 = _mm_add_ps(var_318_2, zmm0)
            zmm10 = _mm_add_ps(zmm10, zmm4)
            zmm14 = _mm_add_ps(zmm14, zmm6)
            zmm0 = _mm_sub_ps(var_2a8_2, zmm3)
            zmm4 = _mm_sub_ps(var_308_3, zmm10)
            float temp0_506[0x4] = _mm_sub_ps(var_3c8_3, zmm14)
            zmm0 = _mm_div_ps(zmm0, zmm11)
            zmm4 = _mm_div_ps(zmm4, temp0_453)
            float temp0_509[0x4] = _mm_div_ps(temp0_506, zmm2)
            var_3a8 = zmm0
            uint128_t var_398_4 = zmm4
            zmm12 = _mm_mul_ps(zmm12, zmm12)
            int64_t rbx_11 = 0
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            char j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3))
            
            if (j == 0)
                goto label_1400c879c
            
            do
                if ((j & 1) == 0)
                    if ((j & 2) != 0)
                        goto label_1400c882f
                    
                    goto label_1400c8768
                
                *(&var_3e8 + (rbx_11 << 2)) = 0
                
                if ((j & 2) != 0)
                label_1400c882f:
                    *(&var_3e8:4 + (rbx_11 << 2)) = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400c8770
                    
                    goto label_1400c883f
                
            label_1400c8768:
                
                if ((j & 4) == 0)
                label_1400c8770:
                    
                    if ((j & 8) != 0)
                        goto label_1400c884f
                    
                    goto label_1400c8778
                
            label_1400c883f:
                *(&var_3e8:8 + (rbx_11 << 2)) = 0
                
                if ((j & 8) != 0)
                label_1400c884f:
                    *(&var_3e8:0xc + (rbx_11 << 2)) = 0
                    
                    if ((j & 1) == 0)
                        goto label_1400c8780
                    
                    goto label_1400c885f
                
            label_1400c8778:
                
                if ((j & 1) == 0)
                label_1400c8780:
                    
                    if ((j & 2) != 0)
                        goto label_1400c886f
                    
                    goto label_1400c8788
                
            label_1400c885f:
                *(&var_3a8 + (rbx_11 << 2)) = 0
                
                if ((j & 2) != 0)
                label_1400c886f:
                    *(&var_3a8:4 + (rbx_11 << 2)) = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400c8790
                    
                    goto label_1400c887f
                
            label_1400c8788:
                
                if ((j & 4) != 0)
                label_1400c887f:
                    *(&var_3a8:8 + (rbx_11 << 2)) = 0
                    
                    if ((j & 8) != 0)
                        *(&var_3a8:0xc + (rbx_11 << 2)) = 0
                else
                label_1400c8790:
                    
                    if ((j & 8) != 0)
                        *(&var_3a8:0xc + (rbx_11 << 2)) = 0
                
            label_1400c879c:
                int32_t rbp_7 = *(arg4 + rbx_11)
                char temp0_518 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rbp_7 - 1), 0), *(&var_3e8 + (rbx_11 << 2))))
                
                if (temp0_518 != 0)
                    if ((temp0_518 & 1) == 0)
                        if ((temp0_518 & 2) != 0)
                            goto label_1400c88ab
                        
                        goto label_1400c87ce
                    
                    *(&var_3e8 + (rbx_11 << 2)) = rbp_7 - 2
                    
                    if ((temp0_518 & 2) != 0)
                    label_1400c88ab:
                        *(&var_3e8:4 + (rbx_11 << 2)) = rbp_7 - 2
                        
                        if ((temp0_518 & 4) == 0)
                            goto label_1400c87d6
                        
                        goto label_1400c88b7
                    
                label_1400c87ce:
                    
                    if ((temp0_518 & 4) == 0)
                    label_1400c87d6:
                        
                        if ((temp0_518 & 8) != 0)
                            goto label_1400c88c3
                        
                        goto label_1400c87de
                    
                label_1400c88b7:
                    *(&var_3e8:8 + (rbx_11 << 2)) = rbp_7 - 2
                    
                    if ((temp0_518 & 8) != 0)
                    label_1400c88c3:
                        *(&var_3e8:0xc + (rbx_11 << 2)) = rbp_7 - 2
                        
                        if ((temp0_518 & 1) == 0)
                            goto label_1400c87e6
                        
                        goto label_1400c88cf
                    
                label_1400c87de:
                    
                    if ((temp0_518 & 1) == 0)
                    label_1400c87e6:
                        
                        if ((temp0_518 & 2) != 0)
                            goto label_1400c88df
                        
                        goto label_1400c87ee
                    
                label_1400c88cf:
                    *(&var_3a8 + (rbx_11 << 2)) = 0x3f800000
                    
                    if ((temp0_518 & 2) != 0)
                    label_1400c88df:
                        *(&var_3a8:4 + (rbx_11 << 2)) = 0x3f800000
                        
                        if ((temp0_518 & 4) == 0)
                            goto label_1400c87f6
                        
                        goto label_1400c88ef
                    
                label_1400c87ee:
                    
                    if ((temp0_518 & 4) != 0)
                    label_1400c88ef:
                        *(&var_3a8:8 + (rbx_11 << 2)) = 0x3f800000
                        
                        if ((temp0_518 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_11 << 2)) = 0x3f800000
                    else
                    label_1400c87f6:
                        
                        if ((temp0_518 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_11 << 2)) = 0x3f800000
                
                if (rbx_11 == 8)
                    break
                
                zmm1 = *(&var_3d8 + (rbx_11 << 2))
                rbx_11 += 4
                j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3))
            while (j != 0)
            
            uint128_t var_368_4 = _mm_add_ps(zmm7, zmm12)
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm5 = var_3e8
            zmm15 = var_3d8
            zmm9 = zmm13
            zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm8), 0xe8)
            zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm5), 0xe8), zmm0.q)
            zmm1 = _mm_add_epi32(zmm13, zmm15)
            zmm2 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            int32_t temp0_534[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm1, 0xf5), zmm2), 0xe8).q)
            zmm0 = _mm_add_epi32(temp0_534, zmm9)
            uint128_t* rbx_12 = *(arg5 + 0x10)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int64_t rax_92 = sx.q(zmm0.d)
            int64_t rsi_8 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
            int64_t rdi_6 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
            int64_t rbp_10 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            zmm6 = *(rbx_12 + rbp_10 + 4)
            zmm4 = _mm_unpacklo_ps(*(rbx_12 + rdi_6), (*(rbx_12 + rbp_10)).q)
            zmm7 = _mm_unpacklo_ps(*(rbx_12 + rdi_6 + 4), zmm6.q)
            zmm12 = *(rbx_12 + rax_92 + 4)
            zmm0 = _mm_unpacklo_ps(*(rbx_12 + rax_92), (*(rbx_12 + rsi_8)).q).q | zmm4.q << 0x40
            zmm12 = _mm_unpacklo_ps(zmm12, (*(rbx_12 + rsi_8 + 4)).q)[0].q | zmm7.q << 0x40
            zmm5 = _mm_sub_epi32(zmm5, zmm3)
            zmm4 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm8), 0xe8)
            zmm5 = _mm_mul_epu32(zmm5, zmm8)
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            zmm7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm5, 0xe8), zmm4.q)
            zmm4 = _mm_add_epi32(zmm7, zmm15)
            uint128_t temp0_553 = _mm_shuffle_epi32(zmm4, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(temp0_553, zmm2), 0xe8).q), 
                    zmm9), 
                2)
            zmm1 = _mm_add_epi32(zmm1, zmm8)
            zmm4 = _mm_shuffle_epi32(zmm1, 0xf5)
            zmm10 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8).q)
            zmm4 = _mm_sub_ps(
                _mm_unpacklo_ps(*(rbx_12 + sx.q(zmm5[0])), 
                    (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d))).q).q | _mm_unpacklo_ps(
                    *(rbx_12 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)), 
                    (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q).q << 0x40, 
                zmm0)
            zmm11 = var_3a8
            zmm8 = var_398_4
            zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm11), zmm0)
            zmm15 = _mm_sub_epi32(zmm15, zmm3)
            zmm13 = _mm_add_epi32(zmm13, zmm15)
            zmm0 = _mm_shuffle_epi32(zmm13, 0xf5)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm13, zmm2), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm2), 0xe8).q), 
                    zmm9), 
                2)
            zmm0 = _mm_unpacklo_ps(*(rbx_12 + sx.q(zmm1.d)), 
                (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rbx_12 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)), 
                (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d))).q).q << 0x40
            zmm15 = _mm_add_epi32(zmm15, zmm7)
            zmm1 = _mm_shuffle_epi32(zmm15, 0xf5)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm15, zmm2), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8).q), 
                    zmm9), 
                2)
            zmm7 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbx_12 + sx.q(zmm3.d)), 
                            (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5).d))).q).q | _mm_unpacklo_ps(
                            *(rbx_12 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)), 
                            (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q).q << 0x40, 
                        zmm0), 
                    zmm11), 
                zmm0)
            zmm2 = _mm_add_epi32(zmm2, zmm9)
            int32_t temp0_609[0x4] = _mm_add_epi32(temp0_534, zmm2)
            zmm2 = _mm_add_epi32(zmm2, zmm10)
            zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, zmm9), 2)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbx_12 + sx.q(zmm10.d) + 4), 
                            (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm10, 0xe5).d) + 4)).q).q |
                            _mm_unpacklo_ps(*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm10, 0x4e).d) + 4), 
                            (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm10, 0xe7).d) + 4)).q).q << 0x40, 
                        zmm12), 
                    zmm11), 
                zmm12)
            zmm14 = _mm_slli_epi32(temp0_609, 2)
            zmm1 = _mm_unpacklo_ps(*(rbx_12 + sx.q(zmm14[0]) + 4), 
                (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + 4)).q).q | _mm_unpacklo_ps(
                *(rbx_12 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + 4), 
                (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + 4))[0].q).q << 0x40
            zmm2 = _mm_slli_epi32(zmm2, 2)
            zmm6 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbx_12 + sx.q(zmm2.d) + 4), 
                            (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d) + 4)).q).q |
                            _mm_unpacklo_ps(*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d) + 4), 
                            (*(rbx_12 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d) + 4)).q).q << 0x40, 
                        zmm1), 
                    zmm11), 
                zmm1)
            zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, zmm4), zmm8), zmm4)
            zmm6 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm0), zmm8), zmm0), zmm7), 
                    temp0_509), 
                zmm7)
            zmm1 = _mm_cmpeq_ps(var_368_4, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(var_368_4, zx.o(0), 7), zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm1 = _mm_rsqrt_ps(var_368_4)
                zmm3 = _mm_mul_ps(_mm_mul_ps(var_368_4, zmm1), zmm1)
                zmm2 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm3), zmm1), 
                    data_142d3f640)
                zmm1 = _mm_rcp_ps(zmm2)
                zmm2 = _mm_mul_ps(zmm2, zmm1)
                zmm3 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm2), zmm1), zmm6), zmm0)
                zmm6 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm6), zmm3)
            
            float var_328_2[0x4]
            zmm9 = var_328_2
            uint128_t var_338_2
            zmm10 = var_338_2
            float var_348_2[0x4]
            zmm11 = var_348_2
            zmm6 = __subps_xmmps_memps(zmm6, var_238_2)
            zmm0 = __cmpps_xmmps_memps_immb(zmm6, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                zmm7 = _mm_mul_ps(var_1b8, zmm6)
                float temp0_667[0x4] = _mm_mul_ps(var_1a8, zmm6)
                zmm4 = _mm_mul_ps(var_198_1, zmm6)
                char rbx_13 = result.b
                zmm3 = zmm10
                char temp0_669 = rbx_13 & 1
                
                if (temp0_669 == 0)
                    zmm2 = zmm9
                    
                    if (temp0_669 != 0)
                        goto label_1400c8026
                    
                    goto label_1400c8de5
                
                zmm3.d = zmm10.d f+ zmm7.d
                zmm2 = zmm9
                
                if (temp0_669 != 0)
                label_1400c8026:
                    zmm2.d = zmm9.d f+ temp0_667[0]
                    zmm1 = zmm11
                    
                    if (temp0_669 == 0)
                        goto label_1400c8def
                    
                    goto label_1400c8038
                
            label_1400c8de5:
                zmm1 = zmm11
                bool cond:18_1
                bool cond:19_1
                bool cond:24_1
                bool cond:25_1
                
                if (temp0_669 == 0)
                label_1400c8def:
                    zmm10 = _mm_add_ps(zmm10, zmm7)
                    char temp5_1 = rbx_13 & 2
                    cond:18_1 = temp5_1 != 0
                    cond:19_1 = temp5_1 == 0
                    cond:24_1 = temp5_1 == 0
                    cond:25_1 = temp5_1 != 0
                    
                    if (temp5_1 != 0)
                        goto label_1400c8055
                    
                    goto label_1400c8dfc
                
            label_1400c8038:
                zmm1.d = zmm11.d f+ zmm4.d
                zmm10 = _mm_add_ps(zmm10, zmm7)
                char temp4_1 = rbx_13 & 2
                cond:18_1 = temp4_1 != 0
                cond:19_1 = temp4_1 == 0
                cond:24_1 = temp4_1 == 0
                cond:25_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                label_1400c8055:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 1), zmm3, 0xe2)
                    zmm9 = _mm_add_ps(zmm9, temp0_667)
                    
                    if (cond:19_1)
                        goto label_1400c8e06
                    
                    goto label_1400c806e
                
            label_1400c8dfc:
                zmm9 = _mm_add_ps(zmm9, temp0_667)
                
                if (not(cond:18_1))
                label_1400c8e06:
                    zmm11 = _mm_add_ps(zmm11, zmm4)
                    
                    if (cond:25_1)
                        goto label_1400c8087
                    
                    goto label_1400c8e10
                
            label_1400c806e:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm2, 1), zmm2, 0xe2)
                zmm11 = _mm_add_ps(zmm11, zmm4)
                bool cond:34_1
                bool cond:35_1
                bool cond:40_1
                bool cond:41_1
                
                if (not(cond:24_1))
                label_1400c8087:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 1), zmm1, 0xe2)
                    char temp13_1 = rbx_13 & 4
                    cond:34_1 = temp13_1 == 0
                    cond:35_1 = temp13_1 != 0
                    cond:40_1 = temp13_1 != 0
                    cond:41_1 = temp13_1 == 0
                    
                    if (temp13_1 == 0)
                        goto label_1400c8e19
                    
                    goto label_1400c809b
                
            label_1400c8e10:
                char temp12_1 = rbx_13 & 4
                cond:34_1 = temp12_1 == 0
                cond:35_1 = temp12_1 != 0
                cond:40_1 = temp12_1 != 0
                cond:41_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                label_1400c809b:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x32), 0x84)
                    
                    if (not(cond:34_1))
                    label_1400c80ad:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x32), 0x84)
                        
                        if (cond:41_1)
                            goto label_1400c8e25
                        
                        goto label_1400c80bf
                else
                label_1400c8e19:
                    
                    if (cond:35_1)
                        goto label_1400c80ad
                
                bool cond:50_1
                bool cond:51_1
                bool cond:56_1
                bool cond:57_1
                
                if (not(cond:40_1))
                label_1400c8e25:
                    char temp21_1 = rbx_13 & 8
                    cond:50_1 = temp21_1 != 0
                    cond:51_1 = temp21_1 == 0
                    cond:56_1 = temp21_1 != 0
                    cond:57_1 = temp21_1 == 0
                    
                    if (temp21_1 != 0)
                        goto label_1400c80d6
                    
                    goto label_1400c8e2e
                
            label_1400c80bf:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x32), 0x84)
                char temp20_1 = rbx_13 & 8
                cond:50_1 = temp20_1 != 0
                cond:51_1 = temp20_1 == 0
                cond:56_1 = temp20_1 != 0
                cond:57_1 = temp20_1 == 0
                
                if (temp20_1 != 0)
                label_1400c80d6:
                    zmm10 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x23), 0x24)
                    
                    if (cond:51_1)
                        goto label_1400c8e38
                    
                    goto label_1400c80ea
                
            label_1400c8e2e:
                zmm10 = zmm3
                
                if (cond:50_1)
                label_1400c80ea:
                    zmm9 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x23), 0x24)
                    
                    if (cond:56_1)
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
                else
                label_1400c8e38:
                    zmm9 = zmm2
                    
                    if (not(cond:57_1))
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
                
                zmm2 = var_358_2
                zmm6 = _mm_and_ps(_mm_add_ps(zmm6, zmm2), zmm0)
                zmm11 = zmm1
                var_358_2 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm2), zmm6)
            
            rdx_4 = zx.q(rdx_4.d + 4)
        while (rdx_4.d s< i)
        
        if (rdx_4.d s>= arg12)
            goto label_1400c8f2a
        
        goto label_1400c8e86
    
    rdx_4 = 0
    zmm11 = zx.o(0)
    zmm9 = zx.o(0)
    zmm10 = zx.o(0)
    var_358_2 = zx.o(0)
    int64_t* rdx_9
    
    if (0 s< arg12)
    label_1400c8e86:
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_4.d), 0), data_142e11d00)
        zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg12), 0), zmm1)
        int64_t rax_142 = sx.q(rdx_4.d << 2)
        uint32_t temp0_683 = _mm_movemask_ps(zmm0)
        float var_328_3[0x4] = zmm9
        uint128_t var_338_3 = zmm10
        
        if ((zx.q(temp0_683) & 0xfffffff9) != 9)
            if ((temp0_683.b & 1) != 0)
                var_3e8.d = *(arg8 + rax_142)
            
            if ((temp0_683.b & 2) == 0)
                if ((temp0_683.b & 4) != 0)
                    goto label_1400cb0a1
                
                goto label_1400c9ec7
            
            var_3e8:4.d = *(arg8 + rax_142 + 4)
            
            if ((temp0_683.b & 4) == 0)
            label_1400c9ec7:
                
                if ((temp0_683.b & 8) != 0)
                    var_3e8:0xc.d = *(arg8 + rax_142 + 0xc)
            else
            label_1400cb0a1:
                var_3e8:8.d = *(arg8 + rax_142 + 8)
                
                if ((temp0_683.b & 8) != 0)
                    var_3e8:0xc.d = *(arg8 + rax_142 + 0xc)
            
            zmm1 = var_3e8
        else
            zmm1 = *(arg8 + rax_142)
        
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
        int64_t rdx_21 = sx.q(zmm2.d)
        int64_t rax_169 = arg7 + (rdx_21 << 2)
        zmm1 = *(arg7 + (rdx_21 << 2))
        int64_t rbp_45 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        int64_t rdx_23 = arg7 + (rbp_45 << 2)
        zmm1 = _mm_unpacklo_ps(zmm1, (*(arg7 + (rbp_45 << 2))).q)
        int64_t rbp_47 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        int64_t rbx_16 = arg7 + (rbp_47 << 2)
        zmm3 = *(arg7 + (rbp_47 << 2))
        int64_t rsi_11 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        int64_t r10_9 = arg7 + (rsi_11 << 2)
        zmm1 = zmm1.q | _mm_unpacklo_ps(zmm3, (*(arg7 + (rsi_11 << 2))).q).q << 0x40
        zmm3 = data_142fc95e0 & zmm0
        uint128_t* r14_2 = zx.q(zmm3.d)
        zmm8 = *(r14_2 + rax_169)
        uint128_t* r15_2 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d)
        float temp0_1046[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_2 + rdx_23)).q)
        uint128_t* r13_2 = zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
        zmm4 = *(r13_2 + rbx_16)
        uint128_t* rbp_49 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        zmm4 = _mm_unpacklo_ps(zmm4, (*(rbp_49 + r10_9)).q)
        zmm8 = temp0_1046[0].q | zmm4.q << 0x40
        zmm3 = data_142fc95f0 & zmm0
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_169), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d) + rdx_23)).q).q | _mm_unpacklo_ps(
            *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) + rbx_16), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + r10_9)).q).q << 0x40
        uint128_t var_228_2 = zmm1
        uint128_t var_208_2 = zmm6
        float var_1f8_2[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        float temp0_1055[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_3e8 = temp0_1055
        var_3d8 = temp0_1055
        zmm7 = *arg6
        zmm2 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_1058[0x4] = _mm_mul_ps(zmm8, zmm7)
        zmm7 = _mm_mul_ps(zmm7, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm2, zmm1)
        zmm1 = _mm_mul_ps(zmm1, zmm4)
        zmm3 = _mm_mul_ps(zx.o(0), temp0_1055)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, zmm8))
        zmm1 = _mm_sub_ps(zmm1, zmm7)
        float temp0_1068[0x4] = _mm_sub_ps(temp0_1058, zmm2)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        float temp0_1072[0x4] = _mm_add_ps(temp0_1068, temp0_1068)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_3a8 = zmm6
        uint128_t var_398_7 = zmm1
        float var_388_7[0x4] = temp0_1072
        uint128_t var_378_4 = zmm3
        zmm3 = _mm_mul_ps(zmm3, temp0_1055)
        zmm2 = _mm_mul_ps(temp0_1055, zmm6)
        float temp0_1076[0x4] = _mm_mul_ps(temp0_1055, zmm1)
        zmm10 = _mm_mul_ps(temp0_1055, temp0_1072)
        zmm2 = __addps_xmmps_memps(zmm2, var_228_2)
        float temp0_1079[0x4] = __addps_xmmps_memps(temp0_1076, zmm8)
        zmm10 = __addps_xmmps_memps(zmm10, var_208_2)
        float var_3b8_4[0x4] = temp0_1055
        uint128_t var_128_2 = zmm2
        float var_118_2[0x4] = temp0_1079
        uint128_t var_108_2 = zmm10
        uint128_t var_f8_2 = __addps_xmmps_memps(zmm3, var_1f8_2)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        float temp0_1082[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(zmm1, zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_1072)
        float temp0_1086[0x4] = _mm_mul_ps(temp0_1072, temp0_1082)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_1088[0x4] = _mm_mul_ps(temp0_1082, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm7)
        float temp0_1091[0x4] = _mm_sub_ps(temp0_1086, _mm_mul_ps(zmm7, zmm1))
        zmm6 = _mm_sub_ps(zmm6, zmm4)
        zmm3 = _mm_sub_ps(zmm3, temp0_1088)
        float temp0_1094[0x4] = _mm_add_ps(temp0_1091, zmm2)
        zmm6 = _mm_add_ps(zmm6, temp0_1079)
        zmm3 = _mm_add_ps(zmm3, zmm10)
        zmm4 = arg6[1].d
        zmm2 = *(arg6 + 0x14)
        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_1094)
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
        zmm1 = *(arg6 + 0x18)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
        uint128_t var_1e8 = zmm4
        uint128_t var_2f8_4 = zmm2
        uint128_t var_1d8 = zmm2
        float var_368_7[0x4] = zmm1
        uint128_t var_1c8_1 = zmm1
        int64_t rdx_24 = 0
        zmm1 = zmm4
        
        while (true)
            zmm3 = *(&var_278 + rdx_24)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_1104[0x4] = _mm_cmpeq_ps(zmm2, zmm1, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_1104, zmm0)) != 0)
                char temp0_1107 = _mm_movemask_ps(temp0_1104)
                
                if ((temp0_1107 & 1) == 0)
                    if ((temp0_1107 & 2) != 0)
                        goto label_1400ca2ad
                    
                    goto label_1400ca1d3
                
                *(&var_3e8 + (rdx_24 << 2)) = zmm3.d
                
                if ((temp0_1107 & 2) != 0)
                label_1400ca2ad:
                    *(&var_3e8:4 + (rdx_24 << 2)) = zmm3.d
                    
                    if ((temp0_1107 & 4) == 0)
                        goto label_1400ca1db
                    
                    goto label_1400ca2bb
                
            label_1400ca1d3:
                
                if ((temp0_1107 & 4) != 0)
                label_1400ca2bb:
                    *(&var_3e8:8 + (rdx_24 << 2)) = zmm3.d
                    
                    if ((temp0_1107 & 8) != 0)
                        *(&var_3e8:0xc + (rdx_24 << 2)) = zmm3.d
                else
                label_1400ca1db:
                    
                    if ((temp0_1107 & 8) != 0)
                        *(&var_3e8:0xc + (rdx_24 << 2)) = zmm3.d
            
            zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
                zmm5 = *(&var_288 + rdx_24)
                zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0)
                zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm3, 1), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm0)) != 0)
                    char temp0_1116 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_1116 & 1) == 0)
                        if ((temp0_1116 & 2) != 0)
                            goto label_1400ca2db
                        
                        goto label_1400ca234
                    
                    *(&var_3e8 + (rdx_24 << 2)) = zmm5[0]
                    
                    if ((temp0_1116 & 2) != 0)
                    label_1400ca2db:
                        *(&var_3e8:4 + (rdx_24 << 2)) = zmm5[0]
                        
                        if ((temp0_1116 & 4) == 0)
                            goto label_1400ca23c
                        
                        goto label_1400ca2e9
                    
                label_1400ca234:
                    
                    if ((temp0_1116 & 4) != 0)
                    label_1400ca2e9:
                        *(&var_3e8:8 + (rdx_24 << 2)) = zmm5[0]
                        
                        if ((temp0_1116 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_24 << 2)) = zmm5[0]
                    else
                    label_1400ca23c:
                        
                        if ((temp0_1116 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_24 << 2)) = zmm5[0]
                
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm3, 5), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm0)) != 0)
                    zmm2 = *(&var_1e8 + (rdx_24 << 2))
                    char temp0_1121 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_1121 & 1) == 0)
                        if ((temp0_1121 & 2) != 0)
                            goto label_1400ca30e
                        
                        goto label_1400ca276
                    
                    *(&var_3e8 + (rdx_24 << 2)) = zmm2.d
                    
                    if ((temp0_1121 & 2) != 0)
                    label_1400ca30e:
                        *(&var_3e8:4 + (rdx_24 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5).d
                        
                        if ((temp0_1121 & 4) == 0)
                            goto label_1400ca27e
                        
                        goto label_1400ca321
                    
                label_1400ca276:
                    
                    if ((temp0_1121 & 4) != 0)
                    label_1400ca321:
                        *(&var_3e8:8 + (rdx_24 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e).d
                        
                        if ((temp0_1121 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_24 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                    else
                    label_1400ca27e:
                        
                        if ((temp0_1121 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_24 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
            
            if (rdx_24 == 8)
                break
            
            zmm1 = *(&var_1d8 + (rdx_24 << 2))
            rdx_24 += 4
        
        float var_348_3[0x4] = zmm11
        zmm9 = var_3e8
        zmm12 = var_3d8
        zmm14 = _mm_sub_ps(zmm9, zmm4)
        zmm6 = *arg1
        zmm3 = *(arg1 + 4)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm1 = _mm_sub_ps(zmm9, zmm6)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm2 = _mm_sub_ps(zmm12, zmm3)
        zmm5 = *arg3
        zmm7 = *(arg3 + 4)
        float temp0_1130[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_1130)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm2 = _mm_div_ps(zmm2, zmm7)
        zmm8 = arg3[1].d
        zmm13 = _mm_cvttps_epi32(zmm1)
        zmm1 = _mm_cvttps_epi32(zmm2)
        uint128_t var_2d8_4 = zmm6
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), temp0_1130), zmm6)
        zmm6 = zmm1
        zmm2 = __divps_xmmps_memps(*arg3 | zmm8[0].q << 0x40, data_142fc9600)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
        uint128_t var_2e8_4 = zmm1
        float var_298_4[0x4] = zmm9
        zmm4 = _mm_cmpeq_ps(_mm_add_ps(zmm4, zmm1), zmm9, 1)
        zmm5 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
        zmm1 = _mm_and_ps(zmm13, zmm4)
        zmm4 = _mm_or_ps(_mm_andnot_ps(zmm4, zmm5), zmm1)
        uint128_t var_2b8_4 = zmm7
        uint128_t var_2c8_4 = zmm3
        float temp0_1150[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), zmm7), zmm3)
        float temp0_1151[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_1152[0x4] = _mm_add_ps(temp0_1150, temp0_1151)
        float temp0_1153[0x4] = _mm_cmpeq_ps(temp0_1152, zmm12, 1)
        char temp0_1155 = _mm_movemask_ps(_mm_and_ps(temp0_1153, zmm0))
        zmm1 = arg1[1].d
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm3 = _mm_sub_ps(temp0_1055, zmm1)
        float temp0_1158[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm10 = _mm_cvttps_epi32(_mm_div_ps(zmm3, temp0_1158))
        zmm3 = zmm12
        uint128_t var_318_4 = zmm10
        zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_1158), zmm1)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        var_3e8 = zmm4
        zmm7 = _mm_cmpeq_ps(temp0_1152, zmm3, 5)
        
        if (temp0_1155 != 0)
            zmm13 = zmm6
        
        uint128_t var_2a8_4 = zmm3
        zmm3 = __subps_xmmps_memps(zmm3, var_2f8_4)
        zmm14 = _mm_mul_ps(zmm14, zmm14)
        zmm12 = _mm_add_ps(zmm12, zmm2)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm7, zmm0)) != 0)
            zmm5 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
        
        zmm7 = __subps_xmmps_memps(temp0_1055, var_368_7)
        zmm14 = _mm_add_ps(zmm14, zx.o(0))
        zmm3 = _mm_mul_ps(zmm3, zmm3)
        zmm6 = _mm_and_ps(zmm13, temp0_1153)
        zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_1153, zmm5), zmm6)
        var_3d8 = zmm9
        zmm10 = _mm_cmpeq_ps(zmm12, temp0_1055, 5)
        zmm12 = _mm_cmpeq_ps(zmm12, temp0_1055, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm0)) != 0)
            zmm13 = var_318_4
        
        zmm14 = _mm_add_ps(zmm14, zmm3)
        zmm7 = _mm_mul_ps(zmm7, zmm7)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm0)) != 0)
            zmm5 = __paddd_xmmdq_memdq(var_318_4, data_142d3f800)
        
        int32_t var_368_8[0x4] = _mm_add_ps(zmm14, zmm7)
        zmm13 = _mm_and_ps(zmm13, zmm12)
        zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm5), zmm13)
        zmm10 = temp0_1130
        zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm10), var_2d8_4)
        float temp0_1196[0x4] =
            __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), var_2b8_4), var_2c8_4)
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_1158), zmm1)
        zmm1 = _mm_add_ps(var_2e8_4, zmm3)
        float temp0_1201[0x4] = _mm_add_ps(temp0_1151, temp0_1196)
        zmm2 = _mm_add_ps(zmm2, zmm6)
        zmm3 = _mm_sub_ps(var_298_4, zmm1)
        float temp0_1204[0x4] = _mm_sub_ps(var_2a8_4, temp0_1201)
        float temp0_1205[0x4] = _mm_sub_ps(temp0_1055, zmm2)
        zmm3 = _mm_div_ps(zmm3, zmm10)
        float temp0_1207[0x4] = _mm_div_ps(temp0_1204, var_2b8_4)
        float temp0_1208[0x4] = _mm_div_ps(temp0_1205, temp0_1158)
        var_3a8 = zmm3
        int64_t rcx_40 = 0
        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
        
        while (true)
            zmm4 = _mm_cmpeq_epi32(zmm4, zmm1)
            
            if (_mm_movemask_ps(zmm4 & zmm0) != 0)
                char temp0_1212 = _mm_movemask_ps(zmm4)
                
                if ((temp0_1212 & 1) == 0)
                    if ((temp0_1212 & 2) != 0)
                        goto label_1400ca6cf
                    
                    goto label_1400ca60f
                
                *(&var_3e8 + (rcx_40 << 2)) = 0
                
                if ((temp0_1212 & 2) != 0)
                label_1400ca6cf:
                    *(&var_3e8:4 + (rcx_40 << 2)) = 0
                    
                    if ((temp0_1212 & 4) == 0)
                        goto label_1400ca617
                    
                    goto label_1400ca6df
                
            label_1400ca60f:
                
                if ((temp0_1212 & 4) == 0)
                label_1400ca617:
                    
                    if ((temp0_1212 & 8) != 0)
                        goto label_1400ca6ef
                    
                    goto label_1400ca61f
                
            label_1400ca6df:
                *(&var_3e8:8 + (rcx_40 << 2)) = 0
                
                if ((temp0_1212 & 8) != 0)
                label_1400ca6ef:
                    *(&var_3e8:0xc + (rcx_40 << 2)) = 0
                    
                    if ((temp0_1212 & 1) == 0)
                        goto label_1400ca627
                    
                    goto label_1400ca6ff
                
            label_1400ca61f:
                
                if ((temp0_1212 & 1) == 0)
                label_1400ca627:
                    
                    if ((temp0_1212 & 2) != 0)
                        goto label_1400ca70f
                    
                    goto label_1400ca62f
                
            label_1400ca6ff:
                *(&var_3a8 + (rcx_40 << 2)) = 0
                
                if ((temp0_1212 & 2) != 0)
                label_1400ca70f:
                    *(&var_3a8:4 + (rcx_40 << 2)) = 0
                    
                    if ((temp0_1212 & 4) == 0)
                        goto label_1400ca637
                    
                    goto label_1400ca71f
                
            label_1400ca62f:
                
                if ((temp0_1212 & 4) != 0)
                label_1400ca71f:
                    *(&var_3a8:8 + (rcx_40 << 2)) = 0
                    
                    if ((temp0_1212 & 8) != 0)
                        *(&var_3a8:0xc + (rcx_40 << 2)) = 0
                else
                label_1400ca637:
                    
                    if ((temp0_1212 & 8) != 0)
                        *(&var_3a8:0xc + (rcx_40 << 2)) = 0
            
            int32_t rdx_25 = *(arg4 + rcx_40)
            zmm2 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_25 - 1), 0), 
                *(&var_3e8 + (rcx_40 << 2)))
            
            if (_mm_movemask_ps(zmm2 & zmm0) != 0)
                char temp0_1216 = _mm_movemask_ps(zmm2)
                
                if ((temp0_1216 & 1) == 0)
                    if ((temp0_1216 & 2) != 0)
                        goto label_1400ca74b
                    
                    goto label_1400ca67d
                
                *(&var_3e8 + (rcx_40 << 2)) = rdx_25 - 2
                
                if ((temp0_1216 & 2) != 0)
                label_1400ca74b:
                    *(&var_3e8:4 + (rcx_40 << 2)) = rdx_25 - 2
                    
                    if ((temp0_1216 & 4) == 0)
                        goto label_1400ca685
                    
                    goto label_1400ca757
                
            label_1400ca67d:
                
                if ((temp0_1216 & 4) == 0)
                label_1400ca685:
                    
                    if ((temp0_1216 & 8) != 0)
                        goto label_1400ca763
                    
                    goto label_1400ca68d
                
            label_1400ca757:
                *(&var_3e8:8 + (rcx_40 << 2)) = rdx_25 - 2
                
                if ((temp0_1216 & 8) != 0)
                label_1400ca763:
                    *(&var_3e8:0xc + (rcx_40 << 2)) = rdx_25 - 2
                    
                    if ((temp0_1216 & 1) == 0)
                        goto label_1400ca695
                    
                    goto label_1400ca76f
                
            label_1400ca68d:
                
                if ((temp0_1216 & 1) == 0)
                label_1400ca695:
                    
                    if ((temp0_1216 & 2) != 0)
                        goto label_1400ca77f
                    
                    goto label_1400ca69d
                
            label_1400ca76f:
                *(&var_3a8 + (rcx_40 << 2)) = 0x3f800000
                
                if ((temp0_1216 & 2) != 0)
                label_1400ca77f:
                    *(&var_3a8:4 + (rcx_40 << 2)) = 0x3f800000
                    
                    if ((temp0_1216 & 4) == 0)
                        goto label_1400ca6a5
                    
                    goto label_1400ca78f
                
            label_1400ca69d:
                
                if ((temp0_1216 & 4) != 0)
                label_1400ca78f:
                    *(&var_3a8:8 + (rcx_40 << 2)) = 0x3f800000
                    
                    if ((temp0_1216 & 8) != 0)
                        *(&var_3a8:0xc + (rcx_40 << 2)) = 0x3f800000
                else
                label_1400ca6a5:
                    
                    if ((temp0_1216 & 8) != 0)
                        *(&var_3a8:0xc + (rcx_40 << 2)) = 0x3f800000
            
            if (rcx_40 == 8)
                break
            
            zmm4 = *(&var_3d8 + (rcx_40 << 2))
            rcx_40 += 4
        
        zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm7 = var_3e8
        zmm5 = var_3d8
        zmm10 = zmm12
        zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
        zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm3.q)
        zmm3 = _mm_add_epi32(zmm2, zmm5)
        uint128_t temp0_1225 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        int32_t temp0_1231[0x4] = _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(zmm3, temp0_1225), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), temp0_1225), 0xe8).q)
        zmm1 = _mm_add_epi32(temp0_1231, zmm10)
        float (* rax_189)[0x4] = *(arg5 + 0x10)
        zmm1 = _mm_slli_epi32(zmm1, 2) & zmm0
        int64_t rdx_27 = sx.q(zmm1.d)
        zmm15 = *(rax_189 + rdx_27)
        int64_t rdx_29 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
        float temp0_1235[0x4] = _mm_unpacklo_ps(zmm15, (*(rax_189 + rdx_29)).q)
        int64_t rbx_17 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
        zmm4 = *(rax_189 + rbx_17)
        int64_t rbx_19 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
        zmm4 = _mm_unpacklo_ps(zmm4, (*(rax_189 + rbx_19)).q)
        zmm15 = temp0_1235[0].q | zmm4.q << 0x40
        zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
        zmm7 = _mm_sub_epi32(zmm7, zmm13)
        zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
        int32_t temp0_1246[0x4] =
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), zmm1.q)
        zmm1 = _mm_add_epi32(temp0_1246, zmm5)
        zmm4 = _mm_shuffle_epi32(zmm1, 0xf5)
        zmm7 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, temp0_1225), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm4, temp0_1225), 0xe8).q), 
                zmm10), 
            2)
        zmm3 = _mm_add_epi32(zmm3, zmm8)
        zmm1 = _mm_shuffle_epi32(zmm3, 0xf5)
        zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, temp0_1225), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm1, temp0_1225), 0xe8).q)
        zmm7 &= zmm0
        zmm1 = _mm_sub_ps(
            _mm_unpacklo_ps(*(rax_189 + sx.q(zmm7.d)), 
                (*(rax_189 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rax_189 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d)), 
                (*(rax_189 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7).d))).q).q << 0x40, 
            zmm15)
        zmm11 = var_3a8
        zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm11), zmm15)
        zmm5 = _mm_sub_epi32(zmm5, zmm13)
        zmm2 = _mm_add_epi32(zmm2, zmm5)
        zmm3 = _mm_shuffle_epi32(zmm2, 0xf5)
        zmm4 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, temp0_1225), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm3, temp0_1225), 0xe8).q), 
                zmm10), 
            2) & zmm0
        zmm2 = _mm_unpacklo_ps(*(rax_189 + sx.q(zmm4.d)), 
            (*(rax_189 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q).q | _mm_unpacklo_ps(
            *(rax_189 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
            (*(rax_189 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q).q << 0x40
        zmm5 = _mm_add_epi32(zmm5, temp0_1246)
        zmm3 = _mm_shuffle_epi32(zmm5, 0xf5)
        zmm4 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, temp0_1225), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm3, temp0_1225), 0xe8).q), 
                zmm10), 
            2) & zmm0
        float temp0_1296[0x4] = _mm_unpacklo_ps(*(rax_189 + sx.q(zmm4.d)), 
            (*(rax_189 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q)
        zmm3 = _mm_unpacklo_ps(*(rax_189 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
            (*(rax_189 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q)
        float temp0_1302[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1296[0].q | zmm3.q << 0x40, zmm2), zmm11), zmm2)
        zmm3 = _mm_unpacklo_ps(*(r14_2 + rax_189 + rdx_27), (*(r15_2 + rax_189 + rdx_29)).q).q
            | _mm_unpacklo_ps(*(r13_2 + rax_189 + rbx_17), (*(rbp_49 + rax_189 + rbx_19)).q).q
            << 0x40
        zmm6 = _mm_add_epi32(temp0_1225, zmm10)
        int32_t temp0_1306[0x4] = _mm_add_epi32(temp0_1231, zmm6)
        zmm6 = _mm_add_epi32(zmm6, zmm8)
        zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2) & zmm0
        zmm4 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r14_2 + sx.q(zmm8[0]) + rax_189), 
                        (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5).d) + rax_189)).q).q |
                        _mm_unpacklo_ps(*(r13_2 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) + rax_189), 
                        (*(rbp_49 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7).d) + rax_189)).q).q << 0x40, 
                    zmm3), 
                zmm11), 
            zmm3)
        zmm14 = _mm_slli_epi32(temp0_1306, 2) & zmm0
        zmm3 = _mm_unpacklo_ps(*(r14_2 + sx.q(zmm14[0]) + rax_189), 
            (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rax_189)).q).q | _mm_unpacklo_ps(
            *(r13_2 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rax_189), 
            (*(rbp_49 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7).d) + rax_189)).q).q << 0x40
        zmm6 = _mm_slli_epi32(zmm6, 2) & zmm0
        zmm2 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r14_2 + sx.q(zmm6.d) + rax_189), 
                        (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5).d) + rax_189)).q).q |
                        _mm_unpacklo_ps(*(r13_2 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e).d) + rax_189), 
                        (*(rbp_49 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7).d) + rax_189)).q).q << 0x40, 
                    zmm3), 
                zmm11), 
            zmm3)
        float temp0_1335[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1302, zmm1), temp0_1207), zmm1)
        zmm2 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm2, zmm4), temp0_1207), zmm4), 
                    temp0_1335), 
                temp0_1208), 
            temp0_1335)
        zmm5 = var_368_8
        zmm3 = _mm_cmpeq_ps(zmm5, zx.o(0), 4)
        zmm1 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm5, 7), zmm3), zmm0)
        
        if (_mm_movemask_ps(zmm1) != 0)
            zmm3 = _mm_rsqrt_ps(zmm5)
            float temp0_1349[0x4] = _mm_mul_ps(_mm_mul_ps(zmm5, zmm3), zmm3)
            zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_1349), zmm3), 
                data_142d3f640)
            zmm3 = _mm_rcp_ps(zmm4)
            zmm4 = _mm_mul_ps(zmm4, zmm3)
            zmm5 = _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), zmm3), zmm2), 
                zmm1)
            zmm2 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm2), zmm5)
        
        rcx = arg10
        rdx_9 = arg11
        zmm3 = var_248_1
        zmm9 = var_328_3
        zmm10 = var_338_3
        zmm11 = var_348_3
        zmm1 = arg9
        zmm2 = _mm_sub_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0))
        zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm2, data_142fc95d0, 1), zmm0)
        result = _mm_movemask_ps(zmm1)
        
        if (result.b != 0)
            zmm7 = _mm_mul_ps(var_1e8, zmm2)
            zmm6 = _mm_mul_ps(var_1d8, zmm2)
            float temp0_1368[0x4] = _mm_mul_ps(var_1c8_1, zmm2)
            result = zx.d(result.b)
            zmm4 = zmm10
            char temp2_1 = result.b & 1
            
            if (temp2_1 == 0)
                zmm0 = zmm9
                
                if (temp2_1 != 0)
                    goto label_1400caf8b
                
                goto label_1400cacf7
            
            zmm4.d = zmm10.d f+ zmm7.d
            zmm0 = zmm9
            
            if (temp2_1 != 0)
            label_1400caf8b:
                zmm0.d = zmm9.d f+ zmm6.d
                zmm8 = zmm11
                
                if (temp2_1 == 0)
                    goto label_1400cad01
                
                goto label_1400caf99
            
        label_1400cacf7:
            zmm8 = zmm11
            bool cond:28_1
            bool cond:29_1
            bool cond:32_1
            bool cond:33_1
            
            if (temp2_1 == 0)
            label_1400cad01:
                zmm10 = _mm_add_ps(zmm10, zmm7)
                char temp9_1 = result.b & 2
                cond:28_1 = temp9_1 != 0
                cond:29_1 = temp9_1 == 0
                cond:32_1 = temp9_1 == 0
                cond:33_1 = temp9_1 != 0
                
                if (temp9_1 != 0)
                    goto label_1400cafba
                
                goto label_1400cad0d
            
        label_1400caf99:
            zmm8 = zmm11
            zmm8[0] = zmm8[0] + temp0_1368[0]
            zmm10 = _mm_add_ps(zmm10, zmm7)
            char temp8_1 = result.b & 2
            cond:28_1 = temp8_1 != 0
            cond:29_1 = temp8_1 == 0
            cond:32_1 = temp8_1 == 0
            cond:33_1 = temp8_1 != 0
            
            if (temp8_1 != 0)
            label_1400cafba:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4, 1), zmm4, 0xe2)
                zmm9 = _mm_add_ps(zmm9, zmm6)
                
                if (cond:29_1)
                    goto label_1400cad17
                
                goto label_1400cafd3
            
        label_1400cad0d:
            zmm9 = _mm_add_ps(zmm9, zmm6)
            
            if (not(cond:28_1))
            label_1400cad17:
                zmm11 = _mm_add_ps(zmm11, temp0_1368)
                
                if (cond:33_1)
                    goto label_1400cafee
                
                goto label_1400cad21
            
        label_1400cafd3:
            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm0, 1), zmm0, 0xe2)
            zmm11 = _mm_add_ps(zmm11, temp0_1368)
            bool cond:44_1
            bool cond:45_1
            bool cond:48_1
            bool cond:49_1
            
            if (not(cond:32_1))
            label_1400cafee:
                zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm8, 1), zmm8, 0xe2)
                char temp17_1 = result.b & 4
                cond:44_1 = temp17_1 == 0
                cond:45_1 = temp17_1 != 0
                cond:48_1 = temp17_1 != 0
                cond:49_1 = temp17_1 == 0
                
                if (temp17_1 == 0)
                    goto label_1400cad29
                
                goto label_1400cb002
            
        label_1400cad21:
            char temp16_1 = result.b & 4
            cond:44_1 = temp16_1 == 0
            cond:45_1 = temp16_1 != 0
            cond:48_1 = temp16_1 != 0
            cond:49_1 = temp16_1 == 0
            
            if (temp16_1 != 0)
            label_1400cb002:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm10, zmm4, 0x32), 0x84)
                
                if (not(cond:44_1))
                label_1400cb014:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x32), 0x84)
                    
                    if (cond:49_1)
                        goto label_1400cad35
                    
                    goto label_1400cb027
            else
            label_1400cad29:
                
                if (cond:45_1)
                    goto label_1400cb014
            
            bool cond:60_1
            bool cond:61_1
            bool cond:64_1
            bool cond:65_1
            
            if (not(cond:48_1))
            label_1400cad35:
                char temp25_1 = result.b & 8
                cond:60_1 = temp25_1 != 0
                cond:61_1 = temp25_1 == 0
                cond:64_1 = temp25_1 != 0
                cond:65_1 = temp25_1 == 0
                
                if (temp25_1 != 0)
                    goto label_1400cb03e
                
                goto label_1400cad3d
            
        label_1400cb027:
            zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x32), 0x84)
            char temp24_1 = result.b & 8
            cond:60_1 = temp24_1 != 0
            cond:61_1 = temp24_1 == 0
            cond:64_1 = temp24_1 != 0
            cond:65_1 = temp24_1 == 0
            
            if (temp24_1 != 0)
            label_1400cb03e:
                zmm10 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm10, zmm4, 0x23), 0x24)
                
                if (cond:61_1)
                    goto label_1400cad47
                
                goto label_1400cb052
            
        label_1400cad3d:
            zmm10 = zmm4
            
            if (cond:60_1)
            label_1400cb052:
                zmm9 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x23), 0x24)
                
                if (cond:64_1)
                    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x23), 0x24)
            else
            label_1400cad47:
                zmm9 = zmm0
                
                if (not(cond:65_1))
                    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x23), 0x24)
            
            zmm0 = var_358_2
            zmm2 = _mm_and_ps(_mm_add_ps(zmm2, zmm0), zmm1)
            zmm11 = zmm8
            var_358_2 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm2)
    else
    label_1400c8f2a:
        rcx = arg10
        rdx_9 = arg11
        zmm3 = var_248_1
    
    zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0))
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
    zmm2 = _mm_add_ps(*rdx_9 | rdx_9[1].d.q << 0x40, zmm0.q | zmm1.q << 0x40)
    *rdx_9 = zmm2.d
    zmm0.q = zmm2 u>> 0x40
    *(rdx_9 + 4) = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
    rdx_9[1].d = zmm0.d
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
    int32_t i_1 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
    uint128_t var_358_1
    int64_t* rdx_8
    uint64_t rdx
    
    if (i_1 s<= 0)
        rdx = 0
        zmm10 = zx.o(0)
        zmm8 = zx.o(0)
        zmm9 = zx.o(0)
        var_358_1 = zx.o(0)
        
        if (0 s< arg12)
        label_1400c7f0a:
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx.d), 0), data_142e11d00)
            zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg12), 0), zmm1)
            int64_t rax_71 = sx.q(rdx.d << 2)
            uint32_t temp0_343 = _mm_movemask_ps(zmm0)
            float var_328_1[0x4] = zmm8
            float var_338_1[0x4] = zmm9
            uint128_t var_348_1 = zmm10
            
            if ((zx.q(temp0_343) & 0xfffffff9) != 9)
                if ((temp0_343.b & 1) != 0)
                    var_3e8.d = *(arg8 + rax_71)
                
                if ((temp0_343.b & 2) == 0)
                    if ((temp0_343.b & 4) != 0)
                        goto label_1400cb078
                    
                    goto label_1400c8f66
                
                var_3e8:4.d = *(arg8 + rax_71 + 4)
                
                if ((temp0_343.b & 4) == 0)
                label_1400c8f66:
                    
                    if ((temp0_343.b & 8) != 0)
                        var_3e8:0xc.d = *(arg8 + rax_71 + 0xc)
                else
                label_1400cb078:
                    var_3e8:8.d = *(arg8 + rax_71 + 8)
                    
                    if ((temp0_343.b & 8) != 0)
                        var_3e8:0xc.d = *(arg8 + rax_71 + 0xc)
                
                zmm1 = var_3e8
            else
                zmm1 = *(arg8 + rax_71)
            
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
            int64_t rdx_10 = sx.q(zmm2.d)
            int64_t rax_145 = arg7 + (rdx_10 << 2)
            zmm1 = *(arg7 + (rdx_10 << 2))
            int64_t rbp_12 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
            int64_t rdx_12 = arg7 + (rbp_12 << 2)
            zmm1 = _mm_unpacklo_ps(zmm1, (*(arg7 + (rbp_12 << 2))).q)
            int64_t rbp_14 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
            int64_t rbx_15 = arg7 + (rbp_14 << 2)
            zmm3 = *(arg7 + (rbp_14 << 2))
            int64_t rdi_7 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
            int64_t rbp_16 = arg7 + (rdi_7 << 2)
            zmm1 = zmm1.q | _mm_unpacklo_ps(zmm3, (*(arg7 + (rdi_7 << 2))).q).q << 0x40
            zmm3 = data_142fc95e0 & zmm0
            uint128_t* r14_1 = zx.q(zmm3.d)
            zmm8 = *(r14_1 + rax_145)
            uint128_t* r15_1 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d)
            float temp0_692[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_1 + rdx_12)).q)
            uint128_t* r13_1 = zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
            zmm4 = *(r13_1 + rbx_15)
            uint128_t* r10_8 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
            zmm4 = _mm_unpacklo_ps(zmm4, (*(r10_8 + rbp_16)).q)
            zmm8 = temp0_692[0].q | zmm4.q << 0x40
            zmm3 = data_142fc95f0 & zmm0
            zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_145), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d) + rdx_12)).q).q | _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) + rbx_15), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_16)).q).q << 0x40
            uint128_t var_228_1 = zmm1
            uint128_t var_208_1 = zmm6
            float var_1f8_1[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            float temp0_701[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_3e8 = temp0_701
            var_3d8 = temp0_701
            zmm7 = *arg6
            zmm2 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_704[0x4] = _mm_mul_ps(zmm8, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm2)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm2 = _mm_mul_ps(zmm2, zmm1)
            zmm1 = _mm_mul_ps(zmm1, zmm4)
            zmm3 = _mm_mul_ps(zx.o(0), temp0_701)
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, zmm8))
            zmm1 = _mm_sub_ps(zmm1, zmm7)
            float temp0_714[0x4] = _mm_sub_ps(temp0_704, zmm2)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            zmm1 = _mm_add_ps(zmm1, zmm1)
            float temp0_718[0x4] = _mm_add_ps(temp0_714, temp0_714)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_3a8 = zmm6
            uint128_t var_398_5 = zmm1
            float var_388_5[0x4] = temp0_718
            uint128_t var_378_3 = zmm3
            zmm3 = _mm_mul_ps(zmm3, temp0_701)
            zmm2 = _mm_mul_ps(temp0_701, zmm6)
            float temp0_722[0x4] = _mm_mul_ps(temp0_701, zmm1)
            zmm10 = _mm_mul_ps(temp0_701, temp0_718)
            zmm2 = __addps_xmmps_memps(zmm2, var_228_1)
            float temp0_725[0x4] = __addps_xmmps_memps(temp0_722, zmm8)
            zmm10 = __addps_xmmps_memps(zmm10, var_208_1)
            float var_3b8_3[0x4] = temp0_701
            uint128_t var_128_1 = zmm2
            float var_118_1[0x4] = temp0_725
            uint128_t var_108_1 = zmm10
            uint128_t var_f8_1 = __addps_xmmps_memps(zmm3, var_1f8_1)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            float temp0_728[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm1, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_718)
            float temp0_732[0x4] = _mm_mul_ps(temp0_718, temp0_728)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_734[0x4] = _mm_mul_ps(temp0_728, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            float temp0_737[0x4] = _mm_sub_ps(temp0_732, _mm_mul_ps(zmm7, zmm1))
            zmm6 = _mm_sub_ps(zmm6, zmm4)
            zmm3 = _mm_sub_ps(zmm3, temp0_734)
            float temp0_740[0x4] = _mm_add_ps(temp0_737, zmm2)
            zmm6 = _mm_add_ps(zmm6, temp0_725)
            zmm3 = _mm_add_ps(zmm3, zmm10)
            zmm1 = arg6[1].d
            zmm2 = *(arg6 + 0x14)
            zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_740)
            zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm2 = *(arg6 + 0x18)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
            uint128_t var_188 = zmm1
            uint128_t var_2f8_3 = zmm4
            uint128_t var_178 = zmm4
            uint128_t var_368_5 = zmm2
            uint128_t var_168_1 = zmm2
            int64_t rdx_13 = 0
            zmm2 = zmm1
            
            while (true)
                zmm4 = *(&var_258 + rdx_13)
                zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_750[0x4] = _mm_cmpeq_ps(zmm3, zmm2, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_750, zmm0)) != 0)
                    char temp0_753 = _mm_movemask_ps(temp0_750)
                    
                    if ((temp0_753 & 1) == 0)
                        if ((temp0_753 & 2) != 0)
                            goto label_1400c935d
                        
                        goto label_1400c9283
                    
                    *(&var_3e8 + (rdx_13 << 2)) = zmm4.d
                    
                    if ((temp0_753 & 2) != 0)
                    label_1400c935d:
                        *(&var_3e8:4 + (rdx_13 << 2)) = zmm4.d
                        
                        if ((temp0_753 & 4) == 0)
                            goto label_1400c928b
                        
                        goto label_1400c936b
                    
                label_1400c9283:
                    
                    if ((temp0_753 & 4) != 0)
                    label_1400c936b:
                        *(&var_3e8:8 + (rdx_13 << 2)) = zmm4.d
                        
                        if ((temp0_753 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_13 << 2)) = zmm4.d
                    else
                    label_1400c928b:
                        
                        if ((temp0_753 & 8) != 0)
                            *(&var_3e8:0xc + (rdx_13 << 2)) = zmm4.d
                
                zmm3 = _mm_cmpeq_ps(zmm3, zmm2, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                    zmm5 = *(&var_268 + rdx_13)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm2, zmm4, 1), zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm0)) != 0)
                        char temp0_762 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_762 & 1) == 0)
                            if ((temp0_762 & 2) != 0)
                                goto label_1400c938b
                            
                            goto label_1400c92e4
                        
                        *(&var_3e8 + (rdx_13 << 2)) = zmm5[0]
                        
                        if ((temp0_762 & 2) != 0)
                        label_1400c938b:
                            *(&var_3e8:4 + (rdx_13 << 2)) = zmm5[0]
                            
                            if ((temp0_762 & 4) == 0)
                                goto label_1400c92ec
                            
                            goto label_1400c9399
                        
                    label_1400c92e4:
                        
                        if ((temp0_762 & 4) != 0)
                        label_1400c9399:
                            *(&var_3e8:8 + (rdx_13 << 2)) = zmm5[0]
                            
                            if ((temp0_762 & 8) != 0)
                                *(&var_3e8:0xc + (rdx_13 << 2)) = zmm5[0]
                        else
                        label_1400c92ec:
                            
                            if ((temp0_762 & 8) != 0)
                                *(&var_3e8:0xc + (rdx_13 << 2)) = zmm5[0]
                    
                    zmm2 = _mm_and_ps(_mm_cmpeq_ps(zmm2, zmm4, 5), zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm0)) != 0)
                        zmm3 = *(&var_188 + (rdx_13 << 2))
                        char temp0_767 = _mm_movemask_ps(zmm2)
                        
                        if ((temp0_767 & 1) == 0)
                            if ((temp0_767 & 2) != 0)
                                goto label_1400c93be
                            
                            goto label_1400c9326
                        
                        *(&var_3e8 + (rdx_13 << 2)) = zmm3.d
                        
                        if ((temp0_767 & 2) != 0)
                        label_1400c93be:
                            *(&var_3e8:4 + (rdx_13 << 2)) = _mm_shuffle_epi32(zmm3, 0xe5).d
                            
                            if ((temp0_767 & 4) == 0)
                                goto label_1400c932e
                            
                            goto label_1400c93d1
                        
                    label_1400c9326:
                        
                        if ((temp0_767 & 4) != 0)
                        label_1400c93d1:
                            *(&var_3e8:8 + (rdx_13 << 2)) = _mm_shuffle_epi32(zmm3, 0x4e).d
                            
                            if ((temp0_767 & 8) != 0)
                                *(&var_3e8:0xc + (rdx_13 << 2)) = _mm_shuffle_epi32(zmm3, 0xe7).d
                        else
                        label_1400c932e:
                            
                            if ((temp0_767 & 8) != 0)
                                *(&var_3e8:0xc + (rdx_13 << 2)) = _mm_shuffle_epi32(zmm3, 0xe7).d
                
                if (rdx_13 == 8)
                    break
                
                zmm2 = *(&var_178 + (rdx_13 << 2))
                rdx_13 += 4
            
            zmm10 = var_3e8
            zmm12 = var_3d8
            zmm6 = _mm_sub_ps(zmm10, zmm1)
            zmm3 = *arg1
            zmm7 = *(arg1 + 4)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1 = _mm_sub_ps(zmm10, zmm3)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm2 = _mm_sub_ps(zmm12, zmm7)
            zmm4 = *arg3
            zmm5 = *(arg3 + 4)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_div_ps(zmm1, zmm4)
            float temp0_778[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm2 = _mm_div_ps(zmm2, temp0_778)
            zmm8 = arg3[1].d
            zmm15 = _mm_cvttps_epi32(zmm1)
            zmm11 = _mm_cvttps_epi32(zmm2)
            uint128_t var_308_4 = zmm4
            uint128_t var_2d8_3 = zmm3
            zmm1 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm4), zmm3)
            zmm4 = __divps_xmmps_memps(*arg3 | zmm8[0].q << 0x40, data_142fc9600)
            zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0)
            uint128_t var_2e8_3 = zmm2
            uint128_t var_298_3 = zmm10
            zmm1 = _mm_cmpeq_ps(_mm_add_ps(zmm1, zmm2), zmm10, 1)
            zmm3 = _mm_add_epi32(zmm15, _mm_cmpeq_epi32(zmm2, zmm2))
            zmm2 = _mm_and_ps(zmm15, zmm1)
            zmm1 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm3), zmm2)
            zmm13 = zmm11
            uint128_t var_2c8_3 = zmm7
            zmm10 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), temp0_778), zmm7)
            float temp0_797[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            zmm10 = _mm_add_ps(zmm10, temp0_797)
            zmm2 = zmm10
            zmm10 = _mm_cmpeq_ps(zmm10, zmm12, 1)
            char temp0_801 = _mm_movemask_ps(_mm_and_ps(zmm10, zmm0))
            zmm5 = arg1[1].d
            float temp0_802[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm14 = temp0_701
            zmm7 = _mm_sub_ps(zmm14, temp0_802)
            float temp0_804[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm9 = _mm_cvttps_epi32(_mm_div_ps(zmm7, temp0_804))
            zmm7 = zmm12
            zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_804), temp0_802)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            var_3e8 = zmm1
            zmm2 = _mm_cmpeq_ps(zmm2, zmm7, 5)
            
            if (temp0_801 != 0)
                zmm15 = zmm13
            
            uint128_t var_2a8_3 = zmm7
            zmm7 = __subps_xmmps_memps(zmm7, var_2f8_3)
            zmm6 = _mm_mul_ps(zmm6, zmm6)
            zmm12 = _mm_add_ps(zmm12, zmm4)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm0)) != 0)
                zmm3 = __paddd_xmmdq_memdq(zmm13, data_142d3f800)
            
            zmm2 = __subps_xmmps_memps(zmm14, var_368_5)
            zmm6 = _mm_add_ps(zmm6, zx.o(0))
            zmm7 = _mm_mul_ps(zmm7, zmm7)
            zmm13 = zmm6
            zmm6 = _mm_and_ps(zmm15, zmm10)
            zmm10 = _mm_or_ps(_mm_andnot_ps(zmm10, zmm3), zmm6)
            var_3d8 = zmm10
            float temp0_824[0x4] = _mm_cmpeq_ps(zmm12, zmm14, 5)
            zmm12 = _mm_cmpeq_ps(zmm12, zmm14, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm0)) != 0)
                zmm15 = zmm9
            
            zmm13 = _mm_add_ps(zmm13, zmm7)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_824, zmm0)) != 0)
                zmm3 = __paddd_xmmdq_memdq(zmm9, data_142d3f800)
            
            zmm13 = _mm_add_ps(zmm13, zmm2)
            uint128_t var_368_6 = zmm13
            zmm15 = _mm_and_ps(zmm15, zmm12)
            zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm3), zmm15)
            zmm9 = var_308_4
            zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm9), var_2d8_3)
            zmm7 = temp0_778
            zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), zmm7), var_2c8_3)
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_804), temp0_802)
            float temp0_846[0x4] = _mm_add_ps(var_2e8_3, zmm2)
            float temp0_847[0x4] = _mm_add_ps(temp0_797, zmm3)
            zmm4 = _mm_add_ps(zmm4, zmm6)
            zmm2 = _mm_sub_ps(var_298_3, temp0_846)
            zmm3 = _mm_sub_ps(var_2a8_3, temp0_847)
            zmm14 = _mm_sub_ps(zmm14, zmm4)
            zmm2 = _mm_div_ps(zmm2, zmm9)
            zmm3 = _mm_div_ps(zmm3, zmm7)
            zmm14 = _mm_div_ps(zmm14, temp0_804)
            var_3a8 = zmm2
            uint128_t var_398_6 = zmm3
            int32_t var_388_6[0x4] = zmm14
            int64_t rcx_1 = 0
            zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
            
            while (true)
                zmm1 = _mm_cmpeq_epi32(zmm1, zmm2)
                
                if (_mm_movemask_ps(zmm1 & zmm0) != 0)
                    char temp0_858 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_858 & 1) == 0)
                        if ((temp0_858 & 2) != 0)
                            goto label_1400c977f
                        
                        goto label_1400c96bf
                    
                    *(&var_3e8 + (rcx_1 << 2)) = 0
                    
                    if ((temp0_858 & 2) != 0)
                    label_1400c977f:
                        *(&var_3e8:4 + (rcx_1 << 2)) = 0
                        
                        if ((temp0_858 & 4) == 0)
                            goto label_1400c96c7
                        
                        goto label_1400c978f
                    
                label_1400c96bf:
                    
                    if ((temp0_858 & 4) == 0)
                    label_1400c96c7:
                        
                        if ((temp0_858 & 8) != 0)
                            goto label_1400c979f
                        
                        goto label_1400c96cf
                    
                label_1400c978f:
                    *(&var_3e8:8 + (rcx_1 << 2)) = 0
                    
                    if ((temp0_858 & 8) != 0)
                    label_1400c979f:
                        *(&var_3e8:0xc + (rcx_1 << 2)) = 0
                        
                        if ((temp0_858 & 1) == 0)
                            goto label_1400c96d7
                        
                        goto label_1400c97af
                    
                label_1400c96cf:
                    
                    if ((temp0_858 & 1) == 0)
                    label_1400c96d7:
                        
                        if ((temp0_858 & 2) != 0)
                            goto label_1400c97bf
                        
                        goto label_1400c96df
                    
                label_1400c97af:
                    *(&var_3a8 + (rcx_1 << 2)) = 0
                    
                    if ((temp0_858 & 2) != 0)
                    label_1400c97bf:
                        *(&var_3a8:4 + (rcx_1 << 2)) = 0
                        
                        if ((temp0_858 & 4) == 0)
                            goto label_1400c96e7
                        
                        goto label_1400c97cf
                    
                label_1400c96df:
                    
                    if ((temp0_858 & 4) != 0)
                    label_1400c97cf:
                        *(&var_3a8:8 + (rcx_1 << 2)) = 0
                        
                        if ((temp0_858 & 8) != 0)
                            *(&var_3a8:0xc + (rcx_1 << 2)) = 0
                    else
                    label_1400c96e7:
                        
                        if ((temp0_858 & 8) != 0)
                            *(&var_3a8:0xc + (rcx_1 << 2)) = 0
                
                int32_t rdx_14 = *(arg4 + rcx_1)
                zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_14 - 1), 0), 
                    *(&var_3e8 + (rcx_1 << 2)))
                
                if (_mm_movemask_ps(zmm1 & zmm0) != 0)
                    char temp0_862 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_862 & 1) == 0)
                        if ((temp0_862 & 2) != 0)
                            goto label_1400c97fb
                        
                        goto label_1400c972d
                    
                    *(&var_3e8 + (rcx_1 << 2)) = rdx_14 - 2
                    
                    if ((temp0_862 & 2) != 0)
                    label_1400c97fb:
                        *(&var_3e8:4 + (rcx_1 << 2)) = rdx_14 - 2
                        
                        if ((temp0_862 & 4) == 0)
                            goto label_1400c9735
                        
                        goto label_1400c9807
                    
                label_1400c972d:
                    
                    if ((temp0_862 & 4) == 0)
                    label_1400c9735:
                        
                        if ((temp0_862 & 8) != 0)
                            goto label_1400c9813
                        
                        goto label_1400c973d
                    
                label_1400c9807:
                    *(&var_3e8:8 + (rcx_1 << 2)) = rdx_14 - 2
                    
                    if ((temp0_862 & 8) != 0)
                    label_1400c9813:
                        *(&var_3e8:0xc + (rcx_1 << 2)) = rdx_14 - 2
                        
                        if ((temp0_862 & 1) == 0)
                            goto label_1400c9745
                        
                        goto label_1400c981f
                    
                label_1400c973d:
                    
                    if ((temp0_862 & 1) == 0)
                    label_1400c9745:
                        
                        if ((temp0_862 & 2) != 0)
                            goto label_1400c982f
                        
                        goto label_1400c974d
                    
                label_1400c981f:
                    *(&var_3a8 + (rcx_1 << 2)) = 0x3f800000
                    
                    if ((temp0_862 & 2) != 0)
                    label_1400c982f:
                        *(&var_3a8:4 + (rcx_1 << 2)) = 0x3f800000
                        
                        if ((temp0_862 & 4) == 0)
                            goto label_1400c9755
                        
                        goto label_1400c983f
                    
                label_1400c974d:
                    
                    if ((temp0_862 & 4) != 0)
                    label_1400c983f:
                        *(&var_3a8:8 + (rcx_1 << 2)) = 0x3f800000
                        
                        if ((temp0_862 & 8) != 0)
                            *(&var_3a8:0xc + (rcx_1 << 2)) = 0x3f800000
                    else
                    label_1400c9755:
                        
                        if ((temp0_862 & 8) != 0)
                            *(&var_3a8:0xc + (rcx_1 << 2)) = 0x3f800000
                
                if (rcx_1 == 8)
                    break
                
                zmm1 = *(&var_3d8 + (rcx_1 << 2))
                rcx_1 += 4
            
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm7 = var_3e8
            zmm3 = var_3d8
            zmm9 = zmm12
            zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
            zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm2.q)
            zmm4 = _mm_add_epi32(zmm1, zmm3)
            zmm6 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            int32_t temp0_877[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm6), 0xe8).q)
            zmm5 = _mm_add_epi32(temp0_877, zmm9)
            float (* rax_165)[0x4] = *(arg5 + 0x10)
            zmm5 = _mm_slli_epi32(zmm5, 2) & zmm0
            int64_t rdx_16 = sx.q(zmm5[0])
            zmm15 = *(rax_165 + rdx_16)
            int64_t rdx_18 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d)
            float temp0_881[0x4] = _mm_unpacklo_ps(zmm15, (*(rax_165 + rdx_18)).q)
            int64_t rbp_17 = sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)
            zmm2 = *(rax_165 + rbp_17)
            int64_t rbp_19 = sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])
            zmm2 = _mm_unpacklo_ps(zmm2, (*(rax_165 + rbp_19))[0].q)
            zmm15 = temp0_881[0].q | zmm2.q << 0x40
            zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
            zmm7 = _mm_sub_epi32(zmm7, zmm13)
            zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
            int32_t temp0_892[0x4] =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), zmm2.q)
            zmm2 = _mm_add_epi32(temp0_892, zmm3)
            zmm5 = _mm_shuffle_epi32(zmm2, 0xf5)
            zmm7 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm6), 0xe8).q), 
                    zmm9), 
                2)
            zmm4 = _mm_add_epi32(zmm4, zmm8)
            zmm2 = _mm_shuffle_epi32(zmm4, 0xf5)
            zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8).q)
            zmm7 &= zmm0
            float temp0_910[0x4] = _mm_unpacklo_ps(*(rax_165 + sx.q(zmm7.d)), 
                (*(rax_165 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q)
            zmm2 = _mm_unpacklo_ps(*(rax_165 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d)), 
                (*(rax_165 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7).d))).q)
            float temp0_914[0x4] = _mm_sub_ps(temp0_910[0].q | zmm2.q << 0x40, zmm15)
            zmm11 = var_3a8
            float temp0_916[0x4] = _mm_add_ps(_mm_mul_ps(temp0_914, zmm11), zmm15)
            zmm3 = _mm_sub_epi32(zmm3, zmm13)
            zmm1 = _mm_add_epi32(zmm1, zmm3)
            zmm2 = _mm_shuffle_epi32(zmm1, 0xf5)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm6), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8).q), 
                    zmm9), 
                2) & zmm0
            zmm1 = _mm_unpacklo_ps(*(rax_165 + sx.q(zmm4.d)), 
                (*(rax_165 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rax_165 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
                (*(rax_165 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q).q << 0x40
            zmm3 = _mm_add_epi32(zmm3, temp0_892)
            zmm2 = _mm_shuffle_epi32(zmm3, 0xf5)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8).q), 
                    zmm9), 
                2) & zmm0
            zmm3 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rax_165 + sx.q(zmm4.d)), 
                            (*(rax_165 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q).q | _mm_unpacklo_ps(
                            *(rax_165 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
                            (*(rax_165 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q).q << 0x40, 
                        zmm1), 
                    zmm11), 
                zmm1)
            zmm4 = _mm_unpacklo_ps(*(r14_1 + rax_165 + rdx_16), (*(r15_1 + rax_165 + rdx_18)).q).q
                | _mm_unpacklo_ps(*(r13_1 + rax_165 + rbp_17), (*(r10_8 + rax_165 + rbp_19)).q).q
                << 0x40
            zmm6 = _mm_add_epi32(zmm6, zmm9)
            int32_t temp0_952[0x4] = _mm_add_epi32(temp0_877, zmm6)
            zmm6 = _mm_add_epi32(zmm6, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm9), 2) & zmm0
            zmm2 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(r14_1 + sx.q(zmm8[0]) + rax_165), 
                            (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5).d) + rax_165)).q).q |
                            _mm_unpacklo_ps(
                            *(r13_1 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) + rax_165), 
                            (*(r10_8 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7).d) + rax_165)).q).q << 0x40, 
                        zmm4), 
                    zmm11), 
                zmm4)
            zmm14 = _mm_slli_epi32(temp0_952, 2) & zmm0
            zmm4 = _mm_unpacklo_ps(*(r14_1 + sx.q(zmm14[0]) + rax_165), 
                (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rax_165)).q).q | _mm_unpacklo_ps(
                *(r13_1 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rax_165), 
                (*(r10_8 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7).d) + rax_165)).q).q << 0x40
            zmm6 = _mm_slli_epi32(zmm6, 2) & zmm0
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(r14_1 + sx.q(zmm6.d) + rax_165), 
                            (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5).d) + rax_165)).q).q |
                            _mm_unpacklo_ps(
                            *(r13_1 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e).d) + rax_165), 
                            (*(r10_8 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7).d) + rax_165)).q).q << 0x40, 
                        zmm4), 
                    zmm11), 
                zmm4)
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_916), var_398_6), temp0_916)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm2), var_398_6), zmm2), 
                        zmm3), 
                    var_388_6), 
                zmm3)
            zmm5 = var_368_6
            zmm3 = _mm_cmpeq_ps(zmm5, zx.o(0), 4)
            zmm2 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm5, 7), zmm3), zmm0)
            
            if (_mm_movemask_ps(zmm2) != 0)
                zmm3 = _mm_rsqrt_ps(zmm5)
                float temp0_995[0x4] = _mm_mul_ps(_mm_mul_ps(zmm5, zmm3), zmm3)
                zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_995), zmm3), 
                    data_142d3f640)
                zmm3 = _mm_rcp_ps(zmm4)
                zmm4 = _mm_mul_ps(zmm4, zmm3)
                zmm5 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), zmm3), zmm1), zmm2)
                zmm1 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm1), zmm5)
            
            rcx = arg10
            rdx_8 = arg11
            zmm8 = var_328_1
            zmm9 = var_338_1
            zmm10 = var_348_1
            zmm2 = arg9
            zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0))
            zmm2 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm0)
            result = _mm_movemask_ps(zmm2)
            
            if (result.b != 0)
                zmm7 = _mm_mul_ps(var_188, zmm1)
                zmm6 = _mm_mul_ps(var_178, zmm1)
                float temp0_1014[0x4] = _mm_mul_ps(var_168_1, zmm1)
                result = zx.d(result.b)
                zmm4 = zmm9
                char temp3_1 = result.b & 1
                
                if (temp3_1 == 0)
                    zmm3 = zmm8
                    
                    if (temp3_1 != 0)
                        goto label_1400caea5
                    
                    goto label_1400c9d9e
                
                zmm4.d = zmm9.d f+ zmm7.d
                zmm3 = zmm8
                
                if (temp3_1 != 0)
                label_1400caea5:
                    zmm3.d = zmm8.d f+ zmm6.d
                    zmm0 = zmm10
                    
                    if (temp3_1 == 0)
                        goto label_1400c9da8
                    
                    goto label_1400caeb7
                
            label_1400c9d9e:
                zmm0 = zmm10
                bool cond:30_1
                bool cond:31_1
                bool cond:36_1
                bool cond:37_1
                
                if (temp3_1 == 0)
                label_1400c9da8:
                    zmm9 = _mm_add_ps(zmm9, zmm7)
                    char temp11_1 = result.b & 2
                    cond:30_1 = temp11_1 != 0
                    cond:31_1 = temp11_1 == 0
                    cond:36_1 = temp11_1 == 0
                    cond:37_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_1400caed3
                    
                    goto label_1400c9db4
                
            label_1400caeb7:
                zmm0.d = zmm10.d f+ temp0_1014[0]
                zmm9 = _mm_add_ps(zmm9, zmm7)
                char temp10_1 = result.b & 2
                cond:30_1 = temp10_1 != 0
                cond:31_1 = temp10_1 == 0
                cond:36_1 = temp10_1 == 0
                cond:37_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                label_1400caed3:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4, 1), zmm4, 0xe2)
                    zmm8 = _mm_add_ps(zmm8, zmm6)
                    
                    if (cond:31_1)
                        goto label_1400c9dbe
                    
                    goto label_1400caeec
                
            label_1400c9db4:
                zmm8 = _mm_add_ps(zmm8, zmm6)
                
                if (not(cond:30_1))
                label_1400c9dbe:
                    zmm10 = _mm_add_ps(zmm10, temp0_1014)
                    
                    if (cond:37_1)
                        goto label_1400caf05
                    
                    goto label_1400c9dc8
                
            label_1400caeec:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm3, 1), zmm3, 0xe2)
                zmm10 = _mm_add_ps(zmm10, temp0_1014)
                bool cond:46_1
                bool cond:47_1
                bool cond:52_1
                bool cond:53_1
                
                if (not(cond:36_1))
                label_1400caf05:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm0, 1), zmm0, 0xe2)
                    char temp19_1 = result.b & 4
                    cond:46_1 = temp19_1 == 0
                    cond:47_1 = temp19_1 != 0
                    cond:52_1 = temp19_1 != 0
                    cond:53_1 = temp19_1 == 0
                    
                    if (temp19_1 == 0)
                        goto label_1400c9dd0
                    
                    goto label_1400caf18
                
            label_1400c9dc8:
                char temp18_1 = result.b & 4
                cond:46_1 = temp18_1 == 0
                cond:47_1 = temp18_1 != 0
                cond:52_1 = temp18_1 != 0
                cond:53_1 = temp18_1 == 0
                
                if (temp18_1 != 0)
                label_1400caf18:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x32), 0x84)
                    
                    if (not(cond:46_1))
                    label_1400caf2a:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x32), 0x84)
                        
                        if (cond:53_1)
                            goto label_1400c9ddc
                        
                        goto label_1400caf3c
                else
                label_1400c9dd0:
                    
                    if (cond:47_1)
                        goto label_1400caf2a
                
                bool cond:62_1
                bool cond:63_1
                bool cond:66_1
                bool cond:67_1
                
                if (not(cond:52_1))
                label_1400c9ddc:
                    char temp27_1 = result.b & 8
                    cond:62_1 = temp27_1 != 0
                    cond:63_1 = temp27_1 == 0
                    cond:66_1 = temp27_1 != 0
                    cond:67_1 = temp27_1 == 0
                    
                    if (temp27_1 != 0)
                        goto label_1400caf52
                    
                    goto label_1400c9de4
                
            label_1400caf3c:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm10, zmm0, 0x32), 0x84)
                char temp26_1 = result.b & 8
                cond:62_1 = temp26_1 != 0
                cond:63_1 = temp26_1 == 0
                cond:66_1 = temp26_1 != 0
                cond:67_1 = temp26_1 == 0
                
                if (temp26_1 != 0)
                label_1400caf52:
                    zmm9 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x23), 0x24)
                    
                    if (cond:63_1)
                        goto label_1400c9dee
                    
                    goto label_1400caf66
                
            label_1400c9de4:
                zmm9 = zmm4
                
                if (cond:62_1)
                label_1400caf66:
                    zmm8 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x23), 0x24)
                    
                    if (cond:66_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm10, zmm0, 0x23), 0x24)
                else
                label_1400c9dee:
                    zmm8 = zmm3
                    
                    if (not(cond:67_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm10, zmm0, 0x23), 0x24)
                
                zmm3 = var_358_1
                zmm1 = _mm_and_ps(_mm_add_ps(zmm1, zmm3), zmm2)
                zmm10 = zmm0
                var_358_1 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm3), zmm1)
        else
            rcx = arg10
            rdx_8 = arg11
    else
        zmm0 = arg9
        uint128_t var_238_1 = _mm_shuffle_ps(zmm0, zmm0, 0)
        rdx = 0
        __builtin_memset(&var_358_1, 0, 0x40)
        
        do
            zmm0 = *(arg8 + sx.q((rdx << 2).d))
            zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
            int64_t rax_4 = sx.q(zmm1.d)
            int64_t rbx_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
            int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
            int64_t rsi_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
            zmm1 = *(arg7 + (rsi_2 << 2) + 4)
            zmm2 = _mm_unpacklo_ps(*(arg7 + (rbp_2 << 2)), (*(arg7 + (rsi_2 << 2))).q)
            zmm0 = _mm_unpacklo_ps(*(arg7 + (rbp_2 << 2) + 4), zmm1.q)
            zmm4 = *(arg7 + (rax_4 << 2) + 4)
            zmm1 = _mm_unpacklo_ps(*(arg7 + (rax_4 << 2)), (*(arg7 + (rbx_2 << 2))).q).q
                | zmm2.q << 0x40
            zmm4 = _mm_unpacklo_ps(zmm4, (*(arg7 + (rbx_2 << 2) + 4)).q).q | zmm0.q << 0x40
            zmm2 = _mm_unpacklo_ps(*(arg7 + (rax_4 << 2) + 8), (*(arg7 + (rbx_2 << 2) + 8)).q).q
                | _mm_unpacklo_ps(*(arg7 + (rbp_2 << 2) + 8), (*(arg7 + (rsi_2 << 2) + 8)).q).q
                << 0x40
            var_3a8 = zmm1
            uint128_t var_388_1 = zmm2
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
            float temp0_40[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_41[0x4] = _mm_mul_ps(zmm2, temp0_40)
            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm3 = _mm_mul_ps(zmm1, zmm10)
            float temp0_44[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm7 = _mm_mul_ps(zmm4, temp0_44)
            float temp0_47[0x4] = _mm_sub_ps(temp0_41, _mm_mul_ps(zmm4, zmm10))
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm2, temp0_44))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_40))
            float temp0_52[0x4] = _mm_add_ps(temp0_47, temp0_47)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            zmm2 = _mm_mul_ps(zmm0, temp0_52)
            float temp0_56[0x4] = _mm_mul_ps(zmm0, zmm3)
            zmm2 = __addps_xmmps_memps(zmm2, var_3a8)
            float temp0_58[0x4] = __addps_xmmps_memps(temp0_56, zmm4)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), var_388_1)
            zmm6 = _mm_mul_ps(zmm7, temp0_40)
            zmm4 = _mm_mul_ps(temp0_52, zmm10)
            zmm1 = _mm_mul_ps(zmm3, temp0_44)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, zmm10)), zmm2)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(zmm7, temp0_44)), temp0_58)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_52, temp0_40)), zmm0)
            zmm2 = arg6[1].d
            zmm3 = *(arg6 + 0x14)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm4)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            uint128_t var_158 = zmm2
            uint128_t var_2d8_1 = zmm3
            uint128_t var_148 = zmm3
            uint128_t var_368_1 = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rbx_3 = 0
            uint128_t var_298_1 = zmm2
            zmm0 = zmm2
            
            while (true)
                zmm2 = *(&var_258 + rbx_3)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_81 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_81 != 0)
                    if ((temp0_81 & 1) == 0)
                        if ((temp0_81 & 2) != 0)
                            goto label_1400c74bd
                        
                        goto label_1400c73ed
                    
                    *(&var_3e8 + (rbx_3 << 2)) = zmm2.d
                    
                    if ((temp0_81 & 2) != 0)
                    label_1400c74bd:
                        *(&var_3e8:4 + (rbx_3 << 2)) = zmm2.d
                        
                        if ((temp0_81 & 4) == 0)
                            goto label_1400c73f5
                        
                        goto label_1400c74cb
                    
                label_1400c73ed:
                    
                    if ((temp0_81 & 4) != 0)
                    label_1400c74cb:
                        *(&var_3e8:8 + (rbx_3 << 2)) = zmm2.d
                        
                        if ((temp0_81 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_3 << 2)) = zmm2.d
                    else
                    label_1400c73f5:
                        
                        if ((temp0_81 & 8) != 0)
                            *(&var_3e8:0xc + (rbx_3 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_268 + rbx_3)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_87 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_87 != 0)
                        if ((temp0_87 & 1) == 0)
                            if ((temp0_87 & 2) != 0)
                                goto label_1400c74eb
                            
                            goto label_1400c7442
                        
                        *(&var_3e8 + (rbx_3 << 2)) = zmm3.d
                        
                        if ((temp0_87 & 2) != 0)
                        label_1400c74eb:
                            *(&var_3e8:4 + (rbx_3 << 2)) = zmm3.d
                            
                            if ((temp0_87 & 4) == 0)
                                goto label_1400c744a
                            
                            goto label_1400c74f9
                        
                    label_1400c7442:
                        
                        if ((temp0_87 & 4) != 0)
                        label_1400c74f9:
                            *(&var_3e8:8 + (rbx_3 << 2)) = zmm3.d
                            
                            if ((temp0_87 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_3 << 2)) = zmm3.d
                        else
                        label_1400c744a:
                            
                            if ((temp0_87 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_3 << 2)) = zmm3.d
                    
                    char temp0_90 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_90 != 0)
                        zmm0 = *(&var_158 + (rbx_3 << 2))
                        
                        if ((temp0_90 & 1) == 0)
                            if ((temp0_90 & 2) != 0)
                                goto label_1400c751e
                            
                            goto label_1400c747e
                        
                        *(&var_3e8 + (rbx_3 << 2)) = zmm0.d
                        
                        if ((temp0_90 & 2) != 0)
                        label_1400c751e:
                            *(&var_3e8:4 + (rbx_3 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_90 & 4) == 0)
                                goto label_1400c7486
                            
                            goto label_1400c7531
                        
                    label_1400c747e:
                        
                        if ((temp0_90 & 4) != 0)
                        label_1400c7531:
                            *(&var_3e8:8 + (rbx_3 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_90 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_3 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_1400c7486:
                            
                            if ((temp0_90 & 8) != 0)
                                *(&var_3e8:0xc + (rbx_3 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (rbx_3 == 8)
                    break
                
                zmm0 = *(&var_148 + (rbx_3 << 2))
                rbx_3 += 4
            
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
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_99[0x4] = _mm_sub_ps(zmm5, zmm7)
            zmm3 = *arg3
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_div_ps(zmm0, zmm3)
            zmm10 = _mm_cmpeq_epi32(zmm10, zmm10)
            zmm15 = arg3[1].d
            zmm12 = _mm_cvttps_epi32(zmm0)
            uint128_t var_308_1 = zmm3
            uint128_t var_2e8_1 = zmm2
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), zmm3), zmm2)
            zmm13 = __divps_xmmps_memps(*arg3 | zmm15[0].q << 0x40, data_142fc9600)
            float temp0_108[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm4 = _mm_cmpeq_ps(_mm_add_ps(zmm4, temp0_108), zmm8, 1)
            zmm14 = _mm_add_epi32(zmm12, zmm10)
            zmm0 = _mm_and_ps(zmm12, zmm4)
            zmm4 = _mm_or_ps(_mm_andnot_ps(zmm4, zmm14), zmm0)
            zmm10 = *(arg3 + 4)
            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm6 = _mm_div_ps(zmm6, zmm10)
            float temp0_117[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_118[0x4] = _mm_div_ps(temp0_99, temp0_117)
            zmm2 = _mm_cvttps_epi32(zmm6)
            zmm0 = _mm_cvttps_epi32(temp0_118)
            zmm6 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), zmm10)
            uint128_t var_318_1 = zmm0
            zmm3 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_117)
            uint128_t var_2c8_1 = zmm1
            zmm6 = _mm_add_ps(zmm6, zmm1)
            uint128_t var_2f8_1 = zmm7
            zmm3 = _mm_add_ps(zmm3, zmm7)
            zmm7 = zmm11
            float temp0_127[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            zmm6 = _mm_add_ps(zmm6, temp0_127)
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            var_3e8 = zmm4
            zmm0 = _mm_cmpeq_ps(zmm6, zmm7, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm12 = zmm2
            
            zmm3 = _mm_add_ps(zmm3, zmm13)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm6, zmm7, 5)) != 0)
                zmm14 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            float var_2a8_1[0x4] = zmm8
            float temp0_136[0x4] = __subps_xmmps_memps(zmm8, var_298_1)
            zmm2 = __subps_xmmps_memps(zmm7, var_2d8_1)
            zmm6 = _mm_and_ps(zmm12, zmm0)
            zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm14), zmm6)
            var_3d8 = zmm0
            zmm6 = zmm5
            float temp0_141[0x4] = _mm_cmpeq_ps(zmm3, zmm6, 1)
            
            if (_mm_movemask_ps(temp0_141) != 0)
                zmm12 = var_318_1
            
            zmm1 = __subps_xmmps_memps(zmm6, var_368_1)
            float temp0_144[0x4] = _mm_mul_ps(temp0_136, temp0_136)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, zmm6, 5)) != 0)
                zmm14 = __paddd_xmmdq_memdq(var_318_1, data_142d3f800)
            
            zmm12 = _mm_and_ps(zmm12, temp0_141)
            zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_141, zmm14), zmm12)
            float temp0_153[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_144, data_142d8f750), zmm2)
            zmm5 = var_308_1
            zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm5), var_2e8_1)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm0), zmm10), var_2c8_1)
            float var_3c8_2[0x4] = zmm8
            zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_117), var_2f8_1)
            float temp0_163[0x4] = _mm_add_ps(temp0_108, zmm2)
            float temp0_164[0x4] = _mm_add_ps(temp0_127, zmm0)
            zmm13 = _mm_add_ps(zmm13, zmm3)
            zmm0 = _mm_sub_ps(var_2a8_1, temp0_163)
            zmm7 = _mm_sub_ps(zmm7, temp0_164)
            zmm6 = _mm_sub_ps(zmm6, zmm13)
            zmm0 = _mm_div_ps(zmm0, zmm5)
            zmm7 = _mm_div_ps(zmm7, zmm10)
            zmm6 = _mm_div_ps(zmm6, temp0_117)
            var_3a8 = zmm0
            uint128_t var_398_2 = zmm7
            uint128_t var_388_2 = zmm6
            zmm1 = _mm_mul_ps(zmm1, zmm1)
            int64_t rbx_4 = 0
            zmm15 = _mm_cmpeq_epi32(temp0_117, temp0_117)
            char j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm15))
            
            if (j_1 == 0)
                goto label_1400c782d
            
            do
                if ((j_1 & 1) == 0)
                    if ((j_1 & 2) != 0)
                        goto label_1400c78bf
                    
                    goto label_1400c77f9
                
                *(&var_3e8 + (rbx_4 << 2)) = 0
                
                if ((j_1 & 2) != 0)
                label_1400c78bf:
                    *(&var_3e8:4 + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400c7801
                    
                    goto label_1400c78cf
                
            label_1400c77f9:
                
                if ((j_1 & 4) == 0)
                label_1400c7801:
                    
                    if ((j_1 & 8) != 0)
                        goto label_1400c78df
                    
                    goto label_1400c7809
                
            label_1400c78cf:
                *(&var_3e8:8 + (rbx_4 << 2)) = 0
                
                if ((j_1 & 8) != 0)
                label_1400c78df:
                    *(&var_3e8:0xc + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 1) == 0)
                        goto label_1400c7811
                    
                    goto label_1400c78ef
                
            label_1400c7809:
                
                if ((j_1 & 1) == 0)
                label_1400c7811:
                    
                    if ((j_1 & 2) != 0)
                        goto label_1400c78ff
                    
                    goto label_1400c7819
                
            label_1400c78ef:
                *(&var_3a8 + (rbx_4 << 2)) = 0
                
                if ((j_1 & 2) != 0)
                label_1400c78ff:
                    *(&var_3a8:4 + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400c7821
                    
                    goto label_1400c790f
                
            label_1400c7819:
                
                if ((j_1 & 4) != 0)
                label_1400c790f:
                    *(&var_3a8:8 + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 8) != 0)
                        *(&var_3a8:0xc + (rbx_4 << 2)) = 0
                else
                label_1400c7821:
                    
                    if ((j_1 & 8) != 0)
                        *(&var_3a8:0xc + (rbx_4 << 2)) = 0
                
            label_1400c782d:
                int32_t rbp_3 = *(arg4 + rbx_4)
                char temp0_180 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rbp_3 - 1), 0), *(&var_3e8 + (rbx_4 << 2))))
                
                if (temp0_180 != 0)
                    if ((temp0_180 & 1) == 0)
                        if ((temp0_180 & 2) != 0)
                            goto label_1400c793b
                        
                        goto label_1400c785f
                    
                    *(&var_3e8 + (rbx_4 << 2)) = rbp_3 - 2
                    
                    if ((temp0_180 & 2) != 0)
                    label_1400c793b:
                        *(&var_3e8:4 + (rbx_4 << 2)) = rbp_3 - 2
                        
                        if ((temp0_180 & 4) == 0)
                            goto label_1400c7867
                        
                        goto label_1400c7947
                    
                label_1400c785f:
                    
                    if ((temp0_180 & 4) == 0)
                    label_1400c7867:
                        
                        if ((temp0_180 & 8) != 0)
                            goto label_1400c7953
                        
                        goto label_1400c786f
                    
                label_1400c7947:
                    *(&var_3e8:8 + (rbx_4 << 2)) = rbp_3 - 2
                    
                    if ((temp0_180 & 8) != 0)
                    label_1400c7953:
                        *(&var_3e8:0xc + (rbx_4 << 2)) = rbp_3 - 2
                        
                        if ((temp0_180 & 1) == 0)
                            goto label_1400c7877
                        
                        goto label_1400c795f
                    
                label_1400c786f:
                    
                    if ((temp0_180 & 1) == 0)
                    label_1400c7877:
                        
                        if ((temp0_180 & 2) != 0)
                            goto label_1400c796f
                        
                        goto label_1400c787f
                    
                label_1400c795f:
                    *(&var_3a8 + (rbx_4 << 2)) = 0x3f800000
                    
                    if ((temp0_180 & 2) != 0)
                    label_1400c796f:
                        *(&var_3a8:4 + (rbx_4 << 2)) = 0x3f800000
                        
                        if ((temp0_180 & 4) == 0)
                            goto label_1400c7887
                        
                        goto label_1400c797f
                    
                label_1400c787f:
                    
                    if ((temp0_180 & 4) != 0)
                    label_1400c797f:
                        *(&var_3a8:8 + (rbx_4 << 2)) = 0x3f800000
                        
                        if ((temp0_180 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_4 << 2)) = 0x3f800000
                    else
                    label_1400c7887:
                        
                        if ((temp0_180 & 8) != 0)
                            *(&var_3a8:0xc + (rbx_4 << 2)) = 0x3f800000
                
                if (rbx_4 == 8)
                    break
                
                zmm4 = *(&var_3d8 + (rbx_4 << 2))
                rbx_4 += 4
                j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm15))
            while (j_1 != 0)
            
            uint128_t var_368_2 = _mm_add_ps(temp0_153, zmm1)
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm0 = var_3e8
            zmm14 = var_3d8
            zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm8), 0xe8)
            zmm7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm0), 0xe8), zmm1.q)
            zmm3 = _mm_add_epi32(zmm7, zmm14)
            zmm1 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm1), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm1), 0xe8).q)
            zmm6 = _mm_add_epi32(zmm13, var_3c8_2)
            float (* rbx_5)[0x4] = *(arg5 + 0x10)
            zmm6 = _mm_slli_epi32(zmm6, 2)
            int64_t rax_21 = sx.q(zmm6.d)
            int64_t rsi_4 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
            int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
            zmm6 = *(rbx_5 + rdi_2 + 4)
            zmm2 = _mm_unpacklo_ps(*(rbx_5 + rbp_6), (*(rbx_5 + rdi_2))[0].q)
            float temp0_203[0x4] = _mm_unpacklo_ps(*(rbx_5 + rbp_6 + 4), zmm6.q)
            zmm11 = *(rbx_5 + rax_21 + 4)
            zmm6 = _mm_unpacklo_ps(*(rbx_5 + rax_21), (*(rbx_5 + rsi_4)).q).q | zmm2.q << 0x40
            zmm11 = _mm_unpacklo_ps(zmm11, (*(rbx_5 + rsi_4 + 4)).q)[0].q | temp0_203[0].q << 0x40
            zmm0 = _mm_sub_epi32(zmm0, zmm15)
            zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm8), 0xe8)
            int32_t temp0_212[0x4] =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm8), 0xe8), zmm2.q)
            zmm0 = _mm_add_epi32(temp0_212, zmm14)
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
            zmm10 = _mm_sub_ps(
                _mm_unpacklo_ps(*(rbx_5 + sx.q(zmm0.d)), 
                    (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d))).q).q | _mm_unpacklo_ps(
                    *(rbx_5 + sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)), 
                    (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d))).q).q << 0x40, 
                zmm6)
            zmm2 = var_3a8
            zmm8 = var_398_2
            zmm10 = _mm_add_ps(_mm_mul_ps(zmm10, zmm2), zmm6)
            int32_t temp0_237[0x4] = _mm_sub_epi32(zmm14, zmm15)
            zmm7 = _mm_add_epi32(zmm7, temp0_237)
            zmm0 = _mm_shuffle_epi32(zmm7, 0xf5)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm1), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8).q), 
                    var_3c8_2), 
                2)
            zmm6 = _mm_unpacklo_ps(*(rbx_5 + sx.q(zmm4.d)), 
                (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rbx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
                (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q).q << 0x40
            int32_t temp0_252[0x4] = _mm_add_epi32(temp0_237, temp0_212)
            zmm0 = _mm_shuffle_epi32(temp0_252, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_252, zmm1), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8).q), 
                    var_3c8_2), 
                2)
            zmm4 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbx_5 + sx.q(zmm5[0])), 
                            (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d))).q).q | _mm_unpacklo_ps(
                            *(rbx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)), 
                            (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q).q << 0x40, 
                        zmm6), 
                    zmm2), 
                zmm6)
            zmm1 = _mm_add_epi32(zmm1, var_3c8_2)
            zmm13 = _mm_add_epi32(zmm13, zmm1)
            zmm1 = _mm_add_epi32(zmm1, zmm3)
            zmm3 = _mm_slli_epi32(_mm_add_epi32(zmm3, var_3c8_2), 2)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbx_5 + sx.q(zmm3.d) + 4), 
                            (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + 4))[0].q).q |
                            _mm_unpacklo_ps(*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + 4), 
                            (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + 4)).q)[0].q << 0x40, 
                        zmm11), 
                    zmm2), 
                zmm11)
            zmm13 = _mm_slli_epi32(zmm13, 2)
            zmm3 = _mm_unpacklo_ps(*(rbx_5 + sx.q(zmm13.d) + 4), 
                (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm13, 0xe5)[0]) + 4))[0].q).q | _mm_unpacklo_ps(
                *(rbx_5 + sx.q(_mm_shuffle_epi32(zmm13, 0x4e)[0]) + 4), 
                (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm13, 0xe7).d) + 4)).q)[0].q << 0x40
            zmm1 = _mm_slli_epi32(zmm1, 2)
            float temp0_290[0x4] = _mm_unpacklo_ps(*(rbx_5 + sx.q(zmm1.d) + 4), 
                (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + 4)).q)
            zmm6 = _mm_unpacklo_ps(*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + 4), 
                (*(rbx_5 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + 4)).q)
            float temp0_296[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_290[0].q | zmm6.q << 0x40, zmm3), zmm2), zmm3)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4, zmm10), zmm8), zmm10)
            zmm5 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_296, zmm0), zmm8), zmm0), 
                        zmm4), 
                    var_388_2), 
                zmm4)
            zmm1 = _mm_cmpeq_ps(var_368_2, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(var_368_2, zx.o(0), 7), zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm1 = _mm_rsqrt_ps(var_368_2)
                zmm6 = _mm_mul_ps(_mm_mul_ps(var_368_2, zmm1), zmm1)
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
            uint128_t var_348
            zmm10 = var_348
            float temp0_324[0x4] = __subps_xmmps_memps(zmm5, var_238_1)
            zmm0 = __cmpps_xmmps_memps_immb(temp0_324, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                zmm7 = _mm_mul_ps(var_158, temp0_324)
                zmm6 = _mm_mul_ps(var_148, temp0_324)
                zmm4 = _mm_mul_ps(var_138_1, temp0_324)
                char rbx_6 = result.b
                zmm3 = zmm9
                char temp1_1 = rbx_6 & 1
                
                if (temp1_1 == 0)
                    zmm2 = zmm8
                    
                    if (temp1_1 != 0)
                        goto label_1400c70c6
                    
                    goto label_1400c7e69
                
                zmm3.d = zmm9.d f+ zmm7.d
                zmm2 = zmm8
                
                if (temp1_1 != 0)
                label_1400c70c6:
                    zmm2.d = zmm8.d f+ zmm6.d
                    zmm1 = zmm10
                    
                    if (temp1_1 == 0)
                        goto label_1400c7e73
                    
                    goto label_1400c70d8
                
            label_1400c7e69:
                zmm1 = zmm10
                bool cond:22_1
                bool cond:23_1
                bool cond:26_1
                bool cond:27_1
                
                if (temp1_1 == 0)
                label_1400c7e73:
                    zmm9 = _mm_add_ps(zmm9, zmm7)
                    char temp7_1 = rbx_6 & 2
                    cond:22_1 = temp7_1 != 0
                    cond:23_1 = temp7_1 == 0
                    cond:26_1 = temp7_1 == 0
                    cond:27_1 = temp7_1 != 0
                    
                    if (temp7_1 != 0)
                        goto label_1400c70f5
                    
                    goto label_1400c7e80
                
            label_1400c70d8:
                zmm1.d = zmm10.d f+ zmm4.d
                zmm9 = _mm_add_ps(zmm9, zmm7)
                char temp6_1 = rbx_6 & 2
                cond:22_1 = temp6_1 != 0
                cond:23_1 = temp6_1 == 0
                cond:26_1 = temp6_1 == 0
                cond:27_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                label_1400c70f5:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm3, 1), zmm3, 0xe2)
                    zmm8 = _mm_add_ps(zmm8, zmm6)
                    
                    if (cond:23_1)
                        goto label_1400c7e8a
                    
                    goto label_1400c710e
                
            label_1400c7e80:
                zmm8 = _mm_add_ps(zmm8, zmm6)
                
                if (not(cond:22_1))
                label_1400c7e8a:
                    zmm10 = _mm_add_ps(zmm10, zmm4)
                    
                    if (cond:27_1)
                        goto label_1400c7127
                    
                    goto label_1400c7e94
                
            label_1400c710e:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
                zmm10 = _mm_add_ps(zmm10, zmm4)
                bool cond:38_1
                bool cond:39_1
                bool cond:42_1
                bool cond:43_1
                
                if (not(cond:26_1))
                label_1400c7127:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 1), zmm1, 0xe2)
                    char temp15_1 = rbx_6 & 4
                    cond:38_1 = temp15_1 == 0
                    cond:39_1 = temp15_1 != 0
                    cond:42_1 = temp15_1 != 0
                    cond:43_1 = temp15_1 == 0
                    
                    if (temp15_1 == 0)
                        goto label_1400c7e9d
                    
                    goto label_1400c713b
                
            label_1400c7e94:
                char temp14_1 = rbx_6 & 4
                cond:38_1 = temp14_1 == 0
                cond:39_1 = temp14_1 != 0
                cond:42_1 = temp14_1 != 0
                cond:43_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                label_1400c713b:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
                    
                    if (not(cond:38_1))
                    label_1400c714d:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                        
                        if (cond:43_1)
                            goto label_1400c7ea9
                        
                        goto label_1400c715f
                else
                label_1400c7e9d:
                    
                    if (cond:39_1)
                        goto label_1400c714d
                
                bool cond:54_1
                bool cond:55_1
                bool cond:58_1
                bool cond:59_1
                
                if (not(cond:42_1))
                label_1400c7ea9:
                    char temp23_1 = rbx_6 & 8
                    cond:54_1 = temp23_1 != 0
                    cond:55_1 = temp23_1 == 0
                    cond:58_1 = temp23_1 != 0
                    cond:59_1 = temp23_1 == 0
                    
                    if (temp23_1 != 0)
                        goto label_1400c7176
                    
                    goto label_1400c7eb2
                
            label_1400c715f:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x32), 0x84)
                char temp22_1 = rbx_6 & 8
                cond:54_1 = temp22_1 != 0
                cond:55_1 = temp22_1 == 0
                cond:58_1 = temp22_1 != 0
                cond:59_1 = temp22_1 == 0
                
                if (temp22_1 != 0)
                label_1400c7176:
                    zmm9 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
                    
                    if (cond:55_1)
                        goto label_1400c7ebc
                    
                    goto label_1400c718a
                
            label_1400c7eb2:
                zmm9 = zmm3
                
                if (cond:54_1)
                label_1400c718a:
                    zmm8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                    
                    if (cond:58_1)
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
                else
                label_1400c7ebc:
                    zmm8 = zmm2
                    
                    if (not(cond:59_1))
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
                
                zmm2 = var_358_1
                zmm5 = _mm_and_ps(_mm_add_ps(temp0_324, zmm2), zmm0)
                zmm10 = zmm1
                var_358_1 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm2), zmm5)
            
            rdx = zx.q(rdx.d + 4)
        while (rdx.d s< i_1)
        
        if (rdx.d s< arg12)
            goto label_1400c7f0a
        
        rcx = arg10
        rdx_8 = arg11
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm9, zmm9[0].q), zmm9)
    zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
    zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
    zmm1 = _mm_unpacklo_ps(zmm1, zmm2.q)
    zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10.q), zmm10)
    zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
    zmm2 = _mm_add_ps(*rdx_8 | rdx_8[1].d.q << 0x40, zmm1.q | zmm2.q << 0x40)
    *rdx_8 = zmm2.d
    zmm0.q = zmm2 u>> 0x40
    *(rdx_8 + 4) = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
    rdx_8[1].d = zmm0.d
    zmm1 = var_358_1
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm1.d = zmm1.d f+ *rcx
*rcx = zmm1.d
return result
