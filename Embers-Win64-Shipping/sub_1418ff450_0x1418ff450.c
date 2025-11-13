// 函数: sub_1418ff450
// 地址: 0x1418ff450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)

if (rax == 0)
    rax = nullptr
else
    int64_t rcx = *arg3
    *rax = &data_142d3ff08
    rax[1].d = 0
    *rax = &data_142efcaa0
    *(rax + 0xc) = 0
    rax[2].w = 0x100
    rax[3].d = 0
    *(rax + 0x1c) = rcx
    *rax = &data_142ff1c58
    rax[5] = 0
    rax[6] = 0

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
