// 函数: sub_142b50950
// 地址: 0x142b50950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int32_t* arg_28
int32_t* r14 = arg_28
void var_48
char i = (*(*arg3 + 0x50))(arg3, &var_48, r14)

if (*r14 s<= 0)
    int32_t rbp_1 = 0
    
    for (i = sub_142ac2da0(&var_48, 0, &arg_10, arg3); i != 0; 
            i = sub_142ac2da0(&var_48, rbp_1, &arg_10, arg3))
        char rax_2 = (*(*arg3 + 0x58))(arg3)
        char* rcx_3 = arg_10
        
        if (rax_2 == 0)
            int32_t rax_5 = sub_142b50810(rcx_3)
            
            if (rax_5 != 0xffffffff)
                int64_t rax_6 = sx.q(rax_5)
                
                if (*(arg1 + (rax_6 << 3) + 8) == 0)
                    *(arg1 + (rax_6 << 3) + 8) = (*(*arg3 + 0x18))(arg3, &arg_28, r14)
        else
            int32_t rax_3 = sub_142b50810(rcx_3)
            
            if (rax_3 != 0xffffffff)
                int64_t rax_4 = sx.q(rax_3)
                
                if (*(arg1 + (rax_4 << 3) + 8) == 0)
                    *(arg1 + (rax_4 << 3) + 8) = &data_14366f334
        
        rbp_1 += 1

return i
