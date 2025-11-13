// 函数: sub_140fcd090
// 地址: 0x140fcd090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x68)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    *rcx = &data_142d3ff08
    rcx[1].d = 0
    *rcx = &data_142ef2948
    *(rcx + 0xc) = 0
    rcx[2].w = 0x100
    rcx[3] = 0
    *(rcx + 0x20) = *(arg9 + 0x10)
    rcx[6].d = *(arg9 + 0x20)
    *(rcx + 0x34) = arg6
    rcx[7].d = arg7
    *(rcx + 0x3c) = zx.d(arg5)
    rcx[8].d = arg8
    rcx[9] = &rcx[0xa]
    rcx[0xa] = -0x3810000020000000
    rcx[0xb] = 0
    *rcx = &data_142ef29a0
    rcx[0xc].d = arg3
    *(rcx + 0x64) = arg4

*arg2 = rcx

if (rcx != 0)
    rcx[1].d += 1

return arg2
