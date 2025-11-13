// 函数: sub_14280fe80
// 地址: 0x14280fe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg2
uint32_t zmm5[0x4] = *(arg2 + 0xc)
uint32_t zmm4[0x4] = *(arg2 + 4)
zmm0[0] = zmm0[0] f+ zmm0[0]
zmm5[0] = zmm5[0] f+ zmm5[0]
int128_t zmm9 = *(arg1 + 4)
zmm5[0] = zmm5[0] f+ 1f
zmm0[0] = zmm0[0] f* zmm0[0]
int32_t var_d0 = 0
zmm5[0] = zmm5[0] f* zmm5[0]
zmm4[0] = zmm4[0] f* zmm0[0]
zmm5[0] = zmm5[0] f+ zmm0[0]
int128_t zmm10 = *arg1
zmm5[0] = zmm5[0] f- 1f
uint32_t var_e8 = zmm5[0]
uint32_t zmm1[0x4] = *(arg2 + 8)
zmm1[0] = zmm1[0] f* zmm5[0]
zmm4[0] = zmm4[0] f+ zmm1[0]
zmm4[0] = zmm4[0] f* zmm5[0]
uint32_t zmm2[0x4] = *(arg1 + 8)
uint32_t var_e4 = zmm4[0]
zmm1[0] = zmm1[0] f* zmm0[0]
zmm1[0] = zmm1[0] f- zmm4[0]
uint32_t var_e0 = zmm1[0]
uint32_t zmm6[0x4] = 0x3f800000
zmm6[0] = 1f f/ zmm5[0]
uint32_t zmm3[0x4] = zmm6
zmm6[0] = zmm6[0] f* zmm4[0]
zmm3[0] = zmm3[0] f* zmm1[0]
zmm1 = 0x3f800000
zmm6 ^= 0x80000000
uint32_t var_c8 = zmm6[0]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
uint32_t var_cc = zmm3[0]
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3, data_142d3f770)
zmm2[0] = zmm2[0] f* temp0_1[0]
zmm2[0] = zmm2[0] f+ temp0_1[0]
zmm1[0] = 1f f- zmm2[0]
zmm0 = 0x3f800000
zmm2[0] = zmm2[0] f/ zmm1[0]
zmm2[0] = zmm2[0] f* temp0[0]
zmm2[0] = zmm2[0] f+ temp0[0]
zmm2[0] = zmm2[0] f/ zmm10.d
zmm0[0] = 1f f- zmm2[0]
zmm2[0] = zmm2[0] f* zmm2[0]
zmm2[0] = zmm2[0] f/ zmm0[0]
zmm2[0] = zmm2[0] f/ zmm9.d
zmm2[0] = zmm2[0] f* zmm2[0]
zmm2[0] = zmm2[0] f+ zmm2[0]
void* const* result

