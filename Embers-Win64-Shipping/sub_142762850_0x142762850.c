// 函数: sub_142762850
// 地址: 0x142762850
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
    uint32_t zmm3[0x4] = data_143f87750
    uint64_t i_1 = zx.q(result.d)
    uint32_t zmm4[0x4] = data_143f87760
    uint64_t i
    
    do
        uint32_t zmm1[0x4] = *r11_2
        r11_2 = &r11_2[1]
        result = result_1
        result_1 += 0x10
        *result = _mm_and_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm4, zmm1), 1), 
            _mm_rcp_ps(zmm1) ^ data_143f87690) ^ data_143f87690
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
