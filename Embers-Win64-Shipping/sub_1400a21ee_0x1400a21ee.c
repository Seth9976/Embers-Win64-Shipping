// 函数: sub_1400a21ee
// 地址: 0x1400a21ee
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_c
float arg_10[0x4]
int32_t arg_30[0x4]
uint32_t arg_40[0x4]
float arg_50[0x4]
float arg_60[0x4]
uint128_t arg_70
uint32_t arg_150[0x4]
void arg_170
void arg_180
uint32_t result
uint32_t zmm0[0x4]
float zmm1[0x4]
uint128_t zmm3
float zmm4[0x4]
int32_t zmm5[0x4]
uint128_t zmm6
float zmm7[0x4]
int32_t zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
uint32_t zmm12[0x4]
float zmm13[0x4]
int32_t zmm14[0x4]
float zmm15[0x4]

while (true)
    zmm12 = __return_addr.o
    zmm6 = arg_10
    zmm4 = arg11
    zmm1 = *arg1
    zmm11 = *(arg1 + 4)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm0 = _mm_sub_ps(zmm12, temp0_1)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_4[0x4] = _mm_sub_ps(zmm6, temp0_3)
    arg10 = _mm_cmpeq_epi32(arg10, arg10)
    zmm15 = *(arg1 + 8)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
    float arg_130[0x4] = zmm4
    float temp0_7[0x4] = _mm_sub_ps(zmm4, temp0_6)
    zmm5 = *arg3
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm0 = _mm_div_ps(zmm0, zmm5)
    zmm13 = (*arg3)[2]
    zmm8 = _mm_cvttps_epi32(zmm0)
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), zmm5), temp0_1)
    zmm3 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_16), zmm12, 1)
    zmm14 = _mm_add_epi32(zmm8, arg10)
    float temp0_20[0x4] = _mm_blendv_ps(zmm14, zmm8, zmm0)
    zmm10 = (*arg3)[1]
    float temp0_21[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_22[0x4] = _mm_div_ps(temp0_4, temp0_21)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
    float temp0_24[0x4] = _mm_div_ps(temp0_7, temp0_23)
    zmm7 = _mm_cvttps_epi32(temp0_22)
    zmm4 = _mm_cvttps_epi32(temp0_24)
    float temp0_28[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_21)
    float temp0_30[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_23)
    float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_3)
    float temp0_32[0x4] = _mm_add_ps(temp0_30, temp0_6)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_34[0x4] = _mm_add_ps(temp0_31, temp0_33)
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    __return_addr.o = temp0_20
    zmm0 = _mm_cmpeq_ps(temp0_34, zmm6, 1)
    
    if (_mm_movemask_ps(zmm0) != 0)
        zmm8 = zmm7
    
    float temp0_38[0x4] = _mm_add_ps(temp0_32, zmm3)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_34, zmm6, 5)) != 0)
        zmm14 = __paddd_xmmdq_memdq(zmm7, data_142d3f800)
    
    arg_150 = zmm12
    float temp0_42[0x4] = __subps_xmmps_memps(zmm12, arg17)
    arg17 = zmm6
    float temp0_43[0x4] = __subps_xmmps_memps(zmm6, arg20)
    float temp0_44[0x4] = _mm_blendv_ps(zmm14, zmm8, zmm0)
    arg_10 = temp0_44
    zmm6 = arg_130
    zmm0 = _mm_cmpeq_ps(temp0_38, zmm6, 1)
    
    if (_mm_movemask_ps(zmm0) != 0)
        zmm8 = zmm4
    
    zmm12 = __subps_xmmps_memps(zmm6, arg19)
    float temp0_48[0x4] = _mm_mul_ps(temp0_42, temp0_42)
    float temp0_49[0x4] = _mm_mul_ps(temp0_43, temp0_43)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_38, zmm6, 5)) != 0)
        zmm14 = __paddd_xmmdq_memdq(zmm4, data_142d3f800)
    
    zmm14 = _mm_blendv_ps(zmm14, zmm8, zmm0)
    float temp0_55[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_48, data_142d8f750), temp0_49)
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_20), zmm5), temp0_1)
    float temp0_61[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_44), temp0_21), temp0_3)
    arg11 = zmm14
    float temp0_64[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), temp0_23), temp0_6)
    float temp0_65[0x4] = _mm_add_ps(temp0_16, zmm0)
    float temp0_66[0x4] = _mm_add_ps(temp0_33, temp0_61)
    zmm3 = _mm_add_ps(zmm3, temp0_64)
    zmm0 = _mm_sub_ps(arg_150, temp0_65)
    float temp0_69[0x4] = _mm_sub_ps(arg17, temp0_66)
    zmm6 = _mm_sub_ps(zmm6, zmm3)
    zmm0 = _mm_div_ps(zmm0, zmm5)
    float temp0_72[0x4] = _mm_div_ps(temp0_69, temp0_21)
    zmm6 = _mm_div_ps(zmm6, temp0_23)
    arg_40 = zmm0
    arg_60 = zmm6
    zmm12 = _mm_mul_ps(zmm12, zmm12)
    int64_t rbx_1 = 0
    zmm1 = _mm_cmpeq_epi32(temp0_72, temp0_72)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_20, zmm1))
    
    if (i == 0)
        goto label_1400a24bc
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400a254f
            
            goto label_1400a2488
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400a254f:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400a2490
            
            goto label_1400a255f
        
    label_1400a2488:
        
        if ((i & 4) == 0)
        label_1400a2490:
            
            if ((i & 8) != 0)
                goto label_1400a256f
            
            goto label_1400a2498
        
    label_1400a255f:
        (&arg_8)[rbx_1] = 0
        
        if ((i & 8) != 0)
        label_1400a256f:
            (&arg_c)[rbx_1] = 0
            
            if ((i & 1) == 0)
                goto label_1400a24a0
            
            goto label_1400a257f
        
    label_1400a2498:
        
        if ((i & 1) == 0)
        label_1400a24a0:
            
            if ((i & 2) != 0)
                goto label_1400a258f
            
            goto label_1400a24a8
        
    label_1400a257f:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400a258f:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400a24b0
            
            goto label_1400a259f
        
    label_1400a24a8:
        
        if ((i & 4) != 0)
        label_1400a259f:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400a24b0:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400a24bc:
        int32_t rbp_1 = *(arg4 + rbx_1)
        char temp0_82 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rbp_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_82 != 0)
            if ((temp0_82 & 1) == 0)
                if ((temp0_82 & 2) != 0)
                    goto label_1400a25cb
                
                goto label_1400a24ee
            
            *(&__return_addr + (rbx_1 << 2)) = rbp_1 - 2
            
            if ((temp0_82 & 2) != 0)
            label_1400a25cb:
                *(&__return_addr:4 + (rbx_1 << 2)) = rbp_1 - 2
                
                if ((temp0_82 & 4) == 0)
                    goto label_1400a24f6
                
                goto label_1400a25d7
            
        label_1400a24ee:
            
            if ((temp0_82 & 4) == 0)
            label_1400a24f6:
                
                if ((temp0_82 & 8) != 0)
                    goto label_1400a25e3
                
                goto label_1400a24fe
            
        label_1400a25d7:
            (&arg_8)[rbx_1] = rbp_1 - 2
            
            if ((temp0_82 & 8) != 0)
            label_1400a25e3:
                (&arg_c)[rbx_1] = rbp_1 - 2
                
                if ((temp0_82 & 1) == 0)
                    goto label_1400a2506
                
                goto label_1400a25ef
            
        label_1400a24fe:
            
            if ((temp0_82 & 1) == 0)
            label_1400a2506:
                
                if ((temp0_82 & 2) != 0)
                    goto label_1400a25ff
                
                goto label_1400a250e
            
        label_1400a25ef:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_82 & 2) != 0)
            label_1400a25ff:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_82 & 4) == 0)
                    goto label_1400a2516
                
                goto label_1400a260f
            
        label_1400a250e:
            
            if ((temp0_82 & 4) != 0)
            label_1400a260f:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_82 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400a2516:
                
                if ((temp0_82 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
        
        if (rbx_1 == 8)
            break
        
        arg10 = *(&arg_10 + (rbx_1 << 2))
        rbx_1 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(arg10, zmm1))
    while (i != 0)
    
    zmm14 = _mm_add_ps(temp0_55, zmm12)
    zmm9 = _mm_shuffle_epi32(zx.o(*(arg6 + 4)), 0)
    zmm4 = __return_addr.o
    arg10 = arg_10
    zmm11 = arg11
    int32_t temp0_85[0x4] = _mm_mullo_epi32(zmm9, zmm4)
    zmm13 = _mm_add_epi32(temp0_85, arg10)
    uint32_t temp0_87[0x4] = _mm_shuffle_epi32(zx.o(*(arg6 + 8)), 0)
    int32_t temp0_88[0x4] = _mm_mullo_epi32(zmm13, temp0_87)
    zmm6 = _mm_add_epi32(temp0_88, zmm11)
    float (* rbx_2)[0x4] = *(arg6 + 0x10)
    zmm6 = _mm_slli_epi32(zmm6, 2)
    int64_t rsi_1 = sx.q(zmm6.d)
    int64_t r10_1 = sx.q(_mm_extract_epi32(zmm6, 1))
    int64_t rax_11 = sx.q(_mm_extract_epi32(zmm6, 2))
    int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm6, 3))
    float temp0_96[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(rbx_2 + rsi_1), *(rbx_2 + r10_1), 0x10), 
            *(rbx_2 + rax_11), 0x20), 
        *(rbx_2 + rbp_3), 0x30)
    zmm12 = *(rbx_2 + rsi_1 + 4)
    zmm4 = _mm_mullo_epi32(_mm_sub_epi32(zmm4, zmm1), zmm9)
    zmm3 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, arg10), temp0_87), zmm11), 2)
    zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm9), temp0_87)
    zmm6 = *(rbx_2 + sx.q(zmm3.d))
    int32_t temp0_105 = _mm_extract_epi32(zmm3, 1)
    int64_t rdi_4 = sx.q(_mm_extract_epi32(zmm3, 2))
    int32_t temp0_107 = _mm_extract_epi32(zmm3, 3)
    zmm6 = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm6, *(rbx_2 + sx.q(temp0_105)), 0x10), 
                *(rbx_2 + rdi_4), 0x20), 
            *(rbx_2 + sx.q(temp0_107)), 0x30), 
        temp0_96)
    zmm10 = arg_40
    arg10 = _mm_sub_epi32(arg10, zmm1)
    zmm5 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_85, arg10), temp0_87), zmm11), 2)
    int64_t rdx_3 = sx.q(zmm5[0])
    int32_t temp0_117 = _mm_extract_epi32(zmm5, 1)
    int32_t temp0_118 = _mm_extract_epi32(zmm5, 2)
    zmm1 = *(rbx_2 + rdx_3)
    int32_t temp0_119 = _mm_extract_epi32(zmm5, 3)
    zmm6 = _mm_mul_ps(zmm6, zmm10)
    float temp0_123[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm1, *(rbx_2 + sx.q(temp0_117)), 0x10), 
            *(rbx_2 + sx.q(temp0_118)), 0x20), 
        *(rbx_2 + sx.q(temp0_119)), 0x30)
    arg10 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(arg10, zmm4), temp0_87), zmm11), 2)
    zmm3 = *(rbx_2 + sx.q(arg10[0]))
    int64_t rdx_9 = sx.q(_mm_extract_epi32(arg10, 1))
    int32_t temp0_129 = _mm_extract_epi32(arg10, 2)
    int64_t rdi_8 = sx.q(_mm_extract_epi32(arg10, 3))
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rbx_2 + rdx_9), 0x10), 
            *(rbx_2 + sx.q(temp0_129)), 0x20), 
        *(rbx_2 + rdi_8), 0x30)
    zmm6 = _mm_add_ps(zmm6, temp0_96)
    zmm3 = _mm_sub_ps(zmm3, temp0_123)
    zmm12 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rbx_2 + r10_1 + 4), 0x10), 
            *(rbx_2 + rax_11 + 4), 0x20), 
        *(rbx_2 + rbp_3 + 4), 0x30)
    zmm3 = _mm_mul_ps(zmm3, zmm10)
    zmm0 = _mm_add_epi32(temp0_87, zmm11)
    int32_t temp0_141[0x4] = _mm_add_epi32(temp0_88, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm13)
    zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, zmm11), 2)
    arg10 = *(rbx_2 + sx.q(zmm13[0]) + 4)
    int64_t rax_15 = sx.q(_mm_extract_epi32(zmm13, 1))
    int32_t temp0_146 = _mm_extract_epi32(zmm13, 2)
    int64_t rbp_5 = sx.q(_mm_extract_epi32(zmm13, 3))
    float temp0_150[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg10, *(rbx_2 + rax_15 + 4), 0x10), 
            *(rbx_2 + sx.q(temp0_146) + 4), 0x20), 
        *(rbx_2 + rbp_5 + 4), 0x30)
    zmm3 = _mm_add_ps(zmm3, temp0_123)
    float temp0_154[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_150, zmm12), zmm10), zmm12)
    zmm8 = _mm_slli_epi32(temp0_141, 2)
    zmm1 = *(rbx_2 + sx.q(zmm8[0]) + 4)
    int32_t temp0_156 = _mm_extract_epi32(zmm8, 1)
    int64_t rdx_13 = sx.q(_mm_extract_epi32(zmm8, 2))
    int32_t temp0_158 = _mm_extract_epi32(zmm8, 3)
    float temp0_161[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm1, *(rbx_2 + sx.q(temp0_156) + 4), 0x10), 
            *(rbx_2 + rdx_13 + 4), 0x20), 
        *(rbx_2 + sx.q(temp0_158) + 4), 0x30)
    uint32_t temp0_162[0x4] = _mm_slli_epi32(zmm0, 2)
    int64_t rax_22 = sx.q(temp0_162[0])
    int32_t temp0_163 = _mm_extract_epi32(temp0_162, 1)
    zmm4 = *(rbx_2 + rax_22 + 4)
    int64_t rdx_16 = sx.q(_mm_extract_epi32(temp0_162, 2))
    int64_t rbp_8 = sx.q(_mm_extract_epi32(temp0_162, 3))
    float temp0_171[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm4, *(rbx_2 + sx.q(temp0_163) + 4), 0x10), 
                        *(rbx_2 + rdx_16 + 4), 0x20), 
                    *(rbx_2 + rbp_8 + 4), 0x30), 
                temp0_161), 
            zmm10), 
        temp0_161)
    zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, zmm6), temp0_72), zmm6)
    zmm4 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_171, temp0_154), temp0_72), temp0_154), 
                zmm3), 
            arg_60), 
        zmm3)
    float temp0_181[0x4] = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
    uint32_t temp0_183[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm14, zx.o(0), 7), temp0_181)
    
    if (_mm_movemask_ps(temp0_183) != 0)
        float temp0_185[0x4] = _mm_rsqrt_ps(zmm14)
        zmm14 = _mm_mul_ps(_mm_mul_ps(zmm14, temp0_185), temp0_185)
        float temp0_190[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm14), temp0_185), data_142d3f640)
        float temp0_191[0x4] = _mm_rcp_ps(temp0_190)
        float temp0_192[0x4] = _mm_mul_ps(temp0_190, temp0_191)
        zmm4 = _mm_blendv_ps(zmm4, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_192), temp0_191), zmm4), 
            temp0_183)
    
    zmm9 = arg14
    zmm10 = arg13
    zmm11 = arg12
    float temp0_197[0x4] = __subps_xmmps_memps(zmm4, arg15)
    zmm0 = __cmpps_xmmps_memps_immb(temp0_197, data_142fc95d0, 1)
    char temp0_199 = _mm_movemask_ps(zmm0)
    float arg_240[0x4]
    uint128_t arg_250
    
    if (temp0_199 != 0)
        float temp0_200[0x4] = _mm_mul_ps(arg_240, temp0_197)
        zmm6 = _mm_mul_ps(arg_250, temp0_197)
        zmm5 = _mm_mul_ps(arg21, temp0_197)
        zmm3 = zmm10
        char temp1_1 = temp0_199 & 1
        
        if (temp1_1 == 0)
            arg10 = zmm9
            
            if (temp1_1 != 0)
                goto label_1400a2a6e
            
            goto label_1400a29fc
        
        zmm3.d = zmm10.d f+ temp0_200[0]
        arg10 = zmm9
        
        if (temp1_1 != 0)
        label_1400a2a6e:
            arg10 = zmm9
            arg10[0] = arg10[0] f+ zmm6.d
            zmm1 = zmm11
            
            if (temp1_1 == 0)
                goto label_1400a2a02
            
            goto label_1400a2a7c
        
    label_1400a29fc:
        zmm1 = zmm11
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        bool cond:8_1
        
        if (temp1_1 == 0)
        label_1400a2a02:
            zmm10 = _mm_add_ps(zmm10, temp0_200)
            char temp3_1 = temp0_199 & 2
            cond:5_1 = temp3_1 != 0
            cond:6_1 = temp3_1 == 0
            cond:7_1 = temp3_1 == 0
            cond:8_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
                goto label_1400a2a90
            
            goto label_1400a2a0e
        
    label_1400a2a7c:
        zmm1 = zmm11
        zmm1[0] = zmm1[0] f+ zmm5[0]
        zmm10 = _mm_add_ps(zmm10, temp0_200)
        char temp2_1 = temp0_199 & 2
        cond:5_1 = temp2_1 != 0
        cond:6_1 = temp2_1 == 0
        cond:7_1 = temp2_1 == 0
        cond:8_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
        label_1400a2a90:
            zmm3 = _mm_blend_ps(zmm3, zmm10, 2)
            zmm9 = _mm_add_ps(zmm9, zmm6)
            
            if (cond:6_1)
                goto label_1400a2a18
            
            goto label_1400a2aa1
        
    label_1400a2a0e:
        zmm9 = _mm_add_ps(zmm9, zmm6)
        
        if (not(cond:5_1))
        label_1400a2a18:
            zmm11 = _mm_add_ps(zmm11, zmm5)
            
            if (cond:8_1)
                goto label_1400a2ab2
            
            goto label_1400a2a22
        
    label_1400a2aa1:
        arg10 = _mm_blend_ps(arg10, zmm9, 2)
        zmm11 = _mm_add_ps(zmm11, zmm5)
        bool cond:9_1
        bool cond:10_1
        bool cond:11_1
        bool cond:12_1
        
        if (not(cond:7_1))
        label_1400a2ab2:
            zmm1 = _mm_blend_ps(zmm1, zmm11, 2)
            char temp5_1 = temp0_199 & 4
            cond:9_1 = temp5_1 == 0
            cond:10_1 = temp5_1 != 0
            cond:11_1 = temp5_1 != 0
            cond:12_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
                goto label_1400a2a2a
            
            goto label_1400a2ac1
        
    label_1400a2a22:
        char temp4_1 = temp0_199 & 4
        cond:9_1 = temp4_1 == 0
        cond:10_1 = temp4_1 != 0
        cond:11_1 = temp4_1 != 0
        cond:12_1 = temp4_1 == 0
        
        if (temp4_1 != 0)
        label_1400a2ac1:
            zmm3 = _mm_blend_ps(zmm3, zmm10, 4)
            
            if (not(cond:9_1))
            label_1400a2ace:
                arg10 = _mm_blend_ps(arg10, zmm9, 4)
                
                if (cond:12_1)
                    goto label_1400a2a36
                
                goto label_1400a2adb
        else
        label_1400a2a2a:
            
            if (cond:10_1)
                goto label_1400a2ace
        
        bool cond:14_1
        bool cond:15_1
        bool cond:16_1
        bool cond:17_1
        
        if (not(cond:11_1))
        label_1400a2a36:
            char temp7_1 = temp0_199 & 8
            cond:14_1 = temp7_1 != 0
            cond:15_1 = temp7_1 == 0
            cond:16_1 = temp7_1 == 0
            cond:17_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
                goto label_1400a2aea
            
            goto label_1400a2a3e
        
    label_1400a2adb:
        zmm1 = _mm_blend_ps(zmm1, zmm11, 4)
        char temp6_1 = temp0_199 & 8
        cond:14_1 = temp6_1 != 0
        cond:15_1 = temp6_1 == 0
        cond:16_1 = temp6_1 == 0
        cond:17_1 = temp6_1 != 0
        
        if (temp6_1 == 0)
        label_1400a2aea:
            zmm10 = zmm3
            
            if (cond:15_1)
                goto label_1400a2a4b
            
            goto label_1400a2af4
        
    label_1400a2a3e:
        zmm10 = _mm_blend_ps(zmm10, zmm3, 7)
        
        if (cond:14_1)
        label_1400a2af4:
            zmm9 = _mm_blend_ps(zmm9, arg10, 7)
            
            if (not(cond:16_1))
                zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
        else
        label_1400a2a4b:
            zmm9 = arg10
            
            if (cond:17_1)
                zmm1 = _mm_blend_ps(zmm1, zmm11, 8)
        
        arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_197, arg16), zmm0)
        zmm11 = zmm1
    
    arg9 = zx.q(arg9.d + 4)
    
    if (arg9.d s>= arg7)
        result = arg44
        break
    
    arg12 = zmm11
    arg13 = zmm10
    arg14 = zmm9
    zmm0 = __pmulld_xmmdq_memdq(*(arg40 + sx.q((arg9 << 2).d)), data_142fc95c0)
    int64_t rax_57 = sx.q(zmm0[0])
    int64_t rbp_32 = sx.q(_mm_extract_epi32(zmm0, 1))
    int64_t rbx_15 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rdi_15 = sx.q(_mm_extract_epi32(zmm0, 3))
    zmm5 = *(arg8 + (rax_57 << 2) + 4)
    float temp0_561[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(arg8 + (rax_57 << 2)), *(arg8 + (rbp_32 << 2)), 0x10), 
            *(arg8 + (rbx_15 << 2)), 0x20), 
        *(arg8 + (rdi_15 << 2)), 0x30)
    zmm5 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm5, *(arg8 + (rbp_32 << 2) + 4), 0x10), 
            *(arg8 + (rbx_15 << 2) + 4), 0x20), 
        *(arg8 + (rdi_15 << 2) + 4), 0x30)
    float temp0_567[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(arg8 + (rax_57 << 2) + 8), *(arg8 + (rbp_32 << 2) + 8), 
                0x10), 
            *(arg8 + (rbx_15 << 2) + 8), 0x20), 
        *(arg8 + (rdi_15 << 2) + 8), 0x30)
    zmm3 = temp0_567
    arg_40 = temp0_561
    arg_50 = zmm5
    arg_60 = zmm3
    arg_70 = zx.o(0)
    zmm0 = (*arg5)[3]
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = zmm0
    arg_10 = zmm0
    arg11 = zmm0
    arg_30 = zmm0
    zmm9 = *arg5
    zmm8 = (*arg5)[1]
    zmm10 = (*arg5)[2]
    zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_570[0x4] = _mm_mul_ps(zmm3, zmm8)
    float temp0_571[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_572[0x4] = _mm_mul_ps(temp0_561, temp0_571)
    float temp0_573[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_574[0x4] = _mm_mul_ps(zmm5, temp0_573)
    float temp0_576[0x4] = _mm_sub_ps(temp0_570, _mm_mul_ps(zmm5, temp0_571))
    float temp0_578[0x4] = _mm_sub_ps(temp0_572, _mm_mul_ps(zmm3, temp0_573))
    float temp0_580[0x4] = _mm_sub_ps(temp0_574, _mm_mul_ps(temp0_561, zmm8))
    float temp0_581[0x4] = _mm_add_ps(temp0_576, temp0_576)
    float temp0_582[0x4] = _mm_add_ps(temp0_578, temp0_578)
    float temp0_583[0x4] = _mm_add_ps(temp0_580, temp0_580)
    zmm3 = _mm_mul_ps(zmm0, temp0_581)
    zmm5 = _mm_mul_ps(zmm0, temp0_582)
    zmm3 = __addps_xmmps_memps(zmm3, arg_40)
    zmm5 = __addps_xmmps_memps(zmm5, arg_50)
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, temp0_583), arg_60)
    zmm6 = _mm_mul_ps(temp0_583, zmm8)
    float temp0_591[0x4] = _mm_mul_ps(temp0_581, temp0_571)
    float temp0_592[0x4] = _mm_mul_ps(temp0_582, temp0_573)
    zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_582, temp0_571)), zmm3)
    float temp0_598[0x4] = _mm_add_ps(_mm_sub_ps(temp0_591, _mm_mul_ps(temp0_583, temp0_573)), zmm5)
    float temp0_601[0x4] = _mm_add_ps(_mm_sub_ps(temp0_592, _mm_mul_ps(temp0_581, zmm8)), zmm0)
    zmm3 = arg5[1][0]
    zmm0 = (*arg5)[5]
    zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm6)
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_598)
    arg10 = (*arg5)[6]
    float temp0_607[0x4] = _mm_add_ps(_mm_shuffle_ps(arg10, arg10, 0), temp0_601)
    arg_240 = zmm3
    arg20 = zmm0
    arg_250 = zmm0
    arg19 = temp0_607
    arg21 = temp0_607
    int64_t rbx_16 = 0
    arg17 = zmm3
    zmm0 = zmm3
