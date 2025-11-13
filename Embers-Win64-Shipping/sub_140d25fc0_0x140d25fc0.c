// 函数: sub_140d25fc0
// 地址: 0x140d25fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = arg2
*(arg1 + 0x88) = 0
uint64_t result = sub_140868c90(arg1 + 8, arg2)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
