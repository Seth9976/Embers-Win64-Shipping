// 函数: sub_141747050
// 地址: 0x141747050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x38) * arg2[1]
float var_28 = *(arg1 + 0x34) * *arg2
float var_24 = zmm1
float var_20 = *(arg1 + 0x3c) * arg2[2]
float var_18
int64_t zmm0_1 = sub_1417464c0(*(arg1 + 0x10), &var_28, &var_18)
float zmm2[0x4] = var_18
zmm2[0] = zmm2[0] f* *(arg1 + 0x28)
int64_t result = (zx.o(0)).q
int32_t var_10
float zmm1_1[0x4] = var_10
zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x30)
float zmm5 = zmm0_1.d f- *(arg1 + 0x40)
int32_t var_14
float zmm3[0x4] = var_14
zmm3[0] = zmm3[0] f* *(arg1 + 0x2c)
float var_10_1 = zmm1_1[0]
*arg3 = (_mm_unpacklo_ps(zmm2, zmm3[0].q)).q
arg3[1].d = var_10_1
zmm2 = *arg3
zmm0_1 = *(arg3 + 4)
zmm1_1 = arg3[1].d
zmm2[0] = zmm2[0] * zmm2[0]
zmm0_1.d = zmm0_1.d f* zmm0_1.d
zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
zmm2[0] = zmm2[0] f+ zmm0_1.d
zmm2[0] = zmm2[0] + zmm1_1[0]
float var_10_2

if (zmm2[0] >= 9.99999975e-05f)
    zmm3 = 0x3f800000
    result = _mm_sqrt_ss(0, zmm2[0])
    zmm3[0] = 1f f/ result.d
    zmm3[0] = zmm3[0] f* *arg3
    zmm3[0] = zmm3[0] f* *(arg3 + 4)
    zmm3[0] = zmm3[0] f* arg3[1].d
    *arg3 = (_mm_unpacklo_ps(zmm3, zmm3[0].q)).q
    var_10_2 = zmm3[0]
else
    *arg3 = _mm_unpacklo_ps(0x3f800000, 0)
    var_10_2 = 0f

result.d = result.d f* zmm5
arg3[1].d = var_10_2
return result
