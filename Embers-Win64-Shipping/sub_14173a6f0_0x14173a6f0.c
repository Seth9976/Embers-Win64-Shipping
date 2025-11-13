// 函数: sub_14173a6f0
// 地址: 0x14173a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
float zmm4[0x4] = *(arg1 + 0x2c)
float zmm5 = *(arg1 + 0x30)
float zmm3[0x4] = *arg3
zmm4[0] = zmm4[0] f* *(arg3 + 4)
zmm5 = zmm5 f* *(arg3 + 8)
zmm3[0] = zmm3[0] f* *(arg1 + 0x28)
zmm4[0] = zmm4[0] * zmm4[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5 * zmm5
float temp0[0x4] = _mm_sqrt_ss(0, zmm4[0])
int64_t var_28
float var_20
float zmm1
float zmm2[0x4]

if (temp0[0] <= 9.99999994e-09f)
    var_28 = 0
    var_20 = 1f
else
    zmm2 = 0x3f800000
    zmm2[0] = 1f / temp0[0]
    zmm1 = zmm2[0]
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm1 = zmm1 * zmm4[0]
    zmm2[0] = zmm2[0] * zmm5
    var_28.d = zmm2[0]
    var_28:4.d = zmm1
    var_20 = zmm2[0]

zmm2 = zx.o(var_28)
zmm2[0] = zmm2[0] f* *(arg1 + 0x34)
zmm1 = var_20 f* *(arg1 + 0x3c)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x38)
*arg2 = zmm2[0]
arg2[2] = zmm1
arg2[1] = temp0_1[0]

if (not(sub_141750780(result).d f!= 0f))
    int32_t var_20_2 = 0x3f800000
    *result = _mm_unpacklo_ps(zx.o(0), 0)
    result[1].d = 0x3f800000

return result