label_1400a206c:
    arg10 = *(&arg_180 + rbx_16)
    float temp0_608[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
    char temp0_610 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_608, zmm0, 1))
    
    if (temp0_610 != 0)
        if ((temp0_610 & 1) == 0)
            if ((temp0_610 & 2) != 0)
                goto label_1400a216d
            
            goto label_1400a209d
        
        *(&__return_addr + (rbx_16 << 2)) = arg10[0]
        
        if ((temp0_610 & 2) != 0)
        label_1400a216d:
            *(&__return_addr:4 + (rbx_16 << 2)) = arg10[0]
            
            if ((temp0_610 & 4) == 0)
                goto label_1400a20a5
            
            goto label_1400a217b
        
    label_1400a209d:
        
        if ((temp0_610 & 4) != 0)
        label_1400a217b:
            (&arg_8)[rbx_16] = arg10[0]
            
            if ((temp0_610 & 8) != 0)
                (&arg_c)[rbx_16] = arg10[0]
        else
        label_1400a20a5:
            
            if ((temp0_610 & 8) != 0)
                (&arg_c)[rbx_16] = arg10[0]
    
    float temp0_611[0x4] = _mm_cmpeq_ps(temp0_608, zmm0, 5)
    
    if (_mm_movemask_ps(temp0_611) != 0)
        zmm3 = *(&arg_170 + rbx_16)
        arg10 = _mm_shuffle_ps(zmm3, zmm3, 0)
        char temp0_616 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, arg10, 1), temp0_611))
        
        if (temp0_616 != 0)
            if ((temp0_616 & 1) == 0)
                if ((temp0_616 & 2) != 0)
                    goto label_1400a219b
                
                goto label_1400a20f2
            
            *(&__return_addr + (rbx_16 << 2)) = zmm3.d
            
            if ((temp0_616 & 2) != 0)
            label_1400a219b:
                *(&__return_addr:4 + (rbx_16 << 2)) = zmm3.d
                
                if ((temp0_616 & 4) == 0)
                    goto label_1400a20fa
                
                goto label_1400a21a9
            
        label_1400a20f2:
            
            if ((temp0_616 & 4) != 0)
            label_1400a21a9:
                (&arg_8)[rbx_16] = zmm3.d
                
                if ((temp0_616 & 8) != 0)
                    (&arg_c)[rbx_16] = zmm3.d
            else
            label_1400a20fa:
                
                if ((temp0_616 & 8) != 0)
                    (&arg_c)[rbx_16] = zmm3.d
        
        char temp0_619 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, arg10, 5), temp0_611))
        
        if (temp0_619 != 0)
            zmm0 = *(&arg_240 + (rbx_16 << 2))
            
            if ((temp0_619 & 1) == 0)
                if ((temp0_619 & 2) != 0)
                    goto label_1400a21c9
                
                goto label_1400a212d
            
            *(&__return_addr + (rbx_16 << 2)) = zmm0[0]
            
            if ((temp0_619 & 2) != 0)
            label_1400a21c9:
                *(&__return_addr:4 + (rbx_16 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                
                if ((temp0_619 & 4) == 0)
                    goto label_1400a2135
                
                goto label_1400a21d9
            
        label_1400a212d:
            
            if ((temp0_619 & 4) != 0)
            label_1400a21d9:
                (&arg_8)[rbx_16] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_619 & 8) != 0)
                    (&arg_c)[rbx_16] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1400a2135:
                
                if ((temp0_619 & 8) != 0)
                    (&arg_c)[rbx_16] = __extractps_memd_xmmps_immb(zmm0, 3)
    
    if (rbx_16 != 8)
        *(&arg_250 + (rbx_16 << 2))
        break

