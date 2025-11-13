// 函数: sub_141b3c9e0
// 地址: 0x141b3c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = &data_142d4c350
arg1[2].w = 0x404
__builtin_memset(&arg1[3], 0, 0x25)
__builtin_memset(&arg1[8], 0, 0x20)
void* rcx = &arg1[0xc]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x20]
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x14].d = 0xea60
*(arg1 + 0xa4) = 1
arg1[0x15] = &data_142d4c350
arg1[0x16].w = 0x404
__builtin_memset(&arg1[0x17], 0, 0x25)
__builtin_memset(&arg1[0x1c], 0, 0x20)
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x34]
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
arg1[0x28].d = 0xea60
*(arg1 + 0x144) = 1
arg1[0x29] = &data_142d4c350
arg1[0x2a].w = 0x404
__builtin_memset(&arg1[0x2b], 0, 0x25)
__builtin_memset(&arg1[0x30], 0, 0x20)
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
arg1[0x38].d = 0xffffffff
*(arg1 + 0x1c4) = 0
arg1[0x3a] = 0
arg1[0x3b].d = 0
arg1[0x3c].d = 0xea60
*(arg1 + 0x1e4) = 1
return arg1
