// 函数: sub_142a6cd30
// 地址: 0x142a6cd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t* rcx = *(arg1 + 0x148)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    int64_t* rcx_1 = *(arg1 + 0x150)
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    int64_t* rcx_2 = *(arg2 + 0x148)
    
    if (rcx_2 == 0)
        *(arg1 + 0x148) = 0
    else
        *(arg1 + 0x148) = (*(*rcx_2 + 0x10))(rcx_2)
    
    int64_t* rcx_3 = *(arg2 + 0x150)
    
    if (rcx_3 == 0)
        *(arg1 + 0x150) = 0
    else
        *(arg1 + 0x150) = (*(*rcx_3 + 0x18))(rcx_3)
    
    *(arg1 + 0x158) = *(arg2 + 0x158)
    *(arg1 + 0x15c) = *(arg2 + 0x15c)

return arg1
