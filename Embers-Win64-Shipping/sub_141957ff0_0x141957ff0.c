// 函数: sub_141957ff0
// 地址: 0x141957ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HGLRC rax = wglGetCurrentContext()

if (rax == *(arg1 + 0x40))
    return 1

if (rax == *(arg1 + 0x10))
    return 0

int32_t rax_3 = (neg.q(rax)).d
return zx.q(sbb.d(rax_3, rax_3, rax != 0) - 1)
