// 函数: sub_1400a9b4e
// 地址: 0x1400a9b4e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
void arg_c
int32_t arg_10[0x4]
int32_t arg_30[0x4]
float arg_40[0x4]
int32_t arg_70[0x4]
uint32_t arg_f0[0x4]
int32_t arg_100[0x4]
uint32_t arg_110[0x4]
int32_t arg_140[0x4]
int32_t arg_150[0x4]
uint128_t arg_160
void arg_170
void arg_180
uint128_t zmm0
int32_t zmm1[0x4]
int32_t zmm3[0x4]
float zmm4[0x4]
uint32_t zmm6[0x4]
uint32_t zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
uint32_t zmm13[0x4]

while (true)
    arg12 = _mm_add_ps(arg12, arg10)
    uint32_t temp0_2[0x4] = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm1 = __return_addr.o
    zmm4 = arg_10
    zmm6 = _mm_mullo_epi32(temp0_2, zmm1)
    zmm13 = _mm_add_epi32(zmm6, zmm4)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm8 = _mm_mullo_epi32(zmm13, zmm0)
    arg10 = _mm_add_epi32(zmm8, arg13)
    float (* rbx_1)[0x4] = *(arg7 + 0x10)
    arg10 = _mm_slli_epi32(arg10, 2)
    int64_t rsi_1 = sx.q(arg10[0])
    int64_t rdi_1 = sx.q(_mm_extract_epi32(arg10, 1))
    int64_t r14_1 = sx.q(_mm_extract_epi32(arg10, 2))
    int64_t rbp_3 = sx.q(_mm_extract_epi32(arg10, 3))
    float temp0_14[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(rbx_1 + rsi_1), *(rbx_1 + rdi_1), 0x10), *(rbx_1 + r14_1), 
            0x20), 
        *(rbx_1 + rbp_3), 0x30)
    zmm12 = *(rbx_1 + rsi_1 + 4)
    int32_t temp0_16[0x4] = _mm_mullo_epi32(_mm_sub_epi32(zmm1, arg11), temp0_2)
    zmm3 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_16, zmm4), zmm0), arg13), 2)
    zmm13 = _mm_mullo_epi32(_mm_add_epi32(zmm13, temp0_2), zmm0)
    zmm7 = *(rbx_1 + sx.q(zmm3[0]))
    int32_t temp0_23 = _mm_extract_epi32(zmm3, 1)
    int64_t rdx_1 = sx.q(_mm_extract_epi32(zmm3, 2))
    int32_t temp0_25 = _mm_extract_epi32(zmm3, 3)
    zmm7 = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm7, *(rbx_1 + sx.q(temp0_23)), 0x10), 
                *(rbx_1 + rdx_1), 0x20), 
            *(rbx_1 + sx.q(temp0_25)), 0x30), 
        temp0_14)
    zmm9 = arg_40
    zmm4 = _mm_sub_epi32(zmm4, arg11)
    uint32_t temp0_34[0x4] =
        _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm4), zmm0), arg13), 2)
    int64_t rax_6 = sx.q(temp0_34[0])
    int32_t temp0_35 = _mm_extract_epi32(temp0_34, 1)
    int32_t temp0_36 = _mm_extract_epi32(temp0_34, 2)
    arg11 = *(rbx_1 + rax_6)
    int32_t temp0_37 = _mm_extract_epi32(temp0_34, 3)
    zmm7 = _mm_mul_ps(zmm7, zmm9)
    arg11 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(arg11, *(rbx_1 + sx.q(temp0_35)), 0x10), 
            *(rbx_1 + sx.q(temp0_36)), 0x20), 
        *(rbx_1 + sx.q(temp0_37)), 0x30)
    zmm4 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm4, temp0_16), zmm0), arg13), 2)
    zmm3 = *(rbx_1 + sx.q(zmm4[0]))
    int64_t rax_12 = sx.q(_mm_extract_epi32(zmm4, 1))
    int32_t temp0_47 = _mm_extract_epi32(zmm4, 2)
    int64_t rsi_9 = sx.q(_mm_extract_epi32(zmm4, 3))
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rbx_1 + rax_12), 0x10), 
            *(rbx_1 + sx.q(temp0_47)), 0x20), 
        *(rbx_1 + rsi_9), 0x30)
    zmm7 = _mm_add_ps(zmm7, temp0_14)
    zmm3 = _mm_sub_ps(zmm3, arg11)
    float temp0_56[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rbx_1 + rdi_1 + 4), 0x10), 
            *(rbx_1 + r14_1 + 4), 0x20), 
        *(rbx_1 + rbp_3 + 4), 0x30)
    zmm3 = _mm_mul_ps(zmm3, zmm9)
    zmm0 = _mm_add_epi32(zmm0, arg13)
    zmm8 = _mm_add_epi32(zmm8, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm13)
    uint32_t temp0_62[0x4] = _mm_slli_epi32(_mm_add_epi32(zmm13, arg13), 2)
    arg10 = *(rbx_1 + sx.q(temp0_62[0]) + 4)
    int64_t rax_16 = sx.q(_mm_extract_epi32(temp0_62, 1))
    int32_t temp0_64 = _mm_extract_epi32(temp0_62, 2)
    int64_t rsi_11 = sx.q(_mm_extract_epi32(temp0_62, 3))
    float temp0_68[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg10, *(rbx_1 + rax_16 + 4), 0x10), 
            *(rbx_1 + sx.q(temp0_64) + 4), 0x20), 
        *(rbx_1 + rsi_11 + 4), 0x30)
    zmm3 = _mm_add_ps(zmm3, arg11)
    float temp0_72[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_68, temp0_56), zmm9), temp0_56)
    zmm8 = _mm_slli_epi32(zmm8, 2)
    zmm4 = *(rbx_1 + sx.q(zmm8[0]) + 4)
    int32_t temp0_74 = _mm_extract_epi32(zmm8, 1)
    int64_t rdx_9 = sx.q(_mm_extract_epi32(zmm8, 2))
    int32_t temp0_76 = _mm_extract_epi32(zmm8, 3)
    float temp0_79[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(zmm4, *(rbx_1 + sx.q(temp0_74) + 4), 0x10), 
            *(rbx_1 + rdx_9 + 4), 0x20), 
        *(rbx_1 + sx.q(temp0_76) + 4), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2)
    int32_t temp0_81 = _mm_extract_epi32(zmm0, 1)
    zmm1 = *(rbx_1 + sx.q(zmm0.d) + 4)
    int64_t rdx_12 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_14 = sx.q(_mm_extract_epi32(zmm0, 3))
    zmm1 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_1 + sx.q(temp0_81) + 4), 0x10), 
                        *(rbx_1 + rdx_12 + 4), 0x20), 
                    *(rbx_1 + rsi_14 + 4), 0x30), 
                temp0_79), 
            zmm9), 
        temp0_79)
    zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, zmm7), arg14), zmm7)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, temp0_72), arg14), temp0_72), zmm3), 
            arg15), 
        zmm3)
    float temp0_99[0x4] = _mm_cmpeq_ps(arg12, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_cmpeq_ps(arg12, zx.o(0), 7), temp0_99)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_103[0x4] = _mm_rsqrt_ps(arg12)
        arg12 = _mm_mul_ps(_mm_mul_ps(arg12, temp0_103), temp0_103)
        zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, arg12), temp0_103), 
            data_142d3f640)
        float temp0_109[0x4] = _mm_rcp_ps(zmm3)
        zmm3 = _mm_mul_ps(zmm3, temp0_109)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_109), zmm1), zmm0)
    
    zmm9 = arg18
    zmm10 = arg17
    zmm11 = arg16
    zmm1 = __subps_xmmps_memps(zmm1, arg19)
    zmm0 = __cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1)
    char temp0_117 = _mm_movemask_ps(zmm0)
    uint32_t arg_240[0x4]
    uint32_t arg_250[0x4]
    
    if (temp0_117 != 0)
        zmm7 = _mm_mul_ps(arg_240, zmm1)
        zmm6 = _mm_mul_ps(arg_250, zmm1)
        arg11 = _mm_mul_ps(arg22, zmm1)
        zmm4 = zmm10
        char temp1_1 = temp0_117 & 1
        
        if (temp1_1 == 0)
            zmm3 = zmm9
            
            if (temp1_1 != 0)
                goto label_1400a9f7e
            
            goto label_1400a9f14
        
        zmm4 = zmm10
        zmm4[0] = zmm4[0] f+ zmm7[0]
        zmm3 = zmm9
        
        if (temp1_1 != 0)
        label_1400a9f7e:
            zmm3 = zmm9
            zmm3[0] = zmm3[0] f+ zmm6[0]
            arg10 = zmm11
            
            if (temp1_1 == 0)
                goto label_1400a9f1a
            
            goto label_1400a9f8c
        
    label_1400a9f14:
        arg10 = zmm11
        bool cond:4_1
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        
        if (temp1_1 == 0)
        label_1400a9f1a:
            zmm10 = _mm_add_ps(zmm10, zmm7)
            char temp3_1 = temp0_117 & 2
            cond:4_1 = temp3_1 != 0
            cond:5_1 = temp3_1 == 0
            cond:6_1 = temp3_1 == 0
            cond:7_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
                goto label_1400a9f9c
            
            goto label_1400a9f22
        
    label_1400a9f8c:
        arg10 = zmm11
        arg10[0] = arg10[0] f+ arg11[0]
        zmm10 = _mm_add_ps(zmm10, zmm7)
        char temp2_1 = temp0_117 & 2
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
            zmm11 = _mm_add_ps(zmm11, arg11)
            
            if (cond:7_1)
                goto label_1400a9fbe
            
            goto label_1400a9f36
        
    label_1400a9fad:
        zmm3 = _mm_blend_ps(zmm3, zmm9, 2)
        zmm11 = _mm_add_ps(zmm11, arg11)
        bool cond:8_1
        bool cond:9_1
        bool cond:11_1
        bool cond:12_1
        
        if (not(cond:6_1))
        label_1400a9fbe:
            arg10 = _mm_blend_ps(arg10, zmm11, 2)
            char temp5_1 = temp0_117 & 4
            cond:8_1 = temp5_1 == 0
            cond:9_1 = temp5_1 != 0
            cond:11_1 = temp5_1 != 0
            cond:12_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
                goto label_1400a9f3e
            
            goto label_1400a9fcd
        
    label_1400a9f36:
        char temp4_1 = temp0_117 & 4
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
            char temp7_1 = temp0_117 & 8
            cond:13_1 = temp7_1 != 0
            cond:14_1 = temp7_1 == 0
            cond:15_1 = temp7_1 == 0
            cond:16_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
                goto label_1400a9ff6
            
            goto label_1400a9f52
        
    label_1400a9fe7:
        arg10 = _mm_blend_ps(arg10, zmm11, 4)
        char temp6_1 = temp0_117 & 8
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
                arg10 = _mm_blend_ps(arg10, zmm11, 8)
        else
        label_1400a9f5f:
            zmm9 = zmm3
            
            if (cond:16_1)
                arg10 = _mm_blend_ps(arg10, zmm11, 8)
        
        arg20 = _mm_blendv_ps(arg20, _mm_add_ps(zmm1, arg20), zmm0)
        zmm11 = arg10
    
    arg5 = zx.q(arg5.d + 4)
    
    if (arg5.d s>= arg9)
        break
    
    arg16 = zmm11
    arg17 = zmm10
    arg18 = zmm9
    int64_t rax_52 = sx.q((arg5 << 2).d * 3)
    zmm0 = *(arg8 + rax_52)
    arg10 = *(arg8 + rax_52 + 0x10)
    arg11 = *(arg8 + rax_52 + 0x20)
    int32_t temp0_472[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
    zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
    zmm0 = _mm_shuffle_ps(zmm0, arg10, 0xec)
    zmm4 = _mm_blend_epi16(_mm_shuffle_epi32(arg11, 0x44), zmm0, 0x3f)
    zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(arg10, 0xf0), temp0_472, 3)
    int32_t temp0_480[0x4] = _mm_blend_epi16(_mm_shuffle_epi32(arg11, 0xa4), zmm0, 0x3f)
    zmm1 = _mm_shuffle_ps(_mm_blend_epi16(zmm1, arg10, 0xc), arg11, 0xc4)
    arg_40 = zmm4
    arg14 = temp0_480
    arg15 = zmm1
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = zmm0
    arg_10 = zmm0
    arg13 = zmm0
    arg_30 = zmm0
    zmm9 = *arg6
    zmm8 = (*arg6)[1]
    zmm10 = (*arg6)[2]
    float temp0_484[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    zmm7 = _mm_mul_ps(temp0_484, zmm1)
    float temp0_486[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    zmm6 = _mm_mul_ps(temp0_486, zmm4)
    float temp0_488[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    arg11 = _mm_mul_ps(temp0_488, temp0_480)
    zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(temp0_480, temp0_486))
    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm1, temp0_488))
    arg11 = _mm_sub_ps(arg11, _mm_mul_ps(zmm4, temp0_484))
    zmm7 = _mm_add_ps(zmm7, zmm7)
    zmm6 = _mm_add_ps(zmm6, zmm6)
    arg11 = _mm_add_ps(arg11, arg11)
    zmm3 = _mm_mul_ps(zmm0, zmm7)
    float temp0_500[0x4] = _mm_mul_ps(zmm0, zmm6)
    zmm3 = __addps_xmmps_memps(zmm3, arg_40)
    float temp0_502[0x4] = __addps_xmmps_memps(temp0_500, arg14)
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, arg11), arg15)
    float temp0_505[0x4] = _mm_mul_ps(arg11, temp0_484)
    float temp0_506[0x4] = _mm_mul_ps(zmm7, temp0_486)
    zmm1 = _mm_mul_ps(zmm6, temp0_488)
    float temp0_510[0x4] = _mm_add_ps(_mm_sub_ps(temp0_505, _mm_mul_ps(zmm6, temp0_486)), zmm3)
    float temp0_513[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_506, _mm_mul_ps(arg11, temp0_488)), temp0_502)
    zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm7, temp0_484)), zmm0)
    arg11 = arg6[1][0]
    zmm3 = (*arg6)[5]
    arg11 = _mm_add_ps(_mm_shuffle_ps(arg11, arg11, 0), temp0_510)
    zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_513)
    zmm0 = (*arg6)[6]
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
    arg_240 = arg11
    arg_150 = zmm3
    arg_250 = zmm3
    arg_160 = zmm0
    arg22 = zmm0
    int64_t rbx_12 = 0
    float arg_d0[0x4] = arg11
    zmm0 = arg11
    arg12 = _mm_cmpeq_epi32(arg12, arg12)
    
    while (true)
        arg10 = *(&arg_180 + rbx_12)
        zmm1 = _mm_shuffle_ps(arg10, arg10, 0)
        char temp0_526 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
        
        if (temp0_526 != 0)
            if ((temp0_526 & 1) == 0)
                if ((temp0_526 & 2) != 0)
                    goto label_1400a969d
                
                goto label_1400a95cd
            
            *(&__return_addr + (rbx_12 << 2)) = arg10[0]
            
            if ((temp0_526 & 2) != 0)
            label_1400a969d:
                *(&__return_addr:4 + (rbx_12 << 2)) = arg10[0]
                
                if ((temp0_526 & 4) == 0)
                    goto label_1400a95d5
                
                goto label_1400a96ab
            
        label_1400a95cd:
            
            if ((temp0_526 & 4) != 0)
            label_1400a96ab:
                *(&arg_8 + (rbx_12 << 2)) = arg10[0]
                
                if ((temp0_526 & 8) != 0)
                    *(&arg_c + (rbx_12 << 2)) = arg10[0]
            else
            label_1400a95d5:
                
                if ((temp0_526 & 8) != 0)
                    *(&arg_c + (rbx_12 << 2)) = arg10[0]
        
        zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
        
        if (_mm_movemask_ps(zmm1) != 0)
            zmm3 = *(&arg_170 + rbx_12)
            float temp0_529[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            char temp0_532 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_529, 1), zmm1))
            
            if (temp0_532 != 0)
                if ((temp0_532 & 1) == 0)
                    if ((temp0_532 & 2) != 0)
                        goto label_1400a96cb
                    
                    goto label_1400a9622
                
                *(&__return_addr + (rbx_12 << 2)) = zmm3[0]
                
                if ((temp0_532 & 2) != 0)
                label_1400a96cb:
                    *(&__return_addr:4 + (rbx_12 << 2)) = zmm3[0]
                    
                    if ((temp0_532 & 4) == 0)
                        goto label_1400a962a
                    
                    goto label_1400a96d9
                
            label_1400a9622:
                
                if ((temp0_532 & 4) != 0)
                label_1400a96d9:
                    *(&arg_8 + (rbx_12 << 2)) = zmm3[0]
                    
                    if ((temp0_532 & 8) != 0)
                        *(&arg_c + (rbx_12 << 2)) = zmm3[0]
                else
                label_1400a962a:
                    
                    if ((temp0_532 & 8) != 0)
                        *(&arg_c + (rbx_12 << 2)) = zmm3[0]
            
            char temp0_535 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_529, 5), zmm1))
            
            if (temp0_535 != 0)
                zmm0 = *(&arg_240 + (rbx_12 << 2))
                
                if ((temp0_535 & 1) == 0)
                    if ((temp0_535 & 2) != 0)
                        goto label_1400a96f9
                    
                    goto label_1400a965d
                
                *(&__return_addr + (rbx_12 << 2)) = zmm0.d
                
                if ((temp0_535 & 2) != 0)
                label_1400a96f9:
                    *(&__return_addr:4 + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 1)
                    
                    if ((temp0_535 & 4) == 0)
                        goto label_1400a9665
                    
                    goto label_1400a9709
                
            label_1400a965d:
                
                if ((temp0_535 & 4) != 0)
                label_1400a9709:
                    *(&arg_8 + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 2)
                    
                    if ((temp0_535 & 8) != 0)
                        *(&arg_c + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
                else
                label_1400a9665:
                    
                    if ((temp0_535 & 8) != 0)
                        *(&arg_c + (rbx_12 << 2)) = __extractps_memd_xmmps_immb(zmm0, 3)
        
        if (rbx_12 == 8)
            break
        
        zmm0 = *(&arg_250 + (rbx_12 << 2))
        rbx_12 += 4
    
    zmm9 = __return_addr.o
    zmm10 = arg_10
    zmm1 = arg13
    zmm3 = *arg1
    zmm12 = (*arg1)[1]
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm0 = _mm_sub_ps(zmm9, zmm3)
    float temp0_541[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
    zmm7 = _mm_sub_ps(zmm10, temp0_541)
    zmm6 = (*arg1)[2]
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
    arg_140 = zmm1
    zmm1 = _mm_sub_ps(zmm1, zmm6)
    arg10 = *arg3
    float temp0_545[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
    zmm0 = _mm_div_ps(zmm0, temp0_545)
    zmm13 = arg3[1].d
    int32_t temp0_547[0x4] = _mm_cvttps_epi32(zmm0)
    arg_110 = zmm3
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_547), temp0_545), zmm3)
    float temp0_552[0x4] =
        __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm13, 0x20), data_142fc9600)
    float temp0_553[0x4] = _mm_shuffle_ps(temp0_552, temp0_552, 0)
    arg_f0 = temp0_553
    zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, temp0_553), zmm9, 1)
    zmm4 = _mm_add_epi32(temp0_547, arg12)
    arg10 = temp0_547
    zmm3 = _mm_blendv_ps(zmm4, temp0_547, zmm0)
    zmm8 = *(arg3 + 4)
    float temp0_558[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    zmm7 = _mm_div_ps(zmm7, temp0_558)
    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
    zmm1 = _mm_div_ps(zmm1, zmm13)
    zmm7 = _mm_cvttps_epi32(zmm7)
    int32_t temp0_563[0x4] = _mm_cvttps_epi32(zmm1)
    arg11 = _mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_558)
    float temp0_567[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(temp0_563), zmm13)
    arg11 = _mm_add_ps(arg11, temp0_541)
    arg_100 = zmm6
    float temp0_569[0x4] = _mm_add_ps(temp0_567, zmm6)
    float temp0_570[0x4] = _mm_shuffle_ps(temp0_552, temp0_552, 0x55)
    arg11 = _mm_add_ps(arg11, temp0_570)
    float temp0_572[0x4] = _mm_shuffle_ps(temp0_552, temp0_552, 0xaa)
    __return_addr.o = zmm3
    zmm0 = _mm_cmpeq_ps(arg11, zmm10, 1)
    
    if (_mm_movemask_ps(zmm0) != 0)
        arg10 = zmm7
    
    float temp0_575[0x4] = _mm_add_ps(temp0_569, temp0_572)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(arg11, zmm10, 5)) != 0)
        zmm4 = _mm_add_epi32(zmm7, arg12)
    
    arg11 = zmm9
    float temp0_579[0x4] = __subps_xmmps_memps(zmm9, arg_d0)
    float temp0_580[0x4] = __subps_xmmps_memps(zmm10, arg_150)
    zmm6 = arg10
    zmm7 = _mm_blendv_ps(zmm4, arg10, zmm0)
    arg_10 = zmm7
    zmm9 = arg_140
    zmm0 = _mm_cmpeq_ps(temp0_575, zmm9, 1)
    
    if (_mm_movemask_ps(zmm0) != 0)
        zmm6 = temp0_563
    
    float temp0_584[0x4] = __subps_xmmps_memps(zmm9, arg_160)
    float temp0_585[0x4] = _mm_mul_ps(temp0_579, temp0_579)
    float temp0_586[0x4] = _mm_mul_ps(temp0_580, temp0_580)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_575, zmm9, 5)) != 0)
        zmm4 = __paddd_xmmdq_memdq(temp0_563, data_142d3f800)
    
    float temp0_590[0x4] = _mm_blendv_ps(zmm4, zmm6, zmm0)
    arg12 = _mm_add_ps(__addps_xmmps_memps(temp0_585, data_142d8f750), temp0_586)
    zmm6 = temp0_545
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm6), arg_110)
    zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), temp0_558), temp0_541)
    arg13 = temp0_590
    float temp0_601[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_590), zmm13), arg_100)
    zmm7 = _mm_add_ps(arg_f0, zmm0)
    float temp0_603[0x4] = _mm_add_ps(temp0_570, zmm1)
    float temp0_604[0x4] = _mm_add_ps(temp0_572, temp0_601)
    arg11 = _mm_sub_ps(arg11, zmm7)
    zmm0 = _mm_sub_ps(zmm10, temp0_603)
    float temp0_607[0x4] = _mm_sub_ps(zmm9, temp0_604)
    arg11 = _mm_div_ps(arg11, zmm6)
    zmm0 = _mm_div_ps(zmm0, temp0_558)
    float temp0_610[0x4] = _mm_div_ps(temp0_607, zmm13)
    arg_40 = arg11
    arg14 = zmm0
    arg15 = temp0_610
    arg10 = _mm_mul_ps(temp0_584, temp0_584)
    int64_t rbx_13 = 0
    arg11 = _mm_cmpeq_epi32(arg11, arg11)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, arg11))
    
    if (i == 0)
        goto label_1400a99dc
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400a9a6f
            
            goto label_1400a99a8
        
        *(&__return_addr + (rbx_13 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400a9a6f:
            *(&__return_addr:4 + (rbx_13 << 2)) = 0
            
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
        *(&arg_8 + (rbx_13 << 2)) = 0
        
        if ((i & 8) != 0)
        label_1400a9a8f:
            *(&arg_c + (rbx_13 << 2)) = 0
            
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
        arg_40[rbx_13] = 0
        
        if ((i & 2) != 0)
        label_1400a9aaf:
            arg_40[1 + rbx_13] = 0
            
            if ((i & 4) == 0)
                goto label_1400a99d0
            
            goto label_1400a9abf
        
    label_1400a99c8:
        
        if ((i & 4) != 0)
        label_1400a9abf:
            arg_40[2 + rbx_13] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_13] = 0
        else
        label_1400a99d0:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_13] = 0
        
    label_1400a99dc:
        int32_t rdi_7 = *(arg4 + rbx_13)
        char temp0_619 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rdi_7 - 1), 0), *(&__return_addr + (rbx_13 << 2))))
        
        if (temp0_619 != 0)
            if ((temp0_619 & 1) == 0)
                if ((temp0_619 & 2) != 0)
                    goto label_1400a9aeb
                
                goto label_1400a9a0e
            
            *(&__return_addr + (rbx_13 << 2)) = rdi_7 - 2
            
            if ((temp0_619 & 2) != 0)
            label_1400a9aeb:
                *(&__return_addr:4 + (rbx_13 << 2)) = rdi_7 - 2
                
                if ((temp0_619 & 4) == 0)
                    goto label_1400a9a16
                
                goto label_1400a9af7
            
        label_1400a9a0e:
            
            if ((temp0_619 & 4) == 0)
            label_1400a9a16:
                
                if ((temp0_619 & 8) != 0)
                    goto label_1400a9b03
                
                goto label_1400a9a1e
            
        label_1400a9af7:
            *(&arg_8 + (rbx_13 << 2)) = rdi_7 - 2
            
            if ((temp0_619 & 8) != 0)
            label_1400a9b03:
                *(&arg_c + (rbx_13 << 2)) = rdi_7 - 2
                
                if ((temp0_619 & 1) == 0)
                    goto label_1400a9a26
                
                goto label_1400a9b0f
            
        label_1400a9a1e:
            
            if ((temp0_619 & 1) == 0)
            label_1400a9a26:
                
                if ((temp0_619 & 2) != 0)
                    goto label_1400a9b1f
                
                goto label_1400a9a2e
            
        label_1400a9b0f:
            arg_40[rbx_13] = 0x3f800000
            
            if ((temp0_619 & 2) != 0)
            label_1400a9b1f:
                arg_40[1 + rbx_13] = 0x3f800000
                
                if ((temp0_619 & 4) == 0)
                    goto label_1400a9a36
                
                goto label_1400a9b2f
            
        label_1400a9a2e:
            
            if ((temp0_619 & 4) != 0)
            label_1400a9b2f:
                arg_40[2 + rbx_13] = 0x3f800000
                
                if ((temp0_619 & 8) != 0)
                    arg_40[3 + rbx_13] = 0x3f800000
            else
            label_1400a9a36:
                
                if ((temp0_619 & 8) != 0)
                    arg_40[3 + rbx_13] = 0x3f800000
        
        if (rbx_13 == 8)
            break
        
        zmm3 = *(&arg_10 + (rbx_13 << 2))
        rbx_13 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, arg11))
    while (i != 0)

