// 函数: sub_1410595d0
// 地址: 0x1410595d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
int64_t rsi = sx.q(*(arg1 + 0x50))
int32_t rax = (rsi + 1).d
*(arg1 + 0x50) = rax

if (rax s> *(arg1 + 0x54))
    sub_1405a4d70(arg1 + 0x48)

int64_t result = *(arg1 + 0x48)
*(result + (rsi << 3)) = arg2

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
