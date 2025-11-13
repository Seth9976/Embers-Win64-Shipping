// 函数: sub_1400a140e
// 地址: 0x1400a140e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_c
float arg_10[0x4]
float arg_30[0x4]
float arg_40[0x4]
float arg_60[0x4]
int32_t arg_70[0x4]
void arg_190
void arg_1a0
uint32_t result
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]
float zmm6[0x4]
uint128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]

while (true)
    zmm14 = __return_addr.o
    zmm8 = arg_10
    int32_t temp0_1[0x4] = _mm_cmpeq_epi32(arg10, arg10)
    zmm4 = *arg1
    zmm12 = *(arg1 + 4)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_3[0x4] = _mm_sub_ps(zmm14, temp0_2)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
    float temp0_5[0x4] = _mm_sub_ps(zmm8, temp0_4)
    zmm6 = *(arg1 + 8)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_7[0x4] = _mm_sub_ps(arg12, temp0_6)
    zmm1 = *arg3
    float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_9[0x4] = _mm_div_ps(temp0_3, temp0_8)
    zmm13 = (*arg3)[2]
    zmm9 = _mm_cvttps_epi32(temp0_9)
    float temp0_13[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_8), temp0_2)
    zmm7 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_18[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_13, temp0_16), zmm14, 1)
    zmm1 = _mm_add_epi32(zmm9, temp0_1)
    float temp0_20[0x4] = _mm_blendv_ps(zmm1, zmm9, temp0_18)
    float zmm15[0x4] = (*arg3)[1]
    float temp0_21[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
    float temp0_22[0x4] = _mm_div_ps(temp0_5, temp0_21)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
    float temp0_24[0x4] = _mm_div_ps(temp0_7, temp0_23)
    int32_t temp0_25[0x4] = _mm_cvttps_epi32(temp0_22)
    zmm2 = _mm_cvttps_epi32(temp0_24)
    float temp0_28[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(temp0_25), temp0_21)
    float temp0_30[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_23)
    float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_4)
    float temp0_32[0x4] = _mm_add_ps(temp0_30, temp0_6)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    float temp0_34[0x4] = _mm_add_ps(temp0_31, temp0_33)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    __return_addr.o = temp0_20
    float temp0_36[0x4] = _mm_cmpeq_ps(temp0_34, zmm8, 1)
    
    if (_mm_movemask_ps(temp0_36) != 0)
        zmm9 = temp0_25
    
    float temp0_38[0x4] = _mm_add_ps(temp0_32, zmm7)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_34, zmm8, 5)) != 0)
        zmm1 = __paddd_xmmdq_memdq(temp0_25, data_142d3f800)
    
    float temp0_42[0x4] = _mm_sub_ps(zmm14, arg11)
    float temp0_43[0x4] = __subps_xmmps_memps(zmm8, arg18)
    float temp0_44[0x4] = _mm_blendv_ps(zmm1, zmm9, temp0_36)
    arg_10 = temp0_44
    float temp0_45[0x4] = _mm_cmpeq_ps(temp0_38, arg12, 1)
    
    if (_mm_movemask_ps(temp0_45) != 0)
        zmm9 = zmm2
    
    arg10 = __subps_xmmps_memps(arg12, arg19)
    float temp0_48[0x4] = _mm_mul_ps(temp0_42, temp0_42)
    float temp0_49[0x4] = _mm_mul_ps(temp0_43, temp0_43)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_38, arg12, 5)) != 0)
        zmm1 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
    
    float temp0_53[0x4] = _mm_blendv_ps(zmm1, zmm9, temp0_45)
    float temp0_55[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_48, data_142d8f750), temp0_49)
    float temp0_58[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_20), temp0_8), temp0_2)
    float temp0_61[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_44), temp0_21), temp0_4)
    float temp0_64[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_53), temp0_23), temp0_6)
    float temp0_65[0x4] = _mm_add_ps(temp0_16, temp0_58)
    float temp0_66[0x4] = _mm_add_ps(temp0_33, temp0_61)
    zmm7 = _mm_add_ps(zmm7, temp0_64)
    float temp0_68[0x4] = _mm_sub_ps(zmm14, temp0_65)
    float temp0_69[0x4] = _mm_sub_ps(zmm8, temp0_66)
    float temp0_70[0x4] = _mm_sub_ps(arg12, zmm7)
    float temp0_71[0x4] = _mm_div_ps(temp0_68, temp0_8)
    float temp0_72[0x4] = _mm_div_ps(temp0_69, temp0_21)
    float temp0_73[0x4] = _mm_div_ps(temp0_70, temp0_23)
    arg_40 = temp0_71
    arg10 = _mm_mul_ps(arg10, arg10)
    int64_t rbx_1 = 0
    zmm5 = _mm_cmpeq_epi32(temp0_65, temp0_65)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_20, zmm5))
    
    if (i == 0)
        goto label_1400a16dc
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400a176f
            
            goto label_1400a16a8
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400a176f:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400a16b0
            
            goto label_1400a177f
        
    label_1400a16a8:
        
        if ((i & 4) == 0)
        label_1400a16b0:
            
            if ((i & 8) != 0)
                goto label_1400a178f
            
            goto label_1400a16b8
        
    label_1400a177f:
        (&arg_8)[rbx_1] = 0
        
        if ((i & 8) != 0)
        label_1400a178f:
            (&arg_c)[rbx_1] = 0
            
            if ((i & 1) == 0)
                goto label_1400a16c0
            
            goto label_1400a179f
        
    label_1400a16b8:
        
        if ((i & 1) == 0)
        label_1400a16c0:
            
            if ((i & 2) != 0)
                goto label_1400a17af
            
            goto label_1400a16c8
        
    label_1400a179f:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400a17af:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400a16d0
            
            goto label_1400a17bf
        
    label_1400a16c8:
        
        if ((i & 4) != 0)
        label_1400a17bf:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400a16d0:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400a16dc:
        int32_t rbp_1 = *(arg4 + rbx_1)
        char temp0_82 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rbp_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_82 != 0)
            if ((temp0_82 & 1) == 0)
                if ((temp0_82 & 2) != 0)
                    goto label_1400a17eb
                
                goto label_1400a170e
            
            *(&__return_addr + (rbx_1 << 2)) = rbp_1 - 2
            
            if ((temp0_82 & 2) != 0)
            label_1400a17eb:
                *(&__return_addr:4 + (rbx_1 << 2)) = rbp_1 - 2
                
                if ((temp0_82 & 4) == 0)
                    goto label_1400a1716
                
                goto label_1400a17f7
            
        label_1400a170e:
            
            if ((temp0_82 & 4) == 0)
            label_1400a1716:
                
                if ((temp0_82 & 8) != 0)
                    goto label_1400a1803
                
                goto label_1400a171e
            
        label_1400a17f7:
            (&arg_8)[rbx_1] = rbp_1 - 2
            
            if ((temp0_82 & 8) != 0)
            label_1400a1803:
                (&arg_c)[rbx_1] = rbp_1 - 2
                
                if ((temp0_82 & 1) == 0)
                    goto label_1400a1726
                
                goto label_1400a180f
            
        label_1400a171e:
            
            if ((temp0_82 & 1) == 0)
            label_1400a1726:
                
                if ((temp0_82 & 2) != 0)
                    goto label_1400a181f
                
                goto label_1400a172e
            
        label_1400a180f:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_82 & 2) != 0)
            label_1400a181f:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_82 & 4) == 0)
                    goto label_1400a1736
                
                goto label_1400a182f
            
        label_1400a172e:
            
            if ((temp0_82 & 4) != 0)
            label_1400a182f:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_82 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400a1736:
                
                if ((temp0_82 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
        
        if (rbx_1 == 8)
            break
        
        zmm4 = *(&arg_10 + (rbx_1 << 2))
        rbx_1 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm5))
    while (i != 0)
    
    float temp0_83[0x4] = _mm_add_ps(temp0_55, arg10)
    zmm6 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm1 = __return_addr.o
    zmm4 = arg_10
    int32_t temp0_85[0x4] = _mm_mullo_epi32(zmm6, zmm1)
    zmm13 = _mm_add_epi32(temp0_85, zmm4)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm9 = _mm_mullo_epi32(zmm13, zmm0)
    zmm2 = _mm_add_epi32(zmm9, temp0_53)
    float (* rbx_2)[0x4] = *(arg7 + 0x10)
    zmm2 = _mm_slli_epi32(zmm2, 2)
    int64_t rdi_1 = sx.q(zmm2[0])
    int64_t rsi_1 = sx.q(_mm_extract_epi32(zmm2, 1))
    int64_t rax_11 = sx.q(_mm_extract_epi32(zmm2, 2))
    int64_t rbp_5 = sx.q(_mm_extract_epi32(zmm2, 3))
    float temp0_96[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(rbx_2 + rdi_1), *(rbx_2 + rsi_1), 0x10), 
            *(rbx_2 + rax_11), 0x20), 
        *(rbx_2 + rbp_5), 0x30)
    zmm12 = *(rbx_2 + rdi_1 + 4)
    zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm5), zmm6)
    zmm7 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm4), zmm0), temp0_53), 2)
    zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm6), zmm0)
    zmm6 = *(rbx_2 + sx.q(zmm7.d))
    int32_t temp0_105 = _mm_extract_epi32(zmm7, 1)
    int64_t rdx_1 = sx.q(_mm_extract_epi32(zmm7, 2))
    int32_t temp0_107 = _mm_extract_epi32(zmm7, 3)
    float temp0_111[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm6, *(rbx_2 + sx.q(temp0_105)), 0x10), 
                *(rbx_2 + rdx_1), 0x20), 
            *(rbx_2 + sx.q(temp0_107)), 0x30), 
        temp0_96)
    arg11 = arg_40
    zmm4 = _mm_sub_epi32(zmm4, zmm5)
    arg10 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_85, zmm4), zmm0), temp0_53), 2)
    int64_t rdx_4 = sx.q(arg10[0])
    int32_t temp0_117 = _mm_extract_epi32(arg10, 1)
    int32_t temp0_118 = _mm_extract_epi32(arg10, 2)
    zmm5 = *(rbx_2 + rdx_4)
    int32_t temp0_119 = _mm_extract_epi32(arg10, 3)
    float temp0_120[0x4] = _mm_mul_ps(temp0_111, arg11)
    float temp0_123[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm5, *(rbx_2 + sx.q(temp0_117)), 0x10), 
            *(rbx_2 + sx.q(temp0_118)), 0x20), 
        *(rbx_2 + sx.q(temp0_119)), 0x30)
    zmm4 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm1), zmm0), temp0_53), 2)
    zmm7 = *(rbx_2 + sx.q(zmm4[0]))
    int64_t r15_4 = sx.q(_mm_extract_epi32(zmm4, 1))
    int32_t temp0_129 = _mm_extract_epi32(zmm4, 2)
    int64_t rdx_11 = sx.q(_mm_extract_epi32(zmm4, 3))
    zmm7 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm7, *(rbx_2 + r15_4), 0x10), 
            *(rbx_2 + sx.q(temp0_129)), 0x20), 
        *(rbx_2 + rdx_11), 0x30)
    float temp0_134[0x4] = _mm_add_ps(temp0_120, temp0_96)
    zmm7 = _mm_sub_ps(zmm7, temp0_123)
    float temp0_138[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rbx_2 + rsi_1 + 4), 0x10), 
            *(rbx_2 + rax_11 + 4), 0x20), 
        *(rbx_2 + rbp_5 + 4), 0x30)
    zmm7 = _mm_mul_ps(zmm7, arg11)
    zmm0 = _mm_add_epi32(zmm0, temp0_53)
    zmm9 = _mm_add_epi32(zmm9, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm13)
    zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, temp0_53), 2)
    zmm2 = *(rbx_2 + sx.q(zmm13[0]) + 4)
    int64_t rax_15 = sx.q(_mm_extract_epi32(zmm13, 1))
    int32_t temp0_146 = _mm_extract_epi32(zmm13, 2)
    int64_t rsi_3 = sx.q(_mm_extract_epi32(zmm13, 3))
    float temp0_150[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rbx_2 + rax_15 + 4), 0x10), 
            *(rbx_2 + sx.q(temp0_146) + 4), 0x20), 
        *(rbx_2 + rsi_3 + 4), 0x30)
    zmm7 = _mm_add_ps(zmm7, temp0_123)
    float temp0_154[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_150, temp0_138), arg11), temp0_138)
    zmm9 = _mm_slli_epi32(zmm9, 2)
    arg10 = *(rbx_2 + sx.q(zmm9[0]) + 4)
    int32_t temp0_156 = _mm_extract_epi32(zmm9, 1)
    int64_t rdx_15 = sx.q(_mm_extract_epi32(zmm9, 2))
    int32_t temp0_158 = _mm_extract_epi32(zmm9, 3)
    arg10 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(arg10, *(rbx_2 + sx.q(temp0_156) + 4), 0x10), 
            *(rbx_2 + rdx_15 + 4), 0x20), 
        *(rbx_2 + sx.q(temp0_158) + 4), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2)
    int64_t rax_22 = sx.q(zmm0[0])
    int32_t temp0_163 = _mm_extract_epi32(zmm0, 1)
    zmm1 = *(rbx_2 + rax_22 + 4)
    int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_6 = sx.q(_mm_extract_epi32(zmm0, 3))
    float temp0_171[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_2 + sx.q(temp0_163) + 4), 0x10), 
                        *(rbx_2 + rdx_18 + 4), 0x20), 
                    *(rbx_2 + rsi_6 + 4), 0x30), 
                arg10), 
            arg11), 
        arg10)
    zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, temp0_134), temp0_72), temp0_134)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_171, temp0_154), temp0_72), temp0_154), 
                zmm7), 
            temp0_73), 
        zmm7)
    float temp0_181[0x4] = _mm_cmpeq_ps(temp0_83, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_83, zx.o(0), 7), temp0_181)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_185[0x4] = _mm_rsqrt_ps(temp0_83)
        float temp0_187[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_83, temp0_185), temp0_185)
        arg10 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_187), temp0_185), 
            data_142d3f640)
        float temp0_191[0x4] = _mm_rcp_ps(arg10)
        arg10 = _mm_mul_ps(arg10, temp0_191)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, arg10), temp0_191), zmm1), zmm0)
    
    zmm8 = arg15
    zmm9 = arg14
    arg11 = arg13
    float temp0_197[0x4] = __subps_xmmps_memps(zmm1, arg17)
    float temp0_198[0x4] = __cmpps_xmmps_memps_immb(temp0_197, data_142fc95d0, 1)
    char temp0_199 = _mm_movemask_ps(temp0_198)
    uint128_t arg_2a0
    float arg_2b0[0x4]
    
    if (temp0_199 != 0)
        zmm7 = _mm_mul_ps(arg_2a0, temp0_197)
        float temp0_201[0x4] = _mm_mul_ps(arg_2b0, temp0_197)
        float temp0_202[0x4] = _mm_mul_ps(arg20, temp0_197)
        zmm4 = zmm8
        char temp1_1 = temp0_199 & 1
        
        if (temp1_1 == 0)
            arg10 = zmm9
            
            if (temp1_1 != 0)
                goto label_1400a1c8e
            
            goto label_1400a1c20
        
        zmm4 = zmm8
        zmm4[0] = zmm4[0] f+ zmm7.d
        arg10 = zmm9
        
        if (temp1_1 != 0)
        label_1400a1c8e:
            arg10 = zmm9
            arg10[0] = arg10[0] f+ temp0_201[0]
            zmm2 = arg11
            
            if (temp1_1 == 0)
                goto label_1400a1c26
            
            goto label_1400a1c9c
        
    label_1400a1c20:
        zmm2 = arg11
        bool cond:6_1
        bool cond:7_1
        bool cond:8_1
        bool cond:9_1
        
        if (temp1_1 == 0)
        label_1400a1c26:
            zmm8 = _mm_add_ps(zmm8, zmm7)
            char temp3_1 = temp0_199 & 2
            cond:6_1 = temp3_1 != 0
            cond:7_1 = temp3_1 == 0
            cond:8_1 = temp3_1 == 0
            cond:9_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
                goto label_1400a1cac
            
            goto label_1400a1c2e
        
    label_1400a1c9c:
        zmm2 = arg11
        zmm2[0] = zmm2[0] + temp0_202[0]
        zmm8 = _mm_add_ps(zmm8, zmm7)
        char temp2_1 = temp0_199 & 2
        cond:6_1 = temp2_1 != 0
        cond:7_1 = temp2_1 == 0
        cond:8_1 = temp2_1 == 0
        cond:9_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
        label_1400a1cac:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
            zmm9 = _mm_add_ps(zmm9, temp0_201)
            
            if (cond:7_1)
                goto label_1400a1c38
            
            goto label_1400a1cbd
        
    label_1400a1c2e:
        zmm9 = _mm_add_ps(zmm9, temp0_201)
        
        if (not(cond:6_1))
        label_1400a1c38:
            arg11 = _mm_add_ps(arg11, temp0_202)
            
            if (cond:9_1)
                goto label_1400a1cce
            
            goto label_1400a1c42
        
    label_1400a1cbd:
        arg10 = _mm_blend_ps(arg10, zmm9, 2)
        arg11 = _mm_add_ps(arg11, temp0_202)
        bool cond:10_1
        bool cond:11_1
        bool cond:12_1
        bool cond:13_1
        
        if (not(cond:8_1))
        label_1400a1cce:
            zmm2 = _mm_blend_ps(zmm2, arg11, 2)
            char temp5_1 = temp0_199 & 4
            cond:10_1 = temp5_1 == 0
            cond:11_1 = temp5_1 != 0
            cond:12_1 = temp5_1 != 0
            cond:13_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
                goto label_1400a1c4a
            
            goto label_1400a1cdd
        
    label_1400a1c42:
        char temp4_1 = temp0_199 & 4
        cond:10_1 = temp4_1 == 0
        cond:11_1 = temp4_1 != 0
        cond:12_1 = temp4_1 != 0
        cond:13_1 = temp4_1 == 0
        
        if (temp4_1 != 0)
        label_1400a1cdd:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
            
            if (not(cond:10_1))
            label_1400a1cea:
                arg10 = _mm_blend_ps(arg10, zmm9, 4)
                
                if (cond:13_1)
                    goto label_1400a1c56
                
                goto label_1400a1cf7
        else
        label_1400a1c4a:
            
            if (cond:11_1)
                goto label_1400a1cea
        
        bool cond:15_1
        bool cond:16_1
        bool cond:17_1
        bool cond:18_1
        
        if (not(cond:12_1))
        label_1400a1c56:
            char temp7_1 = temp0_199 & 8
            cond:15_1 = temp7_1 != 0
            cond:16_1 = temp7_1 == 0
            cond:17_1 = temp7_1 == 0
            cond:18_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
                goto label_1400a1d06
            
            goto label_1400a1c5e
        
    label_1400a1cf7:
        zmm2 = _mm_blend_ps(zmm2, arg11, 4)
        char temp6_1 = temp0_199 & 8
        cond:15_1 = temp6_1 != 0
        cond:16_1 = temp6_1 == 0
        cond:17_1 = temp6_1 == 0
        cond:18_1 = temp6_1 != 0
        
        if (temp6_1 == 0)
        label_1400a1d06:
            zmm8 = zmm4
            
            if (cond:16_1)
                goto label_1400a1c6b
            
            goto label_1400a1d10
        
    label_1400a1c5e:
        zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
        
        if (cond:15_1)
        label_1400a1d10:
            zmm9 = _mm_blend_ps(zmm9, arg10, 7)
            
            if (not(cond:17_1))
                zmm2 = _mm_blend_ps(zmm2, arg11, 8)
        else
        label_1400a1c6b:
            zmm9 = arg10
            
            if (cond:18_1)
                zmm2 = _mm_blend_ps(zmm2, arg11, 8)
        
        arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_197, arg16), temp0_198)
        arg11 = zmm2
    
    arg5 = zx.q(arg5.d + 4)
    
    if (arg5.d s>= arg8)
        result = arg43
        break
    
    arg13 = arg11
    arg14 = zmm9
    arg15 = zmm8
    zmm0 = __pmulld_xmmdq_memdq(*(arg39 + sx.q((arg5 << 2).d)), data_142fc95c0)
    int64_t rax_57 = sx.q(zmm0[0])
    int64_t rbp_29 = sx.q(_mm_extract_epi32(zmm0, 1))
    int64_t rbx_15 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_13 = sx.q(_mm_extract_epi32(zmm0, 3))
    zmm5 = *(arg9 + (rax_57 << 2) + 4)
    float temp0_560[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(arg9 + (rax_57 << 2)), *(arg9 + (rbp_29 << 2)), 0x10), 
            *(arg9 + (rbx_15 << 2)), 0x20), 
        *(arg9 + (rsi_13 << 2)), 0x30)
    float temp0_563[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm5, *(arg9 + (rbp_29 << 2) + 4), 0x10), 
            *(arg9 + (rbx_15 << 2) + 4), 0x20), 
        *(arg9 + (rsi_13 << 2) + 4), 0x30)
    float temp0_566[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(arg9 + (rax_57 << 2) + 8), *(arg9 + (rbp_29 << 2) + 8), 
                0x10), 
            *(arg9 + (rbx_15 << 2) + 8), 0x20), 
        *(arg9 + (rsi_13 << 2) + 8), 0x30)
    arg10 = temp0_566
    arg_40 = temp0_560
    arg_60 = arg10
    arg_70 = zx.o(0)
    zmm0 = *(arg6 + 0xc)
    float temp0_567[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = temp0_567
    arg_10 = temp0_567
    arg12 = temp0_567
    arg_30 = temp0_567
    zmm9 = *arg6
    zmm8 = *(arg6 + 4)
    arg11 = *(arg6 + 8)
    float temp0_568[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_569[0x4] = _mm_mul_ps(arg10, temp0_568)
    float temp0_570[0x4] = _mm_shuffle_ps(arg11, arg11, 0)
    float temp0_571[0x4] = _mm_mul_ps(temp0_560, temp0_570)
    float temp0_572[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    zmm7 = _mm_mul_ps(temp0_563, temp0_572)
    float temp0_575[0x4] = _mm_sub_ps(temp0_569, _mm_mul_ps(temp0_563, temp0_570))
    float temp0_577[0x4] = _mm_sub_ps(temp0_571, _mm_mul_ps(arg10, temp0_572))
    zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(temp0_560, temp0_568))
    float temp0_580[0x4] = _mm_add_ps(temp0_575, temp0_575)
    float temp0_581[0x4] = _mm_add_ps(temp0_577, temp0_577)
    zmm7 = _mm_add_ps(zmm7, zmm7)
    arg10 = _mm_mul_ps(temp0_567, temp0_580)
    float temp0_584[0x4] = _mm_mul_ps(temp0_567, temp0_581)
    arg10 = __addps_xmmps_memps(arg10, arg_40)
    float temp0_586[0x4] = __addps_xmmps_memps(temp0_584, temp0_563)
    float temp0_588[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_567, zmm7), arg_60)
    float temp0_589[0x4] = _mm_mul_ps(zmm7, temp0_568)
    float temp0_590[0x4] = _mm_mul_ps(temp0_580, temp0_570)
    float temp0_591[0x4] = _mm_mul_ps(temp0_581, temp0_572)
    float temp0_594[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_589, _mm_mul_ps(temp0_581, temp0_570)), arg10)
    float temp0_597[0x4] = _mm_add_ps(_mm_sub_ps(temp0_590, _mm_mul_ps(zmm7, temp0_572)), temp0_586)
    float temp0_600[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_591, _mm_mul_ps(temp0_580, temp0_568)), temp0_588)
    arg11 = arg6[1].d
    zmm2 = *(arg6 + 0x14)
    arg11 = _mm_add_ps(_mm_shuffle_ps(arg11, arg11, 0), temp0_594)
    float temp0_604[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_597)
    zmm0 = *(arg6 + 0x18)
    float temp0_606[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_600)
    arg_2a0 = arg11
    arg18 = temp0_604
    arg_2b0 = temp0_604
    arg19 = temp0_606
    arg20 = temp0_606
    int64_t rbx_16 = 0
