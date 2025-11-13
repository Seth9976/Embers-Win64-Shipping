// 函数: sub_142650870
// 地址: 0x142650870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_128
float var_118
float var_108
float zmm6_1
int32_t zmm7_1
zmm6_1, zmm7_1 = sub_1424e2ea0(arg2, &var_128, &var_108, &var_118)
float zmm11[0x4] = var_128
int32_t i = 0
int32_t var_120
float zmm13[0x4] = var_120
zmm11[0] = zmm11[0] f* zmm7_1
int32_t var_124
uint128_t zmm1
zmm1.d = var_124.d f* zmm7_1
zmm11[0] = zmm11[0] f+ arg2[0xc]
zmm1.d = zmm1.d f+ arg2[0xd]
int32_t var_114
int128_t zmm9
zmm9.d = var_114.d f* zmm6_1
float var_138 = zmm11[0]
zmm13[0] = zmm13[0] f* zmm7_1
int32_t var_110
int128_t zmm10
zmm10.d = var_110.d f* zmm6_1
zmm13[0] = zmm13[0] f+ arg2[0xe]
int32_t var_134 = zmm1.d
float var_130 = zmm13[0]
int64_t result

do
    i += 1
    zmm1.d = _mm_cvtepi32_ps(zx.o(i)).d f* 0.392699093f
    float zmm0_1[0x4]
    int32_t zmm6_2
    float zmm7_2
    float zmm8_1
    int32_t zmm9_1
    float zmm10_1
    int32_t zmm11_1
    int32_t zmm12_1
    int32_t zmm13_1
    float zmm14_1
    int32_t zmm15_1
    zmm0_1, zmm6_2, zmm7_2, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        __libm_sse2_sincosf_(zmm1)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
    zmm1.d = temp0_2.d f* zmm11_1
    float zmm4_1 = zmm0_1[0] * zmm14_1
    float zmm2_1 = zmm0_1[0] * var_108 f+ zmm1.d
    zmm1.d = zmm0_1.d f* zmm15_1
    temp0_2[0] = temp0_2[0] f* zmm12_1
    temp0_2[0] = temp0_2[0] f* zmm13_1
    zmm1.d = zmm1.d f+ temp0_2[0]
    zmm1.d = zmm1.d f* zmm7_2
    zmm4_1 = (zmm4_1 + temp0_2[0]) * zmm7_2
    zmm1.d = zmm1.d f+ arg2[0xd]
    var_128 = zmm2_1 * zmm7_2 f+ arg2[0xc]
    zmm4_1 = zmm4_1 f+ arg2[0xe]
    int32_t var_124_1 = zmm1.d
    void var_e0
    void arg_28
    sub_140acc920(&var_e0, &arg_28)
    (*(*arg1 + 0x30))(arg1, &var_138, &var_128, &var_e0, 0, zmm6_2, zmm6_2, 0)
    void var_d0
    sub_140acc920(&var_d0, &arg_28)
    int64_t rax_2 = *arg1
    zmm1.d = var_124_1.d f+ zmm9_1
    var_118 = var_128 + zmm8_1
    int32_t var_114_1 = zmm1.d
    zmm1.d = var_134.d f+ zmm9_1
    float var_110_1 = zmm4_1 + zmm10_1
    int32_t var_f4_1 = zmm1.d
    float var_f8 = var_138 + zmm8_1
    float var_f0_1 = var_130 + zmm10_1
    (*(rax_2 + 0x30))(arg1, &var_f8, &var_118, &var_d0, 0, zmm6_2, zmm6_2, 0)
    void var_c0
    sub_140acc920(&var_c0, &arg_28)
    float zmm0[0x4] = var_138
    zmm0[0] = zmm0[0] + zmm8_1
    float var_ec = zmm0[0]
    zmm0 = var_130
    zmm1.d = var_134.d f+ zmm9_1
    int64_t rax_3 = *arg1
    zmm0[0] = zmm0[0] + zmm10_1
    int32_t var_e8_1 = zmm1.d
    float var_e4_1 = zmm0[0]
    result = (*(rax_3 + 0x30))(arg1, &var_138, &var_ec, &var_c0, 0, zmm6_2, zmm6_2, 0)
    var_138 = var_128[0]
    var_130 = zmm4_1[0]
    var_134 = var_124_1.d
while (i s< 0x10)

return result
