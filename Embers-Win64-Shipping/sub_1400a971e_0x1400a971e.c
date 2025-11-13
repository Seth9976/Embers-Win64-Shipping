// 函数: sub_1400a971e
// 地址: 0x1400a971e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
void arg_c
float arg_10[0x4]
float arg_30[0x4]
float arg_40[0x4]
uint128_t arg_60
float arg_70[0x4]
int32_t arg_100[0x4]
void arg_170
void arg_180
uint32_t result
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]
int32_t zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
uint128_t zmm15

while (true)
    zmm9 = __return_addr.o
    zmm10 = arg_10
    zmm3 = *arg1
    zmm12 = *(arg1 + 4)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    float temp0_2[0x4] = _mm_sub_ps(zmm9, temp0_1)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
    float temp0_4[0x4] = _mm_sub_ps(zmm10, temp0_3)
    zmm6 = *(arg1 + 8)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_6[0x4] = _mm_sub_ps(arg11, zmm6)
    zmm2 = *arg3
    float temp0_7[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_8[0x4] = _mm_div_ps(temp0_2, temp0_7)
    zmm13 = (*arg3)[2]
    zmm5 = _mm_cvttps_epi32(temp0_8)
    float temp0_12[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm5), temp0_7), temp0_1)
    zmm15 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
    float temp0_17[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_12, temp0_15), zmm9, 1)
    zmm4 = _mm_add_epi32(zmm5, arg10)
    zmm2 = zmm5
    float temp0_19[0x4] = _mm_blendv_ps(zmm4, zmm5, temp0_17)
    zmm8 = (*arg3)[1]
    float temp0_20[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_21[0x4] = _mm_div_ps(temp0_4, temp0_20)
    float temp0_22[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
    float temp0_23[0x4] = _mm_div_ps(temp0_6, temp0_22)
    zmm7 = _mm_cvttps_epi32(temp0_21)
    zmm1 = _mm_cvttps_epi32(temp0_23)
    float temp0_27[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_20)
    float temp0_29[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_22)
    float temp0_30[0x4] = _mm_add_ps(temp0_27, temp0_3)
    arg_100 = zmm6
    float temp0_31[0x4] = _mm_add_ps(temp0_29, zmm6)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
    float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_32)
    zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
    __return_addr.o = temp0_19
    float temp0_35[0x4] = _mm_cmpeq_ps(temp0_33, zmm10, 1)
    
    if (_mm_movemask_ps(temp0_35) != 0)
        zmm2 = zmm7
    
    float temp0_37[0x4] = _mm_add_ps(temp0_31, zmm15)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_33, zmm10, 5)) != 0)
        zmm4 = _mm_add_epi32(zmm7, arg10)
    
    arg10 = __subps_xmmps_memps(zmm9, arg17)
    float temp0_42[0x4] = __subps_xmmps_memps(zmm10, arg19)
    zmm6 = zmm2
    float temp0_43[0x4] = _mm_blendv_ps(zmm4, zmm2, temp0_35)
    arg_10 = temp0_43
    float temp0_44[0x4] = _mm_cmpeq_ps(temp0_37, arg11, 1)
    
    if (_mm_movemask_ps(temp0_44) != 0)
        zmm6 = zmm1
    
    float temp0_46[0x4] = __subps_xmmps_memps(arg11, arg20)
    arg10 = _mm_mul_ps(arg10, arg10)
    float temp0_48[0x4] = _mm_mul_ps(temp0_42, temp0_42)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_37, arg11, 5)) != 0)
        zmm4 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)
    
    float temp0_52[0x4] = _mm_blendv_ps(zmm4, zmm6, temp0_44)
    arg10 = _mm_add_ps(__addps_xmmps_memps(arg10, data_142d8f750), temp0_48)
    zmm6 = temp0_7
    float temp0_57[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_19), zmm6), temp0_1)
    float temp0_60[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_43), temp0_20), temp0_3)
    float temp0_63[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_52), temp0_22), arg_100)
    float temp0_64[0x4] = _mm_add_ps(temp0_15, temp0_57)
    float temp0_65[0x4] = _mm_add_ps(temp0_32, temp0_60)
    zmm15 = _mm_add_ps(zmm15, temp0_63)
    float temp0_67[0x4] = _mm_sub_ps(zmm9, temp0_64)
    float temp0_68[0x4] = _mm_sub_ps(zmm10, temp0_65)
    float temp0_69[0x4] = _mm_sub_ps(arg11, zmm15)
    float temp0_70[0x4] = _mm_div_ps(temp0_67, zmm6)
    float temp0_71[0x4] = _mm_div_ps(temp0_68, temp0_20)
    float temp0_72[0x4] = _mm_div_ps(temp0_69, temp0_22)
    arg_40 = temp0_70
    arg_60 = temp0_72
    float temp0_73[0x4] = _mm_mul_ps(temp0_46, temp0_46)
    int64_t rbx_1 = 0
    zmm5 = _mm_cmpeq_epi32(temp0_70, temp0_70)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_19, zmm5))
    
    if (i == 0)
        goto label_1400a99dc
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400a9a6f
            
            goto label_1400a99a8
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400a9a6f:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400a99b0
            
            goto label_1400a9a7f
        
    label_1400a99a8:
        
        if ((i & 4) == 0)
        label_1400a99b0:
            
            if ((i & 8) != 0)
                goto label_1400a9a8f
            
            goto label_1400a99b8
        
    label_1400a9a7f:
        *(&arg_8 + (rbx_1 << 2)) = 0
        
        if ((i & 8) != 0)
        label_1400a9a8f:
            *(&arg_c + (rbx_1 << 2)) = 0
            
            if ((i & 1) == 0)
                goto label_1400a99c0
            
            goto label_1400a9a9f
        
    label_1400a99b8:
        
        if ((i & 1) == 0)
        label_1400a99c0:
            
            if ((i & 2) != 0)
                goto label_1400a9aaf
            
            goto label_1400a99c8
        
    label_1400a9a9f:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400a9aaf:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400a99d0
            
            goto label_1400a9abf
        
    label_1400a99c8:
        
        if ((i & 4) != 0)
        label_1400a9abf:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400a99d0:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400a99dc:
        int32_t rdi_1 = *(arg4 + rbx_1)
        char temp0_81 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rdi_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_81 != 0)
            if ((temp0_81 & 1) == 0)
                if ((temp0_81 & 2) != 0)
                    goto label_1400a9aeb
                
                goto label_1400a9a0e
            
            *(&__return_addr + (rbx_1 << 2)) = rdi_1 - 2
            
            if ((temp0_81 & 2) != 0)
            label_1400a9aeb:
                *(&__return_addr:4 + (rbx_1 << 2)) = rdi_1 - 2
                
                if ((temp0_81 & 4) == 0)
                    goto label_1400a9a16
                
                goto label_1400a9af7
            
        label_1400a9a0e:
            
            if ((temp0_81 & 4) == 0)
            label_1400a9a16:
                
                if ((temp0_81 & 8) != 0)
                    goto label_1400a9b03
                
                goto label_1400a9a1e
            
        label_1400a9af7:
            *(&arg_8 + (rbx_1 << 2)) = rdi_1 - 2
            
            if ((temp0_81 & 8) != 0)
            label_1400a9b03:
                *(&arg_c + (rbx_1 << 2)) = rdi_1 - 2
                
                if ((temp0_81 & 1) == 0)
                    goto label_1400a9a26
                
                goto label_1400a9b0f
            
        label_1400a9a1e:
            
            if ((temp0_81 & 1) == 0)
            label_1400a9a26:
                
                if ((temp0_81 & 2) != 0)
                    goto label_1400a9b1f
                
                goto label_1400a9a2e
            
        label_1400a9b0f:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_81 & 2) != 0)
            label_1400a9b1f:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_81 & 4) == 0)
                    goto label_1400a9a36
                
                goto label_1400a9b2f
            
        label_1400a9a2e:
            
            if ((temp0_81 & 4) != 0)
            label_1400a9b2f:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_81 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400a9a36:
                
                if ((temp0_81 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
        
        if (rbx_1 == 8)
            break
        
        zmm3 = *(&arg_10 + (rbx_1 << 2))
        rbx_1 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, zmm5))
    while (i != 0)
    
    arg10 = _mm_add_ps(arg10, temp0_73)
    zmm7 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm1 = __return_addr.o
    zmm4 = arg_10
    int32_t temp0_84[0x4] = _mm_mullo_epi32(zmm7, zmm1)
    zmm13 = _mm_add_epi32(temp0_84, zmm4)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm8 = _mm_mullo_epi32(zmm13, zmm0)
    zmm2 = _mm_add_epi32(zmm8, temp0_52)
    float (* rbx_2)[0x4] = *(arg7 + 0x10)
    zmm2 = _mm_slli_epi32(zmm2, 2)
    int64_t rsi_1 = sx.q(zmm2[0])
    int64_t rdi_3 = sx.q(_mm_extract_epi32(zmm2, 1))
    int64_t r14_1 = sx.q(_mm_extract_epi32(zmm2, 2))
    int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm2, 3))
    float temp0_95[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(rbx_2 + rsi_1), *(rbx_2 + rdi_3), 0x10), *(rbx_2 + r14_1), 
            0x20), 
        *(rbx_2 + rbp_3), 0x30)
    zmm12 = *(rbx_2 + rsi_1 + 4)
    zmm1 = _mm_mullo_epi32(_mm_sub_epi32(zmm1, zmm5), zmm7)
    zmm3 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm1, zmm4), zmm0), temp0_52), 2)
    zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, zmm7), zmm0)
    zmm7 = *(rbx_2 + sx.q(zmm3[0]))
    int32_t temp0_104 = _mm_extract_epi32(zmm3, 1)
    int64_t rdx_1 = sx.q(_mm_extract_epi32(zmm3, 2))
    int32_t temp0_106 = _mm_extract_epi32(zmm3, 3)
    float temp0_110[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm7, *(rbx_2 + sx.q(temp0_104)), 0x10), 
                *(rbx_2 + rdx_1), 0x20), 
            *(rbx_2 + sx.q(temp0_106)), 0x30), 
        temp0_95)
    zmm9 = arg_40
    zmm4 = _mm_sub_epi32(zmm4, zmm5)
    zmm6 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_84, zmm4), zmm0), temp0_52), 2)
    int64_t rax_14 = sx.q(zmm6[0])
    int32_t temp0_116 = _mm_extract_epi32(zmm6, 1)
    int32_t temp0_117 = _mm_extract_epi32(zmm6, 2)
    zmm5 = *(rbx_2 + rax_14)
    int32_t temp0_118 = _mm_extract_epi32(zmm6, 3)
    float temp0_119[0x4] = _mm_mul_ps(temp0_110, zmm9)
    float temp0_122[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm5, *(rbx_2 + sx.q(temp0_116)), 0x10), 
            *(rbx_2 + sx.q(temp0_117)), 0x20), 
        *(rbx_2 + sx.q(temp0_118)), 0x30)
    zmm4 =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, zmm1), zmm0), temp0_52), 2)
    zmm3 = *(rbx_2 + sx.q(zmm4[0]))
    int64_t rax_20 = sx.q(_mm_extract_epi32(zmm4, 1))
    int32_t temp0_128 = _mm_extract_epi32(zmm4, 2)
    int64_t rsi_9 = sx.q(_mm_extract_epi32(zmm4, 3))
    float temp0_132[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rbx_2 + rax_20), 0x10), 
            *(rbx_2 + sx.q(temp0_128)), 0x20), 
        *(rbx_2 + rsi_9), 0x30)
    float temp0_133[0x4] = _mm_add_ps(temp0_119, temp0_95)
    float temp0_134[0x4] = _mm_sub_ps(temp0_132, temp0_122)
    float temp0_137[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rbx_2 + rdi_3 + 4), 0x10), 
            *(rbx_2 + r14_1 + 4), 0x20), 
        *(rbx_2 + rbp_3 + 4), 0x30)
    float temp0_138[0x4] = _mm_mul_ps(temp0_134, zmm9)
    zmm0 = _mm_add_epi32(zmm0, temp0_52)
    zmm8 = _mm_add_epi32(zmm8, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm13)
    zmm13 = _mm_slli_epi32(_mm_add_epi32(zmm13, temp0_52), 2)
    zmm2 = *(rbx_2 + sx.q(zmm13[0]) + 4)
    int64_t rax_24 = sx.q(_mm_extract_epi32(zmm13, 1))
    int32_t temp0_145 = _mm_extract_epi32(zmm13, 2)
    int64_t rsi_11 = sx.q(_mm_extract_epi32(zmm13, 3))
    float temp0_149[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rbx_2 + rax_24 + 4), 0x10), 
            *(rbx_2 + sx.q(temp0_145) + 4), 0x20), 
        *(rbx_2 + rsi_11 + 4), 0x30)
    float temp0_150[0x4] = _mm_add_ps(temp0_138, temp0_122)
    float temp0_153[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_149, temp0_137), zmm9), temp0_137)
    zmm8 = _mm_slli_epi32(zmm8, 2)
    zmm4 = *(rbx_2 + sx.q(zmm8[0]) + 4)
    int32_t temp0_155 = _mm_extract_epi32(zmm8, 1)
    int64_t rdx_9 = sx.q(_mm_extract_epi32(zmm8, 2))
    int32_t temp0_157 = _mm_extract_epi32(zmm8, 3)
    float temp0_160[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm4, *(rbx_2 + sx.q(temp0_155) + 4), 0x10), 
            *(rbx_2 + rdx_9 + 4), 0x20), 
        *(rbx_2 + sx.q(temp0_157) + 4), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2)
    int64_t rax_31 = sx.q(zmm0[0])
    int32_t temp0_162 = _mm_extract_epi32(zmm0, 1)
    zmm1 = *(rbx_2 + rax_31 + 4)
    int64_t rdx_12 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_14 = sx.q(_mm_extract_epi32(zmm0, 3))
    float temp0_170[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_2 + sx.q(temp0_162) + 4), 0x10), 
                        *(rbx_2 + rdx_12 + 4), 0x20), 
                    *(rbx_2 + rsi_14 + 4), 0x30), 
                temp0_160), 
            zmm9), 
        temp0_160)
    float temp0_173[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_150, temp0_133), temp0_71), temp0_133)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_170, temp0_153), temp0_71), temp0_153), 
                temp0_173), 
            arg_60), 
        temp0_173)
    float temp0_180[0x4] = _mm_cmpeq_ps(arg10, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_cmpeq_ps(arg10, zx.o(0), 7), temp0_180)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_184[0x4] = _mm_rsqrt_ps(arg10)
        arg10 = _mm_mul_ps(_mm_mul_ps(arg10, temp0_184), temp0_184)
        float temp0_189[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, arg10), temp0_184), data_142d3f640)
        float temp0_190[0x4] = _mm_rcp_ps(temp0_189)
        float temp0_191[0x4] = _mm_mul_ps(temp0_189, temp0_190)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_191), temp0_190), zmm1), zmm0)
    
    zmm9 = arg14
    zmm10 = arg13
    zmm11 = arg12
    float temp0_196[0x4] = __subps_xmmps_memps(zmm1, arg15)
    float temp0_197[0x4] = __cmpps_xmmps_memps_immb(temp0_196, data_142fc95d0, 1)
    char temp0_198 = _mm_movemask_ps(temp0_197)
    float arg_240[0x4]
    int32_t arg_250[0x4]
    
    if (temp0_198 != 0)
        float temp0_199[0x4] = _mm_mul_ps(arg_240, temp0_196)
        zmm6 = _mm_mul_ps(arg_250, temp0_196)
        float temp0_201[0x4] = _mm_mul_ps(arg21, temp0_196)
        zmm4 = zmm10
        char temp1_1 = temp0_198 & 1
        
        if (temp1_1 == 0)
            zmm3 = zmm9
            
            if (temp1_1 != 0)
                goto label_1400a9f7e
            
            goto label_1400a9f14
        
        zmm4 = zmm10
        zmm4[0] = zmm4[0] + temp0_199[0]
        zmm3 = zmm9
        
        if (temp1_1 != 0)
        label_1400a9f7e:
            zmm3 = zmm9
            zmm3[0] = zmm3[0] f+ zmm6[0]
            zmm2 = zmm11
            
            if (temp1_1 == 0)
                goto label_1400a9f1a
            
            goto label_1400a9f8c
        
    label_1400a9f14:
        zmm2 = zmm11
        bool cond:4_1
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        
        if (temp1_1 == 0)
        label_1400a9f1a:
            zmm10 = _mm_add_ps(zmm10, temp0_199)
            char temp3_1 = temp0_198 & 2
            cond:4_1 = temp3_1 != 0
            cond:5_1 = temp3_1 == 0
            cond:6_1 = temp3_1 == 0
            cond:7_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
                goto label_1400a9f9c
            
            goto label_1400a9f22
        
    label_1400a9f8c:
        zmm2 = zmm11
        zmm2[0] = zmm2[0] + temp0_201[0]
        zmm10 = _mm_add_ps(zmm10, temp0_199)
        char temp2_1 = temp0_198 & 2
        cond:4_1 = temp2_1 != 0
        cond:5_1 = temp2_1 == 0
        cond:6_1 = temp2_1 == 0
        cond:7_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
        label_1400a9f9c:
            zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
            zmm9 = _mm_add_ps(zmm9, zmm6)
            
            if (cond:5_1)
                goto label_1400a9f2c
            
            goto label_1400a9fad
        
    label_1400a9f22:
        zmm9 = _mm_add_ps(zmm9, zmm6)
        
        if (not(cond:4_1))
        label_1400a9f2c:
            zmm11 = _mm_add_ps(zmm11, temp0_201)
            
            if (cond:7_1)
                goto label_1400a9fbe
            
            goto label_1400a9f36
        
    label_1400a9fad:
        zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
        zmm11 = _mm_add_ps(zmm11, temp0_201)
        bool cond:8_1
        bool cond:9_1
        bool cond:11_1
        bool cond:12_1
        
        if (not(cond:6_1))
        label_1400a9fbe:
            zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
            char temp5_1 = temp0_198 & 4
            cond:8_1 = temp5_1 == 0
            cond:9_1 = temp5_1 != 0
            cond:11_1 = temp5_1 != 0
            cond:12_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
                goto label_1400a9f3e
            
            goto label_1400a9fcd
        
    label_1400a9f36:
        char temp4_1 = temp0_198 & 4
        cond:8_1 = temp4_1 == 0
        cond:9_1 = temp4_1 != 0
        cond:11_1 = temp4_1 != 0
        cond:12_1 = temp4_1 == 0
        
        if (temp4_1 != 0)
        label_1400a9fcd:
            zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
            
            if (not(cond:8_1))
            label_1400a9fda:
                zmm3 = _mm_blend_ps(zmm3, zmm9, 4)
                
                if (cond:12_1)
                    goto label_1400a9f4a
                
                goto label_1400a9fe7
        else
        label_1400a9f3e:
            
            if (cond:9_1)
                goto label_1400a9fda
        
        bool cond:13_1
        bool cond:14_1
        bool cond:15_1
        bool cond:16_1
        
        if (not(cond:11_1))
        label_1400a9f4a:
            char temp7_1 = temp0_198 & 8
            cond:13_1 = temp7_1 != 0
            cond:14_1 = temp7_1 == 0
            cond:15_1 = temp7_1 == 0
            cond:16_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
                goto label_1400a9ff6
            
            goto label_1400a9f52
        
    label_1400a9fe7:
        zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
        char temp6_1 = temp0_198 & 8
        cond:13_1 = temp6_1 != 0
        cond:14_1 = temp6_1 == 0
        cond:15_1 = temp6_1 == 0
        cond:16_1 = temp6_1 != 0
        
        if (temp6_1 == 0)
        label_1400a9ff6:
            zmm10 = zmm4
            
            if (cond:14_1)
                goto label_1400a9f5f
            
            goto label_1400aa000
        
    label_1400a9f52:
        zmm10 = _mm_blend_ps(zmm10, zmm4, 7)
        
        if (cond:13_1)
        label_1400aa000:
            zmm9 = _mm_blend_ps(zmm9, zmm3, 7)
            
            if (not(cond:15_1))
                zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
        else
        label_1400a9f5f:
            zmm9 = zmm3
            
            if (cond:16_1)
                zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
        
        arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_196, arg16), temp0_197)
        zmm11 = zmm2
    
    arg5 = zx.q(arg5.d + 4)
    
    if (arg5.d s>= arg9)
        result = arg43
        break
    
    arg12 = zmm11
    arg13 = zmm10
    arg14 = zmm9
    int64_t rax_60 = sx.q((arg5 << 2).d * 3)
    zmm0 = *(arg8 + rax_60)
    zmm2 = *(arg8 + rax_60 + 0x10)
    zmm5 = *(arg8 + rax_60 + 0x20)
    zmm3 = _mm_shuffle_epi32(zmm0, 0xe5)
    zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
    float temp0_555[0x4] = _mm_shuffle_ps(zmm0, zmm2, 0xec)
    zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0x44), temp0_555, 0x3f)
    zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), zmm3, 3)
    zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xa4), zmm0, 0x3f)
    float temp0_563[0x4] = _mm_shuffle_ps(_mm_blend_epi16(zmm1, zmm2, 0xc), zmm5, 0xc4)
    arg_40 = zmm4
    arg_60 = temp0_563
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    float temp0_564[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = temp0_564
    arg_10 = temp0_564
    arg11 = temp0_564
    arg_30 = temp0_564
    zmm9 = *arg6
    zmm8 = (*arg6)[1]
    zmm10 = (*arg6)[2]
    float temp0_565[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_566[0x4] = _mm_mul_ps(temp0_565, temp0_563)
    float temp0_567[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    zmm6 = _mm_mul_ps(temp0_567, zmm4)
    float temp0_569[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_570[0x4] = _mm_mul_ps(temp0_569, zmm3)
    float temp0_572[0x4] = _mm_sub_ps(temp0_566, _mm_mul_ps(zmm3, temp0_567))
    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_563, temp0_569))
    float temp0_576[0x4] = _mm_sub_ps(temp0_570, _mm_mul_ps(zmm4, temp0_565))
    float temp0_577[0x4] = _mm_add_ps(temp0_572, temp0_572)
    zmm6 = _mm_add_ps(zmm6, zmm6)
    float temp0_579[0x4] = _mm_add_ps(temp0_576, temp0_576)
    float temp0_580[0x4] = _mm_mul_ps(temp0_564, temp0_577)
    float temp0_581[0x4] = _mm_mul_ps(temp0_564, zmm6)
    float temp0_582[0x4] = __addps_xmmps_memps(temp0_580, arg_40)
    float temp0_583[0x4] = __addps_xmmps_memps(temp0_581, zmm3)
    float temp0_585[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_564, temp0_579), arg_60)
    float temp0_586[0x4] = _mm_mul_ps(temp0_579, temp0_565)
    float temp0_587[0x4] = _mm_mul_ps(temp0_577, temp0_567)
    float temp0_588[0x4] = _mm_mul_ps(zmm6, temp0_569)
    float temp0_591[0x4] = _mm_add_ps(_mm_sub_ps(temp0_586, _mm_mul_ps(zmm6, temp0_567)), temp0_582)
    float temp0_594[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_587, _mm_mul_ps(temp0_579, temp0_569)), temp0_583)
    float temp0_597[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_588, _mm_mul_ps(temp0_577, temp0_565)), temp0_585)
    zmm5 = arg6[1][0]
    zmm3 = (*arg6)[5]
    float temp0_599[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_591)
    float temp0_601[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_594)
    zmm0 = (*arg6)[6]
    float temp0_603[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_597)
    arg_240 = temp0_599
    arg19 = temp0_601
    arg_250 = temp0_601
    arg20 = temp0_603
    arg21 = temp0_603
    int64_t rbx_13 = 0
    arg17 = temp0_599
    arg10 = _mm_cmpeq_epi32(arg10, arg10)
