// 函数: sub_142a3ce30
// 地址: 0x142a3ce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg2 + arg3
int64_t rdi = arg2

if (arg2 s< r15)
    while (true)
        int32_t arg_10
        uint64_t rax_1 = sub_142a3e160(arg4, rdi, &arg_10, arg5)
        
        if (rax_1 s>= 0)
            int64_t rdi_1 = rdi + sx.q(arg_10)
            
            if (r15 s< 0 || rdi_1 s< r15)
                int64_t rax_2 = sub_142a3e270(arg4, rdi_1, &arg_10, arg5)
                
                if (rax_2 s>= 0)
                    int64_t rcx_3 = sx.q(arg_10)
                    
                    if ((rcx_3 - 1).d u<= 7)
                        int64_t rdi_2 = rdi_1 + rcx_3
                        
                        if (rdi_2 u<= 0x7fffffffffffffff && (r15 s< 0 || rdi_2 s<= r15))
                            if (rax_1 == 0x47e1)
                                int64_t rax_4 = sub_142a3ea30(arg4, rdi_2, rax_2)
                                *arg6 = rax_4
                                
                                if (rax_4 == 5)
                                    goto label_142a3d0bc
                            else
                                void* var_38
                                
                                if (rax_1 == 0x47e2)
                                    arg5 = j_sub_140a74f90(arg6[1])
                                    arg6[1] = 0
                                    arg6[2] = 0
                                    
                                    if (rax_2 s> 0)
                                        if (rax_2 u> 0x80000000)
                                            return -1
                                        
                                        int64_t rax_5 = j_sub_140a82f30(rax_2)
                                        
                                        if (rax_5 == 0)
                                            return -1
                                        
                                        if ((**arg4)(arg4, rdi_2, zx.q(rax_2.d), rax_5, var_38)
                                                != 0)
                                            j_sub_140a74f90(rax_5)
                                            break
                                        
                                        arg6[1] = rax_5
                                        arg6[2] = rax_2
                                    label_142a3d0bc:
                                        rdi = rdi_2 + rax_2
                                        
                                        if (rdi s<= r15)
                                            if (rdi s>= r15)
                                                break
                                            
                                            continue
                                else if (rax_1 != 0x47e3)
                                    if (rax_1 != 0x47e4)
                                        if (rax_1 == 0x47e5)
                                            arg6[7] = sub_142a3ea30(arg4, rdi_2, rax_2)
                                        else if (rax_1 == 0x47e6)
                                            arg6[8] = sub_142a3ea30(arg4, rdi_2, rax_2)
                                        else if (rax_1 == 0x47e7)
                                            var_38 = &arg6[9]
                                            int32_t result = sub_142a3c5e0(arg1, rdi_2, rax_2, 
                                                arg4, arg5, var_38)
                                            
                                            if (result != 0)
                                                return result
                                        
                                        goto label_142a3d0bc
                                    
                                    arg5 = j_sub_140a74f90(arg6[5])
                                    arg6[5] = 0
                                    arg6[6] = 0
                                    
                                    if (rax_2 s> 0)
                                        if (rax_2 u> 0x80000000)
                                            return -1
                                        
                                        int64_t rax_9 = j_sub_140a82f30(rax_2)
                                        
                                        if (rax_9 == 0)
                                            return -1
                                        
                                        if ((**arg4)(arg4, rdi_2, zx.q(rax_2.d), rax_9, var_38)
                                                != 0)
                                            j_sub_140a74f90(rax_9)
                                            break
                                        
                                        arg6[5] = rax_9
                                        arg6[6] = rax_2
                                        goto label_142a3d0bc
                                else
                                    arg5 = j_sub_140a74f90(arg6[3])
                                    arg6[3] = 0
                                    arg6[4] = 0
                                    
                                    if (rax_2 s> 0)
                                        if (rax_2 u> 0x80000000)
                                            return -1
                                        
                                        int64_t rax_7 = j_sub_140a82f30(rax_2)
                                        
                                        if (rax_7 == 0)
                                            return -1
                                        
                                        if ((**arg4)(arg4, rdi_2, zx.q(rax_2.d), rax_7, var_38)
                                                != 0)
                                            j_sub_140a74f90(rax_7)
                                            break
                                        
                                        arg6[3] = rax_7
                                        arg6[4] = rax_2
                                        goto label_142a3d0bc
        
        return -2

return 0
