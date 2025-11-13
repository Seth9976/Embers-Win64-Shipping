// 函数: sub_1427639a0
// 地址: 0x1427639a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x48)
int32_t zmm4[0x4] = data_142fc95e0
int16_t* rax_1 = *(arg1 + 0x10)
uint128_t zmm3 = _mm_unpacklo_epi32(zx.o(r9), zx.q(r9 + 2))
uint32_t rcx = zx.d(*rax_1)
*(arg1 + 0x10) = &rax_1[1]
uint64_t rax_4 = zx.q(rcx * *(arg1 + 0x80))
int32_t i_2 = *(arg1 + 0x44)
zmm3 = _mm_unpacklo_epi32(zmm3, _mm_unpacklo_epi32(zx.o(r9 + 1), zx.q(r9 + 3))[0].q)
uint128_t* result = rax_4 + *(arg1 + 0x70)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint128_t* result_1 = result
        result = &result[1]
        *result_1 = zmm3
        zmm3 = _mm_add_epi32(zmm3, zmm4)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