label_1400a959c:
    zmm2 = *(&arg_180 + rbx_13)
    float temp0_605[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    char temp0_607 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_605, temp0_599, 1))
    
    if (temp0_607 != 0)
        if ((temp0_607 & 1) == 0)
            if ((temp0_607 & 2) != 0)
                goto label_1400a969d
            
            goto label_1400a95cd
        
        *(&__return_addr + (rbx_13 << 2)) = zmm2[0]
        
        if ((temp0_607 & 2) != 0)
        label_1400a969d:
            *(&__return_addr:4 + (rbx_13 << 2)) = zmm2[0]
            
            if ((temp0_607 & 4) == 0)
                goto label_1400a95d5
            
            goto label_1400a96ab
        
    label_1400a95cd:
        
        if ((temp0_607 & 4) != 0)
        label_1400a96ab:
            *(&arg_8 + (rbx_13 << 2)) = zmm2[0]
            
            if ((temp0_607 & 8) != 0)
                *(&arg_c + (rbx_13 << 2)) = zmm2[0]
        else
        label_1400a95d5:
            
            if ((temp0_607 & 8) != 0)
                *(&arg_c + (rbx_13 << 2)) = zmm2[0]
    
    float temp0_608[0x4] = _mm_cmpeq_ps(temp0_605, temp0_599, 5)
    
    if (_mm_movemask_ps(temp0_608) != 0)
        zmm3 = *(&arg_170 + rbx_13)
        float temp0_610[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        char temp0_613 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_599, temp0_610, 1), temp0_608))
        
        if (temp0_613 != 0)
            if ((temp0_613 & 1) == 0)
                if ((temp0_613 & 2) != 0)
                    goto label_1400a96cb
                
                goto label_1400a9622
            
            *(&__return_addr + (rbx_13 << 2)) = zmm3[0]
            
            if ((temp0_613 & 2) != 0)
            label_1400a96cb:
                *(&__return_addr:4 + (rbx_13 << 2)) = zmm3[0]
                
                if ((temp0_613 & 4) == 0)
                    goto label_1400a962a
                
                goto label_1400a96d9
            
        label_1400a9622:
            
            if ((temp0_613 & 4) != 0)
            label_1400a96d9:
                *(&arg_8 + (rbx_13 << 2)) = zmm3[0]
                
                if ((temp0_613 & 8) != 0)
                    *(&arg_c + (rbx_13 << 2)) = zmm3[0]
            else
            label_1400a962a:
                
                if ((temp0_613 & 8) != 0)
                    *(&arg_c + (rbx_13 << 2)) = zmm3[0]
        
        char temp0_616 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_599, temp0_610, 5), temp0_608))
        
        if (temp0_616 != 0)
            zmm0 = *(&arg_240 + (rbx_13 << 2))
            
            if ((temp0_616 & 1) == 0)
                if ((temp0_616 & 2) != 0)
                    goto label_1400a96f9
                
                goto label_1400a965d
            
            *(&__return_addr + (rbx_13 << 2)) = zmm0[0]
            
            if ((temp0_616 & 2) != 0)
            label_1400a96f9:
                *(&__return_addr:4 + (rbx_13 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                
                if ((temp0_616 & 4) == 0)
                    goto label_1400a9665
                
                goto label_1400a9709
            
        label_1400a965d:
            
            if ((temp0_616 & 4) != 0)
            label_1400a9709:
                *(&arg_8 + (rbx_13 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_616 & 8) != 0)
                    *(&arg_c + (rbx_13 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1400a9665:
                
                if ((temp0_616 & 8) != 0)
                    *(&arg_c + (rbx_13 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
    
    if (rbx_13 != 8)
        *(&arg_250 + (rbx_13 << 2))
        break

int32_t* rcx_31
int64_t* rdx_30

if (arg5.d s>= result)
    rcx_31 = arg41
    rdx_30 = arg42
    zmm3 = arg18
label_1400ab962:
    zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0))
    zmm0 = zmm3 & not.o(zmm10)
    float temp0_540[0x4] = _mm_hadd_ps(zmm0, zmm0)
    float temp0_541[0x4] = _mm_hadd_ps(temp0_540, temp0_540)
    zmm1 = zmm3 & not.o(zmm9)
    float temp0_542[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_544[0x4] = _mm_insert_ps(temp0_541, _mm_hadd_ps(temp0_542, temp0_542), 0x1c)
    zmm1 = zmm3 & not.o(zmm11)
    float temp0_545[0x4] = _mm_hadd_ps(zmm1, zmm1)
    float temp0_546[0x4] = _mm_hadd_ps(temp0_545, temp0_545)
    float temp0_548[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_30), rdx_30[1].d, 0x20), 
        temp0_544[0].q | temp0_546[0].q << 0x40)
    *rdx_30 = temp0_548[0]
    *(rdx_30 + 4) = __extractps_memd_xmmps_immb(temp0_548, 1)
    rdx_30[1].d = __extractps_memd_xmmps_immb(temp0_548, 2)
    zmm3 &= not.o(arg16)
    float temp0_551[0x4] = _mm_hadd_ps(zmm3, zmm3)
    float temp0_552[0x4] = _mm_hadd_ps(temp0_551, temp0_551)
    temp0_552[0] = temp0_552[0] f+ *rcx_31
    *rcx_31 = temp0_552[0]
    return result

arg13 = zmm10
arg14 = zmm9
zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5.d), 0), data_142e11d00)
zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm1)
zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm2
int64_t rax_37 = sx.q(zmm1[0])
void* r10 = &(*arg8)[rax_37]
zmm0 = (*arg8)[rax_37]
int64_t rsi_15 = sx.q(_mm_extract_epi32(zmm1, 1))
void* rax_39 = &(*arg8)[rsi_15]
int64_t rbx_3 = sx.q(_mm_extract_epi32(zmm1, 2))
void* rdx_14 = &(*arg8)[rbx_3]
int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm1, 3))
void* rdi_5 = &(*arg8)[rbp_4]
float temp0_229[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg8)[rsi_15], 0x10), 
        (*arg8)[rbx_3], 0x20), 
    (*arg8)[rbp_4], 0x30)
