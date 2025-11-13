// 函数: sub_142059b70
// 地址: 0x142059b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13_2 = (sx.q(arg3) << 6) + **(arg1 + 0x540)
char var_90 = 1
int32_t rax_1 = r13_2[1].d
int64_t var_a8 = *r13_2
int32_t var_a0 = rax_1
int64_t var_9c = r13_2[2]
int32_t var_94 = r13_2[3].d
int32_t var_88
uint64_t* result
int128_t zmm7
result, zmm7 = sub_140ae2c60(&var_a8, &var_88, arg1 + 0x1c0)
int128_t zmm11 = *arg2
int32_t var_7c
int128_t zmm10 = var_7c

if (not(zmm11.d f> zmm10.d))
    int32_t zmm4_1 = *(arg2 + 0xc)
    int32_t zmm0_1 = var_88
    
    if (not(zmm0_1 f> zmm4_1))
        int32_t zmm5_1 = *(arg2 + 4)
        int32_t var_84
        int32_t var_78
        
        if (not(zmm5_1 f> var_78) && not(var_84 f> arg2[1].d))
            int128_t var_38_1 = zmm7
            zmm7 = *(arg2 + 8)
            int32_t var_74
            
            if (not(zmm7.d f> var_74))
                int32_t var_80
                int128_t zmm8 = var_80
                
                if (not(zmm8.d f> *(arg2 + 0x14)))
                    int32_t i = *(r13_2 + 0xc)
                    
                    if (i s< 0 || (not(zmm0_1 f<= zmm11.d) && not(zmm0_1 f>= zmm4_1)
                            && not(var_84 f<= zmm5_1) && not(var_84 f>= arg2[1].d)
                            && not(zmm8.d f<= zmm7.d) && not(zmm8.d f>= *(arg2 + 0x14))
                            && not(zmm10.d f<= zmm11.d) && not(zmm10.d f>= zmm4_1)
                            && not(var_78 f<= zmm5_1) && not(var_78 f>= arg2[1].d)
                            && not(var_74 f<= zmm7.d) && var_74 f< *(arg2 + 0x14)))
                        int64_t rdi_1 = sx.q(r13_2[4].d)
                        int32_t rcx_2 = *(arg1 + 0x558)
                        int32_t arg_18 = rcx_2
                        
                        if (rdi_1.d s<= *(r13_2 + 0x24))
                            int64_t r15_1 = rdi_1 << 2
                            
                            do
                                int32_t rbx_1
                                
                                if (rcx_2 s<= 0)
                                    rbx_1 = rdi_1.d
                                else
                                    result = *(arg1 + 0x550)
                                    rbx_1 = *(r15_1 + result)
                                
                                if (rbx_1 s>= 0 && rbx_1 s< *(arg1 + 0x4a0))
                                    result = (*arg4)(arg4[1], (sx.q(rbx_1) << 6) + *(arg1 + 0x498))
                                    
                                    if (result.b != 0)
                                        int64_t rbp_1 = sx.q(arg5[1].d)
                                        int32_t rax_5 = (rbp_1 + 1).d
                                        arg5[1].d = rax_5
                                        
                                        if (rax_5 s> *(arg5 + 0xc))
                                            sub_1405a4cf0(arg5)
                                        
                                        result = *arg5
                                        *(result + (rbp_1 << 2)) = rbx_1
                                    
                                    rcx_2 = arg_18
                                
                                rdi_1 = zx.q(rdi_1.d + 1)
                                r15_1 += 4
                            while (rdi_1.d s<= *(r13_2 + 0x24))
                    else
                        for (; i s<= *(r13_2 + 0x1c); i += 1)
                            int64_t rax_3 = *arg4
                            var_a8 = rax_3
                            
                            if (rax_3 != 0)
                                var_a0.q = arg4[1]
                            
                            result = sub_142059b70(arg1, arg2, zx.q(i), &var_a8, arg5)

return result
