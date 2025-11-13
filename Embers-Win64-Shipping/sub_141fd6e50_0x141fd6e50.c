// 函数: sub_141fd6e50
// 地址: 0x141fd6e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
void* r8 = &arg1[7]
*(arg1 + 0xc) = 4
*arg1 = &data_143293aa8
*(r8 + 0x1c) = 0x80
void* rax = *(r8 + 0x10)

if (rax != 0)
    r8 = rax

__builtin_memset(r8, 0, 0x1c)
arg1[0xf] = 0
arg1[0x10].d = 0
*(arg1 + 0x84) = 8
arg1[0x11] = 0
arg1[0x12] = 0
void* rcx = &arg1[0x13]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x1a]
arg1[0x17].d = 0xffffffff
__builtin_memset(arg1 + 0xbc, 0, 0x14)
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x24]
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
arg1[0x22] = 0
arg1[0x23] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x2e]
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0
arg1[0x2a] = 0
arg1[0x2b].d = 0
arg1[0x2c] = 0
arg1[0x2d] = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

__builtin_memset(rcx_3, 0, 0x1c)
arg1[0x32].d = 0xffffffff
*(arg1 + 0x194) = 0
arg1[0x34] = 0
arg1[0x35].d = 0
__builtin_memset(&arg1[0x36], 0, 0x28)
arg1[0x3b].d = arg2
return arg1