zmm3 = data_142fc95e0 & zmm2
uint64_t r14_2 = zx.q(zmm3[0])
zmm8 = *(r14_2 + r10)
uint64_t rsi_16 = zx.q(_mm_extract_epi32(zmm3, 1))
uint64_t r15 = zx.q(_mm_extract_epi32(zmm3, 2))
uint64_t r13 = zx.q(_mm_extract_epi32(zmm3, 3))
arg20[0].q = rsi_16
float temp0_235[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rsi_16 + rax_39), 0x10), 
        *(r15 + rdx_14), 0x20), 
    *(r13 + rdi_5), 0x30)
zmm3 = data_142fc95f0 & zmm2
zmm6 = *(zx.q(zmm3[0]) + r10)
uint64_t rbp_5 = zx.q(_mm_extract_epi32(zmm3, 1))
uint64_t rbx_4 = zx.q(_mm_extract_epi32(zmm3, 2))
uint64_t rsi_18 = zx.q(_mm_extract_epi32(zmm3, 3))
zmm6 = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rbp_5 + rax_39), 0x10), 
        *(rbx_4 + rdx_14), 0x20), 
    *(rsi_18 + rdi_5), 0x30)
int32_t arg_1d0[0x4] = zmm6
float arg_1e0[0x4] = zx.o(0)
zmm5 = (*arg6)[3]
float temp0_242[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
__return_addr.o = temp0_242
arg_10 = temp0_242
zmm7 = *arg6
zmm1 = (*arg6)[1]
zmm4 = (*arg6)[2]
float temp0_243[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_244[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_245[0x4] = _mm_mul_ps(temp0_235, temp0_244)
float temp0_246[0x4] = _mm_mul_ps(temp0_244, zmm6)
zmm6 = _mm_mul_ps(zmm6, temp0_243)
float temp0_248[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_249[0x4] = _mm_mul_ps(temp0_243, temp0_229)
float temp0_250[0x4] = _mm_mul_ps(temp0_229, temp0_248)
float temp0_251[0x4] = _mm_mul_ps(zx.o(0), temp0_242)
zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_248, temp0_235))
float temp0_254[0x4] = _mm_sub_ps(temp0_250, temp0_246)
float temp0_255[0x4] = _mm_sub_ps(temp0_245, temp0_249)
float temp0_256[0x4] = _mm_sub_ps(temp0_251, temp0_251)
zmm6 = _mm_add_ps(zmm6, zmm6)
float temp0_258[0x4] = _mm_add_ps(temp0_254, temp0_254)
float temp0_259[0x4] = _mm_add_ps(temp0_255, temp0_255)
float temp0_260[0x4] = _mm_add_ps(temp0_256, temp0_256)
arg_40 = zmm6
float arg_50[0x4] = temp0_258
arg_60 = temp0_259
arg_70 = temp0_260
float temp0_261[0x4] = _mm_mul_ps(temp0_260, temp0_242)
float temp0_262[0x4] = _mm_mul_ps(temp0_242, zmm6)
float temp0_263[0x4] = _mm_mul_ps(temp0_242, temp0_258)
float temp0_264[0x4] = _mm_mul_ps(temp0_242, temp0_259)
float temp0_265[0x4] = __addps_xmmps_memps(temp0_262, temp0_229)
float temp0_266[0x4] = __addps_xmmps_memps(temp0_263, temp0_235)
float temp0_267[0x4] = __addps_xmmps_memps(temp0_264, arg_1d0)
arg_30 = temp0_242
float arg_2d0[0x4] = temp0_265
float arg_2e0[0x4] = temp0_266
float arg_2f0[0x4] = temp0_267
float arg_300[0x4] = __addps_xmmps_memps(temp0_261, arg_1e0)
zmm4 = *arg6
zmm5 = (*arg6)[1]
zmm7 = (*arg6)[2]
float temp0_269[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_270[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_271[0x4] = _mm_mul_ps(temp0_258, temp0_270)
float temp0_272[0x4] = _mm_mul_ps(temp0_270, temp0_259)
float temp0_273[0x4] = _mm_mul_ps(temp0_259, temp0_269)
float temp0_274[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_275[0x4] = _mm_mul_ps(temp0_269, zmm6)
zmm6 = _mm_mul_ps(zmm6, temp0_274)
float temp0_278[0x4] = _mm_sub_ps(temp0_273, _mm_mul_ps(temp0_274, temp0_258))
zmm6 = _mm_sub_ps(zmm6, temp0_272)
float temp0_280[0x4] = _mm_sub_ps(temp0_271, temp0_275)
float temp0_281[0x4] = _mm_add_ps(temp0_278, temp0_265)
zmm6 = _mm_add_ps(zmm6, temp0_266)
float temp0_283[0x4] = _mm_add_ps(temp0_280, temp0_267)
zmm0 = arg6[1][0]
zmm4 = (*arg6)[5]
float temp0_285[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_281)
float temp0_287[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
zmm1 = (*arg6)[6]
float temp0_289[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_283)
float arg_210[0x4] = temp0_285
float arg_220[0x4] = temp0_287
int64_t rsi_19 = 0
label_1400aa31c:
zmm4 = *(&arg_180 + rsi_19)
float temp0_290[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_291[0x4] = _mm_cmpeq_ps(temp0_290, temp0_285, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_291, zmm2)) != 0)
    char temp0_294 = _mm_movemask_ps(temp0_291)
    
    if ((temp0_294 & 1) == 0)
        if ((temp0_294 & 2) != 0)
            goto label_1400aa42d
        
        goto label_1400aa353
    
    *(&__return_addr + (rsi_19 << 2)) = zmm4[0]
    
    if ((temp0_294 & 2) != 0)
    label_1400aa42d:
        *(&__return_addr:4 + (rsi_19 << 2)) = zmm4[0]
        
        if ((temp0_294 & 4) == 0)
            goto label_1400aa35b
        
        goto label_1400aa43b
    
label_1400aa353:
    
    if ((temp0_294 & 4) != 0)
    label_1400aa43b:
        *(&arg_8 + (rsi_19 << 2)) = zmm4[0]
        
        if ((temp0_294 & 8) != 0)
            *(&arg_c + (rsi_19 << 2)) = zmm4[0]
    else
    label_1400aa35b:
        
        if ((temp0_294 & 8) != 0)
            *(&arg_c + (rsi_19 << 2)) = zmm4[0]

float temp0_295[0x4] = _mm_cmpeq_ps(temp0_290, temp0_285, 5)

if (_mm_movemask_ps(_mm_and_ps(zmm2, temp0_295)) != 0)
    zmm5 = *(&arg_170 + rsi_19)
    float temp0_298[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_285, temp0_298, 1), temp0_295)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm2)) != 0)
        char temp0_303 = _mm_movemask_ps(zmm6)
        
        if ((temp0_303 & 1) == 0)
            if ((temp0_303 & 2) != 0)
                goto label_1400aa45b
            
            goto label_1400aa3b4
        
        *(&__return_addr + (rsi_19 << 2)) = zmm5[0]
        
        if ((temp0_303 & 2) != 0)
        label_1400aa45b:
            *(&__return_addr:4 + (rsi_19 << 2)) = zmm5[0]
            
            if ((temp0_303 & 4) == 0)
                goto label_1400aa3bc
            
            goto label_1400aa469
        
    label_1400aa3b4:
        
        if ((temp0_303 & 4) != 0)
        label_1400aa469:
            *(&arg_8 + (rsi_19 << 2)) = zmm5[0]
            
            if ((temp0_303 & 8) != 0)
                *(&arg_c + (rsi_19 << 2)) = zmm5[0]
        else
        label_1400aa3bc:
            
            if ((temp0_303 & 8) != 0)
                *(&arg_c + (rsi_19 << 2)) = zmm5[0]
    
    zmm1 = _mm_and_ps(_mm_cmpeq_ps(temp0_285, temp0_298, 5), temp0_295)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
        zmm3 = *(&arg_210 + (rsi_19 << 2))
        char temp0_308 = _mm_movemask_ps(zmm1)
        
        if ((temp0_308 & 1) == 0)
            if ((temp0_308 & 2) != 0)
                goto label_1400aa489
            
            goto label_1400aa3f5
        
        *(&__return_addr + (rsi_19 << 2)) = zmm3[0]
        
        if ((temp0_308 & 2) != 0)
        label_1400aa489:
            *(&__return_addr:4 + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 1)
            
            if ((temp0_308 & 4) == 0)
                goto label_1400aa3fd
            
            goto label_1400aa499
        
    label_1400aa3f5:
        
        if ((temp0_308 & 4) != 0)
        label_1400aa499:
            *(&arg_8 + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 2)
            
            if ((temp0_308 & 8) != 0)
                *(&arg_c + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)
        else
        label_1400aa3fd:
            
            if ((temp0_308 & 8) != 0)
                *(&arg_c + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)

if (rsi_19 != 8)
    *(&arg_220 + (rsi_19 << 2))
    return 

arg12 = zmm11
zmm3 = __return_addr.o
zmm11 = arg_10
float temp0_312[0x4] = _mm_sub_ps(zmm3, temp0_285)
zmm7 = *arg1
zmm5 = *(arg1 + 4)
float temp0_313[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_314[0x4] = _mm_sub_ps(zmm3, temp0_313)
float temp0_315[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_316[0x4] = _mm_sub_ps(zmm11, temp0_315)
zmm6 = *arg3
zmm4 = (*arg3)[1]
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_318[0x4] = _mm_div_ps(temp0_314, zmm6)
float temp0_319[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_320[0x4] = _mm_div_ps(temp0_316, temp0_319)
zmm10 = (*arg3)[2]
zmm13 = _mm_cvttps_epi32(temp0_318)
zmm9 = _mm_cvttps_epi32(temp0_320)
float arg_110[0x4] = zmm6
float temp0_325[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm6), temp0_313)
zmm6 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm10, 0x20), data_142fc9600)
float temp0_328[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float arg_140[0x4] = zmm3
float temp0_330[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_325, temp0_328), zmm3, 1)
zmm3 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(temp0_328, temp0_328))
zmm7 = _mm_blendv_ps(zmm3, zmm13, temp0_330)
float arg_200[0x4] = zmm9
arg_100 = temp0_315
float temp0_336[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_319), temp0_315)
float temp0_337[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_338[0x4] = _mm_add_ps(temp0_336, temp0_337)
float temp0_339[0x4] = _mm_cmpeq_ps(temp0_338, zmm11, 1)
char temp0_341 = _mm_movemask_ps(_mm_and_ps(temp0_339, zmm2))
zmm9 = *(arg1 + 8)
float temp0_342[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
zmm15 = temp0_242
float temp0_343[0x4] = _mm_sub_ps(zmm15, temp0_342)
float temp0_344[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
zmm1 = _mm_cvttps_epi32(_mm_div_ps(temp0_343, temp0_344))
arg10 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_344), temp0_342)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
__return_addr.o = zmm7
float temp0_351[0x4] = _mm_cmpeq_ps(temp0_338, zmm11, 5)

if (temp0_341 != 0)
    zmm13 = arg_200

float temp0_352[0x4] = __subps_xmmps_memps(zmm11, temp0_287)
float temp0_353[0x4] = _mm_mul_ps(temp0_312, temp0_312)
arg10 = _mm_add_ps(arg10, zmm6)

if (_mm_movemask_ps(_mm_and_ps(temp0_351, zmm2)) != 0)
    zmm3 = __paddd_xmmdq_memdq(arg_200, data_142d3f800)

float temp0_358[0x4] = __subps_xmmps_memps(zmm15, temp0_289)
float temp0_359[0x4] = _mm_add_ps(temp0_353, zx.o(0))
float temp0_360[0x4] = _mm_mul_ps(temp0_352, temp0_352)
float temp0_361[0x4] = _mm_blendv_ps(zmm3, zmm13, temp0_339)
arg_10 = temp0_361
float temp0_362[0x4] = _mm_cmpeq_ps(arg10, zmm15, 5)
arg10 = _mm_cmpeq_ps(arg10, zmm15, 1)

if (_mm_movemask_ps(_mm_and_ps(arg10, zmm2)) != 0)
    zmm13 = zmm1

float temp0_366[0x4] = _mm_add_ps(temp0_359, temp0_360)
float temp0_367[0x4] = _mm_mul_ps(temp0_358, temp0_358)

if (_mm_movemask_ps(_mm_and_ps(temp0_362, zmm2)) != 0)
    zmm3 = __paddd_xmmdq_memdq(zmm1, data_142d3f800)

float temp0_371[0x4] = _mm_blendv_ps(zmm3, zmm13, arg10)
arg10 = _mm_add_ps(temp0_366, temp0_367)
float temp0_375[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), arg_110), temp0_313)
float temp0_378[0x4] =
    __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_361), temp0_319), arg_100)
