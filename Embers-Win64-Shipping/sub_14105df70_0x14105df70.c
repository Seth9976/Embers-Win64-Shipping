// 函数: sub_14105df70
// 地址: 0x14105df70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x10)
*arg2 = arg1
int64_t rsi = sx.q(*(arg1 + 0x40))
int32_t rax = (rsi + 1).d
*(arg1 + 0x40) = rax

if (rax s> *(arg1 + 0x44))
    sub_1405a4d70(arg1 + 0x38)

int64_t result = *(arg1 + 0x38)
*(result + (rsi << 3)) = arg2

if (*(arg1 + 0x40) == 4)
    data_143e2c7cc += 1

if (arg1 == -0x10)
    return result

return LeaveCriticalSection(arg1 + 0x10)
