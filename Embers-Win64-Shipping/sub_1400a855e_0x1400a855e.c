// 函数: sub_1400a855e
// 地址: 0x1400a855e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
void arg_c
float arg_10[0x4]
float arg_30[0x4]
float arg_40[0x4]
int32_t arg_50[0x4]
int32_t arg_70[0x4]
uint128_t arg_c0
uint128_t arg_120
void arg_190
void arg_1a0
uint32_t result
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
uint128_t zmm4
float zmm5[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
int32_t zmm11[0x4]
uint128_t zmm12
float zmm14[0x4]
float zmm15[0x4]

while (true)
    zmm15 = __return_addr.o
    int32_t temp0_1[0x4] = _mm_cmpeq_epi32(arg10, arg10)
    zmm14 = arg_10
    zmm7 = *arg1
    zmm8 = *(arg1 + 4)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_3[0x4] = _mm_sub_ps(zmm15, temp0_2)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_5[0x4] = _mm_sub_ps(zmm14, temp0_4)
    zmm6 = *(arg1 + 8)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_7[0x4] = _mm_sub_ps(arg12, temp0_6)
    zmm4 = *arg3
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_9[0x4] = _mm_div_ps(temp0_3, zmm4)
    zmm1 = *(arg3 + 8)
    zmm11 = _mm_cvttps_epi32(temp0_9)
    arg_120 = zmm4
    float temp0_13[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), zmm4), temp0_2)
    float temp0_15[0x4] =
        __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm1, 0x20), data_142fc9600)
    zmm4 = _mm_shuffle_ps(temp0_15, temp0_15, 0)
    arg_c0 = zmm4
    float temp0_18[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_13, zmm4), zmm15, 1)
    zmm9 = _mm_add_epi32(zmm11, temp0_1)
    zmm4 = _mm_blendv_ps(zmm9, zmm11, temp0_18)
    zmm10 = *(arg3 + 4)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_22[0x4] = _mm_div_ps(temp0_5, temp0_21)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_24[0x4] = _mm_div_ps(temp0_7, temp0_23)
    int32_t temp0_25[0x4] = _mm_cvttps_epi32(temp0_22)
    zmm2 = _mm_cvttps_epi32(temp0_24)
    float temp0_28[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(temp0_25), temp0_21)
    zmm12 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_23)
    float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_4)
    zmm12 = _mm_add_ps(zmm12, temp0_6)
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x55)
    float temp0_34[0x4] = _mm_add_ps(temp0_31, temp0_33)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xaa)
    __return_addr.o = zmm4
    float temp0_36[0x4] = _mm_cmpeq_ps(temp0_34, zmm14, 1)
    
    if (_mm_movemask_ps(temp0_36) != 0)
        zmm11 = temp0_25
    
    zmm12 = _mm_add_ps(zmm12, temp0_35)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_34, zmm14, 5)) != 0)
        zmm9 = __paddd_xmmdq_memdq(temp0_25, data_142d3f800)
    
    arg10 = _mm_sub_ps(zmm15, arg11)
    float temp0_43[0x4] = __subps_xmmps_memps(zmm14, arg18)
    float temp0_44[0x4] = _mm_blendv_ps(zmm9, zmm11, temp0_36)
    arg_10 = temp0_44
    float temp0_45[0x4] = _mm_cmpeq_ps(zmm12, arg12, 1)
    
    if (_mm_movemask_ps(temp0_45) != 0)
        zmm11 = zmm2
    
    float temp0_47[0x4] = __subps_xmmps_memps(arg12, arg19)
    arg10 = _mm_mul_ps(arg10, arg10)
    float temp0_49[0x4] = _mm_mul_ps(temp0_43, temp0_43)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm12, arg12, 5)) != 0)
        zmm9 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
    
    float temp0_53[0x4] = _mm_blendv_ps(zmm9, zmm11, temp0_45)
    arg10 = _mm_add_ps(__addps_xmmps_memps(arg10, data_142d8f750), temp0_49)
    zmm11 = arg_120
    float temp0_58[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm11), temp0_2)
    float temp0_61[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_44), temp0_21), temp0_4)
    zmm5 = arg10
    arg10 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_53), temp0_23), temp0_6)
    float temp0_65[0x4] = _mm_add_ps(arg_c0, temp0_58)
    float temp0_66[0x4] = _mm_add_ps(temp0_33, temp0_61)
    float temp0_67[0x4] = _mm_add_ps(temp0_35, arg10)
    zmm2 = zmm5
    float temp0_68[0x4] = _mm_sub_ps(zmm15, temp0_65)
    arg10 = _mm_sub_ps(zmm14, temp0_66)
    float temp0_70[0x4] = _mm_sub_ps(arg12, temp0_67)
    float temp0_71[0x4] = _mm_div_ps(temp0_68, zmm11)
    arg10 = _mm_div_ps(arg10, temp0_21)
    float temp0_73[0x4] = _mm_div_ps(temp0_70, temp0_23)
    arg_40 = temp0_71
    arg_50 = arg10
    float temp0_74[0x4] = _mm_mul_ps(temp0_47, temp0_47)
    int64_t rbx_1 = 0
    zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm5))
    
    if (i == 0)
        goto label_1400a883c
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400a88cf
            
            goto label_1400a8808
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400a88cf:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400a8810
            
            goto label_1400a88df
        
    label_1400a8808:
        
        if ((i & 4) == 0)
        label_1400a8810:
            
            if ((i & 8) != 0)
                goto label_1400a88ef
            
            goto label_1400a8818
        
    label_1400a88df:
        *(&arg_8 + (rbx_1 << 2)) = 0
        
        if ((i & 8) != 0)
        label_1400a88ef:
            *(&arg_c + (rbx_1 << 2)) = 0
            
            if ((i & 1) == 0)
                goto label_1400a8820
            
            goto label_1400a88ff
        
    label_1400a8818:
        
        if ((i & 1) == 0)
        label_1400a8820:
            
            if ((i & 2) != 0)
                goto label_1400a890f
            
            goto label_1400a8828
        
    label_1400a88ff:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400a890f:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400a8830
            
            goto label_1400a891f
        
    label_1400a8828:
        
        if ((i & 4) != 0)
        label_1400a891f:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400a8830:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400a883c:
        int32_t rdi_1 = *(arg4 + rbx_1)
        char temp0_82 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rdi_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_82 != 0)
            if ((temp0_82 & 1) == 0)
                if ((temp0_82 & 2) != 0)
                    goto label_1400a894b
                
                goto label_1400a886e
            
            *(&__return_addr + (rbx_1 << 2)) = rdi_1 - 2
            
            if ((temp0_82 & 2) != 0)
            label_1400a894b:
                *(&__return_addr:4 + (rbx_1 << 2)) = rdi_1 - 2
                
                if ((temp0_82 & 4) == 0)
                    goto label_1400a8876
                
                goto label_1400a8957
            
        label_1400a886e:
            
            if ((temp0_82 & 4) == 0)
            label_1400a8876:
                
                if ((temp0_82 & 8) != 0)
                    goto label_1400a8963
                
                goto label_1400a887e
            
        label_1400a8957:
            *(&arg_8 + (rbx_1 << 2)) = rdi_1 - 2
            
            if ((temp0_82 & 8) != 0)
            label_1400a8963:
                *(&arg_c + (rbx_1 << 2)) = rdi_1 - 2
                
                if ((temp0_82 & 1) == 0)
                    goto label_1400a8886
                
                goto label_1400a896f
            
        label_1400a887e:
            
            if ((temp0_82 & 1) == 0)
            label_1400a8886:
                
                if ((temp0_82 & 2) != 0)
                    goto label_1400a897f
                
                goto label_1400a888e
            
        label_1400a896f:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_82 & 2) != 0)
            label_1400a897f:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_82 & 4) == 0)
                    goto label_1400a8896
                
                goto label_1400a898f
            
        label_1400a888e:
            
            if ((temp0_82 & 4) != 0)
            label_1400a898f:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_82 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400a8896:
                
                if ((temp0_82 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
        
        if (rbx_1 == 8)
            break
        
        zmm4 = *(&arg_10 + (rbx_1 << 2))
        rbx_1 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm5))
    while (i != 0)
    
    float temp0_83[0x4] = _mm_add_ps(zmm2, temp0_74)
    zmm6 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm1 = __return_addr.o
    zmm4 = arg_10
    int32_t temp0_85[0x4] = _mm_mullo_epi32(zmm6, zmm1)
    arg11 = _mm_add_epi32(temp0_85, zmm4)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    int32_t temp0_88[0x4] = _mm_mullo_epi32(arg11, zmm0)
    zmm2 = _mm_add_epi32(temp0_88, temp0_53)
    float (* rbx_2)[0x4] = *(arg7 + 0x10)
    zmm2 = _mm_slli_epi32(zmm2, 2)
    int64_t rsi_1 = sx.q(zmm2[0])
    int64_t rdi_3 = sx.q(_mm_extract_epi32(zmm2, 1))
    int64_t rax_11 = sx.q(_mm_extract_epi32(zmm2, 2))
    int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm2, 3))
    float temp0_96[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(rbx_2 + rsi_1), *(rbx_2 + rdi_3), 0x10), 
            *(rbx_2 + rax_11), 0x20), 
        *(rbx_2 + rbp_3), 0x30)
    zmm12 = *(rbx_2 + rsi_1 + 4)
    zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm5), zmm6)
    zmm7 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm4), zmm0), temp0_53), 2)
    arg11 = _mm_mullo_epi32(_mm_add_epi32(arg11, zmm6), zmm0)
    zmm6 = *(rbx_2 + sx.q(zmm7[0]))
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
    zmm10 = arg_40
    zmm4 = _mm_sub_epi32(zmm4, zmm5)
    arg10 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_85, zmm4), zmm0), temp0_53), 2)
    int64_t rdx_4 = sx.q(arg10[0])
    int32_t temp0_117 = _mm_extract_epi32(arg10, 1)
    int32_t temp0_118 = _mm_extract_epi32(arg10, 2)
    zmm5 = *(rbx_2 + rdx_4)
    int32_t temp0_119 = _mm_extract_epi32(arg10, 3)
    zmm8 = arg_50
    float temp0_120[0x4] = _mm_mul_ps(temp0_111, zmm10)
    float temp0_123[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm5, *(rbx_2 + sx.q(temp0_117)), 0x10), 
            *(rbx_2 + sx.q(temp0_118)), 0x20), 
        *(rbx_2 + sx.q(temp0_119)), 0x30)
    zmm4 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm1), zmm0), temp0_53), 2)
    zmm7 = *(rbx_2 + sx.q(zmm4.d))
    int64_t r14_4 = sx.q(_mm_extract_epi32(zmm4, 1))
    int32_t temp0_129 = _mm_extract_epi32(zmm4, 2)
    int64_t rdx_11 = sx.q(_mm_extract_epi32(zmm4, 3))
    float temp0_133[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm7, *(rbx_2 + r14_4), 0x10), 
            *(rbx_2 + sx.q(temp0_129)), 0x20), 
        *(rbx_2 + rdx_11), 0x30)
    float temp0_134[0x4] = _mm_add_ps(temp0_120, temp0_96)
    float temp0_135[0x4] = _mm_sub_ps(temp0_133, temp0_123)
    zmm12 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rbx_2 + rdi_3 + 4), 0x10), 
            *(rbx_2 + rax_11 + 4), 0x20), 
        *(rbx_2 + rbp_3 + 4), 0x30)
    float temp0_139[0x4] = _mm_mul_ps(temp0_135, zmm10)
    zmm0 = _mm_add_epi32(zmm0, temp0_53)
    int32_t temp0_141[0x4] = _mm_add_epi32(temp0_88, zmm0)
    zmm0 = _mm_add_epi32(zmm0, arg11)
    arg11 = _mm_slli_epi32(_mm_add_epi32(arg11, temp0_53), 2)
    zmm2 = *(rbx_2 + sx.q(arg11[0]) + 4)
    int64_t rax_15 = sx.q(_mm_extract_epi32(arg11, 1))
    int32_t temp0_146 = _mm_extract_epi32(arg11, 2)
    int64_t rsi_11 = sx.q(_mm_extract_epi32(arg11, 3))
    float temp0_150[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rbx_2 + rax_15 + 4), 0x10), 
            *(rbx_2 + sx.q(temp0_146) + 4), 0x20), 
        *(rbx_2 + rsi_11 + 4), 0x30)
    float temp0_151[0x4] = _mm_add_ps(temp0_139, temp0_123)
    float temp0_154[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_150, zmm12), zmm10), zmm12)
    zmm11 = _mm_slli_epi32(temp0_141, 2)
    arg10 = *(rbx_2 + sx.q(zmm11[0]) + 4)
    int32_t temp0_156 = _mm_extract_epi32(zmm11, 1)
    int64_t rdx_15 = sx.q(_mm_extract_epi32(zmm11, 2))
    int32_t temp0_158 = _mm_extract_epi32(zmm11, 3)
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
    int64_t rsi_14 = sx.q(_mm_extract_epi32(zmm0, 3))
    float temp0_171[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_2 + sx.q(temp0_163) + 4), 0x10), 
                        *(rbx_2 + rdx_18 + 4), 0x20), 
                    *(rbx_2 + rsi_14 + 4), 0x30), 
                arg10), 
            zmm10), 
        arg10)
    float temp0_174[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_151, temp0_134), zmm8), temp0_134)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_171, temp0_154), zmm8), temp0_154), 
                temp0_174), 
            temp0_73), 
        temp0_174)
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
    zmm10 = arg13
    float temp0_197[0x4] = __subps_xmmps_memps(zmm1, arg17)
    float temp0_198[0x4] = __cmpps_xmmps_memps_immb(temp0_197, data_142fc95d0, 1)
    char temp0_199 = _mm_movemask_ps(temp0_198)
    float arg_2a0[0x4]
    float arg_2b0[0x4]
    
    if (temp0_199 != 0)
        float temp0_200[0x4] = _mm_mul_ps(arg_2a0, temp0_197)
        float temp0_201[0x4] = _mm_mul_ps(arg_2b0, temp0_197)
        float temp0_202[0x4] = _mm_mul_ps(arg20, temp0_197)
        zmm4 = zmm8
        char temp1_1 = temp0_199 & 1
        
        if (temp1_1 == 0)
            arg10 = zmm9
            
            if (temp1_1 != 0)
                goto label_1400a8dee
            
            goto label_1400a8d80
        
        zmm4.d = zmm8.d f+ temp0_200[0]
        arg10 = zmm9
        
        if (temp1_1 != 0)
        label_1400a8dee:
            arg10 = zmm9
            arg10[0] = arg10[0] f+ temp0_201[0]
            zmm2 = zmm10
            
            if (temp1_1 == 0)
                goto label_1400a8d86
            
            goto label_1400a8dfc
        
    label_1400a8d80:
        zmm2 = zmm10
        bool cond:4_1
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        
        if (temp1_1 == 0)
        label_1400a8d86:
            zmm8 = _mm_add_ps(zmm8, temp0_200)
            char temp3_1 = temp0_199 & 2
            cond:4_1 = temp3_1 != 0
            cond:5_1 = temp3_1 == 0
            cond:6_1 = temp3_1 == 0
            cond:7_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
                goto label_1400a8e0c
            
            goto label_1400a8d8e
        
    label_1400a8dfc:
        zmm2 = zmm10
        zmm2[0] = zmm2[0] + temp0_202[0]
        zmm8 = _mm_add_ps(zmm8, temp0_200)
        char temp2_1 = temp0_199 & 2
        cond:4_1 = temp2_1 != 0
        cond:5_1 = temp2_1 == 0
        cond:6_1 = temp2_1 == 0
        cond:7_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
        label_1400a8e0c:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
            zmm9 = _mm_add_ps(zmm9, temp0_201)
            
            if (cond:5_1)
                goto label_1400a8d98
            
            goto label_1400a8e1d
        
    label_1400a8d8e:
        zmm9 = _mm_add_ps(zmm9, temp0_201)
        
        if (not(cond:4_1))
        label_1400a8d98:
            zmm10 = _mm_add_ps(zmm10, temp0_202)
            
            if (cond:7_1)
                goto label_1400a8e2e
            
            goto label_1400a8da2
        
    label_1400a8e1d:
        arg10 = _mm_blend_ps(arg10, zmm9, 2)
        zmm10 = _mm_add_ps(zmm10, temp0_202)
        bool cond:8_1
        bool cond:9_1
        bool cond:10_1
        bool cond:11_1
        
        if (not(cond:6_1))
        label_1400a8e2e:
            zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
            char temp5_1 = temp0_199 & 4
            cond:8_1 = temp5_1 == 0
            cond:9_1 = temp5_1 != 0
            cond:10_1 = temp5_1 != 0
            cond:11_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
                goto label_1400a8daa
            
            goto label_1400a8e3d
        
    label_1400a8da2:
        char temp4_1 = temp0_199 & 4
        cond:8_1 = temp4_1 == 0
        cond:9_1 = temp4_1 != 0
        cond:10_1 = temp4_1 != 0
        cond:11_1 = temp4_1 == 0
        
        if (temp4_1 != 0)
        label_1400a8e3d:
            zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
            
            if (not(cond:8_1))
            label_1400a8e4a:
                arg10 = _mm_blend_ps(arg10, zmm9, 4)
                
                if (cond:11_1)
                    goto label_1400a8db6
                
                goto label_1400a8e57
        else
        label_1400a8daa:
            
            if (cond:9_1)
                goto label_1400a8e4a
        
        bool cond:12_1
        bool cond:13_1
        bool cond:14_1
        bool cond:15_1
        
        if (not(cond:10_1))
        label_1400a8db6:
            char temp7_1 = temp0_199 & 8
            cond:12_1 = temp7_1 != 0
            cond:13_1 = temp7_1 == 0
            cond:14_1 = temp7_1 == 0
            cond:15_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
                goto label_1400a8e66
            
            goto label_1400a8dbe
        
    label_1400a8e57:
        zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
        char temp6_1 = temp0_199 & 8
        cond:12_1 = temp6_1 != 0
        cond:13_1 = temp6_1 == 0
        cond:14_1 = temp6_1 == 0
        cond:15_1 = temp6_1 != 0
        
        if (temp6_1 == 0)
        label_1400a8e66:
            zmm8 = zmm4
            
            if (cond:13_1)
                goto label_1400a8dcb
            
            goto label_1400a8e70
        
    label_1400a8dbe:
        zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
        
        if (cond:12_1)
        label_1400a8e70:
            zmm9 = _mm_blend_ps(zmm9, arg10, 7)
            
            if (not(cond:14_1))
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        else
        label_1400a8dcb:
            zmm9 = arg10
            
            if (cond:15_1)
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        
        arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_197, arg16), temp0_198)
        zmm10 = zmm2
    
    arg5 = zx.q(arg5.d + 4)
    
    if (arg5.d s>= arg9)
        result = arg42
        break
    
    arg13 = zmm10
    arg14 = zmm9
    arg15 = zmm8
    int64_t rax_51 = sx.q((arg5 << 2).d * 3)
    zmm0 = *(arg8 + rax_51)
    zmm2 = *(arg8 + rax_51 + 0x10)
    zmm5 = *(arg8 + rax_51 + 0x20)
    arg10 = _mm_shuffle_epi32(zmm0, 0xe5)
    zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
    float temp0_555[0x4] = _mm_shuffle_ps(zmm0, zmm2, 0xec)
    zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), temp0_555, 0x3f)
    zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), arg10, 3)
    int32_t temp0_561[0x4] = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
    float temp0_563[0x4] = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
    arg_40 = zmm4
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    float temp0_564[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = temp0_564
    arg_10 = temp0_564
    arg12 = temp0_564
    arg_30 = temp0_564
    zmm9 = *arg6
    zmm8 = (*arg6)[1]
    zmm10 = (*arg6)[2]
    float temp0_565[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_566[0x4] = _mm_mul_ps(temp0_565, temp0_563)
    float temp0_567[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_568[0x4] = _mm_mul_ps(temp0_567, zmm4)
    float temp0_569[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_570[0x4] = _mm_mul_ps(temp0_569, temp0_561)
    float temp0_572[0x4] = _mm_sub_ps(temp0_566, _mm_mul_ps(temp0_561, temp0_567))
    float temp0_574[0x4] = _mm_sub_ps(temp0_568, _mm_mul_ps(temp0_563, temp0_569))
    float temp0_576[0x4] = _mm_sub_ps(temp0_570, _mm_mul_ps(zmm4, temp0_565))
    float temp0_577[0x4] = _mm_add_ps(temp0_572, temp0_572)
    float temp0_578[0x4] = _mm_add_ps(temp0_574, temp0_574)
    float temp0_579[0x4] = _mm_add_ps(temp0_576, temp0_576)
    arg10 = _mm_mul_ps(temp0_564, temp0_577)
    zmm11 = _mm_mul_ps(temp0_564, temp0_578)
    arg10 = __addps_xmmps_memps(arg10, arg_40)
    zmm11 = __addps_xmmps_memps(zmm11, temp0_561)
    float temp0_585[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_564, temp0_579), temp0_563)
    zmm4 = _mm_mul_ps(temp0_579, temp0_565)
    float temp0_587[0x4] = _mm_mul_ps(temp0_577, temp0_567)
    float temp0_588[0x4] = _mm_mul_ps(temp0_578, temp0_569)
    zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_578, temp0_567)), arg10)
    float temp0_594[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_587, _mm_mul_ps(temp0_579, temp0_569)), zmm11)
    float temp0_597[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_588, _mm_mul_ps(temp0_577, temp0_565)), temp0_585)
    arg11 = arg6[1][0]
    arg10 = (*arg6)[5]
    arg11 = _mm_add_ps(_mm_shuffle_ps(arg11, arg11, 0), zmm4)
    arg10 = _mm_add_ps(_mm_shuffle_ps(arg10, arg10, 0), temp0_594)
    zmm0 = (*arg6)[6]
    float temp0_603[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_597)
    arg_2a0 = arg11
    arg18 = arg10
    arg_2b0 = arg10
    arg19 = temp0_603
    arg20 = temp0_603
    int64_t rbx_12 = 0
