// 函数: sub_140fccb00
// 地址: 0x140fccb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)

if (rax != 0)
    *rax = &data_142d3ff08
    rax[1].d = 0
    *rax = &data_142ef2bd0
    *(rax + 0xc) = 0
    rax[2].w = 0x100
    rax[3] = arg3
    
    if (arg3 != 0)
        *(arg3 + 8) += 1

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
