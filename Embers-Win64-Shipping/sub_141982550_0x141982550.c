// 函数: sub_141982550
// 地址: 0x141982550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) == 1)
    data_143f0fb1c += 1

int64_t rdi = sx.q(*(arg1 + 0x38))
int32_t rax = (rdi + 1).d
*(arg1 + 0x38) = rax

if (rax s> *(arg1 + 0x3c))
    sub_1405a4d70(arg1 + 0x30)

int64_t result = *arg2
*(*(arg1 + 0x30) + (rdi << 3)) = result
*arg2 = 0
return result