label_1400a128c:
    zmm2 = *(&arg_1a0 + rbx_16)
    float temp0_607[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    arg10 = _mm_cmpeq_ps(temp0_607, arg11, 1)
    char temp0_609 = _mm_movemask_ps(arg10)
    
    if (temp0_609 != 0)
        if ((temp0_609 & 1) == 0)
            if ((temp0_609 & 2) != 0)
                goto label_1400a138d
            
            goto label_1400a12bd
        
        *(&__return_addr + (rbx_16 << 2)) = zmm2[0]
        
        if ((temp0_609 & 2) != 0)
        label_1400a138d:
            *(&__return_addr:4 + (rbx_16 << 2)) = zmm2[0]
            
            if ((temp0_609 & 4) == 0)
                goto label_1400a12c5
            
            goto label_1400a139b
        
    label_1400a12bd:
        
        if ((temp0_609 & 4) != 0)
        label_1400a139b:
            (&arg_8)[rbx_16] = zmm2[0]
            
            if ((temp0_609 & 8) != 0)
                (&arg_c)[rbx_16] = zmm2[0]
        else
        label_1400a12c5:
            
            if ((temp0_609 & 8) != 0)
                (&arg_c)[rbx_16] = zmm2[0]
    
    float temp0_610[0x4] = _mm_cmpeq_ps(temp0_607, arg11, 5)
    
    if (_mm_movemask_ps(temp0_610) != 0)
        arg10 = *(&arg_190 + rbx_16)
        float temp0_612[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
        char temp0_615 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(arg11, temp0_612, 1), temp0_610))
        
        if (temp0_615 != 0)
            if ((temp0_615 & 1) == 0)
                if ((temp0_615 & 2) != 0)
                    goto label_1400a13bb
                
                goto label_1400a1312
            
            *(&__return_addr + (rbx_16 << 2)) = arg10[0]
            
            if ((temp0_615 & 2) != 0)
            label_1400a13bb:
                *(&__return_addr:4 + (rbx_16 << 2)) = arg10[0]
                
                if ((temp0_615 & 4) == 0)
                    goto label_1400a131a
                
                goto label_1400a13c9
            
        label_1400a1312:
            
            if ((temp0_615 & 4) != 0)
            label_1400a13c9:
                (&arg_8)[rbx_16] = arg10[0]
                
                if ((temp0_615 & 8) != 0)
                    (&arg_c)[rbx_16] = arg10[0]
            else
            label_1400a131a:
                
                if ((temp0_615 & 8) != 0)
                    (&arg_c)[rbx_16] = arg10[0]
        
        char temp0_618 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(arg11, temp0_612, 5), temp0_610))
        
        if (temp0_618 != 0)
            zmm0 = *(&arg_2a0 + (rbx_16 << 2))
            
            if ((temp0_618 & 1) == 0)
                if ((temp0_618 & 2) != 0)
                    goto label_1400a13e9
                
                goto label_1400a134d
            
            *(&__return_addr + (rbx_16 << 2)) = zmm0[0]
            
            if ((temp0_618 & 2) != 0)
            label_1400a13e9:
                *(&__return_addr:4 + (rbx_16 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                
                if ((temp0_618 & 4) == 0)
                    goto label_1400a1355
                
                goto label_1400a13f9
            
        label_1400a134d:
            
            if ((temp0_618 & 4) != 0)
            label_1400a13f9:
                (&arg_8)[rbx_16] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_618 & 8) != 0)
                    (&arg_c)[rbx_16] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1400a1355:
                
                if ((temp0_618 & 8) != 0)
                    (&arg_c)[rbx_16] = __extractps_memd_xmmps_immb(zmm0, 3)
    
    if (rbx_16 != 8)
        *(&arg_2b0 + (rbx_16 << 2))
        break

