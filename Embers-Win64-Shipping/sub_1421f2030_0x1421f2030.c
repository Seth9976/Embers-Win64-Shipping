// 函数: sub_1421f2030
// 地址: 0x1421f2030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0xa8))
int32_t r8 = 0
int32_t r10 = 0
int32_t rbx = 0

if (r11.d s> 0 && r11.d u>= 8)
    int64_t rdx_1 = *(arg1 + 0xa0)
    int32_t zmm5[0x4] = zx.o(0)
    int32_t zmm4[0x4] = zx.o(0)
    int32_t rcx_1 = r11.d & 0x80000007
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
    
    int64_t i = 0
    void* rax_3 = 0x18
    
    do
        uint64_t zmm1 = zx.q(*(rdx_1 + rax_3 + 0xc))
        rbx += 8
        uint128_t zmm0 = zx.o(*(rax_3 + rdx_1))
        i += 8
        int32_t zmm2[0x4] = zx.o(*(rdx_1 + rax_3 - 0xc))
        int32_t zmm3[0x4] = zx.o(*(rdx_1 + rax_3 - 0x18))
        rax_3 += 0x60
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm0.q)
        zmm0 = zx.o(*(rdx_1 + rax_3 - 0x30))
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm1 = zx.q(*(rdx_1 + rax_3 - 0x24))
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
        zmm2 = zx.o(*(rdx_1 + rax_3 - 0x3c))
        zmm3 = _mm_add_epi32(zmm3, zmm5)
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm5 = zmm3
        zmm4 = _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(rdx_1 + rax_3 - 0x48)), zmm0.q), 
                zmm2[0].q), 
            zmm4)
    while (i s< sx.q(r11.d - rcx_1))
    
    zmm4 = _mm_add_epi32(zmm4, zmm5)
    zmm4 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
    r10 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 4))[0]

int64_t rdx_2 = sx.q(rbx)
int32_t r9_2 = 0

if (rdx_2 s>= r11)
    return zx.q(r10)

if (r11 - rdx_2 s>= 2)
    int64_t rbx_1 = *(arg1 + 0xa0)
    int64_t rcx_5 = rdx_2 * 0xc
    int64_t i_2 = ((r11 - rdx_2 - 2) u>> 1) + 1
    rdx_2 += i_2 << 1
    int64_t i_1
    
    do
        r8 += *(rcx_5 + rbx_1)
        r9_2 += *(rcx_5 + rbx_1 + 0xc)
        rcx_5 += 0x18
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (rdx_2 s< r11)
    r10 += *(*(arg1 + 0xa0) + rdx_2 * 0xc)

return zx.q(r9_2 + r8 + r10)
