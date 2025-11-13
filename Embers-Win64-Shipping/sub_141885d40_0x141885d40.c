// 函数: sub_141885d40
// 地址: 0x141885d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140cba0f0(arg1 + 0x1b0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0x10

return (rax << 5) + 0x10 + *(arg1 + 0x1b0)