int32_t* rcx
int64_t* rdx_22

if (arg5.d s>= result)
    rcx = arg41
    rdx_22 = arg42
label_1400a47ec:
    float temp0_541[0x4] = _mm_hadd_ps(zmm8, zmm8)
    float temp0_542[0x4] = _mm_hadd_ps(temp0_541, temp0_541)
    float temp0_543[0x4] = _mm_hadd_ps(zmm9, zmm9)
    float temp0_545[0x4] = _mm_insert_ps(temp0_542, _mm_hadd_ps(temp0_543, temp0_543), 0x1c)
    float temp0_546[0x4] = _mm_hadd_ps(arg11, arg11)
    float temp0_547[0x4] = _mm_hadd_ps(temp0_546, temp0_546)
    float temp0_549[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_22), rdx_22[1].d, 0x20), 
        temp0_545[0].q | temp0_547[0].q << 0x40)
    *rdx_22 = temp0_549[0]
    *(rdx_22 + 4) = __extractps_memd_xmmps_immb(temp0_549, 1)
    rdx_22[1].d = __extractps_memd_xmmps_immb(temp0_549, 2)
    zmm0 = arg16
    float temp0_552[0x4] = _mm_hadd_ps(zmm0, zmm0)
    float temp0_553[0x4] = _mm_hadd_ps(temp0_552, temp0_552)
    temp0_553[0] = temp0_553[0] f+ *rcx
    *rcx = temp0_553[0]
    return result

zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5.d), 0), data_142e11d00)
zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm0)
int64_t rax_27 = sx.q(arg5.d << 2)
uint32_t temp0_224 = _mm_movemask_ps(zmm2)
arg15 = zmm8
arg14 = zmm9
arg13 = arg11

if ((zx.q(temp0_224) & 0xfffffff9) != 9)
    if ((temp0_224.b & 1) != 0)
        __return_addr.d = *(arg39 + rax_27)
    
    if ((temp0_224.b & 2) == 0)
        if ((temp0_224.b & 4) != 0)
            goto label_1400a4a29
        
        goto label_1400a2c46
    
    __return_addr:4.d = *(arg39 + rax_27 + 4)
    
    if ((temp0_224.b & 4) == 0)
    label_1400a2c46:
        
        if ((temp0_224.b & 8) != 0)
            arg_c = *(arg39 + rax_27 + 0xc)
    else
    label_1400a4a29:
        arg_8 = *(arg39 + rax_27 + 8)
        
        if ((temp0_224.b & 8) != 0)
            arg_c = *(arg39 + rax_27 + 0xc)
    
    zmm1 = __return_addr.o
else
    zmm1 = *(arg39 + rax_27)

zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
int64_t rax_30 = sx.q(zmm1[0])
int64_t rbx_4 = arg9 + (rax_30 << 2)
zmm0 = *(arg9 + (rax_30 << 2))
int64_t rbp_7 = sx.q(_mm_extract_epi32(zmm1, 1))
int64_t r13 = arg9 + (rbp_7 << 2)
int64_t rdi_10 = sx.q(_mm_extract_epi32(zmm1, 2))
int64_t rdx_26 = arg9 + (rdi_10 << 2)
int64_t rax_32 = sx.q(_mm_extract_epi32(zmm1, 3))
int64_t rsi_8 = arg9 + (rax_32 << 2)
float temp0_231[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, *(arg9 + (rbp_7 << 2)), 0x10), 
        *(arg9 + (rdi_10 << 2)), 0x20), 
    *(arg9 + (rax_32 << 2)), 0x30)
