// 函数: sub_141d8c070
// 地址: 0x141d8c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc4) == 0)
    if (*(arg1 + 0xc9) != 2)
        return 0
    
    int64_t* rcx = *(arg1 + 0x28)
    
    if (rcx == 0)
        return 0
    
    if ((*(*rcx + 0x30))(rcx) == 0)
        return 0

return 1