int32_t* rcx
int64_t* rdx_20

if (arg9.d s>= result)
    rcx = arg42
    rdx_20 = arg43
    zmm3 = arg18
label_1400a491f:
    zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0))
    zmm0 = zmm3 & not.o(zmm10)
    zmm0 = _mm_hadd_ps(zmm0, zmm0)
    zmm0 = _mm_hadd_ps(zmm0, zmm0)
    zmm1 = zmm3 & not.o(zmm9)
    float temp0_544[0x4] = _mm_hadd_ps(zmm1, zmm1)
    zmm0 = _mm_insert_ps(zmm0, _mm_hadd_ps(temp0_544, temp0_544), 0x1c)
    zmm1 = zmm3 & not.o(zmm11)
    float temp0_547[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_548[0x4] = _mm_hadd_ps(temp0_547, temp0_547)
    float temp0_550[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_20), rdx_20[1].d, 0x20), 
        zmm0[0].q | temp0_548[0].q << 0x40)
    *rdx_20 = temp0_550[0]
    *(rdx_20 + 4) = __extractps_memd_xmmps_immb(temp0_550, 1)
    rdx_20[1].d = __extractps_memd_xmmps_immb(temp0_550, 2)
    zmm3 &= not.o(arg16)
    zmm3 = _mm_hadd_ps(zmm3, zmm3)
    zmm3.d = _mm_hadd_ps(zmm3, zmm3).d f+ *rcx
    *rcx = zmm3.d
    return result

zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg9.d), 0), data_142e11d00)
arg10 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm0)
int64_t rax_27 = sx.q(arg9.d << 2)
uint32_t temp0_224 = _mm_movemask_ps(arg10)
arg14 = zmm9
arg13 = zmm10

if ((zx.q(temp0_224) & 0xfffffff9) != 9)
    if ((temp0_224.b & 1) != 0)
        __return_addr.d = *(arg40 + rax_27)
    
    if ((temp0_224.b & 2) == 0)
        if ((temp0_224.b & 4) != 0)
            goto label_1400a4a60
        
        goto label_1400a39c0
    
    __return_addr:4.d = *(arg40 + rax_27 + 4)
    
    if ((temp0_224.b & 4) == 0)
    label_1400a39c0:
        
        if ((temp0_224.b & 8) != 0)
            arg_c = *(arg40 + rax_27 + 0xc)
    else
    label_1400a4a60:
        arg_8 = *(arg40 + rax_27 + 8)
        
        if ((temp0_224.b & 8) != 0)
            arg_c = *(arg40 + rax_27 + 0xc)
    
    zmm1 = __return_addr.o
else
    zmm1 = *(arg40 + rax_27)

zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & arg10
int64_t rax_30 = sx.q(zmm1[0])
int64_t rbx_4 = arg8 + (rax_30 << 2)
zmm0 = *(arg8 + (rax_30 << 2))
int64_t rbp_10 = sx.q(_mm_extract_epi32(zmm1, 1))
int64_t r13 = arg8 + (rbp_10 << 2)
int64_t rdi_9 = sx.q(_mm_extract_epi32(zmm1, 2))
int64_t rdx_24 = arg8 + (rdi_9 << 2)
int64_t rax_32 = sx.q(_mm_extract_epi32(zmm1, 3))
int64_t rsi_11 = arg8 + (rax_32 << 2)
zmm0 = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, *(arg8 + (rbp_10 << 2)), 0x10), 
        *(arg8 + (rdi_9 << 2)), 0x20), 
    *(arg8 + (rax_32 << 2)), 0x30)
