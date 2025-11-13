// 函数: sub_14013c3cc
// 地址: 0x14013c3cc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    float zmm6[0x4] = _mm_blend_ps(arg25, arg19, 1)
    float temp0_2[0x4] = _mm_add_ps(arg17, arg12)
    bool cond:0
    
    if (cond:0)
        arg11 = _mm_blend_ps(arg11, temp0_2, 1)
    
    int64_t r14_2 = arg1 & 2
    
    if (r14_2 != 0)
        arg15 = _mm_blend_ps(arg15, arg13, 2)
        
        if (r14_2 != 0)
            goto label_14013b41f
    else if (r14_2 != 0)
    label_14013b41f:
        zmm6 = _mm_blend_ps(zmm6, arg19, 2)
        
        if (r14_2 != 0)
            goto label_14013c411
        
        goto label_14013b42f
    
    int64_t rsi_2
    bool cond:5_1
    bool cond:6_1
    bool cond:7_1
    bool cond:8_1
    
    if (r14_2 != 0)
    label_14013c411:
        arg11 = _mm_blend_ps(arg11, temp0_2, 2)
        rsi_2 = arg1 & 4
        cond:5_1 = rsi_2 == 0
        cond:6_1 = rsi_2 != 0
        cond:7_1 = rsi_2 == 0
        cond:8_1 = rsi_2 != 0
        
        if (rsi_2 != 0)
            goto label_14013b439
        
        goto label_14013c425
    
label_14013b42f:
    rsi_2 = arg1 & 4
    cond:5_1 = rsi_2 == 0
    cond:6_1 = rsi_2 != 0
    cond:7_1 = rsi_2 == 0
    cond:8_1 = rsi_2 != 0
    
    if (rsi_2 == 0)
    label_14013c425:
        
        if (not(cond:5_1))
        label_14013c42b:
            zmm6 = _mm_blend_ps(zmm6, arg19, 4)
            
            if (cond:8_1)
                goto label_14013b44b
            
            goto label_14013c438
    else
    label_14013b439:
        arg15 = _mm_blend_ps(arg15, arg13, 4)
        
        if (cond:6_1)
            goto label_14013c42b
    
    int64_t rcx
    bool cond:9_1
    bool cond:11_1
    bool cond:12_1
    bool cond:10_1
    
    if (cond:7_1)
    label_14013c438:
        rcx = arg1 & 8
        cond:9_1 = rcx == 0
        cond:10_1 = rcx != 0
        cond:11_1 = rcx == 0
        cond:12_1 = rcx != 0
        
        if (rcx != 0)
        label_14013c442:
            arg15 = _mm_blend_ps(arg15, arg13, 8)
            
            if (cond:10_1)
                goto label_14013b462
            
            goto label_14013c44e
    else
    label_14013b44b:
        arg11 = _mm_blend_ps(arg11, temp0_2, 4)
        rcx = arg1 & 8
        cond:9_1 = rcx == 0
        cond:10_1 = rcx != 0
        cond:11_1 = rcx == 0
        cond:12_1 = rcx != 0
        
        if (rcx != 0)
            goto label_14013c442
    
    if (cond:9_1)
    label_14013c44e:
        arg19 = arg20
        
        if (not(cond:11_1))
            arg11 = _mm_blend_ps(arg11, temp0_2, 8)
    else
    label_14013b462:
        zmm6 = _mm_blend_ps(zmm6, arg19, 8)
        arg19 = arg20
        
        if (cond:12_1)
            arg11 = _mm_blend_ps(arg11, temp0_2, 8)
    
    float zmm3[0x4] = __return_addr.o
    float arg_80[0x4] = arg15
    float temp0_9[0x4] = _mm_sub_ps(arg15, arg21)
    arg25 = zmm6
    float temp0_10[0x4] = _mm_sub_ps(zmm6, arg22)
    float temp0_11[0x4] = _mm_mul_ps(temp0_9, arg23)
    arg12 = arg21
    
    if (arg6 != 0)
        arg12 = arg21
        arg12[0] = arg12[0] + temp0_11[0]
    
    double arg_10[0x2] = arg11
    float temp0_12[0x4] = _mm_sub_ps(arg11, arg14)
    float temp0_13[0x4] = _mm_mul_ps(temp0_10, arg23)
    arg13 = arg22
    
    if (arg6 != 0)
        arg13 = arg22
        arg13[0] = arg13[0] + temp0_13[0]
        arg15 = _mm_mul_ps(temp0_12, arg23)
        arg11 = arg14
        
        if (arg6 != 0)
            goto label_14013c529
        
        goto label_14013c4c3
    
    arg15 = _mm_mul_ps(temp0_12, arg23)
    arg11 = arg14
    bool cond:16_1
    bool cond:17_1
    bool cond:18_1
    bool cond:19_1
    
    if (arg6 != 0)
    label_14013c529:
        arg11 = arg14
        arg11[0].d = arg11[0].d f+ arg15[0]
        arg21 = _mm_add_ps(arg21, temp0_11)
        cond:16_1 = r14_2 == 0
        cond:17_1 = r14_2 != 0
        cond:18_1 = r14_2 == 0
        cond:19_1 = r14_2 != 0
        
        if (r14_2 != 0)
            goto label_14013c4cc
        
        goto label_14013c539
    
label_14013c4c3:
    arg21 = _mm_add_ps(arg21, temp0_11)
    cond:16_1 = r14_2 == 0
    cond:17_1 = r14_2 != 0
    cond:18_1 = r14_2 == 0
    cond:19_1 = r14_2 != 0
    
    if (r14_2 != 0)
    label_14013c4cc:
        arg12 = _mm_blend_ps(arg12, arg21, 2)
        arg22 = _mm_add_ps(arg22, temp0_13)
        
        if (cond:17_1)
            goto label_14013c53f
        
        goto label_14013c4d9
    
label_14013c539:
    arg22 = _mm_add_ps(arg22, temp0_13)
    
    if (not(cond:16_1))
    label_14013c53f:
        arg13 = _mm_blend_ps(arg13, arg22, 2)
        arg14 = _mm_add_ps(arg14, arg15)
        
        if (cond:19_1)
            goto label_14013c4de
        
        goto label_14013c54b
    
label_14013c4d9:
    arg14 = _mm_add_ps(arg14, arg15)
    bool cond:20_1
    bool cond:21_1
    bool cond:22_1
    bool cond:23_1
    
    if (not(cond:18_1))
    label_14013c4de:
        arg11 = _mm_blend_ps(arg11, arg14, 2)
        arg15 = arg30
        cond:20_1 = rsi_2 == 0
        cond:21_1 = rsi_2 != 0
        cond:22_1 = rsi_2 == 0
        cond:23_1 = rsi_2 != 0
        
        if (rsi_2 != 0)
            goto label_14013c558
        
        goto label_14013c4f1
    
