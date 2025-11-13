// 函数: sub_14013ba4e
// 地址: 0x14013ba4e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t temp0_479[0x4] = _mm_add_epi64(arg13, arg14)
    arg15 = _mm_add_epi64(_mm_add_epi64(arg15, arg12), arg10)
    int32_t temp0_3[0x4] = _mm_add_epi64(temp0_479, arg1)
    float zmm1[0x4] = _mm_shuffle_epi32(arg18, 0x50)
    arg12 = _mm_blendv_ps(zx.o(0), temp0_3, zmm1)
    float zmm2[0x4] = _mm_shuffle_epi32(arg18, 0xfa)
    float temp0_7[0x4] = _mm_blendv_ps(zx.o(0), arg15, zmm2)
    int64_t rax_1 = _mm_extract_epi64(arg12, 1)
    void* rdx = arg4 + rax_1
    arg15 = *(arg4 + rax_1)
    int64_t rax_2 = temp0_7[0].q
    int64_t rbp_1 = _mm_extract_epi64(temp0_7, 1)
    void* rbx_1 = arg4 + rax_2
    float zmm7[0x4] = data_1434426c0
    float temp0_8[0x4] = _mm_blendv_ps(zx.o(0), zmm7, zmm1)
    arg14 = *(arg4 + rax_2)
    float temp0_9[0x4] = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
    double arg_d0 = (*(arg4 + rbp_1))[0]
    void* rsi_2 = arg12[0].q + arg4
    arg12 = *(temp0_8[0].q + rsi_2)
    arg13 = *(_mm_extract_epi64(temp0_8, 1) + rdx)
    float zmm8[0x4] = *(temp0_9[0].q + rbx_1)
    int64_t rax_6 = _mm_extract_epi64(temp0_9, 1)
    void* rbp_2 = arg4 + rbp_1
    arg1 = zmm1
    zmm1 = data_1434426e0
    float temp0_10[0x4] = _mm_blendv_ps(zx.o(0), zmm1, arg1)
    arg18 = *(rax_6 + rbp_2)
    float temp0_11[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
    arg1 = *(temp0_10[0].q + rsi_2)
    zmm1 = *(_mm_extract_epi64(temp0_10, 1) + rdx)
    float (* rax_9)[0x4] = temp0_11[0].q
    int64_t rdx_1 = _mm_extract_epi64(temp0_11, 1)
    zmm2 = *(rax_9 + rbx_1)
    float zmm12[0x4] = *(rdx_1 + rbp_2)
    uint64_t rcx_1 = zx.q(arg8)
    int64_t rdi_2 = rcx_1 & 1
    
    if (rdi_2 != 0)
        zmm7 = _mm_blend_ps(arg26, *rsi_2, 1)
    else
        zmm7 = arg26
    
    float zmm6[0x4] = arg25
    int32_t rdx_2 = arg24
    int32_t rbp_3 = arg21
    
    if (rdi_2 != 0)
        zmm6 = _mm_blend_ps(zmm6, arg12, 1)
    
    int64_t r14_1
    bool cond:2_1
    bool cond:3_1
    bool cond:4_1
    
    if (rdi_2 == 0)
        arg1 = arg19
        r14_1 = rcx_1 & 2
        cond:2_1 = r14_1 == 0
        cond:3_1 = r14_1 == 0
        cond:4_1 = r14_1 != 0
        
        if (r14_1 != 0)
            zmm7 = _mm_insert_ps(zmm7, arg15, 0x10)
    else
        arg1 = _mm_blend_ps(arg19, arg1, 1)
        r14_1 = rcx_1 & 2
        cond:2_1 = r14_1 == 0
        cond:3_1 = r14_1 == 0
        cond:4_1 = r14_1 != 0
        
        if (r14_1 != 0)
            zmm7 = _mm_insert_ps(zmm7, arg15, 0x10)
    
    if (not(cond:2_1))
        zmm6 = _mm_insert_ps(zmm6, arg13, 0x10)
        arg10 = __return_addr.o
        
        if (cond:4_1)
            goto label_14013c127
        
        goto label_14013c0e0
    
    arg10 = __return_addr.o
    int64_t rsi_6
    bool cond:5_1
    bool cond:7_1
    bool cond:8_1
    bool cond:6_1
    
    if (cond:3_1)
    label_14013c0e0:
        rsi_6 = rcx_1 & 4
        cond:5_1 = rsi_6 == 0
        cond:6_1 = rsi_6 != 0
        cond:7_1 = rsi_6 == 0
        cond:8_1 = rsi_6 != 0
        
        if (rsi_6 != 0)
        label_14013c0e6:
            zmm7 = _mm_insert_ps(zmm7, arg14, 0x20)
            
            if (cond:6_1)
                goto label_14013c138
            
            goto label_14013c0ef
    else
    label_14013c127:
        arg1 = _mm_insert_ps(arg1, zmm1, 0x10)
        rsi_6 = rcx_1 & 4
        cond:5_1 = rsi_6 == 0
        cond:6_1 = rsi_6 != 0
        cond:7_1 = rsi_6 == 0
        cond:8_1 = rsi_6 != 0
        
        if (rsi_6 != 0)
            goto label_14013c0e6
    
    if (not(cond:5_1))
    label_14013c138:
        zmm6 = _mm_insert_ps(zmm6, zmm8, 0x20)
        arg14 = arg20
        
        if (cond:8_1)
            goto label_14013c0f8
        
        goto label_14013c148
    
label_14013c0ef:
    arg14 = arg20
    int64_t rcx_21
    bool cond:9_1
    bool cond:11_1
    bool cond:12_1
    bool cond:10_1
    
    if (cond:7_1)
    label_14013c148:
        rcx_21 = rcx_1 & 8
        cond:9_1 = rcx_21 == 0
        cond:10_1 = rcx_21 != 0
        cond:11_1 = rcx_21 == 0
        cond:12_1 = rcx_21 != 0
        
        if (rcx_21 != 0)
        label_14013c14e:
            zmm7 = __insertps_xmmps_memd_immb(zmm7, arg_d0.d, 0x30)
            
            if (cond:10_1)
                goto label_14013c106
            
            goto label_14013c15b
    else
    label_14013c0f8:
        arg1 = _mm_insert_ps(arg1, zmm2, 0x20)
        rcx_21 = rcx_1 & 8
        cond:9_1 = rcx_21 == 0
        cond:10_1 = rcx_21 != 0
        cond:11_1 = rcx_21 == 0
        cond:12_1 = rcx_21 != 0
        
        if (rcx_21 != 0)
            goto label_14013c14e
    
    if (cond:9_1)
    label_14013c15b:
        zmm8 = zx.o(0)
        arg18 = arg22
        
        if (not(cond:11_1))
            arg1 = _mm_insert_ps(arg1, zmm12, 0x30)
    else
    label_14013c106:
        zmm6 = _mm_insert_ps(zmm6, arg18, 0x30)
        zmm8 = zx.o(0)
        arg18 = arg22
        
        if (cond:12_1)
            arg1 = _mm_insert_ps(arg1, zmm12, 0x30)
    
    arg15 = zx.o(arg53)
    arg26 = zmm7
    arg12 = _mm_sub_ps(zmm7, arg16)
    arg25 = zmm6
    float temp0_127[0x4] = _mm_sub_ps(zmm6, arg17)
    arg12 = _mm_mul_ps(arg12, arg18)
    zmm1 = arg16
    
    if (rdi_2 != 0)
        zmm1 = arg16
        zmm1[0] = zmm1[0] f+ arg12[0]
    
    arg19 = arg1
    float temp0_129[0x4] = _mm_sub_ps(arg1, arg11)
    float temp0_130[0x4] = _mm_mul_ps(temp0_127, arg18)
    zmm2 = arg17
    
    if (rdi_2 != 0)
        zmm2 = arg17
        zmm2[0] = zmm2[0] + temp0_130[0]
        zmm7 = _mm_mul_ps(temp0_129, arg18)
        arg1 = arg11
        
        if (rdi_2 != 0)
            goto label_14013c529
        
        goto label_14013c4c3
    
    zmm7 = _mm_mul_ps(temp0_129, arg18)
    arg1 = arg11
    bool cond:16_1
    bool cond:17_1
    bool cond:18_1
    bool cond:19_1
    
    if (rdi_2 != 0)
    label_14013c529:
        arg1 = arg11
        arg1[0].d = arg1[0].d f+ zmm7[0]
        arg16 = _mm_add_ps(arg16, arg12)
        cond:16_1 = r14_1 == 0
        cond:17_1 = r14_1 != 0
        cond:18_1 = r14_1 == 0
        cond:19_1 = r14_1 != 0
        
        if (r14_1 != 0)
            goto label_14013c4cc
        
        goto label_14013c539
    
label_14013c4c3:
    arg16 = _mm_add_ps(arg16, arg12)
    cond:16_1 = r14_1 == 0
    cond:17_1 = r14_1 != 0
    cond:18_1 = r14_1 == 0
    cond:19_1 = r14_1 != 0
    
    if (r14_1 != 0)
    label_14013c4cc:
        zmm1 = _mm_blend_ps(zmm1, arg16, 2)
        arg17 = _mm_add_ps(arg17, temp0_130)
        
        if (cond:17_1)
            goto label_14013c53f
        
        goto label_14013c4d9
    
label_14013c539:
    arg17 = _mm_add_ps(arg17, temp0_130)
    
    if (not(cond:16_1))
    label_14013c53f:
        zmm2 = _mm_blend_ps(zmm2, arg17, 2)
        arg11 = _mm_add_ps(arg11, zmm7)
        
        if (cond:19_1)
            goto label_14013c4de
        
        goto label_14013c54b
    
label_14013c4d9:
    arg11 = _mm_add_ps(arg11, zmm7)
    bool cond:20_1
    bool cond:21_1
    bool cond:22_1
    bool cond:23_1
    
    if (not(cond:18_1))
    label_14013c4de:
        arg1 = _mm_blend_ps(arg1, arg11, 2)
        zmm7 = arg31
        cond:20_1 = rsi_6 == 0
        cond:21_1 = rsi_6 != 0
        cond:22_1 = rsi_6 == 0
        cond:23_1 = rsi_6 != 0
        
        if (rsi_6 != 0)
            goto label_14013c558
        
        goto label_14013c4f1
    
label_14013c54b:
    zmm7 = arg31
    cond:20_1 = rsi_6 == 0
    cond:21_1 = rsi_6 != 0
    cond:22_1 = rsi_6 == 0
    cond:23_1 = rsi_6 != 0
    
    if (rsi_6 == 0)
    label_14013c4f1:
        
        if (not(cond:20_1))
        label_14013c4f3:
            zmm2 = _mm_blend_ps(zmm2, arg17, 4)
            
            if (cond:23_1)
                goto label_14013c563
            
            goto label_14013c4fc
    else
    label_14013c558:
        zmm1 = _mm_blend_ps(zmm1, arg16, 4)
        
        if (cond:21_1)
            goto label_14013c4f3
    
    bool cond:24_1
    bool cond:25_1
    bool cond:26_1
    bool cond:27_1
    
    if (not(cond:22_1))
    label_14013c563:
        arg1 = _mm_blend_ps(arg1, arg11, 4)
        cond:24_1 = rcx_21 == 0
        cond:25_1 = rcx_21 != 0
        cond:26_1 = rcx_21 != 0
        cond:27_1 = rcx_21 == 0
        
        if (rcx_21 != 0)
            goto label_14013c501
        
        goto label_14013c56e
    
label_14013c4fc:
    cond:24_1 = rcx_21 == 0
    cond:25_1 = rcx_21 != 0
    cond:26_1 = rcx_21 != 0
    cond:27_1 = rcx_21 == 0
    
    if (rcx_21 != 0)
    label_14013c501:
        arg16 = _mm_blend_ps(arg16, zmm1, 7)
        
        if (cond:25_1)
            goto label_14013c574
        
        goto label_14013c50a
    
label_14013c56e:
    arg16 = zmm1
    
    if (cond:24_1)
    label_14013c50a:
        arg17 = zmm2
        
        if (cond:26_1)
            arg1 = _mm_blend_ps(arg1, arg11, 8)
    else
    label_14013c574:
        arg17 = _mm_blend_ps(arg17, zmm2, 7)
        
        if (not(cond:27_1))
            arg1 = _mm_blend_ps(arg1, arg11, 8)
    
    arg11 = arg1
    
    while (true)
        float temp0_148[0x4] = _mm_unpacklo_ps(arg11, zmm8[0].q)
        arg1 = _mm_unpackhi_ps(arg11, zmm8)
        arg12 = _mm_unpacklo_ps(arg16, arg17[0].q)
        float temp0_151[0x4] = _mm_unpackhi_ps(arg16, arg17)
        float temp0_152[0x4] = _mm_insert_ps(arg12, arg11, 0x28)
        float arg_170[0x4] = temp0_152
        int64_t rax_28 = sx.q(arg10[0]) * 0x30
        *(arg7 + rax_28 + 0x10) = __extractps_memd_xmmps_immb(arg16, 0)
        arg12 = _mm_unpackhi_pd(arg12, temp0_148[0].q)
        *(arg7 + rax_28 + 0x14) = __extractps_memd_xmmps_immb(arg17, 0)
        *(arg7 + rax_28 + 0x18) = __extractps_memd_xmmps_immb(arg11, 0)
        *(arg7 + rax_28 + 0x1c) = 0
        int64_t rax_32 = sx.q(_mm_extract_epi32(arg10, 2)) * 0x30
        *(arg7 + rax_32 + 0x10) = __extractps_memd_xmmps_immb(arg16, 1)
        int32_t arg_180[0x4] = arg12
        *(arg7 + rax_32 + 0x14) = __extractps_memd_xmmps_immb(arg17, 1)
        float temp0_160[0x4] = _mm_insert_ps(temp0_151, arg11, 0xa8)
        *(arg7 + rax_32 + 0x18) = __extractps_memd_xmmps_immb(arg11, 1)
        *(arg7 + rax_32 + 0x1c) = 0
        int64_t rax_36 = sx.q(arg14[0]) * 0x30
        *(arg7 + rax_36 + 0x10) = __extractps_memd_xmmps_immb(arg16, 2)
        float arg_190[0x4] = temp0_160
        *(arg7 + rax_36 + 0x14) = __extractps_memd_xmmps_immb(arg17, 2)
        zmm1 = _mm_unpackhi_pd(temp0_151, arg1[0])
        *(arg7 + rax_36 + 0x18) = __extractps_memd_xmmps_immb(arg11, 2)
        *(arg7 + rax_36 + 0x1c) = 0
        *(arg7 + sx.q(_mm_extract_epi32(arg14, 2)) * 0x30 + 0x10) = zmm1
        zmm6 = _mm_cmpeq_epi32(temp0_152, temp0_152)
        
        if (rbp_3 + 4 s>= arg29)
            int64_t result = zx.q(arg55)
            
            if (rbp_3 + 4 s< result.d)
                arg10 = arg15
                arg1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp_3 + 4), 0), data_142e11d00)
                int32_t temp0_171[0x4] = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), arg1)
                arg1 = _mm_slli_epi32(arg1, 3) & temp0_171
                int64_t rax_42 = sx.q(arg1[0].d)
                int64_t rdx_18 = sx.q(_mm_extract_epi32(arg1, 1))
                int64_t rbp_19 = sx.q(_mm_extract_epi32(arg1, 2))
                int64_t rdi_12 = sx.q(_mm_extract_epi32(arg1, 3))
                arg11 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg6 + rax_42)), *(arg6 + rdx_18), 1), 
                        *(arg6 + rbp_19), 2), 
                    *(arg6 + rdi_12), 3)
                arg1 = data_142fc95e0 & temp0_171
                int32_t* r12_2 = zx.q(_mm_extract_epi32(arg1, 1))
                int32_t* r15_4 = zx.q(_mm_extract_epi32(arg1, 2))
                int32_t* r14_3 = zx.q(_mm_extract_epi32(arg1, 3))
                uint64_t r11_6 = zx.q(arg1[0].d)
                uint32_t temp0_185[0x4] = _mm_slli_epi32(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(r11_6 + arg6 + rax_42)), 
                                *(r12_2 + arg6 + rdx_18), 1), 
                            *(r15_4 + arg6 + rbp_19), 2), 
                        *(r14_3 + arg6 + rdi_12), 3), 
                    4)
                arg1 = temp0_185 & temp0_171
                int64_t rax_44 = sx.q(arg1[0].d)
                int64_t rdx_20 = sx.q(_mm_extract_epi32(arg1, 1))
                int64_t rsi_10 = sx.q(_mm_extract_epi32(arg1, 2))
                int64_t rdi_14 = sx.q(_mm_extract_epi32(arg1, 3))
                arg15 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_44)), *(arg3 + rdx_20), 1), 
                        *(arg3 + rsi_10), 2), 
                    *(arg3 + rdi_14), 3)
                zmm1 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(r11_6 + arg3 + rax_44)), 
                            *(r12_2 + arg3 + rdx_20), 1), 
                        *(r15_4 + arg3 + rsi_10), 2), 
                    *(r14_3 + arg3 + rdi_14), 3)
                zmm7 = zx.o(0)
                zmm12 = _mm_shuffle_epi32(arg15, 0x4e)
                arg1 = _mm_cmpgt_epi32(data_1434422d0, zmm1) & temp0_171
                char temp0_197 = _mm_movemask_ps(arg1)
                zmm2 = zx.o(0)
                char temp0_198
                
                if (temp0_197 != 0)
                    temp0_198 = _mm_movemask_ps(temp0_171)
                    arg18 = zx.o(0)
                    zmm2 = arg1
                    zmm8 = zx.o(0)
                    arg16 = zx.o(0)
                
                if (temp0_197 == 0 || temp0_198 != temp0_197)
                    int32_t temp0_199[0x4] = _mm_cmpeq_epi32(arg12, arg12)
                    zmm2 ^= temp0_199
                    arg18 = zx.o(0)
                    zmm8 = zx.o(0)
                    
                    if (not(0f >= arg10[0]))
                        int32_t temp0_200[0x4] = _mm_add_epi32(temp0_199, zmm1)
                        
                        if (arg10[0] >= 1f)
                            zmm7 = zx.o(0)
                            arg18 = _mm_blendv_ps(zx.o(0), temp0_200, _mm_and_ps(zmm2, temp0_171))
                            zmm8 = arg18
                        else
                            float temp0_201[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
                            float temp0_203[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(temp0_200), temp0_201)
                            arg1 = _mm_and_ps(zmm2, temp0_171)
                            arg14 = _mm_round_ps(temp0_203, 9)
                            arg18 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(_mm_cvttps_epi32(arg14), temp0_200), arg1)
                            zmm7 = zx.o(0)
                            
                            if (arg54 != 1)
                                zmm7 = _mm_sub_ps(temp0_203, arg14)
                            
                            zmm8 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(_mm_sub_epi32(arg18, _mm_cmpeq_epi32(arg14, arg14)), 
                                    temp0_200), 
                                arg1)
                    
                    arg16 = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                
                arg10 = _mm_cvtepi32_epi64(arg15[0].q)
                zmm6 = _mm_cvtepi32_epi64(zmm12[0].q)
                int32_t rcx_27 = arg23.d
                int32_t rax_47
                rax_47.b = rcx_27 == 3
                arg1 = _mm_shuffle_epi32(zx.o(neg.d(rax_47)), 0)
                arg1 &= __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0)
                float temp0_221[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg1)
                zmm7 = _mm_cvtepi32_epi64(temp0_221[0].q)
                arg12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_221, 0x4e)[0])
                arg17 = _mm_shuffle_epi32(zx.o(arg28), 0)
                uint64_t rsi_11 = zx.q(rcx_27)
                arg22 = arg12
                __return_addr.o = zmm7
                arg27 = zmm6
                arg24.o = arg10
                int32_t rax_67
                
                if (rcx_27 u> 6)
                label_14013cf68:
                    char temp0_342 = _mm_movemask_ps(temp0_171)
                    zmm7 = zx.o(0)
                    rax_67 = arg23.d
                    
                    if ((temp0_342 & 4) != 0)
                        zmm7 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                    
                    if ((temp0_342 & 8) != 0)
                        zmm7 = _mm_blend_epi16(zmm7, zx.o(0), 0xc0)
                    
                label_14013cfc2:
                    zmm12 = zmm7
                    zmm6 = zmm7
                    goto label_14013d047
                
                zmm2 = _mm_mullo_epi32(arg18, arg17)
                arg1 = _mm_cvtepi32_epi64(zmm2[0].q)
                zmm12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm2, 0x4e)[0].q)
                
                switch (rsi_11)
                    case 0, 1
                        arg21.o = arg17
                        zmm2 = _mm_add_epi64(zmm7, arg10)
                        arg10 = _mm_add_epi64(_mm_add_epi64(arg12, zmm6), zmm12)
                        zmm2 = _mm_add_epi64(zmm2, arg1)
                        zmm1 = _mm_shuffle_epi32(temp0_171, 0x50)
                        arg12 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm2 = _mm_shuffle_epi32(temp0_171, 0xfa)
                        float temp0_237[0x4] = _mm_blendv_ps(zx.o(0), arg10, zmm2)
                        int64_t rax_49 = _mm_extract_epi64(arg12, 1)
                        void* rdx_24 = arg4 + rax_49
                        arg31 = *(arg4 + rax_49)
                        int64_t rax_50 = temp0_237[0].q
                        void* rcx_28 = arg4 + rax_50
                        int64_t rbx_6 = _mm_extract_epi64(temp0_237, 1)
                        arg10 = data_1434426c0
                        float temp0_238[0x4] = _mm_blendv_ps(zx.o(0), arg10, zmm1)
                        arg30 = *(arg4 + rax_50)
                        float temp0_239[0x4] = _mm_blendv_ps(zx.o(0), arg10, zmm2)
                        arg20 = *(arg4 + rbx_6)
                        void* rbp_22 = arg12[0].q + arg4
                        zmm12 = *(temp0_238[0].q + rbp_22)
                        arg14 = *(_mm_extract_epi64(temp0_238, 1) + rdx_24)
                        arg19 = *(temp0_239[0].q + rcx_28)
                        void* rbx_7 = arg4 + rbx_6
                        arg17 = *(_mm_extract_epi64(temp0_239, 1) + rbx_7)
                        arg10 = data_1434426e0
                        arg12 = _mm_blendv_ps(zx.o(0), arg10, zmm1)
                        zmm6 = _mm_blendv_ps(zx.o(0), arg10, zmm2)
                        zmm7 = *(arg12[0].q + rbp_22)
                        zmm2 = *(_mm_extract_epi64(arg12, 1) + rdx_24)
                        float (* rax_57)[0x4] = zmm6[0].q
                        double (* rdx_25)[0x2] = _mm_extract_epi64(zmm6, 1)
                        zmm1 = *(rax_57 + rcx_28)
                        arg1 = *(rdx_25 + rbx_7)
                        char temp0_242 = _mm_movemask_ps(temp0_171)
                        int64_t rax_58
                        bool cond:43
                        bool cond:44
                        bool cond:47
                        bool cond:48
                        
                        if ((temp0_242 & 1) == 0)
                            char temp10_1 = temp0_242 & 2
                            cond:43 = temp10_1 != 0
                            cond:44 = temp10_1 == 0
                            cond:47 = temp10_1 != 0
                            cond:48 = temp10_1 == 0
                            rax_58 = arg23
                            arg10 = arg17
                            
                            if (temp10_1 == 0)
                                goto label_14013cfe4
                            
                            goto label_14013caf8
                        
                        zmm6 = *rbp_22
                        char temp9_1 = temp0_242 & 2
                        cond:43 = temp9_1 != 0
                        cond:44 = temp9_1 == 0
                        cond:47 = temp9_1 != 0
                        cond:48 = temp9_1 == 0
                        rax_58 = arg23
                        arg10 = arg17
                        
                        if (temp9_1 == 0)
                        label_14013cfe4:
                            arg17 = arg21.o
                            
                            if (cond:44)
                                goto label_14013cb10
                            
                            goto label_14013cff1
                        
                    label_14013caf8:
                        zmm6 = __insertps_xmmps_memd_immb(zmm6, arg31[0], 0x10)
                        arg17 = arg21.o
                        
                        if (cond:43)
                        label_14013cff1:
                            zmm12 = _mm_insert_ps(zmm12, arg14, 0x10)
                            
                            if (cond:47)
                            label_14013cb16:
                                float temp0_244[0x4] = _mm_insert_ps(zmm7, zmm2, 0x10)
                                
                                if ((temp0_242 & 4) != 0)
                                    return sub_14013d007(temp0_242, zmm1, arg3, arg4, rax_58, 
                                        rsi_11, arg7, arg1, arg10, zmm6, temp0_244, zmm8, 
                                        temp0_171, arg15, zmm12, arg17, arg18) __tailcall
                                
                                jump(0x14013cb25)
                        else
                        label_14013cb10:
                            
                            if (not(cond:48))
                                goto label_14013cb16
                        
                        if ((temp0_242 & 4) == 0)
                            jump(0x14013cb25)
                        
                        return sub_14013d007(temp0_242, zmm1, arg3, arg4, rax_58, rsi_11, arg7, 
                            arg1, arg10, zmm6, zmm7, zmm8, temp0_171, arg15, zmm12, arg17, arg18)
                            __tailcall
                    case 2
                        zmm1 = _mm_add_epi64(zmm7, arg10)
                        arg10 = _mm_add_epi64(_mm_add_epi64(arg12, zmm6), zmm12)
                        zmm1 = _mm_add_epi64(zmm1, arg1)
                        zmm2 = _mm_shuffle_epi32(temp0_171, 0x50)
                        arg12 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        arg14 = _mm_shuffle_epi32(temp0_171, 0xfa)
                        float temp0_252[0x4] = _mm_blendv_ps(zx.o(0), arg10, arg14)
                        zmm1 = data_1434426b0
                        float temp0_253[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        float temp0_254[0x4] = _mm_blendv_ps(zx.o(0), zmm1, arg14)
                        int64_t rcx_31 = arg12[0].q
                        void* rbx_8 = arg4 + rcx_31
                        int64_t rdx_27 = _mm_extract_epi64(arg12, 1)
                        void* rbp_23 = arg4 + rdx_27
                        void* rax_60 = temp0_253[0].q
                        int64_t rdi_15 = _mm_extract_epi64(temp0_253, 1)
                        arg12 = data_1434426c0
                        float temp0_255[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                        zmm2 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_60 + rbx_8)), *(rdi_15 + rbp_23), 1)
                        void* rax_62 = temp0_255[0].q
                        int16_t* rdi_16 = _mm_extract_epi64(temp0_255, 1)
                        int64_t rbx_9 = temp0_252[0].q
                        arg10 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_62 + rbx_8)), *(rdi_16 + rbp_23), 1)
                        void* rax_64 = arg4 + rbx_9
                        int64_t rbp_24 = _mm_extract_epi64(temp0_252, 1)
                        int16_t* rdi_17 = temp0_254[0].q
                        float temp0_258[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg14)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rdi_17 + rax_64), 2)
                        arg10 = __pinsrw_xmmdq_memw_immb(arg10, *(temp0_258[0].q + rax_64), 2)
                        void* rax_65 = arg4 + rbp_24
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(temp0_254, 1) + rax_65), 3)
                        arg10 = __pinsrw_xmmdq_memw_immb(arg10, 
                            *(_mm_extract_epi64(temp0_258, 1) + rax_65), 3)
                        arg1 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_31)), *(arg4 + rdx_27), 
                                    1), 
                                *(arg4 + rbx_9), 2), 
                            *(arg4 + rbp_24), 3)[0])
                        zmm1 = data_1434424d0
                        float temp0_268[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg1, zmm1))
                        arg1 = data_1434426d0
                        float temp0_269[0x4] = _mm_div_ps(temp0_268, arg1)
                        float temp0_273[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), zmm1)), 
                            arg1)
                        float temp0_277[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg10[0].q), zmm1)), 
                            arg1)
                        arg1 = data_143442710
                        zmm6 = _mm_mul_ps(temp0_269, arg1)
                        zmm12 = _mm_mul_ps(temp0_273, arg1)
                        zmm7 = _mm_mul_ps(temp0_277, arg1)
                        rax_67 = arg23.d
                    label_14013d047:
                        arg18 = _mm_cmpeq_epi32(arg18, zmm8) & not.o(temp0_171)
                        char temp0_350 = _mm_movemask_ps(arg18)
                        
                        if (temp0_350 != 0)
                            if (rax_67 u<= 6)
                                zmm8 = _mm_mullo_epi32(zmm8, arg17)
                                arg1 = _mm_cvtepi32_epi64(zmm8[0].q)
                                arg17 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm8, 0x4e)[0].q)
                                
                                switch (jump_table_14013d99c[rsi_11])
                                    case 0x841f0f
                                        undefined
                                    case 0xfffff6ed
                                        zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg24.o)
                                        zmm1 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg22, arg27), arg17)
                                        zmm2 = _mm_add_epi64(zmm2, arg1)
                                        arg17 = _mm_shuffle_epi32(arg18, 0x50)
                                        float temp0_360[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg17)
                                        zmm2 = _mm_shuffle_epi32(arg18, 0xfa)
                                        arg12 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                                        int64_t rax_77 = _mm_extract_epi64(temp0_360, 1)
                                        void* rbp_26 = arg4 + rax_77
                                        zmm8 = *(arg4 + rax_77)
                                        int64_t rax_78 = arg12[0].q
                                        void* rdx_35 = arg4 + rax_78
                                        __return_addr.o = *(arg4 + rax_78)
                                        int64_t rax_79 = _mm_extract_epi64(arg12, 1)
                                        arg14 = data_1434426c0
                                        arg12 = _mm_blendv_ps(zx.o(0), arg14, arg17)
                                        void* rdi_24 = arg4 + rax_79
                                        float temp0_364[0x4] = _mm_blendv_ps(zx.o(0), arg14, zmm2)
                                        arg27 = *(arg4 + rax_79)
                                        void* rbx_14 = temp0_360[0].q + arg4
                                        arg10 = *(arg12[0].q + rbx_14)
                                        arg15 = *(_mm_extract_epi64(arg12, 1) + rbp_26)
                                        arg18 = *(temp0_364[0].q + rdx_35)
                                        arg22 = *(_mm_extract_epi64(temp0_364, 1) + rdi_24)
                                        arg14 = data_1434426e0
                                        arg12 = _mm_blendv_ps(zx.o(0), arg14, arg17)
                                        float temp0_366[0x4] = _mm_blendv_ps(zx.o(0), arg14, zmm2)
                                        arg1 = *(arg12[0].q + rbx_14)
                                        arg14 = *(_mm_extract_epi64(arg12, 1) + rbp_26)
                                        float (* rax_86)[0x4] = temp0_366[0].q
                                        float (* rbp_27)[0x4] = _mm_extract_epi64(temp0_366, 1)
                                        
                                        if ((temp0_350 & 1) != 0)
                                            jump(0x14013d699)
                                        
                                        return sub_14013d1cb(temp0_350, temp0_350, 
                                            *(rax_86 + rdx_35), arg10, arg7, arg1, temp0_366, zmm6, 
                                            zmm7, zmm8, temp0_171, arg14, arg15, zmm12, arg16, 
                                            *(rbp_27 + rdi_24), arg18) __tailcall
                                    case 0xfffff8c8
                                        arg10 = __paddq_xmmdq_memdq(__return_addr.o, arg24.o)
                                        zmm2 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg22, arg27), arg17)
                                        arg10 = _mm_add_epi64(arg10, arg1)
                                        arg15 = _mm_shuffle_epi32(arg18, 0x50)
                                        float temp0_373[0x4] = _mm_blendv_ps(zx.o(0), arg10, arg15)
                                        zmm8 = _mm_shuffle_epi32(arg18, 0xfa)
                                        float temp0_375[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm8)
                                        int64_t rdx_39 = temp0_373[0].q
                                        int64_t rbp_28 = _mm_extract_epi64(temp0_373, 1)
                                        arg14 = data_1434426b0
                                        float temp0_376[0x4] = _mm_blendv_ps(zx.o(0), arg14, arg15)
                                        void* rbx_15 = arg4 + rdx_39
                                        float temp0_377[0x4] = _mm_blendv_ps(zx.o(0), arg14, zmm8)
                                        void* rdi_25 = arg4 + rbp_28
                                        zmm2 = zx.o(*(temp0_376[0].q + rbx_15))
                                        int64_t rax_90 = _mm_extract_epi64(temp0_376, 1)
                                        arg14 = data_1434426c0
                                        float temp0_378[0x4] = _mm_blendv_ps(zx.o(0), arg14, arg15)
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rax_90 + rdi_25), 1)
                                        int32_t temp0_380[0x4] = __pinsrw_xmmdq_memw_immb(
                                            zx.o(*(temp0_378[0].q + rbx_15)), 
                                            *(_mm_extract_epi64(temp0_378, 1) + rdi_25), 1)
                                        int64_t rax_93 = temp0_375[0].q
                                        void* rbx_17 = arg4 + rax_93
                                        float temp0_381[0x4] = _mm_blendv_ps(zx.o(0), arg14, zmm8)
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                                            *(temp0_377[0].q + rbx_17), 2)
                                        int32_t temp0_383[0x4] = __pinsrw_xmmdq_memw_immb(
                                            temp0_380, *(temp0_381[0].q + rbx_17), 2)
                                        arg1 = __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_39)), 
                                                *(arg4 + rbp_28), 1), 
                                            *(arg4 + rax_93), 2)
                                        int64_t rax_94 = _mm_extract_epi64(temp0_375, 1)
                                        arg1 = __pinsrw_xmmdq_memw_immb(arg1, *(arg4 + rax_94), 3)
                                        void* rax_95 = arg4 + rax_94
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                                            *(_mm_extract_epi64(temp0_377, 1) + rax_95), 3)
                                        int32_t temp0_388[0x4] = __pinsrw_xmmdq_memw_immb(
                                            temp0_383, *(_mm_extract_epi64(temp0_381, 1) + rax_95), 
                                            3)
                                        arg1 = _mm_cvtepu16_epi32(arg1[0])
                                        zmm8 = data_1434424d0
                                        float temp0_391[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(arg1, zmm8))
                                        arg14 = data_1434426d0
                                        float temp0_392[0x4] = _mm_div_ps(temp0_391, arg14)
                                        float temp0_396[0x4] = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(zmm2[0].q), zmm8)), 
                                            arg14)
                                        arg1 = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(temp0_388[0].q), zmm8)), 
                                            arg14)
                                        zmm2 = data_143442710
                                        _mm_mul_ps(temp0_392, zmm2)
                                        _mm_mul_ps(temp0_396, zmm2)
                                        _mm_mul_ps(arg1, zmm2)
                                        jump(sub_14013d1cb+0x530)
                                    case 0xfffffa67
                                        int32_t temp0_405[0x4] =
                                            _mm_srai_epi32(_mm_slli_epi32(arg18, 0x1f), 0x1f)
                                        arg15 &= temp0_405
                                        int64_t rax_97 = sx.q(arg15[0])
                                        void* rdi_28 = arg4 + rax_97
                                        zmm1 = *(arg4 + rax_97)
                                        int64_t rax_99 = sx.q(_mm_extract_epi32(arg15, 1))
                                        void* r8_6 = arg4 + rax_99
                                        int64_t rsi_12 = sx.q(_mm_extract_epi32(arg15, 2))
                                        void* rbp_30 = arg4 + rsi_12
                                        int64_t rdx_43 = sx.q(_mm_extract_epi32(arg15, 3))
                                        void* rbx_19 = arg4 + rdx_43
                                        arg20 = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(zmm1, *(arg4 + rax_99), 
                                                    0x10), 
                                                *(arg4 + rsi_12), 0x20), 
                                            *(arg4 + rdx_43), 0x30)
                                        zmm2 = data_142fc95e0 & temp0_405
                                        arg15 = *(zx.q(zmm2[0]) + rdi_28)
                                        uint64_t rax_101 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_44 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        uint64_t rsi_13 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_417[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg15, 
                                                    *(rax_101 + r8_6), 0x10), 
                                                *(rdx_44 + rbp_30), 0x20), 
                                            *(rsi_13 + rbx_19), 0x30)
                                        arg10 = data_142fc95f0 & temp0_405
                                        zmm8 = *(zx.q(arg10[0]) + rdi_28)
                                        uint64_t rax_103 = zx.q(_mm_extract_epi32(arg10, 1))
                                        uint64_t rdx_45 = zx.q(_mm_extract_epi32(arg10, 2))
                                        uint64_t rsi_14 = zx.q(_mm_extract_epi32(arg10, 3))
                                        float temp0_423[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(zmm8, *(rax_103 + r8_6), 
                                                    0x10), 
                                                *(rdx_45 + rbp_30), 0x20), 
                                            *(rsi_14 + rbx_19), 0x30)
                                        zmm2 = data_143442650 & temp0_405
                                        arg10 = *(zx.q(zmm2[0]) + rdi_28)
                                        uint64_t rax_105 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_46 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        uint64_t rsi_15 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_429[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg10, 
                                                    *(rax_105 + r8_6), 0x10), 
                                                *(rdx_46 + rbp_30), 0x20), 
                                            *(rsi_15 + rbx_19), 0x30)
                                        zmm2 = data_143442660 & temp0_405
                                        arg14 = *(zx.q(zmm2[0]) + rdi_28)
                                        uint64_t rax_107 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_47 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        int32_t* rsi_16 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        arg14 = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg14, 
                                                    *(rax_107 + r8_6), 0x10), 
                                                *(rdx_47 + rbp_30), 0x20), 
                                            *(rsi_16 + rbx_19), 0x30)
                                        arg12 = temp0_405 & data_143442670
                                        arg21.o = arg16
                                        arg16 = *(zx.q(arg12[0]) + rdi_28)
                                        int32_t* rax_109 = zx.q(_mm_extract_epi32(arg12, 1))
                                        int32_t* rdx_48 = zx.q(_mm_extract_epi32(arg12, 2))
                                        int32_t* rdi_29 = zx.q(_mm_extract_epi32(arg12, 3))
                                        float temp0_441[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg16, 
                                                    *(rax_109 + r8_6), 0x10), 
                                                *(rdx_48 + rbp_30), 0x20), 
                                            *(rdi_29 + rbx_19), 0x30)
                                        zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg24.o)
                                        int32_t temp0_444[0x4] =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg22, arg27), arg17)
                                        float temp0_447[0x4] = _mm_blendv_ps(zx.o(0), 
                                            _mm_add_epi64(zmm2, arg1), 
                                            _mm_shuffle_epi32(arg18, 0x50))
                                        float temp0_449[0x4] = _mm_blendv_ps(zx.o(0), temp0_444, 
                                            _mm_shuffle_epi32(arg18, 0xfa))
                                        int64_t rax_110 = temp0_447[0].q
                                        int64_t rdx_49 = _mm_extract_epi64(temp0_447, 1)
                                        int64_t rbp_31 = temp0_449[0].q
                                        int64_t rbx_20 = _mm_extract_epi64(temp0_449, 1)
                                        arg1 = __pinsrd_xmmdq_memd_immb(
                                            __pinsrd_xmmdq_memd_immb(
                                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_110)), 
                                                    *(arg4 + rdx_49), 1), 
                                                *(arg4 + rbp_31), 2), 
                                            *(arg4 + rbx_20), 3)
                                        zmm2 = arg1
                                        arg12 = _mm_srli_epi32(arg1, 0xa) & data_143442480
                                        arg1 &= data_143442680
                                        zmm2 = _mm_srli_epi32(zmm2, 0x15)
                                        __addps_xmmps_memps(
                                            _mm_mul_ps(
                                                __divps_xmmps_memps(
                                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg1, 
                                                        data_143442490)), 
                                                    data_1434426a0), 
                                                temp0_429), 
                                            arg20)
                                        arg1 = data_143442440
                                        float temp0_461[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(arg12, arg1))
                                        arg12 = data_143442690
                                        _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_461, arg12), arg14), 
                                            temp0_417)
                                        _mm_add_ps(
                                            _mm_mul_ps(
                                                _mm_div_ps(
                                                    _mm_cvtepi32_ps(_mm_add_epi32(zmm2, arg1)), 
                                                    arg12), 
                                                temp0_441), 
                                            temp0_423)
                                        jump(sub_14013d1cb+0x530)
                            
                            if ((temp0_350 & 4) != 0)
                                _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                            
                            if ((temp0_350 & 8) == 0)
                                jump(0x14013d257)
                            
                            jump(0x14013d251)
                        
                        float temp0_470[0x4] = _mm_unpacklo_ps(zmm7, 0)
                        float temp0_471[0x4] = _mm_unpackhi_ps(zmm7, zx.o(0))
                        arg1 = _mm_unpacklo_ps(zmm6, zmm12[0].q)
                        float temp0_473[0x4] = _mm_unpackhi_ps(zmm6, zmm12)
                        float arg_130[0x4] = _mm_insert_ps(arg1, zmm7, 0x28)
                        double arg_140[0x2] = _mm_unpackhi_pd(arg1, temp0_470[0].q)
                        double arg_150[0x2] = _mm_insert_ps(temp0_473, zmm7, 0xa8)
                        float arg_160[0x4] = _mm_unpackhi_pd(temp0_473, temp0_471[0].q)
                        uint64_t i = zx.q(_mm_movemask_ps(temp0_171))
                        
                        do
                            uint64_t rcx_46
                            uint64_t rflags_1
                            
                            if (i == 0)
                                rcx_46 = 0x40
                            else
                                rcx_46, rflags_1 = _bit_scan_forward(i)
                            float arg_120[0x4] = arg11
                            result = sx.q(arg_120[zx.q(rcx_46.d) & 3]) * 0x30
                            *(arg7 + result + 0x10) = (&arg_130)[rcx_46]
                            i &= rol.q(-2, rcx_46.b)
                        while (i != 0)
                    case 3
                        zmm1 = temp0_171 & arg15
                        int64_t rax_69 = sx.q(zmm1[0])
                        void* r10_8 = arg4 + rax_69
                        int32_t temp0_281 = _mm_extract_epi32(zmm1, 1)
                        zmm2 = *(arg4 + rax_69)
                        int64_t rax_70 = sx.q(temp0_281)
                        void* r8_4 = arg4 + rax_70
                        int64_t rdx_30 = sx.q(_mm_extract_epi32(zmm1, 2))
                        void* rbp_25 = arg4 + rdx_30
                        int64_t rcx_33 = sx.q(_mm_extract_epi32(zmm1, 3))
                        float temp0_286[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(arg4 + rax_70), 0x10), 
                                *(arg4 + rdx_30), 0x20), 
                            *(arg4 + rcx_33), 0x30)
                        void* rdx_31 = arg4 + rcx_33
                        arg21.o = arg17
                        float temp0_288[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(*(r11_6 + r10_8), *(r12_2 + r8_4), 0x10), 
                            *(r15_4 + rbp_25), 0x20)
                        arg14 = data_142fc95f0 & temp0_171
                        uint64_t r15_5 = zx.q(_mm_extract_epi32(arg14, 1))
                        uint64_t r12_3 = zx.q(_mm_extract_epi32(arg14, 2))
                        arg20[0].q = zx.q(_mm_extract_epi32(arg14, 3))
                        zmm2 = data_143442650 & temp0_171
                        zmm1 = *(zx.q(zmm2[0]) + r10_8)
                        uint64_t rcx_35 = zx.q(_mm_extract_epi32(zmm2, 1))
                        uint64_t rdi_21 = zx.q(_mm_extract_epi32(zmm2, 2))
                        uint64_t rbx_10 = zx.q(_mm_extract_epi32(zmm2, 3))
                        float temp0_297[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rcx_35 + r8_4), 0x10), 
                                *(rdi_21 + rbp_25), 0x20), 
                            *(rbx_10 + rdx_31), 0x30)
                        zmm6 = arg10
                        arg10 = data_143442660 & temp0_171
                        zmm2 = *(zx.q(arg10[0]) + r10_8)
                        uint64_t rcx_37 = zx.q(_mm_extract_epi32(arg10, 1))
                        uint64_t rdi_22 = zx.q(_mm_extract_epi32(arg10, 2))
                        uint64_t rbx_11 = zx.q(_mm_extract_epi32(arg10, 3))
                        float temp0_303[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(rcx_37 + r8_4), 0x10), 
                                *(rdi_22 + rbp_25), 0x20), 
                            *(rbx_11 + rdx_31), 0x30)
                        arg10 = _mm_add_epi64(zmm7, zmm6)
                        int32_t temp0_306[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(arg12, arg27), zmm12)
                        float temp0_309[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg10, arg1), 
                            _mm_shuffle_epi32(temp0_171, 0x50))
                        float temp0_311[0x4] =
                            _mm_blendv_ps(zx.o(0), temp0_306, _mm_shuffle_epi32(temp0_171, 0xfa))
                        arg1 = data_143442670 & temp0_171
                        int32_t* rdi_23 = zx.q(_mm_extract_epi32(arg1, 1))
                        int32_t* rbx_12 = zx.q(_mm_extract_epi32(arg1, 2))
                        int32_t* r11_8 = zx.q(_mm_extract_epi32(arg1, 3))
                        int64_t rcx_38 = temp0_309[0].q
                        int64_t rax_72 = _mm_extract_epi64(temp0_309, 1)
                        int64_t rcx_39 = temp0_311[0].q
                        int32_t temp0_315[0x4] =
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_38)), *(arg4 + rax_72), 1)
                        int64_t rax_73 = _mm_extract_epi64(temp0_311, 1)
                        int32_t temp0_317[0x4] = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(temp0_315, *(arg4 + rcx_39), 2), 
                            *(arg4 + rax_73), 3)
                        zmm7 = _mm_srli_epi32(temp0_317, 0xa) & data_143442480
                        int32_t temp0_319[0x4] =
                            __paddd_xmmdq_memdq(temp0_317 & data_143442680, data_143442490)
                        uint64_t rax_74 = zx.q(arg14[0])
                        float temp0_321[0x4] =
                            __divps_xmmps_memps(_mm_cvtepi32_ps(temp0_319), data_1434426a0)
                        uint64_t rcx_40 = zx.q(arg1[0].d)
                        zmm6 = __addps_xmmps_memps(_mm_mul_ps(temp0_321, temp0_297), temp0_286)
                        arg1 = data_143442440
                        float temp0_325[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm7, arg1))
                        zmm1 = data_143442690
                        zmm12 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_325, zmm1), temp0_303), 
                            __insertps_xmmps_memd_immb(temp0_288, *(r14_3 + rdx_31), 0x30))
                        arg17 = arg21.o
                        float temp0_330[0x4] =
                            __insertps_xmmps_memd_immb(*(rax_74 + r10_8), *(r15_5 + r8_4), 0x10)
                        arg10 = _mm_add_epi32(_mm_srli_epi32(temp0_317, 0x15), arg1)
                        float temp0_333[0x4] =
                            __insertps_xmmps_memd_immb(temp0_330, *(r12_3 + rbp_25), 0x20)
                        zmm7 = _mm_add_ps(
                            _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(arg10), zmm1), 
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(*(rcx_40 + r10_8), 
                                            *(rdi_23 + r8_4), 0x10), 
                                        *(rbx_12 + rbp_25), 0x20), 
                                    *(r11_8 + rdx_31), 0x30)), 
                            __insertps_xmmps_memd_immb(temp0_333, *(arg20[0].q + rdx_31), 0x30))
                        rax_67 = arg23.d
                        goto label_14013d047
                    case 4, 5
                        goto label_14013cf68
                    case 6
                        char temp0_345 = _mm_movemask_ps(temp0_171)
                        zmm7 = zx.o(0)
                        rax_67 = arg23.d
                        
                        if ((temp0_345 & 4) != 0)
                            zmm7 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                        
                        if ((temp0_345 & 8) != 0)
                            zmm7 = _mm_blend_epi16(zmm7, zx.o(0), 0xc0)
                        
                        goto label_14013cfc2
            
            return result
        
        arg21 = rbp_3 + 4
        arg24 = rdx_2 + 0x20
        int64_t rcx_48 = sx.q(rdx_2 + 0x20)
        arg10 = *(arg6 + rcx_48)
        zmm1 = *(arg6 + rcx_48 + 0x10)
        arg20 = zmm1
        arg1 = _mm_slli_epi32(_mm_shuffle_ps(arg10, zmm1, 0xdd), 4)
        int64_t rdx_50 = sx.q(arg1[0].d)
        int64_t r10_10 = sx.q(*(arg3 + rdx_50))
        int64_t rbp_34 = sx.q(_mm_extract_epi32(arg1, 1))
        int64_t rsi_18 = sx.q(*(arg3 + rbp_34))
        int64_t rax_115 = sx.q(_mm_extract_epi32(arg1, 2))
        int64_t rbx_24 = sx.q(*(arg3 + rax_115))
        int64_t rcx_50 = sx.q(_mm_extract_epi32(arg1, 3))
        int64_t rdi_32 = sx.q(*(arg3 + rcx_50))
        zmm12 = _mm_insert_epi32(
            _mm_insert_epi32(_mm_insert_epi32(zx.o(r10_10.d), rsi_18.d, 1), rbx_24.d, 2), rdi_32.d, 
            3)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rdx_50 + 4)), *(arg3 + rbp_34 + 4), 1), 
                *(arg3 + rax_115 + 4), 2), 
            *(arg3 + rcx_50 + 4), 3)
        arg13 = _mm_shuffle_epi32(zmm12, 0x4e)
        arg1 = _mm_cmpgt_epi32(data_1434422d0, zmm1)
        char temp0_493 = _mm_movemask_ps(arg1)
        zmm2 = arg27
        __return_addr.o = arg10
        
        if (temp0_493 == 0)
            arg1 = zx.o(0) ^ zmm6
            
            if (0f < arg15[0])
            label_14013b574:
                bool cond:30_1 = arg15[0] >= 1f
                int32_t temp0_497[0x4] = _mm_add_epi32(zmm1, zmm6)
                
                if (cond:30_1)
                    zmm2 = _mm_blendv_ps(zmm2, temp0_497, arg1)
                    zmm7 = _mm_blendv_ps(zmm7, temp0_497, arg1)
                    arg11 = zx.o(0)
                else
                    float temp0_499[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(temp0_497), arg33)
                    float temp0_500[0x4] = _mm_round_ps(temp0_499, 9)
                    zmm2 = _mm_blendv_ps(zmm2, 
                        _mm_min_epi32(_mm_cvttps_epi32(temp0_500), temp0_497), arg1)
                    arg11 = zx.o(0)
                    
                    if (arg9 != 1)
                        arg11 = _mm_sub_ps(temp0_499, temp0_500)
                    
                    zmm6 = _mm_min_epi32(
                        _mm_sub_epi32(zmm2, _mm_cmpeq_epi32(temp0_500, temp0_500)), temp0_497)
                    zmm7 = _mm_blendv_ps(zmm7, zmm6, arg1)
                    zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                
                zmm8 = zmm2
                arg18 = _mm_blendv_ps(arg18, arg11, arg1)
            else
            label_14013b5f1:
                zmm2 = _mm_blendv_ps(zmm2, zx.o(0), arg1)
                zmm7 = _mm_blendv_ps(zmm7, zx.o(0), arg1)
                zmm8 = zmm2
                arg18 = _mm_blendv_ps(arg18, zx.o(0), arg1)
        else
            zmm8 = _mm_andnot_ps(arg1, zmm2)
            arg11 = _mm_andnot_ps(arg1, zmm7)
            arg12 = _mm_andnot_ps(arg1, arg18)
            
            if (temp0_493 != 0xf)
                zmm2 = zmm8
                zmm7 = arg11
                arg18 = arg12
                arg1 ^= zmm6
                
                if (0f >= arg15[0])
                    goto label_14013b5f1
                
                goto label_14013b574
            
            zmm2 = zmm8
            zmm7 = arg11
            arg18 = arg12
        
        arg14 = _mm_cvtepi32_epi64(zmm12[0].q)
        arg12 = _mm_cvtepi32_epi64(arg13[0].q)
        arg11 = zx.o(0)
        arg1 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & arg34
        float temp0_518[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg1)
        arg13 = _mm_cvtepi32_epi64(temp0_518[0].q)
        arg15 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_518, 0x4e)[0])
        zmm1 = __pmulld_xmmdq_memdq(zmm8, arg30)
        arg1 = _mm_cvtepi32_epi64(zmm1[0].q)
        zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
        arg27 = zmm2
        arg22 = arg18
        
        if (arg5 u< 2)
            arg10 = _mm_add_epi64(arg13, arg14)
            arg11 = _mm_add_epi64(_mm_add_epi64(arg15, arg12), zmm1)
            arg10 = _mm_add_epi64(arg10, arg1)
            int64_t rax_120 = arg10[0].q
            int64_t rcx_51 = _mm_extract_epi64(arg10, 1)
            int64_t rdx_52 = arg11[0].q
            int64_t rbp_35 = _mm_extract_epi64(arg11, 1)
            arg17 = *(arg4 + rax_120 + 4)
            arg16 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_120), *(arg4 + rcx_51), 0x10), 
                    *(arg4 + rdx_52), 0x20), 
                *(arg4 + rbp_35), 0x30)
            arg17 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg17, *(arg4 + rcx_51 + 4), 0x10), 
                    *(arg4 + rdx_52 + 4), 0x20), 
                *(arg4 + rbp_35 + 4), 0x30)
            arg11 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_120 + 8), *(arg4 + rcx_51 + 8), 0x10), 
                    *(arg4 + rdx_52 + 8), 0x20), 
                *(arg4 + rbp_35 + 8), 0x30)
        else if (arg5 == 2)
            arg10 = _mm_add_epi64(arg13, arg14)
            arg11 = _mm_add_epi64(_mm_add_epi64(arg15, arg12), zmm1)
            arg10 = _mm_add_epi64(arg10, arg1)
            int64_t rbx_25 = _mm_extract_epi64(arg10, 1)
            int64_t rax_121 = arg10[0].q
            int64_t rdx_53 = arg11[0].q
            int64_t rcx_52 = _mm_extract_epi64(arg11, 1)
            arg1 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_121)), *(arg4 + rbx_25), 1), 
                    *(arg4 + rdx_53), 2), 
                *(arg4 + rcx_52), 3)[0])
            zmm1 = data_1434424d0
            float temp0_590[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg1, zmm1))
            arg1 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_121 + 2)), *(arg4 + rbx_25 + 2), 1), 
                    *(arg4 + rdx_53 + 2), 2), 
                *(arg4 + rcx_52 + 2), 3)
            arg10 = data_1434426d0
            float temp0_594[0x4] = _mm_div_ps(temp0_590, arg10)
            float temp0_597[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg1[0]), zmm1))
            arg1 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_121 + 4)), *(arg4 + rbx_25 + 4), 1), 
                    *(arg4 + rdx_53 + 4), 2), 
                *(arg4 + rcx_52 + 4), 3)
            float temp0_601[0x4] = _mm_div_ps(temp0_597, arg10)
            float temp0_605[0x4] =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg1[0]), zmm1)), arg10)
            arg1 = data_143442710
            arg16 = _mm_mul_ps(temp0_594, arg1)
            arg17 = _mm_mul_ps(temp0_601, arg1)
            arg11 = _mm_mul_ps(temp0_605, arg1)
        else
            arg17 = zx.o(0)
            arg16 = zx.o(0)
            
            if (arg5 == 3)
                arg10 = _mm_add_epi64(arg13, arg14)
                arg11 = _mm_add_epi64(arg15, arg12)
                arg10 = _mm_add_epi64(arg10, arg1)
                arg1 = zx.o(*(arg4 + arg10[0].q))
                int64_t rax_117 = _mm_extract_epi64(arg10, 1)
                arg11 = _mm_add_epi64(arg11, zmm1)
                arg1 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(arg1, *(arg4 + rax_117), 1), 
                        *(arg4 + arg11[0].q), 2), 
                    *(arg4 + _mm_extract_epi64(arg11, 1)), 3)
                arg11 = *(arg4 + r10_10 + 4)
                float temp0_535[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_10), *(arg4 + rsi_18), 0x10), 
                        *(arg4 + rbx_24), 0x20), 
                    *(arg4 + rdi_32), 0x30)
                float temp0_538[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg11, *(arg4 + rsi_18 + 4), 0x10), 
                        *(arg4 + rbx_24 + 4), 0x20), 
                    *(arg4 + rdi_32 + 4), 0x30)
                float temp0_541[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_10 + 0xc), *(arg4 + rsi_18 + 0xc), 
                            0x10), 
                        *(arg4 + rbx_24 + 0xc), 0x20), 
                    *(arg4 + rdi_32 + 0xc), 0x30)
                zmm2 = arg12
                arg12 = arg1
                arg18 = zmm7
                zmm7 = arg1
                float temp0_545[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg1 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    temp0_541)
                arg1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_10 + 0x10), 
                            *(arg4 + rsi_18 + 0x10), 0x10), 
                        *(arg4 + rbx_24 + 0x10), 0x20), 
                    *(arg4 + rdi_32 + 0x10), 0x30)
                arg16 = _mm_add_ps(temp0_545, temp0_535)
                zmm7 = _mm_srli_epi32(zmm7, 0xa) & data_143442480
                zmm1 = data_143442440
                arg10 = zmm1
                float temp0_552[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm7, zmm1))
                zmm1 = data_143442690
                float temp0_554[0x4] = _mm_mul_ps(_mm_div_ps(temp0_552, zmm1), arg1)
                arg1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_10 + 8), *(arg4 + rsi_18 + 8), 0x10), 
                    *(arg4 + rbx_24 + 8), 0x20)
                arg17 = _mm_add_ps(temp0_554, temp0_538)
                float temp0_560[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_10 + 0x14), 
                            *(arg4 + rsi_18 + 0x14), 0x10), 
                        *(arg4 + rbx_24 + 0x14), 0x20), 
                    *(arg4 + rdi_32 + 0x14), 0x30)
                float temp0_563[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(arg12, 0x15), arg10))
                arg12 = zmm2
                zmm7 = arg18
                arg11 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_563, zmm1), temp0_560), 
                    __insertps_xmmps_memd_immb(arg1, *(arg4 + rdi_32 + 8), 0x30))
        
        zmm8 = _mm_cmpeq_epi32(zmm8, zmm7)
        arg18 = zmm8 ^ zmm6
        arg8 = _mm_movemask_ps(arg18)
        
        if (arg8 != 0)
            arg31 = zmm7
            
            if (arg5 u<= 6)
                zmm1 = _mm_mullo_epi32(arg30, zmm7)
                arg1 = _mm_cvtepi32_epi64(zmm1[0].q)
                arg10 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
                
                switch (arg5)
                    case 0, 1
                        break
                    case 2
                        int32_t temp0_13[0x4] = _mm_add_epi64(arg13, arg14)
                        arg15 = _mm_add_epi64(_mm_add_epi64(arg15, arg12), arg10)
                        int32_t temp0_16[0x4] = _mm_add_epi64(temp0_13, arg1)
                        zmm2 = _mm_shuffle_epi32(arg18, 0x50)
                        arg12 = _mm_blendv_ps(zx.o(0), temp0_16, zmm2)
                        zmm8 = _mm_shuffle_epi32(arg18, 0xfa)
                        float temp0_20[0x4] = _mm_blendv_ps(zx.o(0), arg15, zmm8)
                        int64_t rax_10 = arg12[0].q
                        void* r10_1 = arg4 + rax_10
                        int64_t rdi_5 = _mm_extract_epi64(arg12, 1)
                        void* rsi_3 = arg4 + rdi_5
                        int64_t rbx_2 = temp0_20[0].q
                        zmm1 = data_1434426b0
                        arg12 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        float temp0_22[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm8)
                        zmm1 = zx.o(*(arg12[0].q + r10_1))
                        int16_t* rcx_5 = _mm_extract_epi64(arg12, 1)
                        arg1 = zmm2
                        zmm2 = data_1434426c0
                        arg10 = zmm2
                        arg12 = _mm_blendv_ps(zx.o(0), zmm2, arg1)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(rcx_5 + rsi_3), 1)
                        void* rdx_3 = arg4 + rbx_2
                        zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(arg12[0].q + r10_1)), 
                            *(_mm_extract_epi64(arg12, 1) + rsi_3), 1)
                        int64_t rcx_9 = _mm_extract_epi64(temp0_20, 1)
                        int16_t* rbp_4 = temp0_22[0].q
                        arg12 = _mm_blendv_ps(zx.o(0), arg10, zmm8)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(rbp_4 + rdx_3), 2)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(arg12[0].q + rdx_3), 2)
                        void* rdx_4 = arg4 + rcx_9
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, 
                            *(_mm_extract_epi64(temp0_22, 1) + rdx_4), 3)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(arg12, 1) + rdx_4), 3)
                        arg1 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_10)), *(arg4 + rdi_5), 
                                    1), 
                                *(arg4 + rbx_2), 2), 
                            *(arg4 + rcx_9), 3)[0])
                        arg10 = data_1434424d0
                        arg12 = _mm_cvtepi32_ps(_mm_add_epi32(arg1, arg10))
                        arg1 = data_1434426d0
                        arg12 = _mm_div_ps(arg12, arg1)
                        float temp0_41[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm1[0].q), arg10)), 
                            arg1)
                        arg1 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), arg10))
                        arg12 = __mulps_xmmps_memps(arg12, data_143442710)
                        uint64_t rcx_10 = zx.q(arg8)
                        int64_t rdi_7 = rcx_10 & 1
                        
                        if (rdi_7 != 0)
                            _mm_blend_ps(arg26, arg12, 1)
                            jump(0x14013c268)
                        
                        arg1 = __divps_xmmps_memps(arg1, data_1434426d0)
                        float temp0_123[0x4] = __mulps_xmmps_memps(temp0_41, data_143442710)
                        
                        if (rdi_7 == 0)
                            jump(0x14013c313)
                        
                        return sub_14013c2ab(rcx_10, zx.q(arg24), arg3, arg4, zx.q(arg21), rdi_7, 
                            arg5, arg6, arg7, arg9, arg1, temp0_123, __return_addr.o, arg11, arg12, 
                            arg25, arg26, zx.o(0), arg20, zx.o(arg53), arg16, arg17, arg22) __tailcall
                    case 3
                        arg14 = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(arg13, arg14), arg1), 
                            _mm_shuffle_epi32(arg18, 0x50))
                        arg1 = zmm8 & not.o(zmm12)
                        int64_t rax_13 = sx.q(arg1[0].d)
                        void* rsi_4 = arg4 + rax_13
                        zmm1 = *(arg4 + rax_13)
                        int64_t rax_15 = sx.q(_mm_extract_epi32(arg1, 1))
                        void* rbx_3 = arg4 + rax_15
                        int64_t rdx_6 = sx.q(_mm_extract_epi32(arg1, 2))
                        void* rdi_8 = arg4 + rdx_6
                        int64_t rcx_11 = sx.q(_mm_extract_epi32(arg1, 3))
                        float temp0_56[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(arg4 + rax_15), 0x10), 
                                *(arg4 + rdx_6), 0x20), 
                            *(arg4 + rcx_11), 0x30)
                        arg1 = zmm8 & not.o(data_142fc95e0)
                        double rax_16 = zx.q(_mm_extract_epi32(arg1, 1))
                        int32_t* rax_17 = zx.q(_mm_extract_epi32(arg1, 2))
                        float (* rax_18)[0x4] = zx.q(arg1[0].d)
                        int32_t* rdx_7 = zx.q(_mm_extract_epi32(arg1, 3))
                        arg1 = zmm8 & not.o(data_143442650)
                        int32_t* r11 = zx.q(_mm_extract_epi32(arg1, 1))
                        int32_t* r15 = zx.q(_mm_extract_epi32(arg1, 2))
                        float (* rdx_8)[0x4] = zx.q(arg1[0].d)
                        int32_t* r12 = zx.q(_mm_extract_epi32(arg1, 3))
                        zmm2 = zmm8 & not.o(data_142fc95f0)
                        int32_t* rbp_9 = zx.q(_mm_extract_epi32(zmm2, 1))
                        int32_t* r10_2 = zx.q(_mm_extract_epi32(zmm2, 2))
                        arg15 = _mm_add_epi64(arg15, arg12)
                        zmm7 = *(rdx_8 + rsi_4)
                        int32_t* rdx_9 = zx.q(_mm_extract_epi32(zmm2, 3))
                        void* r11_1 = arg4 + rcx_11
                        float temp0_69[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm7, *(r11 + rbx_3), 0x10), 
                                *(r15 + rdi_8), 0x20), 
                            *(r12 + r11_1), 0x30)
                        arg12 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg15, arg10), 
                            _mm_shuffle_epi32(arg18, 0xfa))
                        arg15 = *(rax_18 + rsi_4)
                        zmm6 = zmm8 & not.o(data_143442660)
                        int32_t* rax_19 = zx.q(_mm_extract_epi32(zmm6, 1))
                        int32_t* rcx_12 = zx.q(_mm_extract_epi32(zmm6, 2))
                        int32_t* r15_1 = zx.q(_mm_extract_epi32(zmm6, 3))
                        float temp0_78[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(zmm6[0]) + rsi_4), 
                                    *(rax_19 + rbx_3), 0x10), 
                                *(rcx_12 + rdi_8), 0x20), 
                            *(r15_1 + r11_1), 0x30)
                        int32_t (* rax_20)[0x4] = zx.q(zmm2[0])
                        zmm8 &= not.o(data_143442670)
                        int32_t* r15_2 = zx.q(_mm_extract_epi32(zmm8, 1))
                        arg13 = *(rax_20 + rsi_4)
                        int32_t* rax_21 = zx.q(_mm_extract_epi32(zmm8, 2))
                        int64_t rbp_11 = arg14[0].q
                        int64_t rcx_13 = _mm_extract_epi64(arg14, 1)
                        int64_t rbp_12 = arg12[0].q
                        zmm2 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rbp_11)), *(arg4 + rcx_13), 1)
                        int64_t rcx_14 = _mm_extract_epi64(arg12, 1)
                        zmm2 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm2, *(arg4 + rbp_12), 2), *(arg4 + rcx_14), 
                            3)
                        float (* rcx_15)[0x4] = zx.q(zmm8[0])
                        int32_t* rbp_13 = zx.q(_mm_extract_epi32(zmm8, 3))
                        float temp0_89[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                temp0_69), 
                            temp0_56)
                        arg12 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm1 = data_143442440
                        arg10 = zmm1
                        arg12 = _mm_cvtepi32_ps(_mm_add_epi32(arg12, zmm1))
                        zmm1 = data_143442690
                        zmm7 = zmm1
                        arg12 = _mm_mul_ps(_mm_div_ps(arg12, zmm1), temp0_78)
                        zmm1 = *(rcx_15 + rsi_4)
                        float temp0_97[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg15, *(rax_16 i+ rbx_3), 0x10), 
                                *(rax_17 + rdi_8), 0x20), 
                            *(rdx_7 + r11_1), 0x30)
                        arg13 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg13, *(rbp_9 + rbx_3), 0x10), 
                                *(r10_2 + rdi_8), 0x20), 
                            *(rdx_9 + r11_1), 0x30)
                        float temp0_103[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(r15_2 + rbx_3), 0x10), 
                                *(rax_21 + rdi_8), 0x20), 
                            *(rbp_13 + r11_1), 0x30)
                        float temp0_107[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), arg10)), zmm7)
                        uint64_t rcx_20 = zx.q(arg8)
                        int64_t rdi_10 = rcx_20 & 1
                        
                        if (rdi_10 != 0)
                            _mm_blend_ps(arg26, temp0_89, 1)
                            jump(0x14013c384)
                        
                        float temp0_124[0x4] = _mm_mul_ps(temp0_103, temp0_107)
                        float temp0_125[0x4] = _mm_add_ps(temp0_97, arg12)
                        
                        if (rdi_10 == 0)
                            jump(0x14013c3e0)
                        
                        return sub_14013c3cc(rcx_20, zx.q(arg24), arg3, arg4, zx.q(arg21), rdi_10, 
                            arg23, arg32, arg7, zx.q(arg54), arg19, temp0_124, temp0_89, arg11, 
                            arg26, zx.o(0), arg13, arg20, temp0_125, zx.o(arg53), arg16, arg17, 
                            arg22) __tailcall
            
            uint64_t rcx_2 = zx.q(arg8)
            int64_t rdi_4 = rcx_2 & 1
            
            if (rdi_4 == 0)
                zmm7 = arg26
                zmm6 = arg25
                arg10 = __return_addr.o
                
                if (rdi_4 != 0)
                    zmm6 = _mm_blend_epi16(zmm6, zx.o(0), 3)
            else
                zmm7 = _mm_blend_epi16(arg26, zx.o(0), 3)
                zmm6 = arg25
                arg10 = __return_addr.o
                
                if (rdi_4 != 0)
                    zmm6 = _mm_blend_epi16(zmm6, zx.o(0), 3)
            
            if (rdi_4 == 0)
                return sub_14013c210(rcx_2, zx.q(arg24), arg3, arg4, zx.q(arg21), rdi_4, arg5, 
                    arg6, arg7, arg9, arg19, arg10, arg11, zmm6, zmm7, zx.o(0), arg20, zx.o(arg53), 
                    arg16, arg17, arg22) __tailcall
            
            jump(0x14013c1bf)
        
        rdx_2 = arg24
        zmm8 = zx.o(0)
        rbp_3 = arg21
        arg18 = arg22
        arg14 = arg20
        arg10 = __return_addr.o
        arg15 = zx.o(arg53)
