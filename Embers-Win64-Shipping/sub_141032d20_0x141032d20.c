// 函数: sub_141032d20
// 地址: 0x141032d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x6f8)
int64_t rsi = sx.q(*(arg1 + 0x6f0))
int32_t rax = (rsi + 1).d
*(arg1 + 0x6f0) = rax

if (rax s> *(arg1 + 0x6f4))
    sub_1405a4d70(arg1 + 0x6e8)

int64_t result = *(arg1 + 0x6e8)
*(result + (rsi << 3)) = arg2

if (arg1 == -0x6f8)
    return result

return LeaveCriticalSection(arg1 + 0x6f8)
