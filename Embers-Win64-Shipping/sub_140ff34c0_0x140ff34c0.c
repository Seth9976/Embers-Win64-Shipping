// 函数: sub_140ff34c0
// 地址: 0x140ff34c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg4
void*** rax = j_sub_140a82f30(0xf0)
void*** r8 = rax

if (rax == 0)
    r8 = nullptr
else
    *r8 = &data_142d3ff08
    int128_t var_24_1 = zx.o(0)
    r8[1].d = 0
    *(r8 + 0xc) = 0
    r8[2].w = 0x100
    r8[3] = 0
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    *(r8 + 0x34) = 0
    *(r8 + 0x3c) = 0
    *(r8 + 0x20) = 1.o
    r8[6].d = temp0_1
    
    if (rdi == 0)
        rdi = &r8[0xa]
    
    r8[9] = rdi
    r8[0xa] = -0x3810000020000000
    r8[0xb] = 0
    r8[0xc] = 0
    r8[0xe].d = 0
    *(r8 + 0x74) = 0xffffffff
    r8[0xf].b = 0
    r8[0x10] = arg1
    r8[0x11] = 0
    r8[0x12].d = 0
    r8[0x13] = &r8[0xd]
    __builtin_memset(&r8[0x14], 0, 0x21)
    __builtin_memset(r8 + 0xc4, 0, 0x28)
    *r8 = &data_142ef5970
    r8[0xd] = &data_142ef59c8
    r8[0x13] = 0

*arg2 = r8

if (r8 != 0)
    r8[1].d += 1

return arg2
