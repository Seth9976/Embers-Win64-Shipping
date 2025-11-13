// 函数: sub_142248830
// 地址: 0x142248830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg5
float zmm0[0x4] = zmm6
zmm0[0] = zmm0[0] f* *arg3
uint128_t zmm1
zmm1.d = zmm6.d f* arg3[1]
int32_t i = 0
zmm0[0] = zmm0[0] f+ *arg2
zmm1.d = zmm1.d f+ arg2[1]
int128_t zmm8 = 0x3ec90fdb
float var_58 = zmm0[0]
zmm0 = zmm6
zmm0[0] = zmm0[0] f* arg3[2]
int32_t var_54 = zmm1.d
zmm0[0] = zmm0[0] f+ arg2[2]
float var_50 = zmm0[0]
int64_t result

do
    i += 1
    zmm1.d = _mm_cvtepi32_ps(zx.o(i)).d f* zmm8.d
    uint128_t zmm0_1
    float zmm6_1
    int32_t zmm7_1
    zmm0_1, zmm6_1, zmm7_1, zmm8 = __libm_sse2_sincosf_(zmm1)
    zmm1.d = zmm0_1.d f* *arg4
    float zmm3_1 = zmm0_1.d f* arg4[2]
    uint128_t zmm4_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
    zmm0_1.d = zmm0_1.d f* arg4[1]
    float zmm2_1 = zmm4_1.d f* *arg3 f+ zmm1.d
    zmm1.d = zmm4_1.d f* arg3[1]
    zmm4_1.d = zmm4_1.d f* arg3[2]
    zmm1.d = zmm1.d f+ zmm0_1.d
    zmm4_1.d = zmm4_1.d f+ zmm3_1
    zmm1.d = zmm1.d f* zmm6_1
    zmm4_1.d = zmm4_1.d f* zmm6_1
    zmm1.d = zmm1.d f+ arg2[1]
    float var_68 = zmm2_1 * zmm6_1 f+ *arg2
    zmm4_1.d = zmm4_1.d f+ arg2[2]
    int32_t var_64_1 = zmm1.d
    int32_t var_60_1 = zmm4_1.d
    void var_48
    void arg_28
    sub_140acc920(&var_48, &arg_28)
    result =
        (*(*arg1 + 0x30))(arg1, &var_58, &var_68, &var_48, 0, zmm7_1, zmm7_1, 0, var_68, var_60_1)
    var_58 = var_68[0]
    float var_50_1 = var_60_1[0]
    int32_t var_54_1 = var_64_1.d
while (i s< 8)

return result
