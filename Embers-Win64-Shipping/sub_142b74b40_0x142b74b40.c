// 函数: sub_142b74b40
// 地址: 0x142b74b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    if (*(arg1 + 8) != *(arg2 + 8))
        return 0
    
    if (sub_142a48110(arg1 + 0x10, arg2 + 0x10) == 0)
        return 0
    
    int32_t r8_1 = *(arg1 + 0x60)
    
    if (r8_1 != *(arg2 + 0x60))
        return 0
    
    if (r8_1 != 0 && sub_142b75260(*(arg1 + 0x50), *(arg2 + 0x50), r8_1) == 0)
        return 0

return 1
