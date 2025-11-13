// 函数: sub_142046920
// 地址: 0x142046920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_3 = arg4
int32_t result_1 = arg4
bool r14 = arg7
int64_t r12 = sx.q(arg3)
int128_t* rsi_2 = (r12 << 6) + **(arg2 + 0x290)
int128_t* r10 = &rsi_2[1]
uint64_t result
float __saved_zmm7[0x4]
float __saved_zmm6[0x4]

if (r14 != 0)
label_142046a36:
    int32_t result_7
    int32_t result_6 = result_7
    
    if (arg4 == result_6)
        goto label_142046aad
    
    void* var_60 = arg2 + 0x2bc
    void* var_68 = arg2 + 0x2dc
    result =
        sub_1420522d0(&result_3, &result_7, rsi_2, r10, arg2 + 0x2a0, arg2 + 0x2ac, var_68, var_60)
    result_1 = result_3
    
    if (result_1 s< *(arg2 + 0x2b8))
        result_6 = result_7
        r10 = &rsi_2[1]
    label_142046aad:
        int32_t r8_3 = *(arg2 + 0x2fc)
        
        if (r12.d s>= r8_3 && r12.d s<= *(arg2 + 0x300))
            result = *(arg2 + 0x308)
        
        if (r12.d s< r8_3 || r12.d s> *(arg2 + 0x300)
                || *(sx.q(*(arg2 + 0x310) - r8_3 + r12.d) + *result) == 0)
            int32_t rbx_1 = *(rsi_2 + 0xc)
            void* var_78
            
            if (rbx_1 s>= 0
                    && *(rsi_2 + 0x24) - rsi_2[2].d + 1 s< *(arg2 + (sx.q(result_1) << 2) + 0x270))
                var_78.d = (*(arg2 + (sx.q(*(arg2 + 0x2b8)) << 2) + 0x2b8))[0]
                result = sub_142052540(rsi_2, r10, arg2 + 0x2a0, arg2 + 0x2ac, var_78.d)
                r8_3 = *(arg2 + 0x2fc)
            
            if (rbx_1 s< 0 || (
                    *(rsi_2 + 0x24) - rsi_2[2].d + 1 s< *(arg2 + (sx.q(result_1) << 2) + 0x270)
                    && result.b != 0))
                result.b = 1
            else
                result.b = 0
            
            if (r14 != 0 && result_1 s>= result_6)
                if (r12.d s>= r8_3 || result.b != 0)
                    goto label_142046b66
                
                goto label_142046d18
            
            if (result.b == 0)
            label_142046d18:
                
                if (rbx_1 s<= *(rsi_2 + 0x1c))
                    while (true)
                        void* var_70
                        var_70.b = r14
                        var_78.d = result_6
                        result = sub_142046920(arg1, arg2, zx.q(rbx_1), zx.q(result_1), var_78, 
                            var_70, var_68, var_60, __saved_zmm7, __saved_zmm6)
                        rbx_1 += 1
                        
                        if (rbx_1 s> *(rsi_2 + 0x1c))
                            break
                        
                        r14 = arg7
            else
            label_142046b66:
                int32_t r14_1 = *(rsi_2 + 0x24)
                int32_t result_2 = *(arg2 + 0x2b8) - 1
                
                if (result_6 s<= result_2)
                    result_2 = result_6
                
                int32_t r15_1 = rsi_2[2].d
                
                if (*arg2 != 0)
                    result = zx.q(result_1)
                    
                    if (*(arg2 + 2) != 0)
                        result = zx.q(result_2)
                    
                    if (result.d s< 8)
                        int64_t rcx_8 = sx.q(result.d)
                        int64_t rbx_3 = rcx_8 * 2
                        int64_t r13_1 = sx.q(*(arg2 + (rbx_3 << 3) + 0x90))
                        void* rsi_3 = arg2 + (rbx_3 << 3)
                        int64_t r8_4
                        
                        if (r13_1.d != 0)
                            r8_4 = *(rsi_3 + 0x88)
                        
                        if (r13_1.d == 0 || *(r8_4 + (r13_1 << 2) - 4) + 1 != r15_1)
                            int32_t rax_9 = (r13_1 + 1).d
                            *(arg2 + (rbx_3 << 3) + 0x90) = rax_9
                            
                            if (rax_9 s> *(arg2 + (rbx_3 << 3) + 0x94))
                                sub_14113b710(rsi_3 + 0x88, r13_1.d)
                            
                            *(*(rsi_3 + 0x88) + (r13_1 << 2)) = r15_1
                            int64_t r13_2 = sx.q(*(arg2 + (rbx_3 << 3) + 0x90))
                            int32_t rax_11 = (r13_2 + 1).d
                            *(arg2 + (rbx_3 << 3) + 0x90) = rax_11
                            
                            if (rax_11 s> *(arg2 + (rbx_3 << 3) + 0x94))
                                sub_14113b710(rsi_3 + 0x88, r13_2.d)
                            
                            *(*(rsi_3 + 0x88) + (r13_2 << 2)) = r14_1
                        else
                            *(r8_4 + (r13_1 << 2) - 4) = r14_1
                        
                        result = zx.q(r14_1 - r15_1 + 1)
                        *(arg2 + (rcx_8 << 2) + 0x108) += result.d
                
                if (*(arg2 + 1) != 0)
                    int64_t result_4 = sx.q(result_1)
                    int64_t result_5 = sx.q(result_2)
                    
                    if (result_4 s<= result_5)
                        result = result_4 << 4
                        void* rbx_5 = arg2 + 8 + result
                        void* rbp_1 = arg2 + 0x128 + (result_4 << 2)
                        
                        do
                            if (result_4 s< 8)
                                *rbp_1 += r14_1 - r15_1 + 1
                                int64_t rdi_1 = sx.q(*(rbx_5 + 8))
                                int64_t rdx_6
                                
                                if (rdi_1.d != 0)
                                    rdx_6 = *rbx_5
                                    result = zx.q(*(rdx_6 + (rdi_1 << 2) - 4) + 1)
                                
                                if (rdi_1.d == 0 || result.d != r15_1)
                                    int32_t rax_20 = (rdi_1 + 1).d
                                    *(rbx_5 + 8) = rax_20
                                    
                                    if (rax_20 s> *(rbx_5 + 0xc))
                                        sub_14113b710(rbx_5, rdi_1.d)
                                    
                                    *(*rbx_5 + (rdi_1 << 2)) = r15_1
                                    int64_t rdi_2 = sx.q(*(rbx_5 + 8))
                                    int32_t rax_22 = (rdi_2 + 1).d
                                    *(rbx_5 + 8) = rax_22
                                    
                                    if (rax_22 s> *(rbx_5 + 0xc))
                                        sub_14113b710(rbx_5, rdi_2.d)
                                    
                                    result = *rbx_5
                                    *(result + (rdi_2 << 2)) = r14_1
                                else
                                    *(rdx_6 + (rdi_1 << 2) - 4) = r14_1
                            
                            result_4 += 1
                            rbp_1 += 4
                            rbx_5 += 0x10
                        while (result_4 s<= result_5)
