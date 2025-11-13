// 函数: sub_1419ead80
// 地址: 0x1419ead80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = arg2[5]
zmm0[0] = zmm0[0] f- arg2[2]
float zmm3[0x4] = arg2[3]
zmm3[0] = zmm3[0] f- *arg2
int64_t zmm2
zmm2.d = arg2[4].d f- arg2[1]
zmm0[0] = zmm0[0] * 0.5f
zmm3[0] = zmm3[0] * 0.5f
zmm2.d = zmm2.d f* 0.5f
float var_10 = zmm0[0]
*(arg1 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg1 + 0x14) = var_10
float zmm1[0x4] = *(arg1 + 0xc)
zmm1[0] = zmm1[0] f+ *arg2
zmm2.d = arg1[2].d.d f+ arg2[1]
zmm0 = *(arg1 + 0x14)
zmm0[0] = zmm0[0] f+ arg2[2]
*arg1 = (_mm_unpacklo_ps(zmm1, zmm2)).q
arg1[1].d = zmm0[0]
zmm0 = arg1[2].d
zmm2 = *(arg1 + 0xc)
zmm1 = *(arg1 + 0x14)
zmm0[0] = zmm0[0] * zmm0[0]
zmm2.d = zmm2.d f* zmm2.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm2.d = zmm2.d f+ zmm0[0]
zmm2.d = zmm2.d f+ zmm1[0]
arg1[3].d = _mm_sqrt_ss(0, zmm2.d)[0]
return arg1