arg10 = data_142fc95e0 & zmm2
uint64_t r14 = zx.q(arg10[0])
zmm8 = *(r14 + rbx_4)
uint64_t rax_33 = zx.q(_mm_extract_epi32(arg10, 1))
uint64_t r15_5 = zx.q(_mm_extract_epi32(arg10, 2))
uint64_t r10_1 = zx.q(_mm_extract_epi32(arg10, 3))
arg19[0].q = rax_33
float temp0_237[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rax_33 + r13), 0x10), 
        *(r15_5 + rdx_26), 0x20), 
    *(r10_1 + rsi_8), 0x30)
arg10 = data_142fc95f0 & zmm2
zmm6 = *(zx.q(arg10[0]) + rbx_4)
uint64_t rax_35 = zx.q(_mm_extract_epi32(arg10, 1))
uint64_t rdi_11 = zx.q(_mm_extract_epi32(arg10, 2))
uint64_t rbx_5 = zx.q(_mm_extract_epi32(arg10, 3))
float temp0_243[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_35 + r13), 0x10), 
        *(rdi_11 + rdx_26), 0x20), 
    *(rbx_5 + rsi_8), 0x30)
float arg_1f0[0x4] = zx.o(0)
zmm5 = *(arg6 + 0xc)
float temp0_244[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
__return_addr.o = temp0_244
arg_10 = temp0_244
zmm7 = *arg6
zmm1 = *(arg6 + 4)
zmm4 = *(arg6 + 8)
float temp0_245[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_247[0x4] = _mm_mul_ps(temp0_237, zmm7)
zmm7 = _mm_mul_ps(zmm7, temp0_243)
float temp0_249[0x4] = _mm_mul_ps(temp0_243, temp0_245)
float temp0_250[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_251[0x4] = _mm_mul_ps(temp0_245, temp0_231)
float temp0_252[0x4] = _mm_mul_ps(temp0_231, temp0_250)
arg10 = _mm_mul_ps(zx.o(0), temp0_244)
float temp0_255[0x4] = _mm_sub_ps(temp0_249, _mm_mul_ps(temp0_250, temp0_237))
float temp0_256[0x4] = _mm_sub_ps(temp0_252, zmm7)
float temp0_257[0x4] = _mm_sub_ps(temp0_247, temp0_251)
arg10 = _mm_sub_ps(arg10, arg10)
float temp0_259[0x4] = _mm_add_ps(temp0_255, temp0_255)
float temp0_260[0x4] = _mm_add_ps(temp0_256, temp0_256)
float temp0_261[0x4] = _mm_add_ps(temp0_257, temp0_257)
arg10 = _mm_add_ps(arg10, arg10)
arg_40 = temp0_259
float arg_50[0x4] = temp0_260
arg_60 = temp0_261
arg_70 = arg10
arg10 = _mm_mul_ps(arg10, temp0_244)
float temp0_264[0x4] = _mm_mul_ps(temp0_244, temp0_259)
float temp0_265[0x4] = _mm_mul_ps(temp0_244, temp0_260)
float temp0_266[0x4] = _mm_mul_ps(temp0_244, temp0_261)
float temp0_267[0x4] = __addps_xmmps_memps(temp0_264, temp0_231)
float temp0_268[0x4] = __addps_xmmps_memps(temp0_265, temp0_237)
float temp0_269[0x4] = __addps_xmmps_memps(temp0_266, temp0_243)
arg_30 = temp0_244
float arg_2d0[0x4] = temp0_267
float arg_2e0[0x4] = temp0_268
float arg_2f0[0x4] = temp0_269
int32_t arg_300[0x4] = __addps_xmmps_memps(arg10, arg_1f0)
zmm4 = *arg6
zmm5 = *(arg6 + 4)
zmm7 = *(arg6 + 8)
float temp0_271[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_272[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
arg10 = _mm_mul_ps(temp0_260, temp0_272)
float temp0_274[0x4] = _mm_mul_ps(temp0_272, temp0_261)
float temp0_275[0x4] = _mm_mul_ps(temp0_261, temp0_271)
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_277[0x4] = _mm_mul_ps(temp0_271, temp0_259)
float temp0_278[0x4] = _mm_mul_ps(temp0_259, zmm7)
float temp0_280[0x4] = _mm_sub_ps(temp0_275, _mm_mul_ps(zmm7, temp0_260))
float temp0_281[0x4] = _mm_sub_ps(temp0_278, temp0_274)
arg10 = _mm_sub_ps(arg10, temp0_277)
float temp0_283[0x4] = _mm_add_ps(temp0_280, temp0_267)
float temp0_284[0x4] = _mm_add_ps(temp0_281, temp0_268)
arg10 = _mm_add_ps(arg10, temp0_269)
zmm0 = arg6[1].d
zmm4 = *(arg6 + 0x14)
float temp0_287[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_283)
float temp0_289[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_284)
zmm1 = *(arg6 + 0x18)
float temp0_291[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg10)
float arg_270[0x4] = temp0_287
float arg_280[0x4] = temp0_289
int64_t rsi_9 = 0
label_1400a2efc:
zmm4 = *(&arg_1a0 + rsi_9)
arg10 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_293[0x4] = _mm_cmpeq_ps(arg10, temp0_287, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_293, zmm2)) != 0)
    char temp0_296 = _mm_movemask_ps(temp0_293)
    
    if ((temp0_296 & 1) == 0)
        if ((temp0_296 & 2) != 0)
            goto label_1400a300d
        
        goto label_1400a2f33
    
    *(&__return_addr + (rsi_9 << 2)) = zmm4[0]
    
    if ((temp0_296 & 2) != 0)
    label_1400a300d:
        *(&__return_addr:4 + (rsi_9 << 2)) = zmm4[0]
        
        if ((temp0_296 & 4) == 0)
            goto label_1400a2f3b
        
        goto label_1400a301b
    
label_1400a2f33:
    
    if ((temp0_296 & 4) != 0)
    label_1400a301b:
        (&arg_8)[rsi_9] = zmm4[0]
        
        if ((temp0_296 & 8) != 0)
            (&arg_c)[rsi_9] = zmm4[0]
    else
    label_1400a2f3b:
        
        if ((temp0_296 & 8) != 0)
            (&arg_c)[rsi_9] = zmm4[0]

arg10 = _mm_cmpeq_ps(arg10, temp0_287, 5)

if (_mm_movemask_ps(_mm_and_ps(zmm2, arg10)) != 0)
    zmm5 = *(&arg_190 + rsi_9)
    float temp0_300[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_287, temp0_300, 1), arg10)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm2)) != 0)
        char temp0_305 = _mm_movemask_ps(zmm6)
        
        if ((temp0_305 & 1) == 0)
            if ((temp0_305 & 2) != 0)
                goto label_1400a303b
            
            goto label_1400a2f94
        
        *(&__return_addr + (rsi_9 << 2)) = zmm5[0]
        
        if ((temp0_305 & 2) != 0)
        label_1400a303b:
            *(&__return_addr:4 + (rsi_9 << 2)) = zmm5[0]
            
            if ((temp0_305 & 4) == 0)
                goto label_1400a2f9c
            
            goto label_1400a3049
        
    label_1400a2f94:
        
        if ((temp0_305 & 4) != 0)
        label_1400a3049:
            (&arg_8)[rsi_9] = zmm5[0]
            
            if ((temp0_305 & 8) != 0)
                (&arg_c)[rsi_9] = zmm5[0]
        else
        label_1400a2f9c:
            
            if ((temp0_305 & 8) != 0)
                (&arg_c)[rsi_9] = zmm5[0]
    
    zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_287, temp0_300, 5), arg10)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
        arg10 = *(&arg_270 + (rsi_9 << 2))
        char temp0_310 = _mm_movemask_ps(zmm1)
        
        if ((temp0_310 & 1) == 0)
            if ((temp0_310 & 2) != 0)
                goto label_1400a3069
            
            goto label_1400a2fd5
        
        *(&__return_addr + (rsi_9 << 2)) = arg10[0]
        
        if ((temp0_310 & 2) != 0)
        label_1400a3069:
            *(&__return_addr:4 + (rsi_9 << 2)) = __extractps_memd_xmmps_immb(arg10, 1)
            
            if ((temp0_310 & 4) == 0)
                goto label_1400a2fdd
            
            goto label_1400a3079
        
    label_1400a2fd5:
        
        if ((temp0_310 & 4) != 0)
        label_1400a3079:
            (&arg_8)[rsi_9] = __extractps_memd_xmmps_immb(arg10, 2)
            
            if ((temp0_310 & 8) != 0)
                (&arg_c)[rsi_9] = __extractps_memd_xmmps_immb(arg10, 3)
        else
        label_1400a2fdd:
            
            if ((temp0_310 & 8) != 0)
                (&arg_c)[rsi_9] = __extractps_memd_xmmps_immb(arg10, 3)

