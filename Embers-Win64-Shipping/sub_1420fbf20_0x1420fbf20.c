// 函数: sub_1420fbf20
// 地址: 0x1420fbf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1420f95f0(arg1 + 0x170, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rdx_2 = rax * 0x58 + *(arg1 + 0x170)

if (rdx_2 == 0)
    return 0

return rdx_2 + 0x10
