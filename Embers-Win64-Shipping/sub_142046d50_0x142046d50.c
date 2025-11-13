// 函数: sub_142046d50
// 地址: 0x142046d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_3 = arg4
int32_t result_2 = arg4
char arg_30
char rbp = arg_30
int64_t r15 = sx.q(arg3)
float* rsi_2 = (r15 << 6) + **(arg2 + 0x290)
int32_t* r9 = &rsi_2[4]

if (rbp != 0)
    goto label_142046e6a

float zmm4 = *r9
float zmm0 = zmm4 + *rsi_2
zmm4 = zmm4 - *rsi_2
int128_t zmm7 = r9[1]
int128_t zmm8 = r9[2]
float zmm1 = zmm8.d + rsi_2[2]
zmm8.d = zmm8.d f- rsi_2[2]
float var_78 = zmm0 * 0.5f
zmm0 = zmm7.d
zmm7.d = zmm7.d f- rsi_2[1]
zmm7.d = zmm7.d f* 0.5f
zmm0 = (zmm0 + rsi_2[1]) * 0.5f
zmm8.d = zmm8.d f* 0.5f
int32_t var_84_1 = zmm7.d
float var_88 = zmm4 * 0.5f
float var_74_1 = zmm0
int32_t var_80_1 = zmm8.d
float var_70_1 = zmm1 * 0.5f
uint64_t result = sub_141f8d900(arg2 + 0x150, &var_78, &var_88, &arg_30)

if (result.b != 0)
    rbp = arg_30
    r9 = &rsi_2[4]