if (rsi_9 != 8)
    *(&arg_280 + (rsi_9 << 2))
    return 

zmm5 = __return_addr.o
float zmm11[0x4] = arg_10
float temp0_314[0x4] = _mm_sub_ps(zmm5, temp0_287)
zmm6 = *arg1
arg10 = *(arg1 + 4)
float temp0_315[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_316[0x4] = _mm_sub_ps(zmm5, temp0_315)
arg10 = _mm_shuffle_ps(arg10, arg10, 0)
float temp0_318[0x4] = _mm_sub_ps(zmm11, arg10)
zmm4 = *arg3
zmm7 = (*arg3)[1]
float temp0_319[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_320[0x4] = _mm_div_ps(temp0_316, temp0_319)
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_322[0x4] = _mm_div_ps(temp0_318, zmm7)
zmm9 = (*arg3)[2]
zmm12 = _mm_cvttps_epi32(temp0_320)
arg11 = _mm_cvttps_epi32(temp0_322)
float temp0_327[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_319), temp0_315)
float temp0_329[0x4] = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm9, 0x20), data_142fc9600)
float temp0_330[0x4] = _mm_shuffle_ps(temp0_329, temp0_329, 0)
float arg_d0[0x4] = zmm5
float temp0_332[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_327, temp0_330), zmm5, 1)
zmm5 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(temp0_330, temp0_330))
zmm6 = _mm_blendv_ps(zmm5, zmm12, temp0_332)
float arg_120[0x4] = zmm7
float arg_100[0x4] = arg10
float temp0_338[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(arg11), zmm7), arg10)
float temp0_339[0x4] = _mm_shuffle_ps(temp0_329, temp0_329, 0x55)
float temp0_340[0x4] = _mm_add_ps(temp0_338, temp0_339)
float temp0_341[0x4] = _mm_cmpeq_ps(temp0_340, zmm11, 1)
char temp0_343 = _mm_movemask_ps(_mm_and_ps(temp0_341, zmm2))
zmm13 = *(arg1 + 8)
float temp0_344[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
float temp0_345[0x4] = _mm_sub_ps(temp0_244, temp0_344)
float temp0_346[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_345, temp0_346))
float temp0_351[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_346), temp0_344)
float temp0_352[0x4] = _mm_shuffle_ps(temp0_329, temp0_329, 0xaa)
__return_addr.o = zmm6
zmm7 = _mm_cmpeq_ps(temp0_340, zmm11, 5)

if (temp0_343 != 0)
    zmm12 = arg11

float temp0_354[0x4] = __subps_xmmps_memps(zmm11, temp0_289)
float temp0_355[0x4] = _mm_mul_ps(temp0_314, temp0_314)
float temp0_356[0x4] = _mm_add_ps(temp0_351, temp0_352)

if (_mm_movemask_ps(_mm_and_ps(zmm7, zmm2)) != 0)
    zmm5 = __paddd_xmmdq_memdq(arg11, data_142d3f800)

float temp0_360[0x4] = __subps_xmmps_memps(temp0_244, temp0_291)
float temp0_361[0x4] = _mm_add_ps(temp0_355, zx.o(0))
float temp0_362[0x4] = _mm_mul_ps(temp0_354, temp0_354)
zmm7 = _mm_blendv_ps(zmm5, zmm12, temp0_341)
arg_10 = zmm7
float temp0_364[0x4] = _mm_cmpeq_ps(temp0_356, temp0_244, 5)
float temp0_365[0x4] = _mm_cmpeq_ps(temp0_356, temp0_244, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_365, zmm2)) != 0)
    zmm12 = zmm1

arg10 = _mm_add_ps(temp0_361, temp0_362)
float temp0_369[0x4] = _mm_mul_ps(temp0_360, temp0_360)

if (_mm_movemask_ps(_mm_and_ps(temp0_364, zmm2)) != 0)
    zmm5 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)

float temp0_373[0x4] = _mm_blendv_ps(zmm5, zmm12, temp0_365)
zmm14 = _mm_add_ps(arg10, temp0_369)
float temp0_377[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_319), temp0_315)
arg10 = arg_120
float temp0_380[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), arg10), arg_100)
float temp0_383[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_373), temp0_346), temp0_344)
zmm7 = _mm_add_ps(temp0_330, temp0_377)
float temp0_385[0x4] = _mm_add_ps(temp0_339, temp0_380)
float temp0_386[0x4] = _mm_add_ps(temp0_352, temp0_383)
float temp0_387[0x4] = _mm_sub_ps(arg_d0, zmm7)
float temp0_388[0x4] = _mm_sub_ps(zmm11, temp0_385)
float temp0_389[0x4] = _mm_sub_ps(temp0_244, temp0_386)
float temp0_390[0x4] = _mm_div_ps(temp0_387, temp0_319)
float temp0_391[0x4] = _mm_div_ps(temp0_388, arg10)
float temp0_392[0x4] = _mm_div_ps(temp0_389, temp0_346)
arg_40 = temp0_390
int64_t rcx_1 = 0
zmm0 = _mm_cmpeq_epi32(temp0_390, temp0_390)
label_1400a3339:
zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)

if (_mm_movemask_ps(zmm6 & zmm2) != 0)
    char temp0_396 = _mm_movemask_ps(zmm6)
    
    if ((temp0_396 & 1) == 0)
        if ((temp0_396 & 2) != 0)
            goto label_1400a341f
        
        goto label_1400a335f
    
    *(&__return_addr + (rcx_1 << 2)) = 0
    
    if ((temp0_396 & 2) != 0)
    label_1400a341f:
        *(&__return_addr:4 + (rcx_1 << 2)) = 0
        
        if ((temp0_396 & 4) == 0)
            goto label_1400a3367
        
        goto label_1400a342f
    
