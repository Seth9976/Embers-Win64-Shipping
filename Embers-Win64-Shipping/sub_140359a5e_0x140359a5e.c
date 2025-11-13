// 函数: sub_140359a5e
// 地址: 0x140359a5e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    float (* r9_1)[0x4] = arg28
    int32_t r10_1 = arg65
    int32_t rdx_1 = arg19
    int32_t zmm15[0x4] = arg29
    int32_t rbx_1 = arg27
    int32_t zmm7[0x4] = arg17
    float zmm12[0x4] = arg21
    int32_t zmm13[0x4] = arg26
    float zmm5[0x4] = arg15
    float zmm11[0x4] = arg32
    char rsi_1 = arg31
    float zmm3[0x4] = arg4
    
    while (true)
        int32_t temp0_30[0x4] = _mm_cmpeq_epi32(arg8, zx.o(0))
        int32_t zmm0[0x4] = _mm_slli_epi32(arg45 & temp0_30, 0x1f)
        char rbp_2
        float zmm1[0x4]
        float zmm10[0x4]
        bool cond:0_1
        bool cond:3_1
        bool cond:4_1
        bool cond:6_1
        bool cond:7_1
        bool cond:10_1
        bool cond:11_1
        bool cond:14_1
        bool cond:15_1
        bool cond:18_1
        bool cond:19_1
        
        if (_mm_movemask_ps(zmm0) == 0)
            arg6 = arg13
        else
            int32_t zmm4[0x4] = zmm0
            char temp0_33 = _mm_movemask_ps(temp0_30)
            char temp1_1 = temp0_33 & 1
            
            if (temp1_1 == 0)
                zmm1 = arg5
                arg5 = arg13
                
                if (temp1_1 != 0)
                    __return_addr.o = _mm_blend_ps(__return_addr.o, zmm3, 1)
            else
                zmm1 = arg5
                zmm5 = _mm_blend_ps(zmm5, arg5, 1)
                arg5 = arg13
                
                if (temp1_1 != 0)
                    __return_addr.o = _mm_blend_ps(__return_addr.o, zmm3, 1)
            
            if (temp1_1 == 0)
                if (temp1_1 != 0)
                    goto label_140358a93
                
                goto label_140359d8b
            
            arg9 = __blendps_xmmdq_memdq_immb(arg9, arg14, 1)
            
            if (temp1_1 != 0)
            label_140358a93:
                zmm11 = _mm_blend_ps(zmm11, arg7, 1)
                
                if (temp1_1 == 0)
                    goto label_140359d8b_1
                
                goto label_140358aa0
            
        label_140359d8b:
            
            if (temp1_1 != 0)
            label_140358aa0:
                zmm13 = __blendps_xmmdq_memdq_immb(zmm13, arg10, 1)
                
                if (temp1_1 != 0)
                label_140358aaf:
                    zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg16, 1)
                    
                    if (temp1_1 == 0)
                        goto label_140358993
                    
                    goto label_140358ac6
            else
            label_140359d8b_1:
                
                if (temp1_1 != 0)
                    goto label_140358aaf
            
            bool cond:24_1
            bool cond:25_1
            bool cond:28_1
            bool cond:29_1
            bool cond:32_1
            bool cond:33_1
            bool cond:36_1
            bool cond:37_1
            bool cond:40_1
            bool cond:41_1
            bool cond:44_1
            bool cond:45_1
            
            if (temp1_1 == 0)
            label_140358993:
                char temp4_1 = temp0_33 & 2
                cond:24_1 = temp4_1 != 0
                cond:25_1 = temp4_1 == 0
                cond:28_1 = temp4_1 == 0
                cond:29_1 = temp4_1 != 0
                cond:32_1 = temp4_1 != 0
                cond:33_1 = temp4_1 == 0
                cond:36_1 = temp4_1 == 0
                cond:37_1 = temp4_1 != 0
                cond:40_1 = temp4_1 != 0
                cond:41_1 = temp4_1 == 0
                cond:44_1 = temp4_1 == 0
                cond:45_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                    goto label_140358ad6
                
                goto label_14035899d
            
        label_140358ac6:
            zmm7 = _mm_insert_epi32(zmm7, 1, 0)
            char temp3_1 = temp0_33 & 2
            cond:24_1 = temp3_1 != 0
            cond:25_1 = temp3_1 == 0
            cond:28_1 = temp3_1 == 0
            cond:29_1 = temp3_1 != 0
            cond:32_1 = temp3_1 != 0
            cond:33_1 = temp3_1 == 0
            cond:36_1 = temp3_1 == 0
            cond:37_1 = temp3_1 != 0
            cond:40_1 = temp3_1 != 0
            cond:41_1 = temp3_1 == 0
            cond:44_1 = temp3_1 == 0
            cond:45_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
            label_140358ad6:
                zmm5 = _mm_blend_ps(zmm5, zmm1, 2)
                
                if (cond:25_1)
                    goto label_1403589a3
                
                goto label_140358aec
            
        label_14035899d:
            
            if (not(cond:24_1))
            label_1403589a3:
                
                if (cond:29_1)
                    goto label_140358b03
                
                goto label_1403589a9
            
        label_140358aec:
            __return_addr.o = _mm_blend_ps(__return_addr.o, zmm3, 2)
            
            if (not(cond:28_1))
            label_140358b03:
                arg9 = __blendps_xmmdq_memdq_immb(arg9, arg14, 2)
                
                if (cond:33_1)
                    goto label_1403589af
                
                goto label_140358b0e
            
        label_1403589a9:
            
            if (not(cond:32_1))
            label_1403589af:
                
                if (cond:37_1)
                    goto label_140358b1b
                
                goto label_1403589b5
            
        label_140358b0e:
            zmm11 = _mm_blend_ps(zmm11, arg7, 2)
            
            if (not(cond:36_1))
            label_140358b1b:
                zmm13 = __blendps_xmmdq_memdq_immb(zmm13, arg10, 2)
                
                if (cond:41_1)
                    goto label_1403589bb
                
                goto label_140358b2a
            
        label_1403589b5:
            
            if (not(cond:40_1))
            label_1403589bb:
                
                if (cond:45_1)
                    goto label_140358b41
                
                goto label_1403589c1
            
        label_140358b2a:
            zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg16, 2)
            bool cond:48_1
            bool cond:49_1
            bool cond:52_1
            bool cond:53_1
            bool cond:56_1
            bool cond:57_1
            bool cond:60_1
            bool cond:61_1
            bool cond:64_1
            bool cond:65_1
            bool cond:68_1
            bool cond:69_1
            
            if (not(cond:44_1))
            label_140358b41:
                zmm7 = _mm_insert_epi32(zmm7, 1, 1)
                char temp8_1 = temp0_33 & 4
                cond:48_1 = temp8_1 == 0
                cond:49_1 = temp8_1 != 0
                cond:52_1 = temp8_1 != 0
                cond:53_1 = temp8_1 == 0
                cond:56_1 = temp8_1 == 0
                cond:57_1 = temp8_1 != 0
                cond:60_1 = temp8_1 != 0
                cond:61_1 = temp8_1 == 0
                cond:64_1 = temp8_1 == 0
                cond:65_1 = temp8_1 != 0
                cond:68_1 = temp8_1 != 0
                cond:69_1 = temp8_1 == 0
                
                if (temp8_1 == 0)
                    goto label_1403589cb
                
                goto label_140358b51
            
        label_1403589c1:
            char temp7_1 = temp0_33 & 4
            cond:48_1 = temp7_1 == 0
            cond:49_1 = temp7_1 != 0
            cond:52_1 = temp7_1 != 0
            cond:53_1 = temp7_1 == 0
            cond:56_1 = temp7_1 == 0
            cond:57_1 = temp7_1 != 0
            cond:60_1 = temp7_1 != 0
            cond:61_1 = temp7_1 == 0
            cond:64_1 = temp7_1 == 0
            cond:65_1 = temp7_1 != 0
            cond:68_1 = temp7_1 != 0
            cond:69_1 = temp7_1 == 0
            
            if (temp7_1 == 0)
            label_1403589cb:
                
                if (cond:49_1)
                    goto label_140358b67
                
                goto label_1403589d1
            
        label_140358b51:
            zmm5 = _mm_blend_ps(zmm5, zmm1, 4)
            
            if (not(cond:48_1))
            label_140358b67:
                __return_addr.o = _mm_blend_ps(__return_addr.o, zmm3, 4)
                
                if (cond:53_1)
                    goto label_1403589d7
                
                goto label_140358b7e
            
        label_1403589d1:
            
            if (not(cond:52_1))
            label_1403589d7:
                
                if (cond:57_1)
                    goto label_140358b89
                
                goto label_1403589dd
            
        label_140358b7e:
            arg9 = __blendps_xmmdq_memdq_immb(arg9, arg14, 4)
            
            if (not(cond:56_1))
            label_140358b89:
                zmm11 = _mm_blend_ps(zmm11, arg7, 4)
                
                if (cond:61_1)
                    goto label_1403589e3
                
                goto label_140358b96
            
        label_1403589dd:
            
            if (cond:60_1)
            label_140358b96:
                zmm13 = __blendps_xmmdq_memdq_immb(zmm13, arg10, 4)
                
                if (not(cond:64_1))
                label_140358ba5:
                    zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg16, 4)
                    
                    if (cond:69_1)
                        goto label_1403589ef
                    
                    goto label_140358bbc
            else
            label_1403589e3:
                
                if (cond:65_1)
                    goto label_140358ba5
            
            bool cond:72_1
            bool cond:73_1
            bool cond:76_1
            bool cond:77_1
            bool cond:80_1
            bool cond:81_1
            bool cond:84_1
            bool cond:85_1
            bool cond:88_1
            bool cond:89_1
            bool cond:92_1
            bool cond:93_1
            
            if (not(cond:68_1))
            label_1403589ef:
                char temp12_1 = temp0_33 & 8
                cond:72_1 = temp12_1 != 0
                cond:73_1 = temp12_1 == 0
                cond:76_1 = temp12_1 == 0
                cond:77_1 = temp12_1 != 0
                cond:80_1 = temp12_1 != 0
                cond:81_1 = temp12_1 == 0
                cond:84_1 = temp12_1 == 0
                cond:85_1 = temp12_1 != 0
                cond:88_1 = temp12_1 != 0
                cond:89_1 = temp12_1 == 0
                cond:92_1 = temp12_1 != 0
                cond:93_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                    goto label_140358bcc
                
                goto label_1403589f9
            
        label_140358bbc:
            zmm7 = _mm_insert_epi32(zmm7, 1, 2)
            char temp11_1 = temp0_33 & 8
            cond:72_1 = temp11_1 != 0
            cond:73_1 = temp11_1 == 0
            cond:76_1 = temp11_1 == 0
            cond:77_1 = temp11_1 != 0
            cond:80_1 = temp11_1 != 0
            cond:81_1 = temp11_1 == 0
            cond:84_1 = temp11_1 == 0
            cond:85_1 = temp11_1 != 0
            cond:88_1 = temp11_1 != 0
            cond:89_1 = temp11_1 == 0
            cond:92_1 = temp11_1 != 0
            cond:93_1 = temp11_1 == 0
            
            if (temp11_1 != 0)
            label_140358bcc:
                zmm5 = _mm_blend_ps(zmm5, zmm1, 8)
                zmm10 = __return_addr.o
                zmm0 = zmm15
                
                if (cond:73_1)
                    goto label_140358a08
                
                goto label_140358be1
            
        label_1403589f9:
            zmm10 = __return_addr.o
            zmm0 = zmm15
            
            if (not(cond:72_1))
            label_140358a08:
                arg8 = arg22
                
                if (cond:77_1)
                    goto label_140358c04
                
                goto label_140358a17
            
        label_140358be1:
            zmm10 = _mm_blend_ps(zmm10, zmm3, 8)
            arg8 = arg22
            
            if (not(cond:76_1))
            label_140358c04:
                arg9 = __blendps_xmmdq_memdq_immb(arg9, arg14, 8)
                zmm3 = zmm12
                zmm1 = zmm13
                zmm15 = arg23
                
                if (cond:81_1)
                    goto label_140358a2f
                
                goto label_140358c21
            
        label_140358a17:
            zmm3 = zmm12
            zmm1 = zmm13
            zmm15 = arg23
            
            if (not(cond:80_1))
            label_140358a2f:
                arg4 = arg24
                
                if (cond:85_1)
                    goto label_140358c36
                
                goto label_140358a3d
            
        label_140358c21:
            zmm11 = _mm_blend_ps(zmm11, arg7, 8)
            arg4 = arg24
            
            if (not(cond:84_1))
            label_140358c36:
                zmm1 = __blendps_xmmdq_memdq_immb(zmm1, arg10, 8)
                
                if (cond:89_1)
                    goto label_140358a43
                
                goto label_140358c44
            
        label_140358a3d:
            
            if (cond:88_1)
            label_140358c44:
                zmm3 = __blendps_xmmdq_memdq_immb(zmm3, arg16, 8)
                
                if (cond:92_1)
                    zmm7 = _mm_insert_epi32(zmm7, 1, 3)
            else
            label_140358a43:
                
                if (not(cond:93_1))
                    zmm7 = _mm_insert_epi32(zmm7, 1, 3)
            
            _mm_movemask_ps(_mm_srai_epi32(zmm4, 0x1f) | arg6)
            arg6 = arg5
            rbp_2 = rsi_1
            char temp15_1 = rbp_2 & 1
            cond:0_1 = temp15_1 != 0
            cond:3_1 = temp15_1 == 0
            cond:4_1 = temp15_1 != 0
            cond:6_1 = temp15_1 != 0
            cond:7_1 = temp15_1 == 0
            cond:10_1 = temp15_1 == 0
            cond:11_1 = temp15_1 != 0
            cond:14_1 = temp15_1 != 0
            cond:15_1 = temp15_1 == 0
            cond:18_1 = temp15_1 == 0
            cond:19_1 = temp15_1 != 0
            
            if (temp15_1 != 0)
            label_140359dea:
                arg8 = _mm_blend_ps(arg8, zmm5, 1)
            
        label_140359df1:
            zmm12 = arg18
            arg5 = zmm0
            
            if (not(cond:0_1))
                if (cond:4_1)
                    goto label_1403587cd
                
                goto label_140359e09
            
            arg5 = _mm_blend_ps(arg5, zmm10, 1)
            
            if (not(cond:3_1))
            label_1403587cd:
                zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg9, 1)
                
                if (cond:7_1)
                    goto label_140359e0f
                
                goto label_1403587dc
            
        label_140359e09:
            
            if (not(cond:6_1))
            label_140359e0f:
                
                if (cond:11_1)
                    goto label_1403587e9
                
                goto label_140359e15
            
        label_1403587dc:
            arg6 = _mm_blend_ps(arg6, zmm11, 1)
            
            if (not(cond:10_1))
            label_1403587e9:
                arg4 = _mm_blend_ps(arg4, zmm1, 1)
                
                if (cond:15_1)
                    goto label_140359e1b
                
                goto label_140358800
            
        label_140359e15:
            
            if (not(cond:14_1))
            label_140359e1b:
                
                if (cond:19_1)
                    goto label_14035880b
                
                goto label_140359e21
            
        label_140358800:
            arg11 = _mm_blend_ps(arg11, zmm3, 1)
            bool cond:22_1
            bool cond:23_1
            bool cond:26_1
            bool cond:27_1
            bool cond:30_1
            bool cond:31_1
            bool cond:34_1
            bool cond:35_1
            bool cond:38_1
            bool cond:39_1
            bool cond:42_1
            bool cond:43_1
            
            if (not(cond:18_1))
            label_14035880b:
                zmm15 = _mm_blend_epi16(zmm15, zmm7, 3)
                char temp6_1 = rbp_2 & 2
                cond:22_1 = temp6_1 == 0
                cond:23_1 = temp6_1 != 0
                cond:26_1 = temp6_1 != 0
                cond:27_1 = temp6_1 == 0
                cond:30_1 = temp6_1 == 0
                cond:31_1 = temp6_1 != 0
                cond:34_1 = temp6_1 != 0
                cond:35_1 = temp6_1 == 0
                cond:38_1 = temp6_1 == 0
                cond:39_1 = temp6_1 != 0
                cond:42_1 = temp6_1 != 0
                cond:43_1 = temp6_1 == 0
                
                if (temp6_1 == 0)
                    goto label_140359e2b
                
                goto label_14035881c
            
        label_140359e21:
            char temp5_1 = rbp_2 & 2
            cond:22_1 = temp5_1 == 0
            cond:23_1 = temp5_1 != 0
            cond:26_1 = temp5_1 != 0
            cond:27_1 = temp5_1 == 0
            cond:30_1 = temp5_1 == 0
            cond:31_1 = temp5_1 != 0
            cond:34_1 = temp5_1 != 0
            cond:35_1 = temp5_1 == 0
            cond:38_1 = temp5_1 == 0
            cond:39_1 = temp5_1 != 0
            cond:42_1 = temp5_1 != 0
            cond:43_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
            label_140359e2b:
                
                if (cond:23_1)
                    goto label_140358829
                
                goto label_140359e31
            
        label_14035881c:
            arg8 = _mm_blend_ps(arg8, zmm5, 2)
            
            if (not(cond:22_1))
            label_140358829:
                arg5 = _mm_blend_ps(arg5, zmm10, 2)
                
                if (cond:27_1)
                    goto label_140359e37
                
                goto label_140358836
            
        label_140359e31:
            
            if (not(cond:26_1))
            label_140359e37:
                
                if (cond:31_1)
                    goto label_140358845
                
                goto label_140359e3d
            
        label_140358836:
            zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg9, 2)
            
            if (not(cond:30_1))
            label_140358845:
                arg6 = _mm_blend_ps(arg6, zmm11, 2)
                
                if (cond:35_1)
                    goto label_140359e43
                
                goto label_140358852
            
        label_140359e3d:
            
            if (cond:34_1)
            label_140358852:
                arg4 = _mm_blend_ps(arg4, zmm1, 2)
                
                if (not(cond:38_1))
                label_140358869:
                    arg11 = _mm_blend_ps(arg11, zmm3, 2)
                    
                    if (cond:43_1)
                        goto label_140359e4f
                    
                    goto label_140358874
            else
            label_140359e43:
                
                if (cond:39_1)
                    goto label_140358869
            
            bool cond:46_1
            bool cond:47_1
            bool cond:50_1
            bool cond:51_1
            bool cond:54_1
            bool cond:55_1
            bool cond:58_1
            bool cond:59_1
            bool cond:62_1
            bool cond:63_1
            bool cond:66_1
            bool cond:67_1
            
            if (not(cond:42_1))
            label_140359e4f:
                char temp10_1 = rbp_2 & 4
                cond:46_1 = temp10_1 != 0
                cond:47_1 = temp10_1 == 0
                cond:50_1 = temp10_1 == 0
                cond:51_1 = temp10_1 != 0
                cond:54_1 = temp10_1 != 0
                cond:55_1 = temp10_1 == 0
                cond:58_1 = temp10_1 == 0
                cond:59_1 = temp10_1 != 0
                cond:62_1 = temp10_1 != 0
                cond:63_1 = temp10_1 == 0
                cond:66_1 = temp10_1 == 0
                cond:67_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_140358885
                
                goto label_140359e59
            
        label_140358874:
            zmm15 = _mm_blend_epi16(zmm15, zmm7, 0xc)
            char temp9_1 = rbp_2 & 4
            cond:46_1 = temp9_1 != 0
            cond:47_1 = temp9_1 == 0
            cond:50_1 = temp9_1 == 0
            cond:51_1 = temp9_1 != 0
            cond:54_1 = temp9_1 != 0
            cond:55_1 = temp9_1 == 0
            cond:58_1 = temp9_1 == 0
            cond:59_1 = temp9_1 != 0
            cond:62_1 = temp9_1 != 0
            cond:63_1 = temp9_1 == 0
            cond:66_1 = temp9_1 == 0
            cond:67_1 = temp9_1 != 0
            
            if (temp9_1 != 0)
            label_140358885:
                arg8 = _mm_blend_ps(arg8, zmm5, 4)
                
                if (cond:47_1)
                    goto label_140359e5f
                
                goto label_140358892
            
        label_140359e59:
            
            if (not(cond:46_1))
            label_140359e5f:
                
                if (cond:51_1)
                    goto label_14035889f
                
                goto label_140359e65
            
        label_140358892:
            arg5 = _mm_blend_ps(arg5, zmm10, 4)
            
            if (not(cond:50_1))
            label_14035889f:
                zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg9, 4)
                
                if (cond:55_1)
                    goto label_140359e6b
                
                goto label_1403588ae
            
        label_140359e65:
            
            if (not(cond:54_1))
            label_140359e6b:
                
                if (cond:59_1)
                    goto label_1403588bb
                
                goto label_140359e71
            
        label_1403588ae:
            arg6 = _mm_blend_ps(arg6, zmm11, 4)
            
            if (not(cond:58_1))
            label_1403588bb:
                arg4 = _mm_blend_ps(arg4, zmm1, 4)
                
                if (cond:63_1)
                    goto label_140359e77
                
                goto label_1403588d2
            
        label_140359e71:
            
            if (not(cond:62_1))
            label_140359e77:
                
                if (cond:67_1)
                    goto label_1403588dd
                
                goto label_140359e7d
            
        label_1403588d2:
            arg11 = _mm_blend_ps(arg11, zmm3, 4)
            bool cond:70_1
            bool cond:71_1
            bool cond:74_1
            bool cond:75_1
            bool cond:78_1
            bool cond:79_1
            bool cond:82_1
            bool cond:83_1
            bool cond:86_1
            bool cond:87_1
            bool cond:90_1
            bool cond:91_1
            
            if (not(cond:66_1))
            label_1403588dd:
                zmm15 = _mm_blend_epi16(zmm15, zmm7, 0x30)
                char temp14_1 = rbp_2 & 8
                cond:70_1 = temp14_1 == 0
                cond:71_1 = temp14_1 != 0
                cond:74_1 = temp14_1 != 0
                cond:75_1 = temp14_1 == 0
                cond:78_1 = temp14_1 == 0
                cond:79_1 = temp14_1 != 0
                cond:82_1 = temp14_1 != 0
                cond:83_1 = temp14_1 == 0
                cond:86_1 = temp14_1 == 0
                cond:87_1 = temp14_1 != 0
                cond:90_1 = temp14_1 != 0
                cond:91_1 = temp14_1 == 0
                
                if (temp14_1 == 0)
                    goto label_140359e87
                
                goto label_1403588ee
            
        label_140359e7d:
            char temp13_1 = rbp_2 & 8
            cond:70_1 = temp13_1 == 0
            cond:71_1 = temp13_1 != 0
            cond:74_1 = temp13_1 != 0
            cond:75_1 = temp13_1 == 0
            cond:78_1 = temp13_1 == 0
            cond:79_1 = temp13_1 != 0
            cond:82_1 = temp13_1 != 0
            cond:83_1 = temp13_1 == 0
            cond:86_1 = temp13_1 == 0
            cond:87_1 = temp13_1 != 0
            cond:90_1 = temp13_1 != 0
            cond:91_1 = temp13_1 == 0
            
            if (temp13_1 == 0)
            label_140359e87:
                
                if (cond:71_1)
                    goto label_1403588fb
                
                goto label_140359e8d
            
        label_1403588ee:
            arg8 = _mm_blend_ps(arg8, zmm5, 8)
            
            if (not(cond:70_1))
            label_1403588fb:
                arg5 = _mm_blend_ps(arg5, zmm10, 8)
                
                if (cond:75_1)
                    goto label_140359e93
                
                goto label_140358908
            
        label_140359e8d:
            
            if (not(cond:74_1))
            label_140359e93:
                
                if (cond:79_1)
                    goto label_140358917
                
                goto label_140359e99
            
        label_140358908:
            zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg9, 8)
            
            if (not(cond:78_1))
            label_140358917:
                arg6 = _mm_blend_ps(arg6, zmm11, 8)
                
                if (cond:83_1)
                    goto label_140359e9f
                
                goto label_140358924
            
        label_140359e99:
            
            if (cond:82_1)
            label_140358924:
                arg4 = _mm_blend_ps(arg4, zmm1, 8)
                
                if (not(cond:86_1))
                label_14035893b:
                    arg11 = _mm_blend_ps(arg11, zmm3, 8)
                    
                    if (cond:91_1)
                        goto label_140359eab
                    
                    goto label_140358946
            else
            label_140359e9f:
                
                if (cond:87_1)
                    goto label_14035893b
            
            uint64_t rbx_2
            
            if (not(cond:90_1))
            label_140359eab:
                rbx_2 = zx.q(rbx_1 + 4)
                
                if (rbx_2.d s< rdx_1)
                    goto label_140358c60
                
                goto label_140359eb9
            
        label_140358946:
            zmm15 = _mm_blend_epi16(zmm15, zmm7, 0xc0)
            rbx_2 = zx.q(rbx_1 + 4)
            int32_t arg_c0[0x4]
            int32_t arg_210[0x4]
            float arg_220[0x4]
            float arg_230[0x4]
            int32_t arg_240[0x4]
            float arg_3b0[0x4]
            int32_t arg_3c0[0x4]
            int32_t arg_3d0[0x4]
            float arg_3e0[0x4]
            int32_t arg_3f0[0x4]
            int32_t arg_400[0x4]
            float arg_410[0x4]
            float arg_420[0x4]
            
            if (rbx_2.d s>= rdx_1)
            label_140359eb9:
                uint64_t i_1
                int32_t* rdi_1
                int32_t arg_330
                
                if (rbx_2.d s>= r10_1)
                    rdi_1 = arg64
                    i_1 = zx.q(arg12)
                    
                    if ((i_1.b & 1) != 0)
                        arg_330 = arg8[0]
                else
                    int32_t temp0_37[0x4] =
                        __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx_2.d), 0), data_142e11d00)
                    int64_t r11_1 = sx.q(rbx_2.d << 2)
                    zmm11 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(r10_1), 0), temp0_37)
                    uint32_t temp0_40 = _mm_movemask_ps(zmm11)
                    uint64_t r10_3 = zx.q(temp0_40) & 0xfffffff9
                    arg22 = arg8
                    
                    if (r10_3 != 9)
                        if ((temp0_40.b & 1) != 0)
                            arg_210[0] = *(arg20 + r11_1)
                        
                        if ((temp0_40.b & 2) == 0)
                            if ((temp0_40.b & 4) != 0)
                                goto label_14035bebb
                            
                            goto label_14035a45a
                        
                        arg_210[1] = *(arg20 + r11_1 + 4)
                        
                        if ((temp0_40.b & 4) == 0)
                        label_14035a45a:
                            
                            if ((temp0_40.b & 8) != 0)
                                arg_210[3] = *(arg20 + r11_1 + 0xc)
                        else
                        label_14035bebb:
                            arg_210[2] = *(arg20 + r11_1 + 8)
                            
                            if ((temp0_40.b & 8) != 0)
                                arg_210[3] = *(arg20 + r11_1 + 0xc)
                        
                        arg7 = arg_210
                    else
                        arg7 = *(arg20 + r11_1)
                    
                    zmm0 = __pmulld_xmmdq_memdq(temp0_37, data_143442c00) & zmm11
                    int64_t rcx_5 = sx.q(zmm0[0])
                    void* rdx_5 = &(*r9_1)[rcx_5]
                    zmm10 = (*r9_1)[rcx_5]
                    int64_t rcx_7 = sx.q(_mm_extract_epi32(zmm0, 1))
                    void* rsi_2 = &(*r9_1)[rcx_7]
                    int64_t rax_6 = sx.q(_mm_extract_epi32(zmm0, 2))
                    void* rbp_5 = &(*r9_1)[rax_6]
                    int64_t rbx_5 = sx.q(_mm_extract_epi32(zmm0, 3))
                    void* rdi_3 = &(*r9_1)[rbx_5]
                    float temp0_80[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm10, (*r9_1)[rcx_7], 0x10), 
                            (*r9_1)[rax_6], 0x20), 
                        (*r9_1)[rbx_5], 0x30)
                    zmm0 = data_142fc95e0 & zmm11
                    zmm13 = *(zx.q(zmm0[0]) + rdx_5)
                    int32_t* rax_8 = zx.q(_mm_extract_epi32(zmm0, 1))
                    int32_t* rcx_8 = zx.q(_mm_extract_epi32(zmm0, 2))
                    int32_t* rbx_6 = zx.q(_mm_extract_epi32(zmm0, 3))
                    zmm13 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm13, *(rax_8 + rsi_2), 0x10), 
                            *(rcx_8 + rbp_5), 0x20), 
                        *(rbx_6 + rdi_3), 0x30)
                    zmm0 = data_142fc95f0 & zmm11
                    arg8 = *(zx.q(zmm0[0]) + rdx_5)
                    uint64_t rax_10 = zx.q(_mm_extract_epi32(zmm0, 1))
                    uint64_t rcx_9 = zx.q(_mm_extract_epi32(zmm0, 2))
                    uint64_t rbx_7 = zx.q(_mm_extract_epi32(zmm0, 3))
                    arg8 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(arg8, *(rax_10 + rsi_2), 0x10), 
                            *(rcx_9 + rbp_5), 0x20), 
                        *(rbx_7 + rdi_3), 0x30)
                    zmm0 = data_143442650 & zmm11
                    zmm3 = *(zx.q(zmm0[0]) + rdx_5)
                    uint64_t rax_12 = zx.q(_mm_extract_epi32(zmm0, 1))
                    uint64_t rcx_10 = zx.q(_mm_extract_epi32(zmm0, 2))
                    uint64_t rbx_8 = zx.q(_mm_extract_epi32(zmm0, 3))
                    float temp0_98[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm3, *(rax_12 + rsi_2), 0x10), 
                            *(rcx_10 + rbp_5), 0x20), 
                        *(rbx_8 + rdi_3), 0x30)
                    zmm0 = data_143442660 & zmm11
                    zmm7 = *(zx.q(zmm0[0]) + rdx_5)
                    int32_t* rax_14 = zx.q(_mm_extract_epi32(zmm0, 1))
                    int32_t* rcx_11 = zx.q(_mm_extract_epi32(zmm0, 2))
                    int32_t* rbx_9 = zx.q(_mm_extract_epi32(zmm0, 3))
                    zmm7 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm7, *(rax_14 + rsi_2), 0x10), 
                            *(rcx_11 + rbp_5), 0x20), 
                        *(rbx_9 + rdi_3), 0x30)
                    zmm0 = data_143442670 & zmm11
                    zmm4 = *(zx.q(zmm0[0]) + rdx_5)
                    uint64_t rax_16 = zx.q(_mm_extract_epi32(zmm0, 1))
                    uint64_t rcx_12 = zx.q(_mm_extract_epi32(zmm0, 2))
                    uint64_t rbx_10 = zx.q(_mm_extract_epi32(zmm0, 3))
                    zmm4 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm4, *(rax_16 + rsi_2), 0x10), 
                            *(rcx_12 + rbp_5), 0x20), 
                        *(rbx_10 + rdi_3), 0x30)
                    zmm0 = data_143442700 & zmm11
                    uint64_t rax_17 = zx.q(zmm0[0])
                    uint64_t rcx_13 = zx.q(_mm_extract_epi32(zmm0, 1))
                    uint64_t rbx_11 = zx.q(_mm_extract_epi32(zmm0, 2))
                    uint32_t rax_18 = zx.d(*(rax_17 + rdx_5))
                    uint64_t rdx_6 = zx.q(_mm_extract_epi32(zmm0, 3))
                    int32_t temp0_116[0x4] = __pinsrb_xmmdq_memb_immb(
                        __pinsrb_xmmdq_memb_immb(
                            __pinsrb_xmmdq_memb_immb(zx.o(rax_18), *(rcx_13 + rsi_2), 4), 
                            *(rbx_11 + rbp_5), 8), 
                        *(rdx_6 + rdi_3), 0xc)
                    arg23 = zmm15
                    arg24 = arg4
                    
                    if (r10_3 != 9)
                        if ((temp0_40.b & 1) == 0)
                            if ((temp0_40.b & 2) != 0)
                                goto label_14035bf38
                            
                            goto label_14035a8fa
                        
                        arg_210[0] = *(arg25 + r11_1)
                        
                        if ((temp0_40.b & 2) != 0)
                        label_14035bf38:
                            arg_210[1] = *(arg25 + r11_1 + 4)
                            
                            if ((temp0_40.b & 4) == 0)
                                goto label_14035a904
                            
                            goto label_14035bf56
                        
                    label_14035a8fa:
                        
                        if ((temp0_40.b & 4) != 0)
                        label_14035bf56:
                            arg_210[2] = *(arg25 + r11_1 + 8)
                            
                            if ((temp0_40.b & 8) != 0)
                                arg_210[3] = *(arg25 + r11_1 + 0xc)
                        else
                        label_14035a904:
                            
                            if ((temp0_40.b & 8) != 0)
                                arg_210[3] = *(arg25 + r11_1 + 0xc)
                        
                        zmm1 = arg_210
                    else
                        zmm1 = *(arg25 + r11_1)
                    
                    zmm5 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(zmm5, zmm5), zmm1) &
                        not.o(_mm_cmpeq_epi32(temp0_116 & data_142ed6810, zx.o(0)) & not.o(zmm11))
                    uint32_t temp0_120 = _mm_movemask_ps(zmm5)
                    
                    if (temp0_120.b == 0)
                        rdi_1 = arg64
                        zmm15 = arg23
                        arg4 = arg24
                        arg8 = arg22
                        i_1 = zx.q(arg12)
                        
                        if ((i_1.b & 1) != 0)
                            arg_330 = arg8[0]
                    else
                        __return_addr.o = arg8
                        arg9 = zmm13
                        arg_c0 = zmm7
                        arg25.o = temp0_98
                        arg14 = temp0_80
                        arg26 = zmm4
                        arg21[0] = temp0_120
                        arg29 = arg5
                        arg18 = zmm12
                        arg13 = arg6
                        arg7 = _mm_slli_epi32(arg7, 6)
                        arg17 = zmm5
                        arg5 = _mm_srai_epi32(_mm_slli_epi32(zmm5, 0x1f), 0x1f)
                        arg7 &= arg5
                        int64_t rax_24 = sx.q(arg7[0])
                        void* rdx_7 = arg30 + rax_24
                        zmm12 = *(arg30 + rax_24)
                        int64_t r9_2 = sx.q(_mm_extract_epi32(arg7, 1))
                        void* rbp_6 = arg30 + r9_2
                        int64_t rcx_15 = sx.q(_mm_extract_epi32(arg7, 2))
                        void* rbx_12 = arg30 + rcx_15
                        int64_t rax_26 = sx.q(_mm_extract_epi32(arg7, 3))
                        void* rdi_5 = arg30 + rax_26
                        float temp0_129[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm12, *(arg30 + r9_2), 0x10), 
                                *(arg30 + rcx_15), 0x20), 
                            *(arg30 + rax_26), 0x30)
                        zmm0 = data_142fc95e0 & arg5
                        zmm15 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_28 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_16 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_4 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm15 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm15, *(rax_28 + rbp_6), 0x10), 
                                *(rcx_16 + rbx_12), 0x20), 
                            *(rsi_4 + rdi_5), 0x30)
                        zmm0 = data_142fc95f0 & arg5
                        arg8 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_30 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_17 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_5 = zx.q(_mm_extract_epi32(zmm0, 3))
                        arg8 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg8, *(rax_30 + rbp_6), 0x10), 
                                *(rcx_17 + rbx_12), 0x20), 
                            *(rsi_5 + rdi_5), 0x30)
                        zmm0 = data_143442650 & arg5
                        zmm3 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_32 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_18 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_6 = zx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_147[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm3, *(rax_32 + rbp_6), 0x10), 
                                *(rcx_18 + rbx_12), 0x20), 
                            *(rsi_6 + rdi_5), 0x30)
                        zmm0 = data_143442660 & arg5
                        zmm5 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_34 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_19 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_7 = zx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_153[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm5, *(rax_34 + rbp_6), 0x10), 
                                *(rcx_19 + rbx_12), 0x20), 
                            *(rsi_7 + rdi_5), 0x30)
                        zmm0 = data_143442670 & arg5
                        zmm1 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_36 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_20 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_8 = zx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_159[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_36 + rbp_6), 0x10), 
                                *(rcx_20 + rbx_12), 0x20), 
                            *(rsi_8 + rdi_5), 0x30)
                        zmm0 = data_143442700 & arg5
                        arg4 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_38 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_21 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_9 = zx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_165[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg4, *(rax_38 + rbp_6), 0x10), 
                                *(rcx_21 + rbx_12), 0x20), 
                            *(rsi_9 + rdi_5), 0x30)
                        zmm0 = data_1434b2e20 & arg5
                        arg6 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_40 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_22 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_10 = zx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_171[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg6, *(rax_40 + rbp_6), 0x10), 
                                *(rcx_22 + rbx_12), 0x20), 
                            *(rsi_10 + rdi_5), 0x30)
                        zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0].o & arg5
                        arg7 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_42 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_23 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_11 = zx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_177[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg7, *(rax_42 + rbp_6), 0x10), 
                                *(rcx_23 + rbx_12), 0x20), 
                            *(rsi_11 + rdi_5), 0x30)
                        zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[4].o & arg5
                        zmm10 = *(zx.q(zmm0[0]) + rdx_7)
                        uint64_t rax_44 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_24 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rsi_12 = zx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_183[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm10, *(rax_44 + rbp_6), 0x10), 
                                *(rcx_24 + rbx_12), 0x20), 
                            *(rsi_12 + rdi_5), 0x30)
                        zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[8].o & arg5
                        zmm7 = *(zx.q(zmm0[0]) + rdx_7)
                        int32_t* rax_46 = zx.q(_mm_extract_epi32(zmm0, 1))
                        int32_t* rcx_25 = zx.q(_mm_extract_epi32(zmm0, 2))
                        int32_t* rsi_13 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm7 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm7, *(rax_46 + rbp_6), 0x10), 
                                *(rcx_25 + rbx_12), 0x20), 
                            *(rsi_13 + rdi_5), 0x30)
                        zmm4 = (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o & arg5
                        zmm0 = *(zx.q(zmm4[0]) + rdx_7)
                        uint64_t rax_48 = zx.q(_mm_extract_epi32(zmm4, 1))
                        uint64_t rcx_26 = zx.q(_mm_extract_epi32(zmm4, 2))
                        uint64_t rsi_14 = zx.q(_mm_extract_epi32(zmm4, 3))
                        zmm0 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm0, *(rax_48 + rbp_6), 0x10), 
                                *(rcx_26 + rbx_12), 0x20), 
                            *(rsi_14 + rdi_5), 0x30)
                        zmm11 = (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o & arg5
                        zmm4 = *(zx.q(zmm11[0]) + rdx_7)
                        uint64_t rax_50 = zx.q(_mm_extract_epi32(zmm11, 1))
                        uint64_t rcx_27 = zx.q(_mm_extract_epi32(zmm11, 2))
                        uint64_t rsi_15 = zx.q(_mm_extract_epi32(zmm11, 3))
                        zmm4 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm4, *(rax_50 + rbp_6), 0x10), 
                                *(rcx_27 + rbx_12), 0x20), 
                            *(rsi_15 + rdi_5), 0x30)
                        zmm11 = (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o & arg5
                        arg10[0].q = zx.q(_mm_extract_epi32(zmm11, 1))
                        arg15[0].q = zx.q(_mm_extract_epi32(zmm11, 2))
                        uint64_t rax_53 = zx.q(zmm11[0])
                        arg16[0].q = zx.q(_mm_extract_epi32(zmm11, 3))
                        zmm11 = (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o & arg5
                        uint64_t r14_2 = zx.q(zmm11[0])
                        uint64_t r12_1 = zx.q(_mm_extract_epi32(zmm11, 1))
                        uint64_t r13_1 = zx.q(_mm_extract_epi32(zmm11, 2))
                        int32_t* r11_2 = zx.q(_mm_extract_epi32(zmm11, 3))
                        zmm11 = *(rax_53 + rdx_7)
                        arg5 &= (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
                        float (* r9_3)[0x4] = zx.q(arg5[0])
                        int32_t* rcx_29 = zx.q(_mm_extract_epi32(arg5, 1))
                        uint64_t r15_1 = zx.q(_mm_extract_epi32(arg5, 2))
                        int32_t* rax_54 = zx.q(_mm_extract_epi32(arg5, 3))
                        float arg_4e0[0x4] = temp0_129
                        int32_t arg_4f0[0x4] = zmm15
                        int32_t arg_500[0x4] = arg8
                        float arg_510[0x4] = temp0_147
                        float arg_520[0x4] = temp0_153
                        float arg_530[0x4] = temp0_159
                        float arg_540[0x4] = temp0_165
                        float arg_550[0x4] = temp0_171
                        float arg_560[0x4] = temp0_177
                        float arg_570[0x4] = temp0_183
                        int32_t arg_580[0x4] = zmm7
                        int32_t arg_590[0x4] = zmm0
                        int32_t arg_5a0[0x4] = zmm4
                        float arg_5b0[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm11, *(arg10[0].q + rbp_6), 0x10), 
                                *(arg15[0].q + rbx_12), 0x20), 
                            *(arg16[0].q + rdi_5), 0x30)
                        float arg_5c0[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(r14_2 + rdx_7), *(r12_1 + rbp_6), 
                                    0x10), 
                                *(r13_1 + rbx_12), 0x20), 
                            *(r11_2 + rdi_5), 0x30)
                        float arg_5d0[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(r9_3 + rdx_7), *(rcx_29 + rbp_6), 
                                    0x10), 
                                *(r15_1 + rbx_12), 0x20), 
                            *(rax_54 + rdi_5), 0x30)
                        arg10 = (*arg3)[9]
                        arg7 = (*arg3)[0xd]
                        zmm10 = (*arg3)[2]
                        arg8 = (*arg3)[3]
                        zmm11 = (*arg3)[6]
                        zmm13 = (*arg3)[0xa]
                        zmm7 = (*arg3)[0xe]
                        zmm0 = (*arg3)[7]
                        zmm1 = (*arg3)[0xb]
                        
                        for (int64_t i = 0; i != 0x100; i += 0x40)
                            arg5 = *arg3
                            zmm12 = arg3[1][0]
                            float temp0_220[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
                            zmm15 = *(&arg_4e0 + i)
                            zmm5 = *(&arg_4f0 + i)
                            zmm3 = *(&arg_500 + i)
                            arg4 = *(&arg_510 + i)
                            float temp0_222[0x4] = _mm_add_ps(_mm_mul_ps(temp0_220, zmm15), zx.o(0))
                            float temp0_225[0x4] = _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm5), temp0_222)
                            arg5 = arg3[2][0]
                            float temp0_228[0x4] = _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm3), temp0_225)
                            zmm4 = arg3[3][0]
                            *(&arg_210 + i) = _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), arg4), temp0_228)
                            zmm4 = (*arg3)[1]
                            arg5 = (*arg3)[5]
                            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm15), 
                                zx.o(0))
                            float temp0_237[0x4] =
                                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm5), zmm4)
                            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), zmm3), 
                                temp0_237)
                            *(&arg_220 + i) =
                                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg4), zmm4)
                            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm15), 
                                zx.o(0))
                            float temp0_249[0x4] =
                                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm5), zmm4)
                            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), zmm3), 
                                temp0_249)
                            *(&arg_230 + i) =
                                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), arg4), zmm4)
                            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), zmm15), 
                                zx.o(0))
                            float temp0_261[0x4] =
                                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm5), zmm4)
                            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3), 
                                temp0_261)
                            zmm3 = (*arg3)[0xf]
                            *(&arg_240 + i) =
                                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), arg4), zmm4)
                        
                        zmm15 = arg_210
                        zmm1 = arg_220
                        arg16 = zmm1
                        arg4 = arg_230
                        arg15 = arg4
                        zmm10 = arg25.o
                        float temp0_268[0x4] = _mm_add_ps(arg14, zmm10)
                        zmm0 = data_142d3f640
                        float temp0_269[0x4] = _mm_mul_ps(temp0_268, zmm0)
                        zmm4 = _mm_mul_ps(temp0_269, zmm15)
                        float temp0_271[0x4] = _mm_mul_ps(temp0_269, zmm1)
                        zmm1 = arg_c0
                        float temp0_273[0x4] = _mm_mul_ps(_mm_add_ps(arg9, zmm1), zmm0)
                        zmm11 = zmm0
                        float temp0_275[0x4] = _mm_add_ps(_mm_mul_ps(temp0_273, arg33), zmm4)
                        zmm4 = _mm_add_ps(_mm_mul_ps(temp0_273, arg34), temp0_271)
                        float temp0_278[0x4] = _mm_mul_ps(temp0_269, arg4)
                        arg10 = arg35
                        float temp0_280[0x4] = _mm_add_ps(_mm_mul_ps(temp0_273, arg35), temp0_278)
                        zmm0 = arg_240
                        float temp0_281[0x4] = _mm_mul_ps(temp0_269, zmm0)
                        float temp0_283[0x4] = _mm_add_ps(_mm_mul_ps(temp0_273, arg36), temp0_281)
                        arg4 = arg26
                        zmm7 = _mm_mul_ps(_mm_add_ps(__return_addr.o, arg4), zmm11)
                        float temp0_287[0x4] = _mm_add_ps(_mm_mul_ps(zmm7, arg37), temp0_275)
                        float temp0_289[0x4] = _mm_add_ps(_mm_mul_ps(zmm7, arg38), zmm4)
                        zmm4 = _mm_add_ps(_mm_mul_ps(zmm7, arg39), temp0_280)
                        zmm7 = _mm_mul_ps(zmm7, arg40)
                        zmm12 = __addps_xmmps_memps(temp0_287, arg41)
                        float temp0_294[0x4] = __addps_xmmps_memps(temp0_289, arg42)
                        zmm4 = __addps_xmmps_memps(zmm4, arg43)
                        zmm7 = __addps_xmmps_memps(_mm_add_ps(zmm7, temp0_283), arg44)
                        arg_210 = zmm15
                        arg_220 = arg16
                        arg_230 = arg15
                        arg_240 = zmm0
                        arg_3f0 = arg33
                        arg_400 = arg34
                        arg_410 = arg10
                        arg_420 = arg36
                        arg_3b0 = arg37
                        arg_3c0 = arg38
                        arg_3d0 = arg39
                        arg_3e0 = arg40
                        float temp0_298[0x4] = __subps_xmmps_memps(zmm1, arg9)
                        float temp0_299[0x4] = __subps_xmmps_memps(arg4, __return_addr.o)
                        float temp0_300[0x4] = __subps_xmmps_memps(zmm10, arg14)
                        zmm0 = data_142d3f640
                        float temp0_301[0x4] = _mm_mul_ps(temp0_298, zmm0)
                        float temp0_302[0x4] = _mm_mul_ps(temp0_300, zmm0)
                        float temp0_303[0x4] = _mm_mul_ps(temp0_299, zmm0)
                        float arg_4a0[0x4] = zmm12
                        float arg_4b0[0x4] = temp0_294
                        int32_t arg_4c0[0x4] = zmm4
                        int32_t arg_4d0[0x4] = zmm7
                        zmm15 = _mm_mul_ps(zmm15, temp0_302)
                        zmm0 = _mm_mul_ps(arg16, temp0_302)
                        float temp0_306[0x4] = __mulps_xmmps_memps(temp0_302, arg15)
                        zmm13 = _mm_mul_ps(arg33, temp0_301)
                        arg8 = _mm_mul_ps(arg34, temp0_301)
                        float temp0_309[0x4] = __mulps_xmmps_memps(temp0_301, arg10)
                        zmm7 = data_142d3f770
                        zmm15 = _mm_and_ps(zmm15, zmm7)
                        zmm13 = _mm_add_ps(_mm_and_ps(zmm13, zmm7), zmm15)
                        zmm0 = _mm_and_ps(zmm0, zmm7)
                        arg8 = _mm_add_ps(_mm_and_ps(arg8, zmm7), zmm0)
                        zmm10 = _mm_and_ps(temp0_306, zmm7)
                        float temp0_318[0x4] = _mm_add_ps(_mm_and_ps(temp0_309, zmm7), zmm10)
                        float temp0_319[0x4] = _mm_mul_ps(arg37, temp0_303)
                        float temp0_320[0x4] = _mm_mul_ps(arg38, temp0_303)
                        float temp0_321[0x4] = _mm_mul_ps(temp0_303, arg39)
                        float temp0_323[0x4] = _mm_add_ps(_mm_and_ps(temp0_319, zmm7), zmm13)
                        float temp0_325[0x4] = _mm_add_ps(_mm_and_ps(temp0_320, zmm7), arg8)
                        float temp0_327[0x4] = _mm_add_ps(_mm_and_ps(temp0_321, zmm7), temp0_318)
                        float temp0_328[0x4] = _mm_sub_ps(zmm12, temp0_323)
                        zmm13 = _mm_sub_ps(temp0_294, temp0_325)
                        float temp0_330[0x4] = _mm_sub_ps(zmm4, temp0_327)
                        zmm11 = _mm_add_ps(temp0_323, zmm12)
                        float temp0_332[0x4] = _mm_add_ps(temp0_325, temp0_294)
                        float temp0_333[0x4] = _mm_add_ps(temp0_327, zmm4)
                        arg4 = zx.o(0)
                        zmm3 = _mm_cmpeq_epi32(data_142ed6810 & arg23, zx.o(0))
                        zmm5 = _mm_slli_epi32(zmm3 & not.o(arg17), 0x1f)
                        char temp0_336 = _mm_movemask_ps(zmm5)
                        char rbp_7 = arg21[0].b
                        char rax_68
                        int32_t i_3
                        bool cond:111_1
                        bool cond:116_1
                        bool cond:117_1
                        bool cond:122_1
                        bool cond:123_1
                        bool cond:128_1
                        bool cond:129_1
                        bool cond:134_1
                        bool cond:135_1
                        bool cond:140_1
                        bool cond:141_1
                        
                        if (temp0_336 == 0)
                            rdi_1 = arg64
                            zmm5 = arg23
                            i_3 = arg12
                        label_14035c006:
                            zmm4 = _mm_slli_epi32(arg17 & zmm3, 0x1f)
                            
                            if (_mm_movemask_ps(zmm4) == 0)
                                zmm4 = zmm5
                                zmm11 = arg24
                                zmm7 = arg29
                                goto label_14035c270
                            
                            arg16 = arg4
                            char temp0_346 = _mm_movemask_ps(zmm3)
                            char temp19_1 = temp0_346 & 1
                            zmm7 = arg29
                            
                            if (temp19_1 == 0)
                                arg15 = temp0_332
                                arg8 = arg22
                                
                                if (temp19_1 != 0)
                                    goto label_14035cb37
                                
                                goto label_14035c021
                            
                            arg14 = _mm_blend_ps(arg14, temp0_328, 1)
                            arg15 = temp0_332
                            arg8 = arg22
                            
                            if (temp19_1 != 0)
                            label_14035cb37:
                                arg10 = _mm_blend_ps(arg10, zmm13, 1)
                                
                                if (temp19_1 == 0)
                                    goto label_14035c021_1
                                
                                goto label_14035cb4e
                            
                        label_14035c021:
                            
                            if (temp19_1 == 0)
                            label_14035c021_1:
                                
                                if (temp19_1 != 0)
                                    goto label_14035cb64
                                
                                goto label_14035c021_2
                            
                        label_14035cb4e:
                            arg9 = _mm_blend_ps(arg9, temp0_330, 1)
                            
                            if (temp19_1 != 0)
                            label_14035cb64:
                                __return_addr.o = _mm_blend_ps(__return_addr.o, zmm11, 1)
                                
                                if (temp19_1 == 0)
                                    goto label_14035c021_3
                                
                                goto label_14035cb6e
                            
                        label_14035c021_2:
                            
                            if (temp19_1 != 0)
                            label_14035cb6e:
                                zmm12 = __blendps_xmmdq_memdq_immb(zmm12, arg15, 1)
                                
                                if (temp19_1 != 0)
                                    zmm15 = _mm_blend_ps(zmm15, temp0_333, 1)
                            else
                            label_14035c021_3:
                                
                                if (temp19_1 != 0)
                                    zmm15 = _mm_blend_ps(zmm15, temp0_333, 1)
                            
                            arg17 = zmm4
                            zmm0 = temp0_333
                            zmm4 = zmm5
                            
                            if (temp19_1 != 0)
                                zmm4 = _mm_insert_epi32(zmm5, 1, 0)
                            
                            char temp23_1 = temp0_346 & 2
                            arg7 = zmm12
                            zmm12 = __return_addr.o
                            arg5 = arg9
                            arg4 = arg10
                            zmm3 = arg14
                            
                            if (temp23_1 == 0)
                                if (temp23_1 != 0)
                                    goto label_14035cb8f
                                
                                goto label_14035c085
                            
                            zmm3 = _mm_blend_ps(zmm3, temp0_328, 2)
                            
                            if (temp23_1 != 0)
                            label_14035cb8f:
                                arg4 = _mm_blend_ps(arg4, zmm13, 2)
                                
                                if (temp23_1 == 0)
                                    goto label_14035c085_1
                                
                                goto label_14035cb9c
                            
                        label_14035c085:
                            
                            if (temp23_1 == 0)
                            label_14035c085_1:
                                
                                if (temp23_1 != 0)
                                    goto label_14035cba9
                                
                                goto label_14035c085_2
                            
                        label_14035cb9c:
                            arg5 = _mm_blend_ps(arg5, temp0_330, 2)
                            
                            if (temp23_1 != 0)
                            label_14035cba9:
                                zmm12 = _mm_blend_ps(zmm12, zmm11, 2)
                                
                                if (temp23_1 == 0)
                                    goto label_14035c085_3
                                
                                goto label_14035cbb6
                            
                        label_14035c085_2:
                            
                            if (temp23_1 != 0)
                            label_14035cbb6:
                                arg7 = __blendps_xmmdq_memdq_immb(arg7, arg15, 2)
                                
                                if (temp23_1 != 0)
                                label_14035cbc5:
                                    zmm15 = _mm_blend_ps(zmm15, zmm0, 2)
                                    
                                    if (temp23_1 == 0)
                                        goto label_14035c0c9
                                    
                                    goto label_14035cbd2
                            else
                            label_14035c085_3:
                                
                                if (temp23_1 != 0)
                                    goto label_14035cbc5
                            
                            bool cond:184_1
                            bool cond:185_1
                            bool cond:189_1
                            bool cond:190_1
                            bool cond:195_1
                            bool cond:196_1
                            bool cond:201_1
                            bool cond:202_1
                            bool cond:207_1
                            bool cond:208_1
                            bool cond:213_1
                            bool cond:214_1
                            
                            if (temp23_1 == 0)
                            label_14035c0c9:
                                char temp29_1 = temp0_346 & 4
                                cond:184_1 = temp29_1 != 0
                                cond:185_1 = temp29_1 == 0
                                cond:189_1 = temp29_1 == 0
                                cond:190_1 = temp29_1 != 0
                                cond:195_1 = temp29_1 != 0
                                cond:196_1 = temp29_1 == 0
                                cond:201_1 = temp29_1 == 0
                                cond:202_1 = temp29_1 != 0
                                cond:207_1 = temp29_1 != 0
                                cond:208_1 = temp29_1 == 0
                                cond:213_1 = temp29_1 == 0
                                cond:214_1 = temp29_1 != 0
                                
                                if (temp29_1 != 0)
                                    goto label_14035cbe0
                                
                                goto label_14035c0d1
                            
                        label_14035cbd2:
                            zmm4 = _mm_insert_epi32(zmm4, 1, 1)
                            char temp28_1 = temp0_346 & 4
                            cond:184_1 = temp28_1 != 0
                            cond:185_1 = temp28_1 == 0
                            cond:189_1 = temp28_1 == 0
                            cond:190_1 = temp28_1 != 0
                            cond:195_1 = temp28_1 != 0
                            cond:196_1 = temp28_1 == 0
                            cond:201_1 = temp28_1 == 0
                            cond:202_1 = temp28_1 != 0
                            cond:207_1 = temp28_1 != 0
                            cond:208_1 = temp28_1 == 0
                            cond:213_1 = temp28_1 == 0
                            cond:214_1 = temp28_1 != 0
                            
                            if (temp28_1 != 0)
                            label_14035cbe0:
                                zmm3 = _mm_blend_ps(zmm3, temp0_328, 4)
                                
                                if (cond:185_1)
                                    goto label_14035c0d7
                                
                                goto label_14035cbed
                            
                        label_14035c0d1:
                            
                            if (not(cond:184_1))
                            label_14035c0d7:
                                
                                if (cond:190_1)
                                    goto label_14035cbfa
                                
                                goto label_14035c0dd
                            
                        label_14035cbed:
                            arg4 = _mm_blend_ps(arg4, zmm13, 4)
                            
                            if (not(cond:189_1))
                            label_14035cbfa:
                                arg5 = _mm_blend_ps(arg5, temp0_330, 4)
                                
                                if (cond:196_1)
                                    goto label_14035c0e3
                                
                                goto label_14035cc07
                            
                        label_14035c0dd:
                            
                            if (not(cond:195_1))
                            label_14035c0e3:
                                
                                if (cond:202_1)
                                    goto label_14035cc14
                                
                                goto label_14035c0e9
                            
                        label_14035cc07:
                            zmm12 = _mm_blend_ps(zmm12, zmm11, 4)
                            
                            if (not(cond:201_1))
                            label_14035cc14:
                                arg7 = __blendps_xmmdq_memdq_immb(arg7, arg15, 4)
                                
                                if (cond:208_1)
                                    goto label_14035c0ef
                                
                                goto label_14035cc23
                            
                        label_14035c0e9:
                            
                            if (not(cond:207_1))
                            label_14035c0ef:
                                
                                if (cond:214_1)
                                    goto label_14035cc30
                                
                                goto label_14035c0f5
                            
                        label_14035cc23:
                            zmm15 = _mm_blend_ps(zmm15, zmm0, 4)
                            bool cond:217_1
                            bool cond:218_1
                            bool cond:221_1
                            bool cond:222_1
                            bool cond:225_1
                            bool cond:226_1
                            bool cond:229_1
                            bool cond:230_1
                            bool cond:233_1
                            bool cond:234_1
                            bool cond:237_1
                            bool cond:238_1
                            
                            if (not(cond:213_1))
                            label_14035cc30:
                                zmm4 = _mm_insert_epi32(zmm4, 1, 2)
                                char temp33_1 = temp0_346 & 8
                                cond:217_1 = temp33_1 == 0
                                cond:218_1 = temp33_1 != 0
                                cond:221_1 = temp33_1 != 0
                                cond:222_1 = temp33_1 == 0
                                cond:225_1 = temp33_1 == 0
                                cond:226_1 = temp33_1 != 0
                                cond:229_1 = temp33_1 != 0
                                cond:230_1 = temp33_1 == 0
                                cond:233_1 = temp33_1 == 0
                                cond:234_1 = temp33_1 != 0
                                cond:237_1 = temp33_1 == 0
                                cond:238_1 = temp33_1 != 0
                                
                                if (temp33_1 == 0)
                                    goto label_14035c0fd
                                
                                goto label_14035cc3e
                            
                        label_14035c0f5:
                            char temp32_1 = temp0_346 & 8
                            cond:217_1 = temp32_1 == 0
                            cond:218_1 = temp32_1 != 0
                            cond:221_1 = temp32_1 != 0
                            cond:222_1 = temp32_1 == 0
                            cond:225_1 = temp32_1 == 0
                            cond:226_1 = temp32_1 != 0
                            cond:229_1 = temp32_1 != 0
                            cond:230_1 = temp32_1 == 0
                            cond:233_1 = temp32_1 == 0
                            cond:234_1 = temp32_1 != 0
                            cond:237_1 = temp32_1 == 0
                            cond:238_1 = temp32_1 != 0
                            
                            if (temp32_1 == 0)
                            label_14035c0fd:
                                
                                if (cond:218_1)
                                    goto label_14035cc4b
                                
                                goto label_14035c103
                            
                        label_14035cc3e:
                            zmm3 = _mm_blend_ps(zmm3, temp0_328, 8)
                            
                            if (not(cond:217_1))
                            label_14035cc4b:
                                arg4 = _mm_blend_ps(arg4, zmm13, 8)
                                
                                if (cond:222_1)
                                    goto label_14035c109
                                
                                goto label_14035cc58
                            
                        label_14035c103:
                            
                            if (not(cond:221_1))
                            label_14035c109:
                                
                                if (cond:226_1)
                                    goto label_14035cc65
                                
                                goto label_14035c10f
                            
                        label_14035cc58:
                            arg5 = _mm_blend_ps(arg5, temp0_330, 8)
                            
                            if (not(cond:225_1))
                            label_14035cc65:
                                zmm12 = _mm_blend_ps(zmm12, zmm11, 8)
                                
                                if (cond:230_1)
                                    goto label_14035c115
                                
                                goto label_14035cc72
                            
                        label_14035c10f:
                            
                            if (not(cond:229_1))
                            label_14035c115:
                                
                                if (cond:234_1)
                                    goto label_14035cc81
                                
                                goto label_14035c11b
                            
                        label_14035cc72:
                            arg7 = __blendps_xmmdq_memdq_immb(arg7, arg15, 8)
                            
                            if (cond:233_1)
                            label_14035c11b:
                                
                                if (not(cond:237_1))
                                    zmm4 = _mm_insert_epi32(zmm4, 1, 3)
                            else
                            label_14035cc81:
                                zmm15 = _mm_blend_ps(zmm15, zmm0, 8)
                                
                                if (cond:238_1)
                                    zmm4 = _mm_insert_epi32(zmm4, 1, 3)
                            
                            _mm_movemask_ps(_mm_srai_epi32(arg17, 0x1f) | arg16)
                            zmm11 = arg24
                            rax_68 = rbp_7
                            char temp36_1 = rax_68 & 1
                            cond:111_1 = temp36_1 != 0
                            cond:116_1 = temp36_1 == 0
                            cond:117_1 = temp36_1 != 0
                            cond:122_1 = temp36_1 != 0
                            cond:123_1 = temp36_1 == 0
                            cond:128_1 = temp36_1 == 0
                            cond:129_1 = temp36_1 != 0
                            cond:134_1 = temp36_1 != 0
                            cond:135_1 = temp36_1 == 0
                            cond:140_1 = temp36_1 == 0
                            cond:141_1 = temp36_1 != 0
                            
                            if (temp36_1 != 0)
                                arg8 = _mm_blend_ps(arg8, zmm3, 1)
                        else
                            arg14 = _mm_min_ps(arg22, temp0_328)
                            zmm7 = arg29
                            arg10 = _mm_min_ps(zmm7, zmm13)
                            arg9 = _mm_min_ps(arg18, temp0_330)
                            __return_addr.o = _mm_max_ps(arg13, zmm11)
                            zmm0 = zmm11
                            zmm11 = arg24
                            zmm12 = _mm_max_ps(zmm11, temp0_332)
                            zmm15 = _mm_max_ps(arg11, temp0_333)
                            
                            if (rbp_7 != temp0_336)
                                arg4 = _mm_srai_epi32(zmm5, 0x1f)
                                rdi_1 = arg64
                                zmm5 = arg23
                                i_3 = arg12
                                zmm11 = zmm0
                                goto label_14035c006
                            
                            zmm5 = arg23
                            zmm4 = arg23
                            rdi_1 = arg64
                            i_3 = arg12
                        label_14035c270:
                            arg8 = arg22
                            arg7 = zmm12
                            zmm12 = __return_addr.o
                            arg5 = arg9
                            arg4 = arg10
                            zmm3 = arg14
                            rax_68 = rbp_7
                            char temp20_1 = rax_68 & 1
                            cond:111_1 = temp20_1 != 0
                            cond:116_1 = temp20_1 == 0
                            cond:117_1 = temp20_1 != 0
                            cond:122_1 = temp20_1 != 0
                            cond:123_1 = temp20_1 == 0
                            cond:128_1 = temp20_1 == 0
                            cond:129_1 = temp20_1 != 0
                            cond:134_1 = temp20_1 != 0
                            cond:135_1 = temp20_1 == 0
                            cond:140_1 = temp20_1 == 0
                            cond:141_1 = temp20_1 != 0
                            
                            if (temp20_1 != 0)
                                arg8 = _mm_blend_ps(arg8, zmm3, 1)
                        
                        if (not(cond:111_1))
                            if (cond:117_1)
                                goto label_14035c391
                            
                            goto label_14035c2aa
                        
                        zmm7 = _mm_blend_ps(zmm7, arg4, 1)
                        
                        if (not(cond:116_1))
                        label_14035c391:
                            arg18 = _mm_blend_ps(arg18, arg5, 1)
                            
                            if (cond:123_1)
                                goto label_14035c2b0
                            
                            goto label_14035c3ab
                        
                    label_14035c2aa:
                        
                        if (not(cond:122_1))
                        label_14035c2b0:
                            
                            if (cond:129_1)
                                goto label_14035c3b6
                            
                            goto label_14035c2b6
                        
                    label_14035c3ab:
                        arg13 = _mm_blend_ps(arg13, zmm12, 1)
                        
                        if (not(cond:128_1))
                        label_14035c3b6:
                            zmm11 = _mm_blend_ps(zmm11, arg7, 1)
                            
                            if (cond:135_1)
                                goto label_14035c2bc
                            
                            goto label_14035c3cf
                        
                    label_14035c2b6:
                        
                        if (not(cond:134_1))
                        label_14035c2bc:
                            
                            if (cond:141_1)
                                goto label_14035c3da
                            
                            goto label_14035c2c2
                        
                    label_14035c3cf:
                        arg11 = _mm_blend_ps(arg11, zmm15, 1)
                        bool cond:146_1
                        bool cond:147_1
                        bool cond:152_1
                        bool cond:153_1
                        bool cond:158_1
                        bool cond:159_1
                        bool cond:164_1
                        bool cond:165_1
                        bool cond:170_1
                        bool cond:171_1
                        bool cond:176_1
                        bool cond:177_1
                        
                        if (not(cond:140_1))
                        label_14035c3da:
                            zmm5 = _mm_blend_epi16(zmm5, zmm4, 3)
                            char temp25_1 = rax_68 & 2
                            cond:146_1 = temp25_1 == 0
                            cond:147_1 = temp25_1 != 0
                            cond:152_1 = temp25_1 != 0
                            cond:153_1 = temp25_1 == 0
                            cond:158_1 = temp25_1 == 0
                            cond:159_1 = temp25_1 != 0
                            cond:164_1 = temp25_1 != 0
                            cond:165_1 = temp25_1 == 0
                            cond:170_1 = temp25_1 == 0
                            cond:171_1 = temp25_1 != 0
                            cond:176_1 = temp25_1 != 0
                            cond:177_1 = temp25_1 == 0
                            
                            if (temp25_1 == 0)
                                goto label_14035c2ca
                            
                            goto label_14035c3e8
                        
                    label_14035c2c2:
                        char temp24_1 = rax_68 & 2
                        cond:146_1 = temp24_1 == 0
                        cond:147_1 = temp24_1 != 0
                        cond:152_1 = temp24_1 != 0
                        cond:153_1 = temp24_1 == 0
                        cond:158_1 = temp24_1 == 0
                        cond:159_1 = temp24_1 != 0
                        cond:164_1 = temp24_1 != 0
                        cond:165_1 = temp24_1 == 0
                        cond:170_1 = temp24_1 == 0
                        cond:171_1 = temp24_1 != 0
                        cond:176_1 = temp24_1 != 0
                        cond:177_1 = temp24_1 == 0
                        
                        if (temp24_1 == 0)
                        label_14035c2ca:
                            
                            if (cond:147_1)
                                goto label_14035c3f5
                            
                            goto label_14035c2d0
                        
                    label_14035c3e8:
                        arg8 = _mm_blend_ps(arg8, zmm3, 2)
                        
                        if (not(cond:146_1))
                        label_14035c3f5:
                            zmm7 = _mm_blend_ps(zmm7, arg4, 2)
                            
                            if (cond:153_1)
                                goto label_14035c2d6
                            
                            goto label_14035c40f
                        
                    label_14035c2d0:
                        
                        if (not(cond:152_1))
                        label_14035c2d6:
                            
                            if (cond:159_1)
                                goto label_14035c429
                            
                            goto label_14035c2dc
                        
                    label_14035c40f:
                        arg18 = _mm_blend_ps(arg18, arg5, 2)
                        
                        if (not(cond:158_1))
                        label_14035c429:
                            arg13 = _mm_blend_ps(arg13, zmm12, 2)
                            
                            if (cond:165_1)
                                goto label_14035c2e2
                            
                            goto label_14035c434
                        
                    label_14035c2dc:
                        
                        if (cond:164_1)
                        label_14035c434:
                            zmm11 = _mm_blend_ps(zmm11, arg7, 2)
                            
                            if (not(cond:170_1))
                            label_14035c44d:
                                arg11 = _mm_blend_ps(arg11, zmm15, 2)
                                
                                if (cond:177_1)
                                    goto label_14035c2ee
                                
                                goto label_14035c458
                        else
                        label_14035c2e2:
                            
                            if (cond:171_1)
                                goto label_14035c44d
                        
                        bool cond:182_1
                        bool cond:183_1
                        bool cond:187_1
                        bool cond:188_1
                        bool cond:193_1
                        bool cond:194_1
                        bool cond:199_1
                        bool cond:200_1
                        bool cond:205_1
                        bool cond:206_1
                        bool cond:211_1
                        bool cond:212_1
                        
                        if (not(cond:176_1))
                        label_14035c2ee:
                            char temp31_1 = rax_68 & 4
                            cond:182_1 = temp31_1 != 0
                            cond:183_1 = temp31_1 == 0
                            cond:187_1 = temp31_1 == 0
                            cond:188_1 = temp31_1 != 0
                            cond:193_1 = temp31_1 != 0
                            cond:194_1 = temp31_1 == 0
                            cond:199_1 = temp31_1 == 0
                            cond:200_1 = temp31_1 != 0
                            cond:205_1 = temp31_1 != 0
                            cond:206_1 = temp31_1 == 0
                            cond:211_1 = temp31_1 == 0
                            cond:212_1 = temp31_1 != 0
                            
                            if (temp31_1 != 0)
                                goto label_14035c466
                            
                            goto label_14035c2f6
                        
                    label_14035c458:
                        zmm5 = _mm_blend_epi16(zmm5, zmm4, 0xc)
                        char temp30_1 = rax_68 & 4
                        cond:182_1 = temp30_1 != 0
                        cond:183_1 = temp30_1 == 0
                        cond:187_1 = temp30_1 == 0
                        cond:188_1 = temp30_1 != 0
                        cond:193_1 = temp30_1 != 0
                        cond:194_1 = temp30_1 == 0
                        cond:199_1 = temp30_1 == 0
                        cond:200_1 = temp30_1 != 0
                        cond:205_1 = temp30_1 != 0
                        cond:206_1 = temp30_1 == 0
                        cond:211_1 = temp30_1 == 0
                        cond:212_1 = temp30_1 != 0
                        
                        if (temp30_1 != 0)
                        label_14035c466:
                            arg8 = _mm_blend_ps(arg8, zmm3, 4)
                            
                            if (cond:183_1)
                                goto label_14035c2fc
                            
                            goto label_14035c473
                        
                    label_14035c2f6:
                        
                        if (not(cond:182_1))
                        label_14035c2fc:
                            
                            if (cond:188_1)
                                goto label_14035c48d
                            
                            goto label_14035c302
                        
                    label_14035c473:
                        zmm7 = _mm_blend_ps(zmm7, arg4, 4)
                        
                        if (not(cond:187_1))
                        label_14035c48d:
                            arg18 = _mm_blend_ps(arg18, arg5, 4)
                            
                            if (cond:194_1)
                                goto label_14035c308
                            
                            goto label_14035c4a7
                        
                    label_14035c302:
                        
                        if (not(cond:193_1))
                        label_14035c308:
                            
                            if (cond:200_1)
                                goto label_14035c4b2
                            
                            goto label_14035c30e
                        
                    label_14035c4a7:
                        arg13 = _mm_blend_ps(arg13, zmm12, 4)
                        
                        if (not(cond:199_1))
                        label_14035c4b2:
                            zmm11 = _mm_blend_ps(zmm11, arg7, 4)
                            
                            if (cond:206_1)
                                goto label_14035c314
                            
                            goto label_14035c4cb
                        
                    label_14035c30e:
                        
                        if (not(cond:205_1))
                        label_14035c314:
                            
                            if (cond:212_1)
                                goto label_14035c4d6
                            
                            goto label_14035c31a
                        
                    label_14035c4cb:
                        arg11 = _mm_blend_ps(arg11, zmm15, 4)
                        bool cond:215_1
                        bool cond:216_1
                        bool cond:219_1
                        bool cond:220_1
                        bool cond:223_1
                        bool cond:224_1
                        bool cond:227_1
                        bool cond:228_1
                        bool cond:231_1
                        bool cond:232_1
                        bool cond:235_1
                        bool cond:236_1
                        
                        if (not(cond:211_1))
                        label_14035c4d6:
                            zmm5 = _mm_blend_epi16(zmm5, zmm4, 0x30)
                            char temp35_1 = rax_68 & 8
                            cond:215_1 = temp35_1 == 0
                            cond:216_1 = temp35_1 != 0
                            cond:219_1 = temp35_1 != 0
                            cond:220_1 = temp35_1 == 0
                            cond:223_1 = temp35_1 == 0
                            cond:224_1 = temp35_1 != 0
                            cond:227_1 = temp35_1 != 0
                            cond:228_1 = temp35_1 == 0
                            cond:231_1 = temp35_1 == 0
                            cond:232_1 = temp35_1 != 0
                            cond:235_1 = temp35_1 == 0
                            cond:236_1 = temp35_1 != 0
                            
                            if (temp35_1 == 0)
                                goto label_14035c322
                            
                            goto label_14035c4e4
                        
                    label_14035c31a:
                        char temp34_1 = rax_68 & 8
                        cond:215_1 = temp34_1 == 0
                        cond:216_1 = temp34_1 != 0
                        cond:219_1 = temp34_1 != 0
                        cond:220_1 = temp34_1 == 0
                        cond:223_1 = temp34_1 == 0
                        cond:224_1 = temp34_1 != 0
                        cond:227_1 = temp34_1 != 0
                        cond:228_1 = temp34_1 == 0
                        cond:231_1 = temp34_1 == 0
                        cond:232_1 = temp34_1 != 0
                        cond:235_1 = temp34_1 == 0
                        cond:236_1 = temp34_1 != 0
                        
                        if (temp34_1 == 0)
                        label_14035c322:
                            
                            if (cond:216_1)
                                goto label_14035c4f1
                            
                            goto label_14035c328
                        
                    label_14035c4e4:
                        arg8 = _mm_blend_ps(arg8, zmm3, 8)
                        
                        if (not(cond:215_1))
                        label_14035c4f1:
                            zmm7 = _mm_blend_ps(zmm7, arg4, 8)
                            
                            if (cond:220_1)
                                goto label_14035c32e
                            
                            goto label_14035c50b
                        
                    label_14035c328:
                        
                        if (not(cond:219_1))
                        label_14035c32e:
                            
                            if (cond:224_1)
                                goto label_14035c525
                            
                            goto label_14035c334
                        
                    label_14035c50b:
                        arg18 = _mm_blend_ps(arg18, arg5, 8)
                        
                        if (not(cond:223_1))
                        label_14035c525:
                            arg13 = _mm_blend_ps(arg13, zmm12, 8)
                            arg4 = zmm11
                            arg5 = zmm7
                            
                            if (cond:228_1)
                                goto label_14035c341
                            
                            goto label_14035c537
                        
                    label_14035c334:
                        arg4 = zmm11
                        arg5 = zmm7
                        
                        if (cond:227_1)
                        label_14035c537:
                            arg4 = _mm_blend_ps(arg4, arg7, 8)
                            arg6 = arg13
                            
                            if (not(cond:231_1))
                            label_14035c556:
                                arg11 = _mm_blend_ps(arg11, zmm15, 8)
                                
                                if (cond:236_1)
                                    goto label_14035c358
                                
                                goto label_14035c561
                        else
                        label_14035c341:
                            arg6 = arg13
                            
                            if (cond:232_1)
                                goto label_14035c556
                        
                        if (cond:235_1)
                        label_14035c561:
                            zmm12 = arg18
                            zmm15 = zmm5
                            i_1 = zx.q(i_3)
                            
                            if ((i_1.b & 1) != 0)
                                arg_330 = arg8[0]
                        else
                        label_14035c358:
                            zmm15 = _mm_blend_epi16(zmm5, zmm4, 0xc0)
                            zmm12 = arg18
                            i_1 = zx.q(i_3)
                            
                            if ((i_1.b & 1) != 0)
                                arg_330 = arg8[0]
                
                if ((i_1.b & 2) == 0)
                    if ((i_1.b & 4) != 0)
                        goto label_14035a232
                    
                    goto label_14035a00d
                
                int32_t arg_34c = __extractps_memd_xmmps_immb(arg8, 1)
                
                if ((i_1.b & 4) != 0)
                label_14035a232:
                    int32_t arg_368 = __extractps_memd_xmmps_immb(arg8, 2)
                    
                    if ((i_1.b & 8) == 0)
                        goto label_14035a015
                    
                    goto label_14035a246
                
            label_14035a00d:
                
                if ((i_1.b & 8) == 0)
                label_14035a015:
                    
                    if ((i_1.b & 1) != 0)
                        goto label_14035a25a
                    
                    goto label_14035a01d
                
            label_14035a246:
                int32_t arg_384 = __extractps_memd_xmmps_immb(arg8, 3)
                float arg_334
                
                if ((i_1.b & 1) != 0)
                label_14035a25a:
                    arg_334 = arg5[0]
                    
                    if ((i_1.b & 2) == 0)
                        goto label_14035a025
                    
                    goto label_14035a26b
                
            label_14035a01d:
                
                if ((i_1.b & 2) == 0)
                label_14035a025:
                    
                    if ((i_1.b & 4) != 0)
                        goto label_14035a27e
                    
                    goto label_14035a02d
                
            label_14035a26b:
                int32_t arg_350 = __extractps_memd_xmmps_immb(arg5, 1)
                
                if ((i_1.b & 4) != 0)
                label_14035a27e:
                    int32_t arg_36c = __extractps_memd_xmmps_immb(arg5, 2)
                    
                    if ((i_1.b & 8) == 0)
                        goto label_14035a035
                    
                    goto label_14035a291
                
            label_14035a02d:
                
                if ((i_1.b & 8) == 0)
                label_14035a035:
                    
                    if ((i_1.b & 1) != 0)
                        goto label_14035a2a4
                    
                    goto label_14035a03d
                
            label_14035a291:
                int32_t arg_388 = __extractps_memd_xmmps_immb(arg5, 3)
                float arg_338
                
                if ((i_1.b & 1) != 0)
                label_14035a2a4:
                    arg_338 = zmm12[0]
                    
                    if ((i_1.b & 2) == 0)
                        goto label_14035a045
                    
                    goto label_14035a2b6
                
            label_14035a03d:
                
                if ((i_1.b & 2) == 0)
                label_14035a045:
                    
                    if ((i_1.b & 4) != 0)
                        goto label_14035a2ca
                    
                    goto label_14035a04d
                
            label_14035a2b6:
                int32_t arg_354 = __extractps_memd_xmmps_immb(zmm12, 1)
                
                if ((i_1.b & 4) != 0)
                label_14035a2ca:
                    int32_t arg_370 = __extractps_memd_xmmps_immb(zmm12, 2)
                    
                    if ((i_1.b & 8) == 0)
                        goto label_14035a055
                    
                    goto label_14035a2de
                
            label_14035a04d:
                
                if ((i_1.b & 8) == 0)
                label_14035a055:
                    
                    if ((i_1.b & 1) != 0)
                        goto label_14035a2f2
                    
                    goto label_14035a05d
                
            label_14035a2de:
                int32_t arg_38c = __extractps_memd_xmmps_immb(zmm12, 3)
                float arg_33c
                
                if ((i_1.b & 1) != 0)
                label_14035a2f2:
                    arg_33c = arg6[0]
                    
                    if ((i_1.b & 2) == 0)
                        goto label_14035a065
                    
                    goto label_14035a304
                
            label_14035a05d:
                
                if ((i_1.b & 2) == 0)
                label_14035a065:
                    
                    if ((i_1.b & 4) != 0)
                        goto label_14035a318
                    
                    goto label_14035a06d
                
            label_14035a304:
                int32_t arg_358 = __extractps_memd_xmmps_immb(arg6, 1)
                
                if ((i_1.b & 4) != 0)
                label_14035a318:
                    int32_t arg_374 = __extractps_memd_xmmps_immb(arg6, 2)
                    
                    if ((i_1.b & 8) == 0)
                        goto label_14035a075
                    
                    goto label_14035a32c
                
            label_14035a06d:
                
                if ((i_1.b & 8) == 0)
                label_14035a075:
                    
                    if ((i_1.b & 1) != 0)
                        goto label_14035a340
                    
                    goto label_14035a07d
                
            label_14035a32c:
                int32_t arg_390 = __extractps_memd_xmmps_immb(arg6, 3)
                float arg_340
                
                if ((i_1.b & 1) != 0)
                label_14035a340:
                    arg_340 = arg4[0]
                    
                    if ((i_1.b & 2) == 0)
                        goto label_14035a085
                    
                    goto label_14035a351
                
            label_14035a07d:
                
                if ((i_1.b & 2) == 0)
                label_14035a085:
                    
                    if ((i_1.b & 4) != 0)
                        goto label_14035a364
                    
                    goto label_14035a08d
                
            label_14035a351:
                int32_t arg_35c = __extractps_memd_xmmps_immb(arg4, 1)
                
                if ((i_1.b & 4) != 0)
                label_14035a364:
                    int32_t arg_378 = __extractps_memd_xmmps_immb(arg4, 2)
                    
                    if ((i_1.b & 8) == 0)
                        goto label_14035a095
                    
                    goto label_14035a377
                
            label_14035a08d:
                
                if ((i_1.b & 8) == 0)
                label_14035a095:
                    
                    if ((i_1.b & 1) != 0)
                        goto label_14035a390
                    
                    goto label_14035a09d
                
            label_14035a377:
                int32_t arg_394 = __extractps_memd_xmmps_immb(arg4, 3)
                int32_t arg_344
                
                if ((i_1.b & 1) != 0)
                label_14035a390:
                    arg_344 = arg11[0]
                    
                    if ((i_1.b & 2) == 0)
                        goto label_14035a0a5
                    
                    goto label_14035a3a7
                
            label_14035a09d:
                
                if ((i_1.b & 2) == 0)
                label_14035a0a5:
                    
                    if ((i_1.b & 4) != 0)
                        goto label_14035a3c0
                    
                    goto label_14035a0ad
                
            label_14035a3a7:
                int32_t arg_360 = __pextrd_memd_xmmdq_immb(arg11, 1)
                
                if ((i_1.b & 4) != 0)
                label_14035a3c0:
                    int32_t arg_37c = __pextrd_memd_xmmdq_immb(arg11, 2)
                    
                    if ((i_1.b & 8) == 0)
                        goto label_14035a0b5
                    
                    goto label_14035a3d9
                
            label_14035a0ad:
                
                if ((i_1.b & 8) == 0)
                label_14035a0b5:
                    
                    if ((i_1.b & 1) != 0)
                        goto label_14035a3ec
                    
                    goto label_14035a0bd
                
            label_14035a3d9:
                int32_t arg_398 = __pextrd_memd_xmmdq_immb(arg11, 3)
                char arg_348[0x4]
                
                if ((i_1.b & 1) != 0)
                label_14035a3ec:
                    arg_348[0] = __pextrb_memb_xmmdq_immb(zmm15, 0)
                    
                    if ((i_1.b & 2) == 0)
                        goto label_14035a0c5
                    
                    goto label_14035a400
                
            label_14035a0bd:
                
                if ((i_1.b & 2) == 0)
                label_14035a0c5:
                    
                    if ((i_1.b & 4) != 0)
                        goto label_14035a414
                    
                    goto label_14035a0cd
                
            label_14035a400:
                uint8_t arg_364 = __pextrb_memb_xmmdq_immb(zmm15, 4)
                uint8_t arg_39c
                
                if ((i_1.b & 4) == 0)
                label_14035a0cd:
                    
                    if ((i_1.b & 8) != 0)
                        arg_39c = __pextrb_memb_xmmdq_immb(zmm15, 0xc)
                else
                label_14035a414:
                    uint8_t arg_380 = __pextrb_memb_xmmdq_immb(zmm15, 8)
                    
                    if ((i_1.b & 8) != 0)
                        arg_39c = __pextrb_memb_xmmdq_immb(zmm15, 0xc)
                
                do
                    uint64_t rcx_1
                    uint64_t rflags_1
                    
                    if (i_1 == 0)
                        rcx_1 = 0x40
                    else
                        rcx_1, rflags_1 = _bit_scan_forward(i_1)
                    i_1 &= not.q(1 << (rcx_1 u% 0x40))
                    uint64_t rdx_4 = rcx_1 * 0x1c
                    char rbx_4 = rdi_1[6].b
                    char rcx_2 = arg_348[rdx_4]
                    
                    if (rbx_4 != 0 && rcx_2 != 0)
                        arg4 = *(&__return_addr + rdx_4 + 0x330)
                        zmm0 = __insertps_xmmps_memd_immb(zx.o(*rdi_1), rdi_1[2], 0x20)
                        float temp0_44[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(arg4, (&arg_334)[rcx_1 * 7], 0x10), 
                            (&arg_338)[rcx_1 * 7], 0x20)
                        zmm1 = zx.o(*(rdi_1 + 0xc))
                        zmm0 = _mm_min_ps(zmm0, temp0_44)
                        float temp0_46[0x4] = __insertps_xmmps_memd_immb(zmm1, rdi_1[5], 0x20)
                        zmm3 = _mm_movehdup_ps(zmm0)
                        zmm4 = __insertps_xmmps_memd_immb(zx.o(*(&arg_33c + rdx_4)), 
                            (&arg_344)[rcx_1 * 7], 0x20)
                        arg4 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
                        zmm1 = _mm_max_ps(temp0_46, zmm4)
                        zmm4 = _mm_movehdup_ps(zmm1)
                        zmm5 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
                    else if (rcx_2 == 0)
                        rbx_4 = rdi_1[6].b
                        zmm5 = rdi_1[5]
                        zmm4 = rdi_1[4]
                        zmm1 = rdi_1[3]
                        arg4 = rdi_1[2]
                        zmm0 = *rdi_1
                        zmm3 = rdi_1[1]
                    else
                        zmm0 = *(&__return_addr + rdx_4 + 0x330)
                        zmm3 = (&arg_334)[rcx_1 * 7]
                        arg4 = (&arg_338)[rcx_1 * 7]
                        zmm1 = (&arg_33c)[rcx_1 * 7]
                        zmm4 = (&arg_340)[rcx_1 * 7]
                        zmm5 = (&arg_344)[rcx_1 * 7]
                        rbx_4 = rcx_2
                    
                    *rdi_1 = zmm0[0]
                    rdi_1[1] = zmm3[0]
                    rdi_1[2] = arg4[0]
                    rdi_1[3] = zmm1[0]
                    rdi_1[4] = zmm4[0]
                    rdi_1[5] = zmm5[0]
                    rdi_1[6].b = rbx_4
                while (i_1 != 0)
                
                return i_1
            
        label_140358c60:
            arg7 = arg6
            arg6 = arg4
            int64_t rax_71 = sx.q((rbx_2 << 3).d - rbx_2.d)
            int32_t temp0_464[0x4] = __pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(
                        __pinsrb_xmmdq_memb_immb(zx.o(0), (*r9_1)[rax_71 + 6].b, 0), 
                        (*r9_1)[rax_71 + 0xd].b, 4), 
                    (*r9_1)[rax_71 + 0x14].b, 8), 
                (*r9_1)[rax_71 + 0x1b].b, 0xc)
            int64_t rcx_31 = sx.q((rbx_2 << 2).d)
            zmm4 = *(arg25 + rcx_31)
            arg4 = _mm_cmpeq_epi32(arg4, arg4)
            zmm4 = _mm_cmpeq_epi32(zmm4, arg4) & not.o(_mm_cmpeq_epi32(temp0_464, zx.o(0)) ^ arg4)
            char temp0_468 = _mm_movemask_ps(zmm4)
            
            if (temp0_468 == 0)
                arg4 = arg6
                arg6 = arg7
                rbx_2 = zx.q(rbx_2.d + 4)
                
                if (rbx_2.d s< rdx_1)
                    goto label_140358c60
                
                goto label_140359eb9
            
            arg31 = temp0_468
            arg32 = zmm11
            __return_addr.o = zmm10
            arg15 = zmm5
            arg26 = zmm1
            arg21 = zmm3
            arg17 = zmm7
            arg22 = arg8
            arg29 = arg5
            arg18 = zmm12
            arg13 = arg7
            arg24 = arg6
            arg23 = zmm15
            arg27 = rbx_2.d
            int64_t rdx_8 = sx.q((rbx_2 * 9).d * 3 + rbx_2.d)
            zmm1 = *(r9_1 + rdx_8)
            zmm0 = *(r9_1 + rdx_8 + 0x1c)
            arg6 = *(r9_1 + rdx_8 + 0x38)
            arg5 = *(r9_1 + rdx_8 + 0x54)
            zmm3 = _mm_shuffle_epi32(zmm1, 0xe5)
            arg4 = _mm_shuffle_epi32(zmm1, 0x4e)
            arg7 = _mm_shuffle_epi32(zmm1, 0xe7)
            zmm1 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm1, zmm0[0].q), arg6[0].q)
            arg_c0 = _mm_blend_epi16(_mm_shuffle_epi32(arg5, 0x24), zmm1, 0x3f)
            float temp0_477[0x4] = _mm_insert_ps(_mm_blend_epi16(zmm3, zmm0, 0xc), arg6, 0x68)
            int32_t arg_f0[0x4] = _mm_blend_epi16(_mm_shuffle_epi32(arg5, 0x44), temp0_477, 0x3f)
            float temp0_480[0x4] = _mm_shuffle_epi32(zmm0, 0xfa)
            int64_t rax_78 = *(r9_1 + rdx_8 + 0x10)
            int64_t rbp_9 = *(r9_1 + rdx_8 + 0x2c)
            zmm1 = _mm_insert_epi32(zx.o(rax_78.d), rbp_9.d, 1)
            int64_t rbx_14 = *(r9_1 + rdx_8 + 0x48)
            zmm1 = _mm_insert_epi32(zmm1, rbx_14.d, 2)
            int64_t rdx_9 = *(r9_1 + rdx_8 + 0x64)
            float arg_3a0[0x4] = _mm_insert_epi32(zmm1, rdx_9.d, 3)
            arg16 = _mm_insert_epi32(
                _mm_insert_epi32(
                    _mm_insert_epi32(zx.o((rax_78 u>> 0x20).d), (rbp_9 u>> 0x20).d, 1), 
                    (rbx_14 u>> 0x20).d, 2), 
                (rdx_9 u>> 0x20).d, 3)
            zmm1 = _mm_slli_epi32(*(arg20 + rcx_31), 6)
            arg45 = zmm4
            int32_t temp0_489[0x4] = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
            zmm1 &= temp0_489
            int64_t rax_82 = sx.q(zmm1[0])
            void* rbp_11 = arg30 + rax_82
            int32_t temp0_490 = _mm_extract_epi32(zmm1, 1)
            zmm5 = *(arg30 + rax_82)
            int64_t rax_83 = sx.q(temp0_490)
            void* rsi_19 = arg30 + rax_83
            int64_t rcx_34 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* rdi_7 = arg30 + rcx_34
            int64_t rdx_12 = sx.q(_mm_extract_epi32(zmm1, 3))
            float temp0_495[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm5, *(arg30 + rax_83), 0x10), *(arg30 + rcx_34), 
                    0x20), 
                *(arg30 + rdx_12), 0x30)
            void* r11_3 = arg30 + rdx_12
            zmm7 = temp0_489 & data_142fc95e0
            zmm1 = *(zx.q(zmm7[0]) + rbp_11)
            uint64_t rax_85 = zx.q(_mm_extract_epi32(zmm7, 1))
            uint64_t rcx_35 = zx.q(_mm_extract_epi32(zmm7, 2))
            uint64_t rdx_13 = zx.q(_mm_extract_epi32(zmm7, 3))
            float temp0_501[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm1, *(rax_85 + rsi_19), 0x10), *(rcx_35 + rdi_7), 
                    0x20), 
                *(rdx_13 + r11_3), 0x30)
            zmm3 = _mm_blend_epi16(temp0_480, arg4, 0xf3)
            arg4 = temp0_489 & data_142fc95f0
            zmm15 = *(zx.q(arg4[0]) + rbp_11)
            int32_t* rax_87 = zx.q(_mm_extract_epi32(arg4, 1))
            int32_t* rcx_36 = zx.q(_mm_extract_epi32(arg4, 2))
            int32_t* rdx_14 = zx.q(_mm_extract_epi32(arg4, 3))
            zmm15 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm15, *(rax_87 + rsi_19), 0x10), *(rcx_36 + rdi_7), 
                    0x20), 
                *(rdx_14 + r11_3), 0x30)
            zmm3 = _mm_blend_epi16(zmm3, arg6, 0xf0)
            arg4 = temp0_489 & data_143442650
            zmm12 = *(zx.q(arg4[0]) + rbp_11)
            int32_t* rax_89 = zx.q(_mm_extract_epi32(arg4, 1))
            int32_t* rcx_37 = zx.q(_mm_extract_epi32(arg4, 2))
            int32_t* rdx_15 = zx.q(_mm_extract_epi32(arg4, 3))
            float temp0_515[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm12, *(rax_89 + rsi_19), 0x10), *(rcx_37 + rdi_7), 
                    0x20), 
                *(rdx_15 + r11_3), 0x30)
            int32_t temp0_516[0x4] = _mm_shuffle_epi32(arg5, 0xa4)
            arg4 = temp0_489 & data_143442660
            int32_t* rax_90 = zx.q(_mm_extract_epi32(arg4, 1))
            int32_t* rcx_38 = zx.q(_mm_extract_epi32(arg4, 2))
            int32_t* rdx_16 = zx.q(_mm_extract_epi32(arg4, 3))
            float temp0_522[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(zx.q(arg4[0]) + rbp_11), *(rax_90 + rsi_19), 
                        0x10), 
                    *(rcx_38 + rdi_7), 0x20), 
                *(rdx_16 + r11_3), 0x30)
            int32_t temp0_523[0x4] = _mm_blend_epi16(temp0_516, zmm3, 0x3f)
            zmm3 = temp0_489 & data_143442670
            int32_t* r15_3 = zx.q(_mm_extract_epi32(zmm3, 1))
            int32_t* r9_4 = zx.q(_mm_extract_epi32(zmm3, 2))
            int32_t* r10_5 = zx.q(_mm_extract_epi32(zmm3, 3))
            int32_t (* r14_4)[0x4] = zx.q(zmm3[0])
            zmm3 = temp0_489 & data_143442700
            int32_t* rax_91 = zx.q(_mm_extract_epi32(zmm3, 1))
            int32_t* rcx_39 = zx.q(_mm_extract_epi32(zmm3, 2))
            int32_t* rdx_17 = zx.q(_mm_extract_epi32(zmm3, 3))
            int32_t (* rbx_18)[0x4] = zx.q(zmm3[0])
            arg8 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r14_4 + rbp_11), *(r15_3 + rsi_19), 0x10), 
                    *(r9_4 + rdi_7), 0x20), 
                *(r10_5 + r11_3), 0x30)
            int32_t temp0_533[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rbx_18 + rbp_11), *(rax_91 + rsi_19), 0x10), 
                    *(rcx_39 + rdi_7), 0x20), 
                *(rdx_17 + r11_3), 0x30)
            int32_t temp0_537[0x4] = _mm_blend_epi16(temp0_533, arg7, 0xf3)
            zmm3 = temp0_489 & data_1434b2e20
            int32_t* rax_92 = zx.q(_mm_extract_epi32(zmm3, 1))
            int32_t* rcx_40 = zx.q(_mm_extract_epi32(zmm3, 2))
            int32_t* rdx_18 = zx.q(_mm_extract_epi32(zmm3, 3))
            float temp0_543[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(zx.q(zmm3[0]) + rbp_11), *(rax_92 + rsi_19), 
                        0x10), 
                    *(rcx_40 + rdi_7), 0x20), 
                *(rdx_18 + r11_3), 0x30)
            zmm7 = _mm_insert_ps(temp0_537, arg6, 0xe8)
            zmm3 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[0].o
            int32_t* rax_93 = zx.q(_mm_extract_epi32(zmm3, 1))
            int32_t* rcx_41 = zx.q(_mm_extract_epi32(zmm3, 2))
            int32_t* rdx_19 = zx.q(_mm_extract_epi32(zmm3, 3))
            float temp0_550[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(zx.q(zmm3[0]) + rbp_11), *(rax_93 + rsi_19), 
                        0x10), 
                    *(rcx_41 + rdi_7), 0x20), 
                *(rdx_19 + r11_3), 0x30)
            int32_t arg_320[0x4] = _mm_blend_ps(zmm7, arg5, 8)
            arg5 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[4].o
            int32_t* r15_4 = zx.q(_mm_extract_epi32(arg5, 1))
            int32_t* rax_94 = zx.q(_mm_extract_epi32(arg5, 2))
            int32_t* rax_95 = zx.q(_mm_extract_epi32(arg5, 3))
            float (* rax_96)[0x4] = zx.q(arg5[0])
            arg5 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[8].o
            int32_t* rax_97 = zx.q(_mm_extract_epi32(arg5, 1))
            int32_t* rax_98 = zx.q(_mm_extract_epi32(arg5, 2))
            arg10[0].q = zx.q(_mm_extract_epi32(arg5, 3))
            arg14[0].q = zx.q(arg5[0])
            arg5 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o
            int32_t* rax_99 = zx.q(_mm_extract_epi32(arg5, 1))
            int32_t* rax_100 = zx.q(_mm_extract_epi32(arg5, 2))
            int32_t* rax_101 = zx.q(_mm_extract_epi32(arg5, 3))
            float (* rax_102)[0x4] = zx.q(arg5[0])
            arg5 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o
            int32_t* rax_103 = zx.q(_mm_extract_epi32(arg5, 1))
            int32_t* rax_104 = zx.q(_mm_extract_epi32(arg5, 2))
            int32_t* r13_3 = zx.q(_mm_extract_epi32(arg5, 3))
            int32_t (* r12_3)[0x4] = zx.q(arg5[0])
            arg5 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o
            int32_t* rax_105 = zx.q(_mm_extract_epi32(arg5, 1))
            int32_t* rax_106 = zx.q(_mm_extract_epi32(arg5, 2))
            int32_t* r14_5 = zx.q(_mm_extract_epi32(arg5, 3))
            int32_t (* rbx_21)[0x4] = zx.q(arg5[0])
            arg5 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o
            int32_t* r10_6 = zx.q(_mm_extract_epi32(arg5, 1))
            int32_t* r9_5 = zx.q(_mm_extract_epi32(arg5, 2))
            int32_t* rdx_20 = zx.q(_mm_extract_epi32(arg5, 3))
            float (* rcx_44)[0x4] = zx.q(arg5[0])
            float temp0_572[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rax_96 + rbp_11), *(r15_4 + rsi_19), 0x10), 
                    *(rax_94 + rdi_7), 0x20), 
                *(rax_95 + r11_3), 0x30)
            float arg_5e0[0x4] = temp0_495
            float temp0_575[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg14[0].q + rbp_11), *(rax_97 + rsi_19), 0x10), 
                    *(rax_98 + rdi_7), 0x20), 
                *(arg10[0].q + r11_3), 0x30)
            float arg_5f0[0x4] = temp0_501
            float temp0_578[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rax_102 + rbp_11), *(rax_99 + rsi_19), 0x10), 
                    *(rax_100 + rdi_7), 0x20), 
                *(rax_101 + r11_3), 0x30)
            int32_t arg_600[0x4] = zmm15
            zmm7 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r12_3 + rbp_11), *(rax_103 + rsi_19), 0x10), 
                    *(rax_104 + rdi_7), 0x20), 
                *(r13_3 + r11_3), 0x30)
            float arg_610[0x4] = temp0_515
            zmm4 = temp0_489 & (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
            int32_t* r12_4 = zx.q(_mm_extract_epi32(zmm4, 1))
            int32_t* r13_4 = zx.q(_mm_extract_epi32(zmm4, 2))
            int32_t* rax_119 = zx.q(_mm_extract_epi32(zmm4, 3))
            float (* r15_6)[0x4] = zx.q(zmm4[0])
            float arg_620[0x4] = temp0_522
            int32_t arg_630[0x4] = arg8
            int32_t arg_640[0x4] = zmm0
            float arg_650[0x4] = temp0_543
            float arg_660[0x4] = temp0_550
            float arg_670[0x4] = temp0_572
            float arg_680[0x4] = temp0_575
            float arg_690[0x4] = temp0_578
            int32_t arg_6a0[0x4] = zmm7
            int32_t arg_6b0[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rbx_21 + rbp_11), *(rax_105 + rsi_19), 0x10), 
                    *(rax_106 + rdi_7), 0x20), 
                *(r14_5 + r11_3), 0x30)
            float arg_6c0[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(rcx_44 + rbp_11), *(r10_6 + rsi_19), 0x10), 
                    *(r9_5 + rdi_7), 0x20), 
                *(rdx_20 + r11_3), 0x30)
            float arg_6d0[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r15_6 + rbp_11), *(r12_4 + rsi_19), 0x10), 
                    *(r13_4 + rdi_7), 0x20), 
                *(rax_119 + r11_3), 0x30)
            arg10 = (*arg3)[9]
            arg14 = (*arg3)[0xd]
            zmm12 = (*arg3)[2]
            arg8 = (*arg3)[3]
            zmm15 = (*arg3)[6]
            zmm13 = (*arg3)[0xa]
            arg6 = (*arg3)[0xe]
            zmm7 = (*arg3)[7]
            zmm0 = (*arg3)[0xb]
            
            for (int64_t i_2 = 0; i_2 != 0x100; i_2 += 0x40)
                arg7 = *arg3
                zmm11 = arg3[1][0]
                float temp0_594[0x4] = _mm_shuffle_ps(arg7, arg7, 0)
                zmm4 = *(&arg_5e0 + i_2)
                zmm3 = *(&arg_5f0 + i_2)
                arg4 = *(&arg_600 + i_2)
                zmm1 = *(&arg_610 + i_2)
                zmm10 = zx.o(0)
                float temp0_596[0x4] = _mm_add_ps(_mm_mul_ps(temp0_594, zmm4), zmm10)
                float temp0_599[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm3), temp0_596)
                zmm5 = arg3[2][0]
                float temp0_602[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), arg4), temp0_599)
                arg5 = arg3[3][0]
                *(&arg_210 + i_2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm1), temp0_602)
                zmm5 = (*arg3)[1]
                arg5 = (*arg3)[5]
                float temp0_608[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm4), zmm10)
                float temp0_611[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm3), temp0_608)
                zmm5 = arg10
                float temp0_614[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), arg4), temp0_611)
                *(&arg_220 + i_2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg14, arg14, 0), zmm1), temp0_614)
                float temp0_620[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4), zmm10)
                float temp0_623[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm3), temp0_620)
                float temp0_626[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), arg4), temp0_623)
                *(&arg_230 + i_2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm1), temp0_626)
                float temp0_632[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), zmm4), zmm10)
                zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm3), temp0_632)
                float temp0_638[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg4), zmm4)
                arg4 = (*arg3)[0xf]
                *(&arg_240 + i_2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), zmm1), temp0_638)
            
            zmm15 = arg_210
            zmm0 = arg_220
            arg4 = arg_230
            arg14 = arg4
            zmm11 = arg33
            zmm3 = arg35
            int32_t* arg_1a0
            arg_1a0.o = zmm3
            arg6 = arg_320
            zmm4 = __addps_xmmps_memps(arg6, arg_c0)
            zmm13 = data_142d3f640
            zmm4 = _mm_mul_ps(zmm4, zmm13)
            float temp0_644[0x4] = _mm_mul_ps(zmm4, zmm15)
            float temp0_645[0x4] = _mm_mul_ps(zmm4, zmm0)
            float temp0_647[0x4] = _mm_mul_ps(_mm_add_ps(arg_f0, arg_3a0), zmm13)
            zmm7 = _mm_add_ps(_mm_mul_ps(temp0_647, zmm11), temp0_644)
            float temp0_651[0x4] = _mm_add_ps(_mm_mul_ps(temp0_647, arg34), temp0_645)
            float temp0_652[0x4] = _mm_mul_ps(zmm4, arg4)
            float temp0_654[0x4] = _mm_add_ps(_mm_mul_ps(temp0_647, zmm3), temp0_652)
            zmm4 = __mulps_xmmps_memps(zmm4, arg_240)
            float temp0_657[0x4] = _mm_add_ps(_mm_mul_ps(temp0_647, arg36), zmm4)
            float temp0_659[0x4] = _mm_mul_ps(_mm_add_ps(temp0_523, arg16), zmm13)
            zmm4 = _mm_add_ps(_mm_mul_ps(temp0_659, arg37), zmm7)
            zmm7 = _mm_add_ps(_mm_mul_ps(temp0_659, arg38), temp0_651)
            float temp0_665[0x4] = _mm_add_ps(_mm_mul_ps(temp0_659, arg39), temp0_654)
            float temp0_667[0x4] = _mm_add_ps(_mm_mul_ps(temp0_659, arg40), temp0_657)
            zmm4 = __addps_xmmps_memps(zmm4, arg41)
            zmm7 = __addps_xmmps_memps(zmm7, arg42)
            float temp0_670[0x4] = __addps_xmmps_memps(temp0_665, arg43)
            float temp0_671[0x4] = __addps_xmmps_memps(temp0_667, arg44)
            arg_210 = zmm11
            arg_220 = arg34
            zmm10 = arg_1a0.o
            arg_230 = zmm10
            arg_240 = arg36
            arg_3f0 = arg37
            arg_400 = arg38
            arg_410 = arg39
            arg_420 = arg40
            float temp0_672[0x4] = __subps_xmmps_memps(arg_3a0, arg_f0)
            float temp0_673[0x4] = __subps_xmmps_memps(arg16, temp0_523)
            float temp0_674[0x4] = __subps_xmmps_memps(arg6, arg_c0)
            arg_3b0 = zmm4
            arg_3c0 = zmm7
            arg_3d0 = temp0_670
            arg_3e0 = temp0_671
            arg4 = data_142d3f640
            float temp0_675[0x4] = _mm_mul_ps(temp0_674, arg4)
            zmm15 = _mm_mul_ps(zmm15, temp0_675)
            float temp0_677[0x4] = _mm_mul_ps(zmm0, temp0_675)
            float temp0_678[0x4] = __mulps_xmmps_memps(temp0_675, arg14)
            float temp0_679[0x4] = _mm_mul_ps(temp0_672, arg4)
            zmm13 = arg4
            float temp0_680[0x4] = _mm_mul_ps(zmm11, temp0_679)
            arg8 = _mm_mul_ps(arg34, temp0_679)
            float temp0_682[0x4] = _mm_mul_ps(temp0_679, zmm10)
            arg4 = data_142d3f770
            zmm15 = _mm_and_ps(zmm15, arg4)
            float temp0_685[0x4] = _mm_add_ps(_mm_and_ps(temp0_680, arg4), zmm15)
            arg5 = _mm_and_ps(temp0_677, arg4)
            arg8 = _mm_add_ps(_mm_and_ps(arg8, arg4), arg5)
            arg6 = _mm_and_ps(temp0_678, arg4)
            float temp0_691[0x4] = _mm_add_ps(_mm_and_ps(temp0_682, arg4), arg6)
            float temp0_692[0x4] = _mm_mul_ps(temp0_673, zmm13)
            float temp0_693[0x4] = _mm_mul_ps(arg37, temp0_692)
            float temp0_694[0x4] = _mm_mul_ps(arg38, temp0_692)
            float temp0_695[0x4] = _mm_mul_ps(temp0_692, arg39)
            float temp0_697[0x4] = _mm_add_ps(_mm_and_ps(temp0_693, arg4), temp0_685)
            float temp0_699[0x4] = _mm_add_ps(_mm_and_ps(temp0_694, arg4), arg8)
            float temp0_701[0x4] = _mm_add_ps(_mm_and_ps(temp0_695, arg4), temp0_691)
            arg5 = _mm_sub_ps(zmm4, temp0_697)
            arg4 = _mm_sub_ps(zmm7, temp0_699)
            arg14 = _mm_sub_ps(temp0_670, temp0_701)
            arg7 = _mm_add_ps(temp0_697, zmm4)
            arg10 = _mm_add_ps(temp0_699, zmm7)
            arg16 = _mm_add_ps(temp0_701, temp0_670)
            zmm10 = arg23
            arg8 = zmm10 & data_142ed6810
            arg6 = zx.o(0)
            zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(arg8, zx.o(0)) & not.o(arg45), 0x1f)
            char temp0_710 = _mm_movemask_ps(zmm1)
            
            if (temp0_710 == 0)
                break
            
            zmm4 = _mm_min_ps(arg22, arg5)
            char temp0_713 =
                _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(arg8, data_142d8f750) ^ data_142d3f800)
            char temp16_1 = temp0_713 & 1
            arg_f0 = arg5
            
            if (temp16_1 != 0)
                arg15 = _mm_blend_ps(arg15, zmm4, 1)
            
            zmm11 = arg32
            zmm3 = arg4
            float temp0_715[0x4] = _mm_min_ps(arg29, arg4)
            
            if (temp16_1 != 0)
                __return_addr.o = _mm_blend_ps(__return_addr.o, temp0_715, 1)
            
            r9_1 = arg28
            r10_1 = arg65
            rdx_1 = arg19
            rbx_1 = arg27
            rsi_1 = arg31
            zmm15 = __minps_xmmps_memps(arg18, arg14)
            
            if (temp16_1 == 0)
                zmm0 = _mm_max_ps(arg13, arg7)
                arg_c0 = arg7
                
                if (temp16_1 != 0)
                    goto label_140359ae9
                
                goto label_140359938
            
            arg9 = _mm_blend_ps(arg9, zmm15, 1)
            zmm0 = _mm_max_ps(arg13, arg7)
            arg_c0 = arg7
            
            if (temp16_1 != 0)
            label_140359ae9:
                zmm11 = _mm_blend_ps(zmm11, zmm0, 1)
                arg4 = __maxps_xmmps_memps(arg24, arg10)
                
                if (temp16_1 == 0)
                    goto label_140359948
                
                goto label_140359b0c
            
        label_140359938:
            arg4 = __maxps_xmmps_memps(arg24, arg10)
            
            if (temp16_1 != 0)
            label_140359b0c:
                arg26 = _mm_blend_ps(arg26, arg4, 1)
                arg5 = __maxps_xmmps_memps(arg11, arg16)
                
                if (temp16_1 != 0)
                label_140359b35:
                    arg21 = _mm_blend_ps(arg21, arg5, 1)
                    
                    if (temp16_1 == 0)
                        goto label_14035995c
                    
                    goto label_140359b58
            else
            label_140359948:
                arg5 = __maxps_xmmps_memps(arg11, arg16)
                
                if (temp16_1 != 0)
                    goto label_140359b35
            
            bool cond:109_1
            bool cond:110_1
            bool cond:114_1
            bool cond:115_1
            bool cond:120_1
            bool cond:121_1
            bool cond:126_1
            bool cond:127_1
            bool cond:132_1
            bool cond:133_1
            bool cond:138_1
            bool cond:139_1
            
            if (temp16_1 == 0)
            label_14035995c:
                char temp18_1 = temp0_713 & 2
                cond:109_1 = temp18_1 != 0
                cond:110_1 = temp18_1 == 0
                cond:114_1 = temp18_1 == 0
                cond:115_1 = temp18_1 != 0
                cond:120_1 = temp18_1 != 0
                cond:121_1 = temp18_1 == 0
                cond:126_1 = temp18_1 == 0
                cond:127_1 = temp18_1 != 0
                cond:132_1 = temp18_1 != 0
                cond:133_1 = temp18_1 == 0
                cond:138_1 = temp18_1 == 0
                cond:139_1 = temp18_1 != 0
                
                if (temp18_1 != 0)
                    goto label_140359b7b
                
                goto label_140359966
            
        label_140359b58:
            arg17 = _mm_blend_epi16(arg17, zmm10, 3)
            char temp17_1 = temp0_713 & 2
            cond:109_1 = temp17_1 != 0
            cond:110_1 = temp17_1 == 0
            cond:114_1 = temp17_1 == 0
            cond:115_1 = temp17_1 != 0
            cond:120_1 = temp17_1 != 0
            cond:121_1 = temp17_1 == 0
            cond:126_1 = temp17_1 == 0
            cond:127_1 = temp17_1 != 0
            cond:132_1 = temp17_1 != 0
            cond:133_1 = temp17_1 == 0
            cond:138_1 = temp17_1 == 0
            cond:139_1 = temp17_1 != 0
            
            if (temp17_1 != 0)
            label_140359b7b:
                arg15 = _mm_blend_ps(arg15, zmm4, 2)
                
                if (cond:110_1)
                    goto label_14035996c
                
                goto label_140359b91
            
        label_140359966:
            
            if (not(cond:109_1))
            label_14035996c:
                
                if (cond:115_1)
                    goto label_140359ba7
                
                goto label_140359972
            
        label_140359b91:
            __return_addr.o = _mm_blend_ps(__return_addr.o, temp0_715, 2)
            
            if (not(cond:114_1))
            label_140359ba7:
                arg9 = _mm_blend_ps(arg9, zmm15, 2)
                
                if (cond:121_1)
                    goto label_140359978
                
                goto label_140359bb2
            
        label_140359972:
            
            if (not(cond:120_1))
            label_140359978:
                
                if (cond:127_1)
                    goto label_140359bcd
                
                goto label_14035997e
            
        label_140359bb2:
            zmm11 = _mm_blend_ps(zmm11, zmm0, 2)
            
            if (not(cond:126_1))
            label_140359bcd:
                arg26 = _mm_blend_ps(arg26, arg4, 2)
                
                if (cond:133_1)
                    goto label_140359984
                
                goto label_140359be9
            
        label_14035997e:
            
            if (not(cond:132_1))
            label_140359984:
                
                if (cond:139_1)
                    goto label_140359c07
                
                goto label_14035998a
            
        label_140359be9:
            arg21 = _mm_blend_ps(arg21, arg5, 2)
            bool cond:144_1
            bool cond:145_1
            bool cond:150_1
            bool cond:151_1
            bool cond:156_1
            bool cond:157_1
            bool cond:162_1
            bool cond:163_1
            bool cond:168_1
            bool cond:169_1
            bool cond:174_1
            bool cond:175_1
            
            if (not(cond:138_1))
            label_140359c07:
                arg17 = _mm_blend_epi16(arg17, zmm10, 0xc)
                char temp22_1 = temp0_713 & 4
                cond:144_1 = temp22_1 == 0
                cond:145_1 = temp22_1 != 0
                cond:150_1 = temp22_1 != 0
                cond:151_1 = temp22_1 == 0
                cond:156_1 = temp22_1 == 0
                cond:157_1 = temp22_1 != 0
                cond:162_1 = temp22_1 != 0
                cond:163_1 = temp22_1 == 0
                cond:168_1 = temp22_1 == 0
                cond:169_1 = temp22_1 != 0
                cond:174_1 = temp22_1 != 0
                cond:175_1 = temp22_1 == 0
                
                if (temp22_1 == 0)
                    goto label_140359994
                
                goto label_140359c25
            
        label_14035998a:
            char temp21_1 = temp0_713 & 4
            cond:144_1 = temp21_1 == 0
            cond:145_1 = temp21_1 != 0
            cond:150_1 = temp21_1 != 0
            cond:151_1 = temp21_1 == 0
            cond:156_1 = temp21_1 == 0
            cond:157_1 = temp21_1 != 0
            cond:162_1 = temp21_1 != 0
            cond:163_1 = temp21_1 == 0
            cond:168_1 = temp21_1 == 0
            cond:169_1 = temp21_1 != 0
            cond:174_1 = temp21_1 != 0
            cond:175_1 = temp21_1 == 0
            
            if (temp21_1 == 0)
            label_140359994:
                
                if (cond:145_1)
                    goto label_140359c3b
                
                goto label_14035999a
            
        label_140359c25:
            arg15 = _mm_blend_ps(arg15, zmm4, 4)
            
            if (not(cond:144_1))
            label_140359c3b:
                __return_addr.o = _mm_blend_ps(__return_addr.o, temp0_715, 4)
                
                if (cond:151_1)
                    goto label_1403599a0
                
                goto label_140359c51
            
        label_14035999a:
            
            if (not(cond:150_1))
            label_1403599a0:
                
                if (cond:157_1)
                    goto label_140359c5c
                
                goto label_1403599a6
            
        label_140359c51:
            arg9 = _mm_blend_ps(arg9, zmm15, 4)
            
            if (not(cond:156_1))
            label_140359c5c:
                zmm11 = _mm_blend_ps(zmm11, zmm0, 4)
                
                if (cond:163_1)
                    goto label_1403599ac
                
                goto label_140359c77
            
        label_1403599a6:
            
            if (cond:162_1)
            label_140359c77:
                arg26 = _mm_blend_ps(arg26, arg4, 4)
                
                if (not(cond:168_1))
                label_140359c93:
                    arg21 = _mm_blend_ps(arg21, arg5, 4)
                    
                    if (cond:175_1)
                        goto label_1403599b8
                    
                    goto label_140359cb1
            else
            label_1403599ac:
                
                if (cond:169_1)
                    goto label_140359c93
            
            bool cond:180_1
            bool cond:181_1
            bool cond:186_1
            bool cond:191_1
            bool cond:192_1
            bool cond:197_1
            bool cond:198_1
            bool cond:203_1
            bool cond:204_1
            bool cond:209_1
            bool cond:210_1
            
            if (not(cond:174_1))
            label_1403599b8:
                char temp27_1 = temp0_713 & 8
                cond:180_1 = temp27_1 == 0
                cond:181_1 = temp27_1 != 0
                cond:186_1 = temp27_1 != 0
                cond:191_1 = temp27_1 == 0
                cond:192_1 = temp27_1 != 0
                cond:197_1 = temp27_1 != 0
                cond:198_1 = temp27_1 == 0
                cond:203_1 = temp27_1 == 0
                cond:204_1 = temp27_1 != 0
                cond:209_1 = temp27_1 != 0
                cond:210_1 = temp27_1 == 0
                
                if (temp27_1 != 0)
                    goto label_140359ccf
                
                goto label_1403599c2
            
        label_140359cb1:
            arg17 = _mm_blend_epi16(arg17, zmm10, 0x30)
            char temp26_1 = temp0_713 & 8
            cond:180_1 = temp26_1 == 0
            cond:181_1 = temp26_1 != 0
            cond:186_1 = temp26_1 != 0
            cond:191_1 = temp26_1 == 0
            cond:192_1 = temp26_1 != 0
            cond:197_1 = temp26_1 != 0
            cond:198_1 = temp26_1 == 0
            cond:203_1 = temp26_1 == 0
            cond:204_1 = temp26_1 != 0
            cond:209_1 = temp26_1 != 0
            cond:210_1 = temp26_1 == 0
            
            if (temp26_1 == 0)
            label_1403599c2:
                
                if (not(cond:180_1))
                    __return_addr.o = _mm_blend_ps(__return_addr.o, temp0_715, 8)
            else
            label_140359ccf:
                arg15 = _mm_blend_ps(arg15, zmm4, 8)
                
                if (cond:181_1)
                    __return_addr.o = _mm_blend_ps(__return_addr.o, temp0_715, 8)
            
            zmm7 = arg17
            zmm12 = arg21
            zmm13 = arg26
            zmm5 = arg15
            
            if (cond:186_1)
                arg9 = _mm_blend_ps(arg9, zmm15, 8)
                zmm15 = arg29
                
                if (not(cond:191_1))
                label_140359d09:
                    zmm11 = _mm_blend_ps(zmm11, zmm0, 8)
                    
                    if (cond:198_1)
                        goto label_140359a0e
                    
                    goto label_140359d16
            else
                zmm15 = arg29
                
                if (cond:192_1)
                    goto label_140359d09
            
            if (not(cond:197_1))
            label_140359a0e:
                arg7 = arg_c0
                
                if (cond:204_1)
                    goto label_140359d2c
                
                goto label_140359a1d
            
        label_140359d16:
            zmm13 = _mm_blend_ps(zmm13, arg4, 8)
            arg7 = arg_c0
            
            if (not(cond:203_1))
            label_140359d2c:
                zmm12 = _mm_blend_ps(zmm12, arg5, 8)
                arg6 = arg13
                
                if (cond:210_1)
                    goto label_140359a29
                
                goto label_140359d3f
            
        label_140359a1d:
            arg6 = arg13
            
            if (cond:209_1)
            label_140359d3f:
                zmm7 = __pblendw_xmmdq_memdq_immb(zmm7, arg23, 0xc0)
                
                if (rsi_1 != temp0_710)
                label_140359d54:
                    arg6 = _mm_srai_epi32(zmm1, 0x1f)
                    arg5 = arg_f0
                    continue
            else
            label_140359a29:
                
                if (rsi_1 != temp0_710)
                    goto label_140359d54
        
        arg8 = arg22
        zmm10 = __return_addr.o
        zmm0 = zmm15
        arg4 = arg24
        zmm3 = zmm12
        zmm1 = zmm13
        zmm15 = arg23
        rbp_2 = rsi_1
        char temp2_1 = rbp_2 & 1
        cond:0_1 = temp2_1 != 0
        cond:3_1 = temp2_1 == 0
        cond:4_1 = temp2_1 != 0
        cond:6_1 = temp2_1 != 0
        cond:7_1 = temp2_1 == 0
        cond:10_1 = temp2_1 == 0
        cond:11_1 = temp2_1 != 0
        cond:14_1 = temp2_1 != 0
        cond:15_1 = temp2_1 == 0
        cond:18_1 = temp2_1 == 0
        cond:19_1 = temp2_1 != 0
        
        if (temp2_1 == 0)
            goto label_140359df1
        
        goto label_140359dea
