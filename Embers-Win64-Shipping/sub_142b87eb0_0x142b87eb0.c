// 函数: sub_142b87eb0
// 地址: 0x142b87eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int32_t* arg_28
int32_t* r14 = arg_28
void var_68
uint64_t result = (*(*arg3 + 0x50))(arg3, &var_68, r14)

if (*r14 s<= 0)
    int32_t rdi_1 = 0
    int32_t arg_18 = 0
    result = sub_142ac2da0(&var_68, 0, &arg_10, arg3)
    
    if (result.b != 0)
        while (true)
            int64_t rsi_1 = -1
            
            do
                rsi_1 += 1
            while (arg_10[rsi_1] != 0)
            
            rsi_1.b -= 1
            int64_t rbx_1 = sx.q(rsi_1.b)
            char rbp_1 = *(*(arg1 + 8) + rbx_1 + 0x308)
            void var_90
            result = (*(*arg3 + 0x50))(arg3, &var_90, r14)
            
            if (*r14 s> 0)
                break
            
            int32_t r13_1 = 0
            
            if (sub_142ac2da0(&var_90, 0, &arg_10, arg3) != 0)
                while (true)
                    result = sub_142b450b0(arg_10, r14)
                    
                    if (*r14 s> 0)
                        return result
                    
                    int64_t rdi_2 = sx.q((result + (zx.q(sx.d(rsi_1.b) * 3) << 1)).d) << 3
                    
                    if (*(*(arg1 + 8) + rdi_2 + 8) == 0)
                        result = (*(*arg3 + 0x18))(arg3, &arg_28, r14)
                        uint64_t result_1 = result
                        
                        if (*r14 s> 0)
                            return result
                        
                        int32_t rax_8 = sub_142a8c280(result, &data_14367e698)
                        
                        if (rax_8 == 0)
                            result_1 = data_143ccb6a0
                            arg_28.d = rax_8
                        
                        *(*(arg1 + 8) + rdi_2 + 8) = result_1
                        
                        if (rbp_1 == 0)
                            int32_t rdx_5 = arg_28.d
                            int32_t rax_10 = 0
                            int32_t rcx_9 = 0
                            
                            if (rdx_5 s> 0)
                                while (true)
                                    if (*result_1 == 0x30)
                                        rax_10 += 1
                                    label_142b8805e:
                                        rcx_9 += 1
                                        result_1 += 2
                                        
                                        if (rcx_9 s< rdx_5)
                                            continue
                                        else if (rax_10 s<= 0)
                                            break
                                    else if (rax_10 s<= 0)
                                        goto label_142b8805e
                                    
                                    rbp_1 = rax_10.b - rsi_1.b - 1
                                    break
                    
                    r13_1 += 1
                    
                    if (sub_142ac2da0(&var_90, r13_1, &arg_10, arg3) == 0)
                        break
                
                rdi_1 = arg_18
            
            int64_t rax_12 = *(arg1 + 8)
            
            if (*(rax_12 + rbx_1 + 0x308) == 0)
                *(rax_12 + rbx_1 + 0x308) = rbp_1
                void* rax_13 = *(arg1 + 8)
                
                if (rsi_1.b s> *(rax_13 + 0x318))
                    *(rax_13 + 0x318) = rsi_1.b
                
                *(*(arg1 + 8) + 0x319) = 0
            
            rdi_1 += 1
            arg_18 = rdi_1
            result = sub_142ac2da0(&var_68, rdi_1, &arg_10, arg3)
            
            if (result.b == 0)
                break

return result
