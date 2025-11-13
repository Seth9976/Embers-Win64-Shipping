// 函数: sub_140883260
// 地址: 0x140883260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
*arg1 = arg2

if (arg2 != 0)
    EnterCriticalSection(&data_143ce5bd8)
    *(arg2 + 0x44) += 1
    LeaveCriticalSection(&data_143ce5bd8)

if (rsi != 0)
    sub_1408883d0(rsi)

return arg1
