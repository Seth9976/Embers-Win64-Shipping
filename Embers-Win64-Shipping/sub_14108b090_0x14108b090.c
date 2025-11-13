// 函数: sub_14108b090
// 地址: 0x14108b090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x48)

if (*(arg1 + 0x2c) s< 1)
    sub_1405dadb0(arg1 + 0x20, 1)

int32_t rax = *(arg1 + 0x28) + 1
*(arg1 + 0x28) = rax

if (rax s> *(arg1 + 0x2c))
    sub_1405a4cf0(arg1 + 0x20)

if (*(arg1 + 0x3c) s< 1)
    sub_1405dadb0(arg1 + 0x30, 1)

int64_t rdi = sx.q(*(arg1 + 0x38))
int32_t rax_1 = (rdi + 1).d
*(arg1 + 0x38) = rax_1

if (rax_1 s> *(arg1 + 0x3c))
    sub_1405a4cf0(arg1 + 0x30)

*(*(arg1 + 0x30) + (rdi << 2)) = 0x80000000
return arg1
