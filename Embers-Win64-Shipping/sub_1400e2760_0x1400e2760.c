// 函数: sub_1400e2760
// 地址: 0x1400e2760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
uint128_t zmm14
uint128_t var_68 = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm7[0x4]
float var_d8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_e8[0x4] = zmm6
uint128_t zmm3 = arg8
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
int32_t i = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
uint128_t var_2c8
int32_t* result
int64_t* rdx_2
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
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
    rdx_2 = arg10
    result = arg9
    
    if (0 s< arg11)
    label_1400e3774:
        float var_288_1[0x4] = zmm10
        float var_278_1[0x4] = zmm9
        float var_268_1[0x4] = zmm8
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
        zmm4 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm0)
        zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm4
        int64_t rax_53 = sx.q(zmm1.d)
        void* rdi_5 = &(*arg7)[rax_53]
        zmm0 = (*arg7)[rax_53]
        int64_t rax_55 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
        void* rbp_22 = &(*arg7)[rax_55]
        zmm0 = _mm_unpacklo_ps(zmm0, (*arg7)[rax_55].q)
        int64_t rax_57 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
        void* rbx_1 = &(*arg7)[rax_57]
        zmm2 = (*arg7)[rax_57]
        int64_t rax_59 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
        void* r11_4 = &(*arg7)[rax_59]
        zmm0 = zmm0.q | _mm_unpacklo_ps(zmm2, (*arg7)[rax_59].q).q << 0x40
        zmm2 = data_142fc95e0 & zmm4
        uint128_t* r15_1 = zx.q(zmm2.d)
        zmm8 = *(r15_1 + rdi_5)
        float (* r12_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        float temp0_347[0x4] = _mm_unpacklo_ps(zmm8, (*(r12_1 + rbp_22)).q)
        float (* r13_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        zmm3 = *(r13_1 + rbx_1)
        uint32_t (* rdx_3)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        zmm3 = _mm_unpacklo_ps(zmm3, (*(rdx_3 + r11_4)).q)
        zmm8 = temp0_347[0].q | zmm3.q << 0x40
        zmm2 = data_142fc95f0 & zmm4
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm2.d) + rdi_5), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5).d) + rbp_22)).q)
        zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e).d) + rbx_1), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7).d) + r11_4)).q)
        zmm6 = zmm6[0].q | zmm3.q << 0x40
        uint128_t var_168_1 = zmm0
        uint32_t var_148_1[0x4] = zmm6
        float var_138_1[0x4] = zx.o(0)
        zmm5 = (*arg6)[3]
        float temp0_356[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_358 = temp0_356
        var_348 = temp0_356
        zmm7 = *arg6
        zmm1 = (*arg6)[1]
        zmm3 = (*arg6)[2]
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_358[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_359[0x4] = _mm_mul_ps(zmm8, temp0_358)
        float temp0_360[0x4] = _mm_mul_ps(temp0_358, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm1)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        zmm2 = _mm_mul_ps(zx.o(0), temp0_356)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm3, zmm8))
        zmm0 = _mm_sub_ps(zmm0, temp0_360)
        float temp0_369[0x4] = _mm_sub_ps(temp0_359, zmm1)
        zmm2 = _mm_sub_ps(zmm2, zmm2)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        float temp0_373[0x4] = _mm_add_ps(temp0_369, temp0_369)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        var_318 = zmm6
        uint128_t var_308_3 = zmm0
        float var_2f8_3[0x4] = temp0_373
        uint128_t var_2e8_2 = zmm2
        zmm2 = _mm_mul_ps(zmm2, temp0_356)
        zmm1 = _mm_mul_ps(temp0_356, zmm6)
        float temp0_377[0x4] = _mm_mul_ps(temp0_356, zmm0)
        float temp0_378[0x4] = _mm_mul_ps(temp0_356, temp0_373)
        zmm1 = __addps_xmmps_memps(zmm1, var_168_1)
        float temp0_380[0x4] = __addps_xmmps_memps(temp0_377, zmm8)
        float temp0_381[0x4] = __addps_xmmps_memps(temp0_378, var_148_1)
        float var_328_2[0x4] = temp0_356
        uint128_t var_128_1 = zmm1
        float var_118_1[0x4] = temp0_380
        float var_108_1[0x4] = temp0_381
        uint128_t var_f8_1 = __addps_xmmps_memps(zmm2, var_138_1)
        zmm3 = *arg6
        zmm5 = (*arg6)[1]
        zmm7 = (*arg6)[2]
        float temp0_383[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm2 = _mm_mul_ps(zmm0, zmm3)
        zmm3 = _mm_mul_ps(zmm3, temp0_373)
        float temp0_387[0x4] = _mm_mul_ps(temp0_373, temp0_383)
        float temp0_388[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_389[0x4] = _mm_mul_ps(temp0_383, zmm6)
        zmm6 = _mm_mul_ps(zmm6, temp0_388)
        float temp0_392[0x4] = _mm_sub_ps(temp0_387, _mm_mul_ps(temp0_388, zmm0))
        zmm6 = _mm_sub_ps(zmm6, zmm3)
        zmm2 = _mm_sub_ps(zmm2, temp0_389)
        float temp0_395[0x4] = _mm_add_ps(temp0_392, zmm1)
        zmm6 = _mm_add_ps(zmm6, temp0_380)
        zmm2 = _mm_add_ps(zmm2, temp0_381)
        zmm5 = arg6[1][0]
        zmm1 = (*arg6)[5]
        float temp0_399[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_395)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm6)
        zmm0 = (*arg6)[6]
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2)
        float var_1d8[0x4] = temp0_399
        uint128_t var_258_2 = zmm1
        uint128_t var_1c8 = zmm1
        float var_2d8_3[0x4] = zmm0
        uint128_t var_1b8_1 = zmm0
        int64_t rax_64 = 0
        zmm0 = temp0_399
        
        while (true)
            zmm2 = *(&var_2a8 + rax_64)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = _mm_cmpeq_ps(zmm1, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm4)) != 0)
                char temp0_408 = _mm_movemask_ps(zmm3)
                
                if ((temp0_408 & 1) == 0)
                    if ((temp0_408 & 2) != 0)
                        goto label_1400e3b9f
                    
                    goto label_1400e3aa8
                
                *(&var_358 + (rax_64 << 2)) = zmm2.d
                
                if ((temp0_408 & 2) != 0)
                label_1400e3b9f:
                    *(&var_358:4 + (rax_64 << 2)) = zmm2.d
                    
                    if ((temp0_408 & 4) == 0)
                        goto label_1400e3ab2
                    
                    goto label_1400e3baf
                
            label_1400e3aa8:
                
                if ((temp0_408 & 4) != 0)
                label_1400e3baf:
                    *(&var_358:8 + (rax_64 << 2)) = zmm2.d
                    
                    if ((temp0_408 & 8) != 0)
                        *(&var_358:0xc + (rax_64 << 2)) = zmm2.d
                else
                label_1400e3ab2:
                    
                    if ((temp0_408 & 8) != 0)
                        *(&var_358:0xc + (rax_64 << 2)) = zmm2.d
            
            zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm1)) != 0)
                zmm3 = *(&var_2b8 + rax_64)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                uint32_t temp0_414[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1)
                
                if (_mm_movemask_ps(_mm_and_ps(temp0_414, zmm4)) != 0)
                    char temp0_417 = _mm_movemask_ps(temp0_414)
                    
                    if ((temp0_417 & 1) == 0)
                        if ((temp0_417 & 2) != 0)
                            goto label_1400e3bd3
                        
                        goto label_1400e3b13
                    
                    *(&var_358 + (rax_64 << 2)) = zmm3.d
                    
                    if ((temp0_417 & 2) != 0)
                    label_1400e3bd3:
                        *(&var_358:4 + (rax_64 << 2)) = zmm3.d
                        
                        if ((temp0_417 & 4) == 0)
                            goto label_1400e3b1d
                        
                        goto label_1400e3be3
                    
                label_1400e3b13:
                    
                    if ((temp0_417 & 4) != 0)
                    label_1400e3be3:
                        *(&var_358:8 + (rax_64 << 2)) = zmm3.d
                        
                        if ((temp0_417 & 8) != 0)
                            *(&var_358:0xc + (rax_64 << 2)) = zmm3.d
                    else
                    label_1400e3b1d:
                        
                        if ((temp0_417 & 8) != 0)
                            *(&var_358:0xc + (rax_64 << 2)) = zmm3.d
                
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm4)) != 0)
                    zmm1 = *(&var_1d8 + (rax_64 << 2))
                    char temp0_422 = _mm_movemask_ps(zmm0)
                    
                    if ((temp0_422 & 1) == 0)
                        if ((temp0_422 & 2) != 0)
                            goto label_1400e3c0c
                        
                        goto label_1400e3b5e
                    
                    *(&var_358 + (rax_64 << 2)) = zmm1.d
                    
                    if ((temp0_422 & 2) != 0)
                    label_1400e3c0c:
                        *(&var_358:4 + (rax_64 << 2)) = _mm_shuffle_epi32(zmm1, 0xe5).d
                        
                        if ((temp0_422 & 4) == 0)
                            goto label_1400e3b68
                        
                        goto label_1400e3c21
                    
                label_1400e3b5e:
                    
                    if ((temp0_422 & 4) != 0)
                    label_1400e3c21:
                        *(&var_358:8 + (rax_64 << 2)) = _mm_shuffle_epi32(zmm1, 0x4e).d
                        
                        if ((temp0_422 & 8) != 0)
                            *(&var_358:0xc + (rax_64 << 2)) = _mm_shuffle_epi32(zmm1, 0xe7).d
                    else
                    label_1400e3b68:
                        
                        if ((temp0_422 & 8) != 0)
                            *(&var_358:0xc + (rax_64 << 2)) = _mm_shuffle_epi32(zmm1, 0xe7).d
            
            if (rax_64 == 8)
                break
            
            zmm0 = *(&var_1c8 + (rax_64 << 2))
            rax_64 += 4
        
        zmm9 = var_358
        zmm14 = var_348
        zmm12 = _mm_sub_ps(zmm9, temp0_399)
        zmm6 = *arg1
        zmm2 = *(arg1 + 4)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm0 = _mm_sub_ps(zmm9, zmm6)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = _mm_sub_ps(zmm14, zmm2)
        zmm3 = *arg3
        zmm7 = *(arg3 + 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm0 = _mm_div_ps(zmm0, zmm3)
        float temp0_433[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_433)
        zmm8 = arg3[1].d
        zmm15 = _mm_cvttps_epi32(zmm0)
        zmm0 = _mm_cvttps_epi32(zmm1)
        uint128_t var_218_2 = zmm3
        uint32_t var_238_2[0x4] = zmm6
        float temp0_439[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm3), zmm6)
        zmm6 = zmm0
        zmm0 = __divps_xmmps_memps(*arg3 | zmm8[0].q << 0x40, data_142fc9600)
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0)
        uint128_t var_248_2 = zmm1
        float var_1e8_2[0x4] = zmm9
        float temp0_443[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_439, zmm1), zmm9, 1)
        zmm3 = _mm_add_epi32(zmm15, _mm_cmpeq_epi32(zmm1, zmm1))
        zmm1 = _mm_and_ps(zmm15, temp0_443)
        zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_443, zmm3), zmm1)
        uint128_t var_228_2 = zmm2
        float temp0_451[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_433), zmm2)
        float temp0_452[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        float temp0_453[0x4] = _mm_add_ps(temp0_451, temp0_452)
        float temp0_454[0x4] = _mm_cmpeq_ps(temp0_453, zmm14, 1)
        char temp0_456 = _mm_movemask_ps(_mm_and_ps(temp0_454, zmm4))
        zmm1 = arg1[1].d
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm2 = _mm_sub_ps(temp0_356, zmm1)
        float temp0_459[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm10 = _mm_cvttps_epi32(_mm_div_ps(zmm2, temp0_459))
        zmm2 = zmm14
        zmm14 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_459), zmm1)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
        var_358 = zmm5
        float temp0_466[0x4] = _mm_cmpeq_ps(temp0_453, zmm2, 5)
        
        if (temp0_456 != 0)
            zmm15 = zmm6
        
        uint128_t var_1f8_2 = zmm2
        zmm2 = __subps_xmmps_memps(zmm2, var_258_2)
        zmm12 = _mm_mul_ps(zmm12, zmm12)
        zmm14 = _mm_add_ps(zmm14, zmm0)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_466, zmm4)) != 0)
            zmm3 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
        
        float temp0_473[0x4] = __subps_xmmps_memps(temp0_356, var_2d8_3)
        zmm12 = _mm_add_ps(zmm12, zx.o(0))
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        uint32_t temp0_476[0x4] = _mm_and_ps(zmm15, temp0_454)
        zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_454, zmm3), temp0_476)
        var_348 = zmm9
        float temp0_479[0x4] = _mm_cmpeq_ps(zmm14, temp0_356, 5)
        zmm14 = _mm_cmpeq_ps(zmm14, temp0_356, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm14, zmm4)) != 0)
            zmm15 = zmm10
        
        zmm12 = _mm_add_ps(zmm12, zmm2)
        float temp0_484[0x4] = _mm_mul_ps(temp0_473, temp0_473)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_479, zmm4)) != 0)
            zmm3 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
        
        uint128_t var_2d8_4 = _mm_add_ps(zmm12, temp0_484)
        zmm15 = _mm_and_ps(zmm15, zmm14)
        zmm14 = _mm_or_ps(_mm_andnot_ps(zmm14, zmm3), zmm15)
        zmm10 = var_218_2
        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm5), zmm10), var_238_2)
        zmm3 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_433), var_228_2)
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), temp0_459), zmm1)
        zmm1 = _mm_add_ps(var_248_2, zmm2)
        float temp0_502[0x4] = _mm_add_ps(temp0_452, zmm3)
        zmm0 = _mm_add_ps(zmm0, zmm6)
        zmm2 = _mm_sub_ps(var_1e8_2, zmm1)
        zmm3 = _mm_sub_ps(var_1f8_2, temp0_502)
        float temp0_506[0x4] = _mm_sub_ps(temp0_356, zmm0)
        zmm2 = _mm_div_ps(zmm2, zmm10)
        zmm3 = _mm_div_ps(zmm3, temp0_433)
        float temp0_509[0x4] = _mm_div_ps(temp0_506, temp0_459)
        var_318 = zmm2
        uint128_t var_308_4 = zmm3
        int64_t rax_69 = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm5 = _mm_cmpeq_epi32(zmm5, zmm0)
            
            if (_mm_movemask_ps(zmm5 & zmm4) != 0)
                char temp0_513 = _mm_movemask_ps(zmm5)
                
                if ((temp0_513 & 1) == 0)
                    if ((temp0_513 & 2) != 0)
                        goto label_1400e3fd0
                    
                    goto label_1400e3f01
                
                *(&var_358 + (rax_69 << 2)) = 0
                
                if ((temp0_513 & 2) != 0)
                label_1400e3fd0:
                    *(&var_358:4 + (rax_69 << 2)) = 0
                    
                    if ((temp0_513 & 4) == 0)
                        goto label_1400e3f0a
                    
                    goto label_1400e3fe1
                
            label_1400e3f01:
                
                if ((temp0_513 & 4) == 0)
                label_1400e3f0a:
                    
                    if ((temp0_513 & 8) != 0)
                        goto label_1400e3ff2
                    
                    goto label_1400e3f13
                
            label_1400e3fe1:
                *(&var_358:8 + (rax_69 << 2)) = 0
                
                if ((temp0_513 & 8) != 0)
                label_1400e3ff2:
                    *(&var_358:0xc + (rax_69 << 2)) = 0
                    
                    if ((temp0_513 & 1) == 0)
                        goto label_1400e3f1c
                    
                    goto label_1400e4003
                
            label_1400e3f13:
                
                if ((temp0_513 & 1) == 0)
                label_1400e3f1c:
                    
                    if ((temp0_513 & 2) != 0)
                        goto label_1400e4014
                    
                    goto label_1400e3f25
                
            label_1400e4003:
                *(&var_318 + (rax_69 << 2)) = 0
                
                if ((temp0_513 & 2) != 0)
                label_1400e4014:
                    *(&var_318:4 + (rax_69 << 2)) = 0
                    
                    if ((temp0_513 & 4) == 0)
                        goto label_1400e3f2e
                    
                    goto label_1400e4025
                
            label_1400e3f25:
                
                if ((temp0_513 & 4) != 0)
                label_1400e4025:
                    *(&var_318:8 + (rax_69 << 2)) = 0
                    
                    if ((temp0_513 & 8) != 0)
                        *(&var_318:0xc + (rax_69 << 2)) = 0
                else
                label_1400e3f2e:
                    
                    if ((temp0_513 & 8) != 0)
                        *(&var_318:0xc + (rax_69 << 2)) = 0
            
            int32_t rbp_30 = *(arg4 + rax_69)
            zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp_30 - 1), 0), 
                *(&var_358 + (rax_69 << 2)))
            
            if (_mm_movemask_ps(zmm1 & zmm4) != 0)
                char temp0_517 = _mm_movemask_ps(zmm1)
                
                if ((temp0_517 & 1) == 0)
                    if ((temp0_517 & 2) != 0)
                        goto label_1400e404c
                    
                    goto label_1400e3f77
                
                *(&var_358 + (rax_69 << 2)) = rbp_30 - 2
                
                if ((temp0_517 & 2) != 0)
                label_1400e404c:
                    *(&var_358:4 + (rax_69 << 2)) = rbp_30 - 2
                    
                    if ((temp0_517 & 4) == 0)
                        goto label_1400e3f80
                    
                    goto label_1400e4059
                
            label_1400e3f77:
                
                if ((temp0_517 & 4) == 0)
                label_1400e3f80:
                    
                    if ((temp0_517 & 8) != 0)
                        goto label_1400e4066
                    
                    goto label_1400e3f89
                
            label_1400e4059:
                *(&var_358:8 + (rax_69 << 2)) = rbp_30 - 2
                
                if ((temp0_517 & 8) != 0)
                label_1400e4066:
                    *(&var_358:0xc + (rax_69 << 2)) = rbp_30 - 2
                    
                    if ((temp0_517 & 1) == 0)
                        goto label_1400e3f92
                    
                    goto label_1400e4073
                
            label_1400e3f89:
                
                if ((temp0_517 & 1) == 0)
                label_1400e3f92:
                    
                    if ((temp0_517 & 2) != 0)
                        goto label_1400e4084
                    
                    goto label_1400e3f9b
                
            label_1400e4073:
                *(&var_318 + (rax_69 << 2)) = 0x3f800000
                
                if ((temp0_517 & 2) != 0)
                label_1400e4084:
                    *(&var_318:4 + (rax_69 << 2)) = 0x3f800000
                    
                    if ((temp0_517 & 4) == 0)
                        goto label_1400e3fa4
                    
                    goto label_1400e4095
                
            label_1400e3f9b:
                
                if ((temp0_517 & 4) != 0)
                label_1400e4095:
                    *(&var_318:8 + (rax_69 << 2)) = 0x3f800000
                    
                    if ((temp0_517 & 8) != 0)
                        *(&var_318:0xc + (rax_69 << 2)) = 0x3f800000
                else
                label_1400e3fa4:
                    
                    if ((temp0_517 & 8) != 0)
                        *(&var_318:0xc + (rax_69 << 2)) = 0x3f800000
            
            if (rax_69 == 8)
                break
            
            zmm5 = *(&var_348 + (rax_69 << 2))
            rax_69 += 4
        
        zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm7 = var_358
        zmm3 = var_348
        zmm9 = zmm14
        zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
        zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm0.q)
        zmm2 = _mm_add_epi32(zmm1, zmm3)
        uint32_t temp0_526[0x4] = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, temp0_526), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), temp0_526), 0xe8).q)
        zmm5 = _mm_add_epi32(zmm14, zmm9)
        float (* rax_70)[0x4] = *(arg5 + 0x10)
        zmm5 = _mm_slli_epi32(zmm5, 2) & zmm4
        int64_t rbp_32 = sx.q(zmm5[0])
        zmm15 = *(rax_70 + rbp_32)
        int64_t rbx_2 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d)
        float temp0_536[0x4] = _mm_unpacklo_ps(zmm15, (*(rax_70 + rbx_2)).q)
        int64_t rbx_4 = sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)
        zmm0 = *(rax_70 + rbx_4)
        int64_t rbx_6 = sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])
        zmm0 = _mm_unpacklo_ps(zmm0, (*(rax_70 + rbx_6))[0].q)
        zmm15 = temp0_536[0].q | zmm0.q << 0x40
        zmm13 = _mm_cmpeq_epi32(temp0_509, temp0_509)
        zmm7 = _mm_sub_epi32(zmm7, zmm13)
        zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
        zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), zmm0.q)
        zmm0 = _mm_add_epi32(zmm12, zmm3)
        zmm5 = _mm_shuffle_epi32(zmm0, 0xf5)
        zmm7 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_526), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm5, temp0_526), 0xe8).q), 
                zmm9), 
            2)
        zmm2 = _mm_add_epi32(zmm2, zmm8)
        zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
        zmm10 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, temp0_526), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_526), 0xe8).q)
        zmm7 &= zmm4
        float temp0_565[0x4] = _mm_unpacklo_ps(*(rax_70 + sx.q(zmm7[0])), 
            (*(rax_70 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q)
        zmm0 = _mm_unpacklo_ps(*(rax_70 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d)), 
            (*(rax_70 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7).d))).q)
        float temp0_569[0x4] = _mm_sub_ps(temp0_565[0].q | zmm0.q << 0x40, zmm15)
        zmm8 = var_318
        zmm11 = var_308_4
        float temp0_571[0x4] = _mm_add_ps(_mm_mul_ps(temp0_569, zmm8), zmm15)
        zmm3 = _mm_sub_epi32(zmm3, zmm13)
        zmm1 = _mm_add_epi32(zmm1, zmm3)
        zmm0 = _mm_shuffle_epi32(zmm1, 0xf5)
        zmm1 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, temp0_526), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm0, temp0_526), 0xe8).q), 
                zmm9), 
            2) & zmm4
        zmm0 = _mm_unpacklo_ps(*(rax_70 + sx.q(zmm1.d)), 
            (*(rax_70 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d))).q).q | _mm_unpacklo_ps(
            *(rax_70 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)), 
            (*(rax_70 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d))).q).q << 0x40
        zmm3 = _mm_add_epi32(zmm3, zmm12)
        zmm1 = _mm_shuffle_epi32(zmm3, 0xf5)
        zmm2 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, temp0_526), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm1, temp0_526), 0xe8).q), 
                zmm9), 
            2) & zmm4
        zmm3 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(rax_70 + sx.q(zmm2.d)), 
                        (*(rax_70 + sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d))).q).q | _mm_unpacklo_ps(
                        *(rax_70 + sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)), 
                        (*(rax_70 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d))).q).q << 0x40, 
                    zmm0), 
                zmm8), 
            zmm0)
        zmm2 = _mm_unpacklo_ps(*(r15_1 + rax_70 + rbp_32), (*(r12_1 + rax_70 + rbx_2)).q).q
            | _mm_unpacklo_ps(*(r13_1 + rax_70 + rbx_4), (*(rdx_3 + rax_70 + rbx_6)).q).q << 0x40
        zmm6 = _mm_add_epi32(temp0_526, zmm9)
        zmm14 = _mm_add_epi32(zmm14, zmm6)
        zmm6 = _mm_add_epi32(zmm6, zmm10)
        zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, zmm9), 2) & zmm4
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r15_1 + sx.q(zmm10[0]) + rax_70), 
                        (*(r12_1 + sx.q(_mm_shuffle_epi32(zmm10, 0xe5).d) + rax_70)).q).q |
                        _mm_unpacklo_ps(*(r13_1 + sx.q(_mm_shuffle_epi32(zmm10, 0x4e).d) + rax_70), 
                        (*(rdx_3 + sx.q(_mm_shuffle_epi32(zmm10, 0xe7)[0]) + rax_70))[0].q).q << 0x40, 
                    zmm2), 
                zmm8), 
            zmm2)
        zmm14 = _mm_slli_epi32(zmm14, 2) & zmm4
        zmm2 = _mm_unpacklo_ps(*(r15_1 + sx.q(zmm14.d) + rax_70), 
            (*(r12_1 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rax_70)).q).q | _mm_unpacklo_ps(
            *(r13_1 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rax_70), 
            (*(rdx_3 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rax_70))[0].q).q << 0x40
        zmm6 = _mm_slli_epi32(zmm6, 2) & zmm4
        zmm0 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r15_1 + sx.q(zmm6[0]) + rax_70), 
                        (*(r12_1 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0]) + rax_70))[0].q).q |
                        _mm_unpacklo_ps(*(r13_1 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0]) + rax_70), 
                        (*(rdx_3 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0]) + rax_70))[0].q)[0].q
                        << 0x40, 
                    zmm2), 
                zmm8), 
            zmm2)
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_571), zmm11), temp0_571)
        zmm0 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, zmm1), zmm11), zmm1), zmm3), 
                temp0_509), 
            zmm3)
        zmm5 = var_2d8_4
        zmm2 = _mm_cmpeq_ps(zmm5, zx.o(0), 4)
        zmm1 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm5, 7), zmm2), zmm4)
        
        if (_mm_movemask_ps(zmm1) != 0)
            zmm2 = _mm_rsqrt_ps(zmm5)
            float temp0_650[0x4] = _mm_mul_ps(_mm_mul_ps(zmm5, zmm2), zmm2)
            zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_650), zmm2), 
                data_142d3f640)
            zmm2 = _mm_rcp_ps(zmm3)
            zmm3 = _mm_mul_ps(zmm3, zmm2)
            zmm5 = _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), zmm2), zmm0), 
                zmm1)
            zmm0 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm5)
        
        zmm8 = var_268_1
        zmm9 = var_278_1
        zmm10 = var_288_1
        rdx_2 = arg10
        zmm1 = arg8
        zmm0 = _mm_sub_ps(zmm0, _mm_shuffle_ps(zmm1, zmm1, 0))
        zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm0, data_142fc95d0, 1), zmm4)
        char temp0_666 = _mm_movemask_ps(zmm1)
        
        if (temp0_666 == 0)
            result = arg9
        else
            float temp0_667[0x4] = _mm_mul_ps(var_1d8, zmm0)
            zmm6 = _mm_mul_ps(var_1c8, zmm0)
            float temp0_669[0x4] = _mm_mul_ps(var_1b8_1, zmm0)
            zmm4 = zmm9
            char temp0_670 = temp0_666 & 1
            
            if (temp0_670 == 0)
                zmm3 = zmm8
                
                if (temp0_670 != 0)
                    goto label_1400e4793
                
                goto label_1400e45e6
            
            zmm4 = zmm9
            zmm4[0] = zmm4[0] + temp0_667[0]
            zmm3 = zmm8
            
            if (temp0_670 != 0)
            label_1400e4793:
                zmm3.d = zmm8.d f+ zmm6[0]
                zmm2 = zmm10
                
                if (temp0_670 == 0)
                    goto label_1400e45f0
                
                goto label_1400e47a5
            
        label_1400e45e6:
            zmm2 = zmm10
            bool cond:9_1
            bool cond:10_1
            bool cond:13_1
            bool cond:14_1
            
            if (temp0_670 == 0)
            label_1400e45f0:
                zmm9 = _mm_add_ps(zmm9, temp0_667)
                char temp3_1 = temp0_666 & 2
                cond:9_1 = temp3_1 != 0
                cond:10_1 = temp3_1 == 0
                cond:13_1 = temp3_1 == 0
                cond:14_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_1400e47c1
                
                goto label_1400e45fc
            
        label_1400e47a5:
            zmm2.d = zmm10.d f+ temp0_669[0]
            zmm9 = _mm_add_ps(zmm9, temp0_667)
            char temp2_1 = temp0_666 & 2
            cond:9_1 = temp2_1 != 0
            cond:10_1 = temp2_1 == 0
            cond:13_1 = temp2_1 == 0
            cond:14_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
            label_1400e47c1:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4, 1), zmm4, 0xe2)
                zmm8 = _mm_add_ps(zmm8, zmm6)
                
                if (cond:10_1)
                    goto label_1400e4606
                
                goto label_1400e47da
            
        label_1400e45fc:
            zmm8 = _mm_add_ps(zmm8, zmm6)
            
            if (not(cond:9_1))
            label_1400e4606:
                zmm10 = _mm_add_ps(zmm10, temp0_669)
                
                if (cond:14_1)
                    goto label_1400e47f3
                
                goto label_1400e4610
            
        label_1400e47da:
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm3, 1), zmm3, 0xe2)
            zmm10 = _mm_add_ps(zmm10, temp0_669)
            bool cond:17_1
            bool cond:18_1
            bool cond:21_1
            bool cond:22_1
            
            if (not(cond:13_1))
            label_1400e47f3:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm2, 1), zmm2, 0xe2)
                char temp7_1 = temp0_666 & 4
                cond:17_1 = temp7_1 == 0
                cond:18_1 = temp7_1 != 0
                cond:21_1 = temp7_1 != 0
                cond:22_1 = temp7_1 == 0
                
                if (temp7_1 == 0)
                    goto label_1400e4618
                
                goto label_1400e4806
            
        label_1400e4610:
            char temp6_1 = temp0_666 & 4
            cond:17_1 = temp6_1 == 0
            cond:18_1 = temp6_1 != 0
            cond:21_1 = temp6_1 != 0
            cond:22_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
            label_1400e4806:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x32), 0x84)
                
                if (not(cond:17_1))
                label_1400e4818:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x32), 0x84)
                    
                    if (cond:22_1)
                        goto label_1400e4624
                    
                    goto label_1400e482a
            else
            label_1400e4618:
                
                if (cond:18_1)
                    goto label_1400e4818
            
            bool cond:27_1
            bool cond:28_1
            bool cond:31_1
            bool cond:32_1
            
            if (not(cond:21_1))
            label_1400e4624:
                char temp11_1 = temp0_666 & 8
                cond:27_1 = temp11_1 != 0
                cond:28_1 = temp11_1 == 0
                cond:31_1 = temp11_1 != 0
                cond:32_1 = temp11_1 == 0
                result = arg9
                
                if (temp11_1 != 0)
                    goto label_1400e4848
                
                goto label_1400e4634
            
        label_1400e482a:
            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x32), 0x84)
            char temp10_1 = temp0_666 & 8
            cond:27_1 = temp10_1 != 0
            cond:28_1 = temp10_1 == 0
            cond:31_1 = temp10_1 != 0
            cond:32_1 = temp10_1 == 0
            result = arg9
            
            if (temp10_1 != 0)
            label_1400e4848:
                zmm9 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x23), 0x24)
                
                if (cond:28_1)
                    goto label_1400e463e
                
                goto label_1400e485c
            
        label_1400e4634:
            zmm9 = zmm4
            
            if (cond:27_1)
            label_1400e485c:
                zmm8 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x23), 0x24)
                
                if (cond:31_1)
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x23), 0x24)
            else
            label_1400e463e:
                zmm8 = zmm3
                
                if (not(cond:32_1))
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
        float var_288[0x4]
        __builtin_memset(&var_288, 0, 0x30)
        int64_t rbp_3 = sx.q((rbx << 2).d * 3)
        zmm4 = *(arg7 + rbp_3)
        zmm0 = *(arg7 + rbp_3 + 0x10)
        zmm1 = *(arg7 + rbp_3 + 0x20)
        zmm6 = _mm_shuffle_ps(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5).q), 
            zmm1, 0xc4)
        zmm2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm4, zmm0, 5)
        float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, 
            _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_31, zmm0, 0xf8), 0x22), 0x28)
        var_318 = zmm2
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
        float temp0_36[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm3 = _mm_mul_ps(temp0_36, zmm6)
        float temp0_38[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        float temp0_39[0x4] = _mm_mul_ps(temp0_38, zmm2)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_41[0x4] = _mm_mul_ps(temp0_40, temp0_34)
        zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(temp0_34, temp0_38))
        float temp0_45[0x4] = _mm_sub_ps(temp0_39, _mm_mul_ps(zmm6, temp0_40))
        float temp0_47[0x4] = _mm_sub_ps(temp0_41, _mm_mul_ps(zmm2, temp0_36))
        zmm3 = _mm_add_ps(zmm3, zmm3)
        float temp0_49[0x4] = _mm_add_ps(temp0_45, temp0_45)
        float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_47)
        float temp0_51[0x4] = _mm_mul_ps(zmm0, zmm3)
        float temp0_52[0x4] = _mm_mul_ps(zmm0, temp0_49)
        float temp0_53[0x4] = __addps_xmmps_memps(temp0_51, var_318)
        float temp0_54[0x4] = __addps_xmmps_memps(temp0_52, temp0_34)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_50), zmm6)
        zmm1 = _mm_mul_ps(temp0_50, temp0_36)
        zmm2 = _mm_mul_ps(zmm3, temp0_38)
        zmm6 = _mm_mul_ps(temp0_49, temp0_40)
        zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_49, temp0_38)), temp0_53)
        zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(temp0_50, temp0_40)), temp0_54)
        zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_36)), zmm0)
        zmm3 = arg6[1][0]
        zmm4 = (*arg6)[5]
        zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm1)
        float temp0_72[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm2)
        zmm0 = (*arg6)[6]
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
        uint128_t var_1a8 = zmm3
        float var_198[0x4] = temp0_72
        uint128_t var_2d8_1 = zmm0
        uint128_t var_188_1 = zmm0
        int64_t rdi_1 = 0
        uint128_t var_1e8_1 = zmm3
        zmm0 = zmm3
        
        while (true)
            zmm2 = *(&var_2a8 + rdi_1)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
            char temp0_77 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
            
            if (temp0_77 != 0)
                if ((temp0_77 & 1) == 0)
                    if ((temp0_77 & 2) != 0)
                        goto label_1400e2c8f
                    
                    goto label_1400e2ba3
                
                *(&var_358 + (rdi_1 << 2)) = zmm2.d
                
                if ((temp0_77 & 2) != 0)
                label_1400e2c8f:
                    *(&var_358:4 + (rdi_1 << 2)) = zmm2.d
                    
                    if ((temp0_77 & 4) == 0)
                        goto label_1400e2bad
                    
                    goto label_1400e2c9f
                
            label_1400e2ba3:
                
                if ((temp0_77 & 4) != 0)
                label_1400e2c9f:
                    *(&var_358:8 + (rdi_1 << 2)) = zmm2.d
                    
                    if ((temp0_77 & 8) != 0)
                        *(&var_358:0xc + (rdi_1 << 2)) = zmm2.d
                else
                label_1400e2bad:
                    
                    if ((temp0_77 & 8) != 0)
                        *(&var_358:0xc + (rdi_1 << 2)) = zmm2.d
            
            zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
            
            if (_mm_movemask_ps(zmm1) != 0)
                zmm3 = *(&var_2b8 + rdi_1)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                char temp0_83 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                
                if (temp0_83 != 0)
                    if ((temp0_83 & 1) == 0)
                        if ((temp0_83 & 2) != 0)
                            goto label_1400e2cc3
                        
                        goto label_1400e2c03
                    
                    *(&var_358 + (rdi_1 << 2)) = zmm3.d
                    
                    if ((temp0_83 & 2) != 0)
                    label_1400e2cc3:
                        *(&var_358:4 + (rdi_1 << 2)) = zmm3.d
                        
                        if ((temp0_83 & 4) == 0)
                            goto label_1400e2c0d
                        
                        goto label_1400e2cd3
                    
                label_1400e2c03:
                    
                    if ((temp0_83 & 4) != 0)
                    label_1400e2cd3:
                        *(&var_358:8 + (rdi_1 << 2)) = zmm3.d
                        
                        if ((temp0_83 & 8) != 0)
                            *(&var_358:0xc + (rdi_1 << 2)) = zmm3.d
                    else
                    label_1400e2c0d:
                        
                        if ((temp0_83 & 8) != 0)
                            *(&var_358:0xc + (rdi_1 << 2)) = zmm3.d
                
                char temp0_86 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                
                if (temp0_86 != 0)
                    zmm0 = *(&var_1a8 + (rdi_1 << 2))
                    
                    if ((temp0_86 & 1) == 0)
                        if ((temp0_86 & 2) != 0)
                            goto label_1400e2cfc
                        
                        goto label_1400e2c49
                    
                    *(&var_358 + (rdi_1 << 2)) = zmm0.d
                    
                    if ((temp0_86 & 2) != 0)
                    label_1400e2cfc:
                        *(&var_358:4 + (rdi_1 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_86 & 4) == 0)
                            goto label_1400e2c53
                        
                        goto label_1400e2d11
                    
                label_1400e2c49:
                    
                    if ((temp0_86 & 4) != 0)
                    label_1400e2d11:
                        *(&var_358:8 + (rdi_1 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                        
                        if ((temp0_86 & 8) != 0)
                            *(&var_358:0xc + (rdi_1 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_1400e2c53:
                        
                        if ((temp0_86 & 8) != 0)
                            *(&var_358:0xc + (rdi_1 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
            
            if (rdi_1 == 8)
                break
            
            zmm0 = *(&var_198 + (rdi_1 << 2))
            rdi_1 += 4
        
        zmm11 = var_358
        zmm9 = var_348
        zmm4 = *arg1
        zmm14 = *(arg1 + 4)
        float temp0_90[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm0 = _mm_sub_ps(zmm11, temp0_90)
        zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0)
        zmm6 = _mm_sub_ps(zmm9, zmm14)
        zmm5 = arg1[1].d
        float temp0_94[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm1 = _mm_sub_ps(var_338_1, temp0_94)
        zmm2 = *arg3
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_div_ps(zmm0, zmm2)
        zmm8 = _mm_cmpeq_epi32(temp0_36, temp0_36)
        zmm15 = arg3[1].d
        zmm7 = _mm_cvttps_epi32(zmm0)
        uint128_t var_218_1 = zmm2
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), zmm2), temp0_90)
        zmm4 = zmm9
        zmm12 = __divps_xmmps_memps(*arg3 | zmm15[0].q << 0x40, data_142fc9600)
        float temp0_104[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
        zmm3 = _mm_cmpeq_ps(_mm_add_ps(zmm3, temp0_104), zmm11, 1)
        zmm13 = _mm_add_epi32(zmm7, zmm8)
        zmm0 = _mm_and_ps(zmm7, zmm3)
        zmm3 = _mm_or_ps(_mm_andnot_ps(zmm3, zmm13), zmm0)
        zmm9 = *(arg3 + 4)
        float temp0_111[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        zmm6 = _mm_div_ps(zmm6, temp0_111)
        float temp0_113[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_113)
        zmm0 = _mm_cvttps_epi32(zmm6)
        zmm1 = _mm_cvttps_epi32(zmm1)
        zmm2 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_111)
        uint128_t var_298_1 = zmm1
        zmm6 = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_113)
        uint128_t var_228_1 = zmm14
        zmm2 = _mm_add_ps(zmm2, zmm14)
        zmm6 = _mm_add_ps(zmm6, temp0_94)
        zmm14 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        zmm2 = _mm_add_ps(zmm2, zmm14)
        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        var_358 = zmm3
        float temp0_126[0x4] = _mm_cmpeq_ps(zmm2, zmm4, 1)
        
        if (_mm_movemask_ps(temp0_126) != 0)
            zmm7 = zmm0
        
        zmm6 = _mm_add_ps(zmm6, zmm12)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2, zmm4, 5)) != 0)
            zmm13 = __paddd_xmmdq_memdq(zmm0, data_142d3f800)
        
        float var_1f8_1[0x4] = zmm11
        zmm1 = __subps_xmmps_memps(zmm11, var_1e8_1)
        zmm0 = __subps_xmmps_memps(zmm4, temp0_72)
        zmm2 = _mm_and_ps(zmm7, temp0_126)
        zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_126, zmm13), zmm2)
        var_348 = zmm8
        float temp0_137[0x4] = _mm_cmpeq_ps(zmm6, var_338_1, 1)
        
        if (_mm_movemask_ps(temp0_137) != 0)
            zmm7 = var_298_1
        
        float temp0_139[0x4] = __subps_xmmps_memps(var_338_1, var_2d8_1)
        zmm1 = _mm_mul_ps(zmm1, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm0)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm6, var_338_1, 5)) != 0)
            zmm13 = __paddd_xmmdq_memdq(var_298_1, data_142d3f800)
        
        zmm7 = _mm_and_ps(zmm7, temp0_137)
        zmm11 = _mm_or_ps(_mm_andnot_ps(temp0_137, zmm13), zmm7)
        zmm13 = _mm_add_ps(_mm_add_ps(zmm1, zx.o(0)), zmm0)
        zmm7 = var_218_1
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm7), temp0_90)
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_111), var_228_1)
        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), temp0_113), temp0_94)
        float temp0_159[0x4] = _mm_add_ps(temp0_104, zmm0)
        zmm14 = _mm_add_ps(zmm14, zmm1)
        zmm12 = _mm_add_ps(zmm12, zmm2)
        zmm0 = _mm_sub_ps(var_1f8_1, temp0_159)
        float temp0_163[0x4] = _mm_sub_ps(zmm4, zmm14)
        zmm6 = _mm_sub_ps(var_338_1, zmm12)
        zmm0 = _mm_div_ps(zmm0, zmm7)
        float temp0_166[0x4] = _mm_div_ps(temp0_163, temp0_111)
        zmm6 = _mm_div_ps(zmm6, temp0_113)
        var_318 = zmm0
        uint32_t var_2f8_2[0x4] = zmm6
        float temp0_168[0x4] = _mm_mul_ps(temp0_139, temp0_139)
        int64_t rdi_2 = 0
        zmm15 = _mm_cmpeq_epi32(temp0_113, temp0_113)
        char j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm15))
        
        if (j == 0)
            goto label_1400e301f
        
        do
            if ((j & 1) == 0)
                if ((j & 2) != 0)
                    goto label_1400e30c1
                
                goto label_1400e2fdf
            
            *(&var_358 + (rdi_2 << 2)) = 0
            
            if ((j & 2) != 0)
            label_1400e30c1:
                *(&var_358:4 + (rdi_2 << 2)) = 0
                
                if ((j & 4) == 0)
                    goto label_1400e2fe9
                
                goto label_1400e30d3
            
        label_1400e2fdf:
            
            if ((j & 4) == 0)
            label_1400e2fe9:
                
                if ((j & 8) != 0)
                    goto label_1400e30e5
                
                goto label_1400e2ff3
            
        label_1400e30d3:
            *(&var_358:8 + (rdi_2 << 2)) = 0
            
            if ((j & 8) != 0)
            label_1400e30e5:
                *(&var_358:0xc + (rdi_2 << 2)) = 0
                
                if ((j & 1) == 0)
                    goto label_1400e2ffd
                
                goto label_1400e30f7
            
        label_1400e2ff3:
            
            if ((j & 1) == 0)
            label_1400e2ffd:
                
                if ((j & 2) != 0)
                    goto label_1400e3109
                
                goto label_1400e3007
            
        label_1400e30f7:
            *(&var_318 + (rdi_2 << 2)) = 0
            
            if ((j & 2) != 0)
            label_1400e3109:
                *(&var_318:4 + (rdi_2 << 2)) = 0
                
                if ((j & 4) == 0)
                    goto label_1400e3011
                
                goto label_1400e311b
            
        label_1400e3007:
            
            if ((j & 4) != 0)
            label_1400e311b:
                *(&var_318:8 + (rdi_2 << 2)) = 0
                
                if ((j & 8) != 0)
                    *(&var_318:0xc + (rdi_2 << 2)) = 0
            else
            label_1400e3011:
                
                if ((j & 8) != 0)
                    *(&var_318:0xc + (rdi_2 << 2)) = 0
            
        label_1400e301f:
            int32_t rsi_1 = *(arg4 + rdi_2)
            char temp0_176 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                _mm_shuffle_epi32(zx.o(rsi_1 - 1), 0), *(&var_358 + (rdi_2 << 2))))
            
            if (temp0_176 != 0)
                if ((temp0_176 & 1) == 0)
                    if ((temp0_176 & 2) != 0)
                        goto label_1400e314d
                    
                    goto label_1400e3057
                
                *(&var_358 + (rdi_2 << 2)) = rsi_1 - 2
                
                if ((temp0_176 & 2) != 0)
                label_1400e314d:
                    *(&var_358:4 + (rdi_2 << 2)) = rsi_1 - 2
                    
                    if ((temp0_176 & 4) == 0)
                        goto label_1400e3061
                    
                    goto label_1400e315b
                
            label_1400e3057:
                
                if ((temp0_176 & 4) == 0)
                label_1400e3061:
                    
                    if ((temp0_176 & 8) != 0)
                        goto label_1400e3169
                    
                    goto label_1400e306b
                
            label_1400e315b:
                *(&var_358:8 + (rdi_2 << 2)) = rsi_1 - 2
                
                if ((temp0_176 & 8) != 0)
                label_1400e3169:
                    *(&var_358:0xc + (rdi_2 << 2)) = rsi_1 - 2
                    
                    if ((temp0_176 & 1) == 0)
                        goto label_1400e3075
                    
                    goto label_1400e3177
                
            label_1400e306b:
                
                if ((temp0_176 & 1) == 0)
                label_1400e3075:
                    
                    if ((temp0_176 & 2) != 0)
                        goto label_1400e3189
                    
                    goto label_1400e307f
                
            label_1400e3177:
                *(&var_318 + (rdi_2 << 2)) = 0x3f800000
                
                if ((temp0_176 & 2) != 0)
                label_1400e3189:
                    *(&var_318:4 + (rdi_2 << 2)) = 0x3f800000
                    
                    if ((temp0_176 & 4) == 0)
                        goto label_1400e3089
                    
                    goto label_1400e319b
                
            label_1400e307f:
                
                if ((temp0_176 & 4) != 0)
                label_1400e319b:
                    *(&var_318:8 + (rdi_2 << 2)) = 0x3f800000
                    
                    if ((temp0_176 & 8) != 0)
                        *(&var_318:0xc + (rdi_2 << 2)) = 0x3f800000
                else
                label_1400e3089:
                    
                    if ((temp0_176 & 8) != 0)
                        *(&var_318:0xc + (rdi_2 << 2)) = 0x3f800000
            
            if (rdi_2 == 8)
                break
            
            zmm3 = *(&var_348 + (rdi_2 << 2))
            rdi_2 += 4
            j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm15))
        while (j != 0)
        
        float temp0_177[0x4] = _mm_add_ps(zmm13, temp0_168)
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
        float (* rdi_3)[0x4] = *(arg5 + 0x10)
        zmm1 = _mm_slli_epi32(zmm1, 2)
        int64_t rbp_20 = sx.q(zmm1.d)
        int64_t rsi_4 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
        int64_t rdx_1 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
        int64_t rax_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
        zmm7 = *(rdi_3 + rax_2 + 4)
        float temp0_198[0x4] = _mm_unpacklo_ps(*(rdi_3 + rdx_1), (*(rdi_3 + rax_2)).q)
        zmm2 = _mm_unpacklo_ps(*(rdi_3 + rdx_1 + 4), zmm7[0].q)
        zmm11 = *(rdi_3 + rbp_20 + 4)
        zmm1 =
            _mm_unpacklo_ps(*(rdi_3 + rbp_20), (*(rdi_3 + rsi_4))[0].q).q | temp0_198[0].q << 0x40
        zmm11 = _mm_unpacklo_ps(zmm11, (*(rdi_3 + rsi_4 + 4))[0].q)[0].q | zmm2.q << 0x40
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
            _mm_unpacklo_ps(*(rdi_3 + sx.q(zmm7[0])), 
                (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rdi_3 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d)), 
                (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7)[0])))[0].q).q << 0x40, 
            zmm1)
        zmm13 = var_318
        zmm3 = temp0_166
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
        zmm1 = _mm_unpacklo_ps(*(rdi_3 + sx.q(zmm4[0])), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
            *(rdi_3 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)[0].q << 0x40
        zmm14 = _mm_add_epi32(zmm14, zmm6)
        zmm4 = _mm_shuffle_epi32(zmm14, 0xf5)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm14, zmm0), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm0), 0xe8)[0].q), 
                zmm10), 
            2)
        float temp0_258[0x4] = _mm_unpacklo_ps(*(rdi_3 + sx.q(zmm5[0])), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q)
        zmm6 = _mm_unpacklo_ps(*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
        float temp0_264[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(temp0_258[0].q | zmm6[0].q << 0x40, zmm1), zmm13), zmm1)
        zmm0 = _mm_add_epi32(zmm0, zmm10)
        zmm12 = _mm_add_epi32(zmm12, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm8)
        zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2)
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(rdi_3 + sx.q(zmm8[0]) + 4), 
                        (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5)[0]) + 4))[0].q).q |
                        _mm_unpacklo_ps(*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e)[0]) + 4), 
                        (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + 4))[0].q)[0].q << 0x40, 
                    zmm11), 
                zmm13), 
            zmm11)
        zmm12 = _mm_slli_epi32(zmm12, 2)
        zmm6 = _mm_unpacklo_ps(*(rdi_3 + sx.q(zmm12.d) + 4), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm12, 0xe5)[0]) + 4))[0].q)
        float temp0_283[0x4] = _mm_unpacklo_ps(
            *(rdi_3 + sx.q(_mm_shuffle_epi32(zmm12, 0x4e)[0]) + 4), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm12, 0xe7)[0]) + 4))[0].q)
        zmm6 = zmm6[0].q | temp0_283[0].q << 0x40
        zmm0 = _mm_slli_epi32(zmm0, 2)
        float temp0_286[0x4] = _mm_unpacklo_ps(*(rdi_3 + sx.q(zmm0.d) + 4), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + 4))[0].q)
        float temp0_289[0x4] = _mm_unpacklo_ps(
            *(rdi_3 + sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + 4), 
            (*(rdi_3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + 4)).q)
        float temp0_292[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(temp0_286[0].q | temp0_289[0].q << 0x40, zmm6), zmm13), zmm6)
        float temp0_295[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_264, zmm2), zmm3), zmm2)
        zmm5 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_292, zmm1), zmm3), zmm1), 
                    temp0_295), 
                var_2f8_2), 
            temp0_295)
        zmm11 = zx.o(0)
        zmm1 = _mm_cmpeq_ps(temp0_177, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_177, zx.o(0), 7), zmm1)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm1 = _mm_rsqrt_ps(temp0_177)
            float temp0_308[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_177, zmm1), zmm1)
            zmm2 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_308), zmm1), 
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
        float temp0_320[0x4] = __subps_xmmps_memps(zmm5, var_178_1)
        zmm0 = __cmpps_xmmps_memps_immb(temp0_320, data_142fc95d0, 1)
        char temp0_322 = _mm_movemask_ps(zmm0)
        
        if (temp0_322 != 0)
            float temp0_323[0x4] = _mm_mul_ps(var_1a8, temp0_320)
            zmm6 = _mm_mul_ps(var_198, temp0_320)
            float temp0_325[0x4] = _mm_mul_ps(var_188_1, temp0_320)
            zmm3 = zmm9
            char temp1_1 = temp0_322 & 1
            
            if (temp1_1 == 0)
                zmm2 = zmm8
                
                if (temp1_1 != 0)
                    goto label_1400e28d6
                
                goto label_1400e3696
            
            zmm3.d = zmm9.d f+ temp0_323[0]
            zmm2 = zmm8
            
            if (temp1_1 != 0)
            label_1400e28d6:
                zmm2.d = zmm8.d f+ zmm6[0]
                zmm1 = zmm10
                
                if (temp1_1 == 0)
                    goto label_1400e36a0
                
                goto label_1400e28e8
            
        label_1400e3696:
            zmm1 = zmm10
            bool cond:11_1
            bool cond:12_1
            bool cond:15_1
            bool cond:16_1
            
            if (temp1_1 == 0)
            label_1400e36a0:
                zmm9 = _mm_add_ps(zmm9, temp0_323)
                char temp5_1 = temp0_322 & 2
                cond:11_1 = temp5_1 != 0
                cond:12_1 = temp5_1 == 0
                cond:15_1 = temp5_1 == 0
                cond:16_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                    goto label_1400e2906
                
                goto label_1400e36ae
            
        label_1400e28e8:
            zmm1.d = zmm10.d f+ temp0_325[0]
            zmm9 = _mm_add_ps(zmm9, temp0_323)
            char temp4_1 = temp0_322 & 2
            cond:11_1 = temp4_1 != 0
            cond:12_1 = temp4_1 == 0
            cond:15_1 = temp4_1 == 0
            cond:16_1 = temp4_1 != 0
            
            if (temp4_1 != 0)
            label_1400e2906:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm3, 1), zmm3, 0xe2)
                zmm8 = _mm_add_ps(zmm8, zmm6)
                
                if (cond:12_1)
                    goto label_1400e36b8
                
                goto label_1400e291f
            
        label_1400e36ae:
            zmm8 = _mm_add_ps(zmm8, zmm6)
            
            if (not(cond:11_1))
            label_1400e36b8:
                zmm10 = _mm_add_ps(zmm10, temp0_325)
                
                if (cond:16_1)
                    goto label_1400e2938
                
                goto label_1400e36c2
            
        label_1400e291f:
            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
            zmm10 = _mm_add_ps(zmm10, temp0_325)
            bool cond:19_1
            bool cond:20_1
            bool cond:23_1
            bool cond:24_1
            
            if (not(cond:15_1))
            label_1400e2938:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 1), zmm1, 0xe2)
                char temp9_1 = temp0_322 & 4
                cond:19_1 = temp9_1 == 0
                cond:20_1 = temp9_1 != 0
                cond:23_1 = temp9_1 != 0
                cond:24_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                    goto label_1400e36cc
                
                goto label_1400e294d
            
        label_1400e36c2:
            char temp8_1 = temp0_322 & 4
            cond:19_1 = temp8_1 == 0
            cond:20_1 = temp8_1 != 0
            cond:23_1 = temp8_1 != 0
            cond:24_1 = temp8_1 == 0
            
            if (temp8_1 != 0)
            label_1400e294d:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
                
                if (not(cond:19_1))
                label_1400e295f:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                    
                    if (cond:24_1)
                        goto label_1400e36d8
                    
                    goto label_1400e2971
            else
            label_1400e36cc:
                
                if (cond:20_1)
                    goto label_1400e295f
            
            bool cond:29_1
            bool cond:30_1
            bool cond:33_1
            bool cond:34_1
            
            if (not(cond:23_1))
            label_1400e36d8:
                char temp13_1 = temp0_322 & 8
                cond:29_1 = temp13_1 != 0
                cond:30_1 = temp13_1 == 0
                cond:33_1 = temp13_1 != 0
                cond:34_1 = temp13_1 == 0
                
                if (temp13_1 != 0)
                    goto label_1400e2989
                
                goto label_1400e36e2
            
        label_1400e2971:
            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x32), 0x84)
            char temp12_1 = temp0_322 & 8
            cond:29_1 = temp12_1 != 0
            cond:30_1 = temp12_1 == 0
            cond:33_1 = temp12_1 != 0
            cond:34_1 = temp12_1 == 0
            
            if (temp12_1 != 0)
            label_1400e2989:
                zmm9 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
                
                if (cond:30_1)
                    goto label_1400e36ec
                
                goto label_1400e299d
            
        label_1400e36e2:
            zmm9 = zmm3
            
            if (cond:29_1)
            label_1400e299d:
                zmm8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                
                if (cond:33_1)
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
            else
            label_1400e36ec:
                zmm8 = zmm2
                
                if (not(cond:34_1))
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
            
            zmm5 = _mm_and_ps(_mm_add_ps(temp0_320, var_2c8), zmm0)
            zmm10 = zmm1
            var_2c8 = _mm_or_ps(_mm_andnot_ps(zmm0, var_2c8), zmm5)
        
        rbx = zx.q(rbx.d + 4)
    while (rbx.d s< i)
    
    rdx_2 = arg10
    result = arg9
    
    if (rbx.d s< arg11)
        goto label_1400e3774
zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm9, zmm9[0].q), zmm9)
zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm1 = _mm_unpacklo_ps(zmm1, zmm2.q)
zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm2 = _mm_add_ps(*rdx_2 | rdx_2[1].d.q << 0x40, zmm1.q | zmm2.q << 0x40)
*rdx_2 = zmm2.d
zmm0.q = zmm2 u>> 0x40
*(rdx_2 + 4) = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
rdx_2[1].d = zmm0.d
zmm0 = _mm_add_ps(_mm_shuffle_epi32(var_2c8, 0xee), var_2c8)
zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm1.d = zmm1.d f+ *result
*result = zmm1.d
return result
