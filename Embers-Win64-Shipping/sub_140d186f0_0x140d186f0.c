// 函数: sub_140d186f0
// 地址: 0x140d186f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x100)
int64_t rsi = sx.q(*(arg1 + 0xf8))
int32_t rax = (rsi + 1).d
*(arg1 + 0xf8) = rax

if (rax s> *(arg1 + 0xfc))
    sub_1405a4d70(arg1 + 0xf0)

int64_t result = *(arg1 + 0xf0)
*(result + (rsi << 3)) = arg2

if (arg1 == -0x100)
    return result

return LeaveCriticalSection(arg1 + 0x100)
