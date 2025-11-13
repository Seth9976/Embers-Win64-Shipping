// 函数: sub_140b9aa70
// 地址: 0x140b9aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x38)
int64_t rsi = sx.q(*(arg1 + 0x30))
int32_t rax = (rsi + 1).d
*(arg1 + 0x30) = rax

if (rax s> *(arg1 + 0x34))
    sub_1405a4d70(arg1 + 0x28)

int64_t result = *(arg1 + 0x28)
*(result + (rsi << 3)) = arg2

if (arg1 == -0x38)
    return result

return LeaveCriticalSection(arg1 + 0x38)
