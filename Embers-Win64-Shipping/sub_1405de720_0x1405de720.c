// 函数: sub_1405de720
// 地址: 0x1405de720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg2
*arg1 = &data_142d5a390
arg1[4].d = arg5
*(arg1 + 0xc) = 0
*(arg1 + 0xe) = 0
arg1[2] = arg3
arg1[3] = arg4
arg1[5].d &= 0xfffffb1a
arg1[5].d |= 0x31a
*(arg1 + 0x2c) = 0
__builtin_memset(&arg1[7], 0, 0x34)
__builtin_memset(&arg1[0xe], 0, 0x50)
sub_1405de940(&arg1[0x18])
__builtin_memset(&arg1[0x77], 0, 0x19)
void* rcx_1 = &arg1[0x7f]
__builtin_memset(&arg1[0x7b], 0, 0x20)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x9d]
arg1[0x83].d = 0xffffffff
*(arg1 + 0x41c) = 0
arg1[0x85] = 0
arg1[0x86].d = 0
__builtin_memset(&arg1[0x87], 0, 0x20)
arg1[0x8c].d = 0
__builtin_memset(&arg1[0x8d], 0, 0x2c)
arg1[0x93] = 0
arg1[0x94].w = 0
*(arg1 + 0x4a2) = 0
__builtin_memset(&arg1[0x95], 0, 0x40)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0xa1].d = 0xffffffff
*(arg1 + 0x50c) = 0
arg1[0xa3] = 0
arg1[0xa4].d = 0
return arg1
