// 函数: sub_1400aba50
// 地址: 0x1400aba50
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
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint128_t zmm0 =
    __mulps_xmmps_memps(__insertps_xmmps_memd_immb(zx.o(*arg3), arg3[1].d, 0x20), data_142e6d9f0)
uint32_t temp0_2 = _mm_movemask_ps(*arg11)
float temp0_4[0x4] = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
float temp0_5[0x4] = _mm_movehdup_ps(temp0_4)
float zmm3[0x4] = _mm_unpackhi_pd(temp0_4, temp0_4[0].q)
int32_t result
uint128_t var_468
uint128_t var_458
uint32_t var_428[0x4]
uint128_t var_3e8
int64_t var_3d8
uint128_t var_358
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm4[0x4]
uint128_t zmm5

if (temp0_2 != 0xf)
    float var_338 = temp0_4[0]
    float var_334_1 = temp0_5[0]
    float var_330_1 = zmm3[0]
    zmm0 = _mm_add_ps(zmm0, __insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20))
    int32_t var_348 = zmm0.d
    int32_t var_344_1 = __extractps_memd_xmmps_immb(zmm0, 1)
    int32_t var_340_1 = __extractps_memd_xmmps_immb(zmm0, 2)
    int32_t r14_10 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
    uint64_t r15_1
    
    if (r14_10 s<= 0)
        result = 0
        r15_1 = 0
    else
        r15_1 = 0
        zmm15 = zx.o(0)
        result = 0
        
        while (true)
            bool cond:2_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:2_1))
                uint128_t var_3c8_2 =
                    __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15_1.d), 0), data_142e11d00)
                int64_t rax_17 = sx.q((r15_1 << 2).d * 3)
                zmm0 = *(arg7 + rax_17)
                zmm2 = *(arg7 + rax_17 + 0x10)
                zmm5 = *(arg7 + rax_17 + 0x20)
                zmm3 = _mm_shuffle_epi32(zmm0, 0xe5)
                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
                zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), zmm0, 0x3f)
                zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), zmm3, 3)
                zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
                float temp0_293[0x4] = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
                var_428 = zmm4
                float var_3f8_2[0x4] = zmm15
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_468 = zmm0
                var_458 = zmm0
                uint128_t var_448_3 = zmm0
                uint128_t var_438_2 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_295[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_296[0x4] = _mm_mul_ps(temp0_295, temp0_293)
                float temp0_297[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_298[0x4] = _mm_mul_ps(temp0_297, zmm4)
                float temp0_299[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm5 = _mm_mul_ps(temp0_299, zmm3)
                float temp0_302[0x4] = _mm_sub_ps(temp0_296, _mm_mul_ps(zmm3, temp0_297))
                float temp0_304[0x4] = _mm_sub_ps(temp0_298, _mm_mul_ps(temp0_293, temp0_299))
                zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, temp0_295))
                float temp0_307[0x4] = _mm_add_ps(temp0_302, temp0_302)
                float temp0_308[0x4] = _mm_add_ps(temp0_304, temp0_304)
                zmm5 = _mm_add_ps(zmm5, zmm5)
                float temp0_310[0x4] = _mm_mul_ps(zmm0, temp0_307)
                float temp0_311[0x4] = _mm_mul_ps(zmm0, temp0_308)
                float temp0_312[0x4] = __addps_xmmps_memps(temp0_310, var_428)
                float temp0_313[0x4] = __addps_xmmps_memps(temp0_311, zmm3)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm5), temp0_293)
                zmm4 = _mm_mul_ps(zmm5, temp0_295)
                float temp0_317[0x4] = _mm_mul_ps(temp0_307, temp0_297)
                float temp0_318[0x4] = _mm_mul_ps(temp0_308, temp0_299)
                zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_308, temp0_297)), temp0_312)
                float temp0_324[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_317, _mm_mul_ps(zmm5, temp0_299)), temp0_313)
                float temp0_327[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_318, _mm_mul_ps(temp0_307, temp0_295)), zmm0)
                zmm3 = arg6[1].d
                zmm5 = *(arg6 + 0x14)
                float temp0_329[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm4)
                zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_324)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_327)
                float var_178[0x4] = temp0_329
                uint128_t var_398_2 = zmm5
                uint128_t var_168 = zmm5
                var_358 = zmm0
                uint128_t var_158_1 = zmm0
                int64_t rax_18 = 0
                zmm0 = temp0_329
                
                while (true)
                    zmm2 = *(&var_338 + rax_18)
                    float temp0_334[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_336 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_334, zmm0, 1))
                    
                    if (temp0_336 != 0)
                        if ((temp0_336 & 1) == 0)
                            if ((temp0_336 & 2) != 0)
                                goto label_1400acabf
                            
                            goto label_1400ac9e3
                        
                        *(&var_468 + (rax_18 << 2)) = zmm2[0]
                        
                        if ((temp0_336 & 2) != 0)
                        label_1400acabf:
                            *(&var_468:4 + (rax_18 << 2)) = zmm2[0]
                            
                            if ((temp0_336 & 4) == 0)
                                goto label_1400ac9ed
                            
                            goto label_1400acacf
                        
                    label_1400ac9e3:
                        
                        if ((temp0_336 & 4) != 0)
                        label_1400acacf:
                            *(&var_468:8 + (rax_18 << 2)) = zmm2[0]
                            
                            if ((temp0_336 & 8) != 0)
                                *(&var_468:0xc + (rax_18 << 2)) = zmm2[0]
                        else
                        label_1400ac9ed:
                            
                            if ((temp0_336 & 8) != 0)
                                *(&var_468:0xc + (rax_18 << 2)) = zmm2[0]
                    
                    float temp0_337[0x4] = _mm_cmpeq_ps(temp0_334, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_337) != 0)
                        zmm3 = *(&var_348 + rax_18)
                        float temp0_339[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_342 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_339, 1), temp0_337))
                        
                        if (temp0_342 != 0)
                            if ((temp0_342 & 1) == 0)
                                if ((temp0_342 & 2) != 0)
                                    goto label_1400acaf3
                                
                                goto label_1400aca43
                            
                            *(&var_468 + (rax_18 << 2)) = zmm3[0]
                            
                            if ((temp0_342 & 2) != 0)
                            label_1400acaf3:
                                *(&var_468:4 + (rax_18 << 2)) = zmm3[0]
                                
                                if ((temp0_342 & 4) == 0)
                                    goto label_1400aca4d
                                
                                goto label_1400acb03
                            
                        label_1400aca43:
                            
                            if ((temp0_342 & 4) != 0)
                            label_1400acb03:
                                *(&var_468:8 + (rax_18 << 2)) = zmm3[0]
                                
                                if ((temp0_342 & 8) != 0)
                                    *(&var_468:0xc + (rax_18 << 2)) = zmm3[0]
                            else
                            label_1400aca4d:
                                
                                if ((temp0_342 & 8) != 0)
                                    *(&var_468:0xc + (rax_18 << 2)) = zmm3[0]
                        
                        char temp0_345 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_339, 5), temp0_337))
                        
                        if (temp0_345 != 0)
                            zmm0 = *(&var_178 + (rax_18 << 2))
                            
                            if ((temp0_345 & 1) == 0)
                                if ((temp0_345 & 2) != 0)
                                    goto label_1400acb27
                                
                                goto label_1400aca88
                            
                            *(&var_468 + (rax_18 << 2)) = zmm0.d
                            
                            if ((temp0_345 & 2) != 0)
                            label_1400acb27:
                                *(&var_468:4 + (rax_18 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_345 & 4) == 0)
                                    goto label_1400aca92
                                
                                goto label_1400acb39
                            
                        label_1400aca88:
                            
                            if ((temp0_345 & 4) != 0)
                            label_1400acb39:
                                *(&var_468:8 + (rax_18 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((temp0_345 & 8) != 0)
                                    *(&var_468:0xc + (rax_18 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_1400aca92:
                                
                                if ((temp0_345 & 8) != 0)
                                    *(&var_468:0xc + (rax_18 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                    
                    if (rax_18 == 8)
                        break
                    
                    zmm0 = *(&var_168 + (rax_18 << 2))
                    rax_18 += 4
                
                zmm5 = var_468
                zmm14 = var_458
                zmm1 = var_448_3
                zmm4 = *arg1
                zmm10 = *(arg1 + 4)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm0 = _mm_sub_ps(zmm5, zmm4)
                float temp0_351[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_352[0x4] = _mm_sub_ps(zmm14, temp0_351)
                zmm9 = arg1[1].d
                float temp0_353[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                float var_368_2[0x4] = zmm1
                float temp0_354[0x4] = _mm_sub_ps(zmm1, temp0_353)
                zmm2 = *arg3
                float temp0_355[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm0 = _mm_div_ps(zmm0, temp0_355)
                zmm7 = arg3[1].d
                zmm15 = _mm_cvttps_epi32(zmm0)
                uint32_t var_3a8_2[0x4] = zmm4
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_355), zmm4)
                zmm13 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm7, 0x20), data_142fc9600)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                float temp0_364[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
                var_3d8.o = zmm5
                zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_364), zmm5, 1)
                zmm2 = _mm_add_epi32(zmm15, zmm4)
                float temp0_368[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm4 = *(arg3 + 4)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_370[0x4] = _mm_div_ps(temp0_352, zmm4)
                float temp0_371[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
                float temp0_372[0x4] = _mm_div_ps(temp0_354, temp0_371)
                zmm6 = _mm_cvttps_epi32(temp0_370)
                zmm1 = _mm_cvttps_epi32(temp0_372)
                zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), zmm4)
                float temp0_378[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_371)
                zmm5 = _mm_add_ps(zmm5, temp0_351)
                float temp0_380[0x4] = _mm_add_ps(temp0_378, temp0_353)
                float temp0_381[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                zmm5 = _mm_add_ps(zmm5, temp0_381)
                zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                var_468 = temp0_368
                zmm0 = _mm_cmpeq_ps(zmm5, zmm14, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm6
                
                float temp0_386[0x4] = _mm_add_ps(temp0_380, zmm13)
                bool cond:4_1 = _mm_movemask_ps(_mm_cmpeq_ps(zmm5, zmm14, 5)) == 0
                zmm5 = zmm14
                
                if (not(cond:4_1))
                    zmm2 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
                
                float temp0_390[0x4] = __subps_xmmps_memps(var_3d8.o, temp0_329)
                var_3e8 = zmm5
                float temp0_391[0x4] = __subps_xmmps_memps(zmm5, var_398_2)
                float temp0_392[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                var_458 = temp0_392
                zmm0 = _mm_cmpeq_ps(temp0_386, var_368_2, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm1
                
                zmm5 = __subps_xmmps_memps(var_368_2, var_358)
                float temp0_396[0x4] = _mm_mul_ps(temp0_390, temp0_390)
                float temp0_397[0x4] = _mm_mul_ps(temp0_391, temp0_391)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_386, var_368_2, 5)) != 0)
                    zmm2 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
                
                float temp0_401[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm15 = zx.o(0)
                float temp0_403[0x4] = _mm_add_ps(_mm_add_ps(temp0_396, zmm15), temp0_397)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_368), temp0_355), 
                    var_3a8_2)
                float temp0_409[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_392), zmm4), temp0_351)
                float temp0_412[0x4] = __addps_xmmps_memps(
                    _mm_mul_ps(_mm_cvtepi32_ps(temp0_401), temp0_371), temp0_353)
                float temp0_413[0x4] = _mm_add_ps(temp0_364, zmm0)
                float temp0_414[0x4] = _mm_add_ps(temp0_381, temp0_409)
                zmm13 = _mm_add_ps(zmm13, temp0_412)
                zmm0 = _mm_sub_ps(var_3d8.o, temp0_413)
                float temp0_417[0x4] = _mm_sub_ps(var_3e8, temp0_414)
                float temp0_418[0x4] = _mm_sub_ps(var_368_2, zmm13)
                zmm0 = _mm_div_ps(zmm0, temp0_355)
                float temp0_420[0x4] = _mm_div_ps(temp0_417, zmm4)
                float temp0_421[0x4] = _mm_div_ps(temp0_418, temp0_371)
                var_428 = zmm0
                zmm5 = _mm_mul_ps(zmm5, zmm5)
                int64_t rax_23 = 0
                zmm3 = _mm_cmpeq_epi32(temp0_414, temp0_414)
                char i = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_368, zmm3))
                
                if (i == 0)
                    goto label_1400acf1d
                
                do
                    if ((i & 1) == 0)
                        if ((i & 2) != 0)
                            goto label_1400ace9d
                        
                        goto label_1400ace60
                    
                    *(&var_468 + (rax_23 << 2)) = 0
                    
                    if ((i & 2) != 0)
                    label_1400ace9d:
                        *(&var_468:4 + (rax_23 << 2)) = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400ace66
                        
                        goto label_1400aceab
                    
                label_1400ace60:
                    
                    if ((i & 4) == 0)
                    label_1400ace66:
                        
                        if ((i & 8) != 0)
                            goto label_1400aceb9
                        
                        goto label_1400ace6c
                    
                label_1400aceab:
                    *(&var_468:8 + (rax_23 << 2)) = 0
                    
                    if ((i & 8) != 0)
                    label_1400aceb9:
                        *(&var_468:0xc + (rax_23 << 2)) = 0
                        
                        if ((i & 1) == 0)
                            goto label_1400ace72
                        
                        goto label_1400acec7
                    
                label_1400ace6c:
                    
                    if ((i & 1) == 0)
                    label_1400ace72:
                        
                        if ((i & 2) != 0)
                            goto label_1400aced5
                        
                        goto label_1400ace78
                    
                label_1400acec7:
                    var_428[rax_23] = 0
                    
                    if ((i & 2) != 0)
                    label_1400aced5:
                        var_428[1 + rax_23] = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400ace7e
                        
                        goto label_1400acee3
                    
                label_1400ace78:
                    
                    if ((i & 4) != 0)
                    label_1400acee3:
                        var_428[2 + rax_23] = 0
                        
                        if ((i & 8) != 0)
                            var_428[3 + rax_23] = 0
                    else
                    label_1400ace7e:
                        
                        if ((i & 8) != 0)
                            var_428[3 + rax_23] = 0
                    
                label_1400acf1d:
                    int32_t rdi_11 = *(arg4 + rax_23)
                    char temp0_430 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rdi_11 - 1), 0), *(&var_468 + (rax_23 << 2))))
                    
                    if (temp0_430 != 0)
                        if ((temp0_430 & 1) == 0)
                            if ((temp0_430 & 2) != 0)
                                goto label_1400acddd
                            
                            goto label_1400acf55
                        
                        *(&var_468 + (rax_23 << 2)) = rdi_11 - 2
                        
                        if ((temp0_430 & 2) != 0)
                        label_1400acddd:
                            *(&var_468:4 + (rax_23 << 2)) = rdi_11 - 2
                            
                            if ((temp0_430 & 4) == 0)
                                goto label_1400acf5f
                            
                            goto label_1400acdeb
                        
                    label_1400acf55:
                        
                        if ((temp0_430 & 4) == 0)
                        label_1400acf5f:
                            
                            if ((temp0_430 & 8) != 0)
                                goto label_1400acdf9
                            
                            goto label_1400acf69
                        
                    label_1400acdeb:
                        *(&var_468:8 + (rax_23 << 2)) = rdi_11 - 2
                        
                        if ((temp0_430 & 8) != 0)
                        label_1400acdf9:
                            *(&var_468:0xc + (rax_23 << 2)) = rdi_11 - 2
                            
                            if ((temp0_430 & 1) == 0)
                                goto label_1400acf73
                            
                            goto label_1400ace07
                        
                    label_1400acf69:
                        
                        if ((temp0_430 & 1) == 0)
                        label_1400acf73:
                            
                            if ((temp0_430 & 2) != 0)
                                goto label_1400ace19
                            
                            goto label_1400acf7d
                        
                    label_1400ace07:
                        var_428[rax_23] = 0x3f800000
                        
                        if ((temp0_430 & 2) != 0)
                        label_1400ace19:
                            var_428[1 + rax_23] = 0x3f800000
                            
                            if ((temp0_430 & 4) == 0)
                                goto label_1400acf87
                            
                            goto label_1400ace2b
                        
                    label_1400acf7d:
                        
                        if ((temp0_430 & 4) != 0)
                        label_1400ace2b:
                            var_428[2 + rax_23] = 0x3f800000
                            
                            if ((temp0_430 & 8) != 0)
                                var_428[3 + rax_23] = 0x3f800000
                        else
                        label_1400acf87:
                            
                            if ((temp0_430 & 8) != 0)
                                var_428[3 + rax_23] = 0x3f800000
                    
                    if (rax_23 == 8)
                        break
                    
                    zmm12 = *(&var_458 + (rax_23 << 2))
                    rax_23 += 4
                    i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
                while (i != 0)
                
                float temp0_431[0x4] = _mm_add_ps(temp0_403, zmm5)
                zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm1 = var_468
                zmm2 = var_458
                zmm4 = _mm_mullo_epi32(zmm8, zmm1)
                zmm12 = _mm_add_epi32(zmm4, zmm2)
                zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm13 = _mm_mullo_epi32(zmm12, zmm0)
                zmm5 = _mm_add_epi32(zmm13, temp0_401)
                float (* rax_25)[0x4] = *(arg5 + 0x10)
                zmm5 = _mm_slli_epi32(zmm5, 2)
                int64_t rbp_7 = sx.q(zmm5.d)
                int64_t rdi_13 = sx.q(_mm_extract_epi32(zmm5, 1))
                int64_t r12_6 = sx.q(_mm_extract_epi32(zmm5, 2))
                int64_t rbx_6 = sx.q(_mm_extract_epi32(zmm5, 3))
                float temp0_444[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_25 + rbp_7), *(rax_25 + rdi_13), 0x10), 
                        *(rax_25 + r12_6), 0x20), 
                    *(rax_25 + rbx_6), 0x30)
                zmm11 = *(rax_25 + rbp_7 + 4)
                zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm3), zmm8)
                zmm7 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm2), zmm0), temp0_401), 2)
                zmm12 = _mm_mullo_epi32(_mm_add_epi32(zmm12, zmm8), zmm0)
                zmm5 = *(rax_25 + sx.q(zmm7[0]))
                int32_t temp0_453 = _mm_extract_epi32(zmm7, 1)
                int64_t rdx_29 = sx.q(_mm_extract_epi32(zmm7, 2))
                int32_t temp0_455 = _mm_extract_epi32(zmm7, 3)
                zmm5 = _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm5, *(rax_25 + sx.q(temp0_453)), 0x10), 
                            *(rax_25 + rdx_29), 0x20), 
                        *(rax_25 + sx.q(temp0_455)), 0x30), 
                    temp0_444)
                zmm9 = var_428
                zmm2 = _mm_sub_epi32(zmm2, zmm3)
                uint32_t temp0_464[0x4] = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), temp0_401), 2)
                int64_t rdx_32 = sx.q(temp0_464[0])
                int32_t temp0_465 = _mm_extract_epi32(temp0_464, 1)
                int32_t temp0_466 = _mm_extract_epi32(temp0_464, 2)
                zmm3 = *(rax_25 + rdx_32)
                int32_t temp0_467 = _mm_extract_epi32(temp0_464, 3)
                zmm5 = _mm_mul_ps(zmm5, zmm9)
                float temp0_471[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_25 + sx.q(temp0_465)), 0x10), 
                        *(rax_25 + sx.q(temp0_466)), 0x20), 
                    *(rax_25 + sx.q(temp0_467)), 0x30)
                zmm2 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm1), zmm0), temp0_401), 2)
                zmm7 = *(rax_25 + sx.q(zmm2[0]))
                int64_t rdx_38 = sx.q(_mm_extract_epi32(zmm2, 1))
                int32_t temp0_477 = _mm_extract_epi32(zmm2, 2)
                int64_t rbp_15 = sx.q(_mm_extract_epi32(zmm2, 3))
                float temp0_481[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_25 + rdx_38), 0x10), 
                        *(rax_25 + sx.q(temp0_477)), 0x20), 
                    *(rax_25 + rbp_15), 0x30)
                zmm5 = _mm_add_ps(zmm5, temp0_444)
                float temp0_483[0x4] = _mm_sub_ps(temp0_481, temp0_471)
                float temp0_486[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm11, *(rax_25 + rdi_13 + 4), 0x10), 
                        *(rax_25 + r12_6 + 4), 0x20), 
                    *(rax_25 + rbx_6 + 4), 0x30)
                float temp0_487[0x4] = _mm_mul_ps(temp0_483, zmm9)
                zmm0 = _mm_add_epi32(zmm0, temp0_401)
                zmm13 = _mm_add_epi32(zmm13, zmm0)
                zmm0 = _mm_add_epi32(zmm0, zmm12)
                zmm12 = _mm_slli_epi32(_mm_add_epi32(zmm12, temp0_401), 2)
                zmm2 = *(rax_25 + sx.q(zmm12[0]) + 4)
                int64_t rdx_42 = sx.q(_mm_extract_epi32(zmm12, 1))
                int32_t temp0_494 = _mm_extract_epi32(zmm12, 2)
                int64_t rdi_15 = sx.q(_mm_extract_epi32(zmm12, 3))
                float temp0_498[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(rax_25 + rdx_42 + 4), 0x10), 
                        *(rax_25 + sx.q(temp0_494) + 4), 0x20), 
                    *(rax_25 + rdi_15 + 4), 0x30)
                float temp0_499[0x4] = _mm_add_ps(temp0_487, temp0_471)
                float temp0_502[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_498, temp0_486), zmm9), temp0_486)
                zmm13 = _mm_slli_epi32(zmm13, 2)
                zmm3 = *(rax_25 + sx.q(zmm13.d) + 4)
                int32_t temp0_504 = _mm_extract_epi32(zmm13, 1)
                int64_t rsi_43 = sx.q(_mm_extract_epi32(zmm13, 2))
                int32_t temp0_506 = _mm_extract_epi32(zmm13, 3)
                float temp0_509[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_25 + sx.q(temp0_504) + 4), 0x10), 
                        *(rax_25 + rsi_43 + 4), 0x20), 
                    *(rax_25 + sx.q(temp0_506) + 4), 0x30)
                zmm0 = _mm_slli_epi32(zmm0, 2)
                int32_t temp0_511 = _mm_extract_epi32(zmm0, 1)
                zmm1 = *(rax_25 + sx.q(zmm0.d) + 4)
                int64_t rsi_46 = sx.q(_mm_extract_epi32(zmm0, 2))
                int64_t rdi_18 = sx.q(_mm_extract_epi32(zmm0, 3))
                float temp0_519[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm1, 
                                        *(rax_25 + sx.q(temp0_511) + 4), 0x10), 
                                    *(rax_25 + rsi_46 + 4), 0x20), 
                                *(rax_25 + rdi_18 + 4), 0x30), 
                            temp0_509), 
                        zmm9), 
                    temp0_509)
                float temp0_522[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_499, zmm5), temp0_420), zmm5)
                zmm1 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_519, temp0_502), temp0_420), 
                                temp0_502), 
                            temp0_522), 
                        temp0_421), 
                    temp0_522)
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
                
                zmm0 = *arg9
                char i_7 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
                
                if (i_7 == 0)
                    result = 0
                    r15_1 = zx.q(r15_1.d + 4)
                    
                    if (r15_1.d s>= r14_10)
                        break
                    
                    continue
                else
                    uint64_t i_1 = zx.q(i_7)
                    result = 0
                    
                    do
                        uint64_t rdi_19
                        
                        if (i_1 == 0)
                            rdi_19 = 0x40
                            i_1 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400ad351:
                                float var_208[0x4] = zmm1
                                uint64_t rdi_20 = zx.q(rdi_19.d) & 3
                                *arg9 = var_208[rdi_20].d
                                float var_1f8[0x4] = var_3c8_2
                                *arg8 = var_1f8[rdi_20]
                        else
                            uint64_t rflags_2
                            rdi_19, rflags_2 = _bit_scan_forward(i_1)
                            i_1 &= not.q(1 << (rdi_19 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400ad351
                        result.b = 1
                    while (i_1 != 0)
            
            r15_1 = zx.q(r15_1.d + 4)
            
            if (r15_1.d s>= r14_10)
                break
    
    if (r15_1.d s< arg10)
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm2 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15_1.d), 0), data_142e11d00)
            zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm2)
            float var_2e8_2[0x4] = zmm2
            zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm2) & zmm3
            int64_t rax_43 = sx.q(zmm1[0])
            void* r14_13 = arg7 + (rax_43 << 2)
            zmm0 = *(arg7 + (rax_43 << 2))
            int64_t rbx_9 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* r12_8 = arg7 + (rbx_9 << 2)
            int64_t rbp_17 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* rdx_58 = arg7 + (rbp_17 << 2)
            int64_t rax_45 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rsi_50 = arg7 + (rax_45 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbx_9 << 2)), 0x10), 
                    *(arg7 + (rbp_17 << 2)), 0x20), 
                *(arg7 + (rax_45 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm3
            float (* r15_3)[0x4] = zx.q(zmm2[0])
            zmm8 = *(r15_3 + r14_13)
            int32_t* rax_46 = zx.q(_mm_extract_epi32(zmm2, 1))
            int32_t* rdi_26 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rbx_10 = zx.q(_mm_extract_epi32(zmm2, 3))
            var_358.q = rdi_26
            var_3e8.q = rbx_10
            float temp0_656[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_46 + r12_8), 0x10), *(rdi_26 + rdx_58), 
                    0x20), 
                *(rbx_10 + rsi_50), 0x30)
            zmm2 = data_142fc95f0 & zmm3
            zmm6 = *(zx.q(zmm2[0]) + r14_13)
            int32_t* rax_48 = zx.q(_mm_extract_epi32(zmm2, 1))
            int32_t* rdi_27 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* r14_14 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_662[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_48 + r12_8), 0x10), *(rdi_27 + rdx_58), 
                    0x20), 
                *(r14_14 + rsi_50), 0x30)
            uint128_t var_2a8_2 = zmm0
            float var_278_2[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_468 = zmm5
            var_458 = zmm5
            uint128_t var_448_6 = zmm5
            zmm7 = *arg6
            zmm1 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_664[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_665[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_666[0x4] = _mm_mul_ps(temp0_656, temp0_665)
            float temp0_667[0x4] = _mm_mul_ps(temp0_665, temp0_662)
            float temp0_668[0x4] = _mm_mul_ps(temp0_662, temp0_664)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_670[0x4] = _mm_mul_ps(temp0_664, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm4)
            float temp0_672[0x4] = _mm_mul_ps(zx.o(0), zmm5)
            float temp0_674[0x4] = _mm_sub_ps(temp0_668, _mm_mul_ps(zmm4, temp0_656))
            zmm0 = _mm_sub_ps(zmm0, temp0_667)
            float temp0_676[0x4] = _mm_sub_ps(temp0_666, temp0_670)
            float temp0_677[0x4] = _mm_sub_ps(temp0_672, temp0_672)
            float temp0_678[0x4] = _mm_add_ps(temp0_674, temp0_674)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_680[0x4] = _mm_add_ps(temp0_676, temp0_676)
            float temp0_681[0x4] = _mm_add_ps(temp0_677, temp0_677)
            var_428 = temp0_678
            uint128_t var_418_6 = zmm0
            float var_408_6[0x4] = temp0_680
            float var_3f8_4[0x4] = temp0_681
            float temp0_682[0x4] = _mm_mul_ps(temp0_681, zmm5)
            float temp0_683[0x4] = _mm_mul_ps(zmm5, temp0_678)
            float temp0_684[0x4] = _mm_mul_ps(zmm5, zmm0)
            float temp0_685[0x4] = _mm_mul_ps(zmm5, temp0_680)
            float temp0_686[0x4] = __addps_xmmps_memps(temp0_683, var_2a8_2)
            float temp0_687[0x4] = __addps_xmmps_memps(temp0_684, temp0_656)
            float temp0_688[0x4] = __addps_xmmps_memps(temp0_685, temp0_662)
            uint128_t var_438_4 = zmm5
            float var_1e8_2[0x4] = temp0_686
            float var_1d8_2[0x4] = temp0_687
            float var_1c8_2[0x4] = temp0_688
            float var_1b8_2[0x4] = __addps_xmmps_memps(temp0_682, var_278_2)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_692[0x4] = _mm_mul_ps(zmm0, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_680)
            float temp0_694[0x4] = _mm_mul_ps(temp0_680, zmm5)
            float temp0_695[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm5 = _mm_mul_ps(zmm5, temp0_678)
            float temp0_697[0x4] = _mm_mul_ps(temp0_678, temp0_695)
            float temp0_699[0x4] = _mm_sub_ps(temp0_694, _mm_mul_ps(temp0_695, zmm0))
            float temp0_700[0x4] = _mm_sub_ps(temp0_697, zmm4)
            float temp0_701[0x4] = _mm_sub_ps(temp0_692, zmm5)
            float temp0_702[0x4] = _mm_add_ps(temp0_699, temp0_686)
            float temp0_703[0x4] = _mm_add_ps(temp0_700, temp0_687)
            float temp0_704[0x4] = _mm_add_ps(temp0_701, temp0_688)
            zmm0 = arg6[1].d
            zmm4 = *(arg6 + 0x14)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_702)
            zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_703)
            zmm1 = *(arg6 + 0x18)
            float temp0_710[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_704)
            uint128_t var_1a8 = zmm0
            uint32_t var_378_4[0x4] = zmm4
            uint32_t var_198[0x4] = zmm4
            float var_188_1[0x4] = temp0_710
            int64_t rdi_28 = 0
            zmm1 = zmm0
            
            while (true)
                zmm4 = *(&var_338 + rdi_28)
                float temp0_711[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm5 = _mm_cmpeq_ps(temp0_711, zmm1, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                    char temp0_715 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_715 & 1) == 0)
                        if ((temp0_715 & 2) != 0)
                            goto label_1400adc4d
                        
                        goto label_1400adb73
                    
                    *(&var_468 + (rdi_28 << 2)) = zmm4[0]
                    
                    if ((temp0_715 & 2) != 0)
                    label_1400adc4d:
                        *(&var_468:4 + (rdi_28 << 2)) = zmm4[0]
                        
                        if ((temp0_715 & 4) == 0)
                            goto label_1400adb7b
                        
                        goto label_1400adc5b
                    
                label_1400adb73:
                    
                    if ((temp0_715 & 4) != 0)
                    label_1400adc5b:
                        *(&var_468:8 + (rdi_28 << 2)) = zmm4[0]
                        
                        if ((temp0_715 & 8) != 0)
                            *(&var_468:0xc + (rdi_28 << 2)) = zmm4[0]
                    else
                    label_1400adb7b:
                        
                        if ((temp0_715 & 8) != 0)
                            *(&var_468:0xc + (rdi_28 << 2)) = zmm4[0]
                
                float temp0_716[0x4] = _mm_cmpeq_ps(temp0_711, zmm1, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm3, temp0_716)) != 0)
                    zmm5 = *(&var_348 + rdi_28)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 1), temp0_716)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm3)) != 0)
                        char temp0_724 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_724 & 1) == 0)
                            if ((temp0_724 & 2) != 0)
                                goto label_1400adc7b
                            
                            goto label_1400adbd4
                        
                        *(&var_468 + (rdi_28 << 2)) = zmm5.d
                        
                        if ((temp0_724 & 2) != 0)
                        label_1400adc7b:
                            *(&var_468:4 + (rdi_28 << 2)) = zmm5.d
                            
                            if ((temp0_724 & 4) == 0)
                                goto label_1400adbdc
                            
                            goto label_1400adc89
                        
                    label_1400adbd4:
                        
                        if ((temp0_724 & 4) != 0)
                        label_1400adc89:
                            *(&var_468:8 + (rdi_28 << 2)) = zmm5.d
                            
                            if ((temp0_724 & 8) != 0)
                                *(&var_468:0xc + (rdi_28 << 2)) = zmm5.d
                        else
                        label_1400adbdc:
                            
                            if ((temp0_724 & 8) != 0)
                                *(&var_468:0xc + (rdi_28 << 2)) = zmm5.d
                    
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 5), temp0_716)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm3)) != 0)
                        zmm2 = *(&var_1a8 + (rdi_28 << 2))
                        char temp0_729 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_729 & 1) == 0)
                            if ((temp0_729 & 2) != 0)
                                goto label_1400adca9
                            
                            goto label_1400adc15
                        
                        *(&var_468 + (rdi_28 << 2)) = zmm2[0]
                        
                        if ((temp0_729 & 2) != 0)
                        label_1400adca9:
                            *(&var_468:4 + (rdi_28 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                            
                            if ((temp0_729 & 4) == 0)
                                goto label_1400adc1d
                            
                            goto label_1400adcb9
                        
                    label_1400adc15:
                        
                        if ((temp0_729 & 4) != 0)
                        label_1400adcb9:
                            *(&var_468:8 + (rdi_28 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                            
                            if ((temp0_729 & 8) != 0)
                                *(&var_468:0xc + (rdi_28 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_1400adc1d:
                            
                            if ((temp0_729 & 8) != 0)
                                *(&var_468:0xc + (rdi_28 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                
                if (rdi_28 == 8)
                    break
                
                zmm1 = *(&var_198 + (rdi_28 << 2))
                rdi_28 += 4
            
            zmm2 = var_468
            zmm9 = var_458
            float temp0_820[0x4] = _mm_sub_ps(zmm2, zmm0)
            zmm5 = *arg1
            zmm6 = *(arg1 + 4)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_sub_ps(zmm2, zmm5)
            float temp0_823[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_824[0x4] = _mm_sub_ps(zmm9, temp0_823)
            zmm4 = *arg3
            zmm7 = *(arg3 + 4)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, zmm4)
            float temp0_827[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_828[0x4] = _mm_div_ps(temp0_824, temp0_827)
            zmm11 = arg3[1].d
            zmm12 = _mm_cvttps_epi32(zmm0)
            zmm10 = _mm_cvttps_epi32(temp0_828)
            uint32_t var_3b8_4[0x4] = zmm4
            uint128_t var_2b8_2 = zmm5
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), zmm4), zmm5)
            zmm5 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
            float temp0_836[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_836), zmm2, 1)
            zmm8 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(temp0_836, temp0_836))
            zmm4 = _mm_blendv_ps(zmm8, zmm12, zmm0)
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_827), temp0_823)
            float temp0_845[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm0 = _mm_add_ps(zmm0, temp0_845)
            zmm7 = zmm0
            zmm0 = _mm_cmpeq_ps(zmm0, zmm9, 1)
            char temp0_849 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm3))
            zmm13 = arg1[1].d
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm14 = var_448_6
            float temp0_851[0x4] = _mm_sub_ps(zmm14, zmm13)
            float temp0_852[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_851, temp0_852))
            float temp0_857[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_852), zmm13)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            var_468 = zmm4
            float temp0_859[0x4] = _mm_cmpeq_ps(zmm7, zmm9, 5)
            
            if (temp0_849 != 0)
                zmm12 = zmm10
            
            float var_398_4[0x4] = zmm9
            float temp0_860[0x4] = __subps_xmmps_memps(zmm9, var_378_4)
            float temp0_861[0x4] = _mm_mul_ps(temp0_820, temp0_820)
            float temp0_862[0x4] = _mm_add_ps(temp0_857, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_859, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
            
            float temp0_866[0x4] = __subps_xmmps_memps(zmm14, temp0_710)
            float temp0_867[0x4] = _mm_add_ps(temp0_861, zx.o(0))
            float temp0_868[0x4] = _mm_mul_ps(temp0_860, temp0_860)
            float temp0_869[0x4] = _mm_blendv_ps(zmm8, zmm12, zmm0)
            var_458 = temp0_869
            zmm0 = _mm_cmpeq_ps(temp0_862, zmm14, 5)
            float temp0_871[0x4] = _mm_cmpeq_ps(temp0_862, zmm14, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_871, zmm3)) != 0)
                zmm12 = zmm1
            
            float temp0_874[0x4] = _mm_add_ps(temp0_867, temp0_868)
            float temp0_875[0x4] = _mm_mul_ps(temp0_866, temp0_866)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            float temp0_879[0x4] = _mm_blendv_ps(zmm8, zmm12, temp0_871)
            float temp0_880[0x4] = _mm_add_ps(temp0_874, temp0_875)
            zmm9 = var_3b8_4
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm9), var_2b8_2)
            float temp0_886[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_869), temp0_827), temp0_823)
            float temp0_889[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_879), temp0_852), zmm13)
            float temp0_890[0x4] = _mm_add_ps(temp0_836, zmm0)
            float temp0_891[0x4] = _mm_add_ps(temp0_845, temp0_886)
            zmm5 = _mm_add_ps(zmm5, temp0_889)
            zmm0 = _mm_sub_ps(zmm2, temp0_890)
            float temp0_894[0x4] = _mm_sub_ps(var_398_4, temp0_891)
            float temp0_895[0x4] = _mm_sub_ps(zmm14, zmm5)
            zmm0 = _mm_div_ps(zmm0, zmm9)
            float temp0_897[0x4] = _mm_div_ps(temp0_894, temp0_827)
            float temp0_898[0x4] = _mm_div_ps(temp0_895, temp0_852)
            var_428 = zmm0
            int64_t rcx_1 = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm0)
                
                if (_mm_movemask_ps(zmm4 & zmm3) != 0)
                    char temp0_902 = _mm_movemask_ps(zmm4)
                    
                    if ((temp0_902 & 1) == 0)
                        if ((temp0_902 & 2) != 0)
                            goto label_1400ae4df
                        
                        goto label_1400ae41f
                    
                    *(&var_468 + (rcx_1 << 2)) = 0
                    
                    if ((temp0_902 & 2) != 0)
                    label_1400ae4df:
                        *(&var_468:4 + (rcx_1 << 2)) = 0
                        
                        if ((temp0_902 & 4) == 0)
                            goto label_1400ae427
                        
                        goto label_1400ae4ef
                    
                label_1400ae41f:
                    
                    if ((temp0_902 & 4) == 0)
                    label_1400ae427:
                        
                        if ((temp0_902 & 8) != 0)
                            goto label_1400ae4ff
                        
                        goto label_1400ae42f
                    
                label_1400ae4ef:
                    *(&var_468:8 + (rcx_1 << 2)) = 0
                    
                    if ((temp0_902 & 8) != 0)
                    label_1400ae4ff:
                        *(&var_468:0xc + (rcx_1 << 2)) = 0
                        
                        if ((temp0_902 & 1) == 0)
                            goto label_1400ae437
                        
                        goto label_1400ae50f
                    
                label_1400ae42f:
                    
                    if ((temp0_902 & 1) == 0)
                    label_1400ae437:
                        
                        if ((temp0_902 & 2) != 0)
                            goto label_1400ae51f
                        
                        goto label_1400ae43f
                    
                label_1400ae50f:
                    var_428[rcx_1] = 0
                    
                    if ((temp0_902 & 2) != 0)
                    label_1400ae51f:
                        var_428[1 + rcx_1] = 0
                        
                        if ((temp0_902 & 4) == 0)
                            goto label_1400ae447
                        
                        goto label_1400ae52f
                    
                label_1400ae43f:
                    
                    if ((temp0_902 & 4) != 0)
                    label_1400ae52f:
                        var_428[2 + rcx_1] = 0
                        
                        if ((temp0_902 & 8) != 0)
                            var_428[3 + rcx_1] = 0
                    else
                    label_1400ae447:
                        
                        if ((temp0_902 & 8) != 0)
                            var_428[3 + rcx_1] = 0
                
                int32_t rdx_61 = *(arg4 + rcx_1)
                zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_61 - 1), 0), 
                    *(&var_468 + (rcx_1 << 2)))
                
                if (_mm_movemask_ps(zmm1 & zmm3) != 0)
                    char temp0_906 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_906 & 1) == 0)
                        if ((temp0_906 & 2) != 0)
                            goto label_1400ae55b
                        
                        goto label_1400ae48d
                    
                    *(&var_468 + (rcx_1 << 2)) = rdx_61 - 2
                    
                    if ((temp0_906 & 2) != 0)
                    label_1400ae55b:
                        *(&var_468:4 + (rcx_1 << 2)) = rdx_61 - 2
                        
                        if ((temp0_906 & 4) == 0)
                            goto label_1400ae495
                        
                        goto label_1400ae567
                    
                label_1400ae48d:
                    
                    if ((temp0_906 & 4) == 0)
                    label_1400ae495:
                        
                        if ((temp0_906 & 8) != 0)
                            goto label_1400ae573
                        
                        goto label_1400ae49d
                    
                label_1400ae567:
                    *(&var_468:8 + (rcx_1 << 2)) = rdx_61 - 2
                    
                    if ((temp0_906 & 8) != 0)
                    label_1400ae573:
                        *(&var_468:0xc + (rcx_1 << 2)) = rdx_61 - 2
                        
                        if ((temp0_906 & 1) == 0)
                            goto label_1400ae4a5
                        
                        goto label_1400ae57f
                    
                label_1400ae49d:
                    
                    if ((temp0_906 & 1) == 0)
                    label_1400ae4a5:
                        
                        if ((temp0_906 & 2) != 0)
                            goto label_1400ae58f
                        
                        goto label_1400ae4ad
                    
                label_1400ae57f:
                    var_428[rcx_1] = 0x3f800000
                    
                    if ((temp0_906 & 2) != 0)
                    label_1400ae58f:
                        var_428[1 + rcx_1] = 0x3f800000
                        
                        if ((temp0_906 & 4) == 0)
                            goto label_1400ae4b5
                        
                        goto label_1400ae59f
                    
                label_1400ae4ad:
                    
                    if ((temp0_906 & 4) != 0)
                    label_1400ae59f:
                        var_428[2 + rcx_1] = 0x3f800000
                        
                        if ((temp0_906 & 8) != 0)
                            var_428[3 + rcx_1] = 0x3f800000
                    else
                    label_1400ae4b5:
                        
                        if ((temp0_906 & 8) != 0)
                            var_428[3 + rcx_1] = 0x3f800000
                
                if (rcx_1 == 8)
                    break
                
                zmm4 = *(&var_458 + (rcx_1 << 2))
                rcx_1 += 4
            
            zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_468
            zmm5 = var_458
            zmm6 = _mm_mullo_epi32(zmm7, zmm4)
            zmm8 = _mm_add_epi32(zmm6, zmm5)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm8, zmm0)
            zmm1 = _mm_add_epi32(zmm13, temp0_879)
            float (* rcx_3)[0x4] = *(arg5 + 0x10)
            zmm1 = _mm_slli_epi32(zmm1, 2) & zmm3
            int64_t rax_102 = sx.q(zmm1[0])
            zmm2 = *(rcx_3 + rax_102)
            int64_t rdx_76 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rbx_19 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rbp_44 = sx.q(_mm_extract_epi32(zmm1, 3))
            float temp0_1037[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_3 + rdx_76), 0x10), *(rcx_3 + rbx_19), 
                    0x20), 
                *(rcx_3 + rbp_44), 0x30)
            zmm11 = _mm_cmpeq_epi32(temp0_852, temp0_852)
            zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm11), zmm7)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm5), zmm0), temp0_879), 2)
            zmm8 = _mm_mullo_epi32(_mm_add_epi32(zmm8, zmm7), zmm0)
            zmm1 &= zmm3
            zmm7 = *(rcx_3 + sx.q(zmm1[0]))
            int32_t temp0_1047 = _mm_extract_epi32(zmm1, 1)
            int64_t rbx_21 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_1049 = _mm_extract_epi32(zmm1, 3)
            float temp0_1053[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rcx_3 + sx.q(temp0_1047)), 0x10), 
                        *(rcx_3 + rbx_21), 0x20), 
                    *(rcx_3 + sx.q(temp0_1049)), 0x30), 
                temp0_1037)
            zmm10 = var_428
            float temp0_1055[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1053, zmm10), temp0_1037)
            zmm5 = _mm_sub_epi32(zmm5, zmm11)
            zmm6 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm5), zmm0), temp0_879), 2) & zmm3
            zmm2 = *(rcx_3 + sx.q(zmm6[0]))
            int64_t rbp_53 = sx.q(_mm_extract_epi32(zmm6, 1))
            int32_t temp0_1062 = _mm_extract_epi32(zmm6, 2)
            int64_t rdi_36 = sx.q(_mm_extract_epi32(zmm6, 3))
            float temp0_1066[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_3 + rbp_53), 0x10), 
                    *(rcx_3 + sx.q(temp0_1062)), 0x20), 
                *(rcx_3 + rdi_36), 0x30)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm4), zmm0), temp0_879), 2) & zmm3
            zmm4 = *(rcx_3 + sx.q(zmm5.d))
            int32_t temp0_1071 = _mm_extract_epi32(zmm5, 1)
            int64_t rbx_25 = sx.q(_mm_extract_epi32(zmm5, 2))
            int32_t temp0_1073 = _mm_extract_epi32(zmm5, 3)
            zmm4 = _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm4, *(rcx_3 + sx.q(temp0_1071)), 0x10), 
                            *(rcx_3 + rbx_25), 0x20), 
                        *(rcx_3 + sx.q(temp0_1073)), 0x30), 
                    temp0_1066), 
                zmm10)
            int32_t* rdi_38 = var_358.q
            int32_t* rsi_54 = var_3e8.q
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r15_3 + rcx_3 + rax_102), 
                        *(rax_46 + rcx_3 + rdx_76), 0x10), 
                    *(rdi_38 + rcx_3 + rbx_19), 0x20), 
                *(rsi_54 + rcx_3 + rbp_44), 0x30)
            zmm0 = _mm_add_epi32(zmm0, temp0_879)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, temp0_879), 2) & zmm3
            zmm6 = *(r15_3 + sx.q(zmm8[0]) + rcx_3)
            void* rax_111 = sx.q(_mm_extract_epi32(zmm8, 1)) + rcx_3
            void* rdx_80 = sx.q(_mm_extract_epi32(zmm8, 2)) + rcx_3
            void* rbp_61 = sx.q(_mm_extract_epi32(zmm8, 3)) + rcx_3
            float temp0_1092[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_46 + rax_111), 0x10), 
                    *(rdi_38 + rdx_80), 0x20), 
                *(rsi_54 + rbp_61), 0x30)
            zmm4 = _mm_add_ps(zmm4, temp0_1066)
            float temp0_1096[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1092, zmm5), zmm10), zmm5)
            zmm13 = _mm_slli_epi32(zmm13, 2) & zmm3
            zmm2 = *(r15_3 + sx.q(zmm13.d) + rcx_3)
            void* rax_117 = sx.q(_mm_extract_epi32(zmm13, 1)) + rcx_3
            void* rdx_83 = sx.q(_mm_extract_epi32(zmm13, 2)) + rcx_3
            void* rbp_64 = sx.q(_mm_extract_epi32(zmm13, 3)) + rcx_3
            float temp0_1103[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_46 + rax_117), 0x10), 
                    *(rdi_38 + rdx_83), 0x20), 
                *(rsi_54 + rbp_64), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2) & zmm3
            zmm1 = *(r15_3 + sx.q(zmm0.d) + rcx_3)
            void* rax_123 = sx.q(_mm_extract_epi32(zmm0, 1)) + rcx_3
            void* rdx_86 = sx.q(_mm_extract_epi32(zmm0, 2)) + rcx_3
            void* rbp_67 = sx.q(_mm_extract_epi32(zmm0, 3)) + rcx_3
            float temp0_1113[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_46 + rax_123), 0x10), 
                                *(rdi_38 + rdx_86), 0x20), 
                            *(rsi_54 + rbp_67), 0x30), 
                        temp0_1103), 
                    zmm10), 
                temp0_1103)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_1055), temp0_897), temp0_1055)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1113, temp0_1096), temp0_897), 
                            temp0_1096), 
                        zmm4), 
                    temp0_898), 
                zmm4)
            float temp0_1123[0x4] = _mm_cmpeq_ps(temp0_880, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_880, 7), temp0_1123), zmm3)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_1128[0x4] = _mm_rsqrt_ps(temp0_880)
                zmm5 = _mm_mul_ps(_mm_mul_ps(temp0_880, temp0_1128), temp0_1128)
                zmm4 = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_1128), data_142d3f640)
                float temp0_1134[0x4] = _mm_rcp_ps(zmm4)
                zmm4 = _mm_mul_ps(zmm4, temp0_1134)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), temp0_1134), zmm1), 
                    zmm0)
            
            zmm0 = *arg9
            uint32_t i_9 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm3))
            
            if (i_9 == 0)
                return 0
            
            uint64_t i_2 = zx.q(i_9)
            result = 0
            
            do
                uint64_t rdx_87
                
                if (i_2 == 0)
                    rdx_87 = 0x40
                    i_2 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400aee01:
                        float var_228[0x4] = zmm1
                        uint64_t rdx_88 = zx.q(rdx_87.d) & 3
                        *arg9 = var_228[rdx_88].d
                        float var_218[0x4] = var_2e8_2
                        *arg8 = var_218[rdx_88]
                else
                    uint64_t rflags_4
                    rdx_87, rflags_4 = _bit_scan_forward(i_2)
                    i_2 &= not.q(1 << (rdx_87 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400aee01
                result.b = 1
            while (i_2 != 0)
else
    float var_318 = temp0_4[0]
    float var_314_1 = temp0_5[0]
    float var_310_1 = zmm3[0]
    zmm0 = _mm_add_ps(zmm0, __insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20))
    int32_t var_328 = zmm0.d
    int32_t var_324_1 = __extractps_memd_xmmps_immb(zmm0, 1)
    int32_t var_320_1 = __extractps_memd_xmmps_immb(zmm0, 2)
    int32_t r12_5 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
    uint64_t r15
    
    if (r12_5 s<= 0)
        r15 = 0
        result = 0
    else
        result = 0
        zmm15 = zx.o(0)
        r15 = 0
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                uint128_t var_3c8_1 =
                    __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
                int64_t rax_4 = sx.q((r15 << 2).d * 3)
                zmm0 = *(arg7 + rax_4)
                zmm2 = *(arg7 + rax_4 + 0x10)
                zmm5 = *(arg7 + rax_4 + 0x20)
                zmm3 = _mm_shuffle_epi32(zmm0, 0xe5)
                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
                zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), zmm0, 0x3f)
                zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), zmm3, 3)
                zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
                float temp0_23[0x4] = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
                var_428 = zmm4
                float var_3f8_1[0x4] = zmm15
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_468 = zmm0
                var_458 = zmm0
                uint128_t var_448_1 = zmm0
                uint128_t var_438_1 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_25[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                float temp0_26[0x4] = _mm_mul_ps(temp0_25, temp0_23)
                float temp0_27[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_28[0x4] = _mm_mul_ps(temp0_27, zmm4)
                float temp0_29[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm5 = _mm_mul_ps(temp0_29, zmm3)
                float temp0_32[0x4] = _mm_sub_ps(temp0_26, _mm_mul_ps(zmm3, temp0_27))
                float temp0_34[0x4] = _mm_sub_ps(temp0_28, _mm_mul_ps(temp0_23, temp0_29))
                zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, temp0_25))
                float temp0_37[0x4] = _mm_add_ps(temp0_32, temp0_32)
                float temp0_38[0x4] = _mm_add_ps(temp0_34, temp0_34)
                zmm5 = _mm_add_ps(zmm5, zmm5)
                float temp0_40[0x4] = _mm_mul_ps(zmm0, temp0_37)
                float temp0_41[0x4] = _mm_mul_ps(zmm0, temp0_38)
                float temp0_42[0x4] = __addps_xmmps_memps(temp0_40, var_428)
                float temp0_43[0x4] = __addps_xmmps_memps(temp0_41, zmm3)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm5), temp0_23)
                zmm4 = _mm_mul_ps(zmm5, temp0_25)
                float temp0_47[0x4] = _mm_mul_ps(temp0_37, temp0_27)
                float temp0_48[0x4] = _mm_mul_ps(temp0_38, temp0_29)
                zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_38, temp0_27)), temp0_42)
                float temp0_54[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_47, _mm_mul_ps(zmm5, temp0_29)), temp0_43)
                float temp0_57[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_48, _mm_mul_ps(temp0_37, temp0_25)), zmm0)
                zmm3 = arg6[1].d
                zmm5 = *(arg6 + 0x14)
                float temp0_59[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm4)
                zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_54)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_57)
                float var_118[0x4] = temp0_59
                uint128_t var_398_1 = zmm5
                uint128_t var_108 = zmm5
                var_358 = zmm0
                uint128_t var_f8_1 = zmm0
                int64_t rax_5 = 0
                zmm0 = temp0_59
                
                while (true)
                    zmm2 = *(&var_318 + rax_5)
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_66 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_64, zmm0, 1))
                    
                    if (temp0_66 != 0)
                        if ((temp0_66 & 1) == 0)
                            if ((temp0_66 & 2) != 0)
                                goto label_1400abe6f
                            
                            goto label_1400abd93
                        
                        *(&var_468 + (rax_5 << 2)) = zmm2[0]
                        
                        if ((temp0_66 & 2) != 0)
                        label_1400abe6f:
                            *(&var_468:4 + (rax_5 << 2)) = zmm2[0]
                            
                            if ((temp0_66 & 4) == 0)
                                goto label_1400abd9d
                            
                            goto label_1400abe7f
                        
                    label_1400abd93:
                        
                        if ((temp0_66 & 4) != 0)
                        label_1400abe7f:
                            *(&var_468:8 + (rax_5 << 2)) = zmm2[0]
                            
                            if ((temp0_66 & 8) != 0)
                                *(&var_468:0xc + (rax_5 << 2)) = zmm2[0]
                        else
                        label_1400abd9d:
                            
                            if ((temp0_66 & 8) != 0)
                                *(&var_468:0xc + (rax_5 << 2)) = zmm2[0]
                    
                    float temp0_67[0x4] = _mm_cmpeq_ps(temp0_64, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_67) != 0)
                        zmm3 = *(&var_328 + rax_5)
                        float temp0_69[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_72 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_69, 1), temp0_67))
                        
                        if (temp0_72 != 0)
                            if ((temp0_72 & 1) == 0)
                                if ((temp0_72 & 2) != 0)
                                    goto label_1400abea3
                                
                                goto label_1400abdf3
                            
                            *(&var_468 + (rax_5 << 2)) = zmm3[0]
                            
                            if ((temp0_72 & 2) != 0)
                            label_1400abea3:
                                *(&var_468:4 + (rax_5 << 2)) = zmm3[0]
                                
                                if ((temp0_72 & 4) == 0)
                                    goto label_1400abdfd
                                
                                goto label_1400abeb3
                            
                        label_1400abdf3:
                            
                            if ((temp0_72 & 4) != 0)
                            label_1400abeb3:
                                *(&var_468:8 + (rax_5 << 2)) = zmm3[0]
                                
                                if ((temp0_72 & 8) != 0)
                                    *(&var_468:0xc + (rax_5 << 2)) = zmm3[0]
                            else
                            label_1400abdfd:
                                
                                if ((temp0_72 & 8) != 0)
                                    *(&var_468:0xc + (rax_5 << 2)) = zmm3[0]
                        
                        char temp0_75 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_69, 5), temp0_67))
                        
                        if (temp0_75 != 0)
                            zmm0 = *(&var_118 + (rax_5 << 2))
                            
                            if ((temp0_75 & 1) == 0)
                                if ((temp0_75 & 2) != 0)
                                    goto label_1400abed7
                                
                                goto label_1400abe38
                            
                            *(&var_468 + (rax_5 << 2)) = zmm0.d
                            
                            if ((temp0_75 & 2) != 0)
                            label_1400abed7:
                                *(&var_468:4 + (rax_5 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_75 & 4) == 0)
                                    goto label_1400abe42
                                
                                goto label_1400abee9
                            
                        label_1400abe38:
                            
                            if ((temp0_75 & 4) != 0)
                            label_1400abee9:
                                *(&var_468:8 + (rax_5 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((temp0_75 & 8) != 0)
                                    *(&var_468:0xc + (rax_5 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_1400abe42:
                                
                                if ((temp0_75 & 8) != 0)
                                    *(&var_468:0xc + (rax_5 << 2)) =
                                        __extractps_memd_xmmps_immb(zmm0, 3)
                    
                    if (rax_5 == 8)
                        break
                    
                    zmm0 = *(&var_108 + (rax_5 << 2))
                    rax_5 += 4
                
                zmm5 = var_468
                zmm14 = var_458
                zmm1 = var_448_1
                zmm4 = *arg1
                zmm10 = *(arg1 + 4)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm0 = _mm_sub_ps(zmm5, zmm4)
                float temp0_81[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_82[0x4] = _mm_sub_ps(zmm14, temp0_81)
                zmm9 = arg1[1].d
                float temp0_83[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                float var_368_1[0x4] = zmm1
                float temp0_84[0x4] = _mm_sub_ps(zmm1, temp0_83)
                zmm2 = *arg3
                float temp0_85[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm0 = _mm_div_ps(zmm0, temp0_85)
                zmm7 = arg3[1].d
                zmm15 = _mm_cvttps_epi32(zmm0)
                uint32_t var_3a8_1[0x4] = zmm4
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_85), zmm4)
                zmm13 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm7, 0x20), data_142fc9600)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                float temp0_94[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
                var_3d8.o = zmm5
                zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_94), zmm5, 1)
                zmm2 = _mm_add_epi32(zmm15, zmm4)
                float temp0_98[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm4 = *(arg3 + 4)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_100[0x4] = _mm_div_ps(temp0_82, zmm4)
                float temp0_101[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
                float temp0_102[0x4] = _mm_div_ps(temp0_84, temp0_101)
                zmm6 = _mm_cvttps_epi32(temp0_100)
                zmm1 = _mm_cvttps_epi32(temp0_102)
                zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), zmm4)
                float temp0_108[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_101)
                zmm5 = _mm_add_ps(zmm5, temp0_81)
                float temp0_110[0x4] = _mm_add_ps(temp0_108, temp0_83)
                float temp0_111[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                zmm5 = _mm_add_ps(zmm5, temp0_111)
                zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                var_468 = temp0_98
                zmm0 = _mm_cmpeq_ps(zmm5, zmm14, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm6
                
                float temp0_116[0x4] = _mm_add_ps(temp0_110, zmm13)
                bool cond:5_1 = _mm_movemask_ps(_mm_cmpeq_ps(zmm5, zmm14, 5)) == 0
                zmm5 = zmm14
                
                if (not(cond:5_1))
                    zmm2 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
                
                float temp0_120[0x4] = __subps_xmmps_memps(var_3d8.o, temp0_59)
                var_3e8 = zmm5
                float temp0_121[0x4] = __subps_xmmps_memps(zmm5, var_398_1)
                float temp0_122[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                var_458 = temp0_122
                zmm0 = _mm_cmpeq_ps(temp0_116, var_368_1, 1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm15 = zmm1
                
                zmm5 = __subps_xmmps_memps(var_368_1, var_358)
                float temp0_126[0x4] = _mm_mul_ps(temp0_120, temp0_120)
                float temp0_127[0x4] = _mm_mul_ps(temp0_121, temp0_121)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_116, var_368_1, 5)) != 0)
                    zmm2 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
                
                float temp0_131[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
                zmm15 = zx.o(0)
                float temp0_133[0x4] = _mm_add_ps(_mm_add_ps(temp0_126, zmm15), temp0_127)
                zmm0 =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_98), temp0_85), var_3a8_1)
                float temp0_139[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_122), zmm4), temp0_81)
                float temp0_142[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_131), temp0_101), temp0_83)
                float temp0_143[0x4] = _mm_add_ps(temp0_94, zmm0)
                float temp0_144[0x4] = _mm_add_ps(temp0_111, temp0_139)
                zmm13 = _mm_add_ps(zmm13, temp0_142)
                zmm0 = _mm_sub_ps(var_3d8.o, temp0_143)
                float temp0_147[0x4] = _mm_sub_ps(var_3e8, temp0_144)
                float temp0_148[0x4] = _mm_sub_ps(var_368_1, zmm13)
                zmm0 = _mm_div_ps(zmm0, temp0_85)
                float temp0_150[0x4] = _mm_div_ps(temp0_147, zmm4)
                float temp0_151[0x4] = _mm_div_ps(temp0_148, temp0_101)
                var_428 = zmm0
                zmm5 = _mm_mul_ps(zmm5, zmm5)
                int64_t rax_10 = 0
                zmm3 = _mm_cmpeq_epi32(temp0_144, temp0_144)
                char i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_98, zmm3))
                
                if (i_3 == 0)
                    goto label_1400ac2cd
                
                do
                    if ((i_3 & 1) == 0)
                        if ((i_3 & 2) != 0)
                            goto label_1400ac24d
                        
                        goto label_1400ac210
                    
                    *(&var_468 + (rax_10 << 2)) = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400ac24d:
                        *(&var_468:4 + (rax_10 << 2)) = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400ac216
                        
                        goto label_1400ac25b
                    
                label_1400ac210:
                    
                    if ((i_3 & 4) == 0)
                    label_1400ac216:
                        
                        if ((i_3 & 8) != 0)
                            goto label_1400ac269
                        
                        goto label_1400ac21c
                    
                label_1400ac25b:
                    *(&var_468:8 + (rax_10 << 2)) = 0
                    
                    if ((i_3 & 8) != 0)
                    label_1400ac269:
                        *(&var_468:0xc + (rax_10 << 2)) = 0
                        
                        if ((i_3 & 1) == 0)
                            goto label_1400ac222
                        
                        goto label_1400ac277
                    
                label_1400ac21c:
                    
                    if ((i_3 & 1) == 0)
                    label_1400ac222:
                        
                        if ((i_3 & 2) != 0)
                            goto label_1400ac285
                        
                        goto label_1400ac228
                    
                label_1400ac277:
                    var_428[rax_10] = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400ac285:
                        var_428[1 + rax_10] = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400ac22e
                        
                        goto label_1400ac293
                    
                label_1400ac228:
                    
                    if ((i_3 & 4) != 0)
                    label_1400ac293:
                        var_428[2 + rax_10] = 0
                        
                        if ((i_3 & 8) != 0)
                            var_428[3 + rax_10] = 0
                    else
                    label_1400ac22e:
                        
                        if ((i_3 & 8) != 0)
                            var_428[3 + rax_10] = 0
                    
                label_1400ac2cd:
                    int32_t rdi_1 = *(arg4 + rax_10)
                    char temp0_160 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rdi_1 - 1), 0), *(&var_468 + (rax_10 << 2))))
                    
                    if (temp0_160 != 0)
                        if ((temp0_160 & 1) == 0)
                            if ((temp0_160 & 2) != 0)
                                goto label_1400ac18d
                            
                            goto label_1400ac305
                        
                        *(&var_468 + (rax_10 << 2)) = rdi_1 - 2
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400ac18d:
                            *(&var_468:4 + (rax_10 << 2)) = rdi_1 - 2
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400ac30f
                            
                            goto label_1400ac19b
                        
                    label_1400ac305:
                        
                        if ((temp0_160 & 4) == 0)
                        label_1400ac30f:
                            
                            if ((temp0_160 & 8) != 0)
                                goto label_1400ac1a9
                            
                            goto label_1400ac319
                        
                    label_1400ac19b:
                        *(&var_468:8 + (rax_10 << 2)) = rdi_1 - 2
                        
                        if ((temp0_160 & 8) != 0)
                        label_1400ac1a9:
                            *(&var_468:0xc + (rax_10 << 2)) = rdi_1 - 2
                            
                            if ((temp0_160 & 1) == 0)
                                goto label_1400ac323
                            
                            goto label_1400ac1b7
                        
                    label_1400ac319:
                        
                        if ((temp0_160 & 1) == 0)
                        label_1400ac323:
                            
                            if ((temp0_160 & 2) != 0)
                                goto label_1400ac1c9
                            
                            goto label_1400ac32d
                        
                    label_1400ac1b7:
                        var_428[rax_10] = 0x3f800000
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400ac1c9:
                            var_428[1 + rax_10] = 0x3f800000
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400ac337
                            
                            goto label_1400ac1db
                        
                    label_1400ac32d:
                        
                        if ((temp0_160 & 4) != 0)
                        label_1400ac1db:
                            var_428[2 + rax_10] = 0x3f800000
                            
                            if ((temp0_160 & 8) != 0)
                                var_428[3 + rax_10] = 0x3f800000
                        else
                        label_1400ac337:
                            
                            if ((temp0_160 & 8) != 0)
                                var_428[3 + rax_10] = 0x3f800000
                    
                    if (rax_10 == 8)
                        break
                    
                    zmm12 = *(&var_458 + (rax_10 << 2))
                    rax_10 += 4
                    i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
                while (i_3 != 0)
                
                float temp0_161[0x4] = _mm_add_ps(temp0_133, zmm5)
                zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm1 = var_468
                zmm2 = var_458
                zmm4 = _mm_mullo_epi32(zmm8, zmm1)
                zmm12 = _mm_add_epi32(zmm4, zmm2)
                zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm13 = _mm_mullo_epi32(zmm12, zmm0)
                zmm5 = _mm_add_epi32(zmm13, temp0_131)
                float (* rax_12)[0x4] = *(arg5 + 0x10)
                zmm5 = _mm_slli_epi32(zmm5, 2)
                int64_t r14_1 = sx.q(zmm5.d)
                int64_t rdi_3 = sx.q(_mm_extract_epi32(zmm5, 1))
                int64_t rsi_14 = sx.q(_mm_extract_epi32(zmm5, 2))
                int64_t rbx_3 = sx.q(_mm_extract_epi32(zmm5, 3))
                float temp0_174[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_12 + r14_1), *(rax_12 + rdi_3), 0x10), 
                        *(rax_12 + rsi_14), 0x20), 
                    *(rax_12 + rbx_3), 0x30)
                zmm11 = *(rax_12 + r14_1 + 4)
                zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm3), zmm8)
                zmm7 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm2), zmm0), temp0_131), 2)
                zmm12 = _mm_mullo_epi32(_mm_add_epi32(zmm12, zmm8), zmm0)
                zmm5 = *(rax_12 + sx.q(zmm7[0]))
                int32_t temp0_183 = _mm_extract_epi32(zmm7, 1)
                int64_t r14_2 = sx.q(_mm_extract_epi32(zmm7, 2))
                int32_t temp0_185 = _mm_extract_epi32(zmm7, 3)
                zmm5 = _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm5, *(rax_12 + sx.q(temp0_183)), 0x10), 
                            *(rax_12 + r14_2), 0x20), 
                        *(rax_12 + sx.q(temp0_185)), 0x30), 
                    temp0_174)
                zmm9 = var_428
                zmm2 = _mm_sub_epi32(zmm2, zmm3)
                uint32_t temp0_194[0x4] = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), temp0_131), 2)
                int64_t rdx_7 = sx.q(temp0_194[0])
                int32_t temp0_195 = _mm_extract_epi32(temp0_194, 1)
                int32_t temp0_196 = _mm_extract_epi32(temp0_194, 2)
                zmm3 = *(rax_12 + rdx_7)
                int32_t temp0_197 = _mm_extract_epi32(temp0_194, 3)
                zmm5 = _mm_mul_ps(zmm5, zmm9)
                float temp0_201[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_12 + sx.q(temp0_195)), 0x10), 
                        *(rax_12 + sx.q(temp0_196)), 0x20), 
                    *(rax_12 + sx.q(temp0_197)), 0x30)
                zmm2 = _mm_slli_epi32(
                    _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm1), zmm0), temp0_131), 2)
                zmm7 = *(rax_12 + sx.q(zmm2[0]))
                int64_t r14_5 = sx.q(_mm_extract_epi32(zmm2, 1))
                int32_t temp0_207 = _mm_extract_epi32(zmm2, 2)
                int64_t rdx_14 = sx.q(_mm_extract_epi32(zmm2, 3))
                float temp0_211[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rax_12 + r14_5), 0x10), 
                        *(rax_12 + sx.q(temp0_207)), 0x20), 
                    *(rax_12 + rdx_14), 0x30)
                zmm5 = _mm_add_ps(zmm5, temp0_174)
                float temp0_213[0x4] = _mm_sub_ps(temp0_211, temp0_201)
                float temp0_216[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm11, *(rax_12 + rdi_3 + 4), 0x10), 
                        *(rax_12 + rsi_14 + 4), 0x20), 
                    *(rax_12 + rbx_3 + 4), 0x30)
                float temp0_217[0x4] = _mm_mul_ps(temp0_213, zmm9)
                zmm0 = _mm_add_epi32(zmm0, temp0_131)
                zmm13 = _mm_add_epi32(zmm13, zmm0)
                zmm0 = _mm_add_epi32(zmm0, zmm12)
                zmm12 = _mm_slli_epi32(_mm_add_epi32(zmm12, temp0_131), 2)
                zmm2 = *(rax_12 + sx.q(zmm12[0]) + 4)
                int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm12, 1))
                int32_t temp0_224 = _mm_extract_epi32(zmm12, 2)
                int64_t rdi_5 = sx.q(_mm_extract_epi32(zmm12, 3))
                float temp0_228[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(rax_12 + rdx_18 + 4), 0x10), 
                        *(rax_12 + sx.q(temp0_224) + 4), 0x20), 
                    *(rax_12 + rdi_5 + 4), 0x30)
                float temp0_229[0x4] = _mm_add_ps(temp0_217, temp0_201)
                float temp0_232[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_228, temp0_216), zmm9), temp0_216)
                zmm13 = _mm_slli_epi32(zmm13, 2)
                zmm3 = *(rax_12 + sx.q(zmm13.d) + 4)
                int32_t temp0_234 = _mm_extract_epi32(zmm13, 1)
                int64_t rsi_18 = sx.q(_mm_extract_epi32(zmm13, 2))
                int32_t temp0_236 = _mm_extract_epi32(zmm13, 3)
                float temp0_239[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm3, *(rax_12 + sx.q(temp0_234) + 4), 0x10), 
                        *(rax_12 + rsi_18 + 4), 0x20), 
                    *(rax_12 + sx.q(temp0_236) + 4), 0x30)
                zmm0 = _mm_slli_epi32(zmm0, 2)
                int32_t temp0_241 = _mm_extract_epi32(zmm0, 1)
                zmm1 = *(rax_12 + sx.q(zmm0.d) + 4)
                int64_t rsi_21 = sx.q(_mm_extract_epi32(zmm0, 2))
                int64_t rdi_8 = sx.q(_mm_extract_epi32(zmm0, 3))
                float temp0_249[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm1, 
                                        *(rax_12 + sx.q(temp0_241) + 4), 0x10), 
                                    *(rax_12 + rsi_21 + 4), 0x20), 
                                *(rax_12 + rdi_8 + 4), 0x30), 
                            temp0_239), 
                        zmm9), 
                    temp0_239)
                float temp0_252[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_229, zmm5), temp0_150), zmm5)
                zmm1 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_249, temp0_232), temp0_150), 
                                temp0_232), 
                            temp0_252), 
                        temp0_151), 
                    temp0_252)
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
                
                zmm0 = *arg9
                char i_6 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
                
                if (i_6 == 0)
                    result = 0
                    r15 = zx.q(r15.d + 4)
                    
                    if (r15.d s>= r12_5)
                        break
                    
                    continue
                else
                    uint64_t i_4 = zx.q(i_6)
                    result = 0
                    
                    do
                        uint64_t rdi_9
                        
                        if (i_4 == 0)
                            rdi_9 = 0x40
                            i_4 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400ac711:
                                float var_248[0x4] = zmm1
                                uint64_t rdi_10 = zx.q(rdi_9.d) & 3
                                *arg9 = var_248[rdi_10].d
                                float var_238[0x4] = var_3c8_1
                                *arg8 = var_238[rdi_10]
                        else
                            uint64_t rflags_1
                            rdi_9, rflags_1 = _bit_scan_forward(i_4)
                            i_4 &= not.q(1 << (rdi_9 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400ac711
                        result.b = 1
                    while (i_4 != 0)
            
            r15 = zx.q(r15.d + 4)
            
            if (r15.d s>= r12_5)
                break
    
    if (r15.d s< arg10)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm2 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
            zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm2)
            float var_2e8_1[0x4] = zmm2
            zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm2) & zmm3
            int64_t rax_29 = sx.q(zmm1[0])
            void* r14_11 = arg7 + (rax_29 << 2)
            zmm0 = *(arg7 + (rax_29 << 2))
            int64_t rbx_7 = sx.q(_mm_extract_epi32(zmm1, 1))
            void* r12_7 = arg7 + (rbx_7 << 2)
            int64_t rbp_16 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* rdx_54 = arg7 + (rbp_16 << 2)
            int64_t rax_31 = sx.q(_mm_extract_epi32(zmm1, 3))
            void* rsi_48 = arg7 + (rax_31 << 2)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbx_7 << 2)), 0x10), 
                    *(arg7 + (rbp_16 << 2)), 0x20), 
                *(arg7 + (rax_31 << 2)), 0x30)
            zmm2 = data_142fc95e0 & zmm3
            uint64_t r15_2 = zx.q(zmm2[0])
            zmm8 = *(r15_2 + r14_11)
            uint64_t rax_32 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rdi_22 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rbx_8 = zx.q(_mm_extract_epi32(zmm2, 3))
            var_358.q = rdi_22
            var_3e8.q = rbx_8
            float temp0_563[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm8, *(rax_32 + r12_7), 0x10), *(rdi_22 + rdx_54), 
                    0x20), 
                *(rbx_8 + rsi_48), 0x30)
            zmm2 = data_142fc95f0 & zmm3
            zmm6 = *(zx.q(zmm2[0]) + r14_11)
            uint64_t rax_34 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rdi_23 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t r14_12 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_569[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_34 + r12_7), 0x10), *(rdi_23 + rdx_54), 
                    0x20), 
                *(r14_12 + rsi_48), 0x30)
            uint128_t var_2a8_1 = zmm0
            float var_278_1[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_468 = zmm5
            var_458 = zmm5
            uint128_t var_448_5 = zmm5
            zmm7 = *arg6
            zmm1 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_571[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_572[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_573[0x4] = _mm_mul_ps(temp0_563, temp0_572)
            float temp0_574[0x4] = _mm_mul_ps(temp0_572, temp0_569)
            float temp0_575[0x4] = _mm_mul_ps(temp0_569, temp0_571)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_577[0x4] = _mm_mul_ps(temp0_571, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm4)
            float temp0_579[0x4] = _mm_mul_ps(zx.o(0), zmm5)
            float temp0_581[0x4] = _mm_sub_ps(temp0_575, _mm_mul_ps(zmm4, temp0_563))
            zmm0 = _mm_sub_ps(zmm0, temp0_574)
            float temp0_583[0x4] = _mm_sub_ps(temp0_573, temp0_577)
            float temp0_584[0x4] = _mm_sub_ps(temp0_579, temp0_579)
            float temp0_585[0x4] = _mm_add_ps(temp0_581, temp0_581)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_587[0x4] = _mm_add_ps(temp0_583, temp0_583)
            float temp0_588[0x4] = _mm_add_ps(temp0_584, temp0_584)
            var_428 = temp0_585
            uint128_t var_418_5 = zmm0
            float var_408_5[0x4] = temp0_587
            float var_3f8_3[0x4] = temp0_588
            float temp0_589[0x4] = _mm_mul_ps(temp0_588, zmm5)
            float temp0_590[0x4] = _mm_mul_ps(zmm5, temp0_585)
            float temp0_591[0x4] = _mm_mul_ps(zmm5, zmm0)
            float temp0_592[0x4] = _mm_mul_ps(zmm5, temp0_587)
            float temp0_593[0x4] = __addps_xmmps_memps(temp0_590, var_2a8_1)
            float temp0_594[0x4] = __addps_xmmps_memps(temp0_591, temp0_563)
            float temp0_595[0x4] = __addps_xmmps_memps(temp0_592, temp0_569)
            uint128_t var_438_3 = zmm5
            float var_1e8_1[0x4] = temp0_593
            float var_1d8_1[0x4] = temp0_594
            float var_1c8_1[0x4] = temp0_595
            float var_1b8_1[0x4] = __addps_xmmps_memps(temp0_589, var_278_1)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_599[0x4] = _mm_mul_ps(zmm0, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_587)
            float temp0_601[0x4] = _mm_mul_ps(temp0_587, zmm5)
            float temp0_602[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm5 = _mm_mul_ps(zmm5, temp0_585)
            float temp0_604[0x4] = _mm_mul_ps(temp0_585, temp0_602)
            float temp0_606[0x4] = _mm_sub_ps(temp0_601, _mm_mul_ps(temp0_602, zmm0))
            float temp0_607[0x4] = _mm_sub_ps(temp0_604, zmm4)
            float temp0_608[0x4] = _mm_sub_ps(temp0_599, zmm5)
            float temp0_609[0x4] = _mm_add_ps(temp0_606, temp0_593)
            float temp0_610[0x4] = _mm_add_ps(temp0_607, temp0_594)
            float temp0_611[0x4] = _mm_add_ps(temp0_608, temp0_595)
            zmm0 = arg6[1].d
            zmm4 = *(arg6 + 0x14)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_609)
            zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_610)
            zmm1 = *(arg6 + 0x18)
            float temp0_617[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_611)
            uint128_t var_148 = zmm0
            uint32_t var_378_3[0x4] = zmm4
            uint32_t var_138[0x4] = zmm4
            float var_128_1[0x4] = temp0_617
            int64_t rdi_24 = 0
            zmm1 = zmm0
            
            while (true)
                zmm4 = *(&var_318 + rdi_24)
                float temp0_618[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm5 = _mm_cmpeq_ps(temp0_618, zmm1, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                    char temp0_622 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_622 & 1) == 0)
                        if ((temp0_622 & 2) != 0)
                            goto label_1400ad7bd
                        
                        goto label_1400ad6e3
                    
                    *(&var_468 + (rdi_24 << 2)) = zmm4[0]
                    
                    if ((temp0_622 & 2) != 0)
                    label_1400ad7bd:
                        *(&var_468:4 + (rdi_24 << 2)) = zmm4[0]
                        
                        if ((temp0_622 & 4) == 0)
                            goto label_1400ad6eb
                        
                        goto label_1400ad7cb
                    
                label_1400ad6e3:
                    
                    if ((temp0_622 & 4) != 0)
                    label_1400ad7cb:
                        *(&var_468:8 + (rdi_24 << 2)) = zmm4[0]
                        
                        if ((temp0_622 & 8) != 0)
                            *(&var_468:0xc + (rdi_24 << 2)) = zmm4[0]
                    else
                    label_1400ad6eb:
                        
                        if ((temp0_622 & 8) != 0)
                            *(&var_468:0xc + (rdi_24 << 2)) = zmm4[0]
                
                float temp0_623[0x4] = _mm_cmpeq_ps(temp0_618, zmm1, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm3, temp0_623)) != 0)
                    zmm5 = *(&var_328 + rdi_24)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 1), temp0_623)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm3)) != 0)
                        char temp0_631 = _mm_movemask_ps(zmm6)
                        
                        if ((temp0_631 & 1) == 0)
                            if ((temp0_631 & 2) != 0)
                                goto label_1400ad7eb
                            
                            goto label_1400ad744
                        
                        *(&var_468 + (rdi_24 << 2)) = zmm5.d
                        
                        if ((temp0_631 & 2) != 0)
                        label_1400ad7eb:
                            *(&var_468:4 + (rdi_24 << 2)) = zmm5.d
                            
                            if ((temp0_631 & 4) == 0)
                                goto label_1400ad74c
                            
                            goto label_1400ad7f9
                        
                    label_1400ad744:
                        
                        if ((temp0_631 & 4) != 0)
                        label_1400ad7f9:
                            *(&var_468:8 + (rdi_24 << 2)) = zmm5.d
                            
                            if ((temp0_631 & 8) != 0)
                                *(&var_468:0xc + (rdi_24 << 2)) = zmm5.d
                        else
                        label_1400ad74c:
                            
                            if ((temp0_631 & 8) != 0)
                                *(&var_468:0xc + (rdi_24 << 2)) = zmm5.d
                    
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 5), temp0_623)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm3)) != 0)
                        zmm2 = *(&var_148 + (rdi_24 << 2))
                        char temp0_636 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_636 & 1) == 0)
                            if ((temp0_636 & 2) != 0)
                                goto label_1400ad819
                            
                            goto label_1400ad785
                        
                        *(&var_468 + (rdi_24 << 2)) = zmm2[0]
                        
                        if ((temp0_636 & 2) != 0)
                        label_1400ad819:
                            *(&var_468:4 + (rdi_24 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                            
                            if ((temp0_636 & 4) == 0)
                                goto label_1400ad78d
                            
                            goto label_1400ad829
                        
                    label_1400ad785:
                        
                        if ((temp0_636 & 4) != 0)
                        label_1400ad829:
                            *(&var_468:8 + (rdi_24 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                            
                            if ((temp0_636 & 8) != 0)
                                *(&var_468:0xc + (rdi_24 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_1400ad78d:
                            
                            if ((temp0_636 & 8) != 0)
                                *(&var_468:0xc + (rdi_24 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm2, 3)
                
                if (rdi_24 == 8)
                    break
                
                zmm1 = *(&var_138 + (rdi_24 << 2))
                rdi_24 += 4
            
            zmm2 = var_468
            zmm9 = var_458
            float temp0_733[0x4] = _mm_sub_ps(zmm2, zmm0)
            zmm5 = *arg1
            zmm6 = *(arg1 + 4)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_sub_ps(zmm2, zmm5)
            float temp0_736[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_737[0x4] = _mm_sub_ps(zmm9, temp0_736)
            zmm4 = *arg3
            zmm7 = *(arg3 + 4)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_div_ps(zmm0, zmm4)
            float temp0_740[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_741[0x4] = _mm_div_ps(temp0_737, temp0_740)
            zmm11 = arg3[1].d
            zmm12 = _mm_cvttps_epi32(zmm0)
            zmm10 = _mm_cvttps_epi32(temp0_741)
            uint32_t var_3b8_3[0x4] = zmm4
            uint128_t var_2b8_1 = zmm5
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), zmm4), zmm5)
            zmm5 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
            float temp0_749[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_749), zmm2, 1)
            zmm8 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(temp0_749, temp0_749))
            zmm4 = _mm_blendv_ps(zmm8, zmm12, zmm0)
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_740), temp0_736)
            float temp0_758[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm0 = _mm_add_ps(zmm0, temp0_758)
            zmm7 = zmm0
            zmm0 = _mm_cmpeq_ps(zmm0, zmm9, 1)
            char temp0_762 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm3))
            zmm13 = arg1[1].d
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm14 = var_448_5
            float temp0_764[0x4] = _mm_sub_ps(zmm14, zmm13)
            float temp0_765[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_764, temp0_765))
            float temp0_770[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_765), zmm13)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            var_468 = zmm4
            float temp0_772[0x4] = _mm_cmpeq_ps(zmm7, zmm9, 5)
            
            if (temp0_762 != 0)
                zmm12 = zmm10
            
            float var_398_3[0x4] = zmm9
            float temp0_773[0x4] = __subps_xmmps_memps(zmm9, var_378_3)
            float temp0_774[0x4] = _mm_mul_ps(temp0_733, temp0_733)
            float temp0_775[0x4] = _mm_add_ps(temp0_770, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_772, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
            
            float temp0_779[0x4] = __subps_xmmps_memps(zmm14, temp0_617)
            float temp0_780[0x4] = _mm_add_ps(temp0_774, zx.o(0))
            float temp0_781[0x4] = _mm_mul_ps(temp0_773, temp0_773)
            float temp0_782[0x4] = _mm_blendv_ps(zmm8, zmm12, zmm0)
            var_458 = temp0_782
            zmm0 = _mm_cmpeq_ps(temp0_775, zmm14, 5)
            float temp0_784[0x4] = _mm_cmpeq_ps(temp0_775, zmm14, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_784, zmm3)) != 0)
                zmm12 = zmm1
            
            float temp0_787[0x4] = _mm_add_ps(temp0_780, temp0_781)
            float temp0_788[0x4] = _mm_mul_ps(temp0_779, temp0_779)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
                zmm8 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            float temp0_792[0x4] = _mm_blendv_ps(zmm8, zmm12, temp0_784)
            float temp0_793[0x4] = _mm_add_ps(temp0_787, temp0_788)
            zmm9 = var_3b8_3
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm9), var_2b8_1)
            float temp0_799[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_782), temp0_740), temp0_736)
            float temp0_802[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_792), temp0_765), zmm13)
            float temp0_803[0x4] = _mm_add_ps(temp0_749, zmm0)
            float temp0_804[0x4] = _mm_add_ps(temp0_758, temp0_799)
            zmm5 = _mm_add_ps(zmm5, temp0_802)
            zmm0 = _mm_sub_ps(zmm2, temp0_803)
            float temp0_807[0x4] = _mm_sub_ps(var_398_3, temp0_804)
            float temp0_808[0x4] = _mm_sub_ps(zmm14, zmm5)
            zmm0 = _mm_div_ps(zmm0, zmm9)
            float temp0_810[0x4] = _mm_div_ps(temp0_807, temp0_740)
            float temp0_811[0x4] = _mm_div_ps(temp0_808, temp0_765)
            var_428 = zmm0
            int64_t rcx = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm0)
                
                if (_mm_movemask_ps(zmm4 & zmm3) != 0)
                    char temp0_815 = _mm_movemask_ps(zmm4)
                    
                    if ((temp0_815 & 1) == 0)
                        if ((temp0_815 & 2) != 0)
                            goto label_1400ae06f
                        
                        goto label_1400adfaf
                    
                    *(&var_468 + (rcx << 2)) = 0
                    
                    if ((temp0_815 & 2) != 0)
                    label_1400ae06f:
                        *(&var_468:4 + (rcx << 2)) = 0
                        
                        if ((temp0_815 & 4) == 0)
                            goto label_1400adfb7
                        
                        goto label_1400ae07f
                    
                label_1400adfaf:
                    
                    if ((temp0_815 & 4) == 0)
                    label_1400adfb7:
                        
                        if ((temp0_815 & 8) != 0)
                            goto label_1400ae08f
                        
                        goto label_1400adfbf
                    
                label_1400ae07f:
                    *(&var_468:8 + (rcx << 2)) = 0
                    
                    if ((temp0_815 & 8) != 0)
                    label_1400ae08f:
                        *(&var_468:0xc + (rcx << 2)) = 0
                        
                        if ((temp0_815 & 1) == 0)
                            goto label_1400adfc7
                        
                        goto label_1400ae09f
                    
                label_1400adfbf:
                    
                    if ((temp0_815 & 1) == 0)
                    label_1400adfc7:
                        
                        if ((temp0_815 & 2) != 0)
                            goto label_1400ae0af
                        
                        goto label_1400adfcf
                    
                label_1400ae09f:
                    var_428[rcx] = 0
                    
                    if ((temp0_815 & 2) != 0)
                    label_1400ae0af:
                        var_428[1 + rcx] = 0
                        
                        if ((temp0_815 & 4) == 0)
                            goto label_1400adfd7
                        
                        goto label_1400ae0bf
                    
                label_1400adfcf:
                    
                    if ((temp0_815 & 4) != 0)
                    label_1400ae0bf:
                        var_428[2 + rcx] = 0
                        
                        if ((temp0_815 & 8) != 0)
                            var_428[3 + rcx] = 0
                    else
                    label_1400adfd7:
                        
                        if ((temp0_815 & 8) != 0)
                            var_428[3 + rcx] = 0
                
                int32_t rdx_59 = *(arg4 + rcx)
                zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_59 - 1), 0), 
                    *(&var_468 + (rcx << 2)))
                
                if (_mm_movemask_ps(zmm1 & zmm3) != 0)
                    char temp0_819 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_819 & 1) == 0)
                        if ((temp0_819 & 2) != 0)
                            goto label_1400ae0eb
                        
                        goto label_1400ae01d
                    
                    *(&var_468 + (rcx << 2)) = rdx_59 - 2
                    
                    if ((temp0_819 & 2) != 0)
                    label_1400ae0eb:
                        *(&var_468:4 + (rcx << 2)) = rdx_59 - 2
                        
                        if ((temp0_819 & 4) == 0)
                            goto label_1400ae025
                        
                        goto label_1400ae0f7
                    
                label_1400ae01d:
                    
                    if ((temp0_819 & 4) == 0)
                    label_1400ae025:
                        
                        if ((temp0_819 & 8) != 0)
                            goto label_1400ae103
                        
                        goto label_1400ae02d
                    
                label_1400ae0f7:
                    *(&var_468:8 + (rcx << 2)) = rdx_59 - 2
                    
                    if ((temp0_819 & 8) != 0)
                    label_1400ae103:
                        *(&var_468:0xc + (rcx << 2)) = rdx_59 - 2
                        
                        if ((temp0_819 & 1) == 0)
                            goto label_1400ae035
                        
                        goto label_1400ae10f
                    
                label_1400ae02d:
                    
                    if ((temp0_819 & 1) == 0)
                    label_1400ae035:
                        
                        if ((temp0_819 & 2) != 0)
                            goto label_1400ae11f
                        
                        goto label_1400ae03d
                    
                label_1400ae10f:
                    var_428[rcx] = 0x3f800000
                    
                    if ((temp0_819 & 2) != 0)
                    label_1400ae11f:
                        var_428[1 + rcx] = 0x3f800000
                        
                        if ((temp0_819 & 4) == 0)
                            goto label_1400ae045
                        
                        goto label_1400ae12f
                    
                label_1400ae03d:
                    
                    if ((temp0_819 & 4) != 0)
                    label_1400ae12f:
                        var_428[2 + rcx] = 0x3f800000
                        
                        if ((temp0_819 & 8) != 0)
                            var_428[3 + rcx] = 0x3f800000
                    else
                    label_1400ae045:
                        
                        if ((temp0_819 & 8) != 0)
                            var_428[3 + rcx] = 0x3f800000
                
                if (rcx == 8)
                    break
                
                zmm4 = *(&var_458 + (rcx << 2))
                rcx += 4
            
            zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_468
            zmm5 = var_458
            zmm6 = _mm_mullo_epi32(zmm7, zmm4)
            zmm8 = _mm_add_epi32(zmm6, zmm5)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm8, zmm0)
            zmm1 = _mm_add_epi32(zmm13, temp0_792)
            float (* rcx_2)[0x4] = *(arg5 + 0x10)
            zmm1 = _mm_slli_epi32(zmm1, 2) & zmm3
            int64_t rax_76 = sx.q(zmm1[0])
            zmm2 = *(rcx_2 + rax_76)
            int64_t rdx_63 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rbx_11 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rbp_19 = sx.q(_mm_extract_epi32(zmm1, 3))
            float temp0_919[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_2 + rdx_63), 0x10), *(rcx_2 + rbx_11), 
                    0x20), 
                *(rcx_2 + rbp_19), 0x30)
            zmm11 = _mm_cmpeq_epi32(temp0_765, temp0_765)
            zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm11), zmm7)
            zmm1 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm5), zmm0), temp0_792), 2)
            zmm8 = _mm_mullo_epi32(_mm_add_epi32(zmm8, zmm7), zmm0)
            zmm1 &= zmm3
            zmm7 = *(rcx_2 + sx.q(zmm1[0]))
            int32_t temp0_929 = _mm_extract_epi32(zmm1, 1)
            int64_t rbx_13 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_931 = _mm_extract_epi32(zmm1, 3)
            float temp0_935[0x4] = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm7, *(rcx_2 + sx.q(temp0_929)), 0x10), 
                        *(rcx_2 + rbx_13), 0x20), 
                    *(rcx_2 + sx.q(temp0_931)), 0x30), 
                temp0_919)
            zmm10 = var_428
            float temp0_937[0x4] = _mm_add_ps(_mm_mul_ps(temp0_935, zmm10), temp0_919)
            zmm5 = _mm_sub_epi32(zmm5, zmm11)
            zmm6 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm5), zmm0), temp0_792), 2) & zmm3
            zmm2 = *(rcx_2 + sx.q(zmm6[0]))
            int64_t rbp_28 = sx.q(_mm_extract_epi32(zmm6, 1))
            int32_t temp0_944 = _mm_extract_epi32(zmm6, 2)
            int64_t rdi_31 = sx.q(_mm_extract_epi32(zmm6, 3))
            float temp0_948[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rcx_2 + rbp_28), 0x10), 
                    *(rcx_2 + sx.q(temp0_944)), 0x20), 
                *(rcx_2 + rdi_31), 0x30)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm4), zmm0), temp0_792), 2) & zmm3
            zmm4 = *(rcx_2 + sx.q(zmm5.d))
            int32_t temp0_953 = _mm_extract_epi32(zmm5, 1)
            int64_t rbx_17 = sx.q(_mm_extract_epi32(zmm5, 2))
            int32_t temp0_955 = _mm_extract_epi32(zmm5, 3)
            zmm4 = _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm4, *(rcx_2 + sx.q(temp0_953)), 0x10), 
                            *(rcx_2 + rbx_17), 0x20), 
                        *(rcx_2 + sx.q(temp0_955)), 0x30), 
                    temp0_948), 
                zmm10)
            int32_t* rdi_33 = var_358.q
            int32_t* rsi_52 = var_3e8.q
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r15_2 + rcx_2 + rax_76), 
                        *(rax_32 + rcx_2 + rdx_63), 0x10), 
                    *(rdi_33 + rcx_2 + rbx_11), 0x20), 
                *(rsi_52 + rcx_2 + rbp_19), 0x30)
            zmm0 = _mm_add_epi32(zmm0, temp0_792)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, temp0_792), 2) & zmm3
            zmm6 = *(r15_2 + sx.q(zmm8[0]) + rcx_2)
            void* rax_85 = sx.q(_mm_extract_epi32(zmm8, 1)) + rcx_2
            void* rdx_67 = sx.q(_mm_extract_epi32(zmm8, 2)) + rcx_2
            void* rbp_36 = sx.q(_mm_extract_epi32(zmm8, 3)) + rcx_2
            float temp0_974[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_32 + rax_85), 0x10), *(rdi_33 + rdx_67), 
                    0x20), 
                *(rsi_52 + rbp_36), 0x30)
            zmm4 = _mm_add_ps(zmm4, temp0_948)
            float temp0_978[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_974, zmm5), zmm10), zmm5)
            zmm13 = _mm_slli_epi32(zmm13, 2) & zmm3
            zmm2 = *(r15_2 + sx.q(zmm13.d) + rcx_2)
            void* rax_91 = sx.q(_mm_extract_epi32(zmm13, 1)) + rcx_2
            void* rdx_70 = sx.q(_mm_extract_epi32(zmm13, 2)) + rcx_2
            void* rbp_39 = sx.q(_mm_extract_epi32(zmm13, 3)) + rcx_2
            float temp0_985[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_32 + rax_91), 0x10), *(rdi_33 + rdx_70), 
                    0x20), 
                *(rsi_52 + rbp_39), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2) & zmm3
            zmm1 = *(r15_2 + sx.q(zmm0.d) + rcx_2)
            void* rax_97 = sx.q(_mm_extract_epi32(zmm0, 1)) + rcx_2
            void* rdx_73 = sx.q(_mm_extract_epi32(zmm0, 2)) + rcx_2
            void* rbp_42 = sx.q(_mm_extract_epi32(zmm0, 3)) + rcx_2
            float temp0_995[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_32 + rax_97), 0x10), 
                                *(rdi_33 + rdx_73), 0x20), 
                            *(rsi_52 + rbp_42), 0x30), 
                        temp0_985), 
                    zmm10), 
                temp0_985)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_937), temp0_810), temp0_937)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_995, temp0_978), temp0_810), 
                            temp0_978), 
                        zmm4), 
                    temp0_811), 
                zmm4)
            float temp0_1005[0x4] = _mm_cmpeq_ps(temp0_793, zx.o(0), 4)
            zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_793, 7), temp0_1005), zmm3)
            
            if (_mm_movemask_ps(zmm0) != 0)
                float temp0_1010[0x4] = _mm_rsqrt_ps(temp0_793)
                zmm5 = _mm_mul_ps(_mm_mul_ps(temp0_793, temp0_1010), temp0_1010)
                zmm4 = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_1010), data_142d3f640)
                float temp0_1016[0x4] = _mm_rcp_ps(zmm4)
                zmm4 = _mm_mul_ps(zmm4, temp0_1016)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), temp0_1016), zmm1), 
                    zmm0)
            
            zmm0 = *arg9
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
                    label_1400ae9c1:
                        float var_268[0x4] = zmm1
                        uint64_t rdx_75 = zx.q(rdx_74.d) & 3
                        *arg9 = var_268[rdx_75].d
                        float var_258[0x4] = var_2e8_1
                        *arg8 = var_258[rdx_75]
                else
                    uint64_t rflags_3
                    rdx_74, rflags_3 = _bit_scan_forward(i_5)
                    i_5 &= not.q(1 << (rdx_74 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400ae9c1
                result.b = 1
            while (i_5 != 0)
return result
