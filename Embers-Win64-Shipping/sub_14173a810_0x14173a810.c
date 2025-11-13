// 函数: sub_14173a810
// 地址: 0x14173a810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = 1f
uint128_t zmm1
float zmm2

if (arg4 == 0xffffffff)
    zmm2 = (zx.o(0)).d
    zmm1 = zx.o(0)
else
    int64_t r9 = sx.q(arg4) * 3
    int64_t r8 = *(*(arg1 + 0x10) + 0x10)
    uint128_t zmm0 = zx.o(*(r8 + (r9 << 3) + 0xc))
    zmm3 = *(r8 + (r9 << 3) + 0x14)
    zmm2 = zmm0.d
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

zmm3 = zmm3 f* *(arg1 + 0x3c)
zmm1.d = zmm1.d f* *(arg1 + 0x38)
zmm2 = zmm2 f* *(arg1 + 0x34)
arg2[1] = zmm1.d
arg2[2] = zmm3
*arg2 = zmm2

if (not(sub_141750780(arg2).d f!= 0f))
    int32_t var_20_2 = 0x3f800000
    *arg2 = _mm_unpacklo_ps(zx.o(0), 0)
    arg2[2] = 0x3f800000

return arg2
