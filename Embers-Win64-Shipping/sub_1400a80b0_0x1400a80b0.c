// 函数: sub_1400a80b0
// 地址: 0x1400a80b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm15
uint128_t var_58 = zmm15
uint128_t var_68 = arg5
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
float zmm4[0x4] = *arg13
uint128_t zmm0 =
    __mulps_xmmps_memps(__insertps_xmmps_memd_immb(zx.o(*arg3), arg3[1].d, 0x20), data_142e6d9f0)
uint32_t temp0_2 = _mm_movemask_ps(zmm4)
uint128_t zmm1 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
float temp0_5[0x4] = _mm_movehdup_ps(zmm1)
uint128_t zmm3 = _mm_unpackhi_pd(zmm1, zmm1.q)
uint32_t result
uint128_t var_3f8
uint128_t var_3e8
float var_3b8[0x4]
int64_t var_298
float zmm2[0x4]
uint32_t zmm5[0x4]
float zmm9[0x4]
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
    float var_318_2[0x4] = zmm4
    uint128_t var_338_2
    uint64_t r10_3
    
    if (i s> 0)
        zmm0 = arg9
        uint128_t var_348_2 = _mm_shuffle_ps(zmm0, zmm0, 0)
        r10_3 = 0
        var_338_2 = zx.o(0)
        
        do
            int64_t rax_53 = sx.q((r10_3 << 2).d * 3)
            zmm0 = *(arg8 + rax_53)
            zmm2 = *(arg8 + rax_53 + 0x10)
            zmm5 = *(arg8 + rax_53 + 0x20)
            zmm3 = _mm_shuffle_epi32(zmm0, 0xe5)
            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
            zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), zmm3, 3)
            zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
            zmm1 = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
            var_3b8 = zmm4
            uint128_t var_3a8_4 = zmm3
            int128_t var_388_3
            __builtin_memset(&var_388_3, 0, 0x40)
            zmm0 = *(arg7 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3f8 = zmm0
            var_3e8 = zmm0
            uint128_t var_3d8_4 = zmm0
            uint128_t var_3c8_3 = zmm0
            zmm9 = *arg7
            zmm8 = *(arg7 + 4)
            zmm10 = *(arg7 + 8)
            float temp0_407[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_408[0x4] = _mm_mul_ps(temp0_407, zmm1)
            float temp0_409[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_410[0x4] = _mm_mul_ps(temp0_409, zmm4)
            float temp0_411[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm5 = _mm_mul_ps(temp0_411, zmm3)
            float temp0_414[0x4] = _mm_sub_ps(temp0_408, _mm_mul_ps(zmm3, temp0_409))
            float temp0_416[0x4] = _mm_sub_ps(temp0_410, _mm_mul_ps(zmm1, temp0_411))
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, temp0_407))
            float temp0_419[0x4] = _mm_add_ps(temp0_414, temp0_414)
            float temp0_420[0x4] = _mm_add_ps(temp0_416, temp0_416)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            zmm3 = _mm_mul_ps(zmm0, temp0_419)
            float temp0_423[0x4] = _mm_mul_ps(zmm0, temp0_420)
            zmm3 = __addps_xmmps_memps(zmm3, var_3b8)
            float temp0_425[0x4] = __addps_xmmps_memps(temp0_423, var_3a8_4)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm5), zmm1)
            float temp0_428[0x4] = _mm_mul_ps(zmm5, temp0_407)
            float temp0_429[0x4] = _mm_mul_ps(temp0_419, temp0_409)
            zmm1 = _mm_mul_ps(temp0_420, temp0_411)
            float temp0_433[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_428, _mm_mul_ps(temp0_420, temp0_409)), zmm3)
            float temp0_436[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_429, _mm_mul_ps(zmm5, temp0_411)), temp0_425)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_419, temp0_407)), zmm0)
            zmm5 = arg7[1].d
            zmm3 = *(arg7 + 0x14)
            zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_433)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_436)
            zmm0 = *(arg7 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            uint32_t var_1b8[0x4] = zmm5
            uint128_t var_2a8_3 = zmm3
            uint128_t var_1a8 = zmm3
            var_298.o = zmm0
            uint128_t var_198_1 = zmm0
            int64_t rbx_6 = 0
            float var_328_2[0x4] = zmm5
            zmm0 = zmm5
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            
            while (true)
                zmm2 = *(&var_278 + rbx_6)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_449 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_449 != 0)
                    if ((temp0_449 & 1) == 0)
                        if ((temp0_449 & 2) != 0)
                            goto label_1400a969d
                        
                        goto label_1400a95cd
                    
                    *(&var_3f8 + (rbx_6 << 2)) = zmm2[0]
                    
                    if ((temp0_449 & 2) != 0)
                    label_1400a969d:
                        *(&var_3f8:4 + (rbx_6 << 2)) = zmm2[0]
                        
                        if ((temp0_449 & 4) == 0)
                            goto label_1400a95d5
                        
                        goto label_1400a96ab
                    
                label_1400a95cd:
                    
                    if ((temp0_449 & 4) != 0)
                    label_1400a96ab:
                        *(&var_3f8:8 + (rbx_6 << 2)) = zmm2[0]
                        
                        if ((temp0_449 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_6 << 2)) = zmm2[0]
                    else
                    label_1400a95d5:
                        
                        if ((temp0_449 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_6 << 2)) = zmm2[0]
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_288 + rbx_6)
                    float temp0_452[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_455 =
                        _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_452, 1), zmm1))
                    
                    if (temp0_455 != 0)
                        if ((temp0_455 & 1) == 0)
                            if ((temp0_455 & 2) != 0)
                                goto label_1400a96cb
                            
                            goto label_1400a9622
                        
                        *(&var_3f8 + (rbx_6 << 2)) = zmm3.d
                        
                        if ((temp0_455 & 2) != 0)
                        label_1400a96cb:
                            *(&var_3f8:4 + (rbx_6 << 2)) = zmm3.d
                            
                            if ((temp0_455 & 4) == 0)
                                goto label_1400a962a
                            
                            goto label_1400a96d9
                        
                    label_1400a9622:
                        
                        if ((temp0_455 & 4) != 0)
                        label_1400a96d9:
                            *(&var_3f8:8 + (rbx_6 << 2)) = zmm3.d
                            
                            if ((temp0_455 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_6 << 2)) = zmm3.d
                        else
                        label_1400a962a:
                            
                            if ((temp0_455 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_6 << 2)) = zmm3.d
                    
                    char temp0_458 =
                        _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_452, 5), zmm1))
                    
                    if (temp0_458 != 0)
                        zmm0 = *(&var_1b8 + (rbx_6 << 2))
                        
                        if ((temp0_458 & 1) == 0)
                            if ((temp0_458 & 2) != 0)
                                goto label_1400a96f9
                            
                            goto label_1400a965d
                        
                        *(&var_3f8 + (rbx_6 << 2)) = zmm0.d
                        
                        if ((temp0_458 & 2) != 0)
                        label_1400a96f9:
                            *(&var_3f8:4 + (rbx_6 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_458 & 4) == 0)
                                goto label_1400a9665
                            
                            goto label_1400a9709
                        
                    label_1400a965d:
                        
                        if ((temp0_458 & 4) != 0)
                        label_1400a9709:
                            *(&var_3f8:8 + (rbx_6 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_458 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_6 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1400a9665:
                            
                            if ((temp0_458 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_6 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                
                if (rbx_6 == 8)
                    break
                
                zmm0 = *(&var_1a8 + (rbx_6 << 2))
                rbx_6 += 4
            
            zmm9 = var_3f8
            zmm10 = var_3e8
            zmm3 = *arg1
            zmm12 = *(arg1 + 4)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_sub_ps(zmm9, zmm3)
            float temp0_464[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_465[0x4] = _mm_sub_ps(zmm10, temp0_464)
            zmm6 = arg1[1].d
            float temp0_466[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float var_2b8_2[0x4] = var_3d8_4
            zmm1 = _mm_sub_ps(var_3d8_4, temp0_466)
            zmm2 = *arg3
            float temp0_468[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_div_ps(zmm0, temp0_468)
            zmm13 = arg3[1].d
            zmm5 = _mm_cvttps_epi32(zmm0)
            uint128_t var_2e8_2 = zmm3
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm5), temp0_468), zmm3)
            zmm15 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
            float temp0_476[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_476), zmm9, 1)
            zmm4 = _mm_add_epi32(zmm5, arg5)
            zmm2 = zmm5
            zmm3 = _mm_blendv_ps(zmm4, zmm5, zmm0)
            zmm8 = *(arg3 + 4)
            float temp0_481[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_482[0x4] = _mm_div_ps(temp0_465, temp0_481)
            float temp0_483[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm1 = _mm_div_ps(zmm1, temp0_483)
            zmm7 = _mm_cvttps_epi32(temp0_482)
            zmm1 = _mm_cvttps_epi32(zmm1)
            zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_481)
            float temp0_490[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_483)
            zmm5 = _mm_add_ps(zmm5, temp0_464)
            float temp0_492[0x4] = _mm_add_ps(temp0_490, temp0_466)
            float temp0_493[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            zmm5 = _mm_add_ps(zmm5, temp0_493)
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            var_3f8 = zmm3
            zmm0 = _mm_cmpeq_ps(zmm5, zmm10, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm2 = zmm7
            
            float temp0_498[0x4] = _mm_add_ps(temp0_492, zmm15)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm5, zmm10, 5)) != 0)
                zmm4 = _mm_add_epi32(zmm7, arg5)
            
            arg5 = __subps_xmmps_memps(zmm9, var_328_2)
            float temp0_503[0x4] = __subps_xmmps_memps(zmm10, var_2a8_3)
            zmm6 = zmm2
            float temp0_504[0x4] = _mm_blendv_ps(zmm4, zmm2, zmm0)
            var_3e8 = temp0_504
            zmm0 = _mm_cmpeq_ps(temp0_498, var_2b8_2, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm6 = zmm1
            
            float temp0_507[0x4] = __subps_xmmps_memps(var_2b8_2, var_298.o)
            arg5 = _mm_mul_ps(arg5, arg5)
            float temp0_509[0x4] = _mm_mul_ps(temp0_503, temp0_503)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_498, var_2b8_2, 5)) != 0)
                zmm4 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            float temp0_513[0x4] = _mm_blendv_ps(zmm4, zmm6, zmm0)
            arg5 = _mm_add_ps(__addps_xmmps_memps(arg5, data_142d8f750), temp0_509)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_468), var_2e8_2)
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_504), temp0_481), temp0_464)
            float temp0_524[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_513), temp0_483), temp0_466)
            float temp0_525[0x4] = _mm_add_ps(temp0_476, zmm0)
            float temp0_526[0x4] = _mm_add_ps(temp0_493, zmm1)
            zmm15 = _mm_add_ps(zmm15, temp0_524)
            zmm5 = _mm_sub_ps(zmm9, temp0_525)
            zmm0 = _mm_sub_ps(zmm10, temp0_526)
            float temp0_530[0x4] = _mm_sub_ps(var_2b8_2, zmm15)
            zmm5 = _mm_div_ps(zmm5, temp0_468)
            zmm0 = _mm_div_ps(zmm0, temp0_481)
            float temp0_533[0x4] = _mm_div_ps(temp0_530, temp0_483)
            var_3b8 = zmm5
            uint128_t var_3a8_5 = zmm0
            float temp0_534[0x4] = _mm_mul_ps(temp0_507, temp0_507)
            int64_t rbx_7 = 0
            zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
            char j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm5))
            
            if (j == 0)
                goto label_1400a99dc
            
            do
                if ((j & 1) == 0)
                    if ((j & 2) != 0)
                        goto label_1400a9a6f
                    
                    goto label_1400a99a8
                
                *(&var_3f8 + (rbx_7 << 2)) = 0
                
                if ((j & 2) != 0)
                label_1400a9a6f:
                    *(&var_3f8:4 + (rbx_7 << 2)) = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400a99b0
                    
                    goto label_1400a9a7f
                
            label_1400a99a8:
                
                if ((j & 4) == 0)
                label_1400a99b0:
                    
                    if ((j & 8) != 0)
                        goto label_1400a9a8f
                    
                    goto label_1400a99b8
                
            label_1400a9a7f:
                *(&var_3f8:8 + (rbx_7 << 2)) = 0
                
                if ((j & 8) != 0)
                label_1400a9a8f:
                    *(&var_3f8:0xc + (rbx_7 << 2)) = 0
                    
                    if ((j & 1) == 0)
                        goto label_1400a99c0
                    
                    goto label_1400a9a9f
                
            label_1400a99b8:
                
                if ((j & 1) == 0)
                label_1400a99c0:
                    
                    if ((j & 2) != 0)
                        goto label_1400a9aaf
                    
                    goto label_1400a99c8
                
            label_1400a9a9f:
                var_3b8[rbx_7] = 0
                
                if ((j & 2) != 0)
                label_1400a9aaf:
                    var_3b8[1 + rbx_7] = 0
                    
                    if ((j & 4) == 0)
                        goto label_1400a99d0
                    
                    goto label_1400a9abf
                
            label_1400a99c8:
                
                if ((j & 4) != 0)
                label_1400a9abf:
                    var_3b8[2 + rbx_7] = 0
                    
                    if ((j & 8) != 0)
                        var_3b8[3 + rbx_7] = 0
                else
                label_1400a99d0:
                    
                    if ((j & 8) != 0)
                        var_3b8[3 + rbx_7] = 0
                
            label_1400a99dc:
                int32_t rdi_6 = *(arg4 + rbx_7)
                char temp0_542 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rdi_6 - 1), 0), *(&var_3f8 + (rbx_7 << 2))))
                
                if (temp0_542 != 0)
                    if ((temp0_542 & 1) == 0)
                        if ((temp0_542 & 2) != 0)
                            goto label_1400a9aeb
                        
                        goto label_1400a9a0e
                    
                    *(&var_3f8 + (rbx_7 << 2)) = rdi_6 - 2
                    
                    if ((temp0_542 & 2) != 0)
                    label_1400a9aeb:
                        *(&var_3f8:4 + (rbx_7 << 2)) = rdi_6 - 2
                        
                        if ((temp0_542 & 4) == 0)
                            goto label_1400a9a16
                        
                        goto label_1400a9af7
                    
                label_1400a9a0e:
                    
                    if ((temp0_542 & 4) == 0)
                    label_1400a9a16:
                        
                        if ((temp0_542 & 8) != 0)
                            goto label_1400a9b03
                        
                        goto label_1400a9a1e
                    
                label_1400a9af7:
                    *(&var_3f8:8 + (rbx_7 << 2)) = rdi_6 - 2
                    
                    if ((temp0_542 & 8) != 0)
                    label_1400a9b03:
                        *(&var_3f8:0xc + (rbx_7 << 2)) = rdi_6 - 2
                        
                        if ((temp0_542 & 1) == 0)
                            goto label_1400a9a26
                        
                        goto label_1400a9b0f
                    
                label_1400a9a1e:
                    
                    if ((temp0_542 & 1) == 0)
                    label_1400a9a26:
                        
                        if ((temp0_542 & 2) != 0)
                            goto label_1400a9b1f
                        
                        goto label_1400a9a2e
                    
                label_1400a9b0f:
                    var_3b8[rbx_7] = 0x3f800000
                    
                    if ((temp0_542 & 2) != 0)
                    label_1400a9b1f:
                        var_3b8[1 + rbx_7] = 0x3f800000
                        
                        if ((temp0_542 & 4) == 0)
                            goto label_1400a9a36
                        
                        goto label_1400a9b2f
                    
                label_1400a9a2e:
                    
                    if ((temp0_542 & 4) != 0)
                    label_1400a9b2f:
                        var_3b8[2 + rbx_7] = 0x3f800000
                        
                        if ((temp0_542 & 8) != 0)
                            var_3b8[3 + rbx_7] = 0x3f800000
                    else
                    label_1400a9a36:
                        
                        if ((temp0_542 & 8) != 0)
                            var_3b8[3 + rbx_7] = 0x3f800000
                
                if (rbx_7 == 8)
                    break
                
                zmm3 = *(&var_3e8 + (rbx_7 << 2))
                rbx_7 += 4
                j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm5))
            while (j != 0)
            
            arg5 = _mm_add_ps(arg5, temp0_534)
            zmm7 = _mm_shuffle_epi32(zx.o(*(arg6 + 4)), 0)
            zmm1 = var_3f8
            zmm4 = var_3e8
            zmm6 = _mm_mullo_epi32(zmm7, zmm1)
            zmm13 = _mm_add_epi32(zmm6, zmm4)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg6 + 8)), 0)
            zmm8 = _mm_mullo_epi32(zmm13, zmm0)
            zmm2 = _mm_add_epi32(zmm8, temp0_513)
            int32_t* rbx_8 = *(arg6 + 0x10)
            zmm2 = _mm_slli_epi32(zmm2, 2)
            int64_t rsi_19 = sx.q(zmm2[0])
            int64_t rdi_8 = sx.q(_mm_extract_epi32(zmm2, 1))
            int64_t r14_6 = sx.q(_mm_extract_epi32(zmm2, 2))
            int64_t rbp_8 = sx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_556[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rbx_8 + rsi_19), *(rbx_8 + rdi_8), 0x10), 
                    *(rbx_8 + r14_6), 0x20), 
                *(rbx_8 + rbp_8), 0x30)
            zmm12 = *(rbx_8 + rsi_19 + 4)
            zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm5), zmm7)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm4), zmm0), temp0_513), 2)
            zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm7), zmm0)
            zmm7 = *(rbx_8 + sx.q(zmm3.d))
            int32_t temp0_565 = _mm_extract_epi32(zmm3, 1)
            int64_t rdx_22 = sx.q(_mm_extract_epi32(zmm3, 2))
            int32_t temp0_567 = _mm_extract_epi32(zmm3, 3)
            float temp0_571[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rbx_8 + sx.q(temp0_565)), 0x10), 
                        *(rbx_8 + rdx_22), 0x20), 
                    *(rbx_8 + sx.q(temp0_567)), 0x30), 
                temp0_556)
            zmm9 = var_3b8
            zmm4 = _mm_sub_epi32(zmm4, zmm5)
            zmm6 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm4), zmm0), temp0_513), 2)
            int64_t rax_74 = sx.q(zmm6[0])
            int32_t temp0_577 = _mm_extract_epi32(zmm6, 1)
            int32_t temp0_578 = _mm_extract_epi32(zmm6, 2)
            zmm5 = *(rbx_8 + rax_74)
            int32_t temp0_579 = _mm_extract_epi32(zmm6, 3)
            zmm10 = var_3a8_5
            float temp0_580[0x4] = _mm_mul_ps(temp0_571, zmm9)
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rbx_8 + sx.q(temp0_577)), 0x10), 
                    *(rbx_8 + sx.q(temp0_578)), 0x20), 
                *(rbx_8 + sx.q(temp0_579)), 0x30)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm1), zmm0), temp0_513), 2)
            zmm3 = *(rbx_8 + sx.q(zmm4[0]))
            int64_t rax_80 = sx.q(_mm_extract_epi32(zmm4, 1))
            int32_t temp0_589 = _mm_extract_epi32(zmm4, 2)
            int64_t rsi_27 = sx.q(_mm_extract_epi32(zmm4, 3))
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rbx_8 + rax_80), 0x10), 
                    *(rbx_8 + sx.q(temp0_589)), 0x20), 
                *(rbx_8 + rsi_27), 0x30)
            float temp0_594[0x4] = _mm_add_ps(temp0_580, temp0_556)
            zmm3 = _mm_sub_ps(zmm3, zmm5)
            float temp0_598[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm12, *(rbx_8 + rdi_8 + 4), 0x10), 
                    *(rbx_8 + r14_6 + 4), 0x20), 
                *(rbx_8 + rbp_8 + 4), 0x30)
            zmm3 = _mm_mul_ps(zmm3, zmm9)
            zmm0 = _mm_add_epi32(zmm0, temp0_513)
            zmm8 = _mm_add_epi32(zmm8, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm13)
            zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, temp0_513), 2)
            zmm2 = *(rbx_8 + sx.q(zmm13[0]) + 4)
            int64_t rax_84 = sx.q(_mm_extract_epi32(zmm13, 1))
            int32_t temp0_606 = _mm_extract_epi32(zmm13, 2)
            int64_t rsi_29 = sx.q(_mm_extract_epi32(zmm13, 3))
            float temp0_610[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rbx_8 + rax_84 + 4), 0x10), 
                    *(rbx_8 + sx.q(temp0_606) + 4), 0x20), 
                *(rbx_8 + rsi_29 + 4), 0x30)
            zmm3 = _mm_add_ps(zmm3, zmm5)
            float temp0_614[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_610, temp0_598), zmm9), temp0_598)
            zmm8 = _mm_slli_epi32(zmm8, 2)
            zmm4 = *(rbx_8 + sx.q(zmm8[0]) + 4)
            int32_t temp0_616 = _mm_extract_epi32(zmm8, 1)
            int64_t rdx_30 = sx.q(_mm_extract_epi32(zmm8, 2))
            int32_t temp0_618 = _mm_extract_epi32(zmm8, 3)
            float temp0_621[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rbx_8 + sx.q(temp0_616) + 4), 0x10), 
                    *(rbx_8 + rdx_30 + 4), 0x20), 
                *(rbx_8 + sx.q(temp0_618) + 4), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int32_t temp0_623 = _mm_extract_epi32(zmm0, 1)
            zmm1 = *(rbx_8 + sx.q(zmm0.d) + 4)
            int64_t rdx_33 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rsi_32 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rbx_8 + sx.q(temp0_623) + 4), 
                                    0x10), 
                                *(rbx_8 + rdx_33 + 4), 0x20), 
                            *(rbx_8 + rsi_32 + 4), 0x30), 
                        temp0_621), 
                    zmm9), 
                temp0_621)
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_594), zmm10), temp0_594)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_614), zmm10), temp0_614), 
                        zmm3), 
                    temp0_533), 
                zmm3)
            float temp0_641[0x4] = _mm_cmpeq_ps(arg5, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(arg5, zx.o(0), 7), temp0_641)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_645[0x4] = _mm_rsqrt_ps(arg5)
                arg5 = _mm_mul_ps(_mm_mul_ps(arg5, temp0_645), temp0_645)
                zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, arg5), temp0_645), 
                    data_142d3f640)
                float temp0_651[0x4] = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, temp0_651)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_651), zmm1), zmm0)
            
            float var_358_2[0x4]
            zmm9 = var_358_2
            float var_368_2[0x4]
            zmm10 = var_368_2
            float var_378_2[0x4]
            zmm11 = var_378_2
            zmm1 = __subps_xmmps_memps(zmm1, var_348_2)
            zmm0 = __cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1)
            char temp0_659 = _mm_movemask_ps(zmm0)
            
            if (temp0_659 != 0)
                float temp0_660[0x4] = _mm_mul_ps(var_1b8, zmm1)
                float temp0_661[0x4] = _mm_mul_ps(var_1a8, zmm1)
                zmm5 = _mm_mul_ps(var_198_1, zmm1)
                zmm4 = zmm10
                char temp2_1 = temp0_659 & 1
                
                if (temp2_1 == 0)
                    zmm3 = zmm9
                    
                    if (temp2_1 != 0)
                        goto label_1400a9f82
                    
                    goto label_1400a9f14
                
                zmm4 = zmm10
                zmm4[0] = zmm4[0] + temp0_660[0]
                zmm3 = zmm9
                
                if (temp2_1 != 0)
                label_1400a9f82:
                    zmm3.d = zmm9.d f+ temp0_661[0]
                    zmm2 = zmm11
                    
                    if (temp2_1 == 0)
                        goto label_1400a9f1a
                    
                    goto label_1400a9f8c
                
            label_1400a9f14:
                zmm2 = zmm11
                bool cond:18_1
                bool cond:19_1
                bool cond:24_1
                bool cond:25_1
                
                if (temp2_1 == 0)
                label_1400a9f1a:
                    zmm10 = _mm_add_ps(zmm10, temp0_660)
                    char temp8_1 = temp0_659 & 2
                    cond:18_1 = temp8_1 != 0
                    cond:19_1 = temp8_1 == 0
                    cond:24_1 = temp8_1 == 0
                    cond:25_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_1400a9f9c
                    
                    goto label_1400a9f22
                
            label_1400a9f8c:
                zmm2 = zmm11
                zmm2[0] = zmm2[0] f+ zmm5[0]
                zmm10 = _mm_add_ps(zmm10, temp0_660)
                char temp7_1 = temp0_659 & 2
                cond:18_1 = temp7_1 != 0
                cond:19_1 = temp7_1 == 0
                cond:24_1 = temp7_1 == 0
                cond:25_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                label_1400a9f9c:
                    zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
                    zmm9 = _mm_add_ps(zmm9, temp0_661)
                    
                    if (cond:19_1)
                        goto label_1400a9f2c
                    
                    goto label_1400a9fad
                
            label_1400a9f22:
                zmm9 = _mm_add_ps(zmm9, temp0_661)
                
                if (not(cond:18_1))
                label_1400a9f2c:
                    zmm11 = _mm_add_ps(zmm11, zmm5)
                    
                    if (cond:25_1)
                        goto label_1400a9fbe
                    
                    goto label_1400a9f36
                
            label_1400a9fad:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                zmm11 = _mm_add_ps(zmm11, zmm5)
                bool cond:34_1
                bool cond:35_1
                bool cond:40_1
                bool cond:41_1
                
                if (not(cond:24_1))
                label_1400a9fbe:
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                    char temp16_1 = temp0_659 & 4
                    cond:34_1 = temp16_1 == 0
                    cond:35_1 = temp16_1 != 0
                    cond:40_1 = temp16_1 != 0
                    cond:41_1 = temp16_1 == 0
                    
                    if (temp16_1 == 0)
                        goto label_1400a9f3e
                    
                    goto label_1400a9fcd
                
            label_1400a9f36:
                char temp15_1 = temp0_659 & 4
                cond:34_1 = temp15_1 == 0
                cond:35_1 = temp15_1 != 0
                cond:40_1 = temp15_1 != 0
                cond:41_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_1400a9fcd:
                    zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
                    
                    if (not(cond:34_1))
                    label_1400a9fda:
                        zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                        
                        if (cond:41_1)
                            goto label_1400a9f4a
                        
                        goto label_1400a9fe7
                else
                label_1400a9f3e:
                    
                    if (cond:35_1)
                        goto label_1400a9fda
                
                bool cond:50_1
                bool cond:51_1
                bool cond:56_1
                bool cond:57_1
                
                if (not(cond:40_1))
                label_1400a9f4a:
                    char temp24_1 = temp0_659 & 8
                    cond:50_1 = temp24_1 != 0
                    cond:51_1 = temp24_1 == 0
                    cond:56_1 = temp24_1 == 0
                    cond:57_1 = temp24_1 != 0
                    
                    if (temp24_1 == 0)
                        goto label_1400a9ff6
                    
                    goto label_1400a9f52
                
            label_1400a9fe7:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
                char temp23_1 = temp0_659 & 8
                cond:50_1 = temp23_1 != 0
                cond:51_1 = temp23_1 == 0
                cond:56_1 = temp23_1 == 0
                cond:57_1 = temp23_1 != 0
                
                if (temp23_1 == 0)
                label_1400a9ff6:
                    zmm10 = zmm4
                    
                    if (cond:51_1)
                        goto label_1400a9f5f
                    
                    goto label_1400aa000
                
            label_1400a9f52:
                zmm10 = _mm_blend_ps(zmm10, zmm4, 7)
                
                if (cond:50_1)
                label_1400aa000:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:56_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                else
                label_1400a9f5f:
                    zmm9 = zmm3
                    
                    if (cond:57_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                
                var_338_2 = _mm_blendv_ps(var_338_2, _mm_add_ps(zmm1, var_338_2), zmm0)
                zmm11 = zmm2
            
            r10_3 = zx.q(r10_3.d + 4)
        while (r10_3.d s< i)
        
        result = arg12
        
        if (r10_3.d s>= result)
            goto label_1400ab749
        
        goto label_1400aa049
    
    r10_3 = 0
    zmm11 = zx.o(0)
    zmm9 = zx.o(0)
    zmm10 = zx.o(0)
    var_338_2 = zx.o(0)
    result = arg12
    int32_t* rcx_63
    int64_t* rdx_67
    
    if (0 s< result)
    label_1400aa049:
        float var_368_3[0x4] = zmm10
        float var_358_3[0x4] = zmm9
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r10_3.d), 0), data_142e11d00)
        zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm1)
        zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
        int64_t rax_97 = sx.q(zmm1.d)
        void* r10_4 = arg8 + (rax_97 << 2)
        zmm0 = *(arg8 + (rax_97 << 2))
        int64_t rsi_33 = sx.q(_mm_extract_epi32(zmm1, 1))
        void* rax_99 = arg8 + (rsi_33 << 2)
        int64_t rbx_9 = sx.q(_mm_extract_epi32(zmm1, 2))
        void* rdx_35 = arg8 + (rbx_9 << 2)
        int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm1, 3))
        void* rdi_10 = arg8 + (rbp_9 << 2)
        zmm0 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm0, *(arg8 + (rsi_33 << 2)), 0x10), 
                *(arg8 + (rbx_9 << 2)), 0x20), 
            *(arg8 + (rbp_9 << 2)), 0x30)
        zmm3 = data_142fc95e0 & zmm2
        uint128_t* r14_7 = zx.q(zmm3.d)
        zmm8 = *(r14_7 + r10_4)
        int32_t* rsi_34 = zx.q(_mm_extract_epi32(zmm3, 1))
        int32_t* r15_9 = zx.q(_mm_extract_epi32(zmm3, 2))
        int32_t* r13_2 = zx.q(_mm_extract_epi32(zmm3, 3))
        float temp0_696[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rsi_34 + rax_99), 0x10), 
                *(r15_9 + rdx_35), 0x20), 
            *(r13_2 + rdi_10), 0x30)
        zmm3 = data_142fc95f0 & zmm2
        zmm6 = *(zx.q(zmm3.d) + r10_4)
        int32_t* rbp_10 = zx.q(_mm_extract_epi32(zmm3, 1))
        int32_t* rbx_10 = zx.q(_mm_extract_epi32(zmm3, 2))
        int32_t* rsi_36 = zx.q(_mm_extract_epi32(zmm3, 3))
        float temp0_702[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rbp_10 + rax_99), 0x10), 
                *(rbx_10 + rdx_35), 0x20), 
            *(rsi_36 + rdi_10), 0x30)
        uint128_t var_248_2 = zmm0
        float var_218_2[0x4] = zx.o(0)
        zmm5 = *(arg7 + 0xc)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_3f8 = zmm5
        var_3e8 = zmm5
        uint128_t var_3d8_6 = zmm5
        zmm7 = *arg7
        zmm1 = *(arg7 + 4)
        zmm4 = *(arg7 + 8)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_705[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_706[0x4] = _mm_mul_ps(temp0_696, temp0_705)
        float temp0_707[0x4] = _mm_mul_ps(temp0_705, temp0_702)
        float temp0_708[0x4] = _mm_mul_ps(temp0_702, zmm1)
        float temp0_709[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        zmm0 = _mm_mul_ps(zmm0, temp0_709)
        zmm3 = _mm_mul_ps(zx.o(0), zmm5)
        float temp0_714[0x4] = _mm_sub_ps(temp0_708, _mm_mul_ps(temp0_709, temp0_696))
        zmm0 = _mm_sub_ps(zmm0, temp0_707)
        float temp0_716[0x4] = _mm_sub_ps(temp0_706, zmm1)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        float temp0_718[0x4] = _mm_add_ps(temp0_714, temp0_714)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        float temp0_720[0x4] = _mm_add_ps(temp0_716, temp0_716)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_3b8 = temp0_718
        uint128_t var_3a8_6 = zmm0
        float var_398_6[0x4] = temp0_720
        uint128_t var_388_4 = zmm3
        zmm3 = _mm_mul_ps(zmm3, zmm5)
        zmm1 = _mm_mul_ps(zmm5, temp0_718)
        float temp0_724[0x4] = _mm_mul_ps(zmm5, zmm0)
        float temp0_725[0x4] = _mm_mul_ps(zmm5, temp0_720)
        zmm1 = __addps_xmmps_memps(zmm1, var_248_2)
        float temp0_727[0x4] = __addps_xmmps_memps(temp0_724, temp0_696)
        float temp0_728[0x4] = __addps_xmmps_memps(temp0_725, temp0_702)
        uint32_t var_3c8_4[0x4] = zmm5
        uint128_t var_128_2 = zmm1
        float var_118_2[0x4] = temp0_727
        float var_108_2[0x4] = temp0_728
        uint128_t var_f8_2 = __addps_xmmps_memps(zmm3, var_218_2)
        zmm4 = *arg7
        zmm5 = *(arg7 + 4)
        zmm7 = *(arg7 + 8)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_731[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(zmm0, temp0_731)
        float temp0_733[0x4] = _mm_mul_ps(temp0_731, temp0_720)
        float temp0_734[0x4] = _mm_mul_ps(temp0_720, zmm5)
        float temp0_735[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm5 = _mm_mul_ps(zmm5, temp0_718)
        float temp0_737[0x4] = _mm_mul_ps(temp0_718, temp0_735)
        float temp0_739[0x4] = _mm_sub_ps(temp0_734, _mm_mul_ps(temp0_735, zmm0))
        float temp0_740[0x4] = _mm_sub_ps(temp0_737, temp0_733)
        zmm3 = _mm_sub_ps(zmm3, zmm5)
        float temp0_742[0x4] = _mm_add_ps(temp0_739, zmm1)
        float temp0_743[0x4] = _mm_add_ps(temp0_740, temp0_727)
        zmm3 = _mm_add_ps(zmm3, temp0_728)
        zmm0 = arg7[1].d
        zmm4 = *(arg7 + 0x14)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_742)
        float temp0_748[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_743)
        zmm1 = *(arg7 + 0x18)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
        uint128_t var_1e8 = zmm0
        float var_1d8[0x4] = temp0_748
        uint128_t var_2a8_4 = zmm1
        uint128_t var_1c8_1 = zmm1
        int64_t rsi_37 = 0
        zmm1 = zmm0
        
        while (true)
            zmm4 = *(&var_278 + rsi_37)
            zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm5 = _mm_cmpeq_ps(zmm3, zmm1, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm2)) != 0)
                char temp0_755 = _mm_movemask_ps(zmm5)
                
                if ((temp0_755 & 1) == 0)
                    if ((temp0_755 & 2) != 0)
                        goto label_1400aa42d
                    
                    goto label_1400aa353
                
                *(&var_3f8 + (rsi_37 << 2)) = zmm4[0]
                
                if ((temp0_755 & 2) != 0)
                label_1400aa42d:
                    *(&var_3f8:4 + (rsi_37 << 2)) = zmm4[0]
                    
                    if ((temp0_755 & 4) == 0)
                        goto label_1400aa35b
                    
                    goto label_1400aa43b
                
            label_1400aa353:
                
                if ((temp0_755 & 4) != 0)
                label_1400aa43b:
                    *(&var_3f8:8 + (rsi_37 << 2)) = zmm4[0]
                    
                    if ((temp0_755 & 8) != 0)
                        *(&var_3f8:0xc + (rsi_37 << 2)) = zmm4[0]
                else
                label_1400aa35b:
                    
                    if ((temp0_755 & 8) != 0)
                        *(&var_3f8:0xc + (rsi_37 << 2)) = zmm4[0]
            
            zmm3 = _mm_cmpeq_ps(zmm3, zmm1, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm3)) != 0)
                zmm5 = *(&var_288 + rsi_37)
                float temp0_759[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_759, 1), zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm2)) != 0)
                    char temp0_764 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_764 & 1) == 0)
                        if ((temp0_764 & 2) != 0)
                            goto label_1400aa45b
                        
                        goto label_1400aa3b4
                    
                    *(&var_3f8 + (rsi_37 << 2)) = zmm5[0]
                    
                    if ((temp0_764 & 2) != 0)
                    label_1400aa45b:
                        *(&var_3f8:4 + (rsi_37 << 2)) = zmm5[0]
                        
                        if ((temp0_764 & 4) == 0)
                            goto label_1400aa3bc
                        
                        goto label_1400aa469
                    
                label_1400aa3b4:
                    
                    if ((temp0_764 & 4) != 0)
                    label_1400aa469:
                        *(&var_3f8:8 + (rsi_37 << 2)) = zmm5[0]
                        
                        if ((temp0_764 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_37 << 2)) = zmm5[0]
                    else
                    label_1400aa3bc:
                        
                        if ((temp0_764 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_37 << 2)) = zmm5[0]
                
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_759, 5), zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
                    zmm3 = *(&var_1e8 + (rsi_37 << 2))
                    char temp0_769 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_769 & 1) == 0)
                        if ((temp0_769 & 2) != 0)
                            goto label_1400aa489
                        
                        goto label_1400aa3f5
                    
                    *(&var_3f8 + (rsi_37 << 2)) = zmm3.d
                    
                    if ((temp0_769 & 2) != 0)
                    label_1400aa489:
                        *(&var_3f8:4 + (rsi_37 << 2)) = __extractps_memd_xmmps_immb(zmm3, 1)
                        
                        if ((temp0_769 & 4) == 0)
                            goto label_1400aa3fd
                        
                        goto label_1400aa499
                    
                label_1400aa3f5:
                    
                    if ((temp0_769 & 4) != 0)
                    label_1400aa499:
                        *(&var_3f8:8 + (rsi_37 << 2)) = __extractps_memd_xmmps_immb(zmm3, 2)
                        
                        if ((temp0_769 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_37 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)
                    else
                    label_1400aa3fd:
                        
                        if ((temp0_769 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_37 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)
            
            if (rsi_37 == 8)
                break
            
            zmm1 = *(&var_1d8 + (rsi_37 << 2))
            rsi_37 += 4
        
        float var_378_3[0x4] = zmm11
        zmm3 = var_3f8
        zmm11 = var_3e8
        float temp0_860[0x4] = _mm_sub_ps(zmm3, zmm0)
        zmm7 = *arg1
        zmm5 = *(arg1 + 4)
        float temp0_861[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm0 = _mm_sub_ps(zmm3, temp0_861)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm1 = _mm_sub_ps(zmm11, zmm5)
        zmm6 = *arg3
        zmm4 = *(arg3 + 4)
        float temp0_865[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm0 = _mm_div_ps(zmm0, temp0_865)
        float temp0_867[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_867)
        zmm10 = arg3[1].d
        zmm13 = _mm_cvttps_epi32(zmm0)
        float temp0_870[0x4] = _mm_cvttps_epi32(zmm1)
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), temp0_865), temp0_861)
        float temp0_875[0x4] =
            __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm10, 0x20), data_142fc9600)
        zmm1 = _mm_shuffle_ps(temp0_875, temp0_875, 0)
        uint128_t var_348_3 = zmm1
        uint128_t var_2b8_4 = zmm3
        zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm3, 1)
        zmm3 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
        zmm7 = _mm_blendv_ps(zmm3, zmm13, zmm0)
        uint32_t var_2f8_4[0x4] = zmm5
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_870), temp0_867), zmm5)
        float temp0_885[0x4] = _mm_shuffle_ps(temp0_875, temp0_875, 0x55)
        zmm0 = _mm_add_ps(zmm0, temp0_885)
        zmm4 = zmm0
        zmm0 = _mm_cmpeq_ps(zmm0, zmm11, 1)
        char temp0_889 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm2))
        zmm9 = arg1[1].d
        float temp0_890[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        zmm1 = _mm_sub_ps(var_3d8_6, temp0_890)
        float temp0_892[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_892))
        float var_208_1[0x4] = zmm1
        arg5 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_892), temp0_890)
        float temp0_898[0x4] = _mm_shuffle_ps(temp0_875, temp0_875, 0xaa)
        var_3f8 = zmm7
        float temp0_899[0x4] = _mm_cmpeq_ps(zmm4, zmm11, 5)
        
        if (temp0_889 != 0)
            zmm13 = temp0_870
        
        float temp0_900[0x4] = __subps_xmmps_memps(zmm11, temp0_748)
        float temp0_901[0x4] = _mm_mul_ps(temp0_860, temp0_860)
        arg5 = _mm_add_ps(arg5, temp0_898)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_899, zmm2)) != 0)
            zmm3 = __paddd_xmmdq_memdq(temp0_870, data_142d3f800)
        
        float temp0_906[0x4] = __subps_xmmps_memps(var_3d8_6, var_2a8_4)
        zmm1 = _mm_add_ps(temp0_901, zx.o(0))
        float temp0_908[0x4] = _mm_mul_ps(temp0_900, temp0_900)
        float temp0_909[0x4] = _mm_blendv_ps(zmm3, zmm13, zmm0)
        var_3e8 = temp0_909
        zmm0 = _mm_cmpeq_ps(arg5, var_3d8_6, 5)
        arg5 = _mm_cmpeq_ps(arg5, var_3d8_6, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(arg5, zmm2)) != 0)
            zmm13 = var_208_1
        
        zmm5 = _mm_add_ps(zmm1, temp0_908)
        float temp0_915[0x4] = _mm_mul_ps(temp0_906, temp0_906)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
            zmm3 = __paddd_xmmdq_memdq(var_208_1, data_142d3f800)
        
        zmm3 = _mm_blendv_ps(zmm3, zmm13, arg5)
        arg5 = _mm_add_ps(zmm5, temp0_915)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_865), temp0_861)
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_909), temp0_867), var_2f8_4)
        uint128_t var_3d8_8 = zmm3
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_892), temp0_890)
        zmm5 = _mm_add_ps(var_348_3, zmm0)
        float temp0_931[0x4] = _mm_add_ps(temp0_885, zmm1)
        float temp0_932[0x4] = _mm_add_ps(temp0_898, zmm3)
        zmm0 = _mm_sub_ps(var_2b8_4, zmm5)
        zmm1 = _mm_sub_ps(zmm11, temp0_931)
        zmm15 = _mm_sub_ps(var_3d8_6, temp0_932)
        zmm0 = _mm_div_ps(zmm0, temp0_865)
        zmm1 = _mm_div_ps(zmm1, temp0_867)
        zmm15 = _mm_div_ps(zmm15, temp0_892)
        var_3b8 = zmm0
        float var_3a8_8[0x4] = zmm1
        int64_t rcx_1 = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm7 = _mm_cmpeq_epi32(zmm7, zmm0)
            
            if (_mm_movemask_ps(zmm7 & zmm2) != 0)
                char temp0_942 = _mm_movemask_ps(zmm7)
                
                if ((temp0_942 & 1) == 0)
                    if ((temp0_942 & 2) != 0)
                        goto label_1400aacaf
                    
                    goto label_1400aabef
                
                *(&var_3f8 + (rcx_1 << 2)) = 0
                
                if ((temp0_942 & 2) != 0)
                label_1400aacaf:
                    *(&var_3f8:4 + (rcx_1 << 2)) = 0
                    
                    if ((temp0_942 & 4) == 0)
                        goto label_1400aabf7
                    
                    goto label_1400aacbf
                
            label_1400aabef:
                
                if ((temp0_942 & 4) == 0)
                label_1400aabf7:
                    
                    if ((temp0_942 & 8) != 0)
                        goto label_1400aaccf
                    
                    goto label_1400aabff
                
            label_1400aacbf:
                *(&var_3f8:8 + (rcx_1 << 2)) = 0
                
                if ((temp0_942 & 8) != 0)
                label_1400aaccf:
                    *(&var_3f8:0xc + (rcx_1 << 2)) = 0
                    
                    if ((temp0_942 & 1) == 0)
                        goto label_1400aac07
                    
                    goto label_1400aacdf
                
            label_1400aabff:
                
                if ((temp0_942 & 1) == 0)
                label_1400aac07:
                    
                    if ((temp0_942 & 2) != 0)
                        goto label_1400aacef
                    
                    goto label_1400aac0f
                
            label_1400aacdf:
                var_3b8[rcx_1] = 0
                
                if ((temp0_942 & 2) != 0)
                label_1400aacef:
                    var_3b8[1 + rcx_1] = 0
                    
                    if ((temp0_942 & 4) == 0)
                        goto label_1400aac17
                    
                    goto label_1400aacff
                
            label_1400aac0f:
                
                if ((temp0_942 & 4) != 0)
                label_1400aacff:
                    var_3b8[2 + rcx_1] = 0
                    
                    if ((temp0_942 & 8) != 0)
                        var_3b8[3 + rcx_1] = 0
                else
                label_1400aac17:
                    
                    if ((temp0_942 & 8) != 0)
                        var_3b8[3 + rcx_1] = 0
            
            int32_t rdx_38 = *(arg4 + rcx_1)
            zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_38 - 1), 0), 
                *(&var_3f8 + (rcx_1 << 2)))
            
            if (_mm_movemask_ps(zmm1 & zmm2) != 0)
                char temp0_946 = _mm_movemask_ps(zmm1)
                
                if ((temp0_946 & 1) == 0)
                    if ((temp0_946 & 2) != 0)
                        goto label_1400aad2b
                    
                    goto label_1400aac5d
                
                *(&var_3f8 + (rcx_1 << 2)) = rdx_38 - 2
                
                if ((temp0_946 & 2) != 0)
                label_1400aad2b:
                    *(&var_3f8:4 + (rcx_1 << 2)) = rdx_38 - 2
                    
                    if ((temp0_946 & 4) == 0)
                        goto label_1400aac65
                    
                    goto label_1400aad37
                
            label_1400aac5d:
                
                if ((temp0_946 & 4) == 0)
                label_1400aac65:
                    
                    if ((temp0_946 & 8) != 0)
                        goto label_1400aad43
                    
                    goto label_1400aac6d
                
            label_1400aad37:
                *(&var_3f8:8 + (rcx_1 << 2)) = rdx_38 - 2
                
                if ((temp0_946 & 8) != 0)
                label_1400aad43:
                    *(&var_3f8:0xc + (rcx_1 << 2)) = rdx_38 - 2
                    
                    if ((temp0_946 & 1) == 0)
                        goto label_1400aac75
                    
                    goto label_1400aad4f
                
            label_1400aac6d:
                
                if ((temp0_946 & 1) == 0)
                label_1400aac75:
                    
                    if ((temp0_946 & 2) != 0)
                        goto label_1400aad5f
                    
                    goto label_1400aac7d
                
            label_1400aad4f:
                var_3b8[rcx_1] = 0x3f800000
                
                if ((temp0_946 & 2) != 0)
                label_1400aad5f:
                    var_3b8[1 + rcx_1] = 0x3f800000
                    
                    if ((temp0_946 & 4) == 0)
                        goto label_1400aac85
                    
                    goto label_1400aad6f
                
            label_1400aac7d:
                
                if ((temp0_946 & 4) != 0)
                label_1400aad6f:
                    var_3b8[2 + rcx_1] = 0x3f800000
                    
                    if ((temp0_946 & 8) != 0)
                        var_3b8[3 + rcx_1] = 0x3f800000
                else
                label_1400aac85:
                    
                    if ((temp0_946 & 8) != 0)
                        var_3b8[3 + rcx_1] = 0x3f800000
            
            if (rcx_1 == 8)
                break
            
            zmm7 = *(&var_3e8 + (rcx_1 << 2))
            rcx_1 += 4
        
        zmm4 = _mm_shuffle_epi32(zx.o(*(arg6 + 4)), 0)
        zmm7 = var_3f8
        zmm6 = var_3e8
        zmm8 = var_3d8_8
        zmm3 = _mm_mullo_epi32(zmm4, zmm7)
        zmm10 = _mm_add_epi32(zmm3, zmm6)
        zmm0 = _mm_shuffle_epi32(zx.o(*(arg6 + 8)), 0)
        zmm13 = _mm_mullo_epi32(zmm10, zmm0)
        zmm1 = _mm_add_epi32(zmm13, zmm8)
        int32_t* rax_127 = *(arg6 + 0x10)
        zmm1 = _mm_slli_epi32(zmm1, 2) & zmm2
        int64_t rdx_54 = sx.q(zmm1.d)
        zmm5 = *(rax_127 + rdx_54)
        int64_t rdi_13 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rbx_17 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rbp_31 = sx.q(_mm_extract_epi32(zmm1, 3))
        zmm5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rax_127 + rdi_13), 0x10), 
                *(rax_127 + rbx_17), 0x20), 
            *(rax_127 + rbp_31), 0x30)
        zmm12 = _mm_cmpeq_epi32(temp0_931, temp0_931)
        zmm7 = _mm_mullo_epi32(_mm_sub_epi32(zmm7, zmm12), zmm4)
        zmm1 =
            _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm7, zmm6), zmm0), zmm8), 2)
        zmm10 = _mm_mullo_epi32(_mm_add_epi32(zmm10, zmm4), zmm0)
        zmm1 &= zmm2
        zmm4 = *(rax_127 + sx.q(zmm1.d))
        int32_t temp0_1096 = _mm_extract_epi32(zmm1, 1)
        int64_t rbx_19 = sx.q(_mm_extract_epi32(zmm1, 2))
        int32_t temp0_1098 = _mm_extract_epi32(zmm1, 3)
        float temp0_1102[0x4] = _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_127 + sx.q(temp0_1096)), 0x10), 
                    *(rax_127 + rbx_19), 0x20), 
                *(rax_127 + sx.q(temp0_1098)), 0x30), 
            zmm5)
        zmm11 = var_3b8
        float temp0_1104[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1102, zmm11), zmm5)
        zmm6 = _mm_sub_epi32(zmm6, zmm12)
        zmm3 =
            _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm6), zmm0), zmm8), 2)
            & zmm2
        zmm5 = *(rax_127 + sx.q(zmm3.d))
        int64_t rcx_39 = sx.q(_mm_extract_epi32(zmm3, 1))
        int32_t temp0_1111 = _mm_extract_epi32(zmm3, 2)
        int64_t rbx_21 = sx.q(_mm_extract_epi32(zmm3, 3))
        zmm5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rax_127 + rcx_39), 0x10), 
                *(rax_127 + sx.q(temp0_1111)), 0x20), 
            *(rax_127 + rbx_21), 0x30)
        zmm6 =
            _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm7), zmm0), zmm8), 2)
            & zmm2
        zmm7 = *(rax_127 + sx.q(zmm6[0]))
        int32_t temp0_1120 = _mm_extract_epi32(zmm6, 1)
        int64_t rbp_39 = sx.q(_mm_extract_epi32(zmm6, 2))
        int32_t temp0_1122 = _mm_extract_epi32(zmm6, 3)
        float temp0_1127[0x4] = _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_127 + sx.q(temp0_1120)), 0x10), 
                        *(rax_127 + rbp_39), 0x20), 
                    *(rax_127 + sx.q(temp0_1122)), 0x30), 
                zmm5), 
            zmm11)
        zmm3 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(r14_7 + rax_127 + rdx_54), 
                    *(rsi_34 + rax_127 + rdi_13), 0x10), 
                *(r15_9 + rax_127 + rbx_17), 0x20), 
            *(r13_2 + rax_127 + rbp_31), 0x30)
        zmm0 = _mm_add_epi32(zmm0, zmm8)
        zmm13 = _mm_add_epi32(zmm13, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm10)
        zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, zmm8), 2) & zmm2
        zmm6 = *(r14_7 + sx.q(zmm10[0]) + rax_127)
        void* rcx_50 = sx.q(_mm_extract_epi32(zmm10, 1)) + rax_127
        void* rdx_60 = sx.q(_mm_extract_epi32(zmm10, 2)) + rax_127
        void* rbp_42 = sx.q(_mm_extract_epi32(zmm10, 3)) + rax_127
        float temp0_1141[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rsi_34 + rcx_50), 0x10), 
                *(r15_9 + rdx_60), 0x20), 
            *(r13_2 + rbp_42), 0x30)
        float temp0_1142[0x4] = _mm_add_ps(temp0_1127, zmm5)
        float temp0_1145[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1141, zmm3), zmm11), zmm3)
        zmm13 = _mm_slli_epi32(zmm13, 2) & zmm2
        zmm3 = *(r14_7 + sx.q(zmm13[0]) + rax_127)
        void* rcx_56 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_127
        void* rdx_63 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_127
        void* rbp_45 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_127
        zmm3 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rsi_34 + rcx_56), 0x10), 
                *(r15_9 + rdx_63), 0x20), 
            *(r13_2 + rbp_45), 0x30)
        zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
        zmm1 = *(r14_7 + sx.q(zmm0.d) + rax_127)
        void* rcx_62 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_127
        void* rdx_66 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_127
        void* rbp_48 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_127
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rsi_34 + rcx_62), 0x10), 
                            *(r15_9 + rdx_66), 0x20), 
                        *(r13_2 + rbp_48), 0x30), 
                    zmm3), 
                zmm11), 
            zmm3)
        float temp0_1165[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1142, temp0_1104), var_3a8_8), temp0_1104)
        zmm1 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_1145), var_3a8_8), temp0_1145), 
                    temp0_1165), 
                zmm15), 
            temp0_1165)
        zmm3 = _mm_cmpeq_ps(arg5, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg5, 7), zmm3), zmm2)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm3 = _mm_rsqrt_ps(arg5)
            zmm5 = _mm_mul_ps(_mm_mul_ps(arg5, zmm3), zmm3)
            float temp0_1182[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm3), data_142d3f640)
            zmm3 = _mm_rcp_ps(temp0_1182)
            float temp0_1184[0x4] = _mm_mul_ps(temp0_1182, zmm3)
            zmm1 = _mm_blendv_ps(zmm1, 
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_1184), zmm3), zmm1), zmm0)
        
        rcx_63 = arg10
        rdx_67 = arg11
        zmm3 = var_318_2
        zmm9 = var_358_3
        zmm10 = var_368_3
        zmm11 = var_378_3
        zmm0 = arg9
        zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
        zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm2)
        result = _mm_movemask_ps(zmm0)
        
        if (result.b != 0)
            float temp0_1194[0x4] = _mm_mul_ps(var_1e8, zmm1)
            float temp0_1195[0x4] = _mm_mul_ps(var_1d8, zmm1)
            zmm5 = _mm_mul_ps(var_1c8_1, zmm1)
            result = zx.d(result.b)
            zmm4 = zmm10
            char temp1_1 = result.b & 1
            
            if (temp1_1 == 0)
                zmm8 = zmm9
                
                if (temp1_1 != 0)
                    goto label_1400ab8a8
                
                goto label_1400ab67d
            
            zmm4 = zmm10
            zmm4[0] = zmm4[0] + temp0_1194[0]
            zmm8 = zmm9
            
            if (temp1_1 != 0)
            label_1400ab8a8:
                zmm8 = zmm9
                zmm8[0] = zmm8[0] + temp0_1195[0]
                zmm2 = zmm11
                
                if (temp1_1 == 0)
                    goto label_1400ab687
                
                goto label_1400ab8bb
            
        label_1400ab67d:
            zmm2 = zmm11
            bool cond:22_1
            bool cond:23_1
            bool cond:30_1
            bool cond:31_1
            
            if (temp1_1 == 0)
            label_1400ab687:
                zmm10 = _mm_add_ps(zmm10, temp0_1194)
                char temp6_1 = result.b & 2
                cond:22_1 = temp6_1 != 0
                cond:23_1 = temp6_1 == 0
                cond:30_1 = temp6_1 == 0
                cond:31_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                    goto label_1400ab8cf
                
                goto label_1400ab693
            
        label_1400ab8bb:
            zmm2 = zmm11
            zmm2[0] = zmm2[0] f+ zmm5[0]
            zmm10 = _mm_add_ps(zmm10, temp0_1194)
            char temp5_1 = result.b & 2
            cond:22_1 = temp5_1 != 0
            cond:23_1 = temp5_1 == 0
            cond:30_1 = temp5_1 == 0
            cond:31_1 = temp5_1 != 0
            
            if (temp5_1 != 0)
            label_1400ab8cf:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
                zmm9 = _mm_add_ps(zmm9, temp0_1195)
                
                if (cond:23_1)
                    goto label_1400ab69d
                
                goto label_1400ab8e0
            
        label_1400ab693:
            zmm9 = _mm_add_ps(zmm9, temp0_1195)
            
            if (not(cond:22_1))
            label_1400ab69d:
                zmm11 = _mm_add_ps(zmm11, zmm5)
                
                if (cond:31_1)
                    goto label_1400ab8f1
                
                goto label_1400ab6a7
            
        label_1400ab8e0:
            zmm8 = _mm_blend_ps(zmm8, zmm9, 2)
            zmm11 = _mm_add_ps(zmm11, zmm5)
            bool cond:38_1
            bool cond:39_1
            bool cond:46_1
            bool cond:47_1
            
            if (not(cond:30_1))
            label_1400ab8f1:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                char temp14_1 = result.b & 4
                cond:38_1 = temp14_1 == 0
                cond:39_1 = temp14_1 != 0
                cond:46_1 = temp14_1 != 0
                cond:47_1 = temp14_1 == 0
                
                if (temp14_1 == 0)
                    goto label_1400ab6af
                
                goto label_1400ab900
            
        label_1400ab6a7:
            char temp13_1 = result.b & 4
            cond:38_1 = temp13_1 == 0
            cond:39_1 = temp13_1 != 0
            cond:46_1 = temp13_1 != 0
            cond:47_1 = temp13_1 == 0
            
            if (temp13_1 != 0)
            label_1400ab900:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
                
                if (not(cond:38_1))
                label_1400ab90d:
                    zmm8 = _mm_blend_ps(zmm8, zmm9, 4)
                    
                    if (cond:47_1)
                        goto label_1400ab6bb
                    
                    goto label_1400ab91a
            else
            label_1400ab6af:
                
                if (cond:39_1)
                    goto label_1400ab90d
            
            bool cond:54_1
            bool cond:55_1
            bool cond:62_1
            bool cond:63_1
            
            if (not(cond:46_1))
            label_1400ab6bb:
                char temp22_1 = result.b & 8
                cond:54_1 = temp22_1 != 0
                cond:55_1 = temp22_1 == 0
                cond:62_1 = temp22_1 == 0
                cond:63_1 = temp22_1 != 0
                
                if (temp22_1 == 0)
                    goto label_1400ab929
                
                goto label_1400ab6c3
            
        label_1400ab91a:
            zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
            char temp21_1 = result.b & 8
            cond:54_1 = temp21_1 != 0
            cond:55_1 = temp21_1 == 0
            cond:62_1 = temp21_1 == 0
            cond:63_1 = temp21_1 != 0
            
            if (temp21_1 == 0)
            label_1400ab929:
                zmm10 = zmm4
                
                if (cond:55_1)
                    goto label_1400ab6d0
                
                goto label_1400ab933
            
        label_1400ab6c3:
            zmm10 = _mm_blend_ps(zmm10, zmm4, 7)
            
            if (cond:54_1)
            label_1400ab933:
                zmm9 = _mm_blend_ps(zmm9, zmm8, 7)
                
                if (not(cond:62_1))
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
            else
            label_1400ab6d0:
                zmm9 = zmm8
                
                if (cond:63_1)
                    zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
            
            zmm4 = var_338_2
            var_338_2 = _mm_blendv_ps(zmm4, _mm_add_ps(zmm1, zmm4), zmm0)
            zmm11 = zmm2
    else
    label_1400ab749:
        rcx_63 = arg10
        rdx_67 = arg11
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
    zmm1 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_67), rdx_67[1].d, 0x20), zmm0)
    *rdx_67 = zmm1.d
    *(rdx_67 + 4) = __extractps_memd_xmmps_immb(zmm1, 1)
    rdx_67[1].d = __extractps_memd_xmmps_immb(zmm1, 2)
    zmm3 &= not.o(var_338_2)
    zmm3 = _mm_hadd_ps(zmm3, zmm3)
    zmm3.d = _mm_hadd_ps(zmm3, zmm3).d f+ *rcx_63
    *rcx_63 = zmm3.d
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
    int32_t* rcx_32
    int64_t* rdx_53
    uint64_t r10
    
    if (i_1 s<= 0)
        r10 = 0
        zmm10 = zx.o(0)
        zmm9 = zx.o(0)
        zmm8 = zx.o(0)
        var_348_1 = zx.o(0)
        result = arg12
        
        if (0 s< result)
        label_1400a8eb9:
            float var_378_1[0x4] = zmm10
            float var_368_1[0x4] = zmm9
            float var_358_1[0x4] = zmm8
            zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r10.d), 0), data_142e11d00)
            zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm1)
            zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
            int64_t rax_40 = sx.q(zmm1.d)
            void* rbx_4 = arg8 + (rax_40 << 2)
            zmm0 = *(arg8 + (rax_40 << 2))
            int64_t r10_1 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* rax_42 = arg8 + (r10_1 << 2)
            int64_t rsi_15 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* rdx_20 = arg8 + (rsi_15 << 2)
            int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rdi_5 = arg8 + (rbp_4 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg8 + (r10_1 << 2)), 0x10), 
                    *(arg8 + (rsi_15 << 2)), 0x20), 
                *(arg8 + (rbp_4 << 2)), 0x30)
            zmm3 = data_142fc95e0 & zmm2
            uint64_t r13_1 = zx.q(zmm3.d)
            zmm8 = *(r13_1 + rbx_4)
            uint64_t r14_5 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t r15_4 = zx.q(_mm_extract_epi32(zmm3, 2))
            int32_t* r10_2 = zx.q(_mm_extract_epi32(zmm3, 3))
            float temp0_313[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(r14_5 + rax_42), 0x10), *(r15_4 + rdx_20), 
                    0x20), 
                *(r10_2 + rdi_5), 0x30)
            zmm3 = data_142fc95f0 & zmm2
            zmm6 = *(zx.q(zmm3.d) + rbx_4)
            uint64_t rsi_17 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t rbx_5 = zx.q(_mm_extract_epi32(zmm3, 2))
            int32_t* rbp_5 = zx.q(_mm_extract_epi32(zmm3, 3))
            float temp0_319[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rsi_17 + rax_42), 0x10), *(rbx_5 + rdx_20), 
                    0x20), 
                *(rbp_5 + rdi_5), 0x30)
            uint128_t var_248_1 = zmm0
            float var_218_1[0x4] = zx.o(0)
            zmm5 = *(arg7 + 0xc)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_3f8 = zmm5
            var_3e8 = zmm5
            uint32_t var_3d8_3[0x4] = zmm5
            zmm7 = *arg7
            zmm1 = *(arg7 + 4)
            zmm4 = *(arg7 + 8)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_322[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_323[0x4] = _mm_mul_ps(temp0_313, temp0_322)
            float temp0_324[0x4] = _mm_mul_ps(temp0_322, temp0_319)
            float temp0_325[0x4] = _mm_mul_ps(temp0_319, zmm1)
            float temp0_326[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_mul_ps(zmm1, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_326)
            zmm3 = _mm_mul_ps(zx.o(0), zmm5)
            float temp0_331[0x4] = _mm_sub_ps(temp0_325, _mm_mul_ps(temp0_326, temp0_313))
            zmm0 = _mm_sub_ps(zmm0, temp0_324)
            float temp0_333[0x4] = _mm_sub_ps(temp0_323, zmm1)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            float temp0_335[0x4] = _mm_add_ps(temp0_331, temp0_331)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_337[0x4] = _mm_add_ps(temp0_333, temp0_333)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_3b8 = temp0_335
            uint128_t var_3a8_3 = zmm0
            float var_398_3[0x4] = temp0_337
            uint128_t var_388_2 = zmm3
            zmm3 = _mm_mul_ps(zmm3, zmm5)
            zmm1 = _mm_mul_ps(zmm5, temp0_335)
            float temp0_341[0x4] = _mm_mul_ps(zmm5, zmm0)
            float temp0_342[0x4] = _mm_mul_ps(zmm5, temp0_337)
            zmm1 = __addps_xmmps_memps(zmm1, var_248_1)
            float temp0_344[0x4] = __addps_xmmps_memps(temp0_341, temp0_313)
            float temp0_345[0x4] = __addps_xmmps_memps(temp0_342, temp0_319)
            uint32_t var_3c8_2[0x4] = zmm5
            uint128_t var_128_1 = zmm1
            float var_118_1[0x4] = temp0_344
            float var_108_1[0x4] = temp0_345
            uint128_t var_f8_1 = __addps_xmmps_memps(zmm3, var_218_1)
            zmm4 = *arg7
            zmm5 = *(arg7 + 4)
            zmm7 = *(arg7 + 8)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_348[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm0, temp0_348)
            float temp0_350[0x4] = _mm_mul_ps(temp0_348, temp0_337)
            float temp0_351[0x4] = _mm_mul_ps(temp0_337, zmm5)
            float temp0_352[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm5 = _mm_mul_ps(zmm5, temp0_335)
            float temp0_354[0x4] = _mm_mul_ps(temp0_335, temp0_352)
            float temp0_356[0x4] = _mm_sub_ps(temp0_351, _mm_mul_ps(temp0_352, zmm0))
            float temp0_357[0x4] = _mm_sub_ps(temp0_354, temp0_350)
            zmm3 = _mm_sub_ps(zmm3, zmm5)
            float temp0_359[0x4] = _mm_add_ps(temp0_356, zmm1)
            float temp0_360[0x4] = _mm_add_ps(temp0_357, temp0_344)
            zmm3 = _mm_add_ps(zmm3, temp0_345)
            zmm0 = arg7[1].d
            zmm4 = *(arg7 + 0x14)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_359)
            float temp0_365[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_360)
            zmm1 = *(arg7 + 0x18)
            zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
            uint128_t var_188 = zmm0
            float var_178[0x4] = temp0_365
            var_298.o = zmm1
            uint128_t var_168_1 = zmm1
            int64_t rsi_18 = 0
            zmm1 = zmm0
            
            while (true)
                zmm4 = *(&var_258 + rsi_18)
                zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm5 = _mm_cmpeq_ps(zmm3, zmm1, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm2)) != 0)
                    char temp0_372 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_372 & 1) == 0)
                        if ((temp0_372 & 2) != 0)
                            goto label_1400a92ad
                        
                        goto label_1400a91d3
                    
                    *(&var_3f8 + (rsi_18 << 2)) = zmm4[0]
                    
                    if ((temp0_372 & 2) != 0)
                    label_1400a92ad:
                        *(&var_3f8:4 + (rsi_18 << 2)) = zmm4[0]
                        
                        if ((temp0_372 & 4) == 0)
                            goto label_1400a91db
                        
                        goto label_1400a92bb
                    
                label_1400a91d3:
                    
                    if ((temp0_372 & 4) != 0)
                    label_1400a92bb:
                        *(&var_3f8:8 + (rsi_18 << 2)) = zmm4[0]
                        
                        if ((temp0_372 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_18 << 2)) = zmm4[0]
                    else
                    label_1400a91db:
                        
                        if ((temp0_372 & 8) != 0)
                            *(&var_3f8:0xc + (rsi_18 << 2)) = zmm4[0]
                
                zmm3 = _mm_cmpeq_ps(zmm3, zmm1, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm3)) != 0)
                    zmm5 = *(&var_268 + rsi_18)
                    float temp0_376[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_376, 1), zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm2)) != 0)
                        char temp0_381 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_381 & 1) == 0)
                            if ((temp0_381 & 2) != 0)
                                goto label_1400a92db
                            
                            goto label_1400a9234
                        
                        *(&var_3f8 + (rsi_18 << 2)) = zmm5[0]
                        
                        if ((temp0_381 & 2) != 0)
                        label_1400a92db:
                            *(&var_3f8:4 + (rsi_18 << 2)) = zmm5[0]
                            
                            if ((temp0_381 & 4) == 0)
                                goto label_1400a923c
                            
                            goto label_1400a92e9
                        
                    label_1400a9234:
                        
                        if ((temp0_381 & 4) != 0)
                        label_1400a92e9:
                            *(&var_3f8:8 + (rsi_18 << 2)) = zmm5[0]
                            
                            if ((temp0_381 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_18 << 2)) = zmm5[0]
                        else
                        label_1400a923c:
                            
                            if ((temp0_381 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_18 << 2)) = zmm5[0]
                    
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_376, 5), zmm3)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
                        zmm3 = *(&var_188 + (rsi_18 << 2))
                        char temp0_386 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_386 & 1) == 0)
                            if ((temp0_386 & 2) != 0)
                                goto label_1400a9309
                            
                            goto label_1400a9275
                        
                        *(&var_3f8 + (rsi_18 << 2)) = zmm3.d
                        
                        if ((temp0_386 & 2) != 0)
                        label_1400a9309:
                            *(&var_3f8:4 + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(zmm3, 1)
                            
                            if ((temp0_386 & 4) == 0)
                                goto label_1400a927d
                            
                            goto label_1400a9319
                        
                    label_1400a9275:
                        
                        if ((temp0_386 & 4) != 0)
                        label_1400a9319:
                            *(&var_3f8:8 + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(zmm3, 2)
                            
                            if ((temp0_386 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_18 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm3, 3)
                        else
                        label_1400a927d:
                            
                            if ((temp0_386 & 8) != 0)
                                *(&var_3f8:0xc + (rsi_18 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm3, 3)
                
                if (rsi_18 == 8)
                    break
                
                zmm1 = *(&var_178 + (rsi_18 << 2))
                rsi_18 += 4
            
            zmm3 = var_3f8
            zmm12 = var_3e8
            uint128_t var_338_3 = _mm_sub_ps(zmm3, zmm0)
            zmm6 = *arg1
            zmm7 = *(arg1 + 4)
            float temp0_774[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm0 = _mm_sub_ps(zmm3, temp0_774)
            float temp0_776[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm1 = _mm_sub_ps(zmm12, temp0_776)
            zmm4 = *arg3
            zmm5 = *(arg3 + 4)
            float temp0_778[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, temp0_778)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm1 = _mm_div_ps(zmm1, zmm5)
            zmm9 = arg3[1].d
            zmm13 = _mm_cvttps_epi32(zmm0)
            zmm10 = _mm_cvttps_epi32(zmm1)
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), temp0_778), temp0_774)
            float temp0_788[0x4] =
                __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm9, 0x20), data_142fc9600)
            zmm1 = _mm_shuffle_ps(temp0_788, temp0_788, 0)
            uint128_t var_308_3 = zmm1
            uint128_t var_328_5 = zmm3
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm3, 1)
            zmm8 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
            zmm6 = _mm_blendv_ps(zmm8, zmm13, zmm0)
            zmm3 = zmm10
            uint32_t var_2c8_3[0x4] = zmm5
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), zmm5), temp0_776)
            float temp0_798[0x4] = _mm_shuffle_ps(temp0_788, temp0_788, 0x55)
            zmm0 = _mm_add_ps(zmm0, temp0_798)
            zmm5 = zmm0
            zmm0 = _mm_cmpeq_ps(zmm0, zmm12, 1)
            char temp0_802 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm2))
            zmm15 = arg1[1].d
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm10 = var_3d8_3
            zmm1 = _mm_sub_ps(zmm10, zmm15)
            float temp0_805[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_805))
            uint128_t var_318_3 = zmm1
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_805), zmm15)
            float temp0_811[0x4] = _mm_shuffle_ps(temp0_788, temp0_788, 0xaa)
            var_3f8 = zmm6
            zmm5 = _mm_cmpeq_ps(zmm5, zmm12, 5)
            
            if (temp0_802 != 0)
                zmm13 = zmm3
            
            float temp0_813[0x4] = __subps_xmmps_memps(zmm12, temp0_365)
            zmm1 = _mm_mul_ps(var_338_3, var_338_3)
            arg5 = _mm_add_ps(arg5, temp0_811)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm2)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm3, data_142d3f800)
            
            zmm5 = __subps_xmmps_memps(zmm10, var_298.o)
            zmm1 = _mm_add_ps(zmm1, zx.o(0))
            float temp0_821[0x4] = _mm_mul_ps(temp0_813, temp0_813)
            float temp0_822[0x4] = _mm_blendv_ps(zmm8, zmm13, zmm0)
            var_3e8 = temp0_822
            zmm0 = _mm_cmpeq_ps(arg5, zmm10, 5)
            arg5 = _mm_cmpeq_ps(arg5, zmm10, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(arg5, zmm2)) != 0)
                zmm13 = var_318_3
            
            zmm3 = _mm_add_ps(zmm1, temp0_821)
            zmm5 = _mm_mul_ps(zmm5, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
                zmm8 = __paddd_xmmdq_memdq(var_318_3, data_142d3f800)
            
            float temp0_832[0x4] = _mm_blendv_ps(zmm8, zmm13, arg5)
            arg5 = _mm_add_ps(zmm3, zmm5)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_778), temp0_774)
            zmm3 = var_2c8_3
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_822), zmm3), temp0_776)
            zmm5 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_832), temp0_805), zmm15)
            float temp0_843[0x4] = _mm_add_ps(var_308_3, zmm0)
            float temp0_844[0x4] = _mm_add_ps(temp0_798, zmm1)
            float temp0_845[0x4] = _mm_add_ps(temp0_811, zmm5)
            zmm0 = _mm_sub_ps(var_328_5, temp0_843)
            zmm1 = _mm_sub_ps(zmm12, temp0_844)
            float temp0_848[0x4] = _mm_sub_ps(zmm10, temp0_845)
            zmm0 = _mm_div_ps(zmm0, temp0_778)
            zmm1 = _mm_div_ps(zmm1, zmm3)
            float temp0_851[0x4] = _mm_div_ps(temp0_848, temp0_805)
            var_3b8 = zmm0
            uint128_t var_3a8_7 = zmm1
            int64_t rcx = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
                
                if (_mm_movemask_ps(zmm6 & zmm2) != 0)
                    char temp0_855 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_855 & 1) == 0)
                        if ((temp0_855 & 2) != 0)
                            goto label_1400aa83f
                        
                        goto label_1400aa77f
                    
                    *(&var_3f8 + (rcx << 2)) = 0
                    
                    if ((temp0_855 & 2) != 0)
                    label_1400aa83f:
                        *(&var_3f8:4 + (rcx << 2)) = 0
                        
                        if ((temp0_855 & 4) == 0)
                            goto label_1400aa787
                        
                        goto label_1400aa84f
                    
                label_1400aa77f:
                    
                    if ((temp0_855 & 4) == 0)
                    label_1400aa787:
                        
                        if ((temp0_855 & 8) != 0)
                            goto label_1400aa85f
                        
                        goto label_1400aa78f
                    
                label_1400aa84f:
                    *(&var_3f8:8 + (rcx << 2)) = 0
                    
                    if ((temp0_855 & 8) != 0)
                    label_1400aa85f:
                        *(&var_3f8:0xc + (rcx << 2)) = 0
                        
                        if ((temp0_855 & 1) == 0)
                            goto label_1400aa797
                        
                        goto label_1400aa86f
                    
                label_1400aa78f:
                    
                    if ((temp0_855 & 1) == 0)
                    label_1400aa797:
                        
                        if ((temp0_855 & 2) != 0)
                            goto label_1400aa87f
                        
                        goto label_1400aa79f
                    
                label_1400aa86f:
                    var_3b8[rcx] = 0
                    
                    if ((temp0_855 & 2) != 0)
                    label_1400aa87f:
                        var_3b8[1 + rcx] = 0
                        
                        if ((temp0_855 & 4) == 0)
                            goto label_1400aa7a7
                        
                        goto label_1400aa88f
                    
                label_1400aa79f:
                    
                    if ((temp0_855 & 4) != 0)
                    label_1400aa88f:
                        var_3b8[2 + rcx] = 0
                        
                        if ((temp0_855 & 8) != 0)
                            var_3b8[3 + rcx] = 0
                    else
                    label_1400aa7a7:
                        
                        if ((temp0_855 & 8) != 0)
                            var_3b8[3 + rcx] = 0
                
                int32_t rdx_36 = *(arg4 + rcx)
                zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_36 - 1), 0), 
                    *(&var_3f8 + (rcx << 2)))
                
                if (_mm_movemask_ps(zmm1 & zmm2) != 0)
                    char temp0_859 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_859 & 1) == 0)
                        if ((temp0_859 & 2) != 0)
                            goto label_1400aa8bb
                        
                        goto label_1400aa7ed
                    
                    *(&var_3f8 + (rcx << 2)) = rdx_36 - 2
                    
                    if ((temp0_859 & 2) != 0)
                    label_1400aa8bb:
                        *(&var_3f8:4 + (rcx << 2)) = rdx_36 - 2
                        
                        if ((temp0_859 & 4) == 0)
                            goto label_1400aa7f5
                        
                        goto label_1400aa8c7
                    
                label_1400aa7ed:
                    
                    if ((temp0_859 & 4) == 0)
                    label_1400aa7f5:
                        
                        if ((temp0_859 & 8) != 0)
                            goto label_1400aa8d3
                        
                        goto label_1400aa7fd
                    
                label_1400aa8c7:
                    *(&var_3f8:8 + (rcx << 2)) = rdx_36 - 2
                    
                    if ((temp0_859 & 8) != 0)
                    label_1400aa8d3:
                        *(&var_3f8:0xc + (rcx << 2)) = rdx_36 - 2
                        
                        if ((temp0_859 & 1) == 0)
                            goto label_1400aa805
                        
                        goto label_1400aa8df
                    
                label_1400aa7fd:
                    
                    if ((temp0_859 & 1) == 0)
                    label_1400aa805:
                        
                        if ((temp0_859 & 2) != 0)
                            goto label_1400aa8ef
                        
                        goto label_1400aa80d
                    
                label_1400aa8df:
                    var_3b8[rcx] = 0x3f800000
                    
                    if ((temp0_859 & 2) != 0)
                    label_1400aa8ef:
                        var_3b8[1 + rcx] = 0x3f800000
                        
                        if ((temp0_859 & 4) == 0)
                            goto label_1400aa815
                        
                        goto label_1400aa8ff
                    
                label_1400aa80d:
                    
                    if ((temp0_859 & 4) != 0)
                    label_1400aa8ff:
                        var_3b8[2 + rcx] = 0x3f800000
                        
                        if ((temp0_859 & 8) != 0)
                            var_3b8[3 + rcx] = 0x3f800000
                    else
                    label_1400aa815:
                        
                        if ((temp0_859 & 8) != 0)
                            var_3b8[3 + rcx] = 0x3f800000
                
                if (rcx == 8)
                    break
                
                zmm6 = *(&var_3e8 + (rcx << 2))
                rcx += 4
            
            zmm7 = _mm_shuffle_epi32(zx.o(*(arg6 + 4)), 0)
            zmm6 = var_3f8
            zmm3 = var_3e8
            zmm5 = _mm_mullo_epi32(zmm7, zmm6)
            zmm9 = _mm_add_epi32(zmm5, zmm3)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg6 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm9, zmm0)
            zmm1 = _mm_add_epi32(zmm13, temp0_832)
            float (* rax_125)[0x4] = *(arg6 + 0x10)
            zmm1 = _mm_slli_epi32(zmm1, 2) & zmm2
            int64_t rdx_40 = sx.q(zmm1.d)
            zmm4 = *(rax_125 + rdx_40)
            int64_t rbx_11 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rdi_11 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rbp_12 = sx.q(_mm_extract_epi32(zmm1, 3))
            float temp0_959[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_125 + rbx_11), 0x10), 
                    *(rax_125 + rdi_11), 0x20), 
                *(rax_125 + rbp_12), 0x30)
            zmm10 = _mm_cmpeq_epi32(temp0_851, temp0_851)
            zmm6 = _mm_mullo_epi32(_mm_sub_epi32(zmm6, zmm10), zmm7)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm3), zmm0), temp0_832), 2)
            zmm9 = _mm_mullo_epi32(_mm_add_epi32(zmm9, zmm7), zmm0)
            zmm1 &= zmm2
            zmm7 = *(rax_125 + sx.q(zmm1.d))
            int32_t temp0_969 = _mm_extract_epi32(zmm1, 1)
            int64_t rbx_13 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_971 = _mm_extract_epi32(zmm1, 3)
            float temp0_975[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_125 + sx.q(temp0_969)), 0x10), 
                        *(rax_125 + rbx_13), 0x20), 
                    *(rax_125 + sx.q(temp0_971)), 0x30), 
                temp0_959)
            zmm11 = var_3b8
            zmm8 = var_3a8_7
            float temp0_977[0x4] = _mm_add_ps(_mm_mul_ps(temp0_975, zmm11), temp0_959)
            zmm3 = _mm_sub_epi32(zmm3, zmm10)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm3), zmm0), temp0_832), 2) & zmm2
            zmm4 = *(rax_125 + sx.q(zmm5[0]))
            int64_t rcx_8 = sx.q(_mm_extract_epi32(zmm5, 1))
            int32_t temp0_984 = _mm_extract_epi32(zmm5, 2)
            int64_t rbx_15 = sx.q(_mm_extract_epi32(zmm5, 3))
            float temp0_988[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_125 + rcx_8), 0x10), 
                    *(rax_125 + sx.q(temp0_984)), 0x20), 
                *(rax_125 + rbx_15), 0x30)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm6), zmm0), temp0_832), 2) & zmm2
            zmm6 = *(rax_125 + sx.q(zmm3.d))
            int32_t temp0_993 = _mm_extract_epi32(zmm3, 1)
            int64_t rbp_20 = sx.q(_mm_extract_epi32(zmm3, 2))
            int32_t temp0_995 = _mm_extract_epi32(zmm3, 3)
            float temp0_1000[0x4] = _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm6, *(rax_125 + sx.q(temp0_993)), 0x10), 
                            *(rax_125 + rbp_20), 0x20), 
                        *(rax_125 + sx.q(temp0_995)), 0x30), 
                    temp0_988), 
                zmm11)
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r13_1 + rax_125 + rdx_40), 
                        *(r14_5 + rax_125 + rbx_11), 0x10), 
                    *(r15_4 + rax_125 + rdi_11), 0x20), 
                *(r10_2 + rax_125 + rbp_12), 0x30)
            zmm0 = _mm_add_epi32(zmm0, temp0_832)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm9)
            zmm9 = _mm_slli_epi32(_mm_add_epi32(zmm9, temp0_832), 2) & zmm2
            zmm5 = *(r13_1 + sx.q(zmm9[0]) + rax_125)
            void* rcx_19 = sx.q(_mm_extract_epi32(zmm9, 1)) + rax_125
            void* rdx_46 = sx.q(_mm_extract_epi32(zmm9, 2)) + rax_125
            void* rbp_23 = sx.q(_mm_extract_epi32(zmm9, 3)) + rax_125
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(r14_5 + rcx_19), 0x10), *(r15_4 + rdx_46), 
                    0x20), 
                *(r10_2 + rbp_23), 0x30)
            float temp0_1015[0x4] = _mm_add_ps(temp0_1000, temp0_988)
            zmm5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, zmm3), zmm11), zmm3)
            zmm13 = _mm_slli_epi32(zmm13, 2) & zmm2
            zmm3 = *(r13_1 + sx.q(zmm13[0]) + rax_125)
            void* rcx_25 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_125
            void* rdx_49 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_125
            void* rbp_26 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_125
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(r14_5 + rcx_25), 0x10), *(r15_4 + rdx_49), 
                    0x20), 
                *(r10_2 + rbp_26), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
            zmm1 = *(r13_1 + sx.q(zmm0.d) + rax_125)
            void* rcx_31 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_125
            void* rdx_52 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_125
            void* rbp_29 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_125
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(r14_5 + rcx_31), 0x10), 
                                *(r15_4 + rdx_52), 0x20), 
                            *(r10_2 + rbp_29), 0x30), 
                        zmm3), 
                    zmm11), 
                zmm3)
            float temp0_1038[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1015, temp0_977), zmm8), temp0_977)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm5), zmm8), zmm5), 
                        temp0_1038), 
                    temp0_851), 
                temp0_1038)
            zmm3 = _mm_cmpeq_ps(arg5, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg5, 7), zmm3), zmm2)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm3 = _mm_rsqrt_ps(arg5)
                zmm5 = _mm_mul_ps(_mm_mul_ps(arg5, zmm3), zmm3)
                float temp0_1055[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm3), data_142d3f640)
                zmm3 = _mm_rcp_ps(temp0_1055)
                float temp0_1057[0x4] = _mm_mul_ps(temp0_1055, zmm3)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_1057), zmm3), zmm1), 
                    zmm0)
            
            rcx_32 = arg10
            rdx_53 = arg11
            zmm8 = var_358_1
            zmm9 = var_368_1
            zmm10 = var_378_1
            zmm0 = arg9
            zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
            zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm2)
            result = _mm_movemask_ps(zmm0)
            
            if (result.b != 0)
                float temp0_1067[0x4] = _mm_mul_ps(var_188, zmm1)
                float temp0_1068[0x4] = _mm_mul_ps(var_178, zmm1)
                zmm5 = _mm_mul_ps(var_168_1, zmm1)
                result = zx.d(result.b)
                zmm4 = zmm8
                char temp3_1 = result.b & 1
                
                if (temp3_1 == 0)
                    zmm3 = zmm9
                    
                    if (temp3_1 != 0)
                        goto label_1400ab77d
                    
                    goto label_1400ab1c9
                
                zmm4 = zmm8
                zmm4[0] = zmm4[0] + temp0_1067[0]
                zmm3 = zmm9
                
                if (temp3_1 != 0)
                label_1400ab77d:
                    zmm3.d = zmm9.d f+ temp0_1068[0]
                    zmm2 = zmm10
                    
                    if (temp3_1 == 0)
                        goto label_1400ab1d3
                    
                    goto label_1400ab78b
                
            label_1400ab1c9:
                zmm2 = zmm10
                bool cond:26_1
                bool cond:27_1
                bool cond:32_1
                bool cond:33_1
                
                if (temp3_1 == 0)
                label_1400ab1d3:
                    zmm8 = _mm_add_ps(zmm8, temp0_1067)
                    char temp10_1 = result.b & 2
                    cond:26_1 = temp10_1 != 0
                    cond:27_1 = temp10_1 == 0
                    cond:32_1 = temp10_1 == 0
                    cond:33_1 = temp10_1 != 0
                    
                    if (temp10_1 != 0)
                        goto label_1400ab79f
                    
                    goto label_1400ab1df
                
            label_1400ab78b:
                zmm2 = zmm10
                zmm2[0] = zmm2[0] f+ zmm5[0]
                zmm8 = _mm_add_ps(zmm8, temp0_1067)
                char temp9_1 = result.b & 2
                cond:26_1 = temp9_1 != 0
                cond:27_1 = temp9_1 == 0
                cond:32_1 = temp9_1 == 0
                cond:33_1 = temp9_1 != 0
                
                if (temp9_1 != 0)
                label_1400ab79f:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                    zmm9 = _mm_add_ps(zmm9, temp0_1068)
                    
                    if (cond:27_1)
                        goto label_1400ab1e9
                    
                    goto label_1400ab7b0
                
            label_1400ab1df:
                zmm9 = _mm_add_ps(zmm9, temp0_1068)
                
                if (not(cond:26_1))
                label_1400ab1e9:
                    zmm10 = _mm_add_ps(zmm10, zmm5)
                    
                    if (cond:33_1)
                        goto label_1400ab7c1
                    
                    goto label_1400ab1f3
                
            label_1400ab7b0:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                zmm10 = _mm_add_ps(zmm10, zmm5)
                bool cond:42_1
                bool cond:43_1
                bool cond:48_1
                bool cond:49_1
                
                if (not(cond:32_1))
                label_1400ab7c1:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                    char temp18_1 = result.b & 4
                    cond:42_1 = temp18_1 == 0
                    cond:43_1 = temp18_1 != 0
                    cond:48_1 = temp18_1 != 0
                    cond:49_1 = temp18_1 == 0
                    
                    if (temp18_1 == 0)
                        goto label_1400ab1fb
                    
                    goto label_1400ab7d0
                
            label_1400ab1f3:
                char temp17_1 = result.b & 4
                cond:42_1 = temp17_1 == 0
                cond:43_1 = temp17_1 != 0
                cond:48_1 = temp17_1 != 0
                cond:49_1 = temp17_1 == 0
                
                if (temp17_1 != 0)
                label_1400ab7d0:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                    
                    if (not(cond:42_1))
                    label_1400ab7dd:
                        zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                        
                        if (cond:49_1)
                            goto label_1400ab207
                        
                        goto label_1400ab7ea
                else
                label_1400ab1fb:
                    
                    if (cond:43_1)
                        goto label_1400ab7dd
                
                bool cond:58_1
                bool cond:59_1
                bool cond:64_1
                bool cond:65_1
                
                if (not(cond:48_1))
                label_1400ab207:
                    char temp26_1 = result.b & 8
                    cond:58_1 = temp26_1 != 0
                    cond:59_1 = temp26_1 == 0
                    cond:64_1 = temp26_1 == 0
                    cond:65_1 = temp26_1 != 0
                    
                    if (temp26_1 == 0)
                        goto label_1400ab7f9
                    
                    goto label_1400ab20f
                
            label_1400ab7ea:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                char temp25_1 = result.b & 8
                cond:58_1 = temp25_1 != 0
                cond:59_1 = temp25_1 == 0
                cond:64_1 = temp25_1 == 0
                cond:65_1 = temp25_1 != 0
                
                if (temp25_1 == 0)
                label_1400ab7f9:
                    zmm8 = zmm4
                    
                    if (cond:59_1)
                        goto label_1400ab21c
                    
                    goto label_1400ab803
                
            label_1400ab20f:
                zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
                
                if (cond:58_1)
                label_1400ab803:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:64_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                else
                label_1400ab21c:
                    zmm9 = zmm3
                    
                    if (cond:65_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                
                var_348_1 = _mm_blendv_ps(var_348_1, _mm_add_ps(zmm1, var_348_1), zmm0)
                zmm10 = zmm2
        else
            rcx_32 = arg10
            rdx_53 = arg11
    else
        zmm0 = arg9
        uint128_t var_318_1 = _mm_shuffle_ps(zmm0, zmm0, 0)
        r10 = 0
        
        do
            int64_t rax_5 = sx.q((r10 << 2).d * 3)
            zmm0 = *(arg8 + rax_5)
            zmm2 = *(arg8 + rax_5 + 0x10)
            zmm5 = *(arg8 + rax_5 + 0x20)
            zmm3 = _mm_shuffle_epi32(zmm0, 0xe5)
            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
            zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), zmm3, 3)
            zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
            zmm1 = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
            var_3b8 = zmm4
            uint128_t var_3a8_1 = zmm3
            int128_t var_388_1
            __builtin_memset(&var_388_1, 0, 0x50)
            zmm0 = *(arg7 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3f8 = zmm0
            var_3e8 = zmm0
            uint128_t var_3d8_1 = zmm0
            uint128_t var_3c8_1 = zmm0
            zmm9 = *arg7
            zmm8 = *(arg7 + 4)
            zmm10 = *(arg7 + 8)
            float temp0_24[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_25[0x4] = _mm_mul_ps(temp0_24, zmm1)
            float temp0_26[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_27[0x4] = _mm_mul_ps(temp0_26, zmm4)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm5 = _mm_mul_ps(temp0_28, zmm3)
            float temp0_31[0x4] = _mm_sub_ps(temp0_25, _mm_mul_ps(zmm3, temp0_26))
            float temp0_33[0x4] = _mm_sub_ps(temp0_27, _mm_mul_ps(zmm1, temp0_28))
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, temp0_24))
            float temp0_36[0x4] = _mm_add_ps(temp0_31, temp0_31)
            float temp0_37[0x4] = _mm_add_ps(temp0_33, temp0_33)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            zmm3 = _mm_mul_ps(zmm0, temp0_36)
            float temp0_40[0x4] = _mm_mul_ps(zmm0, temp0_37)
            zmm3 = __addps_xmmps_memps(zmm3, var_3b8)
            float temp0_42[0x4] = __addps_xmmps_memps(temp0_40, var_3a8_1)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm5), zmm1)
            float temp0_45[0x4] = _mm_mul_ps(zmm5, temp0_24)
            float temp0_46[0x4] = _mm_mul_ps(temp0_36, temp0_26)
            zmm1 = _mm_mul_ps(temp0_37, temp0_28)
            float temp0_50[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_45, _mm_mul_ps(temp0_37, temp0_26)), zmm3)
            float temp0_53[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_46, _mm_mul_ps(zmm5, temp0_28)), temp0_42)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_36, temp0_24)), zmm0)
            zmm13 = arg7[1].d
            zmm3 = *(arg7 + 0x14)
            float temp0_58[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_50)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_53)
            zmm0 = *(arg7 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            float var_158[0x4] = temp0_58
            uint128_t var_2a8_1 = zmm3
            uint128_t var_148 = zmm3
            var_298.o = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rbx_1 = 0
            zmm0 = temp0_58
            
            while (true)
                zmm2 = *(&var_258 + rbx_1)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm3 = _mm_cmpeq_ps(zmm1, zmm0, 1)
                char temp0_65 = _mm_movemask_ps(zmm3)
                
                if (temp0_65 != 0)
                    if ((temp0_65 & 1) == 0)
                        if ((temp0_65 & 2) != 0)
                            goto label_1400a84dd
                        
                        goto label_1400a840d
                    
                    *(&var_3f8 + (rbx_1 << 2)) = zmm2[0]
                    
                    if ((temp0_65 & 2) != 0)
                    label_1400a84dd:
                        *(&var_3f8:4 + (rbx_1 << 2)) = zmm2[0]
                        
                        if ((temp0_65 & 4) == 0)
                            goto label_1400a8415
                        
                        goto label_1400a84eb
                    
                label_1400a840d:
                    
                    if ((temp0_65 & 4) != 0)
                    label_1400a84eb:
                        *(&var_3f8:8 + (rbx_1 << 2)) = zmm2[0]
                        
                        if ((temp0_65 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_1 << 2)) = zmm2[0]
                    else
                    label_1400a8415:
                        
                        if ((temp0_65 & 8) != 0)
                            *(&var_3f8:0xc + (rbx_1 << 2)) = zmm2[0]
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_268 + rbx_1)
                    float temp0_68[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_71 =
                        _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_68, 1), zmm1))
                    
                    if (temp0_71 != 0)
                        if ((temp0_71 & 1) == 0)
                            if ((temp0_71 & 2) != 0)
                                goto label_1400a850b
                            
                            goto label_1400a8462
                        
                        *(&var_3f8 + (rbx_1 << 2)) = zmm3.d
                        
                        if ((temp0_71 & 2) != 0)
                        label_1400a850b:
                            *(&var_3f8:4 + (rbx_1 << 2)) = zmm3.d
                            
                            if ((temp0_71 & 4) == 0)
                                goto label_1400a846a
                            
                            goto label_1400a8519
                        
                    label_1400a8462:
                        
                        if ((temp0_71 & 4) != 0)
                        label_1400a8519:
                            *(&var_3f8:8 + (rbx_1 << 2)) = zmm3.d
                            
                            if ((temp0_71 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_1 << 2)) = zmm3.d
                        else
                        label_1400a846a:
                            
                            if ((temp0_71 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_1 << 2)) = zmm3.d
                    
                    char temp0_74 =
                        _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_68, 5), zmm1))
                    
                    if (temp0_74 != 0)
                        zmm0 = *(&var_158 + (rbx_1 << 2))
                        
                        if ((temp0_74 & 1) == 0)
                            if ((temp0_74 & 2) != 0)
                                goto label_1400a8539
                            
                            goto label_1400a849d
                        
                        *(&var_3f8 + (rbx_1 << 2)) = zmm0.d
                        
                        if ((temp0_74 & 2) != 0)
                        label_1400a8539:
                            *(&var_3f8:4 + (rbx_1 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_74 & 4) == 0)
                                goto label_1400a84a5
                            
                            goto label_1400a8549
                        
                    label_1400a849d:
                        
                        if ((temp0_74 & 4) != 0)
                        label_1400a8549:
                            *(&var_3f8:8 + (rbx_1 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_74 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_1 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1400a84a5:
                            
                            if ((temp0_74 & 8) != 0)
                                *(&var_3f8:0xc + (rbx_1 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                
                if (rbx_1 == 8)
                    break
                
                zmm0 = *(&var_148 + (rbx_1 << 2))
                rbx_1 += 4
            
            zmm15 = var_3f8
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            arg5 = var_3e8
            zmm5 = var_3d8_1
            zmm7 = *arg1
            zmm8 = *(arg1 + 4)
            float temp0_79[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm0 = _mm_sub_ps(zmm15, temp0_79)
            float temp0_81[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_82[0x4] = _mm_sub_ps(arg5, temp0_81)
            zmm6 = arg1[1].d
            float temp0_83[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            uint32_t var_2b8_1[0x4] = zmm5
            zmm5 = _mm_sub_ps(zmm5, temp0_83)
            zmm4 = *arg3
            float temp0_85[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, temp0_85)
            zmm1 = arg3[1].d
            zmm11 = _mm_cvttps_epi32(zmm0)
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), temp0_85), temp0_79)
            float temp0_92[0x4] =
                __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm1, 0x20), data_142fc9600)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0)
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_93), zmm15, 1)
            zmm9 = _mm_add_epi32(zmm11, zmm3)
            float temp0_97[0x4] = _mm_blendv_ps(zmm9, zmm11, zmm0)
            zmm10 = *(arg3 + 4)
            float temp0_98[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_99[0x4] = _mm_div_ps(temp0_82, temp0_98)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm5 = _mm_div_ps(zmm5, zmm1)
            zmm3 = _mm_cvttps_epi32(temp0_99)
            zmm2 = _mm_cvttps_epi32(zmm5)
            zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_98)
            float temp0_107[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), zmm1)
            zmm5 = _mm_add_ps(zmm5, temp0_81)
            float temp0_109[0x4] = _mm_add_ps(temp0_107, temp0_83)
            float temp0_110[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x55)
            zmm5 = _mm_add_ps(zmm5, temp0_110)
            float temp0_112[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xaa)
            var_3f8 = temp0_97
            zmm0 = _mm_cmpeq_ps(zmm5, arg5, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm11 = zmm3
            
            float temp0_115[0x4] = _mm_add_ps(temp0_109, temp0_112)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm5, arg5, 5)) != 0)
                zmm9 = __paddd_xmmdq_memdq(zmm3, data_142d3f800)
            
            uint128_t var_328_1 = zmm15
            zmm3 = _mm_sub_ps(zmm15, temp0_58)
            uint128_t var_2c8_1 = arg5
            float temp0_120[0x4] = __subps_xmmps_memps(arg5, var_2a8_1)
            zmm5 = _mm_blendv_ps(zmm9, zmm11, zmm0)
            var_3e8 = zmm5
            zmm15 = var_2b8_1
            zmm0 = _mm_cmpeq_ps(temp0_115, zmm15, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm11 = zmm2
            
            arg5 = __subps_xmmps_memps(zmm15, var_298.o)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            float temp0_126[0x4] = _mm_mul_ps(temp0_120, temp0_120)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_115, zmm15, 5)) != 0)
                zmm9 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            float temp0_130[0x4] = _mm_blendv_ps(zmm9, zmm11, zmm0)
            zmm3 = _mm_add_ps(__addps_xmmps_memps(zmm3, data_142d8f750), temp0_126)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_97), temp0_85), temp0_79)
            float temp0_138[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm5), temp0_98), temp0_81)
            zmm5 = zmm3
            zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_130), zmm1), temp0_83)
            float temp0_142[0x4] = _mm_add_ps(temp0_93, zmm0)
            float temp0_143[0x4] = _mm_add_ps(temp0_110, temp0_138)
            float temp0_144[0x4] = _mm_add_ps(temp0_112, zmm3)
            zmm2 = zmm5
            zmm0 = _mm_sub_ps(var_328_1, temp0_142)
            zmm3 = _mm_sub_ps(var_2c8_1, temp0_143)
            zmm15 = _mm_sub_ps(zmm15, temp0_144)
            zmm0 = _mm_div_ps(zmm0, temp0_85)
            zmm3 = _mm_div_ps(zmm3, temp0_98)
            zmm15 = _mm_div_ps(zmm15, zmm1)
            var_3b8 = zmm0
            uint128_t var_3a8_2 = zmm3
            arg5 = _mm_mul_ps(arg5, arg5)
            int64_t rbx_2 = 0
            zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
            char j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_97, zmm5))
            
            if (j_1 == 0)
                goto label_1400a883c
            
            do
                if ((j_1 & 1) == 0)
                    if ((j_1 & 2) != 0)
                        goto label_1400a88cf
                    
                    goto label_1400a8808
                
                *(&var_3f8 + (rbx_2 << 2)) = 0
                
                if ((j_1 & 2) != 0)
                label_1400a88cf:
                    *(&var_3f8:4 + (rbx_2 << 2)) = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400a8810
                    
                    goto label_1400a88df
                
            label_1400a8808:
                
                if ((j_1 & 4) == 0)
                label_1400a8810:
                    
                    if ((j_1 & 8) != 0)
                        goto label_1400a88ef
                    
                    goto label_1400a8818
                
            label_1400a88df:
                *(&var_3f8:8 + (rbx_2 << 2)) = 0
                
                if ((j_1 & 8) != 0)
                label_1400a88ef:
                    *(&var_3f8:0xc + (rbx_2 << 2)) = 0
                    
                    if ((j_1 & 1) == 0)
                        goto label_1400a8820
                    
                    goto label_1400a88ff
                
            label_1400a8818:
                
                if ((j_1 & 1) == 0)
                label_1400a8820:
                    
                    if ((j_1 & 2) != 0)
                        goto label_1400a890f
                    
                    goto label_1400a8828
                
            label_1400a88ff:
                var_3b8[rbx_2] = 0
                
                if ((j_1 & 2) != 0)
                label_1400a890f:
                    var_3b8[1 + rbx_2] = 0
                    
                    if ((j_1 & 4) == 0)
                        goto label_1400a8830
                    
                    goto label_1400a891f
                
            label_1400a8828:
                
                if ((j_1 & 4) != 0)
                label_1400a891f:
                    var_3b8[2 + rbx_2] = 0
                    
                    if ((j_1 & 8) != 0)
                        var_3b8[3 + rbx_2] = 0
                else
                label_1400a8830:
                    
                    if ((j_1 & 8) != 0)
                        var_3b8[3 + rbx_2] = 0
                
            label_1400a883c:
                int32_t rdi_1 = *(arg4 + rbx_2)
                char temp0_159 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rdi_1 - 1), 0), *(&var_3f8 + (rbx_2 << 2))))
                
                if (temp0_159 != 0)
                    if ((temp0_159 & 1) == 0)
                        if ((temp0_159 & 2) != 0)
                            goto label_1400a894b
                        
                        goto label_1400a886e
                    
                    *(&var_3f8 + (rbx_2 << 2)) = rdi_1 - 2
                    
                    if ((temp0_159 & 2) != 0)
                    label_1400a894b:
                        *(&var_3f8:4 + (rbx_2 << 2)) = rdi_1 - 2
                        
                        if ((temp0_159 & 4) == 0)
                            goto label_1400a8876
                        
                        goto label_1400a8957
                    
                label_1400a886e:
                    
                    if ((temp0_159 & 4) == 0)
                    label_1400a8876:
                        
                        if ((temp0_159 & 8) != 0)
                            goto label_1400a8963
                        
                        goto label_1400a887e
                    
                label_1400a8957:
                    *(&var_3f8:8 + (rbx_2 << 2)) = rdi_1 - 2
                    
                    if ((temp0_159 & 8) != 0)
                    label_1400a8963:
                        *(&var_3f8:0xc + (rbx_2 << 2)) = rdi_1 - 2
                        
                        if ((temp0_159 & 1) == 0)
                            goto label_1400a8886
                        
                        goto label_1400a896f
                    
                label_1400a887e:
                    
                    if ((temp0_159 & 1) == 0)
                    label_1400a8886:
                        
                        if ((temp0_159 & 2) != 0)
                            goto label_1400a897f
                        
                        goto label_1400a888e
                    
                label_1400a896f:
                    var_3b8[rbx_2] = 0x3f800000
                    
                    if ((temp0_159 & 2) != 0)
                    label_1400a897f:
                        var_3b8[1 + rbx_2] = 0x3f800000
                        
                        if ((temp0_159 & 4) == 0)
                            goto label_1400a8896
                        
                        goto label_1400a898f
                    
                label_1400a888e:
                    
                    if ((temp0_159 & 4) != 0)
                    label_1400a898f:
                        var_3b8[2 + rbx_2] = 0x3f800000
                        
                        if ((temp0_159 & 8) != 0)
                            var_3b8[3 + rbx_2] = 0x3f800000
                    else
                    label_1400a8896:
                        
                        if ((temp0_159 & 8) != 0)
                            var_3b8[3 + rbx_2] = 0x3f800000
                
                if (rbx_2 == 8)
                    break
                
                zmm4 = *(&var_3e8 + (rbx_2 << 2))
                rbx_2 += 4
                j_1 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm5))
            while (j_1 != 0)
            
            float temp0_160[0x4] = _mm_add_ps(zmm2, arg5)
            zmm6 = _mm_shuffle_epi32(zx.o(*(arg6 + 4)), 0)
            zmm1 = var_3f8
            zmm4 = var_3e8
            arg5 = temp0_160
            zmm3 = _mm_mullo_epi32(zmm6, zmm1)
            zmm13 = _mm_add_epi32(zmm3, zmm4)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg6 + 8)), 0)
            zmm11 = _mm_mullo_epi32(zmm13, zmm0)
            zmm2 = _mm_add_epi32(zmm11, temp0_130)
            int32_t* rbx_3 = *(arg6 + 0x10)
            zmm2 = _mm_slli_epi32(zmm2, 2)
            int64_t rsi_1 = sx.q(zmm2[0])
            int64_t rdi_3 = sx.q(_mm_extract_epi32(zmm2, 1))
            int64_t rax_23 = sx.q(_mm_extract_epi32(zmm2, 2))
            int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_173[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rbx_3 + rsi_1), *(rbx_3 + rdi_3), 0x10), 
                    *(rbx_3 + rax_23), 0x20), 
                *(rbx_3 + rbp_3), 0x30)
            zmm12 = *(rbx_3 + rsi_1 + 4)
            zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm5), zmm6)
            zmm7 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm4), zmm0), temp0_130), 2)
            zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm6), zmm0)
            zmm6 = *(rbx_3 + sx.q(zmm7[0]))
            int32_t temp0_182 = _mm_extract_epi32(zmm7, 1)
            int64_t rdx_1 = sx.q(_mm_extract_epi32(zmm7, 2))
            int32_t temp0_184 = _mm_extract_epi32(zmm7, 3)
            float temp0_188[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm6, *(rbx_3 + sx.q(temp0_182)), 0x10), 
                        *(rbx_3 + rdx_1), 0x20), 
                    *(rbx_3 + sx.q(temp0_184)), 0x30), 
                temp0_173)
            zmm10 = var_3b8
            zmm4 = _mm_sub_epi32(zmm4, zmm5)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm4), zmm0), temp0_130), 2)
            int32_t temp0_194 = _mm_extract_epi32(zmm3, 1)
            int32_t temp0_195 = _mm_extract_epi32(zmm3, 2)
            zmm5 = *(rbx_3 + sx.q(zmm3.d))
            int32_t temp0_196 = _mm_extract_epi32(zmm3, 3)
            zmm8 = var_3a8_2
            float temp0_197[0x4] = _mm_mul_ps(temp0_188, zmm10)
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rbx_3 + sx.q(temp0_194)), 0x10), 
                    *(rbx_3 + sx.q(temp0_195)), 0x20), 
                *(rbx_3 + sx.q(temp0_196)), 0x30)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm1), zmm0), temp0_130), 2)
            zmm7 = *(rbx_3 + sx.q(zmm4[0]))
            int64_t r14_4 = sx.q(_mm_extract_epi32(zmm4, 1))
            int32_t temp0_206 = _mm_extract_epi32(zmm4, 2)
            int64_t rdx_11 = sx.q(_mm_extract_epi32(zmm4, 3))
            float temp0_210[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rbx_3 + r14_4), 0x10), 
                    *(rbx_3 + sx.q(temp0_206)), 0x20), 
                *(rbx_3 + rdx_11), 0x30)
            float temp0_211[0x4] = _mm_add_ps(temp0_197, temp0_173)
            float temp0_212[0x4] = _mm_sub_ps(temp0_210, zmm5)
            float temp0_215[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm12, *(rbx_3 + rdi_3 + 4), 0x10), 
                    *(rbx_3 + rax_23 + 4), 0x20), 
                *(rbx_3 + rbp_3 + 4), 0x30)
            float temp0_216[0x4] = _mm_mul_ps(temp0_212, zmm10)
            zmm0 = _mm_add_epi32(zmm0, temp0_130)
            zmm11 = _mm_add_epi32(zmm11, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm13)
            zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, temp0_130), 2)
            zmm2 = *(rbx_3 + sx.q(zmm13[0]) + 4)
            int64_t rax_27 = sx.q(_mm_extract_epi32(zmm13, 1))
            int32_t temp0_223 = _mm_extract_epi32(zmm13, 2)
            int64_t rsi_11 = sx.q(_mm_extract_epi32(zmm13, 3))
            float temp0_227[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rbx_3 + rax_27 + 4), 0x10), 
                    *(rbx_3 + sx.q(temp0_223) + 4), 0x20), 
                *(rbx_3 + rsi_11 + 4), 0x30)
            float temp0_228[0x4] = _mm_add_ps(temp0_216, zmm5)
            float temp0_231[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_227, temp0_215), zmm10), temp0_215)
            zmm11 = _mm_slli_epi32(zmm11, 2)
            zmm3 = *(rbx_3 + sx.q(zmm11[0]) + 4)
            int32_t temp0_233 = _mm_extract_epi32(zmm11, 1)
            int64_t rdx_15 = sx.q(_mm_extract_epi32(zmm11, 2))
            int32_t temp0_235 = _mm_extract_epi32(zmm11, 3)
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rbx_3 + sx.q(temp0_233) + 4), 0x10), 
                    *(rbx_3 + rdx_15 + 4), 0x20), 
                *(rbx_3 + sx.q(temp0_235) + 4), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int32_t temp0_240 = _mm_extract_epi32(zmm0, 1)
            zmm1 = *(rbx_3 + sx.q(zmm0.d) + 4)
            int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rsi_14 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rbx_3 + sx.q(temp0_240) + 4), 
                                    0x10), 
                                *(rbx_3 + rdx_18 + 4), 0x20), 
                            *(rbx_3 + rsi_14 + 4), 0x30), 
                        zmm3), 
                    zmm10), 
                zmm3)
            float temp0_251[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_228, temp0_211), zmm8), temp0_211)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_231), zmm8), temp0_231), 
                        temp0_251), 
                    zmm15), 
                temp0_251)
            float temp0_258[0x4] = _mm_cmpeq_ps(arg5, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(arg5, zx.o(0), 7), temp0_258)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_262[0x4] = _mm_rsqrt_ps(arg5)
                arg5 = _mm_mul_ps(_mm_mul_ps(arg5, temp0_262), temp0_262)
                zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, arg5), temp0_262), 
                    data_142d3f640)
                float temp0_268[0x4] = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, temp0_268)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_268), zmm1), zmm0)
            
            float var_358[0x4]
            zmm8 = var_358
            float var_368[0x4]
            zmm9 = var_368
            float var_378[0x4]
            zmm10 = var_378
            zmm1 = __subps_xmmps_memps(zmm1, var_318_1)
            zmm0 = __cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1)
            char temp0_276 = _mm_movemask_ps(zmm0)
            
            if (temp0_276 != 0)
                float temp0_277[0x4] = _mm_mul_ps(var_158, zmm1)
                float temp0_278[0x4] = _mm_mul_ps(var_148, zmm1)
                zmm5 = _mm_mul_ps(var_138_1, zmm1)
                zmm4 = zmm8
                char temp4_1 = temp0_276 & 1
                
                if (temp4_1 == 0)
                    zmm3 = zmm9
                    
                    if (temp4_1 != 0)
                        goto label_1400a8df2
                    
                    goto label_1400a8d80
                
                zmm4 = zmm8
                zmm4[0] = zmm4[0] + temp0_277[0]
                zmm3 = zmm9
                
                if (temp4_1 != 0)
                label_1400a8df2:
                    zmm3.d = zmm9.d f+ temp0_278[0]
                    zmm2 = zmm10
                    
                    if (temp4_1 == 0)
                        goto label_1400a8d86
                    
                    goto label_1400a8dfc
                
            label_1400a8d80:
                zmm2 = zmm10
                bool cond:20_1
                bool cond:21_1
                bool cond:28_1
                bool cond:29_1
                
                if (temp4_1 == 0)
                label_1400a8d86:
                    zmm8 = _mm_add_ps(zmm8, temp0_277)
                    char temp12_1 = temp0_276 & 2
                    cond:20_1 = temp12_1 != 0
                    cond:21_1 = temp12_1 == 0
                    cond:28_1 = temp12_1 == 0
                    cond:29_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_1400a8e0c
                    
                    goto label_1400a8d8e
                
            label_1400a8dfc:
                zmm2 = zmm10
                zmm2[0] = zmm2[0] f+ zmm5[0]
                zmm8 = _mm_add_ps(zmm8, temp0_277)
                char temp11_1 = temp0_276 & 2
                cond:20_1 = temp11_1 != 0
                cond:21_1 = temp11_1 == 0
                cond:28_1 = temp11_1 == 0
                cond:29_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                label_1400a8e0c:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                    zmm9 = _mm_add_ps(zmm9, temp0_278)
                    
                    if (cond:21_1)
                        goto label_1400a8d98
                    
                    goto label_1400a8e1d
                
            label_1400a8d8e:
                zmm9 = _mm_add_ps(zmm9, temp0_278)
                
                if (not(cond:20_1))
                label_1400a8d98:
                    zmm10 = _mm_add_ps(zmm10, zmm5)
                    
                    if (cond:29_1)
                        goto label_1400a8e2e
                    
                    goto label_1400a8da2
                
            label_1400a8e1d:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
                zmm10 = _mm_add_ps(zmm10, zmm5)
                bool cond:36_1
                bool cond:37_1
                bool cond:44_1
                bool cond:45_1
                
                if (not(cond:28_1))
                label_1400a8e2e:
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                    char temp20_1 = temp0_276 & 4
                    cond:36_1 = temp20_1 == 0
                    cond:37_1 = temp20_1 != 0
                    cond:44_1 = temp20_1 != 0
                    cond:45_1 = temp20_1 == 0
                    
                    if (temp20_1 == 0)
                        goto label_1400a8daa
                    
                    goto label_1400a8e3d
                
            label_1400a8da2:
                char temp19_1 = temp0_276 & 4
                cond:36_1 = temp19_1 == 0
                cond:37_1 = temp19_1 != 0
                cond:44_1 = temp19_1 != 0
                cond:45_1 = temp19_1 == 0
                
                if (temp19_1 != 0)
                label_1400a8e3d:
                    zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                    
                    if (not(cond:36_1))
                    label_1400a8e4a:
                        zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                        
                        if (cond:45_1)
                            goto label_1400a8db6
                        
                        goto label_1400a8e57
                else
                label_1400a8daa:
                    
                    if (cond:37_1)
                        goto label_1400a8e4a
                
                bool cond:52_1
                bool cond:53_1
                bool cond:60_1
                bool cond:61_1
                
                if (not(cond:44_1))
                label_1400a8db6:
                    char temp28_1 = temp0_276 & 8
                    cond:52_1 = temp28_1 != 0
                    cond:53_1 = temp28_1 == 0
                    cond:60_1 = temp28_1 == 0
                    cond:61_1 = temp28_1 != 0
                    
                    if (temp28_1 == 0)
                        goto label_1400a8e66
                    
                    goto label_1400a8dbe
                
            label_1400a8e57:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
                char temp27_1 = temp0_276 & 8
                cond:52_1 = temp27_1 != 0
                cond:53_1 = temp27_1 == 0
                cond:60_1 = temp27_1 == 0
                cond:61_1 = temp27_1 != 0
                
                if (temp27_1 == 0)
                label_1400a8e66:
                    zmm8 = zmm4
                    
                    if (cond:53_1)
                        goto label_1400a8dcb
                    
                    goto label_1400a8e70
                
            label_1400a8dbe:
                zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
                
                if (cond:52_1)
                label_1400a8e70:
                    zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                    
                    if (not(cond:60_1))
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                else
                label_1400a8dcb:
                    zmm9 = zmm3
                    
                    if (cond:61_1)
                        zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
                
                var_348_1 = _mm_blendv_ps(var_348_1, _mm_add_ps(zmm1, var_348_1), zmm0)
                zmm10 = zmm2
            
            r10 = zx.q(r10.d + 4)
        while (r10.d s< i_1)
        
        result = arg12
        
        if (r10.d s< result)
            goto label_1400a8eb9
        
        rcx_32 = arg10
        rdx_53 = arg11
    float temp0_1214[0x4] = _mm_hadd_ps(zmm8, zmm8)
    float temp0_1215[0x4] = _mm_hadd_ps(temp0_1214, temp0_1214)
    float temp0_1216[0x4] = _mm_hadd_ps(zmm9, zmm9)
    float temp0_1218[0x4] = _mm_insert_ps(temp0_1215, _mm_hadd_ps(temp0_1216, temp0_1216), 0x1c)
    float temp0_1219[0x4] = _mm_hadd_ps(zmm10, zmm10)
    float temp0_1220[0x4] = _mm_hadd_ps(temp0_1219, temp0_1219)
    zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_53), rdx_53[1].d, 0x20), 
        temp0_1218[0].q | temp0_1220[0].q << 0x40)
    *rdx_53 = zmm0.d
    *(rdx_53 + 4) = __extractps_memd_xmmps_immb(zmm0, 1)
    rdx_53[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
    zmm0 = _mm_hadd_ps(var_348_1, var_348_1)
    zmm0.d = _mm_hadd_ps(zmm0, zmm0).d f+ *rcx_32
    *rcx_32 = zmm0.d
return result
