// 函数: sub_140acf860
// 地址: 0x140acf860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg3 - *arg2
float zmm4 = arg3[1] f- arg2[1]
float zmm5 = arg3[2] f- arg2[2]
int128_t zmm6
zmm6.d = arg4[1].d f- arg2[1]
zmm6.d = zmm6.d f* zmm4
zmm6.d = zmm6.d f+ (*arg4 - *arg2) * zmm3
zmm6.d = zmm6.d f+ (arg4[2] f- arg2[2]) * zmm5
float zmm0 = (zx.o(0)).d
zmm6.d = zmm6.d f/ (zmm4 * zmm4 + zmm3 * zmm3 + zmm5 * zmm5)

if (not(zmm6.d f< 0f))
    zmm0 = __minss_xmmss_memss(zmm6.d, 0x3f800000)

zmm4 = zmm4 * zmm0 + arg2[1]
zmm5 = zmm5 * zmm0 + arg2[2]
*arg1 = zmm3 * zmm0 + *arg2
arg1[1] = zmm4
arg1[2] = zmm5
return arg1
