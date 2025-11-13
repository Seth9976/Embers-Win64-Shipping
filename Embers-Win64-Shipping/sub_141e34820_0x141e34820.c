// 函数: sub_141e34820
// 地址: 0x141e34820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (*(arg1 + 0x198) == 0)
    uint128_t zmm2 = *(arg1 + 0x50)
    uint128_t zmm1 = *(*(arg1 + 0x38) + 0x170)
    int64_t rdx = zmm2.q
    int64_t r8_1 = zmm1.q
    int64_t r10_1 = _mm_bsrli_si128(zmm1, 8).q
    int64_t r9_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t r11_6 = ((r10_1 u>> 0x20).d ^ (r9_1 u>> 0x20).d)
        | ((r8_1 u>> 0x20).d ^ (rdx u>> 0x20).d) | (rdx.d ^ r8_1.d) | (r9_1.d ^ r10_1.d)
    
    if (r11_6 == 0 && *(arg2 + 0xf0) == r11_6.b && *(arg2 + 0xf1) == r11_6.b
            && *(arg2 + 0xf2) == r11_6.b)
        result.b = 0
        return result

result.b = 1
return result
