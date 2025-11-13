// 函数: sub_1426e85a0
// 地址: 0x1426e85a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x21].d

if ((rax.b & 1) == 0)
    return 0

arg1[0x21].d = rax & 0xfffffffe
(*(*arg1 + 0x3f8))()
return 1
