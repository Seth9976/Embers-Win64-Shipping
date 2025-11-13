// 函数: sub_140bd5430
// 地址: 0x140bd5430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8_2 = 0
uint64_t result = 0

if (arg2 != 0)
    if (arg2 u>= 0x10)
        uint128_t zmm2 = zx.o(0)
        uint128_t zmm1 = zx.o(0)
        
        do
            uint128_t zmm0 = *(arg1 + (zx.q(result.d) << 1))
            uint64_t rcx_1 = zx.q((result + 8).d)
            result = zx.q(result.d + 0x10)
            zmm2 |= zmm0
            zmm1 |= *(arg1 + (rcx_1 << 1))
        while (result.d u< (arg2 & 0xfffffff0))
        
        zmm1 |= zmm2
        zmm1 |= _mm_bsrli_si128(zmm1, 8)
        zmm1 |= _mm_bsrli_si128(zmm1, 4)
        r8_2 = (zmm1 | _mm_bsrli_si128(zmm1, 2)).w
    
    if (result.d u< arg2)
        uint64_t rcx_2 = zx.q(result.d)
        result = zx.q(arg2 - result.d)
        int64_t rdx = arg1 + (rcx_2 << 1)
        uint64_t i
        
        do
            r8_2 |= *rdx
            rdx += 2
            i = result
            result -= 1
        while (i != 1)

result.b = r8_2 == 0
return result
