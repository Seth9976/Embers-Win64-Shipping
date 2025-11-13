// 函数: sub_1400bbf50
// 地址: 0x1400bbf50
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
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint128_t zmm0 =
    __mulps_xmmps_memps(__insertps_xmmps_memd_immb(zx.o(*arg3), arg3[1].d, 0x20), data_142e6d9f0)
uint128_t zmm1 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
int32_t var_318 = zmm1.d
int32_t var_314 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_310 = __extractps_memd_xmmps_immb(zmm1, 2)
zmm1 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20), zmm0)
int32_t var_328 = zmm1.d
int32_t var_324 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_320 = __extractps_memd_xmmps_immb(zmm1, 2)
int32_t r12_4 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
uint128_t var_3a8
uint128_t var_398
float var_368[0x4]
uint128_t var_308
uint128_t var_278
int32_t result
uint64_t r15
uint128_t zmm2
uint32_t zmm3[0x4]
float zmm4[0x4]
uint128_t zmm5

if (r12_4 s<= 0)
    r15 = 0
    result = 0
else
    result = 0
    zmm15 = zx.o(0)
    r15 = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            uint128_t var_2e8_1 =
                __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
            int64_t rax_3 = sx.q((r15 << 2).d * 3)
            zmm0 = *(arg7 + rax_3)
            zmm2 = *(arg7 + rax_3 + 0x10)
            zmm5 = *(arg7 + rax_3 + 0x20)
            uint32_t temp0_12[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
            zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), temp0_12, 3)
            zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
            zmm1 = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
            var_368 = zmm4
            uint32_t var_358_1[0x4] = zmm3
            float var_338_1[0x4] = zmm15
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_3a8 = zmm0
            var_398 = zmm0
            uint128_t var_388_1 = zmm0
            uint128_t var_378_1 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
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
            zmm3 = __addps_xmmps_memps(zmm3, var_368)
            float temp0_42[0x4] = __addps_xmmps_memps(temp0_40, var_358_1)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm5), zmm1)
            float temp0_45[0x4] = _mm_mul_ps(zmm5, temp0_24)
            zmm2 = _mm_mul_ps(temp0_36, temp0_26)
            zmm1 = _mm_mul_ps(temp0_37, temp0_28)
            float temp0_50[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_45, _mm_mul_ps(temp0_37, temp0_26)), zmm3)
            zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(zmm5, temp0_28)), temp0_42)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_36, temp0_24)), zmm0)
            zmm3 = arg6[1].d
            zmm5 = *(arg6 + 0x14)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_50)
            zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm2)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
            uint32_t var_158[0x4] = zmm3
            uint128_t var_2b8_1 = zmm5
            uint128_t var_148 = zmm5
            var_278 = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rax_4 = 0
            uint32_t var_308_1[0x4] = zmm3
            zmm0 = zmm3
            
            while (true)
                zmm2 = *(&var_318 + rax_4)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_65 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_65 != 0)
                    if ((temp0_65 & 1) == 0)
                        if ((temp0_65 & 2) != 0)
                            goto label_1400bc33e
                        
                        goto label_1400bc26f
                    
                    *(&var_3a8 + (rax_4 << 2)) = zmm2.d
                    
                    if ((temp0_65 & 2) != 0)
                    label_1400bc33e:
                        *(&var_3a8:4 + (rax_4 << 2)) = zmm2.d
                        
                        if ((temp0_65 & 4) == 0)
                            goto label_1400bc278
                        
                        goto label_1400bc34d
                    
                label_1400bc26f:
                    
                    if ((temp0_65 & 4) != 0)
                    label_1400bc34d:
                        *(&var_3a8:8 + (rax_4 << 2)) = zmm2.d
                        
                        if ((temp0_65 & 8) != 0)
                            *(&var_3a8:0xc + (rax_4 << 2)) = zmm2.d
                    else
                    label_1400bc278:
                        
                        if ((temp0_65 & 8) != 0)
                            *(&var_3a8:0xc + (rax_4 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_328 + rax_4)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_71 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_71 != 0)
                        if ((temp0_71 & 1) == 0)
                            if ((temp0_71 & 2) != 0)
                                goto label_1400bc36f
                            
                            goto label_1400bc2c8
                        
                        *(&var_3a8 + (rax_4 << 2)) = zmm3[0]
                        
                        if ((temp0_71 & 2) != 0)
                        label_1400bc36f:
                            *(&var_3a8:4 + (rax_4 << 2)) = zmm3[0]
                            
                            if ((temp0_71 & 4) == 0)
                                goto label_1400bc2d1
                            
                            goto label_1400bc37e
                        
                    label_1400bc2c8:
                        
                        if ((temp0_71 & 4) != 0)
                        label_1400bc37e:
                            *(&var_3a8:8 + (rax_4 << 2)) = zmm3[0]
                            
                            if ((temp0_71 & 8) != 0)
                                *(&var_3a8:0xc + (rax_4 << 2)) = zmm3[0]
                        else
                        label_1400bc2d1:
                            
                            if ((temp0_71 & 8) != 0)
                                *(&var_3a8:0xc + (rax_4 << 2)) = zmm3[0]
                    
                    char temp0_74 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_74 != 0)
                        zmm0 = *(&var_158 + (rax_4 << 2))
                        
                        if ((temp0_74 & 1) == 0)
                            if ((temp0_74 & 2) != 0)
                                goto label_1400bc3a0
                            
                            goto label_1400bc307
                        
                        *(&var_3a8 + (rax_4 << 2)) = zmm0.d
                        
                        if ((temp0_74 & 2) != 0)
                        label_1400bc3a0:
                            *(&var_3a8:4 + (rax_4 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_74 & 4) == 0)
                                goto label_1400bc310
                            
                            goto label_1400bc3b1
                        
                    label_1400bc307:
                        
                        if ((temp0_74 & 4) != 0)
                        label_1400bc3b1:
                            *(&var_3a8:8 + (rax_4 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_74 & 8) != 0)
                                *(&var_3a8:0xc + (rax_4 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1400bc310:
                            
                            if ((temp0_74 & 8) != 0)
                                *(&var_3a8:0xc + (rax_4 << 2)) =
                                    __extractps_memd_xmmps_immb(zmm0, 3)
                
                if (rax_4 == 8)
                    break
                
                zmm0 = *(&var_148 + (rax_4 << 2))
                rax_4 += 4
            
            zmm5 = var_3a8
            zmm14 = var_398
            zmm4 = *arg1
            zmm10 = *(arg1 + 4)
            float temp0_78[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm0 = _mm_sub_ps(zmm5, temp0_78)
            float temp0_80[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm3 = _mm_sub_ps(zmm14, temp0_80)
            zmm9 = arg1[1].d
            float temp0_82[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm1 = _mm_sub_ps(var_388_1, temp0_82)
            zmm2 = *arg3
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_div_ps(zmm0, zmm2)
            zmm7 = arg3[1].d
            zmm15 = _mm_cvttps_epi32(zmm0)
            uint128_t var_298_1 = zmm2
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm2), temp0_78)
            float temp0_91[0x4] =
                __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm7, 0x20), data_142fc9600)
            zmm4 = _mm_cmpeq_epi32(temp0_78, temp0_78)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0)
            int64_t var_2f8
            var_2f8.o = zmm5
            zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_93), zmm5, 1)
            zmm2 = _mm_add_epi32(zmm15, zmm4)
            zmm12 = _mm_blendv_ps(zmm2, zmm15, zmm0)
            zmm4 = *(arg3 + 4)
            float temp0_98[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm3 = _mm_div_ps(zmm3, temp0_98)
            float temp0_100[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            zmm1 = _mm_div_ps(zmm1, temp0_100)
            zmm6 = _mm_cvttps_epi32(zmm3)
            zmm1 = _mm_cvttps_epi32(zmm1)
            zmm5 = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_98)
            float temp0_107[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_100)
            zmm5 = _mm_add_ps(zmm5, temp0_80)
            float temp0_109[0x4] = _mm_add_ps(temp0_107, temp0_82)
            zmm3 = _mm_shuffle_ps(temp0_91, temp0_91, 0x55)
            zmm5 = _mm_add_ps(zmm5, zmm3)
            float temp0_112[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xaa)
            var_3a8 = zmm12
            zmm0 = _mm_cmpeq_ps(zmm5, zmm14, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm15 = zmm6
            
            float temp0_115[0x4] = _mm_add_ps(temp0_109, temp0_112)
            bool cond:2_1 = _mm_movemask_ps(_mm_cmpeq_ps(zmm5, zmm14, 5)) == 0
            zmm5 = zmm14
            
            if (not(cond:2_1))
                zmm2 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
            
            float temp0_119[0x4] = __subps_xmmps_memps(var_2f8.o, var_308_1)
            var_308 = zmm5
            float temp0_120[0x4] = __subps_xmmps_memps(zmm5, var_2b8_1)
            float temp0_121[0x4] = _mm_blendv_ps(zmm2, zmm15, zmm0)
            var_398 = temp0_121
            zmm9 = var_388_1
            zmm0 = _mm_cmpeq_ps(temp0_115, zmm9, 1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm15 = zmm1
            
            zmm5 = __subps_xmmps_memps(zmm9, var_278)
            float temp0_125[0x4] = _mm_mul_ps(temp0_119, temp0_119)
            float temp0_126[0x4] = _mm_mul_ps(temp0_120, temp0_120)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_115, zmm9, 5)) != 0)
                zmm2 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
            
            zmm2 = _mm_blendv_ps(zmm2, zmm15, zmm0)
            zmm15 = zx.o(0)
            float temp0_132[0x4] = _mm_add_ps(_mm_add_ps(temp0_125, zmm15), temp0_126)
            zmm6 = var_298_1
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), zmm6), temp0_78)
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_121), temp0_98), temp0_80)
            uint128_t var_388_2 = zmm2
            zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_100), temp0_82)
            float temp0_142[0x4] = _mm_add_ps(temp0_93, zmm0)
            zmm3 = _mm_add_ps(zmm3, zmm1)
            float temp0_144[0x4] = _mm_add_ps(temp0_112, zmm2)
            zmm0 = _mm_sub_ps(var_2f8.o, temp0_142)
            zmm1 = _mm_sub_ps(var_308, zmm3)
            float temp0_147[0x4] = _mm_sub_ps(zmm9, temp0_144)
            zmm0 = _mm_div_ps(zmm0, zmm6)
            zmm1 = _mm_div_ps(zmm1, temp0_98)
            float temp0_150[0x4] = _mm_div_ps(temp0_147, temp0_100)
            var_368 = zmm0
            uint128_t var_358_2 = zmm1
            zmm5 = _mm_mul_ps(zmm5, zmm5)
            int64_t rax_9 = 0
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
            
            if (i == 0)
                goto label_1400bc6a7
            
            do
                if ((i & 1) == 0)
                    if ((i & 2) != 0)
                        goto label_1400bc740
                    
                    goto label_1400bc66d
                
                *(&var_3a8 + (rax_9 << 2)) = 0
                
                if ((i & 2) != 0)
                label_1400bc740:
                    *(&var_3a8:4 + (rax_9 << 2)) = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400bc676
                    
                    goto label_1400bc751
                
            label_1400bc66d:
                
                if ((i & 4) == 0)
                label_1400bc676:
                    
                    if ((i & 8) != 0)
                        goto label_1400bc762
                    
                    goto label_1400bc67f
                
            label_1400bc751:
                *(&var_3a8:8 + (rax_9 << 2)) = 0
                
                if ((i & 8) != 0)
                label_1400bc762:
                    *(&var_3a8:0xc + (rax_9 << 2)) = 0
                    
                    if ((i & 1) == 0)
                        goto label_1400bc688
                    
                    goto label_1400bc773
                
            label_1400bc67f:
                
                if ((i & 1) == 0)
                label_1400bc688:
                    
                    if ((i & 2) != 0)
                        goto label_1400bc784
                    
                    goto label_1400bc691
                
            label_1400bc773:
                var_368[rax_9] = 0
                
                if ((i & 2) != 0)
                label_1400bc784:
                    var_368[1 + rax_9] = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400bc69a
                    
                    goto label_1400bc795
                
            label_1400bc691:
                
                if ((i & 4) != 0)
                label_1400bc795:
                    var_368[2 + rax_9] = 0
                    
                    if ((i & 8) != 0)
                        var_368[3 + rax_9] = 0
                else
                label_1400bc69a:
                    
                    if ((i & 8) != 0)
                        var_368[3 + rax_9] = 0
                
            label_1400bc6a7:
                int32_t rsi_1 = *(arg4 + rax_9)
                char temp0_159 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rsi_1 - 1), 0), *(&var_3a8 + (rax_9 << 2))))
                
                if (temp0_159 != 0)
                    if ((temp0_159 & 1) == 0)
                        if ((temp0_159 & 2) != 0)
                            goto label_1400bc7bc
                        
                        goto label_1400bc6db
                    
                    *(&var_3a8 + (rax_9 << 2)) = rsi_1 - 2
                    
                    if ((temp0_159 & 2) != 0)
                    label_1400bc7bc:
                        *(&var_3a8:4 + (rax_9 << 2)) = rsi_1 - 2
                        
                        if ((temp0_159 & 4) == 0)
                            goto label_1400bc6e4
                        
                        goto label_1400bc7c9
                    
                label_1400bc6db:
                    
                    if ((temp0_159 & 4) == 0)
                    label_1400bc6e4:
                        
                        if ((temp0_159 & 8) != 0)
                            goto label_1400bc7d6
                        
                        goto label_1400bc6ed
                    
                label_1400bc7c9:
                    *(&var_3a8:8 + (rax_9 << 2)) = rsi_1 - 2
                    
                    if ((temp0_159 & 8) != 0)
                    label_1400bc7d6:
                        *(&var_3a8:0xc + (rax_9 << 2)) = rsi_1 - 2
                        
                        if ((temp0_159 & 1) == 0)
                            goto label_1400bc6f6
                        
                        goto label_1400bc7e3
                    
                label_1400bc6ed:
                    
                    if ((temp0_159 & 1) == 0)
                    label_1400bc6f6:
                        
                        if ((temp0_159 & 2) != 0)
                            goto label_1400bc7f4
                        
                        goto label_1400bc6ff
                    
                label_1400bc7e3:
                    var_368[rax_9] = 0x3f800000
                    
                    if ((temp0_159 & 2) != 0)
                    label_1400bc7f4:
                        var_368[1 + rax_9] = 0x3f800000
                        
                        if ((temp0_159 & 4) == 0)
                            goto label_1400bc708
                        
                        goto label_1400bc805
                    
                label_1400bc6ff:
                    
                    if ((temp0_159 & 4) != 0)
                    label_1400bc805:
                        var_368[2 + rax_9] = 0x3f800000
                        
                        if ((temp0_159 & 8) != 0)
                            var_368[3 + rax_9] = 0x3f800000
                    else
                    label_1400bc708:
                        
                        if ((temp0_159 & 8) != 0)
                            var_368[3 + rax_9] = 0x3f800000
                
                if (rax_9 == 8)
                    break
                
                zmm12 = *(&var_398 + (rax_9 << 2))
                rax_9 += 4
                i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm12, zmm3))
            while (i != 0)
            
            float temp0_160[0x4] = _mm_add_ps(temp0_132, zmm5)
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm1 = var_3a8
            zmm2 = var_398
            zmm10 = var_388_2
            zmm4 = _mm_mullo_epi32(zmm8, zmm1)
            zmm12 = _mm_add_epi32(zmm4, zmm2)
            zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_mullo_epi32(zmm12, zmm0)
            zmm5 = _mm_add_epi32(zmm13, zmm10)
            float (* rax_11)[0x4] = *(arg5 + 0x10)
            zmm5 = _mm_slli_epi32(zmm5, 2)
            int64_t r14_1 = sx.q(zmm5.d)
            int64_t rsi_3 = sx.q(_mm_extract_epi32(zmm5, 1))
            int64_t rdx_14 = sx.q(_mm_extract_epi32(zmm5, 2))
            int64_t rdi_3 = sx.q(_mm_extract_epi32(zmm5, 3))
            float temp0_173[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rax_11 + r14_1), *(rax_11 + rsi_3), 0x10), 
                    *(rax_11 + rdx_14), 0x20), 
                *(rax_11 + rdi_3), 0x30)
            zmm11 = *(rax_11 + r14_1 + 4)
            zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm3), zmm8)
            zmm7 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm2), zmm0), zmm10), 2)
            zmm12 = _mm_mullo_epi32(_mm_add_epi32(zmm12, zmm8), zmm0)
            zmm5 = *(rax_11 + sx.q(zmm7[0]))
            int32_t temp0_182 = _mm_extract_epi32(zmm7, 1)
            int64_t r14_2 = sx.q(_mm_extract_epi32(zmm7, 2))
            int32_t temp0_184 = _mm_extract_epi32(zmm7, 3)
            zmm5 = _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm5, *(rax_11 + sx.q(temp0_182)), 0x10), 
                        *(rax_11 + r14_2), 0x20), 
                    *(rax_11 + sx.q(temp0_184)), 0x30), 
                temp0_173)
            zmm9 = var_368
            zmm2 = _mm_sub_epi32(zmm2, zmm3)
            zmm4 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), zmm10), 2)
            int64_t rbx_5 = sx.q(zmm4[0])
            int32_t temp0_194 = _mm_extract_epi32(zmm4, 1)
            int32_t temp0_195 = _mm_extract_epi32(zmm4, 2)
            zmm3 = *(rax_11 + rbx_5)
            int32_t temp0_196 = _mm_extract_epi32(zmm4, 3)
            zmm8 = var_358_2
            zmm5 = _mm_mul_ps(zmm5, zmm9)
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rax_11 + sx.q(temp0_194)), 0x10), 
                    *(rax_11 + sx.q(temp0_195)), 0x20), 
                *(rax_11 + sx.q(temp0_196)), 0x30)
            zmm2 = _mm_slli_epi32(
                _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm1), zmm0), zmm10), 2)
            zmm7 = *(rax_11 + sx.q(zmm2.d))
            int64_t r14_5 = sx.q(_mm_extract_epi32(zmm2, 1))
            int32_t temp0_206 = _mm_extract_epi32(zmm2, 2)
            int64_t rbx_12 = sx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_210[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rax_11 + r14_5), 0x10), 
                    *(rax_11 + sx.q(temp0_206)), 0x20), 
                *(rax_11 + rbx_12), 0x30)
            zmm5 = _mm_add_ps(zmm5, temp0_173)
            float temp0_212[0x4] = _mm_sub_ps(temp0_210, zmm3)
            float temp0_215[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm11, *(rax_11 + rsi_3 + 4), 0x10), 
                    *(rax_11 + rdx_14 + 4), 0x20), 
                *(rax_11 + rdi_3 + 4), 0x30)
            float temp0_216[0x4] = _mm_mul_ps(temp0_212, zmm9)
            zmm0 = _mm_add_epi32(zmm0, zmm10)
            zmm13 = _mm_add_epi32(zmm13, zmm0)
            zmm0 = _mm_add_epi32(zmm0, zmm12)
            zmm12 = _mm_slli_epi32(_mm_add_epi32(zmm12, zmm10), 2)
            zmm2 = *(rax_11 + sx.q(zmm12.d) + 4)
            int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm12, 1))
            int32_t temp0_223 = _mm_extract_epi32(zmm12, 2)
            int64_t rdi_5 = sx.q(_mm_extract_epi32(zmm12, 3))
            zmm2 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_11 + rdx_18 + 4), 0x10), 
                    *(rax_11 + sx.q(temp0_223) + 4), 0x20), 
                *(rax_11 + rdi_5 + 4), 0x30)
            float temp0_228[0x4] = _mm_add_ps(temp0_216, zmm3)
            zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm2, temp0_215), zmm9), temp0_215)
            zmm13 = _mm_slli_epi32(zmm13, 2)
            zmm3 = *(rax_11 + sx.q(zmm13[0]) + 4)
            int32_t temp0_233 = _mm_extract_epi32(zmm13, 1)
            int64_t rsi_7 = sx.q(_mm_extract_epi32(zmm13, 2))
            int32_t temp0_235 = _mm_extract_epi32(zmm13, 3)
            zmm3 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rax_11 + sx.q(temp0_233) + 4), 0x10), 
                    *(rax_11 + rsi_7 + 4), 0x20), 
                *(rax_11 + sx.q(temp0_235) + 4), 0x30)
            zmm0 = _mm_slli_epi32(zmm0, 2)
            int32_t temp0_240 = _mm_extract_epi32(zmm0, 1)
            zmm1 = *(rax_11 + sx.q(zmm0.d) + 4)
            int64_t rsi_10 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rdi_8 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm1 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_11 + sx.q(temp0_240) + 4), 
                                    0x10), 
                                *(rax_11 + rsi_10 + 4), 0x20), 
                            *(rax_11 + rdi_8 + 4), 0x30), 
                        zmm3), 
                    zmm9), 
                zmm3)
            float temp0_251[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_228, zmm5), zmm8), zmm5)
            zmm1 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm2), zmm8), zmm2), 
                        temp0_251), 
                    temp0_150), 
                temp0_251)
            zmm2 = _mm_cmpeq_ps(temp0_160, zmm15, 4)
            zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_160, zmm15, 7), zmm2)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm2 = _mm_rsqrt_ps(temp0_160)
                float temp0_264[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_160, zmm2), zmm2)
                zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_264), zmm2), 
                    data_142d3f640)
                zmm2 = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, zmm2)
                zmm1 = _mm_blendv_ps(zmm1, 
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), zmm2), zmm1), zmm0)
            
            zmm0 = *arg9
            char i_3 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
            if (i_3 == 0)
                result = 0
                r15 = zx.q(r15.d + 4)
                
                if (r15.d s>= r12_4)
                    break
                
                continue
            else
                uint64_t i_1 = zx.q(i_3)
                result = 0
                
                do
                    uint64_t rsi_11
                    
                    if (i_1 == 0)
                        rsi_11 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400bcbe1:
                            uint128_t var_1e8 = zmm1
                            uint64_t rsi_12 = zx.q(rsi_11.d) & 3
                            *arg9 = (*(&var_1e8 + (rsi_12 << 2))).d
                            uint128_t var_1d8 = var_2e8_1
                            *arg8 = *(&var_1d8 + (rsi_12 << 2))
                    else
                        uint64_t rflags_1
                        rsi_11, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rsi_11 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400bcbe1
                    result.b = 1
                while (i_1 != 0)
        
        r15 = zx.q(r15.d + 4)
        
        if (r15.d s>= r12_4)
            break

