// 函数: sub_141f60940
// 地址: 0x141f60940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0x1a0)
float zmm1[0x4] = *(arg1 + 0x40)
int64_t zmm4 = *(arg1 + 0x50)
float zmm5 = *(arg1 + 0x60)
float zmm2[0x4] = *(arg1 + 0x170)

if (not(zmm0[0] >= 0.707106769f))
    zmm1[0] = zmm1[0] * zmm2[0]
    zmm4.d = zmm4.d f* zmm2[0]
    zmm5 = zmm5 * zmm2[0]
    zmm2[0] = zmm2[0] f* *(arg1 + 0x1a8)
    zmm1[0] = zmm1[0] * zmm0[0]
    zmm4.d = zmm4.d f* zmm0[0]
    zmm1[0] = zmm1[0] f+ *(arg1 + 0xb0)
    zmm4.d = zmm4.d f+ *(arg1 + 0xb4)
    zmm5 = zmm5 * zmm0[0] f+ *(arg1 + 0xb8)
    *arg2 = (_mm_unpacklo_ps(zmm1, zmm4)).q
    arg2[1].d = zmm5
    *(arg2 + 0xc) = zmm2[0]
    return arg2

float zmm3[0x4] = 0x3f000000
zmm3[0] = 0.5f / zmm0[0]
zmm3[0] = zmm3[0] * zmm2[0]
zmm3[0] = zmm3[0] * zmm1[0]
zmm3[0] = zmm3[0] * zmm5
zmm3[0] = zmm3[0] f+ *(arg1 + 0xb0)
zmm3[0] = zmm3[0] f* zmm4.d
zmm3[0] = zmm3[0] f+ *(arg1 + 0xb8)
zmm3[0] = zmm3[0] f+ *(arg1 + 0xb4)
float var_10_1 = zmm3[0]
*arg2 = (_mm_unpacklo_ps(zmm3, zmm3[0].q)).q
arg2[1].d = var_10_1
*(arg2 + 0xc) = zmm3[0]
return arg2
