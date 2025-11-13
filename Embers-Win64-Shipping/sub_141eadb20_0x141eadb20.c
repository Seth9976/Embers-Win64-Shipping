// 函数: sub_141eadb20
// 地址: 0x141eadb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x3c)

if ((result.b & 1) == 0)
    if ((result.b & 0x10) != 0)
        *(arg1 + 0x4c) = 0
        *(arg1 + 0x3c) = (result & 0xffffffef) | 8
        result = *(arg1 + 0x40)
        *(arg1 + 0x48) = result
    
    if (not(arg2 <= 0f))
        *(arg1 + 0x60) = arg2 f- *(arg1 + 0x44)
        return result
    
    *(arg1 + 0x60) = 0

return result
