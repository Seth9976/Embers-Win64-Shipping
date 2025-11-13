// 函数: sub_1426e6d70
// 地址: 0x1426e6d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = sub_140ce3290(arg1)
arg1[0xb].b &= 0xfb
char rax = *(arg1 + 0x64)
arg1[0xb].b |= sbb.b(rdx, rdx, rax != 0) & 4
return neg.b(rax)
