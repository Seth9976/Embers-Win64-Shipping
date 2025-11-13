// 函数: sub_1403baac0
// 地址: 0x1403baac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t (* arg_8)[0x4] = arg1
uint128_t zmm3 = _mm_shuffle_epi32(zx.o(arg3 * 0x1010101), 0)
_mm_adds_epu8(zmm3, _mm_shuffle_epi32(zx.o(arg4 * 0x1010101), 0))
int64_t result
int32_t i

do
    char rax_4
    int32_t zmm4_1[0x4]
    int32_t zmm5_1[0x4]
    rax_4, zmm4_1, zmm5_1 = rand()
    int64_t j = 0
    
    do
        *(arg_8 + j) = _mm_add_epi8(
            _mm_subs_epu8(_mm_adds_epu8(_mm_subs_epu8(*(arg_8 + j), zmm3), zmm5_1), zmm4_1), 
            *(arg2 + zx.q(rax_4) + j))
        j += 0x10
    while (j s< sx.q(arg5))
    
    result = sx.q(arg7)
    arg_8 += result
    i = arg6
    arg6 -= 1
while (i s> 1)
return result
