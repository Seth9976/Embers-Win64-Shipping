// 函数: sub_141821410
// 地址: 0x141821410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
*(arg1 + 8) = 0
arg1[4] = 0
arg1[6] = arg2
int64_t rax = j_sub_140a82f30(zx.q(arg2))
uint64_t count = zx.q(arg1[6])
*(arg1 + 0x20) = rax
memset(rax, 0, count)
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
return arg1
