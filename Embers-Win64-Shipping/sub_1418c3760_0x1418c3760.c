// 函数: sub_1418c3760
// 地址: 0x1418c3760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg6 + 0x28)
void*** rax = j_sub_140a82f30(0xb0)
void*** rcx = rax

if (rbx == 0)
    void*** rax_2 = nullptr
    
    if (rcx != 0)
        rax_2 = sub_1418b90f0(rcx, *(arg1 + 0x58), arg3, arg4, arg5, arg6, 0)
    
    *arg2 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    return arg2

if (rax == 0)
    rcx = rax
else
    *rcx = &data_142d3ff08
    rcx[1].d = 0
    *(rcx + 0xc) = 0
    rcx[2].w = 0x100
    rcx[3] = 0
    rcx[4].d = 0
    rcx[6] = 0
    rcx[7].d = 0
    *(rcx + 0x3c) = 0x40
    __builtin_memset(rcx + 0x44, 0, 0x60)
    *rcx = &data_142fec178
    rcx[5] = &data_142fec180
    rcx[0x15].d = 0

*arg2 = rcx

if (rcx != 0)
    rcx[1].d += 1

return arg2
