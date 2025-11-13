// 函数: sub_1403bd7d0
// 地址: 0x1403bd7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm7[0x4]
int32_t arg_18[0x4] = zmm7
int32_t zmm4[0x4] = zx.o(0)
int32_t zmm6[0x4] = zx.o(0)
int32_t zmm5[0x4] = zx.o(0)
int64_t rcx = arg1 + (arg3 << 1)
int64_t rdx = arg2 + (arg3 << 1)
int64_t i_1 = neg.q(arg3)
int32_t temp0_18[0x4]
int64_t i

do
    int32_t zmm2[0x4] = *(rcx + (i_1 << 1))
    int32_t zmm3[0x4] = *(rcx + (i_1 << 1) + 0x10)
    int32_t zmm1[0x4] = *(rdx + (i_1 << 1) + 0x10)
    int32_t temp0_1[0x4] = _mm_sub_epi16(*(rdx + (i_1 << 1)), zmm2)
    int32_t temp0_2[0x4] = _mm_sub_epi16(zmm1, zmm3)
    int32_t zmm0[0x4] = _mm_madd_epi16(temp0_1, temp0_1)
    zmm1 = _mm_madd_epi16(temp0_2, temp0_2)
    zmm2 = _mm_madd_epi16(zmm2, zmm2)
    zmm3 = _mm_madd_epi16(zmm3, zmm3)
    int32_t temp0_7[0x4] = _mm_unpacklo_epi32(zmm0, 0)
    int32_t temp0_8[0x4] = _mm_unpackhi_epi32(zmm0, 0)
    int32_t temp0_9[0x4] = _mm_add_epi64(zmm4, temp0_7)
    int32_t temp0_10[0x4] = _mm_unpacklo_epi32(zmm1, 0)
    int32_t temp0_11[0x4] = _mm_add_epi64(temp0_9, temp0_8)
    int32_t temp0_12[0x4] = _mm_unpackhi_epi32(zmm1, 0)
    int32_t temp0_13[0x4] = _mm_add_epi64(temp0_11, temp0_10)
    int32_t temp0_14[0x4] = _mm_unpacklo_epi32(zmm2, 0)
    zmm4 = _mm_add_epi64(temp0_13, temp0_12)
    int32_t temp0_16[0x4] = _mm_unpackhi_epi32(zmm2, 0)
    int32_t temp0_17[0x4] = _mm_add_epi64(zmm6, temp0_14)
    temp0_18 = _mm_unpacklo_epi32(zmm3, 0)
    int32_t temp0_19[0x4] = _mm_add_epi64(temp0_17, temp0_16)
    int32_t temp0_20[0x4] = _mm_unpackhi_epi32(zmm3, 0)
    zmm6 = _mm_add_epi64(_mm_add_epi64(temp0_19, temp0_18), temp0_20)
    i = i_1
    i_1 += 0x10
while (i s< -0x10)
zmm5[0].q = zmm4 u>> 0x40
temp0_18[0].q = zmm6 u>> 0x40
int32_t temp0_23[0x4] = _mm_add_epi64(zmm4, zmm5)
int32_t temp0_24[0x4] = _mm_add_epi64(zmm6, temp0_18)
int64_t result = temp0_23[0].q
*arg4 = temp0_24[0].q
return result
