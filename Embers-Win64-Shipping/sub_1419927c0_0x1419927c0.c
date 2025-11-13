// 函数: sub_1419927c0
// 地址: 0x1419927c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
__builtin_memset(&arg1[1], 0, 0x30)
void* rcx = &arg1[7]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x15]
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
__builtin_memset(&arg1[0xf], 0, 0x30)
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
__builtin_memset(&arg1[0x1d], 0, 0x18)
arg1[0x20] = arg3
arg1[0x21].b = 0

if (arg3 != 0)
    arg1[0x21].b = *(arg3 + 0x30) u>> 1 & 1

return arg1
