// 函数: sub_141e7ed00
// 地址: 0x141e7ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int32_t arg_10
sub_141e7acd0(arg1 + 0x1b0, &arg_10, arg2)
int64_t rax = sx.q(arg_10)
int64_t rdx_2

if (rax.d == 0xffffffff)
    rdx_2 = 0
else
    rdx_2 = rax * 0x68 + *(arg1 + 0x1b0)

if (rdx_2 == 0)
    return 0

return rdx_2 + 8
