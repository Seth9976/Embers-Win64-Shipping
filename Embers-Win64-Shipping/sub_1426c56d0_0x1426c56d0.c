// 函数: sub_1426c56d0
// 地址: 0x1426c56d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x34)
*(arg1 + 0x34) = 0xffffffff
arg1[7].d = 0
__builtin_memset(&arg1[8], 0, 0x18)
arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xe] = 0
arg1[0xf] = 0
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
void* rcx_1 = &arg1[0x1a]
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
arg1[0x18] = 0
arg1[0x19] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x25] = 0
arg1[0x26] = 0
sub_1426cac00(arg1, arg2)
return arg1
