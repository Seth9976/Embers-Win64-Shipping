// 函数: sub_140d15830
// 地址: 0x140d15830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = arg3
arg1[2] = 0
arg1[3].d = 0xfffff7b
*(arg1 + 0x1c) = 0x7f800000
__builtin_memset(arg1 + 0x24, 0, 0x24)
void* rcx = &arg1[9]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
void* rax_1 = *arg1
arg1[0x11] = 0
arg1[6] = *(rax_1 + 0x10)
return arg1
