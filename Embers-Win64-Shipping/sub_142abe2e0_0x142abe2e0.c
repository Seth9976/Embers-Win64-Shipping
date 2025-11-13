// 函数: sub_142abe2e0
// 地址: 0x142abe2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg6 s> 0)
    return &__return_addr

void var_48
sub_142b464c0(&var_48, arg2, *(arg1 + 8) & 1)
sub_142b464f0(&var_48, arg3)
int32_t i_1 = 0

if (arg4 == 0)
    int32_t r9_1 = 1
    
    if ((*(arg1 + 8) & 0x4000) == 0)
        r9_1 = -0x64
    
    sub_142abe450(arg1, &var_48, arg5, r9_1, arg6)
else
    int32_t i = 0
    
    if (*(arg1 + 0xc) s> 0)
        int64_t rdi_1 = 0
        
        do
            if (sub_142b467c0(&var_48) == 0)
                break
            
            int64_t* r14_1 = *(*(arg1 + 0x10) + (rdi_1 << 3))
            
            if ((*(*r14_1 + 0x18))(r14_1, &var_48) == 0)
                i += 1
                rdi_1 += 1
            else
                int32_t rax_4 = sub_1408e52c0(&var_48)
                (*(*r14_1 + 0x10))(r14_1, &var_48, arg5, arg6)
                
                if (*arg6 s> 0)
                    break
                
                if (sub_1408e52c0(&var_48) == rax_4)
                    i += 1
                    rdi_1 += 1
                else
                    i = 0
                    rdi_1 = 0
        while (i s< *(arg1 + 0xc))

if (*(arg1 + 0xc) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t* rcx_8 = *(rbx_1 + *(arg1 + 0x10))
        (*(*rcx_8 + 0x20))(rcx_8, arg5)
        i_1 += 1
        rbx_1 = &rbx_1[1]
    while (i_1 s< *(arg1 + 0xc))

return sub_142ab9900(arg5)