zmm3 = data_142fc95e0 & arg10
uint64_t r14 = zx.q(zmm3.d)
zmm8 = *(r14 + rbx_4)
uint64_t rax_33 = zx.q(_mm_extract_epi32(zmm3, 1))
uint64_t r15_1 = zx.q(_mm_extract_epi32(zmm3, 2))
uint64_t r10_2 = zx.q(_mm_extract_epi32(zmm3, 3))
arg20[0].q = rax_33
zmm8 = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rax_33 + r13), 0x10), 
        *(r15_1 + rdx_24), 0x20), 
    *(r10_2 + rsi_11), 0x30)
zmm3 = data_142fc95f0 & arg10
zmm6 = *(zx.q(zmm3.d) + rbx_4)
uint64_t rax_35 = zx.q(_mm_extract_epi32(zmm3, 1))
uint64_t rdi_10 = zx.q(_mm_extract_epi32(zmm3, 2))
uint64_t rbx_5 = zx.q(_mm_extract_epi32(zmm3, 3))
zmm6 = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_35 + r13), 0x10), 
        *(rdi_10 + rdx_24), 0x20), 
    *(rbx_5 + rsi_11), 0x30)
uint32_t arg_1c0[0x4] = zmm0
int32_t arg_1d0[0x4] = zmm8
uint128_t arg_1e0 = zmm6
float arg_1f0[0x4] = zx.o(0)
zmm5 = (*arg5)[3]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
__return_addr.o = zmm5
arg_10 = zmm5
arg11 = zmm5
zmm7 = *arg5
zmm1 = (*arg5)[1]
zmm4 = (*arg5)[2]
float temp0_245[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_246[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_247[0x4] = _mm_mul_ps(zmm8, temp0_246)
float temp0_248[0x4] = _mm_mul_ps(temp0_246, zmm6)
zmm6 = _mm_mul_ps(zmm6, temp0_245)
float temp0_250[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_251[0x4] = _mm_mul_ps(temp0_245, zmm0)
zmm0 = _mm_mul_ps(zmm0, temp0_250)
zmm3 = _mm_mul_ps(zx.o(0), zmm5)
zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_250, zmm8))
zmm0 = _mm_sub_ps(zmm0, temp0_248)
float temp0_257[0x4] = _mm_sub_ps(temp0_247, temp0_251)
zmm3 = _mm_sub_ps(zmm3, zmm3)
zmm6 = _mm_add_ps(zmm6, zmm6)
zmm0 = _mm_add_ps(zmm0, zmm0)
float temp0_261[0x4] = _mm_add_ps(temp0_257, temp0_257)
zmm3 = _mm_add_ps(zmm3, zmm3)
arg_40 = zmm6
arg_50 = zmm0
arg_60 = temp0_261
arg_70 = zmm3
zmm3 = _mm_mul_ps(zmm3, zmm5)
float temp0_264[0x4] = _mm_mul_ps(zmm5, zmm6)
zmm8 = _mm_mul_ps(zmm5, zmm0)
float temp0_266[0x4] = _mm_mul_ps(zmm5, temp0_261)
float temp0_267[0x4] = __addps_xmmps_memps(temp0_264, arg_1c0)
zmm8 = __addps_xmmps_memps(zmm8, arg_1d0)
float temp0_269[0x4] = __addps_xmmps_memps(temp0_266, arg_1e0)
arg_30 = zmm5
float arg_2d0[0x4] = temp0_267
int32_t arg_2e0[0x4] = zmm8
float arg_2f0[0x4] = temp0_269
uint128_t arg_300 = __addps_xmmps_memps(zmm3, arg_1f0)
zmm4 = *arg5
zmm5 = (*arg5)[1]
zmm7 = (*arg5)[2]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_272[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm3 = _mm_mul_ps(zmm0, temp0_272)
float temp0_274[0x4] = _mm_mul_ps(temp0_272, temp0_261)
float temp0_275[0x4] = _mm_mul_ps(temp0_261, zmm5)
float temp0_276[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
zmm5 = _mm_mul_ps(zmm5, zmm6)
zmm6 = _mm_mul_ps(zmm6, temp0_276)
float temp0_280[0x4] = _mm_sub_ps(temp0_275, _mm_mul_ps(temp0_276, zmm0))
zmm6 = _mm_sub_ps(zmm6, temp0_274)
zmm3 = _mm_sub_ps(zmm3, zmm5)
float temp0_283[0x4] = _mm_add_ps(temp0_280, temp0_267)
zmm6 = _mm_add_ps(zmm6, zmm8)
zmm3 = _mm_add_ps(zmm3, temp0_269)
zmm0 = arg5[1][0]
zmm4 = (*arg5)[5]
zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_283)
float temp0_289[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
zmm1 = (*arg5)[6]
float temp0_291[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
uint32_t arg_210[0x4] = zmm0
float arg_220[0x4] = temp0_289
arg_150 = temp0_291
int64_t rsi_12 = 0
zmm1 = zmm0
label_1400a3c7c:
zmm4 = *(&arg_180 + rsi_12)
zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm5 = _mm_cmpeq_ps(zmm3, zmm1, 1)

if (_mm_movemask_ps(_mm_and_ps(zmm5, arg10)) != 0)
    char temp0_296 = _mm_movemask_ps(zmm5)
    
    if ((temp0_296 & 1) == 0)
        if ((temp0_296 & 2) != 0)
            goto label_1400a3d8d
        
        goto label_1400a3cb3
    
    *(&__return_addr + (rsi_12 << 2)) = zmm4[0]
    
    if ((temp0_296 & 2) != 0)
    label_1400a3d8d:
        *(&__return_addr:4 + (rsi_12 << 2)) = zmm4[0]
        
        if ((temp0_296 & 4) == 0)
            goto label_1400a3cbb
        
        goto label_1400a3d9b
    
label_1400a3cb3:
    
    if ((temp0_296 & 4) != 0)
    label_1400a3d9b:
        (&arg_8)[rsi_12] = zmm4[0]
        
        if ((temp0_296 & 8) != 0)
            (&arg_c)[rsi_12] = zmm4[0]
    else
    label_1400a3cbb:
        
        if ((temp0_296 & 8) != 0)
            (&arg_c)[rsi_12] = zmm4[0]

zmm3 = _mm_cmpeq_ps(zmm3, zmm1, 5)

if (_mm_movemask_ps(_mm_and_ps(arg10, zmm3)) != 0)
    zmm5 = *(&arg_170 + rsi_12)
    float temp0_300[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_300, 1), zmm3)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm6, arg10)) != 0)
        char temp0_305 = _mm_movemask_ps(zmm6)
        
        if ((temp0_305 & 1) == 0)
            if ((temp0_305 & 2) != 0)
                goto label_1400a3dbb
            
            goto label_1400a3d14
        
        *(&__return_addr + (rsi_12 << 2)) = zmm5[0]
        
        if ((temp0_305 & 2) != 0)
        label_1400a3dbb:
            *(&__return_addr:4 + (rsi_12 << 2)) = zmm5[0]
            
            if ((temp0_305 & 4) == 0)
                goto label_1400a3d1c
            
            goto label_1400a3dc9
        
    label_1400a3d14:
        
        if ((temp0_305 & 4) != 0)
        label_1400a3dc9:
            (&arg_8)[rsi_12] = zmm5[0]
            
            if ((temp0_305 & 8) != 0)
                (&arg_c)[rsi_12] = zmm5[0]
        else
        label_1400a3d1c:
            
            if ((temp0_305 & 8) != 0)
                (&arg_c)[rsi_12] = zmm5[0]
    
    zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_300, 5), zmm3)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm1, arg10)) != 0)
        zmm3 = *(&arg_210 + (rsi_12 << 2))
        char temp0_310 = _mm_movemask_ps(zmm1)
        
        if ((temp0_310 & 1) == 0)
            if ((temp0_310 & 2) != 0)
                goto label_1400a3de9
            
            goto label_1400a3d55
        
        *(&__return_addr + (rsi_12 << 2)) = zmm3.d
        
        if ((temp0_310 & 2) != 0)
        label_1400a3de9:
            *(&__return_addr:4 + (rsi_12 << 2)) = __extractps_memd_xmmps_immb(zmm3, 1)
            
            if ((temp0_310 & 4) == 0)
                goto label_1400a3d5d
            
            goto label_1400a3df9
        
    label_1400a3d55:
        
        if ((temp0_310 & 4) != 0)
        label_1400a3df9:
            (&arg_8)[rsi_12] = __extractps_memd_xmmps_immb(zmm3, 2)
            
            if ((temp0_310 & 8) != 0)
                (&arg_c)[rsi_12] = __extractps_memd_xmmps_immb(zmm3, 3)
        else
        label_1400a3d5d:
            
            if ((temp0_310 & 8) != 0)
                (&arg_c)[rsi_12] = __extractps_memd_xmmps_immb(zmm3, 3)

