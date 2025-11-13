// 函数: sub_1418a5c50
// 地址: 0x1418a5c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x78)
*(arg1 + 0xa8) = 0
*(arg1 + 0xa0) = 0

if (arg1 == -0x78)
    return 0

return LeaveCriticalSection(arg1 + 0x78)
