// 函数: sub_1418e6510
// 地址: 0x1418e6510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    *rcx = &data_142d3ff08
    rcx[1].d = 0
    *rcx = &data_142feee08
    *(rcx + 0xc) = 0
    rcx[2].w = 0x100
    rcx[3] = 0x7000101
    rcx[4].d = 7
    *(rcx + 0x24) = 0xffff
    rcx[3] = *arg3
    rcx[4].d = arg3[1].d
    *(rcx + 0x24) = *(arg3 + 0xc)

*arg2 = rcx

if (rcx != 0)
    rcx[1].d += 1

return arg2
