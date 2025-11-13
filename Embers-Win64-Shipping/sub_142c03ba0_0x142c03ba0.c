// 函数: sub_142c03ba0
// 地址: 0x142c03ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 == 0x12)
    int32_t rax = *(arg2 + 0x24)
    double* rax_3
    int128_t* rdx
    
    if (rax == 0)
        *(arg2 + 0x20) = 1
        rdx = &data_144017550
        data_144017550.q = 0
        rax_3 = &data_144017550
    else
        *(arg2 + 0x24) = rax - 1
        rdx = &data_144017550
        
        if (rax - 1 u>= *(arg2 + 0x28))
            data_144017550.q = 0
            rax_3 = &data_144017550
        else
            rax_3 = *(arg2 + 0x30) + (zx.q(rax - 1) << 3)
    
    int32_t rcx_1 = int.d(fconvert.t(*rax_3))
    
    if (rcx_1 s< 0)
        *(arg2 + 0x20) = 1
    
    int32_t r8 = 0
    int32_t rax_4 = 0
    
    if (rcx_1 s>= 0)
        rax_4 = rcx_1
    
    arg3[6] = rax_4
    int32_t rax_5 = *(arg2 + 0x24)
    
    if (rax_5 == 0)
        *(arg2 + 0x20) = 1
        data_144017550.q = 0
    else
        *(arg2 + 0x24) = rax_5 - 1
        
        if (rax_5 - 1 u>= *(arg2 + 0x28))
            data_144017550.q = 0
        else
            rdx = *(arg2 + 0x30) + (zx.q(rax_5 - 1) << 3)
    
    int32_t rax_8 = int.d(fconvert.t(*rdx))
    
    if (rax_8 s< 0)
        *(arg2 + 0x20) = 1
    
    if (rax_8 s>= 0)
        r8 = rax_8
    
    arg3[7] = r8
    *(arg2 + 0x24)
    result = 0
    *(arg2 + 0x24) = result
else
    result = sub_142c04010(arg1, arg2)
    
    if (*(arg2 + 0x24) != 0)
        return result

if (*(arg2 + 0x38) == 0 && *(arg2 + 0x1c) == 0 && *(arg2 + 0x20) == 0 && *(arg2 + 0x2c) s>= 0)
    return sub_142bfcec0(arg3, arg1, arg2)

return result
