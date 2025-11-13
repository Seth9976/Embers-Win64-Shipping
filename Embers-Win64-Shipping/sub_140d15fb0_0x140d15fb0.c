// 函数: sub_140d15fb0
// 地址: 0x140d15fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142eb0060
EnterCriticalSection(&arg1[0xb])
arg1[0x10] = 0
arg1[0x11] = 0
sub_140865470(&arg1[1], 0)

if (arg1 != -0x58)
    LeaveCriticalSection(&arg1[0xb])

DeleteCriticalSection(&arg1[0xb])
sub_1405ae080(&arg1[1])
*arg1 = &data_142d56fa0
return &data_142d56fa0
