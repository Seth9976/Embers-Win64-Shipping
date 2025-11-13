// 函数: sub_141f8bd40
// 地址: 0x141f8bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *(arg1 + 0x420)
*(*arg2 + (rdi << 3)) = result
return result
