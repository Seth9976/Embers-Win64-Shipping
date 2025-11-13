// 函数: sub_141af7d00
// 地址: 0x141af7d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2].d = 0
*(arg1 + 0x1c) = 0
arg1[5] = &data_142d4c350
arg1[6].w = 0x404
__builtin_memset(&arg1[7], 0, 0x25)
__builtin_memset(&arg1[0xc], 0, 0x20)
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
arg1[0x18].d = 0xea60
*(arg1 + 0xc4) = 1
*arg1 = 0
*(arg1 + 0xcc) = data_1439e58a0
arg1[3].d &= 0xfffffffe
arg1[0x1a].d = data_1439e58a0
*(arg1 + 0x14) = 0x3f800000
*(arg1 + 0x1c) = data_143f2c5a8
*(arg1 + 0x5c) = 1
arg1[0xb].d = 0x3f800000
arg1[0x19].w = 0
return arg1
