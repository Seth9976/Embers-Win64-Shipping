// 函数: sub_141e90d10
// 地址: 0x141e90d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x2c) = 0x7f
void* rcx = &arg1[0xd]
*arg1 = &data_143257ce0
__builtin_memset(&arg1[9], 0, 0x20)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
arg1[0x15].d = 0x3f000000
return arg1
