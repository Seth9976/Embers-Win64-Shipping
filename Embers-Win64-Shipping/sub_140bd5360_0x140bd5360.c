// 函数: sub_140bd5360
// 地址: 0x140bd5360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = 0
int128_t* result = nullptr

if (arg2 != 0)
    if (arg2 u>= 0x20)
        uint128_t zmm2 = zx.o(0)
        uint128_t zmm1 = zx.o(0)
        
        do
            uint128_t zmm0 = *(result + arg1)
            result = zx.q(result.d + 0x20)
            zmm2 |= zmm0
            zmm1 |= *(zx.q((&result[1]).d) + arg1)
        while (result.d u< (arg2 & 0xffffffe0))
        
        zmm1 |= zmm2
        zmm1 |= _mm_bsrli_si128(zmm1, 8)
        zmm1 |= _mm_bsrli_si128(zmm1, 4)
        zmm1 |= _mm_bsrli_si128(zmm1, 2)
        r8 = (zmm1 | _mm_bsrli_si128(zmm1, 1)).b
    
    if (result.d u< arg2)
        int64_t rdx_1 = zx.q(result.d) + arg1
        result = zx.q(arg2 - result.d)
        int128_t* i
        
        do
            r8 |= *rdx_1
            rdx_1 += 1
            i = result
            result -= 1
        while (i != 1)

result.b = r8 == 0
return result
