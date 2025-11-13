// 函数: sub_141bcab90
// 地址: 0x141bcab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x60, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rcx_1 = *(arg1 + 0x60) + rax * 0x18

if (rcx_1 == 0)
    return 0

return rcx_1 + 8
