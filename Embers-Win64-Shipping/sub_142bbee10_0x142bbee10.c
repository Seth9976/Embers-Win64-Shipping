// 函数: sub_142bbee10
// 地址: 0x142bbee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = 0
int32_t result_1 = 0

if (*(arg1 + 0x18) u> 0)
    return 0

int32_t i = 0

if (arg2 != 0)
    if (arg2 u>= 0x10 && data_143ccb970 s>= 2)
        int64_t rdx = *(arg1 + 8)
        int32_t zmm1[0x4] = zx.o(0)
        int32_t zmm2[0x4] = zx.o(0)
        
        do
            int32_t zmm0[0x4] = *(rdx + (zx.q(i) << 1))
            uint64_t rax_2 = zx.q(i + 8)
            i += 0x10
            zmm1 = _mm_max_epu16(zmm1, zmm0)
            zmm2 = _mm_max_epu16(zmm2, *(rdx + (rax_2 << 1)))
        while (i u< (arg2 & 0xfffffff0))
        
        zmm1 = _mm_max_epu16(zmm1, zmm2)
        zmm1 = _mm_max_epu16(zmm1, _mm_bsrli_si128(zmm1, 8))
        zmm1 = _mm_max_epu16(zmm1, _mm_bsrli_si128(zmm1, 4))
        rax = _mm_max_epu16(zmm1, _mm_bsrli_si128(zmm1, 2))[0].w
    
    if (i u< arg2)
        int16_t* r8_2 = *(arg1 + 8) + (zx.q(i) << 1)
        uint64_t i_2 = zx.q(arg2 - i)
        uint64_t i_1
        
        do
            if (*r8_2 u> rax)
                rax = *r8_2
            
            r8_2 = &r8_2[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

uint32_t rsi = zx.d(rax)
*(arg1 + 0x10) = sub_142b99a90(arg3, 2, 0, rsi + 1, 0, &result_1)
int32_t result = result_1

if (result == 0)
    int32_t rdx_3 = arg2 - 1
    
    if (rdx_3 s>= 0)
        int64_t r8_4 = sx.q(rdx_3) * 2
        int32_t temp0_10
        
        do
            r8_4 -= 2
            *(*(arg1 + 0x10) + (zx.q(*(*(arg1 + 8) + r8_4 + 2)) << 1)) = rdx_3.w
            temp0_10 = rdx_3
            rdx_3 -= 1
        while (temp0_10 - 1 s>= 0)
        result = result_1
    
    *(arg1 + 0x18) = rsi
    *(arg1 + 0x1c) = arg2

return result
