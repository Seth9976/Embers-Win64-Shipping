// 函数: sub_141865920
// 地址: 0x141865920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[5].w = 0xff
void* rcx = &arg1[0x10]
*(arg1 + 0x2c) = 0xffffffff
*arg1 = &data_142fe5f48
__builtin_memset(&arg1[6], 0, 0x50)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
__builtin_memset(&arg1[0x18], 0, 0x60)
return arg1
