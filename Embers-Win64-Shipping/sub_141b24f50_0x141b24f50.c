// 函数: sub_141b24f50
// 地址: 0x141b24f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t result = *arg2
*(result + rdi * 0x10) = *(arg1 + 0xf8)
return result
