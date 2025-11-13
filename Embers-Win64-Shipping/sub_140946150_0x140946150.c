// 函数: sub_140946150
// 地址: 0x140946150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int128_t zmm0 = *arg3
void*** rax = sub_1405978f0(0x30, arg1)

if (rax != 0)
    *rax = &data_142e33ea8
    sub_140d3a3a0(&rax[1], arg2)
    *(rax + 0x10) = zmm0
    rax[5] = sub_140a387b0()
    *rax = &data_142e33f00

return arg1