float temp0_381[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_371), temp0_344), temp0_342)
float temp0_382[0x4] = _mm_add_ps(temp0_328, temp0_375)
float temp0_383[0x4] = _mm_add_ps(temp0_337, temp0_378)
zmm6 = _mm_add_ps(zmm6, temp0_381)
float temp0_385[0x4] = _mm_sub_ps(arg_140, temp0_382)
float temp0_386[0x4] = _mm_sub_ps(zmm11, temp0_383)
zmm15 = _mm_sub_ps(zmm15, zmm6)
float temp0_388[0x4] = _mm_div_ps(temp0_385, arg_110)
float temp0_389[0x4] = _mm_div_ps(temp0_386, temp0_319)
zmm15 = _mm_div_ps(zmm15, temp0_344)
arg_40 = temp0_388
int64_t rcx = 0
zmm0 = _mm_cmpeq_epi32(temp0_388, temp0_388)
label_1400aabc9:
zmm7 = _mm_cmpeq_epi32(zmm7, zmm0)

if (_mm_movemask_ps(zmm7 & zmm2) != 0)
    char temp0_394 = _mm_movemask_ps(zmm7)
    
    if ((temp0_394 & 1) == 0)
        if ((temp0_394 & 2) != 0)
            goto label_1400aacaf
        
        goto label_1400aabef
    
    *(&__return_addr + (rcx << 2)) = 0
    
    if ((temp0_394 & 2) != 0)
    label_1400aacaf:
        *(&__return_addr:4 + (rcx << 2)) = 0
        
        if ((temp0_394 & 4) == 0)
            goto label_1400aabf7
        
        goto label_1400aacbf
    
