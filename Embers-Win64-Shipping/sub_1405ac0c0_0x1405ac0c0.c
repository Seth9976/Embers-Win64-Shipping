// 函数: sub_1405ac0c0
// 地址: 0x1405ac0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d4c350
arg1[1].b = *(arg2 + 8)
*(arg1 + 9) = *(arg2 + 9)
arg1[2] = 0
arg1[2] = *(arg2 + 0x10)
__builtin_memset(arg2 + 0x10, 0, 0x20)
arg1[3].d = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4] = 0
arg1[4] = *(arg2 + 0x20)
arg1[5].d = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6].d = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
__builtin_memset(&arg1[7], 0, 0x20)
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_10 = *(rcx + 0x10)

if (rax_10 != 0)
    rcx = rax_10

*rcx = 0
*(rcx + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
arg1[0x13] = *(arg2 + 0x98)
return arg1
