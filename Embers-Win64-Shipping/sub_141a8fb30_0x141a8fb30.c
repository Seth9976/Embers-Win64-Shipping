// 函数: sub_141a8fb30
// 地址: 0x141a8fb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8cb50(arg1, arg2)
*arg1 = &data_143041498
arg1[0xdc] = &data_14303fd20
arg1[0xdd] = 0
arg1[0xde].d = 0xffffffff
*(arg1 + 0x6f4) = 0
arg1[0xdf] = 0
arg1[0xe0].d = 0xffffffff
*(arg1 + 0x704) = 0
arg1[0xe1] = 0
arg1[0xe2].d = 0x3f800000
*(arg1 + 0x714) = 0x3f800000
*(arg1 + 0x71c) = 0xffffffff
arg1[0xe4] = 0
arg1[0xe5].w = 0
arg1[0xe6] = 0
sub_141ddd6c0(&arg1[0xe7], 0x3e4ccccd)
arg1[0xed] = 0
arg1[0xee] = 0
void* rcx_1 = &arg1[0x11d]
arg1[0xef] = 0x3f800000
arg1[0xf0].d = 0x3f800000
*(arg1 + 0x784) = 0x3f800000
*(arg1 + 0x78c) = 0
arg1[0xf2].d = 0x3f800000
*(arg1 + 0x794) = 0x41200000
arg1[0xf3] = 0x41200000
arg1[0xf4].d = 0
*(arg1 + 0x7a4) = 0x100
arg1[0xf5] = &data_143040350
__builtin_memset(&arg1[0xf6], 0, 0x38)
arg1[0xfd] = 0x3f800000
arg1[0xfe].w = 0x100
arg1[0xff] = &data_143040350
__builtin_memset(&arg1[0x100], 0, 0x38)
arg1[0x107] = 0x3f800000
arg1[0x108].w = 0x100
arg1[0x10a] = 0
arg1[0x109] = &data_1430407a8
__builtin_memset(&arg1[0x10b], 0, 0x39)
arg1[0x113].b = 0
__builtin_memset(&arg1[0x114], 0, 0x48)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x121].d = 0xffffffff
*(arg1 + 0x90c) = 0
arg1[0x123] = 0
arg1[0x124].d = 0
return arg1