uint32_t result = arg44
int32_t* rcx_31
int64_t* rdx_30

if (arg5.d s>= result)
    rcx_31 = arg42
    rdx_30 = arg43
    zmm3 = arg21
else
    arg17 = zmm10
    arg18 = zmm9
    int32_t temp0_139[0x4] = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg5.d), 0), data_142e11d00)
    arg10 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result), 0), temp0_139)
    zmm1 = __pmulld_xmmdq_memdq(temp0_139, data_142fc95c0) & arg10
    int64_t rax_29 = sx.q(zmm1[0])
    void* r10 = arg8 + (rax_29 << 2)
    zmm0 = *(arg8 + (rax_29 << 2))
    int64_t rsi_15 = sx.q(_mm_extract_epi32(zmm1, 1))
    void* rax_31 = arg8 + (rsi_15 << 2)
    int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm1, 2))
    void* rdx_14 = arg8 + (rbx_2 << 2)
    int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm1, 3))
    void* rdi_3 = arg8 + (rbp_4 << 2)
    zmm0 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, *(arg8 + (rsi_15 << 2)), 0x10), 
            *(arg8 + (rbx_2 << 2)), 0x20), 
        *(arg8 + (rbp_4 << 2)), 0x30)
    zmm3 = data_142fc95e0 & arg10
    uint64_t r14_2 = zx.q(zmm3[0])
    zmm8 = *(r14_2 + r10)
    uint64_t rsi_16 = zx.q(_mm_extract_epi32(zmm3, 1))
    uint64_t r15 = zx.q(_mm_extract_epi32(zmm3, 2))
    int32_t* r13 = zx.q(_mm_extract_epi32(zmm3, 3))
    arg_160.q = rsi_16
    float temp0_154[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm8, *(rsi_16 + rax_31), 0x10), 
            *(r15 + rdx_14), 0x20), 
        *(r13 + rdi_3), 0x30)
    zmm3 = data_142fc95f0 & arg10
    zmm6 = *(zx.q(zmm3[0]) + r10)
    uint64_t rbp_5 = zx.q(_mm_extract_epi32(zmm3, 1))
    uint64_t rbx_3 = zx.q(_mm_extract_epi32(zmm3, 2))
    uint64_t rsi_18 = zx.q(_mm_extract_epi32(zmm3, 3))
    zmm6 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rbp_5 + rax_31), 0x10), 
            *(rbx_3 + rdx_14), 0x20), 
        *(rsi_18 + rdi_3), 0x30)
    uint128_t arg_1b0 = zmm0
    uint32_t arg_1d0[0x4] = zmm6
    float arg_1e0[0x4] = zx.o(0)
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
    float temp0_164[0x4] = _mm_mul_ps(temp0_154, zmm7)
    zmm7 = _mm_mul_ps(zmm7, zmm6)
    zmm6 = _mm_mul_ps(zmm6, zmm1)
    float temp0_167[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm1 = _mm_mul_ps(zmm1, zmm0)
    zmm0 = _mm_mul_ps(zmm0, temp0_167)
    zmm3 = _mm_mul_ps(zx.o(0), arg11)
    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_167, temp0_154))
    zmm0 = _mm_sub_ps(zmm0, zmm7)
    float temp0_174[0x4] = _mm_sub_ps(temp0_164, zmm1)
    zmm3 = _mm_sub_ps(zmm3, zmm3)
    zmm6 = _mm_add_ps(zmm6, zmm6)
    zmm0 = _mm_add_ps(zmm0, zmm0)
    float temp0_178[0x4] = _mm_add_ps(temp0_174, temp0_174)
    zmm3 = _mm_add_ps(zmm3, zmm3)
    arg_40 = zmm6
    arg14 = zmm0
    arg15 = temp0_178
    arg_70 = zmm3
    zmm3 = _mm_mul_ps(zmm3, arg11)
    zmm1 = _mm_mul_ps(arg11, zmm6)
    float temp0_182[0x4] = _mm_mul_ps(arg11, zmm0)
    float temp0_183[0x4] = _mm_mul_ps(arg11, temp0_178)
    zmm1 = __addps_xmmps_memps(zmm1, arg_1b0)
    float temp0_185[0x4] = __addps_xmmps_memps(temp0_182, temp0_154)
    float temp0_186[0x4] = __addps_xmmps_memps(temp0_183, arg_1d0)
    arg_30 = arg11
    int32_t arg_2d0[0x4] = zmm1
    float arg_2e0[0x4] = temp0_185
    float arg_2f0[0x4] = temp0_186
    int32_t arg_300[0x4] = __addps_xmmps_memps(zmm3, arg_1e0)
    zmm4 = *arg6
    arg11 = (*arg6)[1]
    zmm7 = (*arg6)[2]
    arg11 = _mm_shuffle_ps(arg11, arg11, 0)
    float temp0_189[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm3 = _mm_mul_ps(zmm0, temp0_189)
    float temp0_191[0x4] = _mm_mul_ps(temp0_189, temp0_178)
    float temp0_192[0x4] = _mm_mul_ps(temp0_178, arg11)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    arg11 = _mm_mul_ps(arg11, zmm6)
    zmm6 = _mm_mul_ps(zmm6, zmm7)
    float temp0_197[0x4] = _mm_sub_ps(temp0_192, _mm_mul_ps(zmm7, zmm0))
    zmm6 = _mm_sub_ps(zmm6, temp0_191)
    zmm3 = _mm_sub_ps(zmm3, arg11)
    float temp0_200[0x4] = _mm_add_ps(temp0_197, zmm1)
    zmm6 = _mm_add_ps(zmm6, temp0_185)
    zmm3 = _mm_add_ps(zmm3, temp0_186)
    zmm0 = arg6[1][0]
    zmm4 = (*arg6)[5]
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_200)
    float temp0_206[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
    zmm1 = (*arg6)[6]
    zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
    uint128_t arg_210 = zmm0
    float arg_220[0x4] = temp0_206
    arg_150 = zmm1
    int32_t arg_230[0x4] = zmm1
    int64_t rsi_19 = 0
    zmm1 = zmm0
    
    while (true)
        zmm4 = *(&arg_180 + rsi_19)
        zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
        arg11 = _mm_cmpeq_ps(zmm3, zmm1, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(arg11, arg10)) != 0)
            char temp0_213 = _mm_movemask_ps(arg11)
            
            if ((temp0_213 & 1) == 0)
                if ((temp0_213 & 2) != 0)
                    goto label_1400aa42d
                
                goto label_1400aa353
            
            *(&__return_addr + (rsi_19 << 2)) = zmm4[0]
            
            if ((temp0_213 & 2) != 0)
            label_1400aa42d:
                *(&__return_addr:4 + (rsi_19 << 2)) = zmm4[0]
                
                if ((temp0_213 & 4) == 0)
                    goto label_1400aa35b
                
                goto label_1400aa43b
            
        label_1400aa353:
            
            if ((temp0_213 & 4) != 0)
            label_1400aa43b:
                *(&arg_8 + (rsi_19 << 2)) = zmm4[0]
                
                if ((temp0_213 & 8) != 0)
                    *(&arg_c + (rsi_19 << 2)) = zmm4[0]
            else
            label_1400aa35b:
                
                if ((temp0_213 & 8) != 0)
                    *(&arg_c + (rsi_19 << 2)) = zmm4[0]
        
        zmm3 = _mm_cmpeq_ps(zmm3, zmm1, 5)
        
        if (_mm_movemask_ps(_mm_and_ps(arg10, zmm3)) != 0)
            arg11 = *(&arg_170 + rsi_19)
            float temp0_217[0x4] = _mm_shuffle_ps(arg11, arg11, 0)
            uint32_t temp0_219[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_217, 1), zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_219, arg10)) != 0)
                char temp0_222 = _mm_movemask_ps(temp0_219)
                
                if ((temp0_222 & 1) == 0)
                    if ((temp0_222 & 2) != 0)
                        goto label_1400aa45b
                    
                    goto label_1400aa3b4
                
                *(&__return_addr + (rsi_19 << 2)) = arg11[0]
                
                if ((temp0_222 & 2) != 0)
                label_1400aa45b:
                    *(&__return_addr:4 + (rsi_19 << 2)) = arg11[0]
                    
                    if ((temp0_222 & 4) == 0)
                        goto label_1400aa3bc
                    
                    goto label_1400aa469
                
            label_1400aa3b4:
                
                if ((temp0_222 & 4) != 0)
                label_1400aa469:
                    *(&arg_8 + (rsi_19 << 2)) = arg11[0]
                    
                    if ((temp0_222 & 8) != 0)
                        *(&arg_c + (rsi_19 << 2)) = arg11[0]
                else
                label_1400aa3bc:
                    
                    if ((temp0_222 & 8) != 0)
                        *(&arg_c + (rsi_19 << 2)) = arg11[0]
            
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_217, 5), zmm3)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, arg10)) != 0)
                zmm3 = *(&arg_210 + (rsi_19 << 2))
                char temp0_227 = _mm_movemask_ps(zmm1)
                
                if ((temp0_227 & 1) == 0)
                    if ((temp0_227 & 2) != 0)
                        goto label_1400aa489
                    
                    goto label_1400aa3f5
                
                *(&__return_addr + (rsi_19 << 2)) = zmm3[0]
                
                if ((temp0_227 & 2) != 0)
                label_1400aa489:
                    *(&__return_addr:4 + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 1)
                    
                    if ((temp0_227 & 4) == 0)
                        goto label_1400aa3fd
                    
                    goto label_1400aa499
                
            label_1400aa3f5:
                
                if ((temp0_227 & 4) != 0)
                label_1400aa499:
                    *(&arg_8 + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 2)
                    
                    if ((temp0_227 & 8) != 0)
                        *(&arg_c + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)
                else
                label_1400aa3fd:
                    
                    if ((temp0_227 & 8) != 0)
                        *(&arg_c + (rsi_19 << 2)) = __extractps_memd_xmmps_immb(zmm3, 3)
        
        if (rsi_19 == 8)
            break
        
        zmm1 = *(&arg_220 + (rsi_19 << 2))
        rsi_19 += 4
    
    arg16 = zmm11
    zmm3 = __return_addr.o
    zmm11 = arg_10
    float temp0_231[0x4] = _mm_sub_ps(zmm3, zmm0)
    zmm7 = *arg1
    arg11 = (*arg1)[1]
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    zmm0 = _mm_sub_ps(zmm3, zmm7)
    arg11 = _mm_shuffle_ps(arg11, arg11, 0)
    zmm1 = _mm_sub_ps(zmm11, arg11)
    zmm6 = *arg3
    zmm4 = *(arg3 + 4)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
    zmm0 = _mm_div_ps(zmm0, zmm6)
    float temp0_238[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm1 = _mm_div_ps(zmm1, temp0_238)
    zmm10 = arg3[1].d
    zmm13 = _mm_cvttps_epi32(zmm0)
    zmm9 = _mm_cvttps_epi32(zmm1)
    arg_110 = zmm6
    arg_f0 = zmm7
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm6), zmm7)
    zmm6 = __divps_xmmps_memps(_mm_insert_ps(zx.o(*arg3), zmm10, 0x20), data_142fc9600)
    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0)
    arg19 = zmm1
    arg_140 = zmm3
    zmm0 = _mm_cmpeq_ps(_mm_add_ps(zmm0, zmm1), zmm3, 1)
    zmm3 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
    zmm7 = _mm_blendv_ps(zmm3, zmm13, zmm0)
    float arg_200[0x4] = zmm9
    arg_100 = arg11
    zmm0 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_238), arg11)
    float temp0_256[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    zmm0 = _mm_add_ps(zmm0, temp0_256)
    zmm4 = zmm0
    zmm0 = _mm_cmpeq_ps(zmm0, zmm11, 1)
    char temp0_260 = _mm_movemask_ps(_mm_and_ps(zmm0, arg10))
    zmm9 = (*arg1)[2]
    float temp0_261[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float zmm15[0x4] = arg13
    zmm1 = _mm_sub_ps(zmm15, temp0_261)
    float temp0_263[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    int32_t temp0_265[0x4] = _mm_cvttps_epi32(_mm_div_ps(zmm1, temp0_263))
    float temp0_268[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_265), temp0_263), temp0_261)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    __return_addr.o = zmm7
    float temp0_270[0x4] = _mm_cmpeq_ps(zmm4, zmm11, 5)
    
    if (temp0_260 != 0)
        zmm13 = arg_200
    
    float temp0_271[0x4] = __subps_xmmps_memps(zmm11, temp0_206)
    float temp0_272[0x4] = _mm_mul_ps(temp0_231, temp0_231)
    float temp0_273[0x4] = _mm_add_ps(temp0_268, zmm6)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_270, arg10)) != 0)
        zmm3 = __paddd_xmmdq_memdq(arg_200, data_142d3f800)
    
    float temp0_277[0x4] = __subps_xmmps_memps(zmm15, arg_150)
    zmm1 = _mm_add_ps(temp0_272, zx.o(0))
    float temp0_279[0x4] = _mm_mul_ps(temp0_271, temp0_271)
    float temp0_280[0x4] = _mm_blendv_ps(zmm3, zmm13, zmm0)
    arg_10 = temp0_280
    zmm0 = _mm_cmpeq_ps(temp0_273, zmm15, 5)
    float temp0_282[0x4] = _mm_cmpeq_ps(temp0_273, zmm15, 1)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_282, arg10)) != 0)
        zmm13 = temp0_265
    
    arg11 = _mm_add_ps(zmm1, temp0_279)
    float temp0_286[0x4] = _mm_mul_ps(temp0_277, temp0_277)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm0, arg10)) != 0)
        zmm3 = __paddd_xmmdq_memdq(temp0_265, data_142d3f800)
    
    zmm3 = _mm_blendv_ps(zmm3, zmm13, temp0_282)
    arg12 = _mm_add_ps(arg11, temp0_286)
    zmm8 = arg_110
    zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm7), zmm8), arg_f0)
    zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_280), temp0_238), arg_100)
    arg13 = zmm3
    zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), temp0_263), temp0_261)
    arg11 = _mm_add_ps(arg19, zmm0)
    float temp0_302[0x4] = _mm_add_ps(temp0_256, zmm1)
    zmm6 = _mm_add_ps(zmm6, zmm3)
    zmm0 = _mm_sub_ps(arg_140, arg11)
    zmm1 = _mm_sub_ps(zmm11, temp0_302)
    float temp0_306[0x4] = _mm_sub_ps(zmm15, zmm6)
    zmm0 = _mm_div_ps(zmm0, zmm8)
    zmm1 = _mm_div_ps(zmm1, temp0_238)
    float temp0_309[0x4] = _mm_div_ps(temp0_306, temp0_263)
    arg_40 = zmm0
    arg14 = zmm1
    int64_t rcx = 0
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
    
    while (true)
        zmm7 = _mm_cmpeq_epi32(zmm7, zmm0)
        
        if (_mm_movemask_ps(zmm7 & arg10) != 0)
            char temp0_313 = _mm_movemask_ps(zmm7)
            
            if ((temp0_313 & 1) == 0)
                if ((temp0_313 & 2) != 0)
                    goto label_1400aacaf
                
                goto label_1400aabef
            
            *(&__return_addr + (rcx << 2)) = 0
            
            if ((temp0_313 & 2) != 0)
            label_1400aacaf:
                *(&__return_addr:4 + (rcx << 2)) = 0
                
                if ((temp0_313 & 4) == 0)
                    goto label_1400aabf7
                
                goto label_1400aacbf
            
        label_1400aabef:
            
            if ((temp0_313 & 4) == 0)
            label_1400aabf7:
                
                if ((temp0_313 & 8) != 0)
                    goto label_1400aaccf
                
                goto label_1400aabff
            
        label_1400aacbf:
            *(&arg_8 + (rcx << 2)) = 0
            
            if ((temp0_313 & 8) != 0)
            label_1400aaccf:
                *(&arg_c + (rcx << 2)) = 0
                
                if ((temp0_313 & 1) == 0)
                    goto label_1400aac07
                
                goto label_1400aacdf
            
        label_1400aabff:
            
            if ((temp0_313 & 1) == 0)
            label_1400aac07:
                
                if ((temp0_313 & 2) != 0)
                    goto label_1400aacef
                
                goto label_1400aac0f
            
        label_1400aacdf:
            arg_40[rcx] = 0
            
            if ((temp0_313 & 2) != 0)
            label_1400aacef:
                arg_40[1 + rcx] = 0
                
                if ((temp0_313 & 4) == 0)
                    goto label_1400aac17
                
                goto label_1400aacff
            
        label_1400aac0f:
            
            if ((temp0_313 & 4) != 0)
            label_1400aacff:
                arg_40[2 + rcx] = 0
                
                if ((temp0_313 & 8) != 0)
                    arg_40[3 + rcx] = 0
            else
            label_1400aac17:
                
                if ((temp0_313 & 8) != 0)
                    arg_40[3 + rcx] = 0
        
        int32_t rdx_15 = *(arg4 + rcx)
        int32_t temp0_315[0x4] = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_15 - 1), 0), 
            *(&__return_addr + (rcx << 2)))
        
        if (_mm_movemask_ps(temp0_315 & arg10) != 0)
            char temp0_317 = _mm_movemask_ps(temp0_315)
            
            if ((temp0_317 & 1) == 0)
                if ((temp0_317 & 2) != 0)
                    goto label_1400aad2b
                
                goto label_1400aac5d
            
            *(&__return_addr + (rcx << 2)) = rdx_15 - 2
            
            if ((temp0_317 & 2) != 0)
            label_1400aad2b:
                *(&__return_addr:4 + (rcx << 2)) = rdx_15 - 2
                
                if ((temp0_317 & 4) == 0)
                    goto label_1400aac65
                
                goto label_1400aad37
            
        label_1400aac5d:
            
            if ((temp0_317 & 4) == 0)
            label_1400aac65:
                
                if ((temp0_317 & 8) != 0)
                    goto label_1400aad43
                
                goto label_1400aac6d
            
        label_1400aad37:
            *(&arg_8 + (rcx << 2)) = rdx_15 - 2
            
            if ((temp0_317 & 8) != 0)
            label_1400aad43:
                *(&arg_c + (rcx << 2)) = rdx_15 - 2
                
                if ((temp0_317 & 1) == 0)
                    goto label_1400aac75
                
                goto label_1400aad4f
            
        label_1400aac6d:
            
            if ((temp0_317 & 1) == 0)
            label_1400aac75:
                
                if ((temp0_317 & 2) != 0)
                    goto label_1400aad5f
                
                goto label_1400aac7d
            
        label_1400aad4f:
            arg_40[rcx] = 0x3f800000
            
            if ((temp0_317 & 2) != 0)
            label_1400aad5f:
                arg_40[1 + rcx] = 0x3f800000
                
                if ((temp0_317 & 4) == 0)
                    goto label_1400aac85
                
                goto label_1400aad6f
            
        label_1400aac7d:
            
            if ((temp0_317 & 4) != 0)
            label_1400aad6f:
                arg_40[2 + rcx] = 0x3f800000
                
                if ((temp0_317 & 8) != 0)
                    arg_40[3 + rcx] = 0x3f800000
            else
            label_1400aac85:
                
                if ((temp0_317 & 8) != 0)
                    arg_40[3 + rcx] = 0x3f800000
        
        if (rcx == 8)
            break
        
        zmm7 = *(&arg_10 + (rcx << 2))
        rcx += 4
    
    zmm4 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm7 = __return_addr.o
    zmm6 = arg_10
    int32_t temp0_319[0x4] = _mm_mullo_epi32(zmm4, zmm7)
    zmm10 = _mm_add_epi32(temp0_319, zmm6)
    zmm0 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm13 = _mm_mullo_epi32(zmm10, zmm0)
    int32_t temp0_323[0x4] = _mm_add_epi32(zmm13, arg13)
    int32_t (* rax_48)[0x4] = *(arg7 + 0x10)
    zmm1 = _mm_slli_epi32(temp0_323, 2) & arg10
    int64_t rdx_17 = sx.q(zmm1[0])
    arg11 = *(rax_48 + rdx_17)
    int64_t rdi_4 = sx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rbx_4 = sx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rbp_7 = sx.q(_mm_extract_epi32(zmm1, 3))
    arg11 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg11, *(rax_48 + rdi_4), 0x10), 
            *(rax_48 + rbx_4), 0x20), 
        *(rax_48 + rbp_7), 0x30)
    zmm12 = _mm_cmpeq_epi32(temp0_302, temp0_302)
    zmm7 = _mm_mullo_epi32(_mm_sub_epi32(zmm7, zmm12), zmm4)
    zmm1 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm7, zmm6), zmm0), arg13), 2)
    zmm10 = _mm_mullo_epi32(_mm_add_epi32(zmm10, zmm4), zmm0)
    zmm1 &= arg10
    zmm4 = *(rax_48 + sx.q(zmm1[0]))
    int32_t temp0_340 = _mm_extract_epi32(zmm1, 1)
    int64_t rbx_6 = sx.q(_mm_extract_epi32(zmm1, 2))
    int32_t temp0_342 = _mm_extract_epi32(zmm1, 3)
    float temp0_346[0x4] = _mm_sub_ps(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm4, *(rax_48 + sx.q(temp0_340)), 0x10), 
                *(rax_48 + rbx_6), 0x20), 
            *(rax_48 + sx.q(temp0_342)), 0x30), 
        arg11)
    zmm11 = arg_40
    float temp0_348[0x4] = _mm_add_ps(_mm_mul_ps(temp0_346, zmm11), arg11)
    zmm6 = _mm_sub_epi32(zmm6, zmm12)
    zmm3 = _mm_slli_epi32(
        _mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(temp0_319, zmm6), zmm0), arg13), 2) & arg10
    arg11 = *(rax_48 + sx.q(zmm3[0]))
    int64_t rcx_7 = sx.q(_mm_extract_epi32(zmm3, 1))
    int32_t temp0_355 = _mm_extract_epi32(zmm3, 2)
    int64_t rbx_8 = sx.q(_mm_extract_epi32(zmm3, 3))
    arg11 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg11, *(rax_48 + rcx_7), 0x10), 
            *(rax_48 + sx.q(temp0_355)), 0x20), 
        *(rax_48 + rbx_8), 0x30)
    zmm6 = _mm_slli_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_add_epi32(zmm6, zmm7), zmm0), arg13), 2)
        & arg10
    zmm7 = *(rax_48 + sx.q(zmm6[0]))
    int32_t temp0_364 = _mm_extract_epi32(zmm6, 1)
    int64_t rbp_15 = sx.q(_mm_extract_epi32(zmm6, 2))
    int32_t temp0_366 = _mm_extract_epi32(zmm6, 3)
    zmm7 = _mm_mul_ps(
        _mm_sub_ps(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm7, *(rax_48 + sx.q(temp0_364)), 0x10), 
                    *(rax_48 + rbp_15), 0x20), 
                *(rax_48 + sx.q(temp0_366)), 0x30), 
            arg11), 
        zmm11)
    int32_t* rbx_10 = arg_160.q
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(*(r14_2 + rax_48 + rdx_17), *(rbx_10 + rax_48 + rdi_4), 
                0x10), 
            *(r15 + rax_48 + rbx_4), 0x20), 
        *(r13 + rax_48 + rbp_7), 0x30)
    zmm0 = _mm_add_epi32(zmm0, arg13)
    zmm13 = _mm_add_epi32(zmm13, zmm0)
    zmm0 = _mm_add_epi32(zmm0, zmm10)
    zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, arg13), 2) & arg10
    zmm6 = *(r14_2 + sx.q(zmm10[0]) + rax_48)
    void* rcx_18 = sx.q(_mm_extract_epi32(zmm10, 1)) + rax_48
    void* rdx_23 = sx.q(_mm_extract_epi32(zmm10, 2)) + rax_48
    void* rbp_18 = sx.q(_mm_extract_epi32(zmm10, 3)) + rax_48
    zmm6 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rbx_10 + rcx_18), 0x10), 
            *(r15 + rdx_23), 0x20), 
        *(r13 + rbp_18), 0x30)
    zmm7 = _mm_add_ps(zmm7, arg11)
    zmm6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm3), zmm11), zmm3)
    zmm13 = _mm_slli_epi32(zmm13, 2) & arg10
    zmm3 = *(r14_2 + sx.q(zmm13[0]) + rax_48)
    void* rcx_24 = sx.q(_mm_extract_epi32(zmm13, 1)) + rax_48
    void* rdx_26 = sx.q(_mm_extract_epi32(zmm13, 2)) + rax_48
    void* rbp_21 = sx.q(_mm_extract_epi32(zmm13, 3)) + rax_48
    zmm3 = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rbx_10 + rcx_24), 0x10), 
            *(r15 + rdx_26), 0x20), 
        *(r13 + rbp_21), 0x30)
    zmm0 = _mm_slli_epi32(zmm0, 2) & arg10
    zmm1 = *(r14_2 + sx.q(zmm0.d) + rax_48)
    void* rcx_30 = sx.q(_mm_extract_epi32(zmm0, 1)) + rax_48
    void* rdx_29 = sx.q(_mm_extract_epi32(zmm0, 2)) + rax_48
    void* rbp_24 = sx.q(_mm_extract_epi32(zmm0, 3)) + rax_48
    zmm1 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm1, *(rbx_10 + rcx_30), 0x10), 
                        *(r15 + rdx_29), 0x20), 
                    *(r13 + rbp_24), 0x30), 
                zmm3), 
            zmm11), 
        zmm3)
    zmm7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm7, temp0_348), arg14), temp0_348)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm6), arg14), zmm6), zmm7), 
            temp0_309), 
        zmm7)
    zmm3 = _mm_cmpeq_ps(arg12, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg12, 7), zmm3), arg10)
    
    if (_mm_movemask_ps(zmm0) != 0)
        zmm3 = _mm_rsqrt_ps(arg12)
        arg11 = _mm_mul_ps(_mm_mul_ps(arg12, zmm3), zmm3)
        float temp0_426[0x4] =
            __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, arg11), zmm3), data_142d3f640)
        zmm3 = _mm_rcp_ps(temp0_426)
        float temp0_428[0x4] = _mm_mul_ps(temp0_426, zmm3)
        zmm1 = _mm_blendv_ps(zmm1, 
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_428), zmm3), zmm1), zmm0)
    
    rcx_31 = arg42
    rdx_30 = arg43
    zmm3 = arg21
    zmm9 = arg18
    zmm10 = arg17
    zmm11 = arg16
    zmm0 = arg41
    zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0))
    zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), arg10)
    result = _mm_movemask_ps(zmm0)
    
    if (result.b != 0)
        zmm7 = _mm_mul_ps(arg_210, zmm1)
        zmm6 = _mm_mul_ps(arg_220, zmm1)
        arg11 = _mm_mul_ps(arg_230, zmm1)
        result = zx.d(result.b)
        zmm4 = zmm10
        char temp8_1 = result.b & 1
        
        if (temp8_1 == 0)
            zmm8 = zmm9
            
            if (temp8_1 != 0)
                goto label_1400ab8a8
            
            goto label_1400ab67d
        
        zmm4 = zmm10
        zmm4[0] = zmm4[0] f+ zmm7[0]
        zmm8 = zmm9
        
        if (temp8_1 != 0)
        label_1400ab8a8:
            zmm8 = zmm9
            zmm8[0] = zmm8[0] f+ zmm6[0]
            arg10 = zmm11
            
            if (temp8_1 == 0)
                goto label_1400ab687
            
            goto label_1400ab8bb
        
    label_1400ab67d:
        arg10 = zmm11
        bool cond:21_1
        bool cond:22_1
        bool cond:23_1
        bool cond:24_1
        
        if (temp8_1 == 0)
        label_1400ab687:
            zmm10 = _mm_add_ps(zmm10, zmm7)
            char temp10_1 = result.b & 2
            cond:21_1 = temp10_1 != 0
            cond:22_1 = temp10_1 == 0
            cond:23_1 = temp10_1 == 0
            cond:24_1 = temp10_1 != 0
            
            if (temp10_1 != 0)
                goto label_1400ab8cf
            
            goto label_1400ab693
        
    label_1400ab8bb:
        arg10 = zmm11
        arg10[0] = arg10[0] f+ arg11[0]
        zmm10 = _mm_add_ps(zmm10, zmm7)
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
            zmm11 = _mm_add_ps(zmm11, arg11)
            
            if (cond:24_1)
                goto label_1400ab8f1
            
            goto label_1400ab6a7
        
    label_1400ab8e0:
        zmm8 = _mm_blend_ps(zmm8, zmm9, 2)
        zmm11 = _mm_add_ps(zmm11, arg11)
        bool cond:25_1
        bool cond:26_1
        bool cond:27_1
        bool cond:28_1
        
        if (not(cond:23_1))
        label_1400ab8f1:
            arg10 = _mm_blend_ps(arg10, zmm11, 2)
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
        arg10 = _mm_blend_ps(arg10, zmm11, 4)
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
                arg10 = _mm_blend_ps(arg10, zmm11, 8)
        else
        label_1400ab6d0:
            zmm9 = zmm8
            
            if (cond:32_1)
                arg10 = _mm_blend_ps(arg10, zmm11, 8)
        
        zmm4 = arg20
        arg20 = _mm_blendv_ps(zmm4, _mm_add_ps(zmm1, zmm4), zmm0)
        zmm11 = arg10

