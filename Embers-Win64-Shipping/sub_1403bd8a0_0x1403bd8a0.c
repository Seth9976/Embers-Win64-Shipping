// 函数: sub_1403bd8a0
// 地址: 0x1403bd8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4[0x4] = zx.o(0)
int32_t zmm5[0x4] = zx.o(0)
int64_t rcx = arg1 + (arg3 << 1)
int64_t rdx = arg2 + (arg3 << 1)
int64_t i_1 = neg.q(arg3)
int64_t i

do
    int32_t zmm3[0x4] = *(rcx + (i_1 << 1) + 0x10)
    int32_t zmm1[0x4] = *(rdx + (i_1 << 1) + 0x10)
    int32_t temp0_1[0x4] = _mm_sub_epi16(*(rdx + (i_1 << 1)), *(rcx + (i_1 << 1)))
    int32_t temp0_2[0x4] = _mm_sub_epi16(zmm1, zmm3)
    int32_t zmm0[0x4] = _mm_madd_epi16(temp0_1, temp0_1)
    zmm1 = _mm_madd_epi16(temp0_2, temp0_2)
    int32_t temp0_5[0x4] = _mm_unpacklo_epi32(zmm0, 0)
    int32_t temp0_6[0x4] = _mm_unpackhi_epi32(zmm0, 0)
    int32_t temp0_7[0x4] = _mm_add_epi64(zmm4, temp0_5)
    int32_t temp0_8[0x4] = _mm_unpacklo_epi32(zmm1, 0)
    int32_t temp0_9[0x4] = _mm_add_epi64(temp0_7, temp0_6)
    int32_t temp0_10[0x4] = _mm_unpackhi_epi32(zmm1, 0)
    zmm4 = _mm_add_epi64(_mm_add_epi64(temp0_9, temp0_8), temp0_10)
    i = i_1
    i_1 += 0x10
while (i s< -0x10)
zmm5[0].q = zmm4 u>> 0x40
return _mm_add_epi64(zmm4, zmm5)[0].q
