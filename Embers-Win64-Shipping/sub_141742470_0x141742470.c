// 函数: sub_141742470
// 地址: 0x141742470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
uint32_t zmm5[0x4] = arg4
uint32_t zmm0[0x4] = zx.o(0)
int32_t* var_108 = arg5
zmm0[0].q = fconvert.d(zmm5[0])
float* r14 = arg3
void** result

if (not(zmm0[0].q f< 0.0001))
    arg4 = 0x3f800000
    uint32_t zmm13[0x4] = *arg3
    uint32_t temp0_1[0x4] = _mm_and_ps(zmm13, 0x7fffffff)
    uint32_t var_188_1 = zmm5[0]
    result.b = temp0_1[0] f<= 9.99999994e-09f
    char var_198 = result.b
    
    if (result.b == 0)
        zmm0 = 0x3f800000
        zmm0[0] = 1f f/ zmm13[0]
    else
        zmm0 = zx.o(0)
    
    uint32_t zmm14[0x4] = *(arg3 + 4)
    uint32_t var_17c_1 = zmm0[0]
    uint32_t var_158 = zmm0[0]
    int64_t r13
    r13.b = _mm_and_ps(zmm14, 0x7fffffff)[0] f<= 9.99999994e-09f
    char var_197_1 = r13.b
    
    if (r13.b == 0)
        zmm0 = 0x3f800000
        zmm0[0] = 1f f/ zmm14[0]
    else
        zmm0 = zx.o(0)
    
    uint32_t zmm15[0x4] = *(arg3 + 8)
    uint32_t var_178_1 = zmm0[0]
    uint32_t var_154_1 = zmm0[0]
    result.b = _mm_and_ps(zmm15, 0x7fffffff)[0] f<= 9.99999994e-09f
    char var_196_1 = result.b
    
    if (result.b == 0)
        arg4[0] = 1f f/ zmm15[0]
    else
        arg4 = zx.o(0)
    
    uint32_t zmm10[0x4] = *(arg1 + 0x38)
    int128_t zmm7 = *arg2
    zmm10[0] = zmm10[0] f* *(arg1 + 0x40)
    result = nullptr
    zmm0 = *(arg1 + 0x98)
    uint32_t zmm8[0x4] = *(arg2 + 4)
    zmm0[0] = zmm0[0] f- zmm7.d
    uint32_t zmm9[0x4] = *(arg2 + 8)
    int32_t rdx = 0
    float zmm1 = *(arg1 + 0xa4)
    zmm10[0] = zmm10[0] f* *(arg1 + 0x3c)
    float zmm11[0x4] = 0x7f7fffff
    uint32_t var_170 = zmm0[0]
    zmm0 = *(arg1 + 0x9c)
    zmm0[0] = zmm0[0] f- zmm8[0]
    float var_f8 = zmm1 f- zmm7.d
    uint32_t var_180_1 = zmm10[0]
    zmm1 = zmm10[0] f- zmm9[0]
    uint32_t var_174_1 = arg4[0]
    uint32_t var_150_1 = arg4[0]
    uint32_t zmm2[0x4] = zx.o(0)
    uint32_t var_16c_1 = zmm0[0]
    zmm10[0] = zmm10[0] f- zmm9[0]
    float var_f0_1 = zmm1
    uint32_t var_168_1 = zmm10[0]
    zmm0 = *(arg1 + 0xa8)
    char* rcx = &var_198
    zmm0[0] = zmm0[0] f- zmm8[0]
    uint32_t var_f4_1 = zmm0[0]
    zmm0 = 0x7f7fffff
    
    while (true)
        arg4 = zmm0
        zmm1 = *(&var_170 + result)
        uint32_t zmm4[0x4] = zmm2
        
        if (*rcx == 0)
            zmm0 = *(&var_158 + result)
            zmm1 = zmm1 f* zmm0[0]
            zmm0[0] = zmm0[0] f* *(&var_f8 + result)
        else
            if (zmm1 > 0f)
                break
            
            if (0f f> *(&var_f8 + result))
                break
            
            zmm1 = (zx.o(0)).d
            zmm0 = 0x7f7fffff
        
        zmm2 = zmm0
        zmm0 = _mm_max_ss(zmm0[0], zmm1)
        zmm2 = _mm_min_ss(zmm2[0], zmm1)
        zmm0 = _mm_min_ss(zmm0[0], arg4[0])
        zmm2 = _mm_max_ss(zmm2[0], zmm4[0])
        
        if (zmm2[0] f> zmm0[0])
            break
        
        rdx += 1
        rcx = &rcx[1]
        result += 4
        
        if (rdx s>= 3)
            if (not(zmm2[0] f> zmm5[0]) && not(zmm0[0] f< 0f))
                zmm4 = *(arg1 + 0x30)
                int32_t rcx_1 = 1
                zmm1 = *(arg1 + 0x54)
                zmm5 = *(arg1 + 0x34)
                zmm13[0] = zmm13[0] f* zmm2[0]
                zmm14[0] = zmm14[0] f* zmm2[0]
                zmm15[0] = zmm15[0] f* zmm2[0]
                zmm13[0] = zmm13[0] f+ zmm7.d
                zmm14[0] = zmm14[0] f+ zmm8[0]
                float var_184_1 = zmm1
                uint128_t zmm12 = *(arg1 + 0x50)
                zmm15[0] = zmm15[0] f+ zmm9[0]
                zmm13[0] = zmm13[0] f/ zmm4[0]
                int32_t rax_2 = int.d(zmm13[0])
                zmm14[0] = zmm14[0] f/ zmm5[0]
                int32_t rax_3 = int.d(zmm14[0])
                zmm2 = _mm_cvtepi32_ps(zx.o(rax_2))
                arg4 = _mm_cvtepi32_ps(zx.o(rax_3))
                zmm2[0] = zmm2[0] f- zmm12.d
                arg4[0] = arg4[0] f- zmm1
                zmm2[0] = zmm2[0] f/ *(arg1 + 0x68)
                zmm1 = arg4[0] f/ *(arg1 + 0x6c)
                int32_t var_190 = int.d(zmm2[0])
                int32_t var_18c = int.d(zmm1)
                
                for (int64_t i = 0; i s< 2; i += 2)
                    zmm0 = i != 0 ? arg4 : zmm2
                    
                    if (not(zmm0[0] f>= 0f))
                        (&var_190)[i] -= 1
                    
                    zmm0 = rcx_1 != 0 ? arg4 : zmm2
                    
                    if (not(zmm0[0] f>= 0f))
                        (&var_18c)[i] -= 1
                    
                    rcx_1 += 2
                
                int32_t rax_6 = *(arg1 + 0x60)
                int32_t rsi_1 = var_190
                
                if (rsi_1 s>= rax_6)
                    rsi_1 = rax_6 - 1
                else if (rsi_1 s< 0)
                    rsi_1 = 0
                
                int32_t rax_7 = *(arg1 + 0x64)
                int32_t rdi_1 = var_18c
                
                if (rdi_1 s>= rax_7)
                    rdi_1 = rax_7 - 1
                else if (rdi_1 s< 0)
                    rdi_1 = 0
                
                zmm0 = var_180_1
                zmm9 = zmm4
                zmm0[0] = zmm0[0] f- zmm10[0]
                zmm9[0] = zmm9[0] f* *(arg1 + 0x68)
                var_190 = rsi_1
                zmm12.d = zmm12.d f* zmm4[0]
                var_18c = rdi_1
                zmm8 = zmm0
                uint32_t var_180_2 = zmm0[0]
                zmm0 = var_184_1
                zmm8[0] = zmm8[0] f* 0.5f
                int64_t var_148 = 0
                zmm0[0] = zmm0[0] f* zmm5[0]
                int32_t var_140_1 = 0
                zmm8[0] = zmm8[0] f+ zmm10[0]
                int32_t var_160_1 = zmm12.d
                zmm12 = 0x3fe0000000000000
                zmm10 = zmm5
                zmm10[0] = zmm10[0] f* *(arg1 + 0x6c)
                uint32_t var_184_2 = zmm0[0]
                
                while (true)
                    int64_t rbx_1 = var_190.q
                    int32_t var_138
                    int32_t var_128
                    uint32_t zmm6_1[0x4]
                    int32_t zmm7_1
                    float zmm8_1[0x4]
                    result, zmm6_1, zmm7_1, zmm8_1 =
                        sub_14173e0e0(arg1, rbx_1, &var_138, &var_128, &var_148)
                    float zmm0_1[0x4]
                    uint32_t zmm1_1[0x4]
                    float zmm2_1[0x4]
                    
                    if (result.b == 0)
                    label_1417429c4:
                        zmm2_1 = var_188_1
                    else
                        zmm0_1 = var_138
                        char* rcx_3 = &var_198
                        zmm0_1[0] = zmm0_1[0] f- *arg2
                        int32_t var_134
                        zmm1_1 = var_134
                        float zmm3[0x4] = zmm6_1
                        zmm1_1[0] = zmm1_1[0] f- *(arg2 + 4)
                        int32_t rdx_2 = 0
                        result = nullptr
                        float var_118 = zmm0_1[0]
                        int32_t var_130
                        zmm0_1 = var_130
                        zmm0_1[0] = zmm0_1[0] f- *(arg2 + 8)
                        uint32_t var_114_1 = zmm1_1[0]
                        zmm1_1 = var_128
                        zmm1_1[0] = zmm1_1[0] f- *arg2
                        float var_110_1 = zmm0_1[0]
                        int32_t var_124
                        zmm0_1 = var_124
                        zmm0_1[0] = zmm0_1[0] f- *(arg2 + 4)
                        var_170 = zmm1_1[0]
                        int32_t var_120
                        zmm1_1 = var_120
                        zmm1_1[0] = zmm1_1[0] f- *(arg2 + 8)
                        float var_16c_2 = zmm0_1[0]
                        zmm0_1 = zmm11
                        uint32_t var_168_2 = zmm1_1[0]
                        
                        while (true)
                            float zmm4_1[0x4] = zmm0_1
                            zmm2_1 = *(&var_118 + result)
                            float zmm5_1 = zmm3[0]
                            
                            if (*rcx_3 == 0)
                                zmm0_1 = *(&var_158 + result)
                                zmm1_1 = zmm0_1
                                zmm0_1[0] = zmm0_1[0] f* *(&var_170 + result)
                                zmm1_1[0] = zmm1_1[0] f* zmm2_1[0]
                            else
                                if (zmm2_1[0] f> zmm6_1[0])
                                    goto label_1417429c4
                                
                                if (zmm6_1[0] f> *(&var_170 + result))
                                    goto label_1417429c4
                                
                                zmm1_1 = zmm6_1
                                zmm0_1 = zmm11
                            
                            float temp0_10[0x4] = _mm_max_ss(zmm0_1[0], zmm1_1[0])
                            float temp0_11[0x4] = _mm_min_ss(zmm0_1[0], zmm1_1[0])
                            zmm0_1 = _mm_min_ss(temp0_10[0], zmm4_1[0])
                            zmm3 = _mm_max_ss(temp0_11[0], zmm5_1)
                            
                            if (zmm3[0] > zmm0_1[0])
                                goto label_1417429c4
                            
                            rdx_2 += 1
                            rcx_3 = &rcx_3[1]
                            result += 4
                            
                            if (rdx_2 s>= 3)
                                zmm2_1 = var_188_1
                                
                                if (zmm3[0] > zmm2_1[0])
                                    break
                                
                                if (zmm0_1[0] f< zmm6_1[0])
                                    break
                                
                                result, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm10, zmm11, zmm12, zmm13, 
                                    zmm14 = sub_141701d40(var_108, 
                                    (zx.d(*(arg1 + 0x46)) - 1) * rdi_1 + rsi_1)
                                
                                if (result.b == 0)
                                    goto label_141742c3d
                                
                                goto label_1417429c4
                    
                    bool cond:7_1 = var_198 != 0
                    zmm0_1 = zx.o(0)
                    zmm0_1[0].q = float.d(rsi_1)
                    result.b = 1
                    zmm0_1[0].q = zmm0_1[0].q f+ zmm12.q
                    float temp0_14[0x4] = _mm_cvtpd_ps(zmm0_1)
                    zmm0_1 = zx.o(0)
                    zmm0_1[0].q = float.d(rdi_1)
                    temp0_14[0] = temp0_14[0] f* zmm9[0]
                    zmm0_1[0].q = zmm0_1[0].q f+ zmm12.q
                    temp0_14[0] = temp0_14[0] f+ var_160_1
                    float temp0_15[0x4] = _mm_cvtpd_ps(zmm0_1)
                    temp0_15[0] = temp0_15[0] f* zmm10[0]
                    temp0_15[0] = temp0_15[0] f+ var_184_2
                    
                    if (cond:7_1)
                        var_f8 = 3.40282347e+38f
                    else
                        bool cond:1_1 = zmm6_1[0] f>= *r14
                        zmm1_1 = zmm9
                        zmm1_1[0] = zmm1_1[0] f* zmm7_1
                        
                        if (cond:1_1)
                            temp0_14[0] = temp0_14[0] f- zmm1_1[0]
                            zmm1_1 = temp0_14
                        else
                            zmm1_1[0] = zmm1_1[0] f+ temp0_14[0]
                        
                        zmm1_1[0] = zmm1_1[0] f- zmm13[0]
                        zmm1_1[0] = zmm1_1[0] f* var_17c_1
                        bool cond:4_1 = zmm2_1[0] f<= zmm1_1[0]
                        var_f8 = zmm1_1[0]
                        zmm2_1 = _mm_min_ss(zmm2_1[0], zmm1_1[0])
                        result.b = cond:4_1
                    
                    if (r13.b != 0)
                        int32_t var_f4_3 = 0x7f7fffff
                    else
                        bool cond:2_1 = zmm6_1[0] f>= r14[1]
                        zmm1_1 = zmm10
                        zmm1_1[0] = zmm1_1[0] f* zmm7_1
                        
                        if (cond:2_1)
                            temp0_15[0] = temp0_15[0] f- zmm1_1[0]
                            zmm1_1 = temp0_15
                        else
                            zmm1_1[0] = zmm1_1[0] f+ temp0_15[0]
                        
                        zmm1_1[0] = zmm1_1[0] f- zmm14[0]
                        char result_1 = 0
                        zmm1_1[0] = zmm1_1[0] f* var_178_1
                        uint32_t var_f4_2 = zmm1_1[0]
                        bool cond:6_1 = zmm2_1[0] f<= zmm1_1[0]
                        float temp0_17[0x4] = _mm_min_ss(zmm1_1[0], zmm2_1[0])
                        
                        if (cond:6_1)
                            result_1 = result.b
                        
                        result = zx.q(result_1)
                        zmm2_1 = temp0_17
                    
                    if (var_196_1 != 0)
                        int32_t var_f0_3 = 0x7f7fffff
                    else
                        bool cond:3_1 = zmm6_1[0] f>= r14[2]
                        zmm1_1 = var_180_2
                        zmm1_1[0] = zmm1_1[0] f* zmm7_1
                        
                        if (cond:3_1)
                            zmm8_1[0] = zmm8_1[0] f- zmm1_1[0]
                            zmm1_1 = zmm8_1
                        else
                            zmm1_1[0] = zmm1_1[0] f+ zmm8_1[0]
                        
                        zmm1_1[0] = zmm1_1[0] f- zmm15[0]
                        char result_2 = 0
                        zmm1_1[0] = zmm1_1[0] f* var_174_1
                        uint32_t var_f0_2 = zmm1_1[0]
                        bool cond:9_1 = zmm2_1[0] f<= zmm1_1[0]
                        float temp0_18[0x4] = _mm_min_ss(zmm1_1[0], zmm2_1[0])
                        
                        if (cond:9_1)
                            result_2 = result.b
                        
                        result = zx.q(result_2)
                        zmm2_1 = temp0_18
                    
                    if (result.b != 0)
                        break
                    
                    int32_t r10_1 = 0
                    int64_t rcx_5 = 0
                    
                    while (true)
                        void* r8_1 = &var_f8 + rcx_5
                        int32_t rdx_7
                        
                        if (zmm2_1[0] f< *r8_1)
                            rdx_7 = 0
                        else
                            rdx_7 = -1
                            
                            if (zmm6_1[0] f< *(r14 - &var_f8 + r8_1))
                                rdx_7 = 1
                        
                        int32_t r9_2 = *(&var_190 + rcx_5)
                        int32_t r9_3 = r9_2 + rdx_7
                        *(&var_190 + rcx_5) = r9_3
                        
                        if (r9_2 + rdx_7 s< 0)
                            goto label_141742c3d
                        
                        if (r9_3 s>= *(arg1 - &var_f8 + r8_1 + 0x60))
                            goto label_141742c3d
                        
                        r10_1 += 1
                        rcx_5 += 4
                        
                        if (r10_1 s>= 2)
                            rsi_1 = var_190
                            rdi_1 = var_18c
                            
                            if (rbx_1.d == rsi_1 && rbx_1:4.d == rdi_1)
                                goto label_141742c3d
                            
                            zmm1_1 = zmm2_1
                            zmm2_1[0] = zmm2_1[0] * *r14
                            zmm1_1[0] = zmm1_1[0] f* r14[1]
                            zmm2_1[0] = zmm2_1[0] * r14[2]
                            zmm2_1[0] = zmm2_1[0] f+ zmm13[0]
                            zmm1_1[0] = zmm1_1[0] f+ zmm14[0]
                            zmm2_1[0] = zmm2_1[0] f+ zmm15[0]
                            zmm13 = zmm2_1
                            zmm14 = zmm1_1
                            zmm15 = zmm2_1
                            break
            
            break

label_141742c3d:
result.b = 0
__security_check_cookie(rax_1 ^ &var_1c8)
return result