label_1400a335f:
    
    if ((temp0_396 & 4) == 0)
    label_1400a3367:
        
        if ((temp0_396 & 8) != 0)
            goto label_1400a343f
        
        goto label_1400a336f
    
label_1400a342f:
    (&arg_8)[rcx_1] = 0
    
    if ((temp0_396 & 8) != 0)
    label_1400a343f:
        (&arg_c)[rcx_1] = 0
        
        if ((temp0_396 & 1) == 0)
            goto label_1400a3377
        
        goto label_1400a344f
    
label_1400a336f:
    
    if ((temp0_396 & 1) == 0)
    label_1400a3377:
        
        if ((temp0_396 & 2) != 0)
            goto label_1400a345f
        
        goto label_1400a337f
    
label_1400a344f:
    arg_40[rcx_1] = 0
    
    if ((temp0_396 & 2) != 0)
    label_1400a345f:
        arg_40[1 + rcx_1] = 0
        
        if ((temp0_396 & 4) == 0)
            goto label_1400a3387
        
        goto label_1400a346f
    
label_1400a337f:
    
    if ((temp0_396 & 4) != 0)
    label_1400a346f:
        arg_40[2 + rcx_1] = 0
        
        if ((temp0_396 & 8) != 0)
            arg_40[3 + rcx_1] = 0
    else
    label_1400a3387:
        
        if ((temp0_396 & 8) != 0)
            arg_40[3 + rcx_1] = 0

int32_t rdx_27 = *(arg4 + rcx_1)
zmm1 =
    __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_27 - 1), 0), *(&__return_addr + (rcx_1 << 2)))

if (_mm_movemask_ps(zmm1 & zmm2) != 0)
    char temp0_400 = _mm_movemask_ps(zmm1)
    
    if ((temp0_400 & 1) == 0)
        if ((temp0_400 & 2) != 0)
            goto label_1400a349b
        
        goto label_1400a33cd
    
    *(&__return_addr + (rcx_1 << 2)) = rdx_27 - 2
    
    if ((temp0_400 & 2) != 0)
    label_1400a349b:
        *(&__return_addr:4 + (rcx_1 << 2)) = rdx_27 - 2
        
        if ((temp0_400 & 4) == 0)
            goto label_1400a33d5
        
        goto label_1400a34a7
    
label_1400a33cd:
    
    if ((temp0_400 & 4) == 0)
    label_1400a33d5:
        
        if ((temp0_400 & 8) != 0)
            goto label_1400a34b3
        
        goto label_1400a33dd
    
label_1400a34a7:
    (&arg_8)[rcx_1] = rdx_27 - 2
    
    if ((temp0_400 & 8) != 0)
    label_1400a34b3:
        (&arg_c)[rcx_1] = rdx_27 - 2
        
        if ((temp0_400 & 1) == 0)
            goto label_1400a33e5
        
        goto label_1400a34bf
    
label_1400a33dd:
    
    if ((temp0_400 & 1) == 0)
    label_1400a33e5:
        
        if ((temp0_400 & 2) != 0)
            goto label_1400a34cf
        
        goto label_1400a33ed
    
label_1400a34bf:
    arg_40[rcx_1] = 0x3f800000
    
    if ((temp0_400 & 2) != 0)
    label_1400a34cf:
        arg_40[1 + rcx_1] = 0x3f800000
        
        if ((temp0_400 & 4) == 0)
            goto label_1400a33f5
        
        goto label_1400a34df
    
label_1400a33ed:
    
    if ((temp0_400 & 4) != 0)
    label_1400a34df:
        arg_40[2 + rcx_1] = 0x3f800000
        
        if ((temp0_400 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000
    else
    label_1400a33f5:
        
        if ((temp0_400 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000

if (rcx_1 == 8)
    zmm7 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm6 = __return_addr.o
    arg10 = arg_10
    zmm5 = _mm_mullo_epi32(zmm7, zmm6)
    zmm9 = _mm_add_epi32(zmm5, arg10)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm13 = _mm_mullo_epi32(zmm9, zmm0)
    zmm1 = _mm_add_epi32(zmm13, temp0_373)
    float (* rax_52)[0x4] = *(arg7 + 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 2) & zmm2
    int64_t rdx_29 = sx.q(zmm1[0])
    zmm4 = *(rax_52 + rdx_29)
    int64_t rbx_6 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rdi_12 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm1, 3))
    float temp0_413[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_52 + rbx_6), 0x10), 
            *(rax_52 + rdi_12), 0x20), 
        *(rax_52 + rbp_9), 0x30)
    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
    zmm6 = _mm_mullo_epi32(_mm_sub_epi32(zmm6, zmm12), zmm7)
    zmm1 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, arg10), zmm0), temp0_373), 2)
    zmm9 = _mm_mullo_epi32(_mm_add_epi32(zmm9, zmm7), zmm0)
    zmm1 &= zmm2
    zmm7 = *(rax_52 + sx.q(zmm1[0]))
    int32_t temp0_423 = _mm_extract_epi32(zmm1, 1)
    int64_t rbx_8 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_425 = _mm_extract_epi32(zmm1, 3)
    zmm7 = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm7, *(rax_52 + sx.q(temp0_423)), 0x10), 
                *(rax_52 + rbx_8), 0x20), 
            *(rax_52 + sx.q(temp0_425)), 0x30), 
        temp0_413)
    arg11 = arg_40
    zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, arg11), temp0_413)
    int32_t temp0_432[0x4] = _mm_sub_epi32(arg10, zmm12)
    zmm5 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, temp0_432), zmm0), temp0_373), 2) & zmm2
    zmm4 = *(rax_52 + sx.q(zmm5[0]))
    int64_t rcx_8 = sx.q(_mm_extract_epi32(zmm5, 1))
    int32_t temp0_438 = _mm_extract_epi32(zmm5, 2)
    int64_t rbx_10 = sx.q(_mm_extract_epi32(zmm5, 3))
    float temp0_442[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_52 + rcx_8), 0x10), 
            *(rax_52 + sx.q(temp0_438)), 0x20), 
        *(rax_52 + rbx_10), 0x30)
    arg10 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_432, zmm6), zmm0), temp0_373), 2) & zmm2
    zmm6 = *(rax_52 + sx.q(arg10[0]))
    int32_t temp0_447 = _mm_extract_epi32(arg10, 1)
    int64_t rbp_17 = sx.q(_mm_extract_epi32(arg10, 2))
    int32_t temp0_449 = _mm_extract_epi32(arg10, 3)
    float temp0_454[0x4] = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_52 + sx.q(temp0_447)), 0x10), 
                    *(rax_52 + rbp_17), 0x20), 
                *(rax_52 + sx.q(temp0_449)), 0x30), 
            temp0_442), 
        arg11)
    int32_t* rbx_12 = arg19[0].q
    arg10 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r14 + rax_52 + rdx_29), *(rbx_12 + rax_52 + rbx_6), 0x10), 
            *(r15_5 + rax_52 + rdi_12), 0x20), 
        *(r10_1 + rax_52 + rbp_9), 0x30)
    zmm0 = _mm_add_epi32(zmm0, temp0_373)
    zmm13 = _mm_add_epi32(zmm13, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm9)
    zmm9 = _mm_slli_epi32(_mm_add_epi32(zmm9, temp0_373), 2) & zmm2
    zmm5 = *(r14 + sx.q(zmm9[0]) + rax_52)
    void* rcx_19 = sx.q(_mm_extract_epi32(zmm9, 1)) + rax_52
    void* rdx_35 = sx.q(_mm_extract_epi32(zmm9, 2)) + rax_52
    void* rbp_20 = sx.q(_mm_extract_epi32(zmm9, 3)) + rax_52
    float temp0_468[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rbx_12 + rcx_19), 0x10), 
            *(r15_5 + rdx_35), 0x20), 
        *(r10_1 + rbp_20), 0x30)
    float temp0_469[0x4] = _mm_add_ps(temp0_454, temp0_442)
    float temp0_472[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_468, arg10), arg11), arg10)
    zmm13 = _mm_slli_epi32(zmm13, 2) & zmm2
    arg10 = *(r14 + sx.q(zmm13[0]) + rax_52)
    void* rcx_25 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_52
    void* rdx_38 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_52
    void* rbp_23 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_52
    arg10 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg10, *(rbx_12 + rcx_25), 0x10), 
            *(r15_5 + rdx_38), 0x20), 
        *(r10_1 + rbp_23), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
    zmm1 = *(r14 + sx.q(zmm0[0]) + rax_52)
    void* rcx_31 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_52
    void* rdx_41 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_52
    void* rbp_26 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_52
    float temp0_489[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_12 + rcx_31), 0x10), 
                        *(r15_5 + rdx_41), 0x20), 
                    *(r10_1 + rbp_26), 0x30), 
                arg10), 
            arg11), 
        arg10)
    float temp0_492[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_469, zmm7), temp0_391), zmm7)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_489, temp0_472), temp0_391), temp0_472), 
                temp0_492), 
            temp0_392), 
        temp0_492)
    arg10 = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm14, 7), arg10), zmm2)
    
    if (_mm_movemask_ps(zmm0) != 0)
        arg10 = _mm_rsqrt_ps(zmm14)
        float temp0_506[0x4] = _mm_mul_ps(_mm_mul_ps(zmm14, arg10), arg10)
        float temp0_509[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_506), arg10), data_142d3f640)
        arg10 = _mm_rcp_ps(temp0_509)
        float temp0_511[0x4] = _mm_mul_ps(temp0_509, arg10)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_511), arg10), zmm1), zmm0)
    
    rcx = arg41
    rdx_22 = arg42
    zmm8 = arg15
    zmm9 = arg14
    arg11 = arg13
    zmm0 = arg40
    float temp0_517[0x4] = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_517, data_142fc95d0, 1), zmm2)
    result = _mm_movemask_ps(zmm0)
    
    if (result.b == 0)
        goto label_1400a47ec
    
    zmm7 = _mm_mul_ps(arg_270, temp0_517)
    float temp0_522[0x4] = _mm_mul_ps(arg_280, temp0_517)
    float temp0_523[0x4] = _mm_mul_ps(temp0_291, temp0_517)
    result = zx.d(result.b)
    zmm4 = zmm8
    char temp8_1 = result.b & 1
    
    if (temp8_1 == 0)
        arg10 = zmm9
        
        if (temp8_1 != 0)
            goto label_1400a4736
        
        goto label_1400a3939
    
    zmm4 = zmm8
    zmm4[0] = zmm4[0] f+ zmm7.d
    arg10 = zmm9
    
    if (temp8_1 != 0)
    label_1400a4736:
        arg10 = zmm9
        arg10[0] = arg10[0] f+ temp0_522[0]
        zmm2 = arg11
        
        if (temp8_1 == 0)
            goto label_1400a3943
        
        goto label_1400a4748
    
