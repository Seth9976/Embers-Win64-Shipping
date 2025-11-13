// 函数: sub_1418a2c60
// 地址: 0x1418a2c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x78)
*arg2 = *(arg1 + 0xa0)

if (arg1 != -0x78)
    LeaveCriticalSection(arg1 + 0x78)

return arg2
