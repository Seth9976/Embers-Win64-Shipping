// 函数: sub_1417dc610
// 地址: 0x1417dc610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x3b)
char temp0 = rax
rax = neg.b(rax)
arg1.b = *(arg1 + 0x3a) != 0
return (sbb.b(rax, rax, temp0 != 0) & 2) | arg1.b
