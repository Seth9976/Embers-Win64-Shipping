// 函数: sub_14234d140
// 地址: 0x14234d140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *(arg1 + 0x210)
float zmm4 = *(arg1 + 0x20c)
float zmm5 = *(arg1 + 0x214)
float zmm3 = *(arg1 + 0x218)
int128_t zmm8 = *(arg1 + 0x204)
int128_t zmm9 = *(arg1 + 0x208)
int128_t zmm10
zmm10.d = float.s(arg3.d)
int128_t zmm11
zmm11.d = float.s((arg3 u>> 0x20).d)
int128_t zmm6
zmm6.d = 1f / (zmm8.d * zmm2 - zmm9.d * zmm4)
float zmm0 = zmm11.d - zmm3
zmm8.d = zmm8.d f* zmm6.d
zmm11.d = zmm11.d f- zmm3
zmm9.d = zmm9.d f* zmm6.d
float zmm1 = zmm10.d - zmm5
zmm10.d = zmm10.d f- zmm5
zmm11.d = zmm11.d f* zmm8.d
zmm10.d = zmm10.d f* zmm9.d
zmm1 = zmm1 * zmm2 f* zmm6.d - zmm0 * zmm4 f* zmm6.d
zmm11.d = zmm11.d f- zmm10.d
zmm0 = float.s(zx.q(*(arg1 + 0xac)))
*arg2 = zmm1 / float.s(zx.q(*(arg1 + 0xa8))) f* *(arg1 + 0x1f0)
zmm11.d = zmm11.d f/ zmm0
zmm11.d = zmm11.d f* *(arg1 + 0x1f0)
arg2[1] = zmm11.d
return arg2