if (rsi_12 != 8)
    *(&arg_220 + (rsi_12 << 2))
    return 

arg12 = zmm11
zmm3 = __return_addr.o
zmm13 = arg_10
zmm8 = _mm_sub_ps(zmm3, zmm0)
zmm7 = *arg1
zmm5 = *(arg1 + 4)
float temp0_315[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
zmm0 = _mm_sub_ps(zmm3, temp0_315)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_318[0x4] = _mm_sub_ps(zmm13, zmm5)
zmm6 = *arg3
zmm4 = (*arg3)[1]
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm0 = _mm_div_ps(zmm0, zmm6)
float temp0_321[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_322[0x4] = _mm_div_ps(temp0_318, temp0_321)
zmm11 = (*arg3)[2]
zmm14 = _mm_cvttps_epi32(zmm0)
zmm9 = _mm_cvttps_epi32(temp0_322)
float arg_110[0x4] = zmm6
zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), zmm6), temp0_315)
zmm6 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm11, 0x20), data_142fc9600)
float temp0_330[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
arg17 = zmm3
zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_330), zmm3, 1)
zmm3 = _mm_add_epi32(zmm14, _mm_cmpeq_epi32(temp0_330, temp0_330))
zmm7 = _mm_blendv_ps(zmm3, zmm14, zmm0)
int32_t arg_1b0[0x4] = zmm9
float arg_100[0x4] = zmm5
zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_321), zmm5)
float temp0_339[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm0 = _mm_add_ps(zmm0, temp0_339)
zmm4 = zmm0
zmm0 = _mm_cmpeq_ps(zmm0, zmm13, 1)
char temp0_343 = _mm_movemask_ps(_mm_and_ps(zmm0, arg10))
zmm10 = *(arg1 + 8)
float temp0_344[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
zmm15 = arg11
float temp0_345[0x4] = _mm_sub_ps(zmm15, temp0_344)
float temp0_346[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_345, temp0_346))
int32_t arg_200[0x4] = zmm1
zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_346), temp0_344)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
__return_addr.o = zmm7
float temp0_353[0x4] = _mm_cmpeq_ps(zmm4, zmm13, 5)

if (temp0_343 != 0)
    zmm14 = arg_1b0

float temp0_354[0x4] = __subps_xmmps_memps(zmm13, temp0_289)
zmm8 = _mm_mul_ps(zmm8, zmm8)
zmm12 = _mm_add_ps(zmm12, zmm6)
zmm1 = zmm8

if (_mm_movemask_ps(_mm_and_ps(temp0_353, arg10)) != 0)
    zmm3 = __paddd_xmmdq_memdq(arg_1b0, data_142d3f800)

zmm8 = __subps_xmmps_memps(zmm15, arg_150)
float temp0_361[0x4] = _mm_add_ps(zmm1, zx.o(0))
float temp0_362[0x4] = _mm_mul_ps(temp0_354, temp0_354)
float temp0_363[0x4] = _mm_blendv_ps(zmm3, zmm14, zmm0)
arg_10 = temp0_363
zmm0 = _mm_cmpeq_ps(zmm12, zmm15, 5)
zmm12 = _mm_cmpeq_ps(zmm12, zmm15, 1)

if (_mm_movemask_ps(_mm_and_ps(zmm12, arg10)) != 0)
    zmm14 = arg_200

zmm5 = _mm_add_ps(temp0_361, temp0_362)
zmm8 = _mm_mul_ps(zmm8, zmm8)

if (_mm_movemask_ps(_mm_and_ps(zmm0, arg10)) != 0)
    zmm3 = __paddd_xmmdq_memdq(arg_200, data_142d3f800)

zmm3 = _mm_blendv_ps(zmm3, zmm14, zmm12)
zmm14 = _mm_add_ps(zmm5, zmm8)
zmm8 = arg_110
zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), zmm8), temp0_315)
float temp0_380[0x4] =
    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_363), temp0_321), arg_100)
arg11 = zmm3
zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_346), temp0_344)
zmm5 = _mm_add_ps(temp0_330, zmm0)
float temp0_385[0x4] = _mm_add_ps(temp0_339, temp0_380)
zmm6 = _mm_add_ps(zmm6, zmm3)
zmm0 = _mm_sub_ps(arg17, zmm5)
float temp0_388[0x4] = _mm_sub_ps(zmm13, temp0_385)
float temp0_389[0x4] = _mm_sub_ps(zmm15, zmm6)
zmm0 = _mm_div_ps(zmm0, zmm8)
float temp0_391[0x4] = _mm_div_ps(temp0_388, temp0_321)
float temp0_392[0x4] = _mm_div_ps(temp0_389, temp0_346)
arg_40 = zmm0
int64_t rcx_1 = 0
zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
label_1400a40b9:
zmm7 = _mm_cmpeq_epi32(zmm7, zmm0)

if (_mm_movemask_ps(zmm7 & arg10) != 0)
    char temp0_396 = _mm_movemask_ps(zmm7)
    
    if ((temp0_396 & 1) == 0)
        if ((temp0_396 & 2) != 0)
            goto label_1400a419f
        
        goto label_1400a40df
    
    *(&__return_addr + (rcx_1 << 2)) = 0
    
    if ((temp0_396 & 2) != 0)
    label_1400a419f:
        *(&__return_addr:4 + (rcx_1 << 2)) = 0
        
        if ((temp0_396 & 4) == 0)
            goto label_1400a40e7
        
        goto label_1400a41af
    
label_1400a40df:
    
    if ((temp0_396 & 4) == 0)
    label_1400a40e7:
        
        if ((temp0_396 & 8) != 0)
            goto label_1400a41bf
        
        goto label_1400a40ef
    
