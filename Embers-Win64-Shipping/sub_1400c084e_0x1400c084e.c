// 函数: sub_1400c084e
// 地址: 0x1400c084e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10[0x4]
int32_t arg_40[0x4]
void arg_48
void arg_4c
float arg_a0[0x4]
float arg_b0[0x4]
int32_t arg_c0[0x4]
float arg_d0[0x4]
int32_t arg_f0[0x4]
float arg_100[0x4]
float arg_110[0x4]
float arg_120[0x4]
uint32_t result
int32_t zmm0[0x4]
int32_t zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm15[0x4]

do
    arg_10 = arg14
    zmm0 = *(arg10 + sx.q((arg5 << 2).d))
    int32_t temp0_2[0x4] = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
    int64_t rax_4 = sx.q(temp0_2[0])
    int64_t rsi_2 = sx.q(_mm_shuffle_epi32(temp0_2, 0xe5)[0])
    int64_t rdi_2 = sx.q(_mm_shuffle_epi32(temp0_2, 0x4e)[0])
    int64_t rbp_2 = sx.q(_mm_shuffle_epi32(temp0_2, 0xe7)[0])
    zmm1 = *(arg4 + (rbp_2 << 2) + 4)
    float temp0_6[0x4] = _mm_unpacklo_ps(*(arg4 + (rdi_2 << 2)), (*(arg4 + (rbp_2 << 2)))[0].q)
    zmm0 = _mm_unpacklo_ps(*(arg4 + (rdi_2 << 2) + 4), zmm1[0].q)
    zmm6 = *(arg4 + (rax_4 << 2) + 4)
    zmm1 = _mm_unpacklo_ps(*(arg4 + (rax_4 << 2)), (*(arg4 + (rsi_2 << 2)))[0].q)[0].q
        | temp0_6[0].q << 0x40
    zmm6 = _mm_unpacklo_ps(zmm6, (*(arg4 + (rsi_2 << 2) + 4))[0].q)[0].q | zmm0[0].q << 0x40
    float temp0_10[0x4] =
        _mm_unpacklo_ps(*(arg4 + (rax_4 << 2) + 8), (*(arg4 + (rsi_2 << 2) + 8))[0].q)
    zmm0 = _mm_unpacklo_ps(*(arg4 + (rdi_2 << 2) + 8), (*(arg4 + (rbp_2 << 2) + 8))[0].q)
    zmm2 = temp0_10[0].q | zmm0[0].q << 0x40
    arg_f0 = zmm1
    arg_120 = zx.o(0)
    arg_a0 = arg29
    arg_b0 = arg29
    arg_c0 = arg29
    float temp0_12[0x4] = _mm_shuffle_ps(arg18, arg18, 0)
    zmm0 = _mm_mul_ps(zmm2, temp0_12)
    zmm7 = arg19
    float temp0_14[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_15[0x4] = _mm_mul_ps(zmm1, temp0_14)
    float temp0_16[0x4] = _mm_shuffle_ps(arg20, arg20, 0)
    float temp0_17[0x4] = _mm_mul_ps(zmm6, temp0_16)
    zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(zmm6, temp0_14))
    float temp0_21[0x4] = _mm_sub_ps(temp0_15, _mm_mul_ps(zmm2, temp0_16))
    float temp0_23[0x4] = _mm_sub_ps(temp0_17, _mm_mul_ps(zmm1, temp0_12))
    zmm0 = _mm_add_ps(zmm0, zmm0)
    float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_21)
    float temp0_26[0x4] = _mm_add_ps(temp0_23, temp0_23)
    float temp0_27[0x4] = _mm_mul_ps(arg29, temp0_25)
    float temp0_28[0x4] = _mm_mul_ps(zmm0, temp0_14)
    float temp0_29[0x4] = _mm_mul_ps(temp0_25, temp0_14)
    float temp0_34[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_26, temp0_12), temp0_29), 
        __addps_xmmps_memps(_mm_mul_ps(arg29, zmm0), arg_f0))
    float temp0_35[0x4] = _mm_mul_ps(arg29, temp0_26)
    float temp0_36[0x4] = __addps_xmmps_memps(temp0_27, zmm6)
    zmm3 = __addps_xmmps_memps(temp0_35, zmm2)
    arg_d0 = arg29
    zmm1 = _mm_mul_ps(temp0_25, temp0_16)
    float temp0_41[0x4] = _mm_add_ps(_mm_sub_ps(temp0_28, _mm_mul_ps(temp0_26, temp0_16)), temp0_36)
    zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm0, temp0_12)), zmm3)
    zmm15 = arg3[1][0]
    zmm8 = (*arg3)[5]
    float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_34)
    float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_41)
    zmm10 = (*arg3)[6]
    float temp0_50[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm1)
    zmm9 = _mm_sub_ps(temp0_46, arg12)
    float temp0_52[0x4] = __subps_xmmps_memps(temp0_48, arg23)
    arg14 = __subps_xmmps_memps(temp0_50, arg28)
    arg_a0 = zmm9
    arg_b0 = temp0_52
    arg_c0 = arg14
    float temp0_54[0x4] = _mm_sub_ps(arg27, temp0_46)
    float temp0_55[0x4] = _mm_sub_ps(arg26, temp0_48)
    char temp0_57 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_46, arg12, 6))
    zmm0 = _mm_sub_ps(arg25, temp0_50)
    arg_f0 = temp0_54
    arg_100 = temp0_55
    arg_110 = zmm0
    
    if (temp0_57 != 0xf)
        float temp0_59[0x4] = _mm_cmpeq_ps(temp0_46, arg12, 2)
        zmm4 = (*arg2)[1]
        zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_48, _mm_shuffle_ps(zmm4, zmm4, 0), 2), temp0_59)
        zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
        
        if (_mm_movemask_ps(zmm1 ^ zmm3) == 0xf)
            goto label_1400c0c43
        
        zmm2 = (*arg2)[2]
        arg12 = _mm_and_ps(_mm_cmpeq_ps(temp0_50, _mm_shuffle_ps(zmm2, zmm2, 0), 2), zmm1)
        
        if (_mm_movemask_ps(arg12 ^ zmm3) != 0xf)
            zmm2 = *arg1
            float temp0_69[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_69, temp0_46, 6), arg12)
            char temp0_73 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, arg12))
            zmm2 = _mm_cmpeq_ps(temp0_69, temp0_46, 2)
            
            if (temp0_73 != 0xf)
                zmm1 = (*arg1)[1]
                zmm1 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_48, 2)
                zmm2 = _mm_and_ps(_mm_and_ps(zmm2, arg12), zmm1)
                zmm1 = _mm_andnot_ps(zmm2, arg12)
            
            if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm1, arg12)) != 0xf)
                zmm1 = (*arg1)[2]
                zmm1 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_50, 2)
                zmm2 = _mm_and_ps(_mm_and_ps(zmm2, arg12), zmm1)
            
            arg12 = _mm_and_ps(arg12, zmm2)
        
        if (_mm_movemask_ps(arg12) == 0)
            goto label_1400c0c54
        
        goto label_1400c0b9a
    
    zmm1 = _mm_cmpeq_ps(temp0_46, arg12, 2)