label_1400aabef:
    
    if ((temp0_394 & 4) == 0)
    label_1400aabf7:
        
        if ((temp0_394 & 8) != 0)
            goto label_1400aaccf
        
        goto label_1400aabff
    
label_1400aacbf:
    *(&arg_8 + (rcx << 2)) = 0
    
    if ((temp0_394 & 8) != 0)
    label_1400aaccf:
        *(&arg_c + (rcx << 2)) = 0
        
        if ((temp0_394 & 1) == 0)
            goto label_1400aac07
        
        goto label_1400aacdf
    
label_1400aabff:
    
    if ((temp0_394 & 1) == 0)
    label_1400aac07:
        
        if ((temp0_394 & 2) != 0)
            goto label_1400aacef
        
        goto label_1400aac0f
    
label_1400aacdf:
    arg_40[rcx] = 0
    
    if ((temp0_394 & 2) != 0)
    label_1400aacef:
        arg_40[1 + rcx] = 0
        
        if ((temp0_394 & 4) == 0)
            goto label_1400aac17
        
        goto label_1400aacff
    
label_1400aac0f:
    
    if ((temp0_394 & 4) != 0)
    label_1400aacff:
        arg_40[2 + rcx] = 0
        
        if ((temp0_394 & 8) != 0)
            arg_40[3 + rcx] = 0
    else
    label_1400aac17:
        
        if ((temp0_394 & 8) != 0)
            arg_40[3 + rcx] = 0

