// 函数: sub_141747520
// 地址: 0x141747520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0
zmm0.d = (*(arg1 + 0x34)).d f* *arg2
float zmm1[0x4] = *(arg1 + 0x38)
zmm1[0] = zmm1[0] f* arg2[1]
int32_t var_28 = zmm0.d
zmm0.d = (*(arg1 + 0x3c)).d f* arg2[2]
int64_t* rcx = *(arg1 + 0x10)
float var_24 = zmm1[0]
int32_t var_20 = zmm0.d
int32_t var_18
(*(*rcx + 0x20))(rcx, &var_28, &var_18)
float zmm2[0x4] = var_18
int64_t result = (zx.o(0)).q
zmm2[0] = zmm2[0] f* *(arg1 + 0x28)
int32_t var_10
zmm1 = var_10
zmm1[0] = zmm1[0] f* *(arg1 + 0x30)
float zmm5 = zmm0.d f- *(arg1 + 0x40)
int32_t var_14
float zmm3[0x4] = var_14
zmm3[0] = zmm3[0] f* *(arg1 + 0x2c)
float var_10_1 = zmm1[0]
*arg3 = (_mm_unpacklo_ps(zmm2, zmm3[0].q)).q
arg3[1].d = var_10_1
zmm2 = *arg3
zmm0 = *(arg3 + 4)
zmm1 = arg3[1].d
zmm2[0] = zmm2[0] * zmm2[0]
zmm0.d = zmm0.d f* zmm0.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] f+ zmm0.d
zmm2[0] = zmm2[0] + zmm1[0]
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