label_1400a83dc:
    zmm2 = *(&arg_1a0 + rbx_12)
    float temp0_604[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    arg10 = _mm_cmpeq_ps(temp0_604, arg11, 1)
    char temp0_606 = _mm_movemask_ps(arg10)
    
    if (temp0_606 != 0)
        if ((temp0_606 & 1) == 0)
            if ((temp0_606 & 2) != 0)
                goto label_1400a84dd
            
            goto label_1400a840d
        
        *(&__return_addr + (rbx_12 << 2)) = zmm2[0]
        
        if ((temp0_606 & 2) != 0)
        label_1400a84dd:
            *(&__return_addr:4 + (rbx_12 << 2)) = zmm2[0]
            
            if ((temp0_606 & 4) == 0)
                goto label_1400a8415
            
            goto label_1400a84eb
        
    label_1400a840d:
        
        if ((temp0_606 & 4) != 0)
        label_1400a84eb:
            *(&arg_8 + (rbx_12 << 2)) = zmm2[0]
            
            if ((temp0_606 & 8) != 0)
                *(&arg_c + (rbx_12 << 2)) = zmm2[0]
        else
        label_1400a8415:
            
            if ((temp0_606 & 8) != 0)
                *(&arg_c + (rbx_12 << 2)) = zmm2[0]
    
    float temp0_607[0x4] = _mm_cmpeq_ps(temp0_604, arg11, 5)
    
    if (_mm_movemask_ps(temp0_607) != 0)
        arg10 = *(&arg_190 + rbx_12)
        float temp0_609[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
        char temp0_612 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(arg11, temp0_609, 1), temp0_607))
        
        if (temp0_612 != 0)
            if ((temp0_612 & 1) == 0)
                if ((temp0_612 & 2) != 0)
                    goto label_1400a850b
                
                goto label_1400a8462
            
            *(&__return_addr + (rbx_12 << 2)) = arg10[0]
            
            if ((temp0_612 & 2) != 0)
            label_1400a850b:
                *(&__return_addr:4 + (rbx_12 << 2)) = arg10[0]
                
                if ((temp0_612 & 4) == 0)
                    goto label_1400a846a
                
                goto label_1400a8519
            
        label_1400a8462:
            
            if ((temp0_612 & 4) != 0)
            label_1400a8519:
                *(&arg_8 + (rbx_12 << 2)) = arg10[0]
                
                if ((temp0_612 & 8) != 0)
                    *(&arg_c + (rbx_12 << 2)) = arg10[0]
            else
            label_1400a846a:
                
                if ((temp0_612 & 8) != 0)
                    *(&arg_c + (rbx_12 << 2)) = arg10[0]
        
        char temp0_615 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(arg11, temp0_609, 5), temp0_607))
        
        if (temp0_615 != 0)
            zmm0 = *(&arg_2a0 + (rbx_12 << 2))
            
            if ((temp0_615 & 1) == 0)
                if ((temp0_615 & 2) != 0)
                    goto label_1400a8539
                
                goto label_1400a849d
            
            *(&__return_addr + (rbx_12 << 2)) = zmm0[0]
            
            if ((temp0_615 & 2) != 0)
            label_1400a8539:
                *(&__return_addr:4 + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                
                if ((temp0_615 & 4) == 0)
                    goto label_1400a84a5
                
                goto label_1400a8549
            
        label_1400a849d:
            
            if ((temp0_615 & 4) != 0)
            label_1400a8549:
                *(&arg_8 + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_615 & 8) != 0)
                    *(&arg_c + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1400a84a5:
                
                if ((temp0_615 & 8) != 0)
                    *(&arg_c + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
    
    if (rbx_12 != 8)
        *(&arg_2b0 + (rbx_12 << 2))
        break

int32_t* rcx_31
int64_t* rdx_36

if (arg5.d s>= result)
    rcx_31 = arg40
    rdx_36 = arg41
label_1400ab82f:
    float temp0_540[0x4] = _mm_hadd_ps(zmm8, zmm8)
    float temp0_541[0x4] = _mm_hadd_ps(temp0_540, temp0_540)
    float temp0_542[0x4] = _mm_hadd_ps(zmm9, zmm9)
    float temp0_544[0x4] = _mm_insert_ps(temp0_541, _mm_hadd_ps(temp0_542, temp0_542), 0x1c)
    float temp0_545[0x4] = _mm_hadd_ps(zmm10, zmm10)
    float temp0_546[0x4] = _mm_hadd_ps(temp0_545, temp0_545)
    float temp0_548[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_36), rdx_36[1].d, 0x20), 
        temp0_544[0].q | temp0_546[0].q << 0x40)
    *rdx_36 = temp0_548[0]
    *(rdx_36 + 4) = __extractps_memd_xmmps_immb(temp0_548, 1)
    rdx_36[1].d = __extractps_memd_xmmps_immb(temp0_548, 2)
    zmm0 = arg16
    float temp0_551[0x4] = _mm_hadd_ps(zmm0, zmm0)
    float temp0_552[0x4] = _mm_hadd_ps(temp0_551, temp0_551)
    temp0_552[0] = temp0_552[0] f+ *rcx_31
    *rcx_31 = temp0_552[0]
    return result

