// 函数: sub_141e0df90
// 地址: 0x141e0df90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = zx.d(arg1[1]) - 0x7fff
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(zx.d(*arg1) - 0x7fff))
int32_t result = zx.d(arg1[2]) - 0x7fff
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_3))
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(result))
int128_t zmm6
zmm6.d = 1f - zmm3.d f* zmm3.d * 9.31379418e-10f
zmm6.d = zmm6.d f- zmm4.d f* zmm4.d * 9.31379418e-10f
zmm3.d = zmm3.d f* 3.05185094e-05f
zmm4.d = zmm4.d f* 3.05185094e-05f
zmm6.d = zmm6.d f- zmm5.d f* zmm5.d * 9.31379418e-10f
zmm5.d = zmm5.d f* 3.05185094e-05f
*arg2 = zmm3.d
arg2[1] = zmm4.d
arg2[2] = zmm5.d

if (zmm6.d f<= 0f)
    arg2[3] = 0
    return result

arg2[3] = _mm_sqrt_ss(0, zmm6.d)
return result