label_1400c0c43:
    arg12 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
    
    if (_mm_movemask_ps(arg12) != 0)
    label_1400c0b9a:
        float temp0_88[0x4] = _mm_max_ps(temp0_54, zmm9)
        float temp0_89[0x4] = _mm_max_ps(temp0_55, temp0_52)
        zmm0 = _mm_max_ps(zmm0, arg14)
        float temp0_91[0x4] = _mm_cmpeq_ps(temp0_89, temp0_88, 1)
        zmm4 = _mm_and_ps(arg12, temp0_91)
        
        if (_mm_movemask_ps(zmm4) == 0)
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            arg13 = arg13
            arg11 = arg11
            arg14 = arg_10
            zmm6 = data_142d3f780
            zmm2 = _mm_andnot_ps(temp0_91, arg12)
            
            if (_mm_movemask_ps(zmm2) == 0)
                zmm7 = __return_addr.o
            else
            label_1400c0cab:
                zmm1 = _mm_cmpeq_ps(zmm0, temp0_89, 1)
                zmm4 = _mm_and_ps(zmm2, zmm1)
                
                if (_mm_movemask_ps(zmm4) == 0)
                    zmm7 = __return_addr.o
                    zmm1 = _mm_andnot_ps(zmm1, zmm2)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm2 = _mm_andnot_ps(zmm1, zmm7)
                        zmm7 = _mm_or_ps(_mm_and_ps(zmm0, zmm1), zmm2)
                else
                    zmm5 = __andnps_xmmxud_memxud(zmm4, __return_addr.o)
                    zmm7 = _mm_or_ps(_mm_and_ps(temp0_89, zmm4), zmm5)
                    zmm1 = _mm_andnot_ps(zmm1, zmm2)
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm2 = _mm_andnot_ps(zmm1, zmm7)
                        zmm7 = _mm_or_ps(_mm_and_ps(zmm0, zmm1), zmm2)
        else
            zmm1 = _mm_cmpeq_ps(zmm0, temp0_88, 1)
            zmm5 = _mm_and_ps(zmm4, zmm1)
            uint32_t temp0_96 = _mm_movemask_ps(zmm5)
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            
            if (temp0_96 != 0)
                zmm6 = __andnps_xmmxud_memxud(zmm5, __return_addr.o)
                __return_addr.o = _mm_or_ps(_mm_and_ps(temp0_88, zmm5), zmm6)
            
            arg13 = arg13
            arg11 = arg11
            arg14 = arg_10
            zmm6 = data_142d3f780
            zmm1 = _mm_andnot_ps(zmm1, zmm4)
            
            if (_mm_movemask_ps(zmm1) != 0)
                zmm4 = __andnps_xmmxud_memxud(zmm1, __return_addr.o)
                __return_addr.o = _mm_or_ps(_mm_and_ps(zmm1, zmm0), zmm4)
            
            zmm2 = _mm_andnot_ps(temp0_91, arg12)
            
            if (_mm_movemask_ps(zmm2) != 0)
                goto label_1400c0cab
            
            zmm7 = __return_addr.o
    else
    label_1400c0c54:
        zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
        arg13 = arg13
        arg11 = arg11
        arg14 = arg_10
        zmm6 = data_142d3f780
        zmm7 = __return_addr.o
    
    zmm0 = arg12 ^ zmm3
    result = _mm_movemask_ps(zmm0)
    
    if (result != 0)
        int64_t rsi_3 = 0
        
        while (true)
            float temp0_128[0x4] = _mm_cmpeq_ps(zx.o(0), zmm9, 1)
            uint32_t temp0_130 = _mm_movemask_ps(_mm_and_ps(temp0_128, zmm0))
            
            if (temp0_130 != 0)
                char rbp_4 = temp0_130.b
                
                if ((rbp_4 & 1) == 0)
                    if ((rbp_4 & 2) != 0)
                        goto label_1400c0e17
                    
                    goto label_1400c0d38
                
                *(&arg_40 + rsi_3) = zmm9[0]
                
                if ((rbp_4 & 2) != 0)
                label_1400c0e17:
                    *(&arg_40[1] + rsi_3) = _mm_shuffle_epi32(zmm9, 0xe5)[0]
                    
                    if ((rbp_4 & 4) == 0)
                        goto label_1400c0d42
                    
                    goto label_1400c0e2d
                
            label_1400c0d38:
                
                if ((rbp_4 & 4) != 0)
                label_1400c0e2d:
                    *(&arg_48 + rsi_3) = _mm_shuffle_epi32(zmm9, 0x4e)[0]
                    
                    if ((rbp_4 & 8) != 0)
                        *(&arg_4c + rsi_3) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
                else
                label_1400c0d42:
                    
                    if ((rbp_4 & 8) != 0)
                        *(&arg_4c + rsi_3) = _mm_shuffle_epi32(zmm9, 0xe7)[0]
            
            zmm2 = _mm_andnot_ps(temp0_128, zmm0)
            result = _mm_movemask_ps(zmm2)
            
            if (result != 0)
                zmm1 = *(&arg_f0 + rsi_3)
                float temp0_134[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                uint32_t temp0_136 = _mm_movemask_ps(_mm_and_ps(zmm2, temp0_134))
                
                if (temp0_136 != 0)
                    zmm1 ^= zmm6
                    char rbp_6 = temp0_136.b
                    
                    if ((rbp_6 & 1) == 0)
                        if ((rbp_6 & 2) != 0)
                            goto label_1400c0e57
                        
                        goto label_1400c0d97
                    
                    *(&arg_40 + rsi_3) = zmm1[0]
                    
                    if ((rbp_6 & 2) != 0)
                    label_1400c0e57:
                        *(&arg_40[1] + rsi_3) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        
                        if ((rbp_6 & 4) == 0)
                            goto label_1400c0da1
                        
                        goto label_1400c0e6c
                    
                label_1400c0d97:
                    
                    if ((rbp_6 & 4) != 0)
                    label_1400c0e6c:
                        *(&arg_48 + rsi_3) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                        
                        if ((rbp_6 & 8) != 0)
                            *(&arg_4c + rsi_3) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    else
                    label_1400c0da1:
                        
                        if ((rbp_6 & 8) != 0)
                            *(&arg_4c + rsi_3) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                
                uint32_t temp0_139 = _mm_movemask_ps(_mm_andnot_ps(temp0_134, zmm2))
                
                if (temp0_139 != 0)
                    char rbp_8 = temp0_139.b
                    
                    if ((rbp_8 & 1) == 0)
                        if ((rbp_8 & 2) != 0)
                            goto label_1400c0e93
                        
                        goto label_1400c0dd2
                    
                    *(&arg_40 + rsi_3) = 0
                    
                    if ((rbp_8 & 2) != 0)
                    label_1400c0e93:
                        *(&arg_40[1] + rsi_3) = 0
                        
                        if ((rbp_8 & 4) == 0)
                            goto label_1400c0ddc
                        
                        goto label_1400c0ea5
                    
                label_1400c0dd2:
                    
                    if ((rbp_8 & 4) != 0)
                    label_1400c0ea5:
                        *(&arg_48 + rsi_3) = 0
                        
                        if ((rbp_8 & 8) != 0)
                            *(&arg_4c + rsi_3) = 0
                    else
                    label_1400c0ddc:
                        
                        if ((rbp_8 & 8) != 0)
                            *(&arg_4c + rsi_3) = 0
            
            if (rsi_3 == 0x20)
                break
            
            zmm9 = *(&arg_b0 + rsi_3)
            rsi_3 += 0x10
        
        zmm1 = arg_40
        zmm1 = __addps_xmmps_memps(_mm_mul_ps(zmm1, zmm1), data_142d8f750)
        float temp0_147[0x4] = _mm_add_ps(_mm_mul_ps(arg15, arg15), zmm1)
        float temp0_149[0x4] = _mm_add_ps(_mm_mul_ps(arg16, arg16), temp0_147)
        zmm1 = _mm_rsqrt_ps(temp0_149)
        float temp0_152[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_149, zmm1), zmm1)
        float temp0_155[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_152), zmm1), data_142d3f640)
        zmm1 = _mm_rcp_ps(temp0_155)
        float temp0_157[0x4] = _mm_mul_ps(temp0_155, zmm1)
        float temp0_159[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_157), zmm1)
        zmm7 = _mm_or_ps(_mm_and_ps(zmm7, arg12), _mm_and_ps(temp0_159, zmm0))
    
    __return_addr.o = zmm7
    float temp0_163[0x4] = __subps_xmmps_memps(zmm7, arg24)
    zmm0 = __cmpps_xmmps_memps_immb(temp0_163, data_142fc95d0, 1)
    char temp0_165 = _mm_movemask_ps(zmm0)
    arg12 = arg21
    
    if (temp0_165 != 0)
        float temp0_166[0x4] = _mm_mul_ps(temp0_46, temp0_163)
        zmm2 = arg11
        char temp0_167 = temp0_165 & 1
        
        if (temp0_167 == 0)
            zmm8 = _mm_mul_ps(temp0_48, temp0_163)
            zmm4 = arg13
            
            if (temp0_167 != 0)
                goto label_1400c0757
            
            goto label_1400c0f6f
        
        zmm2 = arg11
        zmm2[0] = zmm2[0] + temp0_166[0]
        zmm8 = _mm_mul_ps(temp0_48, temp0_163)
        zmm4 = arg13
        
        if (temp0_167 != 0)
        label_1400c0757:
            zmm4 = arg13
            zmm4[0] = zmm4[0] + zmm8[0]
            zmm10 = _mm_mul_ps(temp0_50, temp0_163)
            zmm5 = arg14
            
            if (temp0_167 == 0)
                goto label_1400c0f7d
            
            goto label_1400c076e
        
    label_1400c0f6f:
        zmm10 = _mm_mul_ps(temp0_50, temp0_163)
        zmm5 = arg14
        bool cond:7_1
        bool cond:8_1
        bool cond:9_1
        bool cond:10_1
        
        if (temp0_167 == 0)
        label_1400c0f7d:
            arg11 = _mm_add_ps(arg11, temp0_166)
            char temp2_1 = temp0_165 & 2
            cond:7_1 = temp2_1 != 0
            cond:8_1 = temp2_1 == 0
            cond:9_1 = temp2_1 == 0
            cond:10_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
                goto label_1400c0791
            
            goto label_1400c0f8b
        
    label_1400c076e:
        zmm5 = arg14
        zmm5[0] = zmm5[0] + zmm10[0]
        arg11 = _mm_add_ps(arg11, temp0_166)
        char temp1_1 = temp0_165 & 2
        cond:7_1 = temp1_1 != 0
        cond:8_1 = temp1_1 == 0
        cond:9_1 = temp1_1 == 0
        cond:10_1 = temp1_1 != 0
        
        if (temp1_1 != 0)
        label_1400c0791:
            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm2, 1), zmm2, 0xe2)
            arg13 = _mm_add_ps(arg13, zmm8)
            
            if (cond:8_1)
                goto label_1400c0f95
            
            goto label_1400c07aa
        
    label_1400c0f8b:
        arg13 = _mm_add_ps(arg13, zmm8)
        
        if (not(cond:7_1))
        label_1400c0f95:
            arg14 = _mm_add_ps(arg14, zmm10)
            
            if (cond:10_1)
                goto label_1400c07c3
            
            goto label_1400c0f9f
        
    label_1400c07aa:
        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, zmm4, 1), zmm4, 0xe2)
        arg14 = _mm_add_ps(arg14, zmm10)
        bool cond:12_1
        bool cond:13_1
        bool cond:14_1
        bool cond:15_1
        
        if (not(cond:9_1))
        label_1400c07c3:
            zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, zmm5, 1), zmm5, 0xe2)
            char temp4_1 = temp0_165 & 4
            cond:12_1 = temp4_1 == 0
            cond:13_1 = temp4_1 != 0
            cond:14_1 = temp4_1 != 0
            cond:15_1 = temp4_1 == 0
            
            if (temp4_1 == 0)
                goto label_1400c0fa9
            
            goto label_1400c07d8
        
    label_1400c0f9f:
        char temp3_1 = temp0_165 & 4
        cond:12_1 = temp3_1 == 0
        cond:13_1 = temp3_1 != 0
        cond:14_1 = temp3_1 != 0
        cond:15_1 = temp3_1 == 0
        
        if (temp3_1 != 0)
        label_1400c07d8:
            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg11, zmm2, 0x32), 0x84)
            
            if (not(cond:12_1))
            label_1400c07ea:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg13, zmm4, 0x32), 0x84)
                
                if (cond:15_1)
                    goto label_1400c0fb5
                
                goto label_1400c07fc
        else
        label_1400c0fa9:
            
            if (cond:13_1)
                goto label_1400c07ea
        
        bool cond:17_1
        bool cond:18_1
        bool cond:19_1
        bool cond:20_1
        
        if (not(cond:14_1))
        label_1400c0fb5:
            char temp6_1 = temp0_165 & 8
            cond:17_1 = temp6_1 != 0
            cond:18_1 = temp6_1 == 0
            cond:19_1 = temp6_1 != 0
            cond:20_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
                goto label_1400c0814
            
            goto label_1400c0fbf
        
    label_1400c07fc:
        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(arg14, zmm5, 0x32), 0x84)
        char temp5_1 = temp0_165 & 8
        cond:17_1 = temp5_1 != 0
        cond:18_1 = temp5_1 == 0
        cond:19_1 = temp5_1 != 0
        cond:20_1 = temp5_1 == 0
        
        if (temp5_1 != 0)
        label_1400c0814:
            arg11 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg11, zmm2, 0x23), 0x24)
            
            if (cond:18_1)
                goto label_1400c0fc9
            
            goto label_1400c0828
        
    label_1400c0fbf:
        arg11 = zmm2
        
        if (cond:17_1)
        label_1400c0828:
            arg13 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg13, zmm4, 0x23), 0x24)
            
            if (cond:19_1)
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(arg14, zmm5, 0x23), 0x24)
        else
        label_1400c0fc9:
            arg13 = zmm4
            
            if (not(cond:20_1))
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(arg14, zmm5, 0x23), 0x24)
        
        zmm7 = _mm_and_ps(_mm_add_ps(temp0_163, arg17), zmm0)
        arg14 = zmm5
        arg17 = _mm_or_ps(_mm_andnot_ps(zmm0, arg17), zmm7)
    
    arg5 = zx.q(arg5.d + 4)
