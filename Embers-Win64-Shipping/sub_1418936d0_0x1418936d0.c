// 函数: sub_1418936d0
// 地址: 0x1418936d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x148)
int64_t rsi = sx.q(*(arg1 + 0x178))
int32_t rax = (rsi + 1).d
*(arg1 + 0x178) = rax

if (rax s> *(arg1 + 0x17c))
    sub_1405a4cf0(arg1 + 0x170)

int64_t result = *(arg1 + 0x170)
*(result + (rsi << 2)) = arg2

if (arg1 == -0x148)
    return result

return LeaveCriticalSection(arg1 + 0x148)
