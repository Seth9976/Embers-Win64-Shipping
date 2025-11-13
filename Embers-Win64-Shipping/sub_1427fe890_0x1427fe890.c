// 函数: sub_1427fe890
// 地址: 0x1427fe890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg2 + 0x24)
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm9 = *(arg2 + 0x28)
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm10 = *(arg2 + 0x20)
zmm10.d = zmm10.d f+ zmm10.d
float zmm13[0x4]
float var_88[0x4] = zmm13
int128_t zmm5 = *(arg3 + 0xc)
int128_t zmm2 = *(arg3 + 4)
float zmm12[0x4] = *arg3
int128_t zmm4 = *(arg3 + 8)
int128_t zmm8
zmm8.d = zmm5.d f* zmm5.d
int128_t zmm11
zmm11.d = zmm2.d f* zmm9.d
zmm8.d = zmm8.d f- 0.5f
int128_t zmm6
zmm6.d = zmm4.d f* zmm10.d
zmm11.d = zmm11.d f- zmm4.d f* zmm7.d
float zmm3 = zmm12[0] f* zmm10.d + zmm2.d f* zmm7.d + zmm4.d f* zmm9.d
zmm11.d = zmm11.d f* zmm5.d
float zmm1 = zmm12[0] * zmm3
zmm11.d = zmm11.d f+ zmm8.d f* zmm10.d
zmm4.d = zmm4.d f* zmm3
float zmm0 = zmm12[0]
zmm12[0] = zmm12[0] f* zmm7.d
zmm11.d = zmm11.d f+ zmm1
zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm10.d
zmm6.d = zmm6.d f- zmm0 f* zmm9.d
zmm12[0] = zmm12[0] f- zmm2.d
zmm0 = zmm8.d
zmm8.d = zmm8.d f* zmm9.d
zmm11.d = zmm11.d f+ arg3[1].d
zmm6.d = zmm6.d f* zmm5.d
zmm12[0] = zmm12[0] f* zmm5.d
zmm12[0] = zmm12[0] f+ zmm8.d
zmm6.d = zmm6.d f+ zmm0 f* zmm7.d
zmm12[0] = zmm12[0] f+ zmm4.d
zmm6.d = zmm6.d f+ zmm1 * zmm3
zmm12[0] = zmm12[0] f+ *(arg3 + 0x18)
zmm6.d = zmm6.d f+ *(arg3 + 0x14)
float var_e8
float* rax_1
float zmm6_1
float zmm11_1
rax_1, zmm6_1, zmm11_1 = sub_1417c7990(arg3, &var_e8, arg2 + 0x10)
float var_a8 = *rax_1
float var_a4 = rax_1[1]
float var_a0 = rax_1[2]
float var_9c = rax_1[3]
float var_98 = zmm11_1
float zmm4_1 = *(arg4 + 0xc)
float zmm2_1 = *(arg4 + 4)
float zmm5_1 = *(arg4 + 8)
float zmm10_1 = *(arg2 + 0x3c)
float zmm7_1 = *(arg2 + 0x40)
zmm10_1 = zmm10_1 + zmm10_1
float zmm9_1 = *(arg2 + 0x44)
zmm7_1 = zmm7_1 + zmm7_1
float var_90 = zmm12[0]
zmm9_1 = zmm9_1 + zmm9_1
zmm12 = *arg4
float var_94 = zmm6_1
float zmm3_1 = zmm12[0] * zmm10_1 + zmm2_1 * zmm7_1 + zmm5_1 * zmm9_1
zmm12[0]
zmm12[0]
zmm12[0] = zmm12[0] * zmm7_1
zmm12[0] = zmm12[0] - zmm2_1 * zmm10_1
arg4[1].d
zmm12[0] = zmm12[0] * zmm4_1
zmm12[0] = zmm12[0] + (zmm4_1 * zmm4_1 - 0.5f) * zmm9_1
zmm12[0] = zmm12[0] + zmm5_1 * zmm3_1
zmm12[0] = zmm12[0] f+ *(arg4 + 0x18)
*(arg4 + 0x14)
float* rax_2
int32_t zmm6_2
int32_t zmm11_2
rax_2, zmm6_2, zmm11_2 = sub_1417c7990(arg4, &var_e8, arg2 + 0x2c)
float var_c8 = *rax_2
int32_t var_c4 = rax_2[1].d
float var_c0 = rax_2[2]
int32_t var_bc = rax_2[3].d
int32_t var_b8 = zmm11_2
int32_t var_b4 = zmm6_2
float var_b0 = zmm12[0]
int64_t result = (*(*arg1 + 8))(arg1, &var_a8, &var_c8)

if ((*(arg2 + 0x7c) & 2) == 0)
    return result

int128_t zmm7_2 = var_a8
int128_t zmm8_2 = var_a4
int128_t zmm3_2 = var_c8
int128_t zmm4_2 = var_c4
int128_t zmm9_2 = var_a0
int128_t zmm5_2 = var_c0
int128_t zmm1_2
zmm1_2.d = zmm9_2.d f* zmm5_2.d
float zmm2_2 = zmm7_2.d f* zmm3_2.d + zmm8_2.d f* zmm4_2.d f+ zmm1_2.d
zmm1_2 = var_bc