int32_t rdx_15 = *(arg4 + rcx)
zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_15 - 1), 0), *(&__return_addr + (rcx << 2)))

if (_mm_movemask_ps(zmm1 & zmm2) != 0)
    char temp0_398 = _mm_movemask_ps(zmm1)
    
    if ((temp0_398 & 1) == 0)
        if ((temp0_398 & 2) != 0)
            goto label_1400aad2b
        
        goto label_1400aac5d
    
    *(&__return_addr + (rcx << 2)) = rdx_15 - 2
    
    if ((temp0_398 & 2) != 0)
    label_1400aad2b:
        *(&__return_addr:4 + (rcx << 2)) = rdx_15 - 2
        
        if ((temp0_398 & 4) == 0)
            goto label_1400aac65
        
        goto label_1400aad37
    
label_1400aac5d:
    
    if ((temp0_398 & 4) == 0)
    label_1400aac65:
        
        if ((temp0_398 & 8) != 0)
            goto label_1400aad43
        
        goto label_1400aac6d
    
label_1400aad37:
    *(&arg_8 + (rcx << 2)) = rdx_15 - 2
    
    if ((temp0_398 & 8) != 0)
    label_1400aad43:
        *(&arg_c + (rcx << 2)) = rdx_15 - 2
        
        if ((temp0_398 & 1) == 0)
            goto label_1400aac75
        
        goto label_1400aad4f
    
