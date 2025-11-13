// 函数: sub_142639c00
// 地址: 0x142639c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0xe8))
int64_t rdx
int64_t var_10 = rdx
int32_t rax = (rsi + 1).d
*(arg1 + 0xe8) = rax

if (rax s> *(arg1 + 0xec))
    sub_1405a4f90(arg1 + 0xe0)

int64_t result = *(arg1 + 0xe0)
*(result + rsi * 0x10) = 0.o

if (*(arg1 + 0xe8) == 1 && (*(arg1 + 0xbc) & 1) == 0 && *(arg1 + 0xb8) == 0)
    return sub_14263c400(arg1)

return result
