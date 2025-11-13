// 函数: sub_14141f7a0
// 地址: 0x14141f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x5159)
char temp0 = rax
rax = neg.b(rax)
return sbb.b(rax, rax, temp0 != 0) & 2
