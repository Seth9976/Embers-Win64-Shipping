// 函数: sub_1400de730
// 地址: 0x1400de730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint128_t zmm3 = arg9
uint128_t zmm1 = __mulps_xmmps_memps(*arg3 | arg3[1].d.q << 0x40, data_142e6d9f0)
uint128_t zmm2 = _mm_sub_ps(*arg2 | arg2[1].d.q << 0x40, zmm1)
int32_t var_2a8 = zmm2.d
uint128_t zmm0
zmm0.q = zmm2 u>> 0x40
int32_t var_2a4 = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
int32_t var_2a0 = zmm0.d
zmm2 = _mm_add_ps(*arg1 | arg1[1].d.q << 0x40, zmm1)
int32_t var_2b8 = zmm2.d
zmm0.q = zmm2 u>> 0x40
int32_t var_2b4 = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
int32_t var_2b0 = zmm0.d
int32_t i = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
uint128_t var_2c8
int32_t* result
int64_t* rdx_15
float zmm8[0x4]
float zmm9[0x4]
uint128_t zmm10
uint128_t var_358
uint128_t var_348
uint128_t var_318
uint64_t rbx
float zmm4[0x4]
float zmm5[0x4]

if (i s<= 0)
    rbx = 0
    zmm10 = zx.o(0)
    zmm8 = zx.o(0)
    zmm9 = zx.o(0)
    var_2c8 = zx.o(0)
    rdx_15 = arg11
    result = arg10
    
    if (0 s< arg12)
    label_1400df7ab:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
        zmm4 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg12), 0), zmm0)
        int64_t rdx_16 = sx.q(rbx.d << 2)
        uint32_t temp0_341 = _mm_movemask_ps(zmm4)
        float var_268_1[0x4] = zmm8
        float var_278_1[0x4] = zmm9
        uint128_t var_288_1 = zmm10
        
        if ((zx.q(temp0_341) & 0xfffffff9) != 9)
            if ((temp0_341.b & 1) == 0)
                if ((temp0_341.b & 2) != 0)
                    goto label_1400e08f5
                
                goto label_1400df80c
            
            var_358.d = *(arg8 + rdx_16)
            
            if ((temp0_341.b & 2) != 0)
            label_1400e08f5:
                var_358:4.d = *(arg8 + rdx_16 + 4)
                
                if ((temp0_341.b & 4) == 0)
                    goto label_1400df816
                
                goto label_1400e0908
            
        label_1400df80c:
            
            if ((temp0_341.b & 4) != 0)
            label_1400e0908:
                var_358:8.d = *(arg8 + rdx_16 + 8)
                
                if ((temp0_341.b & 8) != 0)
                    var_358:0xc.d = *(arg8 + rdx_16 + 0xc)
            else
            label_1400df816:
                
                if ((temp0_341.b & 8) != 0)
                    var_358:0xc.d = *(arg8 + rdx_16 + 0xc)
            
            zmm0 = var_358
        else
            zmm0 = *(arg8 + rdx_16)
        
        zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm4
        int64_t rax_64 = sx.q(zmm1.d)
        int64_t rdx_17 = arg7 + (rax_64 << 2)
        zmm0 = *(arg7 + (rax_64 << 2))
        int64_t rax_66 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
        int64_t rdi_8 = arg7 + (rax_66 << 2)
        zmm0 = _mm_unpacklo_ps(zmm0, (*(arg7 + (rax_66 << 2))).q)
        int64_t rax_68 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
        int64_t rbx_2 = arg7 + (rax_68 << 2)
        zmm2 = *(arg7 + (rax_68 << 2))
        int64_t rax_70 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
        int64_t r11_4 = arg7 + (rax_70 << 2)
        zmm0 = zmm0.q | _mm_unpacklo_ps(zmm2, (*(arg7 + (rax_70 << 2))).q).q << 0x40
        zmm2 = data_142fc95e0 & zmm4
        uint128_t* r14_1 = zx.q(zmm2.d)
        zmm8 = *(r14_1 + rdx_17)
        float (* r12_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        float temp0_350[0x4] = _mm_unpacklo_ps(zmm8, (*(r12_1 + rdi_8)).q)
        float (* r13_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        zmm3 = *(r13_1 + rbx_2)
        float (* rbp_8)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        zmm3 = _mm_unpacklo_ps(zmm3, (*(rbp_8 + r11_4)).q)
        zmm8 = temp0_350[0].q | zmm3.q << 0x40
        zmm2 = data_142fc95f0 & zmm4
        float temp0_355[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2.d) + rdx_17), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5).d) + rdi_8)).q)
        zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e).d) + rbx_2), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7).d) + r11_4)).q)
        zmm6 = temp0_355[0].q | zmm3.q << 0x40
        uint128_t var_168_1 = zmm0
        float var_138_1[0x4] = zx.o(0)
        zmm5 = (*arg6)[3]
        float temp0_359[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_358 = temp0_359
        var_348 = temp0_359
        zmm7 = *arg6
        zmm1 = (*arg6)[1]
        zmm3 = (*arg6)[2]
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_361[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_362[0x4] = _mm_mul_ps(zmm8, temp0_361)
        float temp0_363[0x4] = _mm_mul_ps(temp0_361, zmm6)
        float temp0_364[0x4] = _mm_mul_ps(zmm6, zmm1)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        zmm2 = _mm_mul_ps(zx.o(0), temp0_359)
        float temp0_370[0x4] = _mm_sub_ps(temp0_364, _mm_mul_ps(zmm3, zmm8))
        zmm0 = _mm_sub_ps(zmm0, temp0_363)
        float temp0_372[0x4] = _mm_sub_ps(temp0_362, zmm1)
        zmm2 = _mm_sub_ps(zmm2, zmm2)
        float temp0_374[0x4] = _mm_add_ps(temp0_370, temp0_370)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        float temp0_376[0x4] = _mm_add_ps(temp0_372, temp0_372)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        var_318 = temp0_374
        uint128_t var_308_3 = zmm0
        float var_2f8_3[0x4] = temp0_376
        uint128_t var_2e8_2 = zmm2
        zmm2 = _mm_mul_ps(zmm2, temp0_359)
        zmm1 = _mm_mul_ps(temp0_359, temp0_374)
        float temp0_380[0x4] = _mm_mul_ps(temp0_359, zmm0)
        zmm10 = _mm_mul_ps(temp0_359, temp0_376)
        zmm1 = __addps_xmmps_memps(zmm1, var_168_1)
        float temp0_383[0x4] = __addps_xmmps_memps(temp0_380, zmm8)
        zmm10 = __addps_xmmps_memps(zmm10, zmm6)
        float var_328_2[0x4] = temp0_359
        uint128_t var_128_1 = zmm1
        float var_118_1[0x4] = temp0_383
        uint128_t var_108_1 = zmm10
        uint128_t var_f8_1 = __addps_xmmps_memps(zmm2, var_138_1)
        zmm3 = *arg6
        zmm5 = (*arg6)[1]
        zmm7 = (*arg6)[2]
        float temp0_386[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm2 = _mm_mul_ps(zmm0, zmm3)
        zmm3 = _mm_mul_ps(zmm3, temp0_376)
        float temp0_390[0x4] = _mm_mul_ps(temp0_376, temp0_386)
        float temp0_391[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_392[0x4] = _mm_mul_ps(temp0_386, temp0_374)
        float temp0_393[0x4] = _mm_mul_ps(temp0_374, temp0_391)
        float temp0_395[0x4] = _mm_sub_ps(temp0_390, _mm_mul_ps(temp0_391, zmm0))
        float temp0_396[0x4] = _mm_sub_ps(temp0_393, zmm3)
        zmm2 = _mm_sub_ps(zmm2, temp0_392)
        float temp0_398[0x4] = _mm_add_ps(temp0_395, zmm1)
        float temp0_399[0x4] = _mm_add_ps(temp0_396, temp0_383)
        zmm2 = _mm_add_ps(zmm2, zmm10)
        zmm5 = arg6[1][0]
        zmm1 = (*arg6)[5]
        float temp0_402[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_398)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_399)
        zmm0 = (*arg6)[6]
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2)
        float var_1d8[0x4] = temp0_402
        uint128_t var_258_2 = zmm1
        uint128_t var_1c8 = zmm1
        uint128_t var_2d8_3 = zmm0
        uint128_t var_1b8_1 = zmm0
        int64_t rax_75 = 0
        zmm0 = temp0_402
        
        while (true)
            zmm2 = *(&var_2a8 + rax_75)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = _mm_cmpeq_ps(zmm1, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm4)) != 0)
                char temp0_411 = _mm_movemask_ps(zmm3)
                
                if ((temp0_411 & 1) == 0)
                    if ((temp0_411 & 2) != 0)
                        goto label_1400dfc0e
                    
                    goto label_1400dfb25
                
                *(&var_358 + (rax_75 << 2)) = zmm2.d
                
                if ((temp0_411 & 2) != 0)
                label_1400dfc0e:
                    *(&var_358:4 + (rax_75 << 2)) = zmm2.d
                    
                    if ((temp0_411 & 4) == 0)
                        goto label_1400dfb2e
                    
                    goto label_1400dfc1d
                
            label_1400dfb25:
                
                if ((temp0_411 & 4) != 0)
                label_1400dfc1d:
                    *(&var_358:8 + (rax_75 << 2)) = zmm2.d
                    
                    if ((temp0_411 & 8) != 0)
                        *(&var_358:0xc + (rax_75 << 2)) = zmm2.d
                else
                label_1400dfb2e:
                    
                    if ((temp0_411 & 8) != 0)
                        *(&var_358:0xc + (rax_75 << 2)) = zmm2.d
            
            zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm1)) != 0)
                zmm3 = *(&var_2b8 + rax_75)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm4)) != 0)
                    char temp0_420 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_420 & 1) == 0)
                        if ((temp0_420 & 2) != 0)
                            goto label_1400dfc3f
                        
                        goto label_1400dfb8a
                    
                    *(&var_358 + (rax_75 << 2)) = zmm3.d
                    
                    if ((temp0_420 & 2) != 0)
                    label_1400dfc3f:
                        *(&var_358:4 + (rax_75 << 2)) = zmm3.d
                        
                        if ((temp0_420 & 4) == 0)
                            goto label_1400dfb93
                        
                        goto label_1400dfc4e
                    
                label_1400dfb8a:
                    
                    if ((temp0_420 & 4) != 0)
                    label_1400dfc4e:
                        *(&var_358:8 + (rax_75 << 2)) = zmm3.d
                        
                        if ((temp0_420 & 8) != 0)
                            *(&var_358:0xc + (rax_75 << 2)) = zmm3.d
                    else
                    label_1400dfb93:
                        
                        if ((temp0_420 & 8) != 0)
                            *(&var_358:0xc + (rax_75 << 2)) = zmm3.d
                
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm4)) != 0)
                    zmm1 = *(&var_1d8 + (rax_75 << 2))
                    char temp0_425 = _mm_movemask_ps(zmm0)
                    
                    if ((temp0_425 & 1) == 0)
                        if ((temp0_425 & 2) != 0)
                            goto label_1400dfc75
                        
                        goto label_1400dfbd0
                    
                    *(&var_358 + (rax_75 << 2)) = zmm1.d
                    
                    if ((temp0_425 & 2) != 0)
                    label_1400dfc75:
                        *(&var_358:4 + (rax_75 << 2)) = _mm_shuffle_epi32(zmm1, 0xe5).d
                        
                        if ((temp0_425 & 4) == 0)
                            goto label_1400dfbd9
                        
                        goto label_1400dfc89
                    
                label_1400dfbd0:
                    
                    if ((temp0_425 & 4) != 0)
                    label_1400dfc89:
                        *(&var_358:8 + (rax_75 << 2)) = _mm_shuffle_epi32(zmm1, 0x4e).d
                        
                        if ((temp0_425 & 8) != 0)
                            *(&var_358:0xc + (rax_75 << 2)) = _mm_shuffle_epi32(zmm1, 0xe7).d
                    else
                    label_1400dfbd9:
                        
                        if ((temp0_425 & 8) != 0)
                            *(&var_358:0xc + (rax_75 << 2)) = _mm_shuffle_epi32(zmm1, 0xe7).d
            
            if (rax_75 == 8)
                break
            
            zmm0 = *(&var_1c8 + (rax_75 << 2))
            rax_75 += 4
        
        zmm9 = var_358
        zmm14 = var_348
        zmm12 = _mm_sub_ps(zmm9, temp0_402)
        zmm6 = *arg1
        zmm2 = *(arg1 + 4)
        float temp0_430[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm0 = _mm_sub_ps(zmm9, temp0_430)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = _mm_sub_ps(zmm14, zmm2)
        zmm3 = *arg3
        zmm7 = *(arg3 + 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm0 = _mm_div_ps(zmm0, zmm3)
        float temp0_436[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_436)
        zmm8 = arg3[1].d
        zmm15 = _mm_cvttps_epi32(zmm0)
        zmm0 = _mm_cvttps_epi32(zmm1)
        uint128_t var_218_2 = zmm3
        float temp0_442[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm3), temp0_430)
        zmm6 = zmm0
        zmm0 = __divps_xmmps_memps(*arg3 | zmm8[0].q << 0x40, data_142fc9600)
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0)
        uint128_t var_248_2 = zmm1
        float var_1e8_2[0x4] = zmm9
        float temp0_446[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_442, zmm1), zmm9, 1)
        zmm3 = _mm_add_epi32(zmm15, _mm_cmpeq_epi32(zmm1, zmm1))
        zmm1 = _mm_and_ps(zmm15, temp0_446)
        zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_446, zmm3), zmm1)
        uint128_t var_228_2 = zmm2
        float temp0_454[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_436), zmm2)
        float temp0_455[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        float temp0_456[0x4] = _mm_add_ps(temp0_454, temp0_455)
        float temp0_457[0x4] = _mm_cmpeq_ps(temp0_456, zmm14, 1)
        char temp0_459 = _mm_movemask_ps(_mm_and_ps(temp0_457, zmm4))
        zmm1 = arg1[1].d
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm2 = _mm_sub_ps(temp0_359, zmm1)
        float temp0_462[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm10 = _mm_cvttps_epi32(_mm_div_ps(zmm2, temp0_462))
        zmm2 = zmm14
        float var_298_2[0x4] = zmm10
        float temp0_467[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_462), zmm1)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
        var_358 = zmm5
        float temp0_469[0x4] = _mm_cmpeq_ps(temp0_456, zmm2, 5)
        
        if (temp0_459 != 0)
            zmm15 = zmm6
        
        uint128_t var_1f8_2 = zmm2
        zmm2 = __subps_xmmps_memps(zmm2, var_258_2)
        zmm12 = _mm_mul_ps(zmm12, zmm12)
        float temp0_472[0x4] = _mm_add_ps(temp0_467, zmm0)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_469, zmm4)) != 0)
            zmm3 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
        
        float temp0_476[0x4] = __subps_xmmps_memps(temp0_359, var_2d8_3)
        zmm12 = _mm_add_ps(zmm12, zx.o(0))
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        zmm6 = _mm_and_ps(zmm15, temp0_457)
        zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_457, zmm3), zmm6)
        var_348 = zmm9
        zmm10 = _mm_cmpeq_ps(temp0_472, temp0_359, 5)
        float temp0_483[0x4] = _mm_cmpeq_ps(temp0_472, temp0_359, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_483, zmm4)) != 0)
            zmm15 = var_298_2
        
        zmm12 = _mm_add_ps(zmm12, zmm2)
        float temp0_487[0x4] = _mm_mul_ps(temp0_476, temp0_476)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm4)) != 0)
            zmm3 = __paddd_xmmdq_memdq(var_298_2, data_142d3f800)
        
        uint128_t var_2d8_4 = _mm_add_ps(zmm12, temp0_487)
        zmm15 = _mm_and_ps(zmm15, temp0_483)
        zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_483, zmm3), zmm15)
        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm5), var_218_2), temp0_430)
        zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_436), var_228_2)
        float temp0_503[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), temp0_462), zmm1)
        zmm1 = _mm_add_ps(var_248_2, zmm2)
        float temp0_505[0x4] = _mm_add_ps(temp0_455, zmm3)
        zmm0 = _mm_add_ps(zmm0, temp0_503)
        zmm2 = _mm_sub_ps(var_1e8_2, zmm1)
        zmm3 = _mm_sub_ps(var_1f8_2, temp0_505)
        float temp0_509[0x4] = _mm_sub_ps(temp0_359, zmm0)
        zmm2 = _mm_div_ps(zmm2, var_218_2)
        zmm3 = _mm_div_ps(zmm3, temp0_436)
        float temp0_512[0x4] = _mm_div_ps(temp0_509, temp0_462)
        var_318 = zmm2
        uint128_t var_308_4 = zmm3
        int64_t rax_80 = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm5 = _mm_cmpeq_epi32(zmm5, zmm0)
            
            if (_mm_movemask_ps(zmm5 & zmm4) != 0)
                char temp0_516 = _mm_movemask_ps(zmm5)
                
                if ((temp0_516 & 1) == 0)
                    if ((temp0_516 & 2) != 0)
                        goto label_1400e0040
                    
                    goto label_1400dff71
                
                *(&var_358 + (rax_80 << 2)) = 0
                
                if ((temp0_516 & 2) != 0)
                label_1400e0040:
                    *(&var_358:4 + (rax_80 << 2)) = 0
                    
                    if ((temp0_516 & 4) == 0)
                        goto label_1400dff7a
                    
                    goto label_1400e0051
                
            label_1400dff71:
                
                if ((temp0_516 & 4) == 0)
                label_1400dff7a:
                    
                    if ((temp0_516 & 8) != 0)
                        goto label_1400e0062
                    
                    goto label_1400dff83
                
            label_1400e0051:
                *(&var_358:8 + (rax_80 << 2)) = 0
                
                if ((temp0_516 & 8) != 0)
                label_1400e0062:
                    *(&var_358:0xc + (rax_80 << 2)) = 0
                    
                    if ((temp0_516 & 1) == 0)
                        goto label_1400dff8c
                    
                    goto label_1400e0073
                
            label_1400dff83:
                
                if ((temp0_516 & 1) == 0)
                label_1400dff8c:
                    
                    if ((temp0_516 & 2) != 0)
                        goto label_1400e0084
                    
                    goto label_1400dff95
                
            label_1400e0073:
                *(&var_318 + (rax_80 << 2)) = 0
                
                if ((temp0_516 & 2) != 0)
                label_1400e0084:
                    *(&var_318:4 + (rax_80 << 2)) = 0
                    
                    if ((temp0_516 & 4) == 0)
                        goto label_1400dff9e
                    
                    goto label_1400e0095
                
            label_1400dff95:
                
                if ((temp0_516 & 4) != 0)
                label_1400e0095:
                    *(&var_318:8 + (rax_80 << 2)) = 0
                    
                    if ((temp0_516 & 8) != 0)
                        *(&var_318:0xc + (rax_80 << 2)) = 0
                else
                label_1400dff9e:
                    
                    if ((temp0_516 & 8) != 0)
                        *(&var_318:0xc + (rax_80 << 2)) = 0
            
            int32_t rdx_25 = *(arg4 + rax_80)
            zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_25 - 1), 0), 
                *(&var_358 + (rax_80 << 2)))
            
            if (_mm_movemask_ps(zmm1 & zmm4) != 0)
                char temp0_520 = _mm_movemask_ps(zmm1)
                
                if ((temp0_520 & 1) == 0)
                    if ((temp0_520 & 2) != 0)
                        goto label_1400e00bc
                    
                    goto label_1400dffe7
                
                *(&var_358 + (rax_80 << 2)) = rdx_25 - 2
                
                if ((temp0_520 & 2) != 0)
                label_1400e00bc:
                    *(&var_358:4 + (rax_80 << 2)) = rdx_25 - 2
                    
                    if ((temp0_520 & 4) == 0)
                        goto label_1400dfff0
                    
                    goto label_1400e00c9
                
            label_1400dffe7:
                
                if ((temp0_520 & 4) == 0)
                label_1400dfff0:
                    
                    if ((temp0_520 & 8) != 0)
                        goto label_1400e00d6
                    
                    goto label_1400dfff9
                
            label_1400e00c9:
                *(&var_358:8 + (rax_80 << 2)) = rdx_25 - 2
                
                if ((temp0_520 & 8) != 0)
                label_1400e00d6:
                    *(&var_358:0xc + (rax_80 << 2)) = rdx_25 - 2
                    
                    if ((temp0_520 & 1) == 0)
                        goto label_1400e0002
                    
                    goto label_1400e00e3
                
            label_1400dfff9:
                
                if ((temp0_520 & 1) == 0)
                label_1400e0002:
                    
                    if ((temp0_520 & 2) != 0)
                        goto label_1400e00f4
                    
                    goto label_1400e000b
                
            label_1400e00e3:
                *(&var_318 + (rax_80 << 2)) = 0x3f800000
                
                if ((temp0_520 & 2) != 0)
                label_1400e00f4:
                    *(&var_318:4 + (rax_80 << 2)) = 0x3f800000
                    
                    if ((temp0_520 & 4) == 0)
                        goto label_1400e0014
                    
                    goto label_1400e0105
                
            label_1400e000b:
                
                if ((temp0_520 & 4) != 0)
                label_1400e0105:
                    *(&var_318:8 + (rax_80 << 2)) = 0x3f800000
                    
                    if ((temp0_520 & 8) != 0)
                        *(&var_318:0xc + (rax_80 << 2)) = 0x3f800000
                else
                label_1400e0014:
                    
                    if ((temp0_520 & 8) != 0)
                        *(&var_318:0xc + (rax_80 << 2)) = 0x3f800000
            
            if (rax_80 == 8)
                break
            
            zmm5 = *(&var_348 + (rax_80 << 2))
            rax_80 += 4
        
        zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm7 = var_358
        zmm3 = var_348
        zmm9 = zmm14
        zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
        zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm0.q)
        zmm2 = _mm_add_epi32(zmm1, zmm3)
        zmm6 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm6), 0xe8).q)
        zmm5 = _mm_add_epi32(zmm14, zmm9)
        float (* rax_81)[0x4] = *(arg5 + 0x10)
        zmm5 = _mm_slli_epi32(zmm5, 2) & zmm4
        int64_t rdx_27 = sx.q(zmm5[0])
        zmm15 = *(rax_81 + rdx_27)
        int64_t rbx_3 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d)
        float temp0_539[0x4] = _mm_unpacklo_ps(zmm15, (*(rax_81 + rbx_3)).q)
        int64_t rbx_5 = sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)
        zmm0 = *(rax_81 + rbx_5)
        int64_t rbx_7 = sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])
        zmm0 = _mm_unpacklo_ps(zmm0, (*(rax_81 + rbx_7))[0].q)
        zmm15 = temp0_539[0].q | zmm0.q << 0x40
        zmm13 = _mm_cmpeq_epi32(temp0_512, temp0_512)
        zmm7 = _mm_sub_epi32(zmm7, zmm13)
        zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
        zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), zmm0.q)
        zmm0 = _mm_add_epi32(zmm12, zmm3)
        zmm5 = _mm_shuffle_epi32(zmm0, 0xf5)
        zmm7 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm6), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm6), 0xe8).q), 
                zmm9), 
            2)
        zmm2 = _mm_add_epi32(zmm2, zmm8)
        zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
        zmm10 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm6), 0xe8).q)
        zmm7 &= zmm4
        float temp0_568[0x4] = _mm_unpacklo_ps(*(rax_81 + sx.q(zmm7[0])), 
            (*(rax_81 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q)
        zmm0 = _mm_unpacklo_ps(*(rax_81 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d)), 
            (*(rax_81 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7).d))).q)
        float temp0_572[0x4] = _mm_sub_ps(temp0_568[0].q | zmm0.q << 0x40, zmm15)
        zmm8 = var_318
        zmm11 = var_308_4
        float temp0_574[0x4] = _mm_add_ps(_mm_mul_ps(temp0_572, zmm8), zmm15)
        zmm3 = _mm_sub_epi32(zmm3, zmm13)
        zmm1 = _mm_add_epi32(zmm1, zmm3)
        zmm0 = _mm_shuffle_epi32(zmm1, 0xf5)
        zmm1 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm6), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm6), 0xe8).q), 
                zmm9), 
            2) & zmm4
        zmm0 = _mm_unpacklo_ps(*(rax_81 + sx.q(zmm1.d)), 
            (*(rax_81 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d))).q).q | _mm_unpacklo_ps(
            *(rax_81 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)), 
            (*(rax_81 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d))).q).q << 0x40
        zmm3 = _mm_add_epi32(zmm3, zmm12)
        zmm1 = _mm_shuffle_epi32(zmm3, 0xf5)
        zmm2 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm6), 0xe8).q), 
                zmm9), 
            2) & zmm4
        zmm3 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(rax_81 + sx.q(zmm2.d)), 
                        (*(rax_81 + sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d))).q).q | _mm_unpacklo_ps(
                        *(rax_81 + sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)), 
                        (*(rax_81 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d))).q).q << 0x40, 
                    zmm0), 
                zmm8), 
            zmm0)
        zmm2 = _mm_unpacklo_ps(*(r14_1 + rax_81 + rdx_27), (*(r12_1 + rax_81 + rbx_3)).q).q
            | _mm_unpacklo_ps(*(r13_1 + rax_81 + rbx_5), (*(rbp_8 + rax_81 + rbx_7)).q).q << 0x40
        zmm6 = _mm_add_epi32(zmm6, zmm9)
        zmm14 = _mm_add_epi32(zmm14, zmm6)
        zmm6 = _mm_add_epi32(zmm6, zmm10)
        zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, zmm9), 2) & zmm4
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r14_1 + sx.q(zmm10.d) + rax_81), 
                        (*(r12_1 + sx.q(_mm_shuffle_epi32(zmm10, 0xe5).d) + rax_81)).q).q |
                        _mm_unpacklo_ps(*(r13_1 + sx.q(_mm_shuffle_epi32(zmm10, 0x4e).d) + rax_81), 
                        (*(rbp_8 + sx.q(_mm_shuffle_epi32(zmm10, 0xe7)[0]) + rax_81))[0].q).q << 0x40, 
                    zmm2), 
                zmm8), 
            zmm2)
        zmm14 = _mm_slli_epi32(zmm14, 2) & zmm4
        zmm2 = _mm_unpacklo_ps(*(r14_1 + sx.q(zmm14[0]) + rax_81), 
            (*(r12_1 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rax_81)).q).q | _mm_unpacklo_ps(
            *(r13_1 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rax_81), 
            (*(rbp_8 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rax_81))[0].q).q << 0x40
        zmm6 = _mm_slli_epi32(zmm6, 2) & zmm4
        zmm0 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r14_1 + sx.q(zmm6[0]) + rax_81), 
                        (*(r12_1 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0]) + rax_81))[0].q).q |
                        _mm_unpacklo_ps(*(r13_1 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0]) + rax_81), 
                        (*(rbp_8 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0]) + rax_81))[0].q)[0].q
                        << 0x40, 
                    zmm2), 
                zmm8), 
            zmm2)
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_574), zmm11), temp0_574)
        zmm0 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, zmm1), zmm11), zmm1), zmm3), 
                temp0_512), 
            zmm3)
        zmm5 = var_2d8_4
        zmm2 = _mm_cmpeq_ps(zmm5, zx.o(0), 4)
        zmm1 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm5, 7), zmm2), zmm4)
        
        if (_mm_movemask_ps(zmm1) != 0)
            zmm2 = _mm_rsqrt_ps(zmm5)
            float temp0_653[0x4] = _mm_mul_ps(_mm_mul_ps(zmm5, zmm2), zmm2)
            zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_653), zmm2), 
                data_142d3f640)
            zmm2 = _mm_rcp_ps(zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm2)
            zmm5 = _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), zmm2), zmm0), 
                zmm1)
            zmm0 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm5)
        
        zmm8 = var_268_1
        zmm9 = var_278_1
        zmm10 = var_288_1
        rdx_15 = arg11
        zmm1 = arg9
        zmm0 = _mm_sub_ps(zmm0, _mm_shuffle_ps(zmm1, zmm1, 0))
        zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm0, data_142fc95d0, 1), zmm4)
        char temp0_669 = _mm_movemask_ps(zmm1)
        
        if (temp0_669 == 0)
            result = arg10
        else
            float temp0_670[0x4] = _mm_mul_ps(var_1d8, zmm0)
            float temp0_671[0x4] = _mm_mul_ps(var_1c8, zmm0)
            float temp0_672[0x4] = _mm_mul_ps(var_1b8_1, zmm0)
            zmm4 = zmm9
            char temp1_1 = temp0_669 & 1
            
            if (temp1_1 == 0)
                zmm3 = zmm8
                
                if (temp1_1 != 0)
                    goto label_1400e0807
                
                goto label_1400e065a
            
            zmm4 = zmm9
            zmm4[0] = zmm4[0] + temp0_670[0]
            zmm3 = zmm8
            
            if (temp1_1 != 0)
            label_1400e0807:
                zmm3.d = zmm8.d f+ temp0_671[0]
                zmm2 = zmm10
                
                if (temp1_1 == 0)
                    goto label_1400e0664
                
                goto label_1400e0819
            
        label_1400e065a:
            zmm2 = zmm10
            bool cond:14_1
            bool cond:15_1
            bool cond:16_1
            bool cond:17_1
            
            if (temp1_1 == 0)
            label_1400e0664:
                zmm9 = _mm_add_ps(zmm9, temp0_670)
                char temp5_1 = temp0_669 & 2
                cond:14_1 = temp5_1 != 0
                cond:15_1 = temp5_1 == 0
                cond:16_1 = temp5_1 == 0
                cond:17_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                    goto label_1400e0835
                
                goto label_1400e0670
            
        label_1400e0819:
            zmm2.d = zmm10.d f+ temp0_672[0]
            zmm9 = _mm_add_ps(zmm9, temp0_670)
            char temp4_1 = temp0_669 & 2
            cond:14_1 = temp4_1 != 0
            cond:15_1 = temp4_1 == 0
            cond:16_1 = temp4_1 == 0
            cond:17_1 = temp4_1 != 0
            
            if (temp4_1 != 0)
            label_1400e0835:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4, 1), zmm4, 0xe2)
                zmm8 = _mm_add_ps(zmm8, temp0_671)
                
                if (cond:15_1)
                    goto label_1400e067a
                
                goto label_1400e084e
            
        label_1400e0670:
            zmm8 = _mm_add_ps(zmm8, temp0_671)
            
            if (not(cond:14_1))
            label_1400e067a:
                zmm10 = _mm_add_ps(zmm10, temp0_672)
                
                if (cond:17_1)
                    goto label_1400e0867
                
                goto label_1400e0684
            
        label_1400e084e:
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm3, 1), zmm3, 0xe2)
            zmm10 = _mm_add_ps(zmm10, temp0_672)
            bool cond:22_1
            bool cond:23_1
            bool cond:24_1
            bool cond:25_1
            
            if (not(cond:16_1))
            label_1400e0867:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm2, 1), zmm2, 0xe2)
                char temp9_1 = temp0_669 & 4
                cond:22_1 = temp9_1 == 0
                cond:23_1 = temp9_1 != 0
                cond:24_1 = temp9_1 != 0
                cond:25_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                    goto label_1400e068c
                
                goto label_1400e087a
            
        label_1400e0684:
            char temp8_1 = temp0_669 & 4
            cond:22_1 = temp8_1 == 0
            cond:23_1 = temp8_1 != 0
            cond:24_1 = temp8_1 != 0
            cond:25_1 = temp8_1 == 0
            
            if (temp8_1 != 0)
            label_1400e087a:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x32), 0x84)
                
                if (not(cond:22_1))
                label_1400e088c:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x32), 0x84)
                    
                    if (cond:25_1)
                        goto label_1400e0698
                    
                    goto label_1400e089e
            else
            label_1400e068c:
                
                if (cond:23_1)
                    goto label_1400e088c
            
            bool cond:30_1
            bool cond:31_1
            bool cond:32_1
            bool cond:33_1
            
            if (not(cond:24_1))
            label_1400e0698:
                char temp13_1 = temp0_669 & 8
                cond:30_1 = temp13_1 != 0
                cond:31_1 = temp13_1 == 0
                cond:32_1 = temp13_1 != 0
                cond:33_1 = temp13_1 == 0
                
                if (temp13_1 != 0)
                    goto label_1400e08b4
                
                goto label_1400e06a0
            
        label_1400e089e:
            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x32), 0x84)
            char temp12_1 = temp0_669 & 8
            cond:30_1 = temp12_1 != 0
            cond:31_1 = temp12_1 == 0
            cond:32_1 = temp12_1 != 0
            cond:33_1 = temp12_1 == 0
            
            if (temp12_1 != 0)
            label_1400e08b4:
                zmm9 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x23), 0x24)
                result = arg10
                
                if (cond:31_1)
                    goto label_1400e06b2
                
                goto label_1400e08d0
            
        label_1400e06a0:
            zmm9 = zmm4
            result = arg10
            
            if (cond:30_1)
            label_1400e08d0:
                zmm8 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x23), 0x24)
                
                if (cond:32_1)
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x23), 0x24)
            else
            label_1400e06b2:
                zmm8 = zmm3
                
                if (not(cond:33_1))
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x23), 0x24)
            
            zmm0 = _mm_and_ps(_mm_add_ps(zmm0, var_2c8), zmm1)
            zmm10 = zmm2
            var_2c8 = _mm_or_ps(_mm_andnot_ps(zmm1, var_2c8), zmm0)