label_142046e6a:
    int32_t result_7
    int32_t result_6 = result_7
    
    if (result_2 == result_6)
        goto label_142046edc
    
    void* var_90 = arg2 + 0x2bc
    void* var_98 = arg2 + 0x2dc
    result =
        sub_1420522d0(&result_3, &result_7, rsi_2, r9, arg2 + 0x2a0, arg2 + 0x2ac, var_98, var_90)
    result_2 = result_3
    
    if (result_2 s< *(arg2 + 0x2b8))
        result_6 = result_7
    label_142046edc:
        int32_t r8_4 = *(arg2 + 0x2fc)
        
        if (r15.d s>= r8_4 && r15.d s<= *(arg2 + 0x300))
            result = *(arg2 + 0x308)
        
        if (r15.d s< r8_4 || r15.d s> *(arg2 + 0x300)
                || *(sx.q(*(arg2 + 0x310) - r8_4 + r15.d) + *result) == 0)
            int32_t rbx_1 = rsi_2[3]
            void* var_a8
            
            if (rbx_1 s>= 0 && rsi_2[9] i- rsi_2[8] + 1 s< *(arg2 + (sx.q(result_2) << 2) + 0x270))
                var_a8.d = *(arg2 + (sx.q(*(arg2 + 0x2b8)) << 2) + 0x2b8)
                result = sub_142052540(rsi_2, &rsi_2[4], arg2 + 0x2a0, arg2 + 0x2ac, var_a8.d)
                r8_4 = *(arg2 + 0x2fc)
            
            if (rbx_1 s< 0 || (rsi_2[9] i- rsi_2[8] + 1 s< *(arg2 + (sx.q(result_2) << 2) + 0x270)
                    && result.b != 0))
                result.b = 1
            else
                result.b = 0
            
            if (rbp != 0 && result_2 s>= result_6)
                if (r15.d s>= r8_4 || result.b != 0)
                    goto label_142046f95
                
                goto label_14204714e
            
            if (result.b == 0)
            label_14204714e:
                
                if (rbx_1 s<= rsi_2[7])
                    while (true)
                        void* var_a0
                        var_a0.b = rbp
                        var_a8.d = result_6
                        result = sub_142046d50(arg1, arg2, zx.q(rbx_1), zx.q(result_2), var_a8, 
                            var_a0, var_98, var_90)
                        rbx_1 += 1
                        
                        if (rbx_1 s> rsi_2[7])
                            break
                        
                        rbp = arg_30
            else
            label_142046f95:
                int32_t r15_1 = rsi_2[8]
                int32_t result_1 = *(arg2 + 0x2b8) - 1
                
                if (result_6 s<= result_1)
                    result_1 = result_6
                
                int32_t r14_1 = rsi_2[9]
                
                if (*arg2 != 0)
                    result = zx.q(result_2)
                    
                    if (*(arg2 + 2) != 0)
                        result = zx.q(result_1)
                    
                    if (result.d s< 8)
                        int64_t rcx_8 = sx.q(result.d)
                        int64_t rbx_3 = rcx_8 * 2
                        int64_t r13_1 = sx.q(*(arg2 + (rbx_3 << 3) + 0x90))
                        void* rsi_3 = arg2 + (rbx_3 << 3)
                        int64_t r8_5
                        
                        if (r13_1.d != 0)
                            r8_5 = *(rsi_3 + 0x88)
                        
                        if (r13_1.d == 0 || *(r8_5 + (r13_1 << 2) - 4) + 1 != r15_1)
                            int32_t rax_7 = (r13_1 + 1).d
                            *(arg2 + (rbx_3 << 3) + 0x90) = rax_7
                            
                            if (rax_7 s> *(arg2 + (rbx_3 << 3) + 0x94))
                                sub_14113b710(rsi_3 + 0x88, r13_1.d)
                            
                            *(*(rsi_3 + 0x88) + (r13_1 << 2)) = r15_1
                            int64_t r13_2 = sx.q(*(arg2 + (rbx_3 << 3) + 0x90))
                            int32_t rax_9 = (r13_2 + 1).d
                            *(arg2 + (rbx_3 << 3) + 0x90) = rax_9
                            
                            if (rax_9 s> *(arg2 + (rbx_3 << 3) + 0x94))
                                sub_14113b710(rsi_3 + 0x88, r13_2.d)
                            
                            *(*(rsi_3 + 0x88) + (r13_2 << 2)) = r14_1
                        else
                            *(r8_5 + (r13_1 << 2) - 4) = r14_1
                        
                        result = zx.q(r14_1 - r15_1 + 1)
                        *(arg2 + (rcx_8 << 2) + 0x108) += result.d
                
                if (*(arg2 + 1) != 0)
                    int64_t result_4 = sx.q(result_2)
                    int64_t result_5 = sx.q(result_1)
                    
                    if (result_4 s<= result_5)
                        result = result_4 << 4
                        void* rbx_5 = arg2 + 8 + result
                        void* rbp_3 = arg2 + 0x128 + (result_4 << 2)
                        
                        do
                            if (result_4 s< 8)
                                *rbp_3 += r14_1 - r15_1 + 1
                                int64_t rdi_1 = sx.q(*(rbx_5 + 8))
                                int64_t rdx_7
                                
                                if (rdi_1.d != 0)
                                    rdx_7 = *rbx_5
                                    result = zx.q(*(rdx_7 + (rdi_1 << 2) - 4) + 1)
                                
                                if (rdi_1.d == 0 || result.d != r15_1)
                                    int32_t rax_18 = (rdi_1 + 1).d
                                    *(rbx_5 + 8) = rax_18
                                    
                                    if (rax_18 s> *(rbx_5 + 0xc))
                                        sub_14113b710(rbx_5, rdi_1.d)
                                    
                                    *(*rbx_5 + (rdi_1 << 2)) = r15_1
                                    int64_t rdi_2 = sx.q(*(rbx_5 + 8))
                                    int32_t rax_20 = (rdi_2 + 1).d
                                    *(rbx_5 + 8) = rax_20
                                    
                                    if (rax_20 s> *(rbx_5 + 0xc))
                                        sub_14113b710(rbx_5, rdi_2.d)
                                    
                                    result = *rbx_5
                                    *(result + (rdi_2 << 2)) = r14_1
                                else
                                    *(rdx_7 + (rdi_1 << 2) - 4) = r14_1
                            
                            result_4 += 1
                            rbp_3 += 4
                            rbx_5 += 0x10
                        while (result_4 s<= result_5)

return result
