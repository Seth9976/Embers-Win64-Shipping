// 函数: sub_140379888
// 地址: 0x140379888
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

if ((*(*(arg1 + 8) + 0x418) & 1) != 0)
    int16_t rax = arg2[1]
    
    if (arg3[1] != rax)
        r10 = -0x7768ffff
        
        if (arg4 != 0)
            arg3[1] = rax

if ((*(*(arg1 + 8) + 0x418) & 2) != 0)
    int32_t rax_2 = *(arg2 + 4)
    
    if (*(arg3 + 4) != rax_2)
        r10 = -0x7768ffff
        
        if (arg4 != 0)
            *(arg3 + 4) = rax_2

if ((*(*(arg1 + 8) + 0x418) & 4) != 0)
    int16_t rax_4 = arg2[7]
    
    if (arg3[7] != rax_4)
        r10 = -0x7768ffff
        
        if (arg4 != 0)
            arg3[7] = rax_4
    
    int16_t rax_5
    
    if (*arg2 == 0xfffe)
        rax_5 = arg2[9]
        
        if (*arg3 == 0xfffe)
            goto label_140379927
        
        if (arg3[7] != rax_5)
            r10 = -0x7768ffff
    else if (*arg3 == 0xfffe)
        rax_5 = arg2[7]
    label_140379927:
        
        if (arg3[9] != rax_5)
            r10 = -0x7768ffff
            
            if (arg4 != 0)
                arg3[9] = rax_5

return zx.q(r10)
