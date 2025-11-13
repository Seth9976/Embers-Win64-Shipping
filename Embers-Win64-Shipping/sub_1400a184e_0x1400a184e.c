// 函数: sub_1400a184e
// 地址: 0x1400a184e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_c
int32_t arg_10[0x4]
int32_t arg_30[0x4]
float arg_40[0x4]
float arg_70[0x4]
int32_t arg_c0[0x4]
int32_t arg_d0[0x4]
uint32_t arg_f0[0x4]
int32_t arg_110[0x4]
int32_t arg_120[0x4]
int32_t arg_130[0x4]
int32_t arg_140[0x4]
int32_t arg_150[0x4]
uint128_t arg_160
void arg_190
void arg_1a0
uint128_t zmm0
int32_t zmm1[0x4]
float zmm2[0x4]
int32_t zmm4[0x4]
uint32_t zmm6[0x4]
int32_t zmm7[0x4]
float zmm9[0x4]
float zmm10[0x4]
int32_t zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm15[0x4]

while (true)
    float temp0_1[0x4] = _mm_add_ps(arg12, arg10)
    uint32_t temp0_2[0x4] = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm1 = __return_addr.o
    zmm4 = arg_10
    zmm11 = arg13
    arg10 = _mm_mullo_epi32(temp0_2, zmm1)
    zmm13 = _mm_add_epi32(arg10, zmm4)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm9 = _mm_mullo_epi32(zmm13, zmm0)
    zmm2 = _mm_add_epi32(zmm9, zmm11)
    float (* rbx_1)[0x4] = *(arg7 + 0x10)
    zmm2 = _mm_slli_epi32(zmm2, 2)
    int64_t rdi_1 = sx.q(zmm2[0])
    int64_t rsi_1 = sx.q(_mm_extract_epi32(zmm2, 1))
    int64_t rax_3 = sx.q(_mm_extract_epi32(zmm2, 2))
    int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm2, 3))
    float temp0_14[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(rbx_1 + rdi_1), *(rbx_1 + rsi_1), 0x10), *(rbx_1 + rax_3), 
            0x20), 
        *(rbx_1 + rbp_3), 0x30)
    zmm12 = *(rbx_1 + rdi_1 + 4)
    int32_t temp0_16[0x4] = _mm_mullo_epi32(_mm_sub_epi32(zmm1, arg11), temp0_2)
    zmm7 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_16, zmm4), zmm0), zmm11), 2)
    zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, temp0_2), zmm0)
    zmm6 = *(rbx_1 + sx.q(zmm7[0]))
    int32_t temp0_23 = _mm_extract_epi32(zmm7, 1)
    int64_t rdx_1 = sx.q(_mm_extract_epi32(zmm7, 2))
    int32_t temp0_25 = _mm_extract_epi32(zmm7, 3)
    zmm6 = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm6, *(rbx_1 + sx.q(temp0_23)), 0x10), 
                *(rbx_1 + rdx_1), 0x20), 
            *(rbx_1 + sx.q(temp0_25)), 0x30), 
        temp0_14)
    zmm10 = arg_40
    int32_t temp0_30[0x4] = _mm_sub_epi32(zmm4, arg11)
    arg10 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(arg10, temp0_30), zmm0), zmm11), 2)
    int64_t rdx_4 = sx.q(arg10[0])
    int32_t temp0_35 = _mm_extract_epi32(arg10, 1)
    int32_t temp0_36 = _mm_extract_epi32(arg10, 2)
    arg11 = *(rbx_1 + rdx_4)
    int32_t temp0_37 = _mm_extract_epi32(arg10, 3)
    zmm6 = _mm_mul_ps(zmm6, zmm10)
    arg11 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(arg11, *(rbx_1 + sx.q(temp0_35)), 0x10), 
            *(rbx_1 + sx.q(temp0_36)), 0x20), 
        *(rbx_1 + sx.q(temp0_37)), 0x30)
    zmm4 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_30, temp0_16), zmm0), zmm11), 2)
    zmm7 = *(rbx_1 + sx.q(zmm4[0]))
    int64_t r15_4 = sx.q(_mm_extract_epi32(zmm4, 1))
    int32_t temp0_47 = _mm_extract_epi32(zmm4, 2)
    int64_t rdx_11 = sx.q(_mm_extract_epi32(zmm4, 3))
    zmm7 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm7, *(rbx_1 + r15_4), 0x10), 
            *(rbx_1 + sx.q(temp0_47)), 0x20), 
        *(rbx_1 + rdx_11), 0x30)
    zmm6 = _mm_add_ps(zmm6, temp0_14)
    zmm7 = _mm_sub_ps(zmm7, arg11)
    float temp0_56[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rbx_1 + rsi_1 + 4), 0x10), 
            *(rbx_1 + rax_3 + 4), 0x20), 
        *(rbx_1 + rbp_3 + 4), 0x30)
    zmm7 = _mm_mul_ps(zmm7, zmm10)
    zmm0 = _mm_add_epi32(zmm0, zmm11)
    zmm9 = _mm_add_epi32(zmm9, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm13)
    zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, zmm11), 2)
    zmm2 = *(rbx_1 + sx.q(zmm13[0]) + 4)
    int64_t rax_7 = sx.q(_mm_extract_epi32(zmm13, 1))
    int32_t temp0_64 = _mm_extract_epi32(zmm13, 2)
    int64_t rsi_3 = sx.q(_mm_extract_epi32(zmm13, 3))
    float temp0_68[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rbx_1 + rax_7 + 4), 0x10), 
            *(rbx_1 + sx.q(temp0_64) + 4), 0x20), 
        *(rbx_1 + rsi_3 + 4), 0x30)
    zmm7 = _mm_add_ps(zmm7, arg11)
    float temp0_72[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_68, temp0_56), zmm10), temp0_56)
    zmm9 = _mm_slli_epi32(zmm9, 2)
    arg10 = *(rbx_1 + sx.q(zmm9[0]) + 4)
    int32_t temp0_74 = _mm_extract_epi32(zmm9, 1)
    int64_t rdx_15 = sx.q(_mm_extract_epi32(zmm9, 2))
    int32_t temp0_76 = _mm_extract_epi32(zmm9, 3)
    float temp0_79[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(arg10, *(rbx_1 + sx.q(temp0_74) + 4), 0x10), 
            *(rbx_1 + rdx_15 + 4), 0x20), 
        *(rbx_1 + sx.q(temp0_76) + 4), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2)
    int32_t temp0_81 = _mm_extract_epi32(zmm0, 1)
    zmm1 = *(rbx_1 + sx.q(zmm0.d) + 4)
    int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_6 = sx.q(_mm_extract_epi32(zmm0, 3))
    zmm1 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_1 + sx.q(temp0_81) + 4), 0x10), 
                        *(rbx_1 + rdx_18 + 4), 0x20), 
                    *(rbx_1 + rsi_6 + 4), 0x30), 
                temp0_79), 
            zmm10), 
        temp0_79)
    zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, zmm6), arg14), zmm6)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_72), arg14), temp0_72), zmm7), 
            arg15), 
        zmm7)
    float temp0_99[0x4] = _mm_cmpeq_ps(temp0_1, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_1, zx.o(0), 7), temp0_99)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_103[0x4] = _mm_rsqrt_ps(temp0_1)
        float temp0_105[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_1, temp0_103), temp0_103)
        float temp0_108[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_105), temp0_103), data_142d3f640)
        float temp0_109[0x4] = _mm_rcp_ps(temp0_108)
        float temp0_110[0x4] = _mm_mul_ps(temp0_108, temp0_109)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_110), temp0_109), zmm1), zmm0)
    
    arg12 = arg18
    zmm9 = arg17
    zmm10 = arg16
    zmm1 = __subps_xmmps_memps(zmm1, arg20)
    zmm0 = __cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1)
    char temp0_117 = _mm_movemask_ps(zmm0)
    int32_t arg_2a0[0x4]
    uint32_t arg_2b0[0x4]
    
    if (temp0_117 != 0)
        zmm7 = _mm_mul_ps(arg_2a0, zmm1)
        zmm6 = _mm_mul_ps(arg_2b0, zmm1)
        arg11 = _mm_mul_ps(arg21, zmm1)
        zmm4 = arg12
        char temp1_1 = temp0_117 & 1
        
        if (temp1_1 == 0)
            arg10 = zmm9
            
            if (temp1_1 != 0)
                goto label_1400a1c8e
            
            goto label_1400a1c20
        
        zmm4 = arg12
        zmm4[0] = zmm4[0] f+ zmm7[0]
        arg10 = zmm9
        
        if (temp1_1 != 0)
        label_1400a1c8e:
            arg10 = zmm9
            arg10[0] = arg10[0] f+ zmm6[0]
            zmm2 = zmm10
            
            if (temp1_1 == 0)
                goto label_1400a1c26
            
            goto label_1400a1c9c
        
    label_1400a1c20:
        zmm2 = zmm10
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        bool cond:8_1
        
        if (temp1_1 == 0)
        label_1400a1c26:
            arg12 = _mm_add_ps(arg12, zmm7)
            char temp3_1 = temp0_117 & 2
            cond:5_1 = temp3_1 != 0
            cond:6_1 = temp3_1 == 0
            cond:7_1 = temp3_1 == 0
            cond:8_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
                goto label_1400a1cac
            
            goto label_1400a1c2e
        
    label_1400a1c9c:
        zmm2 = zmm10
        zmm2[0] = zmm2[0] f+ arg11[0]
        arg12 = _mm_add_ps(arg12, zmm7)
        char temp2_1 = temp0_117 & 2
        cond:5_1 = temp2_1 != 0
        cond:6_1 = temp2_1 == 0
        cond:7_1 = temp2_1 == 0
        cond:8_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
        label_1400a1cac:
            zmm4 = _mm_blend_ps(zmm4, arg12, 2)
            zmm9 = _mm_add_ps(zmm9, zmm6)
            
            if (cond:6_1)
                goto label_1400a1c38
            
            goto label_1400a1cbd
        
    label_1400a1c2e:
        zmm9 = _mm_add_ps(zmm9, zmm6)
        
        if (not(cond:5_1))
        label_1400a1c38:
            zmm10 = _mm_add_ps(zmm10, arg11)
            
            if (cond:8_1)
                goto label_1400a1cce
            
            goto label_1400a1c42
        
    label_1400a1cbd:
        arg10 = _mm_blend_ps(arg10, zmm9, 2)
        zmm10 = _mm_add_ps(zmm10, arg11)
        bool cond:10_1
        bool cond:11_1
        bool cond:12_1
        bool cond:13_1
        
        if (not(cond:7_1))
        label_1400a1cce:
            zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
            char temp5_1 = temp0_117 & 4
            cond:10_1 = temp5_1 == 0
            cond:11_1 = temp5_1 != 0
            cond:12_1 = temp5_1 != 0
            cond:13_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
                goto label_1400a1c4a
            
            goto label_1400a1cdd
        
    label_1400a1c42:
        char temp4_1 = temp0_117 & 4
        cond:10_1 = temp4_1 == 0
        cond:11_1 = temp4_1 != 0
        cond:12_1 = temp4_1 != 0
        cond:13_1 = temp4_1 == 0
        
        if (temp4_1 != 0)
        label_1400a1cdd:
            zmm4 = _mm_blend_ps(zmm4, arg12, 4)
            
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
            char temp7_1 = temp0_117 & 8
            cond:15_1 = temp7_1 != 0
            cond:16_1 = temp7_1 == 0
            cond:17_1 = temp7_1 == 0
            cond:18_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
                goto label_1400a1d06
            
            goto label_1400a1c5e
        
    label_1400a1cf7:
        zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
        char temp6_1 = temp0_117 & 8
        cond:15_1 = temp6_1 != 0
        cond:16_1 = temp6_1 == 0
        cond:17_1 = temp6_1 == 0
        cond:18_1 = temp6_1 != 0
        
        if (temp6_1 == 0)
        label_1400a1d06:
            arg12 = zmm4
            
            if (cond:16_1)
                goto label_1400a1c6b
            
            goto label_1400a1d10
        
    label_1400a1c5e:
        arg12 = _mm_blend_ps(arg12, zmm4, 7)
        
        if (cond:15_1)
        label_1400a1d10:
            zmm9 = _mm_blend_ps(zmm9, arg10, 7)
            
            if (not(cond:17_1))
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        else
        label_1400a1c6b:
            zmm9 = arg10
            
            if (cond:18_1)
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        
        arg19 = _mm_blendv_ps(arg19, _mm_add_ps(zmm1, arg19), zmm0)
        zmm10 = zmm2
    
    arg5 = zx.q(arg5.d + 4)
    
    if (arg5.d s>= arg8)
        break
    
    arg16 = zmm10
    arg17 = zmm9
    arg18 = arg12
    zmm0 = __pmulld_xmmdq_memdq(*(arg40 + sx.q((arg5 << 2).d)), data_142fc95c0)
    int64_t rax_49 = sx.q(zmm0.d)
    int64_t rbp_27 = sx.q(_mm_extract_epi32(zmm0, 1))
    int64_t rbx_14 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_13 = sx.q(_mm_extract_epi32(zmm0, 3))
    arg11 = *(arg9 + (rax_49 << 2) + 4)
    zmm1 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(arg9 + (rax_49 << 2)), *(arg9 + (rbp_27 << 2)), 0x10), 
            *(arg9 + (rbx_14 << 2)), 0x20), 
        *(arg9 + (rsi_13 << 2)), 0x30)
    arg11 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(arg11, *(arg9 + (rbp_27 << 2) + 4), 0x10), 
            *(arg9 + (rbx_14 << 2) + 4), 0x20), 
        *(arg9 + (rsi_13 << 2) + 4), 0x30)
    float temp0_484[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(arg9 + (rax_49 << 2) + 8), *(arg9 + (rbp_27 << 2) + 8), 
                0x10), 
            *(arg9 + (rbx_14 << 2) + 8), 0x20), 
        *(arg9 + (rsi_13 << 2) + 8), 0x30)
    arg_40 = zmm1
    arg14 = arg11
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = zmm0
    arg_10 = zmm0
    arg13 = zmm0
    arg_30 = zmm0
    zmm9 = *arg6
    arg12 = (*arg6)[1]
    zmm10 = (*arg6)[2]
    float temp0_486[0x4] = _mm_shuffle_ps(arg12, arg12, 0)
    zmm11 = _mm_mul_ps(temp0_484, temp0_486)
    float temp0_488[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_489[0x4] = _mm_mul_ps(zmm1, temp0_488)
    float temp0_490[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    zmm7 = _mm_mul_ps(arg11, temp0_490)
    zmm11 = _mm_sub_ps(zmm11, _mm_mul_ps(arg11, temp0_488))
    float temp0_495[0x4] = _mm_sub_ps(temp0_489, _mm_mul_ps(temp0_484, temp0_490))
    zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm1, temp0_486))
    zmm11 = _mm_add_ps(zmm11, zmm11)
    float temp0_499[0x4] = _mm_add_ps(temp0_495, temp0_495)
    zmm7 = _mm_add_ps(zmm7, zmm7)
    float temp0_501[0x4] = _mm_mul_ps(zmm0, zmm11)
    arg11 = _mm_mul_ps(zmm0, temp0_499)
    float temp0_503[0x4] = __addps_xmmps_memps(temp0_501, arg_40)
    arg11 = __addps_xmmps_memps(arg11, arg14)
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), temp0_484)
    zmm6 = _mm_mul_ps(zmm7, temp0_486)
    zmm4 = _mm_mul_ps(zmm11, temp0_488)
    zmm1 = _mm_mul_ps(temp0_499, temp0_490)
    zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_499, temp0_488)), temp0_503)
    zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(zmm7, temp0_490)), arg11)
    zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm11, temp0_486)), zmm0)
    zmm10 = arg6[1][0]
    zmm2 = (*arg6)[5]
    float temp0_520[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm6)
    float temp0_522[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4)
    zmm0 = (*arg6)[6]
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
    arg_2a0 = temp0_520
    arg_150 = temp0_522
    arg_2b0 = temp0_522
    arg_160 = zmm0
    arg21 = zmm0
    int64_t rbx_15 = 0
    zmm0 = temp0_520
    
    while (true)
        zmm2 = *(&arg_1a0 + rbx_15)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
        arg10 = _mm_cmpeq_ps(zmm1, zmm0, 1)
        char temp0_527 = _mm_movemask_ps(arg10)
        
        if (temp0_527 != 0)
            if ((temp0_527 & 1) == 0)
                if ((temp0_527 & 2) != 0)
                    goto label_1400a138d
                
                goto label_1400a12bd
            
            *(&__return_addr + (rbx_15 << 2)) = zmm2[0]
            
            if ((temp0_527 & 2) != 0)
            label_1400a138d:
                *(&__return_addr:4 + (rbx_15 << 2)) = zmm2[0]
                
                if ((temp0_527 & 4) == 0)
                    goto label_1400a12c5
                
                goto label_1400a139b
            
        label_1400a12bd:
            
            if ((temp0_527 & 4) != 0)
            label_1400a139b:
                (&arg_8)[rbx_15] = zmm2[0]
                
                if ((temp0_527 & 8) != 0)
                    (&arg_c)[rbx_15] = zmm2[0]
            else
            label_1400a12c5:
                
                if ((temp0_527 & 8) != 0)
                    (&arg_c)[rbx_15] = zmm2[0]
        
        zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
        
        if (_mm_movemask_ps(zmm1) != 0)
            arg10 = *(&arg_190 + rbx_15)
            float temp0_530[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
            char temp0_533 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_530, 1), zmm1))
            
            if (temp0_533 != 0)
                if ((temp0_533 & 1) == 0)
                    if ((temp0_533 & 2) != 0)
                        goto label_1400a13bb
                    
                    goto label_1400a1312
                
                *(&__return_addr + (rbx_15 << 2)) = arg10[0]
                
                if ((temp0_533 & 2) != 0)
                label_1400a13bb:
                    *(&__return_addr:4 + (rbx_15 << 2)) = arg10[0]
                    
                    if ((temp0_533 & 4) == 0)
                        goto label_1400a131a
                    
                    goto label_1400a13c9
                
            label_1400a1312:
                
                if ((temp0_533 & 4) != 0)
                label_1400a13c9:
                    (&arg_8)[rbx_15] = arg10[0]
                    
                    if ((temp0_533 & 8) != 0)
                        (&arg_c)[rbx_15] = arg10[0]
                else
                label_1400a131a:
                    
                    if ((temp0_533 & 8) != 0)
                        (&arg_c)[rbx_15] = arg10[0]
            
            char temp0_536 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_530, 5), zmm1))
            
            if (temp0_536 != 0)
                zmm0 = *(&arg_2a0 + (rbx_15 << 2))
                
                if ((temp0_536 & 1) == 0)
                    if ((temp0_536 & 2) != 0)
                        goto label_1400a13e9
                    
                    goto label_1400a134d
                
                *(&__return_addr + (rbx_15 << 2)) = zmm0.d
                
                if ((temp0_536 & 2) != 0)
                label_1400a13e9:
                    *(&__return_addr:4 + (rbx_15 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                    
                    if ((temp0_536 & 4) == 0)
                        goto label_1400a1355
                    
                    goto label_1400a13f9
                
            label_1400a134d:
                
                if ((temp0_536 & 4) != 0)
                label_1400a13f9:
                    (&arg_8)[rbx_15] = __extractps_memd_xmmps_immb(zmm0, 2)
                    
                    if ((temp0_536 & 8) != 0)
                        (&arg_c)[rbx_15] = __extractps_memd_xmmps_immb(zmm0, 3)
                else
                label_1400a1355:
                    
                    if ((temp0_536 & 8) != 0)
                        (&arg_c)[rbx_15] = __extractps_memd_xmmps_immb(zmm0, 3)
        
        if (rbx_15 == 8)
            break
        
        zmm0 = *(&arg_2b0 + (rbx_15 << 2))
        rbx_15 += 4
    
    float zmm14[0x4] = __return_addr.o
    arg12 = arg_10
    arg10 = _mm_cmpeq_epi32(arg10, arg10)
    arg11 = arg13
    zmm4 = *arg1
    zmm12 = (*arg1)[1]
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm0 = _mm_sub_ps(zmm14, zmm4)
    float temp0_543[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
    float temp0_544[0x4] = _mm_sub_ps(arg12, temp0_543)
    zmm6 = (*arg1)[2]
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
    arg_d0 = arg11
    arg11 = _mm_sub_ps(arg11, zmm6)
    zmm1 = *arg3
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm0 = _mm_div_ps(zmm0, zmm1)
    zmm13 = arg3[1].d
    zmm9 = _mm_cvttps_epi32(zmm0)
    arg_120 = zmm1
    float arg_100[0x4] = zmm4
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), zmm1), zmm4)
    zmm7 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
    zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0)
    arg_c0 = zmm1
    zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm14, 1)
    zmm1 = _mm_add_epi32(zmm9, arg10)
    zmm4 = _mm_blendv_ps(zmm1, zmm9, zmm0)
    zmm15 = *(arg3 + 4)
    float temp0_560[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
    float temp0_561[0x4] = _mm_div_ps(temp0_544, temp0_560)
    float temp0_562[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
    arg11 = _mm_div_ps(arg11, temp0_562)
    arg10 = _mm_cvttps_epi32(temp0_561)
    zmm2 = _mm_cvttps_epi32(arg11)
    arg11 = _mm_mul_ps(_mm_cvtepi32_ps(arg10), temp0_560)
    zmm11 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_562)
    arg_110 = temp0_543
    arg11 = _mm_add_ps(arg11, temp0_543)
    arg_f0 = zmm6
    zmm11 = _mm_add_ps(zmm11, zmm6)
    float temp0_572[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    arg11 = _mm_add_ps(arg11, temp0_572)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    __return_addr.o = zmm4
    zmm0 = _mm_cmpeq_ps(arg11, arg12, 1)
    
    if (_mm_movemask_ps(zmm0) != 0)
        zmm9 = arg10
    
    zmm11 = _mm_add_ps(zmm11, zmm7)
    bool cond:9_1 = _mm_movemask_ps(_mm_cmpeq_ps(arg11, arg12, 5)) == 0
    arg11 = arg12
    
    if (not(cond:9_1))
        zmm1 = __paddd_xmmdq_memdq(arg10, data_142d3f800)
    
    arg_140 = zmm14
    float temp0_581[0x4] = _mm_sub_ps(zmm14, temp0_520)
    arg_130 = arg11
    float temp0_582[0x4] = __subps_xmmps_memps(arg11, arg_150)
    arg11 = _mm_blendv_ps(zmm1, zmm9, zmm0)
    arg_10 = arg11
    zmm14 = arg_d0
    zmm0 = _mm_cmpeq_ps(zmm11, zmm14, 1)
    
    if (_mm_movemask_ps(zmm0) != 0)
        zmm9 = zmm2
    
    float temp0_586[0x4] = __subps_xmmps_memps(zmm14, arg_160)
    float temp0_587[0x4] = _mm_mul_ps(temp0_581, temp0_581)
    float temp0_588[0x4] = _mm_mul_ps(temp0_582, temp0_582)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm11, zmm14, 5)) != 0)
        zmm1 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
    
    zmm1 = _mm_blendv_ps(zmm1, zmm9, zmm0)
    arg12 = _mm_add_ps(__addps_xmmps_memps(temp0_587, data_142d8f750), temp0_588)
    zmm6 = arg_120
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm6), arg_100)
    float temp0_600[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(arg11), temp0_560), arg_110)
    arg13 = zmm1
    zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_562), arg_f0)
    arg11 = _mm_add_ps(arg_c0, zmm0)
    float temp0_605[0x4] = _mm_add_ps(temp0_572, temp0_600)
    zmm7 = _mm_add_ps(zmm7, zmm1)
    zmm0 = _mm_sub_ps(arg_140, arg11)
    zmm1 = _mm_sub_ps(arg_130, temp0_605)
    float temp0_609[0x4] = _mm_sub_ps(zmm14, zmm7)
    zmm0 = _mm_div_ps(zmm0, zmm6)
    zmm1 = _mm_div_ps(zmm1, temp0_560)
    float temp0_612[0x4] = _mm_div_ps(temp0_609, temp0_562)
    arg_40 = zmm0
    arg14 = zmm1
    arg15 = temp0_612
    arg10 = _mm_mul_ps(temp0_586, temp0_586)
    int64_t rbx_16 = 0
    arg11 = _mm_cmpeq_epi32(arg11, arg11)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, arg11))
    
    if (i == 0)
        goto label_1400a16dc
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400a176f
            
            goto label_1400a16a8
        
        *(&__return_addr + (rbx_16 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400a176f:
            *(&__return_addr:4 + (rbx_16 << 2)) = 0
            
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
        (&arg_8)[rbx_16] = 0
        
        if ((i & 8) != 0)
        label_1400a178f:
            (&arg_c)[rbx_16] = 0
            
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
        arg_40[rbx_16] = 0
        
        if ((i & 2) != 0)
        label_1400a17af:
            arg_40[1 + rbx_16] = 0
            
            if ((i & 4) == 0)
                goto label_1400a16d0
            
            goto label_1400a17bf
        
    label_1400a16c8:
        
        if ((i & 4) != 0)
        label_1400a17bf:
            arg_40[2 + rbx_16] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_16] = 0
        else
        label_1400a16d0:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_16] = 0
        
    label_1400a16dc:
        int32_t rbp_28 = *(arg4 + rbx_16)
        char temp0_621 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rbp_28 - 1), 0), *(&__return_addr + (rbx_16 << 2))))
        
        if (temp0_621 != 0)
            if ((temp0_621 & 1) == 0)
                if ((temp0_621 & 2) != 0)
                    goto label_1400a17eb
                
                goto label_1400a170e
            
            *(&__return_addr + (rbx_16 << 2)) = rbp_28 - 2
            
            if ((temp0_621 & 2) != 0)
            label_1400a17eb:
                *(&__return_addr:4 + (rbx_16 << 2)) = rbp_28 - 2
                
                if ((temp0_621 & 4) == 0)
                    goto label_1400a1716
                
                goto label_1400a17f7
            
        label_1400a170e:
            
            if ((temp0_621 & 4) == 0)
            label_1400a1716:
                
                if ((temp0_621 & 8) != 0)
                    goto label_1400a1803
                
                goto label_1400a171e
            
        label_1400a17f7:
            (&arg_8)[rbx_16] = rbp_28 - 2
            
            if ((temp0_621 & 8) != 0)
            label_1400a1803:
                (&arg_c)[rbx_16] = rbp_28 - 2
                
                if ((temp0_621 & 1) == 0)
                    goto label_1400a1726
                
                goto label_1400a180f
            
        label_1400a171e:
            
            if ((temp0_621 & 1) == 0)
            label_1400a1726:
                
                if ((temp0_621 & 2) != 0)
                    goto label_1400a181f
                
                goto label_1400a172e
            
        label_1400a180f:
            arg_40[rbx_16] = 0x3f800000
            
            if ((temp0_621 & 2) != 0)
            label_1400a181f:
                arg_40[1 + rbx_16] = 0x3f800000
                
                if ((temp0_621 & 4) == 0)
                    goto label_1400a1736
                
                goto label_1400a182f
            
        label_1400a172e:
            
            if ((temp0_621 & 4) != 0)
            label_1400a182f:
                arg_40[2 + rbx_16] = 0x3f800000
                
                if ((temp0_621 & 8) != 0)
                    arg_40[3 + rbx_16] = 0x3f800000
            else
            label_1400a1736:
                
                if ((temp0_621 & 8) != 0)
                    arg_40[3 + rbx_16] = 0x3f800000
        
        if (rbx_16 == 8)
            break
        
        zmm4 = *(&arg_10 + (rbx_16 << 2))
        rbx_16 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, arg11))
    while (i != 0)

