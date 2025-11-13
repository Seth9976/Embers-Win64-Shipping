// 函数: sub_140d3a600
// 地址: 0x140d3a600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4d70(arg1 + 0x10)

int64_t result = *(arg1 + 0x10)
*(result + (rdi << 3)) = arg2
return result
