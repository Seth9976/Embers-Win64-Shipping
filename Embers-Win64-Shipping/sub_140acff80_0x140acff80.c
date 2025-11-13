// 函数: sub_140acff80
// 地址: 0x140acff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4[0x4] = data_142e11d00
int32_t i = 0
uint128_t zmm3 = zx.o(0)
uint128_t zmm2 = zx.o(0)

do
    int32_t zmm0[0x4] = *arg1
    int32_t rax_1 = i + 4
    arg1 = &arg1[2]
    uint128_t zmm1 = _mm_shuffle_epi32(zx.o(i), 0)
    i += 8
    zmm3 ^= _mm_add_epi32(_mm_add_epi32(zmm1, zmm4), zmm0)
    zmm2 ^= _mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_1), 0), zmm4), arg1[-1])
while (i u< 0x10)

zmm2 ^= zmm3
zmm2 ^= _mm_bsrli_si128(zmm2, 8)
return zx.q((zmm2 ^ _mm_bsrli_si128(zmm2, 4)).d)