arg13 = zmm10
arg14 = zmm9
arg15 = zmm8
zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5.d), 0), data_142e11d00)
zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm1)
zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
int64_t rax_28 = sx.q(zmm1[0])
void* rbx_3 = &(*arg8)[rax_28]
zmm0 = (*arg8)[rax_28]
int64_t r10 = sx.q(_mm_extract_epi32(zmm1, 1))
void* rax_30 = &(*arg8)[r10]
int64_t rsi_15 = sx.q(_mm_extract_epi32(zmm1, 2))
void* rdx_20 = &(*arg8)[rsi_15]
int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm1, 3))
void* rdi_5 = &(*arg8)[rbp_4]
float temp0_230[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg8)[r10], 0x10), 
        (*arg8)[rsi_15], 0x20), 
    (*arg8)[rbp_4], 0x30)
arg10 = data_142fc95e0 & zmm2
uint64_t r13 = zx.q(arg10[0])
zmm8 = *(r13 + rbx_3)
uint64_t r14_5 = zx.q(_mm_extract_epi32(arg10, 1))
uint64_t r15 = zx.q(_mm_extract_epi32(arg10, 2))
int32_t* r10_1 = zx.q(_mm_extract_epi32(arg10, 3))
float temp0_236[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(r14_5 + rax_30), 0x10), 
        *(r15 + rdx_20), 0x20), 
    *(r10_1 + rdi_5), 0x30)
