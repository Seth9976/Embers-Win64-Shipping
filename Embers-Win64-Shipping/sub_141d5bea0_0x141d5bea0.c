// 函数: sub_141d5bea0
// 地址: 0x141d5bea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x890)
*(arg1 + 0x880) = arg2
*(arg1 + 0x884) = arg3
*(arg1 + 0x8ca) = 1

if (arg1 == -0x890)
    return result

return LeaveCriticalSection(arg1 + 0x890)
