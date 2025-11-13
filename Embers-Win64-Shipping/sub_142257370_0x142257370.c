// 函数: sub_142257370
// 地址: 0x142257370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg2
uint32_t zmm5[0x4] = *(arg2 + 4)
uint32_t zmm4[0x4] = *(arg2 + 8)
float zmm1 = zmm0[0] f+ zmm0[0]
uint32_t var_e4 = zmm0[0]
float zmm3 = zmm5[0]
uint32_t zmm6[0x4] = *(arg2 + 0xc)
int128_t zmm7 = *arg1
zmm6[0] = zmm6[0] f+ zmm6[0]
int32_t var_c8 = 0
float var_e0 = zmm1
zmm4[0] = zmm4[0] f* zmm6[0]
zmm3 = zmm3 * zmm1 f+ zmm4[0]
uint32_t var_e8 = zmm6[0]
float arg_10 = zmm6[0]
zmm5[0] = zmm5[0] f* zmm6[0]
uint32_t zmm2[0x4] = *(arg1 + 8)
float var_dc = zmm3
zmm3 = zmm4[0] * zmm1
zmm1 = zmm6[0]
zmm6 = *(arg1 + 4)
zmm3 = zmm3 f- zmm5[0]
zmm0 = 0x3f800000
zmm0[0] = 1f / (zmm1 + 1f)
float var_d8 = zmm3
zmm4[0] = zmm4[0] f* zmm0[0]
zmm3 = zmm2[0]
zmm5[0] = zmm5[0] f* zmm0[0]
uint32_t var_c4 = zmm4[0]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm4, data_142d3f770)
zmm3 = zmm3 f+ temp0[0]
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm5, data_142d3f770)
uint32_t var_c0 = (zmm5 ^ 0x80000000)[0]
zmm2[0] = zmm2[0] f* temp0[0]
zmm0 = 0x3f800000
zmm3 = zmm3 / ((1f f- zmm2[0]) f* zmm7.d)
zmm1 = zmm2[0]
zmm2[0] = zmm2[0] f* temp0_1[0]
zmm1 = zmm1 f+ temp0_1[0]
zmm0[0] = 1f f- zmm2[0]
zmm0[0] = zmm0[0] f* zmm6[0]
zmm1 = zmm1 f/ zmm0[0]
void* const* result

