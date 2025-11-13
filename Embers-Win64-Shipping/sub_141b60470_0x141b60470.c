// 函数: sub_141b60470
// 地址: 0x141b60470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3 = arg3 * arg3
int128_t zmm8
zmm8.d = -0.5f / arg3
int128_t zmm11 = arg2
int128_t zmm7
zmm7.d = 1f f/ _mm_sqrt_ss(0, arg3 * 6.28318548f)
int128_t zmm10
zmm10.d = zmm11.d f+ 1f
int128_t zmm9
zmm9.d = expf(arg2.d f* zmm11.d f* zmm8.d).d f* zmm7.d
int128_t zmm0_1
zmm0_1.d = zmm10.d f* zmm10.d
zmm0_1.d = zmm0_1.d f* zmm8.d
int128_t zmm0_2
zmm0_2.d = expf(zmm0_1.d).d f* zmm7.d
arg2 = zx.o(0)
arg3 = zmm0_2.d f+ zmm9.d

if (not(arg3 <= 0f))
    zmm9.d = zmm9.d f* zmm11.d
    arg2.d = zmm0_2.d f* zmm10.d
    arg2.d = arg2.d f+ zmm9.d
    arg2.d = arg2.d f/ arg3

*arg1 = arg3
arg1[1] = arg2.d
return arg1
