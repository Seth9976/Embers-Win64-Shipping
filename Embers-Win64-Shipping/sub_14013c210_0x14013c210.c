// 函数: sub_14013c210
// 地址: 0x14013c210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int64_t r14_1 = arg1 & 2
    
    if (r14_1 != 0)
        arg15 = _mm_blend_epi16(arg15, arg16, 0xc)
        
        if (r14_1 != 0)
            goto label_14013c1d1
    else if (r14_1 != 0)
    label_14013c1d1:
        arg14 = _mm_blend_epi16(arg14, arg16, 0xc)
        
        if (r14_1 != 0)
            goto label_14013c224
        
        goto label_14013c1dd
    
    int64_t rsi_2
    bool cond:4_1
    bool cond:5_1
    bool cond:6_1
    bool cond:7_1
    
    if (r14_1 != 0)
    label_14013c224:
        arg11 = _mm_blend_epi16(arg11, arg16, 0xc)
        rsi_2 = arg1 & 4
        cond:4_1 = rsi_2 == 0
        cond:5_1 = rsi_2 != 0
        cond:6_1 = rsi_2 == 0
        cond:7_1 = rsi_2 != 0
        
        if (rsi_2 != 0)
            goto label_14013c1e3
        
        goto label_14013c234
    
label_14013c1dd:
    rsi_2 = arg1 & 4
    cond:4_1 = rsi_2 == 0
    cond:5_1 = rsi_2 != 0
    cond:6_1 = rsi_2 == 0
    cond:7_1 = rsi_2 != 0
    
    if (rsi_2 == 0)
    label_14013c234:
        
        if (not(cond:4_1))
        label_14013c236:
            arg14 = _mm_blend_epi16(arg14, arg16, 0x30)
            
            if (cond:7_1)
                goto label_14013c1ee
            
            goto label_14013c23f
    else
    label_14013c1e3:
        arg15 = _mm_blend_epi16(arg15, arg16, 0x30)
        
        if (cond:5_1)
            goto label_14013c236
    
    int64_t rcx
    bool cond:8_1
    bool cond:9_1
    bool cond:10_1
    bool cond:11_1
    
    if (not(cond:6_1))
    label_14013c1ee:
        arg11 = _mm_blend_epi16(arg11, arg16, 0x30)
        rcx = arg1 & 8
        cond:8_1 = rcx == 0
        cond:9_1 = rcx != 0
        cond:10_1 = rcx == 0
        cond:11_1 = rcx == 0
        
        if (rcx != 0)
            goto label_14013c245
        
        goto label_14013c1fb
    
label_14013c23f:
    rcx = arg1 & 8
    cond:8_1 = rcx == 0
    cond:9_1 = rcx != 0
    cond:10_1 = rcx == 0
    cond:11_1 = rcx == 0
    
    if (rcx != 0)
    label_14013c245:
        arg15 = _mm_blend_epi16(arg15, arg16, 0xc0)
        
        if (cond:9_1)
            goto label_14013c1fd
        
        goto label_14013c24e
    
label_14013c1fb:
    
    if (cond:8_1)
    label_14013c24e:
        
        if (not(cond:10_1))
            arg11 = _mm_blend_epi16(arg11, arg16, 0xc0)
    else
    label_14013c1fd:
        arg14 = _mm_blend_epi16(arg14, arg16, 0xc0)
        
        if (not(cond:11_1))
            arg11 = _mm_blend_epi16(arg11, arg16, 0xc0)
    
    int32_t arg_80[0x4] = arg15
    float temp0_10[0x4] = _mm_sub_ps(arg15, arg19)
    float arg_70[0x4] = arg14
    float temp0_11[0x4] = _mm_sub_ps(arg14, arg20)
    float temp0_12[0x4] = _mm_mul_ps(temp0_10, arg21)
    float zmm1[0x4] = arg19
    
    if (arg6 != 0)
        zmm1 = arg19
        zmm1[0] = zmm1[0] + temp0_12[0]
    
    double arg_10[0x2] = arg11
    arg15 = _mm_sub_ps(arg11, arg13)
    float temp0_14[0x4] = _mm_mul_ps(temp0_11, arg21)
    float zmm2[0x4] = arg20
    
    if (arg6 != 0)
        zmm2 = arg20
        zmm2[0] = zmm2[0] + temp0_14[0]
        arg15 = _mm_mul_ps(arg15, arg21)
        arg11 = arg13
        
        if (arg6 != 0)
            goto label_14013c529
        
        goto label_14013c4c3
    
    arg15 = _mm_mul_ps(arg15, arg21)
    arg11 = arg13
    bool cond:15_1
    bool cond:16_1
    bool cond:17_1
    bool cond:18_1
    
    if (arg6 != 0)
    label_14013c529:
        arg11 = arg13
        arg11[0].d = arg11[0].d f+ arg15[0]
        arg19 = _mm_add_ps(arg19, temp0_12)
        cond:15_1 = r14_1 == 0
        cond:16_1 = r14_1 != 0
        cond:17_1 = r14_1 == 0
        cond:18_1 = r14_1 != 0
        
        if (r14_1 != 0)
            goto label_14013c4cc
        
        goto label_14013c539
    
label_14013c4c3:
    arg19 = _mm_add_ps(arg19, temp0_12)
    cond:15_1 = r14_1 == 0
    cond:16_1 = r14_1 != 0
    cond:17_1 = r14_1 == 0
    cond:18_1 = r14_1 != 0
    
    if (r14_1 != 0)
    label_14013c4cc:
        zmm1 = _mm_blend_ps(zmm1, arg19, 2)
        arg20 = _mm_add_ps(arg20, temp0_14)
        
        if (cond:16_1)
            goto label_14013c53f
        
        goto label_14013c4d9
    
label_14013c539:
    arg20 = _mm_add_ps(arg20, temp0_14)
    
    if (not(cond:15_1))
    label_14013c53f:
        zmm2 = _mm_blend_ps(zmm2, arg20, 2)
        arg13 = _mm_add_ps(arg13, arg15)
        
        if (cond:18_1)
            goto label_14013c4de
        
        goto label_14013c54b
    
label_14013c4d9:
    arg13 = _mm_add_ps(arg13, arg15)
    bool cond:19_1
    bool cond:20_1
    bool cond:21_1
    bool cond:22_1
    
    if (not(cond:17_1))
    label_14013c4de:
        arg11 = _mm_blend_ps(arg11, arg13, 2)
        arg15 = arg27
        cond:19_1 = rsi_2 == 0
        cond:20_1 = rsi_2 != 0
        cond:21_1 = rsi_2 == 0
        cond:22_1 = rsi_2 != 0
        
        if (rsi_2 != 0)
            goto label_14013c558
        
        goto label_14013c4f1
    
label_14013c54b:
    arg15 = arg27
    cond:19_1 = rsi_2 == 0
    cond:20_1 = rsi_2 != 0
    cond:21_1 = rsi_2 == 0
    cond:22_1 = rsi_2 != 0
    
    if (rsi_2 == 0)
    label_14013c4f1:
        
        if (not(cond:19_1))
        label_14013c4f3:
            zmm2 = _mm_blend_ps(zmm2, arg20, 4)
            
            if (cond:22_1)
                goto label_14013c563
            
            goto label_14013c4fc
    else
    label_14013c558:
        zmm1 = _mm_blend_ps(zmm1, arg19, 4)
        
        if (cond:20_1)
            goto label_14013c4f3
    
    bool cond:23_1
    bool cond:24_1
    bool cond:25_1
    bool cond:26_1
    
    if (not(cond:21_1))
    label_14013c563:
        arg11 = _mm_blend_ps(arg11, arg13, 4)
        cond:23_1 = rcx == 0
        cond:24_1 = rcx != 0
        cond:25_1 = rcx != 0
        cond:26_1 = rcx == 0
        
        if (rcx != 0)
            goto label_14013c501
        
        goto label_14013c56e
    
label_14013c4fc:
    cond:23_1 = rcx == 0
    cond:24_1 = rcx != 0
    cond:25_1 = rcx != 0
    cond:26_1 = rcx == 0
    
    if (rcx != 0)
    label_14013c501:
        arg19 = _mm_blend_ps(arg19, zmm1, 7)
        
        if (cond:24_1)
            goto label_14013c574
        
        goto label_14013c50a
    
