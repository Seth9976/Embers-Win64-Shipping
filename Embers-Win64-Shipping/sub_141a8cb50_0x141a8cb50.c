// 函数: sub_141a8cb50
// 地址: 0x141a8cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = data_143f2b820
*arg1 = &data_14303f920
float zmm1[0x4] = data_143f2b810
*(arg1 + 0x20) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x30) = _mm_and_ps(data_143f2b810, zmm3)
float zmm2[0x4] = data_143f2b810
*(arg1 + 0x50) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x40) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x60) = _mm_and_ps(data_143f2b810, zmm3)
zmm2 = data_143f2b810
*(arg1 + 0x80) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x70) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x90) = _mm_and_ps(data_143f2b810, zmm3)
arg1[0x14] = arg2
int64_t* rdi = *(arg2 + 0x10)
void* rax_2

if (rdi == 0)
    rax_2 = nullptr
else
    rax_2 = sub_140d21950(rdi, sub_14245d9a0())
    
    if (rax_2 == 0)
        void* rax_3 = sub_140bdf670()
        void* rdx_1 = rdi[2]
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            rax_2 = nullptr
        else
            if (rdi[0x23] == 0)
                (*(*rdi + 0x390))(rdi)
            
            void* rdi_1 = rdi[0x54]
            
            if (rdi_1 == 0)
                rax_2 = nullptr
            else
                rax_2 = sub_140d21950(rdi_1, sub_14245d9a0())

arg1[0x15] = rax_2
void* rcx_4 = &arg1[0x1f]
__builtin_memset(&arg1[0x16], 0, 0x14)
*(arg1 + 0xc4) = 0x3f800000
__builtin_memset(&arg1[0x19], 0, 0x30)
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_8 = *(rcx_4 + 0x10)

if (rax_8 != 0)
    rcx_4 = rax_8

*rcx_4 = 0
*(rcx_4 + 8) = 0
void* rcx_5 = &arg1[0x39]
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
__builtin_memset(&arg1[0x27], 0, 0x90)
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_9 = *(rcx_5 + 0x10)

if (rax_9 != 0)
    rcx_5 = rax_9

*rcx_5 = 0
*(rcx_5 + 8) = 0
void* rcx_6 = &arg1[0x48]
arg1[0x3d].d = 0xffffffff
*(arg1 + 0x1ec) = 0
arg1[0x3f] = 0
arg1[0x40].d = 0
arg1[0x41].d = 0
arg1[0x42].d = 0xffffffff
*(arg1 + 0x214) = 0
__builtin_memset(&arg1[0x44], 0, 0x20)
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_10 = *(rcx_6 + 0x10)

if (rax_10 != 0)
    rcx_6 = rax_10

*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x4c].d = 0xffffffff
*(arg1 + 0x264) = 0
arg1[0x4e] = 0
arg1[0x4f].d = 0
*(arg1 + 0x214) = 0x5629063
arg1[0x43].d = 0x5629063
arg1[0x50].d = 0
arg1[0x51] = 0
arg1[0x52] = 0
void* rcx_7 = &arg1[0x53]
*(rcx_7 + 0x10) = 0
void* r8_2 = &arg1[0x5f]
*(rcx_7 + 0x18) = 0
int64_t i_1 = 3
*(rcx_7 + 0x1c) = 0x80
void* rdx_3 = r8_2 + 0x20
void* rax_11 = *(rcx_7 + 0x10)

if (rax_11 != 0)
    rcx_7 = rax_11

*rcx_7 = 0
*(rcx_7 + 8) = 0
arg1[0x57].d = 0xffffffff
*(arg1 + 0x2bc) = 0
arg1[0x59] = 0
arg1[0x5a].d = 0
__builtin_memset(&arg1[0x5b], 0, 0x20)
int64_t i

do
    *r8_2 = 0
    void* rcx_8 = rdx_3 - 0x10
    *(rdx_3 - 0x18) = 0
    r8_2 += 0x50
    *rdx_3 = 0
    *(rdx_3 + 8) = 0
    *(rdx_3 + 0xc) = 0x80
    void* rax_12 = *rdx_3
    rdx_3 += 0x50
    
    if (rax_12 != 0)
        rcx_8 = rax_12
    
    *rcx_8 = 0
    *(rcx_8 + 8) = 0
    *(rdx_3 - 0x40) = 0xffffffff
    *(rdx_3 - 0x3c) = 0
    *(rdx_3 - 0x30) = 0
    *(rdx_3 - 0x28) = 0
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
zmm1 = data_143f2b810
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x470) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x480) = zx.o(0)
*(arg1 + 0x490) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
sub_141e902d0(&arg1[0x94])
arg1[0xbd] = 0
float zmm1_1[0x4] = data_143f2b810
*(arg1 + 0x600) = zx.o(0)
zmm1_1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x5f0) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(arg1 + 0x610) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
zmm2 = data_143f2b810
*(arg1 + 0x630) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x620) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x640) = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
__builtin_memset(&arg1[0xcb], 0, 0x80)
*(arg1 + 0x6d9) &= 0xf8
arg1[0xdb].b = 0
return arg1