label_14013c54b:
    arg15 = arg30
    cond:20_1 = rsi_2 == 0
    cond:21_1 = rsi_2 != 0
    cond:22_1 = rsi_2 == 0
    cond:23_1 = rsi_2 != 0
    
    if (rsi_2 == 0)
    label_14013c4f1:
        
        if (not(cond:20_1))
        label_14013c4f3:
            arg13 = _mm_blend_ps(arg13, arg22, 4)
            
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
        arg22 = arg13
        
        if (cond:26_1)
            arg11 = _mm_blend_ps(arg11, arg14, 8)
    else
    label_14013c574:
        arg22 = _mm_blend_ps(arg22, arg13, 7)
        
        if (not(cond:27_1))
            arg11 = _mm_blend_ps(arg11, arg14, 8)
    
    arg14 = arg11
    
    while (true)
        float temp0_31[0x4] = _mm_unpacklo_ps(arg14, arg16[0].q)
        arg11 = _mm_unpackhi_ps(arg14, arg16)
        float temp0_33[0x4] = _mm_unpacklo_ps(arg21, arg22[0].q)
        float temp0_34[0x4] = _mm_unpackhi_ps(arg21, arg22)
        float temp0_35[0x4] = _mm_insert_ps(temp0_33, arg14, 0x28)
        float arg_170[0x4] = temp0_35
        int64_t rax_4 = sx.q(zmm3[0]) * 0x30
        *(arg9 + rax_4 + 0x10) = __extractps_memd_xmmps_immb(arg21, 0)
        float zmm5[0x4] = _mm_unpackhi_pd(temp0_33, temp0_31[0].q)
        *(arg9 + rax_4 + 0x14) = __extractps_memd_xmmps_immb(arg22, 0)
        *(arg9 + rax_4 + 0x18) = __extractps_memd_xmmps_immb(arg14, 0)
        *(arg9 + rax_4 + 0x1c) = 0
        int64_t rax_8 = sx.q(_mm_extract_epi32(zmm3, 2)) * 0x30
        *(arg9 + rax_8 + 0x10) = __extractps_memd_xmmps_immb(arg21, 1)
        float arg_180[0x4] = zmm5
        *(arg9 + rax_8 + 0x14) = __extractps_memd_xmmps_immb(arg22, 1)
        float temp0_43[0x4] = _mm_insert_ps(temp0_34, arg14, 0xa8)
        *(arg9 + rax_8 + 0x18) = __extractps_memd_xmmps_immb(arg14, 1)
        *(arg9 + rax_8 + 0x1c) = 0
        int64_t rax_12 = sx.q(arg18[0]) * 0x30
        *(arg9 + rax_12 + 0x10) = __extractps_memd_xmmps_immb(arg21, 2)
        float arg_190[0x4] = temp0_43
        *(arg9 + rax_12 + 0x14) = __extractps_memd_xmmps_immb(arg22, 2)
        arg12 = _mm_unpackhi_pd(temp0_34, arg11[0])
        *(arg9 + rax_12 + 0x18) = __extractps_memd_xmmps_immb(arg14, 2)
        *(arg9 + rax_12 + 0x1c) = 0
        *(arg9 + sx.q(_mm_extract_epi32(arg18, 2)) * 0x30 + 0x10) = arg12
        zmm6 = _mm_cmpeq_epi32(temp0_35, temp0_35)
        float arg_20[0x4]
        float arg_40[0x4]
        
        if (arg5 + 4 s>= arg28)
            uint64_t result = zx.q(arg54)
            
            if (arg5 + 4 s< result.d)
                zmm3 = arg19
                arg11 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5 + 4), 0), data_142e11d00)
                arg17 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), arg11)
                arg11 = _mm_slli_epi32(arg11, 3) & arg17
                int64_t rax_18 = sx.q(arg11[0].d)
                int64_t rdx_2 = sx.q(_mm_extract_epi32(arg11, 1))
                int64_t rbp_2 = sx.q(_mm_extract_epi32(arg11, 2))
                int64_t rdi_1 = sx.q(_mm_extract_epi32(arg11, 3))
                arg14 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg8 + rax_18)), *(arg8 + rdx_2), 1), 
                        *(arg8 + rbp_2), 2), 
                    *(arg8 + rdi_1), 3)
                arg11 = data_142fc95e0 & arg17
                int32_t* r12 = zx.q(_mm_extract_epi32(arg11, 1))
                int32_t* r15 = zx.q(_mm_extract_epi32(arg11, 2))
                int32_t* r14_3 = zx.q(_mm_extract_epi32(arg11, 3))
                uint64_t r11 = zx.q(arg11[0].d)
                uint32_t temp0_68[0x4] = _mm_slli_epi32(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(r11 + arg8 + rax_18)), 
                                *(r12 + arg8 + rdx_2), 1), 
                            *(r15 + arg8 + rbp_2), 2), 
                        *(r14_3 + arg8 + rdi_1), 3), 
                    4)
                arg11 = temp0_68 & arg17
                int64_t rax_20 = sx.q(arg11[0].d)
                int64_t rdx_4 = sx.q(_mm_extract_epi32(arg11, 1))
                int64_t rsi_5 = sx.q(_mm_extract_epi32(arg11, 2))
                int64_t rdi_3 = sx.q(_mm_extract_epi32(arg11, 3))
                arg19 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_20)), *(arg3 + rdx_4), 1), 
                        *(arg3 + rsi_5), 2), 
                    *(arg3 + rdi_3), 3)
                arg12 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(zx.o(*(r11 + arg3 + rax_20)), 
                            *(r12 + arg3 + rdx_4), 1), 
                        *(r15 + arg3 + rsi_5), 2), 
                    *(r14_3 + arg3 + rdi_3), 3)
                arg15 = zx.o(0)
                arg20 = _mm_shuffle_epi32(arg19, 0x4e)
                arg11 = _mm_cmpgt_epi32(data_1434422d0, arg12) & arg17
                char temp0_80 = _mm_movemask_ps(arg11)
                arg13 = zx.o(0)
                char temp0_81
                
                if (temp0_80 != 0)
                    temp0_81 = _mm_movemask_ps(arg17)
                    arg23 = zx.o(0)
                    arg13 = arg11
                    arg16 = zx.o(0)
                    arg21 = zx.o(0)
                
                if (temp0_80 == 0 || temp0_81 != temp0_80)
                    zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                    arg13 ^= zmm5
                    arg23 = zx.o(0)
                    arg16 = zx.o(0)
                    
                    if (not(0f >= zmm3[0]))
                        zmm5 = _mm_add_epi32(zmm5, arg12)
                        
                        if (zmm3[0] >= 1f)
                            arg15 = zx.o(0)
                            arg23 = _mm_blendv_ps(zx.o(0), zmm5, _mm_and_ps(arg13, arg17))
                            arg16 = arg23
                        else
                            float temp0_84[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                            float temp0_86[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm5), temp0_84)
                            arg11 = _mm_and_ps(arg13, arg17)
                            float temp0_88[0x4] = _mm_round_ps(temp0_86, 9)
                            arg23 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(_mm_cvttps_epi32(temp0_88), zmm5), arg11)
                            arg15 = zx.o(0)
                            
                            if (arg53 != 1)
                                arg15 = _mm_sub_ps(temp0_86, temp0_88)
                            
                            arg16 = _mm_blendv_ps(zx.o(0), 
                                _mm_min_epi32(
                                    _mm_sub_epi32(arg23, _mm_cmpeq_epi32(temp0_88, temp0_88)), 
                                    zmm5), 
                                arg11)
                    
                    arg21 = _mm_blendv_ps(zx.o(0), arg15, arg13)
                
                zmm3 = _mm_cvtepi32_epi64(arg19[0].q)
                zmm6 = _mm_cvtepi32_epi64(arg20[0].q)
                int32_t rcx_3 = arg24.d
                int32_t rax_23
                rax_23.b = rcx_3 == 3
                arg11 = _mm_shuffle_epi32(zx.o(neg.d(rax_23)), 0)
                arg11 &= __pcmpgtd_xmmdq_memdq(arg12, data_142d3f5b0)
                float temp0_104[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg11)
                arg15 = _mm_cvtepi32_epi64(temp0_104[0].q)
                zmm5 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_104, 0x4e)[0])
                arg22 = _mm_shuffle_epi32(zx.o(arg27), 0)
                uint64_t rsi_6 = zx.q(rcx_3)
                arg_40 = zmm5
                __return_addr.o = arg15
                arg26 = zmm6
                int32_t arg_60
                arg_60.o = zmm3
                int32_t rax_43
                
                if (rcx_3 u> 6)
                label_14013cf68:
                    char temp0_225 = _mm_movemask_ps(arg17)
                    arg15 = zx.o(0)
                    rax_43 = arg24.d
                    
                    if ((temp0_225 & 4) != 0)
                        arg15 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                    
                    if ((temp0_225 & 8) != 0)
                        arg15 = _mm_blend_epi16(arg15, zx.o(0), 0xc0)
                    
                label_14013cfc2:
                    arg20 = arg15
                    zmm6 = arg15
                    goto label_14013d047
                
                arg13 = _mm_mullo_epi32(arg23, arg22)
                arg11 = _mm_cvtepi32_epi64(arg13[0].q)
                arg20 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg13, 0x4e)[0].q)
                int32_t arg_30
                
                switch (rsi_6)
                    case 0, 1
                        arg_30.o = arg22
                        arg13 = _mm_add_epi64(arg15, zmm3)
                        zmm3 = _mm_add_epi64(_mm_add_epi64(zmm5, zmm6), arg20)
                        arg13 = _mm_add_epi64(arg13, arg11)
                        arg12 = _mm_shuffle_epi32(arg17, 0x50)
                        float temp0_118[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg12)
                        arg13 = _mm_shuffle_epi32(arg17, 0xfa)
                        float temp0_120[0x4] = _mm_blendv_ps(zx.o(0), zmm3, arg13)
                        int64_t rax_25 = _mm_extract_epi64(temp0_118, 1)
                        void* rdx_8 = arg4 + rax_25
                        arg30 = *(arg4 + rax_25)
                        int64_t rax_26 = temp0_120[0].q
                        void* rcx_4 = arg4 + rax_26
                        int64_t rbx_3 = _mm_extract_epi64(temp0_120, 1)
                        zmm3 = data_1434426c0
                        float temp0_121[0x4] = _mm_blendv_ps(zx.o(0), zmm3, arg12)
                        arg29 = *(arg4 + rax_26)
                        float temp0_122[0x4] = _mm_blendv_ps(zx.o(0), zmm3, arg13)
                        arg_20 = *(arg4 + rbx_3)
                        void* rbp_5 = temp0_118[0].q + arg4
                        arg20 = *(temp0_121[0].q + rbp_5)
                        arg18 = *(_mm_extract_epi64(temp0_121, 1) + rdx_8)
                        arg_10 = *(temp0_122[0].q + rcx_4)
                        void* rbx_4 = arg4 + rbx_3
                        arg22 = *(_mm_extract_epi64(temp0_122, 1) + rbx_4)
                        zmm3 = data_1434426e0
                        float temp0_123[0x4] = _mm_blendv_ps(zx.o(0), zmm3, arg12)
                        zmm6 = _mm_blendv_ps(zx.o(0), zmm3, arg13)
                        arg15 = *(temp0_123[0].q + rbp_5)
                        arg13 = *(_mm_extract_epi64(temp0_123, 1) + rdx_8)
                        float (* rax_33)[0x4] = zmm6[0].q
                        double (* rdx_9)[0x2] = _mm_extract_epi64(zmm6, 1)
                        arg12 = *(rax_33 + rcx_4)
                        arg11 = *(rdx_9 + rbx_4)
                        char temp0_125 = _mm_movemask_ps(arg17)
                        int64_t rax_34
                        bool cond:43
                        bool cond:44
                        bool cond:47
                        bool cond:48
                        
                        if ((temp0_125 & 1) == 0)
                            char temp9_1 = temp0_125 & 2
                            cond:43 = temp9_1 != 0
                            cond:44 = temp9_1 == 0
                            cond:47 = temp9_1 != 0
                            cond:48 = temp9_1 == 0
                            rax_34 = arg24
                            zmm3 = arg22
                            
                            if (temp9_1 == 0)
                                goto label_14013cfe4
                            
                            goto label_14013caf8
                        
                        zmm6 = *rbp_5
                        char temp8_1 = temp0_125 & 2
                        cond:43 = temp8_1 != 0
                        cond:44 = temp8_1 == 0
                        cond:47 = temp8_1 != 0
                        cond:48 = temp8_1 == 0
                        rax_34 = arg24
                        zmm3 = arg22
                        
                        if (temp8_1 == 0)
                        label_14013cfe4:
                            arg22 = arg_30.o
                            
                            if (cond:44)
                                goto label_14013cb10
                            
                            goto label_14013cff1
                        
                    label_14013caf8:
                        zmm6 = __insertps_xmmps_memd_immb(zmm6, arg30[0], 0x10)
                        arg22 = arg_30.o
                        
                        if (cond:43)
                        label_14013cff1:
                            arg20 = _mm_insert_ps(arg20, arg18, 0x10)
                            
                            if (cond:47)
                            label_14013cb16:
                                float temp0_127[0x4] = _mm_insert_ps(arg15, arg13, 0x10)
                                
                                if ((temp0_125 & 4) != 0)
                                    return sub_14013d007(temp0_125, arg12, arg3, arg4, rax_34, 
                                        rsi_6, arg9, arg11, zmm3, zmm6, temp0_127, arg16, arg17, 
                                        arg19, arg20, arg22, arg23) __tailcall
                                
                                jump(0x14013cb25)
                        else
                        label_14013cb10:
                            
                            if (not(cond:48))
                                goto label_14013cb16
                        
                        if ((temp0_125 & 4) == 0)
                            jump(0x14013cb25)
                        
                        return sub_14013d007(temp0_125, arg12, arg3, arg4, rax_34, rsi_6, arg9, 
                            arg11, zmm3, zmm6, arg15, arg16, arg17, arg19, arg20, arg22, arg23)
                            __tailcall
                    case 2
                        arg12 = _mm_add_epi64(arg15, zmm3)
                        zmm3 = _mm_add_epi64(_mm_add_epi64(zmm5, zmm6), arg20)
                        arg12 = _mm_add_epi64(arg12, arg11)
                        arg13 = _mm_shuffle_epi32(arg17, 0x50)
                        float temp0_133[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg13)
                        arg18 = _mm_shuffle_epi32(arg17, 0xfa)
                        float temp0_135[0x4] = _mm_blendv_ps(zx.o(0), zmm3, arg18)
                        arg12 = data_1434426b0
                        float temp0_136[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg13)
                        float temp0_137[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg18)
                        int64_t rcx_7 = temp0_133[0].q
                        void* rbx_5 = arg4 + rcx_7
                        int64_t rdx_11 = _mm_extract_epi64(temp0_133, 1)
                        void* rbp_6 = arg4 + rdx_11
                        void* rax_36 = temp0_136[0].q
                        int16_t* rdi_4 = _mm_extract_epi64(temp0_136, 1)
                        zmm5 = data_1434426c0
                        float temp0_138[0x4] = _mm_blendv_ps(zx.o(0), zmm5, arg13)
                        arg13 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_36 + rbx_5)), *(rdi_4 + rbp_6), 1)
                        void* rax_38 = temp0_138[0].q
                        int16_t* rdi_5 = _mm_extract_epi64(temp0_138, 1)
                        int64_t rbx_6 = temp0_135[0].q
                        zmm3 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_38 + rbx_5)), *(rdi_5 + rbp_6), 1)
                        void* rax_40 = arg4 + rbx_6
                        int64_t rbp_7 = _mm_extract_epi64(temp0_135, 1)
                        int16_t* rdi_6 = temp0_137[0].q
                        float temp0_141[0x4] = _mm_blendv_ps(zx.o(0), zmm5, arg18)
                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, *(rdi_6 + rax_40), 2)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(temp0_141[0].q + rax_40), 2)
                        void* rax_41 = arg4 + rbp_7
                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, 
                            *(_mm_extract_epi64(temp0_137, 1) + rax_41), 3)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, 
                            *(_mm_extract_epi64(temp0_141, 1) + rax_41), 3)
                        arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_7)), *(arg4 + rdx_11), 
                                    1), 
                                *(arg4 + rbx_6), 2), 
                            *(arg4 + rbp_7), 3)[0])
                        arg12 = data_1434424d0
                        float temp0_151[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg12))
                        arg11 = data_1434426d0
                        float temp0_152[0x4] = _mm_div_ps(temp0_151, arg11)
                        float temp0_156[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg13[0].q), arg12)), 
                            arg11)
                        float temp0_160[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm3[0].q), arg12)), 
                            arg11)
                        arg11 = data_143442710
                        zmm6 = _mm_mul_ps(temp0_152, arg11)
                        arg20 = _mm_mul_ps(temp0_156, arg11)
                        arg15 = _mm_mul_ps(temp0_160, arg11)
                        rax_43 = arg24.d
                    label_14013d047:
                        arg23 = _mm_cmpeq_epi32(arg23, arg16) & not.o(arg17)
                        char temp0_233 = _mm_movemask_ps(arg23)
                        
                        if (temp0_233 != 0)
                            if (rax_43 u<= 6)
                                arg16 = _mm_mullo_epi32(arg16, arg22)
                                arg11 = _mm_cvtepi32_epi64(arg16[0].q)
                                arg22 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg16, 0x4e)[0].q)
                                
                                switch (jump_table_14013d99c[rsi_6])
                                    case 0x841f0f
                                        undefined
                                    case 0xfffff6ed
                                        arg13 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        arg12 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg26), arg22)
                                        arg13 = _mm_add_epi64(arg13, arg11)
                                        arg22 = _mm_shuffle_epi32(arg23, 0x50)
                                        float temp0_243[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg22)
                                        arg13 = _mm_shuffle_epi32(arg23, 0xfa)
                                        float temp0_245[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg13)
                                        int64_t rax_53 = _mm_extract_epi64(temp0_243, 1)
                                        void* rbp_9 = arg4 + rax_53
                                        arg16 = *(arg4 + rax_53)
                                        int64_t rax_54 = temp0_245[0].q
                                        void* rdx_19 = arg4 + rax_54
                                        __return_addr.o = *(arg4 + rax_54)
                                        int64_t rax_55 = _mm_extract_epi64(temp0_245, 1)
                                        arg18 = data_1434426c0
                                        float temp0_246[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg22)
                                        void* rdi_13 = arg4 + rax_55
                                        float temp0_247[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg13)
                                        arg26 = *(arg4 + rax_55)
                                        void* rbx_11 = temp0_243[0].q + arg4
                                        zmm3 = *(temp0_246[0].q + rbx_11)
                                        arg19 = *(_mm_extract_epi64(temp0_246, 1) + rbp_9)
                                        arg23 = *(temp0_247[0].q + rdx_19)
                                        arg_40 = *(_mm_extract_epi64(temp0_247, 1) + rdi_13)
                                        arg18 = data_1434426e0
                                        float temp0_248[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg22)
                                        float temp0_249[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg13)
                                        arg11 = *(temp0_248[0].q + rbx_11)
                                        arg18 = *(_mm_extract_epi64(temp0_248, 1) + rbp_9)
                                        float (* rax_62)[0x4] = temp0_249[0].q
                                        float (* rbp_10)[0x4] = _mm_extract_epi64(temp0_249, 1)
                                        
                                        if ((temp0_233 & 1) != 0)
                                            jump(0x14013d699)
                                        
                                        return sub_14013d1cb(temp0_233, temp0_233, 
                                            *(rax_62 + rdx_19), zmm3, arg9, arg11, temp0_249, zmm6, 
                                            arg15, arg16, arg17, arg18, arg19, arg20, arg21, 
                                            *(rbp_10 + rdi_13), arg23) __tailcall
                                    case 0xfffff8c8
                                        zmm3 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        arg13 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg26), arg22)
                                        zmm3 = _mm_add_epi64(zmm3, arg11)
                                        arg19 = _mm_shuffle_epi32(arg23, 0x50)
                                        float temp0_256[0x4] = _mm_blendv_ps(zx.o(0), zmm3, arg19)
                                        arg16 = _mm_shuffle_epi32(arg23, 0xfa)
                                        float temp0_258[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg16)
                                        int64_t rdx_23 = temp0_256[0].q
                                        int64_t rbp_11 = _mm_extract_epi64(temp0_256, 1)
                                        arg18 = data_1434426b0
                                        float temp0_259[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg19)
                                        void* rbx_12 = arg4 + rdx_23
                                        float temp0_260[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg16)
                                        void* rdi_14 = arg4 + rbp_11
                                        arg13 = zx.o(*(temp0_259[0].q + rbx_12))
                                        int64_t rax_66 = _mm_extract_epi64(temp0_259, 1)
                                        arg18 = data_1434426c0
                                        float temp0_261[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg19)
                                        arg13 =
                                            __pinsrw_xmmdq_memw_immb(arg13, *(rax_66 + rdi_14), 1)
                                        zmm5 = __pinsrw_xmmdq_memw_immb(
                                            zx.o(*(temp0_261[0].q + rbx_12)), 
                                            *(_mm_extract_epi64(temp0_261, 1) + rdi_14), 1)
                                        int64_t rax_69 = temp0_258[0].q
                                        void* rbx_14 = arg4 + rax_69
                                        float temp0_264[0x4] = _mm_blendv_ps(zx.o(0), arg18, arg16)
                                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, 
                                            *(temp0_260[0].q + rbx_14), 2)
                                        zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, 
                                            *(temp0_264[0].q + rbx_14), 2)
                                        arg11 = __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_23)), 
                                                *(arg4 + rbp_11), 1), 
                                            *(arg4 + rax_69), 2)
                                        int64_t rax_70 = _mm_extract_epi64(temp0_258, 1)
                                        arg11 = __pinsrw_xmmdq_memw_immb(arg11, *(arg4 + rax_70), 3)
                                        void* rax_71 = arg4 + rax_70
                                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, 
                                            *(_mm_extract_epi64(temp0_260, 1) + rax_71), 3)
                                        zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, 
                                            *(_mm_extract_epi64(temp0_264, 1) + rax_71), 3)
                                        arg11 = _mm_cvtepu16_epi32(arg11[0])
                                        arg16 = data_1434424d0
                                        float temp0_274[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg16))
                                        arg18 = data_1434426d0
                                        float temp0_275[0x4] = _mm_div_ps(temp0_274, arg18)
                                        float temp0_279[0x4] = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(arg13[0].q), arg16)), 
                                            arg18)
                                        arg11 = _mm_div_ps(
                                            _mm_cvtepi32_ps(_mm_add_epi32(
                                                _mm_cvtepu16_epi32(zmm5[0].q), arg16)), 
                                            arg18)
                                        arg13 = data_143442710
                                        _mm_mul_ps(temp0_275, arg13)
                                        _mm_mul_ps(temp0_279, arg13)
                                        _mm_mul_ps(arg11, arg13)
                                        jump(sub_14013d1cb+0x530)
                                    case 0xfffffa67
                                        zmm5 = _mm_srai_epi32(_mm_slli_epi32(arg23, 0x1f), 0x1f)
                                        arg19 &= zmm5
                                        int64_t rax_73 = sx.q(arg19[0])
                                        void* rdi_17 = arg4 + rax_73
                                        arg12 = *(arg4 + rax_73)
                                        int64_t rax_75 = sx.q(_mm_extract_epi32(arg19, 1))
                                        void* r8_3 = arg4 + rax_75
                                        int64_t rsi_7 = sx.q(_mm_extract_epi32(arg19, 2))
                                        void* rbp_13 = arg4 + rsi_7
                                        int64_t rdx_27 = sx.q(_mm_extract_epi32(arg19, 3))
                                        void* rbx_16 = arg4 + rdx_27
                                        float temp0_294[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg12, *(arg4 + rax_75), 
                                                    0x10), 
                                                *(arg4 + rsi_7), 0x20), 
                                            *(arg4 + rdx_27), 0x30)
                                        arg13 = data_142fc95e0 & zmm5
                                        arg19 = *(zx.q(arg13[0]) + rdi_17)
                                        uint64_t rax_77 = zx.q(_mm_extract_epi32(arg13, 1))
                                        uint64_t rdx_28 = zx.q(_mm_extract_epi32(arg13, 2))
                                        uint64_t rsi_8 = zx.q(_mm_extract_epi32(arg13, 3))
                                        float temp0_300[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg19, *(rax_77 + r8_3), 
                                                    0x10), 
                                                *(rdx_28 + rbp_13), 0x20), 
                                            *(rsi_8 + rbx_16), 0x30)
                                        zmm3 = data_142fc95f0 & zmm5
                                        arg16 = *(zx.q(zmm3[0]) + rdi_17)
                                        uint64_t rax_79 = zx.q(_mm_extract_epi32(zmm3, 1))
                                        uint64_t rdx_29 = zx.q(_mm_extract_epi32(zmm3, 2))
                                        uint64_t rsi_9 = zx.q(_mm_extract_epi32(zmm3, 3))
                                        float temp0_306[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg16, *(rax_79 + r8_3), 
                                                    0x10), 
                                                *(rdx_29 + rbp_13), 0x20), 
                                            *(rsi_9 + rbx_16), 0x30)
                                        arg13 = data_143442650 & zmm5
                                        zmm3 = *(zx.q(arg13[0]) + rdi_17)
                                        uint64_t rax_81 = zx.q(_mm_extract_epi32(arg13, 1))
                                        uint64_t rdx_30 = zx.q(_mm_extract_epi32(arg13, 2))
                                        int32_t* rsi_10 = zx.q(_mm_extract_epi32(arg13, 3))
                                        float temp0_312[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(zmm3, *(rax_81 + r8_3), 
                                                    0x10), 
                                                *(rdx_30 + rbp_13), 0x20), 
                                            *(rsi_10 + rbx_16), 0x30)
                                        arg13 = data_143442660 & zmm5
                                        arg18 = *(zx.q(arg13[0]) + rdi_17)
                                        uint64_t rax_83 = zx.q(_mm_extract_epi32(arg13, 1))
                                        uint64_t rdx_31 = zx.q(_mm_extract_epi32(arg13, 2))
                                        int32_t* rsi_11 = zx.q(_mm_extract_epi32(arg13, 3))
                                        float temp0_318[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg18, *(rax_83 + r8_3), 
                                                    0x10), 
                                                *(rdx_31 + rbp_13), 0x20), 
                                            *(rsi_11 + rbx_16), 0x30)
                                        zmm5 &= data_143442670
                                        arg_30.o = arg21
                                        arg21 = *(zx.q(zmm5[0]) + rdi_17)
                                        uint64_t rax_85 = zx.q(_mm_extract_epi32(zmm5, 1))
                                        uint64_t rdx_32 = zx.q(_mm_extract_epi32(zmm5, 2))
                                        uint64_t rdi_18 = zx.q(_mm_extract_epi32(zmm5, 3))
                                        float temp0_324[0x4] = __insertps_xmmps_memd_immb(
                                            __insertps_xmmps_memd_immb(
                                                __insertps_xmmps_memd_immb(arg21, *(rax_85 + r8_3), 
                                                    0x10), 
                                                *(rdx_32 + rbp_13), 0x20), 
                                            *(rdi_18 + rbx_16), 0x30)
                                        arg13 = __paddq_xmmdq_memdq(__return_addr.o, arg_60.o)
                                        zmm5 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(arg_40, arg26), arg22)
                                        float temp0_330[0x4] = _mm_blendv_ps(zx.o(0), 
                                            _mm_add_epi64(arg13, arg11), 
                                            _mm_shuffle_epi32(arg23, 0x50))
                                        float temp0_332[0x4] = _mm_blendv_ps(zx.o(0), zmm5, 
                                            _mm_shuffle_epi32(arg23, 0xfa))
                                        int64_t rax_86 = temp0_330[0].q
                                        int64_t rdx_33 = _mm_extract_epi64(temp0_330, 1)
                                        int64_t rbp_14 = temp0_332[0].q
                                        int64_t rbx_17 = _mm_extract_epi64(temp0_332, 1)
                                        arg11 = __pinsrd_xmmdq_memd_immb(
                                            __pinsrd_xmmdq_memd_immb(
                                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_86)), 
                                                    *(arg4 + rdx_33), 1), 
                                                *(arg4 + rbp_14), 2), 
                                            *(arg4 + rbx_17), 3)
                                        arg13 = arg11
                                        zmm5 = _mm_srli_epi32(arg11, 0xa) & data_143442480
                                        arg11 &= data_143442680
                                        arg13 = _mm_srli_epi32(arg13, 0x15)
                                        __addps_xmmps_memps(
                                            _mm_mul_ps(
                                                __divps_xmmps_memps(
                                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg11, 
                                                        data_143442490)), 
                                                    data_1434426a0), 
                                                temp0_312), 
                                            temp0_294)
                                        arg11 = data_143442440
                                        float temp0_344[0x4] =
                                            _mm_cvtepi32_ps(_mm_add_epi32(zmm5, arg11))
                                        zmm5 = data_143442690
                                        _mm_add_ps(
                                            _mm_mul_ps(_mm_div_ps(temp0_344, zmm5), temp0_318), 
                                            temp0_300)
                                        _mm_add_ps(
                                            _mm_mul_ps(
                                                _mm_div_ps(
                                                    _mm_cvtepi32_ps(_mm_add_epi32(arg13, arg11)), 
                                                    zmm5), 
                                                temp0_324), 
                                            temp0_306)
                                        jump(sub_14013d1cb+0x530)
                            
                            if ((temp0_233 & 4) != 0)
                                _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                            
                            if ((temp0_233 & 8) == 0)
                                jump(0x14013d257)
                            
                            jump(0x14013d251)
                        
                        float temp0_353[0x4] = _mm_unpacklo_ps(arg15, 0)
                        float temp0_354[0x4] = _mm_unpackhi_ps(arg15, zx.o(0))
                        arg11 = _mm_unpacklo_ps(zmm6, arg20[0].q)
                        float temp0_356[0x4] = _mm_unpackhi_ps(zmm6, arg20)
                        float arg_130[0x4] = _mm_insert_ps(arg11, arg15, 0x28)
                        double arg_140[0x2] = _mm_unpackhi_pd(arg11, temp0_353[0].q)
                        double arg_150[0x2] = _mm_insert_ps(temp0_356, arg15, 0xa8)
                        float arg_160[0x4] = _mm_unpackhi_pd(temp0_356, temp0_354[0].q)
                        uint64_t i = zx.q(_mm_movemask_ps(arg17))
                        
                        do
                            uint64_t rcx_22
                            uint64_t rflags_1
                            
                            if (i == 0)
                                rcx_22 = 0x40
                            else
                                rcx_22, rflags_1 = _bit_scan_forward(i)
                            float arg_120[0x4] = arg14
                            result = sx.q(arg_120[zx.q(rcx_22.d) & 3]) * 0x30
                            *(arg9 + result + 0x10) = (&arg_130)[rcx_22]
                            i &= rol.q(-2, rcx_22.b)
                        while (i != 0)
                    case 3
                        arg12 = arg17 & arg19
                        int64_t rax_45 = sx.q(arg12[0])
                        void* r10_3 = arg4 + rax_45
                        int32_t temp0_164 = _mm_extract_epi32(arg12, 1)
                        arg13 = *(arg4 + rax_45)
                        int64_t rax_46 = sx.q(temp0_164)
                        void* r8_1 = arg4 + rax_46
                        int64_t rdx_14 = sx.q(_mm_extract_epi32(arg12, 2))
                        void* rbp_8 = arg4 + rdx_14
                        int64_t rcx_9 = sx.q(_mm_extract_epi32(arg12, 3))
                        float temp0_169[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg13, *(arg4 + rax_46), 0x10), 
                                *(arg4 + rdx_14), 0x20), 
                            *(arg4 + rcx_9), 0x30)
                        void* rdx_15 = arg4 + rcx_9
                        arg_30.o = arg22
                        float temp0_171[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(*(r11 + r10_3), *(r12 + r8_1), 0x10), 
                            *(r15 + rbp_8), 0x20)
                        arg18 = data_142fc95f0 & arg17
                        uint64_t r15_1 = zx.q(_mm_extract_epi32(arg18, 1))
                        uint64_t r12_1 = zx.q(_mm_extract_epi32(arg18, 2))
                        arg_20[0].q = zx.q(_mm_extract_epi32(arg18, 3))
                        arg13 = data_143442650 & arg17
                        arg12 = *(zx.q(arg13[0]) + r10_3)
                        uint64_t rcx_11 = zx.q(_mm_extract_epi32(arg13, 1))
                        uint64_t rdi_10 = zx.q(_mm_extract_epi32(arg13, 2))
                        uint64_t rbx_7 = zx.q(_mm_extract_epi32(arg13, 3))
                        float temp0_180[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg12, *(rcx_11 + r8_1), 0x10), 
                                *(rdi_10 + rbp_8), 0x20), 
                            *(rbx_7 + rdx_15), 0x30)
                        zmm6 = zmm3
                        zmm3 = data_143442660 & arg17
                        arg13 = *(zx.q(zmm3[0]) + r10_3)
                        uint64_t rcx_13 = zx.q(_mm_extract_epi32(zmm3, 1))
                        uint64_t rdi_11 = zx.q(_mm_extract_epi32(zmm3, 2))
                        uint64_t rbx_8 = zx.q(_mm_extract_epi32(zmm3, 3))
                        float temp0_186[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg13, *(rcx_13 + r8_1), 0x10), 
                                *(rdi_11 + rbp_8), 0x20), 
                            *(rbx_8 + rdx_15), 0x30)
                        zmm3 = _mm_add_epi64(arg15, zmm6)
                        zmm5 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm5, arg26), arg20)
                        float temp0_192[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, arg11), 
                            _mm_shuffle_epi32(arg17, 0x50))
                        float temp0_194[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm5, _mm_shuffle_epi32(arg17, 0xfa))
                        arg11 = data_143442670 & arg17
                        int32_t* rdi_12 = zx.q(_mm_extract_epi32(arg11, 1))
                        int32_t* rbx_9 = zx.q(_mm_extract_epi32(arg11, 2))
                        int32_t* r11_2 = zx.q(_mm_extract_epi32(arg11, 3))
                        int64_t rcx_14 = temp0_192[0].q
                        int64_t rax_48 = _mm_extract_epi64(temp0_192, 1)
                        int64_t rcx_15 = temp0_194[0].q
                        zmm5 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_14)), *(arg4 + rax_48), 1)
                        int64_t rax_49 = _mm_extract_epi64(temp0_194, 1)
                        zmm5 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm5, *(arg4 + rcx_15), 2), *(arg4 + rax_49), 
                            3)
                        zmm3 = zmm5
                        arg15 = _mm_srli_epi32(zmm5, 0xa) & data_143442480
                        zmm5 = __paddd_xmmdq_memdq(zmm5 & data_143442680, data_143442490)
                        uint64_t rax_50 = zx.q(arg18[0])
                        float temp0_204[0x4] =
                            __divps_xmmps_memps(_mm_cvtepi32_ps(zmm5), data_1434426a0)
                        uint64_t rcx_16 = zx.q(arg11[0].d)
                        zmm6 = __addps_xmmps_memps(_mm_mul_ps(temp0_204, temp0_180), temp0_169)
                        arg11 = data_143442440
                        float temp0_208[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg15, arg11))
                        arg12 = data_143442690
                        arg20 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_208, arg12), temp0_186), 
                            __insertps_xmmps_memd_immb(temp0_171, *(r14_3 + rdx_15), 0x30))
                        arg22 = arg_30.o
                        float temp0_213[0x4] =
                            __insertps_xmmps_memd_immb(*(rax_50 + r10_3), *(r15_1 + r8_1), 0x10)
                        zmm3 = _mm_add_epi32(_mm_srli_epi32(zmm3, 0x15), arg11)
                        float temp0_216[0x4] =
                            __insertps_xmmps_memd_immb(temp0_213, *(r12_1 + rbp_8), 0x20)
                        arg15 = _mm_add_ps(
                            _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(zmm3), arg12), 
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(
                                        __insertps_xmmps_memd_immb(*(rcx_16 + r10_3), 
                                            *(rdi_12 + r8_1), 0x10), 
                                        *(rbx_9 + rbp_8), 0x20), 
                                    *(r11_2 + rdx_15), 0x30)), 
                            __insertps_xmmps_memd_immb(temp0_216, *(arg_20[0].q + rdx_15), 0x30))
                        rax_43 = arg24.d
                        goto label_14013d047
                    case 4, 5
                        goto label_14013cf68
                    case 6
                        char temp0_228 = _mm_movemask_ps(arg17)
                        arg15 = zx.o(0)
                        rax_43 = arg24.d
                        
                        if ((temp0_228 & 4) != 0)
                            arg15 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                        
                        if ((temp0_228 & 8) != 0)
                            arg15 = _mm_blend_epi16(arg15, zx.o(0), 0xc0)
                        
                        goto label_14013cfc2
            
            return result
        
        int64_t rcx_24 = sx.q(arg2 + 0x20)
        zmm3 = *(arg8 + rcx_24)
        arg12 = *(arg8 + rcx_24 + 0x10)
        arg_20 = arg12
        arg11 = _mm_slli_epi32(_mm_shuffle_ps(zmm3, arg12, 0xdd), 4)
        int64_t rdx_34 = sx.q(arg11[0].d)
        int64_t r10_5 = sx.q(*(arg3 + rdx_34))
        int64_t rbp_17 = sx.q(_mm_extract_epi32(arg11, 1))
        int64_t rsi_14 = sx.q(*(arg3 + rbp_17))
        int64_t rax_91 = sx.q(_mm_extract_epi32(arg11, 2))
        int64_t rbx_21 = sx.q(*(arg3 + rax_91))
        int64_t rcx_26 = sx.q(_mm_extract_epi32(arg11, 3))
        int64_t rdi_21 = sx.q(*(arg3 + rcx_26))
        arg20 = _mm_insert_epi32(
            _mm_insert_epi32(_mm_insert_epi32(zx.o(r10_5.d), rsi_14.d, 1), rbx_21.d, 2), rdi_21.d, 
            3)
        arg12 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rdx_34 + 4)), *(arg3 + rbp_17 + 4), 1), 
                *(arg3 + rax_91 + 4), 2), 
            *(arg3 + rcx_26 + 4), 3)
        arg17 = _mm_shuffle_epi32(arg20, 0x4e)
        arg11 = _mm_cmpgt_epi32(data_1434422d0, arg12)
        uint64_t rdx_35 = zx.q(_mm_movemask_ps(arg11))
        arg13 = arg26
        __return_addr.o = zmm3
        
        if (rdx_35.b == 0)
            arg11 = zx.o(0) ^ zmm6
            
            if (0f < arg19[0])
            label_14013b574:
                bool cond:30_1 = arg19[0] >= 1f
                zmm5 = _mm_add_epi32(arg12, zmm6)
                
                if (cond:30_1)
                    arg13 = _mm_blendv_ps(arg13, zmm5, arg11)
                    arg15 = _mm_blendv_ps(arg15, zmm5, arg11)
                    arg14 = zx.o(0)
                else
                    float temp0_385[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm5), arg32)
                    float temp0_386[0x4] = _mm_round_ps(temp0_385, 9)
                    arg13 = _mm_blendv_ps(arg13, _mm_min_epi32(_mm_cvttps_epi32(temp0_386), zmm5), 
                        arg11)
                    arg14 = zx.o(0)
                    
                    if (arg10 != 1)
                        arg14 = _mm_sub_ps(temp0_385, temp0_386)
                    
                    zmm6 = _mm_min_epi32(
                        _mm_sub_epi32(arg13, _mm_cmpeq_epi32(temp0_386, temp0_386)), zmm5)
                    arg15 = _mm_blendv_ps(arg15, zmm6, arg11)
                    zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                
                arg16 = arg13
                arg23 = _mm_blendv_ps(arg23, arg14, arg11)
            else
            label_14013b5f1:
                arg13 = _mm_blendv_ps(arg13, zx.o(0), arg11)
                arg15 = _mm_blendv_ps(arg15, zx.o(0), arg11)
                arg16 = arg13
                arg23 = _mm_blendv_ps(arg23, zx.o(0), arg11)
        else
            arg16 = _mm_andnot_ps(arg11, arg13)
            arg14 = _mm_andnot_ps(arg11, arg15)
            zmm5 = _mm_andnot_ps(arg11, arg23)
            
            if (rdx_35.b != 0xf)
                arg13 = arg16
                arg15 = arg14
                arg23 = zmm5
                arg11 ^= zmm6
                
                if (0f >= arg19[0])
                    goto label_14013b5f1
                
                goto label_14013b574
            
            arg13 = arg16
            arg15 = arg14
            arg23 = zmm5
        
        arg18 = _mm_cvtepi32_epi64(arg20[0].q)
        zmm5 = _mm_cvtepi32_epi64(arg17[0].q)
        arg14 = zx.o(0)
        arg11 = __pcmpgtd_xmmdq_memdq(arg12, data_142d3f5b0) & arg33
        float temp0_404[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, arg11)
        arg17 = _mm_cvtepi32_epi64(temp0_404[0].q)
        arg19 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_404, 0x4e)[0])
        arg12 = __pmulld_xmmdq_memdq(arg16, arg29)
        arg11 = _mm_cvtepi32_epi64(arg12[0].q)
        arg12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg12, 0x4e)[0].q)
        arg26 = arg13
        arg_40 = arg23
        
        if (arg7 u< 2)
            zmm3 = _mm_add_epi64(arg17, arg18)
            arg14 = _mm_add_epi64(_mm_add_epi64(arg19, zmm5), arg12)
            zmm3 = _mm_add_epi64(zmm3, arg11)
            int64_t rax_96 = zmm3[0].q
            int64_t rcx_27 = _mm_extract_epi64(zmm3, 1)
            rdx_35 = arg14[0].q
            int64_t rbp_18 = _mm_extract_epi64(arg14, 1)
            arg22 = *(arg4 + rax_96 + 4)
            arg21 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_96), *(arg4 + rcx_27), 0x10), 
                    *(arg4 + rdx_35), 0x20), 
                *(arg4 + rbp_18), 0x30)
            arg22 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg22, *(arg4 + rcx_27 + 4), 0x10), 
                    *(arg4 + rdx_35 + 4), 0x20), 
                *(arg4 + rbp_18 + 4), 0x30)
            arg14 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_96 + 8), *(arg4 + rcx_27 + 8), 0x10), 
                    *(arg4 + rdx_35 + 8), 0x20), 
                *(arg4 + rbp_18 + 8), 0x30)
        else if (arg7 == 2)
            zmm3 = _mm_add_epi64(arg17, arg18)
            arg14 = _mm_add_epi64(_mm_add_epi64(arg19, zmm5), arg12)
            zmm3 = _mm_add_epi64(zmm3, arg11)
            int64_t rbx_22 = _mm_extract_epi64(zmm3, 1)
            int64_t rax_97 = zmm3[0].q
            rdx_35 = arg14[0].q
            int64_t rcx_28 = _mm_extract_epi64(arg14, 1)
            arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_97)), *(arg4 + rbx_22), 1), 
                    *(arg4 + rdx_35), 2), 
                *(arg4 + rcx_28), 3)[0])
            arg12 = data_1434424d0
            float temp0_476[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg12))
            arg11 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_97 + 2)), *(arg4 + rbx_22 + 2), 1), 
                    *(arg4 + rdx_35 + 2), 2), 
                *(arg4 + rcx_28 + 2), 3)
            zmm3 = data_1434426d0
            float temp0_480[0x4] = _mm_div_ps(temp0_476, zmm3)
            float temp0_483[0x4] =
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg11[0]), arg12))
            arg11 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_97 + 4)), *(arg4 + rbx_22 + 4), 1), 
                    *(arg4 + rdx_35 + 4), 2), 
                *(arg4 + rcx_28 + 4), 3)
            float temp0_487[0x4] = _mm_div_ps(temp0_483, zmm3)
            float temp0_491[0x4] = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg11[0]), arg12)), zmm3)
            arg11 = data_143442710
            arg21 = _mm_mul_ps(temp0_480, arg11)
            arg22 = _mm_mul_ps(temp0_487, arg11)
            arg14 = _mm_mul_ps(temp0_491, arg11)
        else
            arg22 = zx.o(0)
            arg21 = zx.o(0)
            
            if (arg7 == 3)
                zmm3 = _mm_add_epi64(arg17, arg18)
                arg14 = _mm_add_epi64(arg19, zmm5)
                zmm3 = _mm_add_epi64(zmm3, arg11)
                arg11 = zx.o(*(arg4 + zmm3[0].q))
                int64_t rax_93 = _mm_extract_epi64(zmm3, 1)
                arg14 = _mm_add_epi64(arg14, arg12)
                arg11 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(arg11, *(arg4 + rax_93), 1), 
                        *(arg4 + arg14[0].q), 2), 
                    *(arg4 + _mm_extract_epi64(arg14, 1)), 3)
                arg14 = *(arg4 + r10_5 + 4)
                float temp0_421[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_5), *(arg4 + rsi_14), 0x10), 
                        *(arg4 + rbx_21), 0x20), 
                    *(arg4 + rdi_21), 0x30)
                float temp0_424[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg14, *(arg4 + rsi_14 + 4), 0x10), 
                        *(arg4 + rbx_21 + 4), 0x20), 
                    *(arg4 + rdi_21 + 4), 0x30)
                float temp0_427[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_5 + 0xc), *(arg4 + rsi_14 + 0xc), 
                            0x10), 
                        *(arg4 + rbx_21 + 0xc), 0x20), 
                    *(arg4 + rdi_21 + 0xc), 0x30)
                arg13 = zmm5
                zmm5 = arg11
                arg23 = arg15
                arg15 = arg11
                float temp0_431[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg11 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    temp0_427)
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_5 + 0x10), *(arg4 + rsi_14 + 0x10), 
                            0x10), 
                        *(arg4 + rbx_21 + 0x10), 0x20), 
                    *(arg4 + rdi_21 + 0x10), 0x30)
                arg21 = _mm_add_ps(temp0_431, temp0_421)
                arg15 = _mm_srli_epi32(arg15, 0xa) & data_143442480
                arg12 = data_143442440
                zmm3 = arg12
                float temp0_438[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg15, arg12))
                arg12 = data_143442690
                float temp0_440[0x4] = _mm_mul_ps(_mm_div_ps(temp0_438, arg12), arg11)
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_5 + 8), *(arg4 + rsi_14 + 8), 0x10), 
                    *(arg4 + rbx_21 + 8), 0x20)
                arg22 = _mm_add_ps(temp0_440, temp0_424)
                float temp0_446[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_5 + 0x14), *(arg4 + rsi_14 + 0x14), 
                            0x10), 
                        *(arg4 + rbx_21 + 0x14), 0x20), 
                    *(arg4 + rdi_21 + 0x14), 0x30)
                float temp0_449[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm5, 0x15), zmm3))
                zmm5 = arg13
                arg15 = arg23
                arg14 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_449, arg12), temp0_446), 
                    __insertps_xmmps_memd_immb(arg11, *(arg4 + rdi_21 + 8), 0x30))
        
        arg16 = _mm_cmpeq_epi32(arg16, arg15)
        arg23 = arg16 ^ zmm6
        char temp0_496 = _mm_movemask_ps(arg23)
        
        if (temp0_496 != 0)
            arg30 = arg15
            
            if (arg7 u<= 6)
                arg12 = _mm_mullo_epi32(arg29, arg15)
                arg11 = _mm_cvtepi32_epi64(arg12[0].q)
                zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg12, 0x4e)[0].q)
                
                switch (arg7)
                    case 0, 1
                        return sub_14013ba4e(arg11, rdx_35, arg3, arg4, arg7, arg8, arg9, 
                            temp0_496, arg10, zmm3, arg14, zmm5, arg17, arg18, arg19, arg21, arg22, 
                            arg23) __tailcall
                    case 2
                        arg17 = _mm_add_epi64(arg17, arg18)
                        arg19 = _mm_add_epi64(_mm_add_epi64(arg19, zmm5), zmm3)
                        arg17 = _mm_add_epi64(arg17, arg11)
                        arg13 = _mm_shuffle_epi32(arg23, 0x50)
                        float temp0_507[0x4] = _mm_blendv_ps(zx.o(0), arg17, arg13)
                        arg16 = _mm_shuffle_epi32(arg23, 0xfa)
                        float temp0_509[0x4] = _mm_blendv_ps(zx.o(0), arg19, arg16)
                        int64_t rax_103 = temp0_507[0].q
                        void* r10_7 = arg4 + rax_103
                        int64_t rdi_24 = _mm_extract_epi64(temp0_507, 1)
                        void* rsi_15 = arg4 + rdi_24
                        int64_t rbx_23 = temp0_509[0].q
                        arg12 = data_1434426b0
                        float temp0_510[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg13)
                        float temp0_511[0x4] = _mm_blendv_ps(zx.o(0), arg12, arg16)
                        arg12 = zx.o(*(temp0_510[0].q + r10_7))
                        int64_t rcx_33 = _mm_extract_epi64(temp0_510, 1)
                        arg11 = arg13
                        arg13 = data_1434426c0
                        zmm3 = arg13
                        float temp0_512[0x4] = _mm_blendv_ps(zx.o(0), arg13, arg11)
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, *(rcx_33 + rsi_15), 1)
                        void* rdx_37 = arg4 + rbx_23
                        arg13 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_512[0].q + r10_7)), 
                            *(_mm_extract_epi64(temp0_512, 1) + rsi_15), 1)
                        int64_t rcx_37 = _mm_extract_epi64(temp0_509, 1)
                        int16_t* rbp_21 = temp0_511[0].q
                        float temp0_515[0x4] = _mm_blendv_ps(zx.o(0), zmm3, arg16)
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, *(rbp_21 + rdx_37), 2)
                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, *(temp0_515[0].q + rdx_37), 2)
                        void* rdx_38 = arg4 + rcx_37
                        arg12 = __pinsrw_xmmdq_memw_immb(arg12, 
                            *(_mm_extract_epi64(temp0_511, 1) + rdx_38), 3)
                        arg13 = __pinsrw_xmmdq_memw_immb(arg13, 
                            *(_mm_extract_epi64(temp0_515, 1) + rdx_38), 3)
                        arg11 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_103)), *(arg4 + rdi_24), 
                                    1), 
                                *(arg4 + rbx_23), 2), 
                            *(arg4 + rcx_37), 3)[0])
                        zmm3 = data_1434424d0
                        float temp0_525[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, zmm3))
                        arg11 = data_1434426d0
                        float temp0_526[0x4] = _mm_div_ps(temp0_525, arg11)
                        float temp0_530[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg12[0].q), zmm3)), 
                            arg11)
                        arg11 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg13[0].q), zmm3))
                        float temp0_534[0x4] = __mulps_xmmps_memps(temp0_526, data_143442710)
                        uint64_t rcx_38 = zx.q(temp0_496)
                        int64_t rdi_26 = rcx_38 & 1
                        
                        if (rdi_26 != 0)
                            _mm_blend_ps(arg_80, temp0_534, 1)
                            jump(0x14013c268)
                        
                        arg11 = __divps_xmmps_memps(arg11, data_1434426d0)
                        float temp0_600[0x4] = __mulps_xmmps_memps(temp0_530, data_143442710)
                        
                        if (rdi_26 == 0)
                            jump(0x14013c313)
                        
                        return sub_14013c2ab(rcx_38, zx.q(arg2 + 0x20), arg3, arg4, zx.q(arg5 + 4), 
                            rdi_26, arg7, arg8, arg9, arg10, arg11, temp0_600, __return_addr.o, 
                            arg14, temp0_534, arg25, arg_80, zx.o(0), arg_20, zx.o(arg52), arg21, 
                            arg22, arg_40) __tailcall
                    case 3
                        float temp0_539[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(arg17, arg18), arg11), 
                            _mm_shuffle_epi32(arg23, 0x50))
                        arg11 = arg16 & not.o(arg20)
                        int64_t rax_106 = sx.q(arg11[0].d)
                        void* rsi_16 = arg4 + rax_106
                        arg12 = *(arg4 + rax_106)
                        int64_t rax_108 = sx.q(_mm_extract_epi32(arg11, 1))
                        void* rbx_24 = arg4 + rax_108
                        int64_t rdx_40 = sx.q(_mm_extract_epi32(arg11, 2))
                        void* rdi_27 = arg4 + rdx_40
                        int64_t rcx_39 = sx.q(_mm_extract_epi32(arg11, 3))
                        float temp0_545[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg12, *(arg4 + rax_108), 0x10), 
                                *(arg4 + rdx_40), 0x20), 
                            *(arg4 + rcx_39), 0x30)
                        arg11 = arg16 & not.o(data_142fc95e0)
                        uint64_t rax_109 = zx.q(_mm_extract_epi32(arg11, 1))
                        uint64_t rax_110 = zx.q(_mm_extract_epi32(arg11, 2))
                        uint64_t rax_111 = zx.q(arg11[0].d)
                        uint64_t rdx_41 = zx.q(_mm_extract_epi32(arg11, 3))
                        arg11 = arg16 & not.o(data_143442650)
                        uint64_t r11_5 = zx.q(_mm_extract_epi32(arg11, 1))
                        uint64_t r15_3 = zx.q(_mm_extract_epi32(arg11, 2))
                        uint64_t rdx_42 = zx.q(arg11[0].d)
                        uint64_t r12_3 = zx.q(_mm_extract_epi32(arg11, 3))
                        arg13 = arg16 & not.o(data_142fc95f0)
                        uint64_t rbp_26 = zx.q(_mm_extract_epi32(arg13, 1))
                        uint64_t r10_8 = zx.q(_mm_extract_epi32(arg13, 2))
                        arg19 = _mm_add_epi64(arg19, zmm5)
                        arg15 = *(rdx_42 + rsi_16)
                        int32_t* rdx_43 = zx.q(_mm_extract_epi32(arg13, 3))
                        void* r11_6 = arg4 + rcx_39
                        float temp0_558[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg15, *(r11_5 + rbx_24), 0x10), 
                                *(r15_3 + rdi_27), 0x20), 
                            *(r12_3 + r11_6), 0x30)
                        float temp0_561[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg19, zmm3), 
                            _mm_shuffle_epi32(arg23, 0xfa))
                        arg19 = *(rax_111 + rsi_16)
                        zmm6 = arg16 & not.o(data_143442660)
                        uint64_t rax_112 = zx.q(_mm_extract_epi32(zmm6, 1))
                        uint64_t rcx_40 = zx.q(_mm_extract_epi32(zmm6, 2))
                        uint64_t r15_4 = zx.q(_mm_extract_epi32(zmm6, 3))
                        float temp0_567[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(zmm6[0]) + rsi_16), 
                                    *(rax_112 + rbx_24), 0x10), 
                                *(rcx_40 + rdi_27), 0x20), 
                            *(r15_4 + r11_6), 0x30)
                        uint64_t rax_113 = zx.q(arg13[0])
                        arg16 &= not.o(data_143442670)
                        int32_t* r15_5 = zx.q(_mm_extract_epi32(arg16, 1))
                        arg17 = *(rax_113 + rsi_16)
                        int32_t* rax_114 = zx.q(_mm_extract_epi32(arg16, 2))
                        int64_t rbp_28 = temp0_539[0].q
                        int64_t rcx_41 = _mm_extract_epi64(temp0_539, 1)
                        int64_t rbp_29 = temp0_561[0].q
                        arg13 =
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rbp_28)), *(arg4 + rcx_41), 1)
                        int64_t rcx_42 = _mm_extract_epi64(temp0_561, 1)
                        arg13 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(arg13, *(arg4 + rbp_29), 2), *(arg4 + rcx_42), 
                            3)
                        float (* rcx_43)[0x4] = zx.q(arg16[0])
                        int32_t* rbp_30 = zx.q(_mm_extract_epi32(arg16, 3))
                        arg11 = arg13
                        zmm5 = arg13
                        arg13 = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg13 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                temp0_558), 
                            temp0_545)
                        zmm5 = _mm_srli_epi32(zmm5, 0xa) & data_143442480
                        arg12 = data_143442440
                        zmm3 = arg12
                        float temp0_581[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, arg12))
                        arg12 = data_143442690
                        arg15 = arg12
                        float temp0_583[0x4] = _mm_mul_ps(_mm_div_ps(temp0_581, arg12), temp0_567)
                        arg12 = *(rcx_43 + rsi_16)
                        float temp0_586[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg19, *(rax_109 + rbx_24), 0x10), 
                                *(rax_110 + rdi_27), 0x20), 
                            *(rdx_41 + r11_6), 0x30)
                        arg17 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg17, *(rbp_26 + rbx_24), 0x10), 
                                *(r10_8 + rdi_27), 0x20), 
                            *(rdx_43 + r11_6), 0x30)
                        float temp0_592[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg12, *(r15_5 + rbx_24), 0x10), 
                                *(rax_114 + rdi_27), 0x20), 
                            *(rbp_30 + r11_6), 0x30)
                        float temp0_596[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(arg11, 0x15), zmm3)), 
                            arg15)
                        arg1 = zx.q(temp0_496)
                        arg6 = arg1 & 1
                        cond:0 = arg6 != 0
                        
                        if (arg6 != 0)
                            _mm_blend_ps(arg_80, arg13, 1)
                            jump(0x14013c384)
                        
                        arg15 = arg_80
                        arg11 = arg_10
                        arg23 = arg_40
                        arg12 = _mm_mul_ps(temp0_592, temp0_596)
                        arg19 = _mm_add_ps(temp0_586, temp0_583)
                        arg7 = arg24.d
                        arg10 = arg53
                        arg20 = zx.o(arg52)
                        arg8 = arg31
                        arg2 += 0x20
                        arg16 = zx.o(0)
                        arg5 += 4
                        arg18 = arg_20
                        
                        if (arg6 == 0)
                            jump(0x14013c3e0)
                        
                        break
            
            uint64_t rcx_30 = zx.q(temp0_496)
            int64_t rdi_23 = rcx_30 & 1
            
            if (rdi_23 == 0)
                arg15 = arg_80
                zmm6 = arg25
                zmm3 = __return_addr.o
                
                if (rdi_23 != 0)
                    zmm6 = _mm_blend_epi16(zmm6, zx.o(0), 3)
            else
                arg15 = _mm_blend_epi16(arg_80, zx.o(0), 3)
                zmm6 = arg25
                zmm3 = __return_addr.o
                
                if (rdi_23 != 0)
                    zmm6 = _mm_blend_epi16(zmm6, zx.o(0), 3)
            
            if (rdi_23 == 0)
                return sub_14013c210(rcx_30, zx.q(arg2 + 0x20), arg3, arg4, zx.q(arg5 + 4), rdi_23, 
                    arg7, arg8, arg9, arg10, arg_10, zmm3, arg14, zmm6, arg15, zx.o(0), arg_20, 
                    zx.o(arg52), arg21, arg22, arg_40) __tailcall
            
            jump(0x14013c1bf)
        
        arg2 += 0x20
        arg16 = zx.o(0)
        arg5 += 4
        arg23 = arg_40
        arg18 = arg_20
        zmm3 = __return_addr.o
        arg19 = zx.o(arg52)
