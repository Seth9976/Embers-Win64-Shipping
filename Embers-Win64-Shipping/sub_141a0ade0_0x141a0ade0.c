// 函数: sub_141a0ade0
// 地址: 0x141a0ade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x28)

if ((rax_1.b & 1) != 0)
    rax_1 = (rax_1 s>> 1) + arg1 + 0x28

return zx.q(*(rax_1 + (sx.q(arg2) << 2)))
