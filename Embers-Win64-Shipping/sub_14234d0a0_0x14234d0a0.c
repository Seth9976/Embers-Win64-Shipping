// 函数: sub_14234d0a0
// 地址: 0x14234d0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = 1f f/ *(arg1 + 0x1f0)
int32_t zmm3 = float.s(zx.q(*(arg1 + 0xa8))) f* arg3.d
float zmm4 = float.s(zx.q(*(arg1 + 0xac))) f* arg3:4.d
float zmm1 = zmm4 f* *(arg1 + 0x20c)
zmm4 = (zmm4 f* *(arg1 + 0x210) f+ zmm3 f* *(arg1 + 0x208) f+ *(arg1 + 0x218)) * zmm2
*arg2 = int.d((zmm1 f+ zmm3 f* *(arg1 + 0x204) f+ *(arg1 + 0x214)) * zmm2)
arg2[1] = int.d(zmm4)
return arg2
