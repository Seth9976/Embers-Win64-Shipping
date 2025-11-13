// 函数: sub_1400ba1b0
// 地址: 0x1400ba1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
int32_t zmm13[0x4]
int32_t var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
float zmm2[0x4] = arg8
uint128_t zmm0 =
    __mulps_xmmps_memps(__insertps_xmmps_memd_immb(zx.o(*arg3), arg3[1].d, 0x20), data_142e6d9f0)
uint128_t zmm1 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), zmm0)
int32_t var_2b8 = zmm1.d
int32_t var_2b4 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_2b0 = __extractps_memd_xmmps_immb(zmm1, 2)
zmm1 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*arg1), arg1[1].d, 0x20), zmm0)
int32_t var_2c8 = zmm1.d
int32_t var_2c4 = __extractps_memd_xmmps_immb(zmm1, 1)
int32_t var_2c0 = __extractps_memd_xmmps_immb(zmm1, 2)
int32_t i = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
uint128_t var_358
uint128_t var_348
uint32_t var_318[0x4]
uint128_t var_2d8_1
uint64_t r13
uint128_t zmm3
uint32_t zmm4[0x4]
float zmm5[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]

if (i s<= 0)
    r13 = 0
    zmm10 = zx.o(0)
    zmm9 = zx.o(0)
    zmm8 = zx.o(0)
    var_2d8_1 = zx.o(0)
