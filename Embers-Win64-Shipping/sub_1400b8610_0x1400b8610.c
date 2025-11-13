// 函数: sub_1400b8610
// 地址: 0x1400b8610
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
uint128_t zmm1 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
int32_t var_2f8 = zmm1.d
int32_t var_2f4 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_2f0 = __extractps_memd_xmmps_immb(zmm1, 2)
zmm1 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20), zmm0)
int32_t var_308 = zmm1.d
int32_t var_304 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_300 = __extractps_memd_xmmps_immb(zmm1, 2)
int32_t r15_4 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
uint128_t var_388
uint128_t var_378
uint128_t var_348
int32_t result
uint64_t r10
uint128_t zmm2
float zmm3[0x4]
float zmm4[0x4]
uint128_t zmm5

if (r15_4 s<= 0)
    r10 = 0
    result = 0
else
    result = 0
    zmm15 = zx.o(0)
    r10 = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0 = *(arg8 + sx.q((r10 << 2).d))
            uint128_t var_2b8_1 = zmm0
            zmm0 = __pmulld_xmmdq_memdq(zmm0, data_142fc95c0)
            int64_t rax_4 = sx.q(zmm0.d)
            int64_t rdx_1 = sx.q(_mm_extract_epi32(zmm0, 1))
            int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm5 = *(arg7 + (rax_4 << 2) + 4)
            zmm1 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg7 + (rax_4 << 2)), *(arg7 + (rdx_1 << 2)), 
                        0x10), 
                    *(arg7 + (rsi_2 << 2)), 0x20), 
                *(arg7 + (rbx_2 << 2)), 0x30)
            zmm5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(arg7 + (rdx_1 << 2) + 4), 0x10), 
                    *(arg7 + (rsi_2 << 2) + 4), 0x20), 
                *(arg7 + (rbx_2 << 2) + 4), 0x30)
            float temp0_22[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg7 + (rax_4 << 2) + 8), 
                        *(arg7 + (rdx_1 << 2) + 8), 0x10), 
                    *(arg7 + (rsi_2 << 2) + 8), 0x20), 
                *(arg7 + (rbx_2 << 2) + 8), 0x30)
            var_348 = zmm1
            uint128_t var_338_1 = zmm5
            float var_318_1[0x4] = zmm15
            int128_t* rax_5 = arg6
            zmm0 = *(rax_5 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_388 = zmm0
            var_378 = zmm0
            uint128_t var_368_1 = zmm0
            uint128_t var_358_1 = zmm0
            zmm9 = *rax_5
            zmm8 = *(rax_5 + 4)
            zmm10 = *(rax_5 + 8)
            float temp0_24[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_25[0x4] = _mm_mul_ps(temp0_22, temp0_24)
            float temp0_26[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm2 = _mm_mul_ps(zmm1, temp0_26)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm7 = _mm_mul_ps(zmm5, temp0_28)
            float temp0_31[0x4] = _mm_sub_ps(temp0_25, _mm_mul_ps(zmm5, temp0_26))
            zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(temp0_22, temp0_28))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_24))
            float temp0_36[0x4] = _mm_add_ps(temp0_31, temp0_31)
            zmm2 = _mm_add_ps(zmm2, zmm2)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            float temp0_39[0x4] = _mm_mul_ps(zmm0, temp0_36)
            zmm5 = _mm_mul_ps(zmm0, zmm2)
            float temp0_41[0x4] = __addps_xmmps_memps(temp0_39, var_348)
            zmm5 = __addps_xmmps_memps(zmm5, var_338_1)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), temp0_22)
            zmm6 = _mm_mul_ps(zmm7, temp0_24)
            float temp0_46[0x4] = _mm_mul_ps(temp0_36, temp0_26)
            zmm1 = _mm_mul_ps(zmm2, temp0_28)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm2, temp0_26)), temp0_41)
            float temp0_53[0x4] = _mm_add_ps(_mm_sub_ps(temp0_46, _mm_mul_ps(zmm7, temp0_28)), zmm5)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_36, temp0_24)), zmm0)
            zmm2 = rax_5[1].d
            zmm3 = *(rax_5 + 0x14)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            float temp0_60[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_53)
            zmm0 = *(rax_5 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            uint128_t var_158 = zmm2
            float var_148[0x4] = temp0_60
            uint128_t var_248_1 = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rax_6 = 0
            uint128_t var_2d8_1 = zmm2
            zmm0 = zmm2
            
            while (true)
                zmm2 = *(&var_2f8 + rax_6)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_65 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_65 != 0)
                    if ((temp0_65 & 1) == 0)
                        if ((temp0_65 & 2) != 0)
                            goto label_1400b8a4e
                        
                        goto label_1400b897f
                    
                    *(&var_388 + (rax_6 << 2)) = zmm2.d
                    
                    if ((temp0_65 & 2) != 0)
                    label_1400b8a4e:
                        *(&var_388:4 + (rax_6 << 2)) = zmm2.d
                        
                        if ((temp0_65 & 4) == 0)
                            goto label_1400b8988
                        
                        goto label_1400b8a5d
                    
                label_1400b897f:
                    
                    if ((temp0_65 & 4) != 0)
                    label_1400b8a5d:
                        *(&var_388:8 + (rax_6 << 2)) = zmm2.d
                        
                        if ((temp0_65 & 8) != 0)
                            *(&var_388:0xc + (rax_6 << 2)) = zmm2.d
                    else
                    label_1400b8988:
                        
                        if ((temp0_65 & 8) != 0)
                            *(&var_388:0xc + (rax_6 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_308 + rax_6)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_71 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_71 != 0)
                        if ((temp0_71 & 1) == 0)
                            if ((temp0_71 & 2) != 0)
                                goto label_1400b8a7f
                            
                            goto label_1400b89d8
                        
                        *(&var_388 + (rax_6 << 2)) = zmm3[0]
                        
                        if ((temp0_71 & 2) != 0)
                        label_1400b8a7f:
                            *(&var_388:4 + (rax_6 << 2)) = zmm3[0]
                            
                            if ((temp0_71 & 4) == 0)
                                goto label_1400b89e1
                            
                            goto label_1400b8a8e
                        
                    label_1400b89d8:
                        
                        if ((temp0_71 & 4) != 0)
                        label_1400b8a8e:
                            *(&var_388:8 + (rax_6 << 2)) = zmm3[0]
                            
                            if ((temp0_71 & 8) != 0)
                                *(&var_388:0xc + (rax_6 << 2)) = zmm3[0]
                        else
                        label_1400b89e1:
                            
                            if ((temp0_71 & 8) != 0)
                                *(&var_388:0xc + (rax_6 << 2)) = zmm3[0]
                    
                    char temp0_74 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_74 != 0)
                        zmm0 = *(&var_158 + (rax_6 << 2))
                        
                        if ((temp0_74 & 1) == 0)
                            if ((temp0_74 & 2) != 0)
                                goto label_1400b8ab0
                            
                            goto label_1400b8a17
                        
                        *(&var_388 + (rax_6 << 2)) = zmm0.d
                        
                        if ((temp0_74 & 2) != 0)
                        label_1400b8ab0:
                            *(&var_388:4 + (rax_6 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_74 & 4) == 0)
                                goto label_1400b8a20
                            
                            goto label_1400b8ac1
                        
                    label_1400b8a17:
                        
                        if ((temp0_74 & 4) != 0)
                        label_1400b8ac1:
                            *(&var_388:8 + (rax_6 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_74 & 8) != 0)
                                *(&var_388:0xc + (rax_6 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1400b8a20:
                            
                            if ((temp0_74 & 8) != 0)
                                *(&var_388:0xc + (rax_6 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                
                if (rax_6 == 8)
                    break
                
                zmm0 = *(&var_148 + (rax_6 << 2))
                rax_6 += 4
            
            zmm5 = var_388
            zmm14 = var_378
            zmm4 = *arg1
            zmm10 = *(arg1 + 4)
            float temp0_78[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_sub_ps(zmm5, temp0_78)
            float temp0_80[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_81[0x4] = _mm_sub_ps(zmm14, temp0_80)
            zmm9 = arg1[1].d
            float temp0_82[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm1 = _mm_sub_ps(var_368_1, temp0_82)
            zmm2 = *arg3
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_div_ps(zmm0, zmm2)
            zmm7 = arg3[1].d
            zmm15 = _mm_cvttps_epi32(zmm0)
            uint128_t var_268_1 = zmm2
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm2), temp0_78)
            float temp0_91[0x4] =
                __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm7, 0x20), data_142fc9600)
            zmm4 = _mm_cmpeq_epi32(temp0_78, temp0_78)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0)
            int64_t var_2c8
            var_2c8.o = zmm5
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_93), zmm5, 1)
            zmm2 = _mm_add_epi32(zmm15, zmm4)
            zmm12 = _mm_blendv_ps(zmm2, zmm15, zmm0)
            zmm4 = *(arg3 + 4)
            float temp0_98[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_99[0x4] = _mm_div_ps(temp0_81, temp0_98)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm1 = _mm_div_ps(zmm1, zmm7)
            zmm6 = _mm_cvttps_epi32(temp0_99)
            zmm1 = _mm_cvttps_epi32(zmm1)
            zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_98)
            float temp0_107[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm7)
            zmm5 = _mm_add_ps(zmm5, temp0_80)
            float temp0_109[0x4] = _mm_add_ps(temp0_107, temp0_82)
            float temp0_110[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0x55)
            zmm5 = _mm_add_ps(zmm5, temp0_110)
            float temp0_112[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xaa)
            var_388 = zmm12
            zmm0 = _mm_cmpeq_ps(zmm5, zmm14, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm15 = zmm6
            
            float temp0_115[0x4] = _mm_add_ps(temp0_109, temp0_112)
            bool cond:2_1 = _mm_movemask_ps(_mm_cmpeq_ps(zmm5, zmm14, 5)) == 0
            zmm5 = zmm14
            
            if (not(cond:2_1))
                zmm2 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
            
            float temp0_119[0x4] = __subps_xmmps_memps(var_2c8.o, var_2d8_1)
            uint128_t var_2d8_2 = zmm5
            zmm6 = __subps_xmmps_memps(zmm5, temp0_60)
            float temp0_121[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
            var_378 = temp0_121
            zmm9 = var_368_1
            zmm0 = _mm_cmpeq_ps(temp0_115, zmm9, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm15 = zmm1
            
            zmm5 = __subps_xmmps_memps(zmm9, var_248_1)
            float temp0_125[0x4] = _mm_mul_ps(temp0_119, temp0_119)
            zmm6 = _mm_mul_ps(zmm6, zmm6)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_115, zmm9, 5)) != 0)
                zmm2 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            zmm2 = _mm_blendv_ps(zmm2, zmm15, zmm0)
            zmm15 = zx.o(0)
            float temp0_132[0x4] = _mm_add_ps(_mm_add_ps(temp0_125, zmm15), zmm6)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), var_268_1), temp0_78)
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_121), temp0_98), temp0_80)
            uint128_t var_368_2 = zmm2
            zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), zmm7), temp0_82)
            float temp0_142[0x4] = _mm_add_ps(temp0_93, zmm0)
            float temp0_143[0x4] = _mm_add_ps(temp0_110, zmm1)
            float temp0_144[0x4] = _mm_add_ps(temp0_112, zmm2)
            zmm0 = _mm_sub_ps(var_2c8.o, temp0_142)
            zmm1 = _mm_sub_ps(var_2d8_2, temp0_143)
            float temp0_147[0x4] = _mm_sub_ps(zmm9, temp0_144)
            zmm0 = _mm_div_ps(zmm0, var_268_1)
            zmm1 = _mm_div_ps(zmm1, temp0_98)
            float temp0_150[0x4] = _mm_div_ps(temp0_147, zmm7)
            var_348 = zmm0
            uint128_t var_338_2 = zmm1
            zmm5 = _mm_mul_ps(zmm5, zmm5)
            int64_t rax_12 = 0
            zmm3 = _mm_cmpeq_epi32(temp0_143, temp0_143)
            char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
            
            if (i == 0)
                goto label_1400b8dc7
            
            do
                if ((i & 1) == 0)
                    if ((i & 2) != 0)
                        goto label_1400b8e60
                    
                    goto label_1400b8d8d
                
                *(&var_388 + (rax_12 << 2)) = 0
                
                if ((i & 2) != 0)
                label_1400b8e60:
                    *(&var_388:4 + (rax_12 << 2)) = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400b8d96
                    
                    goto label_1400b8e71
                
            label_1400b8d8d:
                
                if ((i & 4) == 0)
                label_1400b8d96:
                    
                    if ((i & 8) != 0)
                        goto label_1400b8e82
                    
                    goto label_1400b8d9f
                
            label_1400b8e71:
                *(&var_388:8 + (rax_12 << 2)) = 0
                
                if ((i & 8) != 0)
                label_1400b8e82:
                    *(&var_388:0xc + (rax_12 << 2)) = 0
                    
                    if ((i & 1) == 0)
                        goto label_1400b8da8
                    
                    goto label_1400b8e93
                
            label_1400b8d9f:
                
                if ((i & 1) == 0)
                label_1400b8da8:
                    
                    if ((i & 2) != 0)
                        goto label_1400b8ea4
                    
                    goto label_1400b8db1
                
            label_1400b8e93:
                *(&var_348 + (rax_12 << 2)) = 0
                
                if ((i & 2) != 0)
                label_1400b8ea4:
                    *(&var_348:4 + (rax_12 << 2)) = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400b8dba
                    
                    goto label_1400b8eb5
                
            label_1400b8db1:
                
                if ((i & 4) != 0)
                label_1400b8eb5:
                    *(&var_348:8 + (rax_12 << 2)) = 0
                    
                    if ((i & 8) != 0)
                        *(&var_348:0xc + (rax_12 << 2)) = 0
                else
                label_1400b8dba:
                    
                    if ((i & 8) != 0)
                        *(&var_348:0xc + (rax_12 << 2)) = 0
                
            label_1400b8dc7:
                int32_t rsi_3 = *(arg4 + rax_12)
                char temp0_159 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rsi_3 - 1), 0), *(&var_388 + (rax_12 << 2))))
                
                if (temp0_159 != 0)
                    if ((temp0_159 & 1) == 0)
                        if ((temp0_159 & 2) != 0)
                            goto label_1400b8edc
                        
                        goto label_1400b8dfb
                    
                    *(&var_388 + (rax_12 << 2)) = rsi_3 - 2
                    
                    if ((temp0_159 & 2) != 0)
                    label_1400b8edc:
                        *(&var_388:4 + (rax_12 << 2)) = rsi_3 - 2
                        
                        if ((temp0_159 & 4) == 0)
                            goto label_1400b8e04
                        
                        goto label_1400b8ee9
                    
                label_1400b8dfb:
                    
                    if ((temp0_159 & 4) == 0)
                    label_1400b8e04:
                        
                        if ((temp0_159 & 8) != 0)
                            goto label_1400b8ef6
                        
                        goto label_1400b8e0d
                    
                label_1400b8ee9:
                    *(&var_388:8 + (rax_12 << 2)) = rsi_3 - 2
                    
                    if ((temp0_159 & 8) != 0)
                    label_1400b8ef6:
                        *(&var_388:0xc + (rax_12 << 2)) = rsi_3 - 2
                        
                        if ((temp0_159 & 1) == 0)
                            goto label_1400b8e16
                        
                        goto label_1400b8f03
                    
                label_1400b8e0d:
                    
                    if ((temp0_159 & 1) == 0)
                    label_1400b8e16:
                        
                        if ((temp0_159 & 2) != 0)
                            goto label_1400b8f14
                        
                        goto label_1400b8e1f
                    
                label_1400b8f03:
                    *(&var_348 + (rax_12 << 2)) = 0x3f800000
                    
                    if ((temp0_159 & 2) != 0)
                    label_1400b8f14:
                        *(&var_348:4 + (rax_12 << 2)) = 0x3f800000
                        
                        if ((temp0_159 & 4) == 0)
                            goto label_1400b8e28
                        
                        goto label_1400b8f25
                    
                label_1400b8e1f:
                    
                    if ((temp0_159 & 4) != 0)
                    label_1400b8f25:
                        *(&var_348:8 + (rax_12 << 2)) = 0x3f800000
                        
                        if ((temp0_159 & 8) != 0)
                            *(&var_348:0xc + (rax_12 << 2)) = 0x3f800000
                    else
                    label_1400b8e28:
                        
                        if ((temp0_159 & 8) != 0)
                            *(&var_348:0xc + (rax_12 << 2)) = 0x3f800000
                
                if (rax_12 == 8)
                    break
                
                zmm12 = *(&var_378 + (rax_12 << 2))
                rax_12 += 4
                i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
            while (i != 0)
            
            float temp0_160[0x4] = _mm_add_ps(temp0_132, zmm5)
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm1 = var_388
            zmm2 = var_378
            zmm10 = var_368_2
            zmm4 = _mm_mullo_epi32(zmm8, zmm1)
            zmm12 = _mm_add_epi32(zmm4, zmm2)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm12, zmm0)
            zmm5 = _mm_add_epi32(zmm13, zmm10)
            uint128_t* rax_14 = *(arg5 + 0x10)
            zmm5 = _mm_slli_epi32(zmm5, 2)
            int64_t rbx_3 = sx.q(zmm5.d)
            int64_t r14_1 = sx.q(_mm_extract_epi32(zmm5, 1))
            int64_t rdx_15 = sx.q(_mm_extract_epi32(zmm5, 2))
            int64_t rsi_7 = sx.q(_mm_extract_epi32(zmm5, 3))
            zmm6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rax_14 + rbx_3), *(rax_14 + r14_1), 0x10), 
                    *(rax_14 + rdx_15), 0x20), 
                *(rax_14 + rsi_7), 0x30)
            zmm11 = *(rax_14 + rbx_3 + 4)
            zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm3), zmm8)
            zmm7 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm2), zmm0), zmm10), 2)
            zmm12 = _mm_mullo_epi32(_mm_add_epi32(zmm12, zmm8), zmm0)
            zmm5 = *(rax_14 + sx.q(zmm7.d))
            int32_t temp0_182 = _mm_extract_epi32(zmm7, 1)
            int64_t rdi_1 = sx.q(_mm_extract_epi32(zmm7, 2))
            int32_t temp0_184 = _mm_extract_epi32(zmm7, 3)
            zmm5 = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm5, *(rax_14 + sx.q(temp0_182)), 0x10), 
                        *(rax_14 + rdi_1), 0x20), 
                    *(rax_14 + sx.q(temp0_184)), 0x30), 
                zmm6)
            zmm9 = var_348
            zmm2 = _mm_sub_epi32(zmm2, zmm3)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), zmm10), 2)
            int64_t rdi_4 = sx.q(zmm4[0])
            int32_t temp0_194 = _mm_extract_epi32(zmm4, 1)
            int32_t temp0_195 = _mm_extract_epi32(zmm4, 2)
            zmm3 = *(rax_14 + rdi_4)
            int32_t temp0_196 = _mm_extract_epi32(zmm4, 3)
            zmm8 = var_338_2
            zmm5 = _mm_mul_ps(zmm5, zmm9)
            float temp0_200[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rax_14 + sx.q(temp0_194)), 0x10), 
                    *(rax_14 + sx.q(temp0_195)), 0x20), 
                *(rax_14 + sx.q(temp0_196)), 0x30)
            zmm2 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm1), zmm0), zmm10), 2)
            zmm7 = *(rax_14 + sx.q(zmm2.d))
            int64_t rdi_10 = sx.q(_mm_extract_epi32(zmm2, 1))
            int32_t temp0_206 = _mm_extract_epi32(zmm2, 2)
            int64_t rbp_5 = sx.q(_mm_extract_epi32(zmm2, 3))
            zmm7 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rax_14 + rdi_10), 0x10), 
                    *(rax_14 + sx.q(temp0_206)), 0x20), 
                *(rax_14 + rbp_5), 0x30)
            zmm5 = _mm_add_ps(zmm5, zmm6)
            zmm7 = _mm_sub_ps(zmm7, temp0_200)
            float temp0_215[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm11, *(rax_14 + r14_1 + 4), 0x10), 
                    *(rax_14 + rdx_15 + 4), 0x20), 
                *(rax_14 + rsi_7 + 4), 0x30)
            zmm7 = _mm_mul_ps(zmm7, zmm9)
            zmm0 = _mm_add_epi32(zmm0, zmm10)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm12)
            zmm12 = _mm_slli_epi32(_mm_add_epi32(zmm12, zmm10), 2)
            zmm2 = *(rax_14 + sx.q(zmm12.d) + 4)
            int64_t rdx_19 = sx.q(_mm_extract_epi32(zmm12, 1))
            int32_t temp0_223 = _mm_extract_epi32(zmm12, 2)
            int64_t rdi_12 = sx.q(_mm_extract_epi32(zmm12, 3))
            zmm2 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_14 + rdx_19 + 4), 0x10), 
                    *(rax_14 + sx.q(temp0_223) + 4), 0x20), 
                *(rax_14 + rdi_12 + 4), 0x30)
            zmm7 = _mm_add_ps(zmm7, temp0_200)
            zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm2, temp0_215), zmm9), temp0_215)
            zmm13 = _mm_slli_epi32(zmm13, 2)
            zmm3 = *(rax_14 + sx.q(zmm13[0]) + 4)
            int32_t temp0_233 = _mm_extract_epi32(zmm13, 1)
            int64_t rsi_11 = sx.q(_mm_extract_epi32(zmm13, 2))
            int32_t temp0_235 = _mm_extract_epi32(zmm13, 3)
            float temp0_238[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rax_14 + sx.q(temp0_233) + 4), 0x10), 
                    *(rax_14 + rsi_11 + 4), 0x20), 
                *(rax_14 + sx.q(temp0_235) + 4), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int32_t temp0_240 = _mm_extract_epi32(zmm0, 1)
            zmm1 = *(rax_14 + sx.q(zmm0.d) + 4)
            int64_t rsi_14 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rdi_15 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_14 + sx.q(temp0_240) + 4), 
                                    0x10), 
                                *(rax_14 + rsi_14 + 4), 0x20), 
                            *(rax_14 + rdi_15 + 4), 0x30), 
                        temp0_238), 
                    zmm9), 
                temp0_238)
            zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, zmm5), zmm8), zmm5)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm2), zmm8), zmm2), zmm7), 
                    temp0_150), 
                zmm7)
            zmm2 = _mm_cmpeq_ps(temp0_160, zmm15, 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_160, zmm15, 7), zmm2)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm2 = _mm_rsqrt_ps(temp0_160)
                float temp0_264[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_160, zmm2), zmm2)
                float temp0_267[0x4] = __mulps_xmmps_memps(
                    _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_264), zmm2), data_142d3f640)
                zmm2 = _mm_rcp_ps(temp0_267)
                float temp0_269[0x4] = _mm_mul_ps(temp0_267, zmm2)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_269), zmm2), zmm1), zmm0)
            
            zmm0 = *arg10
            char i_3 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
            if (i_3 == 0)
                result = 0
                r10 = zx.q(r10.d + 4)
                
                if (r10.d s>= r15_4)
                    break
                
                continue
            else
                uint64_t i_1 = zx.q(i_3)
                result = 0
                
                do
                    uint64_t rsi_15
                    
                    if (i_1 == 0)
                        rsi_15 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400b9301:
                            uint128_t var_1e8 = zmm1
                            uint64_t rsi_16 = zx.q(rsi_15.d) & 3
                            *arg10 = (*(&var_1e8 + (rsi_16 << 2))).d
                            uint128_t var_1d8 = var_2b8_1
                            *arg9 = *(&var_1d8 + (rsi_16 << 2))
                    else
                        uint64_t rflags_1
                        rsi_15, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rsi_15 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400b9301
                    result.b = 1
                while (i_1 != 0)
        
        r10 = zx.q(r10.d + 4)
        
        if (r10.d s>= r15_4)
            break

