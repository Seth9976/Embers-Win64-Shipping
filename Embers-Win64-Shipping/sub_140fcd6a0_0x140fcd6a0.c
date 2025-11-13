// 函数: sub_140fcd6a0
// 地址: 0x140fcd6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg5 + 8)

if (rcx != 0)
    (*(*rcx + 0x20))(rcx)

void*** rax_2 = j_sub_140a82f30(0x20)

if (rax_2 != 0)
    *rax_2 = &data_142d3ff08
    rax_2[1].d = 0
    *rax_2 = &data_142ef2940
    *(rax_2 + 0xc) = 0
    rax_2[2].w = 0x100
    rax_2[3].d = arg3
    *(rax_2 + 0x1c) = arg4

*arg2 = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1

return arg2
