// 函数: sub_1419d8470
// 地址: 0x1419d8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x188)
uint128_t zmm2 = zx.o(arg4[2])
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(*arg4))
int64_t arg_8 = rax
uint128_t zmm6 = zx.o(*arg3)
uint128_t zmm0
zmm0.d = float.s(zx.q(arg5))
uint128_t zmm7 = zx.o(arg3[1])
float zmm3 = 2f f/ zmm0.d
uint128_t zmm8 = zx.o(arg3[2])
uint128_t zmm9 = zx.o(arg3[3])
zmm0.d = float.s(zx.q(arg6))
zmm1.d = zmm1.d f* zmm3
float zmm5 = 2f f/ zmm0.d
zmm1.d = zmm1.d f- 1f
zmm2 = _mm_cvtepi32_ps(zmm2)
int32_t var_58 = zmm1.d
zmm2.d = zmm2.d f* zmm3
zmm1.d = _mm_cvtepi32_ps(zx.o(arg4[1])).d f* zmm5
zmm2.d = zmm2.d f- 1f
_mm_cvtepi32_ps(zmm6)
zmm0.d = 1f f- zmm1.d
int32_t var_50 = zmm2.d
zmm7 = _mm_cvtepi32_ps(zmm7)
int32_t var_54 = zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(arg4[3]))
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm0.d = zmm0.d f* zmm5
zmm9 = _mm_cvtepi32_ps(zmm9)
float var_4c = 1f f- zmm0.d
int32_t zmm6_1 = sub_1405d0e10(arg2, &arg_8, arg1 + 0x118, &var_58, 0)
arg_8 = *(arg2 + 0x188)
var_58 = zmm6_1
int32_t var_54_1 = zmm7.d
int32_t var_50_1 = zmm8.d
int32_t var_4c_1 = zmm9.d
return sub_1405d0e10(arg2, &arg_8, arg1 + 0x11e, &var_58, 0)
