// 函数: sub_142ac4690
// 地址: 0x142ac4690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0x68))
char temp0 = rax.b
rax.b = neg.b(rax.b)
return zx.q(sbb.d(rax, rax, temp0 != 0)) & 2