if (zmm1 * zmm1 + zmm3 * zmm3 > 1f)
    int32_t var_d0_1 = zmm7.d
    uint32_t var_cc_1 = zmm6[0]
    int32_t var_d4 = 0
    void var_b8
    int128_t zmm6_1
    float zmm7_1
    int128_t zmm8_1
    int128_t zmm13_1
    result, zmm6_1, zmm7_1, zmm8_1, zmm13_1 = sub_142257120(&var_b8, &var_c8, &var_d4)
    int32_t var_b4
    int128_t zmm10_1 = var_b4
    int32_t var_b0
    int128_t zmm14_1 = var_b0
    zmm6_1.d = zmm6_1.d f* zmm6_1.d
    int128_t zmm2_1 = zmm14_1 ^ zmm8_1
    zmm14_1.d = zmm14_1.d f/ zmm6_1.d
    zmm6_1.d = zmm2_1.d f* zmm2_1.d
    zmm14_1 ^= zmm8_1
    zmm8_1 = zmm2_1
    zmm2_1.d = zmm2_1.d f* zmm14_1.d
    int128_t zmm5_1
    zmm5_1.d = zmm10_1.d f+ zmm10_1.d
    zmm6_1.d = zmm6_1.d f+ zmm10_1.d f* zmm10_1.d
    int128_t zmm1_1
    zmm1_1.d = zmm10_1.d f/ (zmm7_1 * zmm7_1)
    int128_t zmm9_1
    zmm9_1.d = zmm13_1.d f- zmm6_1.d
    int32_t arg_8 = zmm1_1.d
    zmm1_1.d = zmm1_1.d f* zmm10_1.d
    zmm8_1.d = zmm8_1.d f* -2f
    zmm14_1.d = zmm14_1.d f* -2f
    int128_t zmm4_1
    zmm4_1.d = zmm13_1.d f/ (zmm6_1.d f+ zmm13_1.d)
    zmm1_1.d = zmm1_1.d f+ zmm2_1.d
    int128_t zmm11_1
    zmm11_1.d = zmm9_1.d f+ zmm9_1.d
    float zmm3_1 = zmm4_1.d f* zmm4_1.d
    zmm2_1.d = zmm1_1.d f* -4f
    zmm11_1.d = zmm11_1.d f* zmm3_1
    zmm2_1.d = zmm2_1.d f* (3f f- zmm6_1.d)
    zmm2_1.d = zmm2_1.d f* zmm3_1
    zmm6_1.d = zmm11_1.d f* zmm1_1.d
    float zmm15_1 = zmm9_1.d f* zmm11_1.d f- zmm13_1.d
    zmm14_1.d = zmm14_1.d f* zmm11_1.d
    zmm2_1.d = zmm2_1.d f* zmm4_1.d
    zmm6_1.d = zmm6_1.d f* -2f
    float zmm12_1 = zmm8_1.d f* zmm11_1.d
    float zmm0_1 = zmm2_1.d f* zmm9_1.d
    zmm9_1 = arg_8
    zmm9_1.d = zmm9_1.d f+ zmm9_1.d
    zmm13_1.d = zmm5_1.d f* zmm11_1.d
    zmm6_1.d = zmm6_1.d f+ zmm0_1
    zmm0_1 = zmm2_1.d
    zmm2_1.d = zmm2_1.d f* zmm8_1.d
    zmm9_1.d = zmm9_1.d f* zmm11_1.d
    zmm14_1.d = zmm14_1.d f+ zmm2_1.d
    zmm9_1.d = zmm9_1.d f+ zmm0_1 f* zmm5_1.d
    zmm2_1.d = zmm9_1.d f* zmm9_1.d
    result.b = 1
    zmm1_1.d = zmm14_1.d f* zmm14_1.d
    zmm2_1.d = zmm2_1.d f+ zmm6_1.d f* zmm6_1.d
    zmm4_1.d = zmm14_1.d f* zmm13_1.d
    zmm14_1.d = zmm14_1.d f* zmm15_1
    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
    float temp0_2 = _mm_sqrt_ss(0, zmm2_1.d)
    zmm2_1.d = zmm6_1.d f* zmm12_1
    zmm3_1 = 1f / temp0_2
    zmm6_1.d = zmm6_1.d f* zmm13_1.d
    zmm0_1 = zmm9_1.d * zmm12_1
    zmm2_1.d = zmm2_1.d f- zmm14_1.d
    zmm9_1.d = zmm9_1.d f* zmm15_1
    zmm2_1.d = zmm2_1.d f* zmm3_1
    zmm4_1.d = zmm4_1.d f- zmm0_1
    zmm9_1.d = zmm9_1.d f- zmm6_1.d
    arg3[1] = zmm2_1.d
    zmm4_1.d = zmm4_1.d f* zmm3_1
    zmm9_1.d = zmm9_1.d f* zmm3_1
    arg3[2] = zmm9_1.d
    zmm0_1 = zmm9_1.d * zmm15_1
    zmm1_1.d = zmm4_1.d f* zmm12_1
    zmm9_1.d = zmm9_1.d f* zmm13_1.d
    zmm1_1.d = zmm1_1.d f- zmm0_1
    *arg3 = zmm4_1.d
    zmm4_1.d = zmm4_1.d f* zmm13_1.d
    zmm1_1.d = zmm1_1.d f* var_dc
    zmm0_1 = zmm2_1.d
    zmm2_1.d = zmm2_1.d f* zmm15_1
    zmm2_1.d = zmm2_1.d f- zmm4_1.d
    zmm9_1.d = zmm9_1.d f- zmm0_1 * zmm12_1
    zmm2_1.d = zmm2_1.d f* var_d8
    *arg4 = (arg_10 f* var_e8 + var_e4 * var_e0 - 1f) f* zmm9_1.d f+ zmm1_1.d f+ zmm2_1.d
else
    result.b = 0

return result