else
    uint128_t var_178_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm11 = zx.o(0)
    rbx = 0
    var_2c8 = zx.o(0)
    
    do
        uint128_t var_288
        __builtin_memset(&var_288, 0, 0x30)
        zmm0 = *(arg8 + sx.q((rbx << 2).d))
        zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
        int64_t rdx_3 = sx.q(zmm1.d)
        int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
        int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
        int64_t rax_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
        zmm1 = *(arg7 + (rax_2 << 2) + 4)
        zmm2 = _mm_unpacklo_ps(*(arg7 + (rbp_2 << 2)), (*(arg7 + (rax_2 << 2))).q)
        zmm0 = _mm_unpacklo_ps(*(arg7 + (rbp_2 << 2) + 4), zmm1.q)
        zmm4 = *(arg7 + (rdx_3 << 2) + 4)
        zmm1 =
            _mm_unpacklo_ps(*(arg7 + (rdx_3 << 2)), (*(arg7 + (rdi_2 << 2))).q).q | zmm2.q << 0x40
        zmm4 = _mm_unpacklo_ps(zmm4, (*(arg7 + (rdi_2 << 2) + 4)).q)[0].q | zmm0.q << 0x40
        zmm2 = _mm_unpacklo_ps(*(arg7 + (rdx_3 << 2) + 8), (*(arg7 + (rdi_2 << 2) + 8)).q).q
            | _mm_unpacklo_ps(*(arg7 + (rbp_2 << 2) + 8), (*(arg7 + (rax_2 << 2) + 8)).q).q << 0x40
        var_318 = zmm1
        uint128_t var_2f8_1 = zmm2
        float var_2e8_1[0x4] = zmm11
        zmm0 = (*arg6)[3]
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
        var_358 = zmm0
        var_348 = zmm0
        uint128_t var_338_1 = zmm0
        uint128_t var_328_1 = zmm0
        zmm9 = *arg6
        zmm8 = (*arg6)[1]
        zmm10 = (*arg6)[2]
        float temp0_37[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_38[0x4] = _mm_mul_ps(zmm2, temp0_37)
        zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
        zmm3 = _mm_mul_ps(zmm1, zmm10)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_42[0x4] = _mm_mul_ps(zmm4, temp0_41)
        float temp0_44[0x4] = _mm_sub_ps(temp0_38, _mm_mul_ps(zmm4, zmm10))
        zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm2, temp0_41))
        float temp0_48[0x4] = _mm_sub_ps(temp0_42, _mm_mul_ps(zmm1, temp0_37))
        float temp0_49[0x4] = _mm_add_ps(temp0_44, temp0_44)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_48)
        zmm2 = _mm_mul_ps(zmm0, temp0_49)
        float temp0_53[0x4] = _mm_mul_ps(zmm0, zmm3)
        zmm2 = __addps_xmmps_memps(zmm2, var_318)
        float temp0_55[0x4] = __addps_xmmps_memps(temp0_53, zmm4)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_51), var_2f8_1)
        float temp0_58[0x4] = _mm_mul_ps(temp0_51, temp0_37)
        float temp0_59[0x4] = _mm_mul_ps(temp0_49, zmm10)
        zmm1 = _mm_mul_ps(zmm3, temp0_41)
        float temp0_63[0x4] = _mm_add_ps(_mm_sub_ps(temp0_58, _mm_mul_ps(zmm3, zmm10)), zmm2)
        float temp0_66[0x4] =
            _mm_add_ps(_mm_sub_ps(temp0_59, _mm_mul_ps(temp0_51, temp0_41)), temp0_55)
        zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_49, temp0_37)), zmm0)
        zmm2 = arg6[1][0]
        zmm3 = (*arg6)[5]
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_63)
        zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_66)
        zmm0 = (*arg6)[6]
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
        uint128_t var_1a8 = zmm2
        uint128_t var_238_1 = zmm3
        uint128_t var_198 = zmm3
        uint128_t var_2d8_1 = zmm0
        uint128_t var_188_1 = zmm0
        int64_t rbp_3 = 0
        uint128_t var_1e8_1 = zmm2
        zmm0 = zmm2
        
        while (true)
            zmm2 = *(&var_2a8 + rbp_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
            char temp0_78 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
            
            if (temp0_78 != 0)
                if ((temp0_78 & 1) == 0)
                    if ((temp0_78 & 2) != 0)
                        goto label_1400decbe
                    
                    goto label_1400debdf
                
                *(&var_358 + (rbp_3 << 2)) = zmm2.d
                
                if ((temp0_78 & 2) != 0)
                label_1400decbe:
                    *(&var_358:4 + (rbp_3 << 2)) = zmm2.d
                    
                    if ((temp0_78 & 4) == 0)
                        goto label_1400debe8
                    
                    goto label_1400deccd
                
            label_1400debdf:
                
                if ((temp0_78 & 4) != 0)
                label_1400deccd:
                    *(&var_358:8 + (rbp_3 << 2)) = zmm2.d
                    
                    if ((temp0_78 & 8) != 0)
                        *(&var_358:0xc + (rbp_3 << 2)) = zmm2.d
                else
                label_1400debe8:
                    
                    if ((temp0_78 & 8) != 0)
                        *(&var_358:0xc + (rbp_3 << 2)) = zmm2.d
            
            zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
            
            if (_mm_movemask_ps(zmm1) != 0)
                zmm3 = *(&var_2b8 + rbp_3)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                char temp0_84 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                
                if (temp0_84 != 0)
                    if ((temp0_84 & 1) == 0)
                        if ((temp0_84 & 2) != 0)
                            goto label_1400decef
                        
                        goto label_1400dec38
                    
                    *(&var_358 + (rbp_3 << 2)) = zmm3.d
                    
                    if ((temp0_84 & 2) != 0)
                    label_1400decef:
                        *(&var_358:4 + (rbp_3 << 2)) = zmm3.d
                        
                        if ((temp0_84 & 4) == 0)
                            goto label_1400dec41
                        
                        goto label_1400decfe
                    
                label_1400dec38:
                    
                    if ((temp0_84 & 4) != 0)
                    label_1400decfe:
                        *(&var_358:8 + (rbp_3 << 2)) = zmm3.d
                        
                        if ((temp0_84 & 8) != 0)
                            *(&var_358:0xc + (rbp_3 << 2)) = zmm3.d
                    else
                    label_1400dec41:
                        
                        if ((temp0_84 & 8) != 0)
                            *(&var_358:0xc + (rbp_3 << 2)) = zmm3.d
                
                char temp0_87 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                
                if (temp0_87 != 0)
                    zmm0 = *(&var_1a8 + (rbp_3 << 2))
                    
                    if ((temp0_87 & 1) == 0)
                        if ((temp0_87 & 2) != 0)
                            goto label_1400ded25
                        
                        goto label_1400dec78
                    
                    *(&var_358 + (rbp_3 << 2)) = zmm0.d
                    
                    if ((temp0_87 & 2) != 0)
                    label_1400ded25:
                        *(&var_358:4 + (rbp_3 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_87 & 4) == 0)
                            goto label_1400dec81
                        
                        goto label_1400ded39
                    
                label_1400dec78:
                    
                    if ((temp0_87 & 4) != 0)
                    label_1400ded39:
                        *(&var_358:8 + (rbp_3 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                        
                        if ((temp0_87 & 8) != 0)
                            *(&var_358:0xc + (rbp_3 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_1400dec81:
                        
                        if ((temp0_87 & 8) != 0)
                            *(&var_358:0xc + (rbp_3 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
            
            if (rbp_3 == 8)
                break
            
            zmm0 = *(&var_198 + (rbp_3 << 2))
            rbp_3 += 4
        
        zmm11 = var_358
        zmm9 = var_348
        zmm4 = *arg1
        zmm14 = *(arg1 + 4)
        float temp0_91[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm0 = _mm_sub_ps(zmm11, temp0_91)
        float temp0_93[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
        float temp0_94[0x4] = _mm_sub_ps(zmm9, temp0_93)
        zmm5 = arg1[1].d
        float temp0_95[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm1 = _mm_sub_ps(var_338_1, temp0_95)
        zmm2 = *arg3
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_div_ps(zmm0, zmm2)
        zmm8 = _mm_cmpeq_epi32(temp0_37, temp0_37)
        zmm15 = arg3[1].d
        zmm7 = _mm_cvttps_epi32(zmm0)
        uint128_t var_218_1 = zmm2
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), zmm2), temp0_91)
        zmm4 = zmm9
        zmm12 = __divps_xmmps_memps(*arg3 | zmm15[0].q << 0x40, data_142fc9600)
        zmm10 = _mm_shuffle_ps(zmm12, zmm12, 0)
        zmm3 = _mm_cmpeq_ps(_mm_add_ps(zmm3, zmm10), zmm11, 1)
        zmm13 = _mm_add_epi32(zmm7, zmm8)
        zmm0 = _mm_and_ps(zmm7, zmm3)
        zmm3 = _mm_or_ps(_mm_andnot_ps(zmm3, zmm13), zmm0)
        zmm9 = *(arg3 + 4)
        float temp0_112[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_113[0x4] = _mm_div_ps(temp0_94, temp0_112)
        float temp0_114[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_114)
        zmm0 = _mm_cvttps_epi32(temp0_113)
        zmm1 = _mm_cvttps_epi32(zmm1)
        zmm2 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_112)
        uint128_t var_298_1 = zmm1
        float temp0_121[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_114)
        zmm2 = _mm_add_ps(zmm2, temp0_93)
        float temp0_123[0x4] = _mm_add_ps(temp0_121, temp0_95)
        float temp0_124[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        zmm2 = _mm_add_ps(zmm2, temp0_124)
        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        var_358 = zmm3
        float temp0_127[0x4] = _mm_cmpeq_ps(zmm2, zmm4, 1)
        
        if (_mm_movemask_ps(temp0_127) != 0)
            zmm7 = zmm0
        
        float temp0_129[0x4] = _mm_add_ps(temp0_123, zmm12)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2, zmm4, 5)) != 0)
            zmm13 = __paddd_xmmdq_memdq(zmm0, data_142d3f800)
        
        float var_1f8_1[0x4] = zmm11
        zmm1 = __subps_xmmps_memps(zmm11, var_1e8_1)
        zmm0 = __subps_xmmps_memps(zmm4, var_238_1)
        zmm2 = _mm_and_ps(zmm7, temp0_127)
        zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_127, zmm13), zmm2)
        var_348 = zmm8
        float temp0_138[0x4] = _mm_cmpeq_ps(temp0_129, var_338_1, 1)
        
        if (_mm_movemask_ps(temp0_138) != 0)
            zmm7 = var_298_1
        
        float temp0_140[0x4] = __subps_xmmps_memps(var_338_1, var_2d8_1)
        zmm1 = _mm_mul_ps(zmm1, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm0)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_129, var_338_1, 5)) != 0)
            zmm13 = __paddd_xmmdq_memdq(var_298_1, data_142d3f800)
        
        zmm7 = _mm_and_ps(zmm7, temp0_138)
        zmm11 = _mm_or_ps(_mm_andnot_ps(temp0_138, zmm13), zmm7)
        zmm13 = _mm_add_ps(_mm_add_ps(zmm1, zx.o(0)), zmm0)
        zmm7 = var_218_1
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm7), temp0_91)
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_112), temp0_93)
        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), temp0_114), temp0_95)
        zmm10 = _mm_add_ps(zmm10, zmm0)
        float temp0_161[0x4] = _mm_add_ps(temp0_124, zmm1)
        zmm12 = _mm_add_ps(zmm12, zmm2)
        zmm0 = _mm_sub_ps(var_1f8_1, zmm10)
        float temp0_164[0x4] = _mm_sub_ps(zmm4, temp0_161)
        float temp0_165[0x4] = _mm_sub_ps(var_338_1, zmm12)
        zmm0 = _mm_div_ps(zmm0, zmm7)
        float temp0_167[0x4] = _mm_div_ps(temp0_164, temp0_112)
        float temp0_168[0x4] = _mm_div_ps(temp0_165, temp0_114)
        var_318 = zmm0
        float temp0_169[0x4] = _mm_mul_ps(temp0_140, temp0_140)
        int64_t rbp_4 = 0
        zmm15 = _mm_cmpeq_epi32(temp0_114, temp0_114)
        char j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm15))
        
        if (j == 0)
            goto label_1400df03d
        
        do
            if ((j & 1) == 0)
                if ((j & 2) != 0)
                    goto label_1400df0e1
                
                goto label_1400deffd
            
            *(&var_358 + (rbp_4 << 2)) = 0
            
            if ((j & 2) != 0)
            label_1400df0e1:
                *(&var_358:4 + (rbp_4 << 2)) = 0
                
                if ((j & 4) == 0)
                    goto label_1400df007
                
                goto label_1400df0f3
            
        label_1400deffd:
            
            if ((j & 4) == 0)
            label_1400df007:
                
                if ((j & 8) != 0)
                    goto label_1400df105
                
                goto label_1400df011
            
        label_1400df0f3:
            *(&var_358:8 + (rbp_4 << 2)) = 0
            
            if ((j & 8) != 0)
            label_1400df105:
                *(&var_358:0xc + (rbp_4 << 2)) = 0
                
                if ((j & 1) == 0)
                    goto label_1400df01b
                
                goto label_1400df117
            
        label_1400df011:
            
            if ((j & 1) == 0)
            label_1400df01b:
                
                if ((j & 2) != 0)
                    goto label_1400df129
                
                goto label_1400df025
            
        label_1400df117:
            *(&var_318 + (rbp_4 << 2)) = 0
            
            if ((j & 2) != 0)
            label_1400df129:
                *(&var_318:4 + (rbp_4 << 2)) = 0
                
                if ((j & 4) == 0)
                    goto label_1400df02f
                
                goto label_1400df13b
            
        label_1400df025:
            
            if ((j & 4) != 0)
            label_1400df13b:
                *(&var_318:8 + (rbp_4 << 2)) = 0
                
                if ((j & 8) != 0)
                    *(&var_318:0xc + (rbp_4 << 2)) = 0
            else
            label_1400df02f:
                
                if ((j & 8) != 0)
                    *(&var_318:0xc + (rbp_4 << 2)) = 0
            
        label_1400df03d:
            int32_t rdx_10 = *(arg4 + rbp_4)
            char temp0_177 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                _mm_shuffle_epi32(zx.o(rdx_10 - 1), 0), *(&var_358 + (rbp_4 << 2))))
            
            if (temp0_177 != 0)
                if ((temp0_177 & 1) == 0)
                    if ((temp0_177 & 2) != 0)
                        goto label_1400df16d
                    
                    goto label_1400df075
                
                *(&var_358 + (rbp_4 << 2)) = rdx_10 - 2
                
                if ((temp0_177 & 2) != 0)
                label_1400df16d:
                    *(&var_358:4 + (rbp_4 << 2)) = rdx_10 - 2
                    
                    if ((temp0_177 & 4) == 0)
                        goto label_1400df07f
                    
                    goto label_1400df17b
                
            label_1400df075:
                
                if ((temp0_177 & 4) == 0)
                label_1400df07f:
                    
                    if ((temp0_177 & 8) != 0)
                        goto label_1400df189
                    
                    goto label_1400df089
                
            label_1400df17b:
                *(&var_358:8 + (rbp_4 << 2)) = rdx_10 - 2
                
                if ((temp0_177 & 8) != 0)
                label_1400df189:
                    *(&var_358:0xc + (rbp_4 << 2)) = rdx_10 - 2
                    
                    if ((temp0_177 & 1) == 0)
                        goto label_1400df093
                    
                    goto label_1400df197
                
            label_1400df089:
                
                if ((temp0_177 & 1) == 0)
                label_1400df093:
                    
                    if ((temp0_177 & 2) != 0)
                        goto label_1400df1a9
                    
                    goto label_1400df09d
                
            label_1400df197:
                *(&var_318 + (rbp_4 << 2)) = 0x3f800000
                
                if ((temp0_177 & 2) != 0)
                label_1400df1a9:
                    *(&var_318:4 + (rbp_4 << 2)) = 0x3f800000
                    
                    if ((temp0_177 & 4) == 0)
                        goto label_1400df0a7
                    
                    goto label_1400df1bb
                
            label_1400df09d:
                
                if ((temp0_177 & 4) != 0)
                label_1400df1bb:
                    *(&var_318:8 + (rbp_4 << 2)) = 0x3f800000
                    
                    if ((temp0_177 & 8) != 0)
                        *(&var_318:0xc + (rbp_4 << 2)) = 0x3f800000
                else
                label_1400df0a7:
                    
                    if ((temp0_177 & 8) != 0)
                        *(&var_318:0xc + (rbp_4 << 2)) = 0x3f800000
            
            if (rbp_4 == 8)
                break
            
            zmm3 = *(&var_348 + (rbp_4 << 2))
            rbp_4 += 4
            j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm15))
        while (j != 0)
        
        float temp0_178[0x4] = _mm_add_ps(zmm13, temp0_169)
        zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm6 = var_358
        zmm14 = var_348
        zmm10 = zmm11
        zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm8), 0xe8)
        zmm4 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm6), 0xe8), zmm0.q)
        zmm3 = _mm_add_epi32(zmm4, zmm14)
        zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm0), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm0), 0xe8).q)
        zmm1 = _mm_add_epi32(zmm12, zmm10)
        float (* rbp_5)[0x4] = *(arg5 + 0x10)
        zmm1 = _mm_slli_epi32(zmm1, 2)
        int64_t rax_10 = sx.q(zmm1.d)
        int64_t rdx_13 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
        int64_t rdi_7 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
        int64_t rsi_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
        zmm7 = *(rbp_5 + rsi_2 + 4)
        float temp0_199[0x4] = _mm_unpacklo_ps(*(rbp_5 + rdi_7), (*(rbp_5 + rsi_2)).q)
        zmm2 = _mm_unpacklo_ps(*(rbp_5 + rdi_7 + 4), zmm7[0].q)
        zmm11 = *(rbp_5 + rax_10 + 4)
        zmm1 =
            _mm_unpacklo_ps(*(rbp_5 + rax_10), (*(rbp_5 + rdx_13))[0].q).q | temp0_199[0].q << 0x40
        zmm11 = _mm_unpacklo_ps(zmm11, (*(rbp_5 + rdx_13 + 4))[0].q)[0].q | zmm2.q << 0x40
        zmm6 = _mm_sub_epi32(zmm6, zmm15)
        zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm8), 0xe8)
        zmm6 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm8), 0xe8), zmm2.q)
        zmm2 = _mm_add_epi32(zmm6, zmm14)
        zmm5 = _mm_shuffle_epi32(zmm2, 0xf5)
        zmm7 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm0), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm0), 0xe8).q), 
                zmm10), 
            2)
        zmm3 = _mm_add_epi32(zmm3, zmm8)
        zmm2 = _mm_shuffle_epi32(zmm3, 0xf5)
        zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm0), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm0), 0xe8).q)
        zmm2 = _mm_sub_ps(
            _mm_unpacklo_ps(*(rbp_5 + sx.q(zmm7[0])), 
                (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rbp_5 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d)), 
                (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7)[0])))[0].q).q << 0x40, 
            zmm1)
        zmm13 = var_318
        zmm3 = temp0_167
        zmm2 = _mm_add_ps(_mm_mul_ps(zmm2, zmm13), zmm1)
        zmm14 = _mm_sub_epi32(zmm14, zmm15)
        zmm4 = _mm_add_epi32(zmm4, zmm14)
        zmm1 = _mm_shuffle_epi32(zmm4, 0xf5)
        zmm4 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm0), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm0), 0xe8).q), 
                zmm10), 
            2)
        zmm1 = _mm_unpacklo_ps(*(rbp_5 + sx.q(zmm4[0])), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
            *(rbp_5 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)[0].q << 0x40
        zmm14 = _mm_add_epi32(zmm14, zmm6)
        zmm4 = _mm_shuffle_epi32(zmm14, 0xf5)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm14, zmm0), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm0), 0xe8)[0].q), 
                zmm10), 
            2)
        float temp0_259[0x4] = _mm_unpacklo_ps(*(rbp_5 + sx.q(zmm5[0])), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q)
        float temp0_262[0x4] = _mm_unpacklo_ps(*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
        float temp0_265[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(temp0_259[0].q | temp0_262[0].q << 0x40, zmm1), zmm13), zmm1)
        zmm0 = _mm_add_epi32(zmm0, zmm10)
        zmm12 = _mm_add_epi32(zmm12, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm8)
        zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2)
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(rbp_5 + sx.q(zmm8[0]) + 4), 
                        (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5)[0]) + 4))[0].q).q |
                        _mm_unpacklo_ps(*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e)[0]) + 4), 
                        (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + 4))[0].q)[0].q << 0x40, 
                    zmm11), 
                zmm13), 
            zmm11)
        zmm12 = _mm_slli_epi32(zmm12, 2)
        float temp0_281[0x4] = _mm_unpacklo_ps(*(rbp_5 + sx.q(zmm12.d) + 4), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm12, 0xe5)[0]) + 4))[0].q)
        float temp0_284[0x4] = _mm_unpacklo_ps(
            *(rbp_5 + sx.q(_mm_shuffle_epi32(zmm12, 0x4e)[0]) + 4), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm12, 0xe7)[0]) + 4))[0].q)
        zmm6 = temp0_281[0].q | temp0_284[0].q << 0x40
        zmm0 = _mm_slli_epi32(zmm0, 2)
        float temp0_287[0x4] = _mm_unpacklo_ps(*(rbp_5 + sx.q(zmm0.d) + 4), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + 4))[0].q)
        float temp0_290[0x4] = _mm_unpacklo_ps(
            *(rbp_5 + sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + 4), 
            (*(rbp_5 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + 4)).q)
        float temp0_293[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(temp0_287[0].q | temp0_290[0].q << 0x40, zmm6), zmm13), zmm6)
        float temp0_296[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_265, zmm2), zmm3), zmm2)
        zmm5 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_293, zmm1), zmm3), zmm1), 
                    temp0_296), 
                temp0_168), 
            temp0_296)
        zmm11 = zx.o(0)
        zmm1 = _mm_cmpeq_ps(temp0_178, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_178, zx.o(0), 7), zmm1)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm1 = _mm_rsqrt_ps(temp0_178)
            float temp0_309[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_178, zmm1), zmm1)
            zmm2 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_309), zmm1), 
                data_142d3f640)
            zmm1 = _mm_rcp_ps(zmm2)
            zmm2 = _mm_mul_ps(zmm2, zmm1)
            zmm3 = _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm2), zmm1), zmm5), 
                zmm0)
            zmm5 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm5), zmm3)
        
        float var_268[0x4]
        zmm8 = var_268
        float var_278[0x4]
        zmm9 = var_278
        zmm10 = var_288
        float temp0_321[0x4] = __subps_xmmps_memps(zmm5, var_178_1)
        zmm0 = __cmpps_xmmps_memps_immb(temp0_321, data_142fc95d0, 1)
        char temp0_323 = _mm_movemask_ps(zmm0)
        
        if (temp0_323 != 0)
            float temp0_324[0x4] = _mm_mul_ps(var_1a8, temp0_321)
            float temp0_325[0x4] = _mm_mul_ps(var_198, temp0_321)
            float temp0_326[0x4] = _mm_mul_ps(var_188_1, temp0_321)
            zmm3 = zmm9
            char temp0_327 = temp0_323 & 1
            
            if (temp0_327 == 0)
                zmm2 = zmm8
                
                if (temp0_327 != 0)
                    goto label_1400de8b6
                
                goto label_1400df6c4
            
            zmm3.d = zmm9.d f+ temp0_324[0]
            zmm2 = zmm8
            
            if (temp0_327 != 0)
            label_1400de8b6:
                zmm2.d = zmm8.d f+ temp0_325[0]
                zmm1 = zmm10
                
                if (temp0_327 == 0)
                    goto label_1400df6ce
                
                goto label_1400de8c8
            
        label_1400df6c4:
            zmm1 = zmm10
            bool cond:10_1
            bool cond:11_1
            bool cond:12_1
            bool cond:13_1
            
            if (temp0_327 == 0)
            label_1400df6ce:
                zmm9 = _mm_add_ps(zmm9, temp0_324)
                char temp3_1 = temp0_323 & 2
                cond:10_1 = temp3_1 != 0
                cond:11_1 = temp3_1 == 0
                cond:12_1 = temp3_1 == 0
                cond:13_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_1400de8e6
                
                goto label_1400df6dc
            
        label_1400de8c8:
            zmm1.d = zmm10.d f+ temp0_326[0]
            zmm9 = _mm_add_ps(zmm9, temp0_324)
            char temp2_1 = temp0_323 & 2
            cond:10_1 = temp2_1 != 0
            cond:11_1 = temp2_1 == 0
            cond:12_1 = temp2_1 == 0
            cond:13_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
            label_1400de8e6:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm3, 1), zmm3, 0xe2)
                zmm8 = _mm_add_ps(zmm8, temp0_325)
                
                if (cond:11_1)
                    goto label_1400df6e6
                
                goto label_1400de8ff
            
        label_1400df6dc:
            zmm8 = _mm_add_ps(zmm8, temp0_325)
            
            if (not(cond:10_1))
            label_1400df6e6:
                zmm10 = _mm_add_ps(zmm10, temp0_326)
                
                if (cond:13_1)
                    goto label_1400de918
                
                goto label_1400df6f0
            
        label_1400de8ff:
            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
            zmm10 = _mm_add_ps(zmm10, temp0_326)
            bool cond:18_1
            bool cond:19_1
            bool cond:20_1
            bool cond:21_1
            
            if (not(cond:12_1))
            label_1400de918:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 1), zmm1, 0xe2)
                char temp7_1 = temp0_323 & 4
                cond:18_1 = temp7_1 == 0
                cond:19_1 = temp7_1 != 0
                cond:20_1 = temp7_1 != 0
                cond:21_1 = temp7_1 == 0
                
                if (temp7_1 == 0)
                    goto label_1400df6fa
                
                goto label_1400de92d
            
        label_1400df6f0:
            char temp6_1 = temp0_323 & 4
            cond:18_1 = temp6_1 == 0
            cond:19_1 = temp6_1 != 0
            cond:20_1 = temp6_1 != 0
            cond:21_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
            label_1400de92d:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
                
                if (not(cond:18_1))
                label_1400de93f:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                    
                    if (cond:21_1)
                        goto label_1400df706
                    
                    goto label_1400de951
            else
            label_1400df6fa:
                
                if (cond:19_1)
                    goto label_1400de93f
            
            bool cond:26_1
            bool cond:27_1
            bool cond:28_1
            bool cond:29_1
            
            if (not(cond:20_1))
            label_1400df706:
                char temp11_1 = temp0_323 & 8
                cond:26_1 = temp11_1 != 0
                cond:27_1 = temp11_1 == 0
                cond:28_1 = temp11_1 != 0
                cond:29_1 = temp11_1 == 0
                
                if (temp11_1 != 0)
                    goto label_1400de969
                
                goto label_1400df710
            
        label_1400de951:
            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x32), 0x84)
            char temp10_1 = temp0_323 & 8
            cond:26_1 = temp10_1 != 0
            cond:27_1 = temp10_1 == 0
            cond:28_1 = temp10_1 != 0
            cond:29_1 = temp10_1 == 0
            
            if (temp10_1 != 0)
            label_1400de969:
                zmm9 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
                
                if (cond:27_1)
                    goto label_1400df71a
                
                goto label_1400de97d
            
        label_1400df710:
            zmm9 = zmm3
            
            if (cond:26_1)
            label_1400de97d:
                zmm8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                
                if (cond:28_1)
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
            else
            label_1400df71a:
                zmm8 = zmm2
                
                if (not(cond:29_1))
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
            
            zmm5 = _mm_and_ps(_mm_add_ps(temp0_321, var_2c8), zmm0)
            zmm10 = zmm1
            var_2c8 = _mm_or_ps(_mm_andnot_ps(zmm0, var_2c8), zmm5)
        
        rbx = zx.q(rbx.d + 4)
    while (rbx.d s< i)
    
    rdx_15 = arg11
    result = arg10
    
    if (rbx.d s< arg12)
        goto label_1400df7ab
zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm9, zmm9[0].q), zmm9)
zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm1 = _mm_unpacklo_ps(zmm1, zmm2.q)
zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10.q), zmm10)
zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm2 = _mm_add_ps(*rdx_15 | rdx_15[1].d.q << 0x40, zmm1.q | zmm2.q << 0x40)
*rdx_15 = zmm2.d
zmm0.q = zmm2 u>> 0x40
*(rdx_15 + 4) = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
rdx_15[1].d = zmm0.d
zmm0 = _mm_add_ps(_mm_shuffle_epi32(var_2c8, 0xee), var_2c8)
zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm1.d = zmm1.d f+ *result
*result = zmm1.d
return result
