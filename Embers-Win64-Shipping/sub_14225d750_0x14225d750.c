// 函数: sub_14225d750
// 地址: 0x14225d750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x26d0))
int32_t rax = (rdi + 1).d
*(arg1 + 0x26d0) = rax

if (rax s> *(arg1 + 0x26d4))
    sub_141eab910(arg1 + 0x26c8)

sub_1422d6d20(rdi * 0x540 + *(arg1 + 0x26c8), arg2)
int64_t rdi_1 = sx.q(*(arg1 + 0x26e0))
int32_t rax_1 = (rdi_1 + 1).d
*(arg1 + 0x26e0) = rax_1

if (rax_1 s> *(arg1 + 0x26e4))
    sub_1406105e0(arg1 + 0x26d8)

int64_t result = *(arg1 + 0x26d8)
*(result + (rdi_1 << 2)) = arg3.d
return result