if (zmm2[0] f> 1f)
    int32_t var_d8_1 = zmm10.d
    int32_t var_d4_1 = zmm9.d
    int32_t var_dc = 0
    void var_c0
    float zmm8_1[0x4]
    float zmm9_1
    float zmm10_1
    float zmm12_1[0x4]
    result, zmm8_1, zmm9_1, zmm10_1, zmm12_1 = sub_14280fb90(&var_c0, &var_d0, &var_dc)
    int32_t var_b8
    float zmm1_1[0x4] = var_b8
    int32_t var_bc
    float zmm7_1[0x4] = var_bc
    float zmm0_1[0x4] = zmm1_1
    zmm1_1 ^= zmm12_1
    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
    float zmm11_1[0x4] = zmm7_1
    zmm0_1[0] = zmm0_1[0] / (zmm9_1 * zmm9_1)
    float arg_8 = (zmm0_1 ^ zmm12_1)[0]
    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
    zmm11_1[0] = zmm11_1[0] / (zmm10_1 * zmm10_1)
    zmm1_1[0] = zmm1_1[0] + zmm7_1[0]
    zmm10_1 = zmm7_1[0] * 2f
    float arg_10 = zmm11_1[0]
    zmm11_1[0] = zmm11_1[0] * zmm7_1[0]
    zmm7_1 = arg_8
    zmm8_1[0] = zmm8_1[0] - zmm1_1[0]
    float zmm14_1 = zmm10_1
    zmm1_1[0] = zmm1_1[0] + zmm8_1[0]
    zmm1_1[0] = zmm1_1[0] * -2f
    float zmm15_1 = zmm8_1[0]
    zmm9_1 = zmm8_1[0] + zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] / zmm1_1[0]
    float zmm13_1 = zmm1_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm1_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
    zmm11_1[0] = zmm11_1[0] + zmm7_1[0]
    zmm7_1[0] = zmm7_1[0] * -2f
    zmm0_1 = 0x40400000
    zmm9_1 = zmm9_1 * zmm8_1[0]
    zmm0_1[0] = 3f - zmm1_1[0]
    float zmm6_1[0x4] = arg_10
    zmm11_1[0] = zmm11_1[0] * -4f
    zmm6_1[0] = zmm6_1[0] * 2f
    zmm11_1[0] = zmm11_1[0] * zmm0_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm9_1
    zmm11_1[0] = zmm11_1[0] * zmm8_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm9_1
    zmm11_1[0] = zmm11_1[0] * zmm8_1[0]
    zmm11_1[0] = zmm11_1[0] * -2f
    zmm10_1 = zmm10_1 * zmm11_1[0]
    zmm1_1[0] = zmm1_1[0] * zmm11_1[0]
    zmm6_1[0] = zmm6_1[0] + zmm10_1
    zmm7_1[0] = zmm7_1[0] + zmm1_1[0]
    zmm14_1 = zmm14_1 * zmm9_1
    zmm15_1 = zmm15_1 * zmm9_1 - 1f
    zmm13_1 = zmm13_1 * zmm9_1
    zmm8_1[0] = zmm8_1[0] * zmm11_1[0]
    zmm11_1[0] = zmm11_1[0] * zmm9_1
    zmm7_1[0] = zmm7_1[0] * zmm14_1
    zmm6_1[0] = zmm6_1[0] * zmm13_1
    zmm11_1[0] = zmm11_1[0] + zmm8_1[0]
    zmm1_1 = 0x3f800000
    zmm7_1[0] = zmm7_1[0] - zmm6_1[0]
    float zmm3_1 = zmm6_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm15_1
    result.b = 1
    zmm11_1[0] = zmm11_1[0] * zmm13_1
    zmm11_1[0] = zmm11_1[0] - zmm7_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
    zmm11_1[0] = zmm11_1[0] * zmm14_1
    zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
    zmm3_1 = zmm3_1 * zmm15_1 - zmm11_1[0]
    zmm6_1[0] = zmm6_1[0] + zmm11_1[0]
    zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
    zmm1_1[0] = 1f / _mm_sqrt_ss(0, zmm6_1[0])[0]
    zmm11_1[0] = zmm11_1[0] * zmm1_1[0]
    zmm3_1 = zmm3_1 * zmm1_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm1_1[0]
    arg3[1] = zmm11_1[0]
    zmm11_1[0] = zmm11_1[0] * zmm15_1
    zmm7_1[0] = zmm7_1[0] * zmm13_1
    arg3[2] = zmm3_1
    zmm11_1[0] = zmm11_1[0] * zmm13_1
    float zmm2_1 = zmm3_1 * zmm14_1 - zmm11_1[0]
    *arg3 = zmm7_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm14_1
    zmm7_1[0] = zmm7_1[0] - zmm3_1 * zmm15_1
    zmm7_1[0] = zmm7_1[0] f* var_e4
    zmm11_1[0] = zmm11_1[0] - zmm7_1[0]
    zmm2_1 = zmm2_1 f* var_e8 + zmm7_1[0]
    zmm11_1[0] = zmm11_1[0] f* var_e0
    *arg4 = zmm2_1 + zmm11_1[0]
else
    result.b = 0

return result