else
    float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    r13 = 0
    
    do
        float var_298[0x4]
        __builtin_memset(&var_298, 0, 0x30)
        int64_t rdx_2 = sx.q((r13 << 2).d * 3)
        zmm0 = *(arg7 + rdx_2)
        zmm2 = *(arg7 + rdx_2 + 0x10)
        zmm5 = *(arg7 + rdx_2 + 0x20)
        zmm3 = _mm_shuffle_epi32(zmm0, 0xe5)
        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
        zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
        zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), zmm0, 0x3f)
        zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), zmm3, 3)
        zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
        zmm1 = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
        var_318 = zmm4
        uint128_t var_308_1 = zmm3
        int128_t var_2e8_1
        __builtin_memset(&var_2e8_1, 0, 0x20)
        zmm0 = *(arg6 + 0xc)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
        var_358 = zmm0
        var_348 = zmm0
        uint128_t var_338_1 = zmm0
        uint128_t var_328_1 = zmm0
        zmm9 = *arg6
        zmm8 = *(arg6 + 4)
        zmm10 = *(arg6 + 8)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_24[0x4] = _mm_mul_ps(temp0_23, zmm1)
        float temp0_25[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        float temp0_26[0x4] = _mm_mul_ps(temp0_25, zmm4)
        float temp0_27[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_28[0x4] = _mm_mul_ps(temp0_27, zmm3)
        float temp0_30[0x4] = _mm_sub_ps(temp0_24, _mm_mul_ps(zmm3, temp0_25))
        float temp0_32[0x4] = _mm_sub_ps(temp0_26, _mm_mul_ps(zmm1, temp0_27))
        float temp0_34[0x4] = _mm_sub_ps(temp0_28, _mm_mul_ps(zmm4, temp0_23))
        float temp0_35[0x4] = _mm_add_ps(temp0_30, temp0_30)
        float temp0_36[0x4] = _mm_add_ps(temp0_32, temp0_32)
        float temp0_37[0x4] = _mm_add_ps(temp0_34, temp0_34)
        zmm3 = _mm_mul_ps(zmm0, temp0_35)
        float temp0_39[0x4] = _mm_mul_ps(zmm0, temp0_36)
        zmm3 = __addps_xmmps_memps(zmm3, var_318)
        float temp0_41[0x4] = __addps_xmmps_memps(temp0_39, var_308_1)
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_37), zmm1)
        zmm4 = _mm_mul_ps(temp0_37, temp0_23)
        float temp0_45[0x4] = _mm_mul_ps(temp0_35, temp0_25)
        zmm1 = _mm_mul_ps(temp0_36, temp0_27)
        zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_36, temp0_25)), zmm3)
        float temp0_52[0x4] =
            _mm_add_ps(_mm_sub_ps(temp0_45, _mm_mul_ps(temp0_37, temp0_27)), temp0_41)
        zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_35, temp0_23)), zmm0)
        zmm9 = arg6[1].d
        zmm3 = *(arg6 + 0x14)
        float temp0_57[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm4)
        zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_52)
        zmm0 = *(arg6 + 0x18)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
        float var_198[0x4] = temp0_57
        uint128_t var_1d8_1 = zmm3
        uint128_t var_188 = zmm3
        uint128_t var_2a8_1 = zmm0
        uint128_t var_178_1 = zmm0
        int64_t rbp_1 = 0
        zmm0 = temp0_57
        
        while (true)
            zmm2 = *(&var_2b8 + rbp_1)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
            char temp0_64 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
            
            if (temp0_64 != 0)
                if ((temp0_64 & 1) == 0)
                    if ((temp0_64 & 2) != 0)
                        goto label_1400ba5be
                    
                    goto label_1400ba4ef
                
                *(&var_358 + (rbp_1 << 2)) = zmm2[0]
                
                if ((temp0_64 & 2) != 0)
                label_1400ba5be:
                    *(&var_358:4 + (rbp_1 << 2)) = zmm2[0]
                    
                    if ((temp0_64 & 4) == 0)
                        goto label_1400ba4f8
                    
                    goto label_1400ba5cd
                
            label_1400ba4ef:
                
                if ((temp0_64 & 4) != 0)
                label_1400ba5cd:
                    *(&var_358:8 + (rbp_1 << 2)) = zmm2[0]
                    
                    if ((temp0_64 & 8) != 0)
                        *(&var_358:0xc + (rbp_1 << 2)) = zmm2[0]
                else
                label_1400ba4f8:
                    
                    if ((temp0_64 & 8) != 0)
                        *(&var_358:0xc + (rbp_1 << 2)) = zmm2[0]
            
            zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
            
            if (_mm_movemask_ps(zmm1) != 0)
                zmm3 = *(&var_2c8 + rbp_1)
                float temp0_67[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                char temp0_70 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_67, 1), zmm1))
                
                if (temp0_70 != 0)
                    if ((temp0_70 & 1) == 0)
                        if ((temp0_70 & 2) != 0)
                            goto label_1400ba5ef
                        
                        goto label_1400ba548
                    
                    *(&var_358 + (rbp_1 << 2)) = zmm3.d
                    
                    if ((temp0_70 & 2) != 0)
                    label_1400ba5ef:
                        *(&var_358:4 + (rbp_1 << 2)) = zmm3.d
                        
                        if ((temp0_70 & 4) == 0)
                            goto label_1400ba551
                        
                        goto label_1400ba5fe
                    
                label_1400ba548:
                    
                    if ((temp0_70 & 4) != 0)
                    label_1400ba5fe:
                        *(&var_358:8 + (rbp_1 << 2)) = zmm3.d
                        
                        if ((temp0_70 & 8) != 0)
                            *(&var_358:0xc + (rbp_1 << 2)) = zmm3.d
                    else
                    label_1400ba551:
                        
                        if ((temp0_70 & 8) != 0)
                            *(&var_358:0xc + (rbp_1 << 2)) = zmm3.d
                
                char temp0_73 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_67, 5), zmm1))
                
                if (temp0_73 != 0)
                    zmm0 = *(&var_198 + (rbp_1 << 2))
                    
                    if ((temp0_73 & 1) == 0)
                        if ((temp0_73 & 2) != 0)
                            goto label_1400ba620
                        
                        goto label_1400ba587
                    
                    *(&var_358 + (rbp_1 << 2)) = zmm0.d
                    
                    if ((temp0_73 & 2) != 0)
                    label_1400ba620:
                        *(&var_358:4 + (rbp_1 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_73 & 4) == 0)
                            goto label_1400ba590
                        
                        goto label_1400ba631
                    
                label_1400ba587:
                    
                    if ((temp0_73 & 4) != 0)
                    label_1400ba631:
                        *(&var_358:8 + (rbp_1 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((temp0_73 & 8) != 0)
                            *(&var_358:0xc + (rbp_1 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_1400ba590:
                        
                        if ((temp0_73 & 8) != 0)
                            *(&var_358:0xc + (rbp_1 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
            
            if (rbp_1 == 8)
                break
            
            zmm0 = *(&var_188 + (rbp_1 << 2))
            rbp_1 += 4
        
        zmm11 = var_358
        zmm15 = var_348
        zmm4 = var_338_1
        zmm2 = *arg1
        zmm12 = *(arg1 + 4)
        float temp0_77[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_sub_ps(zmm11, temp0_77)
        float temp0_79[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
        float temp0_80[0x4] = _mm_sub_ps(zmm15, temp0_79)
        zmm5 = arg1[1].d
        float temp0_81[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        uint32_t var_1f8_1[0x4] = zmm4
        zmm4 = _mm_sub_ps(zmm4, temp0_81)
        zmm1 = *arg3
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm0 = _mm_div_ps(zmm0, zmm1)
        zmm8 = arg3[1].d
        zmm13 = _mm_cvttps_epi32(zmm0)
        uint128_t var_218_1 = zmm1
        zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm1), temp0_77)
        float temp0_90[0x4] =
            __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm8, 0x20), data_142fc9600)
        zmm2 = _mm_cmpeq_epi32(temp0_77, temp0_77)
        zmm1 = _mm_shuffle_ps(temp0_90, temp0_90, 0)
        uint128_t var_258_1 = zmm1
        zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm11, 1)
        zmm1 = _mm_add_epi32(zmm13, zmm2)
        zmm3 = _mm_blendv_ps(zmm1, zmm13, zmm0)
        zmm14 = *(arg3 + 4)
        float temp0_97[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
        float temp0_98[0x4] = _mm_div_ps(temp0_80, temp0_97)
        float temp0_99[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        zmm4 = _mm_div_ps(zmm4, temp0_99)
        zmm7 = _mm_cvttps_epi32(temp0_98)
        zmm4 = _mm_cvttps_epi32(zmm4)
        float temp0_104[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_97)
        float temp0_106[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_99)
        float temp0_107[0x4] = _mm_add_ps(temp0_104, temp0_79)
        float temp0_108[0x4] = _mm_add_ps(temp0_106, temp0_81)
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0x55)
        float temp0_110[0x4] = _mm_add_ps(temp0_107, temp0_109)
        float temp0_111[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0xaa)
        var_358 = zmm3
        zmm0 = _mm_cmpeq_ps(temp0_110, zmm15, 1)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm13 = zmm7
        
        float temp0_114[0x4] = _mm_add_ps(temp0_108, temp0_111)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_110, zmm15, 5)) != 0)
            zmm1 = __paddd_xmmdq_memdq(zmm7, data_142d3f800)
        
        float var_1e8_1[0x4] = zmm11
        float temp0_118[0x4] = _mm_sub_ps(zmm11, temp0_57)
        float temp0_119[0x4] = __subps_xmmps_memps(zmm15, var_1d8_1)
        float temp0_120[0x4] = _mm_blendv_ps(zmm1, zmm13, zmm0)
        var_348 = temp0_120
        zmm11 = var_1f8_1
        zmm0 = _mm_cmpeq_ps(temp0_114, zmm11, 1)
        
        if (_mm_movemask_ps(zmm0) != 0)
            zmm13 = zmm4
        
        float temp0_123[0x4] = __subps_xmmps_memps(zmm11, var_2a8_1)
        float temp0_124[0x4] = _mm_mul_ps(temp0_118, temp0_118)
        float temp0_125[0x4] = _mm_mul_ps(temp0_119, temp0_119)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_114, zmm11, 5)) != 0)
            zmm1 = __paddd_xmmdq_memdq(zmm4, data_142d3f800)
        
        zmm1 = _mm_blendv_ps(zmm1, zmm13, zmm0)
        float temp0_131[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_124, data_142d8f750), temp0_125)
        zmm5 = var_218_1
        zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm5), temp0_77)
        zmm4 = temp0_131
        float temp0_137[0x4] =
            __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_120), temp0_97), temp0_79)
        uint128_t var_338_2 = zmm1
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_99), temp0_81)
        float temp0_141[0x4] = _mm_add_ps(var_258_1, zmm0)
        float temp0_142[0x4] = _mm_add_ps(temp0_109, temp0_137)
        zmm2 = zmm4
        float temp0_143[0x4] = _mm_add_ps(temp0_111, zmm1)
        zmm0 = _mm_sub_ps(var_1e8_1, temp0_141)
        zmm1 = _mm_sub_ps(zmm15, temp0_142)
        float temp0_146[0x4] = _mm_sub_ps(zmm11, temp0_143)
        zmm0 = _mm_div_ps(zmm0, zmm5)
        zmm1 = _mm_div_ps(zmm1, temp0_97)
        float temp0_149[0x4] = _mm_div_ps(temp0_146, temp0_99)
        var_318 = zmm0
        uint128_t var_308_2 = zmm1
        float temp0_150[0x4] = _mm_mul_ps(temp0_123, temp0_123)
        int64_t rbp_2 = 0
        zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
        char j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm4))
        
        if (j == 0)
            goto label_1400ba934
        
        do
            if ((j & 1) == 0)
                if ((j & 2) != 0)
                    goto label_1400ba9d0
                
                goto label_1400ba8fa
            
            *(&var_358 + (rbp_2 << 2)) = 0
            
            if ((j & 2) != 0)
            label_1400ba9d0:
                *(&var_358:4 + (rbp_2 << 2)) = 0
                
                if ((j & 4) == 0)
                    goto label_1400ba903
                
                goto label_1400ba9e1
            
        label_1400ba8fa:
            
            if ((j & 4) == 0)
            label_1400ba903:
                
                if ((j & 8) != 0)
                    goto label_1400ba9f2
                
                goto label_1400ba90c
            
        label_1400ba9e1:
            *(&var_358:8 + (rbp_2 << 2)) = 0
            
            if ((j & 8) != 0)
            label_1400ba9f2:
                *(&var_358:0xc + (rbp_2 << 2)) = 0
                
                if ((j & 1) == 0)
                    goto label_1400ba915
                
                goto label_1400baa03
            
        label_1400ba90c:
            
            if ((j & 1) == 0)
            label_1400ba915:
                
                if ((j & 2) != 0)
                    goto label_1400baa14
                
                goto label_1400ba91e
            
        label_1400baa03:
            var_318[rbp_2] = 0
            
            if ((j & 2) != 0)
            label_1400baa14:
                var_318[1 + rbp_2] = 0
                
                if ((j & 4) == 0)
                    goto label_1400ba927
                
                goto label_1400baa25
            
        label_1400ba91e:
            
            if ((j & 4) != 0)
            label_1400baa25:
                var_318[2 + rbp_2] = 0
                
                if ((j & 8) != 0)
                    var_318[3 + rbp_2] = 0
            else
            label_1400ba927:
                
                if ((j & 8) != 0)
                    var_318[3 + rbp_2] = 0
            
        label_1400ba934:
            int32_t rdi_1 = *(arg4 + rbp_2)
            char temp0_158 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                _mm_shuffle_epi32(zx.o(rdi_1 - 1), 0), *(&var_358 + (rbp_2 << 2))))
            
            if (temp0_158 != 0)
                if ((temp0_158 & 1) == 0)
                    if ((temp0_158 & 2) != 0)
                        goto label_1400baa4c
                    
                    goto label_1400ba968
                
                *(&var_358 + (rbp_2 << 2)) = rdi_1 - 2
                
                if ((temp0_158 & 2) != 0)
                label_1400baa4c:
                    *(&var_358:4 + (rbp_2 << 2)) = rdi_1 - 2
                    
                    if ((temp0_158 & 4) == 0)
                        goto label_1400ba971
                    
                    goto label_1400baa59
                
            label_1400ba968:
                
                if ((temp0_158 & 4) == 0)
                label_1400ba971:
                    
                    if ((temp0_158 & 8) != 0)
                        goto label_1400baa66
                    
                    goto label_1400ba97a
                
            label_1400baa59:
                *(&var_358:8 + (rbp_2 << 2)) = rdi_1 - 2
                
                if ((temp0_158 & 8) != 0)
                label_1400baa66:
                    *(&var_358:0xc + (rbp_2 << 2)) = rdi_1 - 2
                    
                    if ((temp0_158 & 1) == 0)
                        goto label_1400ba983
                    
                    goto label_1400baa73
                
            label_1400ba97a:
                
                if ((temp0_158 & 1) == 0)
                label_1400ba983:
                    
                    if ((temp0_158 & 2) != 0)
                        goto label_1400baa84
                    
                    goto label_1400ba98c
                
            label_1400baa73:
                var_318[rbp_2] = 0x3f800000
                
                if ((temp0_158 & 2) != 0)
                label_1400baa84:
                    var_318[1 + rbp_2] = 0x3f800000
                    
                    if ((temp0_158 & 4) == 0)
                        goto label_1400ba995
                    
                    goto label_1400baa95
                
            label_1400ba98c:
                
                if ((temp0_158 & 4) != 0)
                label_1400baa95:
                    var_318[2 + rbp_2] = 0x3f800000
                    
                    if ((temp0_158 & 8) != 0)
                        var_318[3 + rbp_2] = 0x3f800000
                else
                label_1400ba995:
                    
                    if ((temp0_158 & 8) != 0)
                        var_318[3 + rbp_2] = 0x3f800000
            
            if (rbp_2 == 8)
                break
            
            zmm3 = *(&var_348 + (rbp_2 << 2))
            rbp_2 += 4
            j = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm4))
        while (j != 0)
        
        float temp0_159[0x4] = _mm_add_ps(zmm2, temp0_150)
        zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm1 = var_358
        zmm3 = var_348
        zmm10 = var_338_2
        zmm2 = _mm_mullo_epi32(zmm8, zmm1)
        zmm12 = _mm_add_epi32(zmm2, zmm3)
        zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        int32_t temp0_164[0x4] = _mm_mullo_epi32(zmm12, zmm0)
        zmm5 = _mm_add_epi32(temp0_164, zmm10)
        float (* rbp_3)[0x4] = *(arg5 + 0x10)
        zmm5 = _mm_slli_epi32(zmm5, 2)
        int64_t rax_1 = sx.q(zmm5[0])
        int64_t rsi_1 = sx.q(_mm_extract_epi32(zmm5, 1))
        int64_t rdx_20 = sx.q(_mm_extract_epi32(zmm5, 2))
        int64_t rdi_5 = sx.q(_mm_extract_epi32(zmm5, 3))
        float temp0_172[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rbp_3 + rax_1), *(rbp_3 + rsi_1), 0x10), 
                *(rbp_3 + rdx_20), 0x20), 
            *(rbp_3 + rdi_5), 0x30)
        zmm11 = *(rbp_3 + rax_1 + 4)
        zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm4), zmm8)
        zmm6 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm3), zmm0), zmm10), 2)
        zmm12 = _mm_mullo_epi32(_mm_add_epi32(zmm12, zmm8), zmm0)
        zmm5 = *(rbp_3 + sx.q(zmm6[0]))
        int32_t temp0_181 = _mm_extract_epi32(zmm6, 1)
        int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm6, 2))
        int32_t temp0_183 = _mm_extract_epi32(zmm6, 3)
        float temp0_187[0x4] = _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rbp_3 + sx.q(temp0_181)), 0x10), 
                    *(rbp_3 + rbx_2), 0x20), 
                *(rbp_3 + sx.q(temp0_183)), 0x30), 
            temp0_172)
        zmm9 = var_318
        zmm3 = _mm_sub_epi32(zmm3, zmm4)
        zmm2 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm3), zmm0), zmm10), 2)
        int64_t rax_8 = sx.q(zmm2[0])
        int32_t temp0_193 = _mm_extract_epi32(zmm2, 1)
        int32_t temp0_194 = _mm_extract_epi32(zmm2, 2)
        zmm4 = *(rbp_3 + rax_8)
        int32_t temp0_195 = _mm_extract_epi32(zmm2, 3)
        zmm8 = var_308_2
        float temp0_196[0x4] = _mm_mul_ps(temp0_187, zmm9)
        zmm4 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm4, *(rbp_3 + sx.q(temp0_193)), 0x10), 
                *(rbp_3 + sx.q(temp0_194)), 0x20), 
            *(rbp_3 + sx.q(temp0_195)), 0x30)
        zmm3 = _mm_slli_epi32(
            _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, zmm1), zmm0), zmm10), 2)
        zmm6 = *(rbp_3 + sx.q(zmm3.d))
        int64_t r14_4 = sx.q(_mm_extract_epi32(zmm3, 1))
        int32_t temp0_205 = _mm_extract_epi32(zmm3, 2)
        int64_t rax_15 = sx.q(_mm_extract_epi32(zmm3, 3))
        float temp0_209[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rbp_3 + r14_4), 0x10), 
                *(rbp_3 + sx.q(temp0_205)), 0x20), 
            *(rbp_3 + rax_15), 0x30)
        float temp0_210[0x4] = _mm_add_ps(temp0_196, temp0_172)
        float temp0_211[0x4] = _mm_sub_ps(temp0_209, zmm4)
        float temp0_214[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm11, *(rbp_3 + rsi_1 + 4), 0x10), 
                *(rbp_3 + rdx_20 + 4), 0x20), 
            *(rbp_3 + rdi_5 + 4), 0x30)
        float temp0_215[0x4] = _mm_mul_ps(temp0_211, zmm9)
        zmm0 = _mm_add_epi32(zmm0, zmm10)
        int32_t temp0_217[0x4] = _mm_add_epi32(temp0_164, zmm0)
        zmm0 = _mm_add_epi32(zmm0, zmm12)
        zmm12 = _mm_slli_epi32(_mm_add_epi32(zmm12, zmm10), 2)
        zmm2 = *(rbp_3 + sx.q(zmm12[0]) + 4)
        int64_t rax_19 = sx.q(_mm_extract_epi32(zmm12, 1))
        int32_t temp0_222 = _mm_extract_epi32(zmm12, 2)
        int64_t rsi_3 = sx.q(_mm_extract_epi32(zmm12, 3))
        float temp0_226[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm2, *(rbp_3 + rax_19 + 4), 0x10), 
                *(rbp_3 + sx.q(temp0_222) + 4), 0x20), 
            *(rbp_3 + rsi_3 + 4), 0x30)
        float temp0_227[0x4] = _mm_add_ps(temp0_215, zmm4)
        float temp0_230[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_226, temp0_214), zmm9), temp0_214)
        zmm13 = _mm_slli_epi32(temp0_217, 2)
        zmm3 = *(rbp_3 + sx.q(zmm13[0]) + 4)
        int32_t temp0_232 = _mm_extract_epi32(zmm13, 1)
        int64_t rdx_24 = sx.q(_mm_extract_epi32(zmm13, 2))
        int32_t temp0_234 = _mm_extract_epi32(zmm13, 3)
        zmm3 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm3, *(rbp_3 + sx.q(temp0_232) + 4), 0x10), 
                *(rbp_3 + rdx_24 + 4), 0x20), 
            *(rbp_3 + sx.q(temp0_234) + 4), 0x30)
        zmm0 = _mm_slli_epi32(zmm0, 2)
        int32_t temp0_239 = _mm_extract_epi32(zmm0, 1)
        zmm1 = *(rbp_3 + sx.q(zmm0.d) + 4)
        int64_t rdx_27 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rsi_6 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm1 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rbp_3 + sx.q(temp0_239) + 4), 0x10), 
                            *(rbp_3 + rdx_27 + 4), 0x20), 
                        *(rbp_3 + rsi_6 + 4), 0x30), 
                    zmm3), 
                zmm9), 
            zmm3)
        float temp0_250[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_227, temp0_210), zmm8), temp0_210)
        zmm1 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_230), zmm8), temp0_230), 
                    temp0_250), 
                temp0_149), 
            temp0_250)
        float temp0_257[0x4] = _mm_cmpeq_ps(temp0_159, zx.o(0), 4)
        zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_159, zx.o(0), 7), temp0_257)
        
        if (_mm_movemask_ps(zmm0) != 0)
            float temp0_261[0x4] = _mm_rsqrt_ps(temp0_159)
            float temp0_263[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_159, temp0_261), temp0_261)
            zmm3 = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_263), temp0_261), data_142d3f640)
            float temp0_267[0x4] = _mm_rcp_ps(zmm3)
            zmm3 = _mm_mul_ps(zmm3, temp0_267)
            zmm1 = _mm_blendv_ps(zmm1, 
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_267), zmm1), zmm0)
        
        float var_278[0x4]
        zmm8 = var_278
        float var_288[0x4]
        zmm9 = var_288
        zmm10 = var_298
        zmm1 = __subps_xmmps_memps(zmm1, temp0_10)
        zmm0 = __cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1)
        char temp0_275 = _mm_movemask_ps(zmm0)
        
        if (temp0_275 != 0)
            float temp0_276[0x4] = _mm_mul_ps(var_198, zmm1)
            float temp0_277[0x4] = _mm_mul_ps(var_188, zmm1)
            float temp0_278[0x4] = _mm_mul_ps(var_178_1, zmm1)
            zmm4 = zmm8
            char temp1_1 = temp0_275 & 1
            
            if (temp1_1 == 0)
                zmm3 = zmm9
                
                if (temp1_1 != 0)
                    goto label_1400baf02
                
                goto label_1400bae8e
            
            zmm4 = zmm8
            zmm4[0] = zmm4[0] f+ temp0_276[0]
            zmm3 = zmm9
            
            if (temp1_1 != 0)
            label_1400baf02:
                zmm3.d = zmm9.d f+ temp0_277[0]
                zmm2 = zmm10
                
                if (temp1_1 == 0)
                    goto label_1400bae94
                
                goto label_1400baf0c
            
        label_1400bae8e:
            zmm2 = zmm10
            bool cond:9_1
            bool cond:10_1
            bool cond:13_1
            bool cond:14_1
            
            if (temp1_1 == 0)
            label_1400bae94:
                zmm8 = _mm_add_ps(zmm8, temp0_276)
                char temp4_1 = temp0_275 & 2
                cond:9_1 = temp4_1 != 0
                cond:10_1 = temp4_1 == 0
                cond:13_1 = temp4_1 == 0
                cond:14_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                    goto label_1400baf1d
                
                goto label_1400baea1
            
        label_1400baf0c:
            zmm2 = zmm10
            zmm2[0] = zmm2[0] + temp0_278[0]
            zmm8 = _mm_add_ps(zmm8, temp0_276)
            char temp3_1 = temp0_275 & 2
            cond:9_1 = temp3_1 != 0
            cond:10_1 = temp3_1 == 0
            cond:13_1 = temp3_1 == 0
            cond:14_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
            label_1400baf1d:
                zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
                zmm9 = _mm_add_ps(zmm9, temp0_277)
                
                if (cond:10_1)
                    goto label_1400baeab
                
                goto label_1400baf2e
            
        label_1400baea1:
            zmm9 = _mm_add_ps(zmm9, temp0_277)
            
            if (not(cond:9_1))
            label_1400baeab:
                zmm10 = _mm_add_ps(zmm10, temp0_278)
                
                if (cond:14_1)
                    goto label_1400baf3f
                
                goto label_1400baeb5
            
        label_1400baf2e:
            zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
            zmm10 = _mm_add_ps(zmm10, temp0_278)
            bool cond:17_1
            bool cond:18_1
            bool cond:21_1
            bool cond:22_1
            
            if (not(cond:13_1))
            label_1400baf3f:
                zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
                char temp8_1 = temp0_275 & 4
                cond:17_1 = temp8_1 == 0
                cond:18_1 = temp8_1 != 0
                cond:21_1 = temp8_1 != 0
                cond:22_1 = temp8_1 == 0
                
                if (temp8_1 == 0)
                    goto label_1400baebe
                
                goto label_1400baf4f
            
        label_1400baeb5:
            char temp7_1 = temp0_275 & 4
            cond:17_1 = temp7_1 == 0
            cond:18_1 = temp7_1 != 0
            cond:21_1 = temp7_1 != 0
            cond:22_1 = temp7_1 == 0
            
            if (temp7_1 != 0)
            label_1400baf4f:
                zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
                
                if (not(cond:17_1))
                label_1400baf5c:
                    zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                    
                    if (cond:22_1)
                        goto label_1400baeca
                    
                    goto label_1400baf69
            else
            label_1400baebe:
                
                if (cond:18_1)
                    goto label_1400baf5c
            
            bool cond:27_1
            bool cond:28_1
            bool cond:31_1
            bool cond:32_1
            
            if (not(cond:21_1))
            label_1400baeca:
                char temp12_1 = temp0_275 & 8
                cond:27_1 = temp12_1 != 0
                cond:28_1 = temp12_1 == 0
                cond:31_1 = temp12_1 == 0
                cond:32_1 = temp12_1 != 0
                
                if (temp12_1 == 0)
                    goto label_1400baf79
                
                goto label_1400baed3
            
        label_1400baf69:
            zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
            char temp11_1 = temp0_275 & 8
            cond:27_1 = temp11_1 != 0
            cond:28_1 = temp11_1 == 0
            cond:31_1 = temp11_1 == 0
            cond:32_1 = temp11_1 != 0
            
            if (temp11_1 == 0)
            label_1400baf79:
                zmm8 = zmm4
                
                if (cond:28_1)
                    goto label_1400baee0
                
                goto label_1400baf83
            
        label_1400baed3:
            zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
            
            if (cond:27_1)
            label_1400baf83:
                zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
                
                if (not(cond:31_1))
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
            else
            label_1400baee0:
                zmm9 = zmm3
                
                if (cond:32_1)
                    zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
            
            var_2d8_1 = _mm_blendv_ps(var_2d8_1, _mm_add_ps(zmm1, var_2d8_1), zmm0)
            zmm10 = zmm2
        
        r13 = zx.q(r13.d + 4)
    while (r13.d s< i)

