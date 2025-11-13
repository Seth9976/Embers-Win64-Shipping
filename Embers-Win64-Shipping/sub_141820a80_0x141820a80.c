// 函数: sub_141820a80
// 地址: 0x141820a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1 + 8, 0, 0x50)
int64_t* rcx = arg1 + 0x58
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = arg1 + 0xd8
*(arg1 + 0x78) = 0xffffffff
*(arg1 + 0x7c) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
__builtin_memset(arg1 + 0x98, 0, 0x40)
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = arg1 + 0x128
*(arg1 + 0xf8) = 0xffffffff
*(arg1 + 0xfc) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
*(arg1 + 0x148) = 0xffffffff
*(arg1 + 0x14c) = 0
*(arg1 + 0x158) = 0
*(arg1 + 0x160) = 0
return arg1
