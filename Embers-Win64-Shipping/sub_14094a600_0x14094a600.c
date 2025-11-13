// 函数: sub_14094a600
// 地址: 0x14094a600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14215cf50(arg1, arg2)
*arg1 = &data_142e2ae30
__builtin_memset(&arg1[6], 0, 0x20)
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
sub_1409198b0(&arg1[0xb])
arg1[0x22] = 0
arg1[0x23].d = 0
void*** rax = sub_1405978f0(0x28, &arg1[0x22])

if (rax != 0)
    *rax = &data_142e33d48
    sub_140d3a3a0(&rax[1], arg1)
    rax[2] = sub_14096b8a0
    rax[4] = sub_140a387b0()
    *rax = &data_142e33da0

arg1[0x24] = 0
return arg1
