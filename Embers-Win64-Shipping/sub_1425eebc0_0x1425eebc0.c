// 函数: sub_1425eebc0
// 地址: 0x1425eebc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[5] = 1
__builtin_memset(arg2, 0, 0x14)
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0
EnterCriticalSection(arg1 + 0x770)
arg2[4] = *(arg1 + 0x7d4)
arg2[2] = *(arg1 + 0x94)
*arg2 = *(arg1 + 0x84)
arg2[1] = *(arg1 + 0x88)

if (arg1 != -0x770)
    LeaveCriticalSection(arg1 + 0x770)

return arg2