while (arg5.d s< arg8)

if (arg5.d s>= arg9)
    zmm7 = arg22
    zmm5 = arg17
else
    int32_t temp0_180[0x4] = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5.d), 0), data_142e11d00)
    zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), temp0_180)
    int64_t rsi_6 = sx.q(arg5.d << 2)
    uint32_t temp0_183 = _mm_movemask_ps(zmm9)
    float arg_30[0x4] = arg13
    arg_10 = arg14
    
    if ((zx.q(temp0_183) & 0xfffffff9) != 9)
        if ((temp0_183.b & 1) != 0)
            arg_a0[0] = *(arg10 + rsi_6)
        
        if ((temp0_183.b & 2) == 0)
            if ((temp0_183.b & 4) != 0)
                goto label_1400c1b57
            
            goto label_1400c113b
        
        arg_a0[1] = *(arg10 + rsi_6 + 4)
        
        if ((temp0_183.b & 4) == 0)
        label_1400c113b:
            
            if ((temp0_183.b & 8) != 0)
                arg_a0[3] = *(arg10 + rsi_6 + 0xc)
        else
        label_1400c1b57:
            arg_a0[2] = *(arg10 + rsi_6 + 8)
            
            if ((temp0_183.b & 8) != 0)
                arg_a0[3] = *(arg10 + rsi_6 + 0xc)
        
        zmm1 = arg_a0
    else
        zmm1 = *(arg10 + rsi_6)
    
    zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm9
    int64_t rsi_7 = sx.q(zmm2[0])
    int64_t rax_24 = arg4 + (rsi_7 << 2)
    zmm1 = *(arg4 + (rsi_7 << 2))
    int64_t rdi_4 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
    int64_t rsi_9 = arg4 + (rdi_4 << 2)
    zmm1 = _mm_unpacklo_ps(zmm1, (*(arg4 + (rdi_4 << 2)))[0].q)
    int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
    int64_t rdi_6 = arg4 + (rbx_1 << 2)
    zmm3 = *(arg4 + (rbx_1 << 2))
    int64_t rbp_9 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
    int64_t rbx_3 = arg4 + (rbp_9 << 2)
    float temp0_190[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + (rbp_9 << 2)))[0].q)
    zmm1 = zmm1[0].q | temp0_190[0].q << 0x40
    zmm3 = data_142fc95e0 & zmm9
    float temp0_192[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_24), 
        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_9))[0].q)
    float temp0_195[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_6), 
        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_3))[0].q)
    zmm8 = temp0_192[0].q | temp0_195[0].q << 0x40
    zmm3 = data_142fc95f0 & zmm9
    float temp0_197[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_24), 
        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rsi_9))[0].q)
    float temp0_200[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rdi_6), 
        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_3))[0].q)
    zmm5 = temp0_197[0].q | temp0_200[0].q << 0x40
    int32_t arg_1c0[0x4] = zmm1
    float arg_1f0[0x4] = zx.o(0)
    zmm6 = (*arg3)[3]
    float temp0_201[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    arg_a0 = temp0_201
    arg_b0 = temp0_201
    arg_c0 = temp0_201
    arg_d0 = temp0_201
    zmm7 = *arg3
    zmm2 = (*arg3)[1]
    zmm0 = (*arg3)[2]
    float temp0_202[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_203[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_204[0x4] = _mm_mul_ps(zmm8, temp0_203)
    float temp0_205[0x4] = _mm_mul_ps(temp0_203, zmm5)
    float temp0_206[0x4] = _mm_mul_ps(zmm5, temp0_202)
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
    float temp0_208[0x4] = _mm_mul_ps(temp0_202, zmm1)
    zmm1 = _mm_mul_ps(zmm1, zmm0)
    float temp0_210[0x4] = _mm_mul_ps(zx.o(0), temp0_201)
    float temp0_212[0x4] = _mm_sub_ps(temp0_206, _mm_mul_ps(zmm0, zmm8))
    zmm1 = _mm_sub_ps(zmm1, temp0_205)
    float temp0_214[0x4] = _mm_sub_ps(temp0_204, temp0_208)
    float temp0_215[0x4] = _mm_sub_ps(temp0_210, temp0_210)
    float temp0_216[0x4] = _mm_add_ps(temp0_212, temp0_212)
    zmm1 = _mm_add_ps(zmm1, zmm1)
    float temp0_218[0x4] = _mm_add_ps(temp0_214, temp0_214)
    float temp0_219[0x4] = _mm_add_ps(temp0_215, temp0_215)
    arg_f0 = temp0_216
    arg_100 = zmm1
    arg_110 = temp0_218
    arg_120 = temp0_219
    float temp0_220[0x4] = _mm_mul_ps(temp0_219, temp0_201)
    float temp0_221[0x4] = _mm_mul_ps(temp0_201, temp0_216)
    float temp0_222[0x4] = _mm_mul_ps(temp0_201, zmm1)
    float temp0_223[0x4] = _mm_mul_ps(temp0_201, temp0_218)
    float temp0_224[0x4] = __addps_xmmps_memps(temp0_221, arg_1c0)
    float temp0_225[0x4] = __addps_xmmps_memps(temp0_222, zmm8)
    float temp0_226[0x4] = __addps_xmmps_memps(temp0_223, zmm5)
    float temp0_227[0x4] = __addps_xmmps_memps(temp0_220, arg_1f0)
    arg_40 = temp0_224
    float arg_70[0x4] = temp0_227
    zmm0 = *arg3
    zmm2 = (*arg3)[1]
    zmm7 = (*arg3)[2]
    float temp0_228[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
    float temp0_230[0x4] = _mm_mul_ps(zmm1, zmm0)
    zmm0 = _mm_mul_ps(zmm0, temp0_218)
    float temp0_232[0x4] = _mm_mul_ps(temp0_218, temp0_228)
    float temp0_233[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_234[0x4] = _mm_mul_ps(temp0_228, temp0_216)
    float temp0_235[0x4] = _mm_mul_ps(temp0_216, temp0_233)
    float temp0_237[0x4] = _mm_sub_ps(temp0_232, _mm_mul_ps(temp0_233, zmm1))
    float temp0_238[0x4] = _mm_sub_ps(temp0_235, zmm0)
    float temp0_239[0x4] = _mm_sub_ps(temp0_230, temp0_234)
    float temp0_240[0x4] = _mm_add_ps(temp0_237, temp0_224)
    float temp0_241[0x4] = _mm_add_ps(temp0_238, temp0_225)
    float temp0_242[0x4] = _mm_add_ps(temp0_239, temp0_226)
    zmm10 = arg3[1][0]
    arg13 = (*arg3)[5]
    float temp0_244[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_240)
    float temp0_246[0x4] = _mm_add_ps(_mm_shuffle_ps(arg13, arg13, 0), temp0_241)
    zmm2 = (*arg3)[6]
    float temp0_248[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_242)
    zmm3 = *arg2
    zmm8 = (*arg2)[1]
    float temp0_249[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm1 = _mm_sub_ps(temp0_244, temp0_249)
    float temp0_251[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    zmm0 = _mm_sub_ps(temp0_246, temp0_251)
    arg12 = (*arg2)[2]
    float temp0_253[0x4] = _mm_shuffle_ps(arg12, arg12, 0)
    float temp0_254[0x4] = _mm_sub_ps(temp0_248, temp0_253)
    arg_a0 = zmm1
    arg19 = zmm0
    arg_b0 = zmm0
    arg_c0 = temp0_254
    zmm4 = *arg1
    arg14 = (*arg1)[1]
    float temp0_255[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_256[0x4] = _mm_sub_ps(temp0_255, temp0_244)
    arg14 = _mm_shuffle_ps(arg14, arg14, 0)
    float temp0_258[0x4] = _mm_sub_ps(arg14, temp0_246)
    zmm15 = (*arg1)[2]
    zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_244, temp0_249, 6), zmm9)
    char temp0_263 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9))
    __return_addr.o = temp0_248
    zmm0 = _mm_sub_ps(zmm15, temp0_248)
    arg_f0 = temp0_256
    zmm2 = temp0_258
    arg_100 = temp0_258
    zmm5 = zmm0
    arg_110 = zmm0
    zmm10 = _mm_cmpeq_ps(temp0_244, temp0_249, 2)
    
    if (temp0_263 != 0xf)
        float temp0_266[0x4] = _mm_cmpeq_ps(temp0_246, temp0_251, 2)
        zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm9), temp0_266)
        zmm6 = _mm_andnot_ps(zmm10, zmm9)
    
    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9)) != 0xf)
        zmm0 = _mm_cmpeq_ps(__return_addr.o, temp0_253, 2)
        zmm10 = _mm_and_ps(_mm_and_ps(zmm10, zmm9), zmm0)
        zmm6 = zmm10 ^ zmm9
    
    if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm6, zmm9)) == 0xf)
        arg12 = __return_addr.o
        zmm8 = zmm2
        zmm6 = zmm5
    else
        zmm10 = _mm_and_ps(zmm10, zmm9)
        zmm0 = temp0_244
        zmm3 = _mm_cmpeq_ps(temp0_255, zmm0, 2)
        zmm4 = _mm_and_ps(_mm_cmpeq_ps(temp0_255, zmm0, 6), zmm10)
        arg12 = __return_addr.o
        zmm8 = zmm2
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm10)) != 0xf)
            arg14 = __cmpps_xmmps_memps_immb(arg14, temp0_246, 2)
            zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm10), arg14)
            zmm4 = zmm3 ^ zmm10
        
        zmm6 = zmm5
        
        if (_mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm10)) != 0xf)
            zmm15 = _mm_cmpeq_ps(zmm15, arg12, 2)
            zmm3 = _mm_and_ps(_mm_and_ps(zmm3, zmm10), zmm15)
        
        zmm10 = _mm_and_ps(zmm10, zmm3)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm9)) == 0)
        zmm7 = arg22
        arg13 = arg_30
        arg11 = arg11
    else
        float temp0_294[0x4] = _mm_max_ps(temp0_256, zmm1)
        float temp0_295[0x4] = __maxps_xmmps_memps(zmm8, arg19)
        float temp0_296[0x4] = __maxps_xmmps_memps(zmm6, temp0_254)
        float temp0_297[0x4] = _mm_cmpeq_ps(temp0_295, temp0_294, 1)
        zmm5 = _mm_and_ps(zmm10, temp0_297)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm9)) != 0)
            float temp0_301[0x4] = _mm_cmpeq_ps(temp0_296, temp0_294, 5)
            zmm15 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_296, temp0_294, 1), zmm5), temp0_294)
            zmm4 = _mm_and_ps(temp0_301, zmm5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                zmm15 = _mm_or_ps(zmm15, _mm_and_ps(zmm4, temp0_296))
        
        zmm7 = arg22
        arg13 = arg_30
        arg11 = arg11
        zmm3 = _mm_andnot_ps(temp0_297, zmm10)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm9)) != 0)
            float temp0_313[0x4] = _mm_cmpeq_ps(temp0_296, temp0_295, 1)
            zmm4 = _mm_and_ps(zmm3, temp0_313)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                zmm0 = _mm_andnot_ps(zmm4, zmm15)
                zmm15 = _mm_or_ps(_mm_and_ps(temp0_295, zmm4), zmm0)
            
            zmm2 = _mm_andnot_ps(temp0_313, zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm9)) != 0)
                zmm0 = _mm_andnot_ps(zmm2, zmm15)
                zmm15 = _mm_or_ps(_mm_and_ps(temp0_296, zmm2), zmm0)
    
    arg14 = arg_10
    
    if (_mm_movemask_ps(_mm_andnot_ps(zmm10, zmm9)) != 0)
        zmm2 = _mm_cmpeq_epi32(zmm2, zmm2) ^ zmm10
        int64_t rax_42 = 0
        zmm8 = data_142d3f780
        
        while (true)
            float temp0_329[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
            zmm4 = _mm_and_ps(temp0_329, zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm4, zmm9)) != 0)
                char temp0_333 = _mm_movemask_ps(zmm4)
                
                if ((temp0_333 & 1) == 0)
                    if ((temp0_333 & 2) != 0)
                        goto label_1400c1d84
                    
                    goto label_1400c1c9c
                
                *(&arg_40 + rax_42) = zmm1[0]
                
                if ((temp0_333 & 2) != 0)
                label_1400c1d84:
                    *(&arg_40[1] + rax_42) = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                    
                    if ((temp0_333 & 4) == 0)
                        goto label_1400c1ca5
                    
                    goto label_1400c1d98
                
            label_1400c1c9c:
                
                if ((temp0_333 & 4) != 0)
                label_1400c1d98:
                    *(&arg_48 + rax_42) = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                    
                    if ((temp0_333 & 8) != 0)
                        *(&arg_4c + rax_42) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                else
                label_1400c1ca5:
                    
                    if ((temp0_333 & 8) != 0)
                        *(&arg_4c + rax_42) = _mm_shuffle_epi32(zmm1, 0xe7)[0]
            
            zmm3 = _mm_andnot_ps(temp0_329, zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm3, zmm9)) != 0)
                zmm4 = *(&arg_f0 + rax_42)
                zmm1 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                zmm5 = _mm_and_ps(zmm3, zmm1)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm9)) != 0)
                    zmm4 ^= zmm8
                    char temp0_342 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_342 & 1) == 0)
                        if ((temp0_342 & 2) != 0)
                            goto label_1400c1dc0
                        
                        goto label_1400c1d06
                    
                    *(&arg_40 + rax_42) = zmm4[0]
                    
                    if ((temp0_342 & 2) != 0)
                    label_1400c1dc0:
                        *(&arg_40[1] + rax_42) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                        
                        if ((temp0_342 & 4) == 0)
                            goto label_1400c1d0f
                        
                        goto label_1400c1dd4
                    
                label_1400c1d06:
                    
                    if ((temp0_342 & 4) != 0)
                    label_1400c1dd4:
                        *(&arg_48 + rax_42) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                        
                        if ((temp0_342 & 8) != 0)
                            *(&arg_4c + rax_42) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    else
                    label_1400c1d0f:
                        
                        if ((temp0_342 & 8) != 0)
                            *(&arg_4c + rax_42) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                
                zmm1 = _mm_andnot_ps(zmm1, zmm3)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm9)) != 0)
                    char temp0_347 = _mm_movemask_ps(zmm1)
                    
                    if ((temp0_347 & 1) == 0)
                        if ((temp0_347 & 2) != 0)
                            goto label_1400c1df9
                        
                        goto label_1400c1d45
                    
                    *(&arg_40 + rax_42) = 0
                    
                    if ((temp0_347 & 2) != 0)
                    label_1400c1df9:
                        *(&arg_40[1] + rax_42) = 0
                        
                        if ((temp0_347 & 4) == 0)
                            goto label_1400c1d4e
                        
                        goto label_1400c1e0a
                    
                label_1400c1d45:
                    
                    if ((temp0_347 & 4) != 0)
                    label_1400c1e0a:
                        *(&arg_48 + rax_42) = 0
                        
                        if ((temp0_347 & 8) != 0)
                            *(&arg_4c + rax_42) = 0
                    else
                    label_1400c1d4e:
                        
                        if ((temp0_347 & 8) != 0)
                            *(&arg_4c + rax_42) = 0
            
            if (rax_42 == 0x20)
                break
            
            zmm1 = *(&arg_b0 + rax_42)
            rax_42 += 0x10
        
        zmm0 = arg_40
        zmm1 = temp0_225
        float temp0_353[0x4] = _mm_add_ps(zx.o(0), _mm_mul_ps(zmm0, zmm0))
        zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm1), temp0_353)
        float temp0_357[0x4] = _mm_add_ps(_mm_mul_ps(temp0_226, temp0_226), zmm1)
        zmm0 = _mm_rsqrt_ps(temp0_357)
        float temp0_360[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_357, zmm0), zmm0)
        zmm1 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_360), zmm0), 
            data_142d3f640)
        zmm0 = _mm_rcp_ps(zmm1)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        float temp0_367[0x4] = _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm1), zmm0)
        zmm15 = _mm_or_ps(_mm_and_ps(zmm15, zmm10), _mm_and_ps(temp0_367, zmm2))
    
    zmm0 = arg47
    float temp0_372[0x4] = _mm_sub_ps(zmm15, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm1 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_372, data_142fc95d0, 1), zmm9)
    result = _mm_movemask_ps(zmm1)
    zmm5 = arg17
    
    if (result.b != 0)
        float temp0_376[0x4] = _mm_mul_ps(temp0_244, temp0_372)
        result = zx.d(result.b)
        zmm3 = arg11
        char temp7_1 = result.b & 1
        
        if (temp7_1 == 0)
            zmm6 = _mm_mul_ps(temp0_246, temp0_372)
            zmm2 = arg13
            
            if (temp7_1 != 0)
                goto label_1400c201a
            
            goto label_1400c1ee4
        
        zmm3 = arg11
        zmm3[0] = zmm3[0] + temp0_376[0]
        zmm6 = _mm_mul_ps(temp0_246, temp0_372)
        zmm2 = arg13
        
        if (temp7_1 != 0)
        label_1400c201a:
            zmm2 = arg13
            zmm2[0] = zmm2[0] + zmm6[0]
            arg12 = _mm_mul_ps(arg12, temp0_372)
            zmm0 = arg14
            
            if (temp7_1 == 0)
                goto label_1400c1ef2
            
            goto label_1400c2030
        
    label_1400c1ee4:
        arg12 = _mm_mul_ps(arg12, temp0_372)
        zmm0 = arg14
        bool cond:25_1
        bool cond:26_1
        bool cond:27_1
        bool cond:28_1
        
        if (temp7_1 == 0)
        label_1400c1ef2:
            arg11 = _mm_add_ps(arg11, temp0_376)
            char temp9_1 = result.b & 2
            cond:25_1 = temp9_1 != 0
            cond:26_1 = temp9_1 == 0
            cond:27_1 = temp9_1 == 0
            cond:28_1 = temp9_1 != 0
            
            if (temp9_1 != 0)
                goto label_1400c2051
            
            goto label_1400c1efe
        
    label_1400c2030:
        zmm0 = arg14
        zmm0[0] = zmm0[0] f+ arg12[0]
        arg11 = _mm_add_ps(arg11, temp0_376)
        char temp8_1 = result.b & 2
        cond:25_1 = temp8_1 != 0
        cond:26_1 = temp8_1 == 0
        cond:27_1 = temp8_1 == 0
        cond:28_1 = temp8_1 != 0
        
        if (temp8_1 != 0)
        label_1400c2051:
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm3, 1), zmm3, 0xe2)
            arg13 = _mm_add_ps(arg13, zmm6)
            
            if (cond:26_1)
                goto label_1400c1f08
            
            goto label_1400c206a
        
    label_1400c1efe:
        arg13 = _mm_add_ps(arg13, zmm6)
        
        if (not(cond:25_1))
        label_1400c1f08:
            arg14 = _mm_add_ps(arg14, arg12)
            
            if (cond:28_1)
                goto label_1400c2083
            
            goto label_1400c1f12
        
    label_1400c206a:
        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, zmm2, 1), zmm2, 0xe2)
        arg14 = _mm_add_ps(arg14, arg12)
        bool cond:29_1
        bool cond:30_1
        bool cond:31_1
        bool cond:32_1
        
        if (not(cond:27_1))
        label_1400c2083:
            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, zmm0, 1), zmm0, 0xe2)
            char temp11_1 = result.b & 4
            cond:29_1 = temp11_1 == 0
            cond:30_1 = temp11_1 != 0
            cond:31_1 = temp11_1 != 0
            cond:32_1 = temp11_1 == 0
            
            if (temp11_1 == 0)
                goto label_1400c1f1a
            
            goto label_1400c2096
        
    label_1400c1f12:
        char temp10_1 = result.b & 4
        cond:29_1 = temp10_1 == 0
        cond:30_1 = temp10_1 != 0
        cond:31_1 = temp10_1 != 0
        cond:32_1 = temp10_1 == 0
        
        if (temp10_1 != 0)
        label_1400c2096:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg11, zmm3, 0x32), 0x84)
            
            if (not(cond:29_1))
            label_1400c20a8:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg13, zmm2, 0x32), 0x84)
                
                if (cond:32_1)
                    goto label_1400c1f26
                
                goto label_1400c20ba
        else
        label_1400c1f1a:
            
            if (cond:30_1)
                goto label_1400c20a8
        
        bool cond:33_1
        bool cond:34_1
        bool cond:35_1
        bool cond:36_1
        
        if (not(cond:31_1))
        label_1400c1f26:
            char temp13_1 = result.b & 8
            cond:33_1 = temp13_1 != 0
            cond:34_1 = temp13_1 == 0
            cond:35_1 = temp13_1 != 0
            cond:36_1 = temp13_1 == 0
            
            if (temp13_1 != 0)
                goto label_1400c20d0
            
            goto label_1400c1f2e
        
    label_1400c20ba:
        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg14, zmm0, 0x32), 0x84)
        char temp12_1 = result.b & 8
        cond:33_1 = temp12_1 != 0
        cond:34_1 = temp12_1 == 0
        cond:35_1 = temp12_1 != 0
        cond:36_1 = temp12_1 == 0
        
        if (temp12_1 != 0)
        label_1400c20d0:
            arg11 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg11, zmm3, 0x23), 0x24)
            
            if (cond:34_1)
                goto label_1400c1f38
            
            goto label_1400c20e4
        
    label_1400c1f2e:
        arg11 = zmm3
        
        if (cond:33_1)
        label_1400c20e4:
            arg13 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg13, zmm2, 0x23), 0x24)
            
            if (cond:35_1)
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg14, zmm0, 0x23), 0x24)
        else
        label_1400c1f38:
            arg13 = zmm2
            
            if (not(cond:36_1))
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg14, zmm0, 0x23), 0x24)
        
        zmm15 = _mm_and_ps(_mm_add_ps(temp0_372, zmm5), zmm1)
        arg14 = zmm0
        zmm5 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm5), zmm15)

