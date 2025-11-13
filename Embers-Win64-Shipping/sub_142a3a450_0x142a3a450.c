// 函数: sub_142a3a450
// 地址: 0x142a3a450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg3 + arg4
int64_t rbx = arg3

if (arg3 s< rdi)
    while (true)
        int32_t arg_18
        uint64_t rax_1 = sub_142a3e160(arg2, rbx, &arg_18, arg5)
        
        if (rax_1 s>= 0)
            int64_t rbx_1 = rbx + sx.q(arg_18)
            
            if (rdi s< 0 || rbx_1 s< rdi)
                int64_t rax_2 = sub_142a3e270(arg2, rbx_1, &arg_18, arg5)
                
                if (rax_2 s>= 0)
                    int64_t rax_3 = sx.q(arg_18)
                    
                    if ((rax_3 - 1).d u<= 7)
                        rbx = rbx_1 + rax_3
                        
                        if (rbx u<= 0x7fffffffffffffff && (rdi s< 0 || rbx s<= rdi))
                            if (rax_2 == 0)
                            label_142a3a54e:
                                
                                if (rbx s>= rdi)
                                    break
                                
                                continue
                            else
                                int64_t* r9
                                
                                if (rax_1 != 0x85)
                                    if (rax_1 == 0x437c)
                                        r9 = &arg1[1]
                                        goto label_142a3a53d
                                    
                                    if (rax_1 == 0x437e)
                                        r9 = &arg1[2]
                                        goto label_142a3a53d
                                else
                                    r9 = arg1
                                label_142a3a53d:
                                    int32_t result
                                    result, arg5 = sub_142a3e960(arg2, rbx, rax_2, r9)
                                    
                                    if (result != 0)
                                        return result
                                rbx += rax_2
                                
                                if (rbx s<= rdi)
                                    goto label_142a3a54e
        
        return -2

if (rbx != rdi)
    return -2

return 0
