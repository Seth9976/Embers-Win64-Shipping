// 函数: sub_141af6c40
// 地址: 0x141af6c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d9ab38
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
__builtin_memset(&arg1[6], 0, 0x20)
void* rcx = &arg1[0xa]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_8 = *(rcx + 0x10)

if (rax_8 != 0)
    rcx = rax_8

*rcx = 0
*(rcx + 8) = 0
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
return arg1
