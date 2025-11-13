// 函数: sub_140b78360
// 地址: 0x140b78360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(&arg1[2], 0, 0x64)
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
void* rcx_1 = &arg1[0x34]
arg1[0x28] = 0xffffffff
arg1[0x29] = 0
*(arg1 + 0xb0) = 0
arg1[0x2e] = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x3c] = 0xffffffff
arg1[0x3d] = 0
*(arg1 + 0x100) = 0
arg1[0x42] = 0
__builtin_memset(&arg1[0x46], 0, 0x20)
*arg1 = 3
arg1[0x44].w = 0
return arg1