label_1400a3939:
    zmm2 = arg11
    bool cond:23_1
    bool cond:24_1
    bool cond:25_1
    bool cond:26_1
    
    if (temp8_1 == 0)
    label_1400a3943:
        zmm8 = _mm_add_ps(zmm8, zmm7)
        char temp10_1 = result.b & 2
        cond:23_1 = temp10_1 != 0
        cond:24_1 = temp10_1 == 0
        cond:25_1 = temp10_1 == 0
        cond:26_1 = temp10_1 != 0
        
        if (temp10_1 != 0)
            goto label_1400a475c
        
        goto label_1400a394f
    
label_1400a4748:
    zmm2 = arg11
    zmm2[0] = zmm2[0] + temp0_523[0]
    zmm8 = _mm_add_ps(zmm8, zmm7)
    char temp9_1 = result.b & 2
    cond:23_1 = temp9_1 != 0
    cond:24_1 = temp9_1 == 0
    cond:25_1 = temp9_1 == 0
    cond:26_1 = temp9_1 != 0
    
    if (temp9_1 != 0)
    label_1400a475c:
        zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
        zmm9 = _mm_add_ps(zmm9, temp0_522)
        
        if (cond:24_1)
            goto label_1400a3959
        
        goto label_1400a476d
    
label_1400a394f:
    zmm9 = _mm_add_ps(zmm9, temp0_522)
    
    if (not(cond:23_1))
    label_1400a3959:
        arg11 = _mm_add_ps(arg11, temp0_523)
        
        if (cond:26_1)
            goto label_1400a477e
        
        goto label_1400a3963
    
label_1400a476d:
    arg10 = _mm_blend_ps(arg10, zmm9, 2)
    arg11 = _mm_add_ps(arg11, temp0_523)
    bool cond:27_1
    bool cond:28_1
    bool cond:29_1
    bool cond:30_1
    
    if (not(cond:25_1))
    label_1400a477e:
        zmm2 = _mm_blend_ps(zmm2, arg11, 2)
        char temp12_1 = result.b & 4
        cond:27_1 = temp12_1 == 0
        cond:28_1 = temp12_1 != 0
        cond:29_1 = temp12_1 != 0
        cond:30_1 = temp12_1 == 0
        
        if (temp12_1 == 0)
            goto label_1400a396b
        
        goto label_1400a478d
    
label_1400a3963:
    char temp11_1 = result.b & 4
    cond:27_1 = temp11_1 == 0
    cond:28_1 = temp11_1 != 0
    cond:29_1 = temp11_1 != 0
    cond:30_1 = temp11_1 == 0
    
    if (temp11_1 != 0)
    label_1400a478d:
        zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
        
        if (not(cond:27_1))
        label_1400a479a:
            arg10 = _mm_blend_ps(arg10, zmm9, 4)
            
            if (cond:30_1)
                goto label_1400a3977
            
            goto label_1400a47a7
    else
    label_1400a396b:
        
        if (cond:28_1)
            goto label_1400a479a
    
    bool cond:31_1
    bool cond:32_1
    bool cond:33_1
    bool cond:34_1
    
    if (not(cond:29_1))
    label_1400a3977:
        char temp14_1 = result.b & 8
        cond:31_1 = temp14_1 != 0
        cond:32_1 = temp14_1 == 0
        cond:33_1 = temp14_1 == 0
        cond:34_1 = temp14_1 != 0
        
        if (temp14_1 == 0)
            goto label_1400a47b6
        
        goto label_1400a397f
    
label_1400a47a7:
    zmm2 = _mm_blend_ps(zmm2, arg11, 4)
    char temp13_1 = result.b & 8
    cond:31_1 = temp13_1 != 0
    cond:32_1 = temp13_1 == 0
    cond:33_1 = temp13_1 == 0
    cond:34_1 = temp13_1 != 0
    
    if (temp13_1 == 0)
    label_1400a47b6:
        zmm8 = zmm4
        
        if (cond:32_1)
            goto label_1400a398c
        
        goto label_1400a47c0
    
label_1400a397f:
    zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
    
    if (cond:31_1)
    label_1400a47c0:
        zmm9 = _mm_blend_ps(zmm9, arg10, 7)
        
        if (not(cond:33_1))
            zmm2 = _mm_blend_ps(zmm2, arg11, 8)
    else
    label_1400a398c:
        zmm9 = arg10
        
        if (cond:34_1)
            zmm2 = _mm_blend_ps(zmm2, arg11, 8)
    
    arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_517, arg16), zmm0)
    arg11 = zmm2
    goto label_1400a47ec

*(&arg_10 + (rcx_1 << 2))
