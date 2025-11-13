// 函数: sub_1408646b0
// 地址: 0x1408646b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x4c8))
int32_t rax = (rdi + 1).d
*(arg1 + 0x4c8) = rax

if (rax s> *(arg1 + 0x4cc))
    sub_1405a4d70(arg1 + 0x4c0)

int64_t result = *arg2
*(*(arg1 + 0x4c0) + (rdi << 3)) = result
*arg2 = 0
return result
