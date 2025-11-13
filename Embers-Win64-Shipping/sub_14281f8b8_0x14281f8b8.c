// 函数: sub_14281f8b8
// 地址: 0x14281f8b8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
int32_t rax
rax.b = arg2[1].b
arg1[1].b = rax.b
rax.b = *(arg2 + 5)
*(arg1 + 5) = rax.b
sub_14281f81c(&arg1[2], &arg2[2])
return arg1
