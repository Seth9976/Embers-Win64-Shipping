// 函数: sub_142750840
// 地址: 0x142750840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdi = *(arg1 + 0x80)
int64_t rsi = *(arg1 + 0x70)
uint32_t r9 = zx.d(*rax)
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
uint32_t rcx = rax_1
int32_t rdx = *r10
int128_t* r9_2 = zx.q(r9 * rdi) + rsi

if (rax_1 s>= rdx)
    int64_t rax_2 = 0
    
    do
        rcx -= rdx
        rax_2 += 1
        rdx = r10[rax_2]
        r8_1 += 1
    while (rcx s>= rdx)

uint128_t* r8_4 = zx.q(zx.d(rax[2]) * rdi) + rsi
uint128_t zmm4 = zx.o(*(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3))))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm4 = _mm_shuffle_epi32(zmm4, 0)

if (result s> 0)
    uint64_t rsi_1 = zx.q(result)
    uint64_t i
    
    do
        uint128_t zmm0 = *r9_2
        r9_2 = &r9_2[1]
        int32_t rcx_2 = zmm4.d
        uint128_t* rdi_1 = r8_4
        r8_4 = &r8_4[1]
        int32_t rbx_1
        
        if (rcx_2 == 0)
            rbx_1 = 0
        else
            rbx_1 = divs.dp.d(sx.q(zmm0.d), rcx_2)
        
        int32_t rcx_3 = zmm4:4.d
        int32_t r11_1
        
        if (rcx_3 == 0)
            r11_1 = 0
        else
            r11_1 = divs.dp.d(sx.q(zmm0:4.d), rcx_3)
        
        int32_t rcx_4 = zmm4:8.d
        int32_t r10_1
        
        if (rcx_4 == 0)
            r10_1 = 0
        else
            r10_1 = divs.dp.d(sx.q(zmm0:8.d), rcx_4)
        
        int32_t rcx_5 = zmm4:0xc.d
        
        if (rcx_5 == 0)
            result = 0
        else
            result = divs.dp.d(sx.q(zmm0:0xc.d), rcx_5)
        
        *rdi_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(rbx_1), zx.q(r10_1)), 
            _mm_unpacklo_epi32(zx.o(r11_1), zx.q(result)).q)
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
