// 函数: sub_140b77b60
// 地址: 0x140b77b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
__builtin_memset(&arg1[2], 0, 0xf9)
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
void* rcx = &arg1[0x46]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x5a]
arg1[0x4e] = 0xffffffff
arg1[0x4f] = 0
*(arg1 + 0x148) = 0
arg1[0x54] = 0
*(arg1 + 0x158) = 0
*(arg1 + 0x160) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x62] = 0xffffffff
arg1[0x63] = 0
*(arg1 + 0x198) = 0
arg1[0x68] = 0
*(arg1 + 0x1a8) = 0
*(arg1 + 0x1b0) = 0
return arg1
