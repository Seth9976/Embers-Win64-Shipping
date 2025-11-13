// 函数: sub_141746800
// 地址: 0x141746800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg1 + 0x20)
float result[0x4] = zx.o(0)
float zmm3[0x4] = *(arg1 + 0x1c)
int128_t zmm6 = *(arg1 + 0x24)
float zmm7[0x4] = *arg2
int128_t zmm8 = *(arg2 + 4)
zmm7[0] = zmm7[0] f- *(arg1 + 0x10)
int64_t zmm2
zmm2.d = zmm8.q.d f- *(arg1 + 0x14)
float zmm9[0x4] = *(arg2 + 8)
zmm9[0] = zmm9[0] f- *(arg1 + 0x18)
zmm7[0] = zmm7[0] * zmm3[0]
zmm2.d = zmm2.d f* zmm5[0]
zmm9[0] = zmm9[0] f* zmm6.d
zmm2.d = zmm2.d f+ zmm7[0]
zmm2.d = zmm2.d f+ zmm9[0]
float zmm0[0x4]

if (zmm2.d f>= 0f)
    zmm0 = _mm_min_ss((*(arg1 + 0x28))[0], zmm2.d)
else
    zmm0 = zx.o(0)

zmm5[0] = zmm5[0] * zmm0[0]
zmm6.d = zmm6.d f* zmm0[0]
zmm5[0] = zmm5[0] f+ *(arg1 + 0x14)
zmm3[0] = zmm3[0] * zmm0[0]
zmm6.d = zmm6.d f+ *(arg1 + 0x18)
zmm3[0] = zmm3[0] f+ *(arg1 + 0x10)
zmm8.d = zmm8.d f- zmm5[0]
zmm9[0] = zmm9[0] f- zmm6.d
zmm7[0] = zmm7[0] - zmm3[0]
float var_50 = zmm9[0]
*arg3 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
arg3[1].d = var_50
zmm5 = *(arg3 + 4)
zmm6 = *arg3
zmm7 = arg3[1].d
zmm2.d = zmm6.q.d f* zmm6.d
zmm5[0] = zmm5[0] * zmm5[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm2.d = zmm2.d f+ zmm5[0]
zmm2.d = zmm2.d f+ zmm7[0]
float var_50_1

if (zmm2.d f>= 9.99999975e-05f)
    zmm3 = 0x3f800000
    result = _mm_sqrt_ss(zx.o(0)[0], zmm2.d)
    zmm3[0] = 1f / result[0]
    zmm2 = zmm3[0].q
    zmm3[0] = zmm3[0] f* zmm6.d
    zmm2.d = zmm2.d f* zmm5[0]
    zmm3[0] = zmm3[0] * zmm7[0]
    *arg3 = (_mm_unpacklo_ps(zmm3, zmm2)).q
    var_50_1 = zmm3[0]
else
    *arg3 = (_mm_unpacklo_ps(0x3f800000, 0)).q
    var_50_1 = 0f

arg3[1].d = var_50_1
result[0] = result[0] f- *(arg1 + 0x2c)
return result