arg10 = data_142fc95f0 & zmm2
zmm6 = *(zx.q(arg10[0]) + rbx_3)
uint64_t rsi_17 = zx.q(_mm_extract_epi32(arg10, 1))
uint64_t rbx_4 = zx.q(_mm_extract_epi32(arg10, 2))
int32_t* rbp_5 = zx.q(_mm_extract_epi32(arg10, 3))
float temp0_242[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rsi_17 + rax_30), 0x10), 
        *(rbx_4 + rdx_20), 0x20), 
    *(rbp_5 + rdi_5), 0x30)
float arg_1e0[0x4] = zx.o(0)
zmm5 = (*arg6)[3]
float temp0_243[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
__return_addr.o = temp0_243
arg_10 = temp0_243
zmm7 = *arg6
zmm1 = (*arg6)[1]
zmm4 = (*arg6)[2]
float temp0_244[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_245[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_246[0x4] = _mm_mul_ps(temp0_236, temp0_245)
float temp0_247[0x4] = _mm_mul_ps(temp0_245, temp0_242)
float temp0_248[0x4] = _mm_mul_ps(temp0_242, temp0_244)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_250[0x4] = _mm_mul_ps(temp0_244, temp0_230)
float temp0_251[0x4] = _mm_mul_ps(temp0_230, zmm4)
arg10 = _mm_mul_ps(zx.o(0), temp0_243)
float temp0_254[0x4] = _mm_sub_ps(temp0_248, _mm_mul_ps(zmm4, temp0_236))
float temp0_255[0x4] = _mm_sub_ps(temp0_251, temp0_247)
float temp0_256[0x4] = _mm_sub_ps(temp0_246, temp0_250)
arg10 = _mm_sub_ps(arg10, arg10)
float temp0_258[0x4] = _mm_add_ps(temp0_254, temp0_254)
float temp0_259[0x4] = _mm_add_ps(temp0_255, temp0_255)
float temp0_260[0x4] = _mm_add_ps(temp0_256, temp0_256)
arg10 = _mm_add_ps(arg10, arg10)
arg_40 = temp0_258
arg_50 = temp0_259
float arg_60[0x4] = temp0_260
arg_70 = arg10
arg10 = _mm_mul_ps(arg10, temp0_243)
float temp0_263[0x4] = _mm_mul_ps(temp0_243, temp0_258)
float temp0_264[0x4] = _mm_mul_ps(temp0_243, temp0_259)
float temp0_265[0x4] = _mm_mul_ps(temp0_243, temp0_260)
float temp0_266[0x4] = __addps_xmmps_memps(temp0_263, temp0_230)
float temp0_267[0x4] = __addps_xmmps_memps(temp0_264, temp0_236)
float temp0_268[0x4] = __addps_xmmps_memps(temp0_265, temp0_242)
arg_30 = temp0_243
float arg_2d0[0x4] = temp0_266
float arg_2e0[0x4] = temp0_267
float arg_2f0[0x4] = temp0_268
int32_t arg_300[0x4] = __addps_xmmps_memps(arg10, arg_1e0)
zmm4 = *arg6
zmm5 = (*arg6)[1]
zmm7 = (*arg6)[2]
float temp0_270[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
arg10 = _mm_mul_ps(temp0_259, zmm4)
zmm4 = _mm_mul_ps(zmm4, temp0_260)
float temp0_274[0x4] = _mm_mul_ps(temp0_260, temp0_270)
float temp0_275[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_276[0x4] = _mm_mul_ps(temp0_270, temp0_258)
float temp0_277[0x4] = _mm_mul_ps(temp0_258, temp0_275)
float temp0_279[0x4] = _mm_sub_ps(temp0_274, _mm_mul_ps(temp0_275, temp0_259))
float temp0_280[0x4] = _mm_sub_ps(temp0_277, zmm4)
arg10 = _mm_sub_ps(arg10, temp0_276)
float temp0_282[0x4] = _mm_add_ps(temp0_279, temp0_266)
float temp0_283[0x4] = _mm_add_ps(temp0_280, temp0_267)
arg10 = _mm_add_ps(arg10, temp0_268)
zmm0 = arg6[1][0]
zmm4 = (*arg6)[5]
float temp0_286[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_282)
zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_283)
zmm1 = (*arg6)[6]
float temp0_290[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg10)
float arg_270[0x4] = temp0_286
arg18 = zmm4
uint128_t arg_280 = zmm4
int64_t rsi_18 = 0
label_1400a919c:
zmm4 = *(&arg_1a0 + rsi_18)
arg10 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_292[0x4] = _mm_cmpeq_ps(arg10, temp0_286, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_292, zmm2)) != 0)
    char temp0_295 = _mm_movemask_ps(temp0_292)
    
    if ((temp0_295 & 1) == 0)
        if ((temp0_295 & 2) != 0)
            goto label_1400a92ad
        
        goto label_1400a91d3
    
    *(&__return_addr + (rsi_18 << 2)) = zmm4.d
    
    if ((temp0_295 & 2) != 0)
    label_1400a92ad:
        *(&__return_addr:4 + (rsi_18 << 2)) = zmm4.d
        
        if ((temp0_295 & 4) == 0)
            goto label_1400a91db
        
        goto label_1400a92bb
    
label_1400a91d3:
    
    if ((temp0_295 & 4) != 0)
    label_1400a92bb:
        *(&arg_8 + (rsi_18 << 2)) = zmm4.d
        
        if ((temp0_295 & 8) != 0)
            *(&arg_c + (rsi_18 << 2)) = zmm4.d
    else
    label_1400a91db:
        
        if ((temp0_295 & 8) != 0)
            *(&arg_c + (rsi_18 << 2)) = zmm4.d

arg10 = _mm_cmpeq_ps(arg10, temp0_286, 5)

if (_mm_movemask_ps(_mm_and_ps(zmm2, arg10)) != 0)
    zmm5 = *(&arg_190 + rsi_18)
    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_286, zmm4, 1), arg10)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm2)) != 0)
        char temp0_304 = _mm_movemask_ps(zmm6)
        
        if ((temp0_304 & 1) == 0)
            if ((temp0_304 & 2) != 0)
                goto label_1400a92db
            
            goto label_1400a9234
        
        *(&__return_addr + (rsi_18 << 2)) = zmm5[0]
        
        if ((temp0_304 & 2) != 0)
        label_1400a92db:
            *(&__return_addr:4 + (rsi_18 << 2)) = zmm5[0]
            
            if ((temp0_304 & 4) == 0)
                goto label_1400a923c
            
            goto label_1400a92e9
        
    label_1400a9234:
        
        if ((temp0_304 & 4) != 0)
        label_1400a92e9:
            *(&arg_8 + (rsi_18 << 2)) = zmm5[0]
            
            if ((temp0_304 & 8) != 0)
                *(&arg_c + (rsi_18 << 2)) = zmm5[0]
        else
        label_1400a923c:
            
            if ((temp0_304 & 8) != 0)
                *(&arg_c + (rsi_18 << 2)) = zmm5[0]
    
    zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_286, zmm4, 5), arg10)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
        arg10 = *(&arg_270 + (rsi_18 << 2))
        char temp0_309 = _mm_movemask_ps(zmm1)
        
        if ((temp0_309 & 1) == 0)
            if ((temp0_309 & 2) != 0)
                goto label_1400a9309
            
            goto label_1400a9275
        
        *(&__return_addr + (rsi_18 << 2)) = arg10[0]
        
        if ((temp0_309 & 2) != 0)
        label_1400a9309:
            *(&__return_addr:4 + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(arg10, 1)
            
            if ((temp0_309 & 4) == 0)
                goto label_1400a927d
            
            goto label_1400a9319
        
    label_1400a9275:
        
        if ((temp0_309 & 4) != 0)
        label_1400a9319:
            *(&arg_8 + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(arg10, 2)
            
            if ((temp0_309 & 8) != 0)
                *(&arg_c + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(arg10, 3)
        else
        label_1400a927d:
            
            if ((temp0_309 & 8) != 0)
                *(&arg_c + (rsi_18 << 2)) = __extractps_memd_xmmps_immb(arg10, 3)

if (rsi_18 != 8)
    *(&arg_280 + (rsi_18 << 2))
    return 

arg10 = __return_addr.o
zmm12 = arg_10
arg_c0 = _mm_sub_ps(arg10, temp0_286)
zmm6 = *arg1
zmm7 = *(arg1 + 4)
float temp0_314[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_315[0x4] = _mm_sub_ps(arg10, temp0_314)
float temp0_316[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_317[0x4] = _mm_sub_ps(zmm12, temp0_316)
zmm4 = *arg3
zmm5 = *(arg3 + 4)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_319[0x4] = _mm_div_ps(temp0_315, zmm4)
float temp0_320[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_321[0x4] = _mm_div_ps(temp0_317, temp0_320)
zmm9 = *(arg3 + 8)
arg11 = _mm_cvttps_epi32(temp0_319)
zmm10 = _mm_cvttps_epi32(temp0_321)
arg_120 = zmm4
float temp0_326[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(arg11), zmm4), temp0_314)
zmm4 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm9, 0x20), data_142fc9600)
float temp0_329[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float arg_d0[0x4] = arg10
float temp0_331[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_326, temp0_329), arg10, 1)
zmm8 = _mm_add_epi32(arg11, _mm_cmpeq_epi32(temp0_329, temp0_329))
zmm6 = _mm_blendv_ps(zmm8, arg11, temp0_331)
arg10 = zmm10
float temp0_337[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_320), temp0_316)
zmm11 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float temp0_339[0x4] = _mm_add_ps(temp0_337, zmm11)
float temp0_340[0x4] = _mm_cmpeq_ps(temp0_339, zmm12, 1)
char temp0_342 = _mm_movemask_ps(_mm_and_ps(temp0_340, zmm2))
zmm15 = *(arg1 + 8)
float temp0_343[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
float temp0_344[0x4] = _mm_sub_ps(temp0_243, temp0_343)
float temp0_345[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_344, temp0_345))
arg17 = zmm1
float temp0_350[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_345), temp0_343)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
__return_addr.o = zmm6
float temp0_352[0x4] = _mm_cmpeq_ps(temp0_339, zmm12, 5)

if (temp0_342 != 0)
    arg11 = arg10

float arg_140[0x4] = zmm12
zmm12 = __subps_xmmps_memps(zmm12, arg18)
zmm1 = arg_c0
float temp0_354[0x4] = _mm_mul_ps(zmm1, zmm1)
float temp0_355[0x4] = _mm_add_ps(temp0_350, zmm4)

if (_mm_movemask_ps(_mm_and_ps(temp0_352, zmm2)) != 0)
    zmm8 = __paddd_xmmdq_memdq(arg10, data_142d3f800)

float temp0_359[0x4] = __subps_xmmps_memps(temp0_243, temp0_290)
float temp0_360[0x4] = _mm_add_ps(temp0_354, zx.o(0))
zmm12 = _mm_mul_ps(zmm12, zmm12)
float temp0_362[0x4] = _mm_blendv_ps(zmm8, arg11, temp0_340)
arg_10 = temp0_362
float temp0_363[0x4] = _mm_cmpeq_ps(temp0_355, temp0_243, 5)
float temp0_364[0x4] = _mm_cmpeq_ps(temp0_355, temp0_243, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_364, zmm2)) != 0)
    arg11 = arg17

