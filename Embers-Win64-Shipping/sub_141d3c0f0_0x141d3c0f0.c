// 函数: sub_141d3c0f0
// 地址: 0x141d3c0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140ba6ab0(arg1 + 0x368, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rdx_3 = rax * 0x60 + *(arg1 + 0x368)

if (rdx_3 == 0)
    return 0

return rdx_3 + 8
