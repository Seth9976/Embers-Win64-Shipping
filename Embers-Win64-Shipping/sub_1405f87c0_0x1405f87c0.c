// 函数: sub_1405f87c0
// 地址: 0x1405f87c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0x80004003

if (arg2 != 0)
    return 0xc00d36b3

EnterCriticalSection(arg1 + 0x10)
*arg3 = 0x107
arg3[1].d = 0

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return 0