arg10 = _mm_add_ps(temp0_360, zmm12)
float temp0_368[0x4] = _mm_mul_ps(temp0_359, temp0_359)

if (_mm_movemask_ps(_mm_and_ps(temp0_363, zmm2)) != 0)
    zmm8 = __paddd_xmmdq_memdq(arg17, data_142d3f800)

float temp0_372[0x4] = _mm_blendv_ps(zmm8, arg11, temp0_364)
zmm14 = _mm_add_ps(arg10, temp0_368)
float temp0_376[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), arg_120), temp0_314)
arg10 = temp0_320
float temp0_379[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_362), arg10), temp0_316)
float temp0_382[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_372), temp0_345), temp0_343)
float temp0_383[0x4] = _mm_add_ps(temp0_329, temp0_376)
zmm11 = _mm_add_ps(zmm11, temp0_379)
zmm4 = _mm_add_ps(zmm4, temp0_382)
float temp0_386[0x4] = _mm_sub_ps(arg_d0, temp0_383)
float temp0_387[0x4] = _mm_sub_ps(arg_140, zmm11)
float temp0_388[0x4] = _mm_sub_ps(temp0_243, zmm4)
float temp0_389[0x4] = _mm_div_ps(temp0_386, arg_120)
float temp0_390[0x4] = _mm_div_ps(temp0_387, arg10)
float temp0_391[0x4] = _mm_div_ps(temp0_388, temp0_345)
arg_40 = temp0_389
arg_50 = temp0_390
int64_t rcx = 0
zmm0 = _mm_cmpeq_epi32(temp0_389, temp0_389)
label_1400aa759:
zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)

