// 函数: sub_141029f50
// 地址: 0x141029f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)

if (rax == 0)
    rax = nullptr
else
    int64_t rcx_1 = *arg3
    void* r10_1 = *(**(arg1 + 0x20) + 0x4f0)
    *rax = &data_142d3ff08
    rax[1].d = 0
    *rax = &data_142efcaa0
    *(rax + 0xc) = 0
    rax[2].w = 0x100
    rax[3].d = 0
    *(rax + 0x1c) = rcx_1
    *rax = &data_142efcce0
    rax[5] = r10_1
    
    if (r10_1 != 0)
        *(r10_1 + 8) += 1
    
    rax[6] = 0

*arg2 = rax

if (rax != 0)
    rax[1].d += 1

return arg2
