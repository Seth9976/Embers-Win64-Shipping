// 函数: sub_142a3d100
// 地址: 0x142a3d100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rbx = arg2 + arg3
int32_t arg_18
uint64_t rax_1 = sub_142a3e160(arg1, arg2, &arg_18, arg5)

if (rax_1 s>= 0 && rax_1 == 0x53ab)
    int64_t rdi_1 = arg2 + sx.q(arg_18)
    
    if (rdi_1 s<= rbx)
        int64_t rax_2 = sub_142a3e270(arg1, rdi_1, &arg_18, arg5)
        int64_t r14 = rax_2
        
        if (rax_2 s<= 0)
            rax_2.b = 0
        else
            int64_t rdx_1 = sx.q(arg_18) + rdi_1
            
            if (rdx_1 s> rbx)
                rax_2.b = 0
            else
                int64_t rdi_2 = r14 + rdx_1
                
                if (rdi_2 s> rbx)
                    rax_2.b = 0
                else
                    rax_2 = sub_142a3e160(arg1, rdx_1, &arg_18, arg5)
                    *arg4 = rax_2
                    
                    if (rax_2 s<= 0 || sx.q(arg_18) != r14)
                        rax_2.b = 0
                    else if (sub_142a3e160(arg1, rdi_2, &arg_18, arg5) != 0x53ac)
                        rax_2.b = 0
                    else
                        int64_t rdi_3 = rdi_2 + sx.q(arg_18)
                        
                        if (rdi_3 s> rbx)
                            rax_2.b = 0
                        else
                            rax_2 = sub_142a3e270(arg1, rdi_3, &arg_18, arg5)
                            
                            if (rax_2 s<= 0)
                                rax_2.b = 0
                            else
                                int64_t rdx_4 = sx.q(arg_18) + rdi_3
                                
                                if (rdx_4 s> rbx)
                                    rax_2.b = 0
                                else
                                    int64_t rdi_4 = rax_2 + rdx_4
                                    
                                    if (rdi_4 s> rbx)
                                        rax_2.b = 0
                                    else
                                        rax_2 = sub_142a3ea30(arg1, rdx_4, rax_2)
                                        arg4[1] = rax_2
                                        
                                        if (rax_2 s>= 0)
                                            rax_2.b = rdi_4 == rbx
                                        else
                                            rax_2.b = 0
        
        return rax_2

rax_1.b = 0
return rax_1
