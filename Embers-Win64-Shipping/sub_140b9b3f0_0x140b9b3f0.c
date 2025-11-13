// 函数: sub_140b9b3f0
// 地址: 0x140b9b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

if (*(arg1 + 0x10) == 0xffffffff)
    *(arg1 + 0x10) = arg2

int64_t rbp_1 = sx.q(*(arg1 + 0x150))
int32_t rax_1 = (rbp_1 + 1).d
*(arg1 + 0x150) = rax_1

if (rax_1 s> *(arg1 + 0x154))
    sub_1405a4cf0(arg1 + 0x148)

*(*(arg1 + 0x148) + (rbp_1 << 2)) = arg2
sub_140b9b210(*(arg1 + 0x1d8), arg2)