if (r15.d s< arg10)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm2 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
        zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm2)
        uint128_t var_248_1 = zmm2
        zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm2) & zmm3
        int64_t rax_15 = sx.q(zmm1.d)
        void* r14_6 = arg7 + (rax_15 << 2)
        zmm0 = *(arg7 + (rax_15 << 2))
        int64_t rbx_13 = sx.q(_mm_extract_epi32(zmm1, 1))
        void* r12_5 = arg7 + (rbx_13 << 2)
        int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm1, 2))
        void* rdx_30 = arg7 + (rbp_9 << 2)
        int64_t rax_17 = sx.q(_mm_extract_epi32(zmm1, 3))
        void* rsi_14 = arg7 + (rax_17 << 2)
        zmm0 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbx_13 << 2)), 0x10), 
                *(arg7 + (rbp_9 << 2)), 0x20), 
            *(arg7 + (rax_17 << 2)), 0x30)
        zmm2 = data_142fc95e0 & zmm3
        uint64_t r15_1 = zx.q(zmm2.d)
        zmm8 = *(r15_1 + r14_6)
        uint64_t rax_18 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rdi_10 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rbx_14 = zx.q(_mm_extract_epi32(zmm2, 3))
        var_278.q = rdi_10
        var_308.q = rbx_14
        float temp0_292[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rax_18 + r12_5), 0x10), 
                *(rdi_10 + rdx_30), 0x20), 
            *(rbx_14 + rsi_14), 0x30)
        zmm2 = data_142fc95f0 & zmm3
        zmm6 = *(zx.q(zmm2.d) + r14_6)
        uint64_t rax_20 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rdi_11 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t r14_7 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_298[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_20 + r12_5), 0x10), 
                *(rdi_11 + rdx_30), 0x20), 
            *(r14_7 + rsi_14), 0x30)
        uint128_t var_1c8_1 = zmm0
        float var_198_1[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_3a8 = zmm5
        var_398 = zmm5
        uint128_t var_388_3 = zmm5
        zmm7 = *arg6
        zmm1 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_301[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_302[0x4] = _mm_mul_ps(temp0_292, temp0_301)
        float temp0_303[0x4] = _mm_mul_ps(temp0_301, temp0_298)
        float temp0_304[0x4] = _mm_mul_ps(temp0_298, zmm1)
        float temp0_305[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        zmm0 = _mm_mul_ps(zmm0, temp0_305)
        zmm2 = _mm_mul_ps(zx.o(0), zmm5)
        float temp0_310[0x4] = _mm_sub_ps(temp0_304, _mm_mul_ps(temp0_305, temp0_292))
        zmm0 = _mm_sub_ps(zmm0, temp0_303)
        float temp0_312[0x4] = _mm_sub_ps(temp0_302, zmm1)
        zmm2 = _mm_sub_ps(zmm2, zmm2)
        float temp0_314[0x4] = _mm_add_ps(temp0_310, temp0_310)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        float temp0_316[0x4] = _mm_add_ps(temp0_312, temp0_312)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        var_368 = temp0_314
        uint128_t var_358_3 = zmm0
        float var_348_3[0x4] = temp0_316
        uint128_t var_338_2 = zmm2
        zmm2 = _mm_mul_ps(zmm2, zmm5)
        zmm1 = _mm_mul_ps(zmm5, temp0_314)
        float temp0_320[0x4] = _mm_mul_ps(zmm5, zmm0)
        float temp0_321[0x4] = _mm_mul_ps(zmm5, temp0_316)
        zmm1 = __addps_xmmps_memps(zmm1, var_1c8_1)
        float temp0_323[0x4] = __addps_xmmps_memps(temp0_320, temp0_292)
        float temp0_324[0x4] = __addps_xmmps_memps(temp0_321, temp0_298)
        uint128_t var_378_2 = zmm5
        uint128_t var_128_1 = zmm1
        float var_118_1[0x4] = temp0_323
        float var_108_1[0x4] = temp0_324
        uint128_t var_f8_1 = __addps_xmmps_memps(zmm2, var_198_1)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_327[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm0, temp0_327)
        float temp0_329[0x4] = _mm_mul_ps(temp0_327, temp0_316)
        float temp0_330[0x4] = _mm_mul_ps(temp0_316, zmm5)
        float temp0_331[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm5 = _mm_mul_ps(zmm5, temp0_314)
        float temp0_333[0x4] = _mm_mul_ps(temp0_314, temp0_331)
        float temp0_335[0x4] = _mm_sub_ps(temp0_330, _mm_mul_ps(temp0_331, zmm0))
        float temp0_336[0x4] = _mm_sub_ps(temp0_333, temp0_329)
        zmm2 = _mm_sub_ps(zmm2, zmm5)
        float temp0_338[0x4] = _mm_add_ps(temp0_335, zmm1)
        float temp0_339[0x4] = _mm_add_ps(temp0_336, temp0_323)
        zmm2 = _mm_add_ps(zmm2, temp0_324)
        zmm0 = arg6[1].d
        zmm4 = *(arg6 + 0x14)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_338)
        float temp0_344[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_339)
        zmm1 = *(arg6 + 0x18)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm2)
        uint128_t var_188 = zmm0
        float var_178[0x4] = temp0_344
        uint128_t var_288_2 = zmm1
        uint128_t var_168_1 = zmm1
        int64_t rsi_15 = 0
        zmm1 = zmm0
        
        while (true)
            zmm4 = *(&var_318 + rsi_15)
            zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm5 = _mm_cmpeq_ps(zmm2, zmm1, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm3)) != 0)
                char temp0_351 = _mm_movemask_ps(zmm5)
                
                if ((temp0_351 & 1) == 0)
                    if ((temp0_351 & 2) != 0)
                        goto label_1400bd04d
                    
                    goto label_1400bcf73
                
                *(&var_3a8 + (rsi_15 << 2)) = zmm4[0]
                
                if ((temp0_351 & 2) != 0)
                label_1400bd04d:
                    *(&var_3a8:4 + (rsi_15 << 2)) = zmm4[0]
                    
                    if ((temp0_351 & 4) == 0)
                        goto label_1400bcf7b
                    
                    goto label_1400bd05b
                
            label_1400bcf73:
                
                if ((temp0_351 & 4) != 0)
                label_1400bd05b:
                    *(&var_3a8:8 + (rsi_15 << 2)) = zmm4[0]
                    
                    if ((temp0_351 & 8) != 0)
                        *(&var_3a8:0xc + (rsi_15 << 2)) = zmm4[0]
                else
                label_1400bcf7b:
                    
                    if ((temp0_351 & 8) != 0)
                        *(&var_3a8:0xc + (rsi_15 << 2)) = zmm4[0]
            
            zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm2)) != 0)
                zmm5 = *(&var_328 + rsi_15)
                float temp0_355[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_355, 1), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm3)) != 0)
                    char temp0_360 = _mm_movemask_ps(zmm6)
                    
                    if ((temp0_360 & 1) == 0)
                        if ((temp0_360 & 2) != 0)
                            goto label_1400bd07b
                        
                        goto label_1400bcfd4
                    
                    *(&var_3a8 + (rsi_15 << 2)) = zmm5.d
                    
                    if ((temp0_360 & 2) != 0)
                    label_1400bd07b:
                        *(&var_3a8:4 + (rsi_15 << 2)) = zmm5.d
                        
                        if ((temp0_360 & 4) == 0)
                            goto label_1400bcfdc
                        
                        goto label_1400bd089
                    
                label_1400bcfd4:
                    
                    if ((temp0_360 & 4) != 0)
                    label_1400bd089:
                        *(&var_3a8:8 + (rsi_15 << 2)) = zmm5.d
                        
                        if ((temp0_360 & 8) != 0)
                            *(&var_3a8:0xc + (rsi_15 << 2)) = zmm5.d
                    else
                    label_1400bcfdc:
                        
                        if ((temp0_360 & 8) != 0)
                            *(&var_3a8:0xc + (rsi_15 << 2)) = zmm5.d
                
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_355, 5), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm3)) != 0)
                    zmm2 = *(&var_188 + (rsi_15 << 2))
                    char temp0_365 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_365 & 1) == 0)
                        if ((temp0_365 & 2) != 0)
                            goto label_1400bd0a9
                        
                        goto label_1400bd015
                    
                    *(&var_3a8 + (rsi_15 << 2)) = zmm2.d
                    
                    if ((temp0_365 & 2) != 0)
                    label_1400bd0a9:
                        *(&var_3a8:4 + (rsi_15 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        if ((temp0_365 & 4) == 0)
                            goto label_1400bd01d
                        
                        goto label_1400bd0b9
                    
                label_1400bd015:
                    
                    if ((temp0_365 & 4) != 0)
                    label_1400bd0b9:
                        *(&var_3a8:8 + (rsi_15 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                        
                        if ((temp0_365 & 8) != 0)
                            *(&var_3a8:0xc + (rsi_15 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
                    else
                    label_1400bd01d:
                        
                        if ((temp0_365 & 8) != 0)
                            *(&var_3a8:0xc + (rsi_15 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
            
            if (rsi_15 == 8)
                break
            
            zmm1 = *(&var_178 + (rsi_15 << 2))
            rsi_15 += 4
        
        zmm2 = var_3a8
        zmm9 = var_398
        uint128_t var_238_1 = _mm_sub_ps(zmm2, zmm0)
        zmm5 = *arg1
        zmm6 = *(arg1 + 4)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm0 = _mm_sub_ps(zmm2, zmm5)
        float temp0_372[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm1 = _mm_sub_ps(zmm9, temp0_372)
        zmm4 = *arg3
        zmm7 = *(arg3 + 4)
        float temp0_374[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm0 = _mm_div_ps(zmm0, temp0_374)
        float temp0_376[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_376)
        zmm11 = arg3[1].d
        zmm12 = _mm_cvttps_epi32(zmm0)
        zmm10 = _mm_cvttps_epi32(zmm1)
        uint128_t var_218_1 = zmm5
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_374), zmm5)
        zmm5 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0)
        uint128_t var_228_1 = zmm1
        uint128_t var_2a8_2 = zmm2
        zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm2, 1)
        zmm8 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(zmm1, zmm1))
        zmm4 = _mm_blendv_ps(zmm8, zmm12, zmm0)
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_376), temp0_372)
        float temp0_394[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm0 = _mm_add_ps(zmm0, temp0_394)
        zmm7 = zmm0
        zmm0 = _mm_cmpeq_ps(zmm0, zmm9, 1)
        char temp0_398 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm3))
        zmm13 = arg1[1].d
        float temp0_399[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
        zmm14 = var_388_3
        zmm1 = _mm_sub_ps(zmm14, temp0_399)
        float temp0_401[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_401))
        uint128_t var_268_1 = zmm1
        float temp0_406[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_401), temp0_399)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        var_3a8 = zmm4
        float temp0_408[0x4] = _mm_cmpeq_ps(zmm7, zmm9, 5)
        
        if (temp0_398 != 0)
            zmm12 = zmm10
        
        zmm2 = __subps_xmmps_memps(zmm9, temp0_344)
        zmm1 = _mm_mul_ps(var_238_1, var_238_1)
        float temp0_411[0x4] = _mm_add_ps(temp0_406, zmm5)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_408, zmm3)) != 0)
            zmm8 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
        
        float temp0_415[0x4] = __subps_xmmps_memps(zmm14, var_288_2)
        zmm1 = _mm_add_ps(zmm1, zx.o(0))
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        float temp0_418[0x4] = _mm_blendv_ps(zmm8, zmm12, zmm0)
        var_398 = temp0_418
        zmm0 = _mm_cmpeq_ps(temp0_411, zmm14, 5)
        float temp0_420[0x4] = _mm_cmpeq_ps(temp0_411, zmm14, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_420, zmm3)) != 0)
            zmm12 = var_268_1
        
        float temp0_423[0x4] = _mm_add_ps(zmm1, zmm2)
        float temp0_424[0x4] = _mm_mul_ps(temp0_415, temp0_415)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm3)) != 0)
            zmm8 = __paddd_xmmdq_memdq(var_268_1, data_142d3f800)
        
        float temp0_428[0x4] = _mm_blendv_ps(zmm8, zmm12, temp0_420)
        float temp0_429[0x4] = _mm_add_ps(temp0_423, temp0_424)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_374), var_218_1)
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_418), temp0_376), temp0_372)
        zmm2 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_428), temp0_401), temp0_399)
        float temp0_439[0x4] = _mm_add_ps(var_228_1, zmm0)
        float temp0_440[0x4] = _mm_add_ps(temp0_394, zmm1)
        zmm5 = _mm_add_ps(zmm5, zmm2)
        zmm0 = _mm_sub_ps(var_2a8_2, temp0_439)
        zmm1 = _mm_sub_ps(zmm9, temp0_440)
        float temp0_444[0x4] = _mm_sub_ps(zmm14, zmm5)
        zmm0 = _mm_div_ps(zmm0, temp0_374)
        zmm1 = _mm_div_ps(zmm1, temp0_376)
        float temp0_447[0x4] = _mm_div_ps(temp0_444, temp0_401)
        var_368 = zmm0
        uint128_t var_358_4 = zmm1
        int64_t rcx = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm4 = _mm_cmpeq_epi32(zmm4, zmm0)
            
            if (_mm_movemask_ps(zmm4 & zmm3) != 0)
                char temp0_451 = _mm_movemask_ps(zmm4)
                
                if ((temp0_451 & 1) == 0)
                    if ((temp0_451 & 2) != 0)
                        goto label_1400bd46f
                    
                    goto label_1400bd3af
                
                *(&var_3a8 + (rcx << 2)) = 0
                
                if ((temp0_451 & 2) != 0)
                label_1400bd46f:
                    *(&var_3a8:4 + (rcx << 2)) = 0
                    
                    if ((temp0_451 & 4) == 0)
                        goto label_1400bd3b7
                    
                    goto label_1400bd47f
                
            label_1400bd3af:
                
                if ((temp0_451 & 4) == 0)
                label_1400bd3b7:
                    
                    if ((temp0_451 & 8) != 0)
                        goto label_1400bd48f
                    
                    goto label_1400bd3bf
                
            label_1400bd47f:
                *(&var_3a8:8 + (rcx << 2)) = 0
                
                if ((temp0_451 & 8) != 0)
                label_1400bd48f:
                    *(&var_3a8:0xc + (rcx << 2)) = 0
                    
                    if ((temp0_451 & 1) == 0)
                        goto label_1400bd3c7
                    
                    goto label_1400bd49f
                
            label_1400bd3bf:
                
                if ((temp0_451 & 1) == 0)
                label_1400bd3c7:
                    
                    if ((temp0_451 & 2) != 0)
                        goto label_1400bd4af
                    
                    goto label_1400bd3cf
                
            label_1400bd49f:
                var_368[rcx] = 0
                
                if ((temp0_451 & 2) != 0)
                label_1400bd4af:
                    var_368[1 + rcx] = 0
                    
                    if ((temp0_451 & 4) == 0)
                        goto label_1400bd3d7
                    
                    goto label_1400bd4bf
                
            label_1400bd3cf:
                
                if ((temp0_451 & 4) != 0)
                label_1400bd4bf:
                    var_368[2 + rcx] = 0
                    
                    if ((temp0_451 & 8) != 0)
                        var_368[3 + rcx] = 0
                else
                label_1400bd3d7:
                    
                    if ((temp0_451 & 8) != 0)
                        var_368[3 + rcx] = 0
            
            int32_t rdx_31 = *(arg4 + rcx)
            zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_31 - 1), 0), 
                *(&var_3a8 + (rcx << 2)))
            
            if (_mm_movemask_ps(zmm1 & zmm3) != 0)
                char temp0_455 = _mm_movemask_ps(zmm1)
                
                if ((temp0_455 & 1) == 0)
                    if ((temp0_455 & 2) != 0)
                        goto label_1400bd4eb
                    
                    goto label_1400bd41d
                
                *(&var_3a8 + (rcx << 2)) = rdx_31 - 2
                
                if ((temp0_455 & 2) != 0)
                label_1400bd4eb:
                    *(&var_3a8:4 + (rcx << 2)) = rdx_31 - 2
                    
                    if ((temp0_455 & 4) == 0)
                        goto label_1400bd425
                    
                    goto label_1400bd4f7
                
            label_1400bd41d:
                
                if ((temp0_455 & 4) == 0)
                label_1400bd425:
                    
                    if ((temp0_455 & 8) != 0)
                        goto label_1400bd503
                    
                    goto label_1400bd42d
                
            label_1400bd4f7:
                *(&var_3a8:8 + (rcx << 2)) = rdx_31 - 2
                
                if ((temp0_455 & 8) != 0)
                label_1400bd503:
                    *(&var_3a8:0xc + (rcx << 2)) = rdx_31 - 2
                    
                    if ((temp0_455 & 1) == 0)
                        goto label_1400bd435
                    
                    goto label_1400bd50f
                
            label_1400bd42d:
                
                if ((temp0_455 & 1) == 0)
                label_1400bd435:
                    
                    if ((temp0_455 & 2) != 0)
                        goto label_1400bd51f
                    
                    goto label_1400bd43d
                
            label_1400bd50f:
                var_368[rcx] = 0x3f800000
                
                if ((temp0_455 & 2) != 0)
                label_1400bd51f:
                    var_368[1 + rcx] = 0x3f800000
                    
                    if ((temp0_455 & 4) == 0)
                        goto label_1400bd445
                    
                    goto label_1400bd52f
                
            label_1400bd43d:
                
                if ((temp0_455 & 4) != 0)
                label_1400bd52f:
                    var_368[2 + rcx] = 0x3f800000
                    
                    if ((temp0_455 & 8) != 0)
                        var_368[3 + rcx] = 0x3f800000
                else
                label_1400bd445:
                    
                    if ((temp0_455 & 8) != 0)
                        var_368[3 + rcx] = 0x3f800000
            
            if (rcx == 8)
                break
            
            zmm4 = *(&var_398 + (rcx << 2))
            rcx += 4
        
        zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm4 = var_3a8
        zmm5 = var_398
        zmm12 = temp0_428
        zmm6 = _mm_mullo_epi32(zmm7, zmm4)
        zmm8 = _mm_add_epi32(zmm6, zmm5)
        zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm13 = _mm_mullo_epi32(zmm8, zmm0)
        zmm1 = _mm_add_epi32(zmm13, zmm12)
        uint128_t* rcx_1 = *(arg5 + 0x10)
        zmm1 = _mm_slli_epi32(zmm1, 2) & zmm3
        int64_t rax_39 = sx.q(zmm1.d)
        zmm2 = *(rcx_1 + rax_39)
        int64_t rdi_12 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rbx_15 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rbp_11 = sx.q(_mm_extract_epi32(zmm1, 3))
        zmm2 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rcx_1 + rdi_12), 0x10), 
                *(rcx_1 + rbx_15), 0x20), 
            *(rcx_1 + rbp_11), 0x30)
        zmm11 = _mm_cmpeq_epi32(temp0_401, temp0_401)
        zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm11), zmm7)
        zmm1 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm5), zmm0), zmm12), 2)
        zmm8 = _mm_mullo_epi32(_mm_add_epi32(zmm8, zmm7), zmm0)
        zmm1 &= zmm3
        zmm7 = *(rcx_1 + sx.q(zmm1.d))
        int32_t temp0_478 = _mm_extract_epi32(zmm1, 1)
        int64_t rbx_17 = sx.q(_mm_extract_epi32(zmm1, 2))
        int32_t temp0_480 = _mm_extract_epi32(zmm1, 3)
        float temp0_484[0x4] = _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rcx_1 + sx.q(temp0_478)), 0x10), 
                    *(rcx_1 + rbx_17), 0x20), 
                *(rcx_1 + sx.q(temp0_480)), 0x30), 
            zmm2)
        zmm10 = var_368
        zmm9 = var_358_4
        float temp0_486[0x4] = _mm_add_ps(_mm_mul_ps(temp0_484, zmm10), zmm2)
        zmm5 = _mm_sub_epi32(zmm5, zmm11)
        zmm6 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm5), zmm0), zmm12), 2) & zmm3
        zmm2 = *(rcx_1 + sx.q(zmm6[0]))
        int64_t rdx_38 = sx.q(_mm_extract_epi32(zmm6, 1))
        int32_t temp0_493 = _mm_extract_epi32(zmm6, 2)
        int64_t rbx_19 = sx.q(_mm_extract_epi32(zmm6, 3))
        zmm2 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rcx_1 + rdx_38), 0x10), 
                *(rcx_1 + sx.q(temp0_493)), 0x20), 
            *(rcx_1 + rbx_19), 0x30)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm4), zmm0), zmm12), 2) & zmm3
        zmm4 = *(rcx_1 + sx.q(zmm5.d))
        int32_t temp0_502 = _mm_extract_epi32(zmm5, 1)
        int64_t rbp_19 = sx.q(_mm_extract_epi32(zmm5, 2))
        int32_t temp0_504 = _mm_extract_epi32(zmm5, 3)
        float temp0_509[0x4] = _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm4, *(rcx_1 + sx.q(temp0_502)), 0x10), 
                        *(rcx_1 + rbp_19), 0x20), 
                    *(rcx_1 + sx.q(temp0_504)), 0x30), 
                zmm2), 
            zmm10)
        int32_t* rsi_17 = var_278.q
        int32_t* rdi_13 = var_308.q
        zmm5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(r15_1 + rcx_1 + rax_39), *(rax_18 + rcx_1 + rdi_12), 
                    0x10), 
                *(rsi_17 + rcx_1 + rbx_15), 0x20), 
            *(rdi_13 + rcx_1 + rbp_11), 0x30)
        zmm0 = _mm_add_epi32(zmm0, zmm12)
        zmm13 = _mm_add_epi32(zmm13, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm8)
        zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm12), 2) & zmm3
        zmm6 = *(r15_1 + sx.q(zmm8[0]) + rcx_1)
        void* rax_48 = sx.q(_mm_extract_epi32(zmm8, 1)) + rcx_1
        void* rdx_46 = sx.q(_mm_extract_epi32(zmm8, 2)) + rcx_1
        void* rbp_22 = sx.q(_mm_extract_epi32(zmm8, 3)) + rcx_1
        float temp0_523[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_18 + rax_48), 0x10), 
                *(rsi_17 + rdx_46), 0x20), 
            *(rdi_13 + rbp_22), 0x30)
        float temp0_524[0x4] = _mm_add_ps(temp0_509, zmm2)
        float temp0_527[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_523, zmm5), zmm10), zmm5)
        zmm13 = _mm_slli_epi32(zmm13, 2) & zmm3
        zmm2 = *(r15_1 + sx.q(zmm13[0]) + rcx_1)
        void* rax_54 = sx.q(_mm_extract_epi32(zmm13, 1)) + rcx_1
        void* rdx_49 = sx.q(_mm_extract_epi32(zmm13, 2)) + rcx_1
        void* rbp_25 = sx.q(_mm_extract_epi32(zmm13, 3)) + rcx_1
        zmm2 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rax_18 + rax_54), 0x10), 
                *(rsi_17 + rdx_49), 0x20), 
            *(rdi_13 + rbp_25), 0x30)
        zmm0 = _mm_slli_epi32(zmm0, 2) & zmm3
        zmm1 = *(r15_1 + sx.q(zmm0.d) + rcx_1)
        void* rax_60 = sx.q(_mm_extract_epi32(zmm0, 1)) + rcx_1
        void* rdx_52 = sx.q(_mm_extract_epi32(zmm0, 2)) + rcx_1
        void* rbp_28 = sx.q(_mm_extract_epi32(zmm0, 3)) + rcx_1
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rax_18 + rax_60), 0x10), 
                            *(rsi_17 + rdx_52), 0x20), 
                        *(rdi_13 + rbp_28), 0x30), 
                    zmm2), 
                zmm10), 
            zmm2)
        float temp0_547[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_524, temp0_486), zmm9), temp0_486)
        zmm1 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_527), zmm9), temp0_527), 
                    temp0_547), 
                temp0_447), 
            temp0_547)
        zmm2 = _mm_cmpeq_ps(temp0_429, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_429, 7), zmm2), zmm3)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm2 = _mm_rsqrt_ps(temp0_429)
            zmm5 = _mm_mul_ps(_mm_mul_ps(temp0_429, zmm2), zmm2)
            float temp0_564[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm2), data_142d3f640)
            zmm2 = _mm_rcp_ps(temp0_564)
            float temp0_566[0x4] = _mm_mul_ps(temp0_564, zmm2)
            zmm1 = _mm_blendv_ps(zmm1, 
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_566), zmm2), zmm1), zmm0)
        
        zmm0 = *arg9
        uint32_t i_4 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm3))
        
        if (i_4 == 0)
            return 0
        
        uint64_t i_2 = zx.q(i_4)
        result = 0
        
        do
            uint64_t rdx_53
            
            if (i_2 == 0)
                rdx_53 = 0x40
                i_2 &= 0xfffffffffffffffe
                
                if ((result.b & 1) == 0)
                label_1400bd951:
                    uint128_t var_208 = zmm1
                    uint64_t rdx_54 = zx.q(rdx_53.d) & 3
                    *arg9 = (*(&var_208 + (rdx_54 << 2))).d
                    uint128_t var_1f8 = var_248_1
                    *arg8 = *(&var_1f8 + (rdx_54 << 2))
            else
                uint64_t rflags_2
                rdx_53, rflags_2 = _bit_scan_forward(i_2)
                i_2 &= not.q(1 << (rdx_53 u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400bd951
            result.b = 1
        while (i_2 != 0)

return result
