// 函数: sub_1400cb0c0
// 地址: 0x1400cb0c0
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
uint128_t zmm0 = __mulps_xmmps_memps(*arg3 | arg3[1].d[0].q << 0x40, data_142e6d9f0)
uint32_t temp0_1 = _mm_movemask_ps(*arg12)
float temp0_2[0x4] = _mm_sub_ps(zx.o(*arg2)[0].q | arg2[1].d[0].q << 0x40, zmm0)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe5)
uint128_t zmm3 = _mm_unpackhi_pd(temp0_2, temp0_2[0].q)
int32_t result
uint128_t var_418
uint128_t var_408
float var_3d8[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (temp0_1 != 0xf)
    float var_2d8 = temp0_2[0]
    float var_2d4_1 = temp0_3[0]
    int32_t var_2d0_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, zx.o(*arg1)[0].q | arg1[1].d[0].q << 0x40)
    float temp0_307[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    zmm2 = _mm_unpackhi_pd(zmm0, zmm0.q)
    int32_t var_2e8 = zmm0.d
    float var_2e4_1 = temp0_307[0]
    float var_2e0_1 = zmm2[0]
    int32_t r14_9 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
    uint64_t rdx_1
    
    if (r14_9 s<= 0)
        result = 0
        rdx_1 = 0
    else
        rdx_1 = 0
        zmm13 = zx.o(0)
        result = 0
        
        while (true)
            bool cond:2_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:2_1))
                zmm1 = *(arg8 + sx.q((rdx_1 << 2).d))
                float var_378_2[0x4] = zmm1
                zmm0 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1)
                int64_t rax_18 = sx.q(zmm0.d)
                int64_t rsi_67 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                int64_t rdi_10 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                int64_t rbx_5 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                zmm1 = *(arg7 + (rbx_5 << 2) + 4)
                float temp0_314[0x4] =
                    _mm_unpacklo_ps(*(arg7 + (rdi_10 << 2)), (*(arg7 + (rbx_5 << 2))).q)
                zmm0 = _mm_unpacklo_ps(*(arg7 + (rdi_10 << 2) + 4), zmm1[0].q)
                zmm4 = *(arg7 + (rax_18 << 2) + 4)
                zmm1 = _mm_unpacklo_ps(*(arg7 + (rax_18 << 2)), (*(arg7 + (rsi_67 << 2))).q)[0].q
                    | temp0_314[0].q << 0x40
                zmm4 =
                    _mm_unpacklo_ps(zmm4, (*(arg7 + (rsi_67 << 2) + 4))[0].q)[0].q | zmm0.q << 0x40
                float temp0_318[0x4] =
                    _mm_unpacklo_ps(*(arg7 + (rax_18 << 2) + 8), (*(arg7 + (rsi_67 << 2) + 8)).q)
                zmm0 = _mm_unpacklo_ps(*(arg7 + (rdi_10 << 2) + 8), (*(arg7 + (rbx_5 << 2) + 8)).q)
                zmm2 = temp0_318[0].q | zmm0.q << 0x40
                var_3d8 = zmm1
                uint32_t var_3a8_2[0x4] = zmm13
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_418 = zmm0
                var_408 = zmm0
                uint128_t var_3f8_3 = zmm0
                uint128_t var_3e8_2 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_321[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_322[0x4] = _mm_mul_ps(zmm2, temp0_321)
                float temp0_323[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                zmm3 = _mm_mul_ps(zmm1, temp0_323)
                float temp0_325[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm7 = _mm_mul_ps(zmm4, temp0_325)
                float temp0_328[0x4] = _mm_sub_ps(temp0_322, _mm_mul_ps(zmm4, temp0_323))
                zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm2, temp0_325))
                zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_321))
                float temp0_333[0x4] = _mm_add_ps(temp0_328, temp0_328)
                zmm3 = _mm_add_ps(zmm3, zmm3)
                zmm7 = _mm_add_ps(zmm7, zmm7)
                float temp0_336[0x4] = _mm_mul_ps(zmm0, temp0_333)
                float temp0_337[0x4] = _mm_mul_ps(zmm0, zmm3)
                float temp0_338[0x4] = __addps_xmmps_memps(temp0_336, var_3d8)
                float temp0_339[0x4] = __addps_xmmps_memps(temp0_337, zmm4)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), zmm2)
                zmm6 = _mm_mul_ps(zmm7, temp0_321)
                float temp0_343[0x4] = _mm_mul_ps(temp0_333, temp0_323)
                float temp0_344[0x4] = _mm_mul_ps(zmm3, temp0_325)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_323)), temp0_338)
                float temp0_350[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_343, _mm_mul_ps(zmm7, temp0_325)), temp0_339)
                float temp0_353[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_344, _mm_mul_ps(temp0_333, temp0_321)), zmm0)
                zmm2 = arg6[1].d
                zmm3 = *(arg6 + 0x14)
                float temp0_355[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
                zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_350)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_353)
                float var_178[0x4] = temp0_355
                uint128_t var_348_2 = zmm3
                uint128_t var_168 = zmm3
                float var_388_2[0x4] = zmm0
                uint128_t var_158_1 = zmm0
                int64_t rax_19 = 0
                zmm0 = temp0_355
                
                while (true)
                    zmm2 = *(&var_2d8 + rax_19)
                    float temp0_360[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_362 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_360, zmm0, 1))
                    
                    if (temp0_362 != 0)
                        if ((temp0_362 & 1) == 0)
                            if ((temp0_362 & 2) != 0)
                                goto label_1400cc31f
                            
                            goto label_1400cc233
                        
                        *(&var_418 + (rax_19 << 2)) = zmm2[0]
                        
                        if ((temp0_362 & 2) != 0)
                        label_1400cc31f:
                            *(&var_418:4 + (rax_19 << 2)) = zmm2[0]
                            
                            if ((temp0_362 & 4) == 0)
                                goto label_1400cc23d
                            
                            goto label_1400cc32f
                        
                    label_1400cc233:
                        
                        if ((temp0_362 & 4) != 0)
                        label_1400cc32f:
                            *(&var_418:8 + (rax_19 << 2)) = zmm2[0]
                            
                            if ((temp0_362 & 8) != 0)
                                *(&var_418:0xc + (rax_19 << 2)) = zmm2[0]
                        else
                        label_1400cc23d:
                            
                            if ((temp0_362 & 8) != 0)
                                *(&var_418:0xc + (rax_19 << 2)) = zmm2[0]
                    
                    float temp0_363[0x4] = _mm_cmpeq_ps(temp0_360, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_363) != 0)
                        zmm3 = *(&var_2e8 + rax_19)
                        float temp0_365[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_368 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_365, 1), temp0_363))
                        
                        if (temp0_368 != 0)
                            if ((temp0_368 & 1) == 0)
                                if ((temp0_368 & 2) != 0)
                                    goto label_1400cc353
                                
                                goto label_1400cc293
                            
                            *(&var_418 + (rax_19 << 2)) = zmm3.d
                            
                            if ((temp0_368 & 2) != 0)
                            label_1400cc353:
                                *(&var_418:4 + (rax_19 << 2)) = zmm3.d
                                
                                if ((temp0_368 & 4) == 0)
                                    goto label_1400cc29d
                                
                                goto label_1400cc363
                            
                        label_1400cc293:
                            
                            if ((temp0_368 & 4) != 0)
                            label_1400cc363:
                                *(&var_418:8 + (rax_19 << 2)) = zmm3.d
                                
                                if ((temp0_368 & 8) != 0)
                                    *(&var_418:0xc + (rax_19 << 2)) = zmm3.d
                            else
                            label_1400cc29d:
                                
                                if ((temp0_368 & 8) != 0)
                                    *(&var_418:0xc + (rax_19 << 2)) = zmm3.d
                        
                        char temp0_371 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_365, 5), temp0_363))
                        
                        if (temp0_371 != 0)
                            zmm0 = *(&var_178 + (rax_19 << 2))
                            
                            if ((temp0_371 & 1) == 0)
                                if ((temp0_371 & 2) != 0)
                                    goto label_1400cc38c
                                
                                goto label_1400cc2d9
                            
                            *(&var_418 + (rax_19 << 2)) = zmm0.d
                            
                            if ((temp0_371 & 2) != 0)
                            label_1400cc38c:
                                *(&var_418:4 + (rax_19 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                
                                if ((temp0_371 & 4) == 0)
                                    goto label_1400cc2e3
                                
                                goto label_1400cc3a1
                            
                        label_1400cc2d9:
                            
                            if ((temp0_371 & 4) != 0)
                            label_1400cc3a1:
                                *(&var_418:8 + (rax_19 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                
                                if ((temp0_371 & 8) != 0)
                                    *(&var_418:0xc + (rax_19 << 2)) =
                                        _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_1400cc2e3:
                                
                                if ((temp0_371 & 8) != 0)
                                    *(&var_418:0xc + (rax_19 << 2)) =
                                        _mm_shuffle_epi32(zmm0, 0xe7).d
                    
                    if (rax_19 == 8)
                        break
                    
                    zmm0 = *(&var_168 + (rax_19 << 2))
                    rax_19 += 4
                
                zmm12 = var_418
                zmm10 = var_408
                zmm1 = var_3f8_3
                zmm4 = *arg1
                zmm14 = *(arg1 + 4)
                float temp0_375[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm0 = _mm_sub_ps(zmm12, temp0_375)
                float temp0_377[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
                float temp0_378[0x4] = _mm_sub_ps(zmm10, temp0_377)
                zmm3 = arg1[1].d
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                float var_308_2[0x4] = zmm1
                float temp0_380[0x4] = _mm_sub_ps(zmm1, zmm3)
                zmm6 = *arg3
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
                zmm0 = _mm_div_ps(zmm0, zmm6)
                zmm8 = _mm_cmpeq_epi32(temp0_321, temp0_321)
                zmm15 = arg3[1].d
                zmm7 = _mm_cvttps_epi32(zmm0)
                uint32_t var_318_2[0x4] = zmm6
                float temp0_387[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), zmm6), temp0_375)
                float temp0_388[0x4] =
                    __divps_xmmps_memps(zx.o(*arg3)[0].q | zmm15[0].q << 0x40, data_142fc9600)
                zmm0 = _mm_shuffle_ps(temp0_388, temp0_388, 0)
                uint128_t var_368_2 = zmm0
                float temp0_391[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_387, zmm0), zmm12, 1)
                zmm13 = _mm_add_epi32(zmm7, zmm8)
                zmm0 = _mm_and_ps(zmm7, temp0_391)
                zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_391, zmm13), zmm0)
                zmm8 = *(arg3 + 4)
                float temp0_396[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_397[0x4] = _mm_div_ps(temp0_378, temp0_396)
                float temp0_398[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
                float temp0_399[0x4] = _mm_div_ps(temp0_380, temp0_398)
                zmm6 = _mm_cvttps_epi32(temp0_397)
                zmm1 = _mm_cvttps_epi32(temp0_399)
                float temp0_403[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_396)
                float temp0_405[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_398)
                float temp0_406[0x4] = _mm_add_ps(temp0_403, temp0_377)
                uint128_t var_358_2 = zmm3
                float temp0_407[0x4] = _mm_add_ps(temp0_405, zmm3)
                float temp0_408[0x4] = _mm_shuffle_ps(temp0_388, temp0_388, 0x55)
                float temp0_409[0x4] = _mm_add_ps(temp0_406, temp0_408)
                float temp0_410[0x4] = _mm_shuffle_ps(temp0_388, temp0_388, 0xaa)
                var_418 = zmm2
                zmm0 = _mm_cmpeq_ps(temp0_409, zmm10, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm7 = zmm6
                
                float temp0_413[0x4] = _mm_add_ps(temp0_407, temp0_410)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_409, zmm10, 5)) != 0)
                    zmm13 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
                
                zmm3 = __subps_xmmps_memps(zmm12, temp0_355)
                float var_398_4[0x4] = zmm10
                zmm6 = __subps_xmmps_memps(zmm10, var_348_2)
                zmm5 = _mm_and_ps(zmm7, zmm0)
                zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm13), zmm5)
                var_408 = zmm0
                float temp0_422[0x4] = _mm_cmpeq_ps(temp0_413, var_308_2, 1)
                
                if (_mm_movemask_ps(temp0_422) != 0)
                    zmm7 = zmm1
                
                float temp0_424[0x4] = __subps_xmmps_memps(var_308_2, var_388_2)
                zmm3 = _mm_mul_ps(zmm3, zmm3)
                zmm6 = _mm_mul_ps(zmm6, zmm6)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_413, var_308_2, 5)) != 0)
                    zmm13 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
                
                uint32_t temp0_430[0x4] = _mm_and_ps(zmm7, temp0_422)
                zmm10 = _mm_or_ps(_mm_andnot_ps(temp0_422, zmm13), temp0_430)
                zmm13 = zx.o(0)
                zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm13), zmm6)
                float temp0_437[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), var_318_2), temp0_375)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_396), temp0_377)
                float var_3f8_4[0x4] = zmm10
                float temp0_443[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_398), var_358_2)
                zmm7 = _mm_add_ps(var_368_2, temp0_437)
                float temp0_445[0x4] = _mm_add_ps(temp0_408, zmm0)
                float temp0_446[0x4] = _mm_add_ps(temp0_410, temp0_443)
                zmm0 = _mm_sub_ps(zmm12, zmm7)
                float temp0_448[0x4] = _mm_sub_ps(var_398_4, temp0_445)
                float temp0_449[0x4] = _mm_sub_ps(var_308_2, temp0_446)
                zmm0 = _mm_div_ps(zmm0, var_318_2)
                float temp0_451[0x4] = _mm_div_ps(temp0_448, temp0_396)
                float temp0_452[0x4] = _mm_div_ps(temp0_449, temp0_398)
                var_3d8 = zmm0
                float temp0_453[0x4] = _mm_mul_ps(temp0_424, temp0_424)
                int64_t rax_24 = 0
                zmm15 = _mm_cmpeq_epi32(temp0_398, temp0_398)
                char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm15))
                
                if (i == 0)
                    goto label_1400cc79b
                
                do
                    if ((i & 1) == 0)
                        if ((i & 2) != 0)
                            goto label_1400cc71d
                        
                        goto label_1400cc6e0
                    
                    *(&var_418 + (rax_24 << 2)) = 0
                    
                    if ((i & 2) != 0)
                    label_1400cc71d:
                        *(&var_418:4 + (rax_24 << 2)) = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400cc6e6
                        
                        goto label_1400cc72b
                    
                label_1400cc6e0:
                    
                    if ((i & 4) == 0)
                    label_1400cc6e6:
                        
                        if ((i & 8) != 0)
                            goto label_1400cc739
                        
                        goto label_1400cc6ec
                    
                label_1400cc72b:
                    *(&var_418:8 + (rax_24 << 2)) = 0
                    
                    if ((i & 8) != 0)
                    label_1400cc739:
                        *(&var_418:0xc + (rax_24 << 2)) = 0
                        
                        if ((i & 1) == 0)
                            goto label_1400cc6f2
                        
                        goto label_1400cc747
                    
                label_1400cc6ec:
                    
                    if ((i & 1) == 0)
                    label_1400cc6f2:
                        
                        if ((i & 2) != 0)
                            goto label_1400cc755
                        
                        goto label_1400cc6f8
                    
                label_1400cc747:
                    var_3d8[rax_24] = 0
                    
                    if ((i & 2) != 0)
                    label_1400cc755:
                        var_3d8[1 + rax_24] = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400cc6fe
                        
                        goto label_1400cc763
                    
                label_1400cc6f8:
                    
                    if ((i & 4) != 0)
                    label_1400cc763:
                        var_3d8[2 + rax_24] = 0
                        
                        if ((i & 8) != 0)
                            var_3d8[3 + rax_24] = 0
                    else
                    label_1400cc6fe:
                        
                        if ((i & 8) != 0)
                            var_3d8[3 + rax_24] = 0
                    
                label_1400cc79b:
                    int32_t rdi_11 = *(arg4 + rax_24)
                    char temp0_461 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rdi_11 - 1), 0), *(&var_418 + (rax_24 << 2))))
                    
                    if (temp0_461 != 0)
                        if ((temp0_461 & 1) == 0)
                            if ((temp0_461 & 2) != 0)
                                goto label_1400cc65d
                            
                            goto label_1400cc7d3
                        
                        *(&var_418 + (rax_24 << 2)) = rdi_11 - 2
                        
                        if ((temp0_461 & 2) != 0)
                        label_1400cc65d:
                            *(&var_418:4 + (rax_24 << 2)) = rdi_11 - 2
                            
                            if ((temp0_461 & 4) == 0)
                                goto label_1400cc7dd
                            
                            goto label_1400cc66b
                        
                    label_1400cc7d3:
                        
                        if ((temp0_461 & 4) == 0)
                        label_1400cc7dd:
                            
                            if ((temp0_461 & 8) != 0)
                                goto label_1400cc679
                            
                            goto label_1400cc7e7
                        
                    label_1400cc66b:
                        *(&var_418:8 + (rax_24 << 2)) = rdi_11 - 2
                        
                        if ((temp0_461 & 8) != 0)
                        label_1400cc679:
                            *(&var_418:0xc + (rax_24 << 2)) = rdi_11 - 2
                            
                            if ((temp0_461 & 1) == 0)
                                goto label_1400cc7f1
                            
                            goto label_1400cc687
                        
                    label_1400cc7e7:
                        
                        if ((temp0_461 & 1) == 0)
                        label_1400cc7f1:
                            
                            if ((temp0_461 & 2) != 0)
                                goto label_1400cc699
                            
                            goto label_1400cc7fb
                        
                    label_1400cc687:
                        var_3d8[rax_24] = 0x3f800000
                        
                        if ((temp0_461 & 2) != 0)
                        label_1400cc699:
                            var_3d8[1 + rax_24] = 0x3f800000
                            
                            if ((temp0_461 & 4) == 0)
                                goto label_1400cc805
                            
                            goto label_1400cc6ab
                        
                    label_1400cc7fb:
                        
                        if ((temp0_461 & 4) != 0)
                        label_1400cc6ab:
                            var_3d8[2 + rax_24] = 0x3f800000
                            
                            if ((temp0_461 & 8) != 0)
                                var_3d8[3 + rax_24] = 0x3f800000
                        else
                        label_1400cc805:
                            
                            if ((temp0_461 & 8) != 0)
                                var_3d8[3 + rax_24] = 0x3f800000
                    
                    if (rax_24 == 8)
                        break
                    
                    zmm2 = *(&var_408 + (rax_24 << 2))
                    rax_24 += 4
                    i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm15))
                while (i != 0)
                
                zmm3 = _mm_add_ps(zmm3, temp0_453)
                zmm10 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm6 = var_418
                zmm8 = var_408
                zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm10), 0xe8)
                zmm5 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm10, zmm6), 0xe8), 
                    zmm1[0].q)
                zmm2 = _mm_add_epi32(zmm5, zmm8)
                zmm4 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm4), 0xe8)[0]
                        .q)
                zmm1 = _mm_add_epi32(zmm12, var_3f8_4)
                float (* rax_25)[0x4] = *(arg5 + 0x10)
                zmm1 = _mm_slli_epi32(zmm1, 2)
                int64_t rsi_80 = sx.q(zmm1[0])
                zmm14 = zmm3
                int64_t rdi_14 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                int64_t rbx_7 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
                int64_t rbp_5 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                zmm7 = *(rax_25 + rbp_5 + 4)
                zmm3 = _mm_unpacklo_ps(*(rax_25 + rbx_7), (*(rax_25 + rbp_5))[0].q)
                zmm0 = _mm_unpacklo_ps(*(rax_25 + rbx_7 + 4), zmm7[0].q)
                zmm11 = *(rax_25 + rsi_80 + 4)
                zmm1 = _mm_unpacklo_ps(*(rax_25 + rsi_80), (*(rax_25 + rdi_14))[0].q)[0].q
                    | zmm3.q << 0x40
                zmm11 = _mm_unpacklo_ps(zmm11, (*(rax_25 + rdi_14 + 4)).q)[0].q | zmm0.q << 0x40
                zmm6 = _mm_sub_epi32(zmm6, zmm15)
                zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm10), 0xe8)
                zmm6 =
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm10), 0xe8), zmm0.q)
                zmm0 = _mm_add_epi32(zmm6, zmm8)
                zmm3 = _mm_shuffle_epi32(zmm0, 0xf5)
                uint32_t temp0_502[0x4] = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm4), 0xe8).q), 
                        var_3f8_4), 
                    2)
                zmm2 = _mm_add_epi32(zmm2, zmm10)
                zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
                zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8).q)
                zmm7 = zmm14
                zmm0 = _mm_sub_ps(
                    _mm_unpacklo_ps(*(rax_25 + sx.q(temp0_502[0])), 
                        (*(rax_25 + sx.q(_mm_shuffle_epi32(temp0_502, 0xe5).d))).q).q | _mm_unpacklo_ps(
                        *(rax_25 + sx.q(_mm_shuffle_epi32(temp0_502, 0x4e).d)), 
                        (*(rax_25 + sx.q(_mm_shuffle_epi32(temp0_502, 0xe7)[0])))[0].q).q << 0x40, 
                    zmm1)
                zmm10 = var_3d8
                zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm10), zmm1)
                zmm8 = _mm_sub_epi32(zmm8, zmm15)
                zmm5 = _mm_add_epi32(zmm5, zmm8)
                zmm1 = _mm_shuffle_epi32(zmm5, 0xf5)
                zmm3 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm4), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm4), 0xe8)[0].q), 
                        var_3f8_4), 
                    2)
                float temp0_529[0x4] = _mm_unpacklo_ps(*(rax_25 + sx.q(zmm3.d)), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])))[0].q)
                float temp0_532[0x4] = _mm_unpacklo_ps(
                    *(rax_25 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q)
                zmm1 = temp0_529[0].q | temp0_532[0].q << 0x40
                zmm8 = _mm_add_epi32(zmm8, zmm6)
                zmm3 = _mm_shuffle_epi32(zmm8, 0xf5)
                uint32_t temp0_541[0x4] = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm4), 0xe8).q), 
                        var_3f8_4), 
                    2)
                float temp0_543[0x4] = _mm_unpacklo_ps(*(rax_25 + sx.q(temp0_541[0])), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(temp0_541, 0xe5).d))).q)
                zmm3 = _mm_unpacklo_ps(*(rax_25 + sx.q(_mm_shuffle_epi32(temp0_541, 0x4e).d)), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(temp0_541, 0xe7)[0])))[0].q)
                float temp0_549[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_543[0].q | zmm3.q << 0x40, zmm1), zmm10), zmm1)
                zmm4 = _mm_add_epi32(zmm4, var_3f8_4)
                zmm12 = _mm_add_epi32(zmm12, zmm4)
                zmm4 = _mm_add_epi32(zmm4, zmm2)
                zmm1 = _mm_slli_epi32(_mm_add_epi32(zmm2, var_3f8_4), 2)
                float temp0_556[0x4] = _mm_unpacklo_ps(*(rax_25 + sx.q(zmm1[0]) + 4), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + 4)).q)
                zmm3 = _mm_unpacklo_ps(*(rax_25 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + 4), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + 4))[0].q)
                float temp0_562[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_556[0].q | zmm3.q << 0x40, zmm11), zmm10), zmm11)
                zmm12 = _mm_slli_epi32(zmm12, 2)
                zmm3 = _mm_unpacklo_ps(*(rax_25 + sx.q(zmm12[0]) + 4), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm12, 0xe5)[0]) + 4))[0].q).q | _mm_unpacklo_ps(
                    *(rax_25 + sx.q(_mm_shuffle_epi32(zmm12, 0x4e)[0]) + 4), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm12, 0xe7)[0]) + 4))[0].q)[0].q << 0x40
                zmm4 = _mm_slli_epi32(zmm4, 2)
                float temp0_571[0x4] = _mm_unpacklo_ps(*(rax_25 + sx.q(zmm4[0]) + 4), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + 4))[0].q)
                zmm6 = _mm_unpacklo_ps(*(rax_25 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + 4), 
                    (*(rax_25 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + 4))[0].q)
                float temp0_577[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_571[0].q | zmm6[0].q << 0x40, zmm3), zmm10), zmm3)
                float temp0_580[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_549, zmm0), temp0_451), zmm0)
                zmm1 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_577, temp0_562), temp0_451), 
                                temp0_562), 
                            temp0_580), 
                        temp0_452), 
                    temp0_580)
                float temp0_587[0x4] = _mm_cmpeq_ps(zmm7, zmm13, 4)
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm7, zmm13, 7), temp0_587)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    float temp0_591[0x4] = _mm_rsqrt_ps(zmm7)
                    zmm7 = _mm_mul_ps(_mm_mul_ps(zmm7, temp0_591), temp0_591)
                    zmm3 = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm7), temp0_591), data_142d3f640)
                    float temp0_597[0x4] = _mm_rcp_ps(zmm3)
                    zmm3 = _mm_mul_ps(zmm3, temp0_597)
                    zmm4 = _mm_and_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_597), zmm1), 
                        zmm0)
                    zmm1 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm1), zmm4)
                
                zmm0 = *arg10
                char i_7 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
                
                if (i_7 == 0)
                    result = 0
                    rdx_1 = zx.q(rdx_1.d + 4)
                    
                    if (rdx_1.d s>= r14_9)
                        break
                    
                    continue
                else
                    uint64_t i_1 = zx.q(i_7)
                    result = 0
                    
                    do
                        uint64_t rdi_15
                        
                        if (i_1 == 0)
                            rdi_15 = 0x40
                            i_1 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400cccd1:
                                float var_208[0x4] = zmm1
                                uint64_t rdi_16 = zx.q(rdi_15.d) & 3
                                *arg10 = var_208[rdi_16].d
                                float var_1f8[0x4] = var_378_2
                                *arg9 = var_1f8[rdi_16]
                        else
                            uint64_t rflags_2
                            rdi_15, rflags_2 = _bit_scan_forward(i_1)
                            i_1 &= not.q(1 << (rdi_15 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400cccd1
                        result.b = 1
                    while (i_1 != 0)
            
            rdx_1 = zx.q(rdx_1.d + 4)
            
            if (rdx_1.d s>= r14_9)
                break
    
    if (rdx_1.d s< arg11)
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_1.d), 0), data_142e11d00)
            zmm1 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm0)
            int64_t rax_29 = sx.q(rdx_1.d << 2)
            uint32_t temp0_616 = _mm_movemask_ps(zmm1)
            
            if ((zx.q(temp0_616) & 0xfffffff9) != 9)
                if ((temp0_616.b & 1) == 0)
                    if ((temp0_616.b & 2) != 0)
                        goto label_1400ceb84
                    
                    goto label_1400cdc5a
                
                var_418.d = *(arg8 + rax_29)
                
                if ((temp0_616.b & 2) != 0)
                label_1400ceb84:
                    var_418:4.d = *(arg8 + rax_29 + 4)
                    
                    if ((temp0_616.b & 4) == 0)
                        goto label_1400cdc63
                    
                    goto label_1400ceb9d
                
            label_1400cdc5a:
                
                if ((temp0_616.b & 4) != 0)
                label_1400ceb9d:
                    var_418:8.d = *(arg8 + rax_29 + 8)
                    
                    if ((temp0_616.b & 8) != 0)
                        var_418:0xc.d = *(arg8 + rax_29 + 0xc)
                else
                label_1400cdc63:
                    
                    if ((temp0_616.b & 8) != 0)
                        var_418:0xc.d = *(arg8 + rax_29 + 0xc)
                
                zmm0 = var_418
            else
                zmm0 = *(arg8 + rax_29)
            
            uint128_t var_368_4 = zmm0
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm1
            int64_t rdx_27 = sx.q(zmm2[0])
            int64_t rax_89 = arg7 + (rdx_27 << 2)
            zmm0 = *(arg7 + (rdx_27 << 2))
            int64_t rsi_139 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
            int64_t rdx_29 = arg7 + (rsi_139 << 2)
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg7 + (rsi_139 << 2))).q)
            int64_t rdi_22 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
            int64_t rsi_141 = arg7 + (rdi_22 << 2)
            zmm3 = *(arg7 + (rdi_22 << 2))
            int64_t rdi_24 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            int64_t rbp_32 = arg7 + (rdi_24 << 2)
            zmm0 = zmm0.q | _mm_unpacklo_ps(zmm3, (*(arg7 + (rdi_24 << 2)))[0].q).q << 0x40
            zmm3 = data_142fc95e0 & zmm1
            float (* r12_2)[0x4] = zx.q(zmm3.d)
            zmm8 = *(r12_2 + rax_89)
            uint32_t (* r15_3)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            float temp0_951[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_3 + rdx_29))[0].q)
            uint32_t (* r14_11)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm4 = *(r14_11 + rsi_141)
            uint128_t* rbx_9 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
            float temp0_954[0x4] = _mm_unpacklo_ps(zmm4, (*(rbx_9 + rbp_32)).q)
            zmm8 = temp0_951[0].q | temp0_954[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm1
            zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_89), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_29))[0].q)
            float temp0_959[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_141), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_32)).q)
            zmm6 = zmm6[0].q | temp0_959[0].q << 0x40
            uint128_t var_2a8_2 = zmm0
            uint32_t var_288_2[0x4] = zmm6
            float var_278_2[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            float temp0_960[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_418 = temp0_960
            var_408 = temp0_960
            zmm7 = *arg6
            zmm2 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_961[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_963[0x4] = _mm_mul_ps(zmm8, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_961)
            float temp0_966[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_967[0x4] = _mm_mul_ps(temp0_961, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_966)
            zmm3 = _mm_mul_ps(zx.o(0), temp0_960)
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_966, zmm8))
            zmm0 = _mm_sub_ps(zmm0, zmm7)
            float temp0_973[0x4] = _mm_sub_ps(temp0_963, temp0_967)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_977[0x4] = _mm_add_ps(temp0_973, temp0_973)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_3d8 = zmm6
            uint128_t var_3c8_7 = zmm0
            float var_3b8_7[0x4] = temp0_977
            uint128_t var_3a8_4 = zmm3
            zmm3 = _mm_mul_ps(zmm3, temp0_960)
            float temp0_980[0x4] = _mm_mul_ps(temp0_960, zmm6)
            float temp0_981[0x4] = _mm_mul_ps(temp0_960, zmm0)
            float temp0_982[0x4] = _mm_mul_ps(temp0_960, temp0_977)
            float temp0_983[0x4] = __addps_xmmps_memps(temp0_980, var_2a8_2)
            float temp0_984[0x4] = __addps_xmmps_memps(temp0_981, zmm8)
            float temp0_985[0x4] = __addps_xmmps_memps(temp0_982, var_288_2)
            float var_3e8_4[0x4] = temp0_960
            float var_1e8_2[0x4] = temp0_983
            float var_1d8_2[0x4] = temp0_984
            float var_1c8_2[0x4] = temp0_985
            uint128_t var_1b8_2 = __addps_xmmps_memps(zmm3, var_278_2)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            float temp0_987[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_988[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm0, temp0_988)
            float temp0_990[0x4] = _mm_mul_ps(temp0_988, temp0_977)
            float temp0_991[0x4] = _mm_mul_ps(temp0_977, temp0_987)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_993[0x4] = _mm_mul_ps(temp0_987, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            float temp0_996[0x4] = _mm_sub_ps(temp0_991, _mm_mul_ps(zmm7, zmm0))
            zmm6 = _mm_sub_ps(zmm6, temp0_990)
            zmm3 = _mm_sub_ps(zmm3, temp0_993)
            float temp0_999[0x4] = _mm_add_ps(temp0_996, temp0_983)
            zmm6 = _mm_add_ps(zmm6, temp0_984)
            zmm3 = _mm_add_ps(zmm3, temp0_985)
            zmm8 = arg6[1].d
            zmm2 = *(arg6 + 0x14)
            float temp0_1003[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_999)
            float temp0_1005[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
            float var_1a8[0x4] = temp0_1003
            float var_198[0x4] = temp0_1005
            uint128_t var_388_5 = zmm0
            uint128_t var_188_1 = zmm0
            int64_t rax_93 = 0
            zmm0 = temp0_1003
            
            while (true)
                zmm3 = *(&var_2d8 + rax_93)
                float temp0_1008[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                float temp0_1009[0x4] = _mm_cmpeq_ps(temp0_1008, zmm0, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_1009, zmm1)) != 0)
                    char temp0_1012 = _mm_movemask_ps(temp0_1009)
                    
                    if ((temp0_1012 & 1) == 0)
                        if ((temp0_1012 & 2) != 0)
                            goto label_1400ce06e
                        
                        goto label_1400cdf85
                    
                    *(&var_418 + (rax_93 << 2)) = zmm3.d
                    
                    if ((temp0_1012 & 2) != 0)
                    label_1400ce06e:
                        *(&var_418:4 + (rax_93 << 2)) = zmm3.d
                        
                        if ((temp0_1012 & 4) == 0)
                            goto label_1400cdf8e
                        
                        goto label_1400ce07d
                    
                label_1400cdf85:
                    
                    if ((temp0_1012 & 4) != 0)
                    label_1400ce07d:
                        *(&var_418:8 + (rax_93 << 2)) = zmm3.d
                        
                        if ((temp0_1012 & 8) != 0)
                            *(&var_418:0xc + (rax_93 << 2)) = zmm3.d
                    else
                    label_1400cdf8e:
                        
                        if ((temp0_1012 & 8) != 0)
                            *(&var_418:0xc + (rax_93 << 2)) = zmm3.d
                
                float temp0_1013[0x4] = _mm_cmpeq_ps(temp0_1008, zmm0, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, temp0_1013)) != 0)
                    zmm4 = *(&var_2e8 + rax_93)
                    zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                    zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 1), temp0_1013)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                        char temp0_1021 = _mm_movemask_ps(zmm5)
                        
                        if ((temp0_1021 & 1) == 0)
                            if ((temp0_1021 & 2) != 0)
                                goto label_1400ce09f
                            
                            goto label_1400cdfea
                        
                        *(&var_418 + (rax_93 << 2)) = zmm4[0]
                        
                        if ((temp0_1021 & 2) != 0)
                        label_1400ce09f:
                            *(&var_418:4 + (rax_93 << 2)) = zmm4[0]
                            
                            if ((temp0_1021 & 4) == 0)
                                goto label_1400cdff3
                            
                            goto label_1400ce0ae
                        
                    label_1400cdfea:
                        
                        if ((temp0_1021 & 4) != 0)
                        label_1400ce0ae:
                            *(&var_418:8 + (rax_93 << 2)) = zmm4[0]
                            
                            if ((temp0_1021 & 8) != 0)
                                *(&var_418:0xc + (rax_93 << 2)) = zmm4[0]
                        else
                        label_1400cdff3:
                            
                            if ((temp0_1021 & 8) != 0)
                                *(&var_418:0xc + (rax_93 << 2)) = zmm4[0]
                    
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 5), temp0_1013)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm1)) != 0)
                        zmm2 = *(&var_1a8 + (rax_93 << 2))
                        char temp0_1026 = _mm_movemask_ps(zmm0)
                        
                        if ((temp0_1026 & 1) == 0)
                            if ((temp0_1026 & 2) != 0)
                                goto label_1400ce0d5
                            
                            goto label_1400ce030
                        
                        *(&var_418 + (rax_93 << 2)) = zmm2[0]
                        
                        if ((temp0_1026 & 2) != 0)
                        label_1400ce0d5:
                            *(&var_418:4 + (rax_93 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5).d
                            
                            if ((temp0_1026 & 4) == 0)
                                goto label_1400ce039
                            
                            goto label_1400ce0e9
                        
                    label_1400ce030:
                        
                        if ((temp0_1026 & 4) != 0)
                        label_1400ce0e9:
                            *(&var_418:8 + (rax_93 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e).d
                            
                            if ((temp0_1026 & 8) != 0)
                                *(&var_418:0xc + (rax_93 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                        else
                        label_1400ce039:
                            
                            if ((temp0_1026 & 8) != 0)
                                *(&var_418:0xc + (rax_93 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                
                if (rax_93 == 8)
                    break
                
                zmm0 = *(&var_198 + (rax_93 << 2))
                rax_93 += 4
            
            zmm9 = var_418
            zmm12 = var_408
            float temp0_1030[0x4] = _mm_sub_ps(zmm9, temp0_1003)
            zmm7 = *arg1
            zmm4 = *(arg1 + 4)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm0 = _mm_sub_ps(zmm9, zmm7)
            float temp0_1033[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_1034[0x4] = _mm_sub_ps(zmm12, temp0_1033)
            zmm3 = *arg3
            zmm5 = *(arg3 + 4)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_div_ps(zmm0, zmm3)
            float temp0_1037[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_1038[0x4] = _mm_div_ps(temp0_1034, temp0_1037)
            zmm10 = arg3[1].d
            zmm13 = _mm_cvttps_epi32(zmm0)
            zmm2 = _mm_cvttps_epi32(temp0_1038)
            uint32_t var_318_4[0x4] = zmm3
            uint32_t var_338_4[0x4] = zmm7
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm3), zmm7)
            zmm3 = __divps_xmmps_memps(*arg3 | zmm10[0].q << 0x40, data_142fc9600)
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
            uint128_t var_348_4 = zmm0
            float var_398_6[0x4] = zmm9
            zmm6 = _mm_cmpeq_ps(_mm_add_ps(zmm6, zmm0), zmm9, 1)
            zmm7 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm0, zmm0))
            zmm0 = _mm_and_ps(zmm13, zmm6)
            zmm6 = _mm_or_ps(_mm_andnot_ps(zmm6, zmm7), zmm0)
            float temp0_1055[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_1037), temp0_1033)
            float temp0_1056[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_1057[0x4] = _mm_add_ps(temp0_1055, temp0_1056)
            float temp0_1058[0x4] = _mm_cmpeq_ps(temp0_1057, zmm12, 1)
            char temp0_1060 = _mm_movemask_ps(_mm_and_ps(temp0_1058, zmm1))
            zmm11 = arg1[1].d
            float temp0_1061[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm0 = temp0_960
            float temp0_1062[0x4] = _mm_sub_ps(zmm0, temp0_1061)
            float temp0_1063[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm4 = _mm_cvttps_epi32(_mm_div_ps(temp0_1062, temp0_1063))
            uint32_t var_378_4[0x4] = zmm4
            float temp0_1068[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_1063), temp0_1061)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            var_418 = zmm6
            float temp0_1070[0x4] = _mm_cmpeq_ps(temp0_1057, zmm12, 5)
            
            if (temp0_1060 != 0)
                zmm13 = zmm2
            
            float var_2f8_4[0x4] = zmm12
            float temp0_1071[0x4] = __subps_xmmps_memps(zmm12, temp0_1005)
            float temp0_1072[0x4] = _mm_mul_ps(temp0_1030, temp0_1030)
            float temp0_1073[0x4] = _mm_add_ps(temp0_1068, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_1070, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            float temp0_1077[0x4] = __subps_xmmps_memps(zmm0, var_388_5)
            float temp0_1078[0x4] = _mm_add_ps(temp0_1072, zx.o(0))
            float temp0_1079[0x4] = _mm_mul_ps(temp0_1071, temp0_1071)
            zmm4 = _mm_and_ps(zmm13, temp0_1058)
            zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_1058, zmm7), zmm4)
            var_408 = zmm9
            float temp0_1083[0x4] = _mm_cmpeq_ps(temp0_1073, zmm0, 5)
            float temp0_1084[0x4] = _mm_cmpeq_ps(temp0_1073, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_1084, zmm1)) != 0)
                zmm13 = var_378_4
            
            float temp0_1087[0x4] = _mm_add_ps(temp0_1078, temp0_1079)
            float temp0_1088[0x4] = _mm_mul_ps(temp0_1077, temp0_1077)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_1083, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(var_378_4, data_142d3f800)
            
            float temp0_1092[0x4] = _mm_add_ps(temp0_1087, temp0_1088)
            uint32_t temp0_1093[0x4] = _mm_and_ps(zmm13, temp0_1084)
            zmm12 = _mm_or_ps(_mm_andnot_ps(temp0_1084, zmm7), temp0_1093)
            float temp0_1098[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), var_318_4), var_338_4)
            float temp0_1101[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_1037), temp0_1033)
            float temp0_1104[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_1063), temp0_1061)
            zmm7 = _mm_add_ps(var_348_4, temp0_1098)
            float temp0_1106[0x4] = _mm_add_ps(temp0_1056, temp0_1101)
            zmm3 = _mm_add_ps(zmm3, temp0_1104)
            float temp0_1108[0x4] = _mm_sub_ps(var_398_6, zmm7)
            float temp0_1109[0x4] = _mm_sub_ps(var_2f8_4, temp0_1106)
            zmm0 = _mm_sub_ps(zmm0, zmm3)
            float temp0_1111[0x4] = _mm_div_ps(temp0_1108, var_318_4)
            float temp0_1112[0x4] = _mm_div_ps(temp0_1109, temp0_1037)
            zmm0 = _mm_div_ps(zmm0, temp0_1063)
            var_3d8 = temp0_1111
            uint128_t var_3b8_8 = zmm0
            int64_t rax_98 = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
                
                if (_mm_movemask_ps(zmm6 & zmm1) != 0)
                    char temp0_1117 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_1117 & 1) == 0)
                        if ((temp0_1117 & 2) != 0)
                            goto label_1400ce4a0
                        
                        goto label_1400ce3d1
                    
                    *(&var_418 + (rax_98 << 2)) = 0
                    
                    if ((temp0_1117 & 2) != 0)
                    label_1400ce4a0:
                        *(&var_418:4 + (rax_98 << 2)) = 0
                        
                        if ((temp0_1117 & 4) == 0)
                            goto label_1400ce3da
                        
                        goto label_1400ce4b1
                    
                label_1400ce3d1:
                    
                    if ((temp0_1117 & 4) == 0)
                    label_1400ce3da:
                        
                        if ((temp0_1117 & 8) != 0)
                            goto label_1400ce4c2
                        
                        goto label_1400ce3e3
                    
                label_1400ce4b1:
                    *(&var_418:8 + (rax_98 << 2)) = 0
                    
                    if ((temp0_1117 & 8) != 0)
                    label_1400ce4c2:
                        *(&var_418:0xc + (rax_98 << 2)) = 0
                        
                        if ((temp0_1117 & 1) == 0)
                            goto label_1400ce3ec
                        
                        goto label_1400ce4d3
                    
                label_1400ce3e3:
                    
                    if ((temp0_1117 & 1) == 0)
                    label_1400ce3ec:
                        
                        if ((temp0_1117 & 2) != 0)
                            goto label_1400ce4e4
                        
                        goto label_1400ce3f5
                    
                label_1400ce4d3:
                    var_3d8[rax_98] = 0
                    
                    if ((temp0_1117 & 2) != 0)
                    label_1400ce4e4:
                        var_3d8[1 + rax_98] = 0
                        
                        if ((temp0_1117 & 4) == 0)
                            goto label_1400ce3fe
                        
                        goto label_1400ce4f5
                    
                label_1400ce3f5:
                    
                    if ((temp0_1117 & 4) != 0)
                    label_1400ce4f5:
                        var_3d8[2 + rax_98] = 0
                        
                        if ((temp0_1117 & 8) != 0)
                            var_3d8[3 + rax_98] = 0
                    else
                    label_1400ce3fe:
                        
                        if ((temp0_1117 & 8) != 0)
                            var_3d8[3 + rax_98] = 0
                
                int32_t rdx_37 = *(arg4 + rax_98)
                zmm2 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_37 - 1), 0), 
                    *(&var_418 + (rax_98 << 2)))
                
                if (_mm_movemask_ps(zmm2 & zmm1) != 0)
                    char temp0_1121 = _mm_movemask_ps(zmm2)
                    
                    if ((temp0_1121 & 1) == 0)
                        if ((temp0_1121 & 2) != 0)
                            goto label_1400ce51c
                        
                        goto label_1400ce447
                    
                    *(&var_418 + (rax_98 << 2)) = rdx_37 - 2
                    
                    if ((temp0_1121 & 2) != 0)
                    label_1400ce51c:
                        *(&var_418:4 + (rax_98 << 2)) = rdx_37 - 2
                        
                        if ((temp0_1121 & 4) == 0)
                            goto label_1400ce450
                        
                        goto label_1400ce529
                    
                label_1400ce447:
                    
                    if ((temp0_1121 & 4) == 0)
                    label_1400ce450:
                        
                        if ((temp0_1121 & 8) != 0)
                            goto label_1400ce536
                        
                        goto label_1400ce459
                    
                label_1400ce529:
                    *(&var_418:8 + (rax_98 << 2)) = rdx_37 - 2
                    
                    if ((temp0_1121 & 8) != 0)
                    label_1400ce536:
                        *(&var_418:0xc + (rax_98 << 2)) = rdx_37 - 2
                        
                        if ((temp0_1121 & 1) == 0)
                            goto label_1400ce462
                        
                        goto label_1400ce543
                    
                label_1400ce459:
                    
                    if ((temp0_1121 & 1) == 0)
                    label_1400ce462:
                        
                        if ((temp0_1121 & 2) != 0)
                            goto label_1400ce554
                        
                        goto label_1400ce46b
                    
                label_1400ce543:
                    var_3d8[rax_98] = 0x3f800000
                    
                    if ((temp0_1121 & 2) != 0)
                    label_1400ce554:
                        var_3d8[1 + rax_98] = 0x3f800000
                        
                        if ((temp0_1121 & 4) == 0)
                            goto label_1400ce474
                        
                        goto label_1400ce565
                    
                label_1400ce46b:
                    
                    if ((temp0_1121 & 4) != 0)
                    label_1400ce565:
                        var_3d8[2 + rax_98] = 0x3f800000
                        
                        if ((temp0_1121 & 8) != 0)
                            var_3d8[3 + rax_98] = 0x3f800000
                    else
                    label_1400ce474:
                        
                        if ((temp0_1121 & 8) != 0)
                            var_3d8[3 + rax_98] = 0x3f800000
                
                if (rax_98 == 8)
                    break
                
                zmm6 = *(&var_408 + (rax_98 << 2))
                rax_98 += 4
            
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_418
            zmm2 = var_408
            zmm10 = zmm12
            zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
            zmm7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), zmm0.q)
            zmm0 = _mm_add_epi32(zmm7, zmm2)
            zmm3 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm3), 0xe8)[0].q)
            zmm6 = _mm_add_epi32(zmm14, zmm10)
            float (* rcx_11)[0x4] = *(arg5 + 0x10)
            zmm6 = _mm_slli_epi32(zmm6, 2) & zmm1
            int64_t rax_101 = sx.q(zmm6[0])
            zmm15 = *(rcx_11 + rax_101)
            int64_t rax_103 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
            float temp0_1140[0x4] = _mm_unpacklo_ps(zmm15, (*(rcx_11 + rax_103))[0].q)
            int64_t rdx_39 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
            zmm5 = *(rcx_11 + rdx_39)
            int64_t rbp_33 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
            float temp0_1143[0x4] = _mm_unpacklo_ps(zmm5, (*(rcx_11 + rbp_33))[0].q)
            zmm15 = temp0_1140[0].q | temp0_1143[0].q << 0x40
            zmm13 = _mm_cmpeq_epi32(var_318_4, var_318_4)
            zmm4 = _mm_sub_epi32(zmm4, zmm13)
            zmm5 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
            zmm12 =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm8), 0xe8), zmm5[0].q)
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
            zmm6 = _mm_unpacklo_ps(*(rcx_11 + sx.q(zmm4[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q)
            zmm0 = _mm_unpacklo_ps(*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
            zmm6 = _mm_sub_ps(zmm6[0].q | zmm0.q << 0x40, zmm15)
            zmm11 = var_3d8
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
            zmm0 = _mm_unpacklo_ps(*(rcx_11 + sx.q(zmm4[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
                *(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)[0].q << 0x40
            zmm2 = _mm_add_epi32(zmm2, zmm12)
            zmm4 = _mm_shuffle_epi32(zmm2, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8)[0].q), 
                    zmm10), 
                2) & zmm1
            float temp0_1201[0x4] = _mm_unpacklo_ps(*(rcx_11 + sx.q(zmm5[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q)
            float temp0_1204[0x4] = _mm_unpacklo_ps(
                *(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
            float temp0_1207[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_1201[0].q | temp0_1204[0].q << 0x40, zmm0), zmm11), 
                zmm0)
            zmm0 =
                _mm_unpacklo_ps(*(r12_2 + rcx_11 + rax_101), (*(r15_3 + rcx_11 + rax_103))[0].q).q
                | 
                _mm_unpacklo_ps(*(r14_11 + rcx_11 + rdx_39), (*(rbx_9 + rcx_11 + rbp_33))[0].q)[0].q
                << 0x40
            zmm3 = _mm_add_epi32(zmm3, zmm10)
            zmm14 = _mm_add_epi32(zmm14, zmm3)
            zmm3 = _mm_add_epi32(zmm3, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2) & zmm1
            float temp0_1216[0x4] = _mm_unpacklo_ps(*(r12_2 + sx.q(zmm8[0]) + rcx_11), 
                (*(r15_3 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5)[0]) + rcx_11))[0].q)
            float temp0_1219[0x4] = _mm_unpacklo_ps(
                *(r14_11 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e)[0]) + rcx_11), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + rcx_11))[0].q)
            float temp0_1222[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_1216[0].q | temp0_1219[0].q << 0x40, zmm0), zmm11), 
                zmm0)
            zmm14 = _mm_slli_epi32(zmm14, 2) & zmm1
            zmm0 = _mm_unpacklo_ps(*(r12_2 + sx.q(zmm14[0]) + rcx_11), 
                (*(r15_3 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5)[0]) + rcx_11))[0].q).q | _mm_unpacklo_ps(
                *(r14_11 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e)[0]) + rcx_11), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rcx_11))[0].q)[0].q << 0x40
            zmm3 = _mm_slli_epi32(zmm3, 2) & zmm1
            float temp0_1231[0x4] = _mm_unpacklo_ps(*(r12_2 + sx.q(zmm3.d) + rcx_11), 
                (*(r15_3 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rcx_11))[0].q)
            zmm7 = _mm_unpacklo_ps(*(r14_11 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rcx_11), 
                (*(rbx_9 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rcx_11)).q)
            float temp0_1237[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_1231[0].q | zmm7[0].q << 0x40, zmm0), zmm11), zmm0)
            float temp0_1240[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1207, zmm6), temp0_1112), zmm6)
            zmm4 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1237, temp0_1222), temp0_1112), 
                            temp0_1222), 
                        temp0_1240), 
                    var_3b8_8), 
                temp0_1240)
            float temp0_1247[0x4] = _mm_cmpeq_ps(temp0_1092, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_1092, 7), temp0_1247), zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_1252[0x4] = _mm_rsqrt_ps(temp0_1092)
                float temp0_1254[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_1092, temp0_1252), temp0_1252)
                zmm3 = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_1254), temp0_1252), data_142d3f640)
                float temp0_1258[0x4] = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, temp0_1258)
                zmm5 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_1258), zmm4), 
                    zmm0)
                zmm4 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm4), zmm5)
            
            zmm0 = *arg10
            uint32_t i_9 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm4, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm1))
            
            if (i_9 == 0)
                return 0
            
            uint64_t i_2 = zx.q(i_9)
            result = 0
            
            do
                uint64_t rdx_42
                
                if (i_2 == 0)
                    rdx_42 = 0x40
                    i_2 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400cea71:
                        float var_228[0x4] = zmm4
                        uint64_t rdx_43 = zx.q(rdx_42.d) & 3
                        *arg10 = var_228[rdx_43].d
                        uint128_t var_218 = var_368_4
                        *arg9 = *(&var_218 + (rdx_43 << 2))
                else
                    uint64_t rflags_4
                    rdx_42, rflags_4 = _bit_scan_forward(i_2)
                    i_2 &= not.q(1 << (rdx_42 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400cea71
                result.b = 1
            while (i_2 != 0)
else
    float var_2b8 = temp0_2[0]
    float var_2b4_1 = temp0_3[0]
    int32_t var_2b0_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, zx.o(*arg1)[0].q | arg1[1].d[0].q << 0x40)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    zmm2 = _mm_unpackhi_pd(zmm0, zmm0.q)
    int32_t var_2c8 = zmm0.d
    float var_2c4_1 = temp0_6[0]
    float var_2c0_1 = zmm2[0]
    int32_t r14_4 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
    uint64_t rdx
    
    if (r14_4 s<= 0)
        rdx = 0
        result = 0
    else
        result = 0
        zmm13 = zx.o(0)
        rdx = 0
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                zmm1 = *(arg8 + sx.q((rdx << 2).d))
                float var_378_1[0x4] = zmm1
                zmm0 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1)
                int64_t rax_5 = sx.q(zmm0.d)
                int64_t rsi_3 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                int64_t rbp_1 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                zmm1 = *(arg7 + (rbp_1 << 2) + 4)
                float temp0_13[0x4] =
                    _mm_unpacklo_ps(*(arg7 + (rdi_2 << 2)), (*(arg7 + (rbp_1 << 2))).q)
                zmm0 = _mm_unpacklo_ps(*(arg7 + (rdi_2 << 2) + 4), zmm1[0].q)
                zmm4 = *(arg7 + (rax_5 << 2) + 4)
                zmm1 = _mm_unpacklo_ps(*(arg7 + (rax_5 << 2)), (*(arg7 + (rsi_3 << 2))).q)[0].q
                    | temp0_13[0].q << 0x40
                zmm4 =
                    _mm_unpacklo_ps(zmm4, (*(arg7 + (rsi_3 << 2) + 4))[0].q)[0].q | zmm0.q << 0x40
                float temp0_17[0x4] =
                    _mm_unpacklo_ps(*(arg7 + (rax_5 << 2) + 8), (*(arg7 + (rsi_3 << 2) + 8)).q)
                zmm0 = _mm_unpacklo_ps(*(arg7 + (rdi_2 << 2) + 8), (*(arg7 + (rbp_1 << 2) + 8)).q)
                zmm2 = temp0_17[0].q | zmm0.q << 0x40
                var_3d8 = zmm1
                uint32_t var_3a8_1[0x4] = zmm13
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_418 = zmm0
                var_408 = zmm0
                uint128_t var_3f8_1 = zmm0
                uint128_t var_3e8_1 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_20[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_21[0x4] = _mm_mul_ps(zmm2, temp0_20)
                float temp0_22[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                zmm3 = _mm_mul_ps(zmm1, temp0_22)
                float temp0_24[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm7 = _mm_mul_ps(zmm4, temp0_24)
                float temp0_27[0x4] = _mm_sub_ps(temp0_21, _mm_mul_ps(zmm4, temp0_22))
                zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm2, temp0_24))
                zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_20))
                float temp0_32[0x4] = _mm_add_ps(temp0_27, temp0_27)
                zmm3 = _mm_add_ps(zmm3, zmm3)
                zmm7 = _mm_add_ps(zmm7, zmm7)
                float temp0_35[0x4] = _mm_mul_ps(zmm0, temp0_32)
                float temp0_36[0x4] = _mm_mul_ps(zmm0, zmm3)
                float temp0_37[0x4] = __addps_xmmps_memps(temp0_35, var_3d8)
                float temp0_38[0x4] = __addps_xmmps_memps(temp0_36, zmm4)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), zmm2)
                zmm6 = _mm_mul_ps(zmm7, temp0_20)
                float temp0_42[0x4] = _mm_mul_ps(temp0_32, temp0_22)
                float temp0_43[0x4] = _mm_mul_ps(zmm3, temp0_24)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_22)), temp0_37)
                float temp0_49[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_42, _mm_mul_ps(zmm7, temp0_24)), temp0_38)
                float temp0_52[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_43, _mm_mul_ps(temp0_32, temp0_20)), zmm0)
                zmm2 = arg6[1].d
                zmm3 = *(arg6 + 0x14)
                float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
                zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_49)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_52)
                float var_118[0x4] = temp0_54
                uint128_t var_348_1 = zmm3
                uint128_t var_108 = zmm3
                uint128_t var_388_1 = zmm0
                uint128_t var_f8_1 = zmm0
                int64_t rax_6 = 0
                zmm0 = temp0_54
                
                while (true)
                    zmm2 = *(&var_2b8 + rax_6)
                    float temp0_59[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_61 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_59, zmm0, 1))
                    
                    if (temp0_61 != 0)
                        if ((temp0_61 & 1) == 0)
                            if ((temp0_61 & 2) != 0)
                                goto label_1400cb55f
                            
                            goto label_1400cb473
                        
                        *(&var_418 + (rax_6 << 2)) = zmm2[0]
                        
                        if ((temp0_61 & 2) != 0)
                        label_1400cb55f:
                            *(&var_418:4 + (rax_6 << 2)) = zmm2[0]
                            
                            if ((temp0_61 & 4) == 0)
                                goto label_1400cb47d
                            
                            goto label_1400cb56f
                        
                    label_1400cb473:
                        
                        if ((temp0_61 & 4) != 0)
                        label_1400cb56f:
                            *(&var_418:8 + (rax_6 << 2)) = zmm2[0]
                            
                            if ((temp0_61 & 8) != 0)
                                *(&var_418:0xc + (rax_6 << 2)) = zmm2[0]
                        else
                        label_1400cb47d:
                            
                            if ((temp0_61 & 8) != 0)
                                *(&var_418:0xc + (rax_6 << 2)) = zmm2[0]
                    
                    float temp0_62[0x4] = _mm_cmpeq_ps(temp0_59, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_62) != 0)
                        zmm3 = *(&var_2c8 + rax_6)
                        float temp0_64[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_67 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_64, 1), temp0_62))
                        
                        if (temp0_67 != 0)
                            if ((temp0_67 & 1) == 0)
                                if ((temp0_67 & 2) != 0)
                                    goto label_1400cb593
                                
                                goto label_1400cb4d3
                            
                            *(&var_418 + (rax_6 << 2)) = zmm3.d
                            
                            if ((temp0_67 & 2) != 0)
                            label_1400cb593:
                                *(&var_418:4 + (rax_6 << 2)) = zmm3.d
                                
                                if ((temp0_67 & 4) == 0)
                                    goto label_1400cb4dd
                                
                                goto label_1400cb5a3
                            
                        label_1400cb4d3:
                            
                            if ((temp0_67 & 4) != 0)
                            label_1400cb5a3:
                                *(&var_418:8 + (rax_6 << 2)) = zmm3.d
                                
                                if ((temp0_67 & 8) != 0)
                                    *(&var_418:0xc + (rax_6 << 2)) = zmm3.d
                            else
                            label_1400cb4dd:
                                
                                if ((temp0_67 & 8) != 0)
                                    *(&var_418:0xc + (rax_6 << 2)) = zmm3.d
                        
                        char temp0_70 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_64, 5), temp0_62))
                        
                        if (temp0_70 != 0)
                            zmm0 = *(&var_118 + (rax_6 << 2))
                            
                            if ((temp0_70 & 1) == 0)
                                if ((temp0_70 & 2) != 0)
                                    goto label_1400cb5cc
                                
                                goto label_1400cb519
                            
                            *(&var_418 + (rax_6 << 2)) = zmm0.d
                            
                            if ((temp0_70 & 2) != 0)
                            label_1400cb5cc:
                                *(&var_418:4 + (rax_6 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                
                                if ((temp0_70 & 4) == 0)
                                    goto label_1400cb523
                                
                                goto label_1400cb5e1
                            
                        label_1400cb519:
                            
                            if ((temp0_70 & 4) != 0)
                            label_1400cb5e1:
                                *(&var_418:8 + (rax_6 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                
                                if ((temp0_70 & 8) != 0)
                                    *(&var_418:0xc + (rax_6 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_1400cb523:
                                
                                if ((temp0_70 & 8) != 0)
                                    *(&var_418:0xc + (rax_6 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                    
                    if (rax_6 == 8)
                        break
                    
                    zmm0 = *(&var_108 + (rax_6 << 2))
                    rax_6 += 4
                
                zmm12 = var_418
                zmm10 = var_408
                zmm1 = var_3f8_1
                zmm4 = *arg1
                zmm14 = *(arg1 + 4)
                float temp0_74[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm0 = _mm_sub_ps(zmm12, temp0_74)
                float temp0_76[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
                float temp0_77[0x4] = _mm_sub_ps(zmm10, temp0_76)
                zmm3 = arg1[1].d
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                float var_308_1[0x4] = zmm1
                float temp0_79[0x4] = _mm_sub_ps(zmm1, zmm3)
                zmm6 = *arg3
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
                zmm0 = _mm_div_ps(zmm0, zmm6)
                zmm8 = _mm_cmpeq_epi32(temp0_20, temp0_20)
                zmm15 = arg3[1].d
                zmm7 = _mm_cvttps_epi32(zmm0)
                uint32_t var_318_1[0x4] = zmm6
                float temp0_86[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), zmm6), temp0_74)
                float temp0_87[0x4] =
                    __divps_xmmps_memps(zx.o(*arg3)[0].q | zmm15[0].q << 0x40, data_142fc9600)
                zmm0 = _mm_shuffle_ps(temp0_87, temp0_87, 0)
                uint128_t var_368_1 = zmm0
                float temp0_90[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_86, zmm0), zmm12, 1)
                zmm13 = _mm_add_epi32(zmm7, zmm8)
                zmm0 = _mm_and_ps(zmm7, temp0_90)
                zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_90, zmm13), zmm0)
                zmm8 = *(arg3 + 4)
                float temp0_95[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_96[0x4] = _mm_div_ps(temp0_77, temp0_95)
                float temp0_97[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
                float temp0_98[0x4] = _mm_div_ps(temp0_79, temp0_97)
                zmm6 = _mm_cvttps_epi32(temp0_96)
                zmm1 = _mm_cvttps_epi32(temp0_98)
                float temp0_102[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_95)
                float temp0_104[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_97)
                float temp0_105[0x4] = _mm_add_ps(temp0_102, temp0_76)
                uint128_t var_358_1 = zmm3
                float temp0_106[0x4] = _mm_add_ps(temp0_104, zmm3)
                float temp0_107[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x55)
                float temp0_108[0x4] = _mm_add_ps(temp0_105, temp0_107)
                float temp0_109[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xaa)
                var_418 = zmm2
                zmm0 = _mm_cmpeq_ps(temp0_108, zmm10, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm7 = zmm6
                
                float temp0_112[0x4] = _mm_add_ps(temp0_106, temp0_109)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_108, zmm10, 5)) != 0)
                    zmm13 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
                
                zmm3 = __subps_xmmps_memps(zmm12, temp0_54)
                float var_398_2[0x4] = zmm10
                zmm6 = __subps_xmmps_memps(zmm10, var_348_1)
                zmm5 = _mm_and_ps(zmm7, zmm0)
                zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm13), zmm5)
                var_408 = zmm0
                float temp0_121[0x4] = _mm_cmpeq_ps(temp0_112, var_308_1, 1)
                
                if (_mm_movemask_ps(temp0_121) != 0)
                    zmm7 = zmm1
                
                float temp0_123[0x4] = __subps_xmmps_memps(var_308_1, var_388_1)
                zmm3 = _mm_mul_ps(zmm3, zmm3)
                zmm6 = _mm_mul_ps(zmm6, zmm6)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_112, var_308_1, 5)) != 0)
                    zmm13 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
                
                uint32_t temp0_129[0x4] = _mm_and_ps(zmm7, temp0_121)
                zmm10 = _mm_or_ps(_mm_andnot_ps(temp0_121, zmm13), temp0_129)
                zmm13 = zx.o(0)
                zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm13), zmm6)
                float temp0_136[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), var_318_1), temp0_74)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_95), temp0_76)
                float var_3f8_2[0x4] = zmm10
                float temp0_142[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_97), var_358_1)
                zmm7 = _mm_add_ps(var_368_1, temp0_136)
                float temp0_144[0x4] = _mm_add_ps(temp0_107, zmm0)
                float temp0_145[0x4] = _mm_add_ps(temp0_109, temp0_142)
                zmm0 = _mm_sub_ps(zmm12, zmm7)
                float temp0_147[0x4] = _mm_sub_ps(var_398_2, temp0_144)
                float temp0_148[0x4] = _mm_sub_ps(var_308_1, temp0_145)
                zmm0 = _mm_div_ps(zmm0, var_318_1)
                float temp0_150[0x4] = _mm_div_ps(temp0_147, temp0_95)
                float temp0_151[0x4] = _mm_div_ps(temp0_148, temp0_97)
                var_3d8 = zmm0
                float temp0_152[0x4] = _mm_mul_ps(temp0_123, temp0_123)
                int64_t rax_11 = 0
                zmm15 = _mm_cmpeq_epi32(temp0_97, temp0_97)
                char i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm15))
                
                if (i_3 == 0)
                    goto label_1400cb9db
                
                do
                    if ((i_3 & 1) == 0)
                        if ((i_3 & 2) != 0)
                            goto label_1400cb95d
                        
                        goto label_1400cb920
                    
                    *(&var_418 + (rax_11 << 2)) = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400cb95d:
                        *(&var_418:4 + (rax_11 << 2)) = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400cb926
                        
                        goto label_1400cb96b
                    
                label_1400cb920:
                    
                    if ((i_3 & 4) == 0)
                    label_1400cb926:
                        
                        if ((i_3 & 8) != 0)
                            goto label_1400cb979
                        
                        goto label_1400cb92c
                    
                label_1400cb96b:
                    *(&var_418:8 + (rax_11 << 2)) = 0
                    
                    if ((i_3 & 8) != 0)
                    label_1400cb979:
                        *(&var_418:0xc + (rax_11 << 2)) = 0
                        
                        if ((i_3 & 1) == 0)
                            goto label_1400cb932
                        
                        goto label_1400cb987
                    
                label_1400cb92c:
                    
                    if ((i_3 & 1) == 0)
                    label_1400cb932:
                        
                        if ((i_3 & 2) != 0)
                            goto label_1400cb995
                        
                        goto label_1400cb938
                    
                label_1400cb987:
                    var_3d8[rax_11] = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400cb995:
                        var_3d8[1 + rax_11] = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400cb93e
                        
                        goto label_1400cb9a3
                    
                label_1400cb938:
                    
                    if ((i_3 & 4) != 0)
                    label_1400cb9a3:
                        var_3d8[2 + rax_11] = 0
                        
                        if ((i_3 & 8) != 0)
                            var_3d8[3 + rax_11] = 0
                    else
                    label_1400cb93e:
                        
                        if ((i_3 & 8) != 0)
                            var_3d8[3 + rax_11] = 0
                    
                label_1400cb9db:
                    int32_t rdi_3 = *(arg4 + rax_11)
                    char temp0_160 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rdi_3 - 1), 0), *(&var_418 + (rax_11 << 2))))
                    
                    if (temp0_160 != 0)
                        if ((temp0_160 & 1) == 0)
                            if ((temp0_160 & 2) != 0)
                                goto label_1400cb89d
                            
                            goto label_1400cba13
                        
                        *(&var_418 + (rax_11 << 2)) = rdi_3 - 2
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400cb89d:
                            *(&var_418:4 + (rax_11 << 2)) = rdi_3 - 2
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400cba1d
                            
                            goto label_1400cb8ab
                        
                    label_1400cba13:
                        
                        if ((temp0_160 & 4) == 0)
                        label_1400cba1d:
                            
                            if ((temp0_160 & 8) != 0)
                                goto label_1400cb8b9
                            
                            goto label_1400cba27
                        
                    label_1400cb8ab:
                        *(&var_418:8 + (rax_11 << 2)) = rdi_3 - 2
                        
                        if ((temp0_160 & 8) != 0)
                        label_1400cb8b9:
                            *(&var_418:0xc + (rax_11 << 2)) = rdi_3 - 2
                            
                            if ((temp0_160 & 1) == 0)
                                goto label_1400cba31
                            
                            goto label_1400cb8c7
                        
                    label_1400cba27:
                        
                        if ((temp0_160 & 1) == 0)
                        label_1400cba31:
                            
                            if ((temp0_160 & 2) != 0)
                                goto label_1400cb8d9
                            
                            goto label_1400cba3b
                        
                    label_1400cb8c7:
                        var_3d8[rax_11] = 0x3f800000
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400cb8d9:
                            var_3d8[1 + rax_11] = 0x3f800000
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400cba45
                            
                            goto label_1400cb8eb
                        
                    label_1400cba3b:
                        
                        if ((temp0_160 & 4) != 0)
                        label_1400cb8eb:
                            var_3d8[2 + rax_11] = 0x3f800000
                            
                            if ((temp0_160 & 8) != 0)
                                var_3d8[3 + rax_11] = 0x3f800000
                        else
                        label_1400cba45:
                            
                            if ((temp0_160 & 8) != 0)
                                var_3d8[3 + rax_11] = 0x3f800000
                    
                    if (rax_11 == 8)
                        break
                    
                    zmm2 = *(&var_408 + (rax_11 << 2))
                    rax_11 += 4
                    i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm2, zmm15))
                while (i_3 != 0)
                
                zmm3 = _mm_add_ps(zmm3, temp0_152)
                zmm10 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm6 = var_418
                zmm8 = var_408
                zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm10), 0xe8)
                zmm5 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm10, zmm6), 0xe8), 
                    zmm1[0].q)
                zmm2 = _mm_add_epi32(zmm5, zmm8)
                zmm4 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm4), 0xe8)[0]
                        .q)
                zmm1 = _mm_add_epi32(zmm12, var_3f8_2)
                float (* rax_12)[0x4] = *(arg5 + 0x10)
                zmm1 = _mm_slli_epi32(zmm1, 2)
                int64_t rsi_16 = sx.q(zmm1[0])
                zmm14 = zmm3
                int64_t rdi_6 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
                int64_t rbx_3 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                zmm7 = *(rax_12 + rbx_3 + 4)
                zmm3 = _mm_unpacklo_ps(*(rax_12 + rbp_3), (*(rax_12 + rbx_3))[0].q)
                zmm0 = _mm_unpacklo_ps(*(rax_12 + rbp_3 + 4), zmm7[0].q)
                zmm11 = *(rax_12 + rsi_16 + 4)
                zmm1 = _mm_unpacklo_ps(*(rax_12 + rsi_16), (*(rax_12 + rdi_6))[0].q)[0].q
                    | zmm3.q << 0x40
                zmm11 = _mm_unpacklo_ps(zmm11, (*(rax_12 + rdi_6 + 4)).q)[0].q | zmm0.q << 0x40
                zmm6 = _mm_sub_epi32(zmm6, zmm15)
                zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm10), 0xe8)
                zmm6 =
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm10), 0xe8), zmm0.q)
                zmm0 = _mm_add_epi32(zmm6, zmm8)
                zmm3 = _mm_shuffle_epi32(zmm0, 0xf5)
                uint32_t temp0_201[0x4] = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm4), 0xe8).q), 
                        var_3f8_2), 
                    2)
                zmm2 = _mm_add_epi32(zmm2, zmm10)
                zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
                zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8).q)
                zmm7 = zmm14
                zmm0 = _mm_sub_ps(
                    _mm_unpacklo_ps(*(rax_12 + sx.q(temp0_201[0])), 
                        (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_201, 0xe5).d))).q).q | _mm_unpacklo_ps(
                        *(rax_12 + sx.q(_mm_shuffle_epi32(temp0_201, 0x4e).d)), 
                        (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_201, 0xe7)[0])))[0].q).q << 0x40, 
                    zmm1)
                zmm10 = var_3d8
                zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm10), zmm1)
                zmm8 = _mm_sub_epi32(zmm8, zmm15)
                zmm5 = _mm_add_epi32(zmm5, zmm8)
                zmm1 = _mm_shuffle_epi32(zmm5, 0xf5)
                zmm3 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm4), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm4), 0xe8)[0].q), 
                        var_3f8_2), 
                    2)
                float temp0_228[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm3.d)), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])))[0].q)
                float temp0_231[0x4] = _mm_unpacklo_ps(
                    *(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q)
                zmm1 = temp0_228[0].q | temp0_231[0].q << 0x40
                zmm8 = _mm_add_epi32(zmm8, zmm6)
                zmm3 = _mm_shuffle_epi32(zmm8, 0xf5)
                uint32_t temp0_240[0x4] = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm4), 0xe8).q), 
                        var_3f8_2), 
                    2)
                float temp0_242[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(temp0_240[0])), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_240, 0xe5).d))).q)
                zmm3 = _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_240, 0x4e).d)), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_240, 0xe7)[0])))[0].q)
                float temp0_248[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_242[0].q | zmm3.q << 0x40, zmm1), zmm10), zmm1)
                zmm4 = _mm_add_epi32(zmm4, var_3f8_2)
                zmm12 = _mm_add_epi32(zmm12, zmm4)
                zmm4 = _mm_add_epi32(zmm4, zmm2)
                zmm1 = _mm_slli_epi32(_mm_add_epi32(zmm2, var_3f8_2), 2)
                float temp0_255[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm1[0]) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + 4)).q)
                zmm3 = _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + 4))[0].q)
                float temp0_261[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_255[0].q | zmm3.q << 0x40, zmm11), zmm10), zmm11)
                zmm12 = _mm_slli_epi32(zmm12, 2)
                zmm3 = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm12[0]) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm12, 0xe5)[0]) + 4))[0].q).q | _mm_unpacklo_ps(
                    *(rax_12 + sx.q(_mm_shuffle_epi32(zmm12, 0x4e)[0]) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm12, 0xe7)[0]) + 4))[0].q)[0].q << 0x40
                zmm4 = _mm_slli_epi32(zmm4, 2)
                float temp0_270[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm4[0]) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + 4))[0].q)
                zmm6 = _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + 4))[0].q)
                float temp0_276[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_270[0].q | zmm6[0].q << 0x40, zmm3), zmm10), zmm3)
                float temp0_279[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_248, zmm0), temp0_150), zmm0)
                zmm1 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_276, temp0_261), temp0_150), 
                                temp0_261), 
                            temp0_279), 
                        temp0_151), 
                    temp0_279)
                float temp0_286[0x4] = _mm_cmpeq_ps(zmm7, zmm13, 4)
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm7, zmm13, 7), temp0_286)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    float temp0_290[0x4] = _mm_rsqrt_ps(zmm7)
                    zmm7 = _mm_mul_ps(_mm_mul_ps(zmm7, temp0_290), temp0_290)
                    zmm3 = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm7), temp0_290), data_142d3f640)
                    float temp0_296[0x4] = _mm_rcp_ps(zmm3)
                    zmm3 = _mm_mul_ps(zmm3, temp0_296)
                    zmm4 = _mm_and_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_296), zmm1), 
                        zmm0)
                    zmm1 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm1), zmm4)
                
                zmm0 = *arg10
                char i_6 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
                
                if (i_6 == 0)
                    result = 0
                    rdx = zx.q(rdx.d + 4)
                    
                    if (rdx.d s>= r14_4)
                        break
                    
                    continue
                else
                    uint64_t i_4 = zx.q(i_6)
                    result = 0
                    
                    do
                        uint64_t rdi_7
                        
                        if (i_4 == 0)
                            rdi_7 = 0x40
                            i_4 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400cbf11:
                                float var_248[0x4] = zmm1
                                uint64_t rdi_8 = zx.q(rdi_7.d) & 3
                                *arg10 = var_248[rdi_8].d
                                float var_238[0x4] = var_378_1
                                *arg9 = var_238[rdi_8]
                        else
                            uint64_t rflags_1
                            rdi_7, rflags_1 = _bit_scan_forward(i_4)
                            i_4 &= not.q(1 << (rdi_7 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400cbf11
                        result.b = 1
                    while (i_4 != 0)
            
            rdx = zx.q(rdx.d + 4)
            
            if (rdx.d s>= r14_4)
                break
    
    if (rdx.d s< arg11)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx.d), 0), data_142e11d00)
            zmm1 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm0)
            int64_t rax_28 = sx.q(rdx.d << 2)
            uint32_t temp0_611 = _mm_movemask_ps(zmm1)
            
            if ((zx.q(temp0_611) & 0xfffffff9) != 9)
                if ((temp0_611.b & 1) == 0)
                    if ((temp0_611.b & 2) != 0)
                        goto label_1400ceb36
                    
                    goto label_1400ccdf9
                
                var_418.d = *(arg8 + rax_28)
                
                if ((temp0_611.b & 2) != 0)
                label_1400ceb36:
                    var_418:4.d = *(arg8 + rax_28 + 4)
                    
                    if ((temp0_611.b & 4) == 0)
                        goto label_1400cce02
                    
                    goto label_1400ceb4f
                
            label_1400ccdf9:
                
                if ((temp0_611.b & 4) != 0)
                label_1400ceb4f:
                    var_418:8.d = *(arg8 + rax_28 + 8)
                    
                    if ((temp0_611.b & 8) != 0)
                        var_418:0xc.d = *(arg8 + rax_28 + 0xc)
                else
                label_1400cce02:
                    
                    if ((temp0_611.b & 8) != 0)
                        var_418:0xc.d = *(arg8 + rax_28 + 0xc)
                
                zmm0 = var_418
            else
                zmm0 = *(arg8 + rax_28)
            
            uint128_t var_368_3 = zmm0
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm1
            int64_t rdx_9 = sx.q(zmm2[0])
            int64_t rax_32 = arg7 + (rdx_9 << 2)
            zmm0 = *(arg7 + (rdx_9 << 2))
            int64_t rsi_135 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
            int64_t rdx_11 = arg7 + (rsi_135 << 2)
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg7 + (rsi_135 << 2))).q)
            int64_t rdi_17 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
            int64_t rsi_137 = arg7 + (rdi_17 << 2)
            zmm3 = *(arg7 + (rdi_17 << 2))
            int64_t rdi_19 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            int64_t rbp_6 = arg7 + (rdi_19 << 2)
            zmm0 = zmm0.q | _mm_unpacklo_ps(zmm3, (*(arg7 + (rdi_19 << 2)))[0].q).q << 0x40
            zmm3 = data_142fc95e0 & zmm1
            uint64_t r12_1 = zx.q(zmm3.d)
            zmm8 = *(r12_1 + rax_32)
            uint64_t r15_2 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            float temp0_625[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_2 + rdx_11))[0].q)
            uint64_t r14_10 = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm4 = *(r14_10 + rsi_137)
            uint64_t rbx_8 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
            float temp0_628[0x4] = _mm_unpacklo_ps(zmm4, (*(rbx_8 + rbp_6)).q)
            zmm8 = temp0_625[0].q | temp0_628[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm1
            zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_32), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_11))[0].q)
            float temp0_633[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_137), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_6)).q)
            zmm6 = zmm6[0].q | temp0_633[0].q << 0x40
            uint128_t var_2a8_1 = zmm0
            uint32_t var_288_1[0x4] = zmm6
            float var_278_1[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            float temp0_634[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_418 = temp0_634
            var_408 = temp0_634
            zmm7 = *arg6
            zmm2 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_635[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_637[0x4] = _mm_mul_ps(zmm8, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_635)
            float temp0_640[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_641[0x4] = _mm_mul_ps(temp0_635, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_640)
            zmm3 = _mm_mul_ps(zx.o(0), temp0_634)
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_640, zmm8))
            zmm0 = _mm_sub_ps(zmm0, zmm7)
            float temp0_647[0x4] = _mm_sub_ps(temp0_637, temp0_641)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_651[0x4] = _mm_add_ps(temp0_647, temp0_647)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_3d8 = zmm6
            uint128_t var_3c8_5 = zmm0
            float var_3b8_5[0x4] = temp0_651
            uint128_t var_3a8_3 = zmm3
            zmm3 = _mm_mul_ps(zmm3, temp0_634)
            float temp0_654[0x4] = _mm_mul_ps(temp0_634, zmm6)
            float temp0_655[0x4] = _mm_mul_ps(temp0_634, zmm0)
            float temp0_656[0x4] = _mm_mul_ps(temp0_634, temp0_651)
            float temp0_657[0x4] = __addps_xmmps_memps(temp0_654, var_2a8_1)
            float temp0_658[0x4] = __addps_xmmps_memps(temp0_655, zmm8)
            float temp0_659[0x4] = __addps_xmmps_memps(temp0_656, var_288_1)
            float var_3e8_3[0x4] = temp0_634
            float var_1e8_1[0x4] = temp0_657
            float var_1d8_1[0x4] = temp0_658
            float var_1c8_1[0x4] = temp0_659
            uint128_t var_1b8_1 = __addps_xmmps_memps(zmm3, var_278_1)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            float temp0_661[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_662[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm0, temp0_662)
            float temp0_664[0x4] = _mm_mul_ps(temp0_662, temp0_651)
            float temp0_665[0x4] = _mm_mul_ps(temp0_651, temp0_661)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_667[0x4] = _mm_mul_ps(temp0_661, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            float temp0_670[0x4] = _mm_sub_ps(temp0_665, _mm_mul_ps(zmm7, zmm0))
            zmm6 = _mm_sub_ps(zmm6, temp0_664)
            zmm3 = _mm_sub_ps(zmm3, temp0_667)
            float temp0_673[0x4] = _mm_add_ps(temp0_670, temp0_657)
            zmm6 = _mm_add_ps(zmm6, temp0_658)
            zmm3 = _mm_add_ps(zmm3, temp0_659)
            zmm8 = arg6[1].d
            zmm2 = *(arg6 + 0x14)
            float temp0_677[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_673)
            float temp0_679[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
            float var_148[0x4] = temp0_677
            float var_138[0x4] = temp0_679
            uint128_t var_388_3 = zmm0
            uint128_t var_128_1 = zmm0
            int64_t rax_36 = 0
            zmm0 = temp0_677
            
            while (true)
                zmm3 = *(&var_2b8 + rax_36)
                float temp0_682[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                float temp0_683[0x4] = _mm_cmpeq_ps(temp0_682, zmm0, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_683, zmm1)) != 0)
                    char temp0_686 = _mm_movemask_ps(temp0_683)
                    
                    if ((temp0_686 & 1) == 0)
                        if ((temp0_686 & 2) != 0)
                            goto label_1400cd20e
                        
                        goto label_1400cd125
                    
                    *(&var_418 + (rax_36 << 2)) = zmm3.d
                    
                    if ((temp0_686 & 2) != 0)
                    label_1400cd20e:
                        *(&var_418:4 + (rax_36 << 2)) = zmm3.d
                        
                        if ((temp0_686 & 4) == 0)
                            goto label_1400cd12e
                        
                        goto label_1400cd21d
                    
                label_1400cd125:
                    
                    if ((temp0_686 & 4) != 0)
                    label_1400cd21d:
                        *(&var_418:8 + (rax_36 << 2)) = zmm3.d
                        
                        if ((temp0_686 & 8) != 0)
                            *(&var_418:0xc + (rax_36 << 2)) = zmm3.d
                    else
                    label_1400cd12e:
                        
                        if ((temp0_686 & 8) != 0)
                            *(&var_418:0xc + (rax_36 << 2)) = zmm3.d
                
                float temp0_687[0x4] = _mm_cmpeq_ps(temp0_682, zmm0, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, temp0_687)) != 0)
                    zmm4 = *(&var_2c8 + rax_36)
                    zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                    zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 1), temp0_687)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                        char temp0_695 = _mm_movemask_ps(zmm5)
                        
                        if ((temp0_695 & 1) == 0)
                            if ((temp0_695 & 2) != 0)
                                goto label_1400cd23f
                            
                            goto label_1400cd18a
                        
                        *(&var_418 + (rax_36 << 2)) = zmm4[0]
                        
                        if ((temp0_695 & 2) != 0)
                        label_1400cd23f:
                            *(&var_418:4 + (rax_36 << 2)) = zmm4[0]
                            
                            if ((temp0_695 & 4) == 0)
                                goto label_1400cd193
                            
                            goto label_1400cd24e
                        
                    label_1400cd18a:
                        
                        if ((temp0_695 & 4) != 0)
                        label_1400cd24e:
                            *(&var_418:8 + (rax_36 << 2)) = zmm4[0]
                            
                            if ((temp0_695 & 8) != 0)
                                *(&var_418:0xc + (rax_36 << 2)) = zmm4[0]
                        else
                        label_1400cd193:
                            
                            if ((temp0_695 & 8) != 0)
                                *(&var_418:0xc + (rax_36 << 2)) = zmm4[0]
                    
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 5), temp0_687)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm1)) != 0)
                        zmm2 = *(&var_148 + (rax_36 << 2))
                        char temp0_700 = _mm_movemask_ps(zmm0)
                        
                        if ((temp0_700 & 1) == 0)
                            if ((temp0_700 & 2) != 0)
                                goto label_1400cd275
                            
                            goto label_1400cd1d0
                        
                        *(&var_418 + (rax_36 << 2)) = zmm2[0]
                        
                        if ((temp0_700 & 2) != 0)
                        label_1400cd275:
                            *(&var_418:4 + (rax_36 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5).d
                            
                            if ((temp0_700 & 4) == 0)
                                goto label_1400cd1d9
                            
                            goto label_1400cd289
                        
                    label_1400cd1d0:
                        
                        if ((temp0_700 & 4) != 0)
                        label_1400cd289:
                            *(&var_418:8 + (rax_36 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e).d
                            
                            if ((temp0_700 & 8) != 0)
                                *(&var_418:0xc + (rax_36 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                        else
                        label_1400cd1d9:
                            
                            if ((temp0_700 & 8) != 0)
                                *(&var_418:0xc + (rax_36 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                
                if (rax_36 == 8)
                    break
                
                zmm0 = *(&var_138 + (rax_36 << 2))
                rax_36 += 4
            
            zmm9 = var_418
            zmm12 = var_408
            float temp0_704[0x4] = _mm_sub_ps(zmm9, temp0_677)
            zmm7 = *arg1
            zmm4 = *(arg1 + 4)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm0 = _mm_sub_ps(zmm9, zmm7)
            float temp0_707[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_708[0x4] = _mm_sub_ps(zmm12, temp0_707)
            zmm3 = *arg3
            zmm5 = *(arg3 + 4)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_div_ps(zmm0, zmm3)
            float temp0_711[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_712[0x4] = _mm_div_ps(temp0_708, temp0_711)
            zmm10 = arg3[1].d
            zmm13 = _mm_cvttps_epi32(zmm0)
            zmm2 = _mm_cvttps_epi32(temp0_712)
            uint128_t var_318_3 = zmm3
            uint32_t var_338_3[0x4] = zmm7
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm3), zmm7)
            zmm3 = __divps_xmmps_memps(*arg3 | zmm10[0].q << 0x40, data_142fc9600)
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
            uint128_t var_348_3 = zmm0
            float var_398_5[0x4] = zmm9
            zmm6 = _mm_cmpeq_ps(_mm_add_ps(zmm6, zmm0), zmm9, 1)
            zmm7 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm0, zmm0))
            zmm0 = _mm_and_ps(zmm13, zmm6)
            zmm6 = _mm_or_ps(_mm_andnot_ps(zmm6, zmm7), zmm0)
            float temp0_729[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_711), temp0_707)
            float temp0_730[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_731[0x4] = _mm_add_ps(temp0_729, temp0_730)
            float temp0_732[0x4] = _mm_cmpeq_ps(temp0_731, zmm12, 1)
            char temp0_734 = _mm_movemask_ps(_mm_and_ps(temp0_732, zmm1))
            zmm11 = arg1[1].d
            float temp0_735[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm0 = temp0_634
            float temp0_736[0x4] = _mm_sub_ps(zmm0, temp0_735)
            float temp0_737[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm4 = _mm_cvttps_epi32(_mm_div_ps(temp0_736, temp0_737))
            float var_378_3[0x4] = zmm4
            float temp0_742[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_737), temp0_735)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            var_418 = zmm6
            float temp0_744[0x4] = _mm_cmpeq_ps(temp0_731, zmm12, 5)
            
            if (temp0_734 != 0)
                zmm13 = zmm2
            
            float var_2f8_3[0x4] = zmm12
            float temp0_745[0x4] = __subps_xmmps_memps(zmm12, temp0_679)
            float temp0_746[0x4] = _mm_mul_ps(temp0_704, temp0_704)
            float temp0_747[0x4] = _mm_add_ps(temp0_742, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_744, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            float temp0_751[0x4] = __subps_xmmps_memps(zmm0, var_388_3)
            float temp0_752[0x4] = _mm_add_ps(temp0_746, zx.o(0))
            float temp0_753[0x4] = _mm_mul_ps(temp0_745, temp0_745)
            zmm4 = _mm_and_ps(zmm13, temp0_732)
            zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_732, zmm7), zmm4)
            var_408 = zmm9
            float temp0_757[0x4] = _mm_cmpeq_ps(temp0_747, zmm0, 5)
            float temp0_758[0x4] = _mm_cmpeq_ps(temp0_747, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_758, zmm1)) != 0)
                zmm13 = var_378_3
            
            float temp0_761[0x4] = _mm_add_ps(temp0_752, temp0_753)
            float temp0_762[0x4] = _mm_mul_ps(temp0_751, temp0_751)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_757, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(var_378_3, data_142d3f800)
            
            float temp0_766[0x4] = _mm_add_ps(temp0_761, temp0_762)
            uint32_t temp0_767[0x4] = _mm_and_ps(zmm13, temp0_758)
            zmm12 = _mm_or_ps(_mm_andnot_ps(temp0_758, zmm7), temp0_767)
            zmm13 = var_318_3
            float temp0_772[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), zmm13), var_338_3)
            float temp0_775[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_711), temp0_707)
            float temp0_778[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_737), temp0_735)
            zmm7 = _mm_add_ps(var_348_3, temp0_772)
            float temp0_780[0x4] = _mm_add_ps(temp0_730, temp0_775)
            zmm3 = _mm_add_ps(zmm3, temp0_778)
            float temp0_782[0x4] = _mm_sub_ps(var_398_5, zmm7)
            float temp0_783[0x4] = _mm_sub_ps(var_2f8_3, temp0_780)
            zmm0 = _mm_sub_ps(zmm0, zmm3)
            float temp0_785[0x4] = _mm_div_ps(temp0_782, zmm13)
            float temp0_786[0x4] = _mm_div_ps(temp0_783, temp0_711)
            zmm0 = _mm_div_ps(zmm0, temp0_737)
            var_3d8 = temp0_785
            uint128_t var_3b8_6 = zmm0
            int64_t rax_41 = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
                
                if (_mm_movemask_ps(zmm6 & zmm1) != 0)
                    char temp0_791 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_791 & 1) == 0)
                        if ((temp0_791 & 2) != 0)
                            goto label_1400cd640
                        
                        goto label_1400cd571
                    
                    *(&var_418 + (rax_41 << 2)) = 0
                    
                    if ((temp0_791 & 2) != 0)
                    label_1400cd640:
                        *(&var_418:4 + (rax_41 << 2)) = 0
                        
                        if ((temp0_791 & 4) == 0)
                            goto label_1400cd57a
                        
                        goto label_1400cd651
                    
                label_1400cd571:
                    
                    if ((temp0_791 & 4) == 0)
                    label_1400cd57a:
                        
                        if ((temp0_791 & 8) != 0)
                            goto label_1400cd662
                        
                        goto label_1400cd583
                    
                label_1400cd651:
                    *(&var_418:8 + (rax_41 << 2)) = 0
                    
                    if ((temp0_791 & 8) != 0)
                    label_1400cd662:
                        *(&var_418:0xc + (rax_41 << 2)) = 0
                        
                        if ((temp0_791 & 1) == 0)
                            goto label_1400cd58c
                        
                        goto label_1400cd673
                    
                label_1400cd583:
                    
                    if ((temp0_791 & 1) == 0)
                    label_1400cd58c:
                        
                        if ((temp0_791 & 2) != 0)
                            goto label_1400cd684
                        
                        goto label_1400cd595
                    
                label_1400cd673:
                    var_3d8[rax_41] = 0
                    
                    if ((temp0_791 & 2) != 0)
                    label_1400cd684:
                        var_3d8[1 + rax_41] = 0
                        
                        if ((temp0_791 & 4) == 0)
                            goto label_1400cd59e
                        
                        goto label_1400cd695
                    
                label_1400cd595:
                    
                    if ((temp0_791 & 4) != 0)
                    label_1400cd695:
                        var_3d8[2 + rax_41] = 0
                        
                        if ((temp0_791 & 8) != 0)
                            var_3d8[3 + rax_41] = 0
                    else
                    label_1400cd59e:
                        
                        if ((temp0_791 & 8) != 0)
                            var_3d8[3 + rax_41] = 0
                
                int32_t rdx_19 = *(arg4 + rax_41)
                zmm2 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_19 - 1), 0), 
                    *(&var_418 + (rax_41 << 2)))
                
                if (_mm_movemask_ps(zmm2 & zmm1) != 0)
                    char temp0_795 = _mm_movemask_ps(zmm2)
                    
                    if ((temp0_795 & 1) == 0)
                        if ((temp0_795 & 2) != 0)
                            goto label_1400cd6bc
                        
                        goto label_1400cd5e7
                    
                    *(&var_418 + (rax_41 << 2)) = rdx_19 - 2
                    
                    if ((temp0_795 & 2) != 0)
                    label_1400cd6bc:
                        *(&var_418:4 + (rax_41 << 2)) = rdx_19 - 2
                        
                        if ((temp0_795 & 4) == 0)
                            goto label_1400cd5f0
                        
                        goto label_1400cd6c9
                    
                label_1400cd5e7:
                    
                    if ((temp0_795 & 4) == 0)
                    label_1400cd5f0:
                        
                        if ((temp0_795 & 8) != 0)
                            goto label_1400cd6d6
                        
                        goto label_1400cd5f9
                    
                label_1400cd6c9:
                    *(&var_418:8 + (rax_41 << 2)) = rdx_19 - 2
                    
                    if ((temp0_795 & 8) != 0)
                    label_1400cd6d6:
                        *(&var_418:0xc + (rax_41 << 2)) = rdx_19 - 2
                        
                        if ((temp0_795 & 1) == 0)
                            goto label_1400cd602
                        
                        goto label_1400cd6e3
                    
                label_1400cd5f9:
                    
                    if ((temp0_795 & 1) == 0)
                    label_1400cd602:
                        
                        if ((temp0_795 & 2) != 0)
                            goto label_1400cd6f4
                        
                        goto label_1400cd60b
                    
                label_1400cd6e3:
                    var_3d8[rax_41] = 0x3f800000
                    
                    if ((temp0_795 & 2) != 0)
                    label_1400cd6f4:
                        var_3d8[1 + rax_41] = 0x3f800000
                        
                        if ((temp0_795 & 4) == 0)
                            goto label_1400cd614
                        
                        goto label_1400cd705
                    
                label_1400cd60b:
                    
                    if ((temp0_795 & 4) != 0)
                    label_1400cd705:
                        var_3d8[2 + rax_41] = 0x3f800000
                        
                        if ((temp0_795 & 8) != 0)
                            var_3d8[3 + rax_41] = 0x3f800000
                    else
                    label_1400cd614:
                        
                        if ((temp0_795 & 8) != 0)
                            var_3d8[3 + rax_41] = 0x3f800000
                
                if (rax_41 == 8)
                    break
                
                zmm6 = *(&var_408 + (rax_41 << 2))
                rax_41 += 4
            
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_418
            zmm2 = var_408
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
            int64_t rax_44 = sx.q(zmm6[0])
            zmm15 = *(rcx_5 + rax_44)
            int64_t rax_46 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
            float temp0_814[0x4] = _mm_unpacklo_ps(zmm15, (*(rcx_5 + rax_46))[0].q)
            int64_t rdx_21 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
            zmm5 = *(rcx_5 + rdx_21)
            int64_t rbp_7 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
            float temp0_817[0x4] = _mm_unpacklo_ps(zmm5, (*(rcx_5 + rbp_7))[0].q)
            zmm15 = temp0_814[0].q | temp0_817[0].q << 0x40
            zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
            zmm4 = _mm_sub_epi32(zmm4, zmm13)
            zmm5 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
            zmm12 =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm8), 0xe8), zmm5[0].q)
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
            zmm6 = _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm4[0])), 
                (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d))).q)
            zmm0 = _mm_unpacklo_ps(*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)), 
                (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
            zmm6 = _mm_sub_ps(zmm6[0].q | zmm0.q << 0x40, zmm15)
            zmm11 = var_3d8
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
            zmm0 = _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm4[0])), 
                (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
                *(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
                (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)[0].q << 0x40
            zmm2 = _mm_add_epi32(zmm2, zmm12)
            zmm4 = _mm_shuffle_epi32(zmm2, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8)[0].q), 
                    zmm10), 
                2) & zmm1
            float temp0_875[0x4] = _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm5[0])), 
                (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q)
            float temp0_878[0x4] = _mm_unpacklo_ps(
                *(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
            float temp0_881[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_875[0].q | temp0_878[0].q << 0x40, zmm0), zmm11), zmm0)
            zmm0 = _mm_unpacklo_ps(*(r12_1 + rcx_5 + rax_44), (*(r15_2 + rcx_5 + rax_46))[0].q).q
                | _mm_unpacklo_ps(*(r14_10 + rcx_5 + rdx_21), (*(rbx_8 + rcx_5 + rbp_7))[0].q)[0].q
                << 0x40
            zmm3 = _mm_add_epi32(zmm3, zmm10)
            zmm14 = _mm_add_epi32(zmm14, zmm3)
            zmm3 = _mm_add_epi32(zmm3, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2) & zmm1
            float temp0_890[0x4] = _mm_unpacklo_ps(*(r12_1 + sx.q(zmm8[0]) + rcx_5), 
                (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5)[0]) + rcx_5))[0].q)
            float temp0_893[0x4] = _mm_unpacklo_ps(
                *(r14_10 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e)[0]) + rcx_5), 
                (*(rbx_8 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + rcx_5))[0].q)
            float temp0_896[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_890[0].q | temp0_893[0].q << 0x40, zmm0), zmm11), zmm0)
            zmm14 = _mm_slli_epi32(zmm14, 2) & zmm1
            zmm0 = _mm_unpacklo_ps(*(r12_1 + sx.q(zmm14[0]) + rcx_5), 
                (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5)[0]) + rcx_5))[0].q).q | _mm_unpacklo_ps(
                *(r14_10 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e)[0]) + rcx_5), 
                (*(rbx_8 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rcx_5))[0].q)[0].q << 0x40
            zmm3 = _mm_slli_epi32(zmm3, 2) & zmm1
            float temp0_905[0x4] = _mm_unpacklo_ps(*(r12_1 + sx.q(zmm3.d) + rcx_5), 
                (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rcx_5))[0].q)
            zmm7 = _mm_unpacklo_ps(*(r14_10 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rcx_5), 
                (*(rbx_8 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rcx_5)).q)
            float temp0_911[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_905[0].q | zmm7[0].q << 0x40, zmm0), zmm11), zmm0)
            float temp0_914[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_881, zmm6), temp0_786), zmm6)
            zmm4 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_911, temp0_896), temp0_786), 
                            temp0_896), 
                        temp0_914), 
                    var_3b8_6), 
                temp0_914)
            float temp0_921[0x4] = _mm_cmpeq_ps(temp0_766, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_766, 7), temp0_921), zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_926[0x4] = _mm_rsqrt_ps(temp0_766)
                float temp0_928[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_766, temp0_926), temp0_926)
                zmm3 = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_928), temp0_926), data_142d3f640)
                float temp0_932[0x4] = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, temp0_932)
                zmm5 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_932), zmm4), zmm0)
                zmm4 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm4), zmm5)
            
            zmm0 = *arg10
            uint32_t i_8 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm4, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm1))
            
            if (i_8 == 0)
                return 0
            
            uint64_t i_5 = zx.q(i_8)
            result = 0
            
            do
                uint64_t rdx_24
                
                if (i_5 == 0)
                    rdx_24 = 0x40
                    i_5 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400cdc11:
                        float var_268[0x4] = zmm4
                        uint64_t rdx_25 = zx.q(rdx_24.d) & 3
                        *arg10 = var_268[rdx_25].d
                        uint128_t var_258 = var_368_3
                        *arg9 = *(&var_258 + (rdx_25 << 2))
                else
                    uint64_t rflags_3
                    rdx_24, rflags_3 = _bit_scan_forward(i_5)
                    i_5 &= not.q(1 << (rdx_24 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400cdc11
                result.b = 1
            while (i_5 != 0)
return result
