// 函数: sub_142750710
// 地址: 0x142750710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rdi = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rsi_1 = zx.q(zx.d(rax[2]) * r9)
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
uint128_t* rsi_2 = rsi_1 + r10
int128_t* rbx_2 = zx.q(rbx * r9) + r10
int128_t* rdi_2 = zx.q(rdi * r9) + r10

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    uint64_t i
    
    do
        uint128_t zmm1 = *rdi_2
        rdi_2 = &rdi_2[1]
        uint128_t zmm0 = *rbx_2
        rbx_2 = &rbx_2[1]
        int32_t rcx = zmm1.d
        uint128_t* r11_1 = rsi_2
        rsi_2 = &rsi_2[1]
        int32_t r10_1
        
        if (rcx == 0)
            r10_1 = 0
        else
            r10_1 = divs.dp.d(sx.q(zmm0.d), rcx)
        
        int32_t rcx_1 = zmm1:4.d
        int32_t r9_1
        
        if (rcx_1 == 0)
            r9_1 = 0
        else
            r9_1 = divs.dp.d(sx.q(zmm0:4.d), rcx_1)
        
        int32_t rcx_2 = zmm1:8.d
        int32_t r8_1
        
        if (rcx_2 == 0)
            r8_1 = 0
        else
            r8_1 = divs.dp.d(sx.q(zmm0:8.d), rcx_2)
        
        int32_t rcx_3 = zmm1:0xc.d
        
        if (rcx_3 == 0)
            result = 0
        else
            result = divs.dp.d(sx.q(zmm0:0xc.d), rcx_3)
        
        *r11_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(r10_1), zx.q(r8_1)), 
            _mm_unpacklo_epi32(zx.o(r9_1), zx.q(result)).q)
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
