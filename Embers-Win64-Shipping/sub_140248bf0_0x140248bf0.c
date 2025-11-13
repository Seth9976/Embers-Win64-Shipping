// 函数: sub_140248bf0
// 地址: 0x140248bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    float zmm7[0x4] = arg11
    float zmm10[0x4] = zx.o(0)
    float arg_40[0x4] = arg12
    arg12 = _mm_cmpeq_epi32(arg12, arg12)
    float zmm13[0x4] = arg19
    
    while (true)
        float temp0_2[0x4] = _mm_sub_ps(arg17, arg15)
        float temp0_3[0x4] = _mm_sub_ps(arg_40, zmm13)
        float temp0_4[0x4] = _mm_mul_ps(temp0_2, arg23)
        float zmm1[0x4] = arg15
        char temp0_5 = arg5 & 1
        
        if (temp0_5 != 0)
            zmm1 = arg15
            zmm1[0] = zmm1[0] + temp0_4[0]
        
        float temp0_6[0x4] = _mm_sub_ps(arg18, arg14)
        float temp0_7[0x4] = _mm_mul_ps(temp0_3, arg23)
        float zmm2[0x4] = zmm13
        float zmm0[0x4]
        float zmm4[0x4]
        
        if (temp0_5 != 0)
            zmm2 = zmm13
            zmm2[0] = zmm2[0] + temp0_7[0]
            zmm4 = _mm_mul_ps(temp0_6, arg23)
            zmm0 = arg14
            
            if (temp0_5 != 0)
                goto label_140248e9d
            
            goto label_140248c68
        
        zmm4 = _mm_mul_ps(temp0_6, arg23)
        zmm0 = arg14
        bool cond:3_1
        bool cond:4_1
        bool cond:5_1
        bool cond:6_1
        
        if (temp0_5 != 0)
        label_140248e9d:
            zmm0 = arg14
            zmm0[0] = zmm0[0] + zmm4[0]
            arg15 = _mm_add_ps(arg15, temp0_4)
            char temp2_1 = arg5 & 2
            cond:3_1 = temp2_1 == 0
            cond:4_1 = temp2_1 != 0
            cond:5_1 = temp2_1 == 0
            cond:6_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
                goto label_140248c81
            
            goto label_140248eb2
        
    label_140248c68:
        arg15 = _mm_add_ps(arg15, temp0_4)
        char temp1_1 = arg5 & 2
        cond:3_1 = temp1_1 == 0
        cond:4_1 = temp1_1 != 0
        cond:5_1 = temp1_1 == 0
        cond:6_1 = temp1_1 != 0
        
        if (temp1_1 != 0)
        label_140248c81:
            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(arg15, zmm1, 1), zmm1, 0xe2)
            arg11 = zmm7
            zmm13 = _mm_add_ps(zmm13, temp0_7)
            
            if (cond:4_1)
                goto label_140248ecc
            
            goto label_140248c92
        
    label_140248eb2:
        arg11 = zmm7
        zmm13 = _mm_add_ps(zmm13, temp0_7)
        
        if (not(cond:3_1))
        label_140248ecc:
            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm2, 1), zmm2, 0xe2)
            arg14 = _mm_add_ps(arg14, zmm4)
            
            if (cond:6_1)
                goto label_140248ca8
            
            goto label_140248ed9
        
    label_140248c92:
        arg14 = _mm_add_ps(arg14, zmm4)
        bool cond:7_1
        bool cond:8_1
        bool cond:9_1
        bool cond:10_1
        
        if (not(cond:5_1))
        label_140248ca8:
            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, zmm0, 1), zmm0, 0xe2)
            char temp4_1 = arg5 & 4
            cond:7_1 = temp4_1 == 0
            cond:8_1 = temp4_1 != 0
            cond:9_1 = temp4_1 == 0
            cond:10_1 = temp4_1 != 0
            
            if (temp4_1 != 0)
                goto label_140248eea
            
            goto label_140248cb4
        
    label_140248ed9:
        char temp3_1 = arg5 & 4
        cond:7_1 = temp3_1 == 0
        cond:8_1 = temp3_1 != 0
        cond:9_1 = temp3_1 == 0
        cond:10_1 = temp3_1 != 0
        
        if (temp3_1 == 0)
        label_140248cb4:
            
            if (not(cond:7_1))
            label_140248cc2:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm13, zmm2, 0x32), 0x84)
                
                if (cond:10_1)
                    goto label_140248f02
                
                goto label_140248ccc
        else
        label_140248eea:
            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg15, zmm1, 0x32), 0x84)
            
            if (cond:8_1)
                goto label_140248cc2
        
        bool cond:11_1
        bool cond:12_1
        bool cond:13_1
        bool cond:14_1
        
        if (not(cond:9_1))
        label_140248f02:
            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg14, zmm0, 0x32), 0x84)
            char temp6_1 = arg5 & 8
            cond:11_1 = temp6_1 == 0
            cond:12_1 = temp6_1 != 0
            cond:13_1 = temp6_1 == 0
            cond:14_1 = temp6_1 != 0
            
            if (temp6_1 != 0)
                goto label_140248cdf
            
            goto label_140248f0f
        
    label_140248ccc:
        char temp5_1 = arg5 & 8
        cond:11_1 = temp5_1 == 0
        cond:12_1 = temp5_1 != 0
        cond:13_1 = temp5_1 == 0
        cond:14_1 = temp5_1 != 0
        
        if (temp5_1 != 0)
        label_140248cdf:
            arg15 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg15, zmm1, 0x23), 0x24)
            
            if (cond:12_1)
                goto label_140248f23
            
            goto label_140248ce9
        
    label_140248f0f:
        arg15 = zmm1
        
        if (cond:11_1)
        label_140248ce9:
            zmm13 = zmm2
            
            if (not(cond:13_1))
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg14, zmm0, 0x23), 0x24)
        else
        label_140248f23:
            zmm13 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm13, zmm2, 0x23), 0x24)
            
            if (cond:14_1)
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg14, zmm0, 0x23), 0x24)
        
        arg14 = zmm0
        float arg_30[0x4]
        float arg_50[0x4]
        float arg_60[0x4]
        float arg_70[0x4]
        float arg_80[0x4]
        float arg_90[0x4]
        float arg_a0[0x4]
        float arg_b0[0x4]
        float arg_d0[0x4]
        float arg_e0[0x4]
        float arg_110[0x4]
        int32_t arg_130[0x4]
        float arg_140[0x4]
        float arg_160[0x4]
        float arg_170[0x4]
        float arg_190[0x4]
        float arg_1a0[0x4]
        float arg_270[0x4]
        float arg_430[0x4]
        float zmm3[0x4]
        float zmm9[0x4]
        float zmm12[0x4]
        
        while (true)
            uint32_t temp0_22 = _mm_movemask_ps(arg16 ^ arg12)
            arg_70 = arg13
            
            if (temp0_22 == 0)
                __return_addr.o = arg14
                arg_50 = arg15
                arg13 = arg11
            else
                char rcx_1 = temp0_22.b
                char temp7_1 = rcx_1 & 1
                
                if (temp7_1 != 0)
                    arg15[0] = zx.o(0)[0]
                    
                    if (temp7_1 != 0)
                        goto label_140248dd9
                else if (temp7_1 != 0)
                label_140248dd9:
                    zmm13[0] = 0
                    
                    if (temp7_1 != 0)
                        goto label_140248d37
                    
                    goto label_140248de4
                
                bool cond:22_1
                bool cond:23_1
                bool cond:25_1
                bool cond:26_1
                
                if (temp7_1 != 0)
                label_140248d37:
                    arg14[0] = zx.o(0)[0]
                    char temp9_1 = rcx_1 & 2
                    cond:22_1 = temp9_1 == 0
                    cond:23_1 = temp9_1 != 0
                    cond:25_1 = temp9_1 == 0
                    cond:26_1 = temp9_1 != 0
                    
                    if (temp9_1 != 0)
                        goto label_140248dfa
                    
                    goto label_140248d45
                
            label_140248de4:
                char temp8_1 = rcx_1 & 2
                cond:22_1 = temp8_1 == 0
                cond:23_1 = temp8_1 != 0
                cond:25_1 = temp8_1 == 0
                cond:26_1 = temp8_1 != 0
                
                if (temp8_1 == 0)
                label_140248d45:
                    
                    if (not(cond:22_1))
                    label_140248d58:
                        zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm13, 0), zmm13, 0xe2)
                        
                        if (cond:26_1)
                            goto label_140248e17
                        
                        goto label_140248d62
                else
                label_140248dfa:
                    arg15 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg15, 0), arg15, 0xe2)
                    
                    if (cond:23_1)
                        goto label_140248d58
                
                bool cond:36_1
                bool cond:37_1
                bool cond:39_1
                bool cond:40_1
                
                if (not(cond:25_1))
                label_140248e17:
                    arg14 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg14, 0), arg14, 0xe2)
                    char temp11_1 = rcx_1 & 4
                    cond:36_1 = temp11_1 == 0
                    cond:37_1 = temp11_1 != 0
                    cond:39_1 = temp11_1 == 0
                    cond:40_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_140248d73
                    
                    goto label_140248e24
                
            label_140248d62:
                char temp10_1 = rcx_1 & 4
                cond:36_1 = temp10_1 == 0
                cond:37_1 = temp10_1 != 0
                cond:39_1 = temp10_1 == 0
                cond:40_1 = temp10_1 != 0
                
                if (temp10_1 == 0)
                label_140248e24:
                    
                    if (not(cond:36_1))
                    label_140248e32:
                        zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zx.o(0), zmm13, 0x30), 0x84)
                        
                        if (cond:40_1)
                            goto label_140248d8c
                        
                        goto label_140248e3d
                else
                label_140248d73:
                    arg15 = _mm_shuffle_ps(arg15, _mm_shuffle_ps(zx.o(0), arg15, 0x30), 0x84)
                    
                    if (cond:37_1)
                        goto label_140248e32
                
                bool cond:52_1
                bool cond:64_1
                bool cond:65_1
                bool cond:53_1
                
                if (cond:39_1)
                label_140248e3d:
                    char temp13_1 = rcx_1 & 8
                    cond:52_1 = temp13_1 == 0
                    cond:53_1 = temp13_1 != 0
                    cond:64_1 = temp13_1 == 0
                    cond:65_1 = temp13_1 != 0
                    
                    if (temp13_1 != 0)
                    label_140248e4e:
                        arg15 = _mm_shuffle_ps(arg15, _mm_shuffle_ps(zx.o(0), arg15, 0x20), 0x24)
                        
                        if (cond:53_1)
                            goto label_140248da8
                        
                        goto label_140248e59
                else
                label_140248d8c:
                    arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(zx.o(0), arg14, 0x30), 0x84)
                    char temp14_1 = rcx_1 & 8
                    cond:52_1 = temp14_1 == 0
                    cond:53_1 = temp14_1 != 0
                    cond:64_1 = temp14_1 == 0
                    cond:65_1 = temp14_1 != 0
                    
                    if (temp14_1 != 0)
                        goto label_140248e4e
                
                if (cond:52_1)
                label_140248e59:
                    arg_50 = arg15
                    
                    if (cond:64_1)
                        __return_addr.o = arg14
                        arg13 = arg11
                    else
                        arg13 = arg11
                        __return_addr.o =
                            _mm_shuffle_ps(arg14, _mm_shuffle_ps(zx.o(0), arg14, 0x20), 0x24)
                else
                label_140248da8:
                    zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zx.o(0), zmm13, 0x20), 0x24)
                    arg_50 = arg15
                    
                    if (cond:65_1)
                        arg13 = arg11
                        __return_addr.o =
                            _mm_shuffle_ps(arg14, _mm_shuffle_ps(zx.o(0), arg14, 0x20), 0x24)
                    else
                        __return_addr.o = arg14
                        arg13 = arg11
            
            zmm4 = __return_addr.o
            zmm3 = zx.o(zmm4[0].q)
            zmm4 = _mm_unpackhi_epi32(zmm4, zmm10[0].q)
            float temp0_54[0x4] = _mm_unpacklo_ps(arg_50, zmm13[0].q)
            float temp0_55[0x4] = _mm_unpackhi_ps(arg_50, zmm13)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, zmm3, 0x84)
            float arg_490[0x4] = temp0_56
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, zmm3, 0xde)
            float arg_4a0[0x4] = temp0_57
            zmm1 = temp0_55[0].q | zmm4[0].q << 0x40
            float arg_4b0[0x4] = zmm1
            zmm4[0].q = temp0_55 u>> 0x40
            float arg_4c0[0x4] = zmm4
            int64_t rax_3 = sx.q(arg21[0])
            zmm4 = _mm_shuffle_epi32(temp0_56, 0x4e)
            int64_t rax_5 = rax_3 * 0x30
            *(arg9 + rax_5 + 0x10) = arg_50[0]
            *(arg9 + rax_5 + 0x14) = zmm13[0]
            *(arg9 + rax_5 + 0x18) = zmm4[0]
            *(arg9 + rax_5 + 0x1c) = 0
            int64_t rax_7 = sx.q(_mm_shuffle_epi32(arg21, 0x4e)[0])
            float temp0_60[0x4] = _mm_shuffle_ps(zmm13, zmm3, 0xd5)
            zmm3 = _mm_shuffle_epi32(temp0_57, 0x4e)
            int64_t rax_9 = rax_7 * 0x30
            *(arg9 + rax_9 + 0x10) = temp0_57[0]
            *(arg9 + rax_9 + 0x14) = temp0_60[0]
            *(arg9 + rax_9 + 0x18) = zmm3[0]
            *(arg9 + rax_9 + 0x1c) = 0
            int64_t rax_11 = sx.q(arg31[0])
            zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
            float temp0_63[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
            int64_t rax_13 = rax_11 * 0x30
            *(arg9 + rax_13 + 0x10) = temp0_55[0]
            *(arg9 + rax_13 + 0x14) = temp0_63[0]
            *(arg9 + rax_13 + 0x18) = zmm2[0]
            *(arg9 + rax_13 + 0x1c) = 0
            *(arg9 + sx.q(_mm_shuffle_epi32(arg31, 0x4e)[0]) * 0x30 + 0x10) = arg_4c0
            arg10 = zx.q(arg10.d + 4)
            arg12 = _mm_cmpeq_epi32(arg21, arg21)
            float arg_210[0x4]
            
            if (arg10.d s>= arg8)
                uint64_t result = zx.q(arg82)
                
                if (arg10.d s< result.d)
                    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg10.d), 0), data_142e11d00)
                    zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
                    zmm0 = _mm_slli_epi32(zmm0, 3) & zmm3
                    int64_t rbp_1 = sx.q(zmm0[0])
                    int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    int64_t rcx_3 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                    arg23 = *(arg2 + rcx_3)
                    zmm7 = zx.o(*(arg2 + rdi_2))
                    zmm10 = zx.o(*(arg2 + rbp_1))
                    arg_170 = *(arg2 + rbx_1)
                    zmm0 = data_142fc95e0 & zmm3
                    uint64_t rcx_4 = zx.q(zmm0[0])
                    uint64_t rdx = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    uint64_t rdi_3 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + arg2 + rcx_3))
                    zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_3 + arg2 + rdi_2)), zmm0[0].q)
                    zmm0 = _mm_slli_epi32(
                        _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(rcx_4 + arg2 + rbp_1)), 
                                zx.o(*(rdx + arg2 + rbx_1))[0].q), 
                            zmm1[0].q), 
                        3) & zmm3
                    int64_t rax_22 = sx.q(zmm0[0])
                    int64_t rcx_6 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    int64_t rdx_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])))
                    zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_2)), zmm0[0].q)
                    arg15 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg3 + rax_22)), zx.o(*(arg3 + rcx_6))[0].q), 
                        zmm1[0].q)
                    arg11 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(temp0_56, temp0_56), arg15)
                    arg_1a0 = arg11
                    arg11 &= not.o(zmm3)
                    
                    if (_mm_movemask_ps(arg11) != 0)
                        arg_60 = zmm7
                        arg34 = zmm3
                        arg13 = zx.o(0)
                        zmm9 = _mm_cmpgt_epi32(zx.o(0), arg15)
                        zmm2 = _mm_shuffle_epi32(arg15, 0x4e)
                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                        zmm4 = _mm_add_epi64(4, zx.o(arg4))
                        zmm0 = arg15 & arg11
                        int64_t rax_25 = sx.q(zmm0[0])
                        int64_t rcx_8 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                        int64_t rdx_4 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                        zmm0 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])))
                        zmm3 = _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_4)), zmm0[0].q)
                        int32_t temp0_99[0x4] = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_25)), zx.o(*(arg4 + rcx_8))[0].q), 
                            zmm3[0].q)
                        zmm7 = _mm_srli_epi32(temp0_99, 0x18) & arg11
                        arg12 = _mm_srli_epi32(temp0_99, 0x1c) & arg11
                        zmm0 = _mm_slli_epi32(arg12, 2) & arg11
                        uint64_t rax_26 = zx.q(zmm0[0])
                        uint64_t rdx_5 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                        uint64_t rbp_6 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                        zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + &data_143442cf0))
                        zmm3 = _mm_unpacklo_epi32(zx.o(*(rbp_6 + &data_143442cf0)), zmm0[0].q)
                        arg16 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(rax_26 + &data_143442cf0)), 
                                zx.o(*(rdx_5 + &data_143442cf0))[0].q), 
                            zmm3[0].q)
                        zmm13 = zmm7
                        zmm3 = data_143442c00 & zmm7
                        arg18 = zmm3
                        zmm0 = (_mm_slli_epi32(arg12, 3) | zmm3) & arg11
                        uint32_t rax_28 = zx.d(*(zx.q(zmm0[0]) + &data_143442d10))
                        uint64_t rdx_6 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                        uint32_t rbp_8 =
                            zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + &data_143442d10))
                        uint32_t rbx_7 =
                            zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + &data_143442d10)) << 8
                            | rbp_8
                        zmm3 = _mm_unpacklo_epi16(
                            _mm_unpacklo_epi8(
                                _mm_insert_epi16(
                                    zx.o(zx.d(*(rdx_6 + &data_143442d10)) << 8) | zx.o(rax_28), 
                                    rbx_7, 1), 
                                0), 
                            0)
                        arg_130 = arg12
                        zmm7 = _mm_cmpeq_epi32(data_142fc95c0, arg12)
                        zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm7 & not.o(arg11), 0x1f), 0x1f)
                        arg12 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            arg12 = zmm0 & zmm3
                        
                        arg15 = _mm_unpacklo_epi32(arg15, zmm9[0].q)
                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                        arg14 = _mm_shuffle_epi32(zmm4, 0x44)
                        zmm12 = arg11 & temp0_99 & data_143442be0
                        arg16 &= arg11
                        zmm0 = data_142fc95e0 & arg11
                        arg_30 = arg11
                        arg11 = _mm_srai_epi32(_mm_slli_epi32(arg11 & zmm7, 0x1f), 0x1f)
                        char temp0_125 = _mm_movemask_ps(arg11)
                        arg_50 = zmm7
                        arg_270 = arg11
                        
                        if (temp0_125 == 0)
                            zmm3 = zx.o(0)
                        else
                            zmm3 &= arg11
                            arg12 = _mm_srli_epi32(arg11, 0x1f) | (arg11 & not.o(arg12))
                        
                        zmm3 = _mm_madd_epi16(zmm3, zmm0)
                        arg31 = zmm2
                        arg11 = _mm_add_epi64(arg14, zmm2)
                        arg14 = _mm_add_epi64(arg14, arg15)
                        zmm13 &= data_143442bf0
                        zmm0 = _mm_shuffle_epi32(arg12, 0xf5)
                        zmm9 = arg_30
                        arg21 = _mm_unpacklo_epi32(
                            _mm_shuffle_epi32(_mm_mul_epu32(arg12, arg16), 0xe8), 
                            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg16, 0xf5), zmm0), 
                                0xe8)[0].q) & zmm9
                        zmm3 &= zmm9
                        zmm2 = __pcmpgtd_xmmdq_memdq(zmm12, data_142d3f5b0) & zmm9
                        arg16 = zx.o(0)
                        arg12 = zmm13
                        zmm13 = arg11
                        zmm7 = zx.o(0)
                        arg_a0 = arg14
                        arg_80 = arg11
                        arg17 = arg12
                        arg24 = arg15
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) != 0)
                            arg_70 = zmm3
                            arg13 = zx.o(0)
                            int32_t temp0_140[0x4] =
                                _mm_cmpeq_epi32(data_142fc95f0 & arg12, zx.o(0))
                            zmm4 = _mm_srai_epi32(_mm_slli_epi32(temp0_140 & zmm2, 0x1f), 0x1f)
                            arg16 = zx.o(0)
                            zmm7 = zx.o(0)
                            zmm1 = arg80
                            
                            if (_mm_movemask_ps(zmm4) != 0)
                                zmm7 = zx.o(0)
                                
                                if (0f >= zmm1[0])
                                    arg13 = zx.o(0)
                                    arg16 = zx.o(0)
                                else
                                    arg11 = _mm_add_epi32(_mm_cmpeq_epi32(arg11, arg11), zmm12)
                                    
                                    if (zmm1[0] >= 1f)
                                        arg11 &= zmm4
                                        arg13 = arg11
                                        arg16 = arg11
                                    else
                                        float temp0_146[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                                        zmm0 = _mm_mul_ps(_mm_cvtepi32_ps(arg11), temp0_146)
                                        zmm1 = data_142d3f780
                                        float temp0_150[0x4] = __addps_xmmps_memps(
                                            _mm_and_ps(data_142d3f770, zmm0), data_142d3f740)
                                        zmm1 = _mm_and_ps(zmm1, zmm0)
                                        zmm3 = __addps_xmmps_memps(temp0_150, data_1434427a0) ^ zmm1
                                        zmm7 = zx.o(0)
                                        float temp0_155[0x4] = _mm_add_ps(
                                            __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm0, zmm3, 1), 
                                                data_142d3f7e0), 
                                            zmm3)
                                        zmm3 = _mm_cvttps_epi32(temp0_155)
                                        arg13 = _mm_cmpgt_epi32(zmm3, arg11)
                                        arg13 = ((arg13 & not.o(zmm3)) | (arg11 & arg13)) & zmm4
                                        
                                        if (arg81 != 1)
                                            zmm0 = _mm_sub_ps(zmm0, temp0_155)
                                            zmm7 = zmm0
                                        
                                        zmm1 = _mm_sub_epi32(arg13, _mm_cmpeq_epi32(zmm0, zmm0))
                                        arg16 = _mm_cmpgt_epi32(arg11, zmm1)
                                        arg16 = ((arg16 & not.o(arg11)) | (zmm1 & arg16)) & zmm4
                                        zmm1 = arg80
                                        zmm9 = arg_30
                                
                                zmm7 &= zmm4
                            
                            int32_t temp0_163[0x4] =
                                _mm_srai_epi32(_mm_slli_epi32(temp0_140 & not.o(zmm2), 0x1f), 0x1f)
                            
                            if (_mm_movemask_ps(temp0_163) != 0)
                                zmm9 = zmm12
                                zmm2 = zmm1
                                zmm1 = _mm_cmpgt_epi32(data_143442ce0, data_142d3f780 ^ zmm12)
                                int32_t rax_33
                                rax_33.b = 0f >= zmm2[0]
                                zmm2 = _mm_shuffle_epi32(zx.o(neg.d(rax_33)), 0) | zmm1
                                zmm0 = zmm2 & temp0_163
                                arg22 = zmm7
                                
                                if (_mm_movemask_ps(zmm0) == 0)
                                    arg_90 = arg13
                                else
                                    zmm1 = zmm0 & not.o(arg13)
                                    zmm0 &= not.o(arg16)
                                    arg_90 = zmm1
                                    arg16 = zmm0
                                
                                arg11 = arg80
                                zmm4 = zx.o(0)
                                arg15 = zmm2 & not.o(temp0_163)
                                uint32_t temp0_168 = _mm_movemask_ps(arg15)
                                
                                if (temp0_168 == 0)
                                    arg11 = arg22
                                    arg13 = arg_90
                                    zmm9 = arg_30
                                else
                                    int32_t temp0_170[0x4] =
                                        _mm_add_epi32(zmm9, _mm_cmpeq_epi32(zmm0, zmm0))
                                    
                                    if (arg11[0] >= 1f)
                                        arg12 = temp0_170 & arg15
                                        arg16 = (arg15 & not.o(arg16)) | arg12
                                        arg13 = (arg15 & not.o(arg_90)) | arg12
                                        arg11 = arg22
                                        zmm9 = arg_30
                                    else
                                        arg_40 = zmm2
                                        zmm0 = _mm_shuffle_epi32(zmm9, 0xf5)
                                        arg13 = arg11
                                        zmm2 = arg21
                                        zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm0)
                                        zmm0 = _mm_unpacklo_epi32(
                                            _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm9), 0xe8), 
                                            _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                                        arg11 = _mm_unpacklo_epi32(arg_70, 0)
                                        zmm7 = _mm_unpackhi_epi32(arg_70, 0)
                                        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                                        zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                        zmm4 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                        zmm7 = _mm_add_epi64(zmm7, zmm13)
                                        arg11 = __paddq_xmmdq_memdq(arg11, arg_a0)
                                        zmm3 = data_143442a20
                                        zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm4[0].q)
                                        zmm7 = _mm_add_epi64(_mm_add_epi64(zmm7, zmm3), zmm1)
                                        arg11 = _mm_add_epi64(_mm_add_epi64(arg11, zmm3), zmm0)
                                        zmm0 = data_143442c10
                                        arg11 &= zmm0
                                        zmm7 &= zmm0
                                        __return_addr.o = zmm7
                                        float temp0_191[0x4] = _mm_shuffle_ps(arg13, arg13, 0)
                                        float temp0_192[0x4] = _mm_cvtepi32_ps(temp0_170)
                                        zmm2 = zx.o(0)
                                        zmm2[0] = float.s(arg79 - 1)
                                        float temp0_193[0x4] = _mm_mul_ps(temp0_192, temp0_191)
                                        zmm2[0] = zmm2[0] * arg13[0]
                                        arg_190 = zmm2
                                        int32_t rax_37 = int.d(zmm2[0])
                                        int32_t rbp_9 = 0
                                        
                                        if (rax_37 s>= 0)
                                            rbp_9 = rax_37
                                        
                                        if (rbp_9 s> arg79 - 2)
                                            rbp_9 = arg79 - 2
                                        
                                        zmm1 = _mm_cvttps_epi32(temp0_193)
                                        zmm2 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm1
                                        zmm12 = _mm_cmpgt_epi32(temp0_170, zmm2)
                                        zmm12 = (zmm12 & not.o(temp0_170)) | (zmm2 & zmm12)
                                        arg_e0 = arg16
                                        arg19 = zmm9
                                        arg_b0 = arg11
                                        
                                        if (arg79 s< 0x100)
                                            zmm2 = _mm_shuffle_epi32(zmm12, 0x4e)
                                            zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                            zmm1 = _mm_add_epi64(
                                                _mm_unpacklo_epi32(zmm12, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm12)[0].q), 
                                                arg11)
                                            char rdx_9 = temp0_168.b
                                            
                                            if ((rdx_9 & 1) == 0)
                                                zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
                                                
                                                if ((rdx_9 & 2) != 0)
                                                    goto label_140249e1c
                                                
                                                goto label_140249b66
                                            
                                            arg11 = zx.o(*zmm1[0].q)
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
                                            
                                            if ((rdx_9 & 2) != 0)
                                            label_140249e1c:
                                                arg11 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                                        arg11, 0), 
                                                    arg11, 0xe2)
                                                zmm2 = __paddq_xmmdq_memdq(zmm2, __return_addr.o)
                                                
                                                if ((rdx_9 & 4) == 0)
                                                    goto label_140249b74
                                                
                                                goto label_140249e3d
                                            
                                        label_140249b66:
                                            zmm2 = __paddq_xmmdq_memdq(zmm2, __return_addr.o)
                                            
                                            if ((rdx_9 & 4) != 0)
                                            label_140249e3d:
                                                arg11 = _mm_shuffle_ps(arg11, 
                                                    _mm_shuffle_ps(zx.o(*zmm2[0].q), arg11, 0x30), 
                                                    0x84)
                                                
                                                if ((rdx_9 & 8) != 0)
                                                    arg11 = _mm_shuffle_ps(arg11, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                            arg11, 0x20), 
                                                        0x24)
                                            else
                                            label_140249b74:
                                                
                                                if ((rdx_9 & 8) != 0)
                                                    arg11 = _mm_shuffle_ps(arg11, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                            arg11, 0x20), 
                                                        0x24)
                                            
                                            arg11 = __andps_xmmxud_memxud(arg11, data_142ed6810)
                                            zmm0 = zx.o(rbp_9)
                                            float temp0_253[0x4] = _mm_shuffle_epi32(zmm0, 0)
                                            arg11 = _mm_cmpgt_epi32(arg11, temp0_253)
                                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                            arg_140 = arg11 ^ zmm0
                                            zmm4 = zmm12
                                            
                                            if (_mm_movemask_ps(arg11 & not.o(arg15)) != 0)
                                                arg16 = (arg11 & not.o(temp0_170)) | (arg11 & zmm12)
                                                zmm9 = _mm_sub_epi32(zmm12, zmm1)
                                                arg11 &= not.o(_mm_cmpgt_epi32(arg19, zmm9))
                                                zmm3 = arg15 & arg11
                                                uint32_t i = _mm_movemask_ps(zmm3)
                                                
                                                if (i == 0)
                                                    zmm4 = arg16
                                                else
                                                    zmm2 = zmm12
                                                    
                                                    do
                                                        zmm13 = zmm9
                                                        float temp0_268[0x4] =
                                                            _mm_shuffle_epi32(zmm9, 0x4e)
                                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_268)
                                                        zmm0 = __paddq_xmmdq_memdq(
                                                            _mm_unpacklo_epi32(zmm9, 
                                                                _mm_cmpgt_epi32(zx.o(0), zmm9)[0].q), 
                                                            arg_b0)
                                                        char temp0_273 = _mm_movemask_ps(zmm3)
                                                        
                                                        if ((temp0_273 & 1) == 0)
                                                            zmm3 = __return_addr.o
                                                            zmm4 =
                                                                _mm_unpacklo_epi32(temp0_268, zmm1[0].q)
                                                            
                                                            if ((temp0_273 & 2) != 0)
                                                                goto label_140249c69
                                                            
                                                            goto label_140249cdc
                                                        
                                                        zmm7[0] = zx.o(*zmm0[0].q)[0]
                                                        zmm3 = __return_addr.o
                                                        zmm4 =
                                                            _mm_unpacklo_epi32(temp0_268, zmm1[0].q)
                                                        
                                                        if ((temp0_273 & 2) != 0)
                                                        label_140249c69:
                                                            zmm7 = _mm_shuffle_ps(
                                                                _mm_shuffle_ps(
                                                                    zx.o(
                                                                        *_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                                                    zmm7, 0), 
                                                                zmm7, 0xe2)
                                                            zmm4 = _mm_add_epi64(zmm4, zmm3)
                                                            
                                                            if ((temp0_273 & 4) == 0)
                                                                goto label_140249ce5
                                                            
                                                            goto label_140249c85
                                                        
                                                    label_140249cdc:
                                                        zmm4 = _mm_add_epi64(zmm4, zmm3)
                                                        
                                                        if ((temp0_273 & 4) != 0)
                                                        label_140249c85:
                                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                                _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm7, 
                                                                    0x30), 
                                                                0x84)
                                                            
                                                            if ((temp0_273 & 8) != 0)
                                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                                    _mm_shuffle_ps(
                                                                        zx.o(
                                                                            *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                                        zmm7, 0x20), 
                                                                    0x24)
                                                        else
                                                        label_140249ce5:
                                                            
                                                            if ((temp0_273 & 8) != 0)
                                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                                    _mm_shuffle_ps(
                                                                        zx.o(
                                                                            *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                                        zmm7, 0x20), 
                                                                    0x24)
                                                        
                                                        zmm1 = _mm_cmpgt_epi32(
                                                            __andps_xmmxud_memxud(zmm7, 
                                                                data_142ed6810), 
                                                            temp0_253) & arg11
                                                        zmm0 = zx.o(0)
                                                        zmm4 = zmm1 & not.o(arg16)
                                                        zmm2 &= zmm1
                                                        
                                                        if (_mm_movemask_ps(zmm1 & arg15) != i)
                                                            zmm1 ^= arg11
                                                            zmm0 = zmm1
                                                        
                                                        zmm4 |= zmm2
                                                        zmm9 = __psubd_xmmdq_memdq(zmm13, 
                                                            data_142d3f800)
                                                        arg11 = _mm_cmpgt_epi32(arg19, zmm9) & zmm0
                                                        zmm3 = arg11 & arg15
                                                        i = _mm_movemask_ps(zmm3)
                                                        zmm2 = zmm13
                                                        arg16 = zmm4
                                                    while (i != 0)
                                            
                                            uint32_t temp0_1322 =
                                                _mm_movemask_ps(_mm_andnot_ps(arg_140, arg15))
                                            uint32_t i_1
                                            
                                            if (temp0_1322 != 0)
                                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ arg_140
                                                zmm4 &= arg_140
                                                zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                                                zmm12 = _mm_add_epi32(zmm12, zmm9)
                                                arg11 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                                zmm3 = arg11 & arg15
                                                i_1 = _mm_movemask_ps(zmm3)
                                            
                                            if (temp0_1322 == 0 || i_1 == 0)
                                                zmm2 = zmm4
                                                arg16 = arg_e0
                                            else
                                                zmm13 = data_142ed6810
                                                arg16 = arg_e0
                                                
                                                do
                                                    zmm2 = _mm_shuffle_epi32(zmm12, 0x4e)
                                                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                                    zmm0 = __paddq_xmmdq_memdq(
                                                        _mm_unpacklo_epi32(zmm12, 
                                                            _mm_cmpgt_epi32(zx.o(0), zmm12)[0].q), 
                                                        arg_b0)
                                                    char temp0_1340 = _mm_movemask_ps(zmm3)
                                                    
                                                    if ((temp0_1340 & 1) == 0)
                                                        zmm3 = __return_addr.o
                                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                                        
                                                        if ((temp0_1340 & 2) != 0)
                                                            goto label_14024df56
                                                        
                                                        goto label_14024dfc7
                                                    
                                                    zmm7[0] = zx.o(*zmm0[0].q)[0]
                                                    zmm3 = __return_addr.o
                                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                                    
                                                    if ((temp0_1340 & 2) != 0)
                                                    label_14024df56:
                                                        zmm7 = _mm_shuffle_ps(
                                                            _mm_shuffle_ps(
                                                                zx.o(
                                                                    *_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                                                zmm7, 0), 
                                                            zmm7, 0xe2)
                                                        zmm2 = _mm_add_epi64(zmm2, zmm3)
                                                        
                                                        if ((temp0_1340 & 4) == 0)
                                                            goto label_14024dfd0
                                                        
                                                        goto label_14024df72
                                                    
                                                label_14024dfc7:
                                                    zmm2 = _mm_add_epi64(zmm2, zmm3)
                                                    
                                                    if ((temp0_1340 & 4) != 0)
                                                    label_14024df72:
                                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                                            _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm7, 
                                                                0x30), 
                                                            0x84)
                                                        
                                                        if ((temp0_1340 & 8) != 0)
                                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                                _mm_shuffle_ps(
                                                                    zx.o(
                                                                        *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                                    zmm7, 0x20), 
                                                                0x24)
                                                    else
                                                    label_14024dfd0:
                                                        
                                                        if ((temp0_1340 & 8) != 0)
                                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                                _mm_shuffle_ps(
                                                                    zx.o(
                                                                        *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                                    zmm7, 0x20), 
                                                                0x24)
                                                    
                                                    zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, zmm13), 
                                                        temp0_253) & not.o(arg11)
                                                    zmm2 = zmm1 & not.o(zmm4)
                                                    zmm4 = zx.o(0)
                                                    
                                                    if (_mm_movemask_ps(zmm1 & arg15) != i_1)
                                                        zmm4 = zmm1 ^ arg11
                                                    
                                                    zmm2 |= zmm1 & zmm12
                                                    zmm12 = _mm_add_epi32(zmm12, zmm9)
                                                    arg11 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm4
                                                    zmm3 = arg11 & arg15
                                                    i_1 = _mm_movemask_ps(zmm3)
                                                    zmm4 = zmm2
                                                while (i_1 != 0)
                                            
                                            zmm3 = (zmm2 & arg15) | (arg15 & not.o(arg_90))
                                            float temp0_1352[0x4] = _mm_shuffle_epi32(zmm3, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_1352)
                                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                                            arg13 = zmm3
                                            zmm0 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm3, zmm2[0].q), arg_b0)
                                            
                                            if ((rdx_9 & 1) != 0)
                                                zmm2 = zx.o(*zmm0[0].q)
                                            
                                            zmm4 = _mm_unpacklo_epi32(temp0_1352, zmm1[0].q)
                                            zmm13 = arg_80
                                            
                                            if ((rdx_9 & 2) == 0)
                                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                                zmm4 = __paddq_xmmdq_memdq(zmm4, __return_addr.o)
                                                
                                                if ((rdx_9 & 4) != 0)
                                                    goto label_14024e25b
                                                
                                                goto label_14024e0fb
                                            
                                            zmm0 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                                    zmm2, 0), 
                                                zmm2, 0xe2)
                                            zmm2 = zmm0
                                            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                            zmm4 = __paddq_xmmdq_memdq(zmm4, __return_addr.o)
                                            
                                            if ((rdx_9 & 4) == 0)
                                            label_14024e0fb:
                                                zmm3 ^= arg15
                                                
                                                if ((rdx_9 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                        zmm2, 0x20)
                                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                            else
                                            label_14024e25b:
                                                zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                                zmm3 ^= arg15
                                                
                                                if ((rdx_9 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                        zmm2, 0x20)
                                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                            
                                            arg16 = (
                                                _mm_sub_epi32(arg13, _mm_cmpeq_epi32(zmm0, zmm0))
                                                & arg15) | (arg16 & zmm3)
                                            arg11 = _mm_cmpgt_epi32(arg19, arg16) & not.o(arg15)
                                            
                                            if (_mm_movemask_ps(arg11) != 0)
                                                arg16 = (temp0_170 & arg11) | (arg11 & not.o(arg16))
                                            
                                            arg11 = arg22
                                            zmm9 = arg_30
                                            arg12 = __return_addr.o
                                            float temp0_1367[0x4] = _mm_shuffle_epi32(arg16, 0x4e)
                                            zmm0 = _mm_cmpgt_epi32(zx.o(0), temp0_1367)
                                            zmm3 = _mm_unpacklo_epi32(arg16, 
                                                _mm_cmpgt_epi32(zx.o(0), arg16)[0].q)
                                            zmm1 = _mm_add_epi64(arg_b0, zmm3)
                                            
                                            if ((rdx_9 & 1) == 0)
                                                zmm4 = _mm_unpacklo_epi32(temp0_1367, zmm0[0].q)
                                                
                                                if ((rdx_9 & 2) != 0)
                                                    goto label_14024e2a4
                                                
                                                goto label_14024e1c9
                                            
                                            zmm3 = zx.o(*zmm1[0].q)
                                            zmm4 = _mm_unpacklo_epi32(temp0_1367, zmm0[0].q)
                                            
                                            if ((rdx_9 & 2) != 0)
                                            label_14024e2a4:
                                                zmm0 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                                        zmm3, 0), 
                                                    zmm3, 0xe2)
                                                zmm3 = zmm0
                                                arg12 = _mm_add_epi64(arg12, zmm4)
                                                
                                                if ((rdx_9 & 4) == 0)
                                                    goto label_14024e1d6
                                                
                                                goto label_14024e2c4
                                            
                                        label_14024e1c9:
                                            arg12 = _mm_add_epi64(arg12, zmm4)
                                            
                                            if ((rdx_9 & 4) != 0)
                                            label_14024e2c4:
                                                zmm0 = _mm_shuffle_ps(zx.o(*arg12[0].q), zmm3, 0x30)
                                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                                
                                                if ((rdx_9 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(arg12, 0x4e)[0].q), 
                                                        zmm3, 0x20)
                                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                            else
                                            label_14024e1d6:
                                                
                                                if ((rdx_9 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(arg12, 0x4e)[0].q), 
                                                        zmm3, 0x20)
                                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                            
                                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                            zmm2 = __andps_xmmxud_memxud(zmm2, data_142ed6810)
                                            zmm3 = __andps_xmmxud_memxud(zmm3, data_142ed6810)
                                            zmm7 = arg_40 ^ zmm0
                                            zmm4 = zx.o(0)
                                            
                                            if (arg81 != 1)
                                            label_14024a1c2:
                                                zmm3 = _mm_sub_epi32(zmm3, zmm2)
                                                zmm0 = __pcmpgtd_xmmdq_memdq(zmm3, data_142d3f5b0)
                                                zmm4 = _mm_div_ps(
                                                    _mm_sub_ps(_mm_shuffle_ps(arg_190, arg_190, 0), 
                                                        _mm_cvtepi32_ps(zmm2)), 
                                                    _mm_cvtepi32_ps((zmm0 & zmm3)
                                                    | (zmm0 & not.o(data_142d3f5b0))))
                                        else
                                            zmm4 = _mm_add_epi32(zmm12, zmm12)
                                            zmm2 = _mm_shuffle_epi32(zmm4, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                            zmm4 = _mm_add_epi64(
                                                _mm_unpacklo_epi32(zmm4, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm4)[0].q), 
                                                arg11)
                                            char rdx_8 = temp0_168.b
                                            
                                            if ((rdx_8 & 1) == 0)
                                                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                                
                                                if ((rdx_8 & 2) != 0)
                                                    goto label_140249db7
                                                
                                                goto label_140249896
                                            
                                            zmm3 = zx.o(*zmm4[0].q)
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                            
                                            if ((rdx_8 & 2) != 0)
                                            label_140249db7:
                                                zmm3 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                        zmm3, 0), 
                                                    zmm3, 0xe2)
                                                zmm2 = __paddq_xmmdq_memdq(zmm2, __return_addr.o)
                                                
                                                if ((rdx_8 & 4) == 0)
                                                    goto label_1402498a4
                                                
                                                goto label_140249dd8
                                            
                                        label_140249896:
                                            zmm2 = __paddq_xmmdq_memdq(zmm2, __return_addr.o)
                                            
                                            if ((rdx_8 & 4) != 0)
                                            label_140249dd8:
                                                zmm3 = _mm_shuffle_ps(zmm3, 
                                                    _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm3, 0x30), 
                                                    0x84)
                                                
                                                if ((rdx_8 & 8) != 0)
                                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                            zmm3, 0x20), 
                                                        0x24)
                                            else
                                            label_1402498a4:
                                                
                                                if ((rdx_8 & 8) != 0)
                                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                            zmm3, 0x20), 
                                                        0x24)
                                            
                                            zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                            zmm0 = zx.o(rbp_9)
                                            zmm13 = _mm_shuffle_epi32(zmm0, 0)
                                            zmm3 = _mm_cmpgt_epi32(zmm3, zmm13)
                                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                            arg_140 = zmm3 ^ zmm0
                                            zmm4 = zmm12
                                            
                                            if (_mm_movemask_ps(zmm3 & not.o(arg15)) != 0)
                                                zmm7 = (zmm3 & not.o(temp0_170)) | (zmm3 & zmm12)
                                                zmm9 = _mm_sub_epi32(zmm12, zmm1)
                                                zmm3 &= not.o(_mm_cmpgt_epi32(arg19, zmm9))
                                                arg11 = arg15 & zmm3
                                                uint32_t i_2 = _mm_movemask_ps(arg11)
                                                
                                                if (i_2 == 0)
                                                    zmm4 = zmm7
                                                else
                                                    arg13 = zmm12
                                                    
                                                    do
                                                        zmm0 = zmm9
                                                        zmm2 = _mm_add_epi32(zmm9, zmm9)
                                                        zmm4 = _mm_shuffle_epi32(zmm2, 0x4e)
                                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                                        zmm2 = __paddq_xmmdq_memdq(
                                                            _mm_unpacklo_epi32(zmm2, 
                                                                _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), 
                                                            arg_b0)
                                                        char temp0_230 = _mm_movemask_ps(arg11)
                                                        
                                                        if ((temp0_230 & 1) == 0)
                                                            arg11 = __return_addr.o
                                                            zmm4 =
                                                                _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                                            
                                                            if ((temp0_230 & 2) != 0)
                                                                goto label_140249999
                                                            
                                                            goto label_140249a1f
                                                        
                                                        arg16[0] = zx.o(*zmm2[0].q)[0]
                                                        arg11 = __return_addr.o
                                                        zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                                        
                                                        if ((temp0_230 & 2) != 0)
                                                        label_140249999:
                                                            arg16 = _mm_shuffle_ps(
                                                                _mm_shuffle_ps(
                                                                    zx.o(
                                                                        *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                                    arg16, 0), 
                                                                arg16, 0xe2)
                                                            zmm4 = _mm_add_epi64(zmm4, arg11)
                                                            
                                                            if ((temp0_230 & 4) == 0)
                                                                goto label_140249a2c
                                                            
                                                            goto label_1402499bb
                                                        
                                                    label_140249a1f:
                                                        zmm4 = _mm_add_epi64(zmm4, arg11)
                                                        
                                                        if ((temp0_230 & 4) != 0)
                                                        label_1402499bb:
                                                            arg16 = _mm_shuffle_ps(arg16, 
                                                                _mm_shuffle_ps(zx.o(*zmm4[0].q), arg16, 
                                                                    0x30), 
                                                                0x84)
                                                            
                                                            if ((temp0_230 & 8) != 0)
                                                                arg16 = _mm_shuffle_ps(arg16, 
                                                                    _mm_shuffle_ps(
                                                                        zx.o(
                                                                            *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                                        arg16, 0x20), 
                                                                    0x24)
                                                        else
                                                        label_140249a2c:
                                                            
                                                            if ((temp0_230 & 8) != 0)
                                                                arg16 = _mm_shuffle_ps(arg16, 
                                                                    _mm_shuffle_ps(
                                                                        zx.o(
                                                                            *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                                        arg16, 0x20), 
                                                                    0x24)
                                                        
                                                        zmm2 = _mm_cmpgt_epi32(
                                                            __andps_xmmxud_memxud(arg16, 
                                                                data_143442cd0), 
                                                            zmm13) & zmm3
                                                        zmm1 = zx.o(0)
                                                        
                                                        if (_mm_movemask_ps(zmm2 & arg15) != i_2)
                                                            zmm1 = zmm2 ^ zmm3
                                                        
                                                        zmm4 = (zmm2 & not.o(zmm7)) | (arg13 & zmm2)
                                                        zmm9 = __psubd_xmmdq_memdq(zmm0, 
                                                            data_142d3f800)
                                                        zmm3 = _mm_cmpgt_epi32(arg19, zmm9) & zmm1
                                                        arg11 = zmm3 & arg15
                                                        i_2 = _mm_movemask_ps(arg11)
                                                        arg13 = zmm0
                                                        zmm7 = zmm4
                                                    while (i_2 != 0)
                                            
                                            uint32_t temp0_300 =
                                                _mm_movemask_ps(_mm_andnot_ps(arg_140, arg15))
                                            uint32_t i_3
                                            
                                            if (temp0_300 != 0)
                                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ arg_140
                                                zmm4 &= arg_140
                                                zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                                                zmm12 = _mm_add_epi32(zmm12, zmm9)
                                                arg11 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                                zmm3 = arg11 & arg15
                                                i_3 = _mm_movemask_ps(zmm3)
                                            
                                            if (temp0_300 == 0 || i_3 == 0)
                                                zmm2 = zmm4
                                                arg16 = arg_e0
                                            else
                                                arg13 = data_143442cd0
                                                arg16 = arg_e0
                                                
                                                do
                                                    zmm0 = _mm_add_epi32(zmm12, zmm12)
                                                    zmm2 = _mm_shuffle_epi32(zmm0, 0x4e)
                                                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                                    zmm0 = __paddq_xmmdq_memdq(
                                                        _mm_unpacklo_epi32(zmm0, 
                                                            _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                                        arg_b0)
                                                    char temp0_319 = _mm_movemask_ps(zmm3)
                                                    
                                                    if ((temp0_319 & 1) == 0)
                                                        zmm3 = __return_addr.o
                                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                                        
                                                        if ((temp0_319 & 2) != 0)
                                                            goto label_140249ef6
                                                        
                                                        goto label_140249f6a
                                                    
                                                    zmm7[0] = zx.o(*zmm0[0].q)[0]
                                                    zmm3 = __return_addr.o
                                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                                    
                                                    if ((temp0_319 & 2) != 0)
                                                    label_140249ef6:
                                                        zmm7 = _mm_shuffle_ps(
                                                            _mm_shuffle_ps(
                                                                zx.o(
                                                                    *_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                                                zmm7, 0), 
                                                            zmm7, 0xe2)
                                                        zmm2 = _mm_add_epi64(zmm2, zmm3)
                                                        
                                                        if ((temp0_319 & 4) == 0)
                                                            goto label_140249f73
                                                        
                                                        goto label_140249f12
                                                    
                                                label_140249f6a:
                                                    zmm2 = _mm_add_epi64(zmm2, zmm3)
                                                    
                                                    if ((temp0_319 & 4) != 0)
                                                    label_140249f12:
                                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                                            _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm7, 
                                                                0x30), 
                                                            0x84)
                                                        
                                                        if ((temp0_319 & 8) != 0)
                                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                                _mm_shuffle_ps(
                                                                    zx.o(
                                                                        *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                                    zmm7, 0x20), 
                                                                0x24)
                                                    else
                                                    label_140249f73:
                                                        
                                                        if ((temp0_319 & 8) != 0)
                                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                                _mm_shuffle_ps(
                                                                    zx.o(
                                                                        *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                                    zmm7, 0x20), 
                                                                0x24)
                                                    
                                                    zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, arg13), 
                                                        zmm13) & not.o(arg11)
                                                    zmm2 = zmm1 & not.o(zmm4)
                                                    zmm4 = zx.o(0)
                                                    
                                                    if (_mm_movemask_ps(zmm1 & arg15) != i_3)
                                                        zmm4 = zmm1 ^ arg11
                                                    
                                                    zmm2 |= zmm1 & zmm12
                                                    zmm12 = _mm_add_epi32(zmm12, zmm9)
                                                    arg11 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm4
                                                    zmm3 = arg11 & arg15
                                                    i_3 = _mm_movemask_ps(zmm3)
                                                    zmm4 = zmm2
                                                while (i_3 != 0)
                                            
                                            zmm2 = (zmm2 & arg15) | (arg15 & not.o(arg_90))
                                            arg13 = zmm2
                                            zmm0 = _mm_add_epi32(zmm2, zmm2)
                                            zmm4 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                            zmm0 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm0, zmm2[0].q), arg_b0)
                                            
                                            if ((rdx_8 & 1) != 0)
                                                zmm2 = zx.o(*zmm0[0].q)
                                            
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                            zmm13 = arg_80
                                            
                                            if ((rdx_8 & 2) == 0)
                                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                                zmm4 = __paddq_xmmdq_memdq(zmm4, __return_addr.o)
                                                
                                                if ((rdx_8 & 4) != 0)
                                                    goto label_14024de2f
                                                
                                                goto label_14024a09e
                                            
                                            zmm0 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                                    zmm2, 0), 
                                                zmm2, 0xe2)
                                            zmm2 = zmm0
                                            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                            zmm4 = __paddq_xmmdq_memdq(zmm4, __return_addr.o)
                                            
                                            if ((rdx_8 & 4) == 0)
                                            label_14024a09e:
                                                zmm3 ^= arg15
                                                
                                                if ((rdx_8 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                        zmm2, 0x20)
                                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                            else
                                            label_14024de2f:
                                                zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                                zmm3 ^= arg15
                                                
                                                if ((rdx_8 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                        zmm2, 0x20)
                                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                            
                                            arg16 = (
                                                _mm_sub_epi32(arg13, _mm_cmpeq_epi32(zmm0, zmm0))
                                                & arg15) | (arg16 & zmm3)
                                            arg11 = _mm_cmpgt_epi32(arg19, arg16) & not.o(arg15)
                                            
                                            if (_mm_movemask_ps(arg11) != 0)
                                                arg16 = (temp0_170 & arg11) | (arg11 & not.o(arg16))
                                            
                                            arg11 = arg22
                                            zmm9 = arg_30
                                            arg12 = __return_addr.o
                                            zmm1 = _mm_add_epi32(arg16, arg16)
                                            zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                                            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                            zmm3 = _mm_add_epi64(arg_b0, 
                                                _mm_unpacklo_epi32(zmm1, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q))
                                            zmm1 = zmm3
                                            
                                            if ((rdx_8 & 1) == 0)
                                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0[0].q)
                                                
                                                if ((rdx_8 & 2) != 0)
                                                    goto label_14024de78
                                                
                                                goto label_14024a173
                                            
                                            zmm3 = zx.o(*zmm1[0].q)
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm0[0].q)
                                            
                                            if ((rdx_8 & 2) != 0)
                                            label_14024de78:
                                                zmm0 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                                        zmm3, 0), 
                                                    zmm3, 0xe2)
                                                zmm3 = zmm0
                                                arg12 = _mm_add_epi64(arg12, zmm4)
                                                
                                                if ((rdx_8 & 4) == 0)
                                                    goto label_14024a180
                                                
                                                goto label_14024de98
                                            
                                        label_14024a173:
                                            arg12 = _mm_add_epi64(arg12, zmm4)
                                            
                                            if ((rdx_8 & 4) != 0)
                                            label_14024de98:
                                                zmm0 = _mm_shuffle_ps(zx.o(*arg12[0].q), zmm3, 0x30)
                                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                                
                                                if ((rdx_8 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(arg12, 0x4e)[0].q), 
                                                        zmm3, 0x20)
                                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                            else
                                            label_14024a180:
                                                
                                                if ((rdx_8 & 8) != 0)
                                                    zmm0 = _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(arg12, 0x4e)[0].q), 
                                                        zmm3, 0x20)
                                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                            
                                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                            zmm2 = __andps_xmmxud_memxud(zmm2, data_143442cd0)
                                            zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                            zmm7 = arg_40 ^ zmm0
                                            zmm4 = zx.o(0)
                                            
                                            if (arg81 != 1)
                                                goto label_14024a1c2
                                        
                                        zmm4 = _mm_and_ps(zmm4, zmm7)
                                
                                zmm7 = (temp0_163 & not.o(arg11)) | (zmm4 & temp0_163)
                            
                            arg12 = arg17
                            zmm3 = arg_70
                            arg14 = arg_a0
                        
                        arg22 = zmm7
                        zmm7 = _mm_unpacklo_epi32(zmm3, 0)
                        zmm3 = _mm_unpackhi_epi32(zmm3, 0)
                        zmm2 = arg21
                        arg11 = _mm_shuffle_epi32(_mm_mul_epu32(arg13, zmm2), 0xe8)
                        arg15 = _mm_shuffle_epi32(zmm2, 0xf5)
                        arg_90 = arg13
                        arg11 = _mm_unpacklo_epi32(arg11, 
                            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg13, 0xf5), arg15), 
                                0xe8)[0].q)
                        zmm0 = _mm_cmpgt_epi32(zx.o(0), arg11)
                        zmm4 = _mm_shuffle_epi32(arg11, 0x4e)
                        arg11 = _mm_unpacklo_epi32(arg11, zmm0[0].q)
                        zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4)[0].q)
                        arg_d0 = zmm4
                        zmm4 = _mm_add_epi64(zmm4, zmm3)
                        zmm2 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, arg_130)
                        arg19 = zmm2
                        zmm2 &= zmm9
                        char temp0_386 = _mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f))
                        arg_140 = arg11
                        arg_b0 = zmm7
                        zmm0 = _mm_add_epi64(_mm_add_epi64(arg11, zmm7), arg14)
                        arg_160 = zmm0
                        arg_110 = _mm_add_epi64(zmm4, zmm13)
                        arg_70 = zmm3
                        arg_e0 = arg16
                        arg_210 = arg15
                        
                        if (temp0_386 == 0)
                            arg11 = arg_50
                            zmm2 = arg19
                            zmm4 = arg12
                            zmm7 = arg_60
                        else
                            zmm1 = _mm_srai_epi32(
                                _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), arg18) & zmm2, 0x1f), 
                                0x1f)
                            char temp0_393 = _mm_movemask_ps(zmm1)
                            
                            if (temp0_393 == 0)
                                zmm0 = arg_50
                                zmm4 = arg12
                                zmm7 = arg_60
                            else
                                arg15 = arg12
                                arg11 = _mm_add_epi64(arg31, zmm3)
                                int32_t temp0_396[0x4] =
                                    __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg24, arg_b0), arg_140)
                                arg11 = __paddq_xmmdq_memdq(arg11, arg_d0)
                                zmm7 = data_1434426c0
                                arg11 = _mm_add_epi64(arg11, zmm7)
                                int32_t temp0_399[0x4] = _mm_add_epi64(temp0_396, zmm7)
                                zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                                arg12 = temp0_399 & zmm4
                                zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                                arg11 &= zmm0
                                int64_t rax_92 = _mm_shuffle_epi32(arg12, 0x4e)[0].q
                                void* rbx_12 = arg4 + rax_92
                                zmm1 = *(arg4 + rax_92)
                                int64_t rax_93 = arg11[0].q
                                void* rdi_5 = arg4 + rax_93
                                zmm9 = *(arg4 + rax_93)
                                int64_t rax_94 = _mm_shuffle_epi32(arg11, 0x4e)[0].q
                                void* rsi_2 = arg4 + rax_94
                                zmm12 = *(arg4 + rax_94)
                                zmm3 = zmm4 & zmm7
                                zmm7 &= zmm0
                                void* rbp_11 = arg12[0].q + arg4
                                arg13 = *(zmm3[0].q + rbp_11)
                                zmm3 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbx_12)
                                arg12 = *(zmm7[0].q + rdi_5)
                                zmm13 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + rsi_2)
                                zmm7 = data_1434426e0
                                zmm4 &= zmm7
                                zmm0 &= zmm7
                                arg11 = *(zmm4[0].q + rbp_11)
                                zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rbx_12)
                                zmm7 = *(zmm0[0].q + rdi_5)
                                arg16 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rsi_2)
                                bool cond:50_1
                                bool cond:51_1
                                bool cond:61_1
                                bool cond:62_1
                                
                                if ((temp0_393 & 1) == 0)
                                    char temp18_1 = temp0_393 & 2
                                    cond:50_1 = temp18_1 != 0
                                    cond:51_1 = temp18_1 == 0
                                    cond:61_1 = temp18_1 != 0
                                    cond:62_1 = temp18_1 == 0
                                    
                                    if (temp18_1 == 0)
                                        goto label_14024a6bf
                                    
                                    goto label_14024a47a
                                
                                __return_addr.o = *rbp_11
                                char temp17_1 = temp0_393 & 2
                                cond:50_1 = temp17_1 != 0
                                cond:51_1 = temp17_1 == 0
                                cond:61_1 = temp17_1 != 0
                                cond:62_1 = temp17_1 == 0
                                
                                if (temp17_1 == 0)
                                label_14024a6bf:
                                    
                                    if (cond:51_1)
                                        goto label_14024a490
                                    
                                    goto label_14024a6c5
                                
                            label_14024a47a:
                                zmm0 = __return_addr.o
                                __return_addr.o =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm0, 0), zmm0, 0xe2)
                                
                                if (not(cond:50_1))
                                label_14024a490:
                                    
                                    if (cond:62_1)
                                        goto label_14024a6cf
                                    
                                    goto label_14024a496
                                
                            label_14024a6c5:
                                arg13 = _mm_unpacklo_ps(arg13, zmm3[0].q)
                                bool cond:73_1
                                bool cond:74_1
                                bool cond:80_1
                                bool cond:81_1
                                
                                if (not(cond:61_1))
                                label_14024a6cf:
                                    char temp26_1 = temp0_393 & 4
                                    cond:73_1 = temp26_1 != 0
                                    cond:74_1 = temp26_1 == 0
                                    cond:80_1 = temp26_1 != 0
                                    cond:81_1 = temp26_1 == 0
                                    
                                    if (temp26_1 == 0)
                                        goto label_14024a4a2
                                    
                                    goto label_14024a6d8
                                
                            label_14024a496:
                                arg11 = _mm_unpacklo_ps(arg11, zmm4[0].q)
                                char temp25_1 = temp0_393 & 4
                                cond:73_1 = temp25_1 != 0
                                cond:74_1 = temp25_1 == 0
                                cond:80_1 = temp25_1 != 0
                                cond:81_1 = temp25_1 == 0
                                
                                if (temp25_1 == 0)
                                label_14024a4a2:
                                    
                                    if (cond:74_1)
                                        goto label_14024a6f0
                                    
                                    goto label_14024a4ad
                                
                            label_14024a6d8:
                                zmm0 = __return_addr.o
                                __return_addr.o =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x30), 0x84)
                                
                                if (not(cond:73_1))
                                label_14024a6f0:
                                    zmm9 = arg_30
                                    
                                    if (cond:81_1)
                                        goto label_14024a4bf
                                    
                                    goto label_14024a701
                                
                            label_14024a4ad:
                                arg13 =
                                    _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg12, arg13, 0x30), 0x84)
                                zmm9 = arg_30
                                bool cond:108_1
                                bool cond:109_1
                                bool cond:128_1
                                bool cond:129_1
                                
                                if (not(cond:80_1))
                                label_14024a4bf:
                                    zmm0 = arg_50
                                    zmm4 = arg15
                                    char temp38_1 = temp0_393 & 8
                                    cond:108_1 = temp38_1 != 0
                                    cond:109_1 = temp38_1 == 0
                                    cond:128_1 = temp38_1 != 0
                                    cond:129_1 = temp38_1 == 0
                                    
                                    if (temp38_1 == 0)
                                        goto label_14024a719
                                    
                                    goto label_14024a4d3
                                
                            label_14024a701:
                                arg11 =
                                    _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm7, arg11, 0x30), 0x84)
                                zmm0 = arg_50
                                zmm4 = arg15
                                char temp37_1 = temp0_393 & 8
                                cond:108_1 = temp37_1 != 0
                                cond:109_1 = temp37_1 == 0
                                cond:128_1 = temp37_1 != 0
                                cond:129_1 = temp37_1 == 0
                                
                                if (temp37_1 == 0)
                                label_14024a719:
                                    
                                    if (cond:109_1)
                                        goto label_14024a4eb
                                    
                                    goto label_14024a724
                                
                            label_14024a4d3:
                                zmm1 = __return_addr.o
                                __return_addr.o =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x20), 0x24)
                                
                                if (cond:108_1)
                                label_14024a724:
                                    arg13 = _mm_shuffle_ps(arg13, 
                                        _mm_shuffle_ps(zmm13, arg13, 0x20), 0x24)
                                    zmm13 = arg_80
                                    
                                    if (cond:128_1)
                                        arg11 = _mm_shuffle_ps(arg11, 
                                            _mm_shuffle_ps(arg16, arg11, 0x20), 0x24)
                                else
                                label_14024a4eb:
                                    zmm13 = arg_80
                                    
                                    if (not(cond:129_1))
                                        arg11 = _mm_shuffle_ps(arg11, 
                                            _mm_shuffle_ps(arg16, arg11, 0x20), 0x24)
                                
                                arg15 = arg11
                                zmm7 = arg_60
                                arg14 = arg_a0
                                arg16 = arg_e0
                            
                            zmm3 = __pcmpeqd_xmmdq_memdq(zx.o(0), arg18) & not.o(zmm2)
                            arg11 = _mm_slli_epi32(zmm3, 0x1f)
                            char temp0_419 = _mm_movemask_ps(arg11)
                            
                            if (temp0_419 == 0)
                                arg11 = zmm0
                                zmm2 = arg19
                                arg12 = arg15
                            else
                                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                                arg11 = _mm_srai_epi32(arg11, 0x1f) & zmm1
                                arg_40 = arg13
                                zmm13 = zmm4
                                
                                if (_mm_movemask_ps(arg11) == 0)
                                    arg16 = arg_160
                                    zmm12 = arg_110
                                else
                                    arg13 = data_1434426c0
                                    zmm2 = _mm_add_epi64(arg_110, arg13)
                                    int32_t temp0_425[0x4] = _mm_add_epi64(arg_160, arg13)
                                    zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ arg11
                                    arg16 = _mm_shuffle_epi32(zmm7, 0x50)
                                    arg16 = (arg16 & not.o(temp0_425)) | (arg_160 & arg16)
                                    zmm12 = _mm_shuffle_epi32(zmm7, 0xfa)
                                    zmm12 = (zmm12 & not.o(zmm2)) | (arg_110 & zmm12)
                                    zmm2 = __paddq_xmmdq_memdq(arg31, arg_70)
                                    zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg24, arg_b0), 
                                        arg_140)
                                    zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, arg_d0), arg13)
                                    zmm4 = _mm_add_epi64(zmm4, arg13)
                                    arg12 = _mm_shuffle_epi32(arg11, 0x50) & zmm4
                                    zmm4 = _mm_shuffle_epi32(arg11, 0xfa) & zmm2
                                    zmm0 = _mm_unpacklo_epi64(
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + arg12[0].q)), 
                                            zx.o(*(arg4 + _mm_shuffle_epi32(arg12, 0x4e)[0].q))[0]
                                                .q), 
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm4[0].q)), 
                                        zx.o(*(arg4 + _mm_shuffle_epi32(zmm4, 0x4e)[0].q))[0].q)[0]
                                        .q)
                                
                                zmm2 = __return_addr.o
                                zmm1 &= zmm0
                                
                                if ((temp0_419 & 1) != 0)
                                    zmm2[0] = zmm1[0]
                                    zmm9 = arg_30
                                    
                                    if ((temp0_419 & 2) != 0)
                                        goto label_14024a79c
                                    
                                    goto label_14024a772
                                
                                zmm9 = arg_30
                                
                                if ((temp0_419 & 2) != 0)
                                label_14024a79c:
                                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                                    zmm2 = zmm0
                                    
                                    if ((temp0_419 & 4) != 0)
                                        goto label_14024a77a
                                    
                                    goto label_14024a7a8
                                
                            label_14024a772:
                                
                                if ((temp0_419 & 4) == 0)
                                label_14024a7a8:
                                    
                                    if ((temp0_419 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                                else
                                label_14024a77a:
                                    zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0x32)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                    
                                    if ((temp0_419 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                                
                                zmm7 = data_1434422d0
                                zmm1 = zmm13 & zmm7
                                zmm7 = _mm_srai_epi32(
                                    _mm_slli_epi32(_mm_cmpeq_epi32(zmm7, zmm1) & zmm3, 0x1f), 0x1f)
                                char temp0_458 = _mm_movemask_ps(zmm7)
                                __return_addr.o = zmm2
                                
                                if (temp0_458 == 0)
                                    zmm2 = arg_50
                                    arg13 = arg_40
                                else
                                    arg12 = data_1434426c0
                                    zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                                    
                                    if ((temp0_458 & 1) != 0)
                                        arg11 = *arg16[0].q
                                    
                                    zmm2 = _mm_add_epi64(zmm12, arg12)
                                    int32_t temp0_461[0x4] = _mm_add_epi64(arg12, arg16)
                                    zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                                    zmm7 = _mm_shuffle_epi32(zmm7, 0xfa)
                                    
                                    if ((temp0_458 & 2) != 0)
                                        arg11 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg16, 0x4e)[0].q, 
                                                arg11, 0), 
                                            arg11, 0xe2)
                                    
                                    if ((temp0_458 & 4) != 0)
                                        arg11 = _mm_shuffle_ps(arg11, 
                                            _mm_shuffle_ps(*zmm12[0].q, arg11, 0x30), 0x84)
                                    
                                    arg16 = (arg16 & zmm0) | (zmm0 & not.o(temp0_461))
                                    
                                    if ((temp0_458 & 8) != 0)
                                        arg11 = _mm_shuffle_ps(arg11, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, 
                                                arg11, 0x20), 
                                            0x24)
                                    
                                    zmm12 = (zmm12 & zmm7) | (zmm7 & not.o(zmm2))
                                    zmm2 = arg_50
                                    arg13 = arg_40
                                    zmm9 = arg_30
                                
                                arg12 = arg15
                                zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(arg11)
                                
                                if ((temp0_419 & 1) != 0)
                                    arg13[0] = zmm1[0]
                                    arg11 = zmm2
                                    zmm2 = arg19
                                    
                                    if ((temp0_419 & 2) != 0)
                                        goto label_14024a91d
                                    
                                    goto label_14024a8e5
                                
                                arg11 = zmm2
                                zmm2 = arg19
                                
                                if ((temp0_419 & 2) != 0)
                                label_14024a91d:
                                    arg13 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg13, 1), arg13, 0xe2)
                                    
                                    if ((temp0_419 & 4) != 0)
                                        goto label_14024a8f2
                                    
                                    goto label_14024a926
                                
                            label_14024a8e5:
                                
                                if ((temp0_419 & 4) == 0)
                                label_14024a926:
                                    
                                    if ((temp0_419 & 8) != 0)
                                        arg13 = _mm_shuffle_ps(arg13, 
                                            _mm_shuffle_ps(zmm1, arg13, 0x23), 0x24)
                                else
                                label_14024a8f2:
                                    arg13 = _mm_shuffle_ps(arg13, 
                                        _mm_shuffle_ps(zmm1, arg13, 0x32), 0x84)
                                    
                                    if ((temp0_419 & 8) != 0)
                                        arg13 = _mm_shuffle_ps(arg13, 
                                            _mm_shuffle_ps(zmm1, arg13, 0x23), 0x24)
                                
                                zmm0 = data_142fc95e0
                                zmm1 = zmm13 & zmm0
                                zmm3 = _mm_slli_epi32(zmm3 & _mm_cmpeq_epi32(zmm0, zmm1), 0x1f)
                                char temp0_481 = _mm_movemask_ps(zmm3)
                                
                                if (temp0_481 == 0)
                                    zmm4 = zmm13
                                    arg14 = arg_a0
                                    zmm13 = arg_80
                                    zmm7 = arg_60
                                    arg16 = arg_e0
                                else
                                    if ((temp0_481 & 1) != 0)
                                        zmm3 = *arg16[0].q
                                    
                                    if ((temp0_481 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg16, 0x4e)[0].q, 
                                                zmm3, 0), 
                                            zmm3, 0xe2)
                                    
                                    zmm4 = zmm13
                                    arg14 = arg_a0
                                    arg16 = arg_e0
                                    zmm13 = arg_80
                                    
                                    if ((temp0_481 & 4) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30), 0x84)
                                    
                                    if ((temp0_481 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, 
                                                zmm3, 0x20), 
                                            0x24)
                                    
                                    zmm7 = arg_60
                                
                                zmm0 = zx.o(0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm0) & not.o(zmm3)
                                
                                if ((temp0_419 & 1) != 0)
                                    arg12[0] = zmm1[0]
                                    
                                    if ((temp0_419 & 2) != 0)
                                        goto label_14024aa55
                                    
                                    goto label_14024aa32
                                
                                if ((temp0_419 & 2) != 0)
                                label_14024aa55:
                                    zmm0 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg12, 1), arg12, 0xe2)
                                    arg12 = zmm0
                                    
                                    if ((temp0_419 & 4) != 0)
                                        goto label_14024aa3a
                                    
                                    goto label_14024aa61
                                
                            label_14024aa32:
                                
                                if ((temp0_419 & 4) == 0)
                                label_14024aa61:
                                    
                                    if ((temp0_419 & 8) != 0)
                                        arg12 = _mm_shuffle_ps(arg12, 
                                            _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
                                else
                                label_14024aa3a:
                                    zmm0 = _mm_shuffle_ps(zmm1, arg12, 0x32)
                                    arg12 = _mm_shuffle_ps(arg12, zmm0, 0x84)
                                    
                                    if ((temp0_419 & 8) != 0)
                                        arg12 = _mm_shuffle_ps(arg12, 
                                            _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
                        
                        arg_190 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm2
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm9), 0x1f)) == 0)
                            arg15 = arg_90
                        else
                            if (temp0_125 != 0)
                                zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & arg11
                                zmm1 = zmm2 & zmm9
                                uint32_t temp0_502 = _mm_movemask_ps(zmm1)
                                zmm7 = zx.o(0)
                                zmm3 = arg11
                                arg15 = arg14
                                zmm12 = zmm13
                                arg36 = zx.o(0)
                                arg11 = zx.o(0)
                                arg20 = arg12
                                
                                if (temp0_502 != 0)
                                    char rdx_14 = temp0_502.b
                                    
                                    if ((rdx_14 & 1) == 0)
                                        if ((rdx_14 & 2) != 0)
                                            goto label_14024acab
                                        
                                        goto label_14024ab05
                                    
                                    zmm4 = *arg14[0].q
                                    
                                    if ((rdx_14 & 2) != 0)
                                    label_14024acab:
                                        float temp0_528[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg14, 0x4e)[0].q, 
                                                zmm4, 0), 
                                            zmm4, 0xe2)
                                        zmm4 = temp0_528
                                        zmm0 = _mm_cmpeq_epi32(temp0_528, temp0_528)
                                        
                                        if ((rdx_14 & 4) == 0)
                                            goto label_14024ab12
                                        
                                        goto label_14024accc
                                    
                                label_14024ab05:
                                    zmm0 = _mm_cmpeq_epi32(zx.o(0), zx.o(0))
                                    
                                    if ((rdx_14 & 4) != 0)
                                    label_14024accc:
                                        zmm4 = _mm_shuffle_ps(zmm4, 
                                            _mm_shuffle_ps(*zmm13[0].q, zmm4, 0x30), 0x84)
                                        zmm1 ^= zmm0
                                        
                                        if ((rdx_14 & 8) != 0)
                                            zmm4 = _mm_shuffle_ps(zmm4, 
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, zmm4, 
                                                    0x20), 
                                                0x24)
                                    else
                                    label_14024ab12:
                                        zmm1 ^= zmm0
                                        
                                        if ((rdx_14 & 8) != 0)
                                            zmm4 = _mm_shuffle_ps(zmm4, 
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, zmm4, 
                                                    0x20), 
                                                0x24)
                                    
                                    arg12 = _mm_shuffle_epi32(zmm1, 0x50)
                                    char temp0_508 = _mm_movemask_ps(zmm2)
                                    zmm3 = zx.o(0)
                                    
                                    if ((temp0_508 & 1) != 0)
                                        zmm3[0] = zmm4[0]
                                    
                                    zmm13 = data_1434426c0
                                    arg12 = _mm_slli_epi32(arg12, 0x1f)
                                    
                                    if ((temp0_508 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), zmm3, 
                                            0xe2)
                                    
                                    zmm7 = _mm_shuffle_epi32(zmm1, 0xfa)
                                    zmm0 = _mm_add_epi64(arg14, zmm13)
                                    int32_t temp0_514[0x4] = _mm_srai_epi32(arg12, 0x1f)
                                    
                                    if ((temp0_508 & 4) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                                    
                                    zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                                    zmm2 = temp0_514 & not.o(zmm0)
                                    arg15 = arg14 & temp0_514
                                    
                                    if ((temp0_508 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                                    
                                    zmm4 = arg17
                                    arg36 = zmm3
                                    zmm0 = _mm_add_epi64(arg_80, zmm13)
                                    zmm7 = _mm_srai_epi32(zmm7, 0x1f)
                                    zmm2 |= arg15
                                    
                                    if ((rdx_14 & 1) != 0)
                                        zmm3 = *zmm2[0].q
                                    
                                    zmm1 = zmm7 & not.o(zmm0)
                                    zmm12 = arg_80 & zmm7
                                    
                                    if ((rdx_14 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, 
                                                zmm3, 0), 
                                            zmm3, 0xe2)
                                        zmm1 |= zmm12
                                        
                                        if ((rdx_14 & 4) != 0)
                                        label_14024ad16:
                                            zmm3 = _mm_shuffle_ps(zmm3, 
                                                _mm_shuffle_ps(*zmm1[0].q, zmm3, 0x30), 0x84)
                                            
                                            if ((rdx_14 & 8) == 0)
                                                goto label_14024ac25
                                            
                                            goto label_14024ad35
                                    else
                                        zmm1 |= zmm12
                                        
                                        if ((rdx_14 & 4) != 0)
                                            goto label_14024ad16
                                    
                                    if ((rdx_14 & 8) == 0)
                                    label_14024ac25:
                                        arg11 = zx.o(0)
                                        
                                        if ((temp0_508 & 1) == 0)
                                            goto label_14024ad47
                                        
                                        goto label_14024ac33
                                    
                                label_14024ad35:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm3, 
                                            0x20), 
                                        0x24)
                                    arg11 = zx.o(0)
                                    
                                    if ((temp0_508 & 1) == 0)
                                    label_14024ad47:
                                        
                                        if ((temp0_508 & 2) == 0)
                                            goto label_14024ac41
                                        
                                        goto label_14024ad5c
                                    
                                label_14024ac33:
                                    arg11[0] = zmm3[0]
                                    
                                    if ((temp0_508 & 2) == 0)
                                    label_14024ac41:
                                        zmm1 = _mm_add_epi64(zmm1, zmm13)
                                        zmm2 = _mm_add_epi64(zmm2, zmm13)
                                        
                                        if ((temp0_508 & 4) == 0)
                                            goto label_14024ad73
                                        
                                        goto label_14024ac5c
                                    
                                label_14024ad5c:
                                    arg11 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg11, 1), arg11, 0xe2)
                                    zmm1 = _mm_add_epi64(zmm1, zmm13)
                                    zmm2 = _mm_add_epi64(zmm2, zmm13)
                                    
                                    if ((temp0_508 & 4) != 0)
                                    label_14024ac5c:
                                        arg11 = _mm_shuffle_ps(arg11, 
                                            _mm_shuffle_ps(zmm3, arg11, 0x32), 0x84)
                                        arg12 = temp0_514 & not.o(zmm2)
                                        zmm7 &= not.o(zmm1)
                                        
                                        if ((temp0_508 & 8) != 0)
                                            arg11 = _mm_shuffle_ps(arg11, 
                                                _mm_shuffle_ps(zmm3, arg11, 0x23), 0x24)
                                    else
                                    label_14024ad73:
                                        arg12 = temp0_514 & not.o(zmm2)
                                        zmm7 &= not.o(zmm1)
                                        
                                        if ((temp0_508 & 8) != 0)
                                            arg11 = _mm_shuffle_ps(arg11, 
                                                _mm_shuffle_ps(zmm3, arg11, 0x23), 0x24)
                                    
                                    arg15 |= arg12
                                    zmm12 |= zmm7
                                    zmm3 = arg_50
                                    zmm9 = arg_30
                                    arg12 = arg20
                                    zmm7 = zx.o(0)
                                
                                arg14 = arg11
                                zmm0 = data_1434422d0
                                arg11 = zmm3
                                zmm2 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & zmm3
                                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm2 & zmm9, 0x1f), 0x1f)
                                char temp0_549 = _mm_movemask_ps(zmm1)
                                
                                if (temp0_549 == 0)
                                    arg16 = zx.o(0)
                                else
                                    if ((temp0_549 & 1) == 0)
                                        if ((temp0_549 & 2) != 0)
                                            goto label_14024af51
                                        
                                        goto label_14024ae08
                                    
                                    zmm3 = *arg15[0].q
                                    
                                    if ((temp0_549 & 2) != 0)
                                    label_14024af51:
                                        zmm0 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg15, 0x4e)[0].q, 
                                                zmm3, 0), 
                                            zmm3, 0xe2)
                                        zmm3 = zmm0
                                        
                                        if ((temp0_549 & 4) == 0)
                                            goto label_14024ae12
                                        
                                        goto label_14024af6b
                                    
                                label_14024ae08:
                                    
                                    if ((temp0_549 & 4) != 0)
                                    label_14024af6b:
                                        zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                        
                                        if ((temp0_549 & 8) != 0)
                                            zmm0 = _mm_shuffle_ps(
                                                *_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm3, 0x20)
                                            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                    else
                                    label_14024ae12:
                                        
                                        if ((temp0_549 & 8) != 0)
                                            zmm0 = _mm_shuffle_ps(
                                                *_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm3, 0x20)
                                            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                    
                                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                    char temp0_554 = _mm_movemask_ps(zmm2)
                                    zmm7 = zx.o(0)
                                    
                                    if ((temp0_554 & 1) != 0)
                                        zmm7[0] = zmm3[0]
                                    
                                    zmm9 = data_1434426c0
                                    zmm1 ^= zmm0
                                    
                                    if ((temp0_554 & 2) != 0)
                                        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm7, 1), zmm7, 
                                            0xe2)
                                    
                                    zmm2 = _mm_add_epi64(arg15, zmm9)
                                    arg12 = _mm_shuffle_epi32(zmm1, 0x50)
                                    
                                    if ((temp0_554 & 4) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(zmm3, zmm7, 0x32), 0x84)
                                    
                                    if ((temp0_554 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(zmm3, zmm7, 0x23), 0x24)
                                    
                                    zmm3 = _mm_add_epi64(zmm12, zmm9)
                                    zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                                    zmm2 = (arg15 & arg12) | (arg12 & not.o(zmm2))
                                    
                                    if ((temp0_549 & 1) != 0)
                                        zmm13 = *zmm2[0].q
                                    
                                    zmm0 = zmm1 & not.o(zmm3)
                                    zmm3 = zmm12 & zmm1
                                    
                                    if ((temp0_549 & 2) != 0)
                                        zmm13 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, 
                                                zmm13, 0), 
                                            zmm13, 0xe2)
                                        zmm4 = arg17
                                        arg11 = arg_50
                                        zmm3 |= zmm0
                                        
                                        if ((temp0_549 & 4) != 0)
                                        label_14024afcc:
                                            zmm13 = _mm_shuffle_ps(zmm13, 
                                                _mm_shuffle_ps(*zmm3[0].q, zmm13, 0x30), 0x84)
                                            
                                            if ((temp0_549 & 8) == 0)
                                                goto label_14024aef6
                                            
                                            goto label_14024afee
                                    else
                                        zmm3 |= zmm0
                                        
                                        if ((temp0_549 & 4) != 0)
                                            goto label_14024afcc
                                    
                                    if ((temp0_549 & 8) == 0)
                                    label_14024aef6:
                                        arg16 = zx.o(0)
                                        
                                        if ((temp0_554 & 1) == 0)
                                            goto label_14024b001
                                        
                                        goto label_14024af04
                                    
                                label_14024afee:
                                    zmm13 = _mm_shuffle_ps(zmm13, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q, zmm13, 
                                            0x20), 
                                        0x24)
                                    arg16 = zx.o(0)
                                    
                                    if ((temp0_554 & 1) != 0)
                                    label_14024af04:
                                        arg16[0] = zmm13[0]
                                        zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                                        arg12 = _mm_slli_epi32(arg12, 0x1f)
                                        
                                        if ((temp0_554 & 2) != 0)
                                            arg16 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, arg16, 1), 
                                                arg16, 0xe2)
                                    else
                                    label_14024b001:
                                        zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                                        arg12 = _mm_slli_epi32(arg12, 0x1f)
                                        
                                        if ((temp0_554 & 2) != 0)
                                            arg16 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, arg16, 1), 
                                                arg16, 0xe2)
                                    
                                    zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                                    int32_t temp0_585[0x4] = _mm_srai_epi32(arg12, 0x1f)
                                    zmm3 = _mm_add_epi64(zmm3, zmm9)
                                    zmm2 = _mm_add_epi64(zmm2, zmm9)
                                    
                                    if ((temp0_554 & 4) != 0)
                                        arg16 = _mm_shuffle_ps(arg16, 
                                            _mm_shuffle_ps(zmm13, arg16, 0x32), 0x84)
                                    
                                    if ((temp0_554 & 8) != 0)
                                        arg16 = _mm_shuffle_ps(arg16, 
                                            _mm_shuffle_ps(zmm13, arg16, 0x23), 0x24)
                                    
                                    arg15 = (arg15 & temp0_585) | (temp0_585 & not.o(zmm2))
                                    zmm12 = (zmm12 & zmm1) | (zmm1 & not.o(zmm3))
                                    zmm9 = arg_30
                                    arg12 = arg20
                                
                                zmm0 = data_142fc95e0
                                zmm3 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg11
                                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm3 & zmm9, 0x1f), 0x1f)
                                char temp0_595 = _mm_movemask_ps(zmm1)
                                
                                if (temp0_595 == 0)
                                    zmm13 = zx.o(0)
                                    zmm1 = zx.o(0)
                                    arg15 = arg11
                                    arg11 = arg36
                                else
                                    if ((temp0_595 & 1) == 0)
                                        if ((temp0_595 & 2) != 0)
                                            goto label_14024b252
                                        
                                        goto label_14024b0ce
                                    
                                    zmm2 = *arg15[0].q
                                    
                                    if ((temp0_595 & 2) != 0)
                                    label_14024b252:
                                        zmm0 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg15, 0x4e)[0].q, 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                        zmm2 = zmm0
                                        
                                        if ((temp0_595 & 4) == 0)
                                            goto label_14024b0d7
                                        
                                        goto label_14024b26b
                                    
                                label_14024b0ce:
                                    
                                    if ((temp0_595 & 4) != 0)
                                    label_14024b26b:
                                        zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                        
                                        if ((temp0_595 & 8) != 0)
                                            zmm0 = _mm_shuffle_ps(
                                                *_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm2, 0x20)
                                            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                    else
                                    label_14024b0d7:
                                        
                                        if ((temp0_595 & 8) != 0)
                                            zmm0 = _mm_shuffle_ps(
                                                *_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm2, 0x20)
                                            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                    
                                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                    char temp0_600 = _mm_movemask_ps(zmm3)
                                    zmm13 = zx.o(0)
                                    
                                    if ((temp0_600 & 1) != 0)
                                        zmm13[0] = zmm2[0]
                                    
                                    zmm3 = data_1434426c0
                                    zmm1 ^= zmm0
                                    
                                    if ((temp0_600 & 2) != 0)
                                        zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm13, 1), 
                                            zmm13, 0xe2)
                                    
                                    zmm0 = _mm_add_epi64(arg15, zmm3)
                                    arg12 = _mm_shuffle_epi32(zmm1, 0x50)
                                    
                                    if ((temp0_600 & 4) != 0)
                                        zmm13 = _mm_shuffle_ps(zmm13, 
                                            _mm_shuffle_ps(zmm2, zmm13, 0x32), 0x84)
                                        arg11 = arg_50
                                    
                                    arg15 &= arg12
                                    arg12 &= not.o(zmm0)
                                    
                                    if ((temp0_600 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm13, 0x23)
                                        zmm13 = _mm_shuffle_ps(zmm13, zmm2, 0x24)
                                    
                                    zmm3 = _mm_add_epi64(zmm3, zmm12)
                                    zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                                    arg15 |= arg12
                                    
                                    if ((temp0_595 & 1) != 0)
                                        zmm2 = *arg15[0].q
                                    
                                    zmm12 &= zmm0
                                    zmm0 &= not.o(zmm3)
                                    zmm9 = arg_30
                                    arg12 = arg20
                                    
                                    if ((temp0_595 & 2) == 0)
                                        zmm12 |= zmm0
                                        
                                        if ((temp0_595 & 4) != 0)
                                            goto label_14024b2b6
                                        
                                        goto label_14024b1be
                                    
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg15, 0x4e)[0].q, zmm2, 
                                            0), 
                                        zmm2, 0xe2)
                                    zmm12 |= zmm0
                                    
                                    if ((temp0_595 & 4) != 0)
                                    label_14024b2b6:
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30), 0x84)
                                        arg15 = arg11
                                        
                                        if ((temp0_595 & 8) == 0)
                                            goto label_14024b1cc
                                        
                                        goto label_14024b2db
                                    
                                label_14024b1be:
                                    arg15 = arg11
                                    
                                    if ((temp0_595 & 8) == 0)
                                    label_14024b1cc:
                                        arg11 = arg36
                                        zmm1 = zx.o(0)
                                        
                                        if ((temp0_600 & 1) == 0)
                                            goto label_14024b2f5
                                        
                                        goto label_14024b1e2
                                    
                                label_14024b2db:
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm2, 
                                            0x20), 
                                        0x24)
                                    arg11 = arg36
                                    zmm1 = zx.o(0)
                                    
                                    if ((temp0_600 & 1) == 0)
                                    label_14024b2f5:
                                        
                                        if ((temp0_600 & 2) == 0)
                                            goto label_14024b1f0
                                        
                                        goto label_14024b30a
                                    
                                label_14024b1e2:
                                    zmm1[0] = zmm2[0]
                                    
                                    if ((temp0_600 & 2) == 0)
                                    label_14024b1f0:
                                        
                                        if ((temp0_600 & 4) == 0)
                                            goto label_14024b317
                                        
                                        goto label_14024b201
                                    
                                label_14024b30a:
                                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                                    
                                    if ((temp0_600 & 4) != 0)
                                    label_14024b201:
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                                        
                                        if ((temp0_600 & 8) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                                    else
                                    label_14024b317:
                                        
                                        if ((temp0_600 & 8) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                                
                                zmm0 = __paddq_xmmdq_memdq(arg31, arg_70)
                                zmm2 = __paddq_xmmdq_memdq(arg24, arg_b0)
                                zmm3 = data_1434426c0
                                zmm2 = __paddq_xmmdq_memdq(zmm2, arg_140)
                                zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, arg_d0), zmm3)
                                zmm2 = _mm_add_epi64(zmm2, zmm3)
                                zmm3 = _mm_shuffle_epi32(arg_270, 0x50) & zmm2
                                zmm2 = _mm_shuffle_epi32(arg_270, 0xfa) & zmm0
                                int64_t rax_146 = zmm3[0].q
                                int64_t rdx_17 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                                int64_t rbp_17 = zmm2[0].q
                                int64_t rbx_13 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                                zmm0 = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + rax_146)), 
                                        zx.o(*(arg4 + rdx_17))[0].q), 
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_17)), 
                                    zx.o(*(arg4 + rbx_13))[0].q)[0].q)
                                zmm2 = _mm_srli_epi32(zmm0, 0x15)
                                zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                                float temp0_649[0x4] = _mm_add_ps(arg11, 
                                    _mm_mul_ps(arg14, 
                                        __divps_xmmps_memps(
                                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                                zmm0 & data_143442680, data_143442490)), 
                                            data_1434426a0)))
                                zmm0 = data_143442440
                                float temp0_651[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                                zmm4 = data_143442690
                                float temp0_653[0x4] =
                                    _mm_mul_ps(arg16, _mm_div_ps(temp0_651, zmm4))
                                float temp0_656[0x4] =
                                    _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm0)), zmm4)
                                char temp36_1 = temp0_125 & 1
                                
                                if (temp36_1 != 0)
                                    zmm2 = __return_addr.o
                                    zmm2[0] = temp0_649[0]
                                    __return_addr.o = zmm2
                                    zmm1 = _mm_mul_ps(zmm1, temp0_656)
                                    zmm7 = _mm_add_ps(zmm7, temp0_653)
                                    zmm4 = arg17
                                    
                                    if (temp36_1 != 0)
                                        goto label_14024b50c
                                    
                                    goto label_14024b453
                                
                                zmm1 = _mm_mul_ps(zmm1, temp0_656)
                                zmm7 = _mm_add_ps(zmm7, temp0_653)
                                zmm4 = arg17
                                
                                if (temp36_1 != 0)
                                label_14024b50c:
                                    arg13[0] = zmm7[0]
                                    arg14 = arg_a0
                                    arg16 = arg_e0
                                    zmm13 = _mm_add_ps(zmm13, zmm1)
                                    
                                    if (temp36_1 != 0)
                                        goto label_14024b471
                                    
                                    goto label_14024b52f
                                
                            label_14024b453:
                                arg14 = arg_a0
                                arg16 = arg_e0
                                zmm13 = _mm_add_ps(zmm13, zmm1)
                                bool cond:160_1
                                bool cond:161_1
                                bool cond:176_1
                                bool cond:177_1
                                
                                if (temp36_1 != 0)
                                label_14024b471:
                                    arg12[0] = zmm13[0]
                                    char temp53_1 = temp0_125 & 2
                                    cond:160_1 = temp53_1 == 0
                                    cond:161_1 = temp53_1 != 0
                                    cond:176_1 = temp53_1 == 0
                                    cond:177_1 = temp53_1 != 0
                                    
                                    if (temp53_1 != 0)
                                        goto label_14024b53b
                                    
                                    goto label_14024b47f
                                
                            label_14024b52f:
                                char temp52_1 = temp0_125 & 2
                                cond:160_1 = temp52_1 == 0
                                cond:161_1 = temp52_1 != 0
                                cond:176_1 = temp52_1 == 0
                                cond:177_1 = temp52_1 != 0
                                
                                if (temp52_1 == 0)
                                label_14024b47f:
                                    
                                    if (not(cond:160_1))
                                    label_14024b492:
                                        arg13 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg13, 1), 
                                            arg13, 0xe2)
                                        
                                        if (cond:177_1)
                                            goto label_14024b563
                                        
                                        goto label_14024b49c
                                else
                                label_14024b53b:
                                    zmm1 = __return_addr.o
                                    __return_addr.o = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_649, zmm1, 1), zmm1, 0xe2)
                                    
                                    if (cond:161_1)
                                        goto label_14024b492
                                
                                bool cond:212_1
                                bool cond:213_1
                                bool cond:238_1
                                bool cond:239_1
                                
                                if (not(cond:176_1))
                                label_14024b563:
                                    arg12 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm13, arg12, 1), arg12, 0xe2)
                                    char temp76_1 = temp0_125 & 4
                                    cond:212_1 = temp76_1 == 0
                                    cond:213_1 = temp76_1 != 0
                                    cond:238_1 = temp76_1 == 0
                                    cond:239_1 = temp76_1 != 0
                                    
                                    if (temp76_1 != 0)
                                        goto label_14024b4a8
                                    
                                    goto label_14024b56f
                                
                            label_14024b49c:
                                char temp75_1 = temp0_125 & 4
                                cond:212_1 = temp75_1 == 0
                                cond:213_1 = temp75_1 != 0
                                cond:238_1 = temp75_1 == 0
                                cond:239_1 = temp75_1 != 0
                                
                                if (temp75_1 == 0)
                                label_14024b56f:
                                    
                                    if (not(cond:212_1))
                                    label_14024b57d:
                                        arg13 = _mm_shuffle_ps(arg13, 
                                            _mm_shuffle_ps(zmm7, arg13, 0x32), 0x84)
                                        
                                        if (cond:239_1)
                                            goto label_14024b4cc
                                        
                                        goto label_14024b588
                                else
                                label_14024b4a8:
                                    zmm1 = __return_addr.o
                                    __return_addr.o = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(temp0_649, zmm1, 0x32), 0x84)
                                    
                                    if (cond:213_1)
                                        goto label_14024b57d
                                
                                bool cond:276_1
                                bool cond:277_1
                                bool cond:299_1
                                bool cond:300_1
                                
                                if (not(cond:238_1))
                                label_14024b4cc:
                                    arg12 = _mm_shuffle_ps(arg12, 
                                        _mm_shuffle_ps(zmm13, arg12, 0x32), 0x84)
                                    char temp101_1 = temp0_125 & 8
                                    cond:276_1 = temp101_1 == 0
                                    cond:277_1 = temp101_1 != 0
                                    cond:299_1 = temp101_1 == 0
                                    cond:300_1 = temp101_1 != 0
                                    
                                    if (temp101_1 != 0)
                                        goto label_14024b591
                                    
                                    goto label_14024b4d9
                                
                            label_14024b588:
                                char temp100_1 = temp0_125 & 8
                                cond:276_1 = temp100_1 == 0
                                cond:277_1 = temp100_1 != 0
                                cond:299_1 = temp100_1 == 0
                                cond:300_1 = temp100_1 != 0
                                
                                if (temp100_1 != 0)
                                label_14024b591:
                                    zmm0 = __return_addr.o
                                    __return_addr.o = _mm_shuffle_ps(zmm0, 
                                        _mm_shuffle_ps(temp0_649, zmm0, 0x23), 0x24)
                                    arg11 = arg15
                                    
                                    if (cond:277_1)
                                        goto label_14024b4e9
                                    
                                    goto label_14024b5ac
                                
                            label_14024b4d9:
                                arg11 = arg15
                                
                                if (cond:276_1)
                                label_14024b5ac:
                                    
                                    if (not(cond:299_1))
                                        arg12 = _mm_shuffle_ps(arg12, 
                                            _mm_shuffle_ps(zmm13, arg12, 0x23), 0x24)
                                else
                                label_14024b4e9:
                                    arg13 = _mm_shuffle_ps(arg13, 
                                        _mm_shuffle_ps(zmm7, arg13, 0x23), 0x24)
                                    
                                    if (cond:300_1)
                                        arg12 = _mm_shuffle_ps(arg12, 
                                            _mm_shuffle_ps(zmm13, arg12, 0x23), 0x24)
                                
                                zmm13 = arg_80
                                zmm2 = arg19
                            
                            zmm3 = arg11 ^ arg_190
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm9, 0x1f)) == 0)
                                arg15 = arg_90
                                zmm7 = arg_60
                            else
                                zmm12 = arg11
                                zmm0 = __pcmpeqd_xmmdq_memdq(data_1434422d0, arg_130)
                                zmm13 = zmm0 & zmm9
                                arg11 = _mm_slli_epi32(zmm13, 0x1f)
                                char temp0_685 = _mm_movemask_ps(arg11)
                                
                                if (temp0_685 == 0)
                                    arg15 = arg_90
                                    zmm13 = arg_80
                                    arg11 = zmm12
                                else
                                    arg_270 = zmm0
                                    arg20 = arg12
                                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                                    arg11 = _mm_srai_epi32(arg11, 0x1f) & zmm1
                                    char rcx_15
                                    
                                    if (_mm_movemask_ps(arg11) == 0)
                                        arg15 = arg_90
                                        arg11 = zmm12
                                        arg14 = arg_160
                                        zmm1 &= zmm0
                                        rcx_15 = temp0_685
                                        
                                        if ((rcx_15 & 1) != 0)
                                        label_14024b76f:
                                            zmm0 = __return_addr.o
                                            zmm0[0] = zmm1[0]
                                            __return_addr.o = zmm0
                                    else
                                        zmm0 = data_1434426b0
                                        zmm2 = _mm_add_epi64(arg_110, zmm0)
                                        arg14 = arg_160
                                        zmm0 = _mm_add_epi64(zmm0, arg14)
                                        zmm4 = _mm_cmpeq_epi32(zmm4, zmm4) ^ arg11
                                        arg12 = _mm_shuffle_epi32(zmm4, 0x50)
                                        arg14 = (arg14 & arg12) | (arg12 & not.o(zmm0))
                                        zmm0 = _mm_shuffle_epi32(zmm4, 0xfa)
                                        zmm7 = arg_110 & zmm0
                                        zmm0 &= not.o(zmm2)
                                        zmm2 = __paddq_xmmdq_memdq(arg31, arg_70)
                                        zmm4 = __paddq_xmmdq_memdq(arg24, arg_b0)
                                        arg12 = data_1434426c0
                                        zmm4 = __paddq_xmmdq_memdq(zmm4, arg_140)
                                        zmm2 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, arg_d0), arg12)
                                        zmm4 = _mm_add_epi64(zmm4, arg12)
                                        arg12 = _mm_shuffle_epi32(arg11, 0x50) & zmm4
                                        zmm4 = _mm_shuffle_epi32(arg11, 0xfa) & zmm2
                                        int64_t rax_149 = arg12[0].q
                                        int64_t rdx_18 = _mm_shuffle_epi32(arg12, 0x4e)[0].q
                                        int64_t rbp_18 = zmm4[0].q
                                        int64_t rbx_14 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                                        arg_110 = zmm7 | zmm0
                                        zmm2 = __paddd_xmmdq_memdq(
                                            __pinsrw_xmmdq_memw_immb(
                                                __pinsrw_xmmdq_memw_immb(
                                                    __pinsrw_xmmdq_memw_immb(
                                                        __pinsrw_xmmdq_memw_immb(zx.o(0), 
                                                            *(arg4 + rax_149), 0), 
                                                        *(arg4 + rdx_18), 2), 
                                                    *(arg4 + rbp_18), 4), 
                                                *(arg4 + rbx_14), 6), 
                                            data_143442b40)
                                        zmm0 = _mm_cvtepi32_ps(zmm2)
                                        arg15 = arg_90
                                        arg11 = zmm12
                                        zmm1 &= zmm0
                                        rcx_15 = temp0_685
                                        
                                        if ((rcx_15 & 1) != 0)
                                            goto label_14024b76f
                                    
                                    zmm4 = arg17
                                    zmm12 = arg_110
                                    
                                    if ((rcx_15 & 2) != 0)
                                        zmm2 = __return_addr.o
                                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 
                                            0xe2)
                                        __return_addr.o = zmm0
                                        
                                        if ((rcx_15 & 4) != 0)
                                            goto label_14024b8f0
                                        
                                        goto label_14024b7b0
                                    
                                    if ((rcx_15 & 4) == 0)
                                    label_14024b7b0:
                                        
                                        if ((rcx_15 & 8) != 0)
                                        label_14024b7b5:
                                            zmm0 = __return_addr.o
                                            zmm0 = _mm_shuffle_ps(zmm0, 
                                                _mm_shuffle_ps(zmm1, zmm0, 0x23), 0x24)
                                            __return_addr.o = zmm0
                                    else
                                    label_14024b8f0:
                                        zmm2 = __return_addr.o
                                        zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0x32)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                        __return_addr.o = zmm2
                                        
                                        if ((rcx_15 & 8) != 0)
                                            goto label_14024b7b5
                                    
                                    arg12 = data_1434422d0
                                    zmm1 = zmm4 & arg12
                                    int32_t temp0_717[0x4] = _mm_srai_epi32(
                                        _mm_slli_epi32(_mm_cmpeq_epi32(arg12, zmm1) & zmm13, 0x1f), 
                                        0x1f)
                                    char temp0_718 = _mm_movemask_ps(temp0_717)
                                    
                                    if (temp0_718 != 0)
                                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                        
                                        if ((temp0_718 & 1) != 0)
                                            arg11 = zx.o(*arg14[0].q)
                                        
                                        zmm7 = data_1434426b0
                                        arg12 = temp0_717 ^ zmm0
                                        
                                        if ((temp0_718 & 2) != 0)
                                            arg11 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(arg14, 0x4e)[0].q), 
                                                    arg11, 0), 
                                                arg11, 0xe2)
                                        
                                        zmm4 = _mm_add_epi64(zmm12, zmm7)
                                        zmm7 = _mm_add_epi64(zmm7, arg14)
                                        zmm2 = _mm_shuffle_epi32(arg12, 0x50)
                                        arg12 = _mm_shuffle_epi32(arg12, 0xfa)
                                        
                                        if ((temp0_718 & 4) != 0)
                                            arg11 = _mm_shuffle_ps(arg11, 
                                                _mm_shuffle_ps(zx.o(*zmm12[0].q), arg11, 0x30), 
                                                0x84)
                                        
                                        if ((temp0_718 & 8) != 0)
                                            arg11 = _mm_shuffle_ps(arg11, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                                    arg11, 0x20), 
                                                0x24)
                                        
                                        arg14 = (arg14 & zmm2) | (zmm2 & not.o(zmm7))
                                        zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                            __andps_xmmxud_memxud(arg11, data_143442cd0), 
                                            data_143442b40))
                                        zmm12 = (zmm12 & arg12) | (arg12 & not.o(zmm4))
                                        arg11 = arg_50
                                        zmm4 = arg17
                                    
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                                    zmm9 = arg_30
                                    arg12 = arg20
                                    
                                    if ((rcx_15 & 1) != 0)
                                        arg13[0] = zmm1[0]
                                        
                                        if ((rcx_15 & 2) != 0)
                                            goto label_14024b9c4
                                        
                                        goto label_14024b999
                                    
                                    if ((rcx_15 & 2) != 0)
                                    label_14024b9c4:
                                        arg13 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg13, 1), 
                                            arg13, 0xe2)
                                        
                                        if ((rcx_15 & 4) != 0)
                                            goto label_14024b9a6
                                        
                                        goto label_14024b9cd
                                    
                                label_14024b999:
                                    
                                    if ((rcx_15 & 4) == 0)
                                    label_14024b9cd:
                                        
                                        if ((rcx_15 & 8) != 0)
                                            arg13 = _mm_shuffle_ps(arg13, 
                                                _mm_shuffle_ps(zmm1, arg13, 0x23), 0x24)
                                    else
                                    label_14024b9a6:
                                        arg13 = _mm_shuffle_ps(arg13, 
                                            _mm_shuffle_ps(zmm1, arg13, 0x32), 0x84)
                                        
                                        if ((rcx_15 & 8) != 0)
                                            arg13 = _mm_shuffle_ps(arg13, 
                                                _mm_shuffle_ps(zmm1, arg13, 0x23), 0x24)
                                    
                                    zmm0 = data_142fc95e0
                                    zmm1 = zmm4 & zmm0
                                    zmm0 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm0, zmm1) & zmm13, 0x1f)
                                    char temp0_746 = _mm_movemask_ps(zmm0)
                                    
                                    if (temp0_746 == 0)
                                        zmm13 = arg_80
                                    else
                                        zmm13 = arg_80
                                        
                                        if ((temp0_746 & 1) == 0)
                                            if ((temp0_746 & 2) != 0)
                                                goto label_14024c60a
                                            
                                            goto label_14024ba20
                                        
                                        zmm4 = zx.o(*arg14[0].q)
                                        
                                        if ((temp0_746 & 2) != 0)
                                        label_14024c60a:
                                            zmm4 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(arg14, 0x4e)[0].q), 
                                                    zmm4, 0), 
                                                zmm4, 0xe2)
                                            
                                            if ((temp0_746 & 4) == 0)
                                                goto label_14024ba29
                                            
                                            goto label_14024c626
                                        
                                    label_14024ba20:
                                        
                                        if ((temp0_746 & 4) != 0)
                                        label_14024c626:
                                            zmm4 = _mm_shuffle_ps(zmm4, 
                                                _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm4, 0x30), 0x84)
                                            
                                            if ((temp0_746 & 8) != 0)
                                                zmm4 = _mm_shuffle_ps(zmm4, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                                        zmm4, 0x20), 
                                                    0x24)
                                        else
                                        label_14024ba29:
                                            
                                            if ((temp0_746 & 8) != 0)
                                                zmm4 = _mm_shuffle_ps(zmm4, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                                        zmm4, 0x20), 
                                                    0x24)
                                        
                                        zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                            __andps_xmmxud_memxud(zmm4, data_143442cd0), 
                                            data_143442b40))
                                        zmm4 = arg17
                                    
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                                    arg14 = arg_a0
                                    
                                    if ((rcx_15 & 1) == 0)
                                        zmm2 = arg19
                                        
                                        if ((rcx_15 & 2) != 0)
                                        label_14024bad2:
                                            arg12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg12, 1), 
                                                arg12, 0xe2)
                                            
                                            if ((rcx_15 & 4) != 0)
                                                goto label_14024baa5
                                            
                                            goto label_14024bada
                                    else
                                        arg12[0] = zmm1[0]
                                        zmm2 = arg19
                                        
                                        if ((rcx_15 & 2) != 0)
                                            goto label_14024bad2
                                    
                                    if ((rcx_15 & 4) == 0)
                                    label_14024bada:
                                        zmm0 = arg_270
                                        
                                        if ((rcx_15 & 8) != 0)
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
                                    else
                                    label_14024baa5:
                                        arg12 = _mm_shuffle_ps(arg12, 
                                            _mm_shuffle_ps(zmm1, arg12, 0x32), 0x84)
                                        zmm0 = arg_270
                                        
                                        if ((rcx_15 & 8) != 0)
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
                                
                                zmm3 = (zmm3 ^ zmm0) & zmm9
                                
                                if (_mm_movemask_ps(_mm_slli_epi32(zmm3, 0x1f)) == 0)
                                    zmm7 = arg_60
                                else
                                    zmm1 = __pcmpeqd_xmmdq_memdq(data_143442ad0, arg_130)
                                    char temp0_764 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm1 & zmm9, 0x1f))
                                    
                                    if (temp0_764 == 0)
                                        zmm7 = arg_60
                                    else
                                        zmm2 = zx.o(0)
                                        char temp35_1 = temp0_764 & 1
                                        
                                        if (temp35_1 == 0)
                                            zmm7 = arg_60
                                            
                                            if (temp35_1 != 0)
                                            label_14024bbff:
                                                arg13[0] = zmm2[0]
                                                
                                                if (temp35_1 != 0)
                                                    goto label_14024bb65
                                                
                                                goto label_14024bc0a
                                        else
                                            zmm0 = __return_addr.o
                                            zmm0[0] = zmm2[0]
                                            __return_addr.o = zmm0
                                            zmm7 = arg_60
                                            
                                            if (temp35_1 != 0)
                                                goto label_14024bbff
                                        
                                        bool cond:158_1
                                        bool cond:159_1
                                        bool cond:174_1
                                        bool cond:175_1
                                        
                                        if (temp35_1 != 0)
                                        label_14024bb65:
                                            arg12[0] = zmm2[0]
                                            zmm12 = zmm4
                                            char temp51_1 = temp0_764 & 2
                                            cond:158_1 = temp51_1 == 0
                                            cond:159_1 = temp51_1 != 0
                                            cond:174_1 = temp51_1 == 0
                                            cond:175_1 = temp51_1 != 0
                                            
                                            if (temp51_1 != 0)
                                                goto label_14024bc1b
                                            
                                            goto label_14024bb77
                                        
                                    label_14024bc0a:
                                        zmm12 = zmm4
                                        char temp50_1 = temp0_764 & 2
                                        cond:158_1 = temp50_1 == 0
                                        cond:159_1 = temp50_1 != 0
                                        cond:174_1 = temp50_1 == 0
                                        cond:175_1 = temp50_1 != 0
                                        
                                        if (temp50_1 == 0)
                                        label_14024bb77:
                                            
                                            if (not(cond:158_1))
                                            label_14024bb8a:
                                                arg13 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zx.o(0), arg13, 0), arg13, 0xe2)
                                                
                                                if (cond:175_1)
                                                    goto label_14024bc42
                                                
                                                goto label_14024bb94
                                        else
                                        label_14024bc1b:
                                            zmm4 = __return_addr.o
                                            __return_addr.o = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), zmm4, 0), zmm4, 0xe2)
                                            
                                            if (cond:159_1)
                                                goto label_14024bb8a
                                        
                                        bool cond:210_1
                                        bool cond:211_1
                                        bool cond:235_1
                                        bool cond:236_1
                                        
                                        if (not(cond:174_1))
                                        label_14024bc42:
                                            arg12 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), arg12, 0), arg12, 0xe2)
                                            char temp74_1 = temp0_764 & 4
                                            cond:210_1 = temp74_1 == 0
                                            cond:211_1 = temp74_1 != 0
                                            cond:235_1 = temp74_1 == 0
                                            cond:236_1 = temp74_1 != 0
                                            
                                            if (temp74_1 != 0)
                                                goto label_14024bba0
                                            
                                            goto label_14024bc4e
                                        
                                    label_14024bb94:
                                        char temp73_1 = temp0_764 & 4
                                        cond:210_1 = temp73_1 == 0
                                        cond:211_1 = temp73_1 != 0
                                        cond:235_1 = temp73_1 == 0
                                        cond:236_1 = temp73_1 != 0
                                        
                                        if (temp73_1 == 0)
                                        label_14024bc4e:
                                            
                                            if (not(cond:210_1))
                                            label_14024bc5c:
                                                arg13 = _mm_shuffle_ps(arg13, 
                                                    _mm_shuffle_ps(zx.o(0), arg13, 0x30), 0x84)
                                                
                                                if (cond:236_1)
                                                    goto label_14024bbc3
                                                
                                                goto label_14024bc67
                                        else
                                        label_14024bba0:
                                            zmm4 = __return_addr.o
                                            __return_addr.o = _mm_shuffle_ps(zmm4, 
                                                _mm_shuffle_ps(zx.o(0), zmm4, 0x30), 0x84)
                                            
                                            if (cond:211_1)
                                                goto label_14024bc5c
                                        
                                        bool cond:274_1
                                        bool cond:275_1
                                        bool cond:297_1
                                        bool cond:298_1
                                        
                                        if (not(cond:235_1))
                                        label_14024bbc3:
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(zx.o(0), arg12, 0x30), 0x84)
                                            char temp99_1 = temp0_764 & 8
                                            cond:274_1 = temp99_1 == 0
                                            cond:275_1 = temp99_1 != 0
                                            cond:297_1 = temp99_1 == 0
                                            cond:298_1 = temp99_1 != 0
                                            
                                            if (temp99_1 != 0)
                                                goto label_14024bc73
                                            
                                            goto label_14024bbd0
                                        
                                    label_14024bc67:
                                        char temp98_1 = temp0_764 & 8
                                        cond:274_1 = temp98_1 == 0
                                        cond:275_1 = temp98_1 != 0
                                        cond:297_1 = temp98_1 == 0
                                        cond:298_1 = temp98_1 != 0
                                        
                                        if (temp98_1 != 0)
                                        label_14024bc73:
                                            zmm4 = __return_addr.o
                                            __return_addr.o = _mm_shuffle_ps(zmm4, 
                                                _mm_shuffle_ps(zx.o(0), zmm4, 0x20), 0x24)
                                            zmm4 = zmm12
                                            
                                            if (cond:275_1)
                                                goto label_14024bbe3
                                            
                                            goto label_14024bc8e
                                        
                                    label_14024bbd0:
                                        zmm4 = zmm12
                                        
                                        if (cond:274_1)
                                        label_14024bc8e:
                                            
                                            if (not(cond:297_1))
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(zmm2, arg12, 0x20), 0x24)
                                        else
                                        label_14024bbe3:
                                            arg13 = _mm_shuffle_ps(arg13, 
                                                _mm_shuffle_ps(zx.o(0), arg13, 0x20), 0x24)
                                            
                                            if (cond:298_1)
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(zmm2, arg12, 0x20), 0x24)
                                        
                                        zmm2 = arg19
                                    
                                    char temp0_784 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm1 & not.o(zmm3), 0x1f))
                                    
                                    if (temp0_784 != 0)
                                        char temp46_1 = temp0_784 & 1
                                        
                                        if (temp46_1 != 0)
                                            zmm0 = __return_addr.o
                                            zmm0[0] = 0
                                            __return_addr.o = zmm0
                                            
                                            if (temp46_1 != 0)
                                                goto label_14024bd42
                                        else if (temp46_1 != 0)
                                        label_14024bd42:
                                            arg13[0] = 0
                                            
                                            if (temp46_1 != 0)
                                                goto label_14024bce3
                                            
                                            goto label_14024bd49
                                        
                                        bool cond:172_1
                                        bool cond:173_1
                                        bool cond:190_1
                                        bool cond:191_1
                                        
                                        if (temp46_1 != 0)
                                        label_14024bce3:
                                            arg12[0] = 0
                                            char temp66_1 = temp0_784 & 2
                                            cond:172_1 = temp66_1 == 0
                                            cond:173_1 = temp66_1 != 0
                                            cond:190_1 = temp66_1 == 0
                                            cond:191_1 = temp66_1 != 0
                                            
                                            if (temp66_1 != 0)
                                                goto label_14024bd51
                                            
                                            goto label_14024bcec
                                        
                                    label_14024bd49:
                                        char temp65_1 = temp0_784 & 2
                                        cond:172_1 = temp65_1 == 0
                                        cond:173_1 = temp65_1 != 0
                                        cond:190_1 = temp65_1 == 0
                                        cond:191_1 = temp65_1 != 0
                                        
                                        if (temp65_1 == 0)
                                        label_14024bcec:
                                            
                                            if (not(cond:172_1))
                                            label_14024bcfb:
                                                arg13 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zx.o(0), arg13, 0), arg13, 0xe2)
                                                
                                                if (cond:191_1)
                                                    goto label_14024bd70
                                                
                                                goto label_14024bd01
                                        else
                                        label_14024bd51:
                                            zmm3 = __return_addr.o
                                            __return_addr.o = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), zmm3, 0), zmm3, 0xe2)
                                            
                                            if (cond:173_1)
                                                goto label_14024bcfb
                                        
                                        bool cond:233_1
                                        bool cond:234_1
                                        bool cond:254_1
                                        bool cond:255_1
                                        
                                        if (not(cond:190_1))
                                        label_14024bd70:
                                            arg12 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), arg12, 0), arg12, 0xe2)
                                            char temp89_1 = temp0_784 & 4
                                            cond:233_1 = temp89_1 == 0
                                            cond:234_1 = temp89_1 != 0
                                            cond:254_1 = temp89_1 == 0
                                            cond:255_1 = temp89_1 != 0
                                            
                                            if (temp89_1 != 0)
                                                goto label_14024bd09
                                            
                                            goto label_14024bd78
                                        
                                    label_14024bd01:
                                        char temp88_1 = temp0_784 & 4
                                        cond:233_1 = temp88_1 == 0
                                        cond:234_1 = temp88_1 != 0
                                        cond:254_1 = temp88_1 == 0
                                        cond:255_1 = temp88_1 != 0
                                        
                                        if (temp88_1 == 0)
                                        label_14024bd78:
                                            
                                            if (not(cond:233_1))
                                            label_14024bd82:
                                                arg13 = _mm_shuffle_ps(arg13, 
                                                    _mm_shuffle_ps(zx.o(0), arg13, 0x30), 0x84)
                                                
                                                if (cond:255_1)
                                                    goto label_14024bd24
                                                
                                                goto label_14024bd89
                                        else
                                        label_14024bd09:
                                            zmm3 = __return_addr.o
                                            __return_addr.o = _mm_shuffle_ps(zmm3, 
                                                _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
                                            
                                            if (cond:234_1)
                                                goto label_14024bd82
                                        
                                        bool cond:295_1
                                        bool cond:296_1
                                        bool cond:311_1
                                        bool cond:312_1
                                        
                                        if (not(cond:254_1))
                                        label_14024bd24:
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(zx.o(0), arg12, 0x30), 0x84)
                                            char temp113_1 = temp0_784 & 8
                                            cond:295_1 = temp113_1 == 0
                                            cond:296_1 = temp113_1 != 0
                                            cond:311_1 = temp113_1 == 0
                                            cond:312_1 = temp113_1 != 0
                                            
                                            if (temp113_1 != 0)
                                                goto label_14024bd91
                                            
                                            goto label_14024bd2d
                                        
                                    label_14024bd89:
                                        char temp112_1 = temp0_784 & 8
                                        cond:295_1 = temp112_1 == 0
                                        cond:296_1 = temp112_1 != 0
                                        cond:311_1 = temp112_1 == 0
                                        cond:312_1 = temp112_1 != 0
                                        
                                        if (temp112_1 != 0)
                                        label_14024bd91:
                                            zmm3 = __return_addr.o
                                            __return_addr.o = _mm_shuffle_ps(zmm3, 
                                                _mm_shuffle_ps(zx.o(0), zmm3, 0x20), 0x24)
                                            
                                            if (cond:296_1)
                                                goto label_14024bd37
                                            
                                            goto label_14024bda3
                                        
                                    label_14024bd2d:
                                        
                                        if (cond:295_1)
                                        label_14024bda3:
                                            
                                            if (not(cond:311_1))
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(zx.o(0), arg12, 0x20), 0x24)
                                        else
                                        label_14024bd37:
                                            arg13 = _mm_shuffle_ps(arg13, 
                                                _mm_shuffle_ps(zx.o(0), arg13, 0x20), 0x24)
                                            
                                            if (cond:312_1)
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(zx.o(0), arg12, 0x20), 0x24)
                        
                        arg15 = _mm_cmpeq_epi32(arg15, arg16) & not.o(zmm9)
                        zmm12 = _mm_slli_epi32(arg15, 0x1f)
                        char temp0_805 = _mm_movemask_ps(zmm12)
                        
                        if (temp0_805 == 0)
                            zmm3 = arg34
                            arg11 = __return_addr.o
                        else
                            zmm3 = arg11
                            arg11 = zmm4
                            zmm4 = _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(arg21, arg16), 0xe8), 
                                _mm_shuffle_epi32(
                                    __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(arg16, 0xf5), arg_210), 
                                    0xe8)[0].q)
                            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                            zmm9 = _mm_shuffle_epi32(zmm4, 0x4e)
                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm0[0].q)
                            zmm9 = _mm_unpacklo_epi32(zmm9, _mm_cmpgt_epi32(zx.o(0), zmm9)[0].q)
                            arg_140 = zmm9
                            zmm9 = __paddq_xmmdq_memdq(zmm9, arg_70)
                            arg_e0 = zmm4
                            arg_d0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm4, arg_b0), arg14)
                            zmm9 = _mm_add_epi64(zmm9, zmm13)
                            zmm2 &= arg15
                            arg_40 = arg13
                            arg20 = arg12
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0)
                                zmm4 = arg11
                                arg11 = zmm3
                            else
                                zmm1 = _mm_srai_epi32(
                                    _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), arg18) & zmm2, 
                                        0x1f), 
                                    0x1f)
                                char temp0_826 = _mm_movemask_ps(zmm1)
                                
                                if (temp0_826 == 0)
                                    zmm4 = arg11
                                    arg11 = zmm3
                                else
                                    arg19 = zmm2
                                    arg14 = arg15
                                    int32_t temp0_827[0x4] = __paddq_xmmdq_memdq(arg31, arg_70)
                                    zmm7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg24, arg_b0), 
                                        arg_e0)
                                    int32_t temp0_830[0x4] = __paddq_xmmdq_memdq(temp0_827, arg_140)
                                    zmm4 = data_1434426c0
                                    int32_t temp0_831[0x4] = _mm_add_epi64(temp0_830, zmm4)
                                    zmm7 = _mm_add_epi64(zmm7, zmm4)
                                    arg11 = _mm_shuffle_epi32(zmm1, 0x50)
                                    zmm7 &= arg11
                                    zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                                    arg12 = temp0_831 & zmm0
                                    int64_t rax_166 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                                    void* rbx_15 = arg4 + rax_166
                                    zmm2 = *(arg4 + rax_166)
                                    int64_t rax_167 = arg12[0].q
                                    void* rdi_6 = arg4 + rax_167
                                    zmm13 = *(arg4 + rax_167)
                                    int64_t rax_168 = _mm_shuffle_epi32(arg12, 0x4e)[0].q
                                    void* rsi_3 = arg4 + rax_168
                                    arg_90 = *(arg4 + rax_168)
                                    arg12 = arg11 & zmm4
                                    zmm4 &= zmm0
                                    void* rbp_20 = zmm7[0].q + arg4
                                    zmm1 = *(arg12[0].q + rbp_20)
                                    arg15 = *(_mm_shuffle_epi32(arg12, 0x4e)[0].q + rbx_15)
                                    arg12 = *(zmm4[0].q + rdi_6)
                                    zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rsi_3)
                                    zmm7 = data_1434426e0
                                    arg11 &= zmm7
                                    zmm0 &= zmm7
                                    arg16 = *(arg11[0].q + rbp_20)
                                    zmm3 = *(_mm_shuffle_epi32(arg11, 0x4e)[0].q + rbx_15)
                                    zmm7 = *(zmm0[0].q + rdi_6)
                                    arg11 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rsi_3)
                                    bool cond:91_1
                                    bool cond:92_1
                                    bool cond:99_1
                                    bool cond:100_1
                                    
                                    if ((temp0_826 & 1) == 0)
                                        char temp32_1 = temp0_826 & 2
                                        cond:91_1 = temp32_1 != 0
                                        cond:92_1 = temp32_1 == 0
                                        cond:99_1 = temp32_1 != 0
                                        cond:100_1 = temp32_1 == 0
                                        
                                        if (temp32_1 == 0)
                                            goto label_14024c248
                                        
                                        goto label_14024bff3
                                    
                                    arg_30 = *rbp_20
                                    char temp31_1 = temp0_826 & 2
                                    cond:91_1 = temp31_1 != 0
                                    cond:92_1 = temp31_1 == 0
                                    cond:99_1 = temp31_1 != 0
                                    cond:100_1 = temp31_1 == 0
                                    
                                    if (temp31_1 == 0)
                                    label_14024c248:
                                        
                                        if (cond:92_1)
                                            goto label_14024bffe
                                        
                                        goto label_14024c24e
                                    
                                label_14024bff3:
                                    arg_30 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg_30, 0), 
                                        arg_30, 0xe2)
                                    
                                    if (not(cond:91_1))
                                    label_14024bffe:
                                        
                                        if (cond:100_1)
                                            goto label_14024c258
                                        
                                        goto label_14024c004
                                    
                                label_14024c24e:
                                    zmm1 = _mm_unpacklo_ps(zmm1, arg15[0].q)
                                    bool cond:139_1
                                    bool cond:140_1
                                    bool cond:156_1
                                    bool cond:157_1
                                    
                                    if (not(cond:99_1))
                                    label_14024c258:
                                        char temp45_1 = temp0_826 & 4
                                        cond:139_1 = temp45_1 != 0
                                        cond:140_1 = temp45_1 == 0
                                        cond:156_1 = temp45_1 != 0
                                        cond:157_1 = temp45_1 == 0
                                        arg15 = arg14
                                        arg21 = zmm1
                                        
                                        if (temp45_1 == 0)
                                            goto label_14024c01e
                                        
                                        goto label_14024c27d
                                    
                                label_14024c004:
                                    arg16 = _mm_unpacklo_ps(arg16, zmm3[0].q)
                                    char temp44_1 = temp0_826 & 4
                                    cond:139_1 = temp44_1 != 0
                                    cond:140_1 = temp44_1 == 0
                                    cond:156_1 = temp44_1 != 0
                                    cond:157_1 = temp44_1 == 0
                                    arg15 = arg14
                                    arg21 = zmm1
                                    
                                    if (temp44_1 == 0)
                                    label_14024c01e:
                                        zmm0 = arg17
                                        zmm13 = arg_80
                                        
                                        if (cond:140_1)
                                            goto label_14024c298
                                        
                                        goto label_14024c034
                                    
                                label_14024c27d:
                                    arg_30 = _mm_shuffle_ps(arg_30, 
                                        _mm_shuffle_ps(zmm13, arg_30, 0x30), 0x84)
                                    zmm0 = arg17
                                    zmm13 = arg_80
                                    
                                    if (not(cond:139_1))
                                    label_14024c298:
                                        
                                        if (cond:157_1)
                                            goto label_14024c052
                                        
                                        goto label_14024c2a3
                                    
                                label_14024c034:
                                    zmm1 = arg21
                                    arg21 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg12, zmm1, 0x30), 
                                        0x84)
                                    bool cond:188_1
                                    bool cond:189_1
                                    bool cond:208_1
                                    bool cond:209_1
                                    
                                    if (not(cond:156_1))
                                    label_14024c052:
                                        zmm1 = arg_50
                                        arg13 = arg_40
                                        char temp64_1 = temp0_826 & 8
                                        cond:188_1 = temp64_1 != 0
                                        cond:189_1 = temp64_1 == 0
                                        cond:208_1 = temp64_1 != 0
                                        cond:209_1 = temp64_1 == 0
                                        
                                        if (temp64_1 == 0)
                                            goto label_14024c2bc
                                        
                                        goto label_14024c07b
                                    
                                label_14024c2a3:
                                    arg16 = _mm_shuffle_ps(arg16, 
                                        _mm_shuffle_ps(zmm7, arg16, 0x30), 0x84)
                                    zmm1 = arg_50
                                    arg13 = arg_40
                                    char temp63_1 = temp0_826 & 8
                                    cond:188_1 = temp63_1 != 0
                                    cond:189_1 = temp63_1 == 0
                                    cond:208_1 = temp63_1 != 0
                                    cond:209_1 = temp63_1 == 0
                                    
                                    if (temp63_1 == 0)
                                    label_14024c2bc:
                                        zmm7 = arg_60
                                        arg14 = arg_a0
                                        
                                        if (cond:189_1)
                                            goto label_14024c096
                                        
                                        goto label_14024c2e2
                                    
                                label_14024c07b:
                                    arg_30 = _mm_shuffle_ps(arg_30, 
                                        _mm_shuffle_ps(arg_90, arg_30, 0x20), 0x24)
                                    zmm7 = arg_60
                                    arg14 = arg_a0
                                    
                                    if (cond:188_1)
                                    label_14024c2e2:
                                        arg21 = _mm_shuffle_ps(arg21, 
                                            _mm_shuffle_ps(zmm4, arg21, 0x20), 0x24)
                                        zmm4 = zmm0
                                        arg12 = arg20
                                        zmm2 = arg19
                                        
                                        if (cond:208_1)
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(arg11, arg16, 0x20), 0x24)
                                    else
                                    label_14024c096:
                                        zmm4 = zmm0
                                        arg12 = arg20
                                        zmm2 = arg19
                                        
                                        if (not(cond:209_1))
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(arg11, arg16, 0x20), 0x24)
                                    
                                    arg11 = zmm1
                                
                                zmm0 = zx.o(0)
                                zmm1 = _mm_cmpeq_epi32(arg18, zmm0) & not.o(zmm2)
                                arg18 = zmm1
                                zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                                char temp0_852 = _mm_movemask_ps(zmm1)
                                
                                if (temp0_852 != 0)
                                    arg_80 = arg16
                                    arg16 = arg14
                                    arg_90 = arg15
                                    arg11 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                                    zmm1 = _mm_srai_epi32(zmm1, 0x1f) & arg11
                                    arg_110 = zmm9
                                    
                                    if (_mm_movemask_ps(zmm1) == 0)
                                        arg15 = arg_d0
                                        zmm3 = zmm9
                                    else
                                        zmm0 = data_1434426c0
                                        zmm2 = _mm_add_epi64(zmm9, zmm0)
                                        int32_t temp0_858[0x4] = _mm_add_epi64(arg_d0, zmm0)
                                        zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ zmm1
                                        arg15 = _mm_shuffle_epi32(zmm7, 0x50)
                                        arg15 = (arg15 & not.o(temp0_858)) | (arg_d0 & arg15)
                                        zmm3 = _mm_shuffle_epi32(zmm7, 0xfa)
                                        zmm3 = (zmm3 & not.o(zmm2)) | (zmm9 & zmm3)
                                        zmm2 = __paddq_xmmdq_memdq(arg31, arg_70)
                                        zmm4 = __paddq_xmmdq_memdq(
                                            __paddq_xmmdq_memdq(arg24, arg_b0), arg_e0)
                                        zmm2 =
                                            _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, arg_140), zmm0)
                                        zmm4 = _mm_add_epi64(zmm4, zmm0)
                                        arg12 = _mm_shuffle_epi32(zmm1, 0x50) & zmm4
                                        zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & zmm2
                                        float temp0_871[0x4] = _mm_unpacklo_ps(
                                            *(arg4 + arg12[0].q), 
                                            (*(arg4 + _mm_shuffle_epi32(arg12, 0x4e)[0].q))[0].q)
                                        zmm2 = *(arg4 + zmm1[0].q)
                                        zmm1 = *(arg4 + _mm_shuffle_epi32(zmm1, 0x4e)[0].q)
                                        float temp0_873[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
                                        zmm0 = temp0_871[0].q | temp0_873[0].q << 0x40
                                    
                                    zmm9 = zmm13
                                    arg11 &= zmm0
                                    
                                    if ((temp0_852 & 1) != 0)
                                        zmm0 = arg_30
                                        zmm0[0] = arg11[0]
                                        arg_30 = zmm0
                                        zmm13 = arg17
                                        arg14 = arg16
                                        
                                        if ((temp0_852 & 2) != 0)
                                            goto label_14024c37e
                                        
                                        goto label_14024c349
                                    
                                    zmm13 = arg17
                                    arg14 = arg16
                                    
                                    if ((temp0_852 & 2) != 0)
                                    label_14024c37e:
                                        zmm1 = arg_30
                                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm1, 1), zmm1, 
                                            0xe2)
                                        arg_30 = zmm0
                                        
                                        if ((temp0_852 & 4) != 0)
                                            goto label_14024c356
                                        
                                        goto label_14024c395
                                    
                                label_14024c349:
                                    
                                    if ((temp0_852 & 4) == 0)
                                    label_14024c395:
                                        
                                        if ((temp0_852 & 8) != 0)
                                            zmm0 = _mm_shuffle_ps(arg_30, 
                                                _mm_shuffle_ps(arg11, arg_30, 0x23), 0x24)
                                            arg_30 = zmm0
                                    else
                                    label_14024c356:
                                        zmm0 = _mm_shuffle_ps(arg11, arg_30, 0x32)
                                        zmm1 = _mm_shuffle_ps(arg_30, zmm0, 0x84)
                                        arg_30 = zmm1
                                        
                                        if ((temp0_852 & 8) != 0)
                                            zmm0 = _mm_shuffle_ps(arg_30, 
                                                _mm_shuffle_ps(arg11, arg_30, 0x23), 0x24)
                                            arg_30 = zmm0
                                    
                                    zmm7 = data_1434422d0
                                    arg12 = zmm13 & zmm7
                                    zmm7 = _mm_srai_epi32(
                                        _mm_slli_epi32(_mm_cmpeq_epi32(zmm7, arg12) & arg18, 0x1f), 
                                        0x1f)
                                    char temp0_890 = _mm_movemask_ps(zmm7)
                                    
                                    if (temp0_890 == 0)
                                        arg11 = arg_50
                                        arg13 = arg_40
                                        arg16 = arg_80
                                    else
                                        arg11 = data_1434426c0
                                        zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                                        
                                        if ((temp0_890 & 1) != 0)
                                            zmm1 = *arg15[0].q
                                        
                                        zmm2 = _mm_add_epi64(zmm3, arg11)
                                        arg11 = _mm_add_epi64(arg11, arg15)
                                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                                        zmm7 = _mm_shuffle_epi32(zmm7, 0xfa)
                                        
                                        if ((temp0_890 & 2) != 0)
                                            zmm1 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(arg15, 0x4e)[0].q, zmm1, 0), 
                                                zmm1, 0xe2)
                                            arg14 = arg16
                                            zmm13 = arg17
                                        
                                        arg16 = arg_80
                                        arg15 &= zmm0
                                        zmm0 &= not.o(arg11)
                                        
                                        if ((temp0_890 & 4) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(*zmm3[0].q, zmm1, 0x30), 0x84)
                                        
                                        arg15 |= zmm0
                                        
                                        if ((temp0_890 & 8) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q, 
                                                    zmm1, 0x20), 
                                                0x24)
                                        
                                        zmm3 = (zmm3 & zmm7) | (zmm7 & not.o(zmm2))
                                        arg11 = arg_50
                                        arg13 = arg_40
                                    
                                    zmm4 = zmm13
                                    zmm13 = zmm9
                                    zmm9 = arg_110
                                    arg12 = _mm_cmpeq_epi32(arg12, zx.o(0)) & not.o(zmm1)
                                    
                                    if ((temp0_852 & 1) != 0)
                                        zmm0 = arg21
                                        zmm0[0] = arg12[0]
                                        arg21 = zmm0
                                        
                                        if ((temp0_852 & 2) != 0)
                                            goto label_14024c52e
                                        
                                        goto label_14024c4ff
                                    
                                    if ((temp0_852 & 2) != 0)
                                    label_14024c52e:
                                        zmm1 = arg21
                                        arg21 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, zmm1, 1), 
                                            zmm1, 0xe2)
                                        
                                        if ((temp0_852 & 4) != 0)
                                            goto label_14024c507
                                        
                                        goto label_14024c54b
                                    
                                label_14024c4ff:
                                    
                                    if ((temp0_852 & 4) == 0)
                                    label_14024c54b:
                                        
                                        if ((temp0_852 & 8) != 0)
                                            zmm0 = arg21
                                            arg21 = _mm_shuffle_ps(zmm0, 
                                                _mm_shuffle_ps(arg12, zmm0, 0x23), 0x24)
                                    else
                                    label_14024c507:
                                        zmm1 = arg21
                                        arg21 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(arg12, zmm1, 0x32), 0x84)
                                        
                                        if ((temp0_852 & 8) != 0)
                                            zmm0 = arg21
                                            arg21 = _mm_shuffle_ps(zmm0, 
                                                _mm_shuffle_ps(arg12, zmm0, 0x23), 0x24)
                                    
                                    zmm0 = data_142fc95e0
                                    arg12 = zmm4 & zmm0
                                    zmm1 =
                                        _mm_slli_epi32(arg18 & _mm_cmpeq_epi32(zmm0, arg12), 0x1f)
                                    char temp0_913 = _mm_movemask_ps(zmm1)
                                    
                                    if (temp0_913 == 0)
                                        arg15 = arg_90
                                    else
                                        if ((temp0_913 & 1) == 0)
                                            if ((temp0_913 & 2) != 0)
                                                goto label_14024c662
                                            
                                            goto label_14024c5a9
                                        
                                        zmm1 = *arg15[0].q
                                        
                                        if ((temp0_913 & 2) != 0)
                                        label_14024c662:
                                            zmm1 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(arg15, 0x4e)[0].q, zmm1, 0), 
                                                zmm1, 0xe2)
                                            arg15 = arg_90
                                            
                                            if ((temp0_913 & 4) == 0)
                                                goto label_14024c5bd
                                            
                                            goto label_14024c686
                                        
                                    label_14024c5a9:
                                        arg15 = arg_90
                                        
                                        if ((temp0_913 & 4) != 0)
                                        label_14024c686:
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(*zmm3[0].q, zmm1, 0x30), 0x84)
                                            
                                            if ((temp0_913 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        *_mm_shuffle_epi32(zmm3, 0x4e)[0].q, zmm1, 
                                                        0x20), 
                                                    0x24)
                                        else
                                        label_14024c5bd:
                                            
                                            if ((temp0_913 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        *_mm_shuffle_epi32(zmm3, 0x4e)[0].q, zmm1, 
                                                        0x20), 
                                                    0x24)
                                    
                                    zmm7 = arg_60
                                    arg12 = _mm_cmpeq_epi32(arg12, zx.o(0)) & not.o(zmm1)
                                    
                                    if ((temp0_852 & 1) != 0)
                                        arg16[0] = arg12[0]
                                        
                                        if ((temp0_852 & 2) != 0)
                                            goto label_14024c6f1
                                        
                                        goto label_14024c6c6
                                    
                                    if ((temp0_852 & 2) != 0)
                                    label_14024c6f1:
                                        arg16 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, arg16, 1), 
                                            arg16, 0xe2)
                                        
                                        if ((temp0_852 & 4) != 0)
                                            goto label_14024c6d3
                                        
                                        goto label_14024c6fa
                                    
                                label_14024c6c6:
                                    
                                    if ((temp0_852 & 4) == 0)
                                    label_14024c6fa:
                                        
                                        if ((temp0_852 & 8) != 0)
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(arg12, arg16, 0x23), 0x24)
                                    else
                                    label_14024c6d3:
                                        arg16 = _mm_shuffle_ps(arg16, 
                                            _mm_shuffle_ps(arg12, arg16, 0x32), 0x84)
                                        
                                        if ((temp0_852 & 8) != 0)
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(arg12, arg16, 0x23), 0x24)
                                    
                                    arg12 = arg20
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(arg15 & arg_190, 0x1f)) == 0)
                                zmm1 = arg22
                                zmm12 = arg21
                                zmm13 = arg_30
                                arg11 = __return_addr.o
                            else
                                zmm0 = _mm_srai_epi32(_mm_slli_epi32(arg15 & arg11, 0x1f), 0x1f)
                                char temp0_938 = _mm_movemask_ps(zmm0)
                                
                                if (temp0_938 == 0)
                                    zmm12 = arg21
                                    zmm13 = arg_30
                                else
                                    arg_110 = zmm9
                                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & arg11
                                    zmm12 = _mm_srai_epi32(zmm12, 0x1f) & zmm1
                                    uint32_t temp0_942 = _mm_movemask_ps(zmm12)
                                    zmm9 = zx.o(0)
                                    arg_80 = arg16
                                    arg19 = zmm0
                                    
                                    if (temp0_942 == 0)
                                        arg18 = zx.o(0)
                                        zmm7 = zx.o(0)
                                    else
                                        arg16 = arg11
                                        char rbx_16 = temp0_942.b
                                        
                                        if ((rbx_16 & 1) == 0)
                                            if ((rbx_16 & 2) != 0)
                                                goto label_14024c87a
                                            
                                            goto label_14024c7af
                                        
                                        arg11 = *arg14[0].q
                                        
                                        if ((rbx_16 & 2) != 0)
                                        label_14024c87a:
                                            zmm0 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(arg14, 0x4e)[0].q, arg11, 
                                                    0), 
                                                arg11, 0xe2)
                                            arg11 = zmm0
                                            
                                            if ((rbx_16 & 4) == 0)
                                                goto label_14024c7b8
                                            
                                            goto label_14024c893
                                        
                                    label_14024c7af:
                                        
                                        if ((rbx_16 & 4) != 0)
                                        label_14024c893:
                                            zmm0 = _mm_shuffle_ps(*zmm13[0].q, arg11, 0x30)
                                            arg11 = _mm_shuffle_ps(arg11, zmm0, 0x84)
                                            
                                            if ((rbx_16 & 8) != 0)
                                                zmm0 = _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, arg11, 
                                                    0x20)
                                                arg11 = _mm_shuffle_ps(arg11, zmm0, 0x24)
                                        else
                                        label_14024c7b8:
                                            
                                            if ((rbx_16 & 8) != 0)
                                                zmm0 = _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, arg11, 
                                                    0x20)
                                                arg11 = _mm_shuffle_ps(arg11, zmm0, 0x24)
                                        
                                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                        char temp0_947 = _mm_movemask_ps(zmm1)
                                        zmm1 = zx.o(0)
                                        
                                        if ((temp0_947 & 1) != 0)
                                            zmm1[0] = arg11[0]
                                        
                                        zmm7 = data_1434426c0
                                        zmm12 ^= zmm0
                                        
                                        if ((temp0_947 & 2) == 0)
                                            arg18 = zmm1
                                        else
                                            arg18 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm1, 1), 
                                                zmm1, 0xe2)
                                        
                                        zmm1 = _mm_add_epi64(arg14, zmm7)
                                        zmm2 = _mm_shuffle_epi32(zmm12, 0x50)
                                        
                                        if ((temp0_947 & 4) != 0)
                                            arg18 = _mm_shuffle_ps(arg18, 
                                                _mm_shuffle_ps(arg11, arg18, 0x32), 0x84)
                                        
                                        zmm0 = zmm2 & not.o(zmm1)
                                        
                                        if ((temp0_947 & 8) != 0)
                                            arg11 = _mm_shuffle_ps(arg11, arg18, 0x23)
                                            arg18 = _mm_shuffle_ps(arg18, arg11, 0x24)
                                        
                                        zmm1 = _mm_add_epi64(zmm13, zmm7)
                                        zmm3 = _mm_shuffle_epi32(zmm12, 0xfa)
                                        arg12 = (arg14 & zmm2) | zmm0
                                        
                                        if ((rbx_16 & 1) != 0)
                                            arg11 = *arg12[0].q
                                        
                                        zmm0 = zmm3 & not.o(zmm1)
                                        zmm1 = zmm13 & zmm3
                                        zmm12 = zmm7
                                        
                                        if ((rbx_16 & 2) != 0)
                                            arg11 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(arg12, 0x4e)[0].q, arg11, 
                                                    0), 
                                                arg11, 0xe2)
                                            zmm7 = zmm4
                                            arg13 = arg_40
                                            arg16 = arg_50
                                            zmm1 |= zmm0
                                            
                                            if ((rbx_16 & 4) != 0)
                                                arg11 = _mm_shuffle_ps(arg11, 
                                                    _mm_shuffle_ps(*zmm1[0].q, arg11, 0x30), 0x84)
                                        else
                                            zmm7 = zmm4
                                            zmm1 |= zmm0
                                            
                                            if ((rbx_16 & 4) != 0)
                                                arg11 = _mm_shuffle_ps(arg11, 
                                                    _mm_shuffle_ps(*zmm1[0].q, arg11, 0x30), 0x84)
                                        
                                        zmm4 = zmm7
                                        zmm9 = zx.o(0)
                                        
                                        if ((rbx_16 & 8) == 0)
                                            zmm7 = zx.o(0)
                                            
                                            if ((temp0_947 & 1) == 0)
                                                goto label_14024c9e7
                                            
                                            goto label_14024c973
                                        
                                        arg11 = _mm_shuffle_ps(arg11, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, 
                                                arg11, 0x20), 
                                            0x24)
                                        zmm7 = zx.o(0)
                                        
                                        if ((temp0_947 & 1) != 0)
                                        label_14024c973:
                                            zmm7[0] = arg11[0]
                                            zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                            
                                            if ((temp0_947 & 2) != 0)
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(arg11, zmm7, 1), zmm7, 0xe2)
                                        else
                                        label_14024c9e7:
                                            zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                            
                                            if ((temp0_947 & 2) != 0)
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(arg11, zmm7, 1), zmm7, 0xe2)
                                        
                                        zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                        zmm1 = _mm_add_epi64(zmm1, zmm12)
                                        int32_t temp0_980[0x4] = _mm_add_epi64(arg12, zmm12)
                                        
                                        if ((temp0_947 & 4) != 0)
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(arg11, zmm7, 0x32), 0x84)
                                        
                                        if ((temp0_947 & 8) != 0)
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(arg11, zmm7, 0x23), 0x24)
                                        
                                        arg11 = arg16
                                        arg16 = arg_80
                                        arg14 = (arg14 & zmm2) | (zmm2 & not.o(temp0_980))
                                        zmm13 = (zmm13 & zmm3) | (zmm3 & not.o(zmm1))
                                    
                                    zmm0 = data_1434422d0
                                    zmm1 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg11
                                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg15 & zmm1, 0x1f), 0x1f)
                                    char temp0_988 = _mm_movemask_ps(zmm2)
                                    arg_a0 = zmm7
                                    
                                    if (temp0_988 == 0)
                                        zmm12 = zx.o(0)
                                        zmm2 = arg18
                                    else
                                        if ((temp0_988 & 1) == 0)
                                            if ((temp0_988 & 2) != 0)
                                                goto label_14024cc10
                                            
                                            goto label_14024cab6
                                        
                                        arg11 = *arg14[0].q
                                        
                                        if ((temp0_988 & 2) != 0)
                                        label_14024cc10:
                                            zmm0 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(arg14, 0x4e)[0].q, arg11, 
                                                    0), 
                                                arg11, 0xe2)
                                            arg11 = zmm0
                                            
                                            if ((temp0_988 & 4) == 0)
                                                goto label_14024cabf
                                            
                                            goto label_14024cc29
                                        
                                    label_14024cab6:
                                        
                                        if ((temp0_988 & 4) != 0)
                                        label_14024cc29:
                                            zmm0 = _mm_shuffle_ps(*zmm13[0].q, arg11, 0x30)
                                            arg11 = _mm_shuffle_ps(arg11, zmm0, 0x84)
                                            
                                            if ((temp0_988 & 8) != 0)
                                                zmm0 = _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, arg11, 
                                                    0x20)
                                                arg11 = _mm_shuffle_ps(arg11, zmm0, 0x24)
                                        else
                                        label_14024cabf:
                                            
                                            if ((temp0_988 & 8) != 0)
                                                zmm0 = _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, arg11, 
                                                    0x20)
                                                arg11 = _mm_shuffle_ps(arg11, zmm0, 0x24)
                                        
                                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                        char temp0_993 = _mm_movemask_ps(zmm1)
                                        arg12 = zx.o(0)
                                        
                                        if ((temp0_993 & 1) != 0)
                                            arg12[0] = arg11[0]
                                        
                                        zmm9 = data_1434426c0
                                        zmm2 ^= zmm0
                                        
                                        if ((temp0_993 & 2) != 0)
                                            arg12 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, arg12, 1), 
                                                arg12, 0xe2)
                                        
                                        zmm1 = _mm_add_epi64(arg14, zmm9)
                                        zmm3 = _mm_shuffle_epi32(zmm2, 0x50)
                                        
                                        if ((temp0_993 & 4) != 0)
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(arg11, arg12, 0x32), 0x84)
                                        
                                        zmm0 = zmm3 & not.o(zmm1)
                                        arg13 = arg14
                                        
                                        if ((temp0_993 & 8) != 0)
                                            arg11 = _mm_shuffle_ps(arg11, arg12, 0x23)
                                            arg12 = _mm_shuffle_ps(arg12, arg11, 0x24)
                                        
                                        arg_90 = arg12
                                        zmm1 = _mm_add_epi64(zmm13, zmm9)
                                        arg12 = _mm_shuffle_epi32(zmm2, 0xfa)
                                        arg14 = (arg14 & zmm3) | zmm0
                                        
                                        if ((temp0_988 & 1) != 0)
                                            arg11 = *arg14[0].q
                                        
                                        zmm0 = arg12 & not.o(zmm1)
                                        zmm4 = zmm13
                                        zmm13 &= arg12
                                        
                                        if ((temp0_988 & 2) != 0)
                                            arg11 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(arg14, 0x4e)[0].q, arg11, 
                                                    0), 
                                                arg11, 0xe2)
                                            zmm2 = arg18
                                            zmm13 |= zmm0
                                            
                                            if ((temp0_988 & 4) != 0)
                                            label_14024cc79:
                                                arg11 = _mm_shuffle_ps(arg11, 
                                                    _mm_shuffle_ps(*zmm13[0].q, arg11, 0x30), 0x84)
                                                
                                                if ((temp0_988 & 8) == 0)
                                                    goto label_14024cbb1
                                                
                                                goto label_14024cc99
                                        else
                                            zmm2 = arg18
                                            zmm13 |= zmm0
                                            
                                            if ((temp0_988 & 4) != 0)
                                                goto label_14024cc79
                                        
                                        if ((temp0_988 & 8) == 0)
                                        label_14024cbb1:
                                            zmm12 = zx.o(0)
                                            
                                            if ((temp0_993 & 1) == 0)
                                                goto label_14024ccab
                                            
                                            goto label_14024cbbf
                                        
                                    label_14024cc99:
                                        arg11 = _mm_shuffle_ps(arg11, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm13, 0x4e)[0].q, 
                                                arg11, 0x20), 
                                            0x24)
                                        zmm12 = zx.o(0)
                                        
                                        if ((temp0_993 & 1) != 0)
                                        label_14024cbbf:
                                            zmm12[0] = arg11[0]
                                            arg12 = _mm_slli_epi32(arg12, 0x1f)
                                            zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                            
                                            if ((temp0_993 & 2) != 0)
                                                zmm12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(arg11, zmm12, 1), zmm12, 0xe2)
                                        else
                                        label_14024ccab:
                                            arg12 = _mm_slli_epi32(arg12, 0x1f)
                                            zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                            
                                            if ((temp0_993 & 2) != 0)
                                                zmm12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(arg11, zmm12, 1), zmm12, 0xe2)
                                        
                                        int32_t temp0_1023[0x4] = _mm_srai_epi32(arg12, 0x1f)
                                        zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                                        zmm13 = _mm_add_epi64(zmm13, zmm9)
                                        int32_t temp0_1026[0x4] = _mm_add_epi64(arg14, zmm9)
                                        
                                        if ((temp0_993 & 4) != 0)
                                            zmm12 = _mm_shuffle_ps(zmm12, 
                                                _mm_shuffle_ps(arg11, zmm12, 0x32), 0x84)
                                        
                                        arg12 = temp0_1023 & not.o(zmm13)
                                        
                                        if ((temp0_993 & 8) != 0)
                                            zmm12 = _mm_shuffle_ps(zmm12, 
                                                _mm_shuffle_ps(arg11, zmm12, 0x23), 0x24)
                                        
                                        arg14 = arg13 & zmm3
                                        zmm13 = zmm4 & temp0_1023
                                        arg13 = arg_40
                                        zmm4 = arg17
                                        arg11 = arg_50
                                        arg16 = arg_80
                                        zmm9 = arg_90
                                        arg14 |= zmm3 & not.o(temp0_1026)
                                        zmm13 |= arg12
                                    
                                    zmm0 = data_142fc95e0
                                    zmm1 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg11
                                    int32_t temp0_1033[0x4] =
                                        _mm_srai_epi32(_mm_slli_epi32(arg15 & zmm1, 0x1f), 0x1f)
                                    char temp0_1034 = _mm_movemask_ps(temp0_1033)
                                    
                                    if (temp0_1034 == 0)
                                        zmm13 = arg11
                                        zmm3 = zx.o(0)
                                        arg12 = zx.o(0)
                                    else
                                        zmm2 = arg14
                                        
                                        if ((temp0_1034 & 1) == 0)
                                            if ((temp0_1034 & 2) != 0)
                                                goto label_14024cf13
                                            
                                            goto label_14024cda1
                                        
                                        zmm4 = *zmm2[0].q
                                        
                                        if ((temp0_1034 & 2) != 0)
                                        label_14024cf13:
                                            zmm0 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, 
                                                    zmm4, 0), 
                                                zmm4, 0xe2)
                                            zmm4 = zmm0
                                            
                                            if ((temp0_1034 & 4) == 0)
                                                goto label_14024cdab
                                            
                                            goto label_14024cf2d
                                        
                                    label_14024cda1:
                                        
                                        if ((temp0_1034 & 4) != 0)
                                        label_14024cf2d:
                                            zmm0 = _mm_shuffle_ps(*zmm13[0].q, zmm4, 0x30)
                                            zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x84)
                                            
                                            if ((temp0_1034 & 8) != 0)
                                                zmm0 = _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, zmm4, 
                                                    0x20)
                                                zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                                        else
                                        label_14024cdab:
                                            
                                            if ((temp0_1034 & 8) != 0)
                                                zmm0 = _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, zmm4, 
                                                    0x20)
                                                zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                                        
                                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                        char temp0_1039 = _mm_movemask_ps(zmm1)
                                        zmm3 = zx.o(0)
                                        
                                        if ((temp0_1039 & 1) != 0)
                                            zmm3[0] = zmm4[0]
                                        
                                        zmm7 = data_1434426c0
                                        arg12 = temp0_1033 ^ zmm0
                                        
                                        if ((temp0_1039 & 2) != 0)
                                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), 
                                                zmm3, 0xe2)
                                        
                                        zmm0 = _mm_add_epi64(zmm2, zmm7)
                                        zmm1 = _mm_shuffle_epi32(arg12, 0x50)
                                        
                                        if ((temp0_1039 & 4) != 0)
                                            zmm3 = _mm_shuffle_ps(zmm3, 
                                                _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                                        
                                        zmm2 &= zmm1
                                        zmm1 &= not.o(zmm0)
                                        
                                        if ((temp0_1039 & 8) != 0)
                                            zmm3 = _mm_shuffle_ps(zmm3, 
                                                _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                                        
                                        zmm7 = _mm_add_epi64(zmm7, zmm13)
                                        zmm0 = _mm_shuffle_epi32(arg12, 0xfa)
                                        zmm2 |= zmm1
                                        
                                        if ((temp0_1034 & 1) != 0)
                                            zmm1 = *zmm2[0].q
                                        
                                        if ((temp0_1034 & 2) != 0)
                                            zmm1 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, 
                                                    zmm1, 0), 
                                                zmm1, 0xe2)
                                        
                                        arg13 = arg_40
                                        zmm2 = arg18
                                        zmm13 = (zmm13 & zmm0) | (zmm0 & not.o(zmm7))
                                        
                                        if ((temp0_1034 & 4) == 0)
                                            if ((temp0_1034 & 8) != 0)
                                                goto label_14024cf72
                                            
                                            goto label_14024ce9c
                                        
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(*zmm13[0].q, zmm1, 0x30), 0x84)
                                        
                                        if ((temp0_1034 & 8) != 0)
                                        label_14024cf72:
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(
                                                    *_mm_shuffle_epi32(zmm13, 0x4e)[0].q, zmm1, 
                                                    0x20), 
                                                0x24)
                                            arg12 = zx.o(0)
                                            
                                            if ((temp0_1039 & 1) != 0)
                                                goto label_14024cea9
                                            
                                            goto label_14024cf83
                                        
                                    label_14024ce9c:
                                        arg12 = zx.o(0)
                                        
                                        if ((temp0_1039 & 1) == 0)
                                        label_14024cf83:
                                            
                                            if ((temp0_1039 & 2) != 0)
                                            label_14024cf97:
                                                arg12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zmm1, arg12, 1), arg12, 0xe2)
                                                
                                                if ((temp0_1039 & 4) != 0)
                                                    goto label_14024cec6
                                                
                                                goto label_14024cfa3
                                        else
                                        label_14024cea9:
                                            arg12[0] = zmm1[0]
                                            
                                            if ((temp0_1039 & 2) != 0)
                                                goto label_14024cf97
                                        
                                        if ((temp0_1039 & 4) == 0)
                                        label_14024cfa3:
                                            zmm13 = arg_50
                                            
                                            if ((temp0_1039 & 8) != 0)
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
                                        else
                                        label_14024cec6:
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(zmm1, arg12, 0x32), 0x84)
                                            zmm13 = arg_50
                                            
                                            if ((temp0_1039 & 8) != 0)
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
                                    
                                    zmm0 = __paddq_xmmdq_memdq(arg31, arg_70)
                                    zmm1 = __paddq_xmmdq_memdq(arg24, arg_b0)
                                    arg11 = data_1434426c0
                                    zmm1 = __paddq_xmmdq_memdq(zmm1, arg_e0)
                                    zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, arg_140), arg11)
                                    zmm1 = _mm_add_epi64(zmm1, arg11)
                                    arg11 = _mm_shuffle_epi32(arg19, 0x50) & zmm1
                                    zmm1 = _mm_shuffle_epi32(arg19, 0xfa) & zmm0
                                    int64_t rax_226 = arg11[0].q
                                    int64_t rbp_26 = _mm_shuffle_epi32(arg11, 0x4e)[0].q
                                    int64_t rbx_19 = zmm1[0].q
                                    int64_t rdi_7 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                                    zmm0 = _mm_unpacklo_epi64(
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_226)), 
                                            zx.o(*(arg4 + rbp_26))[0].q), 
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + rbx_19)), 
                                        zx.o(*(arg4 + rdi_7))[0].q)[0].q)
                                    zmm1 = _mm_srli_epi32(zmm0, 0x15)
                                    zmm4 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                                    float temp0_1088[0x4] = _mm_add_ps(zmm2, 
                                        _mm_mul_ps(arg_a0, 
                                            __divps_xmmps_memps(
                                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                                    zmm0 & data_143442680, data_143442490)), 
                                                data_1434426a0)))
                                    zmm0 = data_143442440
                                    float temp0_1090[0x4] =
                                        _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm0))
                                    arg11 = data_143442690
                                    float temp0_1092[0x4] =
                                        _mm_mul_ps(zmm12, _mm_div_ps(temp0_1090, arg11))
                                    float temp0_1095[0x4] = _mm_div_ps(
                                        _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg11)
                                    char temp72_1 = temp0_938 & 1
                                    
                                    if (temp72_1 != 0)
                                        arg_30[0] = temp0_1088[0]
                                    
                                    arg12 = _mm_mul_ps(arg12, temp0_1095)
                                    float temp0_1097[0x4] = _mm_add_ps(zmm9, temp0_1092)
                                    zmm4 = arg17
                                    arg11 = zmm13
                                    
                                    if (temp72_1 == 0)
                                        zmm12 = arg21
                                        zmm13 = arg_30
                                        zmm3 = _mm_add_ps(zmm3, arg12)
                                        
                                        if (temp72_1 != 0)
                                            arg16[0] = zmm3[0]
                                    else
                                        zmm12 = arg21
                                        zmm12[0] = temp0_1097[0]
                                        zmm13 = arg_30
                                        zmm3 = _mm_add_ps(zmm3, arg12)
                                        
                                        if (temp72_1 != 0)
                                            arg16[0] = zmm3[0]
                                    
                                    arg12 = arg20
                                    char temp97_1 = temp0_938 & 2
                                    
                                    if (temp97_1 != 0)
                                        zmm13 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_1088, zmm13, 1), zmm13, 0xe2)
                                        
                                        if (temp97_1 != 0)
                                            goto label_14024d3f3
                                    else if (temp97_1 != 0)
                                    label_14024d3f3:
                                        zmm12 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_1097, zmm12, 1), zmm12, 0xe2)
                                        
                                        if (temp97_1 != 0)
                                            goto label_14024d145
                                        
                                        goto label_14024d3fd
                                    
                                    bool cond:326_1
                                    bool cond:327_1
                                    bool cond:337_1
                                    bool cond:338_1
                                    
                                    if (temp97_1 != 0)
                                    label_14024d145:
                                        arg16 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg16, 1), 
                                            arg16, 0xe2)
                                        char temp123_1 = temp0_938 & 4
                                        cond:326_1 = temp123_1 == 0
                                        cond:327_1 = temp123_1 != 0
                                        cond:337_1 = temp123_1 == 0
                                        cond:338_1 = temp123_1 != 0
                                        
                                        if (temp123_1 != 0)
                                            goto label_14024d40e
                                        
                                        goto label_14024d152
                                    
                                label_14024d3fd:
                                    char temp122_1 = temp0_938 & 4
                                    cond:326_1 = temp122_1 == 0
                                    cond:327_1 = temp122_1 != 0
                                    cond:337_1 = temp122_1 == 0
                                    cond:338_1 = temp122_1 != 0
                                    
                                    if (temp122_1 == 0)
                                    label_14024d152:
                                        
                                        if (not(cond:326_1))
                                        label_14024d161:
                                            zmm12 = _mm_shuffle_ps(zmm12, 
                                                _mm_shuffle_ps(temp0_1097, zmm12, 0x32), 0x84)
                                            
                                            if (cond:338_1)
                                                goto label_14024d427
                                            
                                            goto label_14024d16c
                                    else
                                    label_14024d40e:
                                        zmm13 = _mm_shuffle_ps(zmm13, 
                                            _mm_shuffle_ps(temp0_1088, zmm13, 0x32), 0x84)
                                        
                                        if (cond:327_1)
                                            goto label_14024d161
                                    
                                    bool cond:354_1
                                    bool cond:364_1
                                    bool cond:365_1
                                    bool cond:355_1
                                    
                                    if (cond:337_1)
                                    label_14024d16c:
                                        char temp134_1 = temp0_938 & 8
                                        cond:354_1 = temp134_1 == 0
                                        cond:355_1 = temp134_1 != 0
                                        cond:364_1 = temp134_1 == 0
                                        cond:365_1 = temp134_1 != 0
                                        
                                        if (temp134_1 != 0)
                                        label_14024d17a:
                                            zmm13 = _mm_shuffle_ps(zmm13, 
                                                _mm_shuffle_ps(temp0_1088, zmm13, 0x23), 0x24)
                                            
                                            if (cond:355_1)
                                                goto label_14024d440
                                            
                                            goto label_14024d185
                                    else
                                    label_14024d427:
                                        arg16 = _mm_shuffle_ps(arg16, 
                                            _mm_shuffle_ps(zmm3, arg16, 0x32), 0x84)
                                        char temp135_1 = temp0_938 & 8
                                        cond:354_1 = temp135_1 == 0
                                        cond:355_1 = temp135_1 != 0
                                        cond:364_1 = temp135_1 == 0
                                        cond:365_1 = temp135_1 != 0
                                        
                                        if (temp135_1 != 0)
                                            goto label_14024d17a
                                    
                                    if (cond:354_1)
                                    label_14024d185:
                                        zmm9 = arg_110
                                        
                                        if (not(cond:364_1))
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(zmm3, arg16, 0x23), 0x24)
                                    else
                                    label_14024d440:
                                        zmm12 = _mm_shuffle_ps(zmm12, 
                                            _mm_shuffle_ps(temp0_1097, zmm12, 0x23), 0x24)
                                        zmm9 = arg_110
                                        
                                        if (cond:365_1)
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(zmm3, arg16, 0x23), 0x24)
                                
                                arg11 ^= arg_190
                                zmm0 = _mm_slli_epi32(arg15 & arg11, 0x1f)
                                
                                if (_mm_movemask_ps(zmm0) == 0)
                                label_14024d7cc:
                                    zmm7 = arg_60
                                    zmm1 = arg22
                                    arg11 = __return_addr.o
                                else
                                    zmm7 = __pcmpeqd_xmmdq_memdq(data_1434422d0, arg_130)
                                    arg14 = arg15 & zmm7
                                    zmm1 = _mm_slli_epi32(arg14, 0x1f)
                                    char temp0_1113 = _mm_movemask_ps(zmm1)
                                    
                                    if (temp0_1113 != 0)
                                        zmm4 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                                        zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm4
                                        arg_50 = arg11
                                        char rdx_28
                                        
                                        if (_mm_movemask_ps(zmm1) == 0)
                                            zmm4 &= zmm0
                                            rdx_28 = temp0_1113
                                            
                                            if ((rdx_28 & 1) != 0)
                                                zmm13[0] = zmm4[0]
                                        else
                                            zmm0 = data_1434426b0
                                            zmm2 = _mm_add_epi64(zmm9, zmm0)
                                            zmm0 = _mm_add_epi64(zmm0, arg_d0)
                                            arg11 = _mm_cmpeq_epi32(arg11, arg11) ^ zmm1
                                            arg12 = _mm_shuffle_epi32(arg11, 0x50)
                                            arg_d0 = (arg_d0 & arg12) | (arg12 & not.o(zmm0))
                                            zmm0 = _mm_shuffle_epi32(arg11, 0xfa)
                                            zmm9 &= zmm0
                                            zmm0 &= not.o(zmm2)
                                            arg11 = __paddq_xmmdq_memdq(arg31, arg_70)
                                            int32_t temp0_1124[0x4] =
                                                __paddq_xmmdq_memdq(arg24, arg_b0)
                                            zmm2 = data_1434426c0
                                            int32_t temp0_1125[0x4] =
                                                __paddq_xmmdq_memdq(temp0_1124, arg_e0)
                                            arg11 = _mm_add_epi64(
                                                __paddq_xmmdq_memdq(arg11, arg_140), zmm2)
                                            int32_t temp0_1128[0x4] =
                                                _mm_add_epi64(temp0_1125, zmm2)
                                            zmm2 = _mm_shuffle_epi32(zmm1, 0x50) & temp0_1128
                                            zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & arg11
                                            int64_t rax_229 = zmm2[0].q
                                            int64_t rbp_27 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                                            int64_t rbx_20 = zmm1[0].q
                                            int64_t rdi_8 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                                            zmm9 |= zmm0
                                            zmm1 = __paddd_xmmdq_memdq(
                                                __pinsrw_xmmdq_memw_immb(
                                                    __pinsrw_xmmdq_memw_immb(
                                                        __pinsrw_xmmdq_memw_immb(
                                                            __pinsrw_xmmdq_memw_immb(zx.o(0), 
                                                                *(arg4 + rax_229), 0), 
                                                            *(arg4 + rbp_27), 2), 
                                                        *(arg4 + rbx_20), 4), 
                                                    *(arg4 + rdi_8), 6), 
                                                data_143442b40)
                                            zmm0 = _mm_cvtepi32_ps(zmm1)
                                            zmm4 &= zmm0
                                            rdx_28 = temp0_1113
                                            
                                            if ((rdx_28 & 1) != 0)
                                                zmm13[0] = zmm4[0]
                                        
                                        arg12 = arg20
                                        
                                        if ((rdx_28 & 2) != 0)
                                            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm13, 1), 
                                                zmm13, 0xe2)
                                            zmm13 = zmm0
                                            
                                            if ((rdx_28 & 4) != 0)
                                                goto label_14024d466
                                            
                                            goto label_14024d33e
                                        
                                        if ((rdx_28 & 4) == 0)
                                        label_14024d33e:
                                            
                                            if ((rdx_28 & 8) != 0)
                                                zmm13 = _mm_shuffle_ps(zmm13, 
                                                    _mm_shuffle_ps(zmm4, zmm13, 0x23), 0x24)
                                        else
                                        label_14024d466:
                                            zmm0 = _mm_shuffle_ps(zmm4, zmm13, 0x32)
                                            zmm13 = _mm_shuffle_ps(zmm13, zmm0, 0x84)
                                            
                                            if ((rdx_28 & 8) != 0)
                                                zmm13 = _mm_shuffle_ps(zmm13, 
                                                    _mm_shuffle_ps(zmm4, zmm13, 0x23), 0x24)
                                        
                                        arg11 = data_1434422d0
                                        zmm4 = arg17 & arg11
                                        arg11 = _mm_srai_epi32(
                                            _mm_slli_epi32(_mm_cmpeq_epi32(arg11, zmm4) & arg14, 
                                                0x1f), 
                                            0x1f)
                                        char temp0_1146 = _mm_movemask_ps(arg11)
                                        
                                        if (temp0_1146 == 0)
                                            arg11 = arg_50
                                        else
                                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                            
                                            if ((temp0_1146 & 1) != 0)
                                                zmm1 = zx.o(*arg_d0[0].q)
                                            
                                            arg12 = data_1434426b0
                                            arg11 ^= zmm0
                                            arg13 = arg15
                                            
                                            if ((temp0_1146 & 2) != 0)
                                                arg15 = arg_50
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(
                                                            *_mm_shuffle_epi32(arg_d0, 0x4e)[0].q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                            else
                                                arg15 = arg_50
                                            
                                            zmm2 = _mm_add_epi64(zmm9, arg12)
                                            int32_t temp0_1163[0x4] = _mm_add_epi64(arg12, arg_d0)
                                            float temp0_1164[0x4] = _mm_shuffle_epi32(arg11, 0x50)
                                            arg11 = _mm_shuffle_epi32(arg11, 0xfa)
                                            
                                            if ((temp0_1146 & 4) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(zx.o(*zmm9[0].q), zmm1, 0x30), 
                                                    0x84)
                                            
                                            if ((temp0_1146 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                            
                                            arg12 = arg20
                                            arg_d0 = (arg_d0 & temp0_1164)
                                                | (temp0_1164 & not.o(temp0_1163))
                                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm1, data_143442cd0), 
                                                data_143442b40))
                                            zmm9 = (zmm9 & arg11) | (arg11 & not.o(zmm2))
                                            arg11 = arg15
                                            arg15 = arg13
                                            arg13 = arg_40
                                            zmm13 = zmm13
                                            zmm7 = zmm7
                                        
                                        zmm4 = _mm_cmpeq_epi32(zmm4, zx.o(0)) & not.o(zmm1)
                                        
                                        if ((rdx_28 & 1) != 0)
                                            zmm12[0] = zmm4[0]
                                            
                                            if ((rdx_28 & 2) != 0)
                                                goto label_14024d5e3
                                            
                                            goto label_14024d5b8
                                        
                                        if ((rdx_28 & 2) != 0)
                                        label_14024d5e3:
                                            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm12, 1), 
                                                zmm12, 0xe2)
                                            
                                            if ((rdx_28 & 4) != 0)
                                                goto label_14024d5c5
                                            
                                            goto label_14024d5ec
                                        
                                    label_14024d5b8:
                                        
                                        if ((rdx_28 & 4) == 0)
                                        label_14024d5ec:
                                            
                                            if ((rdx_28 & 8) != 0)
                                                zmm12 = _mm_shuffle_ps(zmm12, 
                                                    _mm_shuffle_ps(zmm4, zmm12, 0x23), 0x24)
                                        else
                                        label_14024d5c5:
                                            zmm12 = _mm_shuffle_ps(zmm12, 
                                                _mm_shuffle_ps(zmm4, zmm12, 0x32), 0x84)
                                            
                                            if ((rdx_28 & 8) != 0)
                                                zmm12 = _mm_shuffle_ps(zmm12, 
                                                    _mm_shuffle_ps(zmm4, zmm12, 0x23), 0x24)
                                        
                                        zmm0 = data_142fc95e0
                                        zmm2 = arg17 & zmm0
                                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm2)
                                        char temp0_1183 =
                                            _mm_movemask_ps(_mm_slli_epi32(arg14 & zmm0, 0x1f))
                                        
                                        if (temp0_1183 != 0)
                                            if ((temp0_1183 & 1) == 0)
                                                if ((temp0_1183 & 2) != 0)
                                                    goto label_14024ddc5
                                                
                                                goto label_14024d63b
                                            
                                            zmm1 = zx.o(*arg_d0[0].q)
                                            
                                            if ((temp0_1183 & 2) != 0)
                                            label_14024ddc5:
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*__pshufd_xmmdq_memdq_immb(arg_d0, 
                                                            0x4e)[0].q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                                
                                                if ((temp0_1183 & 4) == 0)
                                                    goto label_14024d645
                                                
                                                goto label_14024dde2
                                            
                                        label_14024d63b:
                                            
                                            if ((temp0_1183 & 4) != 0)
                                            label_14024dde2:
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(zx.o(*zmm9[0].q), zmm1, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1183 & 8) != 0)
                                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm9, 0x4e)[0].q), 
                                                            zmm1, 0x20), 
                                                        0x24)
                                            else
                                            label_14024d645:
                                                
                                                if ((temp0_1183 & 8) != 0)
                                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm9, 0x4e)[0].q), 
                                                            zmm1, 0x20), 
                                                        0x24)
                                            
                                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm1, data_143442cd0), 
                                                data_143442b40))
                                        
                                        zmm2 = _mm_cmpeq_epi32(zmm2, zx.o(0)) & not.o(zmm0)
                                        
                                        if ((rdx_28 & 1) != 0)
                                            arg16[0] = zmm2[0]
                                            
                                            if ((rdx_28 & 2) != 0)
                                                goto label_14024d6bf
                                            
                                            goto label_14024d694
                                        
                                        if ((rdx_28 & 2) != 0)
                                        label_14024d6bf:
                                            arg16 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg16, 1), 
                                                arg16, 0xe2)
                                            
                                            if ((rdx_28 & 4) != 0)
                                                goto label_14024d6a1
                                            
                                            goto label_14024d6c8
                                        
                                    label_14024d694:
                                        
                                        if ((rdx_28 & 4) == 0)
                                        label_14024d6c8:
                                            
                                            if ((rdx_28 & 8) != 0)
                                                arg16 = _mm_shuffle_ps(arg16, 
                                                    _mm_shuffle_ps(zmm2, arg16, 0x23), 0x24)
                                        else
                                        label_14024d6a1:
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(zmm2, arg16, 0x32), 0x84)
                                            
                                            if ((rdx_28 & 8) != 0)
                                                arg16 = _mm_shuffle_ps(arg16, 
                                                    _mm_shuffle_ps(zmm2, arg16, 0x23), 0x24)
                                    
                                    arg11 = (arg11 ^ zmm7) & arg15
                                    
                                    if (_mm_movemask_ps(_mm_slli_epi32(arg11, 0x1f)) == 0)
                                        goto label_14024d7cc
                                    
                                    zmm0 = __pcmpeqd_xmmdq_memdq(arg_130, data_143442ad0)
                                    char temp0_1201 =
                                        _mm_movemask_ps(_mm_slli_epi32(arg15 & zmm0, 0x1f))
                                    zmm7 = arg_60
                                    
                                    if (temp0_1201 != 0)
                                        zmm2 = zx.o(0)
                                        char temp62_1 = temp0_1201 & 1
                                        
                                        if (temp62_1 != 0)
                                            zmm13[0] = zmm2[0]
                                            
                                            if (temp62_1 != 0)
                                                goto label_14024db87
                                        else if (temp62_1 != 0)
                                        label_14024db87:
                                            zmm12[0] = zmm2[0]
                                            
                                            if (temp62_1 != 0)
                                                goto label_14024d747
                                            
                                            goto label_14024db92
                                        
                                        bool cond:251_1
                                        bool cond:252_1
                                        bool cond:269_1
                                        bool cond:270_1
                                        
                                        if (temp62_1 != 0)
                                        label_14024d747:
                                            arg16[0] = zmm2[0]
                                            char temp87_1 = temp0_1201 & 2
                                            cond:251_1 = temp87_1 == 0
                                            cond:252_1 = temp87_1 != 0
                                            cond:269_1 = temp87_1 == 0
                                            cond:270_1 = temp87_1 != 0
                                            
                                            if (temp87_1 != 0)
                                                goto label_14024dba9
                                            
                                            goto label_14024d755
                                        
                                    label_14024db92:
                                        char temp86_1 = temp0_1201 & 2
                                        cond:251_1 = temp86_1 == 0
                                        cond:252_1 = temp86_1 != 0
                                        cond:269_1 = temp86_1 == 0
                                        cond:270_1 = temp86_1 != 0
                                        
                                        if (temp86_1 == 0)
                                        label_14024d755:
                                            
                                            if (not(cond:251_1))
                                            label_14024d769:
                                                zmm12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zx.o(0), zmm12, 0), zmm12, 0xe2)
                                                
                                                if (cond:270_1)
                                                    goto label_14024dbc7
                                                
                                                goto label_14024d773
                                        else
                                        label_14024dba9:
                                            zmm13 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), zmm13, 0), zmm13, 0xe2)
                                            
                                            if (cond:252_1)
                                                goto label_14024d769
                                        
                                        bool cond:309_1
                                        bool cond:310_1
                                        bool cond:324_1
                                        bool cond:325_1
                                        
                                        if (not(cond:269_1))
                                        label_14024dbc7:
                                            arg16 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), arg16, 0), arg16, 0xe2)
                                            char temp111_1 = temp0_1201 & 4
                                            cond:309_1 = temp111_1 == 0
                                            cond:310_1 = temp111_1 != 0
                                            cond:324_1 = temp111_1 == 0
                                            cond:325_1 = temp111_1 != 0
                                            
                                            if (temp111_1 != 0)
                                                goto label_14024d785
                                            
                                            goto label_14024dbd4
                                        
                                    label_14024d773:
                                        char temp110_1 = temp0_1201 & 4
                                        cond:309_1 = temp110_1 == 0
                                        cond:310_1 = temp110_1 != 0
                                        cond:324_1 = temp110_1 == 0
                                        cond:325_1 = temp110_1 != 0
                                        
                                        if (temp110_1 == 0)
                                        label_14024dbd4:
                                            
                                            if (not(cond:309_1))
                                            label_14024dbe3:
                                                zmm12 = _mm_shuffle_ps(zmm12, 
                                                    _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 0x84)
                                                
                                                if (cond:325_1)
                                                    goto label_14024d79f
                                                
                                                goto label_14024dbee
                                        else
                                        label_14024d785:
                                            zmm13 = _mm_shuffle_ps(zmm13, 
                                                _mm_shuffle_ps(zx.o(0), zmm13, 0x30), 0x84)
                                            
                                            if (cond:310_1)
                                                goto label_14024dbe3
                                        
                                        bool cond:341_1
                                        bool cond:342_1
                                        bool cond:352_1
                                        bool cond:353_1
                                        
                                        if (not(cond:324_1))
                                        label_14024d79f:
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(zx.o(0), arg16, 0x30), 0x84)
                                            char temp127_1 = temp0_1201 & 8
                                            cond:341_1 = temp127_1 == 0
                                            cond:342_1 = temp127_1 != 0
                                            cond:352_1 = temp127_1 == 0
                                            cond:353_1 = temp127_1 != 0
                                            
                                            if (temp127_1 != 0)
                                                goto label_14024dc00
                                            
                                            goto label_14024d7ad
                                        
                                    label_14024dbee:
                                        char temp126_1 = temp0_1201 & 8
                                        cond:341_1 = temp126_1 == 0
                                        cond:342_1 = temp126_1 != 0
                                        cond:352_1 = temp126_1 == 0
                                        cond:353_1 = temp126_1 != 0
                                        
                                        if (temp126_1 != 0)
                                        label_14024dc00:
                                            zmm13 = _mm_shuffle_ps(zmm13, 
                                                _mm_shuffle_ps(zx.o(0), zmm13, 0x20), 0x24)
                                            
                                            if (cond:342_1)
                                                goto label_14024d7bc
                                            
                                            goto label_14024dc0b
                                        
                                    label_14024d7ad:
                                        
                                        if (cond:341_1)
                                        label_14024dc0b:
                                            
                                            if (not(cond:352_1))
                                                arg16 = _mm_shuffle_ps(arg16, 
                                                    _mm_shuffle_ps(zmm2, arg16, 0x20), 0x24)
                                        else
                                        label_14024d7bc:
                                            zmm12 = _mm_shuffle_ps(zmm12, 
                                                _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 0x24)
                                            
                                            if (cond:353_1)
                                                arg16 = _mm_shuffle_ps(arg16, 
                                                    _mm_shuffle_ps(zmm2, arg16, 0x20), 0x24)
                                    
                                    char temp0_1283 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(arg11), 0x1f))
                                    
                                    if (temp0_1283 == 0)
                                        zmm1 = arg22
                                        arg11 = __return_addr.o
                                    else
                                        char temp71_1 = temp0_1283 & 1
                                        
                                        if (temp71_1 != 0)
                                            zmm13[0] = 0
                                            
                                            if (temp71_1 != 0)
                                                goto label_14024dce3
                                            
                                            goto label_14024dc46
                                        
                                        if (temp71_1 != 0)
                                        label_14024dce3:
                                            zmm12[0] = 0
                                            zmm1 = arg22
                                            arg11 = __return_addr.o
                                            
                                            if (temp71_1 != 0)
                                                goto label_14024dc58
                                            
                                            goto label_14024dcfa
                                        
                                    label_14024dc46:
                                        zmm1 = arg22
                                        arg11 = __return_addr.o
                                        bool cond:267_1
                                        bool cond:268_1
                                        bool cond:291_1
                                        bool cond:292_1
                                        
                                        if (temp71_1 != 0)
                                        label_14024dc58:
                                            arg16[0] = 0
                                            char temp96_1 = temp0_1283 & 2
                                            cond:267_1 = temp96_1 == 0
                                            cond:268_1 = temp96_1 != 0
                                            cond:291_1 = temp96_1 == 0
                                            cond:292_1 = temp96_1 != 0
                                            
                                            if (temp96_1 != 0)
                                                goto label_14024dd11
                                            
                                            goto label_14024dc66
                                        
                                    label_14024dcfa:
                                        char temp95_1 = temp0_1283 & 2
                                        cond:267_1 = temp95_1 == 0
                                        cond:268_1 = temp95_1 != 0
                                        cond:291_1 = temp95_1 == 0
                                        cond:292_1 = temp95_1 != 0
                                        
                                        if (temp95_1 == 0)
                                        label_14024dc66:
                                            
                                            if (not(cond:267_1))
                                            label_14024dc7a:
                                                zmm12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zx.o(0), zmm12, 0), zmm12, 0xe2)
                                                
                                                if (cond:292_1)
                                                    goto label_14024dd2f
                                                
                                                goto label_14024dc84
                                        else
                                        label_14024dd11:
                                            zmm13 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), zmm13, 0), zmm13, 0xe2)
                                            
                                            if (cond:268_1)
                                                goto label_14024dc7a
                                        
                                        bool cond:322_1
                                        bool cond:323_1
                                        bool cond:335_1
                                        bool cond:336_1
                                        
                                        if (not(cond:291_1))
                                        label_14024dd2f:
                                            arg16 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zx.o(0), arg16, 0), arg16, 0xe2)
                                            char temp121_1 = temp0_1283 & 4
                                            cond:322_1 = temp121_1 == 0
                                            cond:323_1 = temp121_1 != 0
                                            cond:335_1 = temp121_1 == 0
                                            cond:336_1 = temp121_1 != 0
                                            
                                            if (temp121_1 != 0)
                                                goto label_14024dc96
                                            
                                            goto label_14024dd3c
                                        
                                    label_14024dc84:
                                        char temp120_1 = temp0_1283 & 4
                                        cond:322_1 = temp120_1 == 0
                                        cond:323_1 = temp120_1 != 0
                                        cond:335_1 = temp120_1 == 0
                                        cond:336_1 = temp120_1 != 0
                                        
                                        if (temp120_1 == 0)
                                        label_14024dd3c:
                                            
                                            if (not(cond:322_1))
                                            label_14024dd4b:
                                                zmm12 = _mm_shuffle_ps(zmm12, 
                                                    _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 0x84)
                                                
                                                if (cond:336_1)
                                                    goto label_14024dcb0
                                                
                                                goto label_14024dd56
                                        else
                                        label_14024dc96:
                                            zmm13 = _mm_shuffle_ps(zmm13, 
                                                _mm_shuffle_ps(zx.o(0), zmm13, 0x30), 0x84)
                                            
                                            if (cond:323_1)
                                                goto label_14024dd4b
                                        
                                        bool cond:350_1
                                        bool cond:351_1
                                        bool cond:362_1
                                        bool cond:363_1
                                        
                                        if (not(cond:335_1))
                                        label_14024dcb0:
                                            arg16 = _mm_shuffle_ps(arg16, 
                                                _mm_shuffle_ps(zx.o(0), arg16, 0x30), 0x84)
                                            char temp133_1 = temp0_1283 & 8
                                            cond:350_1 = temp133_1 == 0
                                            cond:351_1 = temp133_1 != 0
                                            cond:362_1 = temp133_1 == 0
                                            cond:363_1 = temp133_1 == 0
                                            
                                            if (temp133_1 != 0)
                                                goto label_14024dd68
                                            
                                            goto label_14024dcbe
                                        
                                    label_14024dd56:
                                        char temp132_1 = temp0_1283 & 8
                                        cond:350_1 = temp132_1 == 0
                                        cond:351_1 = temp132_1 != 0
                                        cond:362_1 = temp132_1 == 0
                                        cond:363_1 = temp132_1 == 0
                                        
                                        if (temp132_1 != 0)
                                        label_14024dd68:
                                            zmm13 = _mm_shuffle_ps(zmm13, 
                                                _mm_shuffle_ps(zx.o(0), zmm13, 0x20), 0x24)
                                            
                                            if (cond:351_1)
                                                goto label_14024dccd
                                            
                                            goto label_14024dd73
                                        
                                    label_14024dcbe:
                                        
                                        if (cond:350_1)
                                        label_14024dd73:
                                            
                                            if (not(cond:362_1))
                                                arg16 = _mm_shuffle_ps(arg16, 
                                                    _mm_shuffle_ps(zx.o(0), arg16, 0x20), 0x24)
                                        else
                                        label_14024dccd:
                                            zmm12 = _mm_shuffle_ps(zmm12, 
                                                _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 0x24)
                                            
                                            if (not(cond:363_1))
                                                arg16 = _mm_shuffle_ps(arg16, 
                                                    _mm_shuffle_ps(zx.o(0), arg16, 0x20), 0x24)
                            
                            float temp0_1210[0x4] = _mm_sub_ps(zmm13, arg11)
                            float temp0_1211[0x4] = _mm_sub_ps(zmm12, arg13)
                            float temp0_1212[0x4] = _mm_mul_ps(temp0_1210, zmm1)
                            zmm3 = arg11
                            char temp42_1 = temp0_805 & 1
                            
                            if (temp42_1 != 0)
                                zmm3 = arg11
                                zmm3[0] = zmm3[0] + temp0_1212[0]
                                arg16 = _mm_sub_ps(arg16, arg12)
                                zmm12 = _mm_mul_ps(temp0_1211, zmm1)
                                zmm4 = arg13
                                
                                if (temp42_1 != 0)
                                    goto label_14024d8c9
                                
                                goto label_14024d813
                            
                            arg16 = _mm_sub_ps(arg16, arg12)
                            zmm12 = _mm_mul_ps(temp0_1211, zmm1)
                            zmm4 = arg13
                            
                            if (temp42_1 != 0)
                            label_14024d8c9:
                                zmm4 = arg13
                                zmm4[0] = zmm4[0] + zmm12[0]
                                arg16 = _mm_mul_ps(arg16, zmm1)
                                zmm2 = arg12
                                
                                if (temp42_1 != 0)
                                    goto label_14024d820
                                
                                goto label_14024d8df
                            
                        label_14024d813:
                            arg16 = _mm_mul_ps(arg16, zmm1)
                            zmm2 = arg12
                            bool cond:153_1
                            bool cond:154_1
                            bool cond:170_1
                            bool cond:171_1
                            
                            if (temp42_1 != 0)
                            label_14024d820:
                                zmm2 = arg12
                                zmm2[0] = zmm2[0] + arg16[0]
                                arg11 = _mm_add_ps(arg11, temp0_1212)
                                char temp59_1 = temp0_805 & 2
                                cond:153_1 = temp59_1 == 0
                                cond:154_1 = temp59_1 != 0
                                cond:170_1 = temp59_1 == 0
                                cond:171_1 = temp59_1 != 0
                                
                                if (temp59_1 != 0)
                                    goto label_14024d8f7
                                
                                goto label_14024d835
                            
                        label_14024d8df:
                            arg11 = _mm_add_ps(arg11, temp0_1212)
                            char temp58_1 = temp0_805 & 2
                            cond:153_1 = temp58_1 == 0
                            cond:154_1 = temp58_1 != 0
                            cond:170_1 = temp58_1 == 0
                            cond:171_1 = temp58_1 != 0
                            
                            if (temp58_1 != 0)
                            label_14024d8f7:
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm3, 1), zmm3, 0xe2)
                                arg13 = _mm_add_ps(arg13, zmm12)
                                
                                if (cond:154_1)
                                    goto label_14024d84b
                                
                                goto label_14024d904
                            
                        label_14024d835:
                            arg13 = _mm_add_ps(arg13, zmm12)
                            
                            if (not(cond:153_1))
                            label_14024d84b:
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, zmm4, 1), zmm4, 0xe2)
                                arg12 = _mm_add_ps(arg12, arg16)
                                
                                if (cond:171_1)
                                    goto label_14024d919
                                
                                goto label_14024d858
                            
                        label_14024d904:
                            arg12 = _mm_add_ps(arg12, arg16)
                            bool cond:201_1
                            bool cond:202_1
                            bool cond:227_1
                            bool cond:228_1
                            
                            if (not(cond:170_1))
                            label_14024d919:
                                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, zmm2, 1), zmm2, 0xe2)
                                char temp82_1 = temp0_805 & 4
                                cond:201_1 = temp82_1 == 0
                                cond:202_1 = temp82_1 != 0
                                cond:227_1 = temp82_1 == 0
                                cond:228_1 = temp82_1 != 0
                                
                                if (temp82_1 != 0)
                                    goto label_14024d868
                                
                                goto label_14024d925
                            
                        label_14024d858:
                            char temp81_1 = temp0_805 & 4
                            cond:201_1 = temp81_1 == 0
                            cond:202_1 = temp81_1 != 0
                            cond:227_1 = temp81_1 == 0
                            cond:228_1 = temp81_1 != 0
                            
                            if (temp81_1 == 0)
                            label_14024d925:
                                
                                if (not(cond:201_1))
                                label_14024d933:
                                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg13, zmm4, 0x32), 
                                        0x84)
                                    
                                    if (cond:228_1)
                                        goto label_14024d87f
                                    
                                    goto label_14024d93d
                            else
                            label_14024d868:
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg11, zmm3, 0x32), 0x84)
                                
                                if (cond:202_1)
                                    goto label_14024d933
                            
                            bool cond:265_1
                            bool cond:266_1
                            bool cond:289_1
                            bool cond:290_1
                            
                            if (not(cond:227_1))
                            label_14024d87f:
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg12, zmm2, 0x32), 0x84)
                                char temp105_1 = temp0_805 & 8
                                cond:265_1 = temp105_1 == 0
                                cond:266_1 = temp105_1 != 0
                                cond:289_1 = temp105_1 == 0
                                cond:290_1 = temp105_1 != 0
                                
                                if (temp105_1 != 0)
                                    goto label_14024d94e
                                
                                goto label_14024d88c
                            
                        label_14024d93d:
                            char temp104_1 = temp0_805 & 8
                            cond:265_1 = temp104_1 == 0
                            cond:266_1 = temp104_1 != 0
                            cond:289_1 = temp104_1 == 0
                            cond:290_1 = temp104_1 != 0
                            
                            if (temp104_1 != 0)
                            label_14024d94e:
                                arg11 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg11, zmm3, 0x23), 0x24)
                                zmm3 = arg34
                                
                                if (cond:266_1)
                                    goto label_14024d8a8
                                
                                goto label_14024d960
                            
                        label_14024d88c:
                            arg11 = zmm3
                            zmm3 = arg34
                            
                            if (cond:265_1)
                            label_14024d960:
                                arg13 = zmm4
                                
                                if (not(cond:289_1))
                                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg12, zmm2, 0x23), 
                                        0x24)
                            else
                            label_14024d8a8:
                                arg13 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg13, zmm4, 0x23), 0x24)
                                
                                if (cond:290_1)
                                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg12, zmm2, 0x23), 
                                        0x24)
                            
                            arg12 = zmm2
                    
                    zmm7 = __punpckldq_xmmdq_memdq(zmm7, arg23)
                    zmm10 = __punpckldq_xmmdq_memdq(zmm10, arg_170)
                    char temp0_1245 = _mm_movemask_ps(arg_1a0 & zmm3)
                    
                    if (temp0_1245 != 0)
                        char temp12_1 = temp0_1245 & 1
                        
                        if (temp12_1 != 0)
                            arg11[0] = 0
                            
                            if (temp12_1 != 0)
                                goto label_14024da06
                        else if (temp12_1 != 0)
                        label_14024da06:
                            arg13[0] = 0
                            
                            if (temp12_1 != 0)
                                goto label_14024d9af
                            
                            goto label_14024da0d
                        
                        bool cond:41_1
                        bool cond:42_1
                        bool cond:47_1
                        bool cond:48_1
                        
                        if (temp12_1 != 0)
                        label_14024d9af:
                            arg12[0] = 0
                            char temp16_1 = temp0_1245 & 2
                            cond:41_1 = temp16_1 == 0
                            cond:42_1 = temp16_1 != 0
                            cond:47_1 = temp16_1 == 0
                            cond:48_1 = temp16_1 != 0
                            
                            if (temp16_1 != 0)
                                goto label_14024da1d
                            
                            goto label_14024d9b8
                        
                    label_14024da0d:
                        char temp15_1 = temp0_1245 & 2
                        cond:41_1 = temp15_1 == 0
                        cond:42_1 = temp15_1 != 0
                        cond:47_1 = temp15_1 == 0
                        cond:48_1 = temp15_1 != 0
                        
                        if (temp15_1 == 0)
                        label_14024d9b8:
                            
                            if (not(cond:41_1))
                            label_14024d9c7:
                                arg13 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg13, 0), arg13, 0xe2)
                                
                                if (cond:48_1)
                                    goto label_14024da2f
                                
                                goto label_14024d9cd
                        else
                        label_14024da1d:
                            arg11 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg11, 0), arg11, 0xe2)
                            
                            if (cond:42_1)
                                goto label_14024d9c7
                        
                        bool cond:67_1
                        bool cond:68_1
                        bool cond:71_1
                        bool cond:72_1
                        
                        if (not(cond:47_1))
                        label_14024da2f:
                            arg12 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg12, 0), arg12, 0xe2)
                            char temp22_1 = temp0_1245 & 4
                            cond:67_1 = temp22_1 == 0
                            cond:68_1 = temp22_1 != 0
                            cond:71_1 = temp22_1 == 0
                            cond:72_1 = temp22_1 != 0
                            
                            if (temp22_1 != 0)
                                goto label_14024d9d9
                            
                            goto label_14024da37
                        
                    label_14024d9cd:
                        char temp21_1 = temp0_1245 & 4
                        cond:67_1 = temp21_1 == 0
                        cond:68_1 = temp21_1 != 0
                        cond:71_1 = temp21_1 == 0
                        cond:72_1 = temp21_1 != 0
                        
                        if (temp21_1 == 0)
                        label_14024da37:
                            
                            if (not(cond:67_1))
                            label_14024da41:
                                arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(zx.o(0), arg13, 0x30), 
                                    0x84)
                                
                                if (cond:72_1)
                                    goto label_14024d9e8
                                
                                goto label_14024da48
                        else
                        label_14024d9d9:
                            arg11 =
                                _mm_shuffle_ps(arg11, _mm_shuffle_ps(zx.o(0), arg11, 0x30), 0x84)
                            
                            if (cond:68_1)
                                goto label_14024da41
                        
                        bool cond:88_1
                        bool cond:89_1
                        bool cond:95_1
                        bool cond:96_1
                        
                        if (not(cond:71_1))
                        label_14024d9e8:
                            arg12 =
                                _mm_shuffle_ps(arg12, _mm_shuffle_ps(zx.o(0), arg12, 0x30), 0x84)
                            char temp28_1 = temp0_1245 & 8
                            cond:88_1 = temp28_1 == 0
                            cond:89_1 = temp28_1 != 0
                            cond:95_1 = temp28_1 == 0
                            cond:96_1 = temp28_1 != 0
                            
                            if (temp28_1 != 0)
                                goto label_14024da54
                            
                            goto label_14024d9f1
                        
                    label_14024da48:
                        char temp27_1 = temp0_1245 & 8
                        cond:88_1 = temp27_1 == 0
                        cond:89_1 = temp27_1 != 0
                        cond:95_1 = temp27_1 == 0
                        cond:96_1 = temp27_1 != 0
                        
                        if (temp27_1 != 0)
                        label_14024da54:
                            arg11 =
                                _mm_shuffle_ps(arg11, _mm_shuffle_ps(zx.o(0), arg11, 0x20), 0x24)
                            
                            if (cond:89_1)
                                goto label_14024d9fb
                            
                            goto label_14024da5a
                        
                    label_14024d9f1:
                        
                        if (cond:88_1)
                        label_14024da5a:
                            
                            if (not(cond:95_1))
                                arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zx.o(0), arg12, 0x20), 
                                    0x24)
                        else
                        label_14024d9fb:
                            arg13 =
                                _mm_shuffle_ps(arg13, _mm_shuffle_ps(zx.o(0), arg13, 0x20), 0x24)
                            
                            if (cond:96_1)
                                arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zx.o(0), arg12, 0x20), 
                                    0x24)
                    
                    zmm10 = _mm_unpacklo_epi64(zmm10, zmm7[0].q)
                    zmm0 = zx.o(arg12[0].q)
                    arg12 = _mm_unpackhi_ps(arg12, zx.o(0))
                    float temp0_1266[0x4] = _mm_unpacklo_ps(arg11, arg13[0].q)
                    float temp0_1267[0x4] = _mm_unpackhi_ps(arg11, arg13)
                    float arg_450[0x4] = _mm_shuffle_ps(temp0_1266, zmm0, 0x84)
                    float arg_460[0x4] = _mm_shuffle_ps(temp0_1266, zmm0, 0xde)
                    float arg_470[0x4] = temp0_1267[0].q | arg12[0].q << 0x40
                    float arg_480[0x4] = _mm_unpackhi_pd(temp0_1267, arg12[0].q)
                    uint64_t i_4 = zx.q(_mm_movemask_ps(zmm3))
                    
                    do
                        uint64_t rcx_21
                        uint64_t rflags_1
                        
                        if (i_4 == 0)
                            rcx_21 = 0x40
                        else
                            rcx_21, rflags_1 = _bit_scan_forward(i_4)
                        float arg_440[0x4] = zmm10
                        result = sx.q(arg_440[zx.q(rcx_21.d) & 3]) * 0x30
                        *(arg9 + result + 0x10) = (&arg_450)[rcx_21]
                        i_4 &= rol.q(-2, rcx_21.b)
                    while (i_4 != 0)
                
                return result
            
            int64_t rax_317 = sx.q((arg10 << 3).d)
            zmm0 = *(arg2 + rax_317)
            zmm1 = *(arg2 + rax_317 + 0x10)
            arg21 = zmm0
            arg31 = zmm1
            zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm1, 0xdd), 3)
            int64_t rax_319 = sx.q(zmm0[0])
            int64_t rcx_28 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            int64_t rbp_33 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])))
            zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rbp_33)), zmm0[0].q)
            zmm9 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg3 + rax_319)), zx.o(*(arg3 + rcx_28))[0].q), zmm1[0].q)
            zmm12 = _mm_cmpeq_epi32(zmm9, arg12)
            zmm0 = zmm12 ^ arg12
            
            if (_mm_movemask_ps(zmm0) == 0)
                arg11 = arg13
                arg13 = arg_70
                arg15 = arg_50
                arg16 = zmm0
                arg14 = __return_addr.o
            else
                float temp0_1516[0x4] = _mm_shuffle_epi32(zmm9, 0x4e)
                arg16 = _mm_cmpgt_epi32(zx.o(0), temp0_1516)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm9)
                zmm2 = zmm9 & zmm0
                int64_t rax_322 = sx.q(zmm2[0])
                int64_t rcx_30 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                int64_t rbp_35 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                zmm2 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])))
                zmm3 = _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_35)), zmm2[0].q)
                zmm4 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o(*(arg4 + rax_322)), zx.o(*(arg4 + rcx_30))[0].q), 
                    zmm3[0].q)
                zmm2 = zmm12 & not.o(zmm4 & data_143442be0)
                arg12 =
                    (arg13 & zmm12) | (zmm12 & not.o(_mm_srli_epi32(zmm4, 0x18)) & data_143442bf0)
                zmm10 = (arg20 & zmm12) | (zmm12 & not.o(_mm_srli_epi32(zmm4, 0x1c)))
                zmm3 = _mm_slli_epi32(zmm10, 2) & zmm0
                int64_t rax_324 = sx.q(zmm3[0])
                int64_t rcx_32 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
                int64_t rbp_37 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
                zmm3 = zx.o(*(sx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + arg6))
                arg11 = _mm_unpacklo_epi32(zx.o(*(rbp_37 + arg6)), zmm3[0].q)
                zmm3 = _mm_unpacklo_epi32(zx.o(*(rax_324 + arg6)), zx.o(*(rcx_32 + arg6))[0].q)
                arg13 = arg12
                arg12 &= data_143442c00
                arg_270 = arg12
                zmm4 = (_mm_slli_epi32(zmm10, 3) | arg12) & zmm0
                uint32_t rax_327 = zx.d(*(sx.q(zmm4[0]) + arg7))
                int64_t rcx_34 = sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])
                uint32_t rbp_40 = zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + arg7))
                uint32_t rbx_34 =
                    zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + arg7)) << 8 | rbp_40
                zmm4 =
                    _mm_insert_epi16(zx.o(zx.d(*(rcx_34 + arg7)) << 8) | zx.o(rax_327), rbx_34, 1)
                zmm3 = _mm_unpacklo_epi64(zmm3, arg11[0].q)
                zmm4 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm4, 0), 0)
                arg20 = zmm10
                zmm10 = __pcmpeqd_xmmdq_memdq(zmm10, data_142fc95c0)
                arg12 = zmm10 & not.o(zmm0)
                arg11 = zx.o(0)
                
                if (_mm_movemask_ps(arg12) != 0)
                    arg12 &= zmm4
                    arg11 = arg12
                
                zmm7 = _mm_unpacklo_epi32(temp0_1516, arg16[0].q)
                zmm9 = _mm_unpacklo_epi32(zmm9, zmm1[0].q)
                arg14 = (arg36 & zmm12) | zmm2
                zmm3 &= zmm0
                arg16 = zmm0
                zmm0 &= data_142fc95e0
                arg_60 = zmm10
                zmm2 = zmm12 & not.o(zmm10)
                char temp0_1545 = _mm_movemask_ps(zmm2)
                float arg_420[0x4] = zmm2
                
                if (temp0_1545 == 0)
                    zmm4 = zx.o(0)
                else
                    zmm4 &= zmm2
                    arg11 = _mm_srli_epi32(zmm2, 0x1f) | (zmm2 & not.o(arg11))
                
                zmm10 = zx.o(0)
                int32_t temp0_1547[0x4] = _mm_cmpeq_epi32(arg12, arg12)
                zmm4 = _mm_madd_epi16(zmm4, zmm0)
                arg_30 = _mm_add_epi64(arg60, zmm9)
                arg_90 = _mm_add_epi64(arg60, zmm7)
                zmm0 = _mm_shuffle_epi32(arg11, 0xf5)
                zmm2 = (arg22 & zmm12) | (zmm12 & not.o(_mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(arg11, zmm3), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm0), 0xe8)[0]
                        .q)))
                arg15 = (arg_70 & zmm12) | (zmm12 & not.o(zmm4))
                arg_b0 = zmm12
                zmm0 = zmm12 & not.o(__pcmpgtd_xmmdq_memdq(arg14, data_142d3f5b0))
                zmm12 = zmm2
                arg22 = zmm2
                arg_80 = arg13
                arg36 = arg14
                arg_130 = arg16
                arg_70 = arg15
                arg_190 = zmm9
                arg_e0 = zmm7
                
                if (_mm_movemask_ps(zmm0) == 0)
                    zmm4 = zx.o(0)
                    arg23 = zx.o(0)
                label_14024468a:
                    arg11 = arg_60
                    arg13 = arg_90
                    arg14 = arg_50
                    arg12 = __return_addr.o
                else
                    arg11 = arg13
                    arg19 = zmm13
                    zmm13 = arg13 & data_142fc95f0
                    zmm10 = zx.o(0)
                    zmm1 = _mm_srai_epi32(
                        _mm_slli_epi32(_mm_cmpeq_epi32(zmm13, zx.o(0)) & zmm0, 0x1f), 0x1f)
                    zmm4 = zx.o(0)
                    arg23 = zx.o(0)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        arg23 = zx.o(0)
                        zmm2 = zx.o(arg80)
                        
                        if (0f >= zmm2[0])
                            zmm10 = zx.o(0)
                            zmm4 = zx.o(0)
                        else
                            bool cond:33_1 = zmm2[0] >= 1f
                            zmm3 = _mm_add_epi32(arg14, temp0_1547)
                            
                            if (cond:33_1)
                                zmm3 &= zmm1
                                zmm10 = zmm3
                                zmm4 = zmm3
                            else
                                float temp0_1566[0x4] =
                                    __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm3), arg49)
                                zmm4 = __andps_xmmxud_memxud(temp0_1566, data_142d3f780)
                                arg11 = __addps_xmmps_memps(
                                    __addps_xmmps_memps(
                                        __andps_xmmxud_memxud(temp0_1566, data_142d3f770), 
                                        data_142d3f740), 
                                    data_1434427a0) ^ zmm4
                                arg23 = zx.o(0)
                                float temp0_1573[0x4] = _mm_add_ps(
                                    __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_1566, arg11, 1), 
                                        data_142d3f7e0), 
                                    arg11)
                                arg11 = _mm_cvttps_epi32(temp0_1573)
                                zmm10 = _mm_cmpgt_epi32(arg11, zmm3)
                                zmm10 = ((zmm10 & not.o(arg11)) | (zmm3 & zmm10)) & zmm1
                                
                                if (arg81 != 1)
                                    arg23 = _mm_sub_ps(temp0_1566, temp0_1573)
                                
                                zmm2 = _mm_sub_epi32(zmm10, _mm_cmpeq_epi32(temp0_1573, temp0_1573))
                                zmm4 = _mm_cmpgt_epi32(zmm3, zmm2)
                                zmm4 = ((zmm4 & not.o(zmm3)) | (zmm2 & zmm4)) & zmm1
                        
                        arg23 &= zmm1
                    
                    zmm13 = _mm_srai_epi32(
                        _mm_slli_epi32(_mm_cmpeq_epi32(zmm13, zx.o(0)) & not.o(zmm0), 0x1f), 0x1f)
                    
                    if (_mm_movemask_ps(zmm13) == 0)
                        zmm13 = arg19
                        goto label_14024468a
                    
                    zmm2 = _mm_cmpgt_epi32(data_1434422d0, arg14) | arg59
                    zmm0 = zmm2 & zmm13
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm10 = zmm0 & not.o(zmm10)
                        zmm4 = zmm0 & not.o(zmm4)
                    
                    zmm0 = arg23
                    zmm3 = arg15
                    arg12 = __return_addr.o
                    arg15 = zmm2 & not.o(zmm13)
                    uint32_t temp0_1586 = _mm_movemask_ps(arg15)
                    zmm1 = zx.o(0)
                    
                    if (temp0_1586 == 0)
                        arg16 = zmm3
                        arg14 = arg_50
                        arg11 = arg_60
                        zmm9 = arg_90
                    else
                        arg13 = _mm_add_epi32(arg14, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (arg80[0] >= 1f)
                            arg16 = arg_70
                            arg13 &= arg15
                            zmm10 = (arg15 & not.o(zmm10)) | arg13
                            zmm4 = (arg15 & not.o(zmm4)) | arg13
                            arg14 = arg_50
                            zmm0 = arg23
                            arg11 = arg_60
                            zmm9 = arg_90
                        else
                            arg_1a0 = zmm2
                            arg_d0 = zmm4
                            arg_a0 = zmm10
                            __return_addr.o = arg12
                            zmm0 = _mm_shuffle_epi32(arg14, 0xf5)
                            zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(zmm12, 0xf5), zmm0)
                            zmm0 = _mm_mul_epu32(zmm12, arg14)
                            arg16 = _mm_shuffle_epi32(arg_70, 0x4e)
                            zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), 
                                _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), arg_70)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), arg16)
                            zmm12 = _mm_unpacklo_epi32(arg_70, zmm1[0].q)
                            arg16 = _mm_unpacklo_epi32(arg16, zmm2[0].q)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            arg16 = __paddq_xmmdq_memdq(arg16, arg_90)
                            zmm12 = __paddq_xmmdq_memdq(zmm12, arg_30)
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                            zmm2 = data_143442a20
                            arg16 = _mm_add_epi64(_mm_add_epi64(arg16, zmm2), zmm1)
                            zmm12 = _mm_add_epi64(_mm_add_epi64(zmm12, zmm2), zmm0)
                            zmm0 = data_143442c10
                            zmm12 &= zmm0
                            arg16 &= zmm0
                            zmm0 =
                                _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg13), arg49))
                            zmm2 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                            zmm10 = _mm_cmpgt_epi32(arg13, zmm2)
                            zmm10 = (zmm10 & not.o(arg13)) | (zmm2 & zmm10)
                            arg14 = arg13
                            
                            if (arg79 s< 0x100)
                                zmm3 = _mm_shuffle_epi32(zmm10, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm10, 
                                        _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                    zmm12)
                                char rbx_36 = temp0_1586.b
                                arg11 = _mm_cmpeq_epi32(arg11, arg11)
                                
                                if ((rbx_36 & 1) != 0)
                                    zmm1 = arg46
                                    zmm1[0] = zx.o(*zmm0[0].q)[0]
                                    arg13 = arg_70
                                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
                                    
                                    if ((rbx_36 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), zmm1, 
                                                0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = arg46
                                    arg13 = arg_70
                                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
                                    
                                    if ((rbx_36 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), zmm1, 
                                                0), 
                                            zmm1, 0xe2)
                                
                                zmm3 = _mm_add_epi64(zmm3, arg16)
                                
                                if ((rbx_36 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm1, 0x30), 0x84)
                                    
                                    if ((rbx_36 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q), zmm1, 
                                                0x20), 
                                            0x24)
                                else if ((rbx_36 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                zmm7 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_142ed6810), arg24)
                                arg12 = zmm7 ^ arg11
                                arg46 = zmm1
                                arg_170 = arg12
                                
                                if (_mm_movemask_ps(zmm7 & not.o(arg15)) == 0)
                                    zmm3 = zmm10
                                else
                                    zmm4 = (zmm7 & not.o(arg14)) | (zmm7 & zmm10)
                                    zmm0 = _mm_sub_epi32(zmm10, arg11)
                                    zmm7 &= not.o(_mm_cmpgt_epi32(zmm0, arg14) ^ arg11)
                                    zmm2 = arg15 & zmm7
                                    uint32_t i_5 = _mm_movemask_ps(zmm2)
                                    
                                    if (i_5 == 0)
                                        zmm3 = zmm4
                                    else
                                        zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                                        arg12 = zmm10
                                        
                                        do
                                            arg11 = zmm0
                                            float temp0_1689[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                                            arg13 = _mm_cmpgt_epi32(zx.o(0), temp0_1689)
                                            zmm0 = _mm_add_epi64(
                                                _mm_unpacklo_epi32(zmm0, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                                zmm12)
                                            char temp0_1694 = _mm_movemask_ps(zmm2)
                                            
                                            if ((temp0_1694 & 1) != 0)
                                                arg56[0] = zx.o(*zmm0[0].q)[0]
                                                zmm1 = arg56
                                                zmm3 = _mm_unpacklo_epi32(temp0_1689, arg13[0].q)
                                                
                                                if ((temp0_1694 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            else
                                                zmm1 = arg56
                                                zmm3 = _mm_unpacklo_epi32(temp0_1689, arg13[0].q)
                                                
                                                if ((temp0_1694 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            
                                            arg13 = arg_70
                                            zmm3 = _mm_add_epi64(zmm3, arg16)
                                            
                                            if ((temp0_1694 & 4) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm1, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1694 & 8) != 0)
                                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm3, 0x4e)[0].q), 
                                                            zmm1, 0x20), 
                                                        0x24)
                                            else if ((temp0_1694 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                            
                                            arg56 = zmm1
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm1, data_142ed6810), arg24)
                                                & zmm7
                                            zmm2 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & arg15) != i_5)
                                                zmm2 = zmm0 ^ zmm7
                                            
                                            zmm3 = (zmm0 & not.o(zmm4)) | (arg12 & zmm0)
                                            zmm0 = _mm_sub_epi32(arg11, zmm9)
                                            zmm7 = _mm_cmpgt_epi32(zmm0, arg14) & not.o(zmm2)
                                            zmm2 = zmm7 & arg15
                                            i_5 = _mm_movemask_ps(zmm2)
                                            arg12 = arg11
                                            zmm4 = zmm3
                                        while (i_5 != 0)
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(arg_170, arg15)) == 0)
                                    zmm4 = zmm3
                                    arg12 = _mm_cmpeq_epi32(arg12, arg12)
                                else
                                    zmm3 &= arg_170
                                    arg12 = _mm_cmpeq_epi32(arg12, arg12)
                                    zmm10 = _mm_add_epi32(zmm10, arg12)
                                    zmm7 = __pcmpgtd_xmmdq_memdq(zmm10, data_142d8f750)
                                        & (arg_170 ^ arg12)
                                    zmm0 = zmm7 & arg15
                                    uint32_t i_6 = _mm_movemask_ps(zmm0)
                                    
                                    if (i_6 != 0)
                                        do
                                            zmm4 = _mm_shuffle_epi32(zmm10, 0x4e)
                                            arg11 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                            zmm2 = _mm_add_epi64(
                                                _mm_unpacklo_epi32(zmm10, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                                zmm12)
                                            char temp0_1798 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1798 & 1) != 0)
                                                zmm1 = arg57
                                                zmm1[0] = zx.o(*zmm2[0].q)[0]
                                                zmm4 = _mm_unpacklo_epi32(zmm4, arg11[0].q)
                                                
                                                if ((temp0_1798 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            else
                                                zmm1 = arg57
                                                zmm4 = _mm_unpacklo_epi32(zmm4, arg11[0].q)
                                                
                                                if ((temp0_1798 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            
                                            zmm4 = _mm_add_epi64(zmm4, arg16)
                                            
                                            if ((temp0_1798 & 4) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm1, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1798 & 8) != 0)
                                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                            zmm1, 0x20), 
                                                        0x24)
                                            else if ((temp0_1798 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                            
                                            arg57 = zmm1
                                            zmm2 = __pcmpgtd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm1, data_142ed6810), arg24)
                                                & not.o(zmm7)
                                            arg11 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm2 & arg15) != i_6)
                                                arg11 = zmm2 ^ zmm7
                                            
                                            zmm4 = (zmm2 & not.o(zmm3)) | (zmm2 & zmm10)
                                            zmm10 = _mm_add_epi32(zmm10, arg12)
                                            zmm7 = _mm_cmpgt_epi32(zmm10, zx.o(0)) & arg11
                                            zmm0 = zmm7 & arg15
                                            i_6 = _mm_movemask_ps(zmm0)
                                            zmm3 = zmm4
                                        while (i_6 != 0)
                                    else
                                        zmm4 = zmm3
                                
                                zmm10 = (zmm4 & arg15) | (arg15 & not.o(arg_a0))
                                zmm1 = _mm_shuffle_epi32(zmm10, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm10, 
                                        _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                    zmm12)
                                
                                if ((rbx_36 & 1) != 0)
                                    arg38[0] = zx.o(*zmm0[0].q)[0]
                                    zmm3 = arg38
                                else
                                    zmm3 = arg38
                                
                                zmm9 = arg_90
                                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                                
                                if ((rbx_36 & 2) == 0)
                                    zmm1 = _mm_add_epi64(zmm1, arg16)
                                    
                                    if ((rbx_36 & 4) != 0)
                                        goto label_140245459
                                    
                                    goto label_140245368
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm1 = _mm_add_epi64(zmm1, arg16)
                                
                                if ((rbx_36 & 4) == 0)
                                label_140245368:
                                    zmm0 = arg15 ^ arg12
                                    
                                    if ((rbx_36 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm3, 
                                                0x20), 
                                            0x24)
                                else
                                label_140245459:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                                    zmm0 = arg15 ^ arg12
                                    
                                    if ((rbx_36 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm3, 
                                                0x20), 
                                            0x24)
                                
                                zmm4 = (_mm_sub_epi32(zmm10, arg12) & arg15) | (arg_d0 & zmm0)
                                zmm0 = _mm_cmpgt_epi32(zmm4, arg14) & arg15
                                arg38 = zmm3
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm4 = (arg14 & zmm0) | (zmm0 & not.o(zmm4))
                                
                                arg14 = arg_50
                                zmm0 = _mm_shuffle_epi32(zmm4, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm12 = _mm_add_epi64(zmm12, _mm_unpacklo_epi32(zmm4, zmm2[0].q))
                                
                                if ((rbx_36 & 1) != 0)
                                    zmm2 = zx.o(*zmm12[0].q)
                                    zmm3 = arg48
                                    zmm3[0] = zmm2[0]
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                    
                                    if ((rbx_36 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                                0), 
                                            zmm3, 0xe2)
                                else
                                    zmm3 = arg48
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                    
                                    if ((rbx_36 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                                0), 
                                            zmm3, 0xe2)
                                
                                zmm12 = arg22
                                arg16 = _mm_add_epi64(arg16, zmm0)
                                
                                if ((rbx_36 & 4) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*arg16[0].q), zmm3, 0x30), 0x84)
                                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                    arg11 = arg_60
                                    
                                    if ((rbx_36 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(arg16, 0x4e)[0].q), zmm3, 
                                                0x20), 
                                            0x24)
                                else
                                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                    arg11 = arg_60
                                    
                                    if ((rbx_36 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(arg16, 0x4e)[0].q), zmm3, 
                                                0x20), 
                                            0x24)
                                
                                arg12 = __return_addr.o
                                zmm1 = data_142ed6810
                                zmm0 = _mm_and_ps(arg38, zmm1)
                                arg48 = zmm3
                            else
                                arg_170 = arg14
                                zmm0 = _mm_add_epi32(zmm10, zmm10)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                    zmm12)
                                char rbx_35 = temp0_1586.b
                                arg14 = data_143442cd0
                                int32_t temp0_1623[0x4] = _mm_cmpeq_epi32(arg12, arg12)
                                
                                if ((rbx_35 & 1) != 0)
                                    zmm1 = arg45
                                    zmm1[0] = zx.o(*zmm0[0].q)[0]
                                    arg13 = arg_70
                                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
                                    
                                    if ((rbx_35 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), zmm1, 
                                                0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = arg45
                                    arg13 = arg_70
                                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
                                    
                                    if ((rbx_35 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), zmm1, 
                                                0), 
                                            zmm1, 0xe2)
                                
                                zmm3 = _mm_add_epi64(zmm3, arg16)
                                
                                if ((rbx_35 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm1, 0x30), 0x84)
                                    
                                    if ((rbx_35 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q), zmm1, 
                                                0x20), 
                                            0x24)
                                else if ((rbx_35 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                arg11 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm1, arg14), arg24)
                                arg45 = zmm1
                                arg_140 = arg11 ^ temp0_1623
                                
                                if (_mm_movemask_ps(arg11 & not.o(arg15)) == 0)
                                    zmm7 = zmm10
                                    zmm9 = arg_90
                                else
                                    zmm2 = (arg11 & not.o(arg_170)) | (arg11 & zmm10)
                                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                    arg12 = _mm_sub_epi32(zmm10, zmm3)
                                    arg11 &= not.o(_mm_cmpgt_epi32(arg12, arg_170) ^ zmm3)
                                    zmm3 = arg15 & arg11
                                    uint32_t i_7 = _mm_movemask_ps(zmm3)
                                    
                                    if (i_7 == 0)
                                        zmm7 = zmm2
                                        zmm9 = arg_90
                                    else
                                        zmm4 = zmm10
                                        
                                        do
                                            zmm0 = arg12
                                            int32_t temp0_1647[0x4] = _mm_add_epi32(arg12, arg12)
                                            float temp0_1648[0x4] =
                                                _mm_shuffle_epi32(temp0_1647, 0x4e)
                                            arg13 = _mm_cmpgt_epi32(zx.o(0), temp0_1648)
                                            int32_t temp0_1652[0x4] = _mm_add_epi64(
                                                _mm_unpacklo_epi32(temp0_1647, 
                                                    _mm_cmpgt_epi32(zx.o(0), temp0_1647)[0].q), 
                                                zmm12)
                                            char temp0_1653 = _mm_movemask_ps(zmm3)
                                            
                                            if ((temp0_1653 & 1) != 0)
                                                zmm1 = arg34
                                                zmm1[0] = zx.o(*temp0_1652[0].q)[0]
                                                arg34 = zmm1
                                            
                                            zmm7 = _mm_unpacklo_epi32(temp0_1648, arg13[0].q)
                                            zmm9 = arg_90
                                            
                                            if ((temp0_1653 & 2) != 0)
                                                zmm1 = arg34
                                                arg12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(temp0_1652, 0x4e)[0]
                                                            .q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                                arg13 = arg_70
                                                zmm7 = _mm_add_epi64(zmm7, arg16)
                                                
                                                if ((temp0_1653 & 4) != 0)
                                                    arg12 = _mm_shuffle_ps(arg12, 
                                                        _mm_shuffle_ps(zx.o(*zmm7[0].q), arg12, 
                                                            0x30), 
                                                        0x84)
                                            else
                                                arg12 = arg34
                                                arg13 = arg_70
                                                zmm7 = _mm_add_epi64(zmm7, arg16)
                                                
                                                if ((temp0_1653 & 4) != 0)
                                                    arg12 = _mm_shuffle_ps(arg12, 
                                                        _mm_shuffle_ps(zx.o(*zmm7[0].q), arg12, 
                                                            0x30), 
                                                        0x84)
                                            
                                            if ((temp0_1653 & 8) != 0)
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q), 
                                                        arg12, 0x20), 
                                                    0x24)
                                            
                                            arg34 = arg12
                                            arg12 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(arg12, arg14), 
                                                arg24) & arg11
                                            zmm3 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(arg12 & arg15) != i_7)
                                                zmm3 = arg12 ^ arg11
                                            
                                            zmm7 = (arg12 & not.o(zmm2)) | (zmm4 & arg12)
                                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                            arg12 = _mm_sub_epi32(zmm0, zmm1)
                                            arg11 =
                                                __pcmpgtd_xmmdq_memdq(arg12, arg_170) & not.o(zmm3)
                                            zmm3 = arg11 & arg15
                                            i_7 = _mm_movemask_ps(zmm3)
                                            zmm4 = zmm0
                                            zmm2 = zmm7
                                        while (i_7 != 0)
                                
                                zmm0 = _mm_andnot_ps(arg_140, arg15)
                                uint32_t temp0_1715 = _mm_movemask_ps(zmm0)
                                uint32_t i_8
                                
                                if (temp0_1715 != 0)
                                    zmm7 &= arg_140
                                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                    zmm1 = arg_140 ^ zmm0
                                    zmm10 = _mm_add_epi32(zmm10, zmm0)
                                    zmm3 = __pcmpgtd_xmmdq_memdq(zmm10, data_142d8f750) & zmm1
                                    zmm0 = zmm3 & arg15
                                    i_8 = _mm_movemask_ps(zmm0)
                                
                                if (temp0_1715 == 0 || i_8 == 0)
                                    zmm4 = zmm7
                                else
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                    
                                    do
                                        zmm2 = _mm_add_epi32(zmm10, zmm10)
                                        float temp0_1724[0x4] = _mm_shuffle_epi32(zmm2, 0x4e)
                                        arg11 = _mm_cmpgt_epi32(zx.o(0), temp0_1724)
                                        zmm2 = _mm_add_epi64(
                                            _mm_unpacklo_epi32(zmm2, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), 
                                            zmm12)
                                        char temp0_1729 = _mm_movemask_ps(zmm0)
                                        
                                        if ((temp0_1729 & 1) != 0)
                                            arg12 = arg55
                                            arg12[0] = zx.o(*zmm2[0].q)[0]
                                            zmm4 = _mm_unpacklo_epi32(temp0_1724, arg11[0].q)
                                            
                                            if ((temp0_1729 & 2) != 0)
                                                arg12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                        arg12, 0), 
                                                    arg12, 0xe2)
                                        else
                                            arg12 = arg55
                                            zmm4 = _mm_unpacklo_epi32(temp0_1724, arg11[0].q)
                                            
                                            if ((temp0_1729 & 2) != 0)
                                                arg12 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                        arg12, 0), 
                                                    arg12, 0xe2)
                                        
                                        zmm4 = _mm_add_epi64(zmm4, arg16)
                                        
                                        if ((temp0_1729 & 4) != 0)
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(zx.o(*zmm4[0].q), arg12, 0x30), 0x84)
                                            
                                            if ((temp0_1729 & 8) != 0)
                                                arg12 = _mm_shuffle_ps(arg12, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                        arg12, 0x20), 
                                                    0x24)
                                        else if ((temp0_1729 & 8) != 0)
                                            arg12 = _mm_shuffle_ps(arg12, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                    arg12, 0x20), 
                                                0x24)
                                        
                                        arg55 = arg12
                                        zmm2 =
                                            __pcmpgtd_xmmdq_memdq(_mm_and_ps(arg12, arg14), arg24)
                                            & not.o(zmm3)
                                        arg11 = zmm2 & zmm10
                                        arg12 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm2 & arg15) != i_8)
                                            arg12 = zmm2 ^ zmm3
                                        
                                        zmm4 = (zmm2 & not.o(zmm7)) | arg11
                                        zmm10 = _mm_add_epi32(zmm10, zmm1)
                                        zmm3 = _mm_cmpgt_epi32(zmm10, zx.o(0)) & arg12
                                        zmm0 = zmm3 & arg15
                                        i_8 = _mm_movemask_ps(zmm0)
                                        zmm7 = zmm4
                                    while (i_8 != 0)
                                
                                zmm10 = (zmm4 & arg15) | (arg15 & not.o(arg_a0))
                                zmm0 = _mm_add_epi32(zmm10, zmm10)
                                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                    zmm12)
                                
                                if ((rbx_35 & 1) != 0)
                                    arg37[0] = zx.o(*zmm0[0].q)[0]
                                    zmm3 = arg37
                                else
                                    zmm3 = arg37
                                
                                arg11 = _mm_cmpeq_epi32(arg11, arg11)
                                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                                
                                if ((rbx_35 & 2) == 0)
                                    zmm1 = _mm_add_epi64(zmm1, arg16)
                                    
                                    if ((rbx_35 & 4) != 0)
                                        goto label_140245027
                                    
                                    goto label_140244f37
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm1 = _mm_add_epi64(zmm1, arg16)
                                
                                if ((rbx_35 & 4) == 0)
                                label_140244f37:
                                    zmm0 = arg15 ^ arg11
                                    
                                    if ((rbx_35 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm3, 
                                                0x20), 
                                            0x24)
                                else
                                label_140245027:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                                    zmm0 = arg15 ^ arg11
                                    
                                    if ((rbx_35 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm3, 
                                                0x20), 
                                            0x24)
                                
                                zmm4 = (_mm_sub_epi32(zmm10, arg11) & arg15) | (arg_d0 & zmm0)
                                zmm0 = _mm_cmpgt_epi32(zmm4, arg_170) & arg15
                                arg37 = zmm3
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm4 = (arg_170 & zmm0) | (zmm0 & not.o(zmm4))
                                
                                arg14 = arg_50
                                zmm2 = _mm_add_epi32(zmm4, zmm4)
                                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q)
                                zmm12 = _mm_add_epi64(zmm12, zmm2)
                                
                                if ((rbx_35 & 1) != 0)
                                    zmm2 = zx.o(*zmm12[0].q)
                                    zmm3 = arg47
                                    zmm3[0] = zmm2[0]
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                    
                                    if ((rbx_35 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                                0), 
                                            zmm3, 0xe2)
                                else
                                    zmm3 = arg47
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                    
                                    if ((rbx_35 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                                0), 
                                            zmm3, 0xe2)
                                
                                zmm1 = data_143442cd0
                                zmm12 = arg22
                                arg16 = _mm_add_epi64(arg16, zmm0)
                                
                                if ((rbx_35 & 4) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*arg16[0].q), zmm3, 0x30), 0x84)
                                
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                arg11 = arg_60
                                
                                if ((rbx_35 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg16, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                                
                                arg12 = __return_addr.o
                                zmm0 = _mm_and_ps(arg37, zmm1)
                                arg47 = zmm3
                            
                            zmm3 = _mm_and_ps(zmm3, zmm1)
                            arg16 = arg13
                            zmm7 = arg_1a0 ^ zmm2
                            zmm1 = zx.o(0)
                            
                            if (arg81 != 1)
                                zmm3 = _mm_sub_epi32(zmm3, zmm0)
                                zmm1 = data_142d3f5b0
                                zmm2 = _mm_cmpgt_epi32(zmm3, zmm1)
                                zmm1 = _mm_div_ps(_mm_sub_ps(arg58, _mm_cvtepi32_ps(zmm0)), 
                                    _mm_cvtepi32_ps((zmm2 & not.o(zmm1)) | (zmm3 & zmm2)))
                            
                            zmm1 = _mm_and_ps(zmm1, zmm7)
                            zmm0 = arg23
                    
                    arg23 = (zmm13 & not.o(zmm0)) | _mm_and_ps(zmm1, zmm13)
                    zmm13 = arg19
                    arg13 = zmm9
                    arg15 = arg16
                    arg16 = arg_130
                
                zmm1 = _mm_unpacklo_epi32(arg15, _mm_cmpgt_epi32(zx.o(0), arg15)[0].q)
                float temp0_1861[0x4] = _mm_shuffle_epi32(arg15, 0x4e)
                zmm7 = _mm_unpacklo_epi32(temp0_1861, _mm_cmpgt_epi32(zx.o(0), temp0_1861)[0].q)
                zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(zmm10, zmm12), 0xe8)
                zmm3 = _mm_shuffle_epi32(zmm12, 0xf5)
                arg_430 = zmm3
                zmm2 = _mm_unpacklo_epi32(zmm2, 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm10, 0xf5), zmm3), 0xe8)[0]
                        .q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm0[0].q)
                zmm3 = _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3)[0].q)
                arg_160 = zmm3
                arg_1a0 = zmm7
                zmm0 = _mm_add_epi64(zmm3, zmm7)
                arg_110 = zmm2
                arg_170 = zmm1
                float arg_310[0x4] = __paddq_xmmdq_memdq(_mm_add_epi64(zmm2, zmm1), arg_30)
                zmm9 = arg13
                arg_210 = _mm_add_epi64(zmm0, arg13)
                zmm2 = __pcmpeqd_xmmdq_memdq(arg20, data_142d3f5b0)
                zmm3 = arg_b0 & not.o(zmm2)
                arg_d0 = zmm4
                arg_a0 = zmm10
                arg_50 = zmm2
                
                if (_mm_movemask_ps(zmm3) == 0)
                    zmm7 = arg11
                    arg13 = arg15
                    arg15 = arg14
                    arg14 = arg12
                    arg12 = _mm_cmpeq_epi32(arg12, arg12)
                    arg11 = arg_80
                else
                    arg16 = _mm_cmpeq_epi32(arg_270, zx.o(0))
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg16 & zmm3, 0x1f), 0x1f)
                    char temp0_1885 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1885 == 0)
                        zmm7 = arg11
                        arg15 = arg14
                        arg14 = arg12
                        arg12 = _mm_cmpeq_epi32(arg12, arg12)
                        arg11 = arg_80
                    else
                        zmm12 = arg12
                        arg15 = arg14
                        zmm2 = __paddq_xmmdq_memdq(arg_e0, arg_1a0)
                        arg11 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), arg_110)
                        zmm2 = __paddq_xmmdq_memdq(zmm2, arg_160)
                        zmm4 = data_1434426c0
                        zmm2 = _mm_add_epi64(zmm2, zmm4)
                        arg11 = _mm_add_epi64(arg11, zmm4)
                        float temp0_1892[0x4] = _mm_shuffle_epi32(zmm1, 0x50)
                        arg11 &= temp0_1892
                        arg12 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm2 &= arg12
                        int64_t rax_423 = _mm_shuffle_epi32(arg11, 0x4e)[0].q
                        void* rsi_9 = arg4 + rax_423
                        zmm1 = *(arg4 + rax_423)
                        int64_t rax_424 = zmm2[0].q
                        void* r10_1 = arg4 + rax_424
                        zmm10 = *(arg4 + rax_424)
                        int64_t rax_425 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        void* r11_1 = arg4 + rax_425
                        __return_addr.o = *(arg4 + rax_425)
                        zmm2 = temp0_1892 & zmm4
                        zmm7 = arg12 & zmm4
                        void* rbx_38 = arg11[0].q + arg4
                        arg13 = *(zmm2[0].q + rbx_38)
                        zmm2 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rsi_9)
                        zmm9 = *(zmm7[0].q + r10_1)
                        zmm7 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + r11_1)
                        zmm0 = data_1434426e0
                        zmm4 = temp0_1892 & zmm0
                        arg12 &= zmm0
                        arg14 = *(zmm4[0].q + rbx_38)
                        arg11 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rsi_9)
                        zmm4 = *(arg12[0].q + r10_1)
                        zmm0 = *(_mm_shuffle_epi32(arg12, 0x4e)[0].q + r11_1)
                        bool cond:56_1
                        bool cond:57_1
                        
                        if ((temp0_1885 & 1) == 0)
                            char temp20_1 = temp0_1885 & 1
                            cond:56_1 = temp20_1 != 0
                            cond:57_1 = temp20_1 == 0
                            arg12 = arg_80
                            
                            if (temp20_1 == 0)
                                goto label_140245c15
                            
                            goto label_140245834
                        
                        arg15[0] = (*rbx_38)[0]
                        char temp19_1 = temp0_1885 & 1
                        cond:56_1 = temp19_1 != 0
                        cond:57_1 = temp19_1 == 0
                        arg12 = arg_80
                        
                        if (temp19_1 == 0)
                        label_140245c15:
                            
                            if (cond:57_1)
                                goto label_14024583f
                            
                            goto label_140245c1b
                        
                    label_140245834:
                        zmm13[0] = arg13[0]
                        bool cond:69_1
                        bool cond:70_1
                        bool cond:76_1
                        bool cond:77_1
                        
                        if (not(cond:56_1))
                        label_14024583f:
                            arg14 = zmm12
                            char temp24_1 = temp0_1885 & 2
                            cond:69_1 = temp24_1 != 0
                            cond:70_1 = temp24_1 == 0
                            cond:76_1 = temp24_1 != 0
                            cond:77_1 = temp24_1 == 0
                            
                            if (temp24_1 == 0)
                                goto label_140245c2d
                            
                            goto label_140245857
                        
                    label_140245c1b:
                        zmm12[0] = arg14[0]
                        arg14 = zmm12
                        char temp23_1 = temp0_1885 & 2
                        cond:69_1 = temp23_1 != 0
                        cond:70_1 = temp23_1 == 0
                        cond:76_1 = temp23_1 != 0
                        cond:77_1 = temp23_1 == 0
                        
                        if (temp23_1 == 0)
                        label_140245c2d:
                            
                            if (cond:70_1)
                                goto label_140245861
                            
                            goto label_140245c3d
                        
                    label_140245857:
                        arg15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg15, 0), arg15, 0xe2)
                        
                        if (not(cond:69_1))
                        label_140245861:
                            
                            if (cond:77_1)
                                goto label_140245c47
                            
                            goto label_140245871
                        
                    label_140245c3d:
                        zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm13, 0), zmm13, 0xe2)
                        bool cond:93_1
                        bool cond:94_1
                        bool cond:115_1
                        bool cond:116_1
                        
                        if (not(cond:76_1))
                        label_140245c47:
                            arg11 = arg12
                            char temp34_1 = temp0_1885 & 4
                            cond:93_1 = temp34_1 != 0
                            cond:94_1 = temp34_1 == 0
                            cond:115_1 = temp34_1 != 0
                            cond:116_1 = temp34_1 == 0
                            
                            if (temp34_1 == 0)
                                goto label_140245882
                            
                            goto label_140245c59
                        
                    label_140245871:
                        arg14 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, arg14, 0), arg14, 0xe2)
                        arg11 = arg12
                        char temp33_1 = temp0_1885 & 4
                        cond:93_1 = temp33_1 != 0
                        cond:94_1 = temp33_1 == 0
                        cond:115_1 = temp33_1 != 0
                        cond:116_1 = temp33_1 == 0
                        
                        if (temp33_1 == 0)
                        label_140245882:
                            zmm10 = arg_a0
                            
                            if (cond:94_1)
                                goto label_140245c6e
                            
                            goto label_140245897
                        
                    label_140245c59:
                        arg15 = _mm_shuffle_ps(arg15, _mm_shuffle_ps(zmm10, arg15, 0x30), 0x84)
                        zmm10 = arg_a0
                        
                        if (not(cond:93_1))
                        label_140245c6e:
                            arg12 = _mm_cmpeq_epi32(arg12, arg12)
                            zmm9 = arg_90
                            
                            if (cond:116_1)
                                goto label_1402458b0
                            
                            goto label_140245c87
                        
                    label_140245897:
                        zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm9, zmm13, 0x30), 0x84)
                        arg12 = _mm_cmpeq_epi32(arg12, arg12)
                        zmm9 = arg_90
                        bool cond:151_1
                        bool cond:152_1
                        bool cond:168_1
                        bool cond:169_1
                        
                        if (not(cond:115_1))
                        label_1402458b0:
                            char temp49_1 = temp0_1885 & 8
                            cond:151_1 = temp49_1 != 0
                            cond:152_1 = temp49_1 == 0
                            cond:168_1 = temp49_1 != 0
                            cond:169_1 = temp49_1 == 0
                            
                            if (temp49_1 == 0)
                                goto label_140245c95
                            
                            goto label_1402458c2
                        
                    label_140245c87:
                        arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm4, arg14, 0x30), 0x84)
                        char temp48_1 = temp0_1885 & 8
                        cond:151_1 = temp48_1 != 0
                        cond:152_1 = temp48_1 == 0
                        cond:168_1 = temp48_1 != 0
                        cond:169_1 = temp48_1 == 0
                        
                        if (temp48_1 == 0)
                        label_140245c95:
                            
                            if (cond:152_1)
                                goto label_1402458cd
                            
                            goto label_140245ca0
                        
                    label_1402458c2:
                        arg15 = _mm_shuffle_ps(arg15, _mm_shuffle_ps(__return_addr.o, arg15, 0x20), 
                            0x24)
                        
                        if (cond:151_1)
                        label_140245ca0:
                            zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm7, zmm13, 0x20), 0x24)
                            zmm7 = arg_60
                            
                            if (cond:168_1)
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm0, arg14, 0x20), 0x24)
                        else
                        label_1402458cd:
                            zmm7 = arg_60
                            
                            if (not(cond:169_1))
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm0, arg14, 0x20), 0x24)
                        
                        zmm12 = arg22
                    
                    arg16 &= not.o(zmm3)
                    zmm4 = _mm_slli_epi32(arg16, 0x1f)
                    char temp0_1914 = _mm_movemask_ps(zmm4)
                    
                    if (temp0_1914 == 0)
                        arg13 = arg_70
                        arg16 = arg_130
                        zmm4 = arg_d0
                        zmm2 = arg_50
                    else
                        zmm10 = arg15
                        zmm7 = arg11
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg11, 0x1f), 0x1f)
                        zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm2
                        arg15 = arg_310
                        zmm1 = arg_210
                        
                        if (_mm_movemask_ps(zmm4) != 0)
                            zmm9 = zmm12
                            zmm1 = data_1434426c0
                            zmm0 = zmm1
                            zmm12 = _mm_add_epi64(arg_210, zmm1)
                            zmm1 = _mm_add_epi64(arg_310, zmm0)
                            arg11 = zmm4 ^ arg12
                            float temp0_1921[0x4] = _mm_shuffle_epi32(arg11, 0x50)
                            arg15 = (temp0_1921 & not.o(zmm1)) | (arg_310 & temp0_1921)
                            zmm1 = _mm_shuffle_epi32(arg11, 0xfa)
                            zmm3 = arg_210 & zmm1
                            zmm1 &= not.o(zmm12)
                            zmm12 = zmm9
                            zmm1 |= zmm3
                            zmm3 = __paddq_xmmdq_memdq(arg_e0, arg_1a0)
                            arg11 =
                                __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), arg_110)
                            zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm3, arg_160), zmm0)
                            arg11 = _mm_add_epi64(arg11, zmm0)
                            arg12 = _mm_shuffle_epi32(zmm4, 0x50) & arg11
                            zmm4 = _mm_shuffle_epi32(zmm4, 0xfa) & zmm3
                            arg11 = zx.o(*(arg4 + arg12[0].q))
                            zmm3 = _mm_shuffle_epi32(arg12, 0x4e)
                            arg12 = _mm_cmpeq_epi32(arg12, arg12)
                            arg11 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(arg11, zx.o(*(arg4 + zmm3[0].q))[0].q), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm4[0].q)), 
                                    zx.o(*(arg4 + _mm_shuffle_epi32(zmm4, 0x4e)[0].q))[0].q)[0].q)
                        
                        zmm2 &= arg11
                        
                        if ((temp0_1914 & 1) != 0)
                            zmm10[0] = zmm2[0]
                            arg11 = zmm7
                            
                            if ((temp0_1914 & 2) != 0)
                                goto label_140245ac6
                            
                            goto label_140245a96
                        
                        arg11 = zmm7
                        
                        if ((temp0_1914 & 2) != 0)
                        label_140245ac6:
                            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm10, 1), zmm10, 0xe2)
                            
                            if ((temp0_1914 & 4) != 0)
                                goto label_140245aa3
                            
                            goto label_140245acf
                        
                    label_140245a96:
                        
                        if ((temp0_1914 & 4) == 0)
                        label_140245acf:
                            
                            if ((temp0_1914 & 8) != 0)
                                zmm10 =
                                    _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x23), 0x24)
                        else
                        label_140245aa3:
                            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x32), 0x84)
                            
                            if ((temp0_1914 & 8) != 0)
                                zmm10 =
                                    _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x23), 0x24)
                        
                        zmm2 = data_1434422d0
                        arg11 &= zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(arg11, zmm2) & arg16, 0x1f)
                        char temp0_1945 = _mm_movemask_ps(zmm2)
                        
                        if (temp0_1945 == 0)
                            zmm2 = zmm1
                            zmm0 = arg35
                            arg11 = __pcmpeqd_xmmdq_memdq(arg11, data_142d8f750) & not.o(zmm0)
                            
                            if ((temp0_1914 & 1) != 0)
                                zmm13[0] = arg11[0]
                        else
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f) ^ arg12
                            
                            if ((temp0_1945 & 1) != 0)
                                arg35[0] = (*arg15[0].q)[0]
                            
                            zmm3 = data_1434426c0
                            zmm7 = _mm_add_epi64(zmm1, zmm3)
                            zmm3 = _mm_add_epi64(arg15, zmm3)
                            arg12 = _mm_shuffle_epi32(zmm2, 0x50)
                            float temp0_1950[0x4] = _mm_shuffle_epi32(zmm2, 0xfa)
                            
                            if ((temp0_1945 & 2) != 0)
                                arg35 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg15, 0x4e)[0].q, arg35, 0), 
                                    arg35, 0xe2)
                            
                            arg15 &= arg12
                            arg12 &= not.o(zmm3)
                            zmm2 = zmm1 & temp0_1950
                            zmm4 = temp0_1950 & not.o(zmm7)
                            
                            if ((temp0_1945 & 4) != 0)
                                zmm0 = _mm_shuffle_ps(arg35, 
                                    _mm_shuffle_ps(*zmm1[0].q, arg35, 0x30), 0x84)
                                zmm7 = arg_80
                                arg15 |= arg12
                                zmm2 |= zmm4
                                
                                if ((temp0_1945 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(zmm0, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                            0x20), 
                                        0x24)
                            else
                                zmm7 = arg_80
                                zmm0 = arg35
                                arg15 |= arg12
                                zmm2 |= zmm4
                                
                                if ((temp0_1945 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(zmm0, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                            0x20), 
                                        0x24)
                            
                            arg12 = _mm_cmpeq_epi32(arg12, arg12)
                            arg11 = __pcmpeqd_xmmdq_memdq(arg11, data_142d8f750) & not.o(zmm0)
                            
                            if ((temp0_1914 & 1) != 0)
                                zmm13[0] = arg11[0]
                        
                        if ((temp0_1914 & 2) != 0)
                            zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm13, 1), zmm13, 0xe2)
                            
                            if ((temp0_1914 & 4) != 0)
                                goto label_140245f91
                            
                            goto label_140245d5c
                        
                        if ((temp0_1914 & 4) == 0)
                        label_140245d5c:
                            arg35 = zmm0
                            
                            if ((temp0_1914 & 8) != 0)
                                zmm13 =
                                    _mm_shuffle_ps(zmm13, _mm_shuffle_ps(arg11, zmm13, 0x23), 0x24)
                        else
                        label_140245f91:
                            zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(arg11, zmm13, 0x32), 0x84)
                            arg35 = zmm0
                            
                            if ((temp0_1914 & 8) != 0)
                                zmm13 =
                                    _mm_shuffle_ps(zmm13, _mm_shuffle_ps(arg11, zmm13, 0x23), 0x24)
                        
                        arg11 = zmm7
                        zmm3 = data_142fc95e0
                        zmm1 = zmm7 & zmm3
                        char temp0_1977 = _mm_movemask_ps(_mm_slli_epi32(
                            arg16 & _mm_cmpeq_epi32(zmm1, zmm3), 0x1f))
                        
                        if (temp0_1977 == 0)
                            arg13 = arg_70
                            arg16 = arg_130
                            zmm4 = arg_d0
                            zmm7 = arg_60
                            zmm9 = arg_90
                            zmm2 = arg_50
                            arg15 = zmm10
                            zmm10 = arg_a0
                            zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(arg33)
                            
                            if ((temp0_1914 & 1) != 0)
                                arg14[0] = zmm1[0]
                        else
                            if ((temp0_1977 & 1) != 0)
                                arg33[0] = (*arg15[0].q)[0]
                            
                            if ((temp0_1977 & 2) != 0)
                                arg33 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg15, 0x4e)[0].q, arg33, 0), 
                                    arg33, 0xe2)
                            
                            arg13 = arg_70
                            arg16 = arg_130
                            zmm4 = arg_d0
                            zmm7 = arg_60
                            zmm9 = arg_90
                            arg15 = zmm10
                            zmm10 = arg_a0
                            
                            if ((temp0_1977 & 4) != 0)
                                arg33 = _mm_shuffle_ps(arg33, 
                                    _mm_shuffle_ps(*zmm2[0].q, arg33, 0x30), 0x84)
                            
                            if ((temp0_1977 & 8) != 0)
                                arg33 = _mm_shuffle_ps(arg33, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, arg33, 
                                        0x20), 
                                    0x24)
                            
                            zmm2 = arg_50
                            zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(arg33)
                            
                            if ((temp0_1914 & 1) != 0)
                                arg14[0] = zmm1[0]
                        
                        if ((temp0_1914 & 2) != 0)
                            arg14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg14, 1), arg14, 0xe2)
                            
                            if ((temp0_1914 & 4) != 0)
                                goto label_140245fc1
                            
                            goto label_140245ec5
                        
                        if ((temp0_1914 & 4) == 0)
                        label_140245ec5:
                            
                            if ((temp0_1914 & 8) != 0)
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm1, arg14, 0x23), 0x24)
                        else
                        label_140245fc1:
                            arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm1, arg14, 0x32), 0x84)
                            
                            if ((temp0_1914 & 8) != 0)
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm1, arg14, 0x23), 0x24)
                
                zmm1 = zmm2 ^ arg12
                arg_140 = zmm1
                zmm0 = arg_b0 & not.o(zmm1)
                
                if (_mm_movemask_ps(zmm0) != 0)
                    if (temp0_1545 != 0)
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg11, 0x1f), 0x1f) & zmm7
                        zmm2 = zmm1 & arg16
                        uint32_t temp0_1994 = _mm_movemask_ps(zmm2)
                        arg16 = zx.o(0)
                        __return_addr.o = arg14
                        arg19 = zmm13
                        
                        if (temp0_1994 == 0)
                            zmm10 = arg_30
                            arg13 = zmm9
                            zmm13 = zx.o(0)
                            zmm3 = zx.o(0)
                            zmm12 = arg44
                        else
                            char rcx_44 = temp0_1994.b
                            
                            if ((rcx_44 & 1) != 0)
                                arg13 = arg_30
                                zmm0 = arg53
                                zmm0[0] = (*arg13[0].q)[0]
                                zmm7 = arg43
                                
                                if ((rcx_44 & 2) != 0)
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, zmm0, 
                                            0), 
                                        zmm0, 0xe2)
                            else
                                zmm7 = arg43
                                zmm0 = arg53
                                arg13 = arg_30
                                
                                if ((rcx_44 & 2) != 0)
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, zmm0, 
                                            0), 
                                        zmm0, 0xe2)
                            
                            zmm12 = arg44
                            
                            if ((rcx_44 & 4) == 0)
                                if ((rcx_44 & 8) != 0)
                                    goto label_1402460f1
                                
                                goto label_1402460a8
                            
                            zmm0 =
                                _mm_shuffle_ps(zmm0, _mm_shuffle_ps(*zmm9[0].q, zmm0, 0x30), 0x84)
                            char rbx_40
                            
                            if ((rcx_44 & 8) != 0)
                            label_1402460f1:
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, zmm0, 
                                        0x20), 
                                    0x24)
                                rbx_40 = _mm_movemask_ps(zmm1)
                                zmm13 = zx.o(0)
                                
                                if ((rbx_40 & 1) != 0)
                                    goto label_1402460b4
                                
                                goto label_140246101
                            
                        label_1402460a8:
                            rbx_40 = _mm_movemask_ps(zmm1)
                            zmm13 = zx.o(0)
                            
                            if ((rbx_40 & 1) == 0)
                            label_140246101:
                                zmm2 ^= arg12
                                
                                if ((rbx_40 & 2) != 0)
                                    zmm13 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm13, 1), zmm13, 0xe2)
                            else
                            label_1402460b4:
                                zmm13 = zx.o(0)
                                zmm13[0] = zmm0[0]
                                zmm2 ^= arg12
                                
                                if ((rbx_40 & 2) != 0)
                                    zmm13 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm13, 1), zmm13, 0xe2)
                            
                            zmm4 = __paddq_xmmdq_memdq(arg13, data_1434426c0)
                            zmm1 = _mm_shuffle_epi32(zmm2, 0x50)
                            arg14 = arg11
                            
                            if ((rbx_40 & 4) != 0)
                                zmm13 =
                                    _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm0, zmm13, 0x32), 0x84)
                            
                            zmm3 = zmm1 & not.o(zmm4)
                            
                            if ((rbx_40 & 8) != 0)
                                zmm13 =
                                    _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm0, zmm13, 0x23), 0x24)
                            
                            zmm4 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            arg11 = (arg13 & zmm1) | zmm3
                            
                            if ((rcx_44 & 1) != 0)
                                zmm7[0] = (*arg11[0].q)[0]
                            
                            zmm3 = zmm2 & not.o(zmm4)
                            arg12 = zmm9 & zmm2
                            
                            if ((rcx_44 & 2) != 0)
                                zmm7 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e)[0].q, zmm7, 0), 
                                    zmm7, 0xe2)
                                arg12 |= zmm3
                                
                                if ((rcx_44 & 4) != 0)
                                label_140246204:
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(*arg12[0].q, zmm7, 0x30), 0x84)
                                    
                                    if ((rcx_44 & 8) == 0)
                                        goto label_1402461b3
                                    
                                    goto label_14024621f
                            else
                                arg12 |= zmm3
                                
                                if ((rcx_44 & 4) != 0)
                                    goto label_140246204
                            
                            if ((rcx_44 & 8) == 0)
                            label_1402461b3:
                                zmm3 = zx.o(0)
                                
                                if ((rbx_40 & 1) == 0)
                                    goto label_14024622b
                                
                                goto label_1402461bc
                            
                        label_14024621f:
                            zmm7 = _mm_shuffle_ps(zmm7, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg12, 0x4e)[0].q, zmm7, 0x20), 
                                0x24)
                            zmm3 = zx.o(0)
                            
                            if ((rbx_40 & 1) != 0)
                            label_1402461bc:
                                zmm3 = zx.o(0)
                                zmm3[0] = zmm7[0]
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                                
                                if ((rbx_40 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm3, 1), zmm3, 0xe2)
                            else
                            label_14024622b:
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                                
                                if ((rbx_40 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm3, 1), zmm3, 0xe2)
                            
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            zmm4 = data_1434426c0
                            int32_t temp0_2036[0x4] = _mm_add_epi64(arg12, zmm4)
                            arg11 = _mm_add_epi64(arg11, zmm4)
                            arg43 = zmm7
                            arg53 = zmm0
                            
                            if ((rbx_40 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm7, zmm3, 0x32), 0x84)
                            
                            zmm7 = arg_60
                            zmm10 = arg13 & zmm1
                            zmm1 &= not.o(arg11)
                            
                            if ((rbx_40 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg43, zmm3, 0x23), 0x24)
                            
                            arg12 = _mm_cmpeq_epi32(temp0_2036, temp0_2036)
                            arg11 = arg14
                            zmm10 |= zmm1
                            arg13 = (zmm9 & zmm2) | (zmm2 & not.o(temp0_2036))
                        
                        zmm1 = data_1434422d0
                        zmm2 = _mm_cmpeq_epi32(arg11 & zmm1, zmm1) & zmm7
                        zmm1 = arg_b0 & not.o(zmm2)
                        char temp0_2044 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_2044 == 0)
                            zmm2 = arg11
                            arg11 = zx.o(0)
                        else
                            if ((temp0_2044 & 1) != 0)
                                zmm0 = *zmm10[0].q
                                arg29[0] = zmm0[0]
                                
                                if ((temp0_2044 & 2) != 0)
                                label_1402464ae:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e)[0].q, arg29, 
                                            0), 
                                        arg29, 0xe2)
                                    arg29 = zmm0
                                    
                                    if ((temp0_2044 & 4) == 0)
                                        goto label_14024631a
                                    
                                    goto label_1402464d4
                            else if ((temp0_2044 & 2) != 0)
                                goto label_1402464ae
                            
                            if ((temp0_2044 & 4) != 0)
                            label_1402464d4:
                                zmm0 = _mm_shuffle_ps(*arg13[0].q, arg29, 0x30)
                                arg29 = _mm_shuffle_ps(arg29, zmm0, 0x84)
                                zmm1 ^= arg12
                                
                                if ((temp0_2044 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, 
                                        arg29, 0x20)
                                    arg29 = _mm_shuffle_ps(arg29, zmm0, 0x24)
                            else
                            label_14024631a:
                                zmm1 ^= arg12
                                
                                if ((temp0_2044 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, 
                                        arg29, 0x20)
                                    arg29 = _mm_shuffle_ps(arg29, zmm0, 0x24)
                            
                            float temp0_2048[0x4] = _mm_shuffle_epi32(zmm1, 0x50)
                            char temp0_2049 = _mm_movemask_ps(zmm2)
                            arg16 = zx.o(0)
                            
                            if ((temp0_2049 & 1) != 0)
                                arg16 = zx.o(0)
                                arg16[0] = arg29[0]
                            
                            zmm7 = _mm_slli_epi32(temp0_2048, 0x1f)
                            
                            if ((temp0_2049 & 2) != 0)
                                arg16 = _mm_shuffle_ps(_mm_shuffle_ps(arg29, arg16, 1), arg16, 0xe2)
                            
                            zmm2 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm4 = __paddq_xmmdq_memdq(zmm10, data_1434426c0)
                            zmm7 = _mm_srai_epi32(zmm7, 0x1f)
                            
                            if ((temp0_2049 & 4) != 0)
                                arg16 =
                                    _mm_shuffle_ps(arg16, _mm_shuffle_ps(arg29, arg16, 0x32), 0x84)
                            
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            zmm10 &= zmm7
                            
                            if ((temp0_2049 & 8) != 0)
                                arg16 =
                                    _mm_shuffle_ps(arg16, _mm_shuffle_ps(arg29, arg16, 0x23), 0x24)
                            
                            arg11 = __paddq_xmmdq_memdq(arg13, data_1434426c0)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = (zmm7 & not.o(zmm4)) | zmm10
                            
                            if ((temp0_2044 & 1) != 0)
                                zmm12[0] = (*zmm1[0].q)[0]
                            
                            zmm4 = zmm2 & not.o(arg11)
                            arg13 &= zmm2
                            
                            if ((temp0_2044 & 2) != 0)
                                zmm12 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm12, 0), 
                                    zmm12, 0xe2)
                                zmm4 |= arg13
                                
                                if ((temp0_2044 & 4) != 0)
                                label_14024652e:
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(*zmm4[0].q, zmm12, 0x30), 0x84)
                                    
                                    if ((temp0_2044 & 8) == 0)
                                        goto label_14024643c
                                    
                                    goto label_14024654f
                            else
                                zmm4 |= arg13
                                
                                if ((temp0_2044 & 4) != 0)
                                    goto label_14024652e
                            
                            if ((temp0_2044 & 8) == 0)
                            label_14024643c:
                                arg11 = zx.o(0)
                                
                                if ((temp0_2049 & 1) == 0)
                                    goto label_140246560
                                
                                goto label_140246449
                            
                        label_14024654f:
                            zmm12 = _mm_shuffle_ps(zmm12, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q, zmm12, 0x20), 
                                0x24)
                            arg11 = zx.o(0)
                            
                            if ((temp0_2049 & 1) != 0)
                            label_140246449:
                                arg11 = zx.o(0)
                                arg11[0] = zmm12[0]
                                
                                if ((temp0_2049 & 2) != 0)
                                    arg11 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg11, 1), arg11, 0xe2)
                            else
                            label_140246560:
                                
                                if ((temp0_2049 & 2) != 0)
                                    arg11 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg11, 1), arg11, 0xe2)
                            
                            arg12 = data_1434426c0
                            zmm4 = _mm_add_epi64(zmm4, arg12)
                            zmm1 = _mm_add_epi64(zmm1, arg12)
                            
                            if ((temp0_2049 & 4) != 0)
                                arg11 =
                                    _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm12, arg11, 0x32), 0x84)
                            
                            if ((temp0_2049 & 8) != 0)
                                arg11 =
                                    _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm12, arg11, 0x23), 0x24)
                            
                            zmm10 |= zmm7 & not.o(zmm1)
                            arg13 |= zmm2 & not.o(zmm4)
                            zmm2 = arg_80
                            zmm7 = arg_60
                        
                        zmm9 = zmm2
                        zmm1 = data_142fc95e0
                        zmm2 = _mm_cmpeq_epi32(zmm2 & zmm1, zmm1) & zmm7
                        zmm1 = arg_b0 & not.o(zmm2)
                        char temp0_2085 = _mm_movemask_ps(zmm1)
                        arg44 = zmm12
                        
                        if (temp0_2085 == 0)
                            zmm12 = zx.o(0)
                            zmm1 = zx.o(0)
                            arg13 = arg_70
                            zmm10 = arg_a0
                        else
                            if ((temp0_2085 & 1) != 0)
                                arg12 = arg30
                                arg12[0] = (*zmm10[0].q)[0]
                                arg30 = arg12
                                
                                if ((temp0_2085 & 2) != 0)
                                label_140246779:
                                    arg12 = arg30
                                    arg30 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e)[0].q, arg12, 
                                            0), 
                                        arg12, 0xe2)
                                    
                                    if ((temp0_2085 & 4) == 0)
                                        goto label_140246623
                                    
                                    goto label_1402467a3
                            else if ((temp0_2085 & 2) != 0)
                                goto label_140246779
                            
                            if ((temp0_2085 & 4) != 0)
                            label_1402467a3:
                                arg12 = arg30
                                arg30 = _mm_shuffle_ps(arg12, 
                                    _mm_shuffle_ps(*arg13[0].q, arg12, 0x30), 0x84)
                                zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                                
                                if ((temp0_2085 & 8) != 0)
                                    arg12 = arg30
                                    arg30 = _mm_shuffle_ps(arg12, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, arg12, 
                                            0x20), 
                                        0x24)
                            else
                            label_140246623:
                                zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                                
                                if ((temp0_2085 & 8) != 0)
                                    arg12 = arg30
                                    arg30 = _mm_shuffle_ps(arg12, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, arg12, 
                                            0x20), 
                                        0x24)
                            
                            float temp0_2090[0x4] = _mm_shuffle_epi32(zmm1, 0x50)
                            char temp0_2091 = _mm_movemask_ps(zmm2)
                            zmm12 = zx.o(0)
                            
                            if ((temp0_2091 & 1) != 0)
                                zmm12 = zx.o(0)
                                zmm12[0] = arg30[0]
                            
                            zmm4 = _mm_slli_epi32(temp0_2090, 0x1f)
                            
                            if ((temp0_2091 & 2) != 0)
                                zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(arg30, zmm12, 1), zmm12, 0xe2)
                            
                            zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm2 = __paddq_xmmdq_memdq(zmm10, data_1434426c0)
                            zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                            
                            if ((temp0_2091 & 4) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg30, zmm12, 0x32), 0x84)
                            
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            zmm10 &= zmm4
                            zmm4 &= not.o(zmm2)
                            
                            if ((temp0_2091 & 8) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg30, zmm12, 0x23), 0x24)
                            
                            zmm2 = __paddq_xmmdq_memdq(arg13, data_1434426c0)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            zmm10 |= zmm4
                            
                            if ((temp0_2085 & 1) != 0)
                                arg12 = arg54
                                arg12[0] = (*zmm10[0].q)[0]
                                zmm4 = arg12
                                arg13 &= zmm1
                                zmm1 &= not.o(zmm2)
                                
                                if ((temp0_2085 & 2) != 0)
                                    zmm4 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e)[0].q, zmm4, 
                                            0), 
                                        zmm4, 0xe2)
                            else
                                zmm4 = arg54
                                arg13 &= zmm1
                                zmm1 &= not.o(zmm2)
                                
                                if ((temp0_2085 & 2) != 0)
                                    zmm4 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e)[0].q, zmm4, 
                                            0), 
                                        zmm4, 0xe2)
                            
                            zmm10 = arg_a0
                            arg13 |= zmm1
                            
                            if ((temp0_2085 & 4) == 0)
                                if ((temp0_2085 & 8) != 0)
                                    goto label_14024688f
                                
                                goto label_14024682a
                            
                            zmm4 =
                                _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg13[0].q, zmm4, 0x30), 0x84)
                            
                            if ((temp0_2085 & 8) != 0)
                            label_14024688f:
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, zmm4, 
                                        0x20), 
                                    0x24)
                                arg13 = arg_70
                                zmm1 = zx.o(0)
                                
                                if ((temp0_2091 & 1) != 0)
                                    goto label_14024683a
                                
                                goto label_1402468a2
                            
                        label_14024682a:
                            arg13 = arg_70
                            zmm1 = zx.o(0)
                            
                            if ((temp0_2091 & 1) == 0)
                            label_1402468a2:
                                
                                if ((temp0_2091 & 2) != 0)
                                label_1402468b2:
                                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 1), zmm1, 0xe2)
                                    
                                    if ((temp0_2091 & 4) != 0)
                                        goto label_140246853
                                    
                                    goto label_1402468bd
                            else
                            label_14024683a:
                                zmm1 = zx.o(0)
                                zmm1[0] = zmm4[0]
                                
                                if ((temp0_2091 & 2) != 0)
                                    goto label_1402468b2
                            
                            if ((temp0_2091 & 4) == 0)
                            label_1402468bd:
                                arg54 = zmm4
                                
                                if ((temp0_2091 & 8) != 0)
                                    zmm1 =
                                        _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x23), 0x24)
                            else
                            label_140246853:
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x84)
                                arg54 = zmm4
                                
                                if ((temp0_2091 & 8) != 0)
                                    zmm1 =
                                        _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x23), 0x24)
                        
                        zmm2 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), arg_110)
                        zmm4 = data_1434426c0
                        arg12 = zmm4
                        zmm2 = _mm_add_epi64(zmm2, zmm4)
                        zmm4 = _mm_shuffle_epi32(arg_420, 0x50) & zmm2
                        zmm2 = _mm_add_epi64(
                            __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_e0, arg_1a0), arg_160), 
                            arg12)
                        arg12 = _mm_shuffle_epi32(arg_420, 0xfa) & zmm2
                        int64_t rax_477 = zmm4[0].q
                        int64_t rcx_47 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        int64_t rbx_43 = arg12[0].q
                        int64_t rsi_10 = _mm_shuffle_epi32(arg12, 0x4e)[0].q
                        zmm2 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_477)), 
                                zx.o(*(arg4 + rcx_47))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbx_43)), zx.o(*(arg4 + rsi_10))[0].q)[
                            0].q)
                        zmm4 = zmm2
                        float temp0_2142[0x4] = _mm_add_ps(zmm13, 
                            _mm_mul_ps(zmm3, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        arg12 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm2 = data_143442440
                        float temp0_2145[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg12, zmm2))
                        arg12 = data_143442690
                        float temp0_2147[0x4] = _mm_mul_ps(arg11, _mm_div_ps(temp0_2145, arg12))
                        float temp0_2151[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), zmm2)), arg12)
                        char temp43_1 = temp0_1545 & 1
                        
                        if (temp43_1 != 0)
                            arg15[0] = temp0_2142[0]
                        
                        float temp0_2152[0x4] = _mm_mul_ps(zmm1, temp0_2151)
                        float temp0_2153[0x4] = _mm_add_ps(arg16, temp0_2147)
                        arg12 = _mm_cmpeq_epi32(arg12, arg12)
                        zmm4 = arg_d0
                        
                        if (temp43_1 != 0)
                            arg19[0] = temp0_2153[0]
                            arg11 = zmm9
                            zmm12 = _mm_add_ps(zmm12, temp0_2152)
                            zmm9 = arg_90
                            
                            if (temp43_1 != 0)
                                goto label_140246d49
                            
                            goto label_140246a34
                        
                        arg11 = zmm9
                        zmm12 = _mm_add_ps(zmm12, temp0_2152)
                        zmm9 = arg_90
                        bool cond:184_1
                        bool cond:185_1
                        bool cond:197_1
                        bool cond:198_1
                        
                        if (temp43_1 != 0)
                        label_140246d49:
                            zmm0 = __return_addr.o
                            zmm0[0] = zmm12[0]
                            __return_addr.o = zmm0
                            char temp61_1 = temp0_1545 & 2
                            cond:184_1 = temp61_1 == 0
                            cond:185_1 = temp61_1 != 0
                            cond:197_1 = temp61_1 == 0
                            cond:198_1 = temp61_1 != 0
                            
                            if (temp61_1 != 0)
                                goto label_140246a4b
                            
                            goto label_140246d5f
                        
                    label_140246a34:
                        char temp60_1 = temp0_1545 & 2
                        cond:184_1 = temp60_1 == 0
                        cond:185_1 = temp60_1 != 0
                        cond:197_1 = temp60_1 == 0
                        cond:198_1 = temp60_1 != 0
                        
                        if (temp60_1 == 0)
                        label_140246d5f:
                            
                            if (not(cond:184_1))
                            label_140246d69:
                                arg14 = arg19
                                arg19 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_2153, arg14, 1), arg14, 
                                    0xe2)
                                
                                if (cond:198_1)
                                    goto label_140246a5f
                                
                                goto label_140246d8a
                        else
                        label_140246a4b:
                            arg15 =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_2142, arg15, 1), arg15, 0xe2)
                            
                            if (cond:185_1)
                                goto label_140246d69
                        
                        bool cond:249_1
                        bool cond:250_1
                        bool cond:263_1
                        bool cond:264_1
                        
                        if (not(cond:197_1))
                        label_140246a5f:
                            zmm0 = __return_addr.o
                            __return_addr.o =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm0, 1), zmm0, 0xe2)
                            char temp85_1 = temp0_1545 & 4
                            cond:249_1 = temp85_1 == 0
                            cond:250_1 = temp85_1 != 0
                            cond:263_1 = temp85_1 == 0
                            cond:264_1 = temp85_1 != 0
                            
                            if (temp85_1 != 0)
                                goto label_140246d9c
                            
                            goto label_140246a78
                        
                    label_140246d8a:
                        char temp84_1 = temp0_1545 & 4
                        cond:249_1 = temp84_1 == 0
                        cond:250_1 = temp84_1 != 0
                        cond:263_1 = temp84_1 == 0
                        cond:264_1 = temp84_1 != 0
                        
                        if (temp84_1 == 0)
                        label_140246a78:
                            
                            if (not(cond:249_1))
                            label_140246a92:
                                arg19 = _mm_shuffle_ps(arg19, 
                                    _mm_shuffle_ps(temp0_2153, arg19, 0x32), 0x84)
                                
                                if (cond:264_1)
                                    goto label_140246db1
                                
                                goto label_140246aa0
                        else
                        label_140246d9c:
                            arg15 =
                                _mm_shuffle_ps(arg15, _mm_shuffle_ps(temp0_2142, arg15, 0x32), 0x84)
                            
                            if (cond:250_1)
                                goto label_140246a92
                        
                        bool cond:307_1
                        bool cond:308_1
                        bool cond:320_1
                        bool cond:321_1
                        
                        if (not(cond:263_1))
                        label_140246db1:
                            zmm0 = __return_addr.o
                            __return_addr.o =
                                _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm12, zmm0, 0x32), 0x84)
                            char temp109_1 = temp0_1545 & 8
                            cond:307_1 = temp109_1 == 0
                            cond:308_1 = temp109_1 != 0
                            cond:320_1 = temp109_1 == 0
                            cond:321_1 = temp109_1 != 0
                            
                            if (temp109_1 != 0)
                                goto label_140246aae
                            
                            goto label_140246dca
                        
                    label_140246aa0:
                        char temp108_1 = temp0_1545 & 8
                        cond:307_1 = temp108_1 == 0
                        cond:308_1 = temp108_1 != 0
                        cond:320_1 = temp108_1 == 0
                        cond:321_1 = temp108_1 != 0
                        
                        if (temp108_1 != 0)
                        label_140246aae:
                            arg15 =
                                _mm_shuffle_ps(arg15, _mm_shuffle_ps(temp0_2142, arg15, 0x23), 0x24)
                            zmm13 = arg19
                            arg14 = __return_addr.o
                            
                            if (cond:308_1)
                                goto label_140246de3
                            
                            goto label_140246ac7
                        
                    label_140246dca:
                        zmm13 = arg19
                        arg14 = __return_addr.o
                        
                        if (cond:307_1)
                        label_140246ac7:
                            arg16 = arg_130
                            
                            if (not(cond:320_1))
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm12, arg14, 0x23), 0x24)
                        else
                        label_140246de3:
                            zmm13 =
                                _mm_shuffle_ps(zmm13, _mm_shuffle_ps(temp0_2153, zmm13, 0x23), 0x24)
                            arg16 = arg_130
                            
                            if (cond:321_1)
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm12, arg14, 0x23), 0x24)
                        
                        zmm12 = arg22
                    
                    zmm0 = zmm7 ^ arg_140
                    
                    if (_mm_movemask_ps(arg_b0 & not.o(zmm0)) == 0)
                        zmm2 = arg_50
                    else
                        __return_addr.o = arg14
                        arg13 = __pcmpeqd_xmmdq_memdq(arg20, data_1434422d0)
                        arg14 = arg_b0 & not.o(arg13)
                        char temp0_2168 = _mm_movemask_ps(arg14)
                        
                        if (temp0_2168 == 0)
                            arg14 = __return_addr.o
                            arg16 = arg_130
                        else
                            zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg11, 0x1f), 0x1f)
                            zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg14, 0x1f), 0x1f) & zmm1
                            zmm10 = arg15
                            char rbx_45
                            
                            if (_mm_movemask_ps(zmm2) == 0)
                                arg15 = arg_310
                                zmm1 &= zmm2
                                rbx_45 = temp0_2168
                                
                                if ((rbx_45 & 1) != 0)
                                    zmm10[0] = zmm1[0]
                            else
                                zmm3 = data_1434426b0
                                zmm4 = _mm_add_epi64(arg_310, zmm3)
                                arg12 = zmm2 ^ _mm_cmpeq_epi32(arg11, arg11)
                                float temp0_2176[0x4] = _mm_shuffle_epi32(arg12, 0x50)
                                arg15 = (arg_310 & temp0_2176) | (temp0_2176 & not.o(zmm4))
                                zmm4 = _mm_add_epi64(arg_210, zmm3)
                                arg12 = _mm_shuffle_epi32(arg12, 0xfa)
                                arg_210 = (arg_210 & arg12) | (arg12 & not.o(zmm4))
                                zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), 
                                    arg_110)
                                int32_t temp0_2182[0x4] = __paddq_xmmdq_memdq(
                                    __paddq_xmmdq_memdq(arg_e0, arg_1a0), arg_160)
                                zmm3 = data_1434426c0
                                zmm4 = _mm_add_epi64(zmm4, zmm3)
                                zmm7 = _mm_shuffle_epi32(zmm2, 0x50) & zmm4
                                arg12 = _mm_add_epi64(temp0_2182, zmm3)
                                zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & arg12
                                int64_t rax_480 = zmm7[0].q
                                int64_t rbp_42 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                                int64_t rbx_44 = zmm2[0].q
                                int64_t rsi_11 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                                zmm1 &= _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(
                                                __pinsrw_xmmdq_memw_immb(zx.o(0), 
                                                    *(arg4 + rax_480), 0), 
                                                *(arg4 + rbp_42), 2), 
                                            *(arg4 + rbx_44), 4), 
                                        *(arg4 + rsi_11), 6), 
                                    data_143442b40))
                                rbx_45 = temp0_2168
                                
                                if ((rbx_45 & 1) != 0)
                                    zmm10[0] = zmm1[0]
                            
                            zmm7 = arg_60
                            arg12 = _mm_cmpeq_epi32(arg12, arg12)
                            
                            if ((rbx_45 & 2) != 0)
                                zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm10, 1), zmm10, 0xe2)
                                
                                if ((rbx_45 & 4) != 0)
                                    goto label_140246e0e
                                
                                goto label_140246cbc
                            
                            if ((rbx_45 & 4) == 0)
                            label_140246cbc:
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm10 = _mm_shuffle_ps(zmm10, 
                                        _mm_shuffle_ps(zmm1, zmm10, 0x23), 0x24)
                            else
                            label_140246e0e:
                                zmm10 =
                                    _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm1, zmm10, 0x32), 0x84)
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm10 = _mm_shuffle_ps(zmm10, 
                                        _mm_shuffle_ps(zmm1, zmm10, 0x23), 0x24)
                            
                            zmm2 = data_1434422d0
                            zmm1 = arg_80 & zmm2
                            zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & arg14, 0x1f)
                            char temp0_2202 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_2202 == 0)
                                zmm3 = arg_80
                                arg11 = arg40
                            else
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                
                                if ((temp0_2202 & 1) != 0)
                                    arg11 = arg40
                                    arg11[0] = zx.o(*arg15[0].q)[0]
                                    zmm2 ^= arg12
                                    
                                    if ((temp0_2202 & 2) != 0)
                                        arg11 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(arg15, 0x4e)[0].q), arg11, 
                                                0), 
                                            arg11, 0xe2)
                                else
                                    arg11 = arg40
                                    zmm2 ^= arg12
                                    
                                    if ((temp0_2202 & 2) != 0)
                                        arg11 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(arg15, 0x4e)[0].q), arg11, 
                                                0), 
                                            arg11, 0xe2)
                                
                                zmm3 = data_1434426b0
                                zmm7 = _mm_add_epi64(arg_210, zmm3)
                                int32_t temp0_2219[0x4] = _mm_add_epi64(arg15, zmm3)
                                float temp0_2220[0x4] = _mm_shuffle_epi32(zmm2, 0x50)
                                zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                                
                                if ((temp0_2202 & 4) != 0)
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(zx.o(*arg_210[0].q), arg11, 0x30), 0x84)
                                
                                arg12 = arg_210 & zmm2
                                zmm2 &= not.o(zmm7)
                                
                                if ((temp0_2202 & 8) != 0)
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg_210, 0x4e)[0].q), arg11, 
                                            0x20), 
                                        0x24)
                                
                                zmm3 = arg_80
                                zmm7 = arg_60
                                arg15 = (arg15 & temp0_2220) | (temp0_2220 & not.o(temp0_2219))
                                arg12 |= zmm2
                                zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(arg11, data_143442cd0), data_143442b40))
                                arg_210 = arg12
                                arg12 = _mm_cmpeq_epi32(arg12, arg12)
                            
                            zmm4 = arg_d0
                            zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(zmm2)
                            
                            if ((rbx_45 & 1) != 0)
                                zmm13[0] = zmm1[0]
                                
                                if ((rbx_45 & 2) != 0)
                                    goto label_140246fb0
                            else if ((rbx_45 & 2) != 0)
                            label_140246fb0:
                                zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm13, 1), zmm13, 0xe2)
                                
                                if ((rbx_45 & 4) != 0)
                                    goto label_140246f8a
                                
                                goto label_140246fbc
                            
                            if ((rbx_45 & 4) == 0)
                            label_140246fbc:
                                arg40 = arg11
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm13 = _mm_shuffle_ps(zmm13, 
                                        _mm_shuffle_ps(zmm1, zmm13, 0x23), 0x24)
                            else
                            label_140246f8a:
                                zmm13 =
                                    _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm1, zmm13, 0x32), 0x84)
                                arg40 = arg11
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm13 = _mm_shuffle_ps(zmm13, 
                                        _mm_shuffle_ps(zmm1, zmm13, 0x23), 0x24)
                            
                            arg11 = zmm3
                            zmm2 = data_142fc95e0
                            zmm1 = zmm3 & zmm2
                            zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & arg14, 0x1f)
                            char temp0_2240 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_2240 == 0)
                                arg14 = __return_addr.o
                                arg16 = arg_130
                                arg15 = zmm10
                                zmm10 = arg_a0
                                zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(zmm2)
                                
                                if ((rbx_45 & 1) != 0)
                                    arg14[0] = zmm1[0]
                            else
                                if ((temp0_2240 & 1) != 0)
                                    arg51[0] = zx.o(*arg15[0].q)[0]
                                    zmm2 = arg51
                                    
                                    if ((temp0_2240 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(arg15, 0x4e)[0].q), zmm2, 
                                                0), 
                                            zmm2, 0xe2)
                                else
                                    zmm2 = arg51
                                    
                                    if ((temp0_2240 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(arg15, 0x4e)[0].q), zmm2, 
                                                0), 
                                            zmm2, 0xe2)
                                
                                arg14 = __return_addr.o
                                arg16 = arg_130
                                arg15 = zmm10
                                zmm10 = arg_a0
                                
                                if ((temp0_2240 & 4) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*arg_210[0].q), zmm2, 0x30), 0x84)
                                
                                if ((temp0_2240 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(arg_210, 0x4e)[0].q), 
                                            zmm2, 0x20), 
                                        0x24)
                                
                                arg51 = zmm2
                                float temp0_2252[0x4] = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm2, data_143442cd0), data_143442b40))
                                zmm1 =
                                    __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(temp0_2252)
                                
                                if ((rbx_45 & 1) != 0)
                                    arg14[0] = zmm1[0]
                            
                            if ((rbx_45 & 2) != 0)
                                arg14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg14, 1), arg14, 0xe2)
                                
                                if ((rbx_45 & 4) != 0)
                                    goto label_140247259
                                
                                goto label_14024714d
                            
                            if ((rbx_45 & 4) == 0)
                            label_14024714d:
                                
                                if ((rbx_45 & 8) != 0)
                                    arg14 = _mm_shuffle_ps(arg14, 
                                        _mm_shuffle_ps(zmm1, arg14, 0x23), 0x24)
                            else
                            label_140247259:
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm1, arg14, 0x32), 0x84)
                                
                                if ((rbx_45 & 8) != 0)
                                    arg14 = _mm_shuffle_ps(arg14, 
                                        _mm_shuffle_ps(zmm1, arg14, 0x23), 0x24)
                        
                        zmm1 = arg_b0 & not.o(zmm0 ^ arg13)
                        
                        if (_mm_movemask_ps(zmm1) == 0)
                            arg13 = arg_70
                            zmm2 = arg_50
                        else
                            zmm0 = __pcmpeqd_xmmdq_memdq(arg20, data_143442ad0)
                            char temp0_2260 = _mm_movemask_ps(arg_b0 & not.o(zmm0))
                            
                            if (temp0_2260 == 0)
                                arg13 = arg_70
                            else
                                char temp41_1 = temp0_2260 & 1
                                
                                if (temp41_1 == 0)
                                    arg13 = arg_70
                                    
                                    if (temp41_1 != 0)
                                    label_14024727c:
                                        zmm13[0] = 0
                                        
                                        if (temp41_1 != 0)
                                            goto label_1402471c7
                                        
                                        goto label_140247287
                                else
                                    arg15[0] = 0
                                    arg13 = arg_70
                                    
                                    if (temp41_1 != 0)
                                        goto label_14024727c
                                
                                bool cond:166_1
                                bool cond:167_1
                                bool cond:182_1
                                bool cond:183_1
                                
                                if (temp41_1 != 0)
                                label_1402471c7:
                                    arg14[0] = 0
                                    char temp57_1 = temp0_2260 & 2
                                    cond:166_1 = temp57_1 == 0
                                    cond:167_1 = temp57_1 != 0
                                    cond:182_1 = temp57_1 == 0
                                    cond:183_1 = temp57_1 != 0
                                    
                                    if (temp57_1 != 0)
                                        goto label_14024729d
                                    
                                    goto label_1402471d5
                                
                            label_140247287:
                                char temp56_1 = temp0_2260 & 2
                                cond:166_1 = temp56_1 == 0
                                cond:167_1 = temp56_1 != 0
                                cond:182_1 = temp56_1 == 0
                                cond:183_1 = temp56_1 != 0
                                
                                if (temp56_1 == 0)
                                label_1402471d5:
                                    
                                    if (not(cond:166_1))
                                    label_1402471e8:
                                        zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm13, 0), 
                                            zmm13, 0xe2)
                                        
                                        if (cond:183_1)
                                            goto label_1402472ba
                                        
                                        goto label_1402471f2
                                else
                                label_14024729d:
                                    arg15 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg15, 0), 
                                        arg15, 0xe2)
                                    
                                    if (cond:167_1)
                                        goto label_1402471e8
                                
                                bool cond:223_1
                                bool cond:224_1
                                bool cond:247_1
                                bool cond:248_1
                                
                                if (not(cond:182_1))
                                label_1402472ba:
                                    arg14 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg14, 0), 
                                        arg14, 0xe2)
                                    char temp80_1 = temp0_2260 & 4
                                    cond:223_1 = temp80_1 == 0
                                    cond:224_1 = temp80_1 != 0
                                    cond:247_1 = temp80_1 == 0
                                    cond:248_1 = temp80_1 != 0
                                    
                                    if (temp80_1 != 0)
                                        goto label_140247203
                                    
                                    goto label_1402472c7
                                
                            label_1402471f2:
                                char temp79_1 = temp0_2260 & 4
                                cond:223_1 = temp79_1 == 0
                                cond:224_1 = temp79_1 != 0
                                cond:247_1 = temp79_1 == 0
                                cond:248_1 = temp79_1 != 0
                                
                                if (temp79_1 == 0)
                                label_1402472c7:
                                    
                                    if (not(cond:223_1))
                                    label_1402472d5:
                                        zmm13 = _mm_shuffle_ps(zmm13, 
                                            _mm_shuffle_ps(zx.o(0), zmm13, 0x30), 0x84)
                                        
                                        if (cond:248_1)
                                            goto label_14024721c
                                        
                                        goto label_1402472e0
                                else
                                label_140247203:
                                    arg15 = _mm_shuffle_ps(arg15, 
                                        _mm_shuffle_ps(zx.o(0), arg15, 0x30), 0x84)
                                    
                                    if (cond:224_1)
                                        goto label_1402472d5
                                
                                bool cond:286_1
                                bool cond:287_1
                                bool cond:305_1
                                bool cond:306_1
                                
                                if (not(cond:247_1))
                                label_14024721c:
                                    arg14 = _mm_shuffle_ps(arg14, 
                                        _mm_shuffle_ps(zx.o(0), arg14, 0x30), 0x84)
                                    char temp103_1 = temp0_2260 & 8
                                    cond:286_1 = temp103_1 == 0
                                    cond:287_1 = temp103_1 != 0
                                    cond:305_1 = temp103_1 == 0
                                    cond:306_1 = temp103_1 == 0
                                    
                                    if (temp103_1 != 0)
                                        goto label_1402472f1
                                    
                                    goto label_14024722a
                                
                            label_1402472e0:
                                char temp102_1 = temp0_2260 & 8
                                cond:286_1 = temp102_1 == 0
                                cond:287_1 = temp102_1 != 0
                                cond:305_1 = temp102_1 == 0
                                cond:306_1 = temp102_1 == 0
                                
                                if (temp102_1 != 0)
                                label_1402472f1:
                                    arg15 = _mm_shuffle_ps(arg15, 
                                        _mm_shuffle_ps(zx.o(0), arg15, 0x20), 0x24)
                                    
                                    if (cond:287_1)
                                        goto label_140247238
                                    
                                    goto label_1402472fc
                                
                            label_14024722a:
                                
                                if (cond:286_1)
                                label_1402472fc:
                                    
                                    if (not(cond:305_1))
                                        arg14 = _mm_shuffle_ps(arg14, 
                                            _mm_shuffle_ps(zx.o(0), arg14, 0x20), 0x24)
                                else
                                label_140247238:
                                    zmm13 = _mm_shuffle_ps(zmm13, 
                                        _mm_shuffle_ps(zx.o(0), zmm13, 0x20), 0x24)
                                    
                                    if (not(cond:306_1))
                                        arg14 = _mm_shuffle_ps(arg14, 
                                            _mm_shuffle_ps(zx.o(0), arg14, 0x20), 0x24)
                            
                            zmm2 = arg_50
                            char temp0_2391 =
                                _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                            
                            if (temp0_2391 != 0)
                                char temp47_1 = temp0_2391 & 1
                                
                                if (temp47_1 != 0)
                                    arg15[0] = 0
                                    
                                    if (temp47_1 != 0)
                                        goto label_140247bd8
                                else if (temp47_1 != 0)
                                label_140247bd8:
                                    zmm13[0] = 0
                                    
                                    if (temp47_1 != 0)
                                        goto label_140247b75
                                    
                                    goto label_140247bdf
                                
                                bool cond:180_1
                                bool cond:181_1
                                bool cond:195_1
                                bool cond:196_1
                                
                                if (temp47_1 != 0)
                                label_140247b75:
                                    arg14[0] = 0
                                    char temp70_1 = temp0_2391 & 2
                                    cond:180_1 = temp70_1 == 0
                                    cond:181_1 = temp70_1 != 0
                                    cond:195_1 = temp70_1 == 0
                                    cond:196_1 = temp70_1 != 0
                                    
                                    if (temp70_1 != 0)
                                        goto label_140247bf1
                                    
                                    goto label_140247b7f
                                
                            label_140247bdf:
                                char temp69_1 = temp0_2391 & 2
                                cond:180_1 = temp69_1 == 0
                                cond:181_1 = temp69_1 != 0
                                cond:195_1 = temp69_1 == 0
                                cond:196_1 = temp69_1 != 0
                                
                                if (temp69_1 == 0)
                                label_140247b7f:
                                    
                                    if (not(cond:180_1))
                                    label_140247b8e:
                                        zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm13, 0), 
                                            zmm13, 0xe2)
                                        
                                        if (cond:196_1)
                                            goto label_140247c06
                                        
                                        goto label_140247b94
                                else
                                label_140247bf1:
                                    arg15 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg15, 0), 
                                        arg15, 0xe2)
                                    
                                    if (cond:181_1)
                                        goto label_140247b8e
                                
                                bool cond:245_1
                                bool cond:246_1
                                bool cond:261_1
                                bool cond:262_1
                                
                                if (not(cond:195_1))
                                label_140247c06:
                                    arg14 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg14, 0), 
                                        arg14, 0xe2)
                                    char temp94_1 = temp0_2391 & 4
                                    cond:245_1 = temp94_1 == 0
                                    cond:246_1 = temp94_1 != 0
                                    cond:261_1 = temp94_1 == 0
                                    cond:262_1 = temp94_1 != 0
                                    
                                    if (temp94_1 != 0)
                                        goto label_140247ba1
                                    
                                    goto label_140247c0f
                                
                            label_140247b94:
                                char temp93_1 = temp0_2391 & 4
                                cond:245_1 = temp93_1 == 0
                                cond:246_1 = temp93_1 != 0
                                cond:261_1 = temp93_1 == 0
                                cond:262_1 = temp93_1 != 0
                                
                                if (temp93_1 == 0)
                                label_140247c0f:
                                    
                                    if (not(cond:245_1))
                                    label_140247c19:
                                        zmm13 = _mm_shuffle_ps(zmm13, 
                                            _mm_shuffle_ps(zx.o(0), zmm13, 0x30), 0x84)
                                        
                                        if (cond:262_1)
                                            goto label_140247bb2
                                        
                                        goto label_140247c20
                                else
                                label_140247ba1:
                                    arg15 = _mm_shuffle_ps(arg15, 
                                        _mm_shuffle_ps(zx.o(0), arg15, 0x30), 0x84)
                                    
                                    if (cond:246_1)
                                        goto label_140247c19
                                
                                bool cond:303_1
                                bool cond:304_1
                                bool cond:318_1
                                bool cond:319_1
                                
                                if (not(cond:261_1))
                                label_140247bb2:
                                    arg14 = _mm_shuffle_ps(arg14, 
                                        _mm_shuffle_ps(zx.o(0), arg14, 0x30), 0x84)
                                    char temp119_1 = temp0_2391 & 8
                                    cond:303_1 = temp119_1 == 0
                                    cond:304_1 = temp119_1 != 0
                                    cond:318_1 = temp119_1 == 0
                                    cond:319_1 = temp119_1 == 0
                                    
                                    if (temp119_1 != 0)
                                        goto label_140247c2d
                                    
                                    goto label_140247bbc
                                
                            label_140247c20:
                                char temp118_1 = temp0_2391 & 8
                                cond:303_1 = temp118_1 == 0
                                cond:304_1 = temp118_1 != 0
                                cond:318_1 = temp118_1 == 0
                                cond:319_1 = temp118_1 == 0
                                
                                if (temp118_1 != 0)
                                label_140247c2d:
                                    arg15 = _mm_shuffle_ps(arg15, 
                                        _mm_shuffle_ps(zx.o(0), arg15, 0x20), 0x24)
                                    
                                    if (cond:304_1)
                                        goto label_140247bc6
                                    
                                    goto label_140247c34
                                
                            label_140247bbc:
                                
                                if (cond:303_1)
                                label_140247c34:
                                    
                                    if (not(cond:318_1))
                                        arg14 = _mm_shuffle_ps(arg14, 
                                            _mm_shuffle_ps(zx.o(0), arg14, 0x20), 0x24)
                                else
                                label_140247bc6:
                                    zmm13 = _mm_shuffle_ps(zmm13, 
                                        _mm_shuffle_ps(zx.o(0), zmm13, 0x20), 0x24)
                                    
                                    if (not(cond:319_1))
                                        arg14 = _mm_shuffle_ps(arg14, 
                                            _mm_shuffle_ps(zx.o(0), arg14, 0x20), 0x24)
                
                zmm10 = _mm_cmpeq_epi32(zmm10, zmm4) & not.o(arg16)
                arg5 = _mm_movemask_ps(zmm10)
                
                if (arg5 != 0)
                    break
                
                zmm10 = zx.o(0)
        
        arg19 = zmm13
        zmm0 = _mm_shuffle_epi32(zmm4, 0xf5)
        zmm4 = _mm_mul_epu32(zmm4, zmm12)
        zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe8), 
            _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm0, arg_430), 0xe8)[0].q)
        zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
        float temp0_2290[0x4] = _mm_shuffle_epi32(zmm1, 0x4e)
        zmm1 = _mm_unpacklo_epi32(zmm1, zmm0[0].q)
        zmm13 = _mm_unpacklo_epi32(temp0_2290, _mm_cmpgt_epi32(zx.o(0), temp0_2290)[0].q)
        arg_110 = zmm13
        zmm13 = __paddq_xmmdq_memdq(zmm13, arg_1a0)
        arg_d0 = zmm1
        arg_b0 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm1, arg_170), arg_30)
        zmm13 = _mm_add_epi64(zmm13, zmm9)
        zmm2 &= zmm10
        arg_a0 = zmm10
        
        if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0)
            arg12 = arg_40
        else
            zmm3 = arg13
            zmm10 = zx.o(0)
            zmm0 = _mm_cmpeq_epi32(arg_270, zx.o(0))
            arg13 = zmm0
            zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm2 & zmm0, 0x1f), 0x1f)
            char temp0_2303 = _mm_movemask_ps(zmm1)
            arg_160 = zmm13
            zmm13 = zmm2
            
            if (temp0_2303 == 0)
                arg12 = arg_40
            else
                __return_addr.o = arg14
                arg_50 = arg15
                zmm2 = __paddq_xmmdq_memdq(arg_e0, arg_1a0)
                zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), arg_d0)
                zmm2 = __paddq_xmmdq_memdq(zmm2, arg_110)
                zmm0 = data_1434426c0
                arg11 = zmm0
                zmm2 = _mm_add_epi64(zmm2, zmm0)
                zmm4 = _mm_add_epi64(zmm4, zmm0)
                zmm0 = _mm_shuffle_epi32(zmm1, 0x50)
                zmm4 &= zmm0
                zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                zmm2 &= zmm3
                int64_t rax_502 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                void* rsi_12 = arg4 + rax_502
                zmm7 = *(arg4 + rax_502)
                int64_t rax_503 = zmm2[0].q
                void* rbp_43 = arg4 + rax_503
                arg15 = *(arg4 + rax_503)
                int64_t rbx_46 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                void* rax_504 = arg4 + rbx_46
                arg14 = *(arg4 + rbx_46)
                zmm2 = zmm0 & arg11
                arg12 = zmm3 & arg11
                void* rbx_48 = zmm4[0].q + arg4
                zmm1 = *(zmm2[0].q + rbx_48)
                zmm2 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rsi_12)
                arg11 = *(arg12[0].q + rbp_43)
                zmm12 = *(_mm_shuffle_epi32(arg12, 0x4e)[0].q + rax_504)
                zmm4 = data_1434426e0
                zmm0 &= zmm4
                zmm3 &= zmm4
                zmm4 = *(zmm0[0].q + rbx_48)
                zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rsi_12)
                zmm10 = *(zmm3[0].q + rbp_43)
                arg16 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rax_504)
                bool cond:83_1
                bool cond:84_1
                
                if ((temp0_2303 & 1) == 0)
                    arg12 = arg_40
                    char temp30_1 = temp0_2303 & 1
                    cond:83_1 = temp30_1 != 0
                    cond:84_1 = temp30_1 == 0
                    
                    if (temp30_1 == 0)
                        goto label_140247a85
                    
                    goto label_140247574
                
                arg17[0] = (*rbx_48)[0]
                arg12 = arg_40
                char temp29_1 = temp0_2303 & 1
                cond:83_1 = temp29_1 != 0
                cond:84_1 = temp29_1 == 0
                
                if (temp29_1 == 0)
                label_140247a85:
                    
                    if (cond:84_1)
                        goto label_14024757e
                    
                    goto label_140247a90
                
            label_140247574:
                arg12[0] = zmm1[0]
                bool cond:111_1
                bool cond:112_1
                bool cond:130_1
                bool cond:131_1
                
                if (not(cond:83_1))
                label_14024757e:
                    char temp40_1 = temp0_2303 & 2
                    cond:111_1 = temp40_1 != 0
                    cond:112_1 = temp40_1 == 0
                    cond:130_1 = temp40_1 != 0
                    cond:131_1 = temp40_1 == 0
                    
                    if (temp40_1 == 0)
                        goto label_140247aa2
                    
                    goto label_140247594
                
            label_140247a90:
                arg18[0] = zmm4[0]
                char temp39_1 = temp0_2303 & 2
                cond:111_1 = temp39_1 != 0
                cond:112_1 = temp39_1 == 0
                cond:130_1 = temp39_1 != 0
                cond:131_1 = temp39_1 == 0
                
                if (temp39_1 == 0)
                label_140247aa2:
                    zmm3 = arg_80
                    zmm7 = arg_60
                    
                    if (cond:112_1)
                        goto label_1402475ae
                    
                    goto label_140247abf
                
            label_140247594:
                arg17 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg17, 0), arg17, 0xe2)
                zmm3 = arg_80
                zmm7 = arg_60
                
                if (not(cond:111_1))
                label_1402475ae:
                    
                    if (cond:131_1)
                        goto label_140247ac8
                    
                    goto label_1402475c1
                
            label_140247abf:
                arg12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg12, 0), arg12, 0xe2)
                bool cond:164_1
                bool cond:165_1
                bool cond:178_1
                bool cond:179_1
                
                if (not(cond:130_1))
                label_140247ac8:
                    char temp55_1 = temp0_2303 & 4
                    cond:164_1 = temp55_1 != 0
                    cond:165_1 = temp55_1 == 0
                    cond:178_1 = temp55_1 != 0
                    cond:179_1 = temp55_1 == 0
                    
                    if (temp55_1 == 0)
                        goto label_1402475cf
                    
                    goto label_140247ae0
                
            label_1402475c1:
                arg18 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg18, 0), arg18, 0xe2)
                char temp54_1 = temp0_2303 & 4
                cond:164_1 = temp54_1 != 0
                cond:165_1 = temp54_1 == 0
                cond:178_1 = temp54_1 != 0
                cond:179_1 = temp54_1 == 0
                
                if (temp54_1 == 0)
                label_1402475cf:
                    arg15 = arg_50
                    
                    if (cond:165_1)
                        goto label_140247af1
                    
                    goto label_1402475df
                
            label_140247ae0:
                arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(arg15, arg17, 0x30), 0x84)
                arg15 = arg_50
                
                if (not(cond:164_1))
                label_140247af1:
                    arg11 = zmm3
                    
                    if (cond:179_1)
                        goto label_1402475ed
                    
                    goto label_140247b0a
                
            label_1402475df:
                arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(arg11, arg12, 0x30), 0x84)
                arg11 = zmm3
                bool cond:221_1
                bool cond:222_1
                bool cond:243_1
                bool cond:244_1
                
                if (not(cond:178_1))
                label_1402475ed:
                    char temp78_1 = temp0_2303 & 8
                    cond:221_1 = temp78_1 != 0
                    cond:222_1 = temp78_1 == 0
                    cond:243_1 = temp78_1 != 0
                    cond:244_1 = temp78_1 == 0
                    
                    if (temp78_1 == 0)
                        goto label_140247b18
                    
                    goto label_140247605
                
            label_140247b0a:
                arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm10, arg18, 0x30), 0x84)
                char temp77_1 = temp0_2303 & 8
                cond:221_1 = temp77_1 != 0
                cond:222_1 = temp77_1 == 0
                cond:243_1 = temp77_1 != 0
                cond:244_1 = temp77_1 == 0
                
                if (temp77_1 == 0)
                label_140247b18:
                    arg14 = __return_addr.o
                    
                    if (cond:222_1)
                        goto label_140247616
                    
                    goto label_140247b29
                
            label_140247605:
                arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(arg14, arg17, 0x20), 0x24)
                arg14 = __return_addr.o
                
                if (cond:221_1)
                label_140247b29:
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm12, arg12, 0x20), 0x24)
                    zmm10 = zx.o(0)
                    
                    if (cond:243_1)
                        arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(arg16, arg18, 0x20), 0x24)
                else
                label_140247616:
                    zmm10 = zx.o(0)
                    
                    if (not(cond:244_1))
                        arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(arg16, arg18, 0x20), 0x24)
                
                zmm3 = arg_70
                arg16 = arg_130
            
            arg13 &= not.o(zmm13)
            zmm2 = _mm_slli_epi32(arg13, 0x1f)
            char temp0_2329 = _mm_movemask_ps(zmm2)
            
            if (temp0_2329 == 0)
                zmm10 = arg_a0
                zmm9 = arg_90
                arg13 = zmm3
                zmm13 = arg_160
            else
                zmm9 = arg13
                zmm12 = arg12
                zmm3 = _mm_srai_epi32(_mm_slli_epi32(arg11, 0x1f), 0x1f)
                zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm3
                arg12 = arg_b0
                arg13 = arg12
                zmm13 = arg_160
                zmm1 = zmm13
                
                if (_mm_movemask_ps(zmm2) != 0)
                    zmm0 = data_1434426c0
                    zmm4 = _mm_add_epi64(zmm13, zmm0)
                    zmm1 = _mm_add_epi64(arg12, zmm0)
                    arg11 = zmm2 ^ data_142d3f800
                    float temp0_2336[0x4] = _mm_shuffle_epi32(arg11, 0x50)
                    arg13 = (temp0_2336 & not.o(zmm1)) | (arg12 & temp0_2336)
                    zmm1 = _mm_shuffle_epi32(arg11, 0xfa)
                    zmm1 = (zmm1 & not.o(zmm4)) | (zmm13 & zmm1)
                    zmm4 = __paddq_xmmdq_memdq(arg_e0, arg_1a0)
                    arg11 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), arg_d0)
                    zmm4 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm4, arg_110), zmm0)
                    arg11 = _mm_add_epi64(arg11, zmm0)
                    zmm7 = arg_60
                    arg12 = _mm_shuffle_epi32(zmm2, 0x50) & arg11
                    zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & zmm4
                    float temp0_2347[0x4] = _mm_unpacklo_ps(*(arg4 + arg12[0].q), 
                        (*(arg4 + _mm_shuffle_epi32(arg12, 0x4e)[0].q))[0].q)
                    float temp0_2349[0x4] = _mm_unpacklo_ps(*(arg4 + zmm2[0].q), 
                        (*(arg4 + _mm_shuffle_epi32(zmm2, 0x4e)[0].q))[0].q)
                    zmm4 = temp0_2347[0].q | temp0_2349[0].q << 0x40
                    arg11 = arg_80
                
                zmm3 &= zmm4
                
                if ((temp0_2329 & 1) != 0)
                    arg17[0] = zmm3[0]
                    arg12 = zmm12
                    
                    if ((temp0_2329 & 2) != 0)
                        goto label_14024781e
                    
                    goto label_1402477e4
                
                arg12 = zmm12
                
                if ((temp0_2329 & 2) != 0)
                label_14024781e:
                    arg17 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg17, 1), arg17, 0xe2)
                    
                    if ((temp0_2329 & 4) != 0)
                        goto label_1402477f9
                    
                    goto label_140247828
                
            label_1402477e4:
                
                if ((temp0_2329 & 4) == 0)
                label_140247828:
                    
                    if ((temp0_2329 & 8) != 0)
                        arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zmm3, arg17, 0x23), 0x24)
                else
                label_1402477f9:
                    arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zmm3, arg17, 0x32), 0x84)
                    
                    if ((temp0_2329 & 8) != 0)
                        arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zmm3, arg17, 0x23), 0x24)
                
                zmm2 = data_1434422d0
                zmm4 = arg11 & zmm2
                zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm2) & zmm9, 0x1f)
                char temp0_2358 = _mm_movemask_ps(zmm2)
                
                if (temp0_2358 == 0)
                    zmm3 = zmm1
                    zmm4 = _mm_cmpeq_epi32(zmm4, zmm10) & not.o(arg32)
                    
                    if ((temp0_2329 & 1) != 0)
                        arg12[0] = zmm4[0]
                else
                    zmm2 = _mm_srai_epi32(zmm2, 0x1f) ^ data_142d3f800
                    zmm10 = zmm7
                    zmm7 = arg11
                    
                    if ((temp0_2358 & 1) != 0)
                        arg32[0] = (*arg13[0].q)[0]
                    
                    zmm3 = data_1434426c0
                    int32_t temp0_2360[0x4] = _mm_add_epi64(zmm1, zmm3)
                    zmm3 = _mm_add_epi64(arg13, zmm3)
                    float temp0_2362[0x4] = _mm_shuffle_epi32(zmm2, 0x50)
                    zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                    
                    if ((temp0_2358 & 2) != 0)
                        arg32 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, arg32, 0), arg32, 
                            0xe2)
                        zmm10 = arg_60
                        zmm7 = arg_80
                    
                    if ((temp0_2358 & 4) != 0)
                        arg32 = _mm_shuffle_ps(arg32, _mm_shuffle_ps(*zmm1[0].q, arg32, 0x30), 0x84)
                    
                    arg12 = zmm12
                    arg13 = (arg13 & temp0_2362) | (temp0_2362 & not.o(zmm3))
                    zmm3 = (zmm1 & zmm2) | (zmm2 & not.o(temp0_2360))
                    
                    if ((temp0_2358 & 8) != 0)
                        arg32 = _mm_shuffle_ps(arg32, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, arg32, 0x20), 0x24)
                    
                    arg11 = zmm7
                    zmm7 = zmm10
                    zmm4 = _mm_cmpeq_epi32(zmm4, zx.o(0)) & not.o(arg32)
                    
                    if ((temp0_2329 & 1) != 0)
                        arg12[0] = zmm4[0]
                
                if ((temp0_2329 & 2) != 0)
                    arg12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg12, 1), arg12, 0xe2)
                    
                    if ((temp0_2329 & 4) != 0)
                        goto label_140247a30
                    
                    goto label_1402479be
                
                if ((temp0_2329 & 4) == 0)
                label_1402479be:
                    
                    if ((temp0_2329 & 8) != 0)
                        arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm4, arg12, 0x23), 0x24)
                else
                label_140247a30:
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm4, arg12, 0x32), 0x84)
                    
                    if ((temp0_2329 & 8) != 0)
                        arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm4, arg12, 0x23), 0x24)
                
                zmm2 = data_142fc95e0
                zmm1 = arg11 & zmm2
                char temp0_2379 =
                    _mm_movemask_ps(_mm_slli_epi32(zmm9 & _mm_cmpeq_epi32(zmm1, zmm2), 0x1f))
                
                if (temp0_2379 != 0)
                    if ((temp0_2379 & 1) != 0)
                        arg41[0] = (*arg13[0].q)[0]
                        zmm2 = arg41
                        zmm4 = zx.o(0)
                        
                        if ((temp0_2379 & 2) != 0)
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, zmm2, 0), 
                                zmm2, 0xe2)
                    else
                        zmm2 = arg41
                        zmm4 = zx.o(0)
                        
                        if ((temp0_2379 & 2) != 0)
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg13, 0x4e)[0].q, zmm2, 0), 
                                zmm2, 0xe2)
                    
                    arg13 = arg_70
                    zmm10 = arg_a0
                    zmm9 = arg_90
                    
                    if ((temp0_2379 & 4) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm3[0].q, zmm2, 0x30), 0x84)
                        
                        if ((temp0_2379 & 8) != 0)
                        label_140247f3d:
                            zmm2 = _mm_shuffle_ps(zmm2, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q, zmm2, 0x20), 
                                0x24)
                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm4) & not.o(zmm2)
                            
                            if ((temp0_2329 & 1) == 0)
                                goto label_140247ca7
                            
                            goto label_140247e2f
                    else if ((temp0_2379 & 8) != 0)
                        goto label_140247f3d
                    
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm4) & not.o(zmm2)
                    
                    if ((temp0_2329 & 1) == 0)
                        goto label_140247ca7
                    
                    goto label_140247e2f
                
                zmm2 = arg41
                arg13 = arg_70
                zmm10 = arg_a0
                zmm9 = arg_90
                zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                
                if ((temp0_2329 & 1) == 0)
                label_140247ca7:
                    arg41 = zmm2
                    
                    if ((temp0_2329 & 2) == 0)
                        goto label_140247e49
                    
                    goto label_140247cc5
                
            label_140247e2f:
                arg18[0] = zmm1[0]
                arg41 = zmm2
                
                if ((temp0_2329 & 2) == 0)
                label_140247e49:
                    
                    if ((temp0_2329 & 4) == 0)
                        goto label_140247cd3
                    
                    goto label_140247e62
                
            label_140247cc5:
                arg18 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg18, 1), arg18, 0xe2)
                
                if ((temp0_2329 & 4) != 0)
                label_140247e62:
                    arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm1, arg18, 0x32), 0x84)
                    
                    if ((temp0_2329 & 8) != 0)
                        arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm1, arg18, 0x23), 0x24)
                else
                label_140247cd3:
                    
                    if ((temp0_2329 & 8) != 0)
                        arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm1, arg18, 0x23), 0x24)
        
        if (_mm_movemask_ps(_mm_slli_epi32(zmm10 & arg_140, 0x1f)) == 0)
            break
        
        zmm3 = zmm10
        zmm10 = _mm_srai_epi32(_mm_slli_epi32(zmm10 & zmm7, 0x1f), 0x1f)
        char temp0_2420 = _mm_movemask_ps(zmm10)
        
        if (temp0_2420 == 0)
            arg11 = arg_80
            zmm9 = zx.o(0)
        else
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(arg_80, 0x1f), 0x1f) & zmm7
            zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f) & zmm0
            uint32_t temp0_2425 = _mm_movemask_ps(zmm3)
            zmm12 = zx.o(0)
            arg_40 = arg12
            __return_addr.o = arg14
            
            if (temp0_2425 == 0)
                arg14 = zx.o(0)
                arg13 = zx.o(0)
                zmm3 = arg42
            else
                char rsi_13 = temp0_2425.b
                
                if ((rsi_13 & 1) != 0)
                    arg12 = arg_30
                    arg25[0] = (*arg12[0].q)[0]
                    
                    if ((rsi_13 & 2) != 0)
                        arg25 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg12, 0x4e)[0].q, arg25, 0), arg25, 
                            0xe2)
                else
                    arg12 = arg_30
                    
                    if ((rsi_13 & 2) != 0)
                        arg25 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg12, 0x4e)[0].q, arg25, 0), arg25, 
                            0xe2)
                
                if ((rsi_13 & 4) == 0)
                    if ((rsi_13 & 8) != 0)
                        goto label_140247fa1
                    
                    goto label_140247ed8
                
                arg25 = _mm_shuffle_ps(arg25, _mm_shuffle_ps(*zmm9[0].q, arg25, 0x30), 0x84)
                char rcx_59
                
                if ((rsi_13 & 8) != 0)
                label_140247fa1:
                    arg25 = _mm_shuffle_ps(arg25, 
                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, arg25, 0x20), 0x24)
                    rcx_59 = _mm_movemask_ps(zmm0)
                    arg14 = zx.o(0)
                    
                    if ((rcx_59 & 1) != 0)
                        goto label_140247ee9
                    
                    goto label_140247fba
                
            label_140247ed8:
                rcx_59 = _mm_movemask_ps(zmm0)
                arg14 = zx.o(0)
                
                if ((rcx_59 & 1) == 0)
                label_140247fba:
                    zmm3 ^= data_142d3f800
                    
                    if ((rcx_59 & 2) != 0)
                        arg14 = _mm_shuffle_ps(_mm_shuffle_ps(arg25, arg14, 1), arg14, 0xe2)
                else
                label_140247ee9:
                    arg14 = zx.o(0)
                    arg14[0] = arg25[0]
                    zmm3 ^= data_142d3f800
                    
                    if ((rcx_59 & 2) != 0)
                        arg14 = _mm_shuffle_ps(_mm_shuffle_ps(arg25, arg14, 1), arg14, 0xe2)
                
                zmm2 = __paddq_xmmdq_memdq(arg12, data_1434426c0)
                zmm1 = _mm_shuffle_epi32(zmm3, 0x50)
                
                if ((rcx_59 & 4) != 0)
                    arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(arg25, arg14, 0x32), 0x84)
                
                zmm0 = zmm1 & not.o(zmm2)
                
                if ((rcx_59 & 8) != 0)
                    arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(arg25, arg14, 0x23), 0x24)
                
                zmm2 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                float temp0_2457[0x4] = _mm_shuffle_epi32(zmm3, 0xfa)
                arg12 = (arg12 & zmm1) | zmm0
                
                if ((rsi_13 & 1) != 0)
                    arg26[0] = (*arg12[0].q)[0]
                
                zmm3 = arg42
                zmm0 = temp0_2457 & not.o(zmm2)
                arg11 = zmm9 & temp0_2457
                
                if ((rsi_13 & 2) != 0)
                    zmm7 = arg_60
                    arg26 = _mm_shuffle_ps(
                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg12, 0x4e)[0].q, arg26, 0), arg26, 0xe2)
                    arg11 |= zmm0
                    
                    if ((rsi_13 & 4) != 0)
                    label_14024811b:
                        arg26 =
                            _mm_shuffle_ps(arg26, _mm_shuffle_ps(*arg11[0].q, arg26, 0x30), 0x84)
                        
                        if ((rsi_13 & 8) == 0)
                            goto label_140248094
                        
                        goto label_14024814b
                else
                    arg11 |= zmm0
                    
                    if ((rsi_13 & 4) != 0)
                        goto label_14024811b
                
                if ((rsi_13 & 8) == 0)
                label_140248094:
                    arg13 = zx.o(0)
                    
                    if ((rcx_59 & 1) == 0)
                        goto label_140248161
                    
                    goto label_1402480a2
                
            label_14024814b:
                arg26 = _mm_shuffle_ps(arg26, 
                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e)[0].q, arg26, 0x20), 0x24)
                arg13 = zx.o(0)
                
                if ((rcx_59 & 1) != 0)
                label_1402480a2:
                    arg13 = zx.o(0)
                    arg13[0] = arg26[0]
                    zmm4 = _mm_slli_epi32(temp0_2457, 0x1f)
                    zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                    
                    if ((rcx_59 & 2) != 0)
                        arg13 = _mm_shuffle_ps(_mm_shuffle_ps(arg26, arg13, 1), arg13, 0xe2)
                else
                label_140248161:
                    zmm4 = _mm_slli_epi32(temp0_2457, 0x1f)
                    zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                    
                    if ((rcx_59 & 2) != 0)
                        arg13 = _mm_shuffle_ps(_mm_shuffle_ps(arg26, arg13, 1), arg13, 0xe2)
                
                zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                zmm0 = data_1434426c0
                arg11 = _mm_add_epi64(arg11, zmm0)
                int32_t temp0_2475[0x4] = _mm_add_epi64(arg12, zmm0)
                
                if ((rcx_59 & 4) != 0)
                    arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg26, arg13, 0x32), 0x84)
                
                if ((rcx_59 & 8) != 0)
                    arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg26, arg13, 0x23), 0x24)
                
                arg_30 = (arg_30 & zmm1) | (zmm1 & not.o(temp0_2475))
                zmm9 = (zmm9 & zmm4) | (zmm4 & not.o(arg11))
            
            zmm1 = data_1434422d0
            zmm0 = _mm_cmpeq_epi32(arg_80 & zmm1, zmm1) & zmm7
            zmm4 = _mm_srai_epi32(_mm_slli_epi32(arg_a0 & zmm0, 0x1f), 0x1f)
            char temp0_2483 = _mm_movemask_ps(zmm4)
            
            if (temp0_2483 == 0)
                arg12 = zx.o(0)
            else
                if ((temp0_2483 & 1) == 0)
                    if ((temp0_2483 & 2) != 0)
                        goto label_1402482c5
                    
                    goto label_14024824a
                
                zmm3[0] = (*arg_30[0].q)[0]
                
                if ((temp0_2483 & 2) != 0)
                label_1402482c5:
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(arg_30, 0x4e)[0].q, zmm3, 0), 
                        zmm3, 0xe2)
                    
                    if ((temp0_2483 & 4) == 0)
                        goto label_140248250
                    
                    goto label_1402482db
                
            label_14024824a:
                
                if ((temp0_2483 & 4) == 0)
                label_140248250:
                    
                    if ((temp0_2483 & 8) != 0)
                        goto label_1402482fc
                    
                    goto label_14024825a
                
            label_1402482db:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm9[0].q, zmm3, 0x30), 0x84)
                char rcx_60
                
                if ((temp0_2483 & 8) != 0)
                label_1402482fc:
                    zmm3 = _mm_shuffle_ps(zmm3, 
                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, zmm3, 0x20), 0x24)
                    rcx_60 = _mm_movemask_ps(zmm0)
                    zmm12 = zx.o(0)
                    
                    if ((rcx_60 & 1) != 0)
                        goto label_14024826b
                    
                    goto label_140248311
                
            label_14024825a:
                rcx_60 = _mm_movemask_ps(zmm0)
                zmm12 = zx.o(0)
                
                if ((rcx_60 & 1) == 0)
                label_140248311:
                    zmm4 ^= data_142d3f800
                    
                    if ((rcx_60 & 2) != 0)
                        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm12, 1), zmm12, 0xe2)
                else
                label_14024826b:
                    zmm12 = zx.o(0)
                    zmm12[0] = zmm3[0]
                    zmm4 ^= data_142d3f800
                    
                    if ((rcx_60 & 2) != 0)
                        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm12, 1), zmm12, 0xe2)
                
                zmm2 = __paddq_xmmdq_memdq(arg_30, data_1434426c0)
                zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                
                if ((rcx_60 & 4) != 0)
                    zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm3, zmm12, 0x32), 0x84)
                
                if ((rcx_60 & 8) != 0)
                    zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm3, zmm12, 0x23), 0x24)
                
                int32_t temp0_2502[0x4] = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                zmm4 = _mm_shuffle_epi32(zmm4, 0xfa)
                arg11 = (arg_30 & zmm1) | (zmm1 & not.o(zmm2))
                
                if ((temp0_2483 & 1) != 0)
                    arg27[0] = (*arg11[0].q)[0]
                
                zmm2 = zmm4 & not.o(temp0_2502)
                zmm0 = zmm9 & zmm4
                
                if ((temp0_2483 & 2) == 0)
                    zmm0 |= zmm2
                    
                    if ((temp0_2483 & 4) != 0)
                        goto label_1402485c8
                    
                    goto label_1402483e2
                
                arg27 = _mm_shuffle_ps(
                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e)[0].q, arg27, 0), arg27, 0xe2)
                zmm0 |= zmm2
                
                if ((temp0_2483 & 4) == 0)
                label_1402483e2:
                    
                    if ((temp0_2483 & 8) != 0)
                        arg27 = _mm_shuffle_ps(arg27, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q, arg27, 0x20), 0x24)
                else
                label_1402485c8:
                    arg27 = _mm_shuffle_ps(arg27, _mm_shuffle_ps(*zmm0[0].q, arg27, 0x30), 0x84)
                    
                    if ((temp0_2483 & 8) != 0)
                        arg27 = _mm_shuffle_ps(arg27, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q, arg27, 0x20), 0x24)
                
                zmm3 = zmm3
                arg15 = arg15
                zmm7 = arg_60
                arg12 = zx.o(0)
                
                if ((rcx_60 & 1) != 0)
                    arg12 = zx.o(0)
                    arg12[0] = arg27[0]
                
                zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                
                if ((rcx_60 & 2) != 0)
                    arg12 = _mm_shuffle_ps(_mm_shuffle_ps(arg27, arg12, 1), arg12, 0xe2)
                
                zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                zmm2 = data_1434426c0
                zmm0 = _mm_add_epi64(zmm0, zmm2)
                arg11 = _mm_add_epi64(arg11, zmm2)
                
                if ((rcx_60 & 4) != 0)
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(arg27, arg12, 0x32), 0x84)
                
                zmm9 &= zmm4
                
                if ((rcx_60 & 8) != 0)
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(arg27, arg12, 0x23), 0x24)
                
                arg_30 = (arg_30 & zmm1) | (zmm1 & not.o(arg11))
                zmm9 |= zmm4 & not.o(zmm0)
            
            zmm1 = data_142fc95e0
            zmm0 = _mm_cmpeq_epi32(arg_80 & zmm1, zmm1) & zmm7
            zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg_a0 & zmm0, 0x1f), 0x1f)
            char temp0_2522 = _mm_movemask_ps(zmm1)
            arg42 = zmm3
            
            if (temp0_2522 == 0)
                zmm4 = zx.o(0)
                zmm1 = zx.o(0)
            else
                if ((temp0_2522 & 1) == 0)
                    if ((temp0_2522 & 2) != 0)
                        goto label_14024862b
                    
                    goto label_140248525
                
                arg28[0] = (*arg_30[0].q)[0]
                
                if ((temp0_2522 & 2) != 0)
                label_14024862b:
                    arg28 = _mm_shuffle_ps(
                        _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(arg_30, 0x4e)[0].q, arg28, 0), 
                        arg28, 0xe2)
                    
                    if ((temp0_2522 & 4) == 0)
                        goto label_14024852e
                    
                    goto label_140248655
                
            label_140248525:
                
                if ((temp0_2522 & 4) == 0)
                label_14024852e:
                    
                    if ((temp0_2522 & 8) != 0)
                        goto label_140248685
                    
                    goto label_140248537
                
            label_140248655:
                arg28 = _mm_shuffle_ps(arg28, _mm_shuffle_ps(*zmm9[0].q, arg28, 0x30), 0x84)
                char rsi_15
                
                if ((temp0_2522 & 8) != 0)
                label_140248685:
                    arg28 = _mm_shuffle_ps(arg28, 
                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, arg28, 0x20), 0x24)
                    rsi_15 = _mm_movemask_ps(zmm0)
                    zmm4 = zx.o(0)
                    
                    if ((rsi_15 & 1) != 0)
                        goto label_140248548
                    
                    goto label_14024869d
                
            label_140248537:
                rsi_15 = _mm_movemask_ps(zmm0)
                zmm4 = zx.o(0)
                
                if ((rsi_15 & 1) == 0)
                label_14024869d:
                    zmm1 ^= data_142d3f800
                    
                    if ((rsi_15 & 2) != 0)
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg28, zmm4, 1), zmm4, 0xe2)
                else
                label_140248548:
                    zmm4 = zx.o(0)
                    zmm4[0] = arg28[0]
                    zmm1 ^= data_142d3f800
                    
                    if ((rsi_15 & 2) != 0)
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg28, zmm4, 1), zmm4, 0xe2)
                
                zmm0 = __paddq_xmmdq_memdq(arg_30, data_1434426c0)
                zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                
                if ((rsi_15 & 4) != 0)
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg28, zmm4, 0x32), 0x84)
                
                arg_30 &= zmm2
                zmm2 &= not.o(zmm0)
                
                if ((rsi_15 & 8) != 0)
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg28, zmm4, 0x23), 0x24)
                
                arg11 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                zmm1 = arg_30 | zmm2
                
                if ((temp0_2522 & 1) != 0)
                    zmm2 = arg52
                    zmm2[0] = (*zmm1[0].q)[0]
                    zmm9 &= zmm0
                    zmm0 &= not.o(arg11)
                    
                    if ((temp0_2522 & 2) != 0)
                        zmm2 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm2, 0), zmm2, 
                            0xe2)
                else
                    zmm2 = arg52
                    zmm9 &= zmm0
                    zmm0 &= not.o(arg11)
                    
                    if ((temp0_2522 & 2) != 0)
                        zmm2 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm2, 0), zmm2, 
                            0xe2)
                
                zmm9 |= zmm0
                
                if ((temp0_2522 & 4) == 0)
                    if ((temp0_2522 & 8) != 0)
                        goto label_140248800
                    
                    goto label_1402487a0
                
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm9[0].q, zmm2, 0x30), 0x84)
                
                if ((temp0_2522 & 8) != 0)
                label_140248800:
                    zmm2 = _mm_shuffle_ps(zmm2, 
                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, zmm2, 0x20), 0x24)
                    zmm1 = zx.o(0)
                    
                    if ((rsi_15 & 1) != 0)
                        goto label_1402487a9
                    
                    goto label_14024880d
                
            label_1402487a0:
                zmm1 = zx.o(0)
                
                if ((rsi_15 & 1) == 0)
                label_14024880d:
                    
                    if ((rsi_15 & 2) != 0)
                    label_14024881e:
                        zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                        
                        if ((rsi_15 & 4) != 0)
                            goto label_1402487c3
                        
                        goto label_14024882b
                else
                label_1402487a9:
                    zmm1 = zx.o(0)
                    zmm1[0] = zmm2[0]
                    
                    if ((rsi_15 & 2) != 0)
                        goto label_14024881e
                
                if ((rsi_15 & 4) == 0)
                label_14024882b:
                    arg52 = zmm2
                    
                    if ((rsi_15 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                else
                label_1402487c3:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                    arg52 = zmm2
                    
                    if ((rsi_15 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
            
            zmm0 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), arg_d0)
            zmm2 = data_1434426c0
            arg11 = zmm2
            zmm0 = _mm_add_epi64(zmm0, zmm2)
            zmm2 = _mm_shuffle_epi32(zmm10, 0x50) & zmm0
            zmm0 = _mm_add_epi64(
                __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_e0, arg_1a0), arg_110), arg11)
            arg11 = _mm_shuffle_epi32(zmm10, 0xfa) & zmm0
            int64_t rax_549 = zmm2[0].q
            int64_t rcx_62 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
            int64_t rbp_45 = arg11[0].q
            int64_t rdi_18 = _mm_shuffle_epi32(arg11, 0x4e)[0].q
            zmm0 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_549)), zx.o(*(arg4 + rcx_62))[0].q), 
                _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_45)), zx.o(*(arg4 + rdi_18))[0].q)[0].q)
            zmm2 = zmm0
            arg14 = _mm_add_ps(arg14, 
                _mm_mul_ps(arg13, 
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0)))
            arg11 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
            zmm0 = data_143442440
            float temp0_2582[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, zmm0))
            arg11 = data_143442690
            arg12 = _mm_mul_ps(arg12, _mm_div_ps(temp0_2582, arg11))
            float temp0_2588[0x4] =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), zmm0)), arg11)
            char temp68_1 = temp0_2420 & 1
            
            if (temp68_1 != 0)
                arg17[0] = arg14[0]
            
            arg11 = arg_80
            arg13 = arg_70
            zmm3 = arg_a0
            float temp0_2589[0x4] = _mm_mul_ps(zmm1, temp0_2588)
            float temp0_2590[0x4] = _mm_add_ps(zmm12, arg12)
            
            if (temp68_1 == 0)
                arg12 = arg_40
                zmm4 = _mm_add_ps(zmm4, temp0_2589)
                
                if (temp68_1 != 0)
                    arg18[0] = zmm4[0]
            else
                arg12 = arg_40
                arg12[0] = temp0_2590[0]
                zmm4 = _mm_add_ps(zmm4, temp0_2589)
                
                if (temp68_1 != 0)
                    arg18[0] = zmm4[0]
            
            char temp92_1 = temp0_2420 & 2
            
            if (temp92_1 != 0)
                arg17 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, arg17, 1), arg17, 0xe2)
                
                if (temp92_1 != 0)
                    goto label_1402435c6
            else if (temp92_1 != 0)
            label_1402435c6:
                arg12 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_2590, arg12, 1), arg12, 0xe2)
                
                if (temp92_1 != 0)
                    goto label_1402489e3
                
                goto label_1402435cf
            
            bool cond:316_1
            bool cond:317_1
            bool cond:333_1
            bool cond:334_1
            
            if (temp92_1 != 0)
            label_1402489e3:
                arg18 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg18, 1), arg18, 0xe2)
                char temp117_1 = temp0_2420 & 4
                cond:316_1 = temp117_1 == 0
                cond:317_1 = temp117_1 != 0
                cond:333_1 = temp117_1 == 0
                cond:334_1 = temp117_1 != 0
                
                if (temp117_1 != 0)
                    goto label_1402435e9
                
                goto label_1402489f1
            
        label_1402435cf:
            char temp116_1 = temp0_2420 & 4
            cond:316_1 = temp116_1 == 0
            cond:317_1 = temp116_1 != 0
            cond:333_1 = temp116_1 == 0
            cond:334_1 = temp116_1 != 0
            
            if (temp116_1 == 0)
            label_1402489f1:
                
                if (not(cond:316_1))
                label_1402489ff:
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(temp0_2590, arg12, 0x32), 0x84)
                    
                    if (cond:334_1)
                        goto label_14024360a
                    
                    goto label_140248a09
            else
            label_1402435e9:
                arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(arg14, arg17, 0x32), 0x84)
                
                if (cond:317_1)
                    goto label_1402489ff
            
            bool cond:346_1
            bool cond:347_1
            bool cond:360_1
            bool cond:361_1
            
            if (not(cond:333_1))
            label_14024360a:
                arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm4, arg18, 0x32), 0x84)
                char temp131_1 = temp0_2420 & 8
                cond:346_1 = temp131_1 == 0
                cond:347_1 = temp131_1 != 0
                cond:360_1 = temp131_1 == 0
                cond:361_1 = temp131_1 != 0
                
                if (temp131_1 != 0)
                    goto label_140248a21
                
                goto label_140243618
            
        label_140248a09:
            char temp130_1 = temp0_2420 & 8
            cond:346_1 = temp130_1 == 0
            cond:347_1 = temp130_1 != 0
            cond:360_1 = temp130_1 == 0
            cond:361_1 = temp130_1 != 0
            
            if (temp130_1 != 0)
            label_140248a21:
                arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(arg14, arg17, 0x23), 0x24)
                arg14 = __return_addr.o
                arg16 = arg_130
                
                if (cond:347_1)
                    goto label_140243633
                
                goto label_140248a3c
            
        label_140243618:
            arg14 = __return_addr.o
            arg16 = arg_130
            
            if (cond:346_1)
            label_140248a3c:
                zmm9 = zx.o(0)
                
                if (not(cond:360_1))
                    arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm4, arg18, 0x23), 0x24)
            else
            label_140243633:
                arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(temp0_2590, arg12, 0x23), 0x24)
                zmm9 = zx.o(0)
                
                if (cond:361_1)
                    arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm4, arg18, 0x23), 0x24)
        
        zmm7 ^= arg_140
        
        if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm7, 0x1f)) == 0)
            break
        
        arg13 = __pcmpeqd_xmmdq_memdq(arg20, data_1434422d0)
        zmm10 = zmm3 & arg13
        zmm2 = _mm_slli_epi32(zmm10, 0x1f)
        char temp0_2607 = _mm_movemask_ps(zmm2)
        arg_60 = zmm7
        
        if (temp0_2607 == 0)
            zmm10 = zx.o(0)
            arg_40 = arg12
            arg12 = _mm_cmpeq_epi32(arg12, arg12)
            zmm13 = arg19
        else
            zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg11, 0x1f), 0x1f)
            zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm1
            zmm3 = arg12
            
            if (_mm_movemask_ps(zmm2) == 0)
                arg_160 = zmm13
            else
                arg11 = data_1434426b0
                zmm7 = arg11
                zmm4 = _mm_add_epi64(arg_b0, arg11)
                arg11 = zmm2 ^ data_142d3f800
                arg12 = _mm_shuffle_epi32(arg11, 0x50)
                arg_b0 = (arg_b0 & arg12) | (arg12 & not.o(zmm4))
                zmm4 = _mm_add_epi64(zmm13, zmm7)
                arg11 = _mm_shuffle_epi32(arg11, 0xfa)
                arg_160 = (zmm13 & arg11) | (arg11 & not.o(zmm4))
                int32_t temp0_2616[0x4] = __paddq_xmmdq_memdq(arg_e0, arg_1a0)
                zmm0 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg_190, arg_170), arg_d0)
                int32_t temp0_2619[0x4] = __paddq_xmmdq_memdq(temp0_2616, arg_110)
                zmm4 = data_1434426c0
                arg11 = zmm4
                zmm0 = _mm_add_epi64(zmm0, zmm4)
                zmm4 = _mm_shuffle_epi32(zmm2, 0x50) & zmm0
                int32_t temp0_2622[0x4] = _mm_add_epi64(temp0_2619, arg11)
                zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & temp0_2622
                int64_t rax_552 = zmm4[0].q
                int64_t rbp_46 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                int64_t rbx_51 = zmm2[0].q
                int64_t rdi_19 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + rax_552), 0), 
                                *(arg4 + rbp_46), 2), 
                            *(arg4 + rbx_51), 4), 
                        *(arg4 + rdi_19), 6), 
                    data_143442b40))
            
            zmm7 = arg50
            zmm13 = arg19
            zmm1 &= zmm2
            
            if ((temp0_2607 & 1) != 0)
                arg17[0] = zmm1[0]
                arg11 = arg_80
                arg12 = zmm3
                
                if ((temp0_2607 & 2) != 0)
                    goto label_1402436ec
                
                goto label_1402436aa
            
            arg11 = arg_80
            arg12 = zmm3
            
            if ((temp0_2607 & 2) != 0)
            label_1402436ec:
                arg17 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg17, 1), arg17, 0xe2)
                
                if ((temp0_2607 & 4) != 0)
                    goto label_1402436bf
                
                goto label_1402436f6
            
        label_1402436aa:
            
            if ((temp0_2607 & 4) == 0)
            label_1402436f6:
                
                if ((temp0_2607 & 8) != 0)
                    arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zmm1, arg17, 0x23), 0x24)
            else
            label_1402436bf:
                arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zmm1, arg17, 0x32), 0x84)
                
                if ((temp0_2607 & 8) != 0)
                    arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zmm1, arg17, 0x23), 0x24)
            
            zmm2 = data_1434422d0
            zmm1 = arg11 & zmm2
            zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & zmm10, 0x1f)
            char temp0_1411 = _mm_movemask_ps(zmm2)
            
            if (temp0_1411 == 0)
                zmm1 = _mm_cmpeq_epi32(zmm1, zmm9) & not.o(zmm2)
                
                if ((temp0_2607 & 1) != 0)
                    arg12[0] = zmm1[0]
            else
                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                
                if ((temp0_1411 & 1) != 0)
                    zmm7[0] = zx.o(*arg_b0[0].q)[0]
                
                zmm2 ^= data_142d3f800
                zmm0 = arg11
                
                if ((temp0_1411 & 2) != 0)
                    arg11 = arg_b0
                    zmm7 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg11, 0x4e)[0].q), zmm7, 0), zmm7, 
                        0xe2)
                else
                    arg11 = arg_b0
                
                zmm4 = data_1434426b0
                int32_t temp0_1417[0x4] = _mm_add_epi64(arg_160, zmm4)
                arg11 = _mm_add_epi64(arg11, zmm4)
                float temp0_1419[0x4] = _mm_shuffle_epi32(zmm2, 0x50)
                zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                
                if ((temp0_1411 & 4) != 0)
                    zmm7 =
                        _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zx.o(*arg_160[0].q), zmm7, 0x30), 0x84)
                    zmm0 = arg_80
                
                if ((temp0_1411 & 8) != 0)
                    zmm7 = _mm_shuffle_ps(zmm7, 
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg_160, 0x4e)[0].q), zmm7, 0x20), 
                        0x24)
                
                arg12 = arg12
                arg_b0 = (arg_b0 & temp0_1419) | (temp0_1419 & not.o(arg11))
                float temp0_1428[0x4] = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                    __andps_xmmxud_memxud(zmm7, data_143442cd0), data_143442b40))
                arg_160 = (arg_160 & zmm2) | (zmm2 & not.o(temp0_1417))
                arg11 = zmm0
                zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(temp0_1428)
                
                if ((temp0_2607 & 1) != 0)
                    arg12[0] = zmm1[0]
            
            if ((temp0_2607 & 2) != 0)
                arg12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg12, 1), arg12, 0xe2)
                
                if ((temp0_2607 & 4) != 0)
                    goto label_14024393d
                
                goto label_1402438cc
            
            if ((temp0_2607 & 4) == 0)
            label_1402438cc:
                
                if ((temp0_2607 & 8) != 0)
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
            else
            label_14024393d:
                arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm1, arg12, 0x32), 0x84)
                
                if ((temp0_2607 & 8) != 0)
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm1, arg12, 0x23), 0x24)
            
            zmm2 = data_142fc95e0
            zmm1 = arg11 & zmm2
            zmm2 = _mm_cmpeq_epi32(zmm1, zmm2)
            char temp0_1436 = _mm_movemask_ps(_mm_slli_epi32(zmm10 & zmm2, 0x1f))
            arg_40 = arg12
            arg50 = zmm7
            
            if (temp0_1436 == 0)
                zmm10 = zx.o(0)
                arg12 = _mm_cmpeq_epi32(arg12, arg12)
                zmm3 = arg39
                zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                
                if ((temp0_2607 & 1) != 0)
                    arg18[0] = zmm1[0]
            else
                if ((temp0_1436 & 1) != 0)
                    zmm3 = arg39
                    zmm3[0] = zx.o(*arg_b0[0].q)[0]
                    zmm10 = zx.o(0)
                    
                    if ((temp0_1436 & 2) != 0)
                        zmm3 = _mm_shuffle_ps(
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg_b0, 0x4e)[0].q), zmm3, 0), 
                            zmm3, 0xe2)
                else
                    zmm3 = arg39
                    zmm10 = zx.o(0)
                    
                    if ((temp0_1436 & 2) != 0)
                        zmm3 = _mm_shuffle_ps(
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg_b0, 0x4e)[0].q), zmm3, 0), 
                            zmm3, 0xe2)
                
                if ((temp0_1436 & 4) != 0)
                    zmm3 =
                        _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*arg_160[0].q), zmm3, 0x30), 0x84)
                    
                    if ((temp0_1436 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*__pshufd_xmmdq_memdq_immb(arg_160, 0x4e)[0].q), 
                                zmm3, 0x20), 
                            0x24)
                else if ((temp0_1436 & 8) != 0)
                    zmm3 = _mm_shuffle_ps(zmm3, 
                        _mm_shuffle_ps(zx.o(*__pshufd_xmmdq_memdq_immb(arg_160, 0x4e)[0].q), zmm3, 
                            0x20), 
                        0x24)
                
                arg12 = _mm_cmpeq_epi32(arg12, arg12)
                float temp0_1450[0x4] = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                    __andps_xmmxud_memxud(zmm3, data_143442cd0), data_143442b40))
                zmm1 = _mm_cmpeq_epi32(zmm1, zmm10) & not.o(temp0_1450)
                
                if ((temp0_2607 & 1) != 0)
                    arg18[0] = zmm1[0]
            
            arg39 = zmm3
            
            if ((temp0_2607 & 2) != 0)
                arg18 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg18, 1), arg18, 0xe2)
                
                if ((temp0_2607 & 4) != 0)
                    goto label_140243b9c
                
                goto label_140243a3e
            
            if ((temp0_2607 & 4) == 0)
            label_140243a3e:
                
                if ((temp0_2607 & 8) != 0)
                    arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm1, arg18, 0x23), 0x24)
            else
            label_140243b9c:
                arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm1, arg18, 0x32), 0x84)
                
                if ((temp0_2607 & 8) != 0)
                    arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zmm1, arg18, 0x23), 0x24)
        
        zmm0 = (arg_60 ^ arg13) & arg_a0
        zmm3 = zmm0
        
        if (_mm_movemask_ps(_mm_slli_epi32(zmm0, 0x1f)) == 0)
            zmm7 = arg11
            arg13 = arg_70
        else
            zmm0 = __pcmpeqd_xmmdq_memdq(arg20, data_143442ad0)
            char temp0_1460 = _mm_movemask_ps(_mm_slli_epi32(arg_a0 & zmm0, 0x1f))
            
            if (temp0_1460 == 0)
                zmm7 = arg11
                arg13 = arg_70
            else
                char temp67_1 = temp0_1460 & 1
                
                if (temp67_1 == 0)
                    arg13 = arg_70
                    
                    if (temp67_1 != 0)
                    label_140243bc4:
                        arg_40[0] = 0
                        
                        if (temp67_1 != 0)
                            goto label_140243ade
                        
                        goto label_140243bd3
                else
                    arg17[0] = zx.o(0)[0]
                    arg13 = arg_70
                    
                    if (temp67_1 != 0)
                        goto label_140243bc4
                
                bool cond:256_1
                bool cond:257_1
                bool cond:280_1
                bool cond:281_1
                
                if (temp67_1 != 0)
                label_140243ade:
                    arg18[0] = 0
                    char temp91_1 = temp0_1460 & 2
                    cond:256_1 = temp91_1 == 0
                    cond:257_1 = temp91_1 != 0
                    cond:280_1 = temp91_1 == 0
                    cond:281_1 = temp91_1 != 0
                    
                    if (temp91_1 != 0)
                        goto label_140243bec
                    
                    goto label_140243af0
                
            label_140243bd3:
                char temp90_1 = temp0_1460 & 2
                cond:256_1 = temp90_1 == 0
                cond:257_1 = temp90_1 != 0
                cond:280_1 = temp90_1 == 0
                cond:281_1 = temp90_1 != 0
                
                if (temp90_1 == 0)
                label_140243af0:
                    
                    if (not(cond:256_1))
                    label_140243b06:
                        arg_40 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg_40, 0), arg_40, 0xe2)
                        
                        if (cond:281_1)
                            goto label_140243c0d
                        
                        goto label_140243b11
                else
                label_140243bec:
                    arg17 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg17, 0), arg17, 0xe2)
                    
                    if (cond:257_1)
                        goto label_140243b06
                
                bool cond:313_1
                bool cond:314_1
                bool cond:331_1
                bool cond:332_1
                
                if (not(cond:280_1))
                label_140243c0d:
                    arg18 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg18, 0), arg18, 0xe2)
                    char temp115_1 = temp0_1460 & 4
                    cond:313_1 = temp115_1 == 0
                    cond:314_1 = temp115_1 != 0
                    cond:331_1 = temp115_1 == 0
                    cond:332_1 = temp115_1 != 0
                    
                    if (temp115_1 != 0)
                        goto label_140243b2a
                    
                    goto label_140243c1b
                
            label_140243b11:
                char temp114_1 = temp0_1460 & 4
                cond:313_1 = temp114_1 == 0
                cond:314_1 = temp114_1 != 0
                cond:331_1 = temp114_1 == 0
                cond:332_1 = temp114_1 != 0
                
                if (temp114_1 == 0)
                label_140243c1b:
                    
                    if (not(cond:313_1))
                    label_140243c31:
                        arg_40 = _mm_shuffle_ps(arg_40, _mm_shuffle_ps(zx.o(0), arg_40, 0x30), 0x84)
                        
                        if (cond:332_1)
                            goto label_140243b4b
                        
                        goto label_140243c3c
                else
                label_140243b2a:
                    arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zx.o(0), arg17, 0x30), 0x84)
                    
                    if (cond:314_1)
                        goto label_140243c31
                
                bool cond:343_1
                bool cond:358_1
                bool cond:359_1
                bool cond:344_1
                
                if (cond:331_1)
                label_140243c3c:
                    char temp128_1 = temp0_1460 & 8
                    cond:343_1 = temp128_1 == 0
                    cond:344_1 = temp128_1 != 0
                    cond:358_1 = temp128_1 == 0
                    cond:359_1 = temp128_1 == 0
                    
                    if (temp128_1 != 0)
                    label_140243c55:
                        arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zx.o(0), arg17, 0x20), 0x24)
                        
                        if (cond:344_1)
                            goto label_140243b6f
                        
                        goto label_140243c60
                else
                label_140243b4b:
                    arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zx.o(0), arg18, 0x30), 0x84)
                    char temp129_1 = temp0_1460 & 8
                    cond:343_1 = temp129_1 == 0
                    cond:344_1 = temp129_1 != 0
                    cond:358_1 = temp129_1 == 0
                    cond:359_1 = temp129_1 == 0
                    
                    if (temp129_1 != 0)
                        goto label_140243c55
                
                if (cond:343_1)
                label_140243c60:
                    zmm7 = arg11
                    
                    if (not(cond:358_1))
                        arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zx.o(0), arg18, 0x20), 0x24)
                else
                label_140243b6f:
                    arg_40 = _mm_shuffle_ps(arg_40, _mm_shuffle_ps(zx.o(0), arg_40, 0x20), 0x24)
                    zmm7 = arg11
                    
                    if (not(cond:359_1))
                        arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zx.o(0), arg18, 0x20), 0x24)
            
            char temp0_1482 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm3), 0x1f))
            
            if (temp0_1482 != 0)
                char temp83_1 = temp0_1482 & 1
                
                if (temp83_1 != 0)
                    arg17[0] = 0
                    
                    if (temp83_1 != 0)
                        goto label_140243d8c
                else if (temp83_1 != 0)
                label_140243d8c:
                    arg_40[0] = 0
                    
                    if (temp83_1 != 0)
                        goto label_140243cdd
                    
                    goto label_140243d9b
                
                bool cond:278_1
                bool cond:279_1
                bool cond:301_1
                bool cond:302_1
                
                if (temp83_1 != 0)
                label_140243cdd:
                    arg18[0] = 0
                    char temp107_1 = temp0_1482 & 2
                    cond:278_1 = temp107_1 == 0
                    cond:279_1 = temp107_1 != 0
                    cond:301_1 = temp107_1 == 0
                    cond:302_1 = temp107_1 != 0
                    
                    if (temp107_1 != 0)
                        goto label_140243db4
                    
                    goto label_140243cef
                
            label_140243d9b:
                char temp106_1 = temp0_1482 & 2
                cond:278_1 = temp106_1 == 0
                cond:279_1 = temp106_1 != 0
                cond:301_1 = temp106_1 == 0
                cond:302_1 = temp106_1 != 0
                
                if (temp106_1 == 0)
                label_140243cef:
                    
                    if (not(cond:278_1))
                    label_140243d05:
                        arg_40 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg_40, 0), arg_40, 0xe2)
                        
                        if (cond:302_1)
                            goto label_140243dd5
                        
                        goto label_140243d10
                else
                label_140243db4:
                    arg17 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg17, 0), arg17, 0xe2)
                    
                    if (cond:279_1)
                        goto label_140243d05
                
                bool cond:329_1
                bool cond:330_1
                bool cond:339_1
                bool cond:340_1
                
                if (not(cond:301_1))
                label_140243dd5:
                    arg18 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg18, 0), arg18, 0xe2)
                    char temp125_1 = temp0_1482 & 4
                    cond:329_1 = temp125_1 == 0
                    cond:330_1 = temp125_1 != 0
                    cond:339_1 = temp125_1 == 0
                    cond:340_1 = temp125_1 != 0
                    
                    if (temp125_1 != 0)
                        goto label_140243d29
                    
                    goto label_140243de3
                
            label_140243d10:
                char temp124_1 = temp0_1482 & 4
                cond:329_1 = temp124_1 == 0
                cond:330_1 = temp124_1 != 0
                cond:339_1 = temp124_1 == 0
                cond:340_1 = temp124_1 != 0
                
                if (temp124_1 == 0)
                label_140243de3:
                    
                    if (not(cond:329_1))
                    label_140243df9:
                        arg_40 = _mm_shuffle_ps(arg_40, _mm_shuffle_ps(zx.o(0), arg_40, 0x30), 0x84)
                        
                        if (cond:340_1)
                            goto label_140243d4a
                        
                        goto label_140243e04
                else
                label_140243d29:
                    arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zx.o(0), arg17, 0x30), 0x84)
                    
                    if (cond:330_1)
                        goto label_140243df9
                
                bool cond:356_1
                bool cond:357_1
                bool cond:366_1
                bool cond:367_1
                
                if (not(cond:339_1))
                label_140243d4a:
                    arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zx.o(0), arg18, 0x30), 0x84)
                    char temp137_1 = temp0_1482 & 8
                    cond:356_1 = temp137_1 == 0
                    cond:357_1 = temp137_1 != 0
                    cond:366_1 = temp137_1 == 0
                    cond:367_1 = temp137_1 == 0
                    
                    if (temp137_1 != 0)
                        goto label_140243e1d
                    
                    goto label_140243d58
                
            label_140243e04:
                char temp136_1 = temp0_1482 & 8
                cond:356_1 = temp136_1 == 0
                cond:357_1 = temp136_1 != 0
                cond:366_1 = temp136_1 == 0
                cond:367_1 = temp136_1 == 0
                
                if (temp136_1 != 0)
                label_140243e1d:
                    arg17 = _mm_shuffle_ps(arg17, _mm_shuffle_ps(zx.o(0), arg17, 0x20), 0x24)
                    
                    if (cond:357_1)
                        goto label_140243d6e
                    
                    goto label_140243e28
                
            label_140243d58:
                
                if (cond:356_1)
                label_140243e28:
                    
                    if (cond:366_1)
                        continue
                else
                label_140243d6e:
                    arg_40 = _mm_shuffle_ps(arg_40, _mm_shuffle_ps(zx.o(0), arg_40, 0x20), 0x24)
                    
                    if (cond:367_1)
                        continue
                
                arg18 = _mm_shuffle_ps(arg18, _mm_shuffle_ps(zx.o(0), arg18, 0x20), 0x24)
