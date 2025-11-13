// 函数: sub_140fcc9d0
// 地址: 0x140fcc9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)

if (rax == 0)
    rax = nullptr
else
    rax[1] = 0
    rax[2] = 0
    *rax = &data_142d3ff08
    rax[1].d = 0
    *(rax + 0xc) = 0
    *rax = &data_142ef2918
    rax[2].w = 0x100

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
