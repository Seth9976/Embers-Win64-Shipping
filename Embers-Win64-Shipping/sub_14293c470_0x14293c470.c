// 函数: sub_14293c470
// 地址: 0x14293c470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*arg1 == 1)
    int32_t* rdx = *(*(arg1 + 8) + 8)
    
    if (arg5 != 0)
        *arg5 = 0
    
    if (arg6 != 0)
        *arg6 = 0
    
    if (arg4 != 0)
        *arg4 = 0
    
    if (arg2 != 0)
        *arg2 = 0
    
    if (arg3 != 0)
        *arg3 = 0
    
    int32_t rax_3 = *rdx
    
    if (rax_3 == 0)
        if (arg5 != 0)
            *arg5 = **(rdx + 8)
        
        if (arg6 == 0)
            return 1
        
        *arg6 = *(*(rdx + 8) + 8)
        return 1
    
    if (rax_3 == 1)
        if (arg4 == 0)
            return 1
        
        *arg4 = *(rdx + 8)
        return 1
    
    if (rax_3 == 2)
        if (arg2 != 0)
            *arg2 = **(rdx + 8)
        
        if (arg3 != 0)
            *arg3 = *(*(rdx + 8) + 8)
        
        return 1
else
    sub_1428a5670(0x2e, 0xad, 0xb5, "crypto\cms\cms_kari.c", 0x3d)

return 0
