// 函数: sub_140ff3390
// 地址: 0x140ff3390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3
void*** rax = j_sub_140a82f30(0xf0)
void*** r9 = rax

if (rax == 0)
    r9 = nullptr
else
    *r9 = &data_142d3ff08
    int128_t var_24_1 = zx.o(0)
    r9[1].d = 0
    *(r9 + 0xc) = 0
    r9[2].w = 0x100
    r9[3] = 0
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    *(r9 + 0x34) = 0
    *(r9 + 0x3c) = 0
    *(r9 + 0x20) = 1.o
    r9[6].d = temp0_1
    
    if (rdi == 0)
        rdi = &r9[0xa]
    
    r9[9] = rdi
    r9[0xa] = -0x3810000020000000
    r9[0xb] = 0
    r9[0xc] = 0
    r9[0xe].d = 0
    *(r9 + 0x74) = 0xffffffff
    r9[0xf].b = 0
    r9[0x10] = arg1
    r9[0x11] = 0
    r9[0x12].d = 0
    r9[0x13] = &r9[0xd]
    __builtin_memset(&r9[0x14], 0, 0x21)
    __builtin_memset(r9 + 0xc4, 0, 0x28)
    *r9 = &data_142ef5970
    r9[0xd] = &data_142ef59c8
    r9[0x13] = 0

*arg2 = r9

if (r9 != 0)
    r9[1].d += 1

return arg2
