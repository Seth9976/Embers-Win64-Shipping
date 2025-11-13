// 函数: sub_141b96650
// 地址: 0x141b96650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg2
float var_48[0x4]

if (*(arg1 + 0x430) == 1)
    __builtin_memset(&var_48, 0, 0x1c)
    sub_140ae2e90(&var_48, arg2, arg3)
else
    int64_t rax_1 = sx.q(*(arg1 + 0x45c))
    int64_t r9_1 = sx.q(*(arg1 + 0x458))
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_1.d))
    float zmm1 = zmm0.d
    zmm0.d = zmm0.d f* *(arg1 + 0x468)
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r9_1.d))
    zmm1 = zmm1 * 0.5f
    float zmm3 = zmm2.d
    zmm2.d = zmm2.d f* *(arg1 + 0x464)
    zmm0.d = zmm0.d f- zmm1
    zmm3 = zmm3 * 0.5f
    zmm2.d = zmm2.d f- zmm3
    int64_t var_38
    var_38:4.d = zmm1
    int32_t var_50_1 = zmm0.d
    var_38.d = zmm3
    var_48[0].q = (_mm_unpacklo_ps(0x3f000000, zmm2.q)).q
    var_48[3] = 0x3f800000
    zmm0.d = float.s(rax_1 * rax_1 + r9_1 * r9_1)
    var_48[2] = var_50_1
    zmm2.d = _mm_cvtepi32_ps(zx.o(int.d(_mm_sqrt_ss(0, zmm0.d)))).d f* 0.5f
    int32_t var_30_1 = zmm2.d
    float var_28[0x8]
    float* rax_4 = sub_140ae2e90(&var_48, &var_28, arg3)
    int32_t zmm2_1 = *(arg1 + 0x264)
    float zmm1_1[0x4] = *rax_4
    var_48 = zmm1_1
    uint64_t var_38_1 = *(rax_4 + 0x10)
    int32_t rax_5 = rax_4[6]
    float temp0_6[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
    temp0_6[0] = temp0_6[0] f* zmm2_1
    uint128_t zmm0_1
    zmm0_1.d = rax_5.d f* zmm2_1
    float zmm3_1 = temp0_6[0]
    uint128_t zmm5_1
    zmm5_1.d = var_38_1.d.d f* zmm2_1
    zmm1_1 = var_48
    int32_t var_30_3 = zmm0_1.d
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x93)
    int64_t zmm4_1
    zmm4_1.d = var_38_1:4.d.d f* zmm2_1
    temp0_7[0] = zmm3_1
    *result = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
    result[1].q = (_mm_unpacklo_ps(zmm5_1, zmm4_1)).q
    *(result + 0x18) = var_30_3
return result
