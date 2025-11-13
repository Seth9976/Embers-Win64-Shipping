// 函数: sub_141b3c5b0
// 地址: 0x141b3c5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
*arg1 = &data_143055a58
arg1[2].b = 0
arg1[4] = &data_142d4c350
arg1[5].w = 0x404
__builtin_memset(&arg1[6], 0, 0x25)
__builtin_memset(&arg1[0xb], 0, 0x20)
void* rcx = &arg1[0xf]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 0
arg1[0x15] = 0
arg1[0x16].d = 0
arg1[0x17].d = 0xea60
*(arg1 + 0xbc) = 1
*(arg1 + 0xc4) = 0
*(arg1 + 0xcc) = 0
arg1[0x1a].d &= 0xfffffffe
return arg1
