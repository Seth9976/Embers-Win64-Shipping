// 函数: sub_141778550
// 地址: 0x141778550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = arg2[1]
float zmm4 = *arg2
int128_t zmm6 = arg2[2]
int128_t zmm7 = *arg3
int128_t zmm8 = *(arg3 + 4)
int128_t zmm9 = *(arg3 + 8)
float zmm2 = zmm7.d * zmm4 + zmm8.d * zmm5 + zmm9.d f* zmm6.d
zmm7.d = zmm7.d f* zmm2
zmm8.d = zmm8.d f* zmm2
zmm9.d = zmm9.d f* zmm2
zmm4 = zmm4 f- zmm7.d
zmm5 = zmm5 f- zmm8.d
zmm6.d = zmm6.d f- zmm9.d
float temp0 = _mm_sqrt_ss(0, zmm5 * zmm5 + zmm4 * zmm4 + zmm6.d f* zmm6.d)

if (arg5 == 0)
    zmm7 = zx.o(0)
    zmm8 = zx.o(0)
    zmm9 = zx.o(0)

if (not(temp0 >= arg4))
    zmm4 = (zx.o(0)).d
    zmm5 = (zx.o(0)).d
    zmm6 = zx.o(0)
else if (not(temp0 <= 9.99999975e-05f))
    zmm2 = 1f / temp0
    zmm5 = zmm5 - zmm2 * zmm5 * arg4
    zmm4 = zmm4 - zmm4 * zmm2 * arg4
    zmm6.d = zmm6.d f- zmm2 f* zmm6.d * arg4

zmm9.d = zmm9.d f+ zmm6.d
zmm7.d = zmm7.d f+ zmm4
zmm8.d = zmm8.d f+ zmm5
arg1[2] = zmm9.d
*arg1 = zmm7.d
arg1[1] = zmm8.d
return arg1
