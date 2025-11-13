// 函数: sub_142b23ec0
// 地址: 0x142b23ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x178)
*(arg1 + 0x18) = 0
*(arg1 + 0x170) = 0

if (result != 0)
    if ((*(result + 8) & 1) != 0)
        *(result + 8) = 2
        *(result + 0x80) = 0
        return result
    
    *(result + 8) &= 0x1f
    *(result + 0x80) = 0

return result