if (_mm_movemask_ps(zmm6 & zmm2) != 0)
    char temp0_395 = _mm_movemask_ps(zmm6)
    
    if ((temp0_395 & 1) == 0)
        if ((temp0_395 & 2) != 0)
            goto label_1400aa83f
        
        goto label_1400aa77f
    
    *(&__return_addr + (rcx << 2)) = 0
    
    if ((temp0_395 & 2) != 0)
    label_1400aa83f:
        *(&__return_addr:4 + (rcx << 2)) = 0
        
        if ((temp0_395 & 4) == 0)
            goto label_1400aa787
        
        goto label_1400aa84f
    
label_1400aa77f:
    
    if ((temp0_395 & 4) == 0)
    label_1400aa787:
        
        if ((temp0_395 & 8) != 0)
            goto label_1400aa85f
        
        goto label_1400aa78f
    
label_1400aa84f:
    *(&arg_8 + (rcx << 2)) = 0
    
    if ((temp0_395 & 8) != 0)
    label_1400aa85f:
        *(&arg_c + (rcx << 2)) = 0
        
        if ((temp0_395 & 1) == 0)
            goto label_1400aa797
        
        goto label_1400aa86f
    
label_1400aa78f:
    
    if ((temp0_395 & 1) == 0)
    label_1400aa797:
        
        if ((temp0_395 & 2) != 0)
            goto label_1400aa87f
        
        goto label_1400aa79f
    
label_1400aa86f:
    arg_40[rcx] = 0
    
    if ((temp0_395 & 2) != 0)
    label_1400aa87f:
        arg_40[1 + rcx] = 0
        
        if ((temp0_395 & 4) == 0)
            goto label_1400aa7a7
        
        goto label_1400aa88f
    
label_1400aa79f:
    
    if ((temp0_395 & 4) != 0)
    label_1400aa88f:
        arg_40[2 + rcx] = 0
        
        if ((temp0_395 & 8) != 0)
            arg_40[3 + rcx] = 0
    else
    label_1400aa7a7:
        
        if ((temp0_395 & 8) != 0)
            arg_40[3 + rcx] = 0