label_14013c56e:
    arg19 = zmm1
    
    if (cond:23_1)
    label_14013c50a:
        arg20 = zmm2
        
        if (cond:25_1)
            arg11 = _mm_blend_ps(arg11, arg13, 8)
    else
    label_14013c574:
        arg20 = _mm_blend_ps(arg20, zmm2, 7)
        
        if (not(cond:26_1))
            arg11 = _mm_blend_ps(arg11, arg13, 8)
    
    arg13 = arg11
    
    while (true)
        float temp0_32[0x4] = _mm_unpacklo_ps(arg13, arg16[0].q)
        arg11 = _mm_unpackhi_ps(arg13, arg16)
        float temp0_34[0x4] = _mm_unpacklo_ps(arg19, arg20[0].q)
        float temp0_35[0x4] = _mm_unpackhi_ps(arg19, arg20)
        float temp0_36[0x4] = _mm_insert_ps(temp0_34, arg13, 0x28)
        float arg_170[0x4] = temp0_36
        int64_t rax_6 = sx.q(arg12[0]) * 0x30
        *(arg9 + rax_6 + 0x10) = __extractps_memd_xmmps_immb(arg19, 0)
        float zmm5[0x4] = _mm_unpackhi_pd(temp0_34, temp0_32[0].q)
        *(arg9 + rax_6 + 0x14) = __extractps_memd_xmmps_immb(arg20, 0)
        *(arg9 + rax_6 + 0x18) = __extractps_memd_xmmps_immb(arg13, 0)
        *(arg9 + rax_6 + 0x1c) = 0
        int64_t rax_10 = sx.q(_mm_extract_epi32(arg12, 2)) * 0x30
        *(arg9 + rax_10 + 0x10) = __extractps_memd_xmmps_immb(arg19, 1)
        float arg_180[0x4] = zmm5
        *(arg9 + rax_10 + 0x14) = __extractps_memd_xmmps_immb(arg20, 1)
        float temp0_44[0x4] = _mm_insert_ps(temp0_35, arg13, 0xa8)
        *(arg9 + rax_10 + 0x18) = __extractps_memd_xmmps_immb(arg13, 1)
        *(arg9 + rax_10 + 0x1c) = 0
        int64_t rax_14 = sx.q(arg17[0]) * 0x30
        *(arg9 + rax_14 + 0x10) = __extractps_memd_xmmps_immb(arg19, 2)
        float arg_190[0x4] = temp0_44
        *(arg9 + rax_14 + 0x14) = __extractps_memd_xmmps_immb(arg20, 2)
        zmm1 = _mm_unpackhi_pd(temp0_35, arg11[0])
        *(arg9 + rax_14 + 0x18) = __extractps_memd_xmmps_immb(arg13, 2)
        *(arg9 + rax_14 + 0x1c) = 0
        *(arg9 + sx.q(_mm_extract_epi32(arg17, 2)) * 0x30 + 0x10) = zmm1
        arg14 = _mm_cmpeq_epi32(temp0_36, temp0_36)
        float arg_20[0x4]
        float arg_40[0x4]
        float zmm9[0x4]
        float zmm12[0x4]
        
        if (arg5 + 4 s>= arg25)
            int64_t result = zx.q(arg51)
            
            if (arg5 + 4 s< result.d)
                arg12 = arg18
                arg11 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5 + 4), 0), data_142e11d00)
                zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), arg11)
                arg11 = _mm_slli_epi32(arg11, 3) & zmm9
                int64_t rax_20 = sx.q(arg11[0].d)
                int64_t rdx_6 = sx.q(_mm_extract_epi32(arg11, 1))
                int64_t rbp_4 = sx.q(_mm_extract_epi32(arg11, 2))
                int64_t rdi_1 = sx.q(_mm_extract_epi32(arg11, 3))
                arg13 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg8 + rax_20)), *(arg8 + rdx_6), 1), 
                        *(arg8 + rbp_4), 2), 
                    *(arg8 + rdi_1), 3)
                arg11 = data_142fc95e0 & zmm9
                int32_t* r12_1 = zx.q(_mm_extract_epi32(arg11, 1))
                int32_t* r15_1 = zx.q(_mm_extract_epi32(arg11, 2))
                int32_t* r14_2 = zx.q(_mm_extract_epi32(arg11, 3))
                uint64_t r11_3 = zx.q(arg11[0].d)
                uint32_t temp0_69[0x4] = _mm_slli_epi32(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(r11_3 + arg8 + rax_20)), 
                                *(r12_1 + arg8 + rdx_6), 1), 
                            *(r15_1 + arg8 + rbp_4), 2), 
                        *(r14_2 + arg8 + rdi_1), 3), 
                    4)
                arg11 = temp0_69 & zmm9
                int64_t rax_22 = sx.q(arg11[0].d)
                int64_t rdx_8 = sx.q(_mm_extract_epi32(arg11, 1))
                int64_t rsi_5 = sx.q(_mm_extract_epi32(arg11, 2))
                int64_t rdi_3 = sx.q(_mm_extract_epi32(arg11, 3))
                arg18 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_22)), *(arg3 + rdx_8), 1), 
                        *(arg3 + rsi_5), 2), 
                    *(arg3 + rdi_3), 3)
                zmm1 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(r11_3 + arg3 + rax_22)), 
                            *(r12_1 + arg3 + rdx_8), 1), 
                        *(r15_1 + arg3 + rsi_5), 2), 
                    *(r14_2 + arg3 + rdi_3), 3)
                arg15 = zx.o(0)
                zmm12 = _mm_shuffle_epi32(arg18, 0x4e)
                arg11 = _mm_cmpgt_epi32(data_1434422d0, zmm1) & zmm9
                char temp0_81 = _mm_movemask_ps(arg11)
                zmm2 = zx.o(0)
                char temp0_82
                
                if (temp0_81 != 0)
                    temp0_82 = _mm_movemask_ps(zmm9)
                    arg21 = zx.o(0)
                    zmm2 = arg11
                    arg16 = zx.o(0)
                    arg19 = zx.o(0)
                
                if (temp0_81 == 0 || temp0_82 != temp0_81)
                    zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                    zmm2 ^= zmm5
                    arg21 = zx.o(0)
                    arg16 = zx.o(0)
                    
                    if (not(0f >= arg12[0]))
                        zmm5 = _mm_add_epi32(zmm5, zmm1)
                        
                        if (arg12[0] >= 1f)
                            arg15 = zx.o(0)
                            arg21 = _mm_blendv_ps(zx.o(0), zmm5, _mm_and_ps(zmm2, zmm9))
                            arg16 = arg21
                        else
                            float temp0_85[0x4] = _mm_shuffle_ps(arg12, arg12, 0)
                            float temp0_87[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm5), temp0_85)
                            arg11 = _mm_and_ps(zmm2, zmm9)
                            float temp0_89[0x4] = _mm_round_ps(temp0_87, 9)
                            arg21 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(_mm_cvttps_epi32(temp0_89), zmm5), arg11)
                            arg15 = zx.o(0)
                            
                            if (arg50 != 1)
                                arg15 = _mm_sub_ps(temp0_87, temp0_89)
                            
                            arg16 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(
                                    _mm_sub_epi32(arg21, _mm_cmpeq_epi32(temp0_89, temp0_89)), 
                                    zmm5), 
                                arg11)
                    
                    arg19 = _mm_blendv_ps(zx.o(0), arg15, zmm2)
                
                arg12 = _mm_cvtepi32_epi64(arg18[0].q)
                arg14 = _mm_cvtepi32_epi64(zmm12[0].q)
                int32_t rcx_5 = arg22.d
                int32_t rax_25
                rax_25.b = rcx_5 == 3
                arg11 = _mm_shuffle_epi32(zx.o(neg.d(rax_25)), 0)
                arg11 &= __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0)
                float temp0_105[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg11)
                arg15 = _mm_cvtepi32_epi64(temp0_105[0].q)
                zmm5 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_105, 0x4e)[0])
                arg20 = _mm_shuffle_epi32(zx.o(arg24), 0)
                uint64_t rsi_6 = zx.q(rcx_5)
                arg_40 = zmm5
                __return_addr.o = arg15
                arg23 = arg14
                int32_t arg_60
                arg_60.o = arg12
                int32_t rax_45
                
                if (rcx_5 u> 6)
                label_14013cf68:
                    char temp0_226 = _mm_movemask_ps(zmm9)
                    arg15 = zx.o(0)
                    rax_45 = arg22.d
                    
                    if ((temp0_226 & 4) != 0)
                        arg15 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                    
                    if ((temp0_226 & 8) != 0)
                        arg15 = _mm_blend_epi16(arg15, zx.o(0), 0xc0)
                    
                label_14013cfc2:
                    zmm12 = arg15
                    arg14 = arg15
                    goto label_14013d047
                
                zmm2 = _mm_mullo_epi32(arg21, arg20)
                arg11 = _mm_cvtepi32_epi64(zmm2[0].q)
                zmm12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm2, 0x4e)[0].q)
                int32_t arg_30
                
                switch (rsi_6)
                    case 0, 1
                        arg_30.o = arg20
                        zmm2 = _mm_add_epi64(arg15, arg12)
                        arg12 = _mm_add_epi64(_mm_add_epi64(zmm5, arg14), zmm12)
                        zmm2 = _mm_add_epi64(zmm2, arg11)
                        zmm1 = _mm_shuffle_epi32(zmm9, 0x50)
                        float temp0_119[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm9, 0xfa)
                        arg15 = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                        int64_t rax_27 = _mm_extract_epi64(temp0_119, 1)
                        void* rdx_12 = arg4 + rax_27
                        arg27 = *(arg4 + rax_27)
                        int64_t rax_28 = arg15[0].q
                        void* rcx_6 = arg4 + rax_28
                        int64_t rbx_3 = _mm_extract_epi64(arg15, 1)
                        arg12 = data_1434426c0
                        arg15 = _mm_blendv_ps(zx.o(0), arg12, zmm1)
                        arg26 = *(arg4 + rax_28)
                        float temp0_123[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                        arg_20 = *(arg4 + rbx_3)
                        void* rbp_7 = temp0_119[0].q + arg4
                        zmm12 = *(arg15[0].q + rbp_7)
                        arg17 = *(_mm_extract_epi64(arg15, 1) + rdx_12)
                        arg_10 = *(temp0_123[0].q + rcx_6)
                        void* rbx_4 = arg4 + rbx_3
                        arg20 = *(_mm_extract_epi64(temp0_123, 1) + rbx_4)
                        arg12 = data_1434426e0
                        float temp0_124[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm1)
                        arg14 = _mm_blendv_ps(zx.o(0), arg12, zmm2)
                        arg15 = *(temp0_124[0].q + rbp_7)
                        zmm2 = *(_mm_extract_epi64(temp0_124, 1) + rdx_12)
                        float (* rax_35)[0x4] = arg14[0].q
                        double (* rdx_13)[0x2] = _mm_extract_epi64(arg14, 1)
                        zmm1 = *(rax_35 + rcx_6)
                        arg11 = *(rdx_13 + rbx_4)
                        char temp0_126 = _mm_movemask_ps(zmm9)
                        int64_t rax_36
                        bool cond:42
                        bool cond:43
                        bool cond:46
                        bool cond:47
                        
                        if ((temp0_126 & 1) == 0)
                            char temp9_1 = temp0_126 & 2
                            cond:42 = temp9_1 != 0
                            cond:43 = temp9_1 == 0
                            cond:46 = temp9_1 != 0
                            cond:47 = temp9_1 == 0
                            rax_36 = arg22
                            arg12 = arg20
                            
                            if (temp9_1 == 0)
                                goto label_14013cfe4
                            
                            goto label_14013caf8
                        
                        arg14 = *rbp_7
                        char temp8_1 = temp0_126 & 2
                        cond:42 = temp8_1 != 0
                        cond:43 = temp8_1 == 0
                        cond:46 = temp8_1 != 0
                        cond:47 = temp8_1 == 0
                        rax_36 = arg22
                        arg12 = arg20
                        
                        if (temp8_1 == 0)
                        label_14013cfe4:
                            arg20 = arg_30.o
                            
                            if (cond:43)
                                goto label_14013cb10
                            
                            goto label_14013cff1
                        
                    label_14013caf8:
                        arg14 = __insertps_xmmps_memd_immb(arg14, arg27[0], 0x10)
                        arg20 = arg_30.o
                        
                        if (cond:42)
                        label_14013cff1:
                            zmm12 = _mm_insert_ps(zmm12, arg17, 0x10)
                            
                            if (cond:46)
                            label_14013cb16:
                                arg15 = _mm_insert_ps(arg15, zmm2, 0x10)
                                
                                if ((temp0_126 & 4) != 0)
                                    return sub_14013d007(temp0_126, zmm1, arg3, arg4, rax_36, 
                                        rsi_6, arg9, arg11, arg12, arg14, arg15, arg16, zmm9, 
                                        arg18, zmm12, arg20, arg21) __tailcall
                                
                                jump(0x14013cb25)
                        else
                        label_14013cb10:
                            
                            if (not(cond:47))
                                goto label_14013cb16
                        
                        if ((temp0_126 & 4) == 0)
                            jump(0x14013cb25)
                        
                        return sub_14013d007(temp0_126, zmm1, arg3, arg4, rax_36, rsi_6, arg9, 
                            arg11, arg12, arg14, arg15, arg16, zmm9, arg18, zmm12, arg20, arg21)
                            __tailcall
                    case 2
                        zmm1 = _mm_add_epi64(arg15, arg12)
                        arg12 = _mm_add_epi64(_mm_add_epi64(zmm5, arg14), zmm12)
                        zmm1 = _mm_add_epi64(zmm1, arg11)
                        zmm2 = _mm_shuffle_epi32(zmm9, 0x50)
                        float temp0_134[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        arg17 = _mm_shuffle_epi32(zmm9, 0xfa)
                        float temp0_136[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg17)
                        zmm1 = data_1434426b0
                        float temp0_137[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        arg15 = _mm_blendv_ps(zx.o(0), zmm1, arg17)
                        int64_t rcx_9 = temp0_134[0].q
                        void* rbx_5 = arg4 + rcx_9
                        int64_t rdx_15 = _mm_extract_epi64(temp0_134, 1)
                        void* rbp_8 = arg4 + rdx_15
                        void* rax_38 = temp0_137[0].q
                        int16_t* rdi_4 = _mm_extract_epi64(temp0_137, 1)
                        zmm5 = data_1434426c0
                        float temp0_139[0x4] = _mm_blendv_ps(zx.o(0), zmm5, zmm2)
                        zmm2 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_38 + rbx_5)), *(rdi_4 + rbp_8), 1)
                        void* rax_40 = temp0_139[0].q
                        int16_t* rdi_5 = _mm_extract_epi64(temp0_139, 1)
                        int64_t rbx_6 = temp0_136[0].q
                        arg12 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_40 + rbx_5)), *(rdi_5 + rbp_8), 1)
                        void* rax_42 = arg4 + rbx_6
                        int64_t rbp_9 = _mm_extract_epi64(temp0_136, 1)
                        int16_t* rdi_6 = arg15[0].q
                        float temp0_142[0x4] = _mm_blendv_ps(zx.o(0), zmm5, arg17)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rdi_6 + rax_42), 2)
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, *(temp0_142[0].q + rax_42), 2)
                        void* rax_43 = arg4 + rbp_9
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(arg15, 1) + rax_43), 3)
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, 
                            *(_mm_extract_epi64(temp0_142, 1) + rax_43), 3)
                        arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_9)), *(arg4 + rdx_15), 
                                    1), 
                                *(arg4 + rbx_6), 2), 
                            *(arg4 + rbp_9), 3)[0])
                        zmm1 = data_1434424d0
                        float temp0_152[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, zmm1))
                        arg11 = data_1434426d0
                        float temp0_153[0x4] = _mm_div_ps(temp0_152, arg11)
                        float temp0_157[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), zmm1)), 
                            arg11)
                        arg15 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg12[0].q), zmm1)), 
                            arg11)
                        arg11 = data_143442710
                        arg14 = _mm_mul_ps(temp0_153, arg11)
                        zmm12 = _mm_mul_ps(temp0_157, arg11)
                        arg15 = _mm_mul_ps(arg15, arg11)
                        rax_45 = arg22.d
                    label_14013d047:
                        arg21 = _mm_cmpeq_epi32(arg21, arg16) & not.o(zmm9)
                        char temp0_234 = _mm_movemask_ps(arg21)
                        
                        if (temp0_234 != 0)
                            if (rax_45 u<= 6)
                                int32_t temp0_235[0x4] = _mm_mullo_epi32(arg16, arg20)
                                arg11 = _mm_cvtepi32_epi64(temp0_235[0].q)
                                arg20 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_235, 0x4e)[0].q)
                                
                                switch (jump_table_14013d99c[rsi_6])
                                    case 0x841f0f
                                        undefined
                                    case 0xfffff6ed
                                        zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        zmm1 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg23), arg20)
                                        zmm2 = _mm_add_epi64(zmm2, arg11)
                                        arg20 = _mm_shuffle_epi32(arg21, 0x50)
                                        float temp0_244[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg20)
                                        zmm2 = _mm_shuffle_epi32(arg21, 0xfa)
                                        float temp0_246[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                                        int64_t rax_55 = _mm_extract_epi64(temp0_244, 1)
                                        void* rbp_11 = arg4 + rax_55
                                        arg16 = *(arg4 + rax_55)
                                        int64_t rax_56 = temp0_246[0].q
                                        void* rdx_23 = arg4 + rax_56
                                        __return_addr.o = *(arg4 + rax_56)
                                        int64_t rax_57 = _mm_extract_epi64(temp0_246, 1)
                                        arg17 = data_1434426c0
                                        float temp0_247[0x4] = _mm_blendv_ps(zx.o(0), arg17, arg20)
                                        void* rdi_13 = arg4 + rax_57
                                        float temp0_248[0x4] = _mm_blendv_ps(zx.o(0), arg17, zmm2)
                                        arg23 = *(arg4 + rax_57)
                                        void* rbx_11 = temp0_244[0].q + arg4
                                        arg12 = *(temp0_247[0].q + rbx_11)
                                        arg18 = *(_mm_extract_epi64(temp0_247, 1) + rbp_11)
                                        arg21 = *(temp0_248[0].q + rdx_23)
                                        arg_40 = *(_mm_extract_epi64(temp0_248, 1) + rdi_13)
                                        arg17 = data_1434426e0
                                        float temp0_249[0x4] = _mm_blendv_ps(zx.o(0), arg17, arg20)
                                        float temp0_250[0x4] = _mm_blendv_ps(zx.o(0), arg17, zmm2)
                                        arg11 = *(temp0_249[0].q + rbx_11)
                                        arg17 = *(_mm_extract_epi64(temp0_249, 1) + rbp_11)
                                        float (* rax_64)[0x4] = temp0_250[0].q
                                        float (* rbp_12)[0x4] = _mm_extract_epi64(temp0_250, 1)
                                        
                                        if ((temp0_234 & 1) != 0)
                                            jump(0x14013d699)
                                        
                                        return sub_14013d1cb(temp0_234, temp0_234, 
                                            *(rax_64 + rdx_23), arg12, arg9, arg11, temp0_250, 
                                            arg14, arg15, arg16, zmm9, arg17, arg18, zmm12, arg19, 
                                            *(rbp_12 + rdi_13), arg21) __tailcall
                                    case 0xfffff8c8
                                        arg12 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        zmm2 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg23), arg20)
                                        arg12 = _mm_add_epi64(arg12, arg11)
                                        arg18 = _mm_shuffle_epi32(arg21, 0x50)
                                        float temp0_257[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg18)
                                        arg16 = _mm_shuffle_epi32(arg21, 0xfa)
                                        float temp0_259[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg16)
                                        int64_t rdx_27 = temp0_257[0].q
                                        int64_t rbp_13 = _mm_extract_epi64(temp0_257, 1)
                                        arg17 = data_1434426b0
                                        float temp0_260[0x4] = _mm_blendv_ps(zx.o(0), arg17, arg18)
                                        void* rbx_12 = arg4 + rdx_27
                                        float temp0_261[0x4] = _mm_blendv_ps(zx.o(0), arg17, arg16)
                                        void* rdi_14 = arg4 + rbp_13
                                        zmm2 = zx.o(*(temp0_260[0].q + rbx_12))
                                        int64_t rax_68 = _mm_extract_epi64(temp0_260, 1)
                                        arg17 = data_1434426c0
                                        float temp0_262[0x4] = _mm_blendv_ps(zx.o(0), arg17, arg18)
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rax_68 + rdi_14), 1)
                                        zmm5 = __pinsrw_xmmdq_memw_immb(
                                            zx.o(*(temp0_262[0].q + rbx_12)), 
                                            *(_mm_extract_epi64(temp0_262, 1) + rdi_14), 1)
                                        int64_t rax_71 = temp0_259[0].q
                                        void* rbx_14 = arg4 + rax_71
                                        float temp0_265[0x4] = _mm_blendv_ps(zx.o(0), arg17, arg16)
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                                            *(temp0_261[0].q + rbx_14), 2)
                                        zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, 
                                            *(temp0_265[0].q + rbx_14), 2)
                                        arg11 = __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_27)), 
                                                *(arg4 + rbp_13), 1), 
                                            *(arg4 + rax_71), 2)
                                        int64_t rax_72 = _mm_extract_epi64(temp0_259, 1)
                                        arg11 = __pinsrw_xmmdq_memw_immb(arg11, *(arg4 + rax_72), 3)
                                        void* rax_73 = arg4 + rax_72
                                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                                            *(_mm_extract_epi64(temp0_261, 1) + rax_73), 3)
                                        zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, 
                                            *(_mm_extract_epi64(temp0_265, 1) + rax_73), 3)
                                        arg11 = _mm_cvtepu16_epi32(arg11[0])
                                        arg16 = data_1434424d0
                                        float temp0_275[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg16))
                                        arg17 = data_1434426d0
                                        float temp0_276[0x4] = _mm_div_ps(temp0_275, arg17)
                                        float temp0_280[0x4] = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(zmm2[0].q), arg16)), 
                                            arg17)
                                        arg11 = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(zmm5[0].q), arg16)), 
                                            arg17)
                                        zmm2 = data_143442710
                                        _mm_mul_ps(temp0_276, zmm2)
                                        _mm_mul_ps(temp0_280, zmm2)
                                        _mm_mul_ps(arg11, zmm2)
                                        jump(sub_14013d1cb+0x530)
                                    case 0xfffffa67
                                        zmm5 = _mm_srai_epi32(_mm_slli_epi32(arg21, 0x1f), 0x1f)
                                        arg18 &= zmm5
                                        int64_t rax_75 = sx.q(arg18[0])
                                        void* rdi_17 = arg4 + rax_75
                                        zmm1 = *(arg4 + rax_75)
                                        int64_t rax_77 = sx.q(_mm_extract_epi32(arg18, 1))
                                        void* r8_5 = arg4 + rax_77
                                        int64_t rsi_7 = sx.q(_mm_extract_epi32(arg18, 2))
                                        void* rbp_15 = arg4 + rsi_7
                                        int64_t rdx_31 = sx.q(_mm_extract_epi32(arg18, 3))
                                        void* rbx_16 = arg4 + rdx_31
                                        float temp0_295[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(zmm1, *(arg4 + rax_77), 
                                                    0x10), 
                                                *(arg4 + rsi_7), 0x20), 
                                            *(arg4 + rdx_31), 0x30)
                                        zmm2 = data_142fc95e0 & zmm5
                                        arg18 = *(zx.q(zmm2[0]) + rdi_17)
                                        uint64_t rax_79 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_32 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        uint64_t rsi_8 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_301[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg18, *(rax_79 + r8_5), 
                                                    0x10), 
                                                *(rdx_32 + rbp_15), 0x20), 
                                            *(rsi_8 + rbx_16), 0x30)
                                        arg12 = data_142fc95f0 & zmm5
                                        arg16 = *(zx.q(arg12[0]) + rdi_17)
                                        uint64_t rax_81 = zx.q(_mm_extract_epi32(arg12, 1))
                                        uint64_t rdx_33 = zx.q(_mm_extract_epi32(arg12, 2))
                                        uint64_t rsi_9 = zx.q(_mm_extract_epi32(arg12, 3))
                                        arg16 = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg16, *(rax_81 + r8_5), 
                                                    0x10), 
                                                *(rdx_33 + rbp_15), 0x20), 
                                            *(rsi_9 + rbx_16), 0x30)
                                        zmm2 = data_143442650 & zmm5
                                        arg12 = *(zx.q(zmm2[0]) + rdi_17)
                                        uint64_t rax_83 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_34 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        int32_t* rsi_10 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_313[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg12, *(rax_83 + r8_5), 
                                                    0x10), 
                                                *(rdx_34 + rbp_15), 0x20), 
                                            *(rsi_10 + rbx_16), 0x30)
                                        zmm2 = data_143442660 & zmm5
                                        arg17 = *(zx.q(zmm2[0]) + rdi_17)
                                        uint64_t rax_85 = zx.q(_mm_extract_epi32(zmm2, 1))
                                        uint64_t rdx_35 = zx.q(_mm_extract_epi32(zmm2, 2))
                                        int32_t* rsi_11 = zx.q(_mm_extract_epi32(zmm2, 3))
                                        float temp0_319[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg17, *(rax_85 + r8_5), 
                                                    0x10), 
                                                *(rdx_35 + rbp_15), 0x20), 
                                            *(rsi_11 + rbx_16), 0x30)
                                        zmm5 &= data_143442670
                                        arg_30.o = arg19
                                        arg19 = *(zx.q(zmm5[0]) + rdi_17)
                                        uint64_t rax_87 = zx.q(_mm_extract_epi32(zmm5, 1))
                                        uint64_t rdx_36 = zx.q(_mm_extract_epi32(zmm5, 2))
                                        uint64_t rdi_18 = zx.q(_mm_extract_epi32(zmm5, 3))
                                        float temp0_325[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg19, *(rax_87 + r8_5), 
                                                    0x10), 
                                                *(rdx_36 + rbp_15), 0x20), 
                                            *(rdi_18 + rbx_16), 0x30)
                                        zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        zmm5 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg23), arg20)
                                        float temp0_331[0x4] = _mm_blendv_ps(zx.o(0), 
                                            _mm_add_epi64(zmm2, arg11), 
                                            _mm_shuffle_epi32(arg21, 0x50))
                                        float temp0_333[0x4] = _mm_blendv_ps(zx.o(0), zmm5, 
                                            _mm_shuffle_epi32(arg21, 0xfa))
                                        int64_t rax_88 = temp0_331[0].q
                                        int64_t rdx_37 = _mm_extract_epi64(temp0_331, 1)
                                        int64_t rbp_16 = temp0_333[0].q
                                        int64_t rbx_17 = _mm_extract_epi64(temp0_333, 1)
                                        arg11 = __pinsrd_xmmdq_memd_immb(
                                            __pinsrd_xmmdq_memd_immb(
                                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_88)), 
                                                    *(arg4 + rdx_37), 1), 
                                                *(arg4 + rbp_16), 2), 
                                            *(arg4 + rbx_17), 3)
                                        zmm2 = arg11
                                        zmm5 = _mm_srli_epi32(arg11, 0xa) & data_143442480
                                        arg11 &= data_143442680
                                        zmm2 = _mm_srli_epi32(zmm2, 0x15)
                                        __addps_xmmps_memps(
                                            _mm_mul_ps(
                                                __divps_xmmps_memps(
                                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg11, 
                                                        data_143442490)), 
                                                    data_1434426a0), 
                                                temp0_313), 
                                            temp0_295)
                                        arg11 = data_143442440
                                        float temp0_345[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(zmm5, arg11))
                                        zmm5 = data_143442690
                                        _mm_add_ps(
                                            _mm_mul_ps(_mm_div_ps(temp0_345, zmm5), temp0_319), 
                                            temp0_301)
                                        _mm_add_ps(
                                            _mm_mul_ps(
                                                _mm_div_ps(
                                                    _mm_cvtepi32_ps(_mm_add_epi32(zmm2, arg11)), 
                                                    zmm5), 
                                                temp0_325), 
                                            arg16)
                                        jump(sub_14013d1cb+0x530)
                            
                            if ((temp0_234 & 4) != 0)
                                _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                            
                            if ((temp0_234 & 8) == 0)
                                jump(0x14013d257)
                            
                            jump(0x14013d251)
                        
                        float temp0_354[0x4] = _mm_unpacklo_ps(arg15, 0)
                        float temp0_355[0x4] = _mm_unpackhi_ps(arg15, zx.o(0))
                        arg11 = _mm_unpacklo_ps(arg14, zmm12[0].q)
                        float temp0_357[0x4] = _mm_unpackhi_ps(arg14, zmm12)
                        float arg_130[0x4] = _mm_insert_ps(arg11, arg15, 0x28)
                        double arg_140[0x2] = _mm_unpackhi_pd(arg11, temp0_354[0].q)
                        double arg_150[0x2] = _mm_insert_ps(temp0_357, arg15, 0xa8)
                        float arg_160[0x4] = _mm_unpackhi_pd(temp0_357, temp0_355[0].q)
                        uint64_t i = zx.q(_mm_movemask_ps(zmm9))
                        
                        do
                            uint64_t rcx_24
                            uint64_t rflags_1
                            
                            if (i == 0)
                                rcx_24 = 0x40
                            else
                                rcx_24, rflags_1 = _bit_scan_forward(i)
                            float arg_120[0x4] = arg13
                            result = sx.q(arg_120[zx.q(rcx_24.d) & 3]) * 0x30
                            *(arg9 + result + 0x10) = (&arg_130)[rcx_24]
                            i &= rol.q(-2, rcx_24.b)
                        while (i != 0)
                    case 3
                        zmm1 = zmm9 & arg18
                        int64_t rax_47 = sx.q(zmm1[0])
                        void* r10_5 = arg4 + rax_47
                        int32_t temp0_165 = _mm_extract_epi32(zmm1, 1)
                        zmm2 = *(arg4 + rax_47)
                        int64_t rax_48 = sx.q(temp0_165)
                        void* r8_3 = arg4 + rax_48
                        int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm1, 2))
                        void* rbp_10 = arg4 + rdx_18
                        int64_t rcx_11 = sx.q(_mm_extract_epi32(zmm1, 3))
                        float temp0_170[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(arg4 + rax_48), 0x10), 
                                *(arg4 + rdx_18), 0x20), 
                            *(arg4 + rcx_11), 0x30)
                        void* rdx_19 = arg4 + rcx_11
                        arg_30.o = arg20
                        float temp0_172[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(*(r11_3 + r10_5), *(r12_1 + r8_3), 0x10), 
                            *(r15_1 + rbp_10), 0x20)
                        arg17 = data_142fc95f0 & zmm9
                        uint64_t r15_2 = zx.q(_mm_extract_epi32(arg17, 1))
                        uint64_t r12_2 = zx.q(_mm_extract_epi32(arg17, 2))
                        arg_20[0].q = zx.q(_mm_extract_epi32(arg17, 3))
                        zmm2 = data_143442650 & zmm9
                        zmm1 = *(zx.q(zmm2[0]) + r10_5)
                        uint64_t rcx_13 = zx.q(_mm_extract_epi32(zmm2, 1))
                        uint64_t rdi_10 = zx.q(_mm_extract_epi32(zmm2, 2))
                        uint64_t rbx_7 = zx.q(_mm_extract_epi32(zmm2, 3))
                        float temp0_181[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rcx_13 + r8_3), 0x10), 
                                *(rdi_10 + rbp_10), 0x20), 
                            *(rbx_7 + rdx_19), 0x30)
                        arg14 = arg12
                        arg12 = data_143442660 & zmm9
                        zmm2 = *(zx.q(arg12[0]) + r10_5)
                        uint64_t rcx_15 = zx.q(_mm_extract_epi32(arg12, 1))
                        uint64_t rdi_11 = zx.q(_mm_extract_epi32(arg12, 2))
                        uint64_t rbx_8 = zx.q(_mm_extract_epi32(arg12, 3))
                        float temp0_187[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(rcx_15 + r8_3), 0x10), 
                                *(rdi_11 + rbp_10), 0x20), 
                            *(rbx_8 + rdx_19), 0x30)
                        arg12 = _mm_add_epi64(arg15, arg14)
                        zmm5 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm5, arg23), zmm12)
                        float temp0_193[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg12, arg11), 
                            _mm_shuffle_epi32(zmm9, 0x50))
                        float temp0_195[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm5, _mm_shuffle_epi32(zmm9, 0xfa))
                        arg11 = data_143442670 & zmm9
                        int32_t* rdi_12 = zx.q(_mm_extract_epi32(arg11, 1))
                        int32_t* rbx_9 = zx.q(_mm_extract_epi32(arg11, 2))
                        int32_t* r11_5 = zx.q(_mm_extract_epi32(arg11, 3))
                        int64_t rcx_16 = temp0_193[0].q
                        int64_t rax_50 = _mm_extract_epi64(temp0_193, 1)
                        int64_t rcx_17 = temp0_195[0].q
                        zmm5 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_16)), *(arg4 + rax_50), 1)
                        int64_t rax_51 = _mm_extract_epi64(temp0_195, 1)
                        zmm5 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm5, *(arg4 + rcx_17), 2), *(arg4 + rax_51), 
                            3)
                        arg12 = zmm5
                        arg15 = _mm_srli_epi32(zmm5, 0xa) & data_143442480
                        zmm5 = __paddd_xmmdq_memdq(zmm5 & data_143442680, data_143442490)
                        uint64_t rax_52 = zx.q(arg17[0])
                        float temp0_205[0x4] =
                            __divps_xmmps_memps(_mm_cvtepi32_ps(zmm5), data_1434426a0)
                        uint64_t rcx_18 = zx.q(arg11[0].d)
                        arg14 = __addps_xmmps_memps(_mm_mul_ps(temp0_205, temp0_181), temp0_170)
                        arg11 = data_143442440
                        float temp0_209[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg15, arg11))
                        zmm1 = data_143442690
                        zmm12 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_209, zmm1), temp0_187), 
                            __insertps_xmmps_memd_immb(temp0_172, *(r14_2 + rdx_19), 0x30))
                        arg20 = arg_30.o
                        float temp0_214[0x4] =
                            __insertps_xmmps_memd_immb(*(rax_52 + r10_5), *(r15_2 + r8_3), 0x10)
                        arg12 = _mm_add_epi32(_mm_srli_epi32(arg12, 0x15), arg11)
                        float temp0_217[0x4] =
                            __insertps_xmmps_memd_immb(temp0_214, *(r12_2 + rbp_10), 0x20)
                        arg15 = _mm_add_ps(
                            _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(arg12), zmm1), 
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(*(rcx_18 + r10_5), 
                                            *(rdi_12 + r8_3), 0x10), 
                                        *(rbx_9 + rbp_10), 0x20), 
                                    *(r11_5 + rdx_19), 0x30)), 
                            __insertps_xmmps_memd_immb(temp0_217, *(arg_20[0].q + rdx_19), 0x30))
                        rax_45 = arg22.d
                        goto label_14013d047
                    case 4, 5
                        goto label_14013cf68
                    case 6
                        char temp0_229 = _mm_movemask_ps(zmm9)
                        arg15 = zx.o(0)
                        rax_45 = arg22.d
                        
                        if ((temp0_229 & 4) != 0)
                            arg15 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                        
                        if ((temp0_229 & 8) != 0)
                            arg15 = _mm_blend_epi16(arg15, zx.o(0), 0xc0)
                        
                        goto label_14013cfc2
            
            return result
        
        int64_t rcx_26 = sx.q(arg2 + 0x20)
        arg12 = *(arg8 + rcx_26)
        zmm1 = *(arg8 + rcx_26 + 0x10)
        arg_20 = zmm1
        arg11 = _mm_slli_epi32(_mm_shuffle_ps(arg12, zmm1, 0xdd), 4)
        int64_t rdx_38 = sx.q(arg11[0].d)
        int64_t r10_7 = sx.q(*(arg3 + rdx_38))
        int64_t rbp_19 = sx.q(_mm_extract_epi32(arg11, 1))
        int64_t rsi_13 = sx.q(*(arg3 + rbp_19))
        int64_t rax_93 = sx.q(_mm_extract_epi32(arg11, 2))
        int64_t rbx_21 = sx.q(*(arg3 + rax_93))
        int64_t rcx_28 = sx.q(_mm_extract_epi32(arg11, 3))
        int64_t rdi_21 = sx.q(*(arg3 + rcx_28))
        zmm12 = _mm_insert_epi32(
            _mm_insert_epi32(_mm_insert_epi32(zx.o(r10_7.d), rsi_13.d, 1), rbx_21.d, 2), rdi_21.d, 
            3)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rdx_38 + 4)), *(arg3 + rbp_19 + 4), 1), 
                *(arg3 + rax_93 + 4), 2), 
            *(arg3 + rcx_28 + 4), 3)
        zmm9 = _mm_shuffle_epi32(zmm12, 0x4e)
        arg11 = _mm_cmpgt_epi32(data_1434422d0, zmm1)
        uint64_t rdx_39 = zx.q(_mm_movemask_ps(arg11))
        zmm2 = arg23
        __return_addr.o = arg12
        
        if (rdx_39.b == 0)
            arg11 = zx.o(0) ^ arg14
            
            if (0f < arg18[0])
            label_14013b574:
                bool cond:29_1 = arg18[0] >= 1f
                zmm5 = _mm_add_epi32(zmm1, arg14)
                
                if (cond:29_1)
                    zmm2 = _mm_blendv_ps(zmm2, zmm5, arg11)
                    arg15 = _mm_blendv_ps(arg15, zmm5, arg11)
                    arg13 = zx.o(0)
                else
                    arg16 = arg15
                    float temp0_382[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm5), arg29)
                    arg15 = _mm_round_ps(temp0_382, 9)
                    zmm2 = _mm_blendv_ps(zmm2, _mm_min_epi32(_mm_cvttps_epi32(arg15), zmm5), arg11)
                    arg13 = zx.o(0)
                    
                    if (arg10 != 1)
                        arg13 = _mm_sub_ps(temp0_382, arg15)
                    
                    arg14 = _mm_min_epi32(_mm_sub_epi32(zmm2, _mm_cmpeq_epi32(arg15, arg15)), zmm5)
                    arg15 = _mm_blendv_ps(arg16, arg14, arg11)
                    arg14 = _mm_cmpeq_epi32(arg14, arg14)
                
                arg16 = zmm2
                arg21 = _mm_blendv_ps(arg21, arg13, arg11)
            else
            label_14013b5f1:
                zmm2 = _mm_blendv_ps(zmm2, zx.o(0), arg11)
                arg15 = _mm_blendv_ps(arg15, zx.o(0), arg11)
                arg16 = zmm2
                arg21 = _mm_blendv_ps(arg21, zx.o(0), arg11)
        else
            arg16 = _mm_andnot_ps(arg11, zmm2)
            arg13 = _mm_andnot_ps(arg11, arg15)
            zmm5 = _mm_andnot_ps(arg11, arg21)
            
            if (rdx_39.b != 0xf)
                zmm2 = arg16
                arg15 = arg13
                arg21 = zmm5
                arg11 ^= arg14
                
                if (0f >= arg18[0])
                    goto label_14013b5f1
                
                goto label_14013b574
            
            zmm2 = arg16
            arg15 = arg13
            arg21 = zmm5
        
        arg17 = _mm_cvtepi32_epi64(zmm12[0].q)
        zmm5 = _mm_cvtepi32_epi64(zmm9[0].q)
        arg13 = zx.o(0)
        arg11 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & arg30
        float temp0_401[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg11)
        zmm9 = _mm_cvtepi32_epi64(temp0_401[0].q)
        arg18 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_401, 0x4e)[0])
        zmm1 = __pmulld_xmmdq_memdq(arg16, arg26)
        arg11 = _mm_cvtepi32_epi64(zmm1[0].q)
        zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
        arg23 = zmm2
        arg_40 = arg21
        
        if (arg7 u< 2)
            arg12 = _mm_add_epi64(zmm9, arg17)
            arg13 = _mm_add_epi64(_mm_add_epi64(arg18, zmm5), zmm1)
            arg12 = _mm_add_epi64(arg12, arg11)
            int64_t rax_98 = arg12[0].q
            int64_t rcx_29 = _mm_extract_epi64(arg12, 1)
            rdx_39 = arg13[0].q
            int64_t rbp_20 = _mm_extract_epi64(arg13, 1)
            arg20 = *(arg4 + rax_98 + 4)
            arg19 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_98), *(arg4 + rcx_29), 0x10), 
                    *(arg4 + rdx_39), 0x20), 
                *(arg4 + rbp_20), 0x30)
            arg20 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg20, *(arg4 + rcx_29 + 4), 0x10), 
                    *(arg4 + rdx_39 + 4), 0x20), 
                *(arg4 + rbp_20 + 4), 0x30)
            arg13 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_98 + 8), *(arg4 + rcx_29 + 8), 0x10), 
                    *(arg4 + rdx_39 + 8), 0x20), 
                *(arg4 + rbp_20 + 8), 0x30)
        else if (arg7 == 2)
            arg12 = _mm_add_epi64(zmm9, arg17)
            arg13 = _mm_add_epi64(_mm_add_epi64(arg18, zmm5), zmm1)
            arg12 = _mm_add_epi64(arg12, arg11)
            int64_t rbx_22 = _mm_extract_epi64(arg12, 1)
            int64_t rax_99 = arg12[0].q
            rdx_39 = arg13[0].q
            int64_t rcx_30 = _mm_extract_epi64(arg13, 1)
            arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_99)), *(arg4 + rbx_22), 1), 
                    *(arg4 + rdx_39), 2), 
                *(arg4 + rcx_30), 3)[0])
            zmm1 = data_1434424d0
            float temp0_473[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, zmm1))
            arg11 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_99 + 2)), *(arg4 + rbx_22 + 2), 1), 
                    *(arg4 + rdx_39 + 2), 2), 
                *(arg4 + rcx_30 + 2), 3)
            arg12 = data_1434426d0
            float temp0_477[0x4] = _mm_div_ps(temp0_473, arg12)
            float temp0_480[0x4] =
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg11[0]), zmm1))
            arg11 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_99 + 4)), *(arg4 + rbx_22 + 4), 1), 
                    *(arg4 + rdx_39 + 4), 2), 
                *(arg4 + rcx_30 + 4), 3)
            float temp0_484[0x4] = _mm_div_ps(temp0_480, arg12)
            float temp0_488[0x4] = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg11[0]), zmm1)), arg12)
            arg11 = data_143442710
            arg19 = _mm_mul_ps(temp0_477, arg11)
            arg20 = _mm_mul_ps(temp0_484, arg11)
            arg13 = _mm_mul_ps(temp0_488, arg11)
        else
            arg20 = zx.o(0)
            arg19 = zx.o(0)
            
            if (arg7 == 3)
                arg12 = _mm_add_epi64(zmm9, arg17)
                arg13 = _mm_add_epi64(arg18, zmm5)
                arg12 = _mm_add_epi64(arg12, arg11)
                arg11 = zx.o(*(arg4 + arg12[0].q))
                int64_t rax_95 = _mm_extract_epi64(arg12, 1)
                arg13 = _mm_add_epi64(arg13, zmm1)
                arg11 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(arg11, *(arg4 + rax_95), 1), 
                        *(arg4 + arg13[0].q), 2), 
                    *(arg4 + _mm_extract_epi64(arg13, 1)), 3)
                arg13 = *(arg4 + r10_7 + 4)
                float temp0_418[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_7), *(arg4 + rsi_13), 0x10), 
                        *(arg4 + rbx_21), 0x20), 
                    *(arg4 + rdi_21), 0x30)
                float temp0_421[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg13, *(arg4 + rsi_13 + 4), 0x10), 
                        *(arg4 + rbx_21 + 4), 0x20), 
                    *(arg4 + rdi_21 + 4), 0x30)
                float temp0_424[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_7 + 0xc), *(arg4 + rsi_13 + 0xc), 
                            0x10), 
                        *(arg4 + rbx_21 + 0xc), 0x20), 
                    *(arg4 + rdi_21 + 0xc), 0x30)
                zmm2 = zmm5
                zmm5 = arg11
                arg21 = arg15
                arg15 = arg11
                float temp0_428[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg11 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    temp0_424)
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_7 + 0x10), *(arg4 + rsi_13 + 0x10), 
                            0x10), 
                        *(arg4 + rbx_21 + 0x10), 0x20), 
                    *(arg4 + rdi_21 + 0x10), 0x30)
                arg19 = _mm_add_ps(temp0_428, temp0_418)
                arg15 = _mm_srli_epi32(arg15, 0xa) & data_143442480
                zmm1 = data_143442440
                arg12 = zmm1
                float temp0_435[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg15, zmm1))
                zmm1 = data_143442690
                float temp0_437[0x4] = _mm_mul_ps(_mm_div_ps(temp0_435, zmm1), arg11)
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_7 + 8), *(arg4 + rsi_13 + 8), 0x10), 
                    *(arg4 + rbx_21 + 8), 0x20)
                arg20 = _mm_add_ps(temp0_437, temp0_421)
                float temp0_443[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_7 + 0x14), *(arg4 + rsi_13 + 0x14), 
                            0x10), 
                        *(arg4 + rbx_21 + 0x14), 0x20), 
                    *(arg4 + rdi_21 + 0x14), 0x30)
                float temp0_446[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm5, 0x15), arg12))
                zmm5 = zmm2
                arg15 = arg21
                arg13 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_446, zmm1), temp0_443), 
                    __insertps_xmmps_memd_immb(arg11, *(arg4 + rdi_21 + 8), 0x30))
        
        int32_t temp0_492[0x4] = _mm_cmpeq_epi32(arg16, arg15)
        arg21 = temp0_492 ^ arg14
        char temp0_493 = _mm_movemask_ps(arg21)
        
        if (temp0_493 != 0)
            arg27 = arg15
            
            if (arg7 u<= 6)
                zmm1 = _mm_mullo_epi32(arg26, arg15)
                arg11 = _mm_cvtepi32_epi64(zmm1[0].q)
                arg12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
                
                switch (arg7)
                    case 0, 1
                        return sub_14013ba4e(arg11, rdx_39, arg3, arg4, arg7, arg8, arg9, 
                            temp0_493, arg10, arg12, arg13, zmm5, zmm9, arg17, arg18, arg19, arg20, 
                            arg21) __tailcall
                    case 2
                        zmm9 = _mm_add_epi64(zmm9, arg17)
                        arg18 = _mm_add_epi64(_mm_add_epi64(arg18, zmm5), arg12)
                        zmm9 = _mm_add_epi64(zmm9, arg11)
                        zmm2 = _mm_shuffle_epi32(arg21, 0x50)
                        float temp0_504[0x4] = _mm_blendv_ps(zx.o(0), zmm9, zmm2)
                        arg16 = _mm_shuffle_epi32(arg21, 0xfa)
                        float temp0_506[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg16)
                        int64_t rax_105 = temp0_504[0].q
                        void* r10_9 = arg4 + rax_105
                        int64_t rdi_23 = _mm_extract_epi64(temp0_504, 1)
                        void* rsi_14 = arg4 + rdi_23
                        int64_t rbx_23 = temp0_506[0].q
                        zmm1 = data_1434426b0
                        float temp0_507[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        arg15 = _mm_blendv_ps(zx.o(0), zmm1, arg16)
                        zmm1 = zx.o(*(temp0_507[0].q + r10_9))
                        int64_t rcx_34 = _mm_extract_epi64(temp0_507, 1)
                        arg11 = zmm2
                        zmm2 = data_1434426c0
                        arg12 = zmm2
                        float temp0_509[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg11)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(rcx_34 + rsi_14), 1)
                        void* rdx_41 = arg4 + rbx_23
                        zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_509[0].q + r10_9)), 
                            *(_mm_extract_epi64(temp0_509, 1) + rsi_14), 1)
                        int64_t rcx_38 = _mm_extract_epi64(temp0_506, 1)
                        int16_t* rbp_23 = arg15[0].q
                        float temp0_512[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg16)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(rbp_23 + rdx_41), 2)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(temp0_512[0].q + rdx_41), 2)
                        void* rdx_42 = arg4 + rcx_38
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, 
                            *(_mm_extract_epi64(arg15, 1) + rdx_42), 3)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(temp0_512, 1) + rdx_42), 3)
                        arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_105)), *(arg4 + rdi_23), 
                                    1), 
                                *(arg4 + rbx_23), 2), 
                            *(arg4 + rcx_38), 3)[0])
                        arg12 = data_1434424d0
                        float temp0_522[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg12))
                        arg11 = data_1434426d0
                        float temp0_523[0x4] = _mm_div_ps(temp0_522, arg11)
                        float temp0_527[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm1[0].q), arg12)), 
                            arg11)
                        arg11 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), arg12))
                        float temp0_531[0x4] = __mulps_xmmps_memps(temp0_523, data_143442710)
                        uint64_t rcx_39 = zx.q(temp0_493)
                        int64_t rdi_25 = rcx_39 & 1
                        
                        if (rdi_25 != 0)
                            _mm_blend_ps(arg_80, temp0_531, 1)
                            jump(0x14013c268)
                        
                        arg11 = __divps_xmmps_memps(arg11, data_1434426d0)
                        float temp0_7[0x4] = __mulps_xmmps_memps(temp0_527, data_143442710)
                        
                        if (rdi_25 == 0)
                            jump(0x14013c313)
                        
                        return sub_14013c2ab(rcx_39, zx.q(arg2 + 0x20), arg3, arg4, zx.q(arg5 + 4), 
                            rdi_25, arg7, arg8, arg9, arg10, arg11, temp0_7, __return_addr.o, 
                            arg13, temp0_531, arg_70, arg_80, zx.o(0), arg_20, zx.o(arg49), arg19, 
                            arg20, arg_40) __tailcall
                    case 3
                        float temp0_536[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(zmm9, arg17), arg11), 
                            _mm_shuffle_epi32(arg21, 0x50))
                        arg11 = temp0_492 & not.o(zmm12)
                        int64_t rax_108 = sx.q(arg11[0].d)
                        void* rsi_15 = arg4 + rax_108
                        zmm1 = *(arg4 + rax_108)
                        int64_t rax_110 = sx.q(_mm_extract_epi32(arg11, 1))
                        void* rbx_24 = arg4 + rax_110
                        int64_t rdx_44 = sx.q(_mm_extract_epi32(arg11, 2))
                        void* rdi_26 = arg4 + rdx_44
                        int64_t rcx_40 = sx.q(_mm_extract_epi32(arg11, 3))
                        float temp0_542[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(arg4 + rax_110), 0x10), 
                                *(arg4 + rdx_44), 0x20), 
                            *(arg4 + rcx_40), 0x30)
                        arg11 = temp0_492 & not.o(data_142fc95e0)
                        uint64_t rax_111 = zx.q(_mm_extract_epi32(arg11, 1))
                        uint64_t rax_112 = zx.q(_mm_extract_epi32(arg11, 2))
                        uint64_t rax_113 = zx.q(arg11[0].d)
                        uint64_t rdx_45 = zx.q(_mm_extract_epi32(arg11, 3))
                        arg11 = temp0_492 & not.o(data_143442650)
                        uint64_t r11_8 = zx.q(_mm_extract_epi32(arg11, 1))
                        uint64_t r15_4 = zx.q(_mm_extract_epi32(arg11, 2))
                        uint64_t rdx_46 = zx.q(arg11[0].d)
                        uint64_t r12_4 = zx.q(_mm_extract_epi32(arg11, 3))
                        zmm2 = temp0_492 & not.o(data_142fc95f0)
                        uint64_t rbp_28 = zx.q(_mm_extract_epi32(zmm2, 1))
                        uint64_t r10_10 = zx.q(_mm_extract_epi32(zmm2, 2))
                        arg18 = _mm_add_epi64(arg18, zmm5)
                        arg15 = *(rdx_46 + rsi_15)
                        int32_t* rdx_47 = zx.q(_mm_extract_epi32(zmm2, 3))
                        void* r11_9 = arg4 + rcx_40
                        arg15 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg15, *(r11_8 + rbx_24), 0x10), 
                                *(r15_4 + rdi_26), 0x20), 
                            *(r12_4 + r11_9), 0x30)
                        float temp0_558[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg18, arg12), 
                            _mm_shuffle_epi32(arg21, 0xfa))
                        arg18 = *(rax_113 + rsi_15)
                        arg14 = temp0_492 & not.o(data_143442660)
                        uint64_t rax_114 = zx.q(_mm_extract_epi32(arg14, 1))
                        uint64_t rcx_41 = zx.q(_mm_extract_epi32(arg14, 2))
                        uint64_t r15_5 = zx.q(_mm_extract_epi32(arg14, 3))
                        float temp0_564[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(arg14[0]) + rsi_15), 
                                    *(rax_114 + rbx_24), 0x10), 
                                *(rcx_41 + rdi_26), 0x20), 
                            *(r15_5 + r11_9), 0x30)
                        uint64_t rax_115 = zx.q(zmm2[0])
                        arg16 = temp0_492 & not.o(data_143442670)
                        int32_t* r15_6 = zx.q(_mm_extract_epi32(arg16, 1))
                        zmm9 = *(rax_115 + rsi_15)
                        int32_t* rax_116 = zx.q(_mm_extract_epi32(arg16, 2))
                        int64_t rbp_30 = temp0_536[0].q
                        int64_t rcx_42 = _mm_extract_epi64(temp0_536, 1)
                        int64_t rbp_31 = temp0_558[0].q
                        zmm2 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rbp_30)), *(arg4 + rcx_42), 1)
                        int64_t rcx_43 = _mm_extract_epi64(temp0_558, 1)
                        zmm2 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm2, *(arg4 + rbp_31), 2), *(arg4 + rcx_43), 
                            3)
                        float (* rcx_44)[0x4] = zx.q(arg16[0])
                        int32_t* rbp_32 = zx.q(_mm_extract_epi32(arg16, 3))
                        float temp0_575[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                arg15), 
                            temp0_542)
                        zmm5 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm1 = data_143442440
                        arg12 = zmm1
                        float temp0_578[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, zmm1))
                        zmm1 = data_143442690
                        arg15 = zmm1
                        float temp0_580[0x4] = _mm_mul_ps(_mm_div_ps(temp0_578, zmm1), temp0_564)
                        zmm1 = *(rcx_44 + rsi_15)
                        float temp0_583[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg18, *(rax_111 + rbx_24), 0x10), 
                                *(rax_112 + rdi_26), 0x20), 
                            *(rdx_45 + r11_9), 0x30)
                        float temp0_586[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm9, *(rbp_28 + rbx_24), 0x10), 
                                *(r10_10 + rdi_26), 0x20), 
                            *(rdx_47 + r11_9), 0x30)
                        float temp0_589[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(r15_6 + rbx_24), 0x10), 
                                *(rax_116 + rdi_26), 0x20), 
                            *(rbp_32 + r11_9), 0x30)
                        float temp0_593[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), arg12)), 
                            arg15)
                        uint64_t rcx_49 = zx.q(temp0_493)
                        int64_t rdi_28 = rcx_49 & 1
                        
                        if (rdi_28 != 0)
                            _mm_blend_ps(arg_80, temp0_575, 1)
                            jump(0x14013c384)
                        
                        float temp0_8[0x4] = _mm_mul_ps(temp0_589, temp0_593)
                        float temp0_9[0x4] = _mm_add_ps(temp0_583, temp0_580)
                        
                        if (rdi_28 == 0)
                            jump(0x14013c3e0)
                        
                        return sub_14013c3cc(rcx_49, zx.q(arg2 + 0x20), arg3, arg4, zx.q(arg5 + 4), 
                            rdi_28, arg22, arg28, arg9, zx.q(arg50), arg_10, temp0_8, temp0_575, 
                            arg13, arg_80, zx.o(0), temp0_586, arg_20, temp0_9, zx.o(arg49), arg19, 
                            arg20, arg_40) __tailcall
            
            arg1 = zx.q(temp0_493)
            arg6 = arg1 & 1
            arg11 = arg_10
            arg21 = arg_40
            arg16 = zx.o(0)
            
            if (arg6 == 0)
                arg15 = arg_80
                arg14 = arg_70
                arg12 = __return_addr.o
                
                if (arg6 != 0)
                    arg14 = _mm_blend_epi16(arg14, zx.o(0), 3)
            else
                arg15 = _mm_blend_epi16(arg_80, zx.o(0), 3)
                arg14 = arg_70
                arg12 = __return_addr.o
                
                if (arg6 != 0)
                    arg14 = _mm_blend_epi16(arg14, zx.o(0), 3)
            
            arg18 = zx.o(arg49)
            arg2 += 0x20
            arg5 += 4
            arg17 = arg_20
            
            if (arg6 == 0)
                break
            
            jump(0x14013c1bf)
        
        arg2 += 0x20
        arg16 = zx.o(0)
        arg5 += 4
        arg21 = arg_40
        arg17 = arg_20
        arg12 = __return_addr.o
        arg18 = zx.o(arg49)
