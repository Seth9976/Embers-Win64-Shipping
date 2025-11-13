// 函数: sub_140aefc40
// 地址: 0x140aefc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140aeffb0(arg1 + 8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rdx_2 = rax * 0x158 + *(arg1 + 8)

if (rdx_2 == 0)
    return 0

return rdx_2 + 0x10
