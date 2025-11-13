// 函数: sub_14292b2a0
// 地址: 0x14292b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t var_18
int32_t var_14
int32_t var_10
int32_t var_c

if (sub_14292b370(arg3, 0, 0, &var_14, &var_c) != 0
        && sub_14292b370(arg4, 0, 0, &var_18, &var_10) != 0)
    int32_t rcx_3 = var_18 - var_14
    int32_t rax_4 = var_10 - var_c
    bool cond:0 = rcx_3 s>= 0
    
    if (rcx_3 s> 0)
        if (rax_4 s< 0)
            rcx_3 -= 1
            rax_4 += 0x15180
        
        cond:0 = rcx_3 s>= 0
    
    if (not(cond:0) && rax_4 s> 0)
        rcx_3 += 1
        rax_4 -= 0x15180
    
    if (arg1 != 0)
        *arg1 = rcx_3
    
    if (arg2 != 0)
        *arg2 = rax_4
    
    return 1

return 0
