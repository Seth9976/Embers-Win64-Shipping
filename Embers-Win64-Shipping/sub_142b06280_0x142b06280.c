// 函数: sub_142b06280
// 地址: 0x142b06280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 s<= 1)
    result = *(arg1 + 0x10)
    *(arg1 + 0x48) = 0
    
    if (result != 0)
        *(result + 0x11) = 0
        result = *(arg1 + 0x10)
        *(result + 0x13) = 0

if (arg2 s> 1 || arg2 != 1)
    result = *(arg1 + 0x10)
    *(arg1 + 0x50) = 0
    
    if (result != 0)
        *(result + 0x10) = 0
        *(*(arg1 + 0x10) + 8) = 0
        *(*(arg1 + 0x10) + 0xc) = 0
        result = *(arg1 + 0x10)
        *(result + 0x12) = 0

return result
