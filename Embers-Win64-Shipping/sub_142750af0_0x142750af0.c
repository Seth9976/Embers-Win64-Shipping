// 函数: sub_142750af0
// 地址: 0x142750af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int64_t rbx = *(arg1 + 0x18)
int32_t r8_1 = 0
uint128_t zmm5 = zx.o(*(sx.q(r8) + *(rbx + (sx.q(rdx) << 3))))
uint32_t rax_4 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rcx_2 = rax_4
int32_t rdx_1 = *r9
zmm5 = _mm_shuffle_epi32(zmm5, 0)

if (rax_4 s>= rdx_1)
    int64_t rax_5 = 0
    
    do
        rcx_2 -= rdx_1
        rax_5 += 1
        rdx_1 = r9[rax_5]
        r8_1 += 1
    while (rcx_2 s>= rdx_1)

uint128_t zmm4 = zx.o(*(sx.q(rcx_2) + *(rbx + (sx.q(r8_1) << 3))))
uint64_t r8_3 = zx.q(*(arg1 + 0x80) * zx.d(rax[2]))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm4 = _mm_shuffle_epi32(zmm4, 0)
uint128_t* r8_4 = r8_3 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rdi_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t rcx_5 = zmm4.d
        uint128_t* rbx_1 = r8_4
        r8_4 = &r8_4[1]
        int32_t r11_2
        
        if (rcx_5 == 0)
            r11_2 = 0
        else
            r11_2 = divs.dp.d(sx.q(zmm5.d), rcx_5)
        
        int32_t rcx_6 = zmm4:4.d
        int32_t r10_1
        
        if (rcx_6 == 0)
            r10_1 = 0
        else
            r10_1 = divs.dp.d(sx.q(zmm5:4.d), rcx_6)
        
        int32_t rcx_7 = zmm4:8.d
        int32_t r9_1
        
        if (rcx_7 == 0)
            r9_1 = 0
        else
            r9_1 = divs.dp.d(sx.q(zmm5:8.d), rcx_7)
        
        int32_t rcx_8 = zmm4:0xc.d
        
        if (rcx_8 == 0)
            result = 0
        else
            result = divs.dp.d(sx.q(zmm5:0xc.d), rcx_8)
        
        *rbx_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(r11_2), zx.q(r9_1)), 
            _mm_unpacklo_epi32(zx.o(r10_1), zx.q(result)).q)
        i = rdi_1
        rdi_1 -= 1
    while (i != 1)

return result
