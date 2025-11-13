// 函数: sub_140d9a700
// 地址: 0x140d9a700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0xd0)
int64_t rdi = sx.q(*(arg1 + 0xe8))
int32_t rax = (rdi + 1).d
*(arg1 + 0xe8) = rax

if (rax s> *(arg1 + 0xec))
    sub_1405a4cf0(arg1 + 0xe0)

int64_t result = *(arg1 + 0xe0)
*(result + (rdi << 2)) = rsi
return result
