// 函数: sub_142c03ec0
// 地址: 0x142c03ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 == 0x18)
    int32_t rax_9 = *(arg2 + 0x24)
    double* rax_12
    
    if (rax_9 == 0)
        *(arg2 + 0x20) = 1
        data_144017550.q = 0
        rax_12 = &data_144017550
    else
        *(arg2 + 0x24) = rax_9 - 1
        
        if (rax_9 - 1 u>= *(arg2 + 0x28))
            data_144017550.q = 0
            rax_12 = &data_144017550
        else
            rax_12 = *(arg2 + 0x30) + (zx.q(rax_9 - 1) << 3)
    
    int32_t rcx_5 = int.d(fconvert.t(*rax_12))
    
    if (rcx_5 s< 0)
        *(arg2 + 0x20) = 1
    
    int32_t rax_13 = 0
    
    if (rcx_5 s>= 0)
        rax_13 = rcx_5
    
    arg3[8] = rax_13
label_142c03fc5:
    *(arg2 + 0x24)
    result = 0
    *(arg2 + 0x24) = result
else if (arg1 == 0x107)
    sub_142bfcec0(arg3, 0x107, arg2)
    *(arg2 + 0x24)
    result = 0
    *(arg2 + 0x24) = result
else
    if (arg1 == 0x125)
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
        
        int32_t rcx_1 = int.d(fconvert.t(*rax_6))
        
        if (rcx_1 s< 0)
            *(arg2 + 0x20) = 1
        
        int32_t rax_7 = 0
        
        if (rcx_1 s>= 0)
            rax_7 = rcx_1
        
        arg3[9] = rax_7
        goto label_142c03fc5
    
    result = sub_142c03560(arg1, arg2, arg3)
    
    if (*(arg2 + 0x24) != 0)
        return result

if (*(arg2 + 0x38) == 0 && *(arg2 + 0x1c) == 0 && *(arg2 + 0x20) == 0 && *(arg2 + 0x2c) s>= 0)
    return sub_142bfcec0(arg3, arg1, arg2)

return result
