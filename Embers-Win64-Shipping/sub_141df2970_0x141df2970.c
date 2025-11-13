// 函数: sub_141df2970
// 地址: 0x141df2970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0x13]
*arg1 = &data_142e0b8a0
__builtin_memset(&arg1[7], 0, 0x60)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x26]
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
__builtin_memset(&arg1[0x1b], 0, 0x20)
arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
__builtin_memset(&arg1[0x22], 0, 0x20)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x34]
arg1[0x2a].d = 0xffffffff
*(arg1 + 0x154) = 0
arg1[0x2c] = 0
arg1[0x2d].d = 0
*(arg1 + 0x104) = 0x5629063
arg1[0x21].d = 0x5629063
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = -1
arg1[0x31].d = 0xffff
arg1[0x32] = 0
arg1[0x33] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x38].d = 0xffffffff
*(arg1 + 0x1c4) = 0
arg1[0x3a] = 0
arg1[0x3b].d = 0
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x40].b = 0
*(arg1 + 0x204) = 0
float zmm1[0x4] = data_143f393b0
*(arg1 + 0x220) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x210) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x230) = __andps_xmmxud_memxud(data_143f393b0, data_143f393c0)
__builtin_memset(&arg1[0x49], 0, 0x20)
arg1[6].b = 3
arg1[0x1f].b = 0
*(arg1 + 0x31) = (*(arg1 + 0x31) & 0xc3) | 1
return arg1