uint32_t result = arg44
int32_t* rcx
int64_t* rdx_22

if (arg5.d s>= result)
    rcx = arg42
    rdx_22 = arg43
else
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5.d), 0), data_142e11d00)
    zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm0)
    int64_t rax_19 = sx.q(arg5.d << 2)
    uint32_t temp0_142 = _mm_movemask_ps(zmm2)
    arg18 = arg12
    arg17 = zmm9
    arg16 = zmm10
    
    if ((zx.q(temp0_142) & 0xfffffff9) != 9)
        if ((temp0_142.b & 1) != 0)
            __return_addr.d = *(arg40 + rax_19)
        
        if ((temp0_142.b & 2) == 0)
            if ((temp0_142.b & 4) != 0)
                goto label_1400a4a29
            
            goto label_1400a2c46
        
        __return_addr:4.d = *(arg40 + rax_19 + 4)
        
        if ((temp0_142.b & 4) == 0)
        label_1400a2c46:
            
            if ((temp0_142.b & 8) != 0)
                arg_c = *(arg40 + rax_19 + 0xc)
        else
        label_1400a4a29:
            arg_8 = *(arg40 + rax_19 + 8)
            
            if ((temp0_142.b & 8) != 0)
                arg_c = *(arg40 + rax_19 + 0xc)
        
        zmm1 = __return_addr.o
    else
        zmm1 = *(arg40 + rax_19)
    
    zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
    int64_t rax_22 = sx.q(zmm1[0])
    int64_t rbx_3 = arg9 + (rax_22 << 2)
    zmm0 = *(arg9 + (rax_22 << 2))
    int64_t rbp_5 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t r13 = arg9 + (rbp_5 << 2)
    int64_t rdi_10 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rdx_26 = arg9 + (rdi_10 << 2)
    int64_t rax_24 = sx.q(_mm_extract_epi32(zmm1, 3))
    int64_t rsi_8 = arg9 + (rax_24 << 2)
    zmm0 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, *(arg9 + (rbp_5 << 2)), 0x10), 
            *(arg9 + (rdi_10 << 2)), 0x20), 
        *(arg9 + (rax_24 << 2)), 0x30)
    arg10 = data_142fc95e0 & zmm2
    uint64_t r14 = zx.q(arg10[0])
    arg12 = *(r14 + rbx_3)
    uint64_t rax_25 = zx.q(_mm_extract_epi32(arg10, 1))
    uint64_t r15_5 = zx.q(_mm_extract_epi32(arg10, 2))
    uint64_t r10_1 = zx.q(_mm_extract_epi32(arg10, 3))
    arg_160.q = rax_25
    float temp0_155[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg12, *(rax_25 + r13), 0x10), 
            *(r15_5 + rdx_26), 0x20), 
        *(r10_1 + rsi_8), 0x30)
    arg10 = data_142fc95f0 & zmm2
    zmm6 = *(zx.q(arg10[0]) + rbx_3)
    uint64_t rax_27 = zx.q(_mm_extract_epi32(arg10, 1))
    uint64_t rdi_11 = zx.q(_mm_extract_epi32(arg10, 2))
    uint64_t rbx_4 = zx.q(_mm_extract_epi32(arg10, 3))
    zmm6 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_27 + r13), 0x10), 
            *(rdi_11 + rdx_26), 0x20), 
        *(rbx_4 + rsi_8), 0x30)
    uint128_t arg_1c0 = zmm0
    uint32_t arg_1e0[0x4] = zmm6
    float arg_1f0[0x4] = zx.o(0)
    arg11 = (*arg6)[3]
    arg11 = _mm_shuffle_ps(arg11, arg11, 0)
    __return_addr.o = arg11
    arg_10 = arg11
    arg13 = arg11
    zmm7 = *arg6
    zmm1 = (*arg6)[1]
    zmm4 = (*arg6)[2]
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_165[0x4] = _mm_mul_ps(temp0_155, zmm7)
    zmm7 = _mm_mul_ps(zmm7, zmm6)
    zmm6 = _mm_mul_ps(zmm6, zmm1)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm1 = _mm_mul_ps(zmm1, zmm0)
    zmm0 = _mm_mul_ps(zmm0, zmm4)
    float temp0_171[0x4] = _mm_mul_ps(zx.o(0), arg11)
    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, temp0_155))
    zmm0 = _mm_sub_ps(zmm0, zmm7)
    float temp0_175[0x4] = _mm_sub_ps(temp0_165, zmm1)
    float temp0_176[0x4] = _mm_sub_ps(temp0_171, temp0_171)
    zmm6 = _mm_add_ps(zmm6, zmm6)
    zmm0 = _mm_add_ps(zmm0, zmm0)
    float temp0_179[0x4] = _mm_add_ps(temp0_175, temp0_175)
    float temp0_180[0x4] = _mm_add_ps(temp0_176, temp0_176)
    arg_40 = zmm6
    arg14 = zmm0
    arg15 = temp0_179
    arg_70 = temp0_180
    float temp0_181[0x4] = _mm_mul_ps(temp0_180, arg11)
    zmm1 = _mm_mul_ps(arg11, zmm6)
    float temp0_183[0x4] = _mm_mul_ps(arg11, zmm0)
    float temp0_184[0x4] = _mm_mul_ps(arg11, temp0_179)
    zmm1 = __addps_xmmps_memps(zmm1, arg_1c0)
    float temp0_186[0x4] = __addps_xmmps_memps(temp0_183, temp0_155)
    float temp0_187[0x4] = __addps_xmmps_memps(temp0_184, arg_1e0)
    arg_30 = arg11
    int32_t arg_2d0[0x4] = zmm1
    float arg_2e0[0x4] = temp0_186
    float arg_2f0[0x4] = temp0_187
    float arg_300[0x4] = __addps_xmmps_memps(temp0_181, arg_1f0)
    zmm4 = *arg6
    arg11 = (*arg6)[1]
    zmm7 = (*arg6)[2]
    arg11 = _mm_shuffle_ps(arg11, arg11, 0)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_191[0x4] = _mm_mul_ps(zmm0, zmm4)
    zmm4 = _mm_mul_ps(zmm4, temp0_179)
    float temp0_193[0x4] = _mm_mul_ps(temp0_179, arg11)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    arg11 = _mm_mul_ps(arg11, zmm6)
    zmm6 = _mm_mul_ps(zmm6, zmm7)
    float temp0_198[0x4] = _mm_sub_ps(temp0_193, _mm_mul_ps(zmm7, zmm0))
    zmm6 = _mm_sub_ps(zmm6, zmm4)
    float temp0_200[0x4] = _mm_sub_ps(temp0_191, arg11)
    float temp0_201[0x4] = _mm_add_ps(temp0_198, zmm1)
    zmm6 = _mm_add_ps(zmm6, temp0_186)
    float temp0_203[0x4] = _mm_add_ps(temp0_200, temp0_187)
    zmm0 = arg6[1][0]
    zmm4 = (*arg6)[5]
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_201)
    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
    zmm1 = (*arg6)[6]
    zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_203)
    uint128_t arg_270 = zmm0
    arg_140 = zmm4
    int32_t arg_280[0x4] = zmm4
    arg_150 = zmm1
    int32_t arg_290[0x4] = zmm1
    int64_t rsi_9 = 0
    zmm1 = zmm0
    
    while (true)
        zmm4 = *(&arg_1a0 + rsi_9)
        float temp0_210[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        arg11 = _mm_cmpeq_ps(temp0_210, zmm1, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(arg11, zmm2)) != 0)
            char temp0_214 = _mm_movemask_ps(arg11)
            
            if ((temp0_214 & 1) == 0)
                if ((temp0_214 & 2) != 0)
                    goto label_1400a300d
                
                goto label_1400a2f33
            
            *(&__return_addr + (rsi_9 << 2)) = zmm4[0]
            
            if ((temp0_214 & 2) != 0)
            label_1400a300d:
                *(&__return_addr:4 + (rsi_9 << 2)) = zmm4[0]
                
                if ((temp0_214 & 4) == 0)
                    goto label_1400a2f3b
                
                goto label_1400a301b
            
        label_1400a2f33:
            
            if ((temp0_214 & 4) != 0)
            label_1400a301b:
                (&arg_8)[rsi_9] = zmm4[0]
                
                if ((temp0_214 & 8) != 0)
                    (&arg_c)[rsi_9] = zmm4[0]
            else
            label_1400a2f3b:
                
                if ((temp0_214 & 8) != 0)
                    (&arg_c)[rsi_9] = zmm4[0]
        
        float temp0_215[0x4] = _mm_cmpeq_ps(temp0_210, zmm1, 5)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm2, temp0_215)) != 0)
            arg11 = *(&arg_190 + rsi_9)
            zmm4 = _mm_shuffle_ps(arg11, arg11, 0)
            uint32_t temp0_220[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 1), temp0_215)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_220, zmm2)) != 0)
                char temp0_223 = _mm_movemask_ps(temp0_220)
                
                if ((temp0_223 & 1) == 0)
                    if ((temp0_223 & 2) != 0)
                        goto label_1400a303b
                    
                    goto label_1400a2f94
                
                *(&__return_addr + (rsi_9 << 2)) = arg11[0]
                
                if ((temp0_223 & 2) != 0)
                label_1400a303b:
                    *(&__return_addr:4 + (rsi_9 << 2)) = arg11[0]
                    
                    if ((temp0_223 & 4) == 0)
                        goto label_1400a2f9c
                    
                    goto label_1400a3049
                
            label_1400a2f94:
                
                if ((temp0_223 & 4) != 0)
                label_1400a3049:
                    (&arg_8)[rsi_9] = arg11[0]
                    
                    if ((temp0_223 & 8) != 0)
                        (&arg_c)[rsi_9] = arg11[0]
                else
                label_1400a2f9c:
                    
                    if ((temp0_223 & 8) != 0)
                        (&arg_c)[rsi_9] = arg11[0]
            
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, zmm4, 5), temp0_215)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
                arg10 = *(&arg_270 + (rsi_9 << 2))
                char temp0_228 = _mm_movemask_ps(zmm1)
                
                if ((temp0_228 & 1) == 0)
                    if ((temp0_228 & 2) != 0)
                        goto label_1400a3069
                    
                    goto label_1400a2fd5
                
                *(&__return_addr + (rsi_9 << 2)) = arg10[0]
                
                if ((temp0_228 & 2) != 0)
                label_1400a3069:
                    *(&__return_addr:4 + (rsi_9 << 2)) = __extractps_memd_xmmps_immb(arg10, 1)
                    
                    if ((temp0_228 & 4) == 0)
                        goto label_1400a2fdd
                    
                    goto label_1400a3079
                
            label_1400a2fd5:
                
                if ((temp0_228 & 4) != 0)
                label_1400a3079:
                    (&arg_8)[rsi_9] = __extractps_memd_xmmps_immb(arg10, 2)
                    
                    if ((temp0_228 & 8) != 0)
                        (&arg_c)[rsi_9] = __extractps_memd_xmmps_immb(arg10, 3)
                else
                label_1400a2fdd:
                    
                    if ((temp0_228 & 8) != 0)
                        (&arg_c)[rsi_9] = __extractps_memd_xmmps_immb(arg10, 3)
        
        if (rsi_9 == 8)
            break
        
        zmm1 = *(&arg_280 + (rsi_9 << 2))
        rsi_9 += 4
    
    arg11 = __return_addr.o
    zmm11 = arg_10
    float temp0_232[0x4] = _mm_sub_ps(arg11, zmm0)
    zmm6 = *arg1
    arg10 = (*arg1)[1]
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
    zmm0 = _mm_sub_ps(arg11, zmm6)
    float temp0_235[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
    zmm1 = _mm_sub_ps(zmm11, temp0_235)
    zmm4 = *arg3
    zmm7 = *(arg3 + 4)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm0 = _mm_div_ps(zmm0, zmm4)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    zmm1 = _mm_div_ps(zmm1, zmm7)
    zmm9 = arg3[1].d
    zmm12 = _mm_cvttps_epi32(zmm0)
    zmm10 = _mm_cvttps_epi32(zmm1)
    arg_110 = zmm4
    arg_f0 = zmm6
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), zmm4), zmm6)
    zmm4 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm9, 0x20), data_142fc9600)
    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0)
    arg_c0 = zmm1
    arg_d0 = arg11
    zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), arg11, 1)
    arg11 = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(zmm1, zmm1))
    zmm6 = _mm_blendv_ps(arg11, zmm12, zmm0)
    arg_120 = zmm7
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), zmm7), temp0_235)
    float temp0_257[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    zmm0 = _mm_add_ps(zmm0, temp0_257)
    zmm7 = zmm0
    zmm0 = _mm_cmpeq_ps(zmm0, zmm11, 1)
    char temp0_261 = _mm_movemask_ps(_mm_and_ps(zmm0, zmm2))
    zmm13 = (*arg1)[2]
    float temp0_262[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
    zmm15 = arg13
    zmm1 = _mm_sub_ps(zmm15, temp0_262)
    float temp0_264[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    int32_t temp0_266[0x4] = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_264))
    float temp0_269[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_266), temp0_264), temp0_262)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    __return_addr.o = zmm6
    zmm7 = _mm_cmpeq_ps(zmm7, zmm11, 5)
    
    if (temp0_261 != 0)
        zmm12 = zmm10
    
    arg_130 = zmm11
    zmm11 = __subps_xmmps_memps(zmm11, arg_140)
    float temp0_273[0x4] = _mm_mul_ps(temp0_232, temp0_232)
    float temp0_274[0x4] = _mm_add_ps(temp0_269, zmm4)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm7, zmm2)) != 0)
        arg11 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)
    
    float temp0_278[0x4] = __subps_xmmps_memps(zmm15, arg_150)
    zmm1 = _mm_add_ps(temp0_273, zx.o(0))
    zmm11 = _mm_mul_ps(zmm11, zmm11)
    zmm7 = _mm_blendv_ps(arg11, zmm12, zmm0)
    arg_10 = zmm7
    zmm0 = _mm_cmpeq_ps(temp0_274, zmm15, 5)
    float temp0_283[0x4] = _mm_cmpeq_ps(temp0_274, zmm15, 1)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_283, zmm2)) != 0)
        zmm12 = temp0_266
    
    float temp0_286[0x4] = _mm_add_ps(zmm1, zmm11)
    float temp0_287[0x4] = _mm_mul_ps(temp0_278, temp0_278)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
        arg11 = __paddd_xmmdq_memdq(temp0_266, data_142d3f800)
    
    arg11 = _mm_blendv_ps(arg11, zmm12, temp0_283)
    float temp0_292[0x4] = _mm_add_ps(temp0_286, temp0_287)
    arg12 = arg_110
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), arg12), arg_f0)
    arg10 = arg_120
    zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), arg10), temp0_235)
    arg13 = arg11
    arg11 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(arg11), temp0_264), temp0_262)
    zmm7 = _mm_add_ps(arg_c0, zmm0)
    float temp0_303[0x4] = _mm_add_ps(temp0_257, zmm1)
    zmm4 = _mm_add_ps(zmm4, arg11)
    zmm0 = _mm_sub_ps(arg_d0, zmm7)
    zmm1 = _mm_sub_ps(arg_130, temp0_303)
    float temp0_307[0x4] = _mm_sub_ps(zmm15, zmm4)
    zmm0 = _mm_div_ps(zmm0, arg12)
    zmm1 = _mm_div_ps(zmm1, arg10)
    float temp0_310[0x4] = _mm_div_ps(temp0_307, temp0_264)
    arg_40 = zmm0
    arg14 = zmm1
    int64_t rcx_1 = 0
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
    
    while (true)
        zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
        
        if (_mm_movemask_ps(zmm6 & zmm2) != 0)
            char temp0_314 = _mm_movemask_ps(zmm6)
            
            if ((temp0_314 & 1) == 0)
                if ((temp0_314 & 2) != 0)
                    goto label_1400a341f
                
                goto label_1400a335f
            
            *(&__return_addr + (rcx_1 << 2)) = 0
            
            if ((temp0_314 & 2) != 0)
            label_1400a341f:
                *(&__return_addr:4 + (rcx_1 << 2)) = 0
                
                if ((temp0_314 & 4) == 0)
                    goto label_1400a3367
                
                goto label_1400a342f
            
        label_1400a335f:
            
            if ((temp0_314 & 4) == 0)
            label_1400a3367:
                
                if ((temp0_314 & 8) != 0)
                    goto label_1400a343f
                
                goto label_1400a336f
            
        label_1400a342f:
            (&arg_8)[rcx_1] = 0
            
            if ((temp0_314 & 8) != 0)
            label_1400a343f:
                (&arg_c)[rcx_1] = 0
                
                if ((temp0_314 & 1) == 0)
                    goto label_1400a3377
                
                goto label_1400a344f
            
        label_1400a336f:
            
            if ((temp0_314 & 1) == 0)
            label_1400a3377:
                
                if ((temp0_314 & 2) != 0)
                    goto label_1400a345f
                
                goto label_1400a337f
            
        label_1400a344f:
            arg_40[rcx_1] = 0
            
            if ((temp0_314 & 2) != 0)
            label_1400a345f:
                arg_40[1 + rcx_1] = 0
                
                if ((temp0_314 & 4) == 0)
                    goto label_1400a3387
                
                goto label_1400a346f
            
        label_1400a337f:
            
            if ((temp0_314 & 4) != 0)
            label_1400a346f:
                arg_40[2 + rcx_1] = 0
                
                if ((temp0_314 & 8) != 0)
                    arg_40[3 + rcx_1] = 0
            else
            label_1400a3387:
                
                if ((temp0_314 & 8) != 0)
                    arg_40[3 + rcx_1] = 0
        
        int32_t rdx_27 = *(arg4 + rcx_1)
        int32_t temp0_316[0x4] = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_27 - 1), 0), 
            *(&__return_addr + (rcx_1 << 2)))
        
        if (_mm_movemask_ps(temp0_316 & zmm2) != 0)
            char temp0_318 = _mm_movemask_ps(temp0_316)
            
            if ((temp0_318 & 1) == 0)
                if ((temp0_318 & 2) != 0)
                    goto label_1400a349b
                
                goto label_1400a33cd
            
            *(&__return_addr + (rcx_1 << 2)) = rdx_27 - 2
            
            if ((temp0_318 & 2) != 0)
            label_1400a349b:
                *(&__return_addr:4 + (rcx_1 << 2)) = rdx_27 - 2
                
                if ((temp0_318 & 4) == 0)
                    goto label_1400a33d5
                
                goto label_1400a34a7
            
        label_1400a33cd:
            
            if ((temp0_318 & 4) == 0)
            label_1400a33d5:
                
                if ((temp0_318 & 8) != 0)
                    goto label_1400a34b3
                
                goto label_1400a33dd
            
        label_1400a34a7:
            (&arg_8)[rcx_1] = rdx_27 - 2
            
            if ((temp0_318 & 8) != 0)
            label_1400a34b3:
                (&arg_c)[rcx_1] = rdx_27 - 2
                
                if ((temp0_318 & 1) == 0)
                    goto label_1400a33e5
                
                goto label_1400a34bf
            
        label_1400a33dd:
            
            if ((temp0_318 & 1) == 0)
            label_1400a33e5:
                
                if ((temp0_318 & 2) != 0)
                    goto label_1400a34cf
                
                goto label_1400a33ed
            
        label_1400a34bf:
            arg_40[rcx_1] = 0x3f800000
            
            if ((temp0_318 & 2) != 0)
            label_1400a34cf:
                arg_40[1 + rcx_1] = 0x3f800000
                
                if ((temp0_318 & 4) == 0)
                    goto label_1400a33f5
                
                goto label_1400a34df
            
        label_1400a33ed:
            
            if ((temp0_318 & 4) != 0)
            label_1400a34df:
                arg_40[2 + rcx_1] = 0x3f800000
                
                if ((temp0_318 & 8) != 0)
                    arg_40[3 + rcx_1] = 0x3f800000
            else
            label_1400a33f5:
                
                if ((temp0_318 & 8) != 0)
                    arg_40[3 + rcx_1] = 0x3f800000
        
        if (rcx_1 == 8)
            break
        
        zmm6 = *(&arg_10 + (rcx_1 << 2))
        rcx_1 += 4
    
    zmm7 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm6 = __return_addr.o
    arg10 = arg_10
    zmm11 = arg13
    int32_t temp0_320[0x4] = _mm_mullo_epi32(zmm7, zmm6)
    zmm9 = _mm_add_epi32(temp0_320, arg10)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm13 = _mm_mullo_epi32(zmm9, zmm0)
    int32_t temp0_324[0x4] = _mm_add_epi32(zmm13, zmm11)
    int32_t* rax_44 = *(arg7 + 0x10)
    zmm1 = _mm_slli_epi32(temp0_324, 2) & zmm2
    int64_t rdx_29 = sx.q(zmm1[0])
    zmm4 = *(rax_44 + rdx_29)
    int64_t rbx_5 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rdi_12 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rbp_7 = sx.q(_mm_extract_epi32(zmm1, 3))
    zmm4 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_44 + rbx_5), 0x10), 
            *(rax_44 + rdi_12), 0x20), 
        *(rax_44 + rbp_7), 0x30)
    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
    zmm6 = _mm_mullo_epi32(_mm_sub_epi32(zmm6, zmm12), zmm7)
    zmm1 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, arg10), zmm0), zmm11), 2)
    zmm9 = _mm_mullo_epi32(_mm_add_epi32(zmm9, zmm7), zmm0)
    zmm1 &= zmm2
    zmm7 = *(rax_44 + sx.q(zmm1[0]))
    int32_t temp0_341 = _mm_extract_epi32(zmm1, 1)
    int64_t rbx_7 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_343 = _mm_extract_epi32(zmm1, 3)
    zmm7 = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm7, *(rax_44 + sx.q(temp0_341)), 0x10), 
                *(rax_44 + rbx_7), 0x20), 
            *(rax_44 + sx.q(temp0_343)), 0x30), 
        zmm4)
    zmm10 = arg_40
    zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm10), zmm4)
    arg10 = _mm_sub_epi32(arg10, zmm12)
    arg11 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_320, arg10), zmm0), zmm11), 2) & zmm2
    zmm4 = *(rax_44 + sx.q(arg11[0]))
    int64_t rcx_8 = sx.q(_mm_extract_epi32(arg11, 1))
    int32_t temp0_356 = _mm_extract_epi32(arg11, 2)
    int64_t rbx_9 = sx.q(_mm_extract_epi32(arg11, 3))
    zmm4 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_44 + rcx_8), 0x10), 
            *(rax_44 + sx.q(temp0_356)), 0x20), 
        *(rax_44 + rbx_9), 0x30)
    arg10 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(arg10, zmm6), zmm0), zmm11), 2)
        & zmm2
    zmm6 = *(rax_44 + sx.q(arg10[0]))
    int32_t temp0_365 = _mm_extract_epi32(arg10, 1)
    int64_t rbp_15 = sx.q(_mm_extract_epi32(arg10, 2))
    int32_t temp0_367 = _mm_extract_epi32(arg10, 3)
    zmm6 = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_44 + sx.q(temp0_365)), 0x10), 
                    *(rax_44 + rbp_15), 0x20), 
                *(rax_44 + sx.q(temp0_367)), 0x30), 
            zmm4), 
        zmm10)
    int32_t* rbx_11 = arg_160.q
    float temp0_375[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r14 + rax_44 + rdx_29), *(rbx_11 + rax_44 + rbx_5), 0x10), 
            *(r15_5 + rax_44 + rdi_12), 0x20), 
        *(r10_1 + rax_44 + rbp_7), 0x30)
    zmm0 = _mm_add_epi32(zmm0, zmm11)
    zmm13 = _mm_add_epi32(zmm13, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm9)
    zmm9 = _mm_slli_epi32(_mm_add_epi32(zmm9, zmm11), 2) & zmm2
    arg11 = *(r14 + sx.q(zmm9[0]) + rax_44)
    void* rcx_19 = sx.q(_mm_extract_epi32(zmm9, 1)) + rax_44
    void* rdx_35 = sx.q(_mm_extract_epi32(zmm9, 2)) + rax_44
    void* rbp_18 = sx.q(_mm_extract_epi32(zmm9, 3)) + rax_44
    arg11 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg11, *(rbx_11 + rcx_19), 0x10), 
            *(r15_5 + rdx_35), 0x20), 
        *(r10_1 + rbp_18), 0x30)
    zmm6 = _mm_add_ps(zmm6, zmm4)
    arg11 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(arg11, temp0_375), zmm10), temp0_375)
    zmm13 = _mm_slli_epi32(zmm13, 2) & zmm2
    arg10 = *(r14 + sx.q(zmm13[0]) + rax_44)
    void* rcx_25 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_44
    void* rdx_38 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_44
    void* rbp_21 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_44
    float temp0_397[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg10, *(rbx_11 + rcx_25), 0x10), 
            *(r15_5 + rdx_38), 0x20), 
        *(r10_1 + rbp_21), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
    zmm1 = *(r14 + sx.q(zmm0.d) + rax_44)
    void* rcx_31 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_44
    void* rdx_41 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_44
    void* rbp_24 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_44
    zmm1 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_11 + rcx_31), 0x10), 
                        *(r15_5 + rdx_41), 0x20), 
                    *(r10_1 + rbp_24), 0x30), 
                temp0_397), 
            zmm10), 
        temp0_397)
    zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm7), arg14), zmm7)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, arg11), arg14), arg11), zmm6), 
            temp0_310), 
        zmm6)
    float temp0_417[0x4] = _mm_cmpeq_ps(temp0_292, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_292, 7), temp0_417), zmm2)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_422[0x4] = _mm_rsqrt_ps(temp0_292)
        arg11 = _mm_mul_ps(_mm_mul_ps(temp0_292, temp0_422), temp0_422)
        zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, arg11), temp0_422), 
            data_142d3f640)
        float temp0_428[0x4] = _mm_rcp_ps(zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_428)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), temp0_428), zmm1), zmm0)
    
    rcx = arg42
    rdx_22 = arg43
    arg12 = arg18
    zmm9 = arg17
    zmm10 = arg16
    zmm0 = arg41
    zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), zmm2)
    result = _mm_movemask_ps(zmm0)
    
    if (result.b != 0)
        zmm7 = _mm_mul_ps(arg_270, zmm1)
        zmm6 = _mm_mul_ps(arg_280, zmm1)
        arg11 = _mm_mul_ps(arg_290, zmm1)
        result = zx.d(result.b)
        zmm4 = arg12
        char temp8_1 = result.b & 1
        
        if (temp8_1 == 0)
            arg10 = zmm9
            
            if (temp8_1 != 0)
                goto label_1400a4736
            
            goto label_1400a3939
        
        zmm4 = arg12
        zmm4[0] = zmm4[0] f+ zmm7[0]
        arg10 = zmm9
        
        if (temp8_1 != 0)
        label_1400a4736:
            arg10 = zmm9
            arg10[0] = arg10[0] f+ zmm6[0]
            zmm2 = zmm10
            
            if (temp8_1 == 0)
                goto label_1400a3943
            
            goto label_1400a4748
        
    label_1400a3939:
        zmm2 = zmm10
        bool cond:23_1
        bool cond:24_1
        bool cond:25_1
        bool cond:26_1
        
        if (temp8_1 == 0)
        label_1400a3943:
            arg12 = _mm_add_ps(arg12, zmm7)
            char temp10_1 = result.b & 2
            cond:23_1 = temp10_1 != 0
            cond:24_1 = temp10_1 == 0
            cond:25_1 = temp10_1 == 0
            cond:26_1 = temp10_1 != 0
            
            if (temp10_1 != 0)
                goto label_1400a475c
            
            goto label_1400a394f
        
    label_1400a4748:
        zmm2 = zmm10
        zmm2[0] = zmm2[0] f+ arg11[0]
        arg12 = _mm_add_ps(arg12, zmm7)
        char temp9_1 = result.b & 2
        cond:23_1 = temp9_1 != 0
        cond:24_1 = temp9_1 == 0
        cond:25_1 = temp9_1 == 0
        cond:26_1 = temp9_1 != 0
        
        if (temp9_1 != 0)
        label_1400a475c:
            zmm4 = _mm_blend_ps(zmm4, arg12, 2)
            zmm9 = _mm_add_ps(zmm9, zmm6)
            
            if (cond:24_1)
                goto label_1400a3959
            
            goto label_1400a476d
        
    label_1400a394f:
        zmm9 = _mm_add_ps(zmm9, zmm6)
        
        if (not(cond:23_1))
        label_1400a3959:
            zmm10 = _mm_add_ps(zmm10, arg11)
            
            if (cond:26_1)
                goto label_1400a477e
            
            goto label_1400a3963
        
    label_1400a476d:
        arg10 = _mm_blend_ps(arg10, zmm9, 2)
        zmm10 = _mm_add_ps(zmm10, arg11)
        bool cond:27_1
        bool cond:28_1
        bool cond:29_1
        bool cond:30_1
        
        if (not(cond:25_1))
        label_1400a477e:
            zmm2 = _mm_blend_ps(zmm2, zmm10, 2)
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
            zmm4 = _mm_blend_ps(zmm4, arg12, 4)
            
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
        zmm2 = _mm_blend_ps(zmm2, zmm10, 4)
        char temp13_1 = result.b & 8
        cond:31_1 = temp13_1 != 0
        cond:32_1 = temp13_1 == 0
        cond:33_1 = temp13_1 == 0
        cond:34_1 = temp13_1 != 0
        
        if (temp13_1 == 0)
        label_1400a47b6:
            arg12 = zmm4
            
            if (cond:32_1)
                goto label_1400a398c
            
            goto label_1400a47c0
        
    label_1400a397f:
        arg12 = _mm_blend_ps(arg12, zmm4, 7)
        
        if (cond:31_1)
        label_1400a47c0:
            zmm9 = _mm_blend_ps(zmm9, arg10, 7)
            
            if (not(cond:33_1))
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        else
        label_1400a398c:
            zmm9 = arg10
            
            if (cond:34_1)
                zmm2 = _mm_blend_ps(zmm2, zmm10, 8)
        
        arg19 = _mm_blendv_ps(arg19, _mm_add_ps(zmm1, arg19), zmm0)
        zmm10 = zmm2

float temp0_459[0x4] = _mm_hadd_ps(arg12, arg12)
float temp0_460[0x4] = _mm_hadd_ps(temp0_459, temp0_459)
float temp0_461[0x4] = _mm_hadd_ps(zmm9, zmm9)
float temp0_463[0x4] = _mm_insert_ps(temp0_460, _mm_hadd_ps(temp0_461, temp0_461), 0x1c)
float temp0_464[0x4] = _mm_hadd_ps(zmm10, zmm10)
float temp0_465[0x4] = _mm_hadd_ps(temp0_464, temp0_464)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_22), rdx_22[1].d, 0x20), 
    temp0_463[0].q | temp0_465[0].q << 0x40)
*rdx_22 = zmm0.d
*(rdx_22 + 4) = __extractps_memd_xmmps_immb(zmm0, 1)
rdx_22[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
zmm0 = arg19
zmm0 = _mm_hadd_ps(zmm0, zmm0)
zmm0.d = _mm_hadd_ps(zmm0, zmm0).d f+ *rcx
*rcx = zmm0.d
return result