if (r10.d s< arg11)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r10.d), 0), data_142e11d00)
        zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm0)
        int64_t rax_17 = sx.q(r10.d << 2)
        uint32_t temp0_280 = _mm_movemask_ps(zmm3)
        
        if ((zx.q(temp0_280) & 0xfffffff9) != 9)
            if ((temp0_280.b & 1) == 0)
                if ((temp0_280.b & 2) != 0)
                    goto label_1400ba179
                
                goto label_1400b93cb
            
            var_388.d = *(arg8 + rax_17)
            
            if ((temp0_280.b & 2) != 0)
            label_1400ba179:
                var_388:4.d = *(arg8 + rax_17 + 4)
                
                if ((temp0_280.b & 4) == 0)
                    goto label_1400b93d5
                
                goto label_1400ba193
            
        label_1400b93cb:
            
            if ((temp0_280.b & 4) != 0)
            label_1400ba193:
                var_388:8.d = *(arg8 + rax_17 + 8)
                
                if ((temp0_280.b & 8) != 0)
                    var_388:0xc.d = *(arg8 + rax_17 + 0xc)
            else
            label_1400b93d5:
                
                if ((temp0_280.b & 8) != 0)
                    var_388:0xc.d = *(arg8 + rax_17 + 0xc)
            
            zmm0 = var_388
        else
            zmm0 = *(arg8 + rax_17)
        
        uint128_t var_228_1 = zmm0
        zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm0) & zmm3
        int64_t rax_20 = sx.q(zmm1.d)
        int64_t r14_2 = arg7 + (rax_20 << 2)
        zmm0 = *(arg7 + (rax_20 << 2))
        int64_t rbp_7 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rax_22 = arg7 + (rbp_7 << 2)
        int64_t rbx_12 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rdx_31 = arg7 + (rbx_12 << 2)
        int64_t rdi_17 = sx.q(_mm_extract_epi32(zmm1, 3))
        int64_t rsi_17 = arg7 + (rdi_17 << 2)
        zmm0 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbp_7 << 2)), 0x10), 
                *(arg7 + (rbx_12 << 2)), 0x20), 
            *(arg7 + (rdi_17 << 2)), 0x30)
        zmm2 = data_142fc95e0 & zmm3
        uint64_t r11_1 = zx.q(zmm2.d)
        zmm8 = *(r11_1 + r14_2)
        uint64_t rcx_5 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t r15_5 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t r10_2 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_293[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rcx_5 + rax_22), 0x10), 
                *(r15_5 + rdx_31), 0x20), 
            *(r10_2 + rsi_17), 0x30)
        zmm2 = data_142fc95f0 & zmm3
        zmm6 = *(zx.q(zmm2.d) + r14_2)
        uint64_t rdi_19 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rbx_13 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rbp_8 = zx.q(_mm_extract_epi32(zmm2, 3))
        zmm6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rdi_19 + rax_22), 0x10), 
                *(rbx_13 + rdx_31), 0x20), 
            *(rbp_8 + rsi_17), 0x30)
        uint128_t var_1c8_1 = zmm0
        uint128_t var_1a8_1 = zmm6
        float var_198_1[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_388 = zmm5
        var_378 = zmm5
        uint128_t var_368_3 = zmm5
        zmm7 = *arg6
        zmm1 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_303[0x4] = _mm_mul_ps(temp0_293, zmm7)
        zmm7 = _mm_mul_ps(zmm7, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm1)
        float temp0_306[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        zmm0 = _mm_mul_ps(zmm0, temp0_306)
        zmm2 = _mm_mul_ps(zx.o(0), zmm5)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_306, temp0_293))
        zmm0 = _mm_sub_ps(zmm0, zmm7)
        float temp0_313[0x4] = _mm_sub_ps(temp0_303, zmm1)
        zmm2 = _mm_sub_ps(zmm2, zmm2)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        float temp0_317[0x4] = _mm_add_ps(temp0_313, temp0_313)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        var_348 = zmm6
        uint128_t var_338_3 = zmm0
        float var_328_3[0x4] = temp0_317
        uint128_t var_318_2 = zmm2
        zmm2 = _mm_mul_ps(zmm2, zmm5)
        zmm1 = _mm_mul_ps(zmm5, zmm6)
        float temp0_321[0x4] = _mm_mul_ps(zmm5, zmm0)
        float temp0_322[0x4] = _mm_mul_ps(zmm5, temp0_317)
        zmm1 = __addps_xmmps_memps(zmm1, var_1c8_1)
        float temp0_324[0x4] = __addps_xmmps_memps(temp0_321, temp0_293)
        float temp0_325[0x4] = __addps_xmmps_memps(temp0_322, var_1a8_1)
        uint128_t var_358_2 = zmm5
        uint128_t var_128_1 = zmm1
        float var_118_1[0x4] = temp0_324
        float var_108_1[0x4] = temp0_325
        uint128_t var_f8_1 = __addps_xmmps_memps(zmm2, var_198_1)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_328[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm0, temp0_328)
        float temp0_330[0x4] = _mm_mul_ps(temp0_328, temp0_317)
        float temp0_331[0x4] = _mm_mul_ps(temp0_317, zmm5)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm5 = _mm_mul_ps(zmm5, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm7)
        float temp0_336[0x4] = _mm_sub_ps(temp0_331, _mm_mul_ps(zmm7, zmm0))
        zmm6 = _mm_sub_ps(zmm6, temp0_330)
        zmm2 = _mm_sub_ps(zmm2, zmm5)
        float temp0_339[0x4] = _mm_add_ps(temp0_336, zmm1)
        zmm6 = _mm_add_ps(zmm6, temp0_324)
        zmm2 = _mm_add_ps(zmm2, temp0_325)
        zmm0 = arg6[1].d
        zmm4 = *(arg6 + 0x14)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_339)
        float temp0_345[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
        zmm1 = *(arg6 + 0x18)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm2)
        uint128_t var_188 = zmm0
        float var_178[0x4] = temp0_345
        uint128_t var_248_2 = zmm1
        uint128_t var_168_1 = zmm1
        int64_t rsi_18 = 0
        zmm1 = zmm0
        
        while (true)
            zmm4 = *(&var_2f8 + rsi_18)
            zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm5 = _mm_cmpeq_ps(zmm2, zmm1, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                char temp0_352 = _mm_movemask_ps(zmm5)
                
                if ((temp0_352 & 1) == 0)
                    if ((temp0_352 & 2) != 0)
                        goto label_1400b97ad
                    
                    goto label_1400b96d3
                
                *(&var_388 + (rsi_18 << 2)) = zmm4[0]
                
                if ((temp0_352 & 2) != 0)
                label_1400b97ad:
                    *(&var_388:4 + (rsi_18 << 2)) = zmm4[0]
                    
                    if ((temp0_352 & 4) == 0)
                        goto label_1400b96db
                    
                    goto label_1400b97bb
                
            label_1400b96d3:
                
                if ((temp0_352 & 4) != 0)
                label_1400b97bb:
                    *(&var_388:8 + (rsi_18 << 2)) = zmm4[0]
                    
                    if ((temp0_352 & 8) != 0)
                        *(&var_388:0xc + (rsi_18 << 2)) = zmm4[0]
                else
                label_1400b96db:
                    
                    if ((temp0_352 & 8) != 0)
                        *(&var_388:0xc + (rsi_18 << 2)) = zmm4[0]
            
            zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm2)) != 0)
                zmm5 = *(&var_308 + rsi_18)
                float temp0_356[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_356, 1), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm3)) != 0)
                    char temp0_361 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_361 & 1) == 0)
                        if ((temp0_361 & 2) != 0)
                            goto label_1400b97db
                        
                        goto label_1400b9734
                    
                    *(&var_388 + (rsi_18 << 2)) = zmm5.d
                    
                    if ((temp0_361 & 2) != 0)
                    label_1400b97db:
                        *(&var_388:4 + (rsi_18 << 2)) = zmm5.d
                        
                        if ((temp0_361 & 4) == 0)
                            goto label_1400b973c
                        
                        goto label_1400b97e9
                    
                label_1400b9734:
                    
                    if ((temp0_361 & 4) != 0)
                    label_1400b97e9:
                        *(&var_388:8 + (rsi_18 << 2)) = zmm5.d
                        
                        if ((temp0_361 & 8) != 0)
                            *(&var_388:0xc + (rsi_18 << 2)) = zmm5.d
                    else
                    label_1400b973c:
                        
                        if ((temp0_361 & 8) != 0)
                            *(&var_388:0xc + (rsi_18 << 2)) = zmm5.d
                
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_356, 5), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm3)) != 0)
                    zmm2 = *(&var_188 + (rsi_18 << 2))
                    char temp0_366 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_366 & 1) == 0)
                        if ((temp0_366 & 2) != 0)
                            goto label_1400b9809
                        
                        goto label_1400b9775
                    
                    *(&var_388 + (rsi_18 << 2)) = zmm2.d
                    
                    if ((temp0_366 & 2) != 0)
                    label_1400b9809:
                        *(&var_388:4 + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        if ((temp0_366 & 4) == 0)
                            goto label_1400b977d
                        
                        goto label_1400b9819
                    
                label_1400b9775:
                    
                    if ((temp0_366 & 4) != 0)
                    label_1400b9819:
                        *(&var_388:8 + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                        
                        if ((temp0_366 & 8) != 0)
                            *(&var_388:0xc + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
                    else
                    label_1400b977d:
                        
                        if ((temp0_366 & 8) != 0)
                            *(&var_388:0xc + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
            
            if (rsi_18 == 8)
                break
            
            zmm1 = *(&var_178 + (rsi_18 << 2))
            rsi_18 += 4
        
        zmm2 = var_388
        zmm9 = var_378
        uint128_t var_218_1 = _mm_sub_ps(zmm2, zmm0)
        zmm5 = *arg1
        zmm6 = *(arg1 + 4)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm0 = _mm_sub_ps(zmm2, zmm5)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm1 = _mm_sub_ps(zmm9, zmm6)
        zmm4 = *arg3
        zmm7 = *(arg3 + 4)
        float temp0_375[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm0 = _mm_div_ps(zmm0, temp0_375)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm1 = _mm_div_ps(zmm1, zmm7)
        zmm11 = arg3[1].d
        zmm12 = _mm_cvttps_epi32(zmm0)
        zmm10 = _mm_cvttps_epi32(zmm1)
        uint128_t var_2a8_2 = zmm5
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_375), zmm5)
        zmm5 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0)
        uint128_t var_2b8_2 = zmm1
        uint128_t var_258_2 = zmm2
        zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm2, 1)
        zmm8 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(zmm1, zmm1))
        zmm4 = _mm_blendv_ps(zmm8, zmm12, zmm0)
        uint128_t var_278_2 = zmm7
        uint128_t var_298_2 = zmm6
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), zmm7), zmm6)
        float temp0_395[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm0 = _mm_add_ps(zmm0, temp0_395)
        zmm7 = zmm0
        zmm0 = _mm_cmpeq_ps(zmm0, zmm9, 1)
        char temp0_399 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm3))
        zmm13 = arg1[1].d
        float temp0_400[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
        zmm14 = var_368_3
        zmm1 = _mm_sub_ps(zmm14, temp0_400)
        float temp0_402[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_402))
        int64_t* var_2e8
        var_2e8.o = zmm1
        float temp0_407[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_402), temp0_400)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        var_388 = zmm4
        zmm7 = _mm_cmpeq_ps(zmm7, zmm9, 5)
        
        if (temp0_399 != 0)
            zmm12 = zmm10
        
        zmm2 = __subps_xmmps_memps(zmm9, temp0_345)
        zmm1 = _mm_mul_ps(var_218_1, var_218_1)
        float temp0_412[0x4] = _mm_add_ps(temp0_407, zmm5)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm7, zmm3)) != 0)
            zmm8 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
        
        float temp0_416[0x4] = __subps_xmmps_memps(zmm14, var_248_2)
        zmm1 = _mm_add_ps(zmm1, zx.o(0))
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        zmm7 = _mm_blendv_ps(zmm8, zmm12, zmm0)
        var_378 = zmm7
        zmm0 = _mm_cmpeq_ps(temp0_412, zmm14, 5)
        float temp0_421[0x4] = _mm_cmpeq_ps(temp0_412, zmm14, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_421, zmm3)) != 0)
            zmm12 = var_2e8.o
        
        zmm6 = _mm_add_ps(zmm1, zmm2)
        float temp0_425[0x4] = _mm_mul_ps(temp0_416, temp0_416)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
            zmm8 = __paddd_xmmdq_memdq(var_2e8.o, data_142d3f800)
        
        float temp0_429[0x4] = _mm_blendv_ps(zmm8, zmm12, temp0_421)
        zmm15 = _mm_add_ps(zmm6, temp0_425)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_375), var_2a8_2)
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), var_278_2), var_298_2)
        zmm2 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_429), temp0_402), temp0_400)
        zmm7 = _mm_add_ps(var_2b8_2, zmm0)
        float temp0_441[0x4] = _mm_add_ps(temp0_395, zmm1)
        zmm5 = _mm_add_ps(zmm5, zmm2)
        zmm0 = _mm_sub_ps(var_258_2, zmm7)
        zmm1 = _mm_sub_ps(zmm9, temp0_441)
        float temp0_445[0x4] = _mm_sub_ps(zmm14, zmm5)
        zmm0 = _mm_div_ps(zmm0, temp0_375)
        zmm1 = _mm_div_ps(zmm1, var_278_2)
        float temp0_448[0x4] = _mm_div_ps(temp0_445, temp0_402)
        var_348 = zmm0
        uint128_t var_338_4 = zmm1
        int64_t rcx_7 = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm4 = _mm_cmpeq_epi32(zmm4, zmm0)
            
            if (_mm_movemask_ps(zmm4 & zmm3) != 0)
                char temp0_452 = _mm_movemask_ps(zmm4)
                
                if ((temp0_452 & 1) == 0)
                    if ((temp0_452 & 2) != 0)
                        goto label_1400b9bdf
                    
                    goto label_1400b9b1f
                
                *(&var_388 + (rcx_7 << 2)) = 0
                
                if ((temp0_452 & 2) != 0)
                label_1400b9bdf:
                    *(&var_388:4 + (rcx_7 << 2)) = 0
                    
                    if ((temp0_452 & 4) == 0)
                        goto label_1400b9b27
                    
                    goto label_1400b9bef
                
            label_1400b9b1f:
                
                if ((temp0_452 & 4) == 0)
                label_1400b9b27:
                    
                    if ((temp0_452 & 8) != 0)
                        goto label_1400b9bff
                    
                    goto label_1400b9b2f
                
            label_1400b9bef:
                *(&var_388:8 + (rcx_7 << 2)) = 0
                
                if ((temp0_452 & 8) != 0)
                label_1400b9bff:
                    *(&var_388:0xc + (rcx_7 << 2)) = 0
                    
                    if ((temp0_452 & 1) == 0)
                        goto label_1400b9b37
                    
                    goto label_1400b9c0f
                
            label_1400b9b2f:
                
                if ((temp0_452 & 1) == 0)
                label_1400b9b37:
                    
                    if ((temp0_452 & 2) != 0)
                        goto label_1400b9c1f
                    
                    goto label_1400b9b3f
                
            label_1400b9c0f:
                *(&var_348 + (rcx_7 << 2)) = 0
                
                if ((temp0_452 & 2) != 0)
                label_1400b9c1f:
                    *(&var_348:4 + (rcx_7 << 2)) = 0
                    
                    if ((temp0_452 & 4) == 0)
                        goto label_1400b9b47
                    
                    goto label_1400b9c2f
                
            label_1400b9b3f:
                
                if ((temp0_452 & 4) != 0)
                label_1400b9c2f:
                    *(&var_348:8 + (rcx_7 << 2)) = 0
                    
                    if ((temp0_452 & 8) != 0)
                        *(&var_348:0xc + (rcx_7 << 2)) = 0
                else
                label_1400b9b47:
                    
                    if ((temp0_452 & 8) != 0)
                        *(&var_348:0xc + (rcx_7 << 2)) = 0
            
            int32_t rdx_32 = *(arg4 + rcx_7)
            zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_32 - 1), 0), 
                *(&var_388 + (rcx_7 << 2)))
            
            if (_mm_movemask_ps(zmm1 & zmm3) != 0)
                char temp0_456 = _mm_movemask_ps(zmm1)
                
                if ((temp0_456 & 1) == 0)
                    if ((temp0_456 & 2) != 0)
                        goto label_1400b9c5b
                    
                    goto label_1400b9b8d
                
                *(&var_388 + (rcx_7 << 2)) = rdx_32 - 2
                
                if ((temp0_456 & 2) != 0)
                label_1400b9c5b:
                    *(&var_388:4 + (rcx_7 << 2)) = rdx_32 - 2
                    
                    if ((temp0_456 & 4) == 0)
                        goto label_1400b9b95
                    
                    goto label_1400b9c67
                
            label_1400b9b8d:
                
                if ((temp0_456 & 4) == 0)
                label_1400b9b95:
                    
                    if ((temp0_456 & 8) != 0)
                        goto label_1400b9c73
                    
                    goto label_1400b9b9d
                
            label_1400b9c67:
                *(&var_388:8 + (rcx_7 << 2)) = rdx_32 - 2
                
                if ((temp0_456 & 8) != 0)
                label_1400b9c73:
                    *(&var_388:0xc + (rcx_7 << 2)) = rdx_32 - 2
                    
                    if ((temp0_456 & 1) == 0)
                        goto label_1400b9ba5
                    
                    goto label_1400b9c7f
                
            label_1400b9b9d:
                
                if ((temp0_456 & 1) == 0)
                label_1400b9ba5:
                    
                    if ((temp0_456 & 2) != 0)
                        goto label_1400b9c8f
                    
                    goto label_1400b9bad
                
            label_1400b9c7f:
                *(&var_348 + (rcx_7 << 2)) = 0x3f800000
                
                if ((temp0_456 & 2) != 0)
                label_1400b9c8f:
                    *(&var_348:4 + (rcx_7 << 2)) = 0x3f800000
                    
                    if ((temp0_456 & 4) == 0)
                        goto label_1400b9bb5
                    
                    goto label_1400b9c9f
                
            label_1400b9bad:
                
                if ((temp0_456 & 4) != 0)
                label_1400b9c9f:
                    *(&var_348:8 + (rcx_7 << 2)) = 0x3f800000
                    
                    if ((temp0_456 & 8) != 0)
                        *(&var_348:0xc + (rcx_7 << 2)) = 0x3f800000
                else
                label_1400b9bb5:
                    
                    if ((temp0_456 & 8) != 0)
                        *(&var_348:0xc + (rcx_7 << 2)) = 0x3f800000
            
            if (rcx_7 == 8)
                break
            
            zmm4 = *(&var_378 + (rcx_7 << 2))
            rcx_7 += 4
        
        zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm4 = var_388
        zmm5 = var_378
        zmm12 = temp0_429
        zmm6 = _mm_mullo_epi32(zmm7, zmm4)
        zmm8 = _mm_add_epi32(zmm6, zmm5)
        zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm13 = _mm_mullo_epi32(zmm8, zmm0)
        zmm1 = _mm_add_epi32(zmm13, zmm12)
        uint128_t* rcx_8 = *(arg5 + 0x10)
        zmm1 = _mm_slli_epi32(zmm1, 2) & zmm3
        int64_t rax_42 = sx.q(zmm1.d)
        zmm2 = *(rcx_8 + rax_42)
        int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rbx_14 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rdx_34 = sx.q(_mm_extract_epi32(zmm1, 3))
        zmm2 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rcx_8 + rbp_9), 0x10), 
                *(rcx_8 + rbx_14), 0x20), 
            *(rcx_8 + rdx_34), 0x30)
        zmm11 = _mm_cmpeq_epi32(temp0_402, temp0_402)
        zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm11), zmm7)
        zmm1 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm5), zmm0), zmm12), 2)
        zmm8 = _mm_mullo_epi32(_mm_add_epi32(zmm8, zmm7), zmm0)
        zmm1 &= zmm3
        zmm7 = *(rcx_8 + sx.q(zmm1.d))
        int32_t temp0_479 = _mm_extract_epi32(zmm1, 1)
        int64_t rbp_11 = sx.q(_mm_extract_epi32(zmm1, 2))
        int32_t temp0_481 = _mm_extract_epi32(zmm1, 3)
        zmm7 = _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rcx_8 + sx.q(temp0_479)), 0x10), 
                    *(rcx_8 + rbp_11), 0x20), 
                *(rcx_8 + sx.q(temp0_481)), 0x30), 
            zmm2)
        zmm10 = var_348
        zmm9 = var_338_4
        zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm10), zmm2)
        zmm5 = _mm_sub_epi32(zmm5, zmm11)
        zmm6 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm5), zmm0), zmm12), 2) & zmm3
        zmm2 = *(rcx_8 + sx.q(zmm6.d))
        int64_t rdx_43 = sx.q(_mm_extract_epi32(zmm6, 1))
        int32_t temp0_494 = _mm_extract_epi32(zmm6, 2)
        int64_t rbx_17 = sx.q(_mm_extract_epi32(zmm6, 3))
        zmm2 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rcx_8 + rdx_43), 0x10), 
                *(rcx_8 + sx.q(temp0_494)), 0x20), 
            *(rcx_8 + rbx_17), 0x30)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm4), zmm0), zmm12), 2) & zmm3
        zmm4 = *(rcx_8 + sx.q(zmm5.d))
        int32_t temp0_503 = _mm_extract_epi32(zmm5, 1)
        int64_t rbp_15 = sx.q(_mm_extract_epi32(zmm5, 2))
        int32_t temp0_505 = _mm_extract_epi32(zmm5, 3)
        float temp0_510[0x4] = _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm4, *(rcx_8 + sx.q(temp0_503)), 0x10), 
                        *(rcx_8 + rbp_15), 0x20), 
                    *(rcx_8 + sx.q(temp0_505)), 0x30), 
                zmm2), 
            zmm10)
        zmm5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(r11_1 + rcx_8 + rax_42), *(rcx_5 + rcx_8 + rbp_9), 
                    0x10), 
                *(r15_5 + rcx_8 + rbx_14), 0x20), 
            *(r10_2 + rcx_8 + rdx_34), 0x30)
        zmm0 = _mm_add_epi32(zmm0, zmm12)
        zmm13 = _mm_add_epi32(zmm13, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm8)
        zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm12), 2) & zmm3
        zmm6 = *(r11_1 + sx.q(zmm8[0]) + rcx_8)
        void* rax_51 = sx.q(_mm_extract_epi32(zmm8, 1)) + rcx_8
        void* rdx_51 = sx.q(_mm_extract_epi32(zmm8, 2)) + rcx_8
        void* rbp_18 = sx.q(_mm_extract_epi32(zmm8, 3)) + rcx_8
        zmm6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rcx_5 + rax_51), 0x10), 
                *(r15_5 + rdx_51), 0x20), 
            *(r10_2 + rbp_18), 0x30)
        float temp0_525[0x4] = _mm_add_ps(temp0_510, zmm2)
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm5), zmm10), zmm5)
        zmm13 = _mm_slli_epi32(zmm13, 2) & zmm3
        zmm2 = *(r11_1 + sx.q(zmm13[0]) + rcx_8)
        void* rax_57 = sx.q(_mm_extract_epi32(zmm13, 1)) + rcx_8
        void* rdx_54 = sx.q(_mm_extract_epi32(zmm13, 2)) + rcx_8
        void* rbp_21 = sx.q(_mm_extract_epi32(zmm13, 3)) + rcx_8
        zmm2 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rcx_5 + rax_57), 0x10), 
                *(r15_5 + rdx_54), 0x20), 
            *(r10_2 + rbp_21), 0x30)
        zmm0 = _mm_slli_epi32(zmm0, 2) & zmm3
        zmm1 = *(r11_1 + sx.q(zmm0.d) + rcx_8)
        void* rax_63 = sx.q(_mm_extract_epi32(zmm0, 1)) + rcx_8
        void* rdx_57 = sx.q(_mm_extract_epi32(zmm0, 2)) + rcx_8
        void* rbp_24 = sx.q(_mm_extract_epi32(zmm0, 3)) + rcx_8
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rcx_5 + rax_63), 0x10), 
                            *(r15_5 + rdx_57), 0x20), 
                        *(r10_2 + rbp_24), 0x30), 
                    zmm2), 
                zmm10), 
            zmm2)
        float temp0_548[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_525, zmm7), zmm9), zmm7)
        zmm1 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm6), zmm9), zmm6), temp0_548), 
                temp0_448), 
            temp0_548)
        zmm2 = _mm_cmpeq_ps(zmm15, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm15, 7), zmm2), zmm3)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm2 = _mm_rsqrt_ps(zmm15)
            zmm5 = _mm_mul_ps(_mm_mul_ps(zmm15, zmm2), zmm2)
            float temp0_565[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm2), data_142d3f640)
            zmm2 = _mm_rcp_ps(temp0_565)
            float temp0_567[0x4] = _mm_mul_ps(temp0_565, zmm2)
            zmm1 = _mm_blendv_ps(zmm1, 
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_567), zmm2), zmm1), zmm0)
        
        zmm0 = *arg10
        uint32_t i_4 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm3))
        
        if (i_4 == 0)
            return 0
        
        uint64_t i_2 = zx.q(i_4)
        result = 0
        
        do
            uint64_t rdx_58
            
            if (i_2 == 0)
                rdx_58 = 0x40
                i_2 &= 0xfffffffffffffffe
                
                if ((result.b & 1) == 0)
                label_1400ba0b1:
                    uint128_t var_208 = zmm1
                    uint64_t rdx_59 = zx.q(rdx_58.d) & 3
                    *arg10 = (*(&var_208 + (rdx_59 << 2))).d
                    uint128_t var_1f8 = var_228_1
                    *arg9 = *(&var_1f8 + (rdx_59 << 2))
            else
                uint64_t rflags_2
                rdx_58, rflags_2 = _bit_scan_forward(i_2)
                i_2 &= not.q(1 << (rdx_58 u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400ba0b1
            result.b = 1
        while (i_2 != 0)

return result
