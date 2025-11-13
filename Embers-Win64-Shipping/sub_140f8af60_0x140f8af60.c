// 函数: sub_140f8af60
// 地址: 0x140f8af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = arg4
*arg1 = *arg3
*(arg1 + 9) = 0
int32_t rax_1 = sub_140f01890(arg2, arg2 + 0x28, arg3, arg4 == 1)

if (rax_1 s>= 0 && rax_1 s< *(arg2 + 0x30))
    int32_t rdi_1 = *(arg3 + 4)
    int64_t* rcx_2 = sx.q(rax_1) * 0x58 + *(arg2 + 0x28)
    int64_t* i = *rcx_2
    
    for (void* rsi_3 = &i[sx.q(rcx_2[1].d) * 2]; i != rsi_3; i = &i[2])
        int64_t* rcx_3 = *i
        int32_t arg_8
        (*(*rcx_3 + 0x10))(rcx_3, &arg_8)
        char rax_4
        
        if (rdi_1 s< arg_8 || rdi_1 s>= arg6)
            rax_4 = 0
        else
            rax_4 = 1
        
        if (rax_4 != 0)
            int64_t* rcx_4 = *i
            void var_28
            *(arg1 + 9) = *((*(*rcx_4 + 0x20))(rcx_4, &var_28) + 0x18)
            int64_t* var_18
            
            if (var_18 != 0)
                var_18[1].d -= 1
                
                if (var_18[1].d == 1)
                    (**var_18)(var_18)
                    int32_t temp1_1 = *(var_18 + 0xc)
                    *(var_18 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_18 + 8))(var_18, 1)
            
            break

int64_t* rcx_8 = data_143e29f28
int64_t result = (*(*rcx_8 + 0x50))(rcx_8)
arg1[2] = arg5
return result
