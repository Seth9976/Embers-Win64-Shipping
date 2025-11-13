// 函数: sub_14081a4a0
// 地址: 0x14081a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dd5c48
__builtin_memset(&arg1[1], 0, 0x58)
void* rcx = &arg1[0xc]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16].d |= 7
*(arg1 + 0xb4) = 0
return arg1
