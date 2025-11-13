// 函数: sub_1400d2b60
// 地址: 0x1400d2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
int32_t zmm14[0x4]
int32_t var_68[0x4] = zmm14
uint128_t zmm13
uint128_t var_78 = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
int32_t zmm7[0x4]
int32_t var_d8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_e8[0x4] = zmm6
uint128_t zmm0 = __mulps_xmmps_memps(*arg3 | arg3[1].d[0].q << 0x40, data_142e6d9f0)
uint32_t temp0_1 = _mm_movemask_ps(*arg11)
float temp0_2[0x4] = _mm_sub_ps(zx.o(*arg2)[0].q | arg2[1].d[0].q << 0x40, zmm0)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe5)
uint128_t zmm3 = _mm_unpackhi_pd(temp0_2, temp0_2[0].q)
int32_t result
uint128_t var_428
uint128_t var_418
float var_3e8[0x4]
uint128_t var_308
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm4[0x4]
float zmm5[0x4]

if (temp0_1 != 0xf)
    float var_2e8 = temp0_2[0]
    float var_2e4_1 = temp0_3[0]
    int32_t var_2e0_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, zx.o(*arg1)[0].q | arg1[1].d[0].q << 0x40)
    float temp0_308[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    zmm2 = _mm_unpackhi_pd(zmm0, zmm0.q)
    int32_t var_2f8 = zmm0.d
    float var_2f4_1 = temp0_308[0]
    float var_2f0_1 = zmm2[0]
    int32_t r14_6 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
    uint64_t rdx_49
    
    if (r14_6 s<= 0)
        result = 0
        rdx_49 = 0
    else
        rdx_49 = 0
        result = 0
        
        while (true)
            bool cond:2_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:2_1))
                uint128_t var_398_2 =
                    __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_49.d), 0), data_142e11d00)
                int64_t rax_17 = sx.q((rdx_49 << 2).d * 3)
                zmm4 = *(arg7 + rax_17)
                zmm0 = *(arg7 + rax_17 + 0x10)
                zmm1 = *(arg7 + rax_17 + 0x20)
                zmm6 = _mm_shuffle_ps(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), 
                        _mm_shuffle_epi32(zmm0, 0xe5).q), 
                    zmm1, 0xc4)
                float temp0_317[0x4] = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
                zmm4 = _mm_shuffle_ps(zmm4, zmm0, 5)
                zmm4 = _mm_shuffle_ps(zmm4, 
                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm0, 0xf8), 0x22), 0x28)
                var_3e8 = temp0_317
                uint32_t var_3d8_3[0x4] = zmm4
                int128_t var_3b8_2 = zx.o(0)
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_428 = zmm0
                var_418 = zmm0
                uint128_t var_408_3 = zmm0
                uint128_t var_3f8_2 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_323[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                zmm3 = _mm_mul_ps(temp0_323, zmm6)
                float temp0_325[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_326[0x4] = _mm_mul_ps(temp0_325, temp0_317)
                zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm7 = _mm_mul_ps(zmm9, zmm4)
                zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm4, temp0_325))
                float temp0_332[0x4] = _mm_sub_ps(temp0_326, _mm_mul_ps(zmm6, zmm9))
                zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(temp0_317, temp0_323))
                zmm3 = _mm_add_ps(zmm3, zmm3)
                float temp0_336[0x4] = _mm_add_ps(temp0_332, temp0_332)
                zmm7 = _mm_add_ps(zmm7, zmm7)
                zmm4 = _mm_mul_ps(zmm0, zmm3)
                float temp0_339[0x4] = _mm_mul_ps(zmm0, temp0_336)
                zmm4 = __addps_xmmps_memps(zmm4, var_3e8)
                float temp0_341[0x4] = __addps_xmmps_memps(temp0_339, var_3d8_3)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), zmm6)
                float temp0_344[0x4] = _mm_mul_ps(zmm7, temp0_323)
                float temp0_345[0x4] = _mm_mul_ps(zmm3, temp0_325)
                zmm6 = _mm_mul_ps(temp0_336, zmm9)
                float temp0_349[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_344, _mm_mul_ps(temp0_336, temp0_325)), zmm4)
                float temp0_352[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_345, _mm_mul_ps(zmm7, zmm9)), temp0_341)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_323)), zmm0)
                zmm3 = arg6[1].d
                zmm4 = *(arg6 + 0x14)
                zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_349)
                zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_352)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
                uint128_t var_178 = zmm3
                uint32_t var_378_2[0x4] = zmm4
                uint32_t var_168[0x4] = zmm4
                var_308 = zmm0
                uint128_t var_158_1 = zmm0
                int64_t rax_18 = 0
                uint128_t var_3a8_2 = zmm3
                zmm0 = zmm3
                
                while (true)
                    zmm2 = *(&var_2e8 + rax_18)
                    float temp0_362[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_364 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_362, zmm0, 1))
                    
                    if (temp0_364 != 0)
                        if ((temp0_364 & 1) == 0)
                            if ((temp0_364 & 2) != 0)
                                goto label_1400d3d1f
                            
                            goto label_1400d3c33
                        
                        *(&var_428 + (rax_18 << 2)) = zmm2[0]
                        
                        if ((temp0_364 & 2) != 0)
                        label_1400d3d1f:
                            *(&var_428:4 + (rax_18 << 2)) = zmm2[0]
                            
                            if ((temp0_364 & 4) == 0)
                                goto label_1400d3c3d
                            
                            goto label_1400d3d2f
                        
                    label_1400d3c33:
                        
                        if ((temp0_364 & 4) != 0)
                        label_1400d3d2f:
                            *(&var_428:8 + (rax_18 << 2)) = zmm2[0]
                            
                            if ((temp0_364 & 8) != 0)
                                *(&var_428:0xc + (rax_18 << 2)) = zmm2[0]
                        else
                        label_1400d3c3d:
                            
                            if ((temp0_364 & 8) != 0)
                                *(&var_428:0xc + (rax_18 << 2)) = zmm2[0]
                    
                    float temp0_365[0x4] = _mm_cmpeq_ps(temp0_362, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_365) != 0)
                        zmm3 = *(&var_2f8 + rax_18)
                        float temp0_367[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_370 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_367, 1), temp0_365))
                        
                        if (temp0_370 != 0)
                            if ((temp0_370 & 1) == 0)
                                if ((temp0_370 & 2) != 0)
                                    goto label_1400d3d53
                                
                                goto label_1400d3c93
                            
                            *(&var_428 + (rax_18 << 2)) = zmm3.d
                            
                            if ((temp0_370 & 2) != 0)
                            label_1400d3d53:
                                *(&var_428:4 + (rax_18 << 2)) = zmm3.d
                                
                                if ((temp0_370 & 4) == 0)
                                    goto label_1400d3c9d
                                
                                goto label_1400d3d63
                            
                        label_1400d3c93:
                            
                            if ((temp0_370 & 4) != 0)
                            label_1400d3d63:
                                *(&var_428:8 + (rax_18 << 2)) = zmm3.d
                                
                                if ((temp0_370 & 8) != 0)
                                    *(&var_428:0xc + (rax_18 << 2)) = zmm3.d
                            else
                            label_1400d3c9d:
                                
                                if ((temp0_370 & 8) != 0)
                                    *(&var_428:0xc + (rax_18 << 2)) = zmm3.d
                        
                        char temp0_373 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_367, 5), temp0_365))
                        
                        if (temp0_373 != 0)
                            zmm0 = *(&var_178 + (rax_18 << 2))
                            
                            if ((temp0_373 & 1) == 0)
                                if ((temp0_373 & 2) != 0)
                                    goto label_1400d3d8c
                                
                                goto label_1400d3cd9
                            
                            *(&var_428 + (rax_18 << 2)) = zmm0.d
                            
                            if ((temp0_373 & 2) != 0)
                            label_1400d3d8c:
                                *(&var_428:4 + (rax_18 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                
                                if ((temp0_373 & 4) == 0)
                                    goto label_1400d3ce3
                                
                                goto label_1400d3da1
                            
                        label_1400d3cd9:
                            
                            if ((temp0_373 & 4) != 0)
                            label_1400d3da1:
                                *(&var_428:8 + (rax_18 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                
                                if ((temp0_373 & 8) != 0)
                                    *(&var_428:0xc + (rax_18 << 2)) =
                                        _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_1400d3ce3:
                                
                                if ((temp0_373 & 8) != 0)
                                    *(&var_428:0xc + (rax_18 << 2)) =
                                        _mm_shuffle_epi32(zmm0, 0xe7).d
                    
                    if (rax_18 == 8)
                        break
                    
                    zmm0 = *(&var_168 + (rax_18 << 2))
                    rax_18 += 4
                
                zmm6 = var_428
                zmm4 = var_418
                zmm5 = *arg1
                zmm15 = *(arg1 + 4)
                float temp0_377[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_378[0x4] = _mm_sub_ps(zmm6, temp0_377)
                float temp0_379[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
                zmm7 = _mm_sub_ps(zmm4, temp0_379)
                zmm11 = arg1[1].d
                float temp0_381[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
                zmm0 = _mm_sub_ps(var_408_3, temp0_381)
                zmm2 = *arg3
                float temp0_383[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_384[0x4] = _mm_div_ps(temp0_378, temp0_383)
                zmm9 = arg3[1].d
                zmm14 = _mm_cvttps_epi32(temp0_384)
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), temp0_383), temp0_377)
                zmm12 = __divps_xmmps_memps(*arg3 | zmm9[0].q << 0x40, data_142fc9600)
                zmm13 = _mm_shuffle_ps(zmm12, zmm12, 0)
                zmm3 = _mm_cmpeq_ps(_mm_add_ps(zmm3, zmm13), zmm6, 1)
                zmm5 = __paddd_xmmdq_memdq(zmm14, data_142d3f800)
                zmm1 = _mm_and_ps(zmm14, zmm3)
                zmm3 = _mm_or_ps(_mm_andnot_ps(zmm3, zmm5), zmm1)
                zmm8 = *(arg3 + 4)
                float temp0_397[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                zmm7 = _mm_div_ps(zmm7, temp0_397)
                zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm0 = _mm_div_ps(zmm0, zmm9)
                zmm2 = _mm_cvttps_epi32(zmm7)
                zmm0 = _mm_cvttps_epi32(zmm0)
                zmm7 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_397)
                int32_t var_388_2[0x4] = zmm0
                float temp0_406[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), zmm9)
                zmm7 = _mm_add_ps(zmm7, temp0_379)
                float temp0_408[0x4] = _mm_add_ps(temp0_406, temp0_381)
                float temp0_409[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                zmm7 = _mm_add_ps(zmm7, temp0_409)
                zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                var_428 = zmm3
                float temp0_412[0x4] = _mm_cmpeq_ps(zmm7, zmm4, 1)
                
                if (_mm_movemask_ps(temp0_412) != 0)
                    zmm14 = zmm2
                
                float temp0_414[0x4] = _mm_add_ps(temp0_408, zmm12)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(zmm7, zmm4, 5)) != 0)
                    zmm5 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
                
                uint32_t var_318_2[0x4] = zmm6
                zmm0 = __subps_xmmps_memps(zmm6, var_3a8_2)
                float temp0_419[0x4] = __subps_xmmps_memps(zmm4, var_378_2)
                zmm7 = _mm_and_ps(zmm14, temp0_412)
                zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_412, zmm5), zmm7)
                var_418 = zmm1
                zmm7 = var_408_3
                float temp0_423[0x4] = _mm_cmpeq_ps(temp0_414, zmm7, 1)
                
                if (_mm_movemask_ps(temp0_423) != 0)
                    zmm14 = var_388_2
                
                zmm6 = __subps_xmmps_memps(zmm7, var_308)
                zmm0 = _mm_mul_ps(zmm0, zmm0)
                float temp0_427[0x4] = _mm_mul_ps(temp0_419, temp0_419)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_414, zmm7, 5)) != 0)
                    zmm5 = __paddd_xmmdq_memdq(var_388_2, data_142d3f800)
                
                zmm14 = _mm_and_ps(zmm14, temp0_423)
                zmm11 = _mm_or_ps(_mm_andnot_ps(temp0_423, zmm5), zmm14)
                float temp0_435[0x4] =
                    _mm_add_ps(__addps_xmmps_memps(zmm0, data_142d8f750), temp0_427)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_383), temp0_377)
                float temp0_441[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_397), temp0_379)
                float temp0_444[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), zmm9), temp0_381)
                zmm13 = _mm_add_ps(zmm13, zmm0)
                float temp0_446[0x4] = _mm_add_ps(temp0_409, temp0_441)
                zmm12 = _mm_add_ps(zmm12, temp0_444)
                zmm0 = _mm_sub_ps(var_318_2, zmm13)
                zmm4 = _mm_sub_ps(zmm4, temp0_446)
                zmm7 = _mm_sub_ps(zmm7, zmm12)
                zmm0 = _mm_div_ps(zmm0, temp0_383)
                zmm4 = _mm_div_ps(zmm4, temp0_397)
                zmm7 = _mm_div_ps(zmm7, zmm9)
                var_3e8 = zmm0
                float var_3d8_4[0x4] = zmm4
                int32_t var_3c8_4[0x4] = zmm7
                zmm6 = _mm_mul_ps(zmm6, zmm6)
                int64_t rax_23 = 0
                int32_t temp0_455[0x4] = _mm_cmpeq_epi32(zmm9, zmm9)
                char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, temp0_455))
                
                if (i == 0)
                    goto label_1400d418b
                
                do
                    if ((i & 1) == 0)
                        if ((i & 2) != 0)
                            goto label_1400d410d
                        
                        goto label_1400d40d0
                    
                    *(&var_428 + (rax_23 << 2)) = 0
                    
                    if ((i & 2) != 0)
                    label_1400d410d:
                        *(&var_428:4 + (rax_23 << 2)) = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400d40d6
                        
                        goto label_1400d411b
                    
                label_1400d40d0:
                    
                    if ((i & 4) == 0)
                    label_1400d40d6:
                        
                        if ((i & 8) != 0)
                            goto label_1400d4129
                        
                        goto label_1400d40dc
                    
                label_1400d411b:
                    *(&var_428:8 + (rax_23 << 2)) = 0
                    
                    if ((i & 8) != 0)
                    label_1400d4129:
                        *(&var_428:0xc + (rax_23 << 2)) = 0
                        
                        if ((i & 1) == 0)
                            goto label_1400d40e2
                        
                        goto label_1400d4137
                    
                label_1400d40dc:
                    
                    if ((i & 1) == 0)
                    label_1400d40e2:
                        
                        if ((i & 2) != 0)
                            goto label_1400d4145
                        
                        goto label_1400d40e8
                    
                label_1400d4137:
                    var_3e8[rax_23] = 0
                    
                    if ((i & 2) != 0)
                    label_1400d4145:
                        var_3e8[1 + rax_23] = 0
                        
                        if ((i & 4) == 0)
                            goto label_1400d40ee
                        
                        goto label_1400d4153
                    
                label_1400d40e8:
                    
                    if ((i & 4) != 0)
                    label_1400d4153:
                        var_3e8[2 + rax_23] = 0
                        
                        if ((i & 8) != 0)
                            var_3e8[3 + rax_23] = 0
                    else
                    label_1400d40ee:
                        
                        if ((i & 8) != 0)
                            var_3e8[3 + rax_23] = 0
                    
                label_1400d418b:
                    int32_t rbx_7 = *(arg4 + rax_23)
                    char temp0_462 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rbx_7 - 1), 0), *(&var_428 + (rax_23 << 2))))
                    
                    if (temp0_462 != 0)
                        if ((temp0_462 & 1) == 0)
                            if ((temp0_462 & 2) != 0)
                                goto label_1400d404d
                            
                            goto label_1400d41c3
                        
                        *(&var_428 + (rax_23 << 2)) = rbx_7 - 2
                        
                        if ((temp0_462 & 2) != 0)
                        label_1400d404d:
                            *(&var_428:4 + (rax_23 << 2)) = rbx_7 - 2
                            
                            if ((temp0_462 & 4) == 0)
                                goto label_1400d41cd
                            
                            goto label_1400d405b
                        
                    label_1400d41c3:
                        
                        if ((temp0_462 & 4) == 0)
                        label_1400d41cd:
                            
                            if ((temp0_462 & 8) != 0)
                                goto label_1400d4069
                            
                            goto label_1400d41d7
                        
                    label_1400d405b:
                        *(&var_428:8 + (rax_23 << 2)) = rbx_7 - 2
                        
                        if ((temp0_462 & 8) != 0)
                        label_1400d4069:
                            *(&var_428:0xc + (rax_23 << 2)) = rbx_7 - 2
                            
                            if ((temp0_462 & 1) == 0)
                                goto label_1400d41e1
                            
                            goto label_1400d4077
                        
                    label_1400d41d7:
                        
                        if ((temp0_462 & 1) == 0)
                        label_1400d41e1:
                            
                            if ((temp0_462 & 2) != 0)
                                goto label_1400d4089
                            
                            goto label_1400d41eb
                        
                    label_1400d4077:
                        var_3e8[rax_23] = 0x3f800000
                        
                        if ((temp0_462 & 2) != 0)
                        label_1400d4089:
                            var_3e8[1 + rax_23] = 0x3f800000
                            
                            if ((temp0_462 & 4) == 0)
                                goto label_1400d41f5
                            
                            goto label_1400d409b
                        
                    label_1400d41eb:
                        
                        if ((temp0_462 & 4) != 0)
                        label_1400d409b:
                            var_3e8[2 + rax_23] = 0x3f800000
                            
                            if ((temp0_462 & 8) != 0)
                                var_3e8[3 + rax_23] = 0x3f800000
                        else
                        label_1400d41f5:
                            
                            if ((temp0_462 & 8) != 0)
                                var_3e8[3 + rax_23] = 0x3f800000
                    
                    if (rax_23 == 8)
                        break
                    
                    zmm3 = *(&var_418 + (rax_23 << 2))
                    rax_23 += 4
                    i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, temp0_455))
                while (i != 0)
                
                float temp0_463[0x4] = _mm_add_ps(temp0_435, zmm6)
                zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm7 = var_428
                zmm14 = var_418
                zmm10 = zmm11
                zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
                zmm2 =
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm0.q)
                zmm6 = _mm_add_epi32(zmm2, zmm14)
                uint32_t temp0_472[0x4] = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, temp0_472), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), temp0_472), 
                        0xe8)[0].q)
                zmm5 = _mm_add_epi32(zmm13, zmm10)
                float (* rax_24)[0x4] = *(arg5 + 0x10)
                zmm5 = _mm_slli_epi32(zmm5, 2)
                int64_t rsi_26 = sx.q(zmm5[0])
                int64_t rdi_4 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d)
                int64_t rbx_10 = sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)
                int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm5, 0xe7).d)
                zmm5 = *(rax_24 + rbp_3 + 4)
                float temp0_484[0x4] = _mm_unpacklo_ps(*(rax_24 + rbx_10), (*(rax_24 + rbp_3)).q)
                zmm0 = _mm_unpacklo_ps(*(rax_24 + rbx_10 + 4), zmm5[0].q)
                zmm11 = *(rax_24 + rsi_26 + 4)
                zmm5 = _mm_unpacklo_ps(*(rax_24 + rsi_26), (*(rax_24 + rdi_4)).q)[0].q
                    | temp0_484[0].q << 0x40
                zmm11 = _mm_unpacklo_ps(zmm11, (*(rax_24 + rdi_4 + 4))[0].q)[0].q | zmm0.q << 0x40
                int32_t temp0_488[0x4] = _mm_sub_epi32(zmm7, temp0_455)
                zmm0 =
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(temp0_488, 0xf5), zmm8), 0xe8)
                zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_488, zmm8), 0xe8), 
                    zmm0.q)
                zmm0 = _mm_add_epi32(zmm12, zmm14)
                zmm1 = _mm_shuffle_epi32(zmm0, 0xf5)
                zmm7 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_472), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm1, temp0_472), 0xe8).q), 
                        zmm10), 
                    2)
                zmm6 = _mm_add_epi32(zmm6, zmm8)
                zmm0 = _mm_shuffle_epi32(zmm6, 0xf5)
                zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, temp0_472), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_472), 0xe8).q)
                float temp0_512[0x4] = _mm_unpacklo_ps(*(rax_24 + sx.q(zmm7[0])), 
                    (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q)
                zmm0 = *(rax_24 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d))
                zmm3 = _mm_shuffle_epi32(zmm7, 0xe7)
                zmm7 = temp0_463
                zmm0 = _mm_unpacklo_ps(zmm0, (*(rax_24 + sx.q(zmm3.d))).q)
                float temp0_516[0x4] = _mm_sub_ps(temp0_512[0].q | zmm0.q << 0x40, zmm5)
                zmm9 = var_3e8
                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                float temp0_519[0x4] = _mm_add_ps(_mm_mul_ps(temp0_516, zmm9), zmm5)
                int32_t temp0_520[0x4] = _mm_sub_epi32(zmm14, zmm0)
                zmm2 = _mm_add_epi32(zmm2, temp0_520)
                zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
                zmm3 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, temp0_472), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_472), 0xe8).q), 
                        zmm10), 
                    2)
                float temp0_531[0x4] = _mm_unpacklo_ps(*(rax_24 + sx.q(zmm3.d)), 
                    (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5).d))).q)
                zmm0 = _mm_unpacklo_ps(*(rax_24 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)), 
                    (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q)
                zmm2 = temp0_531[0].q | zmm0.q << 0x40
                int32_t temp0_535[0x4] = _mm_add_epi32(temp0_520, zmm12)
                zmm0 = _mm_shuffle_epi32(temp0_535, 0xf5)
                zmm5 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(
                            _mm_shuffle_epi32(_mm_mul_epu32(temp0_535, temp0_472), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_472), 0xe8).q), 
                        zmm10), 
                    2)
                zmm3 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            _mm_unpacklo_ps(*(rax_24 + sx.q(zmm5[0])), 
                                (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d))).q).q |
                                _mm_unpacklo_ps(*(rax_24 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)), 
                                (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q).q << 0x40, 
                            zmm2), 
                        zmm9), 
                    zmm2)
                zmm4 = _mm_add_epi32(temp0_472, zmm10)
                zmm13 = _mm_add_epi32(zmm13, zmm4)
                zmm4 = _mm_add_epi32(zmm4, zmm8)
                zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2)
                float temp0_558[0x4] = _mm_unpacklo_ps(*(rax_24 + sx.q(zmm8[0]) + 4), 
                    (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5).d) + 4)).q)
                zmm0 = _mm_unpacklo_ps(*(rax_24 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) + 4), 
                    (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + 4))[0].q)
                float temp0_564[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_558[0].q | zmm0.q << 0x40, zmm11), zmm9), zmm11)
                zmm13 = _mm_slli_epi32(zmm13, 2)
                float temp0_567[0x4] = _mm_unpacklo_ps(*(rax_24 + sx.q(zmm13.d) + 4), 
                    (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm13, 0xe5).d) + 4)).q)
                zmm0 = _mm_unpacklo_ps(*(rax_24 + sx.q(_mm_shuffle_epi32(zmm13, 0x4e).d) + 4), 
                    (*(rax_24 + sx.q(_mm_shuffle_epi32(zmm13, 0xe7)[0]) + 4))[0].q)
                zmm5 = temp0_567[0].q | zmm0.q << 0x40
                uint32_t temp0_571[0x4] = _mm_slli_epi32(zmm4, 2)
                zmm0 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            _mm_unpacklo_ps(*(rax_24 + sx.q(temp0_571[0]) + 4), 
                                (*(rax_24 + sx.q(_mm_shuffle_epi32(temp0_571, 0xe5)[0]) + 4))[0].q).q |
                                _mm_unpacklo_ps(
                                *(rax_24 + sx.q(_mm_shuffle_epi32(temp0_571, 0x4e)[0]) + 4), 
                                (*(rax_24 + sx.q(_mm_shuffle_epi32(temp0_571, 0xe7)[0]) + 4))[0].q)[
                                0].q << 0x40, 
                            zmm5), 
                        zmm9), 
                    zmm5)
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_519), var_3d8_4), temp0_519)
                zmm0 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, temp0_564), var_3d8_4), 
                                temp0_564), 
                            zmm3), 
                        var_3c8_4), 
                    zmm3)
                float temp0_589[0x4] = _mm_cmpeq_ps(zmm7, zx.o(0), 4)
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm7, zx.o(0), 7), temp0_589)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    float temp0_593[0x4] = _mm_rsqrt_ps(zmm7)
                    zmm7 = _mm_mul_ps(_mm_mul_ps(zmm7, temp0_593), temp0_593)
                    zmm3 = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm7), temp0_593), data_142d3f640)
                    float temp0_599[0x4] = _mm_rcp_ps(zmm3)
                    zmm3 = _mm_mul_ps(zmm3, temp0_599)
                    uint32_t temp0_604[0x4] = _mm_and_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_599), zmm0), 
                        zmm1)
                    zmm0 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), temp0_604)
                
                zmm1 = *arg9
                char i_7 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, _mm_shuffle_ps(zmm1, zmm1, 0), 1))
                
                if (i_7 == 0)
                    result = 0
                    rdx_49 = zx.q(rdx_49.d + 4)
                    
                    if (rdx_49.d s>= r14_6)
                        break
                    
                    continue
                else
                    uint64_t i_1 = zx.q(i_7)
                    result = 0
                    
                    do
                        uint64_t rbx_11
                        
                        if (i_1 == 0)
                            rbx_11 = 0x40
                            i_1 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400d46d1:
                                uint128_t var_208 = zmm0
                                uint64_t rbx_12 = zx.q(rbx_11.d) & 3
                                *arg9 = (*(&var_208 + (rbx_12 << 2)))[0]
                                float var_1f8[0x4] = var_398_2
                                *arg8 = var_1f8[rbx_12]
                        else
                            uint64_t rflags_2
                            rbx_11, rflags_2 = _bit_scan_forward(i_1)
                            i_1 &= not.q(1 << (rbx_11 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400d46d1
                        result.b = 1
                    while (i_1 != 0)
            
            rdx_49 = zx.q(rdx_49.d + 4)
            
            if (rdx_49.d s>= r14_6)
                break
    
    if (rdx_49.d s< arg10)
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm3 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_49.d), 0), data_142e11d00)
            zmm1 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm3)
            uint128_t var_2b8_2 = zmm3
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm3, zmm3), zmm3) & zmm1
            int64_t rdx_61 = sx.q(zmm2[0])
            void* rax_34 = arg7 + (rdx_61 << 2)
            zmm0 = *(arg7 + (rdx_61 << 2))
            int64_t rsi_79 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
            void* rdx_63 = arg7 + (rsi_79 << 2)
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg7 + (rsi_79 << 2))).q)
            int64_t rdi_10 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
            void* rsi_81 = arg7 + (rdi_10 << 2)
            zmm3 = *(arg7 + (rdi_10 << 2))
            int64_t rdi_12 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbp_5 = arg7 + (rdi_12 << 2)
            zmm0 = zmm0.q | _mm_unpacklo_ps(zmm3, (*(arg7 + (rdi_12 << 2)))[0].q).q << 0x40
            zmm3 = data_142fc95e0 & zmm1
            uint64_t rdi_13 = zx.q(zmm3.d)
            var_308.q = rdi_13
            zmm8 = *(rdi_13 + rax_34)
            int32_t (* r15_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            float temp0_712[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_2 + rdx_63))[0].q)
            int32_t (* r14_8)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm4 = *(r14_8 + rsi_81)
            uint128_t* rbx_14 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
            zmm4 = _mm_unpacklo_ps(zmm4, (*(rbx_14 + rbp_5)).q)
            zmm8 = temp0_712[0].q | zmm4[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm1
            zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_34), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_63))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_81), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_5)).q)
            zmm6 = zmm6[0].q | zmm4[0].q << 0x40
            uint128_t var_2a8_2 = zmm0
            uint32_t var_288_2[0x4] = zmm6
            float var_278_2[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            float temp0_721[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_428 = temp0_721
            var_418 = temp0_721
            zmm7 = *arg6
            zmm2 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_722[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm9 = _mm_mul_ps(zmm8, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_722)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_728[0x4] = _mm_mul_ps(temp0_722, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm4)
            zmm3 = _mm_mul_ps(zx.o(0), temp0_721)
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, zmm8))
            zmm0 = _mm_sub_ps(zmm0, zmm7)
            zmm9 = _mm_sub_ps(zmm9, temp0_728)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            zmm9 = _mm_add_ps(zmm9, zmm9)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_3e8 = zmm6
            uint128_t var_3d8_6 = zmm0
            int32_t var_3c8_6[0x4] = zmm9
            uint128_t var_3b8_4 = zmm3
            zmm3 = _mm_mul_ps(zmm3, temp0_721)
            float temp0_741[0x4] = _mm_mul_ps(temp0_721, zmm6)
            float temp0_742[0x4] = _mm_mul_ps(temp0_721, zmm0)
            float temp0_743[0x4] = _mm_mul_ps(temp0_721, zmm9)
            float temp0_744[0x4] = __addps_xmmps_memps(temp0_741, var_2a8_2)
            float temp0_745[0x4] = __addps_xmmps_memps(temp0_742, zmm8)
            float temp0_746[0x4] = __addps_xmmps_memps(temp0_743, var_288_2)
            float var_3f8_4[0x4] = temp0_721
            float var_1e8_2[0x4] = temp0_744
            float var_1d8_2[0x4] = temp0_745
            float var_1c8_2[0x4] = temp0_746
            uint128_t var_1b8_2 = __addps_xmmps_memps(zmm3, var_278_2)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            float temp0_748[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm0, zmm4)
            zmm4 = _mm_mul_ps(zmm4, zmm9)
            zmm9 = _mm_mul_ps(zmm9, temp0_748)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_754[0x4] = _mm_mul_ps(temp0_748, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            zmm9 = _mm_sub_ps(zmm9, _mm_mul_ps(zmm7, zmm0))
            zmm6 = _mm_sub_ps(zmm6, zmm4)
            zmm3 = _mm_sub_ps(zmm3, temp0_754)
            zmm9 = _mm_add_ps(zmm9, temp0_744)
            zmm6 = _mm_add_ps(zmm6, temp0_745)
            zmm3 = _mm_add_ps(zmm3, temp0_746)
            zmm8 = arg6[1].d
            zmm2 = *(arg6 + 0x14)
            float temp0_764[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm9)
            float temp0_766[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
            float var_1a8[0x4] = temp0_764
            float var_198[0x4] = temp0_766
            uint128_t var_3a8_4 = zmm0
            uint128_t var_188_1 = zmm0
            int64_t rax_38 = 0
            zmm0 = temp0_764
            
            while (true)
                zmm3 = *(&var_2e8 + rax_38)
                float temp0_769[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm4 = _mm_cmpeq_ps(temp0_769, zmm0, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm1)) != 0)
                    char temp0_773 = _mm_movemask_ps(zmm4)
                    
                    if ((temp0_773 & 1) == 0)
                        if ((temp0_773 & 2) != 0)
                            goto label_1400d501e
                        
                        goto label_1400d4f35
                    
                    *(&var_428 + (rax_38 << 2)) = zmm3.d
                    
                    if ((temp0_773 & 2) != 0)
                    label_1400d501e:
                        *(&var_428:4 + (rax_38 << 2)) = zmm3.d
                        
                        if ((temp0_773 & 4) == 0)
                            goto label_1400d4f3e
                        
                        goto label_1400d502d
                    
                label_1400d4f35:
                    
                    if ((temp0_773 & 4) != 0)
                    label_1400d502d:
                        *(&var_428:8 + (rax_38 << 2)) = zmm3.d
                        
                        if ((temp0_773 & 8) != 0)
                            *(&var_428:0xc + (rax_38 << 2)) = zmm3.d
                    else
                    label_1400d4f3e:
                        
                        if ((temp0_773 & 8) != 0)
                            *(&var_428:0xc + (rax_38 << 2)) = zmm3.d
                
                float temp0_774[0x4] = _mm_cmpeq_ps(temp0_769, zmm0, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, temp0_774)) != 0)
                    zmm4 = *(&var_2f8 + rax_38)
                    zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                    zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 1), temp0_774)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                        char temp0_782 = _mm_movemask_ps(zmm5)
                        
                        if ((temp0_782 & 1) == 0)
                            if ((temp0_782 & 2) != 0)
                                goto label_1400d504f
                            
                            goto label_1400d4f9a
                        
                        *(&var_428 + (rax_38 << 2)) = zmm4[0]
                        
                        if ((temp0_782 & 2) != 0)
                        label_1400d504f:
                            *(&var_428:4 + (rax_38 << 2)) = zmm4[0]
                            
                            if ((temp0_782 & 4) == 0)
                                goto label_1400d4fa3
                            
                            goto label_1400d505e
                        
                    label_1400d4f9a:
                        
                        if ((temp0_782 & 4) != 0)
                        label_1400d505e:
                            *(&var_428:8 + (rax_38 << 2)) = zmm4[0]
                            
                            if ((temp0_782 & 8) != 0)
                                *(&var_428:0xc + (rax_38 << 2)) = zmm4[0]
                        else
                        label_1400d4fa3:
                            
                            if ((temp0_782 & 8) != 0)
                                *(&var_428:0xc + (rax_38 << 2)) = zmm4[0]
                    
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 5), temp0_774)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm1)) != 0)
                        zmm2 = *(&var_1a8 + (rax_38 << 2))
                        char temp0_787 = _mm_movemask_ps(zmm0)
                        
                        if ((temp0_787 & 1) == 0)
                            if ((temp0_787 & 2) != 0)
                                goto label_1400d5085
                            
                            goto label_1400d4fe0
                        
                        *(&var_428 + (rax_38 << 2)) = zmm2[0]
                        
                        if ((temp0_787 & 2) != 0)
                        label_1400d5085:
                            *(&var_428:4 + (rax_38 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5).d
                            
                            if ((temp0_787 & 4) == 0)
                                goto label_1400d4fe9
                            
                            goto label_1400d5099
                        
                    label_1400d4fe0:
                        
                        if ((temp0_787 & 4) != 0)
                        label_1400d5099:
                            *(&var_428:8 + (rax_38 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e).d
                            
                            if ((temp0_787 & 8) != 0)
                                *(&var_428:0xc + (rax_38 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                        else
                        label_1400d4fe9:
                            
                            if ((temp0_787 & 8) != 0)
                                *(&var_428:0xc + (rax_38 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                
                if (rax_38 == 8)
                    break
                
                zmm0 = *(&var_198 + (rax_38 << 2))
                rax_38 += 4
            
            zmm9 = var_428
            zmm12 = var_418
            zmm14 = _mm_sub_ps(zmm9, temp0_764)
            zmm7 = *arg1
            zmm4 = *(arg1 + 4)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm0 = _mm_sub_ps(zmm9, zmm7)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_887[0x4] = _mm_sub_ps(zmm12, zmm4)
            zmm3 = *arg3
            zmm5 = *(arg3 + 4)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_div_ps(zmm0, zmm3)
            float temp0_890[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_891[0x4] = _mm_div_ps(temp0_887, temp0_890)
            zmm10 = arg3[1].d
            zmm13 = _mm_cvttps_epi32(zmm0)
            zmm2 = _mm_cvttps_epi32(temp0_891)
            uint128_t var_348_4 = zmm3
            int32_t var_368_4[0x4] = zmm7
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm3), zmm7)
            zmm3 = __divps_xmmps_memps(*arg3 | zmm10[0].q << 0x40, data_142fc9600)
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
            uint128_t var_378_4 = zmm0
            int32_t var_318_4[0x4] = zmm9
            zmm6 = _mm_cmpeq_ps(_mm_add_ps(zmm6, zmm0), zmm9, 1)
            zmm7 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm0, zmm0))
            zmm0 = _mm_and_ps(zmm13, zmm6)
            zmm6 = _mm_or_ps(_mm_andnot_ps(zmm6, zmm7), zmm0)
            uint32_t var_358_4[0x4] = zmm4
            float temp0_908[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_890), zmm4)
            zmm9 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_910[0x4] = _mm_add_ps(temp0_908, zmm9)
            float temp0_911[0x4] = _mm_cmpeq_ps(temp0_910, zmm12, 1)
            char temp0_913 = _mm_movemask_ps(_mm_and_ps(temp0_911, zmm1))
            zmm11 = arg1[1].d
            float temp0_914[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm0 = temp0_721
            float temp0_915[0x4] = _mm_sub_ps(zmm0, temp0_914)
            float temp0_916[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm4 = _mm_cvttps_epi32(_mm_div_ps(temp0_915, temp0_916))
            zmm5 = zmm12
            uint128_t var_398_4 = zmm4
            zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_916), temp0_914)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            var_428 = zmm6
            float temp0_923[0x4] = _mm_cmpeq_ps(temp0_910, zmm5, 5)
            
            if (temp0_913 != 0)
                zmm13 = zmm2
            
            float temp0_924[0x4] = __subps_xmmps_memps(zmm5, temp0_766)
            zmm14 = _mm_mul_ps(zmm14, zmm14)
            zmm12 = _mm_add_ps(zmm12, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_923, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            float temp0_930[0x4] = __subps_xmmps_memps(zmm0, var_3a8_4)
            zmm14 = _mm_add_ps(zmm14, zx.o(0))
            float temp0_932[0x4] = _mm_mul_ps(temp0_924, temp0_924)
            uint32_t temp0_933[0x4] = _mm_and_ps(zmm13, temp0_911)
            zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_911, zmm7), temp0_933)
            var_418 = zmm8
            float temp0_936[0x4] = _mm_cmpeq_ps(zmm12, zmm0, 5)
            zmm12 = _mm_cmpeq_ps(zmm12, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm1)) != 0)
                zmm13 = var_398_4
            
            zmm14 = _mm_add_ps(zmm14, temp0_932)
            float temp0_941[0x4] = _mm_mul_ps(temp0_930, temp0_930)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_936, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(var_398_4, data_142d3f800)
            
            int32_t var_3a8_6[0x4] = _mm_add_ps(zmm14, temp0_941)
            zmm13 = _mm_and_ps(zmm13, zmm12)
            zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm7), zmm13)
            float temp0_951[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), var_348_4), var_368_4)
            zmm4 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_890), var_358_4)
            float temp0_957[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_916), temp0_914)
            zmm7 = _mm_add_ps(var_378_4, temp0_951)
            zmm9 = _mm_add_ps(zmm9, zmm4)
            zmm3 = _mm_add_ps(zmm3, temp0_957)
            float temp0_961[0x4] = _mm_sub_ps(var_318_4, zmm7)
            zmm4 = _mm_sub_ps(zmm5, zmm9)
            zmm0 = _mm_sub_ps(zmm0, zmm3)
            float temp0_964[0x4] = _mm_div_ps(temp0_961, var_348_4)
            zmm4 = _mm_div_ps(zmm4, temp0_890)
            zmm0 = _mm_div_ps(zmm0, temp0_916)
            var_3e8 = temp0_964
            uint32_t var_3d8_8[0x4] = zmm4
            uint128_t var_3c8_8 = zmm0
            int64_t rax_48 = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
                
                if (_mm_movemask_ps(zmm6 & zmm1) != 0)
                    char temp0_970 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_970 & 1) == 0)
                        if ((temp0_970 & 2) != 0)
                            goto label_1400d58d0
                        
                        goto label_1400d5801
                    
                    *(&var_428 + (rax_48 << 2)) = 0
                    
                    if ((temp0_970 & 2) != 0)
                    label_1400d58d0:
                        *(&var_428:4 + (rax_48 << 2)) = 0
                        
                        if ((temp0_970 & 4) == 0)
                            goto label_1400d580a
                        
                        goto label_1400d58e1
                    
                label_1400d5801:
                    
                    if ((temp0_970 & 4) == 0)
                    label_1400d580a:
                        
                        if ((temp0_970 & 8) != 0)
                            goto label_1400d58f2
                        
                        goto label_1400d5813
                    
                label_1400d58e1:
                    *(&var_428:8 + (rax_48 << 2)) = 0
                    
                    if ((temp0_970 & 8) != 0)
                    label_1400d58f2:
                        *(&var_428:0xc + (rax_48 << 2)) = 0
                        
                        if ((temp0_970 & 1) == 0)
                            goto label_1400d581c
                        
                        goto label_1400d5903
                    
                label_1400d5813:
                    
                    if ((temp0_970 & 1) == 0)
                    label_1400d581c:
                        
                        if ((temp0_970 & 2) != 0)
                            goto label_1400d5914
                        
                        goto label_1400d5825
                    
                label_1400d5903:
                    var_3e8[rax_48] = 0
                    
                    if ((temp0_970 & 2) != 0)
                    label_1400d5914:
                        var_3e8[1 + rax_48] = 0
                        
                        if ((temp0_970 & 4) == 0)
                            goto label_1400d582e
                        
                        goto label_1400d5925
                    
                label_1400d5825:
                    
                    if ((temp0_970 & 4) != 0)
                    label_1400d5925:
                        var_3e8[2 + rax_48] = 0
                        
                        if ((temp0_970 & 8) != 0)
                            var_3e8[3 + rax_48] = 0
                    else
                    label_1400d582e:
                        
                        if ((temp0_970 & 8) != 0)
                            var_3e8[3 + rax_48] = 0
                
                int32_t rdx_73 = *(arg4 + rax_48)
                zmm2 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_73 - 1), 0), 
                    *(&var_428 + (rax_48 << 2)))
                
                if (_mm_movemask_ps(zmm2 & zmm1) != 0)
                    char temp0_974 = _mm_movemask_ps(zmm2)
                    
                    if ((temp0_974 & 1) == 0)
                        if ((temp0_974 & 2) != 0)
                            goto label_1400d594c
                        
                        goto label_1400d5877
                    
                    *(&var_428 + (rax_48 << 2)) = rdx_73 - 2
                    
                    if ((temp0_974 & 2) != 0)
                    label_1400d594c:
                        *(&var_428:4 + (rax_48 << 2)) = rdx_73 - 2
                        
                        if ((temp0_974 & 4) == 0)
                            goto label_1400d5880
                        
                        goto label_1400d5959
                    
                label_1400d5877:
                    
                    if ((temp0_974 & 4) == 0)
                    label_1400d5880:
                        
                        if ((temp0_974 & 8) != 0)
                            goto label_1400d5966
                        
                        goto label_1400d5889
                    
                label_1400d5959:
                    *(&var_428:8 + (rax_48 << 2)) = rdx_73 - 2
                    
                    if ((temp0_974 & 8) != 0)
                    label_1400d5966:
                        *(&var_428:0xc + (rax_48 << 2)) = rdx_73 - 2
                        
                        if ((temp0_974 & 1) == 0)
                            goto label_1400d5892
                        
                        goto label_1400d5973
                    
                label_1400d5889:
                    
                    if ((temp0_974 & 1) == 0)
                    label_1400d5892:
                        
                        if ((temp0_974 & 2) != 0)
                            goto label_1400d5984
                        
                        goto label_1400d589b
                    
                label_1400d5973:
                    var_3e8[rax_48] = 0x3f800000
                    
                    if ((temp0_974 & 2) != 0)
                    label_1400d5984:
                        var_3e8[1 + rax_48] = 0x3f800000
                        
                        if ((temp0_974 & 4) == 0)
                            goto label_1400d58a4
                        
                        goto label_1400d5995
                    
                label_1400d589b:
                    
                    if ((temp0_974 & 4) != 0)
                    label_1400d5995:
                        var_3e8[2 + rax_48] = 0x3f800000
                        
                        if ((temp0_974 & 8) != 0)
                            var_3e8[3 + rax_48] = 0x3f800000
                    else
                    label_1400d58a4:
                        
                        if ((temp0_974 & 8) != 0)
                            var_3e8[3 + rax_48] = 0x3f800000
                
                if (rax_48 == 8)
                    break
                
                zmm6 = *(&var_418 + (rax_48 << 2))
                rax_48 += 4
            
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_428
            zmm2 = var_418
            zmm10 = zmm12
            zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
            zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), zmm3.q)
            int32_t temp0_1129[0x4] = _mm_add_epi32(zmm0, zmm2)
            zmm3 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            int32_t temp0_1136[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(temp0_1129, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(temp0_1129, 0xf5), zmm3), 0xe8)[0]
                    .q)
            zmm6 = _mm_add_epi32(temp0_1136, zmm10)
            float (* rcx_11)[0x4] = *(arg5 + 0x10)
            zmm6 = _mm_slli_epi32(zmm6, 2) & zmm1
            int64_t rax_94 = sx.q(zmm6[0])
            zmm15 = *(rcx_11 + rax_94)
            int64_t rax_96 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
            float temp0_1140[0x4] = _mm_unpacklo_ps(zmm15, (*(rcx_11 + rax_96))[0].q)
            int64_t rdx_80 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
            zmm5 = *(rcx_11 + rdx_80)
            int64_t rbp_32 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
            float temp0_1143[0x4] = _mm_unpacklo_ps(zmm5, (*(rcx_11 + rbp_32))[0].q)
            zmm15 = temp0_1140[0].q | temp0_1143[0].q << 0x40
            zmm13 = _mm_cmpeq_epi32(var_348_4, var_348_4)
            zmm4 = _mm_sub_epi32(zmm4, zmm13)
            zmm5 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
            zmm12 =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm8), 0xe8), zmm5[0].q)
            zmm4 = _mm_add_epi32(zmm12, zmm2)
            zmm5 = _mm_shuffle_epi32(zmm4, 0xf5)
            uint32_t temp0_1160[0x4] = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8)[0].q), 
                    zmm10), 
                2)
            int32_t temp0_1161[0x4] = _mm_add_epi32(temp0_1129, zmm8)
            zmm5 = _mm_shuffle_epi32(temp0_1161, 0xf5)
            int32_t temp0_1167[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(temp0_1161, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8)[0].q)
            zmm4 = temp0_1160 & zmm1
            zmm6 = _mm_unpacklo_ps(*(rcx_11 + sx.q(zmm4[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
            float temp0_1172[0x4] = _mm_unpacklo_ps(
                *(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
            zmm6 = _mm_sub_ps(zmm6[0].q | temp0_1172[0].q << 0x40, zmm15)
            zmm11 = var_3e8
            zmm8 = var_3d8_8
            zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm11), zmm15)
            zmm2 = _mm_sub_epi32(zmm2, zmm13)
            zmm0 = _mm_add_epi32(zmm0, zmm2)
            uint32_t temp0_1178[0x4] = _mm_shuffle_epi32(zmm0, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(temp0_1178, zmm3), 0xe8).q), 
                    zmm10), 
                2) & zmm1
            zmm0 = _mm_unpacklo_ps(*(rcx_11 + sx.q(zmm5[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
                *(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)[0].q << 0x40
            zmm2 = _mm_add_epi32(zmm2, zmm12)
            uint32_t temp0_1192[0x4] = _mm_shuffle_epi32(zmm2, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(temp0_1192, zmm3), 0xe8)[0].q), 
                    zmm10), 
                2) & zmm1
            float temp0_1201[0x4] = _mm_unpacklo_ps(*(rcx_11 + sx.q(zmm5[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q)
            zmm4 = _mm_unpacklo_ps(*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                (*(rcx_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
            float temp0_1207[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_1201[0].q | zmm4[0].q << 0x40, zmm0), zmm11), zmm0)
            uint128_t* rbp_57 = var_308.q
            zmm7 = _mm_unpacklo_ps(*(rbp_57 + rcx_11 + rax_94), (*(r15_2 + rcx_11 + rax_96)).q)
            zmm0 = _mm_unpacklo_ps(*(r14_8 + rcx_11 + rdx_80), (*(rbx_14 + rcx_11 + rbp_32))[0].q)
            zmm7 = zmm7[0].q | zmm0.q << 0x40
            zmm3 = _mm_add_epi32(zmm3, zmm10)
            int32_t temp0_1211[0x4] = _mm_add_epi32(temp0_1136, zmm3)
            zmm3 = _mm_add_epi32(zmm3, temp0_1167)
            zmm9 = _mm_slli_epi32(_mm_add_epi32(temp0_1167, zmm10), 2) & zmm1
            zmm4 = _mm_unpacklo_ps(*(rbp_57 + sx.q(zmm9[0]) + rcx_11), 
                (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm9, 0xe5).d) + rcx_11)).q)
            zmm0 = _mm_unpacklo_ps(*(r14_8 + sx.q(_mm_shuffle_epi32(zmm9, 0x4e).d) + rcx_11), 
                (*(rbx_14 + sx.q(_mm_shuffle_epi32(zmm9, 0xe7)[0]) + rcx_11))[0].q)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4[0].q | zmm0.q << 0x40, zmm7), zmm11), zmm7)
            zmm14 = _mm_slli_epi32(temp0_1211, 2) & zmm1
            float temp0_1225[0x4] = _mm_unpacklo_ps(*(rbp_57 + sx.q(zmm14[0]) + rcx_11), 
                (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rcx_11)).q)
            zmm0 = _mm_unpacklo_ps(*(r14_8 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rcx_11), 
                (*(rbx_14 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rcx_11))[0].q)
            zmm5 = temp0_1225[0].q | zmm0.q << 0x40
            zmm3 = _mm_slli_epi32(zmm3, 2) & zmm1
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbp_57 + sx.q(zmm3.d) + rcx_11), 
                            (*(r15_2 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rcx_11))[0].q).q |
                            _mm_unpacklo_ps(
                            *(r14_8 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rcx_11), 
                            (*(rbx_14 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rcx_11)).q)[0].q
                            << 0x40, 
                        zmm5), 
                    zmm11), 
                zmm5)
            float temp0_1240[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1207, zmm6), zmm8), zmm6)
            zmm0 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, zmm4), zmm8), zmm4), 
                        temp0_1240), 
                    var_3c8_8), 
                temp0_1240)
            zmm4 = var_3a8_6
            zmm3 = _mm_cmpeq_ps(zmm4, zx.o(0), 4)
            zmm2 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm4, 7), zmm3), zmm1)
            
            if (_mm_movemask_ps(zmm2) != 0)
                zmm3 = _mm_rsqrt_ps(zmm4)
                zmm5 = _mm_mul_ps(_mm_mul_ps(zmm4, zmm3), zmm3)
                zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm3), 
                    data_142d3f640)
                zmm3 = _mm_rcp_ps(zmm4)
                zmm4 = _mm_mul_ps(zmm4, zmm3)
                zmm5 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), zmm3), zmm0), zmm2)
                zmm0 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm0), zmm5)
            
            zmm2 = *arg9
            uint32_t i_9 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm0, _mm_shuffle_ps(zmm2, zmm2, 0), 1), zmm1))
            
            if (i_9 == 0)
                return 0
            
            uint64_t i_2 = zx.q(i_9)
            result = 0
            
            do
                uint64_t rdx_83
                
                if (i_2 == 0)
                    rdx_83 = 0x40
                    i_2 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400d63f1:
                        uint128_t var_228 = zmm0
                        uint64_t rdx_84 = zx.q(rdx_83.d) & 3
                        *arg9 = (*(&var_228 + (rdx_84 << 2)))[0]
                        float var_218[0x4] = var_2b8_2
                        *arg8 = var_218[rdx_84]
                else
                    uint64_t rflags_4
                    rdx_83, rflags_4 = _bit_scan_forward(i_2)
                    i_2 &= not.q(1 << (rdx_83 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400d63f1
                result.b = 1
            while (i_2 != 0)
else
    float var_2c8 = temp0_2[0]
    float var_2c4_1 = temp0_3[0]
    int32_t var_2c0_1 = zmm3.d
    zmm0 = _mm_add_ps(zmm0, zx.o(*arg1)[0].q | arg1[1].d[0].q << 0x40)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
    zmm2 = _mm_unpackhi_pd(zmm0, zmm0.q)
    int32_t var_2d8 = zmm0.d
    float var_2d4_1 = temp0_6[0]
    float var_2d0_1 = zmm2[0]
    int32_t r12_5 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
    uint64_t rbp_1
    
    if (r12_5 s<= 0)
        rbp_1 = 0
        result = 0
    else
        result = 0
        rbp_1 = 0
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                uint128_t var_398_1 =
                    __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp_1.d), 0), data_142e11d00)
                int64_t rax_4 = sx.q((rbp_1 << 2).d * 3)
                zmm4 = *(arg7 + rax_4)
                zmm0 = *(arg7 + rax_4 + 0x10)
                zmm1 = *(arg7 + rax_4 + 0x20)
                zmm6 = _mm_shuffle_ps(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), 
                        _mm_shuffle_epi32(zmm0, 0xe5).q), 
                    zmm1, 0xc4)
                float temp0_15[0x4] = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
                zmm4 = _mm_shuffle_ps(zmm4, zmm0, 5)
                zmm4 = _mm_shuffle_ps(zmm4, 
                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm0, 0xf8), 0x22), 0x28)
                var_3e8 = temp0_15
                uint32_t var_3d8_1[0x4] = zmm4
                int128_t var_3b8_1 = zx.o(0)
                zmm0 = *(arg6 + 0xc)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                var_428 = zmm0
                var_418 = zmm0
                uint128_t var_408_1 = zmm0
                uint128_t var_3f8_1 = zmm0
                zmm9 = *arg6
                zmm8 = *(arg6 + 4)
                zmm10 = *(arg6 + 8)
                float temp0_21[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                zmm3 = _mm_mul_ps(temp0_21, zmm6)
                float temp0_23[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                float temp0_24[0x4] = _mm_mul_ps(temp0_23, temp0_15)
                zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm7 = _mm_mul_ps(zmm9, zmm4)
                zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(zmm4, temp0_23))
                float temp0_30[0x4] = _mm_sub_ps(temp0_24, _mm_mul_ps(zmm6, zmm9))
                zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(temp0_15, temp0_21))
                zmm3 = _mm_add_ps(zmm3, zmm3)
                float temp0_34[0x4] = _mm_add_ps(temp0_30, temp0_30)
                zmm7 = _mm_add_ps(zmm7, zmm7)
                zmm4 = _mm_mul_ps(zmm0, zmm3)
                float temp0_37[0x4] = _mm_mul_ps(zmm0, temp0_34)
                zmm4 = __addps_xmmps_memps(zmm4, var_3e8)
                float temp0_39[0x4] = __addps_xmmps_memps(temp0_37, var_3d8_1)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), zmm6)
                float temp0_42[0x4] = _mm_mul_ps(zmm7, temp0_21)
                float temp0_43[0x4] = _mm_mul_ps(zmm3, temp0_23)
                zmm6 = _mm_mul_ps(temp0_34, zmm9)
                float temp0_47[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_42, _mm_mul_ps(temp0_34, temp0_23)), zmm4)
                float temp0_50[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_43, _mm_mul_ps(zmm7, zmm9)), temp0_39)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_21)), zmm0)
                zmm3 = arg6[1].d
                zmm4 = *(arg6 + 0x14)
                zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_47)
                zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_50)
                zmm0 = *(arg6 + 0x18)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
                uint128_t var_118 = zmm3
                uint32_t var_378_1[0x4] = zmm4
                uint32_t var_108[0x4] = zmm4
                var_308 = zmm0
                uint128_t var_f8_1 = zmm0
                int64_t rax_5 = 0
                uint128_t var_3a8_1 = zmm3
                zmm0 = zmm3
                
                while (true)
                    zmm2 = *(&var_2c8 + rax_5)
                    float temp0_60[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    char temp0_62 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_60, zmm0, 1))
                    
                    if (temp0_62 != 0)
                        if ((temp0_62 & 1) == 0)
                            if ((temp0_62 & 2) != 0)
                                goto label_1400d2faf
                            
                            goto label_1400d2ec3
                        
                        *(&var_428 + (rax_5 << 2)) = zmm2[0]
                        
                        if ((temp0_62 & 2) != 0)
                        label_1400d2faf:
                            *(&var_428:4 + (rax_5 << 2)) = zmm2[0]
                            
                            if ((temp0_62 & 4) == 0)
                                goto label_1400d2ecd
                            
                            goto label_1400d2fbf
                        
                    label_1400d2ec3:
                        
                        if ((temp0_62 & 4) != 0)
                        label_1400d2fbf:
                            *(&var_428:8 + (rax_5 << 2)) = zmm2[0]
                            
                            if ((temp0_62 & 8) != 0)
                                *(&var_428:0xc + (rax_5 << 2)) = zmm2[0]
                        else
                        label_1400d2ecd:
                            
                            if ((temp0_62 & 8) != 0)
                                *(&var_428:0xc + (rax_5 << 2)) = zmm2[0]
                    
                    float temp0_63[0x4] = _mm_cmpeq_ps(temp0_60, zmm0, 5)
                    
                    if (_mm_movemask_ps(temp0_63) != 0)
                        zmm3 = *(&var_2d8 + rax_5)
                        float temp0_65[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        char temp0_68 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_65, 1), temp0_63))
                        
                        if (temp0_68 != 0)
                            if ((temp0_68 & 1) == 0)
                                if ((temp0_68 & 2) != 0)
                                    goto label_1400d2fe3
                                
                                goto label_1400d2f23
                            
                            *(&var_428 + (rax_5 << 2)) = zmm3.d
                            
                            if ((temp0_68 & 2) != 0)
                            label_1400d2fe3:
                                *(&var_428:4 + (rax_5 << 2)) = zmm3.d
                                
                                if ((temp0_68 & 4) == 0)
                                    goto label_1400d2f2d
                                
                                goto label_1400d2ff3
                            
                        label_1400d2f23:
                            
                            if ((temp0_68 & 4) != 0)
                            label_1400d2ff3:
                                *(&var_428:8 + (rax_5 << 2)) = zmm3.d
                                
                                if ((temp0_68 & 8) != 0)
                                    *(&var_428:0xc + (rax_5 << 2)) = zmm3.d
                            else
                            label_1400d2f2d:
                                
                                if ((temp0_68 & 8) != 0)
                                    *(&var_428:0xc + (rax_5 << 2)) = zmm3.d
                        
                        char temp0_71 =
                            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_65, 5), temp0_63))
                        
                        if (temp0_71 != 0)
                            zmm0 = *(&var_118 + (rax_5 << 2))
                            
                            if ((temp0_71 & 1) == 0)
                                if ((temp0_71 & 2) != 0)
                                    goto label_1400d301c
                                
                                goto label_1400d2f69
                            
                            *(&var_428 + (rax_5 << 2)) = zmm0.d
                            
                            if ((temp0_71 & 2) != 0)
                            label_1400d301c:
                                *(&var_428:4 + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                
                                if ((temp0_71 & 4) == 0)
                                    goto label_1400d2f73
                                
                                goto label_1400d3031
                            
                        label_1400d2f69:
                            
                            if ((temp0_71 & 4) != 0)
                            label_1400d3031:
                                *(&var_428:8 + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                
                                if ((temp0_71 & 8) != 0)
                                    *(&var_428:0xc + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_1400d2f73:
                                
                                if ((temp0_71 & 8) != 0)
                                    *(&var_428:0xc + (rax_5 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                    
                    if (rax_5 == 8)
                        break
                    
                    zmm0 = *(&var_108 + (rax_5 << 2))
                    rax_5 += 4
                
                zmm6 = var_428
                zmm4 = var_418
                zmm5 = *arg1
                zmm15 = *(arg1 + 4)
                float temp0_75[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_76[0x4] = _mm_sub_ps(zmm6, temp0_75)
                float temp0_77[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
                zmm7 = _mm_sub_ps(zmm4, temp0_77)
                zmm11 = arg1[1].d
                float temp0_79[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
                zmm0 = _mm_sub_ps(var_408_1, temp0_79)
                zmm2 = *arg3
                float temp0_81[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_82[0x4] = _mm_div_ps(temp0_76, temp0_81)
                zmm9 = arg3[1].d
                zmm14 = _mm_cvttps_epi32(temp0_82)
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), temp0_81), temp0_75)
                zmm12 = __divps_xmmps_memps(*arg3 | zmm9[0].q << 0x40, data_142fc9600)
                zmm13 = _mm_shuffle_ps(zmm12, zmm12, 0)
                zmm3 = _mm_cmpeq_ps(_mm_add_ps(zmm3, zmm13), zmm6, 1)
                zmm5 = __paddd_xmmdq_memdq(zmm14, data_142d3f800)
                zmm1 = _mm_and_ps(zmm14, zmm3)
                zmm3 = _mm_or_ps(_mm_andnot_ps(zmm3, zmm5), zmm1)
                zmm8 = *(arg3 + 4)
                float temp0_95[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                zmm7 = _mm_div_ps(zmm7, temp0_95)
                zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm0 = _mm_div_ps(zmm0, zmm9)
                zmm2 = _mm_cvttps_epi32(zmm7)
                zmm0 = _mm_cvttps_epi32(zmm0)
                zmm7 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_95)
                uint128_t var_388_1 = zmm0
                float temp0_104[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), zmm9)
                zmm7 = _mm_add_ps(zmm7, temp0_77)
                float temp0_106[0x4] = _mm_add_ps(temp0_104, temp0_79)
                float temp0_107[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                zmm7 = _mm_add_ps(zmm7, temp0_107)
                zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                var_428 = zmm3
                float temp0_110[0x4] = _mm_cmpeq_ps(zmm7, zmm4, 1)
                
                if (_mm_movemask_ps(temp0_110) != 0)
                    zmm14 = zmm2
                
                float temp0_112[0x4] = _mm_add_ps(temp0_106, zmm12)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(zmm7, zmm4, 5)) != 0)
                    zmm5 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
                
                uint32_t var_318_1[0x4] = zmm6
                zmm0 = __subps_xmmps_memps(zmm6, var_3a8_1)
                float temp0_117[0x4] = __subps_xmmps_memps(zmm4, var_378_1)
                zmm7 = _mm_and_ps(zmm14, temp0_110)
                zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_110, zmm5), zmm7)
                var_418 = zmm1
                zmm7 = var_408_1
                float temp0_121[0x4] = _mm_cmpeq_ps(temp0_112, zmm7, 1)
                
                if (_mm_movemask_ps(temp0_121) != 0)
                    zmm14 = var_388_1
                
                zmm6 = __subps_xmmps_memps(zmm7, var_308)
                zmm0 = _mm_mul_ps(zmm0, zmm0)
                float temp0_125[0x4] = _mm_mul_ps(temp0_117, temp0_117)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_112, zmm7, 5)) != 0)
                    zmm5 = __paddd_xmmdq_memdq(var_388_1, data_142d3f800)
                
                zmm14 = _mm_and_ps(zmm14, temp0_121)
                zmm11 = _mm_or_ps(_mm_andnot_ps(temp0_121, zmm5), zmm14)
                float temp0_133[0x4] =
                    _mm_add_ps(__addps_xmmps_memps(zmm0, data_142d8f750), temp0_125)
                zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_81), temp0_75)
                float temp0_139[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_95), temp0_77)
                float temp0_142[0x4] =
                    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), zmm9), temp0_79)
                zmm13 = _mm_add_ps(zmm13, zmm0)
                float temp0_144[0x4] = _mm_add_ps(temp0_107, temp0_139)
                zmm12 = _mm_add_ps(zmm12, temp0_142)
                zmm0 = _mm_sub_ps(var_318_1, zmm13)
                zmm4 = _mm_sub_ps(zmm4, temp0_144)
                zmm7 = _mm_sub_ps(zmm7, zmm12)
                zmm0 = _mm_div_ps(zmm0, temp0_81)
                zmm4 = _mm_div_ps(zmm4, temp0_95)
                zmm7 = _mm_div_ps(zmm7, zmm9)
                var_3e8 = zmm0
                int32_t var_3c8_2[0x4] = zmm7
                zmm6 = _mm_mul_ps(zmm6, zmm6)
                int64_t rax_10 = 0
                int32_t temp0_153[0x4] = _mm_cmpeq_epi32(zmm9, zmm9)
                char i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, temp0_153))
                
                if (i_3 == 0)
                    goto label_1400d341b
                
                do
                    if ((i_3 & 1) == 0)
                        if ((i_3 & 2) != 0)
                            goto label_1400d339d
                        
                        goto label_1400d3360
                    
                    *(&var_428 + (rax_10 << 2)) = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400d339d:
                        *(&var_428:4 + (rax_10 << 2)) = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400d3366
                        
                        goto label_1400d33ab
                    
                label_1400d3360:
                    
                    if ((i_3 & 4) == 0)
                    label_1400d3366:
                        
                        if ((i_3 & 8) != 0)
                            goto label_1400d33b9
                        
                        goto label_1400d336c
                    
                label_1400d33ab:
                    *(&var_428:8 + (rax_10 << 2)) = 0
                    
                    if ((i_3 & 8) != 0)
                    label_1400d33b9:
                        *(&var_428:0xc + (rax_10 << 2)) = 0
                        
                        if ((i_3 & 1) == 0)
                            goto label_1400d3372
                        
                        goto label_1400d33c7
                    
                label_1400d336c:
                    
                    if ((i_3 & 1) == 0)
                    label_1400d3372:
                        
                        if ((i_3 & 2) != 0)
                            goto label_1400d33d5
                        
                        goto label_1400d3378
                    
                label_1400d33c7:
                    var_3e8[rax_10] = 0
                    
                    if ((i_3 & 2) != 0)
                    label_1400d33d5:
                        var_3e8[1 + rax_10] = 0
                        
                        if ((i_3 & 4) == 0)
                            goto label_1400d337e
                        
                        goto label_1400d33e3
                    
                label_1400d3378:
                    
                    if ((i_3 & 4) != 0)
                    label_1400d33e3:
                        var_3e8[2 + rax_10] = 0
                        
                        if ((i_3 & 8) != 0)
                            var_3e8[3 + rax_10] = 0
                    else
                    label_1400d337e:
                        
                        if ((i_3 & 8) != 0)
                            var_3e8[3 + rax_10] = 0
                    
                label_1400d341b:
                    int32_t rbx_1 = *(arg4 + rax_10)
                    char temp0_160 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                        _mm_shuffle_epi32(zx.o(rbx_1 - 1), 0), *(&var_428 + (rax_10 << 2))))
                    
                    if (temp0_160 != 0)
                        if ((temp0_160 & 1) == 0)
                            if ((temp0_160 & 2) != 0)
                                goto label_1400d32dd
                            
                            goto label_1400d3453
                        
                        *(&var_428 + (rax_10 << 2)) = rbx_1 - 2
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400d32dd:
                            *(&var_428:4 + (rax_10 << 2)) = rbx_1 - 2
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400d345d
                            
                            goto label_1400d32eb
                        
                    label_1400d3453:
                        
                        if ((temp0_160 & 4) == 0)
                        label_1400d345d:
                            
                            if ((temp0_160 & 8) != 0)
                                goto label_1400d32f9
                            
                            goto label_1400d3467
                        
                    label_1400d32eb:
                        *(&var_428:8 + (rax_10 << 2)) = rbx_1 - 2
                        
                        if ((temp0_160 & 8) != 0)
                        label_1400d32f9:
                            *(&var_428:0xc + (rax_10 << 2)) = rbx_1 - 2
                            
                            if ((temp0_160 & 1) == 0)
                                goto label_1400d3471
                            
                            goto label_1400d3307
                        
                    label_1400d3467:
                        
                        if ((temp0_160 & 1) == 0)
                        label_1400d3471:
                            
                            if ((temp0_160 & 2) != 0)
                                goto label_1400d3319
                            
                            goto label_1400d347b
                        
                    label_1400d3307:
                        var_3e8[rax_10] = 0x3f800000
                        
                        if ((temp0_160 & 2) != 0)
                        label_1400d3319:
                            var_3e8[1 + rax_10] = 0x3f800000
                            
                            if ((temp0_160 & 4) == 0)
                                goto label_1400d3485
                            
                            goto label_1400d332b
                        
                    label_1400d347b:
                        
                        if ((temp0_160 & 4) != 0)
                        label_1400d332b:
                            var_3e8[2 + rax_10] = 0x3f800000
                            
                            if ((temp0_160 & 8) != 0)
                                var_3e8[3 + rax_10] = 0x3f800000
                        else
                        label_1400d3485:
                            
                            if ((temp0_160 & 8) != 0)
                                var_3e8[3 + rax_10] = 0x3f800000
                    
                    if (rax_10 == 8)
                        break
                    
                    zmm3 = *(&var_418 + (rax_10 << 2))
                    rax_10 += 4
                    i_3 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, temp0_153))
                while (i_3 != 0)
                
                float temp0_161[0x4] = _mm_add_ps(temp0_133, zmm6)
                zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
                zmm7 = var_428
                zmm14 = var_418
                zmm10 = zmm11
                zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
                zmm2 =
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm0.q)
                zmm6 = _mm_add_epi32(zmm2, zmm14)
                uint32_t temp0_170[0x4] = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
                zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, temp0_170), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), temp0_170), 
                        0xe8)[0].q)
                zmm5 = _mm_add_epi32(zmm13, zmm10)
                float (* rax_12)[0x4] = *(arg5 + 0x10)
                zmm5 = _mm_slli_epi32(zmm5, 2)
                int64_t rsi_13 = sx.q(zmm5[0])
                int64_t rbx_4 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d)
                int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)
                int64_t rdx = sx.q(_mm_shuffle_epi32(zmm5, 0xe7).d)
                zmm5 = *(rax_12 + rdx + 4)
                float temp0_182[0x4] = _mm_unpacklo_ps(*(rax_12 + rdi_2), (*(rax_12 + rdx)).q)
                zmm0 = _mm_unpacklo_ps(*(rax_12 + rdi_2 + 4), zmm5[0].q)
                zmm11 = *(rax_12 + rsi_13 + 4)
                zmm5 = _mm_unpacklo_ps(*(rax_12 + rsi_13), (*(rax_12 + rbx_4)).q)[0].q
                    | temp0_182[0].q << 0x40
                zmm11 = _mm_unpacklo_ps(zmm11, (*(rax_12 + rbx_4 + 4))[0].q)[0].q | zmm0.q << 0x40
                int32_t temp0_186[0x4] = _mm_sub_epi32(zmm7, temp0_153)
                zmm0 =
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(temp0_186, 0xf5), zmm8), 0xe8)
                zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_186, zmm8), 0xe8), 
                    zmm0.q)
                zmm0 = _mm_add_epi32(zmm12, zmm14)
                zmm1 = _mm_shuffle_epi32(zmm0, 0xf5)
                zmm7 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_170), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm1, temp0_170), 0xe8).q), 
                        zmm10), 
                    2)
                zmm6 = _mm_add_epi32(zmm6, zmm8)
                zmm0 = _mm_shuffle_epi32(zmm6, 0xf5)
                zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, temp0_170), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_170), 0xe8).q)
                float temp0_210[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm7[0])), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q)
                zmm0 = *(rax_12 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d))
                zmm3 = _mm_shuffle_epi32(zmm7, 0xe7)
                zmm7 = temp0_161
                zmm0 = _mm_unpacklo_ps(zmm0, (*(rax_12 + sx.q(zmm3.d))).q)
                float temp0_214[0x4] = _mm_sub_ps(temp0_210[0].q | zmm0.q << 0x40, zmm5)
                zmm9 = var_3e8
                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                zmm15 = zmm4
                float temp0_217[0x4] = _mm_add_ps(_mm_mul_ps(temp0_214, zmm9), zmm5)
                int32_t temp0_218[0x4] = _mm_sub_epi32(zmm14, zmm0)
                zmm2 = _mm_add_epi32(zmm2, temp0_218)
                zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
                zmm3 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, temp0_170), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_170), 0xe8).q), 
                        zmm10), 
                    2)
                float temp0_229[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm3.d)), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5).d))).q)
                zmm0 = _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q)
                zmm2 = temp0_229[0].q | zmm0.q << 0x40
                int32_t temp0_233[0x4] = _mm_add_epi32(temp0_218, zmm12)
                zmm0 = _mm_shuffle_epi32(temp0_233, 0xf5)
                zmm5 = _mm_slli_epi32(
                    _mm_add_epi32(
                        _mm_unpacklo_epi32(
                            _mm_shuffle_epi32(_mm_mul_epu32(temp0_233, temp0_170), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_170), 0xe8).q), 
                        zmm10), 
                    2)
                zmm3 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            _mm_unpacklo_ps(*(rax_12 + sx.q(zmm5[0])), 
                                (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d))).q).q |
                                _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)), 
                                (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q).q << 0x40, 
                            zmm2), 
                        zmm9), 
                    zmm2)
                zmm4 = _mm_add_epi32(temp0_170, zmm10)
                zmm13 = _mm_add_epi32(zmm13, zmm4)
                zmm4 = _mm_add_epi32(zmm4, zmm8)
                zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2)
                float temp0_256[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm8[0]) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5).d) + 4)).q)
                zmm0 = _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + 4))[0].q)
                float temp0_262[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(temp0_256[0].q | zmm0.q << 0x40, zmm11), zmm9), zmm11)
                zmm13 = _mm_slli_epi32(zmm13, 2)
                float temp0_265[0x4] = _mm_unpacklo_ps(*(rax_12 + sx.q(zmm13.d) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm13, 0xe5).d) + 4)).q)
                zmm0 = _mm_unpacklo_ps(*(rax_12 + sx.q(_mm_shuffle_epi32(zmm13, 0x4e).d) + 4), 
                    (*(rax_12 + sx.q(_mm_shuffle_epi32(zmm13, 0xe7)[0]) + 4))[0].q)
                zmm5 = temp0_265[0].q | zmm0.q << 0x40
                uint32_t temp0_269[0x4] = _mm_slli_epi32(zmm4, 2)
                zmm0 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(
                            _mm_unpacklo_ps(*(rax_12 + sx.q(temp0_269[0]) + 4), 
                                (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_269, 0xe5)[0]) + 4))[0].q).q |
                                _mm_unpacklo_ps(
                                *(rax_12 + sx.q(_mm_shuffle_epi32(temp0_269, 0x4e)[0]) + 4), 
                                (*(rax_12 + sx.q(_mm_shuffle_epi32(temp0_269, 0xe7)[0]) + 4))[0].q)[
                                0].q << 0x40, 
                            zmm5), 
                        zmm9), 
                    zmm5)
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_217), zmm15), temp0_217)
                zmm0 = _mm_add_ps(
                    __mulps_xmmps_memps(
                        _mm_sub_ps(
                            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, temp0_262), zmm15), temp0_262), 
                            zmm3), 
                        var_3c8_2), 
                    zmm3)
                float temp0_287[0x4] = _mm_cmpeq_ps(zmm7, zx.o(0), 4)
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm7, zx.o(0), 7), temp0_287)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    float temp0_291[0x4] = _mm_rsqrt_ps(zmm7)
                    zmm7 = _mm_mul_ps(_mm_mul_ps(zmm7, temp0_291), temp0_291)
                    zmm3 = __mulps_xmmps_memps(
                        _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm7), temp0_291), data_142d3f640)
                    float temp0_297[0x4] = _mm_rcp_ps(zmm3)
                    zmm3 = _mm_mul_ps(zmm3, temp0_297)
                    uint32_t temp0_302[0x4] = _mm_and_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_297), zmm0), 
                        zmm1)
                    zmm0 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), temp0_302)
                
                zmm1 = *arg9
                char i_6 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, _mm_shuffle_ps(zmm1, zmm1, 0), 1))
                
                if (i_6 == 0)
                    result = 0
                    rbp_1 = zx.q(rbp_1.d + 4)
                    
                    if (rbp_1.d s>= r12_5)
                        break
                    
                    continue
                else
                    uint64_t i_4 = zx.q(i_6)
                    result = 0
                    
                    do
                        uint64_t rbx_5
                        
                        if (i_4 == 0)
                            rbx_5 = 0x40
                            i_4 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400d3961:
                                uint128_t var_248 = zmm0
                                uint64_t rbx_6 = zx.q(rbx_5.d) & 3
                                *arg9 = (*(&var_248 + (rbx_6 << 2)))[0]
                                float var_238[0x4] = var_398_1
                                *arg8 = var_238[rbx_6]
                        else
                            uint64_t rflags_1
                            rbx_5, rflags_1 = _bit_scan_forward(i_4)
                            i_4 &= not.q(1 << (rbx_5 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400d3961
                        result.b = 1
                    while (i_4 != 0)
            
            rbp_1 = zx.q(rbp_1.d + 4)
            
            if (rbp_1.d s>= r12_5)
                break
    
    if (rbp_1.d s< arg10)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm3 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp_1.d), 0), data_142e11d00)
            zmm1 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm3)
            uint128_t var_2b8_1 = zmm3
            zmm2 = _mm_add_epi32(_mm_add_epi32(zmm3, zmm3), zmm3) & zmm1
            int64_t rdx_51 = sx.q(zmm2[0])
            void* rax_28 = arg7 + (rdx_51 << 2)
            zmm0 = *(arg7 + (rdx_51 << 2))
            int64_t rsi_75 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
            void* rdx_53 = arg7 + (rsi_75 << 2)
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg7 + (rsi_75 << 2))).q)
            int64_t rdi_5 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
            void* rsi_77 = arg7 + (rdi_5 << 2)
            zmm3 = *(arg7 + (rdi_5 << 2))
            int64_t rdi_7 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbp_4 = arg7 + (rdi_7 << 2)
            zmm0 = zmm0.q | _mm_unpacklo_ps(zmm3, (*(arg7 + (rdi_7 << 2)))[0].q).q << 0x40
            zmm3 = data_142fc95e0 & zmm1
            uint64_t rdi_8 = zx.q(zmm3.d)
            var_308.q = rdi_8
            zmm8 = *(rdi_8 + rax_28)
            uint64_t r15_1 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            float temp0_621[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_1 + rdx_53))[0].q)
            uint32_t (* r14_7)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm4 = *(r14_7 + rsi_77)
            uint64_t rbx_13 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
            zmm4 = _mm_unpacklo_ps(zmm4, (*(rbx_13 + rbp_4)).q)
            zmm8 = temp0_621[0].q | zmm4[0].q << 0x40
            zmm3 = data_142fc95f0 & zmm1
            zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_28), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_53))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_77), 
                (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_4)).q)
            zmm6 = zmm6[0].q | zmm4[0].q << 0x40
            uint128_t var_2a8_1 = zmm0
            uint32_t var_288_1[0x4] = zmm6
            float var_278_1[0x4] = zx.o(0)
            zmm5 = *(arg6 + 0xc)
            float temp0_630[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            var_428 = temp0_630
            var_418 = temp0_630
            zmm7 = *arg6
            zmm2 = *(arg6 + 4)
            zmm4 = *(arg6 + 8)
            float temp0_631[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm9 = _mm_mul_ps(zmm8, zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm6)
            zmm6 = _mm_mul_ps(zmm6, temp0_631)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_637[0x4] = _mm_mul_ps(temp0_631, zmm0)
            zmm0 = _mm_mul_ps(zmm0, zmm4)
            zmm3 = _mm_mul_ps(zx.o(0), temp0_630)
            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, zmm8))
            zmm0 = _mm_sub_ps(zmm0, zmm7)
            zmm9 = _mm_sub_ps(zmm9, temp0_637)
            zmm3 = _mm_sub_ps(zmm3, zmm3)
            zmm6 = _mm_add_ps(zmm6, zmm6)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            zmm9 = _mm_add_ps(zmm9, zmm9)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            var_3e8 = zmm6
            uint128_t var_3d8_5 = zmm0
            int32_t var_3c8_5[0x4] = zmm9
            uint128_t var_3b8_3 = zmm3
            zmm3 = _mm_mul_ps(zmm3, temp0_630)
            float temp0_650[0x4] = _mm_mul_ps(temp0_630, zmm6)
            float temp0_651[0x4] = _mm_mul_ps(temp0_630, zmm0)
            float temp0_652[0x4] = _mm_mul_ps(temp0_630, zmm9)
            float temp0_653[0x4] = __addps_xmmps_memps(temp0_650, var_2a8_1)
            float temp0_654[0x4] = __addps_xmmps_memps(temp0_651, zmm8)
            float temp0_655[0x4] = __addps_xmmps_memps(temp0_652, var_288_1)
            float var_3f8_3[0x4] = temp0_630
            float var_1e8_1[0x4] = temp0_653
            float var_1d8_1[0x4] = temp0_654
            float var_1c8_1[0x4] = temp0_655
            uint128_t var_1b8_1 = __addps_xmmps_memps(zmm3, var_278_1)
            zmm4 = *arg6
            zmm5 = *(arg6 + 4)
            zmm7 = *(arg6 + 8)
            float temp0_657[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_mul_ps(zmm0, zmm4)
            zmm4 = _mm_mul_ps(zmm4, zmm9)
            zmm9 = _mm_mul_ps(zmm9, temp0_657)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_663[0x4] = _mm_mul_ps(temp0_657, zmm6)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            zmm9 = _mm_sub_ps(zmm9, _mm_mul_ps(zmm7, zmm0))
            zmm6 = _mm_sub_ps(zmm6, zmm4)
            zmm3 = _mm_sub_ps(zmm3, temp0_663)
            zmm9 = _mm_add_ps(zmm9, temp0_653)
            zmm6 = _mm_add_ps(zmm6, temp0_654)
            zmm3 = _mm_add_ps(zmm3, temp0_655)
            zmm8 = arg6[1].d
            zmm2 = *(arg6 + 0x14)
            float temp0_673[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm9)
            float temp0_675[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
            float var_148[0x4] = temp0_673
            float var_138[0x4] = temp0_675
            uint128_t var_3a8_3 = zmm0
            uint128_t var_128_1 = zmm0
            int64_t rax_32 = 0
            zmm0 = temp0_673
            
            while (true)
                zmm3 = *(&var_2c8 + rax_32)
                float temp0_678[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm4 = _mm_cmpeq_ps(temp0_678, zmm0, 1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm1)) != 0)
                    char temp0_682 = _mm_movemask_ps(zmm4)
                    
                    if ((temp0_682 & 1) == 0)
                        if ((temp0_682 & 2) != 0)
                            goto label_1400d4b5e
                        
                        goto label_1400d4a75
                    
                    *(&var_428 + (rax_32 << 2)) = zmm3.d
                    
                    if ((temp0_682 & 2) != 0)
                    label_1400d4b5e:
                        *(&var_428:4 + (rax_32 << 2)) = zmm3.d
                        
                        if ((temp0_682 & 4) == 0)
                            goto label_1400d4a7e
                        
                        goto label_1400d4b6d
                    
                label_1400d4a75:
                    
                    if ((temp0_682 & 4) != 0)
                    label_1400d4b6d:
                        *(&var_428:8 + (rax_32 << 2)) = zmm3.d
                        
                        if ((temp0_682 & 8) != 0)
                            *(&var_428:0xc + (rax_32 << 2)) = zmm3.d
                    else
                    label_1400d4a7e:
                        
                        if ((temp0_682 & 8) != 0)
                            *(&var_428:0xc + (rax_32 << 2)) = zmm3.d
                
                float temp0_683[0x4] = _mm_cmpeq_ps(temp0_678, zmm0, 5)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, temp0_683)) != 0)
                    zmm4 = *(&var_2d8 + rax_32)
                    zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                    zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 1), temp0_683)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                        char temp0_691 = _mm_movemask_ps(zmm5)
                        
                        if ((temp0_691 & 1) == 0)
                            if ((temp0_691 & 2) != 0)
                                goto label_1400d4b8f
                            
                            goto label_1400d4ada
                        
                        *(&var_428 + (rax_32 << 2)) = zmm4[0]
                        
                        if ((temp0_691 & 2) != 0)
                        label_1400d4b8f:
                            *(&var_428:4 + (rax_32 << 2)) = zmm4[0]
                            
                            if ((temp0_691 & 4) == 0)
                                goto label_1400d4ae3
                            
                            goto label_1400d4b9e
                        
                    label_1400d4ada:
                        
                        if ((temp0_691 & 4) != 0)
                        label_1400d4b9e:
                            *(&var_428:8 + (rax_32 << 2)) = zmm4[0]
                            
                            if ((temp0_691 & 8) != 0)
                                *(&var_428:0xc + (rax_32 << 2)) = zmm4[0]
                        else
                        label_1400d4ae3:
                            
                            if ((temp0_691 & 8) != 0)
                                *(&var_428:0xc + (rax_32 << 2)) = zmm4[0]
                    
                    zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 5), temp0_683)
                    
                    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm1)) != 0)
                        zmm2 = *(&var_148 + (rax_32 << 2))
                        char temp0_696 = _mm_movemask_ps(zmm0)
                        
                        if ((temp0_696 & 1) == 0)
                            if ((temp0_696 & 2) != 0)
                                goto label_1400d4bc5
                            
                            goto label_1400d4b20
                        
                        *(&var_428 + (rax_32 << 2)) = zmm2[0]
                        
                        if ((temp0_696 & 2) != 0)
                        label_1400d4bc5:
                            *(&var_428:4 + (rax_32 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5).d
                            
                            if ((temp0_696 & 4) == 0)
                                goto label_1400d4b29
                            
                            goto label_1400d4bd9
                        
                    label_1400d4b20:
                        
                        if ((temp0_696 & 4) != 0)
                        label_1400d4bd9:
                            *(&var_428:8 + (rax_32 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e).d
                            
                            if ((temp0_696 & 8) != 0)
                                *(&var_428:0xc + (rax_32 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                        else
                        label_1400d4b29:
                            
                            if ((temp0_696 & 8) != 0)
                                *(&var_428:0xc + (rax_32 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                
                if (rax_32 == 8)
                    break
                
                zmm0 = *(&var_138 + (rax_32 << 2))
                rax_32 += 4
            
            zmm9 = var_428
            zmm12 = var_418
            zmm14 = _mm_sub_ps(zmm9, temp0_673)
            zmm7 = *arg1
            zmm4 = *(arg1 + 4)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm0 = _mm_sub_ps(zmm9, zmm7)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_795[0x4] = _mm_sub_ps(zmm12, zmm4)
            zmm3 = *arg3
            zmm5 = *(arg3 + 4)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm0 = _mm_div_ps(zmm0, zmm3)
            float temp0_798[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_799[0x4] = _mm_div_ps(temp0_795, temp0_798)
            zmm10 = arg3[1].d
            zmm13 = _mm_cvttps_epi32(zmm0)
            zmm2 = _mm_cvttps_epi32(temp0_799)
            uint128_t var_348_3 = zmm3
            int32_t var_368_3[0x4] = zmm7
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm3), zmm7)
            zmm3 = __divps_xmmps_memps(*arg3 | zmm10[0].q << 0x40, data_142fc9600)
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
            uint128_t var_378_3 = zmm0
            int32_t var_318_3[0x4] = zmm9
            zmm6 = _mm_cmpeq_ps(_mm_add_ps(zmm6, zmm0), zmm9, 1)
            zmm7 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm0, zmm0))
            zmm0 = _mm_and_ps(zmm13, zmm6)
            zmm6 = _mm_or_ps(_mm_andnot_ps(zmm6, zmm7), zmm0)
            uint32_t var_358_3[0x4] = zmm4
            float temp0_816[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_798), zmm4)
            zmm9 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_818[0x4] = _mm_add_ps(temp0_816, zmm9)
            float temp0_819[0x4] = _mm_cmpeq_ps(temp0_818, zmm12, 1)
            char temp0_821 = _mm_movemask_ps(_mm_and_ps(temp0_819, zmm1))
            zmm11 = arg1[1].d
            float temp0_822[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm0 = temp0_630
            float temp0_823[0x4] = _mm_sub_ps(zmm0, temp0_822)
            float temp0_824[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm4 = _mm_cvttps_epi32(_mm_div_ps(temp0_823, temp0_824))
            zmm5 = zmm12
            zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_824), temp0_822)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            var_428 = zmm6
            float temp0_831[0x4] = _mm_cmpeq_ps(temp0_818, zmm5, 5)
            
            if (temp0_821 != 0)
                zmm13 = zmm2
            
            float temp0_832[0x4] = __subps_xmmps_memps(zmm5, temp0_675)
            zmm14 = _mm_mul_ps(zmm14, zmm14)
            zmm12 = _mm_add_ps(zmm12, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_831, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            float temp0_838[0x4] = __subps_xmmps_memps(zmm0, var_3a8_3)
            zmm14 = _mm_add_ps(zmm14, zx.o(0))
            float temp0_840[0x4] = _mm_mul_ps(temp0_832, temp0_832)
            uint32_t temp0_841[0x4] = _mm_and_ps(zmm13, temp0_819)
            zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_819, zmm7), temp0_841)
            var_418 = zmm8
            float temp0_844[0x4] = _mm_cmpeq_ps(zmm12, zmm0, 5)
            zmm12 = _mm_cmpeq_ps(zmm12, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm1)) != 0)
                zmm13 = zmm4
            
            zmm14 = _mm_add_ps(zmm14, temp0_840)
            float temp0_849[0x4] = _mm_mul_ps(temp0_838, temp0_838)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_844, zmm1)) != 0)
                zmm7 = __paddd_xmmdq_memdq(zmm4, data_142d3f800)
            
            int32_t var_3a8_5[0x4] = _mm_add_ps(zmm14, temp0_849)
            zmm13 = _mm_and_ps(zmm13, zmm12)
            zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm7), zmm13)
            float temp0_859[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), var_348_3), var_368_3)
            zmm4 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_798), var_358_3)
            float temp0_865[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_824), temp0_822)
            zmm7 = _mm_add_ps(var_378_3, temp0_859)
            zmm9 = _mm_add_ps(zmm9, zmm4)
            zmm3 = _mm_add_ps(zmm3, temp0_865)
            float temp0_869[0x4] = _mm_sub_ps(var_318_3, zmm7)
            zmm4 = _mm_sub_ps(zmm5, zmm9)
            zmm0 = _mm_sub_ps(zmm0, zmm3)
            float temp0_872[0x4] = _mm_div_ps(temp0_869, var_348_3)
            zmm4 = _mm_div_ps(zmm4, temp0_798)
            zmm0 = _mm_div_ps(zmm0, temp0_824)
            var_3e8 = temp0_872
            uint32_t var_3d8_7[0x4] = zmm4
            uint128_t var_3c8_7 = zmm0
            int64_t rax_43 = 0
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            
            while (true)
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
                
                if (_mm_movemask_ps(zmm6 & zmm1) != 0)
                    char temp0_878 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_878 & 1) == 0)
                        if ((temp0_878 & 2) != 0)
                            goto label_1400d5450
                        
                        goto label_1400d5381
                    
                    *(&var_428 + (rax_43 << 2)) = 0
                    
                    if ((temp0_878 & 2) != 0)
                    label_1400d5450:
                        *(&var_428:4 + (rax_43 << 2)) = 0
                        
                        if ((temp0_878 & 4) == 0)
                            goto label_1400d538a
                        
                        goto label_1400d5461
                    
                label_1400d5381:
                    
                    if ((temp0_878 & 4) == 0)
                    label_1400d538a:
                        
                        if ((temp0_878 & 8) != 0)
                            goto label_1400d5472
                        
                        goto label_1400d5393
                    
                label_1400d5461:
                    *(&var_428:8 + (rax_43 << 2)) = 0
                    
                    if ((temp0_878 & 8) != 0)
                    label_1400d5472:
                        *(&var_428:0xc + (rax_43 << 2)) = 0
                        
                        if ((temp0_878 & 1) == 0)
                            goto label_1400d539c
                        
                        goto label_1400d5483
                    
                label_1400d5393:
                    
                    if ((temp0_878 & 1) == 0)
                    label_1400d539c:
                        
                        if ((temp0_878 & 2) != 0)
                            goto label_1400d5494
                        
                        goto label_1400d53a5
                    
                label_1400d5483:
                    var_3e8[rax_43] = 0
                    
                    if ((temp0_878 & 2) != 0)
                    label_1400d5494:
                        var_3e8[1 + rax_43] = 0
                        
                        if ((temp0_878 & 4) == 0)
                            goto label_1400d53ae
                        
                        goto label_1400d54a5
                    
                label_1400d53a5:
                    
                    if ((temp0_878 & 4) != 0)
                    label_1400d54a5:
                        var_3e8[2 + rax_43] = 0
                        
                        if ((temp0_878 & 8) != 0)
                            var_3e8[3 + rax_43] = 0
                    else
                    label_1400d53ae:
                        
                        if ((temp0_878 & 8) != 0)
                            var_3e8[3 + rax_43] = 0
                
                int32_t rdx_71 = *(arg4 + rax_43)
                zmm2 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_71 - 1), 0), 
                    *(&var_428 + (rax_43 << 2)))
                
                if (_mm_movemask_ps(zmm2 & zmm1) != 0)
                    char temp0_882 = _mm_movemask_ps(zmm2)
                    
                    if ((temp0_882 & 1) == 0)
                        if ((temp0_882 & 2) != 0)
                            goto label_1400d54cc
                        
                        goto label_1400d53f7
                    
                    *(&var_428 + (rax_43 << 2)) = rdx_71 - 2
                    
                    if ((temp0_882 & 2) != 0)
                    label_1400d54cc:
                        *(&var_428:4 + (rax_43 << 2)) = rdx_71 - 2
                        
                        if ((temp0_882 & 4) == 0)
                            goto label_1400d5400
                        
                        goto label_1400d54d9
                    
                label_1400d53f7:
                    
                    if ((temp0_882 & 4) == 0)
                    label_1400d5400:
                        
                        if ((temp0_882 & 8) != 0)
                            goto label_1400d54e6
                        
                        goto label_1400d5409
                    
                label_1400d54d9:
                    *(&var_428:8 + (rax_43 << 2)) = rdx_71 - 2
                    
                    if ((temp0_882 & 8) != 0)
                    label_1400d54e6:
                        *(&var_428:0xc + (rax_43 << 2)) = rdx_71 - 2
                        
                        if ((temp0_882 & 1) == 0)
                            goto label_1400d5412
                        
                        goto label_1400d54f3
                    
                label_1400d5409:
                    
                    if ((temp0_882 & 1) == 0)
                    label_1400d5412:
                        
                        if ((temp0_882 & 2) != 0)
                            goto label_1400d5504
                        
                        goto label_1400d541b
                    
                label_1400d54f3:
                    var_3e8[rax_43] = 0x3f800000
                    
                    if ((temp0_882 & 2) != 0)
                    label_1400d5504:
                        var_3e8[1 + rax_43] = 0x3f800000
                        
                        if ((temp0_882 & 4) == 0)
                            goto label_1400d5424
                        
                        goto label_1400d5515
                    
                label_1400d541b:
                    
                    if ((temp0_882 & 4) != 0)
                    label_1400d5515:
                        var_3e8[2 + rax_43] = 0x3f800000
                        
                        if ((temp0_882 & 8) != 0)
                            var_3e8[3 + rax_43] = 0x3f800000
                    else
                    label_1400d5424:
                        
                        if ((temp0_882 & 8) != 0)
                            var_3e8[3 + rax_43] = 0x3f800000
                
                if (rax_43 == 8)
                    break
                
                zmm6 = *(&var_418 + (rax_43 << 2))
                rax_43 += 4
            
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm4 = var_428
            zmm2 = var_418
            zmm10 = zmm12
            zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
            zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), zmm3.q)
            int32_t temp0_982[0x4] = _mm_add_epi32(zmm0, zmm2)
            zmm3 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            int32_t temp0_989[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(temp0_982, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(temp0_982, 0xf5), zmm3), 0xe8)[0]
                    .q)
            zmm6 = _mm_add_epi32(temp0_989, zmm10)
            float (* rcx_10)[0x4] = *(arg5 + 0x10)
            zmm6 = _mm_slli_epi32(zmm6, 2) & zmm1
            int64_t rax_50 = sx.q(zmm6[0])
            zmm15 = *(rcx_10 + rax_50)
            int64_t rax_52 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
            float temp0_993[0x4] = _mm_unpacklo_ps(zmm15, (*(rcx_10 + rax_52))[0].q)
            int64_t rdx_75 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
            zmm5 = *(rcx_10 + rdx_75)
            int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
            float temp0_996[0x4] = _mm_unpacklo_ps(zmm5, (*(rcx_10 + rbp_6))[0].q)
            zmm15 = temp0_993[0].q | temp0_996[0].q << 0x40
            zmm13 = _mm_cmpeq_epi32(var_348_3, var_348_3)
            zmm4 = _mm_sub_epi32(zmm4, zmm13)
            zmm5 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
            zmm12 =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm8), 0xe8), zmm5[0].q)
            zmm4 = _mm_add_epi32(zmm12, zmm2)
            zmm5 = _mm_shuffle_epi32(zmm4, 0xf5)
            uint32_t temp0_1013[0x4] = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8)[0].q), 
                    zmm10), 
                2)
            int32_t temp0_1014[0x4] = _mm_add_epi32(temp0_982, zmm8)
            zmm5 = _mm_shuffle_epi32(temp0_1014, 0xf5)
            int32_t temp0_1020[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(temp0_1014, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8)[0].q)
            zmm4 = temp0_1013 & zmm1
            zmm6 = _mm_unpacklo_ps(*(rcx_10 + sx.q(zmm4[0])), 
                (*(rcx_10 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
            float temp0_1025[0x4] = _mm_unpacklo_ps(
                *(rcx_10 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
                (*(rcx_10 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
            zmm6 = _mm_sub_ps(zmm6[0].q | temp0_1025[0].q << 0x40, zmm15)
            zmm11 = var_3e8
            zmm8 = var_3d8_7
            zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm11), zmm15)
            zmm2 = _mm_sub_epi32(zmm2, zmm13)
            zmm0 = _mm_add_epi32(zmm0, zmm2)
            uint32_t temp0_1031[0x4] = _mm_shuffle_epi32(zmm0, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(temp0_1031, zmm3), 0xe8).q), 
                    zmm10), 
                2) & zmm1
            zmm0 = _mm_unpacklo_ps(*(rcx_10 + sx.q(zmm5[0])), 
                (*(rcx_10 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
                *(rcx_10 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                (*(rcx_10 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)[0].q << 0x40
            zmm2 = _mm_add_epi32(zmm2, zmm12)
            uint32_t temp0_1045[0x4] = _mm_shuffle_epi32(zmm2, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm3), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(temp0_1045, zmm3), 0xe8)[0].q), 
                    zmm10), 
                2) & zmm1
            float temp0_1054[0x4] = _mm_unpacklo_ps(*(rcx_10 + sx.q(zmm5[0])), 
                (*(rcx_10 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q)
            zmm4 = _mm_unpacklo_ps(*(rcx_10 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                (*(rcx_10 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
            float temp0_1060[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(temp0_1054[0].q | zmm4[0].q << 0x40, zmm0), zmm11), zmm0)
            int32_t (* rbp_31)[0x4] = var_308.q
            zmm7 = _mm_unpacklo_ps(*(rbp_31 + rcx_10 + rax_50), (*(r15_1 + rcx_10 + rax_52)).q)
            zmm0 = _mm_unpacklo_ps(*(r14_7 + rcx_10 + rdx_75), (*(rbx_13 + rcx_10 + rbp_6))[0].q)
            zmm7 = zmm7[0].q | zmm0.q << 0x40
            zmm3 = _mm_add_epi32(zmm3, zmm10)
            int32_t temp0_1064[0x4] = _mm_add_epi32(temp0_989, zmm3)
            zmm3 = _mm_add_epi32(zmm3, temp0_1020)
            zmm9 = _mm_slli_epi32(_mm_add_epi32(temp0_1020, zmm10), 2) & zmm1
            zmm4 = _mm_unpacklo_ps(*(rbp_31 + sx.q(zmm9[0]) + rcx_10), 
                (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm9, 0xe5).d) + rcx_10)).q)
            zmm0 = _mm_unpacklo_ps(*(r14_7 + sx.q(_mm_shuffle_epi32(zmm9, 0x4e).d) + rcx_10), 
                (*(rbx_13 + sx.q(_mm_shuffle_epi32(zmm9, 0xe7)[0]) + rcx_10))[0].q)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4[0].q | zmm0.q << 0x40, zmm7), zmm11), zmm7)
            zmm14 = _mm_slli_epi32(temp0_1064, 2) & zmm1
            float temp0_1078[0x4] = _mm_unpacklo_ps(*(rbp_31 + sx.q(zmm14[0]) + rcx_10), 
                (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rcx_10)).q)
            zmm0 = _mm_unpacklo_ps(*(r14_7 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rcx_10), 
                (*(rbx_13 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rcx_10))[0].q)
            zmm5 = temp0_1078[0].q | zmm0.q << 0x40
            zmm3 = _mm_slli_epi32(zmm3, 2) & zmm1
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rbp_31 + sx.q(zmm3.d) + rcx_10), 
                            (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rcx_10))[0].q).q |
                            _mm_unpacklo_ps(
                            *(r14_7 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rcx_10), 
                            (*(rbx_13 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rcx_10)).q)[0].q
                            << 0x40, 
                        zmm5), 
                    zmm11), 
                zmm5)
            float temp0_1093[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_1060, zmm6), zmm8), zmm6)
            zmm0 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, zmm4), zmm8), zmm4), 
                        temp0_1093), 
                    var_3c8_7), 
                temp0_1093)
            zmm4 = var_3a8_5
            zmm3 = _mm_cmpeq_ps(zmm4, zx.o(0), 4)
            zmm2 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm4, 7), zmm3), zmm1)
            
            if (_mm_movemask_ps(zmm2) != 0)
                zmm3 = _mm_rsqrt_ps(zmm4)
                zmm5 = _mm_mul_ps(_mm_mul_ps(zmm4, zmm3), zmm3)
                zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm3), 
                    data_142d3f640)
                zmm3 = _mm_rcp_ps(zmm4)
                zmm4 = _mm_mul_ps(zmm4, zmm3)
                zmm5 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), zmm3), zmm0), zmm2)
                zmm0 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm0), zmm5)
            
            zmm2 = *arg9
            uint32_t i_8 = _mm_movemask_ps(_mm_and_ps(
                _mm_cmpeq_ps(zmm0, _mm_shuffle_ps(zmm2, zmm2, 0), 1), zmm1))
            
            if (i_8 == 0)
                return 0
            
            uint64_t i_5 = zx.q(i_8)
            result = 0
            
            do
                uint64_t rdx_78
                
                if (i_5 == 0)
                    rdx_78 = 0x40
                    i_5 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400d5eb1:
                        uint128_t var_268 = zmm0
                        uint64_t rdx_79 = zx.q(rdx_78.d) & 3
                        *arg9 = (*(&var_268 + (rdx_79 << 2)))[0]
                        float var_258[0x4] = var_2b8_1
                        *arg8 = var_258[rdx_79]
                else
                    uint64_t rflags_3
                    rdx_78, rflags_3 = _bit_scan_forward(i_5)
                    i_5 &= not.q(1 << (rdx_78 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400d5eb1
                result.b = 1
            while (i_5 != 0)
return result
