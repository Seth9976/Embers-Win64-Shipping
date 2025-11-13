// 函数: sub_1420fc030
// 地址: 0x1420fc030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141838ff0(arg1 + 0x1c0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rdx_2 = rax * 0x1c + *(arg1 + 0x1c0)

if (rdx_2 == 0)
    return 0

return rdx_2 + 0x10
