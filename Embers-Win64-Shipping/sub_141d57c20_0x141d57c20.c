// 函数: sub_141d57c20
// 地址: 0x141d57c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xcc) != 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

EnterCriticalSection(arg1 + 0x158)
*arg2 = *(arg1 + 0xf8)

if (arg1 != -0x158)
    LeaveCriticalSection(arg1 + 0x158)

return arg2
