// 函数: sub_1422f0e90
// 地址: 0x1422f0e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x480))
int32_t rax = (rdi + 1).d
*(arg1 + 0x480) = rax

if (rax s> *(arg1 + 0x484))
    sub_14083a310(arg1 + 0x478, rdi.d)

*(*(arg1 + 0x478) + (rdi << 3)) = arg2
jump(**arg2)
