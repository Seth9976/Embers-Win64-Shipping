// 函数: sub_142762d40
// 地址: 0x142762d40
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
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm1[0x4] = *r11_2
        r11_2 = &r11_2[1]
        result = result_1
        result_1 += 0x10
        *result = _mm_and_ps(data_143f87770 ^ data_143f87800, _mm_cmpeq_ps(data_143f87690, zmm1, 2))
            ^ data_143f87800
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
