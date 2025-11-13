// 函数: sub_141ed6210
// 地址: 0x141ed6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x2b0)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rdi = &data_143264280
    rdi[0xc].d &= 0xfffffff8
    *(rdi + 0x64) = 0
    *(rdi + 0xcc) = 0xffffffff
    rdi[0x1a].d = 0
    *(rdi + 0xd4) = 0xffffffff
    rdi[0x1b].d = 0
    *(rdi + 0xdc) = 0xffffffff
    __builtin_memset(&rdi[0x1c], 0, 0x14)
    memset(rdi + 0x6c, 0, 0x88)
    *(rdi + 0x74) = 0x3f800000
    rdi[0x25].d = 0xffffffff
    *(rdi + 0x12c) = 0
    *(rdi + 0x134) = 0
    rdi[0x28].d = 0xffffffff
    *(rdi + 0x144) = 0
    *(rdi + 0x14c) = 0
    rdi[0x35].d = 0xffffffff
    *(rdi + 0x1ac) = 0
    *(rdi + 0x1b4) = 0
    rdi[0x38].d = 0xffffffff
    *(rdi + 0x1c4) = 0
    *(rdi + 0x1cc) = 0
    rdi[0x41].d = 0xffffffff
    *(rdi + 0x20c) = 0
    rdi[0x44].b = 0
    *(rdi + 0x224) = 0
    float zmm1[0x4] = data_143f3a950
    zmm1[0].q = zx.o(0) u>> 0x40
    *(rdi + 0x230) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    *(rdi + 0x240) = zx.o(0)
    *(rdi + 0x250) = __andps_xmmxud_memxud(data_143f3a950, data_143f3a960)
    sub_141ff42b0(&rdi[0x4c])
    *(rdi + 0x29c) = 0x3f800000
    __builtin_strncpy(&rdi[0x53], "fff?", 4)
    rdi[0x54].d = 0x3f7ef9db
    *(rdi + 0x2a4) = 0x41200000

*arg2 = rdi
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rdi

arg2[1] = rax_1
return arg2
