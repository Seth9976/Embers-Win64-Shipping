// 函数: sub_141e41f00
// 地址: 0x141e41f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *(arg1 + 0xf8)
float zmm0[0x4] = *(arg1 + 0xfc)
float zmm2 = *arg3
float zmm4 = *(arg1 + 0x118)
float zmm3[0x4] = *(arg1 + 0x138)
float zmm8[0x4] = zmm0
zmm8[0] = zmm8[0] - zmm5
int128_t zmm9
zmm9.d = (*(arg1 + 0x11c)).d f- zmm4
int128_t zmm10
zmm10.d = (*(arg1 + 0x13c)).d f- zmm3[0]
int128_t zmm11
zmm11.d = float.s(*(arg1 + 0x100))
int128_t zmm12
zmm12.d = float.s(*(arg1 + 0x120))
int128_t zmm13
zmm13.d = float.s(*(arg1 + 0x140))

if (zmm2 >= zmm5)
    zmm2 = _mm_min_ss(zmm2, zmm0[0])
else
    zmm2 = zmm5

float zmm1 = arg3[1]

if (zmm1 >= zmm4)
    zmm1 = __minss_xmmss_memss(zmm1, *(arg1 + 0x11c))
else
    zmm1 = zmm4

zmm0 = arg3[2]

if (zmm0[0] >= zmm3[0])
    zmm0 = __minss_xmmss_memss(zmm0[0], *(arg1 + 0x13c))
else
    zmm0 = zmm3

zmm0[0] = zmm0[0] - zmm3[0]
zmm0[0] = zmm0[0] f* zmm13.d
zmm2 = (zmm2 - zmm5) f* zmm11.d / zmm8[0]
zmm0[0] = zmm0[0] f/ zmm10.d
*arg2 = zmm2
arg2[1] = (zmm1 - zmm4) f* zmm12.d f/ zmm9.d
arg2[2] = zmm0[0]
return arg2
