// 函数: sub_140744780
// 地址: 0x140744780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142d99c60
__builtin_memset(&arg1[3], 0, 0x18)
void* rcx = &arg1[6]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x10]
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xe] = 0
arg1[0xf] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
return arg1
