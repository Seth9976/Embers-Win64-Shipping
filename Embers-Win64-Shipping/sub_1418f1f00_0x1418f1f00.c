// 函数: sub_1418f1f00
// 地址: 0x1418f1f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
arg1[2].d = 0
*arg1 = &data_142ff1d98
__builtin_memset(&arg1[3], 0, 0x14)
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0xffffffff
__builtin_memset(&arg1[6], 0, 0x11)
arg1[9] = arg3
arg1[0xa] = arg2
arg1[0xb] = 0
arg1[0xc] = 0
void* rcx = &arg1[0xd]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
__builtin_memset(&arg1[0x15], 0, 0x29)
return arg1
