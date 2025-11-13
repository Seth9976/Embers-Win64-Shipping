// 函数: sub_140bd54f0
// 地址: 0x140bd54f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_2 = 0
int32_t i = 0
uint64_t result

if (arg2 != 0)
    if (arg2 u>= 8)
        uint128_t zmm2 = zx.o(0)
        uint128_t zmm1 = zx.o(0)
        
        do
            uint128_t zmm0 = *(arg1 + (zx.q(i) << 2))
            result = zx.q(i + 4)
            i += 8
            zmm2 |= zmm0
            zmm1 |= *(arg1 + (result << 2))
        while (i u< (arg2 & 0xfffffff8))
        
        zmm1 |= zmm2
        zmm1 |= _mm_bsrli_si128(zmm1, 8)
        r8_2 = (zmm1 | _mm_bsrli_si128(zmm1, 4)).d
    
    if (i u< arg2)
        result = arg1 + (zx.q(i) << 2)
        uint64_t i_2 = zx.q(arg2 - i)
        uint64_t i_1
        
        do
            r8_2 |= *result
            result += 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

result.b = r8_2 == 0
return result