label_1400a41af:
    (&arg_8)[rcx_1] = 0
    
    if ((temp0_396 & 8) != 0)
    label_1400a41bf:
        (&arg_c)[rcx_1] = 0
        
        if ((temp0_396 & 1) == 0)
            goto label_1400a40f7
        
        goto label_1400a41cf
    
label_1400a40ef:
    
    if ((temp0_396 & 1) == 0)
    label_1400a40f7:
        
        if ((temp0_396 & 2) != 0)
            goto label_1400a41df
        
        goto label_1400a40ff
    
label_1400a41cf:
    arg_40[rcx_1] = 0
    
    if ((temp0_396 & 2) != 0)
    label_1400a41df:
        arg_40[1 + rcx_1] = 0
        
        if ((temp0_396 & 4) == 0)
            goto label_1400a4107
        
        goto label_1400a41ef
    
label_1400a40ff:
    
    if ((temp0_396 & 4) != 0)
    label_1400a41ef:
        arg_40[2 + rcx_1] = 0
        
        if ((temp0_396 & 8) != 0)
            arg_40[3 + rcx_1] = 0
    else
    label_1400a4107:
        
        if ((temp0_396 & 8) != 0)
            arg_40[3 + rcx_1] = 0

int32_t rdx_25 = *(arg4 + rcx_1)
zmm1 =
    __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_25 - 1), 0), *(&__return_addr + (rcx_1 << 2)))

if (_mm_movemask_ps(zmm1 & arg10) != 0)
    char temp0_400 = _mm_movemask_ps(zmm1)
    
    if ((temp0_400 & 1) == 0)
        if ((temp0_400 & 2) != 0)
            goto label_1400a421b
        
        goto label_1400a414d
    
    *(&__return_addr + (rcx_1 << 2)) = rdx_25 - 2
    
    if ((temp0_400 & 2) != 0)
    label_1400a421b:
        *(&__return_addr:4 + (rcx_1 << 2)) = rdx_25 - 2
        
        if ((temp0_400 & 4) == 0)
            goto label_1400a4155
        
        goto label_1400a4227
    
label_1400a414d:
    
    if ((temp0_400 & 4) == 0)
    label_1400a4155:
        
        if ((temp0_400 & 8) != 0)
            goto label_1400a4233
        
        goto label_1400a415d
    
label_1400a4227:
    (&arg_8)[rcx_1] = rdx_25 - 2
    
    if ((temp0_400 & 8) != 0)
    label_1400a4233:
        (&arg_c)[rcx_1] = rdx_25 - 2
        
        if ((temp0_400 & 1) == 0)
            goto label_1400a4165
        
        goto label_1400a423f
    
label_1400a415d:
    
    if ((temp0_400 & 1) == 0)
    label_1400a4165:
        
        if ((temp0_400 & 2) != 0)
            goto label_1400a424f
        
        goto label_1400a416d
    
label_1400a423f:
    arg_40[rcx_1] = 0x3f800000
    
    if ((temp0_400 & 2) != 0)
    label_1400a424f:
        arg_40[1 + rcx_1] = 0x3f800000
        
        if ((temp0_400 & 4) == 0)
            goto label_1400a4175
        
        goto label_1400a425f
    
label_1400a416d:
    
    if ((temp0_400 & 4) != 0)
    label_1400a425f:
        arg_40[2 + rcx_1] = 0x3f800000
        
        if ((temp0_400 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000
    else
    label_1400a4175:
        
        if ((temp0_400 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000

if (rcx_1 == 8)
    zmm4 = _mm_shuffle_epi32(zx.o(*(arg6 + 4)), 0)
    zmm7 = __return_addr.o
    zmm5 = arg_10
    zmm3 = _mm_mullo_epi32(zmm4, zmm7)
    zmm11 = _mm_add_epi32(zmm3, zmm5)
    uint32_t temp0_404[0x4] = _mm_shuffle_epi32(zx.o(*(arg6 + 8)), 0)
    zmm13 = _mm_mullo_epi32(zmm11, temp0_404)
    zmm1 = _mm_add_epi32(zmm13, arg11)
    uint128_t* rax_52 = *(arg6 + 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 2) & arg10
    int64_t rdx_27 = sx.q(zmm1[0])
    zmm6 = *(rax_52 + rdx_27)
    int64_t rbx_6 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rdi_11 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rbp_12 = sx.q(_mm_extract_epi32(zmm1, 3))
    zmm6 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_52 + rbx_6), 0x10), 
            *(rax_52 + rdi_11), 0x20), 
        *(rax_52 + rbp_12), 0x30)
    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
    zmm7 = _mm_mullo_epi32(_mm_sub_epi32(zmm7, zmm12), zmm4)
    zmm1 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm7, zmm5), temp0_404), arg11), 2)
    zmm11 = _mm_mullo_epi32(_mm_add_epi32(zmm11, zmm4), temp0_404)
    zmm1 &= arg10
    zmm4 = *(rax_52 + sx.q(zmm1[0]))
    int32_t temp0_423 = _mm_extract_epi32(zmm1, 1)
    int64_t rbx_8 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_425 = _mm_extract_epi32(zmm1, 3)
    float temp0_429[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm4, *(rax_52 + sx.q(temp0_423)), 0x10), 
                *(rax_52 + rbx_8), 0x20), 
            *(rax_52 + sx.q(temp0_425)), 0x30), 
        zmm6)
    zmm10 = arg_40
    float temp0_431[0x4] = _mm_add_ps(_mm_mul_ps(temp0_429, zmm10), zmm6)
    int32_t temp0_432[0x4] = _mm_sub_epi32(zmm5, zmm12)
    zmm3 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, temp0_432), temp0_404), arg11), 2) & arg10
    zmm6 = *(rax_52 + sx.q(zmm3.d))
    int64_t rcx_8 = sx.q(_mm_extract_epi32(zmm3, 1))
    int32_t temp0_438 = _mm_extract_epi32(zmm3, 2)
    int64_t rbx_10 = sx.q(_mm_extract_epi32(zmm3, 3))
    zmm6 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_52 + rcx_8), 0x10), 
            *(rax_52 + sx.q(temp0_438)), 0x20), 
        *(rax_52 + rbx_10), 0x30)
    zmm5 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_432, zmm7), temp0_404), arg11), 2) & arg10
    zmm7 = *(rax_52 + sx.q(zmm5[0]))
    int32_t temp0_447 = _mm_extract_epi32(zmm5, 1)
    int64_t rbp_20 = sx.q(_mm_extract_epi32(zmm5, 2))
    int32_t temp0_449 = _mm_extract_epi32(zmm5, 3)
    float temp0_454[0x4] = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rax_52 + sx.q(temp0_447)), 0x10), 
                    *(rax_52 + rbp_20), 0x20), 
                *(rax_52 + sx.q(temp0_449)), 0x30), 
            zmm6), 
        zmm10)
    int32_t* rbx_12 = arg20[0].q
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r14 + rax_52 + rdx_27), *(rbx_12 + rax_52 + rbx_6), 0x10), 
            *(r15_1 + rax_52 + rdi_11), 0x20), 
        *(r10_2 + rax_52 + rbp_12), 0x30)
    zmm0 = _mm_add_epi32(temp0_404, arg11)
    zmm13 = _mm_add_epi32(zmm13, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm11)
    zmm11 = _mm_slli_epi32(_mm_add_epi32(zmm11, arg11), 2) & arg10
    zmm5 = *(r14 + sx.q(zmm11[0]) + rax_52)
    void* rcx_19 = sx.q(_mm_extract_epi32(zmm11, 1)) + rax_52
    void* rdx_33 = sx.q(_mm_extract_epi32(zmm11, 2)) + rax_52
    void* rbp_23 = sx.q(_mm_extract_epi32(zmm11, 3)) + rax_52
    zmm5 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rbx_12 + rcx_19), 0x10), 
            *(r15_1 + rdx_33), 0x20), 
        *(r10_2 + rbp_23), 0x30)
    float temp0_469[0x4] = _mm_add_ps(temp0_454, zmm6)
    zmm5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, zmm3), zmm10), zmm3)
    zmm13 = _mm_slli_epi32(zmm13, 2) & arg10
    zmm3 = *(r14 + sx.q(zmm13[0]) + rax_52)
    void* rcx_25 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_52
    void* rdx_36 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_52
    void* rbp_26 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_52
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rbx_12 + rcx_25), 0x10), 
            *(r15_1 + rdx_36), 0x20), 
        *(r10_2 + rbp_26), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & arg10
    zmm1 = *(r14 + sx.q(zmm0[0]) + rax_52)
    void* rcx_31 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_52
    void* rdx_39 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_52
    void* rbp_29 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_52
    float temp0_489[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_12 + rcx_31), 0x10), 
                        *(r15_1 + rdx_39), 0x20), 
                    *(r10_2 + rbp_29), 0x30), 
                zmm3), 
            zmm10), 
        zmm3)
    float temp0_492[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_469, temp0_431), temp0_391), temp0_431)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_489, zmm5), temp0_391), zmm5), 
                temp0_492), 
            temp0_392), 
        temp0_492)
    zmm3 = _mm_cmpeq_ps(zmm14, zx.o(0), 4)
    uint32_t temp0_502[0x4] = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm14, 7), zmm3), arg10)
    
    if (_mm_movemask_ps(temp0_502) != 0)
        zmm3 = _mm_rsqrt_ps(zmm14)
        zmm5 = _mm_mul_ps(_mm_mul_ps(zmm14, zmm3), zmm3)
        float temp0_509[0x4] =
            __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm3), data_142d3f640)
        zmm3 = _mm_rcp_ps(temp0_509)
        float temp0_511[0x4] = _mm_mul_ps(temp0_509, zmm3)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_511), zmm3), zmm1), temp0_502)
    
    rcx = arg42
    rdx_20 = arg43
    zmm3 = arg18
    zmm9 = arg14
    zmm10 = arg13
    zmm11 = arg12
    zmm0 = arg41
    float temp0_517[0x4] = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    uint32_t temp0_519[0x4] =
        _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_517, data_142fc95d0, 1), arg10)
    result = _mm_movemask_ps(temp0_519)
    
    if (result.b == 0)
        goto label_1400a491f
    
    float temp0_521[0x4] = _mm_mul_ps(arg_210, temp0_517)
    zmm6 = _mm_mul_ps(arg_220, temp0_517)
    zmm5 = _mm_mul_ps(temp0_291, temp0_517)
    result = zx.d(result.b)
    zmm4 = zmm10
    char temp8_1 = result.b & 1
    
    if (temp8_1 == 0)
        zmm8 = zmm9
        
        if (temp8_1 != 0)
            goto label_1400a4865
        
        goto label_1400a46c2
    
    zmm4 = zmm10
    zmm4[0] = zmm4[0] + temp0_521[0]
    zmm8 = zmm9
    
    if (temp8_1 != 0)
    label_1400a4865:
        zmm8 = zmm9
        zmm8[0] = zmm8[0] f+ zmm6.d
        arg10 = zmm11
        
        if (temp8_1 == 0)
            goto label_1400a46cc
        
        goto label_1400a4878
    