int32_t rdx_21 = *(arg4 + rcx)
zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_21 - 1), 0), *(&__return_addr + (rcx << 2)))

if (_mm_movemask_ps(zmm1 & zmm2) != 0)
    char temp0_399 = _mm_movemask_ps(zmm1)
    
    if ((temp0_399 & 1) == 0)
        if ((temp0_399 & 2) != 0)
            goto label_1400aa8bb
        
        goto label_1400aa7ed
    
    *(&__return_addr + (rcx << 2)) = rdx_21 - 2
    
    if ((temp0_399 & 2) != 0)
    label_1400aa8bb:
        *(&__return_addr:4 + (rcx << 2)) = rdx_21 - 2
        
        if ((temp0_399 & 4) == 0)
            goto label_1400aa7f5
        
        goto label_1400aa8c7
    
label_1400aa7ed:
    
    if ((temp0_399 & 4) == 0)
    label_1400aa7f5:
        
        if ((temp0_399 & 8) != 0)
            goto label_1400aa8d3
        
        goto label_1400aa7fd
    
label_1400aa8c7:
    *(&arg_8 + (rcx << 2)) = rdx_21 - 2
    
    if ((temp0_399 & 8) != 0)
    label_1400aa8d3:
        *(&arg_c + (rcx << 2)) = rdx_21 - 2
        
        if ((temp0_399 & 1) == 0)
            goto label_1400aa805
        
        goto label_1400aa8df
    
label_1400aa7fd:
    
    if ((temp0_399 & 1) == 0)
    label_1400aa805:
        
        if ((temp0_399 & 2) != 0)
            goto label_1400aa8ef
        
        goto label_1400aa80d
    
label_1400aa8df:
    arg_40[rcx] = 0x3f800000
    
    if ((temp0_399 & 2) != 0)
    label_1400aa8ef:
        arg_40[1 + rcx] = 0x3f800000
        
        if ((temp0_399 & 4) == 0)
            goto label_1400aa815
        
        goto label_1400aa8ff
    
label_1400aa80d:
    
    if ((temp0_399 & 4) != 0)
    label_1400aa8ff:
        arg_40[2 + rcx] = 0x3f800000
        
        if ((temp0_399 & 8) != 0)
            arg_40[3 + rcx] = 0x3f800000
    else
    label_1400aa815:
        
        if ((temp0_399 & 8) != 0)
            arg_40[3 + rcx] = 0x3f800000

if (rcx == 8)
    zmm7 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm6 = __return_addr.o
    arg10 = arg_10
    zmm12 = temp0_372
    zmm5 = _mm_mullo_epi32(zmm7, zmm6)
    zmm9 = _mm_add_epi32(zmm5, arg10)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    arg11 = _mm_mullo_epi32(zmm9, zmm0)
    zmm1 = _mm_add_epi32(arg11, zmm12)
    uint128_t* rax_47 = *(arg7 + 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 2) & zmm2
    int64_t rdx_23 = sx.q(zmm1[0])
    zmm4 = *(rax_47 + rdx_23)
    int64_t rbx_5 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rdi_6 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rbp_7 = sx.q(_mm_extract_epi32(zmm1, 3))
    zmm4 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_47 + rbx_5), 0x10), 
            *(rax_47 + rdi_6), 0x20), 
        *(rax_47 + rbp_7), 0x30)
    zmm10 = _mm_cmpeq_epi32(temp0_391, temp0_391)
    zmm6 = _mm_mullo_epi32(_mm_sub_epi32(zmm6, zmm10), zmm7)
    zmm1 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, arg10), zmm0), zmm12), 2)
    zmm9 = _mm_mullo_epi32(_mm_add_epi32(zmm9, zmm7), zmm0)
    zmm1 &= zmm2
    zmm7 = *(rax_47 + sx.q(zmm1[0]))
    int32_t temp0_422 = _mm_extract_epi32(zmm1, 1)
    int64_t rbx_7 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_424 = _mm_extract_epi32(zmm1, 3)
    float temp0_428[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm7, *(rax_47 + sx.q(temp0_422)), 0x10), 
                *(rax_47 + rbx_7), 0x20), 
            *(rax_47 + sx.q(temp0_424)), 0x30), 
        zmm4)
    zmm11 = arg_40
    zmm8 = arg_50
    float temp0_430[0x4] = _mm_add_ps(_mm_mul_ps(temp0_428, zmm11), zmm4)
    int32_t temp0_431[0x4] = _mm_sub_epi32(arg10, zmm10)
    zmm5 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm5, temp0_431), zmm0), zmm12), 2) & zmm2
    zmm4 = *(rax_47 + sx.q(zmm5[0]))
    int64_t rcx_7 = sx.q(_mm_extract_epi32(zmm5, 1))
    int32_t temp0_437 = _mm_extract_epi32(zmm5, 2)
    int64_t rbx_9 = sx.q(_mm_extract_epi32(zmm5, 3))
    zmm4 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_47 + rcx_7), 0x10), 
            *(rax_47 + sx.q(temp0_437)), 0x20), 
        *(rax_47 + rbx_9), 0x30)
    arg10 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_431, zmm6), zmm0), zmm12), 2) & zmm2
    zmm6 = *(rax_47 + sx.q(arg10[0]))
    int32_t temp0_446 = _mm_extract_epi32(arg10, 1)
    int64_t rbp_15 = sx.q(_mm_extract_epi32(arg10, 2))
    int32_t temp0_448 = _mm_extract_epi32(arg10, 3)
    float temp0_453[0x4] = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_47 + sx.q(temp0_446)), 0x10), 
                    *(rax_47 + rbp_15), 0x20), 
                *(rax_47 + sx.q(temp0_448)), 0x30), 
            zmm4), 
        zmm11)
    arg10 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r13 + rax_47 + rdx_23), *(r14_5 + rax_47 + rbx_5), 0x10), 
            *(r15 + rax_47 + rdi_6), 0x20), 
        *(r10_1 + rax_47 + rbp_7), 0x30)
    zmm0 = _mm_add_epi32(zmm0, zmm12)
    arg11 = _mm_add_epi32(arg11, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm9)
    zmm9 = _mm_slli_epi32(_mm_add_epi32(zmm9, zmm12), 2) & zmm2
    zmm5 = *(r13 + sx.q(zmm9[0]) + rax_47)
    void* rcx_18 = sx.q(_mm_extract_epi32(zmm9, 1)) + rax_47
    void* rdx_29 = sx.q(_mm_extract_epi32(zmm9, 2)) + rax_47
    void* rbp_18 = sx.q(_mm_extract_epi32(zmm9, 3)) + rax_47
    float temp0_467[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(r14_5 + rcx_18), 0x10), 
            *(r15 + rdx_29), 0x20), 
        *(r10_1 + rbp_18), 0x30)
    float temp0_468[0x4] = _mm_add_ps(temp0_453, zmm4)
    float temp0_471[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_467, arg10), zmm11), arg10)
    arg11 = _mm_slli_epi32(arg11, 2) & zmm2
    arg10 = *(r13 + sx.q(arg11[0]) + rax_47)
    void* rcx_24 = sx.q(_mm_extract_epi32(arg11, 1)) + rax_47
    void* rdx_32 = sx.q(_mm_extract_epi32(arg11, 2)) + rax_47
    void* rbp_21 = sx.q(_mm_extract_epi32(arg11, 3)) + rax_47
    arg10 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg10, *(r14_5 + rcx_24), 0x10), 
            *(r15 + rdx_32), 0x20), 
        *(r10_1 + rbp_21), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
    zmm1 = *(r13 + sx.q(zmm0[0]) + rax_47)
    void* rcx_30 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_47
    void* rdx_35 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_47
    void* rbp_24 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_47
    float temp0_488[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(r14_5 + rcx_30), 0x10), *(r15 + rdx_35), 
                        0x20), 
                    *(r10_1 + rbp_24), 0x30), 
                arg10), 
            zmm11), 
        arg10)
    float temp0_491[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_468, temp0_430), zmm8), temp0_430)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_488, temp0_471), zmm8), temp0_471), 
                temp0_491), 
            temp0_391), 
        temp0_491)
    arg10 = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm14, 7), arg10), zmm2)
    
    if (_mm_movemask_ps(zmm0) != 0)
        arg10 = _mm_rsqrt_ps(zmm14)
        float temp0_505[0x4] = _mm_mul_ps(_mm_mul_ps(zmm14, arg10), arg10)
        zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_505), arg10), 
            data_142d3f640)
        arg10 = _mm_rcp_ps(zmm4)
        zmm4 = _mm_mul_ps(zmm4, arg10)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), arg10), zmm1), zmm0)
    
    rcx_31 = arg40
    rdx_36 = arg41
    zmm8 = arg15
    zmm9 = arg14
    zmm10 = arg13
    zmm0 = arg39
    float temp0_516[0x4] = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_516, data_142fc95d0, 1), zmm2)
    result = _mm_movemask_ps(zmm0)
    
    if (result.b == 0)
        goto label_1400ab82f
    
    float temp0_520[0x4] = _mm_mul_ps(arg_270, temp0_516)
    float temp0_521[0x4] = _mm_mul_ps(arg_280, temp0_516)
    float temp0_522[0x4] = _mm_mul_ps(temp0_290, temp0_516)
    result = zx.d(result.b)
    zmm4 = zmm8
    char temp8_1 = result.b & 1
    
    if (temp8_1 == 0)
        arg10 = zmm9
        
        if (temp8_1 != 0)
            goto label_1400ab779
        
        goto label_1400ab1c9
    
    zmm4.d = zmm8.d f+ temp0_520[0]
    arg10 = zmm9
    
    if (temp8_1 != 0)
    label_1400ab779:
        arg10 = zmm9
        arg10[0] = arg10[0] f+ temp0_521[0]
        zmm2 = zmm10
        
        if (temp8_1 == 0)
            goto label_1400ab1d3
        
        goto label_1400ab78b
    