int32_t temp0_458[0x4] = _mm_cmpeq_epi32(zmm3, zx.o(0))
zmm0 = temp0_458 & not.o(zmm10)
zmm0 = _mm_hadd_ps(zmm0, zmm0)
zmm0 = _mm_hadd_ps(zmm0, zmm0)
zmm1 = temp0_458 & not.o(zmm9)
zmm1 = _mm_hadd_ps(zmm1, zmm1)
zmm0 = _mm_insert_ps(zmm0, _mm_hadd_ps(zmm1, zmm1), 0x1c)
zmm1 = temp0_458 & not.o(zmm11)
zmm1 = _mm_hadd_ps(zmm1, zmm1)
zmm0 = zmm0.q | _mm_hadd_ps(zmm1, zmm1)[0].q << 0x40
zmm1 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*rdx_30), rdx_30[1].d, 0x20), zmm0)
*rdx_30 = zmm1[0]
*(rdx_30 + 4) = __extractps_memd_xmmps_immb(zmm1, 1)
rdx_30[1].d = __extractps_memd_xmmps_immb(zmm1, 2)
zmm3 = temp0_458 & not.o(arg20)
zmm3 = _mm_hadd_ps(zmm3, zmm3)
zmm3 = _mm_hadd_ps(zmm3, zmm3)
zmm3[0] = zmm3[0] f+ *rcx_31
*rcx_31 = zmm3[0]
return result
