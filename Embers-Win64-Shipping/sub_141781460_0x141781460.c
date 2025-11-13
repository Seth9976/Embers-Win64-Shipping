// 函数: sub_141781460
// 地址: 0x141781460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xc][0].q = *arg3
(*arg1)[0x32] = arg3[1].d
*(arg1 + 0xcc) = *arg7
(*arg1)[0x35] = arg7[1].d
arg1[0xe] = *arg4
arg1[0xf] = *arg8
uint128_t zmm0
zmm0.d = arg1[0xe][0].d f* arg1[0xf][0]
uint128_t zmm1
zmm1.d = (*arg1)[0x3a].d f* (*arg1)[0x3e]
float zmm2 = (*arg1)[0x39] * (*arg1)[0x3d] f+ zmm0.d
zmm0.d = (*arg1)[0x3b].d f* (*arg1)[0x3f]

if (zmm2 f+ zmm1.d f+ zmm0.d < 0f)
    zmm0 = 0xbf800000
else
    zmm0 = 0x3f800000

arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg1[0xf])
arg1[0x10][0].q = *arg5
(*arg1)[0x42] = arg5[1].d
*(arg1 + 0x10c) = *arg9
(*arg1)[0x45] = arg9[1].d
*(arg1 + 0x118) = *arg6
arg1[0x12][0] = arg6[1].d
*(arg1 + 0x124) = *arg10
(*arg1)[0x4b] = arg10[1].d
return sub_141781940(arg1) __tailcall
