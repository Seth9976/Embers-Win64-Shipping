// 函数: sub_1400b67c0
// 地址: 0x1400b67c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
uint128_t zmm7
uint128_t var_d8 = zmm7
uint128_t zmm6
uint128_t var_e8 = zmm6
float zmm2[0x4] = arg9
uint128_t zmm0 =
    __mulps_xmmps_memps(__insertps_xmmps_memd_immb(zx.o(*arg3), arg3[1].d, 0x20), data_142e6d9f0)
uint128_t zmm1 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
int32_t var_2c8 = zmm1.d
int32_t var_2c4 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_2c0 = __extractps_memd_xmmps_immb(zmm1, 2)
zmm1 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20), zmm0)
int32_t var_2d8 = zmm1.d
int32_t var_2d4 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_2d0 = __extractps_memd_xmmps_immb(zmm1, 2)
int32_t i = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
uint128_t var_368
uint128_t var_358
uint128_t var_328
float var_2e8_1[0x4]
uint128_t var_1f8
uint64_t r11
float zmm3[0x4]
float zmm4[0x4]
uint128_t zmm5
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]

if (i s<= 0)
    r11 = 0
    zmm10 = zx.o(0)
    zmm9 = zx.o(0)
    zmm8 = zx.o(0)
    var_2e8_1 = zx.o(0)
