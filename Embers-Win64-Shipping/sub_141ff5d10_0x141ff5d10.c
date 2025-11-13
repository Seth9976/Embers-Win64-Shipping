// 函数: sub_141ff5d10
// 地址: 0x141ff5d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_14329bb58
arg1[5] = &data_14329bdb8
arg1[6] = 0
arg1[7] = 0
void*** rax = j_sub_140a82f30(0x20)

if (rax == 0)
    rax = nullptr
else
    rax[1].d = 1
    *rax = &data_142df7bd8
    *(rax + 0xc) = 1
    rax[2] = 0
    rax[3] = 0

arg1[9] = &rax[2]
arg1[0xa] = rax
return arg1
