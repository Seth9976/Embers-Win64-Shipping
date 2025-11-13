// 函数: sub_142750990
// 地址: 0x142750990
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

int32_t r8_1 = *(arg1 + 0x80)
uint128_t zmm4 = zx.o(*(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3))))
uint32_t rax_4 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t r8_2 = zx.q(r8_1 * zx.d(rax[2]))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm4 = _mm_shuffle_epi32(zmm4, 0)
int128_t* r10_3 = zx.q(rax_4 * r8_1) + *(arg1 + 0x70)
uint128_t* r8_3 = r8_2 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rsi_1 = zx.q(result)
    uint64_t i
    
    do
        uint128_t zmm0 = *r10_3
        r10_3 = &r10_3[1]
        int32_t rcx_3 = zmm0.d
        uint128_t* rdi_1 = r8_3
        r8_3 = &r8_3[1]
        int32_t rbx_1
        
        if (rcx_3 == 0)
            rbx_1 = 0
        else
            rbx_1 = divs.dp.d(sx.q(zmm4.d), rcx_3)
        
        int32_t rcx_4 = zmm0:4.d
        int32_t r11_1
        
        if (rcx_4 == 0)
            r11_1 = 0
        else
            r11_1 = divs.dp.d(sx.q(zmm4:4.d), rcx_4)
        
        int32_t rcx_5 = zmm0:8.d
        int32_t r9_1
        
        if (rcx_5 == 0)
            r9_1 = 0
        else
            r9_1 = divs.dp.d(sx.q(zmm4:8.d), rcx_5)
        
        int32_t rcx_6 = zmm0:0xc.d
        
        if (rcx_6 == 0)
            result = 0
        else
            result = divs.dp.d(sx.q(zmm4:0xc.d), rcx_6)
        
        *rdi_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(rbx_1), zx.q(r9_1)), 
            _mm_unpacklo_epi32(zx.o(r11_1), zx.q(result)).q)
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
