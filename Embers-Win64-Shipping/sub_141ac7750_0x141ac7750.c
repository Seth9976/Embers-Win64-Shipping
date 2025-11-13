// 函数: sub_141ac7750
// 地址: 0x141ac7750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = (zx.o(0)).d
float zmm0 = (sub_140add740(arg1) - -1f) * 0.5f

if (not(zmm0 < 0f))
    zmm2 = __minss_xmmss_memss(zmm0, 0x3f800000)

int128_t zmm6
zmm6.d = arg3.d f- arg2.d
zmm6.d = zmm6.d f* zmm2
zmm6.d = zmm6.d f+ arg2.d
return zmm6.d