label_1400ab1c9:
    zmm2 = zmm10
    bool cond:20_1
    bool cond:21_1
    bool cond:22_1
    bool cond:23_1
    
    if (temp8_1 == 0)
    label_1400ab1d3:
        zmm8 = _mm_add_ps(zmm8, temp0_520)
        char temp10_1 = result.b & 2
        cond:20_1 = temp10_1 != 0
        cond:21_1 = temp10_1 == 0
        cond:22_1 = temp10_1 == 0
        cond:23_1 = temp10_1 != 0
        
        if (temp10_1 != 0)
            goto label_1400ab79f
        
        goto label_1400ab1df
    
label_1400ab78b:
    zmm2 = zmm10
    zmm2[0] = zmm2[0] + temp0_522[0]
    zmm8 = _mm_add_ps(zmm8, temp0_520)
    char temp9_1 = result.b & 2
    cond:20_1 = temp9_1 != 0
    cond:21_1 = temp9_1 == 0
    cond:22_1 = temp9_1 == 0
    cond:23_1 = temp9_1 != 0
    
    if (temp9_1 != 0)
    label_1400ab79f:
        zmm4 = _mm_blend_ps(zmm4, zmm8, 2)
        zmm9 = _mm_add_ps(zmm9, temp0_521)
        
        if (cond:21_1)
            goto label_1400ab1e9
        
        goto label_1400ab7b0
    
label_1400ab1df:
    zmm9 = _mm_add_ps(zmm9, temp0_521)
    
    if (not(cond:20_1))
    label_1400ab1e9:
        zmm10 = _mm_add_ps(zmm10, temp0_522)
        
        if (cond:23_1)
            goto label_1400ab7c1
        
        goto label_1400ab1f3
    
label_1400ab7b0:
    arg10 = _mm_blend_ps(arg10, zmm9, 2)
    zmm10 = _mm_add_ps(zmm10, temp0_522)
    bool cond:24_1
    bool cond:25_1
    bool cond:26_1
    bool cond:27_1
    
    if (not(cond:22_1))
    label_1400ab7c1:
        zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
        char temp12_1 = result.b & 4
        cond:24_1 = temp12_1 == 0
        cond:25_1 = temp12_1 != 0
        cond:26_1 = temp12_1 != 0
        cond:27_1 = temp12_1 == 0
        
        if (temp12_1 == 0)
            goto label_1400ab1fb
        
        goto label_1400ab7d0
    
label_1400ab1f3:
    char temp11_1 = result.b & 4
    cond:24_1 = temp11_1 == 0
    cond:25_1 = temp11_1 != 0
    cond:26_1 = temp11_1 != 0
    cond:27_1 = temp11_1 == 0
    
    if (temp11_1 != 0)
    label_1400ab7d0:
        zmm4 = _mm_blend_ps(zmm4, zmm8, 4)
        
        if (not(cond:24_1))
        label_1400ab7dd:
            arg10 = _mm_blend_ps(arg10, zmm9, 4)
            
            if (cond:27_1)
                goto label_1400ab207
            
            goto label_1400ab7ea
    else
    label_1400ab1fb:
        
        if (cond:25_1)
            goto label_1400ab7dd
    
    bool cond:28_1
    bool cond:29_1
    bool cond:30_1
    bool cond:31_1
    
    if (not(cond:26_1))
    label_1400ab207:
        char temp14_1 = result.b & 8
        cond:28_1 = temp14_1 != 0
        cond:29_1 = temp14_1 == 0
        cond:30_1 = temp14_1 == 0
        cond:31_1 = temp14_1 != 0
        
        if (temp14_1 == 0)
            goto label_1400ab7f9
        
        goto label_1400ab20f
    
label_1400ab7ea:
    zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
    char temp13_1 = result.b & 8
    cond:28_1 = temp13_1 != 0
    cond:29_1 = temp13_1 == 0
    cond:30_1 = temp13_1 == 0
    cond:31_1 = temp13_1 != 0
    
    if (temp13_1 == 0)
    label_1400ab7f9:
        zmm8 = zmm4
        
        if (cond:29_1)
            goto label_1400ab21c
        
        goto label_1400ab803
    
label_1400ab20f:
    zmm8 = _mm_blend_ps(zmm8, zmm4, 7)
    
    if (cond:28_1)
    label_1400ab803:
        zmm9 = _mm_blend_ps(zmm9, arg10, 7)
        
        if (not(cond:30_1))
            zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
    else
    label_1400ab21c:
        zmm9 = arg10
        
        if (cond:31_1)
            zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
    
    arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_516, arg16), zmm0)
    zmm10 = zmm2
    goto label_1400ab82f

*(&arg_10 + (rcx << 2))
