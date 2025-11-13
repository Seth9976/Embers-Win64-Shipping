// 函数: sub_1429e7060
// 地址: 0x1429e7060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0xc0)
EnterCriticalSection(*(rsi + 0x18) + 0x48)
*(arg1 + 0xc8) = arg2
WakeConditionVariable(*(rsi + 0x18) + 0x70)
return LeaveCriticalSection(*(rsi + 0x18) + 0x48) __tailcall
