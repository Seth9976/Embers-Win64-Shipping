// 函数: sub_14013c2ab
// 地址: 0x14013c2ab
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    arg16 = _mm_blend_ps(arg16, arg12, 1)
    arg11 = __mulps_xmmps_memps(arg11, data_143442710)
    int64_t r14_2
    bool cond:0
    bool cond:1_1
    bool cond:2_1
    bool cond:3_1
    bool cond:4_1
    
    if (not(cond:0))
        r14_2 = arg1 & 2
        cond:1_1 = r14_2 != 0
        cond:2_1 = r14_2 == 0
        cond:3_1 = r14_2 != 0
        cond:4_1 = r14_2 == 0
        
        if (r14_2 == 0)
            goto label_14013c335
        
        goto label_14013c2c3
    
    arg24 = _mm_blend_ps(arg24, arg11, 1)
    r14_2 = arg1 & 2
    cond:1_1 = r14_2 != 0
    cond:2_1 = r14_2 == 0
    cond:3_1 = r14_2 != 0
    cond:4_1 = r14_2 == 0
    
    if (r14_2 == 0)
    label_14013c335:
        
        if (cond:2_1)
            goto label_14013c2cb
        
        goto label_14013c337
    
label_14013c2c3:
    arg17 = _mm_blend_ps(arg17, arg15, 2)
    
    if (not(cond:1_1))
    label_14013c2cb:
        
        if (cond:4_1)
            goto label_14013c342
        
        goto label_14013c2d8
    
label_14013c337:
    arg16 = _mm_blend_ps(arg16, arg12, 2)
    int64_t rsi_2
    bool cond:5_1
    bool cond:6_1
    bool cond:7_1
    bool cond:8_1
    
    if (not(cond:3_1))
    label_14013c342:
        rsi_2 = arg1 & 4
        cond:5_1 = rsi_2 != 0
        cond:6_1 = rsi_2 == 0
        cond:7_1 = rsi_2 != 0
        cond:8_1 = rsi_2 == 0
        
        if (rsi_2 == 0)
            goto label_14013c2e6
        
        goto label_14013c348
    
label_14013c2d8:
    arg24 = _mm_blend_ps(arg24, arg11, 2)
    rsi_2 = arg1 & 4
    cond:5_1 = rsi_2 != 0
    cond:6_1 = rsi_2 == 0
    cond:7_1 = rsi_2 != 0
    cond:8_1 = rsi_2 == 0
    
    if (rsi_2 == 0)
    label_14013c2e6:
        
        if (cond:6_1)
            goto label_14013c350
        
        goto label_14013c2e8
    
label_14013c348:
    arg17 = _mm_blend_ps(arg17, arg15, 4)
    
    if (not(cond:5_1))
    label_14013c350:
        
        if (cond:8_1)
            goto label_14013c2f0
        
        goto label_14013c35d
    
label_14013c2e8:
    arg16 = _mm_blend_ps(arg16, arg12, 4)
    int64_t rcx
    bool cond:9_1
    bool cond:10_1
    bool cond:11_1
    bool cond:12_1
    
    if (not(cond:7_1))
    label_14013c2f0:
        rcx = arg1 & 8
        cond:9_1 = rcx != 0
        cond:10_1 = rcx == 0
        cond:11_1 = rcx != 0
        cond:12_1 = rcx == 0
        
        if (rcx == 0)
            goto label_14013c368
        
        goto label_14013c2f6
    
label_14013c35d:
    arg24 = _mm_blend_ps(arg24, arg11, 4)
    rcx = arg1 & 8
    cond:9_1 = rcx != 0
    cond:10_1 = rcx == 0
    cond:11_1 = rcx != 0
    cond:12_1 = rcx == 0
    
    if (rcx == 0)
    label_14013c368:
        
        if (cond:10_1)
            goto label_14013c2fe
        
        goto label_14013c36a
    
label_14013c2f6:
    arg17 = _mm_blend_ps(arg17, arg15, 8)
    
    if (cond:9_1)
    label_14013c36a:
        arg16 = _mm_blend_ps(arg16, arg12, 8)
        
        if (cond:11_1)
            arg11 = _mm_blend_ps(arg24, arg11, 8)
        else
            arg11 = arg24
    else
    label_14013c2fe:
        
        if (cond:12_1)
            arg11 = arg24
        else
            arg11 = _mm_blend_ps(arg24, arg11, 8)
    
    float arg_80[0x4] = arg17
    float temp0_14[0x4] = _mm_sub_ps(arg17, arg21)
    float arg_70[0x4] = arg16
    float temp0_15[0x4] = _mm_sub_ps(arg16, arg22)
    float temp0_16[0x4] = _mm_mul_ps(temp0_14, arg23)
    arg12 = arg21
    
    if (arg6 != 0)
        arg12 = arg21
        arg12[0] = arg12[0] + temp0_16[0]
    
    arg24 = arg11
    float temp0_17[0x4] = _mm_sub_ps(arg11, arg14)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, arg23)
    float zmm2[0x4] = arg22
    
    if (arg6 != 0)
        zmm2 = arg22
        zmm2[0] = zmm2[0] + temp0_18[0]
        arg17 = _mm_mul_ps(temp0_17, arg23)
        arg11 = arg14
        
        if (arg6 != 0)
            goto label_14013c529
        
        goto label_14013c4c3
    
    arg17 = _mm_mul_ps(temp0_17, arg23)
    arg11 = arg14
    bool cond:16_1
    bool cond:17_1
    bool cond:18_1
    bool cond:19_1
    
    if (arg6 != 0)
    label_14013c529:
        arg11 = arg14
        arg11[0].d = arg11[0].d f+ arg17[0]
        arg21 = _mm_add_ps(arg21, temp0_16)
        cond:16_1 = r14_2 == 0
        cond:17_1 = r14_2 != 0
        cond:18_1 = r14_2 == 0
        cond:19_1 = r14_2 != 0
        
        if (r14_2 != 0)
            goto label_14013c4cc
        
        goto label_14013c539
    
label_14013c4c3:
    arg21 = _mm_add_ps(arg21, temp0_16)
    cond:16_1 = r14_2 == 0
    cond:17_1 = r14_2 != 0
    cond:18_1 = r14_2 == 0
    cond:19_1 = r14_2 != 0
    
    if (r14_2 != 0)
    label_14013c4cc:
        arg12 = _mm_blend_ps(arg12, arg21, 2)
        arg22 = _mm_add_ps(arg22, temp0_18)
        
        if (cond:17_1)
            goto label_14013c53f
        
        goto label_14013c4d9
    
label_14013c539:
    arg22 = _mm_add_ps(arg22, temp0_18)
    
    if (not(cond:16_1))
    label_14013c53f:
        zmm2 = _mm_blend_ps(zmm2, arg22, 2)
        arg14 = _mm_add_ps(arg14, arg17)
        
        if (cond:19_1)
            goto label_14013c4de
        
        goto label_14013c54b
    
label_14013c4d9:
    arg14 = _mm_add_ps(arg14, arg17)
    bool cond:20_1
    bool cond:21_1
    bool cond:22_1
    bool cond:23_1
    
    if (not(cond:18_1))
    label_14013c4de:
        arg11 = _mm_blend_ps(arg11, arg14, 2)
        arg17 = arg30
        cond:20_1 = rsi_2 == 0
        cond:21_1 = rsi_2 != 0
        cond:22_1 = rsi_2 == 0
        cond:23_1 = rsi_2 != 0
        
        if (rsi_2 != 0)
            goto label_14013c558
        
        goto label_14013c4f1
    
label_14013c54b:
    arg17 = arg30
    cond:20_1 = rsi_2 == 0
    cond:21_1 = rsi_2 != 0
    cond:22_1 = rsi_2 == 0
    cond:23_1 = rsi_2 != 0
    
    if (rsi_2 == 0)
    label_14013c4f1:
        
        if (not(cond:20_1))
        label_14013c4f3:
            zmm2 = _mm_blend_ps(zmm2, arg22, 4)
            
            if (cond:23_1)
                goto label_14013c563
            
            goto label_14013c4fc
    else
    label_14013c558:
        arg12 = _mm_blend_ps(arg12, arg21, 4)
        
        if (cond:21_1)
            goto label_14013c4f3
    
    bool cond:24_1
    bool cond:25_1
    bool cond:26_1
    bool cond:27_1
    
    if (not(cond:22_1))
    label_14013c563:
        arg11 = _mm_blend_ps(arg11, arg14, 4)
        cond:24_1 = rcx == 0
        cond:25_1 = rcx != 0
        cond:26_1 = rcx != 0
        cond:27_1 = rcx == 0
        
        if (rcx != 0)
            goto label_14013c501
        
        goto label_14013c56e
    