if (not(zmm2_2 + var_9c f* zmm1_2.d >= 0f))
    var_c8 = (zmm3_2 ^ 0x80000000).d
    int32_t var_c4_1 = (zmm4_2 ^ 0x80000000).d
    int32_t var_c0_1 = (zmm5_2 ^ 0x80000000).d
    int32_t var_bc_1 = (zmm1_2 ^ 0x80000000).d

float var_dc_1 = var_9c
var_e8 = (zmm7_2 ^ 0x80000000).d
float var_e4_1 = (zmm8_2 ^ 0x80000000).d
float var_e0_1 = (zmm9_2 ^ 0x80000000).d
float var_d8[0x4]
float* rax_4
float zmm6_3[0x4]
float zmm11_3
rax_4, zmm6_3, zmm11_3 = sub_1417c7990(&var_e8, &var_d8, &var_c8)
float zmm8_3[0x4] = *rax_4
zmm12 = rax_4[1]
zmm13 = rax_4[2]
float zmm9_3[0x4] = rax_4[3]
float zmm1_3
float zmm2_3[0x4]

if (zmm8_3[0] == zmm11_3)
    var_e8.o = data_142d3f660
else
    zmm1_3 = zmm9_3[0]
    zmm8_3[0] = zmm8_3[0] * zmm8_3[0]
    zmm2_3 = 0x3f800000
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm1_3 * zmm9_3[0] + zmm8_3[0])
    zmm1_3 = zmm8_3[0]
    zmm2_3[0] = 1f / temp0_1[0]
    zmm1_3 = zmm1_3 * zmm2_3[0]
    zmm2_3[0] = zmm2_3[0] * zmm11_3
    var_e8 = zmm1_3
    var_e4_1 = zmm2_3[0]
    var_e0_1 = zmm2_3[0]
    zmm9_3[0] = zmm9_3[0] * zmm2_3[0]
    var_dc_1 = zmm9_3[0]

uint32_t zmm5_3[0x4] = var_dc_1
zmm2_3 = var_e8 ^ zmm6_3
uint32_t zmm3_3[0x4] = var_e4_1 ^ zmm6_3
int64_t r8_4 = *arg1
float zmm4_3[0x4] = var_e0_1 ^ zmm6_3
zmm12[0] = zmm12[0] f* zmm5_3[0]
zmm1_3 = zmm13[0] * zmm2_3[0]
zmm9_3[0] = zmm9_3[0] f* zmm3_3[0]
zmm9_3[0] = zmm9_3[0] * zmm4_3[0]
zmm9_3[0] = zmm9_3[0] + zmm12[0]
zmm8_3[0] = zmm8_3[0] * zmm4_3[0]
zmm9_3[0] = zmm9_3[0] + zmm1_3
zmm1_3 = zmm8_3[0] f* zmm3_3[0]
zmm8_3[0] = zmm8_3[0] * zmm2_3[0]
zmm9_3[0] = zmm9_3[0] - zmm8_3[0]
zmm13[0] = zmm13[0] f* zmm5_3[0]
zmm13[0] = zmm13[0] * zmm4_3[0]
zmm9_3[0] = zmm9_3[0] + zmm13[0]
zmm5_3[0] = zmm5_3[0] f* zmm9_3[0]
zmm12[0] = zmm12[0] f* zmm3_3[0]
zmm3_3 = 0xbf800000
zmm5_3[0] = zmm5_3[0] f- zmm8_3[0]
zmm9_3[0] = zmm9_3[0] + zmm1_3
zmm12[0] = zmm12[0] * zmm2_3[0]
zmm2_3 = *(arg2 + 0x74)
zmm5_3[0] = zmm5_3[0] f- zmm12[0]
zmm9_3[0] = zmm9_3[0] - zmm12[0]
zmm5_3[0] = zmm5_3[0] f- zmm13[0]
zmm5_3[0] = zmm5_3[0] f+ 1f
zmm3_3[0] = -1f f/ zmm5_3[0]
zmm9_3[0] = zmm9_3[0] f/ zmm5_3[0]
zmm5_3 = *(arg2 + 0x6c)
float zmm7_3[0x4] = __andps_xmmxud_memxud(zmm9_3, data_142d3f770)
zmm2_3[0] = zmm2_3[0] * zmm7_3[0]
zmm2_3[0] = zmm2_3[0] + zmm7_3[0]
zmm3_3[0] = zmm3_3[0] f* zmm9_3[0]
zmm6_3 = *(arg2 + 0x70)
zmm1_3 = 1f - zmm2_3[0]
float zmm0_3[0x4] = 0x3f800000
uint32_t temp0_3[0x4] = __andps_xmmxud_memxud(zmm3_3, data_142d3f770)
zmm2_3[0] = zmm2_3[0] / zmm1_3
zmm1_3 = zmm2_3[0]
zmm2_3[0] = zmm2_3[0] f* temp0_3[0]
zmm1_3 = zmm1_3 f+ temp0_3[0]
zmm2_3[0] = zmm2_3[0] / zmm6_3[0]
zmm0_3[0] = 1f - zmm2_3[0]
zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
zmm1_3 = zmm1_3 / zmm0_3[0] f/ zmm5_3[0]
return (*(r8_4 + 0x20))(arg1, &var_a8, zmm6_3, zmm5_3, zmm1_3 * zmm1_3 + zmm2_3[0] > 1f)
