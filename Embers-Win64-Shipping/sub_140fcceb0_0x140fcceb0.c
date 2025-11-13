// 函数: sub_140fcceb0
// 地址: 0x140fcceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg6 + 8)

if (rcx != 0)
    (*(*rcx + 0x20))(rcx)

void*** rax_2 = j_sub_140a82f30(0x28)
void*** rcx_1 = rax_2

if (rax_2 == 0)
    rcx_1 = nullptr
else
    *rcx_1 = &data_142d3ff08
    rcx_1[1].d = 0
    *rcx_1 = &data_142ef2938
    rcx_1[4].d = arg5
    *(rcx_1 + 0xc) = 0
    rcx_1[2].w = 0x100
    rcx_1[3].d = arg3
    *(rcx_1 + 0x1c) = arg4

*arg2 = rcx_1

if (rcx_1 != 0)
    rcx_1[1].d += 1

return arg2