int64_t* rdx_52 = arg10
int32_t* result = arg9

if (r13.d s< arg11)
    float var_298_1[0x4] = zmm10
    float var_288_1[0x4] = zmm9
    float var_278_1[0x4] = zmm8
    zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r13.d), 0), data_142e11d00)
    zmm6 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg11), 0), zmm1)
    zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm6
    int64_t rax_30 = sx.q(zmm1.d)
    void* rbx_7 = arg7 + (rax_30 << 2)
    zmm0 = *(arg7 + (rax_30 << 2))
    int64_t r10_4 = sx.q(_mm_extract_epi32(zmm1, 1))
    void* rdx_30 = arg7 + (r10_4 << 2)
    int64_t rbp_6 = sx.q(_mm_extract_epi32(zmm1, 2))
    void* rsi_7 = arg7 + (rbp_6 << 2)
    int64_t rax_32 = sx.q(_mm_extract_epi32(zmm1, 3))
    void* rdi_7 = arg7 + (rax_32 << 2)
    zmm0 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, *(arg7 + (r10_4 << 2)), 0x10), 
            *(arg7 + (rbp_6 << 2)), 0x20), 
        *(arg7 + (rax_32 << 2)), 0x30)
    zmm2 = data_142fc95e0 & zmm6
    uint64_t r10_5 = zx.q(zmm2[0])
    zmm8 = *(r10_5 + rbx_7)
    uint64_t r14_5 = zx.q(_mm_extract_epi32(zmm2, 1))
    uint64_t r15_1 = zx.q(_mm_extract_epi32(zmm2, 2))
    int32_t* r13_1 = zx.q(_mm_extract_epi32(zmm2, 3))
    float temp0_312[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(r14_5 + rdx_30), 0x10), 
            *(r15_1 + rsi_7), 0x20), 
        *(r13_1 + rdi_7), 0x30)
    zmm2 = data_142fc95f0 & zmm6
    zmm5 = *(zx.q(zmm2[0]) + rbx_7)
    uint64_t rax_34 = zx.q(_mm_extract_epi32(zmm2, 1))
    int32_t* rbx_8 = zx.q(_mm_extract_epi32(zmm2, 2))
    int32_t* rbp_7 = zx.q(_mm_extract_epi32(zmm2, 3))
    float temp0_318[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rax_34 + rdx_30), 0x10), 
            *(rbx_8 + rsi_7), 0x20), 
        *(rbp_7 + rdi_7), 0x30)
    uint128_t var_168_1 = zmm0
    float var_138_1[0x4] = zx.o(0)
    zmm4 = *(arg6 + 0xc)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
    var_358 = zmm4
    var_348 = zmm4
    float var_338_3[0x4] = zmm4
    zmm7 = *arg6
    zmm1 = *(arg6 + 4)
    zmm3 = *(arg6 + 8)
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_321[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_322[0x4] = _mm_mul_ps(temp0_312, temp0_321)
    float temp0_323[0x4] = _mm_mul_ps(temp0_321, temp0_318)
    float temp0_324[0x4] = _mm_mul_ps(temp0_318, zmm1)
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm1 = _mm_mul_ps(zmm1, zmm0)
    zmm0 = _mm_mul_ps(zmm0, zmm3)
    float temp0_328[0x4] = _mm_mul_ps(zx.o(0), zmm4)
    float temp0_330[0x4] = _mm_sub_ps(temp0_324, _mm_mul_ps(zmm3, temp0_312))
    zmm0 = _mm_sub_ps(zmm0, temp0_323)
    float temp0_332[0x4] = _mm_sub_ps(temp0_322, zmm1)
    float temp0_333[0x4] = _mm_sub_ps(temp0_328, temp0_328)
    float temp0_334[0x4] = _mm_add_ps(temp0_330, temp0_330)
    zmm0 = _mm_add_ps(zmm0, zmm0)
    float temp0_336[0x4] = _mm_add_ps(temp0_332, temp0_332)
    float temp0_337[0x4] = _mm_add_ps(temp0_333, temp0_333)
    var_318 = temp0_334
    uint128_t var_308_3 = zmm0
    float var_2f8_3[0x4] = temp0_336
    float var_2e8_2[0x4] = temp0_337
    float temp0_338[0x4] = _mm_mul_ps(temp0_337, zmm4)
    zmm1 = _mm_mul_ps(zmm4, temp0_334)
    float temp0_340[0x4] = _mm_mul_ps(zmm4, zmm0)
    float temp0_341[0x4] = _mm_mul_ps(zmm4, temp0_336)
    zmm1 = __addps_xmmps_memps(zmm1, var_168_1)
    float temp0_343[0x4] = __addps_xmmps_memps(temp0_340, temp0_312)
    float temp0_344[0x4] = __addps_xmmps_memps(temp0_341, temp0_318)
    uint32_t var_328_2[0x4] = zmm4
    uint128_t var_128_1 = zmm1
    float var_118_1[0x4] = temp0_343
    float var_108_1[0x4] = temp0_344
    float var_f8_1[0x4] = __addps_xmmps_memps(temp0_338, var_138_1)
    zmm3 = *arg6
    zmm4 = *(arg6 + 4)
    zmm7 = *(arg6 + 8)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
    float temp0_348[0x4] = _mm_mul_ps(zmm0, zmm3)
    zmm3 = _mm_mul_ps(zmm3, temp0_336)
    float temp0_350[0x4] = _mm_mul_ps(temp0_336, zmm4)
    float temp0_351[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    zmm4 = _mm_mul_ps(zmm4, temp0_334)
    float temp0_353[0x4] = _mm_mul_ps(temp0_334, temp0_351)
    float temp0_355[0x4] = _mm_sub_ps(temp0_350, _mm_mul_ps(temp0_351, zmm0))
    float temp0_356[0x4] = _mm_sub_ps(temp0_353, zmm3)
    float temp0_357[0x4] = _mm_sub_ps(temp0_348, zmm4)
    float temp0_358[0x4] = _mm_add_ps(temp0_355, zmm1)
    float temp0_359[0x4] = _mm_add_ps(temp0_356, temp0_343)
    float temp0_360[0x4] = _mm_add_ps(temp0_357, temp0_344)
    zmm0 = arg6[1].d
    zmm3 = *(arg6 + 0x14)
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_358)
    zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_359)
    zmm1 = *(arg6 + 0x18)
    zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_360)
    uint128_t var_1c8 = zmm0
    uint128_t var_1d8_2 = zmm3
    uint128_t var_1b8 = zmm3
    uint128_t var_2a8_2 = zmm1
    uint128_t var_1a8_1 = zmm1
    int64_t rax_35 = 0
    zmm1 = zmm0
    
    while (true)
        zmm3 = *(&var_2b8 + rax_35)
        float temp0_367[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm4 = _mm_cmpeq_ps(temp0_367, zmm1, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm6)) != 0)
            char temp0_371 = _mm_movemask_ps(zmm4)
            
            if ((temp0_371 & 1) == 0)
                if ((temp0_371 & 2) != 0)
                    goto label_1400bb3ee
                
                goto label_1400bb305
            
            *(&var_358 + (rax_35 << 2)) = zmm3.d
            
            if ((temp0_371 & 2) != 0)
            label_1400bb3ee:
                *(&var_358:4 + (rax_35 << 2)) = zmm3.d
                
                if ((temp0_371 & 4) == 0)
                    goto label_1400bb30e
                
                goto label_1400bb3fd
            
        label_1400bb305:
            
            if ((temp0_371 & 4) != 0)
            label_1400bb3fd:
                *(&var_358:8 + (rax_35 << 2)) = zmm3.d
                
                if ((temp0_371 & 8) != 0)
                    *(&var_358:0xc + (rax_35 << 2)) = zmm3.d
            else
            label_1400bb30e:
                
                if ((temp0_371 & 8) != 0)
                    *(&var_358:0xc + (rax_35 << 2)) = zmm3.d
        
        float temp0_372[0x4] = _mm_cmpeq_ps(temp0_367, zmm1, 5)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm6, temp0_372)) != 0)
            zmm4 = *(&var_2c8 + rax_35)
            zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm3, 1), temp0_372)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm6)) != 0)
                char temp0_380 = _mm_movemask_ps(zmm5)
                
                if ((temp0_380 & 1) == 0)
                    if ((temp0_380 & 2) != 0)
                        goto label_1400bb41f
                    
                    goto label_1400bb36a
                
                *(&var_358 + (rax_35 << 2)) = zmm4[0]
                
                if ((temp0_380 & 2) != 0)
                label_1400bb41f:
                    *(&var_358:4 + (rax_35 << 2)) = zmm4[0]
                    
                    if ((temp0_380 & 4) == 0)
                        goto label_1400bb373
                    
                    goto label_1400bb42e
                
            label_1400bb36a:
                
                if ((temp0_380 & 4) != 0)
                label_1400bb42e:
                    *(&var_358:8 + (rax_35 << 2)) = zmm4[0]
                    
                    if ((temp0_380 & 8) != 0)
                        *(&var_358:0xc + (rax_35 << 2)) = zmm4[0]
                else
                label_1400bb373:
                    
                    if ((temp0_380 & 8) != 0)
                        *(&var_358:0xc + (rax_35 << 2)) = zmm4[0]
            
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm3, 5), temp0_372)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm6)) != 0)
                zmm2 = *(&var_1c8 + (rax_35 << 2))
                char temp0_385 = _mm_movemask_ps(zmm1)
                
                if ((temp0_385 & 1) == 0)
                    if ((temp0_385 & 2) != 0)
                        goto label_1400bb450
                    
                    goto label_1400bb3af
                
                *(&var_358 + (rax_35 << 2)) = zmm2[0]
                
                if ((temp0_385 & 2) != 0)
                label_1400bb450:
                    *(&var_358:4 + (rax_35 << 2)) = __extractps_memd_xmmps_immb(zmm2, 1)
                    
                    if ((temp0_385 & 4) == 0)
                        goto label_1400bb3b8
                    
                    goto label_1400bb461
                
            label_1400bb3af:
                
                if ((temp0_385 & 4) != 0)
                label_1400bb461:
                    *(&var_358:8 + (rax_35 << 2)) = __extractps_memd_xmmps_immb(zmm2, 2)
                    
                    if ((temp0_385 & 8) != 0)
                        *(&var_358:0xc + (rax_35 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
                else
                label_1400bb3b8:
                    
                    if ((temp0_385 & 8) != 0)
                        *(&var_358:0xc + (rax_35 << 2)) = __extractps_memd_xmmps_immb(zmm2, 3)
        
        if (rax_35 == 8)
            break
        
        zmm1 = *(&var_1b8 + (rax_35 << 2))
        rax_35 += 4
    
    zmm4 = var_358
    zmm10 = var_348
    float temp0_389[0x4] = _mm_sub_ps(zmm4, zmm0)
    zmm5 = *arg1
    zmm2 = *(arg1 + 4)
    float temp0_390[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm0 = _mm_sub_ps(zmm4, temp0_390)
    float temp0_392[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = _mm_sub_ps(zmm10, temp0_392)
    zmm3 = *arg3
    zmm7 = *(arg3 + 4)
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm0 = _mm_div_ps(zmm0, zmm3)
    float temp0_396[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    zmm1 = _mm_div_ps(zmm1, temp0_396)
    zmm8 = arg3[1].d
    zmm13 = _mm_cvttps_epi32(zmm0)
    zmm11 = _mm_cvttps_epi32(zmm1)
    uint128_t var_218_2 = zmm3
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm3), temp0_390)
    zmm3 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm8, 0x20), data_142fc9600)
    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0)
    uint128_t var_248_2 = zmm1
    uint32_t var_1e8_2[0x4] = zmm4
    zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm4, 1)
    zmm4 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
    zmm5 = _mm_blendv_ps(zmm4, zmm13, zmm0)
    int32_t var_258_2[0x4] = zmm11
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), temp0_396), temp0_392)
    float temp0_414[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm0 = _mm_add_ps(zmm0, temp0_414)
    zmm7 = zmm0
    zmm0 = _mm_cmpeq_ps(zmm0, zmm10, 1)
    char temp0_418 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm6))
    zmm15 = arg1[1].d
    float temp0_419[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
    zmm1 = _mm_sub_ps(var_338_3, temp0_419)
    float temp0_421[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    zmm1 = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_421))
    int32_t var_268_2[0x4] = zmm1
    float temp0_426[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_421), temp0_419)
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    var_358 = zmm5
    float temp0_428[0x4] = _mm_cmpeq_ps(zmm7, zmm10, 5)
    
    if (temp0_418 != 0)
        zmm13 = var_258_2
    
    float temp0_429[0x4] = __subps_xmmps_memps(zmm10, var_1d8_2)
    float temp0_430[0x4] = _mm_mul_ps(temp0_389, temp0_389)
    float temp0_431[0x4] = _mm_add_ps(temp0_426, zmm3)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_428, zmm6)) != 0)
        zmm4 = __paddd_xmmdq_memdq(var_258_2, data_142d3f800)
    
    float temp0_435[0x4] = __subps_xmmps_memps(var_338_3, var_2a8_2)
    zmm1 = _mm_add_ps(temp0_430, zx.o(0))
    float temp0_437[0x4] = _mm_mul_ps(temp0_429, temp0_429)
    float temp0_438[0x4] = _mm_blendv_ps(zmm4, zmm13, zmm0)
    var_348 = temp0_438
    zmm0 = _mm_cmpeq_ps(temp0_431, var_338_3, 5)
    float temp0_440[0x4] = _mm_cmpeq_ps(temp0_431, var_338_3, 1)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_440, zmm6)) != 0)
        zmm13 = var_268_2
    
    float temp0_443[0x4] = _mm_add_ps(zmm1, temp0_437)
    float temp0_444[0x4] = _mm_mul_ps(temp0_435, temp0_435)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm6)) != 0)
        zmm4 = __paddd_xmmdq_memdq(var_268_2, data_142d3f800)
    
    zmm4 = _mm_blendv_ps(zmm4, zmm13, temp0_440)
    float temp0_449[0x4] = _mm_add_ps(temp0_443, temp0_444)
    zmm9 = var_218_2
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm5), zmm9), temp0_390)
    zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_438), temp0_396), temp0_392)
    uint32_t var_338_4[0x4] = zmm4
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_421), temp0_419)
    float temp0_459[0x4] = _mm_add_ps(var_248_2, zmm0)
    float temp0_460[0x4] = _mm_add_ps(temp0_414, zmm1)
    zmm3 = _mm_add_ps(zmm3, zmm4)
    zmm0 = _mm_sub_ps(var_1e8_2, temp0_459)
    zmm1 = _mm_sub_ps(zmm10, temp0_460)
    float temp0_464[0x4] = _mm_sub_ps(var_338_3, zmm3)
    zmm0 = _mm_div_ps(zmm0, zmm9)
    zmm1 = _mm_div_ps(zmm1, temp0_396)
    float temp0_467[0x4] = _mm_div_ps(temp0_464, temp0_421)
    var_318 = zmm0
    uint128_t var_308_4 = zmm1
    int64_t rax_40 = 0
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
    
    while (true)
        zmm5 = _mm_cmpeq_epi32(zmm5, zmm0)
        
        if (_mm_movemask_ps(zmm5 & zmm6) != 0)
            char temp0_471 = _mm_movemask_ps(zmm5)
            
            if ((temp0_471 & 1) == 0)
                if ((temp0_471 & 2) != 0)
                    goto label_1400bb820
                
                goto label_1400bb751
            
            *(&var_358 + (rax_40 << 2)) = 0
            
            if ((temp0_471 & 2) != 0)
            label_1400bb820:
                *(&var_358:4 + (rax_40 << 2)) = 0
                
                if ((temp0_471 & 4) == 0)
                    goto label_1400bb75a
                
                goto label_1400bb831
            
        label_1400bb751:
            
            if ((temp0_471 & 4) == 0)
            label_1400bb75a:
                
                if ((temp0_471 & 8) != 0)
                    goto label_1400bb842
                
                goto label_1400bb763
            
        label_1400bb831:
            *(&var_358:8 + (rax_40 << 2)) = 0
            
            if ((temp0_471 & 8) != 0)
            label_1400bb842:
                *(&var_358:0xc + (rax_40 << 2)) = 0
                
                if ((temp0_471 & 1) == 0)
                    goto label_1400bb76c
                
                goto label_1400bb853
            
        label_1400bb763:
            
            if ((temp0_471 & 1) == 0)
            label_1400bb76c:
                
                if ((temp0_471 & 2) != 0)
                    goto label_1400bb864
                
                goto label_1400bb775
            
        label_1400bb853:
            var_318[rax_40] = 0
            
            if ((temp0_471 & 2) != 0)
            label_1400bb864:
                var_318[1 + rax_40] = 0
                
                if ((temp0_471 & 4) == 0)
                    goto label_1400bb77e
                
                goto label_1400bb875
            
        label_1400bb775:
            
            if ((temp0_471 & 4) != 0)
            label_1400bb875:
                var_318[2 + rax_40] = 0
                
                if ((temp0_471 & 8) != 0)
                    var_318[3 + rax_40] = 0
            else
            label_1400bb77e:
                
                if ((temp0_471 & 8) != 0)
                    var_318[3 + rax_40] = 0
        
        int32_t rdx_38 = *(arg4 + rax_40)
        zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_38 - 1), 0), 
            *(&var_358 + (rax_40 << 2)))
        
        if (_mm_movemask_ps(zmm1 & zmm6) != 0)
            char temp0_475 = _mm_movemask_ps(zmm1)
            
            if ((temp0_475 & 1) == 0)
                if ((temp0_475 & 2) != 0)
                    goto label_1400bb89c
                
                goto label_1400bb7c7
            
            *(&var_358 + (rax_40 << 2)) = rdx_38 - 2
            
            if ((temp0_475 & 2) != 0)
            label_1400bb89c:
                *(&var_358:4 + (rax_40 << 2)) = rdx_38 - 2
                
                if ((temp0_475 & 4) == 0)
                    goto label_1400bb7d0
                
                goto label_1400bb8a9
            
        label_1400bb7c7:
            
            if ((temp0_475 & 4) == 0)
            label_1400bb7d0:
                
                if ((temp0_475 & 8) != 0)
                    goto label_1400bb8b6
                
                goto label_1400bb7d9
            
        label_1400bb8a9:
            *(&var_358:8 + (rax_40 << 2)) = rdx_38 - 2
            
            if ((temp0_475 & 8) != 0)
            label_1400bb8b6:
                *(&var_358:0xc + (rax_40 << 2)) = rdx_38 - 2
                
                if ((temp0_475 & 1) == 0)
                    goto label_1400bb7e2
                
                goto label_1400bb8c3
            
        label_1400bb7d9:
            
            if ((temp0_475 & 1) == 0)
            label_1400bb7e2:
                
                if ((temp0_475 & 2) != 0)
                    goto label_1400bb8d4
                
                goto label_1400bb7eb
            
        label_1400bb8c3:
            var_318[rax_40] = 0x3f800000
            
            if ((temp0_475 & 2) != 0)
            label_1400bb8d4:
                var_318[1 + rax_40] = 0x3f800000
                
                if ((temp0_475 & 4) == 0)
                    goto label_1400bb7f4
                
                goto label_1400bb8e5
            
        label_1400bb7eb:
            
            if ((temp0_475 & 4) != 0)
            label_1400bb8e5:
                var_318[2 + rax_40] = 0x3f800000
                
                if ((temp0_475 & 8) != 0)
                    var_318[3 + rax_40] = 0x3f800000
            else
            label_1400bb7f4:
                
                if ((temp0_475 & 8) != 0)
                    var_318[3 + rax_40] = 0x3f800000
        
        if (rax_40 == 8)
            break
        
        zmm5 = *(&var_348 + (rax_40 << 2))
        rax_40 += 4
    
    zmm7 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
    zmm5 = var_358
    zmm2 = var_348
    zmm11 = var_338_4
    zmm4 = _mm_mullo_epi32(zmm7, zmm5)
    zmm8 = _mm_add_epi32(zmm4, zmm2)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
    int32_t temp0_480[0x4] = _mm_mullo_epi32(zmm8, zmm0)
    zmm1 = _mm_add_epi32(temp0_480, zmm11)
    uint128_t* rax_41 = *(arg5 + 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 2) & zmm6
    int64_t rdx_40 = sx.q(zmm1.d)
    zmm3 = *(rax_41 + rdx_40)
    int64_t rbx_9 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rdi_9 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm1, 3))
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rax_41 + rbx_9), 0x10), 
            *(rax_41 + rdi_9), 0x20), 
        *(rax_41 + rbp_9), 0x30)
    zmm12 = _mm_cmpeq_epi32(temp0_460, temp0_460)
    zmm5 = _mm_mullo_epi32(_mm_sub_epi32(zmm5, zmm12), zmm7)
    zmm1 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, zmm2), zmm0), zmm11), 2)
    zmm8 = _mm_mullo_epi32(_mm_add_epi32(zmm8, zmm7), zmm0)
    zmm1 &= zmm6
    zmm7 = *(rax_41 + sx.q(zmm1.d))
    int32_t temp0_498 = _mm_extract_epi32(zmm1, 1)
    int64_t rbx_11 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_500 = _mm_extract_epi32(zmm1, 3)
    float temp0_504[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm7, *(rax_41 + sx.q(temp0_498)), 0x10), 
                *(rax_41 + rbx_11), 0x20), 
            *(rax_41 + sx.q(temp0_500)), 0x30), 
        zmm3)
    zmm10 = var_318
    zmm9 = var_308_4
    float temp0_506[0x4] = _mm_add_ps(_mm_mul_ps(temp0_504, zmm10), zmm3)
    zmm2 = _mm_sub_epi32(zmm2, zmm12)
    zmm4 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm2), zmm0), zmm11), 2)
        & zmm6
    zmm3 = *(rax_41 + sx.q(zmm4[0]))
    int64_t rcx_11 = sx.q(_mm_extract_epi32(zmm4, 1))
    int32_t temp0_513 = _mm_extract_epi32(zmm4, 2)
    int64_t rbx_13 = sx.q(_mm_extract_epi32(zmm4, 3))
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rax_41 + rcx_11), 0x10), 
            *(rax_41 + sx.q(temp0_513)), 0x20), 
        *(rax_41 + rbx_13), 0x30)
    zmm2 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm2, zmm5), zmm0), zmm11), 2)
        & zmm6
    zmm5 = *(rax_41 + sx.q(zmm2[0]))
    int32_t temp0_522 = _mm_extract_epi32(zmm2, 1)
    int64_t rbp_17 = sx.q(_mm_extract_epi32(zmm2, 2))
    int32_t temp0_524 = _mm_extract_epi32(zmm2, 3)
    float temp0_529[0x4] = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(rax_41 + sx.q(temp0_522)), 0x10), 
                    *(rax_41 + rbp_17), 0x20), 
                *(rax_41 + sx.q(temp0_524)), 0x30), 
            zmm3), 
        zmm10)
    float temp0_532[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r10_5 + rax_41 + rdx_40), *(r14_5 + rax_41 + rbx_9), 
                0x10), 
            *(r15_1 + rax_41 + rdi_9), 0x20), 
        *(r13_1 + rax_41 + rbp_9), 0x30)
    zmm0 = _mm_add_epi32(zmm0, zmm11)
    int32_t temp0_534[0x4] = _mm_add_epi32(temp0_480, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm8)
    zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm11), 2) & zmm6
    zmm4 = *(r10_5 + sx.q(zmm8[0]) + rax_41)
    void* rcx_22 = sx.q(_mm_extract_epi32(zmm8, 1)) + rax_41
    void* rdx_45 = sx.q(_mm_extract_epi32(zmm8, 2)) + rax_41
    void* rbp_20 = sx.q(_mm_extract_epi32(zmm8, 3)) + rax_41
    zmm4 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(r14_5 + rcx_22), 0x10), 
            *(r15_1 + rdx_45), 0x20), 
        *(r13_1 + rbp_20), 0x30)
    float temp0_544[0x4] = _mm_add_ps(temp0_529, zmm3)
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_532), zmm10), temp0_532)
    zmm13 = _mm_slli_epi32(temp0_534, 2) & zmm6
    zmm2 = *(r10_5 + sx.q(zmm13[0]) + rax_41)
    void* rcx_28 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_41
    void* rdx_48 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_41
    void* rbp_23 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_41
    float temp0_554[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(r14_5 + rcx_28), 0x10), 
            *(r15_1 + rdx_48), 0x20), 
        *(r13_1 + rbp_23), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & zmm6
    zmm1 = *(r10_5 + sx.q(zmm0.d) + rax_41)
    void* rcx_34 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_41
    void* rdx_51 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_41
    void* rbp_26 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_41
    zmm1 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(r14_5 + rcx_34), 0x10), 
                        *(r15_1 + rdx_51), 0x20), 
                    *(r13_1 + rbp_26), 0x30), 
                temp0_554), 
            zmm10), 
        temp0_554)
    float temp0_567[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_544, temp0_506), zmm9), temp0_506)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm4), zmm9), zmm4), temp0_567), 
            temp0_467), 
        temp0_567)
    zmm4 = temp0_449
    float temp0_574[0x4] = _mm_cmpeq_ps(zmm4, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm4, 7), temp0_574), zmm6)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_579[0x4] = _mm_rsqrt_ps(zmm4)
        zmm4 = _mm_mul_ps(_mm_mul_ps(zmm4, temp0_579), temp0_579)
        zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm4), temp0_579), 
            data_142d3f640)
        float temp0_585[0x4] = _mm_rcp_ps(zmm3)
        zmm3 = _mm_mul_ps(zmm3, temp0_585)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_585), zmm1), zmm0)
    
    zmm8 = var_278_1
    zmm9 = var_288_1
    zmm10 = var_298_1
    rdx_52 = arg10
    zmm0 = arg8
    zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm6)
    char temp0_595 = _mm_movemask_ps(zmm0)
    
    if (temp0_595 == 0)
        result = arg9
    else
        float temp0_596[0x4] = _mm_mul_ps(var_1c8, zmm1)
        float temp0_597[0x4] = _mm_mul_ps(var_1b8, zmm1)
        float temp0_598[0x4] = _mm_mul_ps(var_1a8_1, zmm1)
        zmm4 = zmm8
        char temp2_1 = temp0_595 & 1
        
        if (temp2_1 == 0)
            zmm3 = zmm9
            
            if (temp2_1 != 0)
                goto label_1400bbdc6
            
            goto label_1400bbd39
        
        zmm4 = zmm8
        zmm4[0] = zmm4[0] f+ temp0_596[0]
        zmm3 = zmm9
        
        if (temp2_1 != 0)
        label_1400bbdc6:
            zmm3.d = zmm9.d f+ temp0_597[0]
            zmm2 = zmm10
            
            if (temp2_1 == 0)
                goto label_1400bbd43
            
            goto label_1400bbdd4
        
    label_1400bbd39:
        zmm2 = zmm10
        bool cond:11_1
        bool cond:12_1
        bool cond:15_1
        bool cond:16_1
        
        if (temp2_1 == 0)
        label_1400bbd43:
            zmm8 = _mm_add_ps(zmm8, temp0_596)
            char temp6_1 = temp0_595 & 2
            cond:11_1 = temp6_1 != 0
            cond:12_1 = temp6_1 == 0
            cond:15_1 = temp6_1 == 0
            cond:16_1 = temp6_1 != 0
            
            if (temp6_1 != 0)
                goto label_1400bbde8
            
            goto label_1400bbd4f
        
    label_1400bbdd4:
        zmm2 = zmm10
        zmm2[0] = zmm2[0] + temp0_598[0]
        zmm8 = _mm_add_ps(zmm8, temp0_596)
        char temp5_1 = temp0_595 & 2
        cond:11_1 = temp5_1 != 0
        cond:12_1 = temp5_1 == 0
        cond:15_1 = temp5_1 == 0
        cond:16_1 = temp5_1 != 0
        
        if (temp5_1 != 0)
        label_1400bbde8:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
            zmm9 = _mm_add_ps(zmm9, temp0_597)
            
            if (cond:12_1)
                goto label_1400bbd59
            
            goto label_1400bbdf9
        
    label_1400bbd4f:
        zmm9 = _mm_add_ps(zmm9, temp0_597)
        
        if (not(cond:11_1))
        label_1400bbd59:
            zmm10 = _mm_add_ps(zmm10, temp0_598)
            
            if (cond:16_1)
                goto label_1400bbe0a
            
            goto label_1400bbd63
        
    label_1400bbdf9:
        zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
        zmm10 = _mm_add_ps(zmm10, temp0_598)
        bool cond:19_1
        bool cond:20_1
        bool cond:23_1
        bool cond:24_1
        
        if (not(cond:15_1))
        label_1400bbe0a:
            zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
            char temp10_1 = temp0_595 & 4
            cond:19_1 = temp10_1 == 0
            cond:20_1 = temp10_1 != 0
            cond:23_1 = temp10_1 != 0
            cond:24_1 = temp10_1 == 0
            
            if (temp10_1 == 0)
                goto label_1400bbd6b
            
            goto label_1400bbe19
        
    label_1400bbd63:
        char temp9_1 = temp0_595 & 4
        cond:19_1 = temp9_1 == 0
        cond:20_1 = temp9_1 != 0
        cond:23_1 = temp9_1 != 0
        cond:24_1 = temp9_1 == 0
        
        if (temp9_1 != 0)
        label_1400bbe19:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
            
            if (not(cond:19_1))
            label_1400bbe26:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                
                if (cond:24_1)
                    goto label_1400bbd77
                
                goto label_1400bbe33
        else
        label_1400bbd6b:
            
            if (cond:20_1)
                goto label_1400bbe26
        
        bool cond:29_1
        bool cond:30_1
        bool cond:33_1
        bool cond:34_1
        
        if (not(cond:23_1))
        label_1400bbd77:
            char temp14_1 = temp0_595 & 8
            cond:29_1 = temp14_1 != 0
            cond:30_1 = temp14_1 == 0
            cond:33_1 = temp14_1 == 0
            cond:34_1 = temp14_1 != 0
            result = arg9
            
            if (temp14_1 == 0)
                goto label_1400bbe4a
            
            goto label_1400bbd87
        
    label_1400bbe33:
        zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
        char temp13_1 = temp0_595 & 8
        cond:29_1 = temp13_1 != 0
        cond:30_1 = temp13_1 == 0
        cond:33_1 = temp13_1 == 0
        cond:34_1 = temp13_1 != 0
        result = arg9
        
        if (temp13_1 == 0)
        label_1400bbe4a:
            zmm8 = zmm4
            
            if (cond:30_1)
                goto label_1400bbd94
            
            goto label_1400bbe54
        
    label_1400bbd87:
        zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
        
        if (cond:29_1)
        label_1400bbe54:
            zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
            
            if (not(cond:33_1))
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        else
        label_1400bbd94:
            zmm9 = zmm3
            
            if (cond:34_1)
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        
        var_2d8_1 = _mm_blendv_ps(var_2d8_1, _mm_add_ps(zmm1, var_2d8_1), zmm0)
        zmm10 = zmm2

float temp0_616[0x4] = _mm_hadd_ps(zmm8, zmm8)
float temp0_617[0x4] = _mm_hadd_ps(temp0_616, temp0_616)
float temp0_618[0x4] = _mm_hadd_ps(zmm9, zmm9)
float temp0_620[0x4] = _mm_insert_ps(temp0_617, _mm_hadd_ps(temp0_618, temp0_618), 0x1c)
float temp0_621[0x4] = _mm_hadd_ps(zmm10, zmm10)
float temp0_622[0x4] = _mm_hadd_ps(temp0_621, temp0_621)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_52), rdx_52[1].d, 0x20), 
    temp0_620[0].q | temp0_622[0].q << 0x40)
*rdx_52 = zmm0.d
*(rdx_52 + 4) = __extractps_memd_xmmps_immb(zmm0, 1)
rdx_52[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
zmm0 = _mm_hadd_ps(var_2d8_1, var_2d8_1)
zmm0.d = _mm_hadd_ps(zmm0, zmm0).d f+ *result
*result = zmm0.d
return result
