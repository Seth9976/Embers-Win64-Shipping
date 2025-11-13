// 函数: sub_141fb3fd0
// 地址: 0x141fb3fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = nullptr

if (arg1 == 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        return sub_140638c50(arg2, 0) __tailcall
else
    int64_t var_18 = 0
    int64_t var_10_1 = 0
    sub_141fa28b0(arg1 + 0x30, &var_18)
    rax = &var_18
    
    if (arg2 != &var_18)
        int64_t rcx_1 = *arg2
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *arg2 = var_18
        arg2[1].d = var_10_1.d
        int32_t rax_3 = var_10_1:4.d
        *(arg2 + 0xc) = rax_3
        return rax_3
    
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        return sub_140a74f90(rcx_2) __tailcall

return rax
