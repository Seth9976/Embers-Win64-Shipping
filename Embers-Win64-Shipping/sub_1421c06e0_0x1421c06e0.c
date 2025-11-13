// 函数: sub_1421c06e0
// 地址: 0x1421c06e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* rax = sub_1421ad3d0(&data_143a2ee40, &arg_8, arg2)
*(arg1 + 0x28) = *rax
*(arg1 + 0x2c) = rax[1].w
int32_t* rax_2 = sub_1421ad3d0(&data_143a2ee40, &arg_8, &arg2[2])
*(arg1 + 0x2e) = *rax_2
*(arg1 + 0x32) = rax_2[1].w
int32_t* rax_4 = sub_1421ad3d0(&data_143a2ee40, &arg_8, &arg2[4])
uint128_t zmm3 = zx.o(0)
*(arg1 + 0x34) = *rax_4
int16_t rcx_1 = *(arg1 + 0x2c)
*(arg1 + 0x38) = rax_4[1].w
arg_8 = *(arg1 + 0x28)
int128_t zmm6

if (rcx_1 == 0)
    zmm6 = 0x3f800000
else
    zmm6 = zx.o(0)

uint32_t rax_8 = zx.d(arg_8:2.w)
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(arg_8.w)).d f* 0.001953125f
int16_t rcx_2 = *(arg1 + 0x32)
zmm2.d = zmm2.d f+ 0.0009765625f
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f* 0.001953125f
arg_8 = *(arg1 + 0x2e)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(zx.d(rcx_1) - 1))
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm1.d = zmm1.d f+ 0.0009765625f
zmm0.d = zmm0.d f* 0.001953125f
zmm2.d = zmm1.d
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm2.d = zmm0.d
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = zmm6.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
uint128_t var_38 = zmm2
*(arg1 + 0x40) = zmm2
*(arg1 + 0x50) = *(arg2 + 0x30)
*(arg1 + 0x60) = *(arg2 + 0x40)

if (rcx_2 == 0)
    zmm6 = 0x3f800000
else
    zmm6 = zx.o(0)

uint32_t rax_13 = zx.d(arg_8:2.w)
zmm2.d = _mm_cvtepi32_ps(zx.o(arg_8.w)).d f* 0.001953125f
zmm1 = _mm_cvtepi32_ps(zx.o(rax_13))
zmm2.d = zmm2.d f+ 0.0009765625f
zmm0 = _mm_cvtepi32_ps(zx.o(zx.d(rcx_2) - 1))
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm0.d = zmm0.d f* 0.001953125f
zmm1.d = zmm1.d f* 0.001953125f
zmm1.d = zmm1.d f+ 0.0009765625f
zmm2.d = zmm1.d
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm2.d = zmm0.d
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = zmm6.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
*(arg1 + 0x70) = zmm2
uint128_t var_38_1 = zmm2
*(arg1 + 0x80) = *(arg2 + 0x50)
*(arg1 + 0x90) = *(arg2 + 0x60)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xb0) = *(arg2 + 0x90)
uint32_t rcx_3 = zx.d(*(arg2 + 0x145))
zmm0 = zx.o(0)
*(arg1 + 0xe4) = 0
*(arg1 + 0xc0) = zx.o(0)
char rax_16 = *(arg2 + 0x144)

if (rax_16 == 3)
    *(arg1 + 0xc4) = 0x3f800000
else if (rcx_3 != 0)
    if (rcx_3 - 7 u> 2)
        *(arg1 + 0xc0) = 0x3f800000
    else
        *(arg1 + 0xc8) = 0x3f800000
    
    if (rcx_3.b == 9)
        zmm0 = 0x3fc90fdb
    
    *(arg1 + 0xe4) = zmm0.d
else if (rax_16 == 1)
    *(arg1 + 0xc0) = 0x3f800000
else if (rax_16 == 0)
    *(arg1 + 0xcc) = 0x3f800000

if ((arg2[0x2a].b & 1) == 0)
    zmm0 = zx.o(0)
else
    zmm0 = 0x3f800000

*(arg1 + 0xdc) = zmm0.d

if (*(arg2 + 0x144) != 6)
    zmm0 = zx.o(0)
    zmm2 = zx.o(0)
    zmm1 = zx.o(0)