label_1400aac6d:
    
    if ((temp0_398 & 1) == 0)
    label_1400aac75:
        
        if ((temp0_398 & 2) != 0)
            goto label_1400aad5f
        
        goto label_1400aac7d
    
label_1400aad4f:
    arg_40[rcx] = 0x3f800000
    
    if ((temp0_398 & 2) != 0)
    label_1400aad5f:
        arg_40[1 + rcx] = 0x3f800000
        
        if ((temp0_398 & 4) == 0)
            goto label_1400aac85
        
        goto label_1400aad6f
    
label_1400aac7d:
    
    if ((temp0_398 & 4) != 0)
    label_1400aad6f:
        arg_40[2 + rcx] = 0x3f800000
        
        if ((temp0_398 & 8) != 0)
            arg_40[3 + rcx] = 0x3f800000
    else
    label_1400aac85:
        
        if ((temp0_398 & 8) != 0)
            arg_40[3 + rcx] = 0x3f800000

if (rcx == 8)
    zmm4 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm7 = __return_addr.o
    zmm6 = arg_10
    zmm3 = _mm_mullo_epi32(zmm4, zmm7)
    zmm10 = _mm_add_epi32(zmm3, zmm6)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm13 = _mm_mullo_epi32(zmm10, zmm0)
    zmm1 = _mm_add_epi32(zmm13, temp0_371)
    float (* rax_56)[0x4] = *(arg7 + 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 2) & zmm2
    int64_t rdx_17 = sx.q(zmm1[0])
    zmm5 = *(rax_56 + rdx_17)
    int64_t rdi_6 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rbx_5 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rbp_7 = sx.q(_mm_extract_epi32(zmm1, 3))
    float temp0_411[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rax_56 + rdi_6), 0x10), 
            *(rax_56 + rbx_5), 0x20), 
        *(rax_56 + rbp_7), 0x30)
    zmm12 = _mm_cmpeq_epi32(temp0_383, temp0_383)
    zmm7 = _mm_mullo_epi32(_mm_sub_epi32(zmm7, zmm12), zmm4)
    zmm1 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm7, zmm6), zmm0), temp0_371), 2)
    zmm10 = _mm_mullo_epi32(_mm_add_epi32(zmm10, zmm4), zmm0)
    zmm1 &= zmm2
    zmm4 = *(rax_56 + sx.q(zmm1[0]))
    int32_t temp0_421 = _mm_extract_epi32(zmm1, 1)
    int64_t rbx_7 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_423 = _mm_extract_epi32(zmm1, 3)
    float temp0_427[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm4, *(rax_56 + sx.q(temp0_421)), 0x10), 
                *(rax_56 + rbx_7), 0x20), 
            *(rax_56 + sx.q(temp0_423)), 0x30), 
        temp0_411)
    zmm11 = arg_40
    float temp0_429[0x4] = _mm_add_ps(_mm_mul_ps(temp0_427, zmm11), temp0_411)
    int32_t temp0_430[0x4] = _mm_sub_epi32(zmm6, zmm12)
    zmm3 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm3, temp0_430), zmm0), temp0_371), 2) & zmm2
    zmm5 = *(rax_56 + sx.q(zmm3[0]))
    int64_t rcx_7 = sx.q(_mm_extract_epi32(zmm3, 1))
    int32_t temp0_436 = _mm_extract_epi32(zmm3, 2)
    int64_t rbx_9 = sx.q(_mm_extract_epi32(zmm3, 3))
    float temp0_440[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm5, *(rax_56 + rcx_7), 0x10), 
            *(rax_56 + sx.q(temp0_436)), 0x20), 
        *(rax_56 + rbx_9), 0x30)
    zmm6 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_430, zmm7), zmm0), temp0_371), 2) & zmm2
    zmm7 = *(rax_56 + sx.q(zmm6[0]))
    int32_t temp0_445 = _mm_extract_epi32(zmm6, 1)
    int64_t rbp_15 = sx.q(_mm_extract_epi32(zmm6, 2))
    int32_t temp0_447 = _mm_extract_epi32(zmm6, 3)
    float temp0_452[0x4] = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rax_56 + sx.q(temp0_445)), 0x10), 
                    *(rax_56 + rbp_15), 0x20), 
                *(rax_56 + sx.q(temp0_447)), 0x30), 
            temp0_440), 
        zmm11)
    int32_t* rbx_11 = arg20[0].q
    float temp0_455[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r14_2 + rax_56 + rdx_17), *(rbx_11 + rax_56 + rdi_6), 
                0x10), 
            *(r15 + rax_56 + rbx_5), 0x20), 
        *(r13 + rax_56 + rbp_7), 0x30)
    zmm0 = _mm_add_epi32(zmm0, temp0_371)
    zmm13 = _mm_add_epi32(zmm13, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm10)
    zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, temp0_371), 2) & zmm2
    zmm6 = *(r14_2 + sx.q(zmm10[0]) + rax_56)
    void* rcx_18 = sx.q(_mm_extract_epi32(zmm10, 1)) + rax_56
    void* rdx_23 = sx.q(_mm_extract_epi32(zmm10, 2)) + rax_56
    void* rbp_18 = sx.q(_mm_extract_epi32(zmm10, 3)) + rax_56
    zmm6 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rbx_11 + rcx_18), 0x10), 
            *(r15 + rdx_23), 0x20), 
        *(r13 + rbp_18), 0x30)
    float temp0_467[0x4] = _mm_add_ps(temp0_452, temp0_440)
    zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, temp0_455), zmm11), temp0_455)
    zmm13 = _mm_slli_epi32(zmm13, 2) & zmm2
    zmm3 = *(r14_2 + sx.q(zmm13[0]) + rax_56)
    void* rcx_24 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_56
    void* rdx_26 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_56
    void* rbp_21 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_56
    float temp0_477[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rbx_11 + rcx_24), 0x10), 
            *(r15 + rdx_26), 0x20), 
        *(r13 + rbp_21), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & zmm2
    zmm1 = *(r14_2 + sx.q(zmm0[0]) + rax_56)
    void* rcx_30 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_56
    void* rdx_29 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_56
    void* rbp_24 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_56
    float temp0_487[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_11 + rcx_30), 0x10), 
                        *(r15 + rdx_29), 0x20), 
                    *(r13 + rbp_24), 0x30), 
                temp0_477), 
            zmm11), 
        temp0_477)
    float temp0_490[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_467, temp0_429), temp0_389), temp0_429)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_487, zmm6), temp0_389), zmm6), 
                temp0_490), 
            zmm15), 
        temp0_490)
    float temp0_497[0x4] = _mm_cmpeq_ps(arg10, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg10, 7), temp0_497), zmm2)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_502[0x4] = _mm_rsqrt_ps(arg10)
        float temp0_504[0x4] = _mm_mul_ps(_mm_mul_ps(arg10, temp0_502), temp0_502)
        float temp0_507[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_504), temp0_502), data_142d3f640)
        float temp0_508[0x4] = _mm_rcp_ps(temp0_507)
        float temp0_509[0x4] = _mm_mul_ps(temp0_507, temp0_508)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_509), temp0_508), zmm1), zmm0)
    
    rcx_31 = arg41
    rdx_30 = arg42
    zmm3 = arg18
    zmm9 = arg14
    zmm10 = arg13
    zmm11 = arg12
    zmm0 = arg40
    float temp0_515[0x4] = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_515, data_142fc95d0, 1), zmm2)
    result = _mm_movemask_ps(zmm0)
    
    if (result.b == 0)
        goto label_1400ab962
    
    float temp0_519[0x4] = _mm_mul_ps(arg_210, temp0_515)
    zmm6 = _mm_mul_ps(arg_220, temp0_515)
    float temp0_521[0x4] = _mm_mul_ps(temp0_289, temp0_515)
    result = zx.d(result.b)
    zmm4 = zmm10
    char temp8_1 = result.b & 1
    
    if (temp8_1 == 0)
        zmm8 = zmm9
        
        if (temp8_1 != 0)
            goto label_1400ab8a8
        
        goto label_1400ab67d
    
    zmm4 = zmm10
    zmm4[0] = zmm4[0] + temp0_519[0]
    zmm8 = zmm9
    
    if (temp8_1 != 0)
    label_1400ab8a8:
        zmm8 = zmm9
        zmm8[0] = zmm8[0] f+ zmm6[0]
        zmm2 = zmm11
        
        if (temp8_1 == 0)
            goto label_1400ab687
        
        goto label_1400ab8bb
    
