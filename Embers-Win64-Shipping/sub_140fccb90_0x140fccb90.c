// 函数: sub_140fccb90
// 地址: 0x140fccb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)

if (rax == 0)
    rax = nullptr
else
    *rax = &data_142d3ff08
    rax[1].d = 0
    *(rax + 0xc) = 0
    rax[2].w = 0x100
    __builtin_memset(&rax[3], 0, 0x14)
    *rax = &data_142ef2930
    *(rax + 0x2c) = 5
    rax[6] = 0

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
