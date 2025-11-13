// 函数: sub_141124020
// 地址: 0x141124020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1405ba560(arg1 + 8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rcx_3 = (rax << 5) + *(arg1 + 8)

if (rcx_3 == 0)
    return 0

return rcx_3 + 8
