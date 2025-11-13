// 函数: sub_141d89e20
// 地址: 0x141d89e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*(arg1 + 0x10) + 0x58))(arg1 + 0x10) != 0)
    if (*(arg1 + 0xd5) != 0)
        *(arg1 + 0xa0)
        *(arg1 + 0xa0) = 1
        int64_t* rcx_1 = *(arg1 + 0x38)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 8))(rcx_1)
    
    bool z_1
    
    if (0 == *(arg1 + 0xa0))
        *(arg1 + 0xa0) = 0
        z_1 = true
    else
        *(arg1 + 0xa0)
        z_1 = false
    
    if (not(z_1))
        *(arg1 + 0xa9) = 1

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
