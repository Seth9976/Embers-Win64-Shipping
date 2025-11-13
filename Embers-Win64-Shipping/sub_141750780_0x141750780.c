// 函数: sub_141750780
// 地址: 0x141750780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg1 + 4)
int64_t zmm5 = *arg1
float zmm1[0x4] = arg1[1].d
int64_t zmm2
zmm2.d = zmm5.d f* zmm5.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm2.d = zmm2.d f+ zmm4 * zmm4
zmm2.d = zmm2.d f+ zmm1[0]

if (not(zmm2.d f>= 9.99999975e-05f))
    int32_t var_10 = 0
    *arg1 = (_mm_unpacklo_ps(0x3f800000, 0)).q
    arg1[1].d = 0
    return 0

float zmm3[0x4] = 0x3f800000
zmm3[0] = 1f / _mm_sqrt_ss(0, zmm2.d)
zmm2 = zmm3[0].q
zmm3[0] = zmm3[0] f* arg1[1].d
zmm3[0] = zmm3[0] f* zmm5.d
zmm2.d = zmm2.d f* zmm4
float result = zmm3[0]
*arg1 = (_mm_unpacklo_ps(zmm3, zmm2)).q
arg1[1].d = result
return result
