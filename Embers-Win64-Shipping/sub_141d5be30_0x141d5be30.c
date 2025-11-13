// 函数: sub_141d5be30
// 地址: 0x141d5be30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x890)
*(arg1 + 0x8c9) = arg2
*(arg1 + 0x888) = 0

if (arg1 == -0x890)
    return result

return LeaveCriticalSection(arg1 + 0x890)
