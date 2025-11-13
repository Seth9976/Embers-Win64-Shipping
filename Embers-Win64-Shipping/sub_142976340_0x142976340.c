// 函数: sub_142976340
// 地址: 0x142976340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = arg3
int64_t r15 = arg2
int32_t* rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)

if (r15 != 0 && rbp s>= 0 && rax != 0 && rax_1 != 0)
    int32_t r14_1 = 0
    
    while (true)
        int64_t rax_2 = sx.q(*rax)
        int64_t rdi_1
        
        if (rax_2.d u<= 6)
            switch (rax_2)
                case 0
                    if (sub_142976aa0(arg1, rax, *(rax + 0x28), 1, 2) == 0)
                        break
                    
                    continue
                case 1
                    int32_t rax_4 = sub_1429769b0(arg1, rax, *(rax + 0x30), 2)
                    rdi_1 = zx.q(rax_4)
                    
                    if (rax_4 s> 0)
                        continue
                    
                label_1429764d4:
                    sub_142899cc0(arg1, 0xf)
                    sub_142899cd0(arg1)
                    
                    if (r14_1 s> 0)
                        rdi_1 = zx.q(r14_1)
                    
                    return zx.q(rdi_1.d)
                case 2
                    int32_t rax_6 = sub_1428f30c0(0, rbp, rax[9]) - rbp
                    rax[6] = rax_6
                    
                    if (rax_6 s> rax[4])
                        break
                    
                    int64_t arg_10 = *(rax + 8)
                    sub_1428f3130(&arg_10, 0, rbp, rax[9], rax, (rax[8]).b)
                    rax[7] = rbp
                    *rax = 3
                    continue
                case 3
                    int32_t rax_9 = sub_14289aa40(rax_1, sx.q(rax[5]) + *(rax + 8), rax[6])
                    rdi_1 = zx.q(rax_9)
                    
                    if (rax_9 s> 0)
                        int32_t temp0_1 = rax[6]
                        rax[6] -= rax_9
                        
                        if (temp0_1 == rax_9)
                            rax[5] = 0
                            *rax = 4
                            continue
                        else
                            rax[5] += rax_9
                            continue
                    
                    goto label_1429764d4
                case 4
                    int32_t r8_5 = rax[7]
                    
                    if (rbp s<= r8_5)
                        r8_5 = rbp
                    
                    int32_t rax_10 = sub_14289aa40(rax_1, r15, r8_5)
                    rdi_1 = sx.q(rax_10)
                    
                    if (rax_10 s> 0)
                        rax[7] -= rdi_1.d
                        r14_1 += rdi_1.d
                        r15 += rdi_1
                        rbp -= rdi_1.d
                        
                        if (rax[7] == 0)
                            *rax = 2
                        
                        if (rbp != 0)
                            continue
                    
                    goto label_1429764d4
                case 5, 6
                    sub_142899cc0(arg1, 0xf)
                    break

return 0