else
    zmm1 = *(arg2 + 0x154)
    zmm0 = arg2[0x2b].d
    zmm0.d = zmm0.d f* zmm0.d
    *(arg1 + 0xcc) = 0x3f800000
    zmm1.d = zmm1.d f* zmm1.d
    zmm0.d = zmm0.d f- zmm1.d
    zmm2.d = 1f f/ _mm_max_ss(zmm0.d, 0x3f800000).d
    zmm0.d = zmm2.d f* zmm1.d
    zmm1 = 0x3f800000

*(arg1 + 0xd0) = zmm1.d
*(arg1 + 0xd4) = zmm2.d
*(arg1 + 0xd8) = zmm0.d
int16_t rcx_4 = *(arg1 + 0x38)
*(arg1 + 0xe0) = *(arg2 + 0x13c)
*(arg1 + 0xe8) = arg2[0x28].d
int32_t rax_19 = *(arg1 + 0x34)
*(arg1 + 0xf0) = arg2[0x29]
arg_8 = rax_19

if (rcx_4 == 0)
    zmm3 = 0x3f800000

uint32_t rax_21 = zx.d(arg_8:2.w)
zmm2.d = _mm_cvtepi32_ps(zx.o(arg_8.w)).d f* 0.001953125f
zmm1 = _mm_cvtepi32_ps(zx.o(rax_21))
zmm2.d = zmm2.d f+ 0.0009765625f
zmm0 = _mm_cvtepi32_ps(zx.o(zx.d(rcx_4) - 1))
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm0.d = zmm0.d f* 0.001953125f
zmm1.d = zmm1.d f* 0.001953125f
zmm1.d = zmm1.d f+ 0.0009765625f
zmm2.d = zmm1.d
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm2.d = zmm0.d
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = zmm3.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
*(arg1 + 0x100) = zmm2
uint128_t var_38_2 = zmm2
*(arg1 + 0x110) = *(arg2 + 0x70)
var_38_2:0xc.d = 0x3f800000
*(arg1 + 0x120) = *(arg2 + 0x80)
zmm2 = *(arg2 + 0x10c)
zmm3.d = (*(arg2 + 0x114)).d
zmm0 = *(arg2 + 0x11c)
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm2.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm0.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
*(arg1 + 0x130) = zmm3
zmm1 = arg2[0x22].d
zmm2 = arg2[0x24].d
uint128_t var_38_3 = zmm3
var_38_3:0xc.d = 0
zmm3.d = arg2[0x23].d.d
zmm0 = *(arg1 + 0x70)
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
*(arg1 + 0x150) = zmm0
zmm3.d = zmm1.d
*(arg1 + 0x160) = *(arg1 + 0x80)
zmm0 = *(arg1 + 0x90)
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
*(arg1 + 0x170) = zmm0
zmm3.d = zmm2.d
*(arg1 + 0x140) = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
*(arg1 + 0x180) = arg2[0x16]
*(arg1 + 0x188) = arg2[0x17].d
*(arg1 + 0x190) = *(arg2 + 0xbc)
*(arg1 + 0x198) = *(arg2 + 0xc4)
*(arg1 + 0x1a0) = arg2[0x19]
*(arg1 + 0x1a8) = arg2[0x1a].d
*(arg1 + 0x1b0) = *(arg2 + 0xd4)
*(arg1 + 0x1b8) = *(arg2 + 0xdc)
*(arg1 + 0x1c0) = arg2[0x1c]
*(arg1 + 0x1c8) = arg2[0x1d].d
*(arg1 + 0x1d0) = *(arg2 + 0xec)
*(arg1 + 0x1d8) = *(arg2 + 0xf4)
*(arg1 + 0x1e0) = arg2[0x1f]
*(arg1 + 0x1e8) = arg2[0x20].d
*(arg1 + 0x1ec) = *(arg2 + 0x124)
*(arg1 + 0x1f0) = arg2[0x25].d
*(arg1 + 0x1f4) = *(arg2 + 0x12c)
*(arg1 + 0x1f8) = arg2[0x26].d
*(arg1 + 0x1fc) = *(arg2 + 0x134)
*(arg1 + 0x200) = arg2[0x27].d
*(arg1 + 0x20) = *(arg2 + 0x104)
int32_t result = arg2[0x21].d
*(arg1 + 0x24) = result
return result
