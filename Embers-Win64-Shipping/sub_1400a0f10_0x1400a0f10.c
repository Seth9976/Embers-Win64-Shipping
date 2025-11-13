// 函数: sub_1400a0f10
// 地址: 0x1400a0f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
uint128_t zmm14
uint128_t var_68 = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
uint128_t zmm11
uint128_t var_98 = zmm11
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint128_t zmm4 = *arg13
uint128_t zmm0 =
    __mulps_xmmps_memps(__insertps_xmmps_memd_immb(zx.o(*arg3), arg3[1].d, 0x20), data_142e6d9f0)
uint32_t temp0_2 = _mm_movemask_ps(zmm4)
uint128_t zmm1 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
float temp0_5[0x4] = _mm_movehdup_ps(zmm1)
uint128_t zmm3 = _mm_unpackhi_pd(zmm1, zmm1.q)
uint32_t result
uint128_t var_3f8
uint128_t var_3e8
uint128_t var_3b8
uint128_t var_298
float zmm2[0x4]
float zmm5[0x4]
uint128_t zmm9
float zmm10[0x4]

if (temp0_2 != 0xf)
    int32_t var_278 = zmm1.d
    float var_274_1 = temp0_5[0]
    int32_t var_270_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, __insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20))
    int32_t var_288 = zmm0.d
    int32_t var_284_1 = __extractps_memd_xmmps_immb(zmm0, 1)
    int32_t var_280_1 = __extractps_memd_xmmps_immb(zmm0, 2)
    int32_t i = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
    uint128_t var_318_2 = zmm4
    float var_338_2[0x4]
    uint64_t r15_5
    
    if (i s> 0)
        zmm0 = arg9
        uint128_t var_348_2 = _mm_shuffle_ps(zmm0, zmm0, 0)
        r15_5 = 0
        var_338_2 = zx.o(0)
        
        do
            zmm0 = __pmulld_xmmdq_memdq(*(arg8 + sx.q((r15_5 << 2).d)), data_142fc95c0)
            int64_t rax_45 = sx.q(zmm0.d)
            int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm0, 1))
            int64_t rbx_8 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rdi_11 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm5 = *(arg7 + (rax_45 << 2) + 4)
            zmm1 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg7 + (rax_45 << 2)), *(arg7 + (rbp_9 << 2)), 
                        0x10), 
                    *(arg7 + (rbx_8 << 2)), 0x20), 
                *(arg7 + (rdi_11 << 2)), 0x30)
            float temp0_318[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(arg7 + (rbp_9 << 2) + 4), 0x10), 
                    *(arg7 + (rbx_8 << 2) + 4), 0x20), 
                *(arg7 + (rdi_11 << 2) + 4), 0x30)
            float temp0_321[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg7 + (rax_45 << 2) + 8), 
                        *(arg7 + (rbp_9 << 2) + 8), 0x10), 
                    *(arg7 + (rbx_8 << 2) + 8), 0x20), 
                *(arg7 + (rdi_11 << 2) + 8), 0x30)
            zmm3 = temp0_321
            var_3b8 = zmm1
            uint128_t var_398_3 = zmm3
            int128_t var_388_2
            __builtin_memset(&var_388_2, 0, 0x40)
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3f8 = zmm0
            var_3e8 = zmm0
            uint128_t var_3d8_3 = zmm0
            uint128_t var_3c8_2 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
            float temp0_323[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm11 = _mm_mul_ps(zmm3, temp0_323)
            float temp0_325[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_326[0x4] = _mm_mul_ps(zmm1, temp0_325)
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_328[0x4] = _mm_mul_ps(temp0_318, zmm9)
            zmm11 = _mm_sub_ps(zmm11, _mm_mul_ps(temp0_318, temp0_325))
            float temp0_332[0x4] = _mm_sub_ps(temp0_326, _mm_mul_ps(zmm3, zmm9))
            float temp0_334[0x4] = _mm_sub_ps(temp0_328, _mm_mul_ps(zmm1, temp0_323))
            zmm11 = _mm_add_ps(zmm11, zmm11)
            float temp0_336[0x4] = _mm_add_ps(temp0_332, temp0_332)
            float temp0_337[0x4] = _mm_add_ps(temp0_334, temp0_334)
            zmm3 = _mm_mul_ps(zmm0, zmm11)
            float temp0_339[0x4] = _mm_mul_ps(zmm0, temp0_336)
            zmm3 = __addps_xmmps_memps(zmm3, var_3b8)
            float temp0_341[0x4] = __addps_xmmps_memps(temp0_339, temp0_318)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_337), var_398_3)
            float temp0_344[0x4] = _mm_mul_ps(temp0_337, temp0_323)
            zmm4 = _mm_mul_ps(zmm11, temp0_325)
            zmm1 = _mm_mul_ps(temp0_336, zmm9)
            float temp0_349[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_344, _mm_mul_ps(temp0_336, temp0_325)), zmm3)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_337, zmm9)), temp0_341)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm11, temp0_323)), zmm0)
            zmm3 = arg6[1].d
            zmm0 = *(arg6 + 0x14)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_349)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4)
            zmm2 = *(arg6 + 0x18)
            float temp0_361[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm1)
            uint128_t var_1b8 = zmm3
            var_298 = zmm0
            float var_1a8[0x4] = zmm0
            int64_t rbx_9 = 0
            uint128_t var_328_2 = zmm3
            zmm0 = zmm3
            
            while (true)
                zmm2 = *(&var_278 + rbx_9)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_364 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_364 != 0)
                    if ((temp0_364 & 1) == 0)
                        if ((temp0_364 & 2) != 0)
                            goto label_1400a216d
                        
                        goto label_1400a209d
                    
                    *(&var_3f8 + (rbx_9 << 2)) = zmm2[0]
                    
                    if ((temp0_364 & 2) != 0)
                    label_1400a216d:
                        *(&var_3f8:4 + (rbx_9 << 2)) = zmm2[0]
                        
                        if ((temp0_364 & 4) == 0)
                            goto label_1400a20a5
                        
                        goto label_1400a217b
                    
                label_1400a209d:
                    
                    if ((temp0_364 & 4) != 0)
                    label_1400a217b:
                        *(&var_3f8:8 + (rbx_9 << 2)) = zmm2[0]
                        
                        if ((temp0_364 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_9 << 2)) = zmm2[0]
                    else
                    label_1400a20a5:
                        
                        if ((temp0_364 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_9 << 2)) = zmm2[0]
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_288 + rbx_9)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_370 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_370 != 0)
                        if ((temp0_370 & 1) == 0)
                            if ((temp0_370 & 2) != 0)
                                goto label_1400a219b
                            
                            goto label_1400a20f2
                        
                        *(&var_3f8 + (rbx_9 << 2)) = zmm3.d
                        
                        if ((temp0_370 & 2) != 0)
                        label_1400a219b:
                            *(&var_3f8:4 + (rbx_9 << 2)) = zmm3.d
                            
                            if ((temp0_370 & 4) == 0)
                                goto label_1400a20fa
                            
                            goto label_1400a21a9
                        
                    label_1400a20f2:
                        
                        if ((temp0_370 & 4) != 0)
                        label_1400a21a9:
                            *(&var_3f8:8 + (rbx_9 << 2)) = zmm3.d
                            
                            if ((temp0_370 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_9 << 2)) = zmm3.d
                        else
                        label_1400a20fa:
                            
                            if ((temp0_370 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_9 << 2)) = zmm3.d
                    
                    char temp0_373 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_373 != 0)
                        zmm0 = *(&var_1b8 + (rbx_9 << 2))
                        
                        if ((temp0_373 & 1) == 0)
                            if ((temp0_373 & 2) != 0)
                                goto label_1400a21c9
                            
                            goto label_1400a212d
                        
                        *(&var_3f8 + (rbx_9 << 2)) = zmm0.d
                        
                        if ((temp0_373 & 2) != 0)
                        label_1400a21c9:
                            *(&var_3f8:4 + (rbx_9 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_373 & 4) == 0)
                                goto label_1400a2135
                            
                            goto label_1400a21d9
                        
                    label_1400a212d:
                        
                        if ((temp0_373 & 4) != 0)
                        label_1400a21d9:
                            *(&var_3f8:8 + (rbx_9 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_373 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_9 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1400a2135:
                            
                            if ((temp0_373 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_9 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                
                if (rbx_9 == 8)
                    break
                
                zmm0 = *(&var_1a8 + (rbx_9 << 2))
                rbx_9 += 4
            
            zmm12 = var_3f8
            zmm6 = var_3e8
            zmm1 = *arg1
            zmm11 = *(arg1 + 4)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm0 = _mm_sub_ps(zmm12, zmm1)
            zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0)
            float temp0_380[0x4] = _mm_sub_ps(zmm6, zmm11)
            zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
            zmm15 = arg1[1].d
            float temp0_382[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float var_2c8_2[0x4] = var_3d8_3
            zmm4 = _mm_sub_ps(var_3d8_3, temp0_382)
            zmm5 = *arg3
            float temp0_384[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_div_ps(zmm0, temp0_384)
            zmm13 = arg3[1].d
            zmm8 = _mm_cvttps_epi32(zmm0)
            uint128_t var_2e8_2 = zmm1
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_384), zmm1)
            zmm3 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0)
            uint128_t var_308_2 = zmm1
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm12, 1)
            zmm14 = _mm_add_epi32(zmm8, zmm2)
            float temp0_396[0x4] = _mm_blendv_ps(zmm14, zmm8, zmm0)
            zmm10 = *(arg3 + 4)
            float temp0_397[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_398[0x4] = _mm_div_ps(temp0_380, temp0_397)
            float temp0_399[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm4 = _mm_div_ps(zmm4, temp0_399)
            zmm7 = _mm_cvttps_epi32(temp0_398)
            zmm4 = _mm_cvttps_epi32(zmm4)
            zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_397)
            zmm9 = _mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_399)
            uint128_t var_2d8_2 = zmm11
            zmm1 = _mm_add_ps(zmm1, zmm11)
            zmm9 = _mm_add_ps(zmm9, temp0_382)
            float temp0_409[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1 = _mm_add_ps(zmm1, temp0_409)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            var_3f8 = temp0_396
            zmm0 = _mm_cmpeq_ps(zmm1, zmm6, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm8 = zmm7
            
            zmm9 = _mm_add_ps(zmm9, zmm3)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm6, 5)) != 0)
                zmm14 = __paddd_xmmdq_memdq(zmm7, data_142d3f800)
            
            zmm1 = __subps_xmmps_memps(zmm12, var_328_2)
            zmm11 = __subps_xmmps_memps(zmm6, var_298)
            float temp0_420[0x4] = _mm_blendv_ps(zmm14, zmm8, zmm0)
            var_3e8 = temp0_420
            zmm0 = _mm_cmpeq_ps(zmm9, var_2c8_2, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm8 = zmm4
            
            float temp0_423[0x4] = __subps_xmmps_memps(var_2c8_2, temp0_361)
            zmm1 = _mm_mul_ps(zmm1, zmm1)
            zmm11 = _mm_mul_ps(zmm11, zmm11)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm9, var_2c8_2, 5)) != 0)
                zmm14 = __paddd_xmmdq_memdq(zmm4, data_142d3f800)
            
            zmm14 = _mm_blendv_ps(zmm14, zmm8, zmm0)
            zmm1 = _mm_add_ps(__addps_xmmps_memps(zmm1, data_142d8f750), zmm11)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_396), temp0_384), var_2e8_2)
            zmm5 = zmm1
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_420), temp0_397), var_2d8_2)
            uint128_t var_3d8_4 = zmm14
            zmm4 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), temp0_399), temp0_382)
            float temp0_441[0x4] = _mm_add_ps(var_308_2, zmm0)
            float temp0_442[0x4] = _mm_add_ps(temp0_409, zmm1)
            zmm3 = _mm_add_ps(zmm3, zmm4)
            zmm0 = _mm_sub_ps(zmm12, temp0_441)
            zmm1 = _mm_sub_ps(zmm6, temp0_442)
            float temp0_446[0x4] = _mm_sub_ps(var_2c8_2, zmm3)
            zmm0 = _mm_div_ps(zmm0, temp0_384)
            zmm1 = _mm_div_ps(zmm1, temp0_397)
            float temp0_449[0x4] = _mm_div_ps(temp0_446, temp0_399)
            var_3b8 = zmm0
            uint128_t var_3a8_4 = zmm1
            float temp0_450[0x4] = _mm_mul_ps(temp0_423, temp0_423)
            int64_t rbx_10 = 0
            zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
            char j = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_396, zmm1))
            
            if (j == 0)
                goto label_1400a24bc
            
            do
                if ((j & 1) == 0)
                    if ((j & 2) != 0)
                        goto label_1400a254f
                    
                    goto label_1400a2488
                
                *(&var_3f8 + (rbx_10 << 2)) = 0
                
                if ((j & 2) != 0)
                label_1400a254f:
                    *(&var_3f8:4 + (rbx_10 << 2)) = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400a2490
                    
                    goto label_1400a255f
                
            label_1400a2488:
                
                if ((j & 4) == 0)
                label_1400a2490:
                    
                    if ((j & 8) != 0)
                        goto label_1400a256f
                    
                    goto label_1400a2498
                
            label_1400a255f:
                *(&var_3f8:8 + (rbx_10 << 2)) = 0
                
                if ((j & 8) != 0)
                label_1400a256f:
                    *(&var_3f8:0xc + (rbx_10 << 2)) = 0
                    
                    if ((j & 1) == 0)
                        goto label_1400a24a0
                    
                    goto label_1400a257f
                
            label_1400a2498:
                
                if ((j & 1) == 0)
                label_1400a24a0:
                    
                    if ((j & 2) != 0)
                        goto label_1400a258f
                    
                    goto label_1400a24a8
                
            label_1400a257f:
                *(&var_3b8 + (rbx_10 << 2)) = 0
                
                if ((j & 2) != 0)
                label_1400a258f:
                    *(&var_3b8:4 + (rbx_10 << 2)) = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400a24b0
                    
                    goto label_1400a259f
                
            label_1400a24a8:
                
                if ((j & 4) != 0)
                label_1400a259f:
                    *(&var_3b8:8 + (rbx_10 << 2)) = 0
                    
                    if ((j & 8) != 0)
                        *(&var_3b8:0xc + (rbx_10 << 2)) = 0
                else
                label_1400a24b0:
                    
                    if ((j & 8) != 0)
                        *(&var_3b8:0xc + (rbx_10 << 2)) = 0
                
            label_1400a24bc:
                int32_t rbp_10 = *(arg4 + rbx_10)
                char temp0_458 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rbp_10 - 1), 0), *(&var_3f8 + (rbx_10 << 2))))
                
                if (temp0_458 != 0)
                    if ((temp0_458 & 1) == 0)
                        if ((temp0_458 & 2) != 0)
                            goto label_1400a25cb
                        
                        goto label_1400a24ee
                    
                    *(&var_3f8 + (rbx_10 << 2)) = rbp_10 - 2
                    
                    if ((temp0_458 & 2) != 0)
                    label_1400a25cb:
                        *(&var_3f8:4 + (rbx_10 << 2)) = rbp_10 - 2
                        
                        if ((temp0_458 & 4) == 0)
                            goto label_1400a24f6
                        
                        goto label_1400a25d7
                    
                label_1400a24ee:
                    
                    if ((temp0_458 & 4) == 0)
                    label_1400a24f6:
                        
                        if ((temp0_458 & 8) != 0)
                            goto label_1400a25e3
                        
                        goto label_1400a24fe
                    
                label_1400a25d7:
                    *(&var_3f8:8 + (rbx_10 << 2)) = rbp_10 - 2
                    
                    if ((temp0_458 & 8) != 0)
                    label_1400a25e3:
                        *(&var_3f8:0xc + (rbx_10 << 2)) = rbp_10 - 2
                        
                        if ((temp0_458 & 1) == 0)
                            goto label_1400a2506
                        
                        goto label_1400a25ef
                    
                label_1400a24fe:
                    
                    if ((temp0_458 & 1) == 0)
                    label_1400a2506:
                        
                        if ((temp0_458 & 2) != 0)
                            goto label_1400a25ff
                        
                        goto label_1400a250e
                    
                label_1400a25ef:
                    *(&var_3b8 + (rbx_10 << 2)) = 0x3f800000
                    
                    if ((temp0_458 & 2) != 0)
                    label_1400a25ff:
                        *(&var_3b8:4 + (rbx_10 << 2)) = 0x3f800000
                        
                        if ((temp0_458 & 4) == 0)
                            goto label_1400a2516
                        
                        goto label_1400a260f
                    
                label_1400a250e:
                    
                    if ((temp0_458 & 4) != 0)
                    label_1400a260f:
                        *(&var_3b8:8 + (rbx_10 << 2)) = 0x3f800000
                        
                        if ((temp0_458 & 8) != 0)
                            *(&var_3b8:0xc + (rbx_10 << 2)) = 0x3f800000
                    else
                    label_1400a2516:
                        
                        if ((temp0_458 & 8) != 0)
                            *(&var_3b8:0xc + (rbx_10 << 2)) = 0x3f800000
                
                if (rbx_10 == 8)
                    break
                
                zmm2 = *(&var_3e8 + (rbx_10 << 2))
                rbx_10 += 4
                j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm1))
            while (j != 0)
            
            zmm14 = _mm_add_ps(zmm5, temp0_450)
            zmm9 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_3f8
            zmm2 = var_3e8
            zmm5 = _mm_mullo_epi32(zmm9, zmm4)
            zmm13 = _mm_add_epi32(zmm5, zmm2)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm8 = _mm_mullo_epi32(zmm13, zmm0)
            zmm6 = _mm_add_epi32(zmm8, var_3d8_4)
            int32_t* rbx_11 = *(arg5 + 0x10)
            zmm6 = _mm_slli_epi32(zmm6, 2)
            int64_t rsi_9 = sx.q(zmm6[0])
            int64_t r10_3 = sx.q(_mm_extract_epi32(zmm6, 1))
            int64_t rax_63 = sx.q(_mm_extract_epi32(zmm6, 2))
            int64_t rbp_12 = sx.q(_mm_extract_epi32(zmm6, 3))
            float temp0_472[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rbx_11 + rsi_9), *(rbx_11 + r10_3), 0x10), 
                    *(rbx_11 + rax_63), 0x20), 
                *(rbx_11 + rbp_12), 0x30)
            zmm12 = *(rbx_11 + rsi_9 + 4)
            zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm1), zmm9)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), var_3d8_4), 2)
            zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm9), zmm0)
            zmm6 = *(rbx_11 + sx.q(zmm3.d))
            int32_t temp0_481 = _mm_extract_epi32(zmm3, 1)
            int64_t rdi_15 = sx.q(_mm_extract_epi32(zmm3, 2))
            int32_t temp0_483 = _mm_extract_epi32(zmm3, 3)
            float temp0_487[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm6, *(rbx_11 + sx.q(temp0_481)), 0x10), 
                        *(rbx_11 + rdi_15), 0x20), 
                    *(rbx_11 + sx.q(temp0_483)), 0x30), 
                temp0_472)
            zmm10 = var_3b8
            zmm2 = _mm_sub_epi32(zmm2, zmm1)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm2), zmm0), var_3d8_4), 2)
            int64_t rdx_27 = sx.q(zmm5[0])
            int32_t temp0_493 = _mm_extract_epi32(zmm5, 1)
            int32_t temp0_494 = _mm_extract_epi32(zmm5, 2)
            zmm1 = *(rbx_11 + rdx_27)
            int32_t temp0_495 = _mm_extract_epi32(zmm5, 3)
            float temp0_496[0x4] = _mm_mul_ps(temp0_487, zmm10)
            zmm1 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm1, *(rbx_11 + sx.q(temp0_493)), 0x10), 
                    *(rbx_11 + sx.q(temp0_494)), 0x20), 
                *(rbx_11 + sx.q(temp0_495)), 0x30)
            zmm2 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm4), zmm0), var_3d8_4), 2)
            zmm3 = *(rbx_11 + sx.q(zmm2[0]))
            int64_t rdx_33 = sx.q(_mm_extract_epi32(zmm2, 1))
            int32_t temp0_505 = _mm_extract_epi32(zmm2, 2)
            int64_t rdi_19 = sx.q(_mm_extract_epi32(zmm2, 3))
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rbx_11 + rdx_33), 0x10), 
                    *(rbx_11 + sx.q(temp0_505)), 0x20), 
                *(rbx_11 + rdi_19), 0x30)
            float temp0_510[0x4] = _mm_add_ps(temp0_496, temp0_472)
            zmm3 = _mm_sub_ps(zmm3, zmm1)
            float temp0_514[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm12, *(rbx_11 + r10_3 + 4), 0x10), 
                    *(rbx_11 + rax_63 + 4), 0x20), 
                *(rbx_11 + rbp_12 + 4), 0x30)
            zmm3 = _mm_mul_ps(zmm3, zmm10)
            zmm0 = _mm_add_epi32(zmm0, var_3d8_4)
            zmm8 = _mm_add_epi32(zmm8, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm13)
            zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, var_3d8_4), 2)
            zmm2 = *(rbx_11 + sx.q(zmm13[0]) + 4)
            int64_t rax_67 = sx.q(_mm_extract_epi32(zmm13, 1))
            int32_t temp0_522 = _mm_extract_epi32(zmm13, 2)
            int64_t rbp_14 = sx.q(_mm_extract_epi32(zmm13, 3))
            float temp0_526[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rbx_11 + rax_67 + 4), 0x10), 
                    *(rbx_11 + sx.q(temp0_522) + 4), 0x20), 
                *(rbx_11 + rbp_14 + 4), 0x30)
            zmm3 = _mm_add_ps(zmm3, zmm1)
            float temp0_530[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_526, temp0_514), zmm10), temp0_514)
            zmm8 = _mm_slli_epi32(zmm8, 2)
            zmm1 = *(rbx_11 + sx.q(zmm8[0]) + 4)
            int32_t temp0_532 = _mm_extract_epi32(zmm8, 1)
            int64_t rdx_37 = sx.q(_mm_extract_epi32(zmm8, 2))
            int32_t temp0_534 = _mm_extract_epi32(zmm8, 3)
            zmm1 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm1, *(rbx_11 + sx.q(temp0_532) + 4), 0x10), 
                    *(rbx_11 + rdx_37 + 4), 0x20), 
                *(rbx_11 + sx.q(temp0_534) + 4), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int32_t temp0_539 = _mm_extract_epi32(zmm0, 1)
            zmm4 = *(rbx_11 + sx.q(zmm0.d) + 4)
            int64_t rdx_40 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rbp_17 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm4 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm4, *(rbx_11 + sx.q(temp0_539) + 4), 
                                    0x10), 
                                *(rbx_11 + rdx_40 + 4), 0x20), 
                            *(rbx_11 + rbp_17 + 4), 0x30), 
                        zmm1), 
                    zmm10), 
                zmm1)
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_510), var_3a8_4), temp0_510)
            zmm4 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_530), var_3a8_4), temp0_530), 
                        zmm3), 
                    temp0_449), 
                zmm3)
            zmm1 = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zx.o(0), 7), zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm1 = _mm_rsqrt_ps(zmm14)
                zmm14 = _mm_mul_ps(_mm_mul_ps(zmm14, zmm1), zmm1)
                float temp0_566[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm14), zmm1), data_142d3f640)
                zmm1 = _mm_rcp_ps(temp0_566)
                float temp0_568[0x4] = _mm_mul_ps(temp0_566, zmm1)
                zmm4 = _mm_blendv_ps(zmm4, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_568), zmm1), zmm4), zmm0)
            
            uint128_t var_358_2
            zmm9 = var_358_2
            float var_368_2[0x4]
            zmm10 = var_368_2
            uint128_t var_378_2
            zmm11 = var_378_2
            zmm4 = __subps_xmmps_memps(zmm4, var_348_2)
            zmm0 = __cmpps_xmmps_memps_immb(zmm4, data_142fc95d0, 1)
            char temp0_575 = _mm_movemask_ps(zmm0)
            
            if (temp0_575 != 0)
                float temp0_576[0x4] = _mm_mul_ps(var_1b8, zmm4)
                float temp0_577[0x4] = _mm_mul_ps(var_1a8, zmm4)
                float temp0_578[0x4] = _mm_mul_ps(temp0_361, zmm4)
                zmm3 = zmm10
                char temp1_1 = temp0_575 & 1
                
                if (temp1_1 == 0)
                    zmm2 = zmm9
                    
                    if (temp1_1 != 0)
                        goto label_1400a2a6e
                    
                    goto label_1400a29fc
                
                zmm3.d = zmm10.d f+ temp0_576[0]
                zmm2 = zmm9
                
                if (temp1_1 != 0)
                label_1400a2a6e:
                    zmm2 = zmm9
                    zmm2[0] = zmm2[0] + temp0_577[0]
                    zmm1 = zmm11
                    
                    if (temp1_1 == 0)
                        goto label_1400a2a02
                    
                    goto label_1400a2a80
                
            label_1400a29fc:
                zmm1 = zmm11
                bool cond:16_1
                bool cond:17_1
                bool cond:24_1
                bool cond:25_1
                
                if (temp1_1 == 0)
                label_1400a2a02:
                    zmm10 = _mm_add_ps(zmm10, temp0_576)
                    char temp6_1 = temp0_575 & 2
                    cond:16_1 = temp6_1 != 0
                    cond:17_1 = temp6_1 == 0
                    cond:24_1 = temp6_1 == 0
                    cond:25_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_1400a2a90
                    
                    goto label_1400a2a0e
                
            label_1400a2a80:
                zmm1.d = zmm11.d f+ temp0_578[0]
                zmm10 = _mm_add_ps(zmm10, temp0_576)
                char temp5_1 = temp0_575 & 2
                cond:16_1 = temp5_1 != 0
                cond:17_1 = temp5_1 == 0
                cond:24_1 = temp5_1 == 0
                cond:25_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                label_1400a2a90:
                    zmm3 = _mm_blend_ps(zmm3, zmm10, 2)
                    zmm9 = _mm_add_ps(zmm9, temp0_577)
                    
                    if (cond:17_1)
                        goto label_1400a2a18
                    
                    goto label_1400a2aa1
                
            label_1400a2a0e:
                zmm9 = _mm_add_ps(zmm9, temp0_577)
                
                if (not(cond:16_1))
                label_1400a2a18:
                    zmm11 = _mm_add_ps(zmm11, temp0_578)
                    
                    if (cond:25_1)
                        goto label_1400a2ab2
                    
                    goto label_1400a2a22
                
            label_1400a2aa1:
                zmm2 = _mm_blend_ps(zmm2, zmm9, 2)
                zmm11 = _mm_add_ps(zmm11, temp0_578)
                bool cond:32_1
                bool cond:33_1
                bool cond:40_1
                bool cond:41_1
                
                if (not(cond:24_1))
                label_1400a2ab2:
                    zmm1 = _mm_blend_ps(zmm1, zmm11, 2)
                    char temp14_1 = temp0_575 & 4
                    cond:32_1 = temp14_1 == 0
                    cond:33_1 = temp14_1 != 0
                    cond:40_1 = temp14_1 != 0
                    cond:41_1 = temp14_1 == 0
                    
                    if (temp14_1 == 0)
                        goto label_1400a2a2a
                    
                    goto label_1400a2ac1
                
            label_1400a2a22:
                char temp13_1 = temp0_575 & 4
                cond:32_1 = temp13_1 == 0
                cond:33_1 = temp13_1 != 0
                cond:40_1 = temp13_1 != 0
                cond:41_1 = temp13_1 == 0
                
                if (temp13_1 != 0)
                label_1400a2ac1:
                    zmm3 = _mm_blend_ps(zmm3, zmm10, 4)
                    
                    if (not(cond:32_1))
                    label_1400a2ace:
                        zmm2 = _mm_blend_ps(zmm2, zmm9, 4)
                        
                        if (cond:41_1)
                            goto label_1400a2a36
                        
                        goto label_1400a2adb
                else
                label_1400a2a2a:
                    
                    if (cond:33_1)
                        goto label_1400a2ace
                
                bool cond:48_1
                bool cond:49_1
                bool cond:56_1
                bool cond:57_1
                
                if (not(cond:40_1))
                label_1400a2a36:
                    char temp22_1 = temp0_575 & 8
                    cond:48_1 = temp22_1 != 0
                    cond:49_1 = temp22_1 == 0
                    cond:56_1 = temp22_1 == 0
                    cond:57_1 = temp22_1 != 0
                    
                    if (temp22_1 == 0)
                        goto label_1400a2aea
                    
                    goto label_1400a2a3e
                
            label_1400a2adb:
                zmm1 = _mm_blend_ps(zmm1, zmm11, 4)
                char temp21_1 = temp0_575 & 8
                cond:48_1 = temp21_1 != 0
                cond:49_1 = temp21_1 == 0
                cond:56_1 = temp21_1 == 0
                cond:57_1 = temp21_1 != 0
                
                if (temp21_1 == 0)
                label_1400a2aea:
                    zmm10 = zmm3
                    
                    if (cond:49_1)
                        goto label_1400a2a4b
                    
                    goto label_1400a2af4
                
            label_1400a2a3e:
                zmm10 = _mm_blend_ps(zmm10, zmm3, 7)
                
                if (cond:48_1)
                label_1400a2af4:
                    zmm9 = _mm_blend_ps(zmm9, zmm2, 7)
                    
                    if (not(cond:56_1))
                        zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
                else
                label_1400a2a4b:
                    zmm9 = zmm2
                    
                    if (cond:57_1)
                        zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
                
                var_338_2 = _mm_blendv_ps(var_338_2, _mm_add_ps(zmm4, var_338_2), zmm0)
                zmm11 = zmm1
            
            r15_5 = zx.q(r15_5.d + 4)
        while (r15_5.d s< i)
        
        result = arg12
        
        if (r15_5.d s>= result)
            goto label_1400a2c03
        
        goto label_1400a2b47
    
    r15_5 = 0
    zmm11 = zx.o(0)
    zmm9 = zx.o(0)
    zmm10 = zx.o(0)
    var_338_2 = zx.o(0)
    result = arg12
    int32_t* rcx_1
    int64_t* rdx_45
    
    if (0 s< result)
    label_1400a2b47:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15_5.d), 0), data_142e11d00)
        zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm0)
        int64_t rax_79 = sx.q(r15_5.d << 2)
        uint32_t temp0_600 = _mm_movemask_ps(zmm2)
        uint128_t var_358_3 = zmm9
        float var_368_3[0x4] = zmm10
        
        if ((zx.q(temp0_600) & 0xfffffff9) != 9)
            if ((temp0_600.b & 1) != 0)
                var_3f8.d = *(arg8 + rax_79)
            
            if ((temp0_600.b & 2) == 0)
                if ((temp0_600.b & 4) != 0)
                    goto label_1400a4a60
                
                goto label_1400a39c0
            
            var_3f8:4.d = *(arg8 + rax_79 + 4)
            
            if ((temp0_600.b & 4) == 0)
            label_1400a39c0:
                
                if ((temp0_600.b & 8) != 0)
                    var_3f8:0xc.d = *(arg8 + rax_79 + 0xc)
            else
            label_1400a4a60:
                var_3f8:8.d = *(arg8 + rax_79 + 8)
                
                if ((temp0_600.b & 8) != 0)
                    var_3f8:0xc.d = *(arg8 + rax_79 + 0xc)
            
            zmm1 = var_3f8
        else
            zmm1 = *(arg8 + rax_79)
        
        zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
        int64_t rax_108 = sx.q(zmm1.d)
        int64_t rbx_22 = arg7 + (rax_108 << 2)
        zmm0 = *(arg7 + (rax_108 << 2))
        int64_t rbp_40 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t r13_9 = arg7 + (rbp_40 << 2)
        int64_t rdi_24 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rdx_68 = arg7 + (rdi_24 << 2)
        int64_t rax_110 = sx.q(_mm_extract_epi32(zmm1, 3))
        int64_t rsi_23 = arg7 + (rax_110 << 2)
        zmm0 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbp_40 << 2)), 0x10), 
                *(arg7 + (rdi_24 << 2)), 0x20), 
            *(arg7 + (rax_110 << 2)), 0x30)
        zmm3 = data_142fc95e0 & zmm2
        uint128_t* r14_2 = zx.q(zmm3.d)
        zmm8 = *(r14_2 + rbx_22)
        uint64_t rax_111 = zx.q(_mm_extract_epi32(zmm3, 1))
        int32_t* r15_8 = zx.q(_mm_extract_epi32(zmm3, 2))
        int32_t* r10_5 = zx.q(_mm_extract_epi32(zmm3, 3))
        var_298.q = rax_111
        float temp0_916[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rax_111 + r13_9), 0x10), 
                *(r15_8 + rdx_68), 0x20), 
            *(r10_5 + rsi_23), 0x30)
        zmm3 = data_142fc95f0 & zmm2
        zmm6 = *(zx.q(zmm3.d) + rbx_22)
        int32_t* rax_113 = zx.q(_mm_extract_epi32(zmm3, 1))
        int32_t* rdi_25 = zx.q(_mm_extract_epi32(zmm3, 2))
        int32_t* rbx_23 = zx.q(_mm_extract_epi32(zmm3, 3))
        float temp0_922[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_113 + r13_9), 0x10), 
                *(rdi_25 + rdx_68), 0x20), 
            *(rbx_23 + rsi_23), 0x30)
        uint128_t var_238_2 = zmm0
        float var_208_2[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        float temp0_923[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_3f8 = temp0_923
        var_3e8 = temp0_923
        zmm7 = *arg6
        zmm1 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_925[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm9 = _mm_mul_ps(temp0_916, temp0_925)
        float temp0_927[0x4] = _mm_mul_ps(temp0_925, temp0_922)
        float temp0_928[0x4] = _mm_mul_ps(temp0_922, zmm1)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        zmm0 = _mm_mul_ps(zmm0, zmm4)
        zmm3 = _mm_mul_ps(zx.o(0), temp0_923)
        float temp0_934[0x4] = _mm_sub_ps(temp0_928, _mm_mul_ps(zmm4, temp0_916))
        zmm0 = _mm_sub_ps(zmm0, temp0_927)
        zmm9 = _mm_sub_ps(zmm9, zmm1)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        float temp0_938[0x4] = _mm_add_ps(temp0_934, temp0_934)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        zmm9 = _mm_add_ps(zmm9, zmm9)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_3b8 = temp0_938
        uint128_t var_3a8_7 = zmm0
        uint128_t var_398_7 = zmm9
        uint128_t var_388_4 = zmm3
        zmm3 = _mm_mul_ps(zmm3, temp0_923)
        zmm1 = _mm_mul_ps(temp0_923, temp0_938)
        float temp0_944[0x4] = _mm_mul_ps(temp0_923, zmm0)
        float temp0_945[0x4] = _mm_mul_ps(temp0_923, zmm9)
        zmm1 = __addps_xmmps_memps(zmm1, var_238_2)
        float temp0_947[0x4] = __addps_xmmps_memps(temp0_944, temp0_916)
        float temp0_948[0x4] = __addps_xmmps_memps(temp0_945, temp0_922)
        float var_3c8_4[0x4] = temp0_923
        uint128_t var_128_2 = zmm1
        float var_118_2[0x4] = temp0_947
        float var_108_2[0x4] = temp0_948
        uint128_t var_f8_2 = __addps_xmmps_memps(zmm3, var_208_2)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        float temp0_950[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(zmm0, zmm4)
        zmm4 = _mm_mul_ps(zmm4, zmm9)
        zmm9 = _mm_mul_ps(zmm9, temp0_950)
        float temp0_955[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_956[0x4] = _mm_mul_ps(temp0_950, temp0_938)
        float temp0_957[0x4] = _mm_mul_ps(temp0_938, temp0_955)
        zmm9 = _mm_sub_ps(zmm9, _mm_mul_ps(temp0_955, zmm0))
        float temp0_960[0x4] = _mm_sub_ps(temp0_957, zmm4)
        zmm3 = _mm_sub_ps(zmm3, temp0_956)
        zmm9 = _mm_add_ps(zmm9, zmm1)
        float temp0_963[0x4] = _mm_add_ps(temp0_960, temp0_947)
        zmm3 = _mm_add_ps(zmm3, temp0_948)
        zmm0 = arg6[1].d
        zmm4 = *(arg6 + 0x14)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm9)
        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_963)
        zmm1 = *(arg6 + 0x18)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
        float var_1e8[0x4] = zmm0
        float var_2b8_4[0x4] = zmm4
        float var_1d8[0x4] = zmm4
        uint128_t var_2a8_4 = zmm1
        uint128_t var_1c8_1 = zmm1
        int64_t rsi_24 = 0
        zmm1 = zmm0
        
        while (true)
            zmm4 = *(&var_278 + rsi_24)
            zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_972[0x4] = _mm_cmpeq_ps(zmm3, zmm1, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_972, zmm2)) != 0)
                char temp0_975 = _mm_movemask_ps(temp0_972)
                
                if ((temp0_975 & 1) == 0)
                    if ((temp0_975 & 2) != 0)
                        goto label_1400a3d8d
                    
                    goto label_1400a3cb3
                
                *(&var_3f8 + (rsi_24 << 2)) = zmm4.d
                
                if ((temp0_975 & 2) != 0)
                label_1400a3d8d:
                    *(&var_3f8:4 + (rsi_24 << 2)) = zmm4.d
                    
                    if ((temp0_975 & 4) == 0)
                        goto label_1400a3cbb
                    
                    goto label_1400a3d9b
                
            label_1400a3cb3:
                
                if ((temp0_975 & 4) != 0)
                label_1400a3d9b:
                    *(&var_3f8:8 + (rsi_24 << 2)) = zmm4.d
                    
                    if ((temp0_975 & 8) != 0)
                        *(&var_3f8:0xc + (rsi_24 << 2)) = zmm4.d
                else
                label_1400a3cbb:
                    
                    if ((temp0_975 & 8) != 0)
                        *(&var_3f8:0xc + (rsi_24 << 2)) = zmm4.d
            
            zmm3 = _mm_cmpeq_ps(zmm3, zmm1, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm3)) != 0)
                zmm5 = *(&var_288 + rsi_24)
                zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
                zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 1), zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm2)) != 0)
                    char temp0_984 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_984 & 1) == 0)
                        if ((temp0_984 & 2) != 0)
                            goto label_1400a3dbb
                        
                        goto label_1400a3d14
                    
                    *(&var_3f8 + (rsi_24 << 2)) = zmm5[0]
                    
                    if ((temp0_984 & 2) != 0)
                    label_1400a3dbb:
                        *(&var_3f8:4 + (rsi_24 << 2)) = zmm5[0]
                        
                        if ((temp0_984 & 4) == 0)
                            goto label_1400a3d1c
                        
                        goto label_1400a3dc9
                    
                label_1400a3d14:
                    
                    if ((temp0_984 & 4) != 0)
                    label_1400a3dc9:
                        *(&var_3f8:8 + (rsi_24 << 2)) = zmm5[0]
                        
                        if ((temp0_984 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_24 << 2)) = zmm5[0]
                    else
                    label_1400a3d1c:
                        
                        if ((temp0_984 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_24 << 2)) = zmm5[0]
                
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 5), zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
                    zmm3 = *(&var_1e8 + (rsi_24 << 2))
                    char temp0_989 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_989 & 1) == 0)
                        if ((temp0_989 & 2) != 0)
                            goto label_1400a3de9
                        
                        goto label_1400a3d55
                    
                    *(&var_3f8 + (rsi_24 << 2)) = zmm3.d
                    
                    if ((temp0_989 & 2) != 0)
                    label_1400a3de9:
                        *(&var_3f8:4 + (rsi_24 << 2)) = __extractps_memd_xmmps_immb(zmm3, 1)
                        
                        if ((temp0_989 & 4) == 0)
                            goto label_1400a3d5d
                        
                        goto label_1400a3df9
                    
                label_1400a3d55:
                    
                    if ((temp0_989 & 4) != 0)
                    label_1400a3df9:
                        *(&var_3f8:8 + (rsi_24 << 2)) = __extractps_memd_xmmps_immb(zmm3, 2)
                        
                        if ((temp0_989 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_24 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)
                    else
                    label_1400a3d5d:
                        
                        if ((temp0_989 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_24 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)
            
            if (rsi_24 == 8)
                break
            
            zmm1 = *(&var_1d8 + (rsi_24 << 2))
            rsi_24 += 4
        
        uint128_t var_378_3 = zmm11
        zmm3 = var_3f8
        zmm13 = var_3e8
        float temp0_993[0x4] = _mm_sub_ps(zmm3, zmm0)
        zmm7 = *arg1
        zmm5 = *(arg1 + 4)
        float temp0_994[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm0 = _mm_sub_ps(zmm3, temp0_994)
        float temp0_996[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm1 = _mm_sub_ps(zmm13, temp0_996)
        zmm6 = *arg3
        zmm4 = *(arg3 + 4)
        float temp0_998[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm0 = _mm_div_ps(zmm0, temp0_998)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm1 = _mm_div_ps(zmm1, zmm4)
        zmm11 = arg3[1].d
        zmm14 = _mm_cvttps_epi32(zmm0)
        zmm9 = _mm_cvttps_epi32(zmm1)
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), temp0_998), temp0_994)
        float temp0_1008[0x4] =
            __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
        zmm1 = _mm_shuffle_ps(temp0_1008, temp0_1008, 0)
        uint128_t var_348_3 = zmm1
        uint128_t var_328_5 = zmm3
        zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm3, 1)
        zmm3 = _mm_add_epi32(zmm14, _mm_cmpeq_epi32(zmm1, zmm1))
        zmm7 = _mm_blendv_ps(zmm3, zmm14, zmm0)
        uint128_t var_248_2 = zmm9
        uint128_t var_2d8_4 = zmm4
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), zmm4), temp0_996)
        zmm9 = _mm_shuffle_ps(temp0_1008, temp0_1008, 0x55)
        zmm0 = _mm_add_ps(zmm0, zmm9)
        zmm4 = zmm0
        zmm0 = _mm_cmpeq_ps(zmm0, zmm13, 1)
        char temp0_1022 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm2))
        zmm10 = arg1[1].d
        float temp0_1023[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        zmm1 = _mm_sub_ps(temp0_923, temp0_1023)
        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0)
        zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, zmm11))
        uint128_t var_1f8_1 = zmm1
        float temp0_1030[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm11), temp0_1023)
        float temp0_1031[0x4] = _mm_shuffle_ps(temp0_1008, temp0_1008, 0xaa)
        var_3f8 = zmm7
        zmm4 = _mm_cmpeq_ps(zmm4, zmm13, 5)
        
        if (temp0_1022 != 0)
            zmm14 = var_248_2
        
        float temp0_1033[0x4] = __subps_xmmps_memps(zmm13, var_2b8_4)
        float temp0_1034[0x4] = _mm_mul_ps(temp0_993, temp0_993)
        float temp0_1035[0x4] = _mm_add_ps(temp0_1030, temp0_1031)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm2)) != 0)
            zmm3 = __paddd_xmmdq_memdq(var_248_2, data_142d3f800)
        
        float temp0_1039[0x4] = __subps_xmmps_memps(temp0_923, var_2a8_4)
        zmm1 = _mm_add_ps(temp0_1034, zx.o(0))
        float temp0_1041[0x4] = _mm_mul_ps(temp0_1033, temp0_1033)
        zmm4 = _mm_blendv_ps(zmm3, zmm14, zmm0)
        var_3e8 = zmm4
        zmm0 = _mm_cmpeq_ps(temp0_1035, temp0_923, 5)
        float temp0_1044[0x4] = _mm_cmpeq_ps(temp0_1035, temp0_923, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_1044, zmm2)) != 0)
            zmm14 = var_1f8_1
        
        float temp0_1047[0x4] = _mm_add_ps(zmm1, temp0_1041)
        float temp0_1048[0x4] = _mm_mul_ps(temp0_1039, temp0_1039)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
            zmm3 = __paddd_xmmdq_memdq(var_1f8_1, data_142d3f800)
        
        zmm3 = _mm_blendv_ps(zmm3, zmm14, temp0_1044)
        zmm14 = _mm_add_ps(temp0_1047, temp0_1048)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_998), temp0_994)
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), var_2d8_4), temp0_996)
        uint128_t var_3d8_8 = zmm3
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm11), temp0_1023)
        float temp0_1063[0x4] = _mm_add_ps(var_348_3, zmm0)
        zmm9 = _mm_add_ps(zmm9, zmm1)
        float temp0_1065[0x4] = _mm_add_ps(temp0_1031, zmm3)
        zmm0 = _mm_sub_ps(var_328_5, temp0_1063)
        zmm1 = _mm_sub_ps(zmm13, zmm9)
        float temp0_1068[0x4] = _mm_sub_ps(temp0_923, temp0_1065)
        zmm0 = _mm_div_ps(zmm0, temp0_998)
        zmm1 = _mm_div_ps(zmm1, var_2d8_4)
        float temp0_1071[0x4] = _mm_div_ps(temp0_1068, zmm11)
        var_3b8 = zmm0
        uint128_t var_3a8_8 = zmm1
        int64_t rcx_33 = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm7 = _mm_cmpeq_epi32(zmm7, zmm0)
            
            if (_mm_movemask_ps(zmm7 & zmm2) != 0)
                char temp0_1075 = _mm_movemask_ps(zmm7)
                
                if ((temp0_1075 & 1) == 0)
                    if ((temp0_1075 & 2) != 0)
                        goto label_1400a419f
                    
                    goto label_1400a40df
                
                *(&var_3f8 + (rcx_33 << 2)) = 0
                
                if ((temp0_1075 & 2) != 0)
                label_1400a419f:
                    *(&var_3f8:4 + (rcx_33 << 2)) = 0
                    
                    if ((temp0_1075 & 4) == 0)
                        goto label_1400a40e7
                    
                    goto label_1400a41af
                
            label_1400a40df:
                
                if ((temp0_1075 & 4) == 0)
                label_1400a40e7:
                    
                    if ((temp0_1075 & 8) != 0)
                        goto label_1400a41bf
                    
                    goto label_1400a40ef
                
            label_1400a41af:
                *(&var_3f8:8 + (rcx_33 << 2)) = 0
                
                if ((temp0_1075 & 8) != 0)
                label_1400a41bf:
                    *(&var_3f8:0xc + (rcx_33 << 2)) = 0
                    
                    if ((temp0_1075 & 1) == 0)
                        goto label_1400a40f7
                    
                    goto label_1400a41cf
                
            label_1400a40ef:
                
                if ((temp0_1075 & 1) == 0)
                label_1400a40f7:
                    
                    if ((temp0_1075 & 2) != 0)
                        goto label_1400a41df
                    
                    goto label_1400a40ff
                
            label_1400a41cf:
                *(&var_3b8 + (rcx_33 << 2)) = 0
                
                if ((temp0_1075 & 2) != 0)
                label_1400a41df:
                    *(&var_3b8:4 + (rcx_33 << 2)) = 0
                    
                    if ((temp0_1075 & 4) == 0)
                        goto label_1400a4107
                    
                    goto label_1400a41ef
                
            label_1400a40ff:
                
                if ((temp0_1075 & 4) != 0)
                label_1400a41ef:
                    *(&var_3b8:8 + (rcx_33 << 2)) = 0
                    
                    if ((temp0_1075 & 8) != 0)
                        *(&var_3b8:0xc + (rcx_33 << 2)) = 0
                else
                label_1400a4107:
                    
                    if ((temp0_1075 & 8) != 0)
                        *(&var_3b8:0xc + (rcx_33 << 2)) = 0
            
            int32_t rdx_69 = *(arg4 + rcx_33)
            zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_69 - 1), 0), 
                *(&var_3f8 + (rcx_33 << 2)))
            
            if (_mm_movemask_ps(zmm1 & zmm2) != 0)
                char temp0_1079 = _mm_movemask_ps(zmm1)
                
                if ((temp0_1079 & 1) == 0)
                    if ((temp0_1079 & 2) != 0)
                        goto label_1400a421b
                    
                    goto label_1400a414d
                
                *(&var_3f8 + (rcx_33 << 2)) = rdx_69 - 2
                
                if ((temp0_1079 & 2) != 0)
                label_1400a421b:
                    *(&var_3f8:4 + (rcx_33 << 2)) = rdx_69 - 2
                    
                    if ((temp0_1079 & 4) == 0)
                        goto label_1400a4155
                    
                    goto label_1400a4227
                
            label_1400a414d:
                
                if ((temp0_1079 & 4) == 0)
                label_1400a4155:
                    
                    if ((temp0_1079 & 8) != 0)
                        goto label_1400a4233
                    
                    goto label_1400a415d
                
            label_1400a4227:
                *(&var_3f8:8 + (rcx_33 << 2)) = rdx_69 - 2
                
                if ((temp0_1079 & 8) != 0)
                label_1400a4233:
                    *(&var_3f8:0xc + (rcx_33 << 2)) = rdx_69 - 2
                    
                    if ((temp0_1079 & 1) == 0)
                        goto label_1400a4165
                    
                    goto label_1400a423f
                
            label_1400a415d:
                
                if ((temp0_1079 & 1) == 0)
                label_1400a4165:
                    
                    if ((temp0_1079 & 2) != 0)
                        goto label_1400a424f
                    
                    goto label_1400a416d
                
            label_1400a423f:
                *(&var_3b8 + (rcx_33 << 2)) = 0x3f800000
                
                if ((temp0_1079 & 2) != 0)
                label_1400a424f:
                    *(&var_3b8:4 + (rcx_33 << 2)) = 0x3f800000
                    
                    if ((temp0_1079 & 4) == 0)
                        goto label_1400a4175
                    
                    goto label_1400a425f
                
            label_1400a416d:
                
                if ((temp0_1079 & 4) != 0)
                label_1400a425f:
                    *(&var_3b8:8 + (rcx_33 << 2)) = 0x3f800000
                    
                    if ((temp0_1079 & 8) != 0)
                        *(&var_3b8:0xc + (rcx_33 << 2)) = 0x3f800000
                else
                label_1400a4175:
                    
                    if ((temp0_1079 & 8) != 0)
                        *(&var_3b8:0xc + (rcx_33 << 2)) = 0x3f800000
            
            if (rcx_33 == 8)
                break
            
            zmm7 = *(&var_3e8 + (rcx_33 << 2))
            rcx_33 += 4
        
        zmm4 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm7 = var_3f8
        zmm5 = var_3e8
        zmm8 = var_3d8_8
        zmm3 = _mm_mullo_epi32(zmm4, zmm7)
        zmm11 = _mm_add_epi32(zmm3, zmm5)
        zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm13 = _mm_mullo_epi32(zmm11, zmm0)
        zmm1 = _mm_add_epi32(zmm13, zmm8)
        int32_t* rax_130 = *(arg5 + 0x10)
        zmm1 = _mm_slli_epi32(zmm1, 2) & zmm2
        int64_t rdx_71 = sx.q(zmm1.d)
        zmm6 = *(rax_130 + rdx_71)
        int64_t rbx_24 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rdi_26 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rbp_42 = sx.q(_mm_extract_epi32(zmm1, 3))
        float temp0_1092[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_130 + rbx_24), 0x10), 
                *(rax_130 + rdi_26), 0x20), 
            *(rax_130 + rbp_42), 0x30)
        zmm12 = _mm_cmpeq_epi32(temp0_1044, temp0_1044)
        zmm7 = _mm_mullo_epi32(_mm_sub_epi32(zmm7, zmm12), zmm4)
        zmm1 =
            _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm7, zmm5), zmm0), zmm8), 2)
        zmm11 = _mm_mullo_epi32(_mm_add_epi32(zmm11, zmm4), zmm0)
        zmm1 &= zmm2
        zmm4 = *(rax_130 + sx.q(zmm1.d))
        int32_t temp0_1102 = _mm_extract_epi32(zmm1, 1)
        int64_t rbx_26 = sx.q(_mm_extract_epi32(zmm1, 2))
        int32_t temp0_1104 = _mm_extract_epi32(zmm1, 3)
        zmm4 = _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_130 + sx.q(temp0_1102)), 0x10), 
                    *(rax_130 + rbx_26), 0x20), 
                *(rax_130 + sx.q(temp0_1104)), 0x30), 
            temp0_1092)
        zmm10 = var_3b8
        zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm10), temp0_1092)
        zmm5 = _mm_sub_epi32(zmm5, zmm12)
        zmm3 =
            _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm5), zmm0), zmm8), 2)
            & zmm2
        zmm6 = *(rax_130 + sx.q(zmm3.d))
        int64_t rcx_40 = sx.q(_mm_extract_epi32(zmm3, 1))
        int32_t temp0_1117 = _mm_extract_epi32(zmm3, 2)
        int64_t rbx_28 = sx.q(_mm_extract_epi32(zmm3, 3))
        float temp0_1121[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_130 + rcx_40), 0x10), 
                *(rax_130 + sx.q(temp0_1117)), 0x20), 
            *(rax_130 + rbx_28), 0x30)
        zmm5 =
            _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm7), zmm0), zmm8), 2)
            & zmm2
        zmm7 = *(rax_130 + sx.q(zmm5[0]))
        int32_t temp0_1126 = _mm_extract_epi32(zmm5, 1)
        int64_t rbp_50 = sx.q(_mm_extract_epi32(zmm5, 2))
        int32_t temp0_1128 = _mm_extract_epi32(zmm5, 3)
        float temp0_1133[0x4] = _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_130 + sx.q(temp0_1126)), 0x10), 
                        *(rax_130 + rbp_50), 0x20), 
                    *(rax_130 + sx.q(temp0_1128)), 0x30), 
                temp0_1121), 
            zmm10)
        int32_t* rbx_30 = var_298.q
        zmm3 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(r14_2 + rax_130 + rdx_71), 
                    *(rbx_30 + rax_130 + rbx_24), 0x10), 
                *(r15_8 + rax_130 + rdi_26), 0x20), 
            *(r10_5 + rax_130 + rbp_42), 0x30)
        zmm0 = _mm_add_epi32(zmm0, zmm8)
        zmm13 = _mm_add_epi32(zmm13, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm11)
        zmm11 = _mm_slli_epi32(_mm_add_epi32(zmm11, zmm8), 2) & zmm2
        zmm5 = *(r14_2 + sx.q(zmm11.d) + rax_130)
        void* rcx_51 = sx.q(_mm_extract_epi32(zmm11, 1)) + rax_130
        void* rdx_77 = sx.q(_mm_extract_epi32(zmm11, 2)) + rax_130
        void* rbp_53 = sx.q(_mm_extract_epi32(zmm11, 3)) + rax_130
        float temp0_1147[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rbx_30 + rcx_51), 0x10), 
                *(r15_8 + rdx_77), 0x20), 
            *(r10_5 + rbp_53), 0x30)
        float temp0_1148[0x4] = _mm_add_ps(temp0_1133, temp0_1121)
        float temp0_1151[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1147, zmm3), zmm10), zmm3)
        zmm13 = _mm_slli_epi32(zmm13, 2) & zmm2
        zmm3 = *(r14_2 + sx.q(zmm13[0]) + rax_130)
        void* rcx_57 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_130
        void* rdx_80 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_130
        void* rbp_56 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_130
        zmm3 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rbx_30 + rcx_57), 0x10), 
                *(r15_8 + rdx_80), 0x20), 
            *(r10_5 + rbp_56), 0x30)
        zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
        zmm1 = *(r14_2 + sx.q(zmm0.d) + rax_130)
        void* rcx_63 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_130
        void* rdx_83 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_130
        void* rbp_59 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_130
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rbx_30 + rcx_63), 0x10), 
                            *(r15_8 + rdx_83), 0x20), 
                        *(r10_5 + rbp_59), 0x30), 
                    zmm3), 
                zmm10), 
            zmm3)
        float temp0_1171[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1148, zmm4), var_3a8_8), zmm4)
        zmm1 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_1151), var_3a8_8), temp0_1151), 
                    temp0_1171), 
                temp0_1071), 
            temp0_1171)
        zmm3 = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm14, 7), zmm3), zmm2)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm3 = _mm_rsqrt_ps(zmm14)
            float temp0_1185[0x4] = _mm_mul_ps(_mm_mul_ps(zmm14, zmm3), zmm3)
            zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_1185), zmm3), 
                data_142d3f640)
            zmm3 = _mm_rcp_ps(zmm4)
            zmm4 = _mm_mul_ps(zmm4, zmm3)
            zmm1 = _mm_blendv_ps(zmm1, 
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), zmm3), zmm1), zmm0)
        
        rcx_1 = arg10
        rdx_45 = arg11
        zmm3 = var_318_2
        zmm9 = var_358_3
        zmm10 = var_368_3
        zmm11 = var_378_3
        zmm0 = arg9
        zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
        zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm2)
        result = _mm_movemask_ps(zmm0)
        
        if (result.b != 0)
            float temp0_1200[0x4] = _mm_mul_ps(var_1e8, zmm1)
            float temp0_1201[0x4] = _mm_mul_ps(var_1d8, zmm1)
            float temp0_1202[0x4] = _mm_mul_ps(var_1c8_1, zmm1)
            result = zx.d(result.b)
            zmm4 = zmm10
            char temp3_1 = result.b & 1
            
            if (temp3_1 == 0)
                zmm8 = zmm9
                
                if (temp3_1 != 0)
                    goto label_1400a4865
                
                goto label_1400a46c2
            
            zmm4.d = zmm10.d f+ temp0_1200[0]
            zmm8 = zmm9
            
            if (temp3_1 != 0)
            label_1400a4865:
                zmm8 = zmm9
                zmm8[0] = zmm8[0] + temp0_1201[0]
                zmm2 = zmm11
                
                if (temp3_1 == 0)
                    goto label_1400a46cc
                
                goto label_1400a4878
            
        label_1400a46c2:
            zmm2 = zmm11
            bool cond:30_1
            bool cond:31_1
            bool cond:38_1
            bool cond:39_1
            
            if (temp3_1 == 0)
            label_1400a46cc:
                zmm10 = _mm_add_ps(zmm10, temp0_1200)
                char temp10_1 = result.b & 2
                cond:30_1 = temp10_1 != 0
                cond:31_1 = temp10_1 == 0
                cond:38_1 = temp10_1 == 0
                cond:39_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_1400a488c
                
                goto label_1400a46d8
            
        label_1400a4878:
            zmm2 = zmm11
            zmm2[0] = zmm2[0] + temp0_1202[0]
            zmm10 = _mm_add_ps(zmm10, temp0_1200)
            char temp9_1 = result.b & 2
            cond:30_1 = temp9_1 != 0
            cond:31_1 = temp9_1 == 0
            cond:38_1 = temp9_1 == 0
            cond:39_1 = temp9_1 != 0
            
            if (temp9_1 != 0)
            label_1400a488c:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
                zmm9 = _mm_add_ps(zmm9, temp0_1201)
                
                if (cond:31_1)
                    goto label_1400a46e2
                
                goto label_1400a489d
            
        label_1400a46d8:
            zmm9 = _mm_add_ps(zmm9, temp0_1201)
            
            if (not(cond:30_1))
            label_1400a46e2:
                zmm11 = _mm_add_ps(zmm11, temp0_1202)
                
                if (cond:39_1)
                    goto label_1400a48ae
                
                goto label_1400a46ec
            
        label_1400a489d:
            zmm8 = _mm_blend_ps(zmm8, zmm9, 2)
            zmm11 = _mm_add_ps(zmm11, temp0_1202)
            bool cond:46_1
            bool cond:47_1
            bool cond:54_1
            bool cond:55_1
            
            if (not(cond:38_1))
            label_1400a48ae:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                char temp18_1 = result.b & 4
                cond:46_1 = temp18_1 == 0
                cond:47_1 = temp18_1 != 0
                cond:54_1 = temp18_1 != 0
                cond:55_1 = temp18_1 == 0
                
                if (temp18_1 == 0)
                    goto label_1400a46f4
                
                goto label_1400a48bd
            
        label_1400a46ec:
            char temp17_1 = result.b & 4
            cond:46_1 = temp17_1 == 0
            cond:47_1 = temp17_1 != 0
            cond:54_1 = temp17_1 != 0
            cond:55_1 = temp17_1 == 0
            
            if (temp17_1 != 0)
            label_1400a48bd:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
                
                if (not(cond:46_1))
                label_1400a48ca:
                    zmm8 = _mm_blend_ps(zmm8, zmm9, 4)
                    
                    if (cond:55_1)
                        goto label_1400a4700
                    
                    goto label_1400a48d7
            else
            label_1400a46f4:
                
                if (cond:47_1)
                    goto label_1400a48ca
            
            bool cond:62_1
            bool cond:63_1
            bool cond:66_1
            bool cond:67_1
            
            if (not(cond:54_1))
            label_1400a4700:
                char temp26_1 = result.b & 8
                cond:62_1 = temp26_1 != 0
                cond:63_1 = temp26_1 == 0
                cond:66_1 = temp26_1 == 0
                cond:67_1 = temp26_1 != 0
                
                if (temp26_1 == 0)
                    goto label_1400a48e6
                
                goto label_1400a4708
            
        label_1400a48d7:
            zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
            char temp25_1 = result.b & 8
            cond:62_1 = temp25_1 != 0
            cond:63_1 = temp25_1 == 0
            cond:66_1 = temp25_1 == 0
            cond:67_1 = temp25_1 != 0
            
            if (temp25_1 == 0)
            label_1400a48e6:
                zmm10 = zmm4
                
                if (cond:63_1)
                    goto label_1400a4715
                
                goto label_1400a48f0
            
        label_1400a4708:
            zmm10 = _mm_blend_ps(zmm10, zmm4, 7)
            
            if (cond:62_1)
            label_1400a48f0:
                zmm9 = _mm_blend_ps(zmm9, zmm8, 7)
                
                if (not(cond:66_1))
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
            else
            label_1400a4715:
                zmm9 = zmm8
                
                if (cond:67_1)
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
            
            zmm4 = var_338_2
            var_338_2 = _mm_blendv_ps(zmm4, _mm_add_ps(zmm1, zmm4), zmm0)
            zmm11 = zmm2
    else
    label_1400a2c03:
        rcx_1 = arg10
        rdx_45 = arg11
        zmm3 = var_318_2
    
    zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0))
    zmm0 = zmm3 & not.o(zmm10)
    zmm0 = _mm_hadd_ps(zmm0, zmm0)
    zmm0 = _mm_hadd_ps(zmm0, zmm0)
    zmm1 = zmm3 & not.o(zmm9)
    zmm1 = _mm_hadd_ps(zmm1, zmm1)
    zmm0 = _mm_insert_ps(zmm0, _mm_hadd_ps(zmm1, zmm1), 0x1c)
    zmm1 = zmm3 & not.o(zmm11)
    zmm1 = _mm_hadd_ps(zmm1, zmm1)
    zmm0 = zmm0.q | _mm_hadd_ps(zmm1, zmm1).q << 0x40
    zmm1 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_45), rdx_45[1].d, 0x20), zmm0)
    *rdx_45 = zmm1.d
    *(rdx_45 + 4) = __extractps_memd_xmmps_immb(zmm1, 1)
    rdx_45[1].d = __extractps_memd_xmmps_immb(zmm1, 2)
    zmm3 &= not.o(var_338_2)
    zmm3 = _mm_hadd_ps(zmm3, zmm3)
    zmm3.d = _mm_hadd_ps(zmm3, zmm3).d f+ *rcx_1
    *rcx_1 = zmm3.d
