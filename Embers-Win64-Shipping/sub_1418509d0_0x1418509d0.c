// 函数: sub_1418509d0
// 地址: 0x1418509d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x80)

if (*(arg1 + 0x6c) != arg2)
    *(arg1 + 0x6c) = arg2
    result = sub_141851f90(arg1)

if (arg1 == -0x80)
    return result

return LeaveCriticalSection(arg1 + 0x80)
