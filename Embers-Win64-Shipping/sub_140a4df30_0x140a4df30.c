// 函数: sub_140a4df30
// 地址: 0x140a4df30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x10)

if (*(arg1 + 0x38) != 0)
    **(arg1 + 0x40) = arg2
else
    *(arg1 + 0x38) = arg2

*(arg1 + 0x40) = arg2
*arg2 = 0

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

jump(*(**(arg1 + 0x80) + 0x10))