label_1400a46c2:
    arg10 = zmm11
    bool cond:22_1
    bool cond:23_1
    bool cond:24_1
    bool cond:25_1
    
    if (temp8_1 == 0)
    label_1400a46cc:
        zmm10 = _mm_add_ps(zmm10, temp0_521)
        char temp10_1 = result.b & 2
        cond:22_1 = temp10_1 != 0
        cond:23_1 = temp10_1 == 0
        cond:24_1 = temp10_1 == 0
        cond:25_1 = temp10_1 != 0
        
        if (temp10_1 != 0)
            goto label_1400a488c
        
        goto label_1400a46d8
    
label_1400a4878:
    arg10 = zmm11
    arg10[0] = arg10[0] f+ zmm5[0]
    zmm10 = _mm_add_ps(zmm10, temp0_521)
    char temp9_1 = result.b & 2
    cond:22_1 = temp9_1 != 0
    cond:23_1 = temp9_1 == 0
    cond:24_1 = temp9_1 == 0
    cond:25_1 = temp9_1 != 0
    
    if (temp9_1 != 0)
    label_1400a488c:
        zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
        zmm9 = _mm_add_ps(zmm9, zmm6)
        
        if (cond:23_1)
            goto label_1400a46e2
        
        goto label_1400a489d
    
label_1400a46d8:
    zmm9 = _mm_add_ps(zmm9, zmm6)
    
    if (not(cond:22_1))
    label_1400a46e2:
        zmm11 = _mm_add_ps(zmm11, zmm5)
        
        if (cond:25_1)
            goto label_1400a48ae
        
        goto label_1400a46ec
    
label_1400a489d:
    zmm8 = _mm_blend_ps(zmm8, zmm9, 2)
    zmm11 = _mm_add_ps(zmm11, zmm5)
    bool cond:26_1
    bool cond:27_1
    bool cond:28_1
    bool cond:29_1
    
    if (not(cond:24_1))
    label_1400a48ae:
        arg10 = _mm_blend_ps(arg10, zmm11, 2)
        char temp12_1 = result.b & 4
        cond:26_1 = temp12_1 == 0
        cond:27_1 = temp12_1 != 0
        cond:28_1 = temp12_1 != 0
        cond:29_1 = temp12_1 == 0
        
        if (temp12_1 == 0)
            goto label_1400a46f4
        
        goto label_1400a48bd
    
label_1400a46ec:
    char temp11_1 = result.b & 4
    cond:26_1 = temp11_1 == 0
    cond:27_1 = temp11_1 != 0
    cond:28_1 = temp11_1 != 0
    cond:29_1 = temp11_1 == 0
    
    if (temp11_1 != 0)
    label_1400a48bd:
        zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
        
        if (not(cond:26_1))
        label_1400a48ca:
            zmm8 = _mm_blend_ps(zmm8, zmm9, 4)
            
            if (cond:29_1)
                goto label_1400a4700
            
            goto label_1400a48d7
    else
    label_1400a46f4:
        
        if (cond:27_1)
            goto label_1400a48ca
    
    bool cond:30_1
    bool cond:31_1
    bool cond:32_1
    bool cond:33_1
    
    if (not(cond:28_1))
    label_1400a4700:
        char temp14_1 = result.b & 8
        cond:30_1 = temp14_1 != 0
        cond:31_1 = temp14_1 == 0
        cond:32_1 = temp14_1 == 0
        cond:33_1 = temp14_1 != 0
        
        if (temp14_1 == 0)
            goto label_1400a48e6
        
        goto label_1400a4708
    
label_1400a48d7:
    arg10 = _mm_blend_ps(arg10, zmm11, 4)
    char temp13_1 = result.b & 8
    cond:30_1 = temp13_1 != 0
    cond:31_1 = temp13_1 == 0
    cond:32_1 = temp13_1 == 0
    cond:33_1 = temp13_1 != 0
    
    if (temp13_1 == 0)
    label_1400a48e6:
        zmm10 = zmm4
        
        if (cond:31_1)
            goto label_1400a4715
        
        goto label_1400a48f0
    
label_1400a4708:
    zmm10 = _mm_blend_ps(zmm10, zmm4, 7)
    
    if (cond:30_1)
    label_1400a48f0:
        zmm9 = _mm_blend_ps(zmm9, zmm8, 7)
        
        if (not(cond:32_1))
            arg10 = _mm_blend_ps(arg10, zmm11, 8)
    else
    label_1400a4715:
        zmm9 = zmm8
        
        if (cond:33_1)
            arg10 = _mm_blend_ps(arg10, zmm11, 8)
    
    arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_517, arg16), temp0_519)
    zmm11 = arg10
    goto label_1400a491f

*(&arg_10 + (rcx_1 << 2))
