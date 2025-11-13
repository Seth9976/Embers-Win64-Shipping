// 函数: sub_142c03560
// 地址: 0x142c03560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0x11)
    int32_t rax_10 = *(arg2 + 0x24)
    double* rax_13
    
    if (rax_10 == 0)
        *(arg2 + 0x20) = 1
        data_144017550.q = 0
        rax_13 = &data_144017550
    else
        *(arg2 + 0x24) = rax_10 - 1
        
        if (rax_10 - 1 u>= *(arg2 + 0x28))
            data_144017550.q = 0
            rax_13 = &data_144017550
        else
            rax_13 = *(arg2 + 0x30) + (zx.q(rax_10 - 1) << 3)
    
    int32_t rcx_5 = int.d(fconvert.t(*rax_13))
    
    if (rcx_5 s< 0)
        *(arg2 + 0x20) = 1
    
    int32_t rax_14 = 0
    
    if (rcx_5 s>= 0)
        rax_14 = rcx_5
    
    *(arg3 + 0x18) = rax_14
else if (arg1 != 0x107)
    if (arg1 != 0x124)
        return sub_142c04010(arg1, arg2) __tailcall
    
    int32_t rax_3 = *(arg2 + 0x24)
    double* rax_6
    
    if (rax_3 == 0)
        *(arg2 + 0x20) = 1
        data_144017550.q = 0
        rax_6 = &data_144017550
    else
        *(arg2 + 0x24) = rax_3 - 1
        
        if (rax_3 - 1 u>= *(arg2 + 0x28))
            data_144017550.q = 0
            rax_6 = &data_144017550
        else
            rax_6 = *(arg2 + 0x30) + (zx.q(rax_3 - 1) << 3)
    
    int32_t rcx_2 = int.d(fconvert.t(*rax_6))
    
    if (rcx_2 s< 0)
        *(arg2 + 0x20) = 1
    
    int32_t rax_7 = 0
    
    if (rcx_2 s>= 0)
        rax_7 = rcx_2
    
    *(arg3 + 0x1c) = rax_7
    *(arg2 + 0x24)
    int32_t rax_9 = 0
    *(arg2 + 0x24) = rax_9
    return rax_9

*(arg2 + 0x24)
int32_t rax_16 = 0
*(arg2 + 0x24) = rax_16
return rax_16
