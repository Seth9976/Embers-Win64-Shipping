// 函数: sub_14038b0f0
// 地址: 0x14038b0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg1
int128_t zmm8 = 0x3f800000

if (not(8f f> zmm6.d))
    return 0x3f800000

if (not(zmm6.d f> -8f))
    return 0xbf800000

if (not(0f f<= zmm6.d))
    zmm6 ^= data_142d3f780
    zmm8 = 0xbf800000

arg1.d = zmm6.d f* 25f
arg1.d = arg1.d f+ 0.5f
arg1.q = fconvert.d(arg1.d)
int32_t rax_1 = int.d(floor(arg1.q).q)
uint128_t zmm2 = *(&data_1435fdf80 + (sx.q(rax_1) << 2))
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_1)).d f* 0.0399999991f
zmm6.d = zmm6.d f- zmm1.d
zmm1.d = zmm2.d f* zmm2.d
arg1.d = 1f f- zmm1.d
zmm1.d = zmm2.d f* zmm6.d
arg1.d = arg1.d f* zmm6.d
int128_t zmm7
zmm7.d = 1f f- zmm1.d
arg1.d = arg1.d f* zmm7.d
arg1.d = arg1.d f+ zmm2.d
arg1.d = arg1.d f* zmm8.d
return arg1
