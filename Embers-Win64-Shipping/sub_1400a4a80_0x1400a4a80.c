// 函数: sub_1400a4a80
// 地址: 0x1400a4a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
uint128_t zmm13
uint128_t var_78 = zmm13
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
uint128_t zmm7
uint128_t var_d8 = zmm7
uint128_t zmm6
uint128_t var_e8 = zmm6
uint128_t zmm0 =
    __mulps_xmmps_memps(__insertps_xmmps_memd_immb(zx.o(*arg3), arg3[1].d, 0x20), data_142e6d9f0)
uint32_t temp0_2 = _mm_movemask_ps(*arg12)
float temp0_4[0x4] = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
float temp0_5[0x4] = _mm_movehdup_ps(temp0_4)
float zmm3[0x4] = _mm_unpackhi_pd(temp0_4, temp0_4[0].q)
int32_t result
uint128_t var_448
uint128_t var_438
float var_408[0x4]
int64_t var_3b8
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
uint128_t zmm5

if (temp0_2 != 0xf)
    float var_318 = temp0_4[0]
    float var_314_1 = temp0_5[0]
    float var_310_1 = zmm3[0]
    zmm0 = _mm_add_ps(zmm0, __insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20))
    int32_t var_328 = zmm0.d
    int32_t var_324_1 = __extractps_memd_xmmps_immb(zmm0, 1)
    int32_t var_320_1 = __extractps_memd_xmmps_immb(zmm0, 2)
    int32_t r11_5 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
    uint64_t r14_6
    
    if (r11_5 s<= 0)
        result = 0
        r14_6 = 0
    else
        r14_6 = 0
        zmm15 = zx.o(0)
        result = 0
        
        while (true)
            bool cond:2_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:2_1))
                zmm0 = *(arg8 + sx.q((r14_6 << 2).d))
                uint128_t var_3a8_2 = zmm0
                zmm0 = __pmulld_xmmdq_memdq(zmm0, data_142fc95c0)
                int64_t rax_19 = sx.q(zmm0.d)
                int64_t rbx_10 = sx.q(_mm_extract_epi32(zmm0, 1))
                int64_t rdi_16 = sx.q(_mm_extract_epi32(zmm0, 2))
                int64_t rsi_25 = sx.q(_mm_extract_epi32(zmm0, 3))
                zmm5 = *(arg7 + (rax_19 << 2) + 4)
                float temp0_287[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg7 + (rax_19 << 2)), 
                            *(arg7 + (rbx_10 << 2)), 0x10), 
                        *(arg7 + (rdi_16 << 2)), 0x20), 
                    *(arg7 + (rsi_25 << 2)), 0x30)
                zmm5 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm5, *(arg7 + (rbx_10 << 2) + 4), 0x10), 
                        *(arg7 + (rdi_16 << 2) + 4), 0x20), 
                    *(arg7 + (rsi_25 << 2) + 4), 0x30)
                float temp0_293[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg7 + (rax_19 << 2) + 8), 
                            *(arg7 + (rbx_10 << 2) + 8), 0x10), 
                        *(arg7 + (rdi_16 << 2) + 8), 0x20), 
                    *(arg7 + (rsi_25 << 2) + 8), 0x30)
                var_408 = temp0_287
                uint128_t var_3f8_3 = zmm5
                float var_3d8_2[0x4] = zmm15
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_448 = zmm0
                var_438 = zmm0
                uint128_t var_428_3 = zmm0
                uint128_t var_418_2 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_295[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_296[0x4] = _mm_mul_ps(temp0_293, temp0_295)
                float temp0_297[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_298[0x4] = _mm_mul_ps(temp0_287, temp0_297)
                float temp0_299[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm7 = _mm_mul_ps(zmm5, temp0_299)
                float temp0_302[0x4] = _mm_sub_ps(temp0_296, _mm_mul_ps(zmm5, temp0_297))
                float temp0_304[0x4] = _mm_sub_ps(temp0_298, _mm_mul_ps(temp0_293, temp0_299))
                zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(temp0_287, temp0_295))
                float temp0_307[0x4] = _mm_add_ps(temp0_302, temp0_302)
                float temp0_308[0x4] = _mm_add_ps(temp0_304, temp0_304)
                zmm7 = _mm_add_ps(zmm7, zmm7)
                float temp0_310[0x4] = _mm_mul_ps(zmm0, temp0_307)
                zmm5 = _mm_mul_ps(zmm0, temp0_308)
                float temp0_312[0x4] = __addps_xmmps_memps(temp0_310, var_408)
                zmm5 = __addps_xmmps_memps(zmm5, var_3f8_3)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), temp0_293)
                zmm6 = _mm_mul_ps(zmm7, temp0_295)
                float temp0_317[0x4] = _mm_mul_ps(temp0_307, temp0_297)
                float temp0_318[0x4] = _mm_mul_ps(temp0_308, temp0_299)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_308, temp0_297)), temp0_312)
                float temp0_324[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_317, _mm_mul_ps(zmm7, temp0_299)), zmm5)
                float temp0_327[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_318, _mm_mul_ps(temp0_307, temp0_295)), zmm0)
                zmm2 = arg6[1].d
                zmm3 = *(arg6 + 0x14)
                float temp0_329[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
                float temp0_331[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_324)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_327)
                float var_178[0x4] = temp0_329
                float var_168[0x4] = temp0_331
                uint128_t var_338_2 = zmm0
                uint128_t var_158_1 = zmm0
                int64_t rax_20 = 0
                zmm0 = temp0_329
                
                while (true)
                    zmm2 = *(&var_318 + rax_20)
                    float temp0_334[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_336 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_334, zmm0, 1))
                    
                    if (temp0_336 != 0)
                        if ((temp0_336 & 1) == 0)
                            if ((temp0_336 & 2) != 0)
                                goto label_1400a5b6f
                            
                            goto label_1400a5a93
                        
                        *(&var_448 + (rax_20 << 2)) = zmm2[0]
                        
                        if ((temp0_336 & 2) != 0)
                        label_1400a5b6f:
                            *(&var_448:4 + (rax_20 << 2)) = zmm2[0]
                            
                            if ((temp0_336 & 4) == 0)
                                goto label_1400a5a9d
                            
                            goto label_1400a5b7f
                        
                    label_1400a5a93:
                        
                        if ((temp0_336 & 4) != 0)
                        label_1400a5b7f:
                            *(&var_448:8 + (rax_20 << 2)) = zmm2[0]
                            
                            if ((temp0_336 & 8) != 0)
                                *(&var_448:0xc + (rax_20 << 2)) = zmm2[0]
                        else
                        label_1400a5a9d:
                            
                            if ((temp0_336 & 8) != 0)
                                *(&var_448:0xc + (rax_20 << 2)) = zmm2[0]
                    
                    float temp0_337[0x4] = _mm_cmpeq_ps(temp0_334, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_337) != 0)
                        zmm3 = *(&var_328 + rax_20)
                        float temp0_339[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_342 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_339, 1), temp0_337))
                        
                        if (temp0_342 != 0)
                            if ((temp0_342 & 1) == 0)
                                if ((temp0_342 & 2) != 0)
                                    goto label_1400a5ba3
                                
                                goto label_1400a5af2
                            
                            *(&var_448 + (rax_20 << 2)) = zmm3[0]
                            
                            if ((temp0_342 & 2) != 0)
                            label_1400a5ba3:
                                *(&var_448:4 + (rax_20 << 2)) = zmm3[0]
                                
                                if ((temp0_342 & 4) == 0)
                                    goto label_1400a5afc
                                
                                goto label_1400a5bb3
                            
                        label_1400a5af2:
                            
                            if ((temp0_342 & 4) != 0)
                            label_1400a5bb3:
                                *(&var_448:8 + (rax_20 << 2)) = zmm3[0]
                                
                                if ((temp0_342 & 8) != 0)
                                    *(&var_448:0xc + (rax_20 << 2)) = zmm3[0]
                            else
                            label_1400a5afc:
                                
                                if ((temp0_342 & 8) != 0)
                                    *(&var_448:0xc + (rax_20 << 2)) = zmm3[0]
                        
                        char temp0_345 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_339, 5), temp0_337))
                        
                        if (temp0_345 != 0)
                            zmm0 = *(&var_178 + (rax_20 << 2))
                            
                            if ((temp0_345 & 1) == 0)
                                if ((temp0_345 & 2) != 0)
                                    goto label_1400a5bd7
                                
                                goto label_1400a5b37
                            
                            *(&var_448 + (rax_20 << 2)) = zmm0.d
                            
                            if ((temp0_345 & 2) != 0)
                            label_1400a5bd7:
                                *(&var_448:4 + (rax_20 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_345 & 4) == 0)
                                    goto label_1400a5b41
                                
                                goto label_1400a5be9
                            
                        label_1400a5b37:
                            
                            if ((temp0_345 & 4) != 0)
                            label_1400a5be9:
                                *(&var_448:8 + (rax_20 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((temp0_345 & 8) != 0)
                                    *(&var_448:0xc + (rax_20 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_1400a5b41:
                                
                                if ((temp0_345 & 8) != 0)
                                    *(&var_448:0xc + (rax_20 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                    
                    if (rax_20 == 8)
                        break
                    
                    zmm0 = *(&var_168 + (rax_20 << 2))
                    rax_20 += 4
                
                zmm5 = var_448
                zmm14 = var_438
                zmm1 = var_428_3
                zmm4 = *arg1
                zmm10 = *(arg1 + 4)
                float temp0_349[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm0 = _mm_sub_ps(zmm5, temp0_349)
                float temp0_351[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_352[0x4] = _mm_sub_ps(zmm14, temp0_351)
                zmm9 = arg1[1].d
                float temp0_353[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                float var_348_2[0x4] = zmm1
                float temp0_354[0x4] = _mm_sub_ps(zmm1, temp0_353)
                zmm2 = *arg3
                float temp0_355[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm0 = _mm_div_ps(zmm0, temp0_355)
                zmm7 = arg3[1].d
                zmm15 = _mm_cvttps_epi32(zmm0)
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_355), temp0_349)
                zmm13 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm7, 0x20), data_142fc9600)
                zmm4 = _mm_cmpeq_epi32(temp0_349, temp0_349)
                float temp0_364[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
                var_3b8.o = zmm5
                zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_364), zmm5, 1)
                zmm2 = _mm_add_epi32(zmm15, zmm4)
                float temp0_368[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm4 = *(arg3 + 4)
                float temp0_369[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_370[0x4] = _mm_div_ps(temp0_352, temp0_369)
                zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
                float temp0_372[0x4] = _mm_div_ps(temp0_354, zmm7)
                zmm6 = _mm_cvttps_epi32(temp0_370)
                zmm1 = _mm_cvttps_epi32(temp0_372)
                zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_369)
                float temp0_378[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm7)
                zmm5 = _mm_add_ps(zmm5, temp0_351)
                float temp0_380[0x4] = _mm_add_ps(temp0_378, temp0_353)
                float temp0_381[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                zmm5 = _mm_add_ps(zmm5, temp0_381)
                zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                var_448 = temp0_368
                zmm0 = _mm_cmpeq_ps(zmm5, zmm14, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm6
                
                float temp0_386[0x4] = _mm_add_ps(temp0_380, zmm13)
                bool cond:4_1 = _mm_movemask_ps(_mm_cmpeq_ps(zmm5, zmm14, 5)) == 0
                zmm5 = zmm14
                
                if (not(cond:4_1))
                    zmm2 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
                
                float temp0_390[0x4] = __subps_xmmps_memps(var_3b8.o, temp0_329)
                uint128_t var_3c8_4 = zmm5
                zmm6 = __subps_xmmps_memps(zmm5, temp0_331)
                float temp0_392[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                var_438 = temp0_392
                zmm0 = _mm_cmpeq_ps(temp0_386, var_348_2, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm1
                
                zmm5 = __subps_xmmps_memps(var_348_2, var_338_2)
                float temp0_396[0x4] = _mm_mul_ps(temp0_390, temp0_390)
                zmm6 = _mm_mul_ps(zmm6, zmm6)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_386, var_348_2, 5)) != 0)
                    zmm2 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
                
                float temp0_401[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm15 = zx.o(0)
                float temp0_403[0x4] = _mm_add_ps(_mm_add_ps(temp0_396, zmm15), zmm6)
                zmm6 = temp0_355
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_368), zmm6), temp0_349)
                float temp0_409[0x4] = __addps_xmmps_memps(
                    _mm_mul_ps(_mm_cvtepi32_ps(temp0_392), temp0_369), temp0_351)
                float temp0_412[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_401), zmm7), temp0_353)
                float temp0_413[0x4] = _mm_add_ps(temp0_364, zmm0)
                float temp0_414[0x4] = _mm_add_ps(temp0_381, temp0_409)
                zmm13 = _mm_add_ps(zmm13, temp0_412)
                zmm0 = _mm_sub_ps(var_3b8.o, temp0_413)
                float temp0_417[0x4] = _mm_sub_ps(var_3c8_4, temp0_414)
                float temp0_418[0x4] = _mm_sub_ps(var_348_2, zmm13)
                zmm0 = _mm_div_ps(zmm0, zmm6)
                float temp0_420[0x4] = _mm_div_ps(temp0_417, temp0_369)
                float temp0_421[0x4] = _mm_div_ps(temp0_418, zmm7)
                var_408 = zmm0
                zmm5 = _mm_mul_ps(zmm5, zmm5)
                int64_t rax_25 = 0
                zmm3 = _mm_cmpeq_epi32(temp0_414, temp0_414)
                char i = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_368, zmm3))
                
                if (i == 0)
                    goto label_1400a5fcd
                
                do
                    if ((i & 1) == 0)
                        if ((i & 2) != 0)
                            goto label_1400a5f4d
                        
                        goto label_1400a5f10
                    
                    *(&var_448 + (rax_25 << 2)) = 0
                    
                    if ((i & 2) != 0)
                    label_1400a5f4d:
                        *(&var_448:4 + (rax_25 << 2)) = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400a5f16
                        
                        goto label_1400a5f5b
                    
                label_1400a5f10:
                    
                    if ((i & 4) == 0)
                    label_1400a5f16:
                        
                        if ((i & 8) != 0)
                            goto label_1400a5f69
                        
                        goto label_1400a5f1c
                    
                label_1400a5f5b:
                    *(&var_448:8 + (rax_25 << 2)) = 0
                    
                    if ((i & 8) != 0)
                    label_1400a5f69:
                        *(&var_448:0xc + (rax_25 << 2)) = 0
                        
                        if ((i & 1) == 0)
                            goto label_1400a5f22
                        
                        goto label_1400a5f77
                    
                label_1400a5f1c:
                    
                    if ((i & 1) == 0)
                    label_1400a5f22:
                        
                        if ((i & 2) != 0)
                            goto label_1400a5f85
                        
                        goto label_1400a5f28
                    
                label_1400a5f77:
                    var_408[rax_25] = 0
                    
                    if ((i & 2) != 0)
                    label_1400a5f85:
                        var_408[1 + rax_25] = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400a5f2e
                        
                        goto label_1400a5f93
                    
                label_1400a5f28:
                    
                    if ((i & 4) != 0)
                    label_1400a5f93:
                        var_408[2 + rax_25] = 0
                        
                        if ((i & 8) != 0)
                            var_408[3 + rax_25] = 0
                    else
                    label_1400a5f2e:
                        
                        if ((i & 8) != 0)
                            var_408[3 + rax_25] = 0
                    
                label_1400a5fcd:
                    int32_t rdi_17 = *(arg4 + rax_25)
                    char temp0_430 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rdi_17 - 1), 0), *(&var_448 + (rax_25 << 2))))
                    
                    if (temp0_430 != 0)
                        if ((temp0_430 & 1) == 0)
                            if ((temp0_430 & 2) != 0)
                                goto label_1400a5e8d
                            
                            goto label_1400a6005
                        
                        *(&var_448 + (rax_25 << 2)) = rdi_17 - 2
                        
                        if ((temp0_430 & 2) != 0)
                        label_1400a5e8d:
                            *(&var_448:4 + (rax_25 << 2)) = rdi_17 - 2
                            
                            if ((temp0_430 & 4) == 0)
                                goto label_1400a600f
                            
                            goto label_1400a5e9b
                        
                    label_1400a6005:
                        
                        if ((temp0_430 & 4) == 0)
                        label_1400a600f:
                            
                            if ((temp0_430 & 8) != 0)
                                goto label_1400a5ea9
                            
                            goto label_1400a6019
                        
                    label_1400a5e9b:
                        *(&var_448:8 + (rax_25 << 2)) = rdi_17 - 2
                        
                        if ((temp0_430 & 8) != 0)
                        label_1400a5ea9:
                            *(&var_448:0xc + (rax_25 << 2)) = rdi_17 - 2
                            
                            if ((temp0_430 & 1) == 0)
                                goto label_1400a6023
                            
                            goto label_1400a5eb7
                        
                    label_1400a6019:
                        
                        if ((temp0_430 & 1) == 0)
                        label_1400a6023:
                            
                            if ((temp0_430 & 2) != 0)
                                goto label_1400a5ec9
                            
                            goto label_1400a602d
                        
                    label_1400a5eb7:
                        var_408[rax_25] = 0x3f800000
                        
                        if ((temp0_430 & 2) != 0)
                        label_1400a5ec9:
                            var_408[1 + rax_25] = 0x3f800000
                            
                            if ((temp0_430 & 4) == 0)
                                goto label_1400a6037
                            
                            goto label_1400a5edb
                        
                    label_1400a602d:
                        
                        if ((temp0_430 & 4) != 0)
                        label_1400a5edb:
                            var_408[2 + rax_25] = 0x3f800000
                            
                            if ((temp0_430 & 8) != 0)
                                var_408[3 + rax_25] = 0x3f800000
                        else
                        label_1400a6037:
                            
                            if ((temp0_430 & 8) != 0)
                                var_408[3 + rax_25] = 0x3f800000
                    
                    if (rax_25 == 8)
                        break
                    
                    zmm12 = *(&var_438 + (rax_25 << 2))
                    rax_25 += 4
                    i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
                while (i != 0)
                
                float temp0_431[0x4] = _mm_add_ps(temp0_403, zmm5)
                zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm1 = var_448
                zmm2 = var_438
                zmm4 = _mm_mullo_epi32(zmm8, zmm1)
                zmm12 = _mm_add_epi32(zmm4, zmm2)
                zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm13 = _mm_mullo_epi32(zmm12, zmm0)
                zmm5 = _mm_add_epi32(zmm13, temp0_401)
                uint128_t* rax_27 = *(arg5 + 0x10)
                zmm5 = _mm_slli_epi32(zmm5, 2)
                int64_t rbx_14 = sx.q(zmm5.d)
                int64_t r15_6 = sx.q(_mm_extract_epi32(zmm5, 1))
                int64_t rsi_36 = sx.q(_mm_extract_epi32(zmm5, 2))
                int64_t rdi_21 = sx.q(_mm_extract_epi32(zmm5, 3))
                zmm6 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_27 + rbx_14), *(rax_27 + r15_6), 0x10), 
                        *(rax_27 + rsi_36), 0x20), 
                    *(rax_27 + rdi_21), 0x30)
                zmm11 = *(rax_27 + rbx_14 + 4)
                zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm3), zmm8)
                zmm7 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm2), zmm0), temp0_401), 2)
                zmm12 = _mm_mullo_epi32(_mm_add_epi32(zmm12, zmm8), zmm0)
                zmm5 = *(rax_27 + sx.q(zmm7.d))
                int32_t temp0_453 = _mm_extract_epi32(zmm7, 1)
                int64_t rbp_5 = sx.q(_mm_extract_epi32(zmm7, 2))
                int32_t temp0_455 = _mm_extract_epi32(zmm7, 3)
                zmm5 = _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm5, *(rax_27 + sx.q(temp0_453)), 0x10), 
                            *(rax_27 + rbp_5), 0x20), 
                        *(rax_27 + sx.q(temp0_455)), 0x30), 
                    zmm6)
                zmm9 = var_408
                zmm2 = _mm_sub_epi32(zmm2, zmm3)
                zmm4 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), temp0_401), 2)
                int64_t rdx_30 = sx.q(zmm4[0])
                int32_t temp0_465 = _mm_extract_epi32(zmm4, 1)
                int32_t temp0_466 = _mm_extract_epi32(zmm4, 2)
                zmm3 = *(rax_27 + rdx_30)
                int32_t temp0_467 = _mm_extract_epi32(zmm4, 3)
                zmm5 = _mm_mul_ps(zmm5, zmm9)
                float temp0_471[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_27 + sx.q(temp0_465)), 0x10), 
                        *(rax_27 + sx.q(temp0_466)), 0x20), 
                    *(rax_27 + sx.q(temp0_467)), 0x30)
                zmm2 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm1), zmm0), temp0_401), 2)
                zmm7 = *(rax_27 + sx.q(zmm2[0]))
                int64_t rdx_36 = sx.q(_mm_extract_epi32(zmm2, 1))
                int32_t temp0_477 = _mm_extract_epi32(zmm2, 2)
                int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm2, 3))
                zmm7 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_27 + rdx_36), 0x10), 
                        *(rax_27 + sx.q(temp0_477)), 0x20), 
                    *(rax_27 + rbp_9), 0x30)
                zmm5 = _mm_add_ps(zmm5, zmm6)
                zmm7 = _mm_sub_ps(zmm7, temp0_471)
                float temp0_486[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm11, *(rax_27 + r15_6 + 4), 0x10), 
                        *(rax_27 + rsi_36 + 4), 0x20), 
                    *(rax_27 + rdi_21 + 4), 0x30)
                zmm7 = _mm_mul_ps(zmm7, zmm9)
                zmm0 = _mm_add_epi32(zmm0, temp0_401)
                zmm13 = _mm_add_epi32(zmm13, zmm0)
                zmm0 = _mm_add_epi32(zmm0, zmm12)
                zmm12 = _mm_slli_epi32(_mm_add_epi32(zmm12, temp0_401), 2)
                zmm2 = *(rax_27 + sx.q(zmm12[0]) + 4)
                int64_t rdx_40 = sx.q(_mm_extract_epi32(zmm12, 1))
                int32_t temp0_494 = _mm_extract_epi32(zmm12, 2)
                int64_t rdi_23 = sx.q(_mm_extract_epi32(zmm12, 3))
                float temp0_498[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(rax_27 + rdx_40 + 4), 0x10), 
                        *(rax_27 + sx.q(temp0_494) + 4), 0x20), 
                    *(rax_27 + rdi_23 + 4), 0x30)
                zmm7 = _mm_add_ps(zmm7, temp0_471)
                float temp0_502[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_498, temp0_486), zmm9), temp0_486)
                zmm13 = _mm_slli_epi32(zmm13, 2)
                zmm3 = *(rax_27 + sx.q(zmm13.d) + 4)
                int32_t temp0_504 = _mm_extract_epi32(zmm13, 1)
                int64_t rsi_40 = sx.q(_mm_extract_epi32(zmm13, 2))
                int32_t temp0_506 = _mm_extract_epi32(zmm13, 3)
                float temp0_509[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_27 + sx.q(temp0_504) + 4), 0x10), 
                        *(rax_27 + rsi_40 + 4), 0x20), 
                    *(rax_27 + sx.q(temp0_506) + 4), 0x30)
                zmm0 = _mm_slli_epi32(zmm0, 2)
                int32_t temp0_511 = _mm_extract_epi32(zmm0, 1)
                zmm1 = *(rax_27 + sx.q(zmm0.d) + 4)
                int64_t rsi_43 = sx.q(_mm_extract_epi32(zmm0, 2))
                int64_t rdi_26 = sx.q(_mm_extract_epi32(zmm0, 3))
                float temp0_519[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm1, 
                                        *(rax_27 + sx.q(temp0_511) + 4), 0x10), 
                                    *(rax_27 + rsi_43 + 4), 0x20), 
                                *(rax_27 + rdi_26 + 4), 0x30), 
                            temp0_509), 
                        zmm9), 
                    temp0_509)
                zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, zmm5), temp0_420), zmm5)
                zmm1 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_519, temp0_502), temp0_420), 
                                temp0_502), 
                            zmm7), 
                        temp0_421), 
                    zmm7)
                float temp0_529[0x4] = _mm_cmpeq_ps(temp0_431, zmm15, 4)
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_431, zmm15, 7), temp0_529)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    float temp0_533[0x4] = _mm_rsqrt_ps(temp0_431)
                    float temp0_535[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_431, temp0_533), temp0_533)
                    float temp0_538[0x4] = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_535), temp0_533), 
                        data_142d3f640)
                    float temp0_539[0x4] = _mm_rcp_ps(temp0_538)
                    float temp0_540[0x4] = _mm_mul_ps(temp0_538, temp0_539)
                    zmm1 = _mm_blendv_ps(zmm1, 
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_540), temp0_539), 
                            zmm1), 
                        zmm0)
                
                zmm0 = *arg10
                char i_7 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
                
                if (i_7 == 0)
                    result = 0
                    r14_6 = zx.q(r14_6.d + 4)
                    
                    if (r14_6.d s>= r11_5)
                        break
                    
                    continue
                else
                    uint64_t i_1 = zx.q(i_7)
                    result = 0
                    
                    do
                        uint64_t rdi_27
                        
                        if (i_1 == 0)
                            rdi_27 = 0x40
                            i_1 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400a6411:
                                float var_208[0x4] = zmm1
                                uint64_t rdi_28 = zx.q(rdi_27.d) & 3
                                *arg10 = var_208[rdi_28].d
                                float var_1f8[0x4] = var_3a8_2
                                *arg9 = var_1f8[rdi_28]
                        else
                            uint64_t rflags_2
                            rdi_27, rflags_2 = _bit_scan_forward(i_1)
                            i_1 &= not.q(1 << (rdi_27 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400a6411
                        result.b = 1
                    while (i_1 != 0)
            
            r14_6 = zx.q(r14_6.d + 4)
            
            if (r14_6.d s>= r11_5)
                break
    
    if (r14_6.d s< arg11)
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r14_6.d), 0), data_142e11d00)
            zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm0)
            int64_t rax_31 = sx.q(r14_6.d << 2)
            uint32_t temp0_556 = _mm_movemask_ps(zmm3)
            
            if ((zx.q(temp0_556) & 0xfffffff9) != 9)
                if ((temp0_556.b & 1) == 0)
                    if ((temp0_556.b & 2) != 0)
                        goto label_1400a8078
                    
                    goto label_1400a727c
                
                var_448.d = *(arg8 + rax_31)
                
                if ((temp0_556.b & 2) != 0)
                label_1400a8078:
                    var_448:4.d = *(arg8 + rax_31 + 4)
                    
                    if ((temp0_556.b & 4) == 0)
                        goto label_1400a7286
                    
                    goto label_1400a8092
                
            label_1400a727c:
                
                if ((temp0_556.b & 4) != 0)
                label_1400a8092:
                    var_448:8.d = *(arg8 + rax_31 + 8)
                    
                    if ((temp0_556.b & 8) != 0)
                        var_448:0xc.d = *(arg8 + rax_31 + 0xc)
                else
                label_1400a7286:
                    
                    if ((temp0_556.b & 8) != 0)
                        var_448:0xc.d = *(arg8 + rax_31 + 0xc)
                
                zmm0 = var_448
            else
                zmm0 = *(arg8 + rax_31)
            
            uint128_t var_2c8_2 = zmm0
            zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm0) & zmm3
            int64_t rax_84 = sx.q(zmm1[0])
            int64_t rdi_36 = arg7 + (rax_84 << 2)
            zmm0 = *(arg7 + (rax_84 << 2))
            int64_t rbp_39 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t r11_8 = arg7 + (rbp_39 << 2)
            int64_t rbx_33 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rdx_78 = arg7 + (rbx_33 << 2)
            int64_t rax_86 = sx.q(_mm_extract_epi32(zmm1, 3))
            int64_t rsi_48 = arg7 + (rax_86 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbp_39 << 2)), 0x10), 
                    *(arg7 + (rbx_33 << 2)), 0x20), 
                *(arg7 + (rax_86 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm3
            uint64_t r14_9 = zx.q(zmm2[0])
            zmm8 = *(r14_9 + rdi_36)
            uint64_t rax_87 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t r15_8 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* r12_2 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_863[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_87 + r11_8), 0x10), *(r15_8 + rdx_78), 
                    0x20), 
                *(r12_2 + rsi_48), 0x30)
            zmm2 = data_142fc95f0 & zmm3
            zmm6 = *(zx.q(zmm2[0]) + rdi_36)
            uint64_t rax_89 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rdi_37 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rbx_34 = zx.q(_mm_extract_epi32(zmm2, 3))
            zmm6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_89 + r11_8), 0x10), *(rdi_37 + rdx_78), 
                    0x20), 
                *(rbx_34 + rsi_48), 0x30)
            uint128_t var_2a8_2 = zmm0
            uint128_t var_288_2 = zmm6
            float var_278_2[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_448 = zmm5
            var_438 = zmm5
            float var_428_7[0x4] = zmm5
            zmm7 = *arg6
            zmm1 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_871[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_873[0x4] = _mm_mul_ps(temp0_863, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_871)
            float temp0_876[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_877[0x4] = _mm_mul_ps(temp0_871, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_876)
            float temp0_879[0x4] = _mm_mul_ps(zx.o(0), zmm5)
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_876, temp0_863))
            zmm0 = _mm_sub_ps(zmm0, zmm7)
            float temp0_883[0x4] = _mm_sub_ps(temp0_873, temp0_877)
            float temp0_884[0x4] = _mm_sub_ps(temp0_879, temp0_879)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_887[0x4] = _mm_add_ps(temp0_883, temp0_883)
            float temp0_888[0x4] = _mm_add_ps(temp0_884, temp0_884)
            var_408 = zmm6
            uint128_t var_3f8_7 = zmm0
            float var_3e8_7[0x4] = temp0_887
            float var_3d8_4[0x4] = temp0_888
            float temp0_889[0x4] = _mm_mul_ps(temp0_888, zmm5)
            float temp0_890[0x4] = _mm_mul_ps(zmm5, zmm6)
            float temp0_891[0x4] = _mm_mul_ps(zmm5, zmm0)
            float temp0_892[0x4] = _mm_mul_ps(zmm5, temp0_887)
            float temp0_893[0x4] = __addps_xmmps_memps(temp0_890, var_2a8_2)
            float temp0_894[0x4] = __addps_xmmps_memps(temp0_891, temp0_863)
            float temp0_895[0x4] = __addps_xmmps_memps(temp0_892, var_288_2)
            uint128_t var_418_4 = zmm5
            float var_1e8_2[0x4] = temp0_893
            float var_1d8_2[0x4] = temp0_894
            float var_1c8_2[0x4] = temp0_895
            float var_1b8_2[0x4] = __addps_xmmps_memps(temp0_889, var_278_2)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_898[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_899[0x4] = _mm_mul_ps(zmm0, temp0_898)
            float temp0_900[0x4] = _mm_mul_ps(temp0_898, temp0_887)
            float temp0_901[0x4] = _mm_mul_ps(temp0_887, zmm5)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm5 = _mm_mul_ps(zmm5, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            float temp0_906[0x4] = _mm_sub_ps(temp0_901, _mm_mul_ps(zmm7, zmm0))
            zmm6 = _mm_sub_ps(zmm6, temp0_900)
            float temp0_908[0x4] = _mm_sub_ps(temp0_899, zmm5)
            float temp0_909[0x4] = _mm_add_ps(temp0_906, temp0_893)
            zmm6 = _mm_add_ps(zmm6, temp0_894)
            float temp0_911[0x4] = _mm_add_ps(temp0_908, temp0_895)
            zmm0 = arg6[1].d
            zmm4 = *(arg6 + 0x14)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_909)
            float temp0_915[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
            zmm1 = *(arg6 + 0x18)
            float temp0_917[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_911)
            uint128_t var_1a8 = zmm0
            float var_198[0x4] = temp0_915
            float var_188_1[0x4] = temp0_917
            int64_t rdi_38 = 0
            zmm1 = zmm0
            
            while (true)
                zmm4 = *(&var_318 + rdi_38)
                float temp0_918[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm5 = _mm_cmpeq_ps(temp0_918, zmm1, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                    char temp0_922 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_922 & 1) == 0)
                        if ((temp0_922 & 2) != 0)
                            goto label_1400a765d
                        
                        goto label_1400a7583
                    
                    *(&var_448 + (rdi_38 << 2)) = zmm4[0]
                    
                    if ((temp0_922 & 2) != 0)
                    label_1400a765d:
                        *(&var_448:4 + (rdi_38 << 2)) = zmm4[0]
                        
                        if ((temp0_922 & 4) == 0)
                            goto label_1400a758b
                        
                        goto label_1400a766b
                    
                label_1400a7583:
                    
                    if ((temp0_922 & 4) != 0)
                    label_1400a766b:
                        *(&var_448:8 + (rdi_38 << 2)) = zmm4[0]
                        
                        if ((temp0_922 & 8) != 0)
                            *(&var_448:0xc + (rdi_38 << 2)) = zmm4[0]
                    else
                    label_1400a758b:
                        
                        if ((temp0_922 & 8) != 0)
                            *(&var_448:0xc + (rdi_38 << 2)) = zmm4[0]
                
                float temp0_923[0x4] = _mm_cmpeq_ps(temp0_918, zmm1, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm3, temp0_923)) != 0)
                    zmm5 = *(&var_328 + rdi_38)
                    float temp0_926[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_926, 1), temp0_923)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm3)) != 0)
                        char temp0_931 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_931 & 1) == 0)
                            if ((temp0_931 & 2) != 0)
                                goto label_1400a768b
                            
                            goto label_1400a75e4
                        
                        *(&var_448 + (rdi_38 << 2)) = zmm5.d
                        
                        if ((temp0_931 & 2) != 0)
                        label_1400a768b:
                            *(&var_448:4 + (rdi_38 << 2)) = zmm5.d
                            
                            if ((temp0_931 & 4) == 0)
                                goto label_1400a75ec
                            
                            goto label_1400a7699
                        
                    label_1400a75e4:
                        
                        if ((temp0_931 & 4) != 0)
                        label_1400a7699:
                            *(&var_448:8 + (rdi_38 << 2)) = zmm5.d
                            
                            if ((temp0_931 & 8) != 0)
                                *(&var_448:0xc + (rdi_38 << 2)) = zmm5.d
                        else
                        label_1400a75ec:
                            
                            if ((temp0_931 & 8) != 0)
                                *(&var_448:0xc + (rdi_38 << 2)) = zmm5.d
                    
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_926, 5), temp0_923)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm3)) != 0)
                        zmm2 = *(&var_1a8 + (rdi_38 << 2))
                        char temp0_936 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_936 & 1) == 0)
                            if ((temp0_936 & 2) != 0)
                                goto label_1400a76b9
                            
                            goto label_1400a7625
                        
                        *(&var_448 + (rdi_38 << 2)) = zmm2[0]
                        
                        if ((temp0_936 & 2) != 0)
                        label_1400a76b9:
                            *(&var_448:4 + (rdi_38 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                            
                            if ((temp0_936 & 4) == 0)
                                goto label_1400a762d
                            
                            goto label_1400a76c9
                        
                    label_1400a7625:
                        
                        if ((temp0_936 & 4) != 0)
                        label_1400a76c9:
                            *(&var_448:8 + (rdi_38 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                            
                            if ((temp0_936 & 8) != 0)
                                *(&var_448:0xc + (rdi_38 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_1400a762d:
                            
                            if ((temp0_936 & 8) != 0)
                                *(&var_448:0xc + (rdi_38 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                
                if (rdi_38 == 8)
                    break
                
                zmm1 = *(&var_198 + (rdi_38 << 2))
                rdi_38 += 4
            
            zmm2 = var_448
            zmm9 = var_438
            float temp0_940[0x4] = _mm_sub_ps(zmm2, zmm0)
            zmm5 = *arg1
            zmm6 = *(arg1 + 4)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_sub_ps(zmm2, zmm5)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_944[0x4] = _mm_sub_ps(zmm9, zmm6)
            zmm4 = *arg3
            zmm7 = *(arg3 + 4)
            float temp0_945[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, temp0_945)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_948[0x4] = _mm_div_ps(temp0_944, zmm7)
            zmm11 = arg3[1].d
            zmm12 = _mm_cvttps_epi32(zmm0)
            zmm10 = _mm_cvttps_epi32(temp0_948)
            uint128_t var_398_4 = zmm5
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_945), zmm5)
            zmm5 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
            float temp0_956[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_956), zmm2, 1)
            zmm8 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(temp0_956, temp0_956))
            zmm4 = _mm_blendv_ps(zmm8, zmm12, zmm0)
            uint128_t var_368_4 = zmm7
            uint128_t var_388_4 = zmm6
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), zmm7), zmm6)
            float temp0_965[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm0 = _mm_add_ps(zmm0, temp0_965)
            zmm7 = zmm0
            zmm0 = _mm_cmpeq_ps(zmm0, zmm9, 1)
            char temp0_969 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm3))
            zmm13 = arg1[1].d
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
            float temp0_971[0x4] = _mm_sub_ps(var_428_7, zmm13)
            float temp0_972[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_971, temp0_972))
            float temp0_977[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_972), zmm13)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            var_448 = zmm4
            zmm7 = _mm_cmpeq_ps(zmm7, zmm9, 5)
            
            if (temp0_969 != 0)
                zmm12 = zmm10
            
            float temp0_980[0x4] = __subps_xmmps_memps(zmm9, temp0_915)
            float temp0_981[0x4] = _mm_mul_ps(temp0_940, temp0_940)
            float temp0_982[0x4] = _mm_add_ps(temp0_977, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm7, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
            
            float temp0_986[0x4] = __subps_xmmps_memps(var_428_7, temp0_917)
            float temp0_987[0x4] = _mm_add_ps(temp0_981, zx.o(0))
            float temp0_988[0x4] = _mm_mul_ps(temp0_980, temp0_980)
            zmm7 = _mm_blendv_ps(zmm8, zmm12, zmm0)
            var_438 = zmm7
            zmm0 = _mm_cmpeq_ps(temp0_982, var_428_7, 5)
            float temp0_991[0x4] = _mm_cmpeq_ps(temp0_982, var_428_7, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_991, zmm3)) != 0)
                zmm12 = zmm1
            
            zmm6 = _mm_add_ps(temp0_987, temp0_988)
            float temp0_995[0x4] = _mm_mul_ps(temp0_986, temp0_986)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            float temp0_999[0x4] = _mm_blendv_ps(zmm8, zmm12, temp0_991)
            zmm15 = _mm_add_ps(zmm6, temp0_995)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_945), var_398_4)
            float temp0_1006[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), var_368_4), var_388_4)
            float temp0_1009[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_999), temp0_972), zmm13)
            zmm7 = _mm_add_ps(temp0_956, zmm0)
            float temp0_1011[0x4] = _mm_add_ps(temp0_965, temp0_1006)
            zmm5 = _mm_add_ps(zmm5, temp0_1009)
            zmm0 = _mm_sub_ps(zmm2, zmm7)
            float temp0_1014[0x4] = _mm_sub_ps(zmm9, temp0_1011)
            float temp0_1015[0x4] = _mm_sub_ps(var_428_7, zmm5)
            zmm0 = _mm_div_ps(zmm0, temp0_945)
            float temp0_1017[0x4] = _mm_div_ps(temp0_1014, var_368_4)
            float temp0_1018[0x4] = _mm_div_ps(temp0_1015, temp0_972)
            var_408 = zmm0
            int64_t rcx_2 = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm0)
                
                if (_mm_movemask_ps(zmm4 & zmm3) != 0)
                    char temp0_1022 = _mm_movemask_ps(zmm4)
                    
                    if ((temp0_1022 & 1) == 0)
                        if ((temp0_1022 & 2) != 0)
                            goto label_1400a7a7f
                        
                        goto label_1400a79bf
                    
                    *(&var_448 + (rcx_2 << 2)) = 0
                    
                    if ((temp0_1022 & 2) != 0)
                    label_1400a7a7f:
                        *(&var_448:4 + (rcx_2 << 2)) = 0
                        
                        if ((temp0_1022 & 4) == 0)
                            goto label_1400a79c7
                        
                        goto label_1400a7a8f
                    
                label_1400a79bf:
                    
                    if ((temp0_1022 & 4) == 0)
                    label_1400a79c7:
                        
                        if ((temp0_1022 & 8) != 0)
                            goto label_1400a7a9f
                        
                        goto label_1400a79cf
                    
                label_1400a7a8f:
                    *(&var_448:8 + (rcx_2 << 2)) = 0
                    
                    if ((temp0_1022 & 8) != 0)
                    label_1400a7a9f:
                        *(&var_448:0xc + (rcx_2 << 2)) = 0
                        
                        if ((temp0_1022 & 1) == 0)
                            goto label_1400a79d7
                        
                        goto label_1400a7aaf
                    
                label_1400a79cf:
                    
                    if ((temp0_1022 & 1) == 0)
                    label_1400a79d7:
                        
                        if ((temp0_1022 & 2) != 0)
                            goto label_1400a7abf
                        
                        goto label_1400a79df
                    
                label_1400a7aaf:
                    var_408[rcx_2] = 0
                    
                    if ((temp0_1022 & 2) != 0)
                    label_1400a7abf:
                        var_408[1 + rcx_2] = 0
                        
                        if ((temp0_1022 & 4) == 0)
                            goto label_1400a79e7
                        
                        goto label_1400a7acf
                    
                label_1400a79df:
                    
                    if ((temp0_1022 & 4) != 0)
                    label_1400a7acf:
                        var_408[2 + rcx_2] = 0
                        
                        if ((temp0_1022 & 8) != 0)
                            var_408[3 + rcx_2] = 0
                    else
                    label_1400a79e7:
                        
                        if ((temp0_1022 & 8) != 0)
                            var_408[3 + rcx_2] = 0
                
                int32_t rdx_79 = *(arg4 + rcx_2)
                zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_79 - 1), 0), 
                    *(&var_448 + (rcx_2 << 2)))
                
                if (_mm_movemask_ps(zmm1 & zmm3) != 0)
                    char temp0_1026 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_1026 & 1) == 0)
                        if ((temp0_1026 & 2) != 0)
                            goto label_1400a7afb
                        
                        goto label_1400a7a2d
                    
                    *(&var_448 + (rcx_2 << 2)) = rdx_79 - 2
                    
                    if ((temp0_1026 & 2) != 0)
                    label_1400a7afb:
                        *(&var_448:4 + (rcx_2 << 2)) = rdx_79 - 2
                        
                        if ((temp0_1026 & 4) == 0)
                            goto label_1400a7a35
                        
                        goto label_1400a7b07
                    
                label_1400a7a2d:
                    
                    if ((temp0_1026 & 4) == 0)
                    label_1400a7a35:
                        
                        if ((temp0_1026 & 8) != 0)
                            goto label_1400a7b13
                        
                        goto label_1400a7a3d
                    
                label_1400a7b07:
                    *(&var_448:8 + (rcx_2 << 2)) = rdx_79 - 2
                    
                    if ((temp0_1026 & 8) != 0)
                    label_1400a7b13:
                        *(&var_448:0xc + (rcx_2 << 2)) = rdx_79 - 2
                        
                        if ((temp0_1026 & 1) == 0)
                            goto label_1400a7a45
                        
                        goto label_1400a7b1f
                    
                label_1400a7a3d:
                    
                    if ((temp0_1026 & 1) == 0)
                    label_1400a7a45:
                        
                        if ((temp0_1026 & 2) != 0)
                            goto label_1400a7b2f
                        
                        goto label_1400a7a4d
                    
                label_1400a7b1f:
                    var_408[rcx_2] = 0x3f800000
                    
                    if ((temp0_1026 & 2) != 0)
                    label_1400a7b2f:
                        var_408[1 + rcx_2] = 0x3f800000
                        
                        if ((temp0_1026 & 4) == 0)
                            goto label_1400a7a55
                        
                        goto label_1400a7b3f
                    
                label_1400a7a4d:
                    
                    if ((temp0_1026 & 4) != 0)
                    label_1400a7b3f:
                        var_408[2 + rcx_2] = 0x3f800000
                        
                        if ((temp0_1026 & 8) != 0)
                            var_408[3 + rcx_2] = 0x3f800000
                    else
                    label_1400a7a55:
                        
                        if ((temp0_1026 & 8) != 0)
                            var_408[3 + rcx_2] = 0x3f800000
                
                if (rcx_2 == 8)
                    break
                
                zmm4 = *(&var_438 + (rcx_2 << 2))
                rcx_2 += 4
            
            zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_448
            zmm5 = var_438
            zmm6 = _mm_mullo_epi32(zmm7, zmm4)
            zmm8 = _mm_add_epi32(zmm6, zmm5)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm8, zmm0)
            zmm1 = _mm_add_epi32(zmm13, temp0_999)
            int32_t* rcx_3 = *(arg5 + 0x10)
            zmm1 = _mm_slli_epi32(zmm1, 2) & zmm3
            int64_t rax_108 = sx.q(zmm1[0])
            zmm2 = *(rcx_3 + rax_108)
            int64_t rdx_81 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rbx_35 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rbp_41 = sx.q(_mm_extract_epi32(zmm1, 3))
            float temp0_1039[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_3 + rdx_81), 0x10), *(rcx_3 + rbx_35), 
                    0x20), 
                *(rcx_3 + rbp_41), 0x30)
            zmm11 = _mm_cmpeq_epi32(temp0_972, temp0_972)
            zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm11), zmm7)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm5), zmm0), temp0_999), 2)
            zmm8 = _mm_mullo_epi32(_mm_add_epi32(zmm8, zmm7), zmm0)
            zmm1 &= zmm3
            zmm7 = *(rcx_3 + sx.q(zmm1[0]))
            int32_t temp0_1049 = _mm_extract_epi32(zmm1, 1)
            int64_t rbx_37 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_1051 = _mm_extract_epi32(zmm1, 3)
            zmm7 = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rcx_3 + sx.q(temp0_1049)), 0x10), 
                        *(rcx_3 + rbx_37), 0x20), 
                    *(rcx_3 + sx.q(temp0_1051)), 0x30), 
                temp0_1039)
            zmm10 = var_408
            zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm10), temp0_1039)
            zmm5 = _mm_sub_epi32(zmm5, zmm11)
            zmm6 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm5), zmm0), temp0_999), 2) & zmm3
            zmm2 = *(rcx_3 + sx.q(zmm6.d))
            int64_t rbp_50 = sx.q(_mm_extract_epi32(zmm6, 1))
            int32_t temp0_1064 = _mm_extract_epi32(zmm6, 2)
            int64_t rdi_41 = sx.q(_mm_extract_epi32(zmm6, 3))
            float temp0_1068[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_3 + rbp_50), 0x10), 
                    *(rcx_3 + sx.q(temp0_1064)), 0x20), 
                *(rcx_3 + rdi_41), 0x30)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm4), zmm0), temp0_999), 2) & zmm3
            zmm4 = *(rcx_3 + sx.q(zmm5.d))
            int32_t temp0_1073 = _mm_extract_epi32(zmm5, 1)
            int64_t rbx_41 = sx.q(_mm_extract_epi32(zmm5, 2))
            int32_t temp0_1075 = _mm_extract_epi32(zmm5, 3)
            float temp0_1080[0x4] = _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm4, *(rcx_3 + sx.q(temp0_1073)), 0x10), 
                            *(rcx_3 + rbx_41), 0x20), 
                        *(rcx_3 + sx.q(temp0_1075)), 0x30), 
                    temp0_1068), 
                zmm10)
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r14_9 + rcx_3 + rax_108), 
                        *(rax_87 + rcx_3 + rdx_81), 0x10), 
                    *(r15_8 + rcx_3 + rbx_35), 0x20), 
                *(r12_2 + rcx_3 + rbp_41), 0x30)
            zmm0 = _mm_add_epi32(zmm0, temp0_999)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, temp0_999), 2) & zmm3
            zmm6 = *(r14_9 + sx.q(zmm8[0]) + rcx_3)
            void* rax_117 = sx.q(_mm_extract_epi32(zmm8, 1)) + rcx_3
            void* rdx_85 = sx.q(_mm_extract_epi32(zmm8, 2)) + rcx_3
            void* rbp_58 = sx.q(_mm_extract_epi32(zmm8, 3)) + rcx_3
            zmm6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_87 + rax_117), 0x10), *(r15_8 + rdx_85), 
                    0x20), 
                *(r12_2 + rbp_58), 0x30)
            float temp0_1095[0x4] = _mm_add_ps(temp0_1080, temp0_1068)
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm5), zmm10), zmm5)
            zmm13 = _mm_slli_epi32(zmm13, 2) & zmm3
            zmm2 = *(r14_9 + sx.q(zmm13.d) + rcx_3)
            void* rax_123 = sx.q(_mm_extract_epi32(zmm13, 1)) + rcx_3
            void* rdx_88 = sx.q(_mm_extract_epi32(zmm13, 2)) + rcx_3
            void* rbp_61 = sx.q(_mm_extract_epi32(zmm13, 3)) + rcx_3
            float temp0_1105[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_87 + rax_123), 0x10), *(r15_8 + rdx_88), 
                    0x20), 
                *(r12_2 + rbp_61), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2) & zmm3
            zmm1 = *(r14_9 + sx.q(zmm0.d) + rcx_3)
            void* rax_129 = sx.q(_mm_extract_epi32(zmm0, 1)) + rcx_3
            void* rdx_91 = sx.q(_mm_extract_epi32(zmm0, 2)) + rcx_3
            void* rbp_64 = sx.q(_mm_extract_epi32(zmm0, 3)) + rcx_3
            float temp0_1115[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_87 + rax_129), 0x10), 
                                *(r15_8 + rdx_91), 0x20), 
                            *(r12_2 + rbp_64), 0x30), 
                        temp0_1105), 
                    zmm10), 
                temp0_1105)
            float temp0_1118[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1095, zmm7), temp0_1017), zmm7)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1115, zmm6), temp0_1017), zmm6), 
                        temp0_1118), 
                    temp0_1018), 
                temp0_1118)
            float temp0_1125[0x4] = _mm_cmpeq_ps(zmm15, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm15, 7), temp0_1125), zmm3)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_1130[0x4] = _mm_rsqrt_ps(zmm15)
                zmm5 = _mm_mul_ps(_mm_mul_ps(zmm15, temp0_1130), temp0_1130)
                float temp0_1135[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_1130), data_142d3f640)
                float temp0_1136[0x4] = _mm_rcp_ps(temp0_1135)
                float temp0_1137[0x4] = _mm_mul_ps(temp0_1135, temp0_1136)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_1137), temp0_1136), 
                        zmm1), 
                    zmm0)
            
            zmm0 = *arg10
            uint32_t i_9 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm3))
            
            if (i_9 == 0)
                return 0
            
            uint64_t i_2 = zx.q(i_9)
            result = 0
            
            do
                uint64_t rdx_92
                
                if (i_2 == 0)
                    rdx_92 = 0x40
                    i_2 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400a7f61:
                        float var_228[0x4] = zmm1
                        uint64_t rdx_93 = zx.q(rdx_92.d) & 3
                        *arg10 = var_228[rdx_93].d
                        float var_218[0x4] = var_2c8_2
                        *arg9 = var_218[rdx_93]
                else
                    uint64_t rflags_4
                    rdx_92, rflags_4 = _bit_scan_forward(i_2)
                    i_2 &= not.q(1 << (rdx_92 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400a7f61
                result.b = 1
            while (i_2 != 0)
else
    float var_2f8 = temp0_4[0]
    float var_2f4_1 = temp0_5[0]
    float var_2f0_1 = zmm3[0]
    zmm0 = _mm_add_ps(zmm0, __insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20))
    int32_t var_308 = zmm0.d
    int32_t var_304_1 = __extractps_memd_xmmps_immb(zmm0, 1)
    int32_t var_300_1 = __extractps_memd_xmmps_immb(zmm0, 2)
    int32_t r15_5 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
    uint64_t r11
    
    if (r15_5 s<= 0)
        r11 = 0
        result = 0
    else
        result = 0
        zmm15 = zx.o(0)
        r11 = 0
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                zmm0 = *(arg8 + sx.q((r11 << 2).d))
                uint128_t var_3a8_1 = zmm0
                zmm0 = __pmulld_xmmdq_memdq(zmm0, data_142fc95c0)
                int64_t rax_5 = sx.q(zmm0.d)
                int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm0, 1))
                int64_t rdi_2 = sx.q(_mm_extract_epi32(zmm0, 2))
                int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 3))
                zmm5 = *(arg7 + (rax_5 << 2) + 4)
                float temp0_17[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg7 + (rax_5 << 2)), *(arg7 + (rsi_2 << 2)), 
                            0x10), 
                        *(arg7 + (rdi_2 << 2)), 0x20), 
                    *(arg7 + (rbp_2 << 2)), 0x30)
                zmm5 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm5, *(arg7 + (rsi_2 << 2) + 4), 0x10), 
                        *(arg7 + (rdi_2 << 2) + 4), 0x20), 
                    *(arg7 + (rbp_2 << 2) + 4), 0x30)
                float temp0_23[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg7 + (rax_5 << 2) + 8), 
                            *(arg7 + (rsi_2 << 2) + 8), 0x10), 
                        *(arg7 + (rdi_2 << 2) + 8), 0x20), 
                    *(arg7 + (rbp_2 << 2) + 8), 0x30)
                var_408 = temp0_17
                uint128_t var_3f8_1 = zmm5
                float var_3d8_1[0x4] = zmm15
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_448 = zmm0
                var_438 = zmm0
                uint128_t var_428_1 = zmm0
                uint128_t var_418_1 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_25[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_26[0x4] = _mm_mul_ps(temp0_23, temp0_25)
                float temp0_27[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_28[0x4] = _mm_mul_ps(temp0_17, temp0_27)
                float temp0_29[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm7 = _mm_mul_ps(zmm5, temp0_29)
                float temp0_32[0x4] = _mm_sub_ps(temp0_26, _mm_mul_ps(zmm5, temp0_27))
                float temp0_34[0x4] = _mm_sub_ps(temp0_28, _mm_mul_ps(temp0_23, temp0_29))
                zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(temp0_17, temp0_25))
                float temp0_37[0x4] = _mm_add_ps(temp0_32, temp0_32)
                float temp0_38[0x4] = _mm_add_ps(temp0_34, temp0_34)
                zmm7 = _mm_add_ps(zmm7, zmm7)
                float temp0_40[0x4] = _mm_mul_ps(zmm0, temp0_37)
                zmm5 = _mm_mul_ps(zmm0, temp0_38)
                float temp0_42[0x4] = __addps_xmmps_memps(temp0_40, var_408)
                zmm5 = __addps_xmmps_memps(zmm5, var_3f8_1)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), temp0_23)
                zmm6 = _mm_mul_ps(zmm7, temp0_25)
                float temp0_47[0x4] = _mm_mul_ps(temp0_37, temp0_27)
                float temp0_48[0x4] = _mm_mul_ps(temp0_38, temp0_29)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_38, temp0_27)), temp0_42)
                float temp0_54[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_47, _mm_mul_ps(zmm7, temp0_29)), zmm5)
                float temp0_57[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_48, _mm_mul_ps(temp0_37, temp0_25)), zmm0)
                zmm2 = arg6[1].d
                zmm3 = *(arg6 + 0x14)
                float temp0_59[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
                float temp0_61[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_54)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_57)
                float var_118[0x4] = temp0_59
                float var_108[0x4] = temp0_61
                uint128_t var_338_1 = zmm0
                uint128_t var_f8_1 = zmm0
                int64_t rax_6 = 0
                zmm0 = temp0_59
                
                while (true)
                    zmm2 = *(&var_2f8 + rax_6)
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_66 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_64, zmm0, 1))
                    
                    if (temp0_66 != 0)
                        if ((temp0_66 & 1) == 0)
                            if ((temp0_66 & 2) != 0)
                                goto label_1400a4edf
                            
                            goto label_1400a4e03
                        
                        *(&var_448 + (rax_6 << 2)) = zmm2[0]
                        
                        if ((temp0_66 & 2) != 0)
                        label_1400a4edf:
                            *(&var_448:4 + (rax_6 << 2)) = zmm2[0]
                            
                            if ((temp0_66 & 4) == 0)
                                goto label_1400a4e0d
                            
                            goto label_1400a4eef
                        
                    label_1400a4e03:
                        
                        if ((temp0_66 & 4) != 0)
                        label_1400a4eef:
                            *(&var_448:8 + (rax_6 << 2)) = zmm2[0]
                            
                            if ((temp0_66 & 8) != 0)
                                *(&var_448:0xc + (rax_6 << 2)) = zmm2[0]
                        else
                        label_1400a4e0d:
                            
                            if ((temp0_66 & 8) != 0)
                                *(&var_448:0xc + (rax_6 << 2)) = zmm2[0]
                    
                    float temp0_67[0x4] = _mm_cmpeq_ps(temp0_64, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_67) != 0)
                        zmm3 = *(&var_308 + rax_6)
                        float temp0_69[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_72 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_69, 1), temp0_67))
                        
                        if (temp0_72 != 0)
                            if ((temp0_72 & 1) == 0)
                                if ((temp0_72 & 2) != 0)
                                    goto label_1400a4f13
                                
                                goto label_1400a4e63
                            
                            *(&var_448 + (rax_6 << 2)) = zmm3[0]
                            
                            if ((temp0_72 & 2) != 0)
                            label_1400a4f13:
                                *(&var_448:4 + (rax_6 << 2)) = zmm3[0]
                                
                                if ((temp0_72 & 4) == 0)
                                    goto label_1400a4e6d
                                
                                goto label_1400a4f23
                            
                        label_1400a4e63:
                            
                            if ((temp0_72 & 4) != 0)
                            label_1400a4f23:
                                *(&var_448:8 + (rax_6 << 2)) = zmm3[0]
                                
                                if ((temp0_72 & 8) != 0)
                                    *(&var_448:0xc + (rax_6 << 2)) = zmm3[0]
                            else
                            label_1400a4e6d:
                                
                                if ((temp0_72 & 8) != 0)
                                    *(&var_448:0xc + (rax_6 << 2)) = zmm3[0]
                        
                        char temp0_75 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_69, 5), temp0_67))
                        
                        if (temp0_75 != 0)
                            zmm0 = *(&var_118 + (rax_6 << 2))
                            
                            if ((temp0_75 & 1) == 0)
                                if ((temp0_75 & 2) != 0)
                                    goto label_1400a4f47
                                
                                goto label_1400a4ea8
                            
                            *(&var_448 + (rax_6 << 2)) = zmm0.d
                            
                            if ((temp0_75 & 2) != 0)
                            label_1400a4f47:
                                *(&var_448:4 + (rax_6 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_75 & 4) == 0)
                                    goto label_1400a4eb2
                                
                                goto label_1400a4f59
                            
                        label_1400a4ea8:
                            
                            if ((temp0_75 & 4) != 0)
                            label_1400a4f59:
                                *(&var_448:8 + (rax_6 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((temp0_75 & 8) != 0)
                                    *(&var_448:0xc + (rax_6 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_1400a4eb2:
                                
                                if ((temp0_75 & 8) != 0)
                                    *(&var_448:0xc + (rax_6 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                    
                    if (rax_6 == 8)
                        break
                    
                    zmm0 = *(&var_108 + (rax_6 << 2))
                    rax_6 += 4
                
                zmm5 = var_448
                zmm14 = var_438
                zmm1 = var_428_1
                zmm4 = *arg1
                zmm10 = *(arg1 + 4)
                float temp0_79[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm0 = _mm_sub_ps(zmm5, temp0_79)
                float temp0_81[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_82[0x4] = _mm_sub_ps(zmm14, temp0_81)
                zmm9 = arg1[1].d
                float temp0_83[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                float var_348_1[0x4] = zmm1
                float temp0_84[0x4] = _mm_sub_ps(zmm1, temp0_83)
                zmm2 = *arg3
                float temp0_85[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm0 = _mm_div_ps(zmm0, temp0_85)
                zmm7 = arg3[1].d
                zmm15 = _mm_cvttps_epi32(zmm0)
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_85), temp0_79)
                zmm13 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm7, 0x20), data_142fc9600)
                zmm4 = _mm_cmpeq_epi32(temp0_79, temp0_79)
                float temp0_94[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
                var_3b8.o = zmm5
                zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_94), zmm5, 1)
                zmm2 = _mm_add_epi32(zmm15, zmm4)
                float temp0_98[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm4 = *(arg3 + 4)
                float temp0_99[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_100[0x4] = _mm_div_ps(temp0_82, temp0_99)
                zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
                float temp0_102[0x4] = _mm_div_ps(temp0_84, zmm7)
                zmm6 = _mm_cvttps_epi32(temp0_100)
                zmm1 = _mm_cvttps_epi32(temp0_102)
                zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_99)
                float temp0_108[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm7)
                zmm5 = _mm_add_ps(zmm5, temp0_81)
                float temp0_110[0x4] = _mm_add_ps(temp0_108, temp0_83)
                float temp0_111[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                zmm5 = _mm_add_ps(zmm5, temp0_111)
                zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                var_448 = temp0_98
                zmm0 = _mm_cmpeq_ps(zmm5, zmm14, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm6
                
                float temp0_116[0x4] = _mm_add_ps(temp0_110, zmm13)
                bool cond:5_1 = _mm_movemask_ps(_mm_cmpeq_ps(zmm5, zmm14, 5)) == 0
                zmm5 = zmm14
                
                if (not(cond:5_1))
                    zmm2 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
                
                float temp0_120[0x4] = __subps_xmmps_memps(var_3b8.o, temp0_59)
                uint128_t var_3c8_2 = zmm5
                zmm6 = __subps_xmmps_memps(zmm5, temp0_61)
                float temp0_122[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                var_438 = temp0_122
                zmm0 = _mm_cmpeq_ps(temp0_116, var_348_1, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm1
                
                zmm5 = __subps_xmmps_memps(var_348_1, var_338_1)
                float temp0_126[0x4] = _mm_mul_ps(temp0_120, temp0_120)
                zmm6 = _mm_mul_ps(zmm6, zmm6)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_116, var_348_1, 5)) != 0)
                    zmm2 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
                
                float temp0_131[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm15 = zx.o(0)
                float temp0_133[0x4] = _mm_add_ps(_mm_add_ps(temp0_126, zmm15), zmm6)
                zmm6 = temp0_85
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_98), zmm6), temp0_79)
                float temp0_139[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_122), temp0_99), temp0_81)
                float temp0_142[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_131), zmm7), temp0_83)
                float temp0_143[0x4] = _mm_add_ps(temp0_94, zmm0)
                float temp0_144[0x4] = _mm_add_ps(temp0_111, temp0_139)
                zmm13 = _mm_add_ps(zmm13, temp0_142)
                zmm0 = _mm_sub_ps(var_3b8.o, temp0_143)
                float temp0_147[0x4] = _mm_sub_ps(var_3c8_2, temp0_144)
                float temp0_148[0x4] = _mm_sub_ps(var_348_1, zmm13)
                zmm0 = _mm_div_ps(zmm0, zmm6)
                float temp0_150[0x4] = _mm_div_ps(temp0_147, temp0_99)
                float temp0_151[0x4] = _mm_div_ps(temp0_148, zmm7)
                var_408 = zmm0
                zmm5 = _mm_mul_ps(zmm5, zmm5)
                int64_t rax_11 = 0
                zmm3 = _mm_cmpeq_epi32(temp0_144, temp0_144)
                char i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_98, zmm3))
                
                if (i_3 == 0)
                    goto label_1400a533d
                
                do
                    if ((i_3 & 1) == 0)
                        if ((i_3 & 2) != 0)
                            goto label_1400a52bd
                        
                        goto label_1400a5280
                    
                    *(&var_448 + (rax_11 << 2)) = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400a52bd:
                        *(&var_448:4 + (rax_11 << 2)) = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400a5286
                        
                        goto label_1400a52cb
                    
                label_1400a5280:
                    
                    if ((i_3 & 4) == 0)
                    label_1400a5286:
                        
                        if ((i_3 & 8) != 0)
                            goto label_1400a52d9
                        
                        goto label_1400a528c
                    
                label_1400a52cb:
                    *(&var_448:8 + (rax_11 << 2)) = 0
                    
                    if ((i_3 & 8) != 0)
                    label_1400a52d9:
                        *(&var_448:0xc + (rax_11 << 2)) = 0
                        
                        if ((i_3 & 1) == 0)
                            goto label_1400a5292
                        
                        goto label_1400a52e7
                    
                label_1400a528c:
                    
                    if ((i_3 & 1) == 0)
                    label_1400a5292:
                        
                        if ((i_3 & 2) != 0)
                            goto label_1400a52f5
                        
                        goto label_1400a5298
                    
                label_1400a52e7:
                    var_408[rax_11] = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400a52f5:
                        var_408[1 + rax_11] = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400a529e
                        
                        goto label_1400a5303
                    
                label_1400a5298:
                    
                    if ((i_3 & 4) != 0)
                    label_1400a5303:
                        var_408[2 + rax_11] = 0
                        
                        if ((i_3 & 8) != 0)
                            var_408[3 + rax_11] = 0
                    else
                    label_1400a529e:
                        
                        if ((i_3 & 8) != 0)
                            var_408[3 + rax_11] = 0
                    
                label_1400a533d:
                    int32_t rdi_3 = *(arg4 + rax_11)
                    char temp0_160 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rdi_3 - 1), 0), *(&var_448 + (rax_11 << 2))))
                    
                    if (temp0_160 != 0)
                        if ((temp0_160 & 1) == 0)
                            if ((temp0_160 & 2) != 0)
                                goto label_1400a51fd
                            
                            goto label_1400a5375
                        
                        *(&var_448 + (rax_11 << 2)) = rdi_3 - 2
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400a51fd:
                            *(&var_448:4 + (rax_11 << 2)) = rdi_3 - 2
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400a537f
                            
                            goto label_1400a520b
                        
                    label_1400a5375:
                        
                        if ((temp0_160 & 4) == 0)
                        label_1400a537f:
                            
                            if ((temp0_160 & 8) != 0)
                                goto label_1400a5219
                            
                            goto label_1400a5389
                        
                    label_1400a520b:
                        *(&var_448:8 + (rax_11 << 2)) = rdi_3 - 2
                        
                        if ((temp0_160 & 8) != 0)
                        label_1400a5219:
                            *(&var_448:0xc + (rax_11 << 2)) = rdi_3 - 2
                            
                            if ((temp0_160 & 1) == 0)
                                goto label_1400a5393
                            
                            goto label_1400a5227
                        
                    label_1400a5389:
                        
                        if ((temp0_160 & 1) == 0)
                        label_1400a5393:
                            
                            if ((temp0_160 & 2) != 0)
                                goto label_1400a5239
                            
                            goto label_1400a539d
                        
                    label_1400a5227:
                        var_408[rax_11] = 0x3f800000
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400a5239:
                            var_408[1 + rax_11] = 0x3f800000
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400a53a7
                            
                            goto label_1400a524b
                        
                    label_1400a539d:
                        
                        if ((temp0_160 & 4) != 0)
                        label_1400a524b:
                            var_408[2 + rax_11] = 0x3f800000
                            
                            if ((temp0_160 & 8) != 0)
                                var_408[3 + rax_11] = 0x3f800000
                        else
                        label_1400a53a7:
                            
                            if ((temp0_160 & 8) != 0)
                                var_408[3 + rax_11] = 0x3f800000
                    
                    if (rax_11 == 8)
                        break
                    
                    zmm12 = *(&var_438 + (rax_11 << 2))
                    rax_11 += 4
                    i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
                while (i_3 != 0)
                
                float temp0_161[0x4] = _mm_add_ps(temp0_133, zmm5)
                zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm1 = var_448
                zmm2 = var_438
                zmm4 = _mm_mullo_epi32(zmm8, zmm1)
                zmm12 = _mm_add_epi32(zmm4, zmm2)
                zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm13 = _mm_mullo_epi32(zmm12, zmm0)
                zmm5 = _mm_add_epi32(zmm13, temp0_131)
                uint128_t* rax_13 = *(arg5 + 0x10)
                zmm5 = _mm_slli_epi32(zmm5, 2)
                int64_t r14_1 = sx.q(zmm5.d)
                int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm5, 1))
                int64_t rsi_16 = sx.q(_mm_extract_epi32(zmm5, 2))
                int64_t rdi_7 = sx.q(_mm_extract_epi32(zmm5, 3))
                zmm6 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_13 + r14_1), *(rax_13 + rbp_3), 0x10), 
                        *(rax_13 + rsi_16), 0x20), 
                    *(rax_13 + rdi_7), 0x30)
                zmm11 = *(rax_13 + r14_1 + 4)
                zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm3), zmm8)
                zmm7 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm2), zmm0), temp0_131), 2)
                zmm12 = _mm_mullo_epi32(_mm_add_epi32(zmm12, zmm8), zmm0)
                zmm5 = *(rax_13 + sx.q(zmm7.d))
                int32_t temp0_183 = _mm_extract_epi32(zmm7, 1)
                int64_t r14_2 = sx.q(_mm_extract_epi32(zmm7, 2))
                int32_t temp0_185 = _mm_extract_epi32(zmm7, 3)
                zmm5 = _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm5, *(rax_13 + sx.q(temp0_183)), 0x10), 
                            *(rax_13 + r14_2), 0x20), 
                        *(rax_13 + sx.q(temp0_185)), 0x30), 
                    zmm6)
                zmm9 = var_408
                zmm2 = _mm_sub_epi32(zmm2, zmm3)
                zmm4 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), temp0_131), 2)
                int64_t rdx_5 = sx.q(zmm4[0])
                int32_t temp0_195 = _mm_extract_epi32(zmm4, 1)
                int32_t temp0_196 = _mm_extract_epi32(zmm4, 2)
                zmm3 = *(rax_13 + rdx_5)
                int32_t temp0_197 = _mm_extract_epi32(zmm4, 3)
                zmm5 = _mm_mul_ps(zmm5, zmm9)
                float temp0_201[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_13 + sx.q(temp0_195)), 0x10), 
                        *(rax_13 + sx.q(temp0_196)), 0x20), 
                    *(rax_13 + sx.q(temp0_197)), 0x30)
                zmm2 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm1), zmm0), temp0_131), 2)
                zmm7 = *(rax_13 + sx.q(zmm2[0]))
                int64_t r14_5 = sx.q(_mm_extract_epi32(zmm2, 1))
                int32_t temp0_207 = _mm_extract_epi32(zmm2, 2)
                int64_t rdx_12 = sx.q(_mm_extract_epi32(zmm2, 3))
                zmm7 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_13 + r14_5), 0x10), 
                        *(rax_13 + sx.q(temp0_207)), 0x20), 
                    *(rax_13 + rdx_12), 0x30)
                zmm5 = _mm_add_ps(zmm5, zmm6)
                zmm7 = _mm_sub_ps(zmm7, temp0_201)
                float temp0_216[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm11, *(rax_13 + rbp_3 + 4), 0x10), 
                        *(rax_13 + rsi_16 + 4), 0x20), 
                    *(rax_13 + rdi_7 + 4), 0x30)
                zmm7 = _mm_mul_ps(zmm7, zmm9)
                zmm0 = _mm_add_epi32(zmm0, temp0_131)
                zmm13 = _mm_add_epi32(zmm13, zmm0)
                zmm0 = _mm_add_epi32(zmm0, zmm12)
                zmm12 = _mm_slli_epi32(_mm_add_epi32(zmm12, temp0_131), 2)
                zmm2 = *(rax_13 + sx.q(zmm12[0]) + 4)
                int64_t rdx_16 = sx.q(_mm_extract_epi32(zmm12, 1))
                int32_t temp0_224 = _mm_extract_epi32(zmm12, 2)
                int64_t rdi_9 = sx.q(_mm_extract_epi32(zmm12, 3))
                float temp0_228[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(rax_13 + rdx_16 + 4), 0x10), 
                        *(rax_13 + sx.q(temp0_224) + 4), 0x20), 
                    *(rax_13 + rdi_9 + 4), 0x30)
                zmm7 = _mm_add_ps(zmm7, temp0_201)
                float temp0_232[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_228, temp0_216), zmm9), temp0_216)
                zmm13 = _mm_slli_epi32(zmm13, 2)
                zmm3 = *(rax_13 + sx.q(zmm13.d) + 4)
                int32_t temp0_234 = _mm_extract_epi32(zmm13, 1)
                int64_t rsi_20 = sx.q(_mm_extract_epi32(zmm13, 2))
                int32_t temp0_236 = _mm_extract_epi32(zmm13, 3)
                float temp0_239[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_13 + sx.q(temp0_234) + 4), 0x10), 
                        *(rax_13 + rsi_20 + 4), 0x20), 
                    *(rax_13 + sx.q(temp0_236) + 4), 0x30)
                zmm0 = _mm_slli_epi32(zmm0, 2)
                int32_t temp0_241 = _mm_extract_epi32(zmm0, 1)
                zmm1 = *(rax_13 + sx.q(zmm0.d) + 4)
                int64_t rsi_23 = sx.q(_mm_extract_epi32(zmm0, 2))
                int64_t rdi_12 = sx.q(_mm_extract_epi32(zmm0, 3))
                float temp0_249[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm1, 
                                        *(rax_13 + sx.q(temp0_241) + 4), 0x10), 
                                    *(rax_13 + rsi_23 + 4), 0x20), 
                                *(rax_13 + rdi_12 + 4), 0x30), 
                            temp0_239), 
                        zmm9), 
                    temp0_239)
                zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, zmm5), temp0_150), zmm5)
                zmm1 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_249, temp0_232), temp0_150), 
                                temp0_232), 
                            zmm7), 
                        temp0_151), 
                    zmm7)
                float temp0_259[0x4] = _mm_cmpeq_ps(temp0_161, zmm15, 4)
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_161, zmm15, 7), temp0_259)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    float temp0_263[0x4] = _mm_rsqrt_ps(temp0_161)
                    float temp0_265[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_161, temp0_263), temp0_263)
                    float temp0_268[0x4] = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_265), temp0_263), 
                        data_142d3f640)
                    float temp0_269[0x4] = _mm_rcp_ps(temp0_268)
                    float temp0_270[0x4] = _mm_mul_ps(temp0_268, temp0_269)
                    zmm1 = _mm_blendv_ps(zmm1, 
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_270), temp0_269), 
                            zmm1), 
                        zmm0)
                
                zmm0 = *arg10
                char i_6 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
                
                if (i_6 == 0)
                    result = 0
                    r11 = zx.q(r11.d + 4)
                    
                    if (r11.d s>= r15_5)
                        break
                    
                    continue
                else
                    uint64_t i_4 = zx.q(i_6)
                    result = 0
                    
                    do
                        uint64_t rdi_13
                        
                        if (i_4 == 0)
                            rdi_13 = 0x40
                            i_4 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400a5781:
                                float var_248[0x4] = zmm1
                                uint64_t rdi_14 = zx.q(rdi_13.d) & 3
                                *arg10 = var_248[rdi_14].d
                                float var_238[0x4] = var_3a8_1
                                *arg9 = var_238[rdi_14]
                        else
                            uint64_t rflags_1
                            rdi_13, rflags_1 = _bit_scan_forward(i_4)
                            i_4 &= not.q(1 << (rdi_13 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400a5781
                        result.b = 1
                    while (i_4 != 0)
            
            r11 = zx.q(r11.d + 4)
            
            if (r11.d s>= r15_5)
                break
    
    if (r11.d s< arg11)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r11.d), 0), data_142e11d00)
            zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm0)
            int64_t rax_30 = sx.q(r11.d << 2)
            uint32_t temp0_551 = _mm_movemask_ps(zmm3)
            
            if ((zx.q(temp0_551) & 0xfffffff9) != 9)
                if ((temp0_551.b & 1) == 0)
                    if ((temp0_551.b & 2) != 0)
                        goto label_1400a8027
                    
                    goto label_1400a6544
                
                var_448.d = *(arg8 + rax_30)
                
                if ((temp0_551.b & 2) != 0)
                label_1400a8027:
                    var_448:4.d = *(arg8 + rax_30 + 4)
                    
                    if ((temp0_551.b & 4) == 0)
                        goto label_1400a654e
                    
                    goto label_1400a8041
                
            label_1400a6544:
                
                if ((temp0_551.b & 4) != 0)
                label_1400a8041:
                    var_448:8.d = *(arg8 + rax_30 + 8)
                    
                    if ((temp0_551.b & 8) != 0)
                        var_448:0xc.d = *(arg8 + rax_30 + 0xc)
                else
                label_1400a654e:
                    
                    if ((temp0_551.b & 8) != 0)
                        var_448:0xc.d = *(arg8 + rax_30 + 0xc)
                
                zmm0 = var_448
            else
                zmm0 = *(arg8 + rax_30)
            
            uint128_t var_2c8_1 = zmm0
            zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm0) & zmm3
            int64_t rax_34 = sx.q(zmm1[0])
            int64_t rdi_29 = arg7 + (rax_34 << 2)
            zmm0 = *(arg7 + (rax_34 << 2))
            int64_t rbp_12 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t r11_7 = arg7 + (rbp_12 << 2)
            int64_t rbx_23 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rdx_60 = arg7 + (rbx_23 << 2)
            int64_t rax_36 = sx.q(_mm_extract_epi32(zmm1, 3))
            int64_t rsi_45 = arg7 + (rax_36 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbp_12 << 2)), 0x10), 
                    *(arg7 + (rbx_23 << 2)), 0x20), 
                *(arg7 + (rax_36 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm3
            uint64_t r14_8 = zx.q(zmm2[0])
            zmm8 = *(r14_8 + rdi_29)
            uint64_t rax_37 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t r15_7 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t r12_1 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_569[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_37 + r11_7), 0x10), *(r15_7 + rdx_60), 
                    0x20), 
                *(r12_1 + rsi_45), 0x30)
            zmm2 = data_142fc95f0 & zmm3
            zmm6 = *(zx.q(zmm2[0]) + rdi_29)
            uint64_t rax_39 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rdi_30 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rbx_24 = zx.q(_mm_extract_epi32(zmm2, 3))
            zmm6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_39 + r11_7), 0x10), *(rdi_30 + rdx_60), 
                    0x20), 
                *(rbx_24 + rsi_45), 0x30)
            uint128_t var_2a8_1 = zmm0
            uint128_t var_288_1 = zmm6
            float var_278_1[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_448 = zmm5
            var_438 = zmm5
            uint128_t var_428_5 = zmm5
            zmm7 = *arg6
            zmm1 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_577[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_579[0x4] = _mm_mul_ps(temp0_569, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_577)
            float temp0_582[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_583[0x4] = _mm_mul_ps(temp0_577, zmm0)
            zmm0 = _mm_mul_ps(zmm0, temp0_582)
            float temp0_585[0x4] = _mm_mul_ps(zx.o(0), zmm5)
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_582, temp0_569))
            zmm0 = _mm_sub_ps(zmm0, zmm7)
            float temp0_589[0x4] = _mm_sub_ps(temp0_579, temp0_583)
            float temp0_590[0x4] = _mm_sub_ps(temp0_585, temp0_585)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_593[0x4] = _mm_add_ps(temp0_589, temp0_589)
            float temp0_594[0x4] = _mm_add_ps(temp0_590, temp0_590)
            var_408 = zmm6
            uint128_t var_3f8_5 = zmm0
            float var_3e8_5[0x4] = temp0_593
            float var_3d8_3[0x4] = temp0_594
            float temp0_595[0x4] = _mm_mul_ps(temp0_594, zmm5)
            float temp0_596[0x4] = _mm_mul_ps(zmm5, zmm6)
            float temp0_597[0x4] = _mm_mul_ps(zmm5, zmm0)
            float temp0_598[0x4] = _mm_mul_ps(zmm5, temp0_593)
            float temp0_599[0x4] = __addps_xmmps_memps(temp0_596, var_2a8_1)
            float temp0_600[0x4] = __addps_xmmps_memps(temp0_597, temp0_569)
            float temp0_601[0x4] = __addps_xmmps_memps(temp0_598, var_288_1)
            uint128_t var_418_3 = zmm5
            float var_1e8_1[0x4] = temp0_599
            float var_1d8_1[0x4] = temp0_600
            float var_1c8_1[0x4] = temp0_601
            float var_1b8_1[0x4] = __addps_xmmps_memps(temp0_595, var_278_1)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_604[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_605[0x4] = _mm_mul_ps(zmm0, temp0_604)
            float temp0_606[0x4] = _mm_mul_ps(temp0_604, temp0_593)
            float temp0_607[0x4] = _mm_mul_ps(temp0_593, zmm5)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm5 = _mm_mul_ps(zmm5, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            float temp0_612[0x4] = _mm_sub_ps(temp0_607, _mm_mul_ps(zmm7, zmm0))
            zmm6 = _mm_sub_ps(zmm6, temp0_606)
            float temp0_614[0x4] = _mm_sub_ps(temp0_605, zmm5)
            float temp0_615[0x4] = _mm_add_ps(temp0_612, temp0_599)
            zmm6 = _mm_add_ps(zmm6, temp0_600)
            float temp0_617[0x4] = _mm_add_ps(temp0_614, temp0_601)
            zmm0 = arg6[1].d
            zmm4 = *(arg6 + 0x14)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_615)
            float temp0_621[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
            zmm1 = *(arg6 + 0x18)
            float temp0_623[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_617)
            uint128_t var_148 = zmm0
            float var_138[0x4] = temp0_621
            float var_128_1[0x4] = temp0_623
            int64_t rdi_31 = 0
            zmm1 = zmm0
            
            while (true)
                zmm4 = *(&var_2f8 + rdi_31)
                float temp0_624[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm5 = _mm_cmpeq_ps(temp0_624, zmm1, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                    char temp0_628 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_628 & 1) == 0)
                        if ((temp0_628 & 2) != 0)
                            goto label_1400a692d
                        
                        goto label_1400a6853
                    
                    *(&var_448 + (rdi_31 << 2)) = zmm4[0]
                    
                    if ((temp0_628 & 2) != 0)
                    label_1400a692d:
                        *(&var_448:4 + (rdi_31 << 2)) = zmm4[0]
                        
                        if ((temp0_628 & 4) == 0)
                            goto label_1400a685b
                        
                        goto label_1400a693b
                    
                label_1400a6853:
                    
                    if ((temp0_628 & 4) != 0)
                    label_1400a693b:
                        *(&var_448:8 + (rdi_31 << 2)) = zmm4[0]
                        
                        if ((temp0_628 & 8) != 0)
                            *(&var_448:0xc + (rdi_31 << 2)) = zmm4[0]
                    else
                    label_1400a685b:
                        
                        if ((temp0_628 & 8) != 0)
                            *(&var_448:0xc + (rdi_31 << 2)) = zmm4[0]
                
                float temp0_629[0x4] = _mm_cmpeq_ps(temp0_624, zmm1, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm3, temp0_629)) != 0)
                    zmm5 = *(&var_308 + rdi_31)
                    float temp0_632[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_632, 1), temp0_629)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm3)) != 0)
                        char temp0_637 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_637 & 1) == 0)
                            if ((temp0_637 & 2) != 0)
                                goto label_1400a695b
                            
                            goto label_1400a68b4
                        
                        *(&var_448 + (rdi_31 << 2)) = zmm5.d
                        
                        if ((temp0_637 & 2) != 0)
                        label_1400a695b:
                            *(&var_448:4 + (rdi_31 << 2)) = zmm5.d
                            
                            if ((temp0_637 & 4) == 0)
                                goto label_1400a68bc
                            
                            goto label_1400a6969
                        
                    label_1400a68b4:
                        
                        if ((temp0_637 & 4) != 0)
                        label_1400a6969:
                            *(&var_448:8 + (rdi_31 << 2)) = zmm5.d
                            
                            if ((temp0_637 & 8) != 0)
                                *(&var_448:0xc + (rdi_31 << 2)) = zmm5.d
                        else
                        label_1400a68bc:
                            
                            if ((temp0_637 & 8) != 0)
                                *(&var_448:0xc + (rdi_31 << 2)) = zmm5.d
                    
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_632, 5), temp0_629)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm3)) != 0)
                        zmm2 = *(&var_148 + (rdi_31 << 2))
                        char temp0_642 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_642 & 1) == 0)
                            if ((temp0_642 & 2) != 0)
                                goto label_1400a6989
                            
                            goto label_1400a68f5
                        
                        *(&var_448 + (rdi_31 << 2)) = zmm2[0]
                        
                        if ((temp0_642 & 2) != 0)
                        label_1400a6989:
                            *(&var_448:4 + (rdi_31 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                            
                            if ((temp0_642 & 4) == 0)
                                goto label_1400a68fd
                            
                            goto label_1400a6999
                        
                    label_1400a68f5:
                        
                        if ((temp0_642 & 4) != 0)
                        label_1400a6999:
                            *(&var_448:8 + (rdi_31 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                            
                            if ((temp0_642 & 8) != 0)
                                *(&var_448:0xc + (rdi_31 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_1400a68fd:
                            
                            if ((temp0_642 & 8) != 0)
                                *(&var_448:0xc + (rdi_31 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                
                if (rdi_31 == 8)
                    break
                
                zmm1 = *(&var_138 + (rdi_31 << 2))
                rdi_31 += 4
            
            zmm2 = var_448
            zmm9 = var_438
            float temp0_646[0x4] = _mm_sub_ps(zmm2, zmm0)
            zmm5 = *arg1
            zmm6 = *(arg1 + 4)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_sub_ps(zmm2, zmm5)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_650[0x4] = _mm_sub_ps(zmm9, zmm6)
            zmm4 = *arg3
            zmm7 = *(arg3 + 4)
            float temp0_651[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, temp0_651)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_654[0x4] = _mm_div_ps(temp0_650, zmm7)
            zmm11 = arg3[1].d
            zmm12 = _mm_cvttps_epi32(zmm0)
            zmm10 = _mm_cvttps_epi32(temp0_654)
            uint128_t var_398_3 = zmm5
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_651), zmm5)
            zmm5 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
            float temp0_662[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_662), zmm2, 1)
            zmm8 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(temp0_662, temp0_662))
            zmm4 = _mm_blendv_ps(zmm8, zmm12, zmm0)
            uint128_t var_368_3 = zmm7
            uint128_t var_388_3 = zmm6
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), zmm7), zmm6)
            float temp0_671[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm0 = _mm_add_ps(zmm0, temp0_671)
            zmm7 = zmm0
            zmm0 = _mm_cmpeq_ps(zmm0, zmm9, 1)
            char temp0_675 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm3))
            zmm13 = arg1[1].d
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm14 = var_428_5
            float temp0_677[0x4] = _mm_sub_ps(zmm14, zmm13)
            float temp0_678[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_677, temp0_678))
            float temp0_683[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_678), zmm13)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            var_448 = zmm4
            zmm7 = _mm_cmpeq_ps(zmm7, zmm9, 5)
            
            if (temp0_675 != 0)
                zmm12 = zmm10
            
            float temp0_686[0x4] = __subps_xmmps_memps(zmm9, temp0_621)
            float temp0_687[0x4] = _mm_mul_ps(temp0_646, temp0_646)
            float temp0_688[0x4] = _mm_add_ps(temp0_683, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm7, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
            
            float temp0_692[0x4] = __subps_xmmps_memps(zmm14, temp0_623)
            float temp0_693[0x4] = _mm_add_ps(temp0_687, zx.o(0))
            float temp0_694[0x4] = _mm_mul_ps(temp0_686, temp0_686)
            zmm7 = _mm_blendv_ps(zmm8, zmm12, zmm0)
            var_438 = zmm7
            zmm0 = _mm_cmpeq_ps(temp0_688, zmm14, 5)
            float temp0_697[0x4] = _mm_cmpeq_ps(temp0_688, zmm14, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_697, zmm3)) != 0)
                zmm12 = zmm1
            
            zmm6 = _mm_add_ps(temp0_693, temp0_694)
            float temp0_701[0x4] = _mm_mul_ps(temp0_692, temp0_692)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            float temp0_705[0x4] = _mm_blendv_ps(zmm8, zmm12, temp0_697)
            zmm15 = _mm_add_ps(zmm6, temp0_701)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_651), var_398_3)
            float temp0_712[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), var_368_3), var_388_3)
            float temp0_715[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_705), temp0_678), zmm13)
            zmm7 = _mm_add_ps(temp0_662, zmm0)
            float temp0_717[0x4] = _mm_add_ps(temp0_671, temp0_712)
            zmm5 = _mm_add_ps(zmm5, temp0_715)
            zmm0 = _mm_sub_ps(zmm2, zmm7)
            float temp0_720[0x4] = _mm_sub_ps(zmm9, temp0_717)
            float temp0_721[0x4] = _mm_sub_ps(zmm14, zmm5)
            zmm0 = _mm_div_ps(zmm0, temp0_651)
            float temp0_723[0x4] = _mm_div_ps(temp0_720, var_368_3)
            float temp0_724[0x4] = _mm_div_ps(temp0_721, temp0_678)
            var_408 = zmm0
            int64_t rcx = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm0)
                
                if (_mm_movemask_ps(zmm4 & zmm3) != 0)
                    char temp0_728 = _mm_movemask_ps(zmm4)
                    
                    if ((temp0_728 & 1) == 0)
                        if ((temp0_728 & 2) != 0)
                            goto label_1400a6d4f
                        
                        goto label_1400a6c8f
                    
                    *(&var_448 + (rcx << 2)) = 0
                    
                    if ((temp0_728 & 2) != 0)
                    label_1400a6d4f:
                        *(&var_448:4 + (rcx << 2)) = 0
                        
                        if ((temp0_728 & 4) == 0)
                            goto label_1400a6c97
                        
                        goto label_1400a6d5f
                    
                label_1400a6c8f:
                    
                    if ((temp0_728 & 4) == 0)
                    label_1400a6c97:
                        
                        if ((temp0_728 & 8) != 0)
                            goto label_1400a6d6f
                        
                        goto label_1400a6c9f
                    
                label_1400a6d5f:
                    *(&var_448:8 + (rcx << 2)) = 0
                    
                    if ((temp0_728 & 8) != 0)
                    label_1400a6d6f:
                        *(&var_448:0xc + (rcx << 2)) = 0
                        
                        if ((temp0_728 & 1) == 0)
                            goto label_1400a6ca7
                        
                        goto label_1400a6d7f
                    
                label_1400a6c9f:
                    
                    if ((temp0_728 & 1) == 0)
                    label_1400a6ca7:
                        
                        if ((temp0_728 & 2) != 0)
                            goto label_1400a6d8f
                        
                        goto label_1400a6caf
                    
                label_1400a6d7f:
                    var_408[rcx] = 0
                    
                    if ((temp0_728 & 2) != 0)
                    label_1400a6d8f:
                        var_408[1 + rcx] = 0
                        
                        if ((temp0_728 & 4) == 0)
                            goto label_1400a6cb7
                        
                        goto label_1400a6d9f
                    
                label_1400a6caf:
                    
                    if ((temp0_728 & 4) != 0)
                    label_1400a6d9f:
                        var_408[2 + rcx] = 0
                        
                        if ((temp0_728 & 8) != 0)
                            var_408[3 + rcx] = 0
                    else
                    label_1400a6cb7:
                        
                        if ((temp0_728 & 8) != 0)
                            var_408[3 + rcx] = 0
                
                int32_t rdx_61 = *(arg4 + rcx)
                zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_61 - 1), 0), 
                    *(&var_448 + (rcx << 2)))
                
                if (_mm_movemask_ps(zmm1 & zmm3) != 0)
                    char temp0_732 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_732 & 1) == 0)
                        if ((temp0_732 & 2) != 0)
                            goto label_1400a6dcb
                        
                        goto label_1400a6cfd
                    
                    *(&var_448 + (rcx << 2)) = rdx_61 - 2
                    
                    if ((temp0_732 & 2) != 0)
                    label_1400a6dcb:
                        *(&var_448:4 + (rcx << 2)) = rdx_61 - 2
                        
                        if ((temp0_732 & 4) == 0)
                            goto label_1400a6d05
                        
                        goto label_1400a6dd7
                    
                label_1400a6cfd:
                    
                    if ((temp0_732 & 4) == 0)
                    label_1400a6d05:
                        
                        if ((temp0_732 & 8) != 0)
                            goto label_1400a6de3
                        
                        goto label_1400a6d0d
                    
                label_1400a6dd7:
                    *(&var_448:8 + (rcx << 2)) = rdx_61 - 2
                    
                    if ((temp0_732 & 8) != 0)
                    label_1400a6de3:
                        *(&var_448:0xc + (rcx << 2)) = rdx_61 - 2
                        
                        if ((temp0_732 & 1) == 0)
                            goto label_1400a6d15
                        
                        goto label_1400a6def
                    
                label_1400a6d0d:
                    
                    if ((temp0_732 & 1) == 0)
                    label_1400a6d15:
                        
                        if ((temp0_732 & 2) != 0)
                            goto label_1400a6dff
                        
                        goto label_1400a6d1d
                    
                label_1400a6def:
                    var_408[rcx] = 0x3f800000
                    
                    if ((temp0_732 & 2) != 0)
                    label_1400a6dff:
                        var_408[1 + rcx] = 0x3f800000
                        
                        if ((temp0_732 & 4) == 0)
                            goto label_1400a6d25
                        
                        goto label_1400a6e0f
                    
                label_1400a6d1d:
                    
                    if ((temp0_732 & 4) != 0)
                    label_1400a6e0f:
                        var_408[2 + rcx] = 0x3f800000
                        
                        if ((temp0_732 & 8) != 0)
                            var_408[3 + rcx] = 0x3f800000
                    else
                    label_1400a6d25:
                        
                        if ((temp0_732 & 8) != 0)
                            var_408[3 + rcx] = 0x3f800000
                
                if (rcx == 8)
                    break
                
                zmm4 = *(&var_438 + (rcx << 2))
                rcx += 4
            
            zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_448
            zmm5 = var_438
            zmm6 = _mm_mullo_epi32(zmm7, zmm4)
            zmm8 = _mm_add_epi32(zmm6, zmm5)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm8, zmm0)
            zmm1 = _mm_add_epi32(zmm13, temp0_705)
            float (* rcx_1)[0x4] = *(arg5 + 0x10)
            zmm1 = _mm_slli_epi32(zmm1, 2) & zmm3
            int64_t rax_58 = sx.q(zmm1[0])
            zmm2 = *(rcx_1 + rax_58)
            int64_t rdx_63 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rbx_25 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rbp_14 = sx.q(_mm_extract_epi32(zmm1, 3))
            float temp0_745[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_1 + rdx_63), 0x10), *(rcx_1 + rbx_25), 
                    0x20), 
                *(rcx_1 + rbp_14), 0x30)
            zmm11 = _mm_cmpeq_epi32(temp0_678, temp0_678)
            zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm11), zmm7)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm5), zmm0), temp0_705), 2)
            zmm8 = _mm_mullo_epi32(_mm_add_epi32(zmm8, zmm7), zmm0)
            zmm1 &= zmm3
            zmm7 = *(rcx_1 + sx.q(zmm1[0]))
            int32_t temp0_755 = _mm_extract_epi32(zmm1, 1)
            int64_t rbx_27 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_757 = _mm_extract_epi32(zmm1, 3)
            zmm7 = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rcx_1 + sx.q(temp0_755)), 0x10), 
                        *(rcx_1 + rbx_27), 0x20), 
                    *(rcx_1 + sx.q(temp0_757)), 0x30), 
                temp0_745)
            zmm10 = var_408
            zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm10), temp0_745)
            zmm5 = _mm_sub_epi32(zmm5, zmm11)
            zmm6 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm5), zmm0), temp0_705), 2) & zmm3
            zmm2 = *(rcx_1 + sx.q(zmm6.d))
            int64_t rbp_23 = sx.q(_mm_extract_epi32(zmm6, 1))
            int32_t temp0_770 = _mm_extract_epi32(zmm6, 2)
            int64_t rdi_34 = sx.q(_mm_extract_epi32(zmm6, 3))
            float temp0_774[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_1 + rbp_23), 0x10), 
                    *(rcx_1 + sx.q(temp0_770)), 0x20), 
                *(rcx_1 + rdi_34), 0x30)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm4), zmm0), temp0_705), 2) & zmm3
            zmm4 = *(rcx_1 + sx.q(zmm5.d))
            int32_t temp0_779 = _mm_extract_epi32(zmm5, 1)
            int64_t rbx_31 = sx.q(_mm_extract_epi32(zmm5, 2))
            int32_t temp0_781 = _mm_extract_epi32(zmm5, 3)
            float temp0_786[0x4] = _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm4, *(rcx_1 + sx.q(temp0_779)), 0x10), 
                            *(rcx_1 + rbx_31), 0x20), 
                        *(rcx_1 + sx.q(temp0_781)), 0x30), 
                    temp0_774), 
                zmm10)
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r14_8 + rcx_1 + rax_58), 
                        *(rax_37 + rcx_1 + rdx_63), 0x10), 
                    *(r15_7 + rcx_1 + rbx_25), 0x20), 
                *(r12_1 + rcx_1 + rbp_14), 0x30)
            zmm0 = _mm_add_epi32(zmm0, temp0_705)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, temp0_705), 2) & zmm3
            zmm6 = *(r14_8 + sx.q(zmm8[0]) + rcx_1)
            void* rax_67 = sx.q(_mm_extract_epi32(zmm8, 1)) + rcx_1
            void* rdx_67 = sx.q(_mm_extract_epi32(zmm8, 2)) + rcx_1
            void* rbp_31 = sx.q(_mm_extract_epi32(zmm8, 3)) + rcx_1
            zmm6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_37 + rax_67), 0x10), *(r15_7 + rdx_67), 
                    0x20), 
                *(r12_1 + rbp_31), 0x30)
            float temp0_801[0x4] = _mm_add_ps(temp0_786, temp0_774)
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm5), zmm10), zmm5)
            zmm13 = _mm_slli_epi32(zmm13, 2) & zmm3
            zmm2 = *(r14_8 + sx.q(zmm13.d) + rcx_1)
            void* rax_73 = sx.q(_mm_extract_epi32(zmm13, 1)) + rcx_1
            void* rdx_70 = sx.q(_mm_extract_epi32(zmm13, 2)) + rcx_1
            void* rbp_34 = sx.q(_mm_extract_epi32(zmm13, 3)) + rcx_1
            float temp0_811[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_37 + rax_73), 0x10), *(r15_7 + rdx_70), 
                    0x20), 
                *(r12_1 + rbp_34), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2) & zmm3
            zmm1 = *(r14_8 + sx.q(zmm0.d) + rcx_1)
            void* rax_79 = sx.q(_mm_extract_epi32(zmm0, 1)) + rcx_1
            void* rdx_73 = sx.q(_mm_extract_epi32(zmm0, 2)) + rcx_1
            void* rbp_37 = sx.q(_mm_extract_epi32(zmm0, 3)) + rcx_1
            float temp0_821[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_37 + rax_79), 0x10), 
                                *(r15_7 + rdx_73), 0x20), 
                            *(r12_1 + rbp_37), 0x30), 
                        temp0_811), 
                    zmm10), 
                temp0_811)
            float temp0_824[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_801, zmm7), temp0_723), zmm7)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_821, zmm6), temp0_723), zmm6), 
                        temp0_824), 
                    temp0_724), 
                temp0_824)
            float temp0_831[0x4] = _mm_cmpeq_ps(zmm15, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm15, 7), temp0_831), zmm3)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_836[0x4] = _mm_rsqrt_ps(zmm15)
                zmm5 = _mm_mul_ps(_mm_mul_ps(zmm15, temp0_836), temp0_836)
                float temp0_841[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_836), data_142d3f640)
                float temp0_842[0x4] = _mm_rcp_ps(temp0_841)
                float temp0_843[0x4] = _mm_mul_ps(temp0_841, temp0_842)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_843), temp0_842), zmm1), 
                    zmm0)
            
            zmm0 = *arg10
            uint32_t i_8 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm3))
            
            if (i_8 == 0)
                return 0
            
            uint64_t i_5 = zx.q(i_8)
            result = 0
            
            do
                uint64_t rdx_74
                
                if (i_5 == 0)
                    rdx_74 = 0x40
                    i_5 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400a7231:
                        float var_268[0x4] = zmm1
                        uint64_t rdx_75 = zx.q(rdx_74.d) & 3
                        *arg10 = var_268[rdx_75].d
                        float var_258[0x4] = var_2c8_1
                        *arg9 = var_258[rdx_75]
                else
                    uint64_t rflags_3
                    rdx_74, rflags_3 = _bit_scan_forward(i_5)
                    i_5 &= not.q(1 << (rdx_74 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400a7231
                result.b = 1
            while (i_5 != 0)
return result
