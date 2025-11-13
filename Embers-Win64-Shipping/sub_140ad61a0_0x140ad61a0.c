// 函数: sub_140ad61a0
// 地址: 0x140ad61a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg1 + 8)
float zmm7[0x4] = *(arg1 + 4)
float zmm8[0x4] = *arg1
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm8[0] = zmm8[0] + zmm7[0]
zmm8[0] = zmm8[0] + zmm6.d f* zmm6.d
float zmm0_1[0x4]
float zmm6_1
float zmm7_1
float zmm8_1
int32_t zmm9_1
zmm0_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = __libm_sse2_sincosf_(_mm_sqrt_ss(0, zmm8[0]))
arg2[3] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)[0]

if (not(__andps_xmmxud_memxud(zmm0_1, data_142d3f770)[0] < 9.99999994e-09f))
    zmm0_1[0] = zmm0_1[0] f/ zmm9_1
    zmm6_1 = zmm6_1 * zmm0_1[0]
    zmm7_1 = zmm7_1 * zmm0_1[0]
    zmm8_1 = zmm8_1 * zmm0_1[0]

*arg2 = zmm8_1
arg2[1] = zmm7_1
arg2[2] = zmm6_1
return arg2
