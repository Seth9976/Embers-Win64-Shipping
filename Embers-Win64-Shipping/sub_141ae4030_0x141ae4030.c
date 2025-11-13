// 函数: sub_141ae4030
// 地址: 0x141ae4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ae3a40(arg1)
*arg1 = &data_143041498
sub_141a8d660(&arg1[0xdc])
arg1[0xf5] = &data_143040350
__builtin_memset(&arg1[0xf6], 0, 0x38)
arg1[0xfd] = 0x3f800000
arg1[0xfe].w = 0x100
arg1[0x100] = 0
arg1[0xff] = &data_143040350
__builtin_memset(&arg1[0x101], 0, 0x30)
arg1[0x107] = 0x3f800000
arg1[0x108].w = 0x100
sub_141a8e480(&arg1[0x109])
arg1[0x11b] = 0
void* rcx_2 = &arg1[0x11d]
arg1[0x11c] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x121].d = 0xffffffff
*(arg1 + 0x90c) = 0
arg1[0x123] = 0
arg1[0x124].d = 0
return arg1
