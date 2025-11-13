// 函数: sub_141b04040
// 地址: 0x141b04040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x80))
int32_t rax = (rdi + 1).d
*(arg1 + 0x80) = rax

if (rax s> *(arg1 + 0x84))
    sub_1405a4d70(arg1 + 0x78)

int64_t result = *(arg1 + 0x78)
*(result + (rdi << 3)) = arg2
return result
