// 函数: sub_140949e30
// 地址: 0x140949e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14215cf50(arg1, arg2)
*arg1 = &data_142e26828
__builtin_memset(&arg1[6], 0, 0x20)
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xb] = 0
arg1[0xc].d = 0
void*** rax = sub_1405978f0(0x28, &arg1[0xb])

if (rax != 0)
    *rax = &data_142e335b8
    sub_140d3a3a0(&rax[1], arg1)
    rax[2] = sub_14096b3d0
    rax[4] = sub_140a387b0()
    *rax = &data_142e33610

arg1[0xd] = 0
return arg1
