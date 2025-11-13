// 函数: sub_140ffd690
// 地址: 0x140ffd690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4df0(arg1 + 0x10)

int64_t rax_1 = *(arg1 + 0x10)
int64_t rdx_2 = rdi * 0x18
*(rdx_2 + rax_1 + 8) = 0
*(rdx_2 + rax_1 + 0x10) = 0
int32_t result = *(arg1 + 8)
*(rdx_2 + *(arg1 + 0x10)) = result
return result