else
    float zmm1[0x4] = *rsi_2
    void* rax = *(arg2 + 0x250)
    void* rcx = arg2 + 0x1d0
    __saved_zmm6 = arg5
    __saved_zmm7 = arg6
    arg6 = *r10
    
    if (rax != 0)
        rcx = rax
    
    float temp0_1[0x4] = _mm_sub_ps(arg6, zmm1)
    float temp0_2[0x4] = _mm_add_ps(arg6, zmm1)
    zmm1 = data_143f43400
    float zmm4[0x4] = *rcx
    uint32_t zmm2[0x4] = *(rcx + 0x10)
    float zmm5[0x4] = *(rcx + 0x20)
    float temp0_3[0x4] = __mulps_xmmps_memps(temp0_1, data_1432a5180)
    float temp0_4[0x4] = __mulps_xmmps_memps(temp0_2, data_1432a5180)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
    float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm4)
    zmm4 = _mm_and_ps(zmm4, zmm1)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), zmm5)
    zmm5 = _mm_and_ps(zmm5, zmm1)
    float temp0_12[0x4] = _mm_mul_ps(temp0_6, zmm2)
    uint32_t temp0_13[0x4] = _mm_and_ps(zmm2, zmm1)
    float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_7)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0), zmm4)
    float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_10)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), temp0_13)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
    float temp0_21[0x4] = __subps_xmmps_memps(temp0_17, *(rcx + 0x30))
    float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm5)
    float temp0_24[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_16), temp0_22)
    float temp0_25[0x4] = _mm_sub_ps(zx.o(0), temp0_24)
    float temp0_26[0x4] = _mm_cmpeq_ps(temp0_24, temp0_21, 1)
    bool cond:1_1 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_25, temp0_21, 1)) == 0
    result = zx.q(_mm_movemask_ps(temp0_26))
    r14 = cond:1_1
    arg7 = r14
    
    if (result.d == 0)
        goto label_142046a36
return result
