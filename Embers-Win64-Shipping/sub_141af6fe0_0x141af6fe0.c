// 函数: sub_141af6fe0
// 地址: 0x141af6fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143032190
arg1[1] = 0
arg1[1] = *(arg2 + 8)
*(arg2 + 8) = 0
arg1[2].d = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg2 + 0x10) = 0
arg1[3].b = *(arg2 + 0x18)
*(arg1 + 0x19) = *(arg2 + 0x19)
arg1[4] = 0
arg1[4] = *(arg2 + 0x20)
*(arg2 + 0x20) = 0
arg1[5].d = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg2 + 0x28) = 0
arg1[6] = *(arg2 + 0x30)
__builtin_memset(&arg1[7], 0, 0x20)
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_9 = *(rcx + 0x10)

if (rax_9 != 0)
    rcx = rax_9

*rcx = 0
*(rcx + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
return arg1
