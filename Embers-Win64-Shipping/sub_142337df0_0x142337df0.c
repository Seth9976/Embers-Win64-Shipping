// 函数: sub_142337df0
// 地址: 0x142337df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1[1].d)
int32_t r8 = 0
int32_t r10 = 0
int32_t r11 = 0

if (rdx.d s> 0 && rdx.d u>= 8)
    int64_t r9_1 = *arg1
    int32_t zmm5[0x4] = zx.o(0)
    int32_t zmm4[0x4] = zx.o(0)
    int32_t rcx_1 = rdx.d & 0x80000007
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
    
    int64_t rcx_4 = 0
    int64_t i = 0
    
    do
        uint64_t zmm1 = zx.q(*(rcx_4 + r9_1 + 0x2c0))
        r11 += 8
        uint128_t zmm0 = zx.o(*(rcx_4 + r9_1 + 0x1d8))
        i += 8
        int32_t zmm2[0x4] = zx.o(*(rcx_4 + r9_1 + 0xf0))
        int32_t zmm3[0x4] = zx.o(*(rcx_4 + r9_1 + 8))
        rcx_4 += 0x740
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm0.q)
        zmm0 = zx.o(*(rcx_4 + r9_1 - 0x1c8))
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm1 = zx.q(*(rcx_4 + r9_1 - 0xe0))
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
        zmm2 = zx.o(*(rcx_4 + r9_1 - 0x2b0))
        zmm3 = _mm_add_epi32(zmm3, zmm5)
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm5 = zmm3
        zmm4 = _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(rcx_4 + r9_1 - 0x398)), zmm0.q), 
                zmm2[0].q), 
            zmm4)
    while (i s< sx.q(rdx.d - rcx_1))
    
    zmm4 = _mm_add_epi32(zmm4, zmm5)
    zmm4 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
    r10 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 4))[0]

int64_t r11_1 = sx.q(r11)
int32_t r9_2 = 0

if (r11_1 s>= rdx)
    return zx.q(r10)

if (rdx - r11_1 s>= 2)
    int64_t rax_5 = *arg1
    int64_t rdx_1 = r11_1 * 0xe8
    int64_t i_2 = ((rdx - r11_1 - 2) u>> 1) + 1
    r11_1 += i_2 << 1
    int64_t i_1
    
    do
        r8 += *(rdx_1 + rax_5 + 8)
        r9_2 += *(rdx_1 + rax_5 + 0xf0)
        rdx_1 += 0x1d0
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r11_1 s< rdx)
    r10 += *(r11_1 * 0xe8 + *arg1 + 8)

return zx.q(r9_2 + r8 + r10)
