// 函数: sub_140fcd8c0
// 地址: 0x140fcd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x68)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    int128_t var_24_1 = zx.o(0)
    *rcx = &data_142d3ff08
    rcx[1].d = 0
    *(rcx + 0xc) = 0
    rcx[2].w = 0x100
    rcx[3] = 0
    *(rcx + 0x20) = 1.o
    rcx[9] = &rcx[0xa]
    *(rcx + 0x34) = 1
    rcx[7].d = 1
    *(rcx + 0x3c) = 2
    rcx[8].d = 1
    rcx[6].d = _mm_bsrli_si128(zx.o(0), 0xc)
    rcx[0xa] = -0x3810000020000000
    rcx[0xb] = 0
    *rcx = &data_142ef29a0
    rcx[0xc].d = 1
    *(rcx + 0x64) = 1

*arg2 = rcx

if (rcx != 0)
    rcx[1].d += 1

return arg2
