// 函数: sub_14237e5e0
// 地址: 0x14237e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336500
arg1[1].d = 0
__builtin_memset(&arg1[2], 0, 0x30)
void* rcx = &arg1[8]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x12]
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[0x10] = 0
arg1[0x11] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x1c]
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x2f]
arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
arg1[0x22] = 0
arg1[0x23].d = 0
*arg1 = &data_143336508
arg1[0x24].d = 0x7f7fffff
__builtin_memset(&arg1[0x25], 0, 0x50)
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

__builtin_memset(rcx_3, 0, 0x1c)
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
arg1[0x35] = 0
arg1[0x36].d = 0
return arg1