label_1400ab67d:
    zmm2 = zmm11
    bool cond:21_1
    bool cond:22_1
    bool cond:23_1
    bool cond:24_1
    
    if (temp8_1 == 0)
    label_1400ab687:
        zmm10 = _mm_add_ps(zmm10, temp0_519)
        char temp10_1 = result.b & 2
        cond:21_1 = temp10_1 != 0
        cond:22_1 = temp10_1 == 0
        cond:23_1 = temp10_1 == 0
        cond:24_1 = temp10_1 != 0
        
        if (temp10_1 != 0)
            goto label_1400ab8cf
        
        goto label_1400ab693
    
label_1400ab8bb:
    zmm2 = zmm11
    zmm2[0] = zmm2[0] + temp0_521[0]
    zmm10 = _mm_add_ps(zmm10, temp0_519)
    char temp9_1 = result.b & 2
    cond:21_1 = temp9_1 != 0
    cond:22_1 = temp9_1 == 0
    cond:23_1 = temp9_1 == 0
    cond:24_1 = temp9_1 != 0
    
    if (temp9_1 != 0)
    label_1400ab8cf:
        zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
        zmm9 = _mm_add_ps(zmm9, zmm6)
        
        if (cond:22_1)
            goto label_1400ab69d
        
        goto label_1400ab8e0
    
label_1400ab693:
    zmm9 = _mm_add_ps(zmm9, zmm6)
    
    if (not(cond:21_1))
    label_1400ab69d:
        zmm11 = _mm_add_ps(zmm11, temp0_521)
        
        if (cond:24_1)
            goto label_1400ab8f1
        
        goto label_1400ab6a7
    
label_1400ab8e0:
    zmm8 = _mm_blend_ps(zmm8, zmm9, 2)
    zmm11 = _mm_add_ps(zmm11, temp0_521)
    bool cond:25_1
    bool cond:26_1
    bool cond:27_1
    bool cond:28_1
    
    if (not(cond:23_1))
    label_1400ab8f1:
        zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
        char temp12_1 = result.b & 4
        cond:25_1 = temp12_1 == 0
        cond:26_1 = temp12_1 != 0
        cond:27_1 = temp12_1 != 0
        cond:28_1 = temp12_1 == 0
        
        if (temp12_1 == 0)
            goto label_1400ab6af
        
        goto label_1400ab900
    
label_1400ab6a7:
    char temp11_1 = result.b & 4
    cond:25_1 = temp11_1 == 0
    cond:26_1 = temp11_1 != 0
    cond:27_1 = temp11_1 != 0
    cond:28_1 = temp11_1 == 0
    
    if (temp11_1 != 0)
    label_1400ab900:
        zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
        
        if (not(cond:25_1))
        label_1400ab90d:
            zmm8 = _mm_blend_ps(zmm8, zmm9, 4)
            
            if (cond:28_1)
                goto label_1400ab6bb
            
            goto label_1400ab91a
    else
    label_1400ab6af:
        
        if (cond:26_1)
            goto label_1400ab90d
    
    bool cond:29_1
    bool cond:30_1
    bool cond:31_1
    bool cond:32_1
    
    if (not(cond:27_1))
    label_1400ab6bb:
        char temp14_1 = result.b & 8
        cond:29_1 = temp14_1 != 0
        cond:30_1 = temp14_1 == 0
        cond:31_1 = temp14_1 == 0
        cond:32_1 = temp14_1 != 0
        
        if (temp14_1 == 0)
            goto label_1400ab929
        
        goto label_1400ab6c3
    
label_1400ab91a:
    zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
    char temp13_1 = result.b & 8
    cond:29_1 = temp13_1 != 0
    cond:30_1 = temp13_1 == 0
    cond:31_1 = temp13_1 == 0
    cond:32_1 = temp13_1 != 0
    
    if (temp13_1 == 0)
    label_1400ab929:
        zmm10 = zmm4
        
        if (cond:30_1)
            goto label_1400ab6d0
        
        goto label_1400ab933
    
label_1400ab6c3:
    zmm10 = _mm_blend_ps(zmm10, zmm4, 7)
    
    if (cond:29_1)
    label_1400ab933:
        zmm9 = _mm_blend_ps(zmm9, zmm8, 7)
        
        if (not(cond:31_1))
            zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
    else
    label_1400ab6d0:
        zmm9 = zmm8
        
        if (cond:32_1)
            zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
    
    arg16 = _mm_blendv_ps(arg16, _mm_add_ps(temp0_515, arg16), zmm0)
    zmm11 = zmm2
    goto label_1400ab962

*(&arg_10 + (rcx << 2))