zmm7 = _mm_cmpeq_epi32(zmm7, zx.o(0))
zmm0 = zmm7 & not.o(arg11)
zmm1 = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
zmm0[0] = zmm0[0] f+ zmm1[0]
zmm1 = zmm7 & not.o(arg13)
float temp0_393[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
zmm1 = _mm_shuffle_ps(temp0_393, temp0_393, 0xe5)
zmm1[0] = zmm1[0] f+ temp0_393[0]
zmm0 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
zmm1 = zmm7 & not.o(arg14)
float temp0_397[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
zmm1 = _mm_shuffle_ps(temp0_397, temp0_397, 0xe5)
zmm1[0] = zmm1[0] f+ temp0_397[0]
float temp0_399[0x4] =
    _mm_add_ps(zx.o(*arg7)[0].q | arg7[1].d[0].q << 0x40, zmm0[0].q | zmm1[0].q << 0x40)
zmm0 = temp0_399
*arg7 = temp0_399[0]
float temp0_400[0x4] = _mm_shuffle_ps(temp0_399, temp0_399, 0xe5)
zmm0[0].q = zmm0 u>> 0x40
*(arg7 + 4) = temp0_400[0]
arg7[1].d = zmm0[0]
zmm7 &= not.o(zmm5)
zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm7, 0xee), zmm7)
zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
zmm1[0] = zmm1[0] f+ zmm0[0]
zmm1[0] = zmm1[0] f+ *arg6
*arg6 = zmm1[0]
return result
