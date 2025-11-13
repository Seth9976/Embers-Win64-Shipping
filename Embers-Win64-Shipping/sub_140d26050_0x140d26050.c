// 函数: sub_140d26050
// 地址: 0x140d26050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
sub_140865470(arg1 + 8, 0)

if (arg1 != -0x58)
    LeaveCriticalSection(arg1 + 0x58)

return sub_140d2af80(&data_143e1d990, arg1) __tailcall
