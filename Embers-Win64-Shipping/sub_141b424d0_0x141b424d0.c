// 函数: sub_141b424d0
// 地址: 0x141b424d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
__builtin_memset(&arg1[4], 0, 0x28)
*arg1 = &data_1430588e8
arg1[9] = &data_142d4c350
arg1[0xa].w = 0x404
__builtin_memset(&arg1[0xb], 0, 0x25)
__builtin_memset(&arg1[0x10], 0, 0x20)
void* rcx = &arg1[0x14]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
arg1[0x1c].d = 0xea60
*(arg1 + 0xe4) = 1
arg1[0x1d].b = 0
return arg1
