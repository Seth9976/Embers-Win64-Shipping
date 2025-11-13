// 函数: sub_1427201a0
// 地址: 0x1427201a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xa0))
int32_t rax = (rdi + 1).d
*(arg1 + 0xa0) = rax

if (rax s> *(arg1 + 0xa4))
    sub_1405a4d70(arg1 + 0x98)

int64_t result = *(arg1 + 0x98)
*(arg1 + 0x40) = 0
*(result + (rdi << 3)) = arg2
return result
