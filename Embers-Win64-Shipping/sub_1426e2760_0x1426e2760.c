// 函数: sub_1426e2760
// 地址: 0x1426e2760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xd0))
int32_t rax = (rdi + 1).d
*(arg1 + 0xd0) = rax

if (rax s> *(arg1 + 0xd4))
    sub_1405a4df0(arg1 + 0xc8)

int64_t result = *(arg1 + 0xc8)
int64_t rcx_1 = rdi * 3
*(result + (rcx_1 << 3)) = *arg2
*(result + (rcx_1 << 3) + 0x10) = arg2[1].q
return result
