// 函数: sub_141946330
// 地址: 0x141946330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3
void*** rax = j_sub_140a82f30(0x70)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    *rcx = &data_142d3ff08
    int128_t var_24_1 = zx.o(0)
    rcx[1].d = 0
    *(rcx + 0xc) = 0
    rcx[2].w = 0x100
    rcx[3] = 0
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    *(rcx + 0x34) = 0
    *(rcx + 0x3c) = 0
    *(rcx + 0x20) = 1.o
    rcx[6].d = temp0_1
    
    if (rdi == 0)
        rdi = &rcx[0xa]
    
    rcx[9] = rdi
    rcx[0xa] = -0x3810000020000000
    rcx[0xb] = 0
    rcx[0xc] = 0
    *rcx = &data_142ff7360
    rcx[0xd] = 0

*arg2 = rcx

if (rcx != 0)
    rcx[1].d += 1

return arg2
