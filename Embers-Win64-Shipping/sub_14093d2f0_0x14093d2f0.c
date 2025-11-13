// 函数: sub_14093d2f0
// 地址: 0x14093d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xc0)
int64_t rsi = sx.q(*(arg1 + 0xb8))
int32_t rax = (rsi + 1).d
*(arg1 + 0xb8) = rax

if (rax s> *(arg1 + 0xbc))
    sub_1405a4d70(arg1 + 0xb0)

int64_t result = *(arg1 + 0xb0)
*(result + (rsi << 3)) = arg2

if (arg1 == -0xc0)
    return result

return LeaveCriticalSection(arg1 + 0xc0)
