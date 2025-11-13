// 函数: sub_140944090
// 地址: 0x140944090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x50)

if (arg1 != -0x50)
    LeaveCriticalSection(arg1 + 0x50)

EnterCriticalSection(arg1 + 0xc0)

if (arg1 != -0xc0)
    LeaveCriticalSection(arg1 + 0xc0)

*(arg1 + 0xf4) = 1
jump(*(**(arg1 + 0xe8) + 0x10))
