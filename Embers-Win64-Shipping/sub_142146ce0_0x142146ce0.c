// 函数: sub_142146ce0
// 地址: 0x142146ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t result = 0
*arg1 = 0
*arg2 = 0
int64_t var_88
sub_140b63b70(&arg_20, &var_88)
void arg_18
int64_t* rax = sub_14214abe0(&arg_18, *(arg3 + 0x10), arg_20)
void* rbx = *(arg3 + 0x10)
arg_20 = *rax
int128_t var_68
__builtin_memset(&var_68, 0, 0x18)
void var_78
sub_14214e390(&var_68, arg3, arg3, rbx, sub_140b63b70(&arg_20, &var_78))
void* r13 = var_68:8.q

if (r13 != 0)
    int64_t r12
    r12.b = 0
    
    if (arg5 == 0)
    label_142146e5c:
        int64_t result_1
        result = result_1
        *arg2 = r13
        *arg1 = var_68.q
    else
        int32_t rbx_1 = 0
        
        if (arg5[1].d s> 0)
            int64_t* rdi_1 = nullptr
            
            while (true)
                void* rbp_1 = *(rdi_1 + *arg5)
                sub_140d12020()
                int64_t rdx_4 = *(*(r13 + 8) + 0x10)
                
                if ((data_143e1c4a8 & rdx_4) != 0)
                    if (arg6 == 0)
                        goto label_142146e47
                    
                    int64_t rdx_5 = 0
                    int64_t rcx_6 = sx.q(arg6[1].d)
                    
                    if (rcx_6.d s> 0)
                        int64_t* rcx_7 = *arg6
                        
                        do
                            if (*(*(r13 + 0x78) + 0x18) == *rcx_7)
                                r12.b = 1
                                break
                            
                            rdx_5 += 1
                            rcx_7 = &rcx_7[1]
                        while (rdx_5 s< rcx_6)
                else if ((*(rbp_1 + 8) & rdx_4) != 0)
                    goto label_142146e47
                
                rbx_1 += 1
                rdi_1 = &rdi_1[1]
                
                if (rbx_1 s>= arg5[1].d)
                    if (r12.b == 0)
                        goto label_142146e89
                    
                label_142146e47:
                    r13 = var_68:8.q
                    break
            
            goto label_142146e5c

label_142146e89:
int64_t rcx_9 = var_88

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return result
