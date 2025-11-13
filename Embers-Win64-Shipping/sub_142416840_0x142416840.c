// 函数: sub_142416840
// 地址: 0x142416840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg2 != 0 && arg3[1].d s> 0 && *(arg1 + 0x260) != 0)
    void** var_68
    sub_1423fafa0(&var_68, &data_143dbb1f0, &data_143dbb1f0, &data_143dbb1f0, 0)
    int64_t var_28_1 = (*(*arg2 + 0x280))(arg2)
    int64_t var_18
    
    if (&var_18 != arg3)
        int64_t rcx_2 = var_18
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rax_2 = *arg3
        *arg3 = 0
        var_18 = rax_2
        int32_t var_10_1 = arg3[1].d
        int32_t var_c_1 = *(arg3 + 0xc)
        arg3[1] = 0
    
    void* rdi_1 = *(arg1 + 0x260)
    var_68[3](&var_68, rdi_1)
    
    if (*(rdi_1 + 0xa0) == 1)
        sub_14240e030(rdi_1, 0)
    
    int64_t rcx_5 = var_18
    result = &data_14328aaf8
    var_68 = &data_14328aaf8
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg3

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
