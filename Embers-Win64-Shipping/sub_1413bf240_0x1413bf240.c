// 函数: sub_1413bf240
// 地址: 0x1413bf240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413c2d70(arg1)
arg1[0x76].d = 0x3f800000
void* rcx = &arg1[0xba]
__builtin_memset(&arg1[0x77], 0, 0x58)
__builtin_memset(&arg1[0x83], 0, 0x28)
__builtin_memset(&arg1[0x89], 0, 0x20)
__builtin_memset(&arg1[0x8e], 0, 0xa8)
__builtin_memset(&arg1[0xa4], 0, 0xb0)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xbe].d = 0xffffffff
*(arg1 + 0x5f4) = 0
arg1[0xc0] = 0
arg1[0xc1].d = 0
__builtin_memset(&arg1[0xc2], 0, 0x30)
return arg1
