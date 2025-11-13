// 函数: sub_141ea8a50
// 地址: 0x141ea8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x300)
uint8_t result = (*(*arg2 + 0x70))(arg2)

if (arg2 == *(arg1 + 0x118))
    sub_141eaf730(arg1)
    result = (*(arg1 + 0xcc) u>> 2).b
    
    if ((result & 1) != 0)
        result = sub_140ce1310(*(arg1 + 0x118), nullptr, nullptr, 0, 0)

if (arg1 == -0x300)
    return result

return LeaveCriticalSection(arg1 + 0x300)
