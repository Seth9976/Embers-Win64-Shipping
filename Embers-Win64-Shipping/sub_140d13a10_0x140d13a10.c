// 函数: sub_140d13a10
// 地址: 0x140d13a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = arg2
*(arg1 + 0x88) = 0
int32_t rsi = *(arg1 + 0x10)
int32_t rdi = *(arg1 + 0x3c)
int32_t result = sub_140d29f20(arg1 + 8, arg2)

if (rsi - rdi s> 0)
    result = *(arg1 + 0x10)
    
    if (result == *(arg1 + 0x3c))
        result = sub_140d2af80(&data_143e1d990, arg1)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
