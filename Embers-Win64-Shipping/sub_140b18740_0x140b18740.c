// 函数: sub_140b18740
// 地址: 0x140b18740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140b160d0(arg1 + 0xf0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rcx_1 = *(arg1 + 0xf0) + rax * 0x24

if (rcx_1 == 0)
    return 0

return rcx_1 + 0x10
