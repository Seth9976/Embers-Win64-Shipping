// 函数: sub_141c43e30
// 地址: 0x141c43e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = data_142d3f7c0
uint64_t r9 = zx.q(1 << (arg4 - 2))
uint64_t result = zx.q((r9 << 2).d)

if (r9.d s> 0)
    int64_t r11_1 = sx.q(result.d)
    int64_t rdx = r11_1 << 2
    result = sx.q((r9 * 3).d * 2) - r11_1
    int128_t* r10_1 = rdx + arg2
    int64_t rsi_1 = (sx.q((r9 * 2).d) - r11_1) << 2
    uint64_t rdi_2 = result << 2
    uint64_t i_1 = zx.q(((r9 - 1).d u>> 1) + 1)
    uint64_t i
    
    do
        float zmm4[0x4] = *(rsi_1 + r10_1)
        float zmm5[0x4] = *(r10_1 + (neg.q(r11_1) << 2))
        float zmm3[0x4] = *r10_1
        float temp0_1[0x4] = _mm_add_ps(*(rdi_2 + r10_1), zmm4)
        float temp0_2[0x4] = __subps_xmmps_memps(zmm4, *(rdi_2 + r10_1))
        float temp0_3[0x4] = _mm_add_ps(zmm3, zmm5)
        float temp0_4[0x4] = __subps_xmmps_memps(zmm5, *r10_1)
        float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm6)
        float temp0_6[0x4] = _mm_add_ps(temp0_1, temp0_3)
        float temp0_7[0x4] = _mm_sub_ps(temp0_3, temp0_1)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xb1)
        *(arg3 - rdx - arg2 + r10_1) = temp0_6
        *(r10_1 + rsi_1 - arg2 + arg3) = temp0_7
        float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_4)
        float temp0_10[0x4] = _mm_sub_ps(temp0_4, temp0_8)
        *(arg3 - arg2 + r10_1) = temp0_9
        *(rdi_2 - arg2 + arg3 + r10_1) = temp0_10
        r10_1 = &r10_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
