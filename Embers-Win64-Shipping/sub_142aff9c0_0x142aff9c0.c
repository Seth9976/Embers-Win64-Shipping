// 函数: sub_142aff9c0
// 地址: 0x142aff9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 s<= 1)
    result = 0
    
    if ((*(arg1 + 0x38) & 0xf) == 0)
        result = 8
    
    *(arg1 + 0x4c) = result

if (arg2 s> 1 || arg2 != 1)
    result.b = (*(arg1 + 0x38)).b & 0xf
    
    if (result.b == 1)
        *(arg1 + 0x50) = 1

return result
