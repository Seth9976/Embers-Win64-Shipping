// 函数: sub_1400c467e
// 地址: 0x1400c467e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    uint32_t arg_120[0x4]
    float zmm9[0x4] = *(&arg_120 + arg5)
    arg5 += 0x10
    
    while (true)
        float temp0_1[0x4] = _mm_cmpeq_ps(zx.o(0), zmm9, 1)
        uint32_t temp0_3 = _mm_movemask_ps(_mm_and_ps(temp0_1, arg11))
        float arg_30[0x4]
        void arg_38
        void arg_3c
        
        if (temp0_3 != 0)
            char rax_2 = temp0_3.b
            
            if ((rax_2 & 1) == 0)
                if ((rax_2 & 2) != 0)
                    goto label_1400c4775
                
                goto label_1400c46b4
            
            *(&arg_30 + arg5) = zmm9[0]
            
            if ((rax_2 & 2) != 0)
            label_1400c4775:
                *(&arg_30[1] + arg5) = _mm_shuffle_epi32(zmm9, 0xe5)[0]
                
                if ((rax_2 & 4) == 0)
                    goto label_1400c46bc
                
                goto label_1400c4789
            
        label_1400c46b4:
            
            if ((rax_2 & 4) != 0)
            label_1400c4789:
                *(&arg_38 + arg5) = _mm_shuffle_epi32(zmm9, 0x4e)[0]
                
                if ((rax_2 & 8) != 0)
                    *(&arg_3c + arg5) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
            else
            label_1400c46bc:
                
                if ((rax_2 & 8) != 0)
                    *(&arg_3c + arg5) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
        
        float zmm2[0x4] = _mm_andnot_ps(temp0_1, arg11)
        float arg_b0[0x4]
        float zmm1[0x4]
        
        if (_mm_movemask_ps(zmm2) != 0)
            zmm1 = *(&arg_b0 + arg5)
            float temp0_7[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
            uint32_t temp0_9 = _mm_movemask_ps(_mm_and_ps(zmm2, temp0_7))
            
            if (temp0_9 != 0)
                zmm1 ^= arg12
                char rax_5 = temp0_9.b
                
                if ((rax_5 & 1) == 0)
                    if ((rax_5 & 2) != 0)
                        goto label_1400c47af
                    
                    goto label_1400c4707
                
                *(&arg_30 + arg5) = zmm1[0]
                
                if ((rax_5 & 2) != 0)
                label_1400c47af:
                    *(&arg_30[1] + arg5) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                    
                    if ((rax_5 & 4) == 0)
                        goto label_1400c470f
                    
                    goto label_1400c47c2
                
            label_1400c4707:
                
                if ((rax_5 & 4) != 0)
                label_1400c47c2:
                    *(&arg_38 + arg5) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                    
                    if ((rax_5 & 8) != 0)
                        *(&arg_3c + arg5) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                else
                label_1400c470f:
                    
                    if ((rax_5 & 8) != 0)
                        *(&arg_3c + arg5) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
            
            uint32_t temp0_12 = _mm_movemask_ps(_mm_andnot_ps(temp0_7, zmm2))
            
            if (temp0_12 != 0)
                char rax_7 = temp0_12.b
                
                if ((rax_7 & 1) == 0)
                    if ((rax_7 & 2) != 0)
                        goto label_1400c47e5
                    
                    goto label_1400c473a
                
                *(&arg_30 + arg5) = 0
                
                if ((rax_7 & 2) != 0)
                label_1400c47e5:
                    *(&arg_30[1] + arg5) = 0
                    
                    if ((rax_7 & 4) == 0)
                        goto label_1400c4742
                    
                    goto label_1400c47f5
                
            label_1400c473a:
                
                if ((rax_7 & 4) != 0)
                label_1400c47f5:
                    *(&arg_38 + arg5) = 0
                    
                    if ((rax_7 & 8) != 0)
                        *(&arg_3c + arg5) = 0
                else
                label_1400c4742:
                    
                    if ((rax_7 & 8) != 0)
                        *(&arg_3c + arg5) = 0
        
        if (arg5 != 0x20)
            break
        
        zmm1 = arg_30
        float temp0_18[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, zmm1), data_142d8f750)
        float temp0_20[0x4] = _mm_add_ps(_mm_mul_ps(arg20, arg20), temp0_18)
        float temp0_22[0x4] = _mm_add_ps(_mm_mul_ps(arg21, arg21), temp0_20)
        float temp0_23[0x4] = _mm_rsqrt_ps(temp0_22)
        float temp0_25[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_22, temp0_23), temp0_23)
        float temp0_28[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_25), temp0_23), data_142d3f640)
        float temp0_29[0x4] = _mm_rcp_ps(temp0_28)
        float temp0_30[0x4] = _mm_mul_ps(temp0_28, temp0_29)
        float temp0_32[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_30), temp0_29)
        arg17 = _mm_or_ps(_mm_and_ps(arg17, arg16), _mm_and_ps(temp0_32, arg11))
        
        while (true)
            uint32_t zmm7[0x4] = __subps_xmmps_memps(arg17, arg27)
            float temp0_37[0x4] = __cmpps_xmmps_memps_immb(zmm7, data_142fc95d0, 1)
            char result = _mm_movemask_ps(temp0_37)
            arg16 = __return_addr.o
            float zmm4[0x4]
            float zmm5[0x4]
            
            if (result != 0)
                float temp0_39[0x4] = _mm_mul_ps(arg19, zmm7)
                zmm2 = arg16
                char temp0_40 = result & 1
                
                if (temp0_40 != 0)
                    zmm2 = arg16
                    zmm2[0] = zmm2[0] + temp0_39[0]
                    arg13 = _mm_mul_ps(arg13, zmm7)
                    zmm4 = arg18
                    
                    if (temp0_40 != 0)
                        goto label_1400c497e
                    
                    goto label_1400c48c2
                
                arg13 = _mm_mul_ps(arg13, zmm7)
                zmm4 = arg18
                
                if (temp0_40 != 0)
                label_1400c497e:
                    zmm4 = arg18
                    zmm4[0] = zmm4[0] + arg13[0]
                    arg14 = _mm_mul_ps(arg14, zmm7)
                    zmm5 = arg15
                    
                    if (temp0_40 != 0)
                        goto label_1400c48d0
                    
                    goto label_1400c4995
                
            label_1400c48c2:
                arg14 = _mm_mul_ps(arg14, zmm7)
                zmm5 = arg15
                bool cond:6_1
                bool cond:7_1
                bool cond:9_1
                bool cond:10_1
                
                if (temp0_40 != 0)
                label_1400c48d0:
                    zmm5 = arg15
                    zmm5[0] = zmm5[0] + arg14[0]
                    arg16 = _mm_add_ps(arg16, temp0_39)
                    char temp2_1 = result & 2
                    cond:6_1 = temp2_1 == 0
                    cond:7_1 = temp2_1 != 0
                    cond:9_1 = temp2_1 == 0
                    cond:10_1 = temp2_1 != 0
                    
                    if (temp2_1 != 0)
                        goto label_1400c49ae
                    
                    goto label_1400c48e6
                
            label_1400c4995:
                arg16 = _mm_add_ps(arg16, temp0_39)
                char temp1_1 = result & 2
                cond:6_1 = temp1_1 == 0
                cond:7_1 = temp1_1 != 0
                cond:9_1 = temp1_1 == 0
                cond:10_1 = temp1_1 != 0
                
                if (temp1_1 != 0)
                label_1400c49ae:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg16, zmm2, 1), zmm2, 0xe2)
                    arg18 = _mm_add_ps(arg18, arg13)
                    
                    if (cond:7_1)
                        goto label_1400c48fc
                    
                    goto label_1400c49bb
                
            label_1400c48e6:
                arg18 = _mm_add_ps(arg18, arg13)
                
                if (not(cond:6_1))
                label_1400c48fc:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg18, zmm4, 1), zmm4, 0xe2)
                    arg15 = _mm_add_ps(arg15, arg14)
                    
                    if (cond:10_1)
                        goto label_1400c49d1
                    
                    goto label_1400c4909
                
            label_1400c49bb:
                arg15 = _mm_add_ps(arg15, arg14)
                bool cond:11_1
                bool cond:12_1
                bool cond:14_1
                bool cond:15_1
                
                if (not(cond:9_1))
                label_1400c49d1:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(arg15, zmm5, 1), zmm5, 0xe2)
                    char temp4_1 = result & 4
                    cond:11_1 = temp4_1 == 0
                    cond:12_1 = temp4_1 != 0
                    cond:14_1 = temp4_1 == 0
                    cond:15_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_1400c491a
                    
                    goto label_1400c49dd
                
            label_1400c4909:
                char temp3_1 = result & 4
                cond:11_1 = temp3_1 == 0
                cond:12_1 = temp3_1 != 0
                cond:14_1 = temp3_1 == 0
                cond:15_1 = temp3_1 != 0
                
                if (temp3_1 == 0)
                label_1400c49dd:
                    
                    if (not(cond:11_1))
                    label_1400c49eb:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg18, zmm4, 0x32), 0x84)
                        
                        if (cond:15_1)
                            goto label_1400c4932
                        
                        goto label_1400c49f5
                else
                label_1400c491a:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg16, zmm2, 0x32), 0x84)
                    
                    if (cond:12_1)
                        goto label_1400c49eb
                
                bool cond:19_1
                bool cond:20_1
                bool cond:23_1
                bool cond:24_1
                
                if (not(cond:14_1))
                label_1400c4932:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(arg15, zmm5, 0x32), 0x84)
                    char temp6_1 = result & 8
                    cond:19_1 = temp6_1 == 0
                    cond:20_1 = temp6_1 != 0
                    cond:23_1 = temp6_1 == 0
                    cond:24_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_1400c4a08
                    
                    goto label_1400c493f
                
            label_1400c49f5:
                char temp5_1 = result & 8
                cond:19_1 = temp5_1 == 0
                cond:20_1 = temp5_1 != 0
                cond:23_1 = temp5_1 == 0
                cond:24_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                label_1400c4a08:
                    arg16 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg16, zmm2, 0x23), 0x24)
                    
                    if (cond:20_1)
                        goto label_1400c4953
                    
                    goto label_1400c4a12
                
            label_1400c493f:
                arg16 = zmm2
                
                if (cond:19_1)
                label_1400c4a12:
                    arg18 = zmm4
                    
                    if (not(cond:23_1))
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(arg15, zmm5, 0x23), 0x24)
                else
                label_1400c4953:
                    arg18 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg18, zmm4, 0x23), 0x24)
                    
                    if (cond:24_1)
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(arg15, zmm5, 0x23), 0x24)
                
                uint32_t temp0_70[0x4] = _mm_and_ps(_mm_add_ps(zmm7, arg22), temp0_37)
                arg15 = zmm5
                arg22 = _mm_or_ps(_mm_andnot_ps(temp0_37, arg22), temp0_70)
            
            uint32_t arg_20[0x4] = arg17
            arg8 = zx.q(arg8.d + 4)
            float arg_c0[0x4]
            float arg_d0[0x4]
            float arg_e0[0x4]
            uint32_t arg_110[0x4]
            uint32_t arg_130[0x4]
            uint32_t arg_140[0x4]
            float zmm3[0x4]
            
            if (arg8.d s>= arg7)
                if (arg8.d s>= arg6)
                    zmm5 = arg33
                    arg13 = arg22
                else
                    float arg_70[0x4] = arg15
                    __return_addr.o = arg16
                    zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg8.d), 0), data_142e11d00)
                    arg17 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg6), 0), zmm1)
                    zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & arg17
                    int64_t rsi = sx.q(zmm2[0])
                    void* rax_9 = &(*arg4)[rsi]
                    zmm1 = (*arg4)[rsi]
                    int64_t rdi = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                    void* rsi_2 = &(*arg4)[rdi]
                    float temp0_80[0x4] = _mm_unpacklo_ps(zmm1, (*arg4)[rdi][0].q)
                    int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                    void* rdi_2 = &(*arg4)[rbx_1]
                    zmm3 = (*arg4)[rbx_1]
                    int64_t rbp = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                    void* rbx_3 = &(*arg4)[rbp]
                    float temp0_83[0x4] = _mm_unpacklo_ps(zmm3, (*arg4)[rbp][0].q)
                    zmm1 = temp0_80[0].q | temp0_83[0].q << 0x40
                    zmm3 = data_142fc95e0 & arg17
                    float temp0_85[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_9), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_2))[0].q)
                    float temp0_88[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_2), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_3))[0].q)
                    arg13 = temp0_85[0].q | temp0_88[0].q << 0x40
                    zmm3 = data_142fc95f0 & arg17
                    float temp0_90[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_9), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_2))[0].q)
                    float temp0_93[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_2), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_3))[0].q)
                    zmm5 = temp0_90[0].q | temp0_93[0].q << 0x40
                    float arg_1c0[0x4] = arg13
                    float arg_1e0[0x4] = zx.o(0)
                    arg12 = (*arg3)[3]
                    arg12 = _mm_shuffle_ps(arg12, arg12, 0)
                    arg_110 = arg12
                    arg_120 = arg12
                    arg_130 = arg12
                    arg_140 = arg12
                    zmm7 = *arg3
                    zmm2 = (*arg3)[1]
                    zmm4 = (*arg3)[2]
                    float temp0_95[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
                    float temp0_97[0x4] = _mm_mul_ps(arg13, zmm7)
                    zmm7 = _mm_mul_ps(zmm7, zmm5)
                    float temp0_99[0x4] = _mm_mul_ps(zmm5, temp0_95)
                    float temp0_100[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    float temp0_101[0x4] = _mm_mul_ps(temp0_95, zmm1)
                    float temp0_102[0x4] = _mm_mul_ps(zmm1, temp0_100)
                    float temp0_103[0x4] = _mm_mul_ps(zx.o(0), arg12)
                    float temp0_105[0x4] = _mm_sub_ps(temp0_99, _mm_mul_ps(temp0_100, arg13))
                    float temp0_106[0x4] = _mm_sub_ps(temp0_102, zmm7)
                    float temp0_107[0x4] = _mm_sub_ps(temp0_97, temp0_101)
                    float temp0_108[0x4] = _mm_sub_ps(temp0_103, temp0_103)
                    float temp0_109[0x4] = _mm_add_ps(temp0_105, temp0_105)
                    float temp0_110[0x4] = _mm_add_ps(temp0_106, temp0_106)
                    float temp0_111[0x4] = _mm_add_ps(temp0_107, temp0_107)
                    float temp0_112[0x4] = _mm_add_ps(temp0_108, temp0_108)
                    arg_b0 = temp0_109
                    arg_c0 = temp0_110
                    arg_d0 = temp0_111
                    arg_e0 = temp0_112
                    arg13 = arg12
                    arg14 = arg12
                    float temp0_113[0x4] = _mm_mul_ps(temp0_112, arg12)
                    arg12 = _mm_mul_ps(arg12, temp0_109)
                    float temp0_115[0x4] = _mm_mul_ps(arg13, temp0_110)
                    float temp0_116[0x4] = _mm_mul_ps(arg14, temp0_111)
                    arg12 = __addps_xmmps_memps(arg12, zmm1)
                    float temp0_118[0x4] = __addps_xmmps_memps(temp0_115, arg_1c0)
                    float temp0_119[0x4] = __addps_xmmps_memps(temp0_116, zmm5)
                    float temp0_120[0x4] = __addps_xmmps_memps(temp0_113, arg_1e0)
                    arg_30 = arg12
                    float arg_60[0x4] = temp0_120
                    zmm4 = *arg3
                    zmm2 = (*arg3)[1]
                    zmm7 = (*arg3)[2]
                    float temp0_121[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    float temp0_122[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    float temp0_123[0x4] = _mm_mul_ps(temp0_110, temp0_122)
                    float temp0_124[0x4] = _mm_mul_ps(temp0_122, temp0_111)
                    float temp0_125[0x4] = _mm_mul_ps(temp0_111, temp0_121)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
                    float temp0_127[0x4] = _mm_mul_ps(temp0_121, temp0_109)
                    float temp0_128[0x4] = _mm_mul_ps(temp0_109, zmm7)
                    float temp0_130[0x4] = _mm_sub_ps(temp0_125, _mm_mul_ps(zmm7, temp0_110))
                    float temp0_131[0x4] = _mm_sub_ps(temp0_128, temp0_124)
                    float temp0_132[0x4] = _mm_sub_ps(temp0_123, temp0_127)
                    float temp0_133[0x4] = _mm_add_ps(temp0_130, arg12)
                    float temp0_134[0x4] = _mm_add_ps(temp0_131, temp0_118)
                    float temp0_135[0x4] = _mm_add_ps(temp0_132, temp0_119)
                    arg14 = arg3[1][0]
                    arg15 = (*arg3)[5]
                    float temp0_137[0x4] = _mm_add_ps(_mm_shuffle_ps(arg14, arg14, 0), temp0_133)
                    arg15 = _mm_add_ps(_mm_shuffle_ps(arg15, arg15, 0), temp0_134)
                    arg11 = (*arg3)[6]
                    float temp0_141[0x4] = _mm_add_ps(_mm_shuffle_ps(arg11, arg11, 0), temp0_135)
                    zmm2 = *arg2
                    arg13 = (*arg2)[1]
                    float temp0_142[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm1 = _mm_sub_ps(temp0_137, temp0_142)
                    float temp0_144[0x4] = _mm_shuffle_ps(arg13, arg13, 0)
                    float temp0_145[0x4] = _mm_sub_ps(arg15, temp0_144)
                    zmm9 = (*arg2)[2]
                    float temp0_146[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                    float temp0_147[0x4] = _mm_sub_ps(temp0_141, temp0_146)
                    arg_110 = zmm1
                    arg_120 = temp0_145
                    arg_130 = temp0_147
                    zmm3 = *arg1
                    zmm5 = (*arg1)[1]
                    float temp0_148[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                    float temp0_149[0x4] = _mm_sub_ps(temp0_148, temp0_137)
                    float temp0_150[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                    float temp0_151[0x4] = _mm_sub_ps(temp0_150, arg15)
                    arg12 = _mm_and_ps(_mm_cmpeq_ps(temp0_137, temp0_142, 6), arg17)
                    char temp0_155 = _mm_movemask_ps(_mm_cmpeq_epi32(arg12, arg17))
                    zmm4 = (*arg1)[2]
                    float temp0_156[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    arg_20 = temp0_141
                    float temp0_157[0x4] = _mm_sub_ps(temp0_156, temp0_141)
                    arg_b0 = temp0_149
                    arg_c0 = temp0_151
                    arg_d0 = temp0_157
                    arg24 = arg15
                    arg14 = _mm_cmpeq_ps(temp0_137, temp0_142, 2)
                    
                    if (temp0_155 != 0xf)
                        arg15 = _mm_cmpeq_ps(arg15, temp0_144, 2)
                        arg14 = _mm_and_ps(_mm_and_ps(arg14, arg17), arg15)
                        arg12 = _mm_andnot_ps(arg14, arg17)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(arg12, arg17)) != 0xf)
                        float temp0_165[0x4] = _mm_cmpeq_ps(arg_20, temp0_146, 2)
                        arg14 = _mm_and_ps(_mm_and_ps(arg14, arg17), temp0_165)
                        arg12 = arg14 ^ arg17
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(arg12, arg17)) != 0xf)
                        arg14 = _mm_and_ps(arg14, arg17)
                        zmm2 = _mm_cmpeq_ps(temp0_148, temp0_137, 2)
                        zmm3 = _mm_and_ps(_mm_cmpeq_ps(temp0_148, temp0_137, 6), arg14)
                        
                        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, arg14)) != 0xf)
                            float temp0_176[0x4] = __cmpps_xmmps_memps_immb(temp0_150, arg24, 2)
                            zmm2 = _mm_and_ps(_mm_and_ps(zmm2, arg14), temp0_176)
                            zmm3 = zmm2 ^ arg14
                        
                        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm3, arg14)) != 0xf)
                            float temp0_181[0x4] = __cmpps_xmmps_memps_immb(temp0_156, arg_20, 2)
                            zmm2 = _mm_and_ps(_mm_and_ps(zmm2, arg14), temp0_181)
                        
                        arg14 = _mm_and_ps(arg14, zmm2)
                    
                    if (_mm_movemask_ps(_mm_and_ps(arg14, arg17)) == 0)
                        arg11 = arg49
                        arg18 = arg18
                        arg16 = __return_addr.o
                    else
                        float temp0_187[0x4] = _mm_max_ps(temp0_149, zmm1)
                        float temp0_188[0x4] = __maxps_xmmps_memps(temp0_151, temp0_145)
                        float temp0_189[0x4] = __maxps_xmmps_memps(temp0_157, temp0_147)
                        float temp0_190[0x4] = _mm_cmpeq_ps(temp0_188, temp0_187, 1)
                        zmm4 = _mm_and_ps(arg14, temp0_190)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm4, arg17)) != 0)
                            float temp0_194[0x4] = _mm_cmpeq_ps(temp0_189, temp0_187, 5)
                            arg15 = _mm_and_ps(
                                _mm_and_ps(_mm_cmpeq_ps(temp0_189, temp0_187, 1), zmm4), temp0_187)
                            zmm2 = _mm_and_ps(temp0_194, zmm4)
                            
                            if (_mm_movemask_ps(_mm_and_ps(zmm2, arg17)) != 0)
                                arg15 = _mm_or_ps(arg15, _mm_and_ps(zmm2, temp0_189))
                        
                        arg11 = arg49
                        zmm3 = _mm_andnot_ps(temp0_190, arg14)
                        
                        if (_mm_movemask_ps(_mm_and_ps(zmm3, arg17)) == 0)
                            arg18 = arg18
                            arg16 = __return_addr.o
                        else
                            float temp0_206[0x4] = _mm_cmpeq_ps(temp0_189, temp0_188, 1)
                            zmm4 = _mm_and_ps(zmm3, temp0_206)
                            
                            if (_mm_movemask_ps(_mm_and_ps(zmm4, arg17)) != 0)
                                zmm5 = _mm_andnot_ps(zmm4, arg15)
                                arg15 = _mm_or_ps(_mm_and_ps(temp0_188, zmm4), zmm5)
                            
                            zmm2 = _mm_andnot_ps(temp0_206, zmm3)
                            arg16 = __return_addr.o
                            
                            if (_mm_movemask_ps(_mm_and_ps(zmm2, arg17)) != 0)
                                zmm3 = _mm_andnot_ps(zmm2, arg15)
                                arg15 = _mm_or_ps(_mm_and_ps(temp0_189, zmm2), zmm3)
                            
                            arg18 = arg18
                    
                    zmm2 = _mm_andnot_ps(arg14, arg17)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                        zmm2 = _mm_cmpeq_epi32(zmm2, zmm2) ^ arg14
                        int64_t rax_25 = 0
                        zmm7 = data_142d3f780
                        
                        while (true)
                            float temp0_222[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                            zmm4 = _mm_and_ps(temp0_222, zmm2)
                            
                            if (_mm_movemask_ps(_mm_and_ps(zmm4, arg17)) != 0)
                                char temp0_226 = _mm_movemask_ps(zmm4)
                                
                                if ((temp0_226 & 1) == 0)
                                    if ((temp0_226 & 2) != 0)
                                        goto label_1400c5654
                                    
                                    goto label_1400c556c
                                
                                *(&arg_30 + rax_25) = zmm1[0]
                                
                                if ((temp0_226 & 2) != 0)
                                label_1400c5654:
                                    *(&arg_30[1] + rax_25) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                    
                                    if ((temp0_226 & 4) == 0)
                                        goto label_1400c5575
                                    
                                    goto label_1400c5668
                                
                            label_1400c556c:
                                
                                if ((temp0_226 & 4) != 0)
                                label_1400c5668:
                                    *(&arg_38 + rax_25) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                                    
                                    if ((temp0_226 & 8) != 0)
                                        *(&arg_3c + rax_25) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                                else
                                label_1400c5575:
                                    
                                    if ((temp0_226 & 8) != 0)
                                        *(&arg_3c + rax_25) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                            
                            zmm3 = _mm_andnot_ps(temp0_222, zmm2)
                            
                            if (_mm_movemask_ps(_mm_and_ps(zmm3, arg17)) != 0)
                                zmm4 = *(&arg_b0 + rax_25)
                                float temp0_231[0x4] = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                                zmm5 = _mm_and_ps(zmm3, temp0_231)
                                
                                if (_mm_movemask_ps(_mm_and_ps(zmm5, arg17)) != 0)
                                    zmm4 ^= zmm7
                                    char temp0_235 = _mm_movemask_ps(zmm5)
                                    
                                    if ((temp0_235 & 1) == 0)
                                        if ((temp0_235 & 2) != 0)
                                            goto label_1400c5690
                                        
                                        goto label_1400c55d5
                                    
                                    *(&arg_30 + rax_25) = zmm4[0]
                                    
                                    if ((temp0_235 & 2) != 0)
                                    label_1400c5690:
                                        *(&arg_30[1] + rax_25) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                                        
                                        if ((temp0_235 & 4) == 0)
                                            goto label_1400c55de
                                        
                                        goto label_1400c56a4
                                    
                                label_1400c55d5:
                                    
                                    if ((temp0_235 & 4) != 0)
                                    label_1400c56a4:
                                        *(&arg_38 + rax_25) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                                        
                                        if ((temp0_235 & 8) != 0)
                                            *(&arg_3c + rax_25) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                                    else
                                    label_1400c55de:
                                        
                                        if ((temp0_235 & 8) != 0)
                                            *(&arg_3c + rax_25) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                                
                                zmm1 = _mm_andnot_ps(temp0_231, zmm3)
                                
                                if (_mm_movemask_ps(_mm_and_ps(zmm1, arg17)) != 0)
                                    char temp0_240 = _mm_movemask_ps(zmm1)
                                    
                                    if ((temp0_240 & 1) == 0)
                                        if ((temp0_240 & 2) != 0)
                                            goto label_1400c56c9
                                        
                                        goto label_1400c5614
                                    
                                    *(&arg_30 + rax_25) = 0
                                    
                                    if ((temp0_240 & 2) != 0)
                                    label_1400c56c9:
                                        *(&arg_30[1] + rax_25) = 0
                                        
                                        if ((temp0_240 & 4) == 0)
                                            goto label_1400c561d
                                        
                                        goto label_1400c56da
                                    
                                label_1400c5614:
                                    
                                    if ((temp0_240 & 4) != 0)
                                    label_1400c56da:
                                        *(&arg_38 + rax_25) = 0
                                        
                                        if ((temp0_240 & 8) != 0)
                                            *(&arg_3c + rax_25) = 0
                                    else
                                    label_1400c561d:
                                        
                                        if ((temp0_240 & 8) != 0)
                                            *(&arg_3c + rax_25) = 0
                            
                            if (rax_25 == 0x20)
                                break
                            
                            zmm1 = *(&arg_120 + rax_25)
                            rax_25 += 0x10
                        
                        zmm1 = arg_30
                        float temp0_246[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm1, zmm1))
                        float temp0_248[0x4] =
                            _mm_add_ps(_mm_mul_ps(temp0_118, temp0_118), temp0_246)
                        float temp0_250[0x4] =
                            _mm_add_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_248)
                        float temp0_251[0x4] = _mm_rsqrt_ps(temp0_250)
                        float temp0_253[0x4] =
                            _mm_mul_ps(_mm_mul_ps(temp0_250, temp0_251), temp0_251)
                        float temp0_256[0x4] = __mulps_xmmps_memps(
                            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_253), temp0_251), 
                            data_142d3f640)
                        float temp0_257[0x4] = _mm_rcp_ps(temp0_256)
                        float temp0_258[0x4] = _mm_mul_ps(temp0_256, temp0_257)
                        float temp0_260[0x4] =
                            _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_258), temp0_257)
                        arg15 = _mm_or_ps(_mm_and_ps(arg15, arg14), _mm_and_ps(temp0_260, zmm2))
                    
                    float temp0_265[0x4] = _mm_sub_ps(arg15, _mm_shuffle_ps(arg11, arg11, 0))
                    zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_265, data_142fc95d0, 1), arg17)
                    result = _mm_movemask_ps(zmm1)
                    zmm5 = arg33
                    arg13 = arg22
                    
                    if (result == 0)
                        arg15 = arg_70
                    else
                        float temp0_269[0x4] = _mm_mul_ps(temp0_137, temp0_265)
                        zmm3 = arg16
                        char temp7_1 = result & 1
                        
                        if (temp7_1 != 0)
                            zmm3 = arg16
                            zmm3[0] = zmm3[0] + temp0_269[0]
                        
                        zmm7 = _mm_mul_ps(arg24, temp0_265)
                        zmm2 = arg18
                        
                        if (temp7_1 != 0)
                            zmm2 = arg18
                            zmm2[0] = zmm2[0] f+ zmm7[0]
                            arg12 = _mm_mul_ps(arg_20, temp0_265)
                            arg11 = arg_70
                            
                            if (temp7_1 != 0)
                                goto label_1400c588f
                            
                            goto label_1400c57da
                        
                        arg12 = _mm_mul_ps(arg_20, temp0_265)
                        arg11 = arg_70
                        bool cond:25_1
                        bool cond:26_1
                        bool cond:27_1
                        bool cond:28_1
                        
                        if (temp7_1 != 0)
                        label_1400c588f:
                            arg11 = arg_70
                            arg11[0] = arg11[0] f+ arg12[0]
                            arg16 = _mm_add_ps(arg16, temp0_269)
                            char temp9_1 = result & 2
                            cond:25_1 = temp9_1 == 0
                            cond:26_1 = temp9_1 != 0
                            cond:27_1 = temp9_1 == 0
                            cond:28_1 = temp9_1 != 0
                            
                            if (temp9_1 != 0)
                                goto label_1400c57f2
                            
                            goto label_1400c58a3
                        
                    label_1400c57da:
                        arg16 = _mm_add_ps(arg16, temp0_269)
                        char temp8_1 = result & 2
                        cond:25_1 = temp8_1 == 0
                        cond:26_1 = temp8_1 != 0
                        cond:27_1 = temp8_1 == 0
                        cond:28_1 = temp8_1 != 0
                        
                        if (temp8_1 != 0)
                        label_1400c57f2:
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg16, zmm3, 1), zmm3, 0xe2)
                            arg18 = _mm_add_ps(arg18, zmm7)
                            
                            if (cond:26_1)
                                goto label_1400c58b9
                            
                            goto label_1400c57ff
                        
                    label_1400c58a3:
                        arg18 = _mm_add_ps(arg18, zmm7)
                        
                        if (not(cond:25_1))
                        label_1400c58b9:
                            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg18, zmm2, 1), zmm2, 0xe2)
                            zmm9 = _mm_add_ps(arg_70, arg12)
                            
                            if (cond:28_1)
                                goto label_1400c5815
                            
                            goto label_1400c58c6
                        
                    label_1400c57ff:
                        zmm9 = _mm_add_ps(arg_70, arg12)
                        bool cond:29_1
                        bool cond:30_1
                        bool cond:31_1
                        bool cond:32_1
                        
                        if (not(cond:27_1))
                        label_1400c5815:
                            arg11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, arg11, 1), arg11, 0xe2)
                            char temp11_1 = result & 4
                            cond:29_1 = temp11_1 == 0
                            cond:30_1 = temp11_1 != 0
                            cond:31_1 = temp11_1 == 0
                            cond:32_1 = temp11_1 != 0
                            
                            if (temp11_1 != 0)
                                goto label_1400c58d6
                            
                            goto label_1400c5820
                        
                    label_1400c58c6:
                        char temp10_1 = result & 4
                        cond:29_1 = temp10_1 == 0
                        cond:30_1 = temp10_1 != 0
                        cond:31_1 = temp10_1 == 0
                        cond:32_1 = temp10_1 != 0
                        
                        if (temp10_1 == 0)
                        label_1400c5820:
                            
                            if (not(cond:29_1))
                            label_1400c582e:
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg18, zmm2, 0x32), 0x84)
                                
                                if (cond:32_1)
                                    goto label_1400c58ee
                                
                                goto label_1400c5838
                        else
                        label_1400c58d6:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg16, zmm3, 0x32), 0x84)
                            
                            if (cond:30_1)
                                goto label_1400c582e
                        
                        bool cond:33_1
                        bool cond:34_1
                        bool cond:35_1
                        bool cond:36_1
                        
                        if (not(cond:31_1))
                        label_1400c58ee:
                            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm9, arg11, 0x32), 0x84)
                            char temp13_1 = result & 8
                            cond:33_1 = temp13_1 == 0
                            cond:34_1 = temp13_1 != 0
                            cond:35_1 = temp13_1 == 0
                            cond:36_1 = temp13_1 != 0
                            
                            if (temp13_1 != 0)
                                goto label_1400c584a
                            
                            goto label_1400c58fa
                        
                    label_1400c5838:
                        char temp12_1 = result & 8
                        cond:33_1 = temp12_1 == 0
                        cond:34_1 = temp12_1 != 0
                        cond:35_1 = temp12_1 == 0
                        cond:36_1 = temp12_1 != 0
                        
                        if (temp12_1 != 0)
                        label_1400c584a:
                            arg16 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg16, zmm3, 0x23), 0x24)
                            
                            if (cond:34_1)
                                goto label_1400c590e
                            
                            goto label_1400c5854
                        
                    label_1400c58fa:
                        arg16 = zmm3
                        
                        if (cond:33_1)
                        label_1400c5854:
                            arg18 = zmm2
                            
                            if (not(cond:35_1))
                                arg11 =
                                    _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm9, arg11, 0x23), 0x24)
                        else
                        label_1400c590e:
                            arg18 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg18, zmm2, 0x23), 0x24)
                            
                            if (cond:36_1)
                                arg11 =
                                    _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm9, arg11, 0x23), 0x24)
                        
                        arg15 = _mm_and_ps(_mm_add_ps(temp0_265, arg13), zmm1)
                        zmm1 = _mm_or_ps(_mm_andnot_ps(zmm1, arg13), arg15)
                        arg15 = arg11
                        arg13 = zmm1
                
                zmm5 = _mm_cmpeq_epi32(zmm5, zx.o(0))
                arg11 = zmm5 & not.o(arg16)
                float temp0_303[0x4] = _mm_add_ps(_mm_shuffle_epi32(arg11, 0xee), arg11)
                float temp0_304[0x4] = _mm_shuffle_ps(temp0_303, temp0_303, 0xe5)
                temp0_304[0] = temp0_304[0] + temp0_303[0]
                zmm1 = zmm5 & not.o(arg18)
                float temp0_306[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
                float temp0_307[0x4] = _mm_shuffle_ps(temp0_306, temp0_306, 0xe5)
                temp0_307[0] = temp0_307[0] + temp0_306[0]
                float temp0_308[0x4] = _mm_unpacklo_ps(temp0_304, temp0_307[0].q)
                zmm1 = zmm5 & not.o(arg15)
                float temp0_310[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
                float temp0_311[0x4] = _mm_shuffle_ps(temp0_310, temp0_310, 0xe5)
                temp0_311[0] = temp0_311[0] + temp0_310[0]
                float temp0_312[0x4] = _mm_add_ps(zx.o(*arg10)[0].q | arg10[1].d[0].q << 0x40, 
                    temp0_308[0].q | temp0_311[0].q << 0x40)
                *arg10 = temp0_312[0]
                float temp0_313[0x4] = _mm_shuffle_ps(temp0_312, temp0_312, 0xe5)
                temp0_312[0].q = temp0_312 u>> 0x40
                *(arg10 + 4) = temp0_313[0]
                arg10[1].d = temp0_312[0]
                zmm5 &= not.o(arg13)
                float temp0_315[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm5, 0xee), zmm5)
                float temp0_316[0x4] = _mm_shuffle_ps(temp0_315, temp0_315, 0xe5)
                temp0_316[0] = temp0_316[0] + temp0_315[0]
                temp0_316[0] = temp0_316[0] f+ *arg9
                *arg9 = temp0_316[0]
                return result
            
            int64_t rax_29 = sx.q((arg8 << 2).d * 3)
            zmm1 = *(arg4 + rax_29)
            arg11 = *(arg4 + rax_29 + 0x10)
            zmm2 = *(arg4 + rax_29 + 0x20)
            arg12 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm1, 0x4e), 
                    _mm_shuffle_epi32(arg11, 0xe5)[0].q), 
                zmm2, 0xc4)
            float temp0_324[0x4] = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, arg11, 0x21), 0x2c)
            float temp0_325[0x4] = _mm_shuffle_ps(zmm1, arg11, 5)
            float temp0_328[0x4] = _mm_shuffle_ps(temp0_325, 
                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(temp0_325, arg11, 0xf8), 0x22), 0x28)
            arg_b0 = temp0_324
            arg_d0 = arg12
            arg_e0 = zx.o(0)
            zmm3 = arg34
            arg_110 = zmm3
            arg_120 = zmm3
            arg_130 = zmm3
            float temp0_329[0x4] = _mm_shuffle_ps(arg24, arg24, 0)
            float temp0_330[0x4] = _mm_mul_ps(temp0_329, arg12)
            float temp0_331[0x4] = _mm_shuffle_ps(arg26, arg26, 0)
            zmm7 = _mm_mul_ps(temp0_331, temp0_324)
            float temp0_333[0x4] = _mm_shuffle_ps(arg23, arg23, 0)
            float temp0_334[0x4] = _mm_mul_ps(temp0_333, temp0_328)
            float temp0_336[0x4] = _mm_sub_ps(temp0_330, _mm_mul_ps(temp0_328, temp0_331))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(arg12, temp0_333))
            float temp0_340[0x4] = _mm_sub_ps(temp0_334, _mm_mul_ps(temp0_324, temp0_329))
            float temp0_341[0x4] = _mm_add_ps(temp0_336, temp0_336)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            float temp0_343[0x4] = _mm_add_ps(temp0_340, temp0_340)
            float temp0_344[0x4] = _mm_mul_ps(zmm3, zmm7)
            arg12 = _mm_mul_ps(temp0_341, temp0_331)
            zmm1 = zmm7
            zmm7 = _mm_mul_ps(zmm7, temp0_331)
            float temp0_351[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_343, temp0_329), zmm7), 
                __addps_xmmps_memps(_mm_mul_ps(zmm3, temp0_341), arg_b0))
            zmm7 = _mm_mul_ps(zmm3, temp0_343)
            float temp0_353[0x4] = __addps_xmmps_memps(temp0_344, temp0_328)
            zmm7 = __addps_xmmps_memps(zmm7, arg_d0)
            arg_140 = zmm3
            float temp0_355[0x4] = _mm_mul_ps(zmm1, temp0_333)
            arg12 = _mm_add_ps(_mm_sub_ps(arg12, _mm_mul_ps(temp0_343, temp0_333)), temp0_353)
            float temp0_361[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_355, _mm_mul_ps(temp0_341, temp0_329)), zmm7)
            arg19 = arg3[1][0]
            arg13 = (*arg3)[5]
            arg19 = _mm_add_ps(_mm_shuffle_ps(arg19, arg19, 0), temp0_351)
            arg13 = _mm_add_ps(_mm_shuffle_ps(arg13, arg13, 0), arg12)
            arg14 = (*arg3)[6]
            arg14 = _mm_add_ps(_mm_shuffle_ps(arg14, arg14, 0), temp0_361)
            zmm9 = _mm_sub_ps(arg19, arg25)
            arg17 = __subps_xmmps_memps(arg13, arg32)
            float temp0_370[0x4] = __subps_xmmps_memps(arg14, arg31)
            arg_110 = zmm9
            arg_120 = arg17
            arg_130 = temp0_370
            float temp0_371[0x4] = _mm_sub_ps(arg30, arg19)
            zmm7 = _mm_sub_ps(arg29, arg13)
            char temp0_374 = _mm_movemask_ps(_mm_cmpeq_ps(arg19, arg25, 6))
            float temp0_375[0x4] = _mm_sub_ps(arg28, arg14)
            arg_b0 = temp0_371
            arg_c0 = zmm7
            arg_d0 = temp0_375
            __return_addr.o = arg16
            
            if (temp0_374 != 0xf)
                float temp0_376[0x4] = _mm_cmpeq_ps(arg19, arg25, 2)
                zmm4 = (*arg2)[1]
                zmm1 = _mm_and_ps(_mm_cmpeq_ps(arg13, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_376)
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                
                if (_mm_movemask_ps(zmm1 ^ zmm3) == 0xf)
                    goto label_1400c45c2
                
                zmm2 = (*arg2)[2]
                arg16 = _mm_and_ps(_mm_cmpeq_ps(arg14, _mm_shuffle_ps(zmm2, zmm2, 0), 2), zmm1)
                
                if (_mm_movemask_ps(arg16 ^ zmm3) != 0xf)
                    zmm2 = *arg1
                    float temp0_386[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_386, arg19, 6), arg16)
                    char temp0_390 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, arg16))
                    zmm2 = _mm_cmpeq_ps(temp0_386, arg19, 2)
                    
                    if (temp0_390 != 0xf)
                        zmm1 = (*arg1)[1]
                        float temp0_393[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg13, 2)
                        zmm2 = _mm_and_ps(_mm_and_ps(zmm2, arg16), temp0_393)
                        zmm1 = _mm_andnot_ps(zmm2, arg16)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, arg16)) != 0xf)
                        zmm1 = (*arg1)[2]
                        float temp0_400[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg14, 2)
                        zmm2 = _mm_and_ps(_mm_and_ps(zmm2, arg16), temp0_400)
                    
                    arg16 = _mm_and_ps(arg16, zmm2)
                
                if (_mm_movemask_ps(arg16) == 0)
                    goto label_1400c45d3
                
                goto label_1400c4510
            
            zmm1 = _mm_cmpeq_ps(arg19, arg25, 2)
        label_1400c45c2:
            arg16 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
            
            if (_mm_movemask_ps(arg16) != 0)
            label_1400c4510:
                float temp0_405[0x4] = _mm_max_ps(temp0_371, zmm9)
                zmm7 = _mm_max_ps(zmm7, arg17)
                float temp0_407[0x4] = _mm_max_ps(temp0_375, temp0_370)
                float temp0_408[0x4] = _mm_cmpeq_ps(zmm7, temp0_405, 1)
                zmm4 = _mm_and_ps(arg16, temp0_408)
                
                if (_mm_movemask_ps(zmm4) == 0)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    arg18 = arg18
                    arg15 = arg15
                    arg12 = data_142d3f780
                    arg17 = arg_20
                    zmm2 = _mm_andnot_ps(temp0_408, arg16)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                    label_1400c462b:
                        float temp0_433[0x4] = _mm_cmpeq_ps(temp0_407, zmm7, 1)
                        zmm4 = _mm_and_ps(zmm2, temp0_433)
                        
                        if (_mm_movemask_ps(zmm4) != 0)
                            zmm5 = _mm_andnot_ps(zmm4, arg17)
                            arg17 = _mm_or_ps(_mm_and_ps(zmm7, zmm4), zmm5)
                        
                        zmm1 = _mm_andnot_ps(temp0_433, zmm2)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm2 = _mm_andnot_ps(zmm1, arg17)
                            arg17 = _mm_or_ps(_mm_and_ps(temp0_407, zmm1), zmm2)
                else
                    float temp0_411[0x4] = _mm_cmpeq_ps(temp0_407, temp0_405, 1)
                    zmm5 = _mm_and_ps(zmm4, temp0_411)
                    uint32_t temp0_413 = _mm_movemask_ps(zmm5)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    
                    if (temp0_413 == 0)
                        arg18 = arg18
                        arg15 = arg15
                        arg12 = data_142d3f780
                        arg17 = arg_20
                        zmm1 = _mm_andnot_ps(temp0_411, zmm4)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm4 = _mm_andnot_ps(zmm1, arg17)
                            arg17 = _mm_or_ps(_mm_and_ps(zmm1, temp0_407), zmm4)
                    else
                        uint32_t temp0_415[0x4] = __andnps_xmmxud_memxud(zmm5, arg_20)
                        arg17 = _mm_or_ps(_mm_and_ps(temp0_405, zmm5), temp0_415)
                        arg18 = arg18
                        arg15 = arg15
                        arg12 = data_142d3f780
                        zmm1 = _mm_andnot_ps(temp0_411, zmm4)
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm4 = _mm_andnot_ps(zmm1, arg17)
                            arg17 = _mm_or_ps(_mm_and_ps(zmm1, temp0_407), zmm4)
                    
                    zmm2 = _mm_andnot_ps(temp0_408, arg16)
                    
                    if (_mm_movemask_ps(zmm2) != 0)
                        goto label_1400c462b
            else
            label_1400c45d3:
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                arg18 = arg18
                arg15 = arg15
                arg12 = data_142d3f780
                arg17 = arg_20
            
            arg11 = arg16 ^ zmm3
            
            if (_mm_movemask_ps(arg11) != 0)
                arg5 = 0
                break
