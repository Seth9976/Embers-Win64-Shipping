// 函数: sub_1417479a0
// 地址: 0x1417479a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *arg2
int64_t result = (zx.o(0)).q
zmm1[0] = zmm1[0] f- *(arg1 + 0x10)
int64_t zmm2
zmm2.d = (*(arg2 + 4)).d f- *(arg1 + 0x14)
int64_t zmm0
zmm0.d = (*(arg2 + 8)).d f- *(arg1 + 0x18)
*arg3 = (_mm_unpacklo_ps(zmm1, zmm2)).q
arg3[1].d = zmm0.d
int64_t zmm5 = *(arg3 + 4)
zmm2 = *arg3
zmm1 = arg3[1].d
zmm2.d = zmm2.d f* zmm2.d
zmm0.d = zmm5.d f* zmm5.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1[0]
float var_10_1

if (zmm2.d f>= 9.99999975e-05f)
    float zmm3[0x4] = 0x3f800000
    result = _mm_sqrt_ss(0, zmm2.d)
    zmm3[0] = 1f f/ result.d
    zmm2 = zmm3[0].q
    zmm3[0] = zmm3[0] f* *arg3
    zmm3[0] = zmm3[0] f* arg3[1].d
    zmm2.d = zmm2.d f* zmm5.d
    var_10_1 = zmm3[0]
    *arg3 = (_mm_unpacklo_ps(zmm3, zmm2)).q
else
    *arg3 = _mm_unpacklo_ps(0x3f800000, 0)
    var_10_1 = 0f

arg3[1].d = var_10_1
result.d = result.d f- *(arg1 + 0x1c)
return result
