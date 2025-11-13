// 函数: sub_1423d1a80
// 地址: 0x1423d1a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    *(arg2 + 8) += 1

int64_t rsi = sx.q(*(arg1 + 0x38))
int32_t rax = (rsi + 1).d
*(arg1 + 0x38) = rax

if (rax s> *(arg1 + 0x3c))
    sub_1405a4d70(arg1 + 0x30)

int64_t result = *(arg1 + 0x30)
*(result + (rsi << 3)) = arg2
return result
