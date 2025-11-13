// 函数: sub_140bab030
// 地址: 0x140bab030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double result = EnterCriticalSection(arg1 + 8)
void* i = *(arg1 + 0x40)

for (void* rsi_2 = (sx.q(*(arg1 + 0x48)) << 5) + i; i != rsi_2; i += 0x20)
    result = sub_140bb7240(*(i + 0x10), arg2)

*(arg1 + 0xb0) = 1

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
