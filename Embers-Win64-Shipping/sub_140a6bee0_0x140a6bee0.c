// 函数: sub_140a6bee0
// 地址: 0x140a6bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142e625b0
    sub_140596d10(&rbx[1], arg1 + 8)

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*arg2 = rbx
arg2[1] = rax_1
return arg2
