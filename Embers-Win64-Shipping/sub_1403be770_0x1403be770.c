// 函数: sub_1403be770
// 地址: 0x1403be770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x158)

if ((*(arg1 + 0x254) & 0x20) != 0)
    result &= 0x300
    
    if (result != 0x300)
        result = sub_140374810(*(arg1 + 0x244), arg2, arg3)
        *(arg1 + 0x244) = result
else if ((result & 0x800) == 0)
    result = sub_140374810(*(arg1 + 0x244), arg2, arg3)
    *(arg1 + 0x244) = result

return result