else
    float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    r11 = 0
    
    do
        float var_2a8[0x4]
        __builtin_memset(&var_2a8, 0, 0x30)
        zmm0 = __pmulld_xmmdq_memdq(*(arg8 + sx.q((r11 << 2).d)), data_142fc95c0)
        int64_t rax_4 = sx.q(zmm0.d)
        int64_t rdx_2 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rdi_2 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm5 = *(arg7 + (rax_4 << 2) + 4)
        zmm1 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(arg7 + (rax_4 << 2)), *(arg7 + (rdx_2 << 2)), 0x10), 
                *(arg7 + (rbp_2 << 2)), 0x20), 
            *(arg7 + (rdi_2 << 2)), 0x30)
        zmm5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm5, *(arg7 + (rdx_2 << 2) + 4), 0x10), 
                *(arg7 + (rbp_2 << 2) + 4), 0x20), 
            *(arg7 + (rdi_2 << 2) + 4), 0x30)
        float temp0_23[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(arg7 + (rax_4 << 2) + 8), *(arg7 + (rdx_2 << 2) + 8), 
                    0x10), 
                *(arg7 + (rbp_2 << 2) + 8), 0x20), 
            *(arg7 + (rdi_2 << 2) + 8), 0x30)
        var_328 = zmm1
        uint128_t var_318_1 = zmm5
        int128_t var_2f8_1
        __builtin_memset(&var_2f8_1, 0, 0x20)
        zmm0 = *(arg6 + 0xc)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
        var_368 = zmm0
        var_358 = zmm0
        uint128_t var_348_1 = zmm0
        uint128_t var_338_1 = zmm0
        zmm9 = *arg6
        zmm8 = *(arg6 + 4)
        zmm10 = *(arg6 + 8)
        float temp0_25[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_26[0x4] = _mm_mul_ps(temp0_23, temp0_25)
        float temp0_27[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        float temp0_28[0x4] = _mm_mul_ps(zmm1, temp0_27)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        zmm7 = _mm_mul_ps(zmm5, temp0_29)
        float temp0_32[0x4] = _mm_sub_ps(temp0_26, _mm_mul_ps(zmm5, temp0_27))
        float temp0_34[0x4] = _mm_sub_ps(temp0_28, _mm_mul_ps(temp0_23, temp0_29))
        zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_25))
        float temp0_37[0x4] = _mm_add_ps(temp0_32, temp0_32)
        float temp0_38[0x4] = _mm_add_ps(temp0_34, temp0_34)
        zmm7 = _mm_add_ps(zmm7, zmm7)
        float temp0_40[0x4] = _mm_mul_ps(zmm0, temp0_37)
        zmm5 = _mm_mul_ps(zmm0, temp0_38)
        float temp0_42[0x4] = __addps_xmmps_memps(temp0_40, var_328)
        zmm5 = __addps_xmmps_memps(zmm5, var_318_1)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), temp0_23)
        zmm6 = _mm_mul_ps(zmm7, temp0_25)
        float temp0_47[0x4] = _mm_mul_ps(temp0_37, temp0_27)
        zmm1 = _mm_mul_ps(temp0_38, temp0_29)
        zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_38, temp0_27)), temp0_42)
        float temp0_54[0x4] = _mm_add_ps(_mm_sub_ps(temp0_47, _mm_mul_ps(zmm7, temp0_29)), zmm5)
        zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_37, temp0_25)), zmm0)
        zmm3 = arg6[1].d
        zmm2 = *(arg6 + 0x14)
        float temp0_59[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm6)
        float temp0_61[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_54)
        zmm0 = *(arg6 + 0x18)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
        float var_198[0x4] = temp0_59
        float var_188[0x4] = temp0_61
        var_1f8 = zmm0
        uint128_t var_178_1 = zmm0
        int64_t rdi_3 = 0
        zmm0 = temp0_59
        zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
        
        while (true)
            zmm2 = *(&var_2c8 + rdi_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
            char temp0_67 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
            
            if (temp0_67 != 0)
                if ((temp0_67 & 1) == 0)
                    if ((temp0_67 & 2) != 0)
                        goto label_1400b6c2d
                    
                    goto label_1400b6b5d
                
                *(&var_368 + (rdi_3 << 2)) = zmm2[0]
                
                if ((temp0_67 & 2) != 0)
                label_1400b6c2d:
                    *(&var_368:4 + (rdi_3 << 2)) = zmm2[0]
                    
                    if ((temp0_67 & 4) == 0)
                        goto label_1400b6b65
                    
                    goto label_1400b6c3b
                
            label_1400b6b5d:
                
                if ((temp0_67 & 4) != 0)
                label_1400b6c3b:
                    *(&var_368:8 + (rdi_3 << 2)) = zmm2[0]
                    
                    if ((temp0_67 & 8) != 0)
                        *(&var_368:0xc + (rdi_3 << 2)) = zmm2[0]
                else
                label_1400b6b65:
                    
                    if ((temp0_67 & 8) != 0)
                        *(&var_368:0xc + (rdi_3 << 2)) = zmm2[0]
            
            zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
            
            if (_mm_movemask_ps(zmm1) != 0)
                zmm3 = *(&var_2d8 + rdi_3)
                float temp0_70[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                char temp0_73 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_70, 1), zmm1))
                
                if (temp0_73 != 0)
                    if ((temp0_73 & 1) == 0)
                        if ((temp0_73 & 2) != 0)
                            goto label_1400b6c5b
                        
                        goto label_1400b6bb2
                    
                    *(&var_368 + (rdi_3 << 2)) = zmm3[0]
                    
                    if ((temp0_73 & 2) != 0)
                    label_1400b6c5b:
                        *(&var_368:4 + (rdi_3 << 2)) = zmm3[0]
                        
                        if ((temp0_73 & 4) == 0)
                            goto label_1400b6bba
                        
                        goto label_1400b6c69
                    
                label_1400b6bb2:
                    
                    if ((temp0_73 & 4) != 0)
                    label_1400b6c69:
                        *(&var_368:8 + (rdi_3 << 2)) = zmm3[0]
                        
                        if ((temp0_73 & 8) != 0)
                            *(&var_368:0xc + (rdi_3 << 2)) = zmm3[0]
                    else
                    label_1400b6bba:
                        
                        if ((temp0_73 & 8) != 0)
                            *(&var_368:0xc + (rdi_3 << 2)) = zmm3[0]
                
                char temp0_76 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_70, 5), zmm1))
                
                if (temp0_76 != 0)
                    zmm0 = *(&var_198 + (rdi_3 << 2))
                    
                    if ((temp0_76 & 1) == 0)
                        if ((temp0_76 & 2) != 0)
                            goto label_1400b6c89
                        
                        goto label_1400b6bed
                    
                    *(&var_368 + (rdi_3 << 2)) = zmm0.d
                    
                    if ((temp0_76 & 2) != 0)
                    label_1400b6c89:
                        *(&var_368:4 + (rdi_3 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_76 & 4) == 0)
                            goto label_1400b6bf5
                        
                        goto label_1400b6c99
                    
                label_1400b6bed:
                    
                    if ((temp0_76 & 4) != 0)
                    label_1400b6c99:
                        *(&var_368:8 + (rdi_3 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((temp0_76 & 8) != 0)
                            *(&var_368:0xc + (rdi_3 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_1400b6bf5:
                        
                        if ((temp0_76 & 8) != 0)
                            *(&var_368:0xc + (rdi_3 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
            
            if (rdi_3 == 8)
                break
            
            zmm0 = *(&var_188 + (rdi_3 << 2))
            rdi_3 += 4
        
        zmm14 = var_368
        zmm10 = var_358
        zmm4 = *arg1
        zmm12 = *(arg1 + 4)
        float temp0_80[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm0 = _mm_sub_ps(zmm14, temp0_80)
        float temp0_82[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
        zmm7 = _mm_sub_ps(zmm10, temp0_82)
        zmm5 = arg1[1].d
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm1 = _mm_sub_ps(var_348_1, zmm5)
        zmm2 = *arg3
        float temp0_86[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_div_ps(zmm0, temp0_86)
        zmm13 = arg3[1].d
        zmm3 = _mm_cvttps_epi32(zmm0)
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_86), temp0_80)
        float temp0_93[0x4] =
            __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0)
        zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_94), zmm14, 1)
        zmm2 = _mm_add_epi32(zmm3, zmm6)
        zmm11 = zmm3
        zmm6 = _mm_blendv_ps(zmm2, zmm3, zmm0)
        zmm8 = *(arg3 + 4)
        float temp0_99[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm7 = _mm_div_ps(zmm7, temp0_99)
        float temp0_101[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
        zmm1 = _mm_div_ps(zmm1, temp0_101)
        zmm7 = _mm_cvttps_epi32(zmm7)
        zmm1 = _mm_cvttps_epi32(zmm1)
        float temp0_106[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_99)
        float temp0_108[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_101)
        float temp0_109[0x4] = _mm_add_ps(temp0_106, temp0_82)
        uint128_t var_258_1 = zmm5
        float temp0_110[0x4] = _mm_add_ps(temp0_108, zmm5)
        float temp0_111[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0x55)
        float temp0_112[0x4] = _mm_add_ps(temp0_109, temp0_111)
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0xaa)
        var_368 = zmm6
        zmm0 = _mm_cmpeq_ps(temp0_112, zmm10, 1)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm11 = zmm7
        
        float temp0_116[0x4] = _mm_add_ps(temp0_110, temp0_113)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_112, zmm10, 5)) != 0)
            zmm2 = __paddd_xmmdq_memdq(zmm7, data_142d3f800)
        
        float temp0_120[0x4] = __subps_xmmps_memps(zmm14, temp0_59)
        float temp0_121[0x4] = __subps_xmmps_memps(zmm10, temp0_61)
        zmm5 = zmm11
        zmm7 = _mm_blendv_ps(zmm2, zmm11, zmm0)
        var_358 = zmm7
        zmm11 = var_348_1
        zmm0 = _mm_cmpeq_ps(temp0_116, zmm11, 1)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm5 = zmm1
        
        float temp0_125[0x4] = __subps_xmmps_memps(zmm11, var_1f8)
        float temp0_126[0x4] = _mm_mul_ps(temp0_120, temp0_120)
        float temp0_127[0x4] = _mm_mul_ps(temp0_121, temp0_121)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_116, zmm11, 5)) != 0)
            zmm2 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
        
        float temp0_131[0x4] = _mm_blendv_ps(zmm2, zmm5, zmm0)
        float temp0_133[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_126, data_142d8f750), temp0_127)
        zmm5 = temp0_86
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), zmm5), temp0_80)
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_99), temp0_82)
        float temp0_142[0x4] =
            __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_131), temp0_101), var_258_1)
        zmm7 = _mm_add_ps(temp0_94, zmm0)
        float temp0_144[0x4] = _mm_add_ps(temp0_111, zmm1)
        float temp0_145[0x4] = _mm_add_ps(temp0_113, temp0_142)
        float temp0_146[0x4] = _mm_sub_ps(zmm14, zmm7)
        zmm0 = _mm_sub_ps(zmm10, temp0_144)
        float temp0_148[0x4] = _mm_sub_ps(zmm11, temp0_145)
        float temp0_149[0x4] = _mm_div_ps(temp0_146, zmm5)
        zmm0 = _mm_div_ps(zmm0, temp0_99)
        float temp0_151[0x4] = _mm_div_ps(temp0_148, temp0_101)
        var_328 = temp0_149
        uint128_t var_318_2 = zmm0
        float temp0_152[0x4] = _mm_mul_ps(temp0_125, temp0_125)
        int64_t rdi_4 = 0
        zmm4 = _mm_cmpeq_epi32(temp0_149, temp0_149)
        char j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm4))
        
        if (j == 0)
            goto label_1400b6f6c
        
        do
            if ((j & 1) == 0)
                if ((j & 2) != 0)
                    goto label_1400b6fff
                
                goto label_1400b6f38
            
            *(&var_368 + (rdi_4 << 2)) = 0
            
            if ((j & 2) != 0)
            label_1400b6fff:
                *(&var_368:4 + (rdi_4 << 2)) = 0
                
                if ((j & 4) == 0)
                    goto label_1400b6f40
                
                goto label_1400b700f
            
        label_1400b6f38:
            
            if ((j & 4) == 0)
            label_1400b6f40:
                
                if ((j & 8) != 0)
                    goto label_1400b701f
                
                goto label_1400b6f48
            
        label_1400b700f:
            *(&var_368:8 + (rdi_4 << 2)) = 0
            
            if ((j & 8) != 0)
            label_1400b701f:
                *(&var_368:0xc + (rdi_4 << 2)) = 0
                
                if ((j & 1) == 0)
                    goto label_1400b6f50
                
                goto label_1400b702f
            
        label_1400b6f48:
            
            if ((j & 1) == 0)
            label_1400b6f50:
                
                if ((j & 2) != 0)
                    goto label_1400b703f
                
                goto label_1400b6f58
            
        label_1400b702f:
            *(&var_328 + (rdi_4 << 2)) = 0
            
            if ((j & 2) != 0)
            label_1400b703f:
                *(&var_328:4 + (rdi_4 << 2)) = 0
                
                if ((j & 4) == 0)
                    goto label_1400b6f60
                
                goto label_1400b704f
            
        label_1400b6f58:
            
            if ((j & 4) != 0)
            label_1400b704f:
                *(&var_328:8 + (rdi_4 << 2)) = 0
                
                if ((j & 8) != 0)
                    *(&var_328:0xc + (rdi_4 << 2)) = 0
            else
            label_1400b6f60:
                
                if ((j & 8) != 0)
                    *(&var_328:0xc + (rdi_4 << 2)) = 0
            
        label_1400b6f6c:
            int32_t rdx_3 = *(arg4 + rdi_4)
            char temp0_160 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                _mm_shuffle_epi32(zx.o(rdx_3 - 1), 0), *(&var_368 + (rdi_4 << 2))))
            
            if (temp0_160 != 0)
                if ((temp0_160 & 1) == 0)
                    if ((temp0_160 & 2) != 0)
                        goto label_1400b707b
                    
                    goto label_1400b6f9e
                
                *(&var_368 + (rdi_4 << 2)) = rdx_3 - 2
                
                if ((temp0_160 & 2) != 0)
                label_1400b707b:
                    *(&var_368:4 + (rdi_4 << 2)) = rdx_3 - 2
                    
                    if ((temp0_160 & 4) == 0)
                        goto label_1400b6fa6
                    
                    goto label_1400b7087
                
            label_1400b6f9e:
                
                if ((temp0_160 & 4) == 0)
                label_1400b6fa6:
                    
                    if ((temp0_160 & 8) != 0)
                        goto label_1400b7093
                    
                    goto label_1400b6fae
                
            label_1400b7087:
                *(&var_368:8 + (rdi_4 << 2)) = rdx_3 - 2
                
                if ((temp0_160 & 8) != 0)
                label_1400b7093:
                    *(&var_368:0xc + (rdi_4 << 2)) = rdx_3 - 2
                    
                    if ((temp0_160 & 1) == 0)
                        goto label_1400b6fb6
                    
                    goto label_1400b709f
                
            label_1400b6fae:
                
                if ((temp0_160 & 1) == 0)
                label_1400b6fb6:
                    
                    if ((temp0_160 & 2) != 0)
                        goto label_1400b70af
                    
                    goto label_1400b6fbe
                
            label_1400b709f:
                *(&var_328 + (rdi_4 << 2)) = 0x3f800000
                
                if ((temp0_160 & 2) != 0)
                label_1400b70af:
                    *(&var_328:4 + (rdi_4 << 2)) = 0x3f800000
                    
                    if ((temp0_160 & 4) == 0)
                        goto label_1400b6fc6
                    
                    goto label_1400b70bf
                
            label_1400b6fbe:
                
                if ((temp0_160 & 4) != 0)
                label_1400b70bf:
                    *(&var_328:8 + (rdi_4 << 2)) = 0x3f800000
                    
                    if ((temp0_160 & 8) != 0)
                        *(&var_328:0xc + (rdi_4 << 2)) = 0x3f800000
                else
                label_1400b6fc6:
                    
                    if ((temp0_160 & 8) != 0)
                        *(&var_328:0xc + (rdi_4 << 2)) = 0x3f800000
            
            if (rdi_4 == 8)
                break
            
            zmm6 = *(&var_358 + (rdi_4 << 2))
            rdi_4 += 4
            j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm4))
        while (j != 0)
        
        float temp0_161[0x4] = _mm_add_ps(temp0_133, temp0_152)
        zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm1 = var_368
        zmm2 = var_358
        zmm5 = _mm_mullo_epi32(zmm7, zmm1)
        zmm13 = _mm_add_epi32(zmm5, zmm2)
        zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        zmm8 = _mm_mullo_epi32(zmm13, zmm0)
        zmm3 = _mm_add_epi32(zmm8, temp0_131)
        int32_t* rdi_5 = *(arg5 + 0x10)
        zmm3 = _mm_slli_epi32(zmm3, 2)
        int64_t rsi_1 = sx.q(zmm3[0])
        int64_t rax_22 = sx.q(_mm_extract_epi32(zmm3, 1))
        int64_t rdx_6 = sx.q(_mm_extract_epi32(zmm3, 2))
        int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm3, 3))
        float temp0_174[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rdi_5 + rsi_1), *(rdi_5 + rax_22), 0x10), 
                *(rdi_5 + rdx_6), 0x20), 
            *(rdi_5 + rbp_4), 0x30)
        zmm12 = *(rdi_5 + rsi_1 + 4)
        zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm4), zmm7)
        zmm6 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm2), zmm0), temp0_131), 2)
        zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm7), zmm0)
        zmm7 = *(rdi_5 + sx.q(zmm6.d))
        int32_t temp0_183 = _mm_extract_epi32(zmm6, 1)
        int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm6, 2))
        int32_t temp0_185 = _mm_extract_epi32(zmm6, 3)
        zmm7 = _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rdi_5 + sx.q(temp0_183)), 0x10), 
                    *(rdi_5 + rbx_2), 0x20), 
                *(rdi_5 + sx.q(temp0_185)), 0x30), 
            temp0_174)
        zmm9 = var_328
        zmm2 = _mm_sub_epi32(zmm2, zmm4)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm2), zmm0), temp0_131), 2)
        int32_t temp0_195 = _mm_extract_epi32(zmm5, 1)
        int32_t temp0_196 = _mm_extract_epi32(zmm5, 2)
        zmm4 = *(rdi_5 + sx.q(zmm5.d))
        int32_t temp0_197 = _mm_extract_epi32(zmm5, 3)
        zmm10 = var_318_2
        zmm7 = _mm_mul_ps(zmm7, zmm9)
        float temp0_201[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm4, *(rdi_5 + sx.q(temp0_195)), 0x10), 
                *(rdi_5 + sx.q(temp0_196)), 0x20), 
            *(rdi_5 + sx.q(temp0_197)), 0x30)
        zmm2 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm1), zmm0), temp0_131), 2)
        zmm6 = *(rdi_5 + sx.q(zmm2[0]))
        int64_t r15_4 = sx.q(_mm_extract_epi32(zmm2, 1))
        int32_t temp0_207 = _mm_extract_epi32(zmm2, 2)
        int64_t rsi_15 = sx.q(_mm_extract_epi32(zmm2, 3))
        zmm6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rdi_5 + r15_4), 0x10), 
                *(rdi_5 + sx.q(temp0_207)), 0x20), 
            *(rdi_5 + rsi_15), 0x30)
        zmm7 = _mm_add_ps(zmm7, temp0_174)
        zmm6 = _mm_sub_ps(zmm6, temp0_201)
        float temp0_216[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm12, *(rdi_5 + rax_22 + 4), 0x10), 
                *(rdi_5 + rdx_6 + 4), 0x20), 
            *(rdi_5 + rbp_4 + 4), 0x30)
        zmm6 = _mm_mul_ps(zmm6, zmm9)
        zmm0 = _mm_add_epi32(zmm0, temp0_131)
        zmm8 = _mm_add_epi32(zmm8, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm13)
        zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, temp0_131), 2)
        zmm2 = *(rdi_5 + sx.q(zmm13[0]) + 4)
        int64_t rax_26 = sx.q(_mm_extract_epi32(zmm13, 1))
        int32_t temp0_224 = _mm_extract_epi32(zmm13, 2)
        int64_t rsi_17 = sx.q(_mm_extract_epi32(zmm13, 3))
        float temp0_228[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm2, *(rdi_5 + rax_26 + 4), 0x10), 
                *(rdi_5 + sx.q(temp0_224) + 4), 0x20), 
            *(rdi_5 + rsi_17 + 4), 0x30)
        zmm6 = _mm_add_ps(zmm6, temp0_201)
        float temp0_232[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_228, temp0_216), zmm9), temp0_216)
        zmm8 = _mm_slli_epi32(zmm8, 2)
        zmm3 = *(rdi_5 + sx.q(zmm8[0]) + 4)
        int32_t temp0_234 = _mm_extract_epi32(zmm8, 1)
        int64_t rdx_10 = sx.q(_mm_extract_epi32(zmm8, 2))
        int32_t temp0_236 = _mm_extract_epi32(zmm8, 3)
        float temp0_239[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm3, *(rdi_5 + sx.q(temp0_234) + 4), 0x10), 
                *(rdi_5 + rdx_10 + 4), 0x20), 
            *(rdi_5 + sx.q(temp0_236) + 4), 0x30)
        zmm0 = _mm_slli_epi32(zmm0, 2)
        int32_t temp0_241 = _mm_extract_epi32(zmm0, 1)
        zmm1 = *(rdi_5 + sx.q(zmm0.d) + 4)
        int64_t rdx_13 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rsi_20 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rdi_5 + sx.q(temp0_241) + 4), 0x10), 
                            *(rdi_5 + rdx_13 + 4), 0x20), 
                        *(rdi_5 + rsi_20 + 4), 0x30), 
                    temp0_239), 
                zmm9), 
            temp0_239)
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm7), zmm10), zmm7)
        zmm1 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_232), zmm10), temp0_232), 
                    zmm6), 
                temp0_151), 
            zmm6)
        float temp0_259[0x4] = _mm_cmpeq_ps(temp0_161, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_161, zx.o(0), 7), temp0_259)
        
        if (_mm_movemask_ps(zmm0) != 0)
            float temp0_263[0x4] = _mm_rsqrt_ps(temp0_161)
            float temp0_265[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_161, temp0_263), temp0_263)
            float temp0_268[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_265), temp0_263), data_142d3f640)
            float temp0_269[0x4] = _mm_rcp_ps(temp0_268)
            float temp0_270[0x4] = _mm_mul_ps(temp0_268, temp0_269)
            zmm1 = _mm_blendv_ps(zmm1, 
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_270), temp0_269), zmm1), 
                zmm0)
        
        float var_288[0x4]
        zmm8 = var_288
        float var_298[0x4]
        zmm9 = var_298
        zmm10 = var_2a8
        zmm1 = __subps_xmmps_memps(zmm1, temp0_10)
        zmm0 = __cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1)
        char temp0_277 = _mm_movemask_ps(zmm0)
        
        if (temp0_277 != 0)
            zmm7 = _mm_mul_ps(var_198, zmm1)
            zmm6 = _mm_mul_ps(var_188, zmm1)
            zmm5 = _mm_mul_ps(var_178_1, zmm1)
            zmm4 = zmm8
            char temp1_1 = temp0_277 & 1
            
            if (temp1_1 == 0)
                zmm3 = zmm9
                
                if (temp1_1 != 0)
                    goto label_1400b751e
                
                goto label_1400b74ab
            
            zmm4 = zmm8
            zmm4[0] = zmm4[0] f+ zmm7.d
            zmm3 = zmm9
            
            if (temp1_1 != 0)
            label_1400b751e:
                zmm3 = zmm9
                zmm3[0] = zmm3[0] f+ zmm6.d
                zmm2 = zmm10
                
                if (temp1_1 == 0)
                    goto label_1400b74b1
                
                goto label_1400b752c
            
        label_1400b74ab:
            zmm2 = zmm10
            bool cond:8_1
            bool cond:9_1
            bool cond:12_1
            bool cond:13_1
            
            if (temp1_1 == 0)
            label_1400b74b1:
                zmm8 = _mm_add_ps(zmm8, zmm7)
                char temp4_1 = temp0_277 & 2
                cond:8_1 = temp4_1 != 0
                cond:9_1 = temp4_1 == 0
                cond:12_1 = temp4_1 == 0
                cond:13_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                    goto label_1400b7540
                
                goto label_1400b74bd
            
        label_1400b752c:
            zmm2 = zmm10
            zmm2[0] = zmm2[0] f+ zmm5.d
            zmm8 = _mm_add_ps(zmm8, zmm7)
            char temp3_1 = temp0_277 & 2
            cond:8_1 = temp3_1 != 0
            cond:9_1 = temp3_1 == 0
            cond:12_1 = temp3_1 == 0
            cond:13_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
            label_1400b7540:
                zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                zmm9 = _mm_add_ps(zmm9, zmm6)
                
                if (cond:9_1)
                    goto label_1400b74c7
                
                goto label_1400b7551
            
        label_1400b74bd:
            zmm9 = _mm_add_ps(zmm9, zmm6)
            
            if (not(cond:8_1))
            label_1400b74c7:
                zmm10 = _mm_add_ps(zmm10, zmm5)
                
                if (cond:13_1)
                    goto label_1400b7562
                
                goto label_1400b74d1
            
        label_1400b7551:
            zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
            zmm10 = _mm_add_ps(zmm10, zmm5)
            bool cond:16_1
            bool cond:17_1
            bool cond:20_1
            bool cond:21_1
            
            if (not(cond:12_1))
            label_1400b7562:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                char temp8_1 = temp0_277 & 4
                cond:16_1 = temp8_1 == 0
                cond:17_1 = temp8_1 != 0
                cond:20_1 = temp8_1 != 0
                cond:21_1 = temp8_1 == 0
                
                if (temp8_1 == 0)
                    goto label_1400b74d9
                
                goto label_1400b7571
            
        label_1400b74d1:
            char temp7_1 = temp0_277 & 4
            cond:16_1 = temp7_1 == 0
            cond:17_1 = temp7_1 != 0
            cond:20_1 = temp7_1 != 0
            cond:21_1 = temp7_1 == 0
            
            if (temp7_1 != 0)
            label_1400b7571:
                zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                
                if (not(cond:16_1))
                label_1400b757e:
                    zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                    
                    if (cond:21_1)
                        goto label_1400b74e5
                    
                    goto label_1400b758b
            else
            label_1400b74d9:
                
                if (cond:17_1)
                    goto label_1400b757e
            
            bool cond:24_1
            bool cond:25_1
            bool cond:28_1
            bool cond:29_1
            
            if (not(cond:20_1))
            label_1400b74e5:
                char temp12_1 = temp0_277 & 8
                cond:24_1 = temp12_1 != 0
                cond:25_1 = temp12_1 == 0
                cond:28_1 = temp12_1 == 0
                cond:29_1 = temp12_1 != 0
                
                if (temp12_1 == 0)
                    goto label_1400b759a
                
                goto label_1400b74ed
            
        label_1400b758b:
            zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
            char temp11_1 = temp0_277 & 8
            cond:24_1 = temp11_1 != 0
            cond:25_1 = temp11_1 == 0
            cond:28_1 = temp11_1 == 0
            cond:29_1 = temp11_1 != 0
            
            if (temp11_1 == 0)
            label_1400b759a:
                zmm8 = zmm4
                
                if (cond:25_1)
                    goto label_1400b74fa
                
                goto label_1400b75a4
            
        label_1400b74ed:
            zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
            
            if (cond:24_1)
            label_1400b75a4:
                zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                
                if (not(cond:28_1))
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
            else
            label_1400b74fa:
                zmm9 = zmm3
                
                if (cond:29_1)
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
            
            var_2e8_1 = _mm_blendv_ps(var_2e8_1, _mm_add_ps(zmm1, var_2e8_1), zmm0)
            zmm10 = zmm2
        
        r11 = zx.q(r11.d + 4)
    while (r11.d s< i)

