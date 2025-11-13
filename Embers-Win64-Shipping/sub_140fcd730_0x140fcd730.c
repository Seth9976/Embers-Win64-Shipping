// 函数: sub_140fcd730
// 地址: 0x140fcd730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x30)

if (rax != 0)
    *rax = &data_142d3ff08
    rax[1].d = 0
    *(rax + 0xc) = 0
    rax[2].w = 0x100
    __builtin_memset(&rax[3], 0, 0x15)
    *rax = &data_142ef2928

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