label_14013c4fc:
    cond:24_1 = rcx == 0
    cond:25_1 = rcx != 0
    cond:26_1 = rcx != 0
    cond:27_1 = rcx == 0
    
    if (rcx != 0)
    label_14013c501:
        arg21 = _mm_blend_ps(arg21, arg12, 7)
        
        if (cond:25_1)
            goto label_14013c574
        
        goto label_14013c50a
    
label_14013c56e:
    arg21 = arg12
    
    if (cond:24_1)
    label_14013c50a:
        arg22 = zmm2
        
        if (cond:26_1)
            arg11 = _mm_blend_ps(arg11, arg14, 8)
    else
    label_14013c574:
        arg22 = _mm_blend_ps(arg22, zmm2, 7)
        
        if (not(cond:27_1))
            arg11 = _mm_blend_ps(arg11, arg14, 8)
    
    arg14 = arg11
    
    while (true)
        float temp0_36[0x4] = _mm_unpacklo_ps(arg14, arg18[0].q)
        arg11 = _mm_unpackhi_ps(arg14, arg18)
        float temp0_38[0x4] = _mm_unpacklo_ps(arg21, arg22[0].q)
        float temp0_39[0x4] = _mm_unpackhi_ps(arg21, arg22)
        float temp0_40[0x4] = _mm_insert_ps(temp0_38, arg14, 0x28)
        float arg_170[0x4] = temp0_40
        int64_t rax_5 = sx.q(arg13[0]) * 0x30
        *(arg9 + rax_5 + 0x10) = __extractps_memd_xmmps_immb(arg21, 0)
        arg15 = _mm_unpackhi_pd(temp0_38, temp0_36[0].q)
        *(arg9 + rax_5 + 0x14) = __extractps_memd_xmmps_immb(arg22, 0)
        *(arg9 + rax_5 + 0x18) = __extractps_memd_xmmps_immb(arg14, 0)
        *(arg9 + rax_5 + 0x1c) = 0
        int64_t rax_9 = sx.q(_mm_extract_epi32(arg13, 2)) * 0x30
        *(arg9 + rax_9 + 0x10) = __extractps_memd_xmmps_immb(arg21, 1)
        float arg_180[0x4] = arg15
        *(arg9 + rax_9 + 0x14) = __extractps_memd_xmmps_immb(arg22, 1)
        float temp0_48[0x4] = _mm_insert_ps(temp0_39, arg14, 0xa8)
        *(arg9 + rax_9 + 0x18) = __extractps_memd_xmmps_immb(arg14, 1)
        *(arg9 + rax_9 + 0x1c) = 0
        int64_t rax_13 = sx.q(arg19[0]) * 0x30
        *(arg9 + rax_13 + 0x10) = __extractps_memd_xmmps_immb(arg21, 2)
        float arg_190[0x4] = temp0_48
        *(arg9 + rax_13 + 0x14) = __extractps_memd_xmmps_immb(arg22, 2)
        arg12 = _mm_unpackhi_pd(temp0_39, arg11[0])
        *(arg9 + rax_13 + 0x18) = __extractps_memd_xmmps_immb(arg14, 2)
        *(arg9 + rax_13 + 0x1c) = 0
        *(arg9 + sx.q(_mm_extract_epi32(arg19, 2)) * 0x30 + 0x10) = arg12
        arg16 = _mm_cmpeq_epi32(temp0_40, temp0_40)
        float arg_20[0x4]
        float arg_40[0x4]
        float zmm9[0x4]
        float zmm12[0x4]
        
        if (arg5 + 4 s>= arg28)
            int64_t result = zx.q(arg54)
            
            if (arg5 + 4 s< result.d)
                arg13 = arg20
                arg11 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5 + 4), 0), data_142e11d00)
                zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), arg11)
                arg11 = _mm_slli_epi32(arg11, 3) & zmm9
                int64_t rax_19 = sx.q(arg11[0].d)
                int64_t rdx_4 = sx.q(_mm_extract_epi32(arg11, 1))
                int64_t rbp_3 = sx.q(_mm_extract_epi32(arg11, 2))
                int64_t rdi_1 = sx.q(_mm_extract_epi32(arg11, 3))
                arg14 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg8 + rax_19)), *(arg8 + rdx_4), 1), 
                        *(arg8 + rbp_3), 2), 
                    *(arg8 + rdi_1), 3)
                arg11 = data_142fc95e0 & zmm9
                int32_t* r12_1 = zx.q(_mm_extract_epi32(arg11, 1))
                int32_t* r15_1 = zx.q(_mm_extract_epi32(arg11, 2))
                int32_t* r14_4 = zx.q(_mm_extract_epi32(arg11, 3))
                float (* r11_2)[0x4] = zx.q(arg11[0].d)
                uint32_t temp0_73[0x4] = _mm_slli_epi32(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(r11_2 + arg8 + rax_19)), 
                                *(r12_1 + arg8 + rdx_4), 1), 
                            *(r15_1 + arg8 + rbp_3), 2), 
                        *(r14_4 + arg8 + rdi_1), 3), 
                    4)
                arg11 = temp0_73 & zmm9
                int64_t rax_21 = sx.q(arg11[0].d)
                int64_t rdx_6 = sx.q(_mm_extract_epi32(arg11, 1))
                int64_t rsi_6 = sx.q(_mm_extract_epi32(arg11, 2))
                int64_t rdi_3 = sx.q(_mm_extract_epi32(arg11, 3))
                arg20 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_21)), *(arg3 + rdx_6), 1), 
                        *(arg3 + rsi_6), 2), 
                    *(arg3 + rdi_3), 3)
                arg12 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(r11_2 + arg3 + rax_21)), 
                            *(r12_1 + arg3 + rdx_6), 1), 
                        *(r15_1 + arg3 + rsi_6), 2), 
                    *(r14_4 + arg3 + rdi_3), 3)
                arg17 = zx.o(0)
                zmm12 = _mm_shuffle_epi32(arg20, 0x4e)
                arg11 = _mm_cmpgt_epi32(data_1434422d0, arg12) & zmm9
                char temp0_85 = _mm_movemask_ps(arg11)
                zmm2 = zx.o(0)
                char temp0_86
                
                if (temp0_85 != 0)
                    temp0_86 = _mm_movemask_ps(zmm9)
                    arg23 = zx.o(0)
                    zmm2 = arg11
                    arg18 = zx.o(0)
                    arg21 = zx.o(0)
                
                if (temp0_85 == 0 || temp0_86 != temp0_85)
                    arg15 = _mm_cmpeq_epi32(arg15, arg15)
                    zmm2 ^= arg15
                    arg23 = zx.o(0)
                    arg18 = zx.o(0)
                    
                    if (not(0f >= arg13[0]))
                        arg15 = _mm_add_epi32(arg15, arg12)
                        
                        if (arg13[0] >= 1f)
                            arg17 = zx.o(0)
                            arg23 = _mm_blendv_ps(zx.o(0), arg15, _mm_and_ps(zmm2, zmm9))
                            arg18 = arg23
                        else
                            float temp0_89[0x4] = _mm_shuffle_ps(arg13, arg13, 0)
                            float temp0_91[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(arg15), temp0_89)
                            arg11 = _mm_and_ps(zmm2, zmm9)
                            float temp0_93[0x4] = _mm_round_ps(temp0_91, 9)
                            arg23 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(_mm_cvttps_epi32(temp0_93), arg15), arg11)
                            arg17 = zx.o(0)
                            
                            if (arg53 != 1)
                                arg17 = _mm_sub_ps(temp0_91, temp0_93)
                            
                            arg18 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(
                                    _mm_sub_epi32(arg23, _mm_cmpeq_epi32(temp0_93, temp0_93)), 
                                    arg15), 
                                arg11)
                    
                    arg21 = _mm_blendv_ps(zx.o(0), arg17, zmm2)
                
                arg13 = _mm_cvtepi32_epi64(arg20[0].q)
                arg16 = _mm_cvtepi32_epi64(zmm12[0].q)
                int32_t rcx_4 = arg25.d
                int32_t rax_24
                rax_24.b = rcx_4 == 3
                arg11 = _mm_shuffle_epi32(zx.o(neg.d(rax_24)), 0)
                arg11 &= __pcmpgtd_xmmdq_memdq(arg12, data_142d3f5b0)
                float temp0_109[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg11)
                arg17 = _mm_cvtepi32_epi64(temp0_109[0].q)
                arg15 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_109, 0x4e)[0])
                arg22 = _mm_shuffle_epi32(zx.o(arg27), 0)
                uint64_t rsi_7 = zx.q(rcx_4)
                arg_40 = arg15
                __return_addr.o = arg17
                arg26 = arg16
                int32_t arg_60
                arg_60.o = arg13
                int32_t rax_44
                
                if (rcx_4 u> 6)
                label_14013cf68:
                    char temp0_230 = _mm_movemask_ps(zmm9)
                    arg17 = zx.o(0)
                    rax_44 = arg25.d
                    
                    if ((temp0_230 & 4) != 0)
                        arg17 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                    
                    if ((temp0_230 & 8) != 0)
                        arg17 = _mm_blend_epi16(arg17, zx.o(0), 0xc0)
                    
                label_14013cfc2:
                    zmm12 = arg17
                    arg16 = arg17
                    goto label_14013d047
                
                zmm2 = _mm_mullo_epi32(arg23, arg22)
                arg11 = _mm_cvtepi32_epi64(zmm2[0].q)
                zmm12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm2, 0x4e)[0].q)
                int32_t arg_30
                
                switch (rsi_7)
                    case 0, 1
                        arg_30.o = arg22
                        zmm2 = _mm_add_epi64(arg17, arg13)
                        arg13 = _mm_add_epi64(_mm_add_epi64(arg15, arg16), zmm12)
                        zmm2 = _mm_add_epi64(zmm2, arg11)
                        arg12 = _mm_shuffle_epi32(zmm9, 0x50)
                        float temp0_123[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg12)
                        zmm2 = _mm_shuffle_epi32(zmm9, 0xfa)
                        float temp0_125[0x4] = _mm_blendv_ps(zx.o(0), arg13, zmm2)
                        int64_t rax_26 = _mm_extract_epi64(temp0_123, 1)
                        void* rdx_10 = arg4 + rax_26
                        arg30 = *(arg4 + rax_26)
                        int64_t rax_27 = temp0_125[0].q
                        void* rcx_5 = arg4 + rax_27
                        int64_t rbx_3 = _mm_extract_epi64(temp0_125, 1)
                        arg13 = data_1434426c0
                        float temp0_126[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg12)
                        arg29 = *(arg4 + rax_27)
                        float temp0_127[0x4] = _mm_blendv_ps(zx.o(0), arg13, zmm2)
                        arg_20 = *(arg4 + rbx_3)
                        void* rbp_6 = temp0_123[0].q + arg4
                        zmm12 = *(temp0_126[0].q + rbp_6)
                        arg19 = *(_mm_extract_epi64(temp0_126, 1) + rdx_10)
                        arg24 = *(temp0_127[0].q + rcx_5)
                        void* rbx_4 = arg4 + rbx_3
                        arg22 = *(_mm_extract_epi64(temp0_127, 1) + rbx_4)
                        arg13 = data_1434426e0
                        float temp0_128[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg12)
                        arg16 = _mm_blendv_ps(zx.o(0), arg13, zmm2)
                        arg17 = *(temp0_128[0].q + rbp_6)
                        zmm2 = *(_mm_extract_epi64(temp0_128, 1) + rdx_10)
                        float (* rax_34)[0x4] = arg16[0].q
                        double (* rdx_11)[0x2] = _mm_extract_epi64(arg16, 1)
                        arg12 = *(rax_34 + rcx_5)
                        arg11 = *(rdx_11 + rbx_4)
                        char temp0_130 = _mm_movemask_ps(zmm9)
                        int64_t rax_35
                        bool cond:43
                        bool cond:44
                        bool cond:47
                        bool cond:48
                        
                        if ((temp0_130 & 1) == 0)
                            char temp9_1 = temp0_130 & 2
                            cond:43 = temp9_1 != 0
                            cond:44 = temp9_1 == 0
                            cond:47 = temp9_1 != 0
                            cond:48 = temp9_1 == 0
                            rax_35 = arg25
                            arg13 = arg22
                            
                            if (temp9_1 == 0)
                                goto label_14013cfe4
                            
                            goto label_14013caf8
                        
                        arg16 = *rbp_6
                        char temp8_1 = temp0_130 & 2
                        cond:43 = temp8_1 != 0
                        cond:44 = temp8_1 == 0
                        cond:47 = temp8_1 != 0
                        cond:48 = temp8_1 == 0
                        rax_35 = arg25
                        arg13 = arg22
                        
                        if (temp8_1 == 0)
                        label_14013cfe4:
                            arg22 = arg_30.o
                            
                            if (cond:44)
                                goto label_14013cb10
                            
                            goto label_14013cff1
                        
                    label_14013caf8:
                        arg16 = __insertps_xmmps_memd_immb(arg16, arg30[0], 0x10)
                        arg22 = arg_30.o
                        
                        if (cond:43)
                        label_14013cff1:
                            zmm12 = _mm_insert_ps(zmm12, arg19, 0x10)
                            
                            if (cond:47)
                            label_14013cb16:
                                float temp0_132[0x4] = _mm_insert_ps(arg17, zmm2, 0x10)
                                
                                if ((temp0_130 & 4) != 0)
                                    return sub_14013d007(temp0_130, arg12, arg3, arg4, rax_35, 
                                        rsi_7, arg9, arg11, arg13, arg16, temp0_132, arg18, zmm9, 
                                        arg20, zmm12, arg22, arg23) __tailcall
                                
                                jump(0x14013cb25)
                        else
                        label_14013cb10:
                            
                            if (not(cond:48))
                                goto label_14013cb16
                        
                        if ((temp0_130 & 4) == 0)
                            jump(0x14013cb25)
                        
                        return sub_14013d007(temp0_130, arg12, arg3, arg4, rax_35, rsi_7, arg9, 
                            arg11, arg13, arg16, arg17, arg18, zmm9, arg20, zmm12, arg22, arg23)
                            __tailcall
                    case 2
                        arg12 = _mm_add_epi64(arg17, arg13)
                        arg13 = _mm_add_epi64(_mm_add_epi64(arg15, arg16), zmm12)
                        arg12 = _mm_add_epi64(arg12, arg11)
                        zmm2 = _mm_shuffle_epi32(zmm9, 0x50)
                        float temp0_138[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                        arg19 = _mm_shuffle_epi32(zmm9, 0xfa)
                        float temp0_140[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg19)
                        arg12 = data_1434426b0
                        float temp0_141[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                        float temp0_142[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg19)
                        int64_t rcx_8 = temp0_138[0].q
                        void* rbx_5 = arg4 + rcx_8
                        int64_t rdx_13 = _mm_extract_epi64(temp0_138, 1)
                        void* rbp_7 = arg4 + rdx_13
                        void* rax_37 = temp0_141[0].q
                        int16_t* rdi_4 = _mm_extract_epi64(temp0_141, 1)
                        arg15 = data_1434426c0
                        float temp0_143[0x4] = _mm_blendv_ps(zx.o(0), arg15, zmm2)
                        zmm2 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_37 + rbx_5)), *(rdi_4 + rbp_7), 1)
                        void* rax_39 = temp0_143[0].q
                        int16_t* rdi_5 = _mm_extract_epi64(temp0_143, 1)
                        int64_t rbx_6 = temp0_140[0].q
                        arg13 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_39 + rbx_5)), *(rdi_5 + rbp_7), 1)
                        void* rax_41 = arg4 + rbx_6
                        int64_t rbp_8 = _mm_extract_epi64(temp0_140, 1)
                        int16_t* rdi_6 = temp0_142[0].q
                        float temp0_146[0x4] = _mm_blendv_ps(zx.o(0), arg15, arg19)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rdi_6 + rax_41), 2)
                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, *(temp0_146[0].q + rax_41), 2)
                        void* rax_42 = arg4 + rbp_8
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(temp0_142, 1) + rax_42), 3)
                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, 
                            *(_mm_extract_epi64(temp0_146, 1) + rax_42), 3)
                        arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_8)), *(arg4 + rdx_13), 
                                    1), 
                                *(arg4 + rbx_6), 2), 
                            *(arg4 + rbp_8), 3)[0])
                        arg12 = data_1434424d0
                        float temp0_156[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg12))
                        arg11 = data_1434426d0
                        float temp0_157[0x4] = _mm_div_ps(temp0_156, arg11)
                        float temp0_161[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), arg12)), 
                            arg11)
                        float temp0_165[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg13[0].q), arg12)), 
                            arg11)
                        arg11 = data_143442710
                        arg16 = _mm_mul_ps(temp0_157, arg11)
                        zmm12 = _mm_mul_ps(temp0_161, arg11)
                        arg17 = _mm_mul_ps(temp0_165, arg11)
                        rax_44 = arg25.d
                    label_14013d047:
                        arg23 = _mm_cmpeq_epi32(arg23, arg18) & not.o(zmm9)
                        char temp0_238 = _mm_movemask_ps(arg23)
                        
                        if (temp0_238 != 0)
                            if (rax_44 u<= 6)
                                arg18 = _mm_mullo_epi32(arg18, arg22)
                                arg11 = _mm_cvtepi32_epi64(arg18[0].q)
                                arg22 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg18, 0x4e)[0].q)
                                
                                switch (jump_table_14013d99c[rsi_7])
                                    case 0x841f0f
                                        undefined
                                    case 0xfffff6ed
                                        zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        arg12 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg26), arg22)
                                        zmm2 = _mm_add_epi64(zmm2, arg11)
                                        arg22 = _mm_shuffle_epi32(arg23, 0x50)
                                        float temp0_248[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg22)
                                        zmm2 = _mm_shuffle_epi32(arg23, 0xfa)
                                        float temp0_250[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                                        int64_t rax_54 = _mm_extract_epi64(temp0_248, 1)
                                        void* rbp_10 = arg4 + rax_54
                                        arg18 = *(arg4 + rax_54)
                                        int64_t rax_55 = temp0_250[0].q
                                        void* rdx_21 = arg4 + rax_55
                                        __return_addr.o = *(arg4 + rax_55)
                                        int64_t rax_56 = _mm_extract_epi64(temp0_250, 1)
                                        arg19 = data_1434426c0
                                        float temp0_251[0x4] = _mm_blendv_ps(zx.o(0), arg19, arg22)
                                        void* rdi_13 = arg4 + rax_56
                                        float temp0_252[0x4] = _mm_blendv_ps(zx.o(0), arg19, zmm2)
                                        arg26 = *(arg4 + rax_56)
                                        void* rbx_11 = temp0_248[0].q + arg4
                                        arg13 = *(temp0_251[0].q + rbx_11)
                                        arg20 = *(_mm_extract_epi64(temp0_251, 1) + rbp_10)
                                        arg23 = *(temp0_252[0].q + rdx_21)
                                        arg_40 = *(_mm_extract_epi64(temp0_252, 1) + rdi_13)
                                        arg19 = data_1434426e0
                                        float temp0_253[0x4] = _mm_blendv_ps(zx.o(0), arg19, arg22)
                                        float temp0_254[0x4] = _mm_blendv_ps(zx.o(0), arg19, zmm2)
                                        arg11 = *(temp0_253[0].q + rbx_11)
                                        arg19 = *(_mm_extract_epi64(temp0_253, 1) + rbp_10)
                                        float (* rax_63)[0x4] = temp0_254[0].q
                                        float (* rbp_11)[0x4] = _mm_extract_epi64(temp0_254, 1)
                                        
                                        if ((temp0_238 & 1) != 0)
                                            jump(0x14013d699)
                                        
                                        return sub_14013d1cb(temp0_238, temp0_238, 
                                            *(rax_63 + rdx_21), arg13, arg9, arg11, temp0_254, 
                                            arg16, arg17, arg18, zmm9, arg19, arg20, zmm12, arg21, 
                                            *(rbp_11 + rdi_13), arg23) __tailcall
                                    case 0xfffff8c8
                                        arg13 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        zmm2 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg26), arg22)
                                        arg13 = _mm_add_epi64(arg13, arg11)
                                        arg20 = _mm_shuffle_epi32(arg23, 0x50)
                                        float temp0_261[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg20)
                                        arg18 = _mm_shuffle_epi32(arg23, 0xfa)
                                        float temp0_263[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg18)
                                        int64_t rdx_25 = temp0_261[0].q
                                        int64_t rbp_12 = _mm_extract_epi64(temp0_261, 1)
                                        arg19 = data_1434426b0
                                        float temp0_264[0x4] = _mm_blendv_ps(zx.o(0), arg19, arg20)
                                        void* rbx_12 = arg4 + rdx_25
                                        float temp0_265[0x4] = _mm_blendv_ps(zx.o(0), arg19, arg18)
                                        void* rdi_14 = arg4 + rbp_12
                                        zmm2 = zx.o(*(temp0_264[0].q + rbx_12))
                                        int64_t rax_67 = _mm_extract_epi64(temp0_264, 1)
                                        arg19 = data_1434426c0
                                        float temp0_266[0x4] = _mm_blendv_ps(zx.o(0), arg19, arg20)
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rax_67 + rdi_14), 1)
                                        arg15 = __pinsrw_xmmdq_memw_immb(
                                            zx.o(*(temp0_266[0].q + rbx_12)), 
                                            *(_mm_extract_epi64(temp0_266, 1) + rdi_14), 1)
                                        int64_t rax_70 = temp0_263[0].q
                                        void* rbx_14 = arg4 + rax_70
                                        float temp0_269[0x4] = _mm_blendv_ps(zx.o(0), arg19, arg18)
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                                            *(temp0_265[0].q + rbx_14), 2)
                                        arg15 = __pinsrw_xmmdq_memw_immb(arg15, 
                                            *(temp0_269[0].q + rbx_14), 2)
                                        arg11 = __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_25)), 
                                                *(arg4 + rbp_12), 1), 
                                            *(arg4 + rax_70), 2)
                                        int64_t rax_71 = _mm_extract_epi64(temp0_263, 1)
                                        arg11 = __pinsrw_xmmdq_memw_immb(arg11, *(arg4 + rax_71), 3)
                                        void* rax_72 = arg4 + rax_71
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                                            *(_mm_extract_epi64(temp0_265, 1) + rax_72), 3)
                                        arg15 = __pinsrw_xmmdq_memw_immb(arg15, 
                                            *(_mm_extract_epi64(temp0_269, 1) + rax_72), 3)
                                        arg11 = _mm_cvtepu16_epi32(arg11[0])
                                        arg18 = data_1434424d0
                                        float temp0_279[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg18))
                                        arg19 = data_1434426d0
                                        float temp0_280[0x4] = _mm_div_ps(temp0_279, arg19)
                                        float temp0_284[0x4] = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(zmm2[0].q), arg18)), 
                                            arg19)
                                        arg11 = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(arg15[0].q), arg18)), 
                                            arg19)
                                        zmm2 = data_143442710
                                        _mm_mul_ps(temp0_280, zmm2)
                                        _mm_mul_ps(temp0_284, zmm2)
                                        _mm_mul_ps(arg11, zmm2)
                                        jump(sub_14013d1cb+0x530)
                                    case 0xfffffa67
                                        arg15 = _mm_srai_epi32(_mm_slli_epi32(arg23, 0x1f), 0x1f)
                                        arg20 &= arg15
                                        int64_t rax_74 = sx.q(arg20[0])
                                        void* rdi_17 = arg4 + rax_74
                                        arg12 = *(arg4 + rax_74)
                                        int64_t rax_76 = sx.q(_mm_extract_epi32(arg20, 1))
                                        void* r8_4 = arg4 + rax_76
                                        int64_t rsi_8 = sx.q(_mm_extract_epi32(arg20, 2))
                                        void* rbp_14 = arg4 + rsi_8
                                        int64_t rdx_29 = sx.q(_mm_extract_epi32(arg20, 3))
                                        void* rbx_16 = arg4 + rdx_29
                                        float temp0_299[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg12, *(arg4 + rax_76), 
                                                    0x10), 
                                                *(arg4 + rsi_8), 0x20), 
                                            *(arg4 + rdx_29), 0x30)
                                        zmm2 = data_142fc95e0 & arg15
                                        arg20 = *(zx.q(zmm2[0]) + rdi_17)
                                        uint64_t rax_78 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_30 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        uint64_t rsi_9 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_305[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg20, *(rax_78 + r8_4), 
                                                    0x10), 
                                                *(rdx_30 + rbp_14), 0x20), 
                                            *(rsi_9 + rbx_16), 0x30)
                                        arg13 = data_142fc95f0 & arg15
                                        arg18 = *(zx.q(arg13[0]) + rdi_17)
                                        uint64_t rax_80 = zx.q(_mm_extract_epi32(arg13, 1))
                                        uint64_t rdx_31 = zx.q(_mm_extract_epi32(arg13, 2))
                                        uint64_t rsi_10 = zx.q(_mm_extract_epi32(arg13, 3))
                                        float temp0_311[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg18, *(rax_80 + r8_4), 
                                                    0x10), 
                                                *(rdx_31 + rbp_14), 0x20), 
                                            *(rsi_10 + rbx_16), 0x30)
                                        zmm2 = data_143442650 & arg15
                                        arg13 = *(zx.q(zmm2[0]) + rdi_17)
                                        uint64_t rax_82 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_32 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        int32_t* rsi_11 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_317[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg13, *(rax_82 + r8_4), 
                                                    0x10), 
                                                *(rdx_32 + rbp_14), 0x20), 
                                            *(rsi_11 + rbx_16), 0x30)
                                        zmm2 = data_143442660 & arg15
                                        arg19 = *(zx.q(zmm2[0]) + rdi_17)
                                        uint64_t rax_84 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_33 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        int32_t* rsi_12 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_323[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg19, *(rax_84 + r8_4), 
                                                    0x10), 
                                                *(rdx_33 + rbp_14), 0x20), 
                                            *(rsi_12 + rbx_16), 0x30)
                                        arg15 &= data_143442670
                                        arg_30.o = arg21
                                        arg21 = *(zx.q(arg15[0]) + rdi_17)
                                        uint64_t rax_86 = zx.q(_mm_extract_epi32(arg15, 1))
                                        uint64_t rdx_34 = zx.q(_mm_extract_epi32(arg15, 2))
                                        uint64_t rdi_18 = zx.q(_mm_extract_epi32(arg15, 3))
                                        float temp0_329[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg21, *(rax_86 + r8_4), 
                                                    0x10), 
                                                *(rdx_34 + rbp_14), 0x20), 
                                            *(rdi_18 + rbx_16), 0x30)
                                        zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        arg15 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg26), arg22)
                                        float temp0_335[0x4] = _mm_blendv_ps(zx.o(0), 
                                            _mm_add_epi64(zmm2, arg11), 
                                            _mm_shuffle_epi32(arg23, 0x50))
                                        float temp0_337[0x4] = _mm_blendv_ps(zx.o(0), arg15, 
                                            _mm_shuffle_epi32(arg23, 0xfa))
                                        int64_t rax_87 = temp0_335[0].q
                                        int64_t rdx_35 = _mm_extract_epi64(temp0_335, 1)
                                        int64_t rbp_15 = temp0_337[0].q
                                        int64_t rbx_17 = _mm_extract_epi64(temp0_337, 1)
                                        arg11 = __pinsrd_xmmdq_memd_immb(
                                            __pinsrd_xmmdq_memd_immb(
                                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_87)), 
                                                    *(arg4 + rdx_35), 1), 
                                                *(arg4 + rbp_15), 2), 
                                            *(arg4 + rbx_17), 3)
                                        zmm2 = arg11
                                        arg15 = _mm_srli_epi32(arg11, 0xa) & data_143442480
                                        arg11 &= data_143442680
                                        zmm2 = _mm_srli_epi32(zmm2, 0x15)
                                        __addps_xmmps_memps(
                                            _mm_mul_ps(
                                                __divps_xmmps_memps(
                                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg11, 
                                                        data_143442490)), 
                                                    data_1434426a0), 
                                                temp0_317), 
                                            temp0_299)
                                        arg11 = data_143442440
                                        float temp0_349[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(arg15, arg11))
                                        arg15 = data_143442690
                                        _mm_add_ps(
                                            _mm_mul_ps(_mm_div_ps(temp0_349, arg15), temp0_323), 
                                            temp0_305)
                                        _mm_add_ps(
                                            _mm_mul_ps(
                                                _mm_div_ps(
                                                    _mm_cvtepi32_ps(_mm_add_epi32(zmm2, arg11)), 
                                                    arg15), 
                                                temp0_329), 
                                            temp0_311)
                                        jump(sub_14013d1cb+0x530)
                            
                            if ((temp0_238 & 4) != 0)
                                _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                            
                            if ((temp0_238 & 8) == 0)
                                jump(0x14013d257)
                            
                            jump(0x14013d251)
                        
                        float temp0_358[0x4] = _mm_unpacklo_ps(arg17, 0)
                        float temp0_359[0x4] = _mm_unpackhi_ps(arg17, zx.o(0))
                        arg11 = _mm_unpacklo_ps(arg16, zmm12[0].q)
                        float temp0_361[0x4] = _mm_unpackhi_ps(arg16, zmm12)
                        float arg_130[0x4] = _mm_insert_ps(arg11, arg17, 0x28)
                        double arg_140[0x2] = _mm_unpackhi_pd(arg11, temp0_358[0].q)
                        double arg_150[0x2] = _mm_insert_ps(temp0_361, arg17, 0xa8)
                        float arg_160[0x4] = _mm_unpackhi_pd(temp0_361, temp0_359[0].q)
                        uint64_t i = zx.q(_mm_movemask_ps(zmm9))
                        
                        do
                            uint64_t rcx_23
                            uint64_t rflags_1
                            
                            if (i == 0)
                                rcx_23 = 0x40
                            else
                                rcx_23, rflags_1 = _bit_scan_forward(i)
                            float arg_120[0x4] = arg14
                            result = sx.q(arg_120[zx.q(rcx_23.d) & 3]) * 0x30
                            *(arg9 + result + 0x10) = (&arg_130)[rcx_23]
                            i &= rol.q(-2, rcx_23.b)
                        while (i != 0)
                    case 3
                        arg12 = zmm9 & arg20
                        int64_t rax_46 = sx.q(arg12[0])
                        void* r10_4 = arg4 + rax_46
                        int32_t temp0_169 = _mm_extract_epi32(arg12, 1)
                        zmm2 = *(arg4 + rax_46)
                        int64_t rax_47 = sx.q(temp0_169)
                        void* r8_2 = arg4 + rax_47
                        int64_t rdx_16 = sx.q(_mm_extract_epi32(arg12, 2))
                        void* rbp_9 = arg4 + rdx_16
                        int64_t rcx_10 = sx.q(_mm_extract_epi32(arg12, 3))
                        float temp0_174[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(arg4 + rax_47), 0x10), 
                                *(arg4 + rdx_16), 0x20), 
                            *(arg4 + rcx_10), 0x30)
                        void* rdx_17 = arg4 + rcx_10
                        arg_30.o = arg22
                        float temp0_176[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(*(r11_2 + r10_4), *(r12_1 + r8_2), 0x10), 
                            *(r15_1 + rbp_9), 0x20)
                        arg19 = data_142fc95f0 & zmm9
                        uint64_t r15_2 = zx.q(_mm_extract_epi32(arg19, 1))
                        uint64_t r12_2 = zx.q(_mm_extract_epi32(arg19, 2))
                        arg_20[0].q = zx.q(_mm_extract_epi32(arg19, 3))
                        zmm2 = data_143442650 & zmm9
                        arg12 = *(zx.q(zmm2[0]) + r10_4)
                        uint64_t rcx_12 = zx.q(_mm_extract_epi32(zmm2, 1))
                        uint64_t rdi_10 = zx.q(_mm_extract_epi32(zmm2, 2))
                        uint64_t rbx_7 = zx.q(_mm_extract_epi32(zmm2, 3))
                        float temp0_185[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg12, *(rcx_12 + r8_2), 0x10), 
                                *(rdi_10 + rbp_9), 0x20), 
                            *(rbx_7 + rdx_17), 0x30)
                        arg16 = arg13
                        arg13 = data_143442660 & zmm9
                        zmm2 = *(zx.q(arg13[0]) + r10_4)
                        uint64_t rcx_14 = zx.q(_mm_extract_epi32(arg13, 1))
                        uint64_t rdi_11 = zx.q(_mm_extract_epi32(arg13, 2))
                        uint64_t rbx_8 = zx.q(_mm_extract_epi32(arg13, 3))
                        float temp0_191[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(rcx_14 + r8_2), 0x10), 
                                *(rdi_11 + rbp_9), 0x20), 
                            *(rbx_8 + rdx_17), 0x30)
                        arg13 = _mm_add_epi64(arg17, arg16)
                        arg15 = _mm_add_epi64(__paddq_xmmdq_memdq(arg15, arg26), zmm12)
                        float temp0_197[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg13, arg11), 
                            _mm_shuffle_epi32(zmm9, 0x50))
                        float temp0_199[0x4] =
                            _mm_blendv_ps(zx.o(0), arg15, _mm_shuffle_epi32(zmm9, 0xfa))
                        arg11 = data_143442670 & zmm9
                        int32_t* rdi_12 = zx.q(_mm_extract_epi32(arg11, 1))
                        int32_t* rbx_9 = zx.q(_mm_extract_epi32(arg11, 2))
                        int32_t* r11_4 = zx.q(_mm_extract_epi32(arg11, 3))
                        int64_t rcx_15 = temp0_197[0].q
                        int64_t rax_49 = _mm_extract_epi64(temp0_197, 1)
                        int64_t rcx_16 = temp0_199[0].q
                        arg15 =
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_15)), *(arg4 + rax_49), 1)
                        int64_t rax_50 = _mm_extract_epi64(temp0_199, 1)
                        arg15 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(arg15, *(arg4 + rcx_16), 2), *(arg4 + rax_50), 
                            3)
                        arg13 = arg15
                        arg17 = _mm_srli_epi32(arg15, 0xa) & data_143442480
                        arg15 = __paddd_xmmdq_memdq(arg15 & data_143442680, data_143442490)
                        uint64_t rax_51 = zx.q(arg19[0])
                        float temp0_209[0x4] =
                            __divps_xmmps_memps(_mm_cvtepi32_ps(arg15), data_1434426a0)
                        uint64_t rcx_17 = zx.q(arg11[0].d)
                        arg16 = __addps_xmmps_memps(_mm_mul_ps(temp0_209, temp0_185), temp0_174)
                        arg11 = data_143442440
                        float temp0_213[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg17, arg11))
                        arg12 = data_143442690
                        zmm12 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_213, arg12), temp0_191), 
                            __insertps_xmmps_memd_immb(temp0_176, *(r14_4 + rdx_17), 0x30))
                        arg22 = arg_30.o
                        float temp0_218[0x4] =
                            __insertps_xmmps_memd_immb(*(rax_51 + r10_4), *(r15_2 + r8_2), 0x10)
                        arg13 = _mm_add_epi32(_mm_srli_epi32(arg13, 0x15), arg11)
                        float temp0_221[0x4] =
                            __insertps_xmmps_memd_immb(temp0_218, *(r12_2 + rbp_9), 0x20)
                        arg17 = _mm_add_ps(
                            _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(arg13), arg12), 
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(*(rcx_17 + r10_4), 
                                            *(rdi_12 + r8_2), 0x10), 
                                        *(rbx_9 + rbp_9), 0x20), 
                                    *(r11_4 + rdx_17), 0x30)), 
                            __insertps_xmmps_memd_immb(temp0_221, *(arg_20[0].q + rdx_17), 0x30))
                        rax_44 = arg25.d
                        goto label_14013d047
                    case 4, 5
                        goto label_14013cf68
                    case 6
                        char temp0_233 = _mm_movemask_ps(zmm9)
                        arg17 = zx.o(0)
                        rax_44 = arg25.d
                        
                        if ((temp0_233 & 4) != 0)
                            arg17 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                        
                        if ((temp0_233 & 8) != 0)
                            arg17 = _mm_blend_epi16(arg17, zx.o(0), 0xc0)
                        
                        goto label_14013cfc2
            
            return result
        
        int64_t rcx_25 = sx.q(arg2 + 0x20)
        arg13 = *(arg8 + rcx_25)
        arg12 = *(arg8 + rcx_25 + 0x10)
        arg_20 = arg12
        arg11 = _mm_slli_epi32(_mm_shuffle_ps(arg13, arg12, 0xdd), 4)
        int64_t rdx_36 = sx.q(arg11[0].d)
        int64_t r10_6 = sx.q(*(arg3 + rdx_36))
        int64_t rbp_18 = sx.q(_mm_extract_epi32(arg11, 1))
        int64_t rsi_14 = sx.q(*(arg3 + rbp_18))
        int64_t rax_92 = sx.q(_mm_extract_epi32(arg11, 2))
        int64_t rbx_21 = sx.q(*(arg3 + rax_92))
        int64_t rcx_27 = sx.q(_mm_extract_epi32(arg11, 3))
        int64_t rdi_21 = sx.q(*(arg3 + rcx_27))
        zmm12 = _mm_insert_epi32(
            _mm_insert_epi32(_mm_insert_epi32(zx.o(r10_6.d), rsi_14.d, 1), rbx_21.d, 2), rdi_21.d, 
            3)
        arg12 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rdx_36 + 4)), *(arg3 + rbp_18 + 4), 1), 
                *(arg3 + rax_92 + 4), 2), 
            *(arg3 + rcx_27 + 4), 3)
        zmm9 = _mm_shuffle_epi32(zmm12, 0x4e)
        arg11 = _mm_cmpgt_epi32(data_1434422d0, arg12)
        uint64_t rdx_37 = zx.q(_mm_movemask_ps(arg11))
        zmm2 = arg26
        __return_addr.o = arg13
        
        if (rdx_37.b == 0)
            arg11 = zx.o(0) ^ arg16
            
            if (0f < arg20[0])
            label_14013b574:
                bool cond:30_1 = arg20[0] >= 1f
                arg15 = _mm_add_epi32(arg12, arg16)
                
                if (cond:30_1)
                    zmm2 = _mm_blendv_ps(zmm2, arg15, arg11)
                    arg17 = _mm_blendv_ps(arg17, arg15, arg11)
                    arg14 = zx.o(0)
                else
                    float temp0_387[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(arg15), arg32)
                    float temp0_388[0x4] = _mm_round_ps(temp0_387, 9)
                    zmm2 = _mm_blendv_ps(zmm2, _mm_min_epi32(_mm_cvttps_epi32(temp0_388), arg15), 
                        arg11)
                    arg14 = zx.o(0)
                    
                    if (arg10 != 1)
                        arg14 = _mm_sub_ps(temp0_387, temp0_388)
                    
                    arg16 = _mm_min_epi32(
                        _mm_sub_epi32(zmm2, _mm_cmpeq_epi32(temp0_388, temp0_388)), arg15)
                    arg17 = _mm_blendv_ps(arg17, arg16, arg11)
                    arg16 = _mm_cmpeq_epi32(arg16, arg16)
                
                arg18 = zmm2
                arg23 = _mm_blendv_ps(arg23, arg14, arg11)
            else
            label_14013b5f1:
                zmm2 = _mm_blendv_ps(zmm2, zx.o(0), arg11)
                arg17 = _mm_blendv_ps(arg17, zx.o(0), arg11)
                arg18 = zmm2
                arg23 = _mm_blendv_ps(arg23, zx.o(0), arg11)
        else
            arg18 = _mm_andnot_ps(arg11, zmm2)
            arg14 = _mm_andnot_ps(arg11, arg17)
            arg15 = _mm_andnot_ps(arg11, arg23)
            
            if (rdx_37.b != 0xf)
                zmm2 = arg18
                arg17 = arg14
                arg23 = arg15
                arg11 ^= arg16
                
                if (0f >= arg20[0])
                    goto label_14013b5f1
                
                goto label_14013b574
            
            zmm2 = arg18
            arg17 = arg14
            arg23 = arg15
        
        arg19 = _mm_cvtepi32_epi64(zmm12[0].q)
        arg15 = _mm_cvtepi32_epi64(zmm9[0].q)
        arg14 = zx.o(0)
        arg11 = __pcmpgtd_xmmdq_memdq(arg12, data_142d3f5b0) & arg33
        float temp0_406[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg11)
        zmm9 = _mm_cvtepi32_epi64(temp0_406[0].q)
        arg20 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_406, 0x4e)[0])
        arg12 = __pmulld_xmmdq_memdq(arg18, arg29)
        arg11 = _mm_cvtepi32_epi64(arg12[0].q)
        arg12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg12, 0x4e)[0].q)
        arg26 = zmm2
        arg_40 = arg23
        
        if (arg7 u< 2)
            arg13 = _mm_add_epi64(zmm9, arg19)
            arg14 = _mm_add_epi64(_mm_add_epi64(arg20, arg15), arg12)
            arg13 = _mm_add_epi64(arg13, arg11)
            int64_t rax_97 = arg13[0].q
            int64_t rcx_28 = _mm_extract_epi64(arg13, 1)
            rdx_37 = arg14[0].q
            int64_t rbp_19 = _mm_extract_epi64(arg14, 1)
            arg22 = *(arg4 + rax_97 + 4)
            arg21 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_97), *(arg4 + rcx_28), 0x10), 
                    *(arg4 + rdx_37), 0x20), 
                *(arg4 + rbp_19), 0x30)
            arg22 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg22, *(arg4 + rcx_28 + 4), 0x10), 
                    *(arg4 + rdx_37 + 4), 0x20), 
                *(arg4 + rbp_19 + 4), 0x30)
            arg14 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_97 + 8), *(arg4 + rcx_28 + 8), 0x10), 
                    *(arg4 + rdx_37 + 8), 0x20), 
                *(arg4 + rbp_19 + 8), 0x30)
        else if (arg7 == 2)
            arg13 = _mm_add_epi64(zmm9, arg19)
            arg14 = _mm_add_epi64(_mm_add_epi64(arg20, arg15), arg12)
            arg13 = _mm_add_epi64(arg13, arg11)
            int64_t rbx_22 = _mm_extract_epi64(arg13, 1)
            int64_t rax_98 = arg13[0].q
            rdx_37 = arg14[0].q
            int64_t rcx_29 = _mm_extract_epi64(arg14, 1)
            arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_98)), *(arg4 + rbx_22), 1), 
                    *(arg4 + rdx_37), 2), 
                *(arg4 + rcx_29), 3)[0])
            arg12 = data_1434424d0
            float temp0_478[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg12))
            arg11 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_98 + 2)), *(arg4 + rbx_22 + 2), 1), 
                    *(arg4 + rdx_37 + 2), 2), 
                *(arg4 + rcx_29 + 2), 3)
            arg13 = data_1434426d0
            float temp0_482[0x4] = _mm_div_ps(temp0_478, arg13)
            float temp0_485[0x4] =
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg11[0]), arg12))
            arg11 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_98 + 4)), *(arg4 + rbx_22 + 4), 1), 
                    *(arg4 + rdx_37 + 4), 2), 
                *(arg4 + rcx_29 + 4), 3)
            float temp0_489[0x4] = _mm_div_ps(temp0_485, arg13)
            float temp0_493[0x4] = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg11[0]), arg12)), arg13)
            arg11 = data_143442710
            arg21 = _mm_mul_ps(temp0_482, arg11)
            arg22 = _mm_mul_ps(temp0_489, arg11)
            arg14 = _mm_mul_ps(temp0_493, arg11)
        else
            arg22 = zx.o(0)
            arg21 = zx.o(0)
            
            if (arg7 == 3)
                arg13 = _mm_add_epi64(zmm9, arg19)
                arg14 = _mm_add_epi64(arg20, arg15)
                arg13 = _mm_add_epi64(arg13, arg11)
                arg11 = zx.o(*(arg4 + arg13[0].q))
                int64_t rax_94 = _mm_extract_epi64(arg13, 1)
                arg14 = _mm_add_epi64(arg14, arg12)
                arg11 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(arg11, *(arg4 + rax_94), 1), 
                        *(arg4 + arg14[0].q), 2), 
                    *(arg4 + _mm_extract_epi64(arg14, 1)), 3)
                arg14 = *(arg4 + r10_6 + 4)
                float temp0_423[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_6), *(arg4 + rsi_14), 0x10), 
                        *(arg4 + rbx_21), 0x20), 
                    *(arg4 + rdi_21), 0x30)
                float temp0_426[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg14, *(arg4 + rsi_14 + 4), 0x10), 
                        *(arg4 + rbx_21 + 4), 0x20), 
                    *(arg4 + rdi_21 + 4), 0x30)
                float temp0_429[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_6 + 0xc), *(arg4 + rsi_14 + 0xc), 
                            0x10), 
                        *(arg4 + rbx_21 + 0xc), 0x20), 
                    *(arg4 + rdi_21 + 0xc), 0x30)
                zmm2 = arg15
                arg15 = arg11
                arg23 = arg17
                arg17 = arg11
                float temp0_433[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg11 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    temp0_429)
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_6 + 0x10), *(arg4 + rsi_14 + 0x10), 
                            0x10), 
                        *(arg4 + rbx_21 + 0x10), 0x20), 
                    *(arg4 + rdi_21 + 0x10), 0x30)
                arg21 = _mm_add_ps(temp0_433, temp0_423)
                arg17 = _mm_srli_epi32(arg17, 0xa) & data_143442480
                arg12 = data_143442440
                arg13 = arg12
                float temp0_440[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg17, arg12))
                arg12 = data_143442690
                float temp0_442[0x4] = _mm_mul_ps(_mm_div_ps(temp0_440, arg12), arg11)
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_6 + 8), *(arg4 + rsi_14 + 8), 0x10), 
                    *(arg4 + rbx_21 + 8), 0x20)
                arg22 = _mm_add_ps(temp0_442, temp0_426)
                float temp0_448[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_6 + 0x14), *(arg4 + rsi_14 + 0x14), 
                            0x10), 
                        *(arg4 + rbx_21 + 0x14), 0x20), 
                    *(arg4 + rdi_21 + 0x14), 0x30)
                float temp0_451[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(arg15, 0x15), arg13))
                arg15 = zmm2
                arg17 = arg23
                arg14 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_451, arg12), temp0_448), 
                    __insertps_xmmps_memd_immb(arg11, *(arg4 + rdi_21 + 8), 0x30))
        
        arg18 = _mm_cmpeq_epi32(arg18, arg17)
        arg23 = arg18 ^ arg16
        char temp0_498 = _mm_movemask_ps(arg23)
        
        if (temp0_498 != 0)
            arg30 = arg17
            
            if (arg7 u<= 6)
                arg12 = _mm_mullo_epi32(arg29, arg17)
                arg11 = _mm_cvtepi32_epi64(arg12[0].q)
                arg13 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg12, 0x4e)[0].q)
                
                switch (arg7)
                    case 0, 1
                        return sub_14013ba4e(arg11, rdx_37, arg3, arg4, arg7, arg8, arg9, 
                            temp0_498, arg10, arg13, arg14, arg15, zmm9, arg19, arg20, arg21, 
                            arg22, arg23) __tailcall
                    case 2
                        zmm9 = _mm_add_epi64(zmm9, arg19)
                        arg20 = _mm_add_epi64(_mm_add_epi64(arg20, arg15), arg13)
                        zmm9 = _mm_add_epi64(zmm9, arg11)
                        zmm2 = _mm_shuffle_epi32(arg23, 0x50)
                        float temp0_509[0x4] = _mm_blendv_ps(zx.o(0), zmm9, zmm2)
                        arg18 = _mm_shuffle_epi32(arg23, 0xfa)
                        float temp0_511[0x4] = _mm_blendv_ps(zx.o(0), arg20, arg18)
                        int64_t rax_104 = temp0_509[0].q
                        void* r10_8 = arg4 + rax_104
                        int64_t rdi_24 = _mm_extract_epi64(temp0_509, 1)
                        void* rsi_15 = arg4 + rdi_24
                        int64_t rbx_23 = temp0_511[0].q
                        arg12 = data_1434426b0
                        float temp0_512[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                        float temp0_513[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg18)
                        arg12 = zx.o(*(temp0_512[0].q + r10_8))
                        int64_t rcx_34 = _mm_extract_epi64(temp0_512, 1)
                        arg11 = zmm2
                        zmm2 = data_1434426c0
                        arg13 = zmm2
                        float temp0_514[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg11)
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, *(rcx_34 + rsi_15), 1)
                        void* rdx_39 = arg4 + rbx_23
                        zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_514[0].q + r10_8)), 
                            *(_mm_extract_epi64(temp0_514, 1) + rsi_15), 1)
                        int64_t rcx_38 = _mm_extract_epi64(temp0_511, 1)
                        int16_t* rbp_22 = temp0_513[0].q
                        float temp0_517[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg18)
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, *(rbp_22 + rdx_39), 2)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(temp0_517[0].q + rdx_39), 2)
                        void* rdx_40 = arg4 + rcx_38
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, 
                            *(_mm_extract_epi64(temp0_513, 1) + rdx_40), 3)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(temp0_517, 1) + rdx_40), 3)
                        arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_104)), *(arg4 + rdi_24), 
                                    1), 
                                *(arg4 + rbx_23), 2), 
                            *(arg4 + rcx_38), 3)[0])
                        arg13 = data_1434424d0
                        float temp0_527[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg13))
                        arg11 = data_1434426d0
                        float temp0_528[0x4] = _mm_div_ps(temp0_527, arg11)
                        float temp0_532[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg12[0].q), arg13)), 
                            arg11)
                        arg11 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), arg13))
                        arg15 = __mulps_xmmps_memps(temp0_528, data_143442710)
                        arg1 = zx.q(temp0_498)
                        arg6 = arg1 & 1
                        cond:0 = arg6 != 0
                        
                        if (arg6 != 0)
                            _mm_blend_ps(arg_80, arg15, 1)
                            jump(0x14013c268)
                        
                        arg17 = arg_80
                        arg16 = arg_70
                        arg23 = arg_40
                        arg13 = __return_addr.o
                        arg11 = __divps_xmmps_memps(arg11, data_1434426d0)
                        arg12 = __mulps_xmmps_memps(temp0_532, data_143442710)
                        arg20 = zx.o(arg52)
                        arg2 += 0x20
                        arg18 = zx.o(0)
                        arg5 += 4
                        arg19 = arg_20
                        
                        if (arg6 == 0)
                            jump(0x14013c313)
                        
                        break
                    case 3
                        float temp0_541[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(zmm9, arg19), arg11), 
                            _mm_shuffle_epi32(arg23, 0x50))
                        arg11 = arg18 & not.o(zmm12)
                        int64_t rax_107 = sx.q(arg11[0].d)
                        void* rsi_16 = arg4 + rax_107
                        arg12 = *(arg4 + rax_107)
                        int64_t rax_109 = sx.q(_mm_extract_epi32(arg11, 1))
                        void* rbx_24 = arg4 + rax_109
                        int64_t rdx_42 = sx.q(_mm_extract_epi32(arg11, 2))
                        void* rdi_26 = arg4 + rdx_42
                        int64_t rcx_39 = sx.q(_mm_extract_epi32(arg11, 3))
                        float temp0_547[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg12, *(arg4 + rax_109), 0x10), 
                                *(arg4 + rdx_42), 0x20), 
                            *(arg4 + rcx_39), 0x30)
                        arg11 = arg18 & not.o(data_142fc95e0)
                        uint64_t rax_110 = zx.q(_mm_extract_epi32(arg11, 1))
                        uint64_t rax_111 = zx.q(_mm_extract_epi32(arg11, 2))
                        uint64_t rax_112 = zx.q(arg11[0].d)
                        uint64_t rdx_43 = zx.q(_mm_extract_epi32(arg11, 3))
                        arg11 = arg18 & not.o(data_143442650)
                        uint64_t r11_7 = zx.q(_mm_extract_epi32(arg11, 1))
                        uint64_t r15_4 = zx.q(_mm_extract_epi32(arg11, 2))
                        uint64_t rdx_44 = zx.q(arg11[0].d)
                        uint64_t r12_4 = zx.q(_mm_extract_epi32(arg11, 3))
                        zmm2 = arg18 & not.o(data_142fc95f0)
                        uint64_t rbp_27 = zx.q(_mm_extract_epi32(zmm2, 1))
                        uint64_t r10_9 = zx.q(_mm_extract_epi32(zmm2, 2))
                        arg20 = _mm_add_epi64(arg20, arg15)
                        arg17 = *(rdx_44 + rsi_16)
                        int32_t* rdx_45 = zx.q(_mm_extract_epi32(zmm2, 3))
                        void* r11_8 = arg4 + rcx_39
                        float temp0_560[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg17, *(r11_7 + rbx_24), 0x10), 
                                *(r15_4 + rdi_26), 0x20), 
                            *(r12_4 + r11_8), 0x30)
                        float temp0_563[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg20, arg13), 
                            _mm_shuffle_epi32(arg23, 0xfa))
                        arg20 = *(rax_112 + rsi_16)
                        arg16 = arg18 & not.o(data_143442660)
                        uint64_t rax_113 = zx.q(_mm_extract_epi32(arg16, 1))
                        uint64_t rcx_40 = zx.q(_mm_extract_epi32(arg16, 2))
                        uint64_t r15_5 = zx.q(_mm_extract_epi32(arg16, 3))
                        float temp0_569[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(arg16[0]) + rsi_16), 
                                    *(rax_113 + rbx_24), 0x10), 
                                *(rcx_40 + rdi_26), 0x20), 
                            *(r15_5 + r11_8), 0x30)
                        uint64_t rax_114 = zx.q(zmm2[0])
                        arg18 &= not.o(data_143442670)
                        int32_t* r15_6 = zx.q(_mm_extract_epi32(arg18, 1))
                        zmm9 = *(rax_114 + rsi_16)
                        int32_t* rax_115 = zx.q(_mm_extract_epi32(arg18, 2))
                        int64_t rbp_29 = temp0_541[0].q
                        int64_t rcx_41 = _mm_extract_epi64(temp0_541, 1)
                        int64_t rbp_30 = temp0_563[0].q
                        zmm2 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rbp_29)), *(arg4 + rcx_41), 1)
                        int64_t rcx_42 = _mm_extract_epi64(temp0_563, 1)
                        zmm2 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm2, *(arg4 + rbp_30), 2), *(arg4 + rcx_42), 
                            3)
                        float (* rcx_43)[0x4] = zx.q(arg18[0])
                        int32_t* rbp_31 = zx.q(_mm_extract_epi32(arg18, 3))
                        float temp0_580[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                temp0_560), 
                            temp0_547)
                        arg15 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        arg12 = data_143442440
                        arg13 = arg12
                        float temp0_583[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg15, arg12))
                        arg12 = data_143442690
                        arg17 = arg12
                        float temp0_585[0x4] = _mm_mul_ps(_mm_div_ps(temp0_583, arg12), temp0_569)
                        arg12 = *(rcx_43 + rsi_16)
                        float temp0_588[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg20, *(rax_110 + rbx_24), 0x10), 
                                *(rax_111 + rdi_26), 0x20), 
                            *(rdx_43 + r11_8), 0x30)
                        float temp0_591[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm9, *(rbp_27 + rbx_24), 0x10), 
                                *(r10_9 + rdi_26), 0x20), 
                            *(rdx_45 + r11_8), 0x30)
                        float temp0_594[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg12, *(r15_6 + rbx_24), 0x10), 
                                *(rax_115 + rdi_26), 0x20), 
                            *(rbp_31 + r11_8), 0x30)
                        float temp0_598[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), arg13)), 
                            arg17)
                        uint64_t rcx_48 = zx.q(temp0_498)
                        int64_t rdi_28 = rcx_48 & 1
                        
                        if (rdi_28 != 0)
                            _mm_blend_ps(arg_80, temp0_580, 1)
                            jump(0x14013c384)
                        
                        float temp0_12[0x4] = _mm_mul_ps(temp0_594, temp0_598)
                        float temp0_13[0x4] = _mm_add_ps(temp0_588, temp0_585)
                        
                        if (rdi_28 == 0)
                            jump(0x14013c3e0)
                        
                        return sub_14013c3cc(rcx_48, zx.q(arg2 + 0x20), arg3, arg4, zx.q(arg5 + 4), 
                            rdi_28, arg25, arg31, arg9, zx.q(arg53), arg24, temp0_12, temp0_580, 
                            arg14, arg_80, zx.o(0), temp0_591, arg_20, temp0_13, zx.o(arg52), 
                            arg21, arg22, arg_40) __tailcall
            
            uint64_t rcx_31 = zx.q(temp0_498)
            int64_t rdi_23 = rcx_31 & 1
            
            if (rdi_23 == 0)
                arg17 = arg_80
                arg16 = arg_70
                arg13 = __return_addr.o
                
                if (rdi_23 != 0)
                    arg16 = _mm_blend_epi16(arg16, zx.o(0), 3)
            else
                arg17 = _mm_blend_epi16(arg_80, zx.o(0), 3)
                arg16 = arg_70
                arg13 = __return_addr.o
                
                if (rdi_23 != 0)
                    arg16 = _mm_blend_epi16(arg16, zx.o(0), 3)
            
            if (rdi_23 == 0)
                return sub_14013c210(rcx_31, zx.q(arg2 + 0x20), arg3, arg4, zx.q(arg5 + 4), rdi_23, 
                    arg7, arg8, arg9, arg10, arg24, arg13, arg14, arg16, arg17, zx.o(0), arg_20, 
                    zx.o(arg52), arg21, arg22, arg_40) __tailcall
            
            jump(0x14013c1bf)
        
        arg2 += 0x20
        arg18 = zx.o(0)
        arg5 += 4
        arg23 = arg_40
        arg19 = arg_20
        arg13 = __return_addr.o
        arg20 = zx.o(arg52)
