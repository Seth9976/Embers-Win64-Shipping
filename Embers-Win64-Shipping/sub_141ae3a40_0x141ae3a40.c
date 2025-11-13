// 函数: sub_141ae3a40
// 地址: 0x141ae3a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = data_143f2c070
*arg1 = &data_14303f920
float zmm1[0x4] = data_143f2c060
*(arg1 + 0x20) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x30) = _mm_and_ps(data_143f2c060, zmm3)
float zmm2[0x4] = data_143f2c060
*(arg1 + 0x50) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x40) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x60) = _mm_and_ps(data_143f2c060, zmm3)
zmm2 = data_143f2c060
*(arg1 + 0x80) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x70) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x90) = _mm_and_ps(data_143f2c060, zmm3)
__builtin_memset(&arg1[0x14], 0, 0x24)
*(arg1 + 0xc4) = 0x3f800000
__builtin_memset(&arg1[0x19], 0, 0x30)
void* rcx = &arg1[0x1f]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x39]
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
__builtin_memset(&arg1[0x27], 0, 0x90)
*(rcx_1 + 0x1c) = 0x80
void* r8 = &arg1[0x5f]
void* rax_1 = *(rcx_1 + 0x10)
int64_t i_1 = 3
void* rdx = r8 + 0x20

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x48]
arg1[0x3d].d = 0xffffffff
*(arg1 + 0x1ec) = 0
arg1[0x3f] = 0
arg1[0x40].d = 0
arg1[0x41].d = 0
arg1[0x42].d = 0xffffffff
*(arg1 + 0x214) = 0
__builtin_memset(&arg1[0x44], 0, 0x20)
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x53]
arg1[0x4c].d = 0xffffffff
*(arg1 + 0x264) = 0
arg1[0x4e] = 0
arg1[0x4f].d = 0
*(arg1 + 0x214) = 0x5629063
arg1[0x43].d = 0x5629063
arg1[0x50].d = 0
arg1[0x51] = 0
arg1[0x52] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x57].d = 0xffffffff
*(arg1 + 0x2bc) = 0
arg1[0x59] = 0
arg1[0x5a].d = 0
__builtin_memset(&arg1[0x5b], 0, 0x20)
int64_t i

do
    *r8 = 0
    void* rcx_4 = rdx - 0x10
    *(rdx - 0x18) = 0
    r8 += 0x50
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    void* rax_4 = *rdx
    rdx += 0x50
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    *rcx_4 = 0
    *(rcx_4 + 8) = 0
    *(rdx - 0x40) = 0xffffffff
    *(rdx - 0x3c) = 0
    *(rdx - 0x30) = 0
    *(rdx - 0x28) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x7d] = 0
arg1[0x7e] = 0
arg1[0x7f] = -1
arg1[0x80].d = 0xffff
arg1[0x81] = -1
arg1[0x82].d = 0xffff
arg1[0x83] = -1
arg1[0x84].d = 0xffff
arg1[0x85] = -1
arg1[0x86].d = 0xffff
arg1[0x87] = -1
arg1[0x88].d = 0xffff
arg1[0x89] = 0
arg1[0x8a] = 0
arg1[0x8c].b = 0
*(arg1 + 0x464) = 0
zmm1 = data_143f2c060
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x470) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x480) = zx.o(0)
*(arg1 + 0x490) = _mm_and_ps(data_143f2c060, zmm3)
sub_141e902d0(&arg1[0x94])
arg1[0xbd] = 0
float zmm1_1[0x4] = data_143f2c060
*(arg1 + 0x600) = zx.o(0)
zmm1_1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x5f0) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(arg1 + 0x610) = __andps_xmmxud_memxud(data_143f2c060, data_143f2c070)
zmm2 = data_143f2c060
*(arg1 + 0x630) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x620) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x640) = __andps_xmmxud_memxud(data_143f2c060, data_143f2c070)
__builtin_memset(&arg1[0xcb], 0, 0x80)
*(arg1 + 0x6d9) &= 0xf8
arg1[0xdb].b = 0
return arg1