int64_t* rdx_41 = arg11
int32_t* result = arg10

if (r11.d s< arg12)
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r11.d), 0), data_142e11d00)
    zmm6 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg12), 0), zmm0)
    int64_t rax_38 = sx.q(r11.d << 2)
    uint32_t temp0_302 = _mm_movemask_ps(zmm6)
    float var_288_1[0x4] = zmm8
    float var_298_1[0x4] = zmm9
    float var_2a8_1[0x4] = zmm10
    
    if ((zx.q(temp0_302) & 0xfffffff9) != 9)
        if ((temp0_302.b & 1) == 0)
            if ((temp0_302.b & 2) != 0)
                goto label_1400b85e0
            
            goto label_1400b7689
        
        var_368.d = *(arg8 + rax_38)
        
        if ((temp0_302.b & 2) != 0)
        label_1400b85e0:
            var_368:4.d = *(arg8 + rax_38 + 4)
            
            if ((temp0_302.b & 4) == 0)
                goto label_1400b7692
            
            goto label_1400b85f9
        
    label_1400b7689:
        
        if ((temp0_302.b & 4) != 0)
        label_1400b85f9:
            var_368:8.d = *(arg8 + rax_38 + 8)
            
            if ((temp0_302.b & 8) != 0)
                var_368:0xc.d = *(arg8 + rax_38 + 0xc)
        else
        label_1400b7692:
            
            if ((temp0_302.b & 8) != 0)
                var_368:0xc.d = *(arg8 + rax_38 + 0xc)
        
        zmm1 = var_368
    else
        zmm1 = *(arg8 + rax_38)
    
    zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm6
    int64_t rax_41 = sx.q(zmm1.d)
    int64_t r10_4 = arg7 + (rax_41 << 2)
    zmm0 = *(arg7 + (rax_41 << 2))
    int64_t rbp_6 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rax_43 = arg7 + (rbp_6 << 2)
    int64_t rbx_8 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rdx_19 = arg7 + (rbx_8 << 2)
    int64_t rsi_21 = sx.q(_mm_extract_epi32(zmm1, 3))
    int64_t rdi_7 = arg7 + (rsi_21 << 2)
    zmm0 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, *(arg7 + (rbp_6 << 2)), 0x10), 
            *(arg7 + (rbx_8 << 2)), 0x20), 
        *(arg7 + (rsi_21 << 2)), 0x30)
    zmm2 = data_142fc95e0 & zmm6
    uint64_t r14_1 = zx.q(zmm2[0])
    zmm8 = *(r14_1 + r10_4)
    uint64_t rsi_22 = zx.q(_mm_extract_epi32(zmm2, 1))
    uint64_t r15_5 = zx.q(_mm_extract_epi32(zmm2, 2))
    uint64_t r11_2 = zx.q(_mm_extract_epi32(zmm2, 3))
    var_1f8.q = rsi_22
    float temp0_315[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rsi_22 + rax_43), 0x10), 
            *(r15_5 + rdx_19), 0x20), 
        *(r11_2 + rdi_7), 0x30)
    zmm2 = data_142fc95f0 & zmm6
    zmm5 = *(zx.q(zmm2[0]) + r10_4)
    uint64_t rsi_24 = zx.q(_mm_extract_epi32(zmm2, 1))
    uint64_t rbx_9 = zx.q(_mm_extract_epi32(zmm2, 2))
    uint64_t rbp_7 = zx.q(_mm_extract_epi32(zmm2, 3))
    zmm5 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rsi_24 + rax_43), 0x10), 
            *(rbx_9 + rdx_19), 0x20), 
        *(rbp_7 + rdi_7), 0x30)
    uint128_t var_168_1 = zmm0
    uint128_t var_148_1 = zmm5
    float var_138_1[0x4] = zx.o(0)
    zmm4 = *(arg6 + 0xc)
    float temp0_322[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    var_368 = temp0_322
    var_358 = temp0_322
    zmm7 = *arg6
    zmm1 = *(arg6 + 4)
    zmm3 = *(arg6 + 8)
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_325[0x4] = _mm_mul_ps(temp0_315, zmm7)
    zmm7 = _mm_mul_ps(zmm7, zmm5)
    zmm5 = _mm_mul_ps(zmm5, zmm1)
    float temp0_328[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm1 = _mm_mul_ps(zmm1, zmm0)
    zmm0 = _mm_mul_ps(zmm0, temp0_328)
    float temp0_331[0x4] = _mm_mul_ps(zx.o(0), temp0_322)
    zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(temp0_328, temp0_315))
    zmm0 = _mm_sub_ps(zmm0, zmm7)
    float temp0_335[0x4] = _mm_sub_ps(temp0_325, zmm1)
    float temp0_336[0x4] = _mm_sub_ps(temp0_331, temp0_331)
    zmm5 = _mm_add_ps(zmm5, zmm5)
    zmm0 = _mm_add_ps(zmm0, zmm0)
    float temp0_339[0x4] = _mm_add_ps(temp0_335, temp0_335)
    float temp0_340[0x4] = _mm_add_ps(temp0_336, temp0_336)
    var_328 = zmm5
    uint128_t var_318_3 = zmm0
    float var_308_3[0x4] = temp0_339
    float var_2f8_2[0x4] = temp0_340
    float temp0_341[0x4] = _mm_mul_ps(temp0_340, temp0_322)
    zmm1 = _mm_mul_ps(temp0_322, zmm5)
    float temp0_343[0x4] = _mm_mul_ps(temp0_322, zmm0)
    float temp0_344[0x4] = _mm_mul_ps(temp0_322, temp0_339)
    zmm1 = __addps_xmmps_memps(zmm1, var_168_1)
    float temp0_346[0x4] = __addps_xmmps_memps(temp0_343, temp0_315)
    float temp0_347[0x4] = __addps_xmmps_memps(temp0_344, var_148_1)
    float var_338_2[0x4] = temp0_322
    uint128_t var_128_1 = zmm1
    float var_118_1[0x4] = temp0_346
    float var_108_1[0x4] = temp0_347
    float var_f8_1[0x4] = __addps_xmmps_memps(temp0_341, var_138_1)
    zmm3 = *arg6
    zmm4 = *(arg6 + 4)
    zmm7 = *(arg6 + 8)
    float temp0_349[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_350[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    float temp0_351[0x4] = _mm_mul_ps(zmm0, temp0_350)
    float temp0_352[0x4] = _mm_mul_ps(temp0_350, temp0_339)
    float temp0_353[0x4] = _mm_mul_ps(temp0_339, temp0_349)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_355[0x4] = _mm_mul_ps(temp0_349, zmm5)
    zmm5 = _mm_mul_ps(zmm5, zmm7)
    float temp0_358[0x4] = _mm_sub_ps(temp0_353, _mm_mul_ps(zmm7, zmm0))
    zmm5 = _mm_sub_ps(zmm5, temp0_352)
    float temp0_360[0x4] = _mm_sub_ps(temp0_351, temp0_355)
    float temp0_361[0x4] = _mm_add_ps(temp0_358, zmm1)
    zmm5 = _mm_add_ps(zmm5, temp0_346)
    float temp0_363[0x4] = _mm_add_ps(temp0_360, temp0_347)
    zmm0 = arg6[1].d
    zmm3 = *(arg6 + 0x14)
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_361)
    float temp0_367[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm5)
    zmm1 = *(arg6 + 0x18)
    zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_363)
    uint128_t var_1c8 = zmm0
    float var_1b8[0x4] = temp0_367
    uint128_t var_208_2 = zmm1
    uint128_t var_1a8_1 = zmm1
    int64_t rax_44 = 0
    zmm1 = zmm0
    
    while (true)
        zmm3 = *(&var_2c8 + rax_44)
        float temp0_370[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_371[0x4] = _mm_cmpeq_ps(temp0_370, zmm1, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_371, zmm6)) != 0)
            char temp0_374 = _mm_movemask_ps(temp0_371)
            
            if ((temp0_374 & 1) == 0)
                if ((temp0_374 & 2) != 0)
                    goto label_1400b7a6e
                
                goto label_1400b7985
            
            *(&var_368 + (rax_44 << 2)) = zmm3[0]
            
            if ((temp0_374 & 2) != 0)
            label_1400b7a6e:
                *(&var_368:4 + (rax_44 << 2)) = zmm3[0]
                
                if ((temp0_374 & 4) == 0)
                    goto label_1400b798e
                
                goto label_1400b7a7d
            
        label_1400b7985:
            
            if ((temp0_374 & 4) != 0)
            label_1400b7a7d:
                *(&var_368:8 + (rax_44 << 2)) = zmm3[0]
                
                if ((temp0_374 & 8) != 0)
                    *(&var_368:0xc + (rax_44 << 2)) = zmm3[0]
            else
            label_1400b798e:
                
                if ((temp0_374 & 8) != 0)
                    *(&var_368:0xc + (rax_44 << 2)) = zmm3[0]
        
        float temp0_375[0x4] = _mm_cmpeq_ps(temp0_370, zmm1, 5)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm6, temp0_375)) != 0)
            zmm4 = *(&var_2d8 + rax_44)
            float temp0_378[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_378, 1), temp0_375)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm6)) != 0)
                char temp0_383 = _mm_movemask_ps(zmm5)
                
                if ((temp0_383 & 1) == 0)
                    if ((temp0_383 & 2) != 0)
                        goto label_1400b7a9f
                    
                    goto label_1400b79ea
                
                *(&var_368 + (rax_44 << 2)) = zmm4[0]
                
                if ((temp0_383 & 2) != 0)
                label_1400b7a9f:
                    *(&var_368:4 + (rax_44 << 2)) = zmm4[0]
                    
                    if ((temp0_383 & 4) == 0)
                        goto label_1400b79f3
                    
                    goto label_1400b7aae
                
            label_1400b79ea:
                
                if ((temp0_383 & 4) != 0)
                label_1400b7aae:
                    *(&var_368:8 + (rax_44 << 2)) = zmm4[0]
                    
                    if ((temp0_383 & 8) != 0)
                        *(&var_368:0xc + (rax_44 << 2)) = zmm4[0]
                else
                label_1400b79f3:
                    
                    if ((temp0_383 & 8) != 0)
                        *(&var_368:0xc + (rax_44 << 2)) = zmm4[0]
            
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_378, 5), temp0_375)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm6)) != 0)
                zmm2 = *(&var_1c8 + (rax_44 << 2))
                char temp0_388 = _mm_movemask_ps(zmm1)
                
                if ((temp0_388 & 1) == 0)
                    if ((temp0_388 & 2) != 0)
                        goto label_1400b7ad0
                    
                    goto label_1400b7a2f
                
                *(&var_368 + (rax_44 << 2)) = zmm2[0]
                
                if ((temp0_388 & 2) != 0)
                label_1400b7ad0:
                    *(&var_368:4 + (rax_44 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                    
                    if ((temp0_388 & 4) == 0)
                        goto label_1400b7a38
                    
                    goto label_1400b7ae1
                
            label_1400b7a2f:
                
                if ((temp0_388 & 4) != 0)
                label_1400b7ae1:
                    *(&var_368:8 + (rax_44 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                    
                    if ((temp0_388 & 8) != 0)
                        *(&var_368:0xc + (rax_44 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
                else
                label_1400b7a38:
                    
                    if ((temp0_388 & 8) != 0)
                        *(&var_368:0xc + (rax_44 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
        
        if (rax_44 == 8)
            break
        
        zmm1 = *(&var_1b8 + (rax_44 << 2))
        rax_44 += 4
    
    zmm7 = var_368
    zmm11 = var_358
    float temp0_392[0x4] = _mm_sub_ps(zmm7, zmm0)
    zmm5 = *arg1
    zmm2 = *(arg1 + 4)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm0 = _mm_sub_ps(zmm7, zmm5)
    float temp0_395[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = _mm_sub_ps(zmm11, temp0_395)
    zmm3 = *arg3
    zmm4 = *(arg3 + 4)
    float temp0_397[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm0 = _mm_div_ps(zmm0, temp0_397)
    float temp0_399[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm1 = _mm_div_ps(zmm1, temp0_399)
    zmm12 = arg3[1].d
    zmm13 = _mm_cvttps_epi32(zmm0)
    zmm9 = _mm_cvttps_epi32(zmm1)
    uint128_t var_268_2 = zmm5
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), temp0_397), zmm5)
    zmm5 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm12, 0x20), data_142fc9600)
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0)
    uint128_t var_278_2 = zmm1
    uint128_t var_218_2 = zmm7
    zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm7, 1)
    zmm7 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
    zmm3 = _mm_blendv_ps(zmm7, zmm13, zmm0)
    float var_1d8_1[0x4] = zmm9
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_399), temp0_395)
    float temp0_417[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    zmm0 = _mm_add_ps(zmm0, temp0_417)
    zmm2 = zmm0
    zmm0 = _mm_cmpeq_ps(zmm0, zmm11, 1)
    char temp0_421 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm6))
    zmm9 = arg1[1].d
    float temp0_422[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    zmm1 = _mm_sub_ps(temp0_322, temp0_422)
    float temp0_424[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
    zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_424))
    float var_1e8_1[0x4] = zmm1
    float temp0_429[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_424), temp0_422)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
    var_368 = zmm3
    float temp0_431[0x4] = _mm_cmpeq_ps(zmm2, zmm11, 5)
    
    if (temp0_421 != 0)
        zmm13 = var_1d8_1
    
    float temp0_432[0x4] = __subps_xmmps_memps(zmm11, temp0_367)
    float temp0_433[0x4] = _mm_mul_ps(temp0_392, temp0_392)
    float temp0_434[0x4] = _mm_add_ps(temp0_429, zmm5)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_431, zmm6)) != 0)
        zmm7 = __paddd_xmmdq_memdq(var_1d8_1, data_142d3f800)
    
    float temp0_438[0x4] = __subps_xmmps_memps(temp0_322, var_208_2)
    zmm1 = _mm_add_ps(temp0_433, zx.o(0))
    float temp0_440[0x4] = _mm_mul_ps(temp0_432, temp0_432)
    float temp0_441[0x4] = _mm_blendv_ps(zmm7, zmm13, zmm0)
    var_358 = temp0_441
    zmm0 = _mm_cmpeq_ps(temp0_434, temp0_322, 5)
    float temp0_443[0x4] = _mm_cmpeq_ps(temp0_434, temp0_322, 1)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_443, zmm6)) != 0)
        zmm13 = var_1e8_1
    
    float temp0_446[0x4] = _mm_add_ps(zmm1, temp0_440)
    float temp0_447[0x4] = _mm_mul_ps(temp0_438, temp0_438)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm6)) != 0)
        zmm7 = __paddd_xmmdq_memdq(var_1e8_1, data_142d3f800)
    
    zmm7 = _mm_blendv_ps(zmm7, zmm13, temp0_443)
    float temp0_452[0x4] = _mm_add_ps(temp0_446, temp0_447)
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_397), var_268_2)
    zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_441), temp0_399), temp0_395)
    uint128_t var_348_4 = zmm7
    float temp0_461[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_424), temp0_422)
    zmm7 = _mm_add_ps(var_278_2, zmm0)
    float temp0_463[0x4] = _mm_add_ps(temp0_417, zmm1)
    zmm5 = _mm_add_ps(zmm5, temp0_461)
    zmm0 = _mm_sub_ps(var_218_2, zmm7)
    zmm1 = _mm_sub_ps(zmm11, temp0_463)
    float temp0_467[0x4] = _mm_sub_ps(temp0_322, zmm5)
    zmm0 = _mm_div_ps(zmm0, temp0_397)
    zmm1 = _mm_div_ps(zmm1, temp0_399)
    float temp0_470[0x4] = _mm_div_ps(temp0_467, temp0_424)
    var_328 = zmm0
    uint128_t var_318_4 = zmm1
    int64_t rax_49 = 0
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
    
    while (true)
        zmm3 = _mm_cmpeq_epi32(zmm3, zmm0)
        
        if (_mm_movemask_ps(zmm3 & zmm6) != 0)
            char temp0_474 = _mm_movemask_ps(zmm3)
            
            if ((temp0_474 & 1) == 0)
                if ((temp0_474 & 2) != 0)
                    goto label_1400b7e90
                
                goto label_1400b7dc1
            
            *(&var_368 + (rax_49 << 2)) = 0
            
            if ((temp0_474 & 2) != 0)
            label_1400b7e90:
                *(&var_368:4 + (rax_49 << 2)) = 0
                
                if ((temp0_474 & 4) == 0)
                    goto label_1400b7dca
                
                goto label_1400b7ea1
            
        label_1400b7dc1:
            
            if ((temp0_474 & 4) == 0)
            label_1400b7dca:
                
                if ((temp0_474 & 8) != 0)
                    goto label_1400b7eb2
                
                goto label_1400b7dd3
            
        label_1400b7ea1:
            *(&var_368:8 + (rax_49 << 2)) = 0
            
            if ((temp0_474 & 8) != 0)
            label_1400b7eb2:
                *(&var_368:0xc + (rax_49 << 2)) = 0
                
                if ((temp0_474 & 1) == 0)
                    goto label_1400b7ddc
                
                goto label_1400b7ec3
            
        label_1400b7dd3:
            
            if ((temp0_474 & 1) == 0)
            label_1400b7ddc:
                
                if ((temp0_474 & 2) != 0)
                    goto label_1400b7ed4
                
                goto label_1400b7de5
            
        label_1400b7ec3:
            *(&var_328 + (rax_49 << 2)) = 0
            
            if ((temp0_474 & 2) != 0)
            label_1400b7ed4:
                *(&var_328:4 + (rax_49 << 2)) = 0
                
                if ((temp0_474 & 4) == 0)
                    goto label_1400b7dee
                
                goto label_1400b7ee5
            
        label_1400b7de5:
            
            if ((temp0_474 & 4) != 0)
            label_1400b7ee5:
                *(&var_328:8 + (rax_49 << 2)) = 0
                
                if ((temp0_474 & 8) != 0)
                    *(&var_328:0xc + (rax_49 << 2)) = 0
            else
            label_1400b7dee:
                
                if ((temp0_474 & 8) != 0)
                    *(&var_328:0xc + (rax_49 << 2)) = 0
        
        int32_t rdx_27 = *(arg4 + rax_49)
        zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_27 - 1), 0), 
            *(&var_368 + (rax_49 << 2)))
        
        if (_mm_movemask_ps(zmm1 & zmm6) != 0)
            char temp0_478 = _mm_movemask_ps(zmm1)
            
            if ((temp0_478 & 1) == 0)
                if ((temp0_478 & 2) != 0)
                    goto label_1400b7f0c
                
                goto label_1400b7e37
            
            *(&var_368 + (rax_49 << 2)) = rdx_27 - 2
            
            if ((temp0_478 & 2) != 0)
            label_1400b7f0c:
                *(&var_368:4 + (rax_49 << 2)) = rdx_27 - 2
                
                if ((temp0_478 & 4) == 0)
                    goto label_1400b7e40
                
                goto label_1400b7f19
            
        label_1400b7e37:
            
            if ((temp0_478 & 4) == 0)
            label_1400b7e40:
                
                if ((temp0_478 & 8) != 0)
                    goto label_1400b7f26
                
                goto label_1400b7e49
            
        label_1400b7f19:
            *(&var_368:8 + (rax_49 << 2)) = rdx_27 - 2
            
            if ((temp0_478 & 8) != 0)
            label_1400b7f26:
                *(&var_368:0xc + (rax_49 << 2)) = rdx_27 - 2
                
                if ((temp0_478 & 1) == 0)
                    goto label_1400b7e52
                
                goto label_1400b7f33
            
        label_1400b7e49:
            
            if ((temp0_478 & 1) == 0)
            label_1400b7e52:
                
                if ((temp0_478 & 2) != 0)
                    goto label_1400b7f44
                
                goto label_1400b7e5b
            
        label_1400b7f33:
            *(&var_328 + (rax_49 << 2)) = 0x3f800000
            
            if ((temp0_478 & 2) != 0)
            label_1400b7f44:
                *(&var_328:4 + (rax_49 << 2)) = 0x3f800000
                
                if ((temp0_478 & 4) == 0)
                    goto label_1400b7e64
                
                goto label_1400b7f55
            
        label_1400b7e5b:
            
            if ((temp0_478 & 4) != 0)
            label_1400b7f55:
                *(&var_328:8 + (rax_49 << 2)) = 0x3f800000
                
                if ((temp0_478 & 8) != 0)
                    *(&var_328:0xc + (rax_49 << 2)) = 0x3f800000
            else
            label_1400b7e64:
                
                if ((temp0_478 & 8) != 0)
                    *(&var_328:0xc + (rax_49 << 2)) = 0x3f800000
        
        if (rax_49 == 8)
            break
        
        zmm3 = *(&var_358 + (rax_49 << 2))
        rax_49 += 4
    
    zmm2 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
    zmm3 = var_368
    zmm5 = var_358
    zmm8 = var_348_4
    zmm7 = _mm_mullo_epi32(zmm2, zmm3)
    zmm11 = _mm_add_epi32(zmm7, zmm5)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
    zmm13 = _mm_mullo_epi32(zmm11, zmm0)
    zmm1 = _mm_add_epi32(zmm13, zmm8)
    float (* rax_50)[0x4] = *(arg5 + 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 2) & zmm6
    int64_t rdx_29 = sx.q(zmm1.d)
    zmm4 = *(rax_50 + rdx_29)
    int64_t rbp_8 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rbx_11 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rcx_6 = sx.q(_mm_extract_epi32(zmm1, 3))
    float temp0_491[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_50 + rbp_8), 0x10), 
            *(rax_50 + rbx_11), 0x20), 
        *(rax_50 + rcx_6), 0x30)
    zmm12 = _mm_cmpeq_epi32(temp0_424, temp0_424)
    zmm3 = _mm_mullo_epi32(_mm_sub_epi32(zmm3, zmm12), zmm2)
    zmm1 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm5), zmm0), zmm8), 2)
    zmm11 = _mm_mullo_epi32(_mm_add_epi32(zmm11, zmm2), zmm0)
    zmm1 &= zmm6
    zmm2 = *(rax_50 + sx.q(zmm1.d))
    int32_t temp0_501 = _mm_extract_epi32(zmm1, 1)
    int64_t rbp_10 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_503 = _mm_extract_epi32(zmm1, 3)
    float temp0_507[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm2, *(rax_50 + sx.q(temp0_501)), 0x10), 
                *(rax_50 + rbp_10), 0x20), 
            *(rax_50 + sx.q(temp0_503)), 0x30), 
        temp0_491)
    zmm9 = var_328
    zmm10 = var_318_4
    float temp0_509[0x4] = _mm_add_ps(_mm_mul_ps(temp0_507, zmm9), temp0_491)
    zmm5 = _mm_sub_epi32(zmm5, zmm12)
    zmm7 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm7, zmm5), zmm0), zmm8), 2)
        & zmm6
    zmm4 = *(rax_50 + sx.q(zmm7.d))
    int64_t rcx_15 = sx.q(_mm_extract_epi32(zmm7, 1))
    int32_t temp0_516 = _mm_extract_epi32(zmm7, 2)
    int64_t rbx_14 = sx.q(_mm_extract_epi32(zmm7, 3))
    float temp0_520[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_50 + rcx_15), 0x10), 
            *(rax_50 + sx.q(temp0_516)), 0x20), 
        *(rax_50 + rbx_14), 0x30)
    zmm5 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm3), zmm0), zmm8), 2)
        & zmm6
    zmm3 = *(rax_50 + sx.q(zmm5.d))
    int32_t temp0_525 = _mm_extract_epi32(zmm5, 1)
    int64_t rbp_14 = sx.q(_mm_extract_epi32(zmm5, 2))
    int32_t temp0_527 = _mm_extract_epi32(zmm5, 3)
    float temp0_532[0x4] = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm3, *(rax_50 + sx.q(temp0_525)), 0x10), 
                    *(rax_50 + rbp_14), 0x20), 
                *(rax_50 + sx.q(temp0_527)), 0x30), 
            temp0_520), 
        zmm9)
    int32_t* rbx_16 = var_1f8.q
    zmm5 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r14_1 + rax_50 + rdx_29), *(rbx_16 + rax_50 + rbp_8), 
                0x10), 
            *(r15_5 + rax_50 + rbx_11), 0x20), 
        *(r11_2 + rax_50 + rcx_6), 0x30)
    zmm0 = _mm_add_epi32(zmm0, zmm8)
    zmm13 = _mm_add_epi32(zmm13, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm11)
    zmm11 = _mm_slli_epi32(_mm_add_epi32(zmm11, zmm8), 2) & zmm6
    zmm7 = *(r14_1 + sx.q(zmm11[0]) + rax_50)
    void* rcx_26 = sx.q(_mm_extract_epi32(zmm11, 1)) + rax_50
    void* rdx_34 = sx.q(_mm_extract_epi32(zmm11, 2)) + rax_50
    void* rbp_17 = sx.q(_mm_extract_epi32(zmm11, 3)) + rax_50
    zmm7 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm7, *(rbx_16 + rcx_26), 0x10), 
            *(r15_5 + rdx_34), 0x20), 
        *(r11_2 + rbp_17), 0x30)
    float temp0_547[0x4] = _mm_add_ps(temp0_532, temp0_520)
    zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, zmm5), zmm9), zmm5)
    zmm13 = _mm_slli_epi32(zmm13, 2) & zmm6
    zmm4 = *(r14_1 + sx.q(zmm13[0]) + rax_50)
    void* rcx_32 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_50
    void* rdx_37 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_50
    void* rbp_20 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_50
    float temp0_557[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rbx_16 + rcx_32), 0x10), 
            *(r15_5 + rdx_37), 0x20), 
        *(r11_2 + rbp_20), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & zmm6
    zmm1 = *(r14_1 + sx.q(zmm0.d) + rax_50)
    void* rcx_38 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_50
    void* rdx_40 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_50
    void* rbp_23 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_50
    zmm1 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_16 + rcx_38), 0x10), 
                        *(r15_5 + rdx_40), 0x20), 
                    *(r11_2 + rbp_23), 0x30), 
                temp0_557), 
            zmm9), 
        temp0_557)
    float temp0_570[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_547, temp0_509), zmm10), temp0_509)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm7), zmm10), zmm7), temp0_570), 
            temp0_470), 
        temp0_570)
    float temp0_577[0x4] = _mm_cmpeq_ps(temp0_452, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_452, 7), temp0_577), zmm6)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_582[0x4] = _mm_rsqrt_ps(temp0_452)
        float temp0_584[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_452, temp0_582), temp0_582)
        float temp0_587[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_584), temp0_582), data_142d3f640)
        float temp0_588[0x4] = _mm_rcp_ps(temp0_587)
        float temp0_589[0x4] = _mm_mul_ps(temp0_587, temp0_588)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_589), temp0_588), zmm1), zmm0)
    
    zmm8 = var_288_1
    zmm9 = var_298_1
    zmm10 = var_2a8_1
    rdx_41 = arg11
    zmm0 = arg9
    zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm6)
    char temp0_598 = _mm_movemask_ps(zmm0)
    
    if (temp0_598 == 0)
        result = arg10
    else
        zmm7 = _mm_mul_ps(var_1c8, zmm1)
        zmm6 = _mm_mul_ps(var_1b8, zmm1)
        zmm5 = _mm_mul_ps(var_1a8_1, zmm1)
        zmm4 = zmm8
        char temp2_1 = temp0_598 & 1
        
        if (temp2_1 == 0)
            zmm3 = zmm9
            
            if (temp2_1 != 0)
                goto label_1400b8431
            
            goto label_1400b83a8
        
        zmm4 = zmm8
        zmm4[0] = zmm4[0] f+ zmm7.d
        zmm3 = zmm9
        
        if (temp2_1 != 0)
        label_1400b8431:
            zmm3 = zmm9
            zmm3[0] = zmm3[0] f+ zmm6.d
            zmm2 = zmm10
            
            if (temp2_1 == 0)
                goto label_1400b83b2
            
            goto label_1400b8443
        
    label_1400b83a8:
        zmm2 = zmm10
        bool cond:14_1
        bool cond:15_1
        bool cond:18_1
        bool cond:19_1
        
        if (temp2_1 == 0)
        label_1400b83b2:
            zmm8 = _mm_add_ps(zmm8, zmm7)
            char temp6_1 = temp0_598 & 2
            cond:14_1 = temp6_1 != 0
            cond:15_1 = temp6_1 == 0
            cond:18_1 = temp6_1 == 0
            cond:19_1 = temp6_1 != 0
            
            if (temp6_1 != 0)
                goto label_1400b8457
            
            goto label_1400b83be
        
    label_1400b8443:
        zmm2 = zmm10
        zmm2[0] = zmm2[0] f+ zmm5.d
        zmm8 = _mm_add_ps(zmm8, zmm7)
        char temp5_1 = temp0_598 & 2
        cond:14_1 = temp5_1 != 0
        cond:15_1 = temp5_1 == 0
        cond:18_1 = temp5_1 == 0
        cond:19_1 = temp5_1 != 0
        
        if (temp5_1 != 0)
        label_1400b8457:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
            zmm9 = _mm_add_ps(zmm9, zmm6)
            
            if (cond:15_1)
                goto label_1400b83c8
            
            goto label_1400b8468
        
    label_1400b83be:
        zmm9 = _mm_add_ps(zmm9, zmm6)
        
        if (not(cond:14_1))
        label_1400b83c8:
            zmm10 = _mm_add_ps(zmm10, zmm5)
            
            if (cond:19_1)
                goto label_1400b8479
            
            goto label_1400b83d2
        
    label_1400b8468:
        zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
        zmm10 = _mm_add_ps(zmm10, zmm5)
        bool cond:22_1
        bool cond:23_1
        bool cond:26_1
        bool cond:27_1
        
        if (not(cond:18_1))
        label_1400b8479:
            zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
            char temp10_1 = temp0_598 & 4
            cond:22_1 = temp10_1 == 0
            cond:23_1 = temp10_1 != 0
            cond:26_1 = temp10_1 != 0
            cond:27_1 = temp10_1 == 0
            
            if (temp10_1 == 0)
                goto label_1400b83da
            
            goto label_1400b8488
        
    label_1400b83d2:
        char temp9_1 = temp0_598 & 4
        cond:22_1 = temp9_1 == 0
        cond:23_1 = temp9_1 != 0
        cond:26_1 = temp9_1 != 0
        cond:27_1 = temp9_1 == 0
        
        if (temp9_1 != 0)
        label_1400b8488:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
            
            if (not(cond:22_1))
            label_1400b8495:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                
                if (cond:27_1)
                    goto label_1400b83e6
                
                goto label_1400b84a2
        else
        label_1400b83da:
            
            if (cond:23_1)
                goto label_1400b8495
        
        bool cond:30_1
        bool cond:31_1
        bool cond:32_1
        bool cond:33_1
        
        if (not(cond:26_1))
        label_1400b83e6:
            char temp14_1 = temp0_598 & 8
            cond:30_1 = temp14_1 != 0
            cond:31_1 = temp14_1 == 0
            cond:32_1 = temp14_1 == 0
            cond:33_1 = temp14_1 != 0
            
            if (temp14_1 == 0)
                goto label_1400b84b1
            
            goto label_1400b83ee
        
    label_1400b84a2:
        zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
        char temp13_1 = temp0_598 & 8
        cond:30_1 = temp13_1 != 0
        cond:31_1 = temp13_1 == 0
        cond:32_1 = temp13_1 == 0
        cond:33_1 = temp13_1 != 0
        
        if (temp13_1 == 0)
        label_1400b84b1:
            zmm8 = zmm4
            result = arg10
            
            if (cond:31_1)
                goto label_1400b8403
            
            goto label_1400b84c3
        
    label_1400b83ee:
        zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
        result = arg10
        
        if (cond:30_1)
        label_1400b84c3:
            zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
            
            if (not(cond:32_1))
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        else
        label_1400b8403:
            zmm9 = zmm3
            
            if (cond:33_1)
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        
        var_2e8_1 = _mm_blendv_ps(var_2e8_1, _mm_add_ps(zmm1, var_2e8_1), zmm0)
        zmm10 = zmm2

float temp0_619[0x4] = _mm_hadd_ps(zmm8, zmm8)
float temp0_620[0x4] = _mm_hadd_ps(temp0_619, temp0_619)
float temp0_621[0x4] = _mm_hadd_ps(zmm9, zmm9)
float temp0_623[0x4] = _mm_insert_ps(temp0_620, _mm_hadd_ps(temp0_621, temp0_621), 0x1c)
float temp0_624[0x4] = _mm_hadd_ps(zmm10, zmm10)
float temp0_625[0x4] = _mm_hadd_ps(temp0_624, temp0_624)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_41), rdx_41[1].d, 0x20), 
    temp0_623[0].q | temp0_625[0].q << 0x40)
*rdx_41 = zmm0.d
*(rdx_41 + 4) = __extractps_memd_xmmps_immb(zmm0, 1)
rdx_41[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
zmm0 = var_2e8_1
zmm0 = _mm_hadd_ps(zmm0, zmm0)
zmm0.d = _mm_hadd_ps(zmm0, zmm0).d f+ *result
*result = zmm0.d
return result
