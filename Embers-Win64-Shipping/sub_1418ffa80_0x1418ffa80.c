// 函数: sub_1418ffa80
// 地址: 0x1418ffa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)

if (rax == 0)
    rax = nullptr
else
    *rax = &data_142d3ff08
    rax[1].d = 0
    *(rax + 0xc) = 0
    rax[2].w = 0x100
    rax[3].b = 0
    *rax = &data_142ff1c40
    rax[4] = 0
    rax[5] = 0

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
