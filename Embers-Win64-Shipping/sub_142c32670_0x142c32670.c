// 函数: sub_142c32670
// 地址: 0x142c32670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx_2 = (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))
uint64_t r10 = zx.q(arg2)
int128_t* const r8_4 = &data_14369a5d0
int64_t rdi_1 = zx.q(*(arg1 + 7))
    + ((zx.q(*(arg1 + 6)) + (((zx.q(*(arg1 + 4)) << 8) + zx.q(*(arg1 + 5))) << 8)) << 8) + arg5
int128_t* const rdx = &data_14369a5d0

if (arg2 u< rbx_2)
    rdx = rdi_1 + (r10 << 2)

uint64_t r9 = zx.q((r10 + 1).d)
int128_t* const rdx_1 = &data_14369a5d0
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*rdx) << 8) + zx.d(*(rdx + 1))) << 8) + zx.d(*(rdx + 2)))
    << 8) + zx.d(*(rdx + 3)))).d f* 1.52587891e-05f

if (r9.d u< rbx_2)
    rdx_1 = rdi_1 + (r9 << 2)

uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*rdx_1) << 8) + zx.d(*(rdx_1 + 1))) << 8)
    + zx.d(*(rdx_1 + 2))) << 8) + zx.d(*(rdx_1 + 3)))).d f* 1.52587891e-05f
zmm1.d f- zmm0.d
int32_t zmm3

if (is_unordered.d(zmm1.d, zmm0.d) || zmm1.d f!= zmm0.d)
    zmm0.d = zmm0.d f- zmm1.d
    zmm3 = (arg3.d f- zmm1.d) f/ zmm0.d
else
    zmm3 = (zx.o(0)).d

int128_t* const r9_1

if (r9.d u< rbx_2)
    r9_1 = zx.q(*(arg4 + 7)) + (zx.q(*(arg4 + 6)) << 8) + arg5 + (r9 << 1)
else
    r9_1 = &data_14369a5d0

if (r10.d u< rbx_2)
    r8_4 = zx.q(*(arg4 + 7)) + (zx.q(*(arg4 + 6)) << 8) + arg5 + (r10 << 1)

zmm0.d = 1f f- zmm3
int16_t rdx_5 = zx.w(*r9_1) * 0x100
uint16_t rax_20 = zx.w(*(r9_1 + 1))
arg3.d = _mm_cvtepi32_ps(zx.o(sx.d(zx.w(*(r8_4 + 1)) + zx.w(*r8_4) * 0x100))).d f* zmm0.d
zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_20 + rdx_5))).d f* zmm3
arg3.d = arg3.d f+ zmm1.d
return arg3