else
    int32_t var_258 = zmm1.d
    float var_254_1 = temp0_5[0]
    int32_t var_250_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, __insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20))
    int32_t var_268 = zmm0.d
    int32_t var_264_1 = __extractps_memd_xmmps_immb(zmm0, 1)
    int32_t var_260_1 = __extractps_memd_xmmps_immb(zmm0, 2)
    int32_t i_1 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
    uint128_t var_348_1
    int32_t* rcx
    int64_t* rdx_44
    uint64_t r10_1
    
    if (i_1 s<= 0)
        r10_1 = 0
        zmm10 = zx.o(0)
        zmm9 = zx.o(0)
        zmm8 = zx.o(0)
        var_348_1 = zx.o(0)
        result = arg12
        
        if (0 s< result)
        label_1400a1d63:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r10_1.d), 0), data_142e11d00)
            zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm0)
            int64_t rax_40 = sx.q(r10_1.d << 2)
            uint32_t temp0_303 = _mm_movemask_ps(zmm2)
            float var_358_1[0x4] = zmm8
            uint128_t var_368_1 = zmm9
            float var_378_1[0x4] = zmm10
            
            if ((zx.q(temp0_303) & 0xfffffff9) != 9)
                if ((temp0_303.b & 1) != 0)
                    var_3f8.d = *(arg8 + rax_40)
                
                if ((temp0_303.b & 2) == 0)
                    if ((temp0_303.b & 4) != 0)
                        goto label_1400a4a29
                    
                    goto label_1400a2c46
                
                var_3f8:4.d = *(arg8 + rax_40 + 4)
                
                if ((temp0_303.b & 4) == 0)
                label_1400a2c46:
                    
                    if ((temp0_303.b & 8) != 0)
                        var_3f8:0xc.d = *(arg8 + rax_40 + 0xc)
                else
                label_1400a4a29:
                    var_3f8:8.d = *(arg8 + rax_40 + 8)
                    
                    if ((temp0_303.b & 8) != 0)
                        var_3f8:0xc.d = *(arg8 + rax_40 + 0xc)
                
                zmm1 = var_3f8
            else
                zmm1 = *(arg8 + rax_40)
            
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
            int64_t rax_82 = sx.q(zmm1.d)
            int64_t rbx_13 = arg7 + (rax_82 << 2)
            zmm0 = *(arg7 + (rax_82 << 2))
            int64_t rbp_19 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t r13_8 = arg7 + (rbp_19 << 2)
            int64_t rdi_20 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rdx_49 = arg7 + (rdi_20 << 2)
            int64_t rax_84 = sx.q(_mm_extract_epi32(zmm1, 3))
            int64_t rsi_19 = arg7 + (rax_84 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbp_19 << 2)), 0x10), 
                    *(arg7 + (rdi_20 << 2)), 0x20), 
                *(arg7 + (rax_84 << 2)), 0x30)
            zmm3 = data_142fc95e0 & zmm2
            uint64_t r14_1 = zx.q(zmm3.d)
            zmm8 = *(r14_1 + rbx_13)
            uint64_t rax_85 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t r15_7 = zx.q(_mm_extract_epi32(zmm3, 2))
            uint64_t r10_4 = zx.q(_mm_extract_epi32(zmm3, 3))
            var_298.q = rax_85
            float temp0_613[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_85 + r13_8), 0x10), *(r15_7 + rdx_49), 
                    0x20), 
                *(r10_4 + rsi_19), 0x30)
            zmm3 = data_142fc95f0 & zmm2
            zmm6 = *(zx.q(zmm3.d) + rbx_13)
            uint64_t rax_87 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t rdi_21 = zx.q(_mm_extract_epi32(zmm3, 2))
            uint64_t rbx_14 = zx.q(_mm_extract_epi32(zmm3, 3))
            float temp0_619[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_87 + r13_8), 0x10), *(rdi_21 + rdx_49), 
                    0x20), 
                *(rbx_14 + rsi_19), 0x30)
            uint128_t var_238_1 = zmm0
            float var_208_1[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            float temp0_620[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_3f8 = temp0_620
            var_3e8 = temp0_620
            zmm7 = *arg6
            zmm1 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_622[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm9 = _mm_mul_ps(temp0_613, temp0_622)
            float temp0_624[0x4] = _mm_mul_ps(temp0_622, temp0_619)
            float temp0_625[0x4] = _mm_mul_ps(temp0_619, zmm1)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_mul_ps(zmm1, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm4)
            zmm3 = _mm_mul_ps(zx.o(0), temp0_620)
            float temp0_631[0x4] = _mm_sub_ps(temp0_625, _mm_mul_ps(zmm4, temp0_613))
            zmm0 = _mm_sub_ps(zmm0, temp0_624)
            zmm9 = _mm_sub_ps(zmm9, zmm1)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            float temp0_635[0x4] = _mm_add_ps(temp0_631, temp0_631)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            zmm9 = _mm_add_ps(zmm9, zmm9)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_3b8 = temp0_635
            uint128_t var_3a8_5 = zmm0
            uint128_t var_398_5 = zmm9
            uint128_t var_388_3 = zmm3
            zmm3 = _mm_mul_ps(zmm3, temp0_620)
            zmm1 = _mm_mul_ps(temp0_620, temp0_635)
            float temp0_641[0x4] = _mm_mul_ps(temp0_620, zmm0)
            float temp0_642[0x4] = _mm_mul_ps(temp0_620, zmm9)
            zmm1 = __addps_xmmps_memps(zmm1, var_238_1)
            float temp0_644[0x4] = __addps_xmmps_memps(temp0_641, temp0_613)
            float temp0_645[0x4] = __addps_xmmps_memps(temp0_642, temp0_619)
            float var_3c8_3[0x4] = temp0_620
            uint128_t var_128_1 = zmm1
            float var_118_1[0x4] = temp0_644
            float var_108_1[0x4] = temp0_645
            uint128_t var_f8_1 = __addps_xmmps_memps(zmm3, var_208_1)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            float temp0_647[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm0, zmm4)
            zmm4 = _mm_mul_ps(zmm4, zmm9)
            zmm9 = _mm_mul_ps(zmm9, temp0_647)
            float temp0_652[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_653[0x4] = _mm_mul_ps(temp0_647, temp0_635)
            float temp0_654[0x4] = _mm_mul_ps(temp0_635, temp0_652)
            zmm9 = _mm_sub_ps(zmm9, _mm_mul_ps(temp0_652, zmm0))
            float temp0_657[0x4] = _mm_sub_ps(temp0_654, zmm4)
            zmm3 = _mm_sub_ps(zmm3, temp0_653)
            zmm9 = _mm_add_ps(zmm9, zmm1)
            float temp0_660[0x4] = _mm_add_ps(temp0_657, temp0_644)
            zmm3 = _mm_add_ps(zmm3, temp0_645)
            zmm0 = arg6[1].d
            zmm4 = *(arg6 + 0x14)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm9)
            zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_660)
            zmm1 = *(arg6 + 0x18)
            zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
            uint128_t var_188 = zmm0
            uint128_t var_2b8_3 = zmm4
            uint128_t var_178 = zmm4
            uint128_t var_2a8_3 = zmm1
            uint128_t var_168_1 = zmm1
            int64_t rsi_20 = 0
            zmm1 = zmm0
            
            while (true)
                zmm4 = *(&var_258 + rsi_20)
                zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_669[0x4] = _mm_cmpeq_ps(zmm3, zmm1, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_669, zmm2)) != 0)
                    char temp0_672 = _mm_movemask_ps(temp0_669)
                    
                    if ((temp0_672 & 1) == 0)
                        if ((temp0_672 & 2) != 0)
                            goto label_1400a300d
                        
                        goto label_1400a2f33
                    
                    *(&var_3f8 + (rsi_20 << 2)) = zmm4.d
                    
                    if ((temp0_672 & 2) != 0)
                    label_1400a300d:
                        *(&var_3f8:4 + (rsi_20 << 2)) = zmm4.d
                        
                        if ((temp0_672 & 4) == 0)
                            goto label_1400a2f3b
                        
                        goto label_1400a301b
                    
                label_1400a2f33:
                    
                    if ((temp0_672 & 4) != 0)
                    label_1400a301b:
                        *(&var_3f8:8 + (rsi_20 << 2)) = zmm4.d
                        
                        if ((temp0_672 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_20 << 2)) = zmm4.d
                    else
                    label_1400a2f3b:
                        
                        if ((temp0_672 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_20 << 2)) = zmm4.d
                
                zmm3 = _mm_cmpeq_ps(zmm3, zmm1, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm3)) != 0)
                    zmm5 = *(&var_268 + rsi_20)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 1), zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm2)) != 0)
                        char temp0_681 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_681 & 1) == 0)
                            if ((temp0_681 & 2) != 0)
                                goto label_1400a303b
                            
                            goto label_1400a2f94
                        
                        *(&var_3f8 + (rsi_20 << 2)) = zmm5[0]
                        
                        if ((temp0_681 & 2) != 0)
                        label_1400a303b:
                            *(&var_3f8:4 + (rsi_20 << 2)) = zmm5[0]
                            
                            if ((temp0_681 & 4) == 0)
                                goto label_1400a2f9c
                            
                            goto label_1400a3049
                        
                    label_1400a2f94:
                        
                        if ((temp0_681 & 4) != 0)
                        label_1400a3049:
                            *(&var_3f8:8 + (rsi_20 << 2)) = zmm5[0]
                            
                            if ((temp0_681 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_20 << 2)) = zmm5[0]
                        else
                        label_1400a2f9c:
                            
                            if ((temp0_681 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_20 << 2)) = zmm5[0]
                    
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 5), zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
                        zmm3 = *(&var_188 + (rsi_20 << 2))
                        char temp0_686 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_686 & 1) == 0)
                            if ((temp0_686 & 2) != 0)
                                goto label_1400a3069
                            
                            goto label_1400a2fd5
                        
                        *(&var_3f8 + (rsi_20 << 2)) = zmm3.d
                        
                        if ((temp0_686 & 2) != 0)
                        label_1400a3069:
                            *(&var_3f8:4 + (rsi_20 << 2)) = __extractps_memd_xmmps_immb(zmm3, 1)
                            
                            if ((temp0_686 & 4) == 0)
                                goto label_1400a2fdd
                            
                            goto label_1400a3079
                        
                    label_1400a2fd5:
                        
                        if ((temp0_686 & 4) != 0)
                        label_1400a3079:
                            *(&var_3f8:8 + (rsi_20 << 2)) = __extractps_memd_xmmps_immb(zmm3, 2)
                            
                            if ((temp0_686 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_20 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm3, 3)
                        else
                        label_1400a2fdd:
                            
                            if ((temp0_686 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_20 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm3, 3)
                
                if (rsi_20 == 8)
                    break
                
                zmm1 = *(&var_178 + (rsi_20 << 2))
                rsi_20 += 4
            
            zmm5 = var_3f8
            zmm11 = var_3e8
            float temp0_690[0x4] = _mm_sub_ps(zmm5, zmm0)
            zmm6 = *arg1
            zmm3 = *(arg1 + 4)
            float temp0_691[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm0 = _mm_sub_ps(zmm5, temp0_691)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1 = _mm_sub_ps(zmm11, zmm3)
            zmm4 = *arg3
            zmm7 = *(arg3 + 4)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, zmm4)
            float temp0_697[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm1 = _mm_div_ps(zmm1, temp0_697)
            zmm9 = arg3[1].d
            zmm12 = _mm_cvttps_epi32(zmm0)
            zmm10 = _mm_cvttps_epi32(zmm1)
            uint128_t var_2e8_3 = zmm4
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), zmm4), temp0_691)
            zmm4 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm9, 0x20), data_142fc9600)
            zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0)
            uint128_t var_338_3 = zmm1
            float var_328_4[0x4] = zmm5
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm5, 1)
            zmm5 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(zmm1, zmm1))
            zmm6 = _mm_blendv_ps(zmm5, zmm12, zmm0)
            uint128_t var_2f8_3 = zmm3
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_697), zmm3)
            float temp0_715[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            zmm0 = _mm_add_ps(zmm0, temp0_715)
            zmm7 = zmm0
            zmm0 = _mm_cmpeq_ps(zmm0, zmm11, 1)
            char temp0_719 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm2))
            zmm13 = arg1[1].d
            float temp0_720[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm1 = _mm_sub_ps(temp0_620, temp0_720)
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, zmm9))
            uint128_t var_248_1 = zmm1
            zmm14 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm9), temp0_720)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            var_3f8 = zmm6
            float temp0_729[0x4] = _mm_cmpeq_ps(zmm7, zmm11, 5)
            
            if (temp0_719 != 0)
                zmm12 = zmm10
            
            uint128_t var_2c8_3 = zmm11
            zmm11 = __subps_xmmps_memps(zmm11, var_2b8_3)
            float temp0_731[0x4] = _mm_mul_ps(temp0_690, temp0_690)
            zmm14 = _mm_add_ps(zmm14, zmm4)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_729, zmm2)) != 0)
                zmm5 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
            
            float temp0_736[0x4] = __subps_xmmps_memps(temp0_620, var_2a8_3)
            zmm1 = _mm_add_ps(temp0_731, zx.o(0))
            zmm11 = _mm_mul_ps(zmm11, zmm11)
            float temp0_739[0x4] = _mm_blendv_ps(zmm5, zmm12, zmm0)
            var_3e8 = temp0_739
            zmm0 = _mm_cmpeq_ps(zmm14, temp0_620, 5)
            zmm14 = _mm_cmpeq_ps(zmm14, temp0_620, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm14, zmm2)) != 0)
                zmm12 = var_248_1
            
            zmm3 = _mm_add_ps(zmm1, zmm11)
            float temp0_745[0x4] = _mm_mul_ps(temp0_736, temp0_736)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
                zmm5 = __paddd_xmmdq_memdq(var_248_1, data_142d3f800)
            
            float temp0_749[0x4] = _mm_blendv_ps(zmm5, zmm12, zmm14)
            zmm14 = _mm_add_ps(zmm3, temp0_745)
            zmm8 = var_2e8_3
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), zmm8), temp0_691)
            zmm3 = temp0_697
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_739), zmm3), var_2f8_3)
            float temp0_759[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_749), zmm9), temp0_720)
            float temp0_760[0x4] = _mm_add_ps(var_338_3, zmm0)
            float temp0_761[0x4] = _mm_add_ps(temp0_715, zmm1)
            zmm4 = _mm_add_ps(zmm4, temp0_759)
            zmm0 = _mm_sub_ps(var_328_4, temp0_760)
            zmm1 = _mm_sub_ps(var_2c8_3, temp0_761)
            float temp0_765[0x4] = _mm_sub_ps(temp0_620, zmm4)
            zmm0 = _mm_div_ps(zmm0, zmm8)
            zmm1 = _mm_div_ps(zmm1, zmm3)
            float temp0_768[0x4] = _mm_div_ps(temp0_765, zmm9)
            var_3b8 = zmm0
            uint128_t var_3a8_6 = zmm1
            int64_t rcx_2 = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
                
                if (_mm_movemask_ps(zmm6 & zmm2) != 0)
                    char temp0_772 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_772 & 1) == 0)
                        if ((temp0_772 & 2) != 0)
                            goto label_1400a341f
                        
                        goto label_1400a335f
                    
                    *(&var_3f8 + (rcx_2 << 2)) = 0
                    
                    if ((temp0_772 & 2) != 0)
                    label_1400a341f:
                        *(&var_3f8:4 + (rcx_2 << 2)) = 0
                        
                        if ((temp0_772 & 4) == 0)
                            goto label_1400a3367
                        
                        goto label_1400a342f
                    
                label_1400a335f:
                    
                    if ((temp0_772 & 4) == 0)
                    label_1400a3367:
                        
                        if ((temp0_772 & 8) != 0)
                            goto label_1400a343f
                        
                        goto label_1400a336f
                    
                label_1400a342f:
                    *(&var_3f8:8 + (rcx_2 << 2)) = 0
                    
                    if ((temp0_772 & 8) != 0)
                    label_1400a343f:
                        *(&var_3f8:0xc + (rcx_2 << 2)) = 0
                        
                        if ((temp0_772 & 1) == 0)
                            goto label_1400a3377
                        
                        goto label_1400a344f
                    
                label_1400a336f:
                    
                    if ((temp0_772 & 1) == 0)
                    label_1400a3377:
                        
                        if ((temp0_772 & 2) != 0)
                            goto label_1400a345f
                        
                        goto label_1400a337f
                    
                label_1400a344f:
                    *(&var_3b8 + (rcx_2 << 2)) = 0
                    
                    if ((temp0_772 & 2) != 0)
                    label_1400a345f:
                        *(&var_3b8:4 + (rcx_2 << 2)) = 0
                        
                        if ((temp0_772 & 4) == 0)
                            goto label_1400a3387
                        
                        goto label_1400a346f
                    
                label_1400a337f:
                    
                    if ((temp0_772 & 4) != 0)
                    label_1400a346f:
                        *(&var_3b8:8 + (rcx_2 << 2)) = 0
                        
                        if ((temp0_772 & 8) != 0)
                            *(&var_3b8:0xc + (rcx_2 << 2)) = 0
                    else
                    label_1400a3387:
                        
                        if ((temp0_772 & 8) != 0)
                            *(&var_3b8:0xc + (rcx_2 << 2)) = 0
                
                int32_t rdx_50 = *(arg4 + rcx_2)
                zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_50 - 1), 0), 
                    *(&var_3f8 + (rcx_2 << 2)))
                
                if (_mm_movemask_ps(zmm1 & zmm2) != 0)
                    char temp0_776 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_776 & 1) == 0)
                        if ((temp0_776 & 2) != 0)
                            goto label_1400a349b
                        
                        goto label_1400a33cd
                    
                    *(&var_3f8 + (rcx_2 << 2)) = rdx_50 - 2
                    
                    if ((temp0_776 & 2) != 0)
                    label_1400a349b:
                        *(&var_3f8:4 + (rcx_2 << 2)) = rdx_50 - 2
                        
                        if ((temp0_776 & 4) == 0)
                            goto label_1400a33d5
                        
                        goto label_1400a34a7
                    
                label_1400a33cd:
                    
                    if ((temp0_776 & 4) == 0)
                    label_1400a33d5:
                        
                        if ((temp0_776 & 8) != 0)
                            goto label_1400a34b3
                        
                        goto label_1400a33dd
                    
                label_1400a34a7:
                    *(&var_3f8:8 + (rcx_2 << 2)) = rdx_50 - 2
                    
                    if ((temp0_776 & 8) != 0)
                    label_1400a34b3:
                        *(&var_3f8:0xc + (rcx_2 << 2)) = rdx_50 - 2
                        
                        if ((temp0_776 & 1) == 0)
                            goto label_1400a33e5
                        
                        goto label_1400a34bf
                    
                label_1400a33dd:
                    
                    if ((temp0_776 & 1) == 0)
                    label_1400a33e5:
                        
                        if ((temp0_776 & 2) != 0)
                            goto label_1400a34cf
                        
                        goto label_1400a33ed
                    
                label_1400a34bf:
                    *(&var_3b8 + (rcx_2 << 2)) = 0x3f800000
                    
                    if ((temp0_776 & 2) != 0)
                    label_1400a34cf:
                        *(&var_3b8:4 + (rcx_2 << 2)) = 0x3f800000
                        
                        if ((temp0_776 & 4) == 0)
                            goto label_1400a33f5
                        
                        goto label_1400a34df
                    
                label_1400a33ed:
                    
                    if ((temp0_776 & 4) != 0)
                    label_1400a34df:
                        *(&var_3b8:8 + (rcx_2 << 2)) = 0x3f800000
                        
                        if ((temp0_776 & 8) != 0)
                            *(&var_3b8:0xc + (rcx_2 << 2)) = 0x3f800000
                    else
                    label_1400a33f5:
                        
                        if ((temp0_776 & 8) != 0)
                            *(&var_3b8:0xc + (rcx_2 << 2)) = 0x3f800000
                
                if (rcx_2 == 8)
                    break
                
                zmm6 = *(&var_3e8 + (rcx_2 << 2))
                rcx_2 += 4
            
            zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm6 = var_3f8
            zmm3 = var_3e8
            zmm11 = temp0_749
            zmm5 = _mm_mullo_epi32(zmm7, zmm6)
            zmm9 = _mm_add_epi32(zmm5, zmm3)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm9, zmm0)
            zmm1 = _mm_add_epi32(zmm13, zmm11)
            uint128_t* rax_104 = *(arg5 + 0x10)
            zmm1 = _mm_slli_epi32(zmm1, 2) & zmm2
            int64_t rdx_52 = sx.q(zmm1.d)
            zmm4 = *(rax_104 + rdx_52)
            int64_t rbx_15 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rdi_22 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rbp_21 = sx.q(_mm_extract_epi32(zmm1, 3))
            zmm4 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_104 + rbx_15), 0x10), 
                    *(rax_104 + rdi_22), 0x20), 
                *(rax_104 + rbp_21), 0x30)
            zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
            zmm6 = _mm_mullo_epi32(_mm_sub_epi32(zmm6, zmm12), zmm7)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm3), zmm0), zmm11), 2)
            zmm9 = _mm_mullo_epi32(_mm_add_epi32(zmm9, zmm7), zmm0)
            zmm1 &= zmm2
            zmm7 = *(rax_104 + sx.q(zmm1.d))
            int32_t temp0_799 = _mm_extract_epi32(zmm1, 1)
            int64_t rbx_17 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_801 = _mm_extract_epi32(zmm1, 3)
            float temp0_805[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_104 + sx.q(temp0_799)), 0x10), 
                        *(rax_104 + rbx_17), 0x20), 
                    *(rax_104 + sx.q(temp0_801)), 0x30), 
                zmm4)
            zmm10 = var_3b8
            zmm8 = var_3a8_6
            float temp0_807[0x4] = _mm_add_ps(_mm_mul_ps(temp0_805, zmm10), zmm4)
            zmm3 = _mm_sub_epi32(zmm3, zmm12)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm3), zmm0), zmm11), 2) & zmm2
            zmm4 = *(rax_104 + sx.q(zmm5[0]))
            int64_t rcx_9 = sx.q(_mm_extract_epi32(zmm5, 1))
            int32_t temp0_814 = _mm_extract_epi32(zmm5, 2)
            int64_t rbx_19 = sx.q(_mm_extract_epi32(zmm5, 3))
            zmm4 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_104 + rcx_9), 0x10), 
                    *(rax_104 + sx.q(temp0_814)), 0x20), 
                *(rax_104 + rbx_19), 0x30)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm6), zmm0), zmm11), 2) & zmm2
            zmm6 = *(rax_104 + sx.q(zmm3.d))
            int32_t temp0_823 = _mm_extract_epi32(zmm3, 1)
            int64_t rbp_29 = sx.q(_mm_extract_epi32(zmm3, 2))
            int32_t temp0_825 = _mm_extract_epi32(zmm3, 3)
            float temp0_830[0x4] = _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm6, *(rax_104 + sx.q(temp0_823)), 0x10), 
                            *(rax_104 + rbp_29), 0x20), 
                        *(rax_104 + sx.q(temp0_825)), 0x30), 
                    zmm4), 
                zmm10)
            int32_t* rbx_21 = var_298.q
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r14_1 + rax_104 + rdx_52), 
                        *(rbx_21 + rax_104 + rbx_15), 0x10), 
                    *(r15_7 + rax_104 + rdi_22), 0x20), 
                *(r10_4 + rax_104 + rbp_21), 0x30)
            zmm0 = _mm_add_epi32(zmm0, zmm11)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm9)
            zmm9 = _mm_slli_epi32(_mm_add_epi32(zmm9, zmm11), 2) & zmm2
            zmm5 = *(r14_1 + sx.q(zmm9.d) + rax_104)
            void* rcx_20 = sx.q(_mm_extract_epi32(zmm9, 1)) + rax_104
            void* rdx_58 = sx.q(_mm_extract_epi32(zmm9, 2)) + rax_104
            void* rbp_32 = sx.q(_mm_extract_epi32(zmm9, 3)) + rax_104
            float temp0_844[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rbx_21 + rcx_20), 0x10), *(r15_7 + rdx_58), 
                    0x20), 
                *(r10_4 + rbp_32), 0x30)
            float temp0_845[0x4] = _mm_add_ps(temp0_830, zmm4)
            float temp0_848[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_844, zmm3), zmm10), zmm3)
            zmm13 = _mm_slli_epi32(zmm13, 2) & zmm2
            zmm3 = *(r14_1 + sx.q(zmm13[0]) + rax_104)
            void* rcx_26 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_104
            void* rdx_61 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_104
            void* rbp_35 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_104
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rbx_21 + rcx_26), 0x10), *(r15_7 + rdx_61), 
                    0x20), 
                *(r10_4 + rbp_35), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
            zmm1 = *(r14_1 + sx.q(zmm0.d) + rax_104)
            void* rcx_32 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_104
            void* rdx_64 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_104
            void* rbp_38 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_104
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rbx_21 + rcx_32), 0x10), 
                                *(r15_7 + rdx_64), 0x20), 
                            *(r10_4 + rbp_38), 0x30), 
                        zmm3), 
                    zmm10), 
                zmm3)
            float temp0_868[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_845, temp0_807), zmm8), temp0_807)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_848), zmm8), temp0_848), 
                        temp0_868), 
                    temp0_768), 
                temp0_868)
            zmm3 = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm14, 7), zmm3), zmm2)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm3 = _mm_rsqrt_ps(zmm14)
                float temp0_882[0x4] = _mm_mul_ps(_mm_mul_ps(zmm14, zmm3), zmm3)
                zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_882), zmm3), 
                    data_142d3f640)
                zmm3 = _mm_rcp_ps(zmm4)
                zmm4 = _mm_mul_ps(zmm4, zmm3)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), zmm3), zmm1), zmm0)
            
            rcx = arg10
            rdx_44 = arg11
            zmm8 = var_358_1
            zmm9 = var_368_1
            zmm10 = var_378_1
            zmm0 = arg9
            zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm2)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                float temp0_897[0x4] = _mm_mul_ps(var_188, zmm1)
                float temp0_898[0x4] = _mm_mul_ps(var_178, zmm1)
                float temp0_899[0x4] = _mm_mul_ps(var_168_1, zmm1)
                result = zx.d(result.b)
                zmm4 = zmm8
                char temp4_1 = result.b & 1
                
                if (temp4_1 == 0)
                    zmm3 = zmm9
                    
                    if (temp4_1 != 0)
                        goto label_1400a473a
                    
                    goto label_1400a3939
                
                zmm4.d = zmm8.d f+ temp0_897[0]
                zmm3 = zmm9
                
                if (temp4_1 != 0)
                label_1400a473a:
                    zmm3.d = zmm9.d f+ temp0_898[0]
                    zmm2 = zmm10
                    
                    if (temp4_1 == 0)
                        goto label_1400a3943
                    
                    goto label_1400a4748
                
            label_1400a3939:
                zmm2 = zmm10
                bool cond:34_1
                bool cond:35_1
                bool cond:42_1
                bool cond:43_1
                
                if (temp4_1 == 0)
                label_1400a3943:
                    zmm8 = _mm_add_ps(zmm8, temp0_897)
                    char temp12_1 = result.b & 2
                    cond:34_1 = temp12_1 != 0
                    cond:35_1 = temp12_1 == 0
                    cond:42_1 = temp12_1 == 0
                    cond:43_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_1400a475c
                    
                    goto label_1400a394f
                
            label_1400a4748:
                zmm2 = zmm10
                zmm2[0] = zmm2[0] + temp0_899[0]
                zmm8 = _mm_add_ps(zmm8, temp0_897)
                char temp11_1 = result.b & 2
                cond:34_1 = temp11_1 != 0
                cond:35_1 = temp11_1 == 0
                cond:42_1 = temp11_1 == 0
                cond:43_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                label_1400a475c:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                    zmm9 = _mm_add_ps(zmm9, temp0_898)
                    
                    if (cond:35_1)
                        goto label_1400a3959
                    
                    goto label_1400a476d
                
            label_1400a394f:
                zmm9 = _mm_add_ps(zmm9, temp0_898)
                
                if (not(cond:34_1))
                label_1400a3959:
                    zmm10 = _mm_add_ps(zmm10, temp0_899)
                    
                    if (cond:43_1)
                        goto label_1400a477e
                    
                    goto label_1400a3963
                
            label_1400a476d:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                zmm10 = _mm_add_ps(zmm10, temp0_899)
                bool cond:50_1
                bool cond:51_1
                bool cond:58_1
                bool cond:59_1
                
                if (not(cond:42_1))
                label_1400a477e:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                    char temp20_1 = result.b & 4
                    cond:50_1 = temp20_1 == 0
                    cond:51_1 = temp20_1 != 0
                    cond:58_1 = temp20_1 != 0
                    cond:59_1 = temp20_1 == 0
                    
                    if (temp20_1 == 0)
                        goto label_1400a396b
                    
                    goto label_1400a478d
                
            label_1400a3963:
                char temp19_1 = result.b & 4
                cond:50_1 = temp19_1 == 0
                cond:51_1 = temp19_1 != 0
                cond:58_1 = temp19_1 != 0
                cond:59_1 = temp19_1 == 0
                
                if (temp19_1 != 0)
                label_1400a478d:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                    
                    if (not(cond:50_1))
                    label_1400a479a:
                        zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                        
                        if (cond:59_1)
                            goto label_1400a3977
                        
                        goto label_1400a47a7
                else
                label_1400a396b:
                    
                    if (cond:51_1)
                        goto label_1400a479a
                
                bool cond:64_1
                bool cond:65_1
                bool cond:68_1
                bool cond:69_1
                
                if (not(cond:58_1))
                label_1400a3977:
                    char temp28_1 = result.b & 8
                    cond:64_1 = temp28_1 != 0
                    cond:65_1 = temp28_1 == 0
                    cond:68_1 = temp28_1 == 0
                    cond:69_1 = temp28_1 != 0
                    
                    if (temp28_1 == 0)
                        goto label_1400a47b6
                    
                    goto label_1400a397f
                
            label_1400a47a7:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                char temp27_1 = result.b & 8
                cond:64_1 = temp27_1 != 0
                cond:65_1 = temp27_1 == 0
                cond:68_1 = temp27_1 == 0
                cond:69_1 = temp27_1 != 0
                
                if (temp27_1 == 0)
                label_1400a47b6:
                    zmm8 = zmm4
                    
                    if (cond:65_1)
                        goto label_1400a398c
                    
                    goto label_1400a47c0
                
            label_1400a397f:
                zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
                
                if (cond:64_1)
                label_1400a47c0:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:68_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                else
                label_1400a398c:
                    zmm9 = zmm3
                    
                    if (cond:69_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                
                var_348_1 = _mm_blendv_ps(var_348_1, _mm_add_ps(zmm1, var_348_1), zmm0)
                zmm10 = zmm2
        else
            rcx = arg10
            rdx_44 = arg11
    else
        zmm0 = arg9
        uint128_t var_318_1 = _mm_shuffle_ps(zmm0, zmm0, 0)
        r10_1 = 0
        
        do
            zmm0 = __pmulld_xmmdq_memdq(*(arg8 + sx.q((r10_1 << 2).d)), data_142fc95c0)
            int64_t rax_6 = sx.q(zmm0.d)
            int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 1))
            int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm5 = *(arg7 + (rax_6 << 2) + 4)
            zmm1 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg7 + (rax_6 << 2)), *(arg7 + (rbp_2 << 2)), 
                        0x10), 
                    *(arg7 + (rbx_2 << 2)), 0x20), 
                *(arg7 + (rsi_2 << 2)), 0x30)
            float temp0_21[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(arg7 + (rbp_2 << 2) + 4), 0x10), 
                    *(arg7 + (rbx_2 << 2) + 4), 0x20), 
                *(arg7 + (rsi_2 << 2) + 4), 0x30)
            float temp0_24[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg7 + (rax_6 << 2) + 8), 
                        *(arg7 + (rbp_2 << 2) + 8), 0x10), 
                    *(arg7 + (rbx_2 << 2) + 8), 0x20), 
                *(arg7 + (rsi_2 << 2) + 8), 0x30)
            zmm3 = temp0_24
            var_3b8 = zmm1
            uint128_t var_398_1 = zmm3
            int128_t var_388_1
            __builtin_memset(&var_388_1, 0, 0x50)
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3f8 = zmm0
            var_3e8 = zmm0
            uint128_t var_3d8_1 = zmm0
            uint128_t var_3c8_1 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
            float temp0_26[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm11 = _mm_mul_ps(zmm3, temp0_26)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_29[0x4] = _mm_mul_ps(zmm1, temp0_28)
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_31[0x4] = _mm_mul_ps(temp0_21, zmm9)
            zmm11 = _mm_sub_ps(zmm11, _mm_mul_ps(temp0_21, temp0_28))
            float temp0_35[0x4] = _mm_sub_ps(temp0_29, _mm_mul_ps(zmm3, zmm9))
            float temp0_37[0x4] = _mm_sub_ps(temp0_31, _mm_mul_ps(zmm1, temp0_26))
            zmm11 = _mm_add_ps(zmm11, zmm11)
            float temp0_39[0x4] = _mm_add_ps(temp0_35, temp0_35)
            float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_37)
            zmm3 = _mm_mul_ps(zmm0, zmm11)
            float temp0_42[0x4] = _mm_mul_ps(zmm0, temp0_39)
            zmm3 = __addps_xmmps_memps(zmm3, var_3b8)
            float temp0_44[0x4] = __addps_xmmps_memps(temp0_42, temp0_21)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_40), var_398_1)
            float temp0_47[0x4] = _mm_mul_ps(temp0_40, temp0_26)
            zmm4 = _mm_mul_ps(zmm11, temp0_28)
            zmm1 = _mm_mul_ps(temp0_39, zmm9)
            float temp0_52[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_47, _mm_mul_ps(temp0_39, temp0_28)), zmm3)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_40, zmm9)), temp0_44)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm11, temp0_26)), zmm0)
            zmm10 = arg6[1].d
            zmm2 = *(arg6 + 0x14)
            float temp0_60[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_52)
            float temp0_62[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            float var_158[0x4] = temp0_60
            float var_148[0x4] = temp0_62
            var_298 = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rbx_3 = 0
            zmm0 = temp0_60
            
            while (true)
                zmm2 = *(&var_258 + rbx_3)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm3 = _mm_cmpeq_ps(zmm1, zmm0, 1)
                char temp0_67 = _mm_movemask_ps(zmm3)
                
                if (temp0_67 != 0)
                    if ((temp0_67 & 1) == 0)
                        if ((temp0_67 & 2) != 0)
                            goto label_1400a138d
                        
                        goto label_1400a12bd
                    
                    *(&var_3f8 + (rbx_3 << 2)) = zmm2[0]
                    
                    if ((temp0_67 & 2) != 0)
                    label_1400a138d:
                        *(&var_3f8:4 + (rbx_3 << 2)) = zmm2[0]
                        
                        if ((temp0_67 & 4) == 0)
                            goto label_1400a12c5
                        
                        goto label_1400a139b
                    
                label_1400a12bd:
                    
                    if ((temp0_67 & 4) != 0)
                    label_1400a139b:
                        *(&var_3f8:8 + (rbx_3 << 2)) = zmm2[0]
                        
                        if ((temp0_67 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_3 << 2)) = zmm2[0]
                    else
                    label_1400a12c5:
                        
                        if ((temp0_67 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_3 << 2)) = zmm2[0]
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_268 + rbx_3)
                    float temp0_70[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_73 =
                        _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_70, 1), zmm1))
                    
                    if (temp0_73 != 0)
                        if ((temp0_73 & 1) == 0)
                            if ((temp0_73 & 2) != 0)
                                goto label_1400a13bb
                            
                            goto label_1400a1312
                        
                        *(&var_3f8 + (rbx_3 << 2)) = zmm3.d
                        
                        if ((temp0_73 & 2) != 0)
                        label_1400a13bb:
                            *(&var_3f8:4 + (rbx_3 << 2)) = zmm3.d
                            
                            if ((temp0_73 & 4) == 0)
                                goto label_1400a131a
                            
                            goto label_1400a13c9
                        
                    label_1400a1312:
                        
                        if ((temp0_73 & 4) != 0)
                        label_1400a13c9:
                            *(&var_3f8:8 + (rbx_3 << 2)) = zmm3.d
                            
                            if ((temp0_73 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_3 << 2)) = zmm3.d
                        else
                        label_1400a131a:
                            
                            if ((temp0_73 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_3 << 2)) = zmm3.d
                    
                    char temp0_76 =
                        _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_70, 5), zmm1))
                    
                    if (temp0_76 != 0)
                        zmm0 = *(&var_158 + (rbx_3 << 2))
                        
                        if ((temp0_76 & 1) == 0)
                            if ((temp0_76 & 2) != 0)
                                goto label_1400a13e9
                            
                            goto label_1400a134d
                        
                        *(&var_3f8 + (rbx_3 << 2)) = zmm0.d
                        
                        if ((temp0_76 & 2) != 0)
                        label_1400a13e9:
                            *(&var_3f8:4 + (rbx_3 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_76 & 4) == 0)
                                goto label_1400a1355
                            
                            goto label_1400a13f9
                        
                    label_1400a134d:
                        
                        if ((temp0_76 & 4) != 0)
                        label_1400a13f9:
                            *(&var_3f8:8 + (rbx_3 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_76 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_3 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1400a1355:
                            
                            if ((temp0_76 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_3 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                
                if (rbx_3 == 8)
                    break
                
                zmm0 = *(&var_148 + (rbx_3 << 2))
                rbx_3 += 4
            
            zmm14 = var_3f8
            zmm8 = var_3e8
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            zmm5 = var_3d8_1
            zmm4 = *arg1
            zmm12 = *(arg1 + 4)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_sub_ps(zmm14, zmm4)
            float temp0_83[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_84[0x4] = _mm_sub_ps(zmm8, temp0_83)
            zmm6 = arg1[1].d
            float temp0_85[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_86[0x4] = _mm_sub_ps(zmm5, temp0_85)
            zmm1 = *arg3
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm0 = _mm_div_ps(zmm0, zmm1)
            zmm13 = arg3[1].d
            zmm9 = _mm_cvttps_epi32(zmm0)
            uint128_t var_2d8_1 = zmm1
            uint128_t var_2f8_1 = zmm4
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), zmm1), zmm4)
            float temp0_94[0x4] =
                __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
            zmm1 = _mm_shuffle_ps(temp0_94, temp0_94, 0)
            uint128_t var_338_1 = zmm1
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm14, 1)
            zmm1 = _mm_add_epi32(zmm9, zmm3)
            zmm4 = _mm_blendv_ps(zmm1, zmm9, zmm0)
            zmm15 = *(arg3 + 4)
            float temp0_100[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_101[0x4] = _mm_div_ps(temp0_84, temp0_100)
            float temp0_102[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            float temp0_103[0x4] = _mm_div_ps(temp0_86, temp0_102)
            zmm3 = _mm_cvttps_epi32(temp0_101)
            zmm2 = _mm_cvttps_epi32(temp0_103)
            float temp0_107[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_100)
            zmm11 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_102)
            float temp0_110[0x4] = _mm_add_ps(temp0_107, temp0_83)
            zmm11 = _mm_add_ps(zmm11, temp0_85)
            float temp0_112[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0x55)
            float temp0_113[0x4] = _mm_add_ps(temp0_110, temp0_112)
            float temp0_114[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0xaa)
            var_3f8 = zmm4
            zmm0 = _mm_cmpeq_ps(temp0_113, zmm8, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm9 = zmm3
            
            zmm11 = _mm_add_ps(zmm11, temp0_114)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_113, zmm8, 5)) != 0)
                zmm1 = __paddd_xmmdq_memdq(zmm3, data_142d3f800)
            
            uint128_t var_2b8_1 = zmm14
            float temp0_121[0x4] = _mm_sub_ps(zmm14, temp0_60)
            float temp0_122[0x4] = __subps_xmmps_memps(zmm8, temp0_62)
            float temp0_123[0x4] = _mm_blendv_ps(zmm1, zmm9, zmm0)
            var_3e8 = temp0_123
            zmm14 = zmm5
            zmm0 = _mm_cmpeq_ps(zmm11, zmm14, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm9 = zmm2
            
            zmm3 = __subps_xmmps_memps(zmm14, var_298)
            float temp0_127[0x4] = _mm_mul_ps(temp0_121, temp0_121)
            float temp0_128[0x4] = _mm_mul_ps(temp0_122, temp0_122)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm11, zmm14, 5)) != 0)
                zmm1 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            zmm1 = _mm_blendv_ps(zmm1, zmm9, zmm0)
            float temp0_134[0x4] =
                _mm_add_ps(__addps_xmmps_memps(temp0_127, data_142d8f750), temp0_128)
            zmm6 = var_2d8_1
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm6), var_2f8_1)
            float temp0_140[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_123), temp0_100), temp0_83)
            uint128_t var_3d8_2 = zmm1
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_102), temp0_85)
            float temp0_144[0x4] = _mm_add_ps(var_338_1, zmm0)
            float temp0_145[0x4] = _mm_add_ps(temp0_112, temp0_140)
            float temp0_146[0x4] = _mm_add_ps(temp0_114, zmm1)
            zmm0 = _mm_sub_ps(var_2b8_1, temp0_144)
            zmm1 = _mm_sub_ps(zmm8, temp0_145)
            zmm14 = _mm_sub_ps(zmm14, temp0_146)
            zmm0 = _mm_div_ps(zmm0, zmm6)
            zmm1 = _mm_div_ps(zmm1, temp0_100)
            zmm14 = _mm_div_ps(zmm14, temp0_102)
            var_3b8 = zmm0
            uint128_t var_3a8_2 = zmm1
            uint128_t var_398_2 = zmm14
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            int64_t rbx_4 = 0
            zmm5 = _mm_cmpeq_epi32(temp0_144, temp0_144)
            char j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm5))
            
            if (j_1 == 0)
                goto label_1400a16dc
            
            do
                if ((j_1 & 1) == 0)
                    if ((j_1 & 2) != 0)
                        goto label_1400a176f
                    
                    goto label_1400a16a8
                
                *(&var_3f8 + (rbx_4 << 2)) = 0
                
                if ((j_1 & 2) != 0)
                label_1400a176f:
                    *(&var_3f8:4 + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400a16b0
                    
                    goto label_1400a177f
                
            label_1400a16a8:
                
                if ((j_1 & 4) == 0)
                label_1400a16b0:
                    
                    if ((j_1 & 8) != 0)
                        goto label_1400a178f
                    
                    goto label_1400a16b8
                
            label_1400a177f:
                *(&var_3f8:8 + (rbx_4 << 2)) = 0
                
                if ((j_1 & 8) != 0)
                label_1400a178f:
                    *(&var_3f8:0xc + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 1) == 0)
                        goto label_1400a16c0
                    
                    goto label_1400a179f
                
            label_1400a16b8:
                
                if ((j_1 & 1) == 0)
                label_1400a16c0:
                    
                    if ((j_1 & 2) != 0)
                        goto label_1400a17af
                    
                    goto label_1400a16c8
                
            label_1400a179f:
                *(&var_3b8 + (rbx_4 << 2)) = 0
                
                if ((j_1 & 2) != 0)
                label_1400a17af:
                    *(&var_3b8:4 + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400a16d0
                    
                    goto label_1400a17bf
                
            label_1400a16c8:
                
                if ((j_1 & 4) != 0)
                label_1400a17bf:
                    *(&var_3b8:8 + (rbx_4 << 2)) = 0
                    
                    if ((j_1 & 8) != 0)
                        *(&var_3b8:0xc + (rbx_4 << 2)) = 0
                else
                label_1400a16d0:
                    
                    if ((j_1 & 8) != 0)
                        *(&var_3b8:0xc + (rbx_4 << 2)) = 0
                
            label_1400a16dc:
                int32_t rbp_3 = *(arg4 + rbx_4)
                char temp0_161 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rbp_3 - 1), 0), *(&var_3f8 + (rbx_4 << 2))))
                
                if (temp0_161 != 0)
                    if ((temp0_161 & 1) == 0)
                        if ((temp0_161 & 2) != 0)
                            goto label_1400a17eb
                        
                        goto label_1400a170e
                    
                    *(&var_3f8 + (rbx_4 << 2)) = rbp_3 - 2
                    
                    if ((temp0_161 & 2) != 0)
                    label_1400a17eb:
                        *(&var_3f8:4 + (rbx_4 << 2)) = rbp_3 - 2
                        
                        if ((temp0_161 & 4) == 0)
                            goto label_1400a1716
                        
                        goto label_1400a17f7
                    
                label_1400a170e:
                    
                    if ((temp0_161 & 4) == 0)
                    label_1400a1716:
                        
                        if ((temp0_161 & 8) != 0)
                            goto label_1400a1803
                        
                        goto label_1400a171e
                    
                label_1400a17f7:
                    *(&var_3f8:8 + (rbx_4 << 2)) = rbp_3 - 2
                    
                    if ((temp0_161 & 8) != 0)
                    label_1400a1803:
                        *(&var_3f8:0xc + (rbx_4 << 2)) = rbp_3 - 2
                        
                        if ((temp0_161 & 1) == 0)
                            goto label_1400a1726
                        
                        goto label_1400a180f
                    
                label_1400a171e:
                    
                    if ((temp0_161 & 1) == 0)
                    label_1400a1726:
                        
                        if ((temp0_161 & 2) != 0)
                            goto label_1400a181f
                        
                        goto label_1400a172e
                    
                label_1400a180f:
                    *(&var_3b8 + (rbx_4 << 2)) = 0x3f800000
                    
                    if ((temp0_161 & 2) != 0)
                    label_1400a181f:
                        *(&var_3b8:4 + (rbx_4 << 2)) = 0x3f800000
                        
                        if ((temp0_161 & 4) == 0)
                            goto label_1400a1736
                        
                        goto label_1400a182f
                    
                label_1400a172e:
                    
                    if ((temp0_161 & 4) != 0)
                    label_1400a182f:
                        *(&var_3b8:8 + (rbx_4 << 2)) = 0x3f800000
                        
                        if ((temp0_161 & 8) != 0)
                            *(&var_3b8:0xc + (rbx_4 << 2)) = 0x3f800000
                    else
                    label_1400a1736:
                        
                        if ((temp0_161 & 8) != 0)
                            *(&var_3b8:0xc + (rbx_4 << 2)) = 0x3f800000
                
                if (rbx_4 == 8)
                    break
                
                zmm4 = *(&var_3e8 + (rbx_4 << 2))
                rbx_4 += 4
                j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm5))
            while (j_1 != 0)
            
            float temp0_162[0x4] = _mm_add_ps(temp0_134, zmm3)
            zmm6 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm1 = var_3f8
            zmm4 = var_3e8
            zmm14 = temp0_162
            zmm3 = _mm_mullo_epi32(zmm6, zmm1)
            zmm13 = _mm_add_epi32(zmm3, zmm4)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm9 = _mm_mullo_epi32(zmm13, zmm0)
            zmm2 = _mm_add_epi32(zmm9, var_3d8_2)
            float (* rbx_5)[0x4] = *(arg5 + 0x10)
            zmm2 = _mm_slli_epi32(zmm2, 2)
            int64_t rdi_1 = sx.q(zmm2[0])
            int64_t rsi_3 = sx.q(_mm_extract_epi32(zmm2, 1))
            int64_t rax_24 = sx.q(_mm_extract_epi32(zmm2, 2))
            int64_t rbp_7 = sx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_175[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rbx_5 + rdi_1), *(rbx_5 + rsi_3), 0x10), 
                    *(rbx_5 + rax_24), 0x20), 
                *(rbx_5 + rbp_7), 0x30)
            zmm12 = *(rbx_5 + rdi_1 + 4)
            zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm5), zmm6)
            zmm7 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm4), zmm0), var_3d8_2), 2)
            zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm6), zmm0)
            zmm6 = *(rbx_5 + sx.q(zmm7[0]))
            int32_t temp0_184 = _mm_extract_epi32(zmm7, 1)
            int64_t rdx_2 = sx.q(_mm_extract_epi32(zmm7, 2))
            int32_t temp0_186 = _mm_extract_epi32(zmm7, 3)
            float temp0_190[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm6, *(rbx_5 + sx.q(temp0_184)), 0x10), 
                        *(rbx_5 + rdx_2), 0x20), 
                    *(rbx_5 + sx.q(temp0_186)), 0x30), 
                temp0_175)
            zmm10 = var_3b8
            zmm4 = _mm_sub_epi32(zmm4, zmm5)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm4), zmm0), var_3d8_2), 2)
            int32_t temp0_196 = _mm_extract_epi32(zmm3, 1)
            int32_t temp0_197 = _mm_extract_epi32(zmm3, 2)
            zmm5 = *(rbx_5 + sx.q(zmm3.d))
            int32_t temp0_198 = _mm_extract_epi32(zmm3, 3)
            zmm8 = var_3a8_2
            float temp0_199[0x4] = _mm_mul_ps(temp0_190, zmm10)
            float temp0_202[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rbx_5 + sx.q(temp0_196)), 0x10), 
                    *(rbx_5 + sx.q(temp0_197)), 0x20), 
                *(rbx_5 + sx.q(temp0_198)), 0x30)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm1), zmm0), var_3d8_2), 2)
            zmm7 = *(rbx_5 + sx.q(zmm4.d))
            int64_t r15_4 = sx.q(_mm_extract_epi32(zmm4, 1))
            int32_t temp0_208 = _mm_extract_epi32(zmm4, 2)
            int64_t rdx_12 = sx.q(_mm_extract_epi32(zmm4, 3))
            float temp0_212[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rbx_5 + r15_4), 0x10), 
                    *(rbx_5 + sx.q(temp0_208)), 0x20), 
                *(rbx_5 + rdx_12), 0x30)
            float temp0_213[0x4] = _mm_add_ps(temp0_199, temp0_175)
            float temp0_214[0x4] = _mm_sub_ps(temp0_212, temp0_202)
            float temp0_217[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm12, *(rbx_5 + rsi_3 + 4), 0x10), 
                    *(rbx_5 + rax_24 + 4), 0x20), 
                *(rbx_5 + rbp_7 + 4), 0x30)
            float temp0_218[0x4] = _mm_mul_ps(temp0_214, zmm10)
            zmm0 = _mm_add_epi32(zmm0, var_3d8_2)
            zmm9 = _mm_add_epi32(zmm9, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm13)
            zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, var_3d8_2), 2)
            zmm2 = *(rbx_5 + sx.q(zmm13[0]) + 4)
            int64_t rax_28 = sx.q(_mm_extract_epi32(zmm13, 1))
            int32_t temp0_225 = _mm_extract_epi32(zmm13, 2)
            int64_t rsi_5 = sx.q(_mm_extract_epi32(zmm13, 3))
            float temp0_229[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rbx_5 + rax_28 + 4), 0x10), 
                    *(rbx_5 + sx.q(temp0_225) + 4), 0x20), 
                *(rbx_5 + rsi_5 + 4), 0x30)
            float temp0_230[0x4] = _mm_add_ps(temp0_218, temp0_202)
            float temp0_233[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_229, temp0_217), zmm10), temp0_217)
            zmm9 = _mm_slli_epi32(zmm9, 2)
            zmm3 = *(rbx_5 + sx.q(zmm9.d) + 4)
            int32_t temp0_235 = _mm_extract_epi32(zmm9, 1)
            int64_t rdx_16 = sx.q(_mm_extract_epi32(zmm9, 2))
            int32_t temp0_237 = _mm_extract_epi32(zmm9, 3)
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rbx_5 + sx.q(temp0_235) + 4), 0x10), 
                    *(rbx_5 + rdx_16 + 4), 0x20), 
                *(rbx_5 + sx.q(temp0_237) + 4), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int32_t temp0_242 = _mm_extract_epi32(zmm0, 1)
            zmm1 = *(rbx_5 + sx.q(zmm0.d) + 4)
            int64_t rdx_19 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rsi_8 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rbx_5 + sx.q(temp0_242) + 4), 
                                    0x10), 
                                *(rbx_5 + rdx_19 + 4), 0x20), 
                            *(rbx_5 + rsi_8 + 4), 0x30), 
                        zmm3), 
                    zmm10), 
                zmm3)
            float temp0_253[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_230, temp0_213), zmm8), temp0_213)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_233), zmm8), temp0_233), 
                        temp0_253), 
                    var_398_2), 
                temp0_253)
            float temp0_260[0x4] = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zx.o(0), 7), temp0_260)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_264[0x4] = _mm_rsqrt_ps(zmm14)
                zmm14 = _mm_mul_ps(_mm_mul_ps(zmm14, temp0_264), temp0_264)
                zmm3 = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm14), temp0_264), data_142d3f640)
                float temp0_270[0x4] = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, temp0_270)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_270), zmm1), zmm0)
            
            float var_358[0x4]
            zmm8 = var_358
            uint128_t var_368
            zmm9 = var_368
            float var_378[0x4]
            zmm10 = var_378
            zmm1 = __subps_xmmps_memps(zmm1, var_318_1)
            zmm0 = __cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1)
            char temp0_278 = _mm_movemask_ps(zmm0)
            
            if (temp0_278 != 0)
                float temp0_279[0x4] = _mm_mul_ps(var_158, zmm1)
                float temp0_280[0x4] = _mm_mul_ps(var_148, zmm1)
                float temp0_281[0x4] = _mm_mul_ps(var_138_1, zmm1)
                zmm4 = zmm8
                char temp2_1 = temp0_278 & 1
                
                if (temp2_1 == 0)
                    zmm3 = zmm9
                    
                    if (temp2_1 != 0)
                        goto label_1400a1c92
                    
                    goto label_1400a1c20
                
                zmm4.d = zmm8.d f+ temp0_279[0]
                zmm3 = zmm9
                
                if (temp2_1 != 0)
                label_1400a1c92:
                    zmm3.d = zmm9.d f+ temp0_280[0]
                    zmm2 = zmm10
                    
                    if (temp2_1 == 0)
                        goto label_1400a1c26
                    
                    goto label_1400a1c9c
                
            label_1400a1c20:
                zmm2 = zmm10
                bool cond:20_1
                bool cond:21_1
                bool cond:28_1
                bool cond:29_1
                
                if (temp2_1 == 0)
                label_1400a1c26:
                    zmm8 = _mm_add_ps(zmm8, temp0_279)
                    char temp8_1 = temp0_278 & 2
                    cond:20_1 = temp8_1 != 0
                    cond:21_1 = temp8_1 == 0
                    cond:28_1 = temp8_1 == 0
                    cond:29_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_1400a1cac
                    
                    goto label_1400a1c2e
                
            label_1400a1c9c:
                zmm2 = zmm10
                zmm2[0] = zmm2[0] + temp0_281[0]
                zmm8 = _mm_add_ps(zmm8, temp0_279)
                char temp7_1 = temp0_278 & 2
                cond:20_1 = temp7_1 != 0
                cond:21_1 = temp7_1 == 0
                cond:28_1 = temp7_1 == 0
                cond:29_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                label_1400a1cac:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                    zmm9 = _mm_add_ps(zmm9, temp0_280)
                    
                    if (cond:21_1)
                        goto label_1400a1c38
                    
                    goto label_1400a1cbd
                
            label_1400a1c2e:
                zmm9 = _mm_add_ps(zmm9, temp0_280)
                
                if (not(cond:20_1))
                label_1400a1c38:
                    zmm10 = _mm_add_ps(zmm10, temp0_281)
                    
                    if (cond:29_1)
                        goto label_1400a1cce
                    
                    goto label_1400a1c42
                
            label_1400a1cbd:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                zmm10 = _mm_add_ps(zmm10, temp0_281)
                bool cond:36_1
                bool cond:37_1
                bool cond:44_1
                bool cond:45_1
                
                if (not(cond:28_1))
                label_1400a1cce:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                    char temp16_1 = temp0_278 & 4
                    cond:36_1 = temp16_1 == 0
                    cond:37_1 = temp16_1 != 0
                    cond:44_1 = temp16_1 != 0
                    cond:45_1 = temp16_1 == 0
                    
                    if (temp16_1 == 0)
                        goto label_1400a1c4a
                    
                    goto label_1400a1cdd
                
            label_1400a1c42:
                char temp15_1 = temp0_278 & 4
                cond:36_1 = temp15_1 == 0
                cond:37_1 = temp15_1 != 0
                cond:44_1 = temp15_1 != 0
                cond:45_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_1400a1cdd:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                    
                    if (not(cond:36_1))
                    label_1400a1cea:
                        zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                        
                        if (cond:45_1)
                            goto label_1400a1c56
                        
                        goto label_1400a1cf7
                else
                label_1400a1c4a:
                    
                    if (cond:37_1)
                        goto label_1400a1cea
                
                bool cond:52_1
                bool cond:53_1
                bool cond:60_1
                bool cond:61_1
                
                if (not(cond:44_1))
                label_1400a1c56:
                    char temp24_1 = temp0_278 & 8
                    cond:52_1 = temp24_1 != 0
                    cond:53_1 = temp24_1 == 0
                    cond:60_1 = temp24_1 == 0
                    cond:61_1 = temp24_1 != 0
                    
                    if (temp24_1 == 0)
                        goto label_1400a1d06
                    
                    goto label_1400a1c5e
                
            label_1400a1cf7:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                char temp23_1 = temp0_278 & 8
                cond:52_1 = temp23_1 != 0
                cond:53_1 = temp23_1 == 0
                cond:60_1 = temp23_1 == 0
                cond:61_1 = temp23_1 != 0
                
                if (temp23_1 == 0)
                label_1400a1d06:
                    zmm8 = zmm4
                    
                    if (cond:53_1)
                        goto label_1400a1c6b
                    
                    goto label_1400a1d10
                
            label_1400a1c5e:
                zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
                
                if (cond:52_1)
                label_1400a1d10:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:60_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                else
                label_1400a1c6b:
                    zmm9 = zmm3
                    
                    if (cond:61_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                
                var_348_1 = _mm_blendv_ps(var_348_1, _mm_add_ps(zmm1, var_348_1), zmm0)
                zmm10 = zmm2
            
            r10_1 = zx.q(r10_1.d + 4)
        while (r10_1.d s< i_1)
        
        result = arg12
        
        if (r10_1.d s< result)
            goto label_1400a1d63
        
        rcx = arg10
        rdx_44 = arg11
    float temp0_1220[0x4] = _mm_hadd_ps(zmm8, zmm8)
    float temp0_1221[0x4] = _mm_hadd_ps(temp0_1220, temp0_1220)
    zmm9 = _mm_hadd_ps(zmm9, zmm9)
    float temp0_1224[0x4] = _mm_insert_ps(temp0_1221, _mm_hadd_ps(zmm9, zmm9), 0x1c)
    float temp0_1225[0x4] = _mm_hadd_ps(zmm10, zmm10)
    float temp0_1226[0x4] = _mm_hadd_ps(temp0_1225, temp0_1225)
    zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_44), rdx_44[1].d, 0x20), 
        temp0_1224[0].q | temp0_1226[0].q << 0x40)
    *rdx_44 = zmm0.d
    *(rdx_44 + 4) = __extractps_memd_xmmps_immb(zmm0, 1)
    rdx_44[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
    zmm0 = _mm_hadd_ps(var_348_1, var_348_1)
    zmm0.d = _mm_hadd_ps(zmm0, zmm0).d f+ *rcx
    *rcx = zmm0.d
return result
