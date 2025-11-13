// 函数: sub_1418e7ca0
// 地址: 0x1418e7ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa8)
void*** rdi = rax

if (rax == 0)
    rdi = rax
else
    void* rdx = *(arg1 + 0x58)
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *rdi = &data_142ef2938
    *(rdi + 0xc) = 0
    rdi[4].d = arg5
    rdi[2].w = 0x100
    rdi[3].d = arg3
    *(rdi + 0x1c) = arg4
    sub_1418b91b0(&rdi[5], rdx, 0x20, arg4, arg5, arg6, 0)
    *rdi = &data_142feeeb8
    rdi[5] = &data_142feeec0

*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

return arg2
