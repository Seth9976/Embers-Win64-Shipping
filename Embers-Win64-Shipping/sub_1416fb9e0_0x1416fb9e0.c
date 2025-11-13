// 函数: sub_1416fb9e0
// 地址: 0x1416fb9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*(arg5 + 0x84))
uint64_t var_b8 = zmm0.q
uint128_t zmm2 = zmm0 ^ 0x80000000
float zmm11[0x4] = *arg2
uint128_t zmm9 = zmm11 ^ 0x80000000
int128_t zmm12 = *(arg5 + 0x8c) ^ 0x80000000
float zmm8[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55) ^ 0x80000000
uint128_t zmm10 = _mm_shuffle_ps(zmm0, zmm0, 0x55) ^ 0x80000000
uint128_t zmm5
zmm5.d = zmm9.d f* zmm10.d
zmm8[0] = zmm8[0] f* zmm12.d
float zmm4[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa) ^ 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
zmm0.d = zmm4.d f* zmm10.d
zmm4[0] = zmm4[0] f* zmm2.d
zmm8[0] = zmm8[0] f- zmm0.d
zmm0.d = zmm9.d f* zmm12.d
zmm4[0] = zmm4[0] f- zmm0.d
zmm0.d = zmm8.d f* zmm2.d
zmm8[0] = zmm8[0] + zmm8[0]
zmm5.d = zmm5.d f- zmm0.d
zmm4[0] = zmm4[0] + zmm4[0]
zmm5.d = zmm5.d f+ zmm5.d
float zmm1 = zmm8[0] * temp0_3[0] f+ zmm2.d
zmm0.d = zmm4.d f* zmm4[0]
zmm2.d = zmm8.d f* zmm4[0]
zmm8[0] = zmm8[0] * zmm8[0]
uint128_t zmm3
zmm3.d = zmm5.d f* zmm8[0]
zmm3.d = zmm3.d f- zmm0.d
zmm0.d = zmm5.d f* zmm9.d
zmm5.d = zmm5.d f* temp0_3[0]
zmm3.d = zmm3.d f+ zmm1
zmm1 = zmm4[0]
zmm2.d = zmm2.d f- zmm0.d
zmm4[0] = zmm4[0] f* zmm9.d
zmm1 = zmm1 * temp0_3[0]
zmm5.d = zmm5.d f+ zmm12.d
zmm4[0] = zmm4[0] - zmm8[0]
zmm4[0] = zmm4[0] f+ zmm5.d
zmm2.d = zmm2.d f+ zmm1 f+ zmm10.d
float var_b0_1 = zmm4[0]
var_b8 = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
int64_t var_9c
int32_t result = sub_1415c82e0(&var_9c, arg1, arg2, arg3, arg4, &var_b8)
int32_t var_84

if (not(var_84 f>= *(arg5 + 0x9c)))
    *(arg5 + 0x84) = var_9c
    int32_t var_94
    *(arg5 + 0x8c) = var_94
    int32_t result_1
    result = result_1
    int64_t var_90
    *(arg5 + 0x90) = var_90
    *(arg5 + 0x98) = result
    *(arg5 + 0x9c) = var_84

return result
