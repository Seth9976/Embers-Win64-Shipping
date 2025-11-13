// 函数: sub_14275fab0
// 地址: 0x14275fab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_1 = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t r11 = zx.d(*rax_1)
*(arg1 + 0x10) = &rax_1[1]
uint64_t rdx_1 = zx.q(zx.d(rax_1[1]) * r9)
*(arg1 + 0x10) = &rax_1[2]
uint64_t result = zx.q(*(arg1 + 0x44))
uint64_t result_1 = rdx_1 + *(arg1 + 0x70)
int128_t* r11_2 = zx.q(r11 * r9) + *(arg1 + 0x70)

if (result.d s> 0)
    int128_t zmm4 = data_143f87820
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm1[0x4] = *r11_2
        r11_2 = &r11_2[1]
        int32_t zmm3[0x4] = data_143f87810
        result = result_1
        result_1 += 0x10
        int32_t temp0_1[0x4] = _mm_cmpgt_epi32(zmm3, zmm1)
        int32_t temp0_2[0x4] = _mm_sub_epi32(zmm3, zmm1)
        *result = ((temp0_1 ^ zmm4) & (temp0_2 ^ zmm1)) ^ temp0_2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
