// 函数: sub_141c2bcb0
// 地址: 0x141c2bcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[2].d s<= 0)
    return 0

void* r9 = arg1[4]

if (r9 == 0)
    return zx.q((r9 + 5).d)

int32_t i_1 = 0

if (*(r9 + 8) != 0)
    int32_t i = 0
    
    if (*(r9 + 4) s> 0)
        int64_t rdx = 0
        
        do
            rdx += 4
            i += 1
            *(r9 + rdx + 0x18) = *(rdx + *arg2 - 4)
        while (i s< *(r9 + 4))
    
    *(r9 + 8) = 0

int32_t rcx_1 = *(r9 + 4)
*(r9 + 0xc) = rcx_1 * arg2[2].d
int32_t r8_2 = *(arg2 + 0x14) * rcx_1
*(r9 + 0x18) = 0
*(r9 + 0x10) = 0
*(r9 + 0x14) = r8_2
double zmm3 = *arg1

if (zmm3 < 0.00390625 || zmm3 > 256.0)
    return 0x16

uint128_t zmm4 = zx.o(arg1[1])
int32_t rdx_1 = 0
int32_t rdi = 0
uint128_t zmm6 = 0x3ff0000000000000
uint128_t zmm7 = 0x7fffffffffffffff
uint128_t zmm8 = 0x3bc79ca10c924223
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (not(zmm4.q f>= zmm6.q))
    int32_t rsi_1 = rcx_1
    int32_t rbp_1 = 0
    int32_t r10_1 = 0
    
    do
        int32_t rax_6 = *(r9 + 0x14)
        rcx_1 = rsi_1
        rdx_1 = rbp_1
        r8_2 = rax_6
        
        if (rbp_1 s>= rax_6)
            break
        
        rdi = *(r9 + 0x10)
        zmm1.q = _mm_cvtepi32_pd(zx.q(rsi_1)).q f* zmm4.q
        zmm1.q = zmm1.q f+ _mm_cvtepi32_pd(zx.q(rdi)).q
        
        if (zmm1.q f>= _mm_cvtepi32_pd(zx.q(*(r9 + 0xc))).q)
            break
        
        rdx_1 = r10_1
        
        if (rax_6 s> 0)
            zmm2 = zx.o(*arg1)
            zmm1 = zx.o(arg2[5])
            zmm0.q = zmm2.q f- zmm1.q
            
            if (not(_mm_and_ps(zmm0, zmm7).q f<= zmm8.q))
                zmm3 = (zmm1.q f- zmm2.q) f* _mm_cvtepi32_pd(zx.q(rbp_1)).q
                    f/ _mm_cvtepi32_pd(zx.q(rax_6)).q f+ zmm2.q
        
        int32_t r10_2 = 0
        
        if (rsi_1 s> 0)
            void* r8_3 = r9 + 0x1c
            
            do
                r10_2 += 1
                int32_t rax_7 = *r8_3
                r8_3 += 4
                *(arg2[1] + (sx.q(*(r9 + 0x18)) << 2)) = rax_7
                rdx_1 = *(r9 + 0x18) + 1
                *(r9 + 0x18) = rdx_1
                rcx_1 = *(r9 + 4)
            while (r10_2 s< rcx_1)
            
            rdi = *(r9 + 0x10)
            r8_2 = *(r9 + 0x14)
        
        r10_1 = rdx_1
        zmm0.q = zmm6.q f/ zmm3
        rbp_1 = rdx_1
        rsi_1 = rcx_1
        zmm4.q = zmm4.q f+ zmm0.q
    while (zmm4.q f< zmm6.q)

zmm2.q = zmm4.q f- _mm_cvtepi32_pd(zx.q(int.d(zmm4.q))).q

if (not(zmm2.q f>= 0.0))
    zmm2.q = zmm2.q f+ zmm6.q

zmm4.q = zmm4.q f- zmm2.q
int32_t rax_9 = int.d(zmm4.q)
zmm4 = zmm2
int32_t rax_11 = rax_9 * rcx_1 + rdi
*(r9 + 0x10) = rax_11

if (rdx_1 s< r8_2)
    int32_t rdi_1 = rcx_1
    int32_t rsi_2 = rax_11
    
    do
        rax_11 = rsi_2
        rcx_1 = rdi_1
        zmm1.q = _mm_cvtepi32_pd(zx.q(rdi_1)).q f* zmm2.q
        zmm1.q = zmm1.q f+ _mm_cvtepi32_pd(zx.q(rsi_2)).q
        
        if (zmm1.q f> _mm_cvtepi32_pd(zx.q(*(r9 + 0xc))).q)
            break
        
        if (r8_2 s> 0)
            zmm4 = zx.o(*arg1)
            zmm1 = zx.o(arg2[5])
            zmm0.q = zmm4.q f- zmm1.q
            
            if (not(_mm_and_ps(zmm0, zmm7).q f<= zmm8.q))
                zmm3 = (zmm1.q f- zmm4.q) f* _mm_cvtepi32_pd(zx.q(rdx_1)).q
                    f/ _mm_cvtepi32_pd(zx.q(r8_2)).q f+ zmm4.q
        
        int32_t r10_3 = 0
        
        if (rdi_1 s> 0)
            do
                int32_t rax_14 = *(r9 + 0x10) - *(r9 + 4) + r10_3
                r10_3 += 1
                *(arg2[1] + (sx.q(*(r9 + 0x18)) << 2)) = *(*arg2 + (sx.q(rax_14) << 2))
                *(r9 + 0x18) += 1
                rcx_1 = *(r9 + 4)
            while (r10_3 s< rcx_1)
            
            rsi_2 = *(r9 + 0x10)
        
        zmm1.q = zmm6.q f/ zmm3
        zmm1.q = zmm1.q f+ zmm2.q
        zmm2.q = zmm1.q f- _mm_cvtepi32_pd(zx.q(int.d(zmm1.q))).q
        
        if (not(zmm2.q f>= 0.0))
            zmm2.q = zmm2.q f+ zmm6.q
        
        rdx_1 = *(r9 + 0x18)
        zmm1.q = zmm1.q f- zmm2.q
        zmm4 = zmm2
        rdi_1 = rcx_1
        rax_11 = int.d(zmm1.q) * rcx_1 + rsi_2
        *(r9 + 0x10) = rax_11
        rsi_2 = rax_11
        r8_2 = *(r9 + 0x14)
    while (rdx_1 s< r8_2)

int32_t r8_5 = *(r9 + 0xc)

if (rax_11 s> r8_5)
    *(r9 + 0x10) = r8_5
    zmm4.q = _mm_cvtepi32_pd(zx.q(divs.dp.d(sx.q(rax_11 - r8_5), rcx_1))).q f+ zmm2.q

arg1[1] = zmm4.q

if (*(r9 + 0x10) s> 0 && *(r9 + 4) s> 0)
    void* rdx_7 = r9 + 0x1c
    
    do
        rdx_7 += 4
        int32_t rax_25 = *(r9 + 0x10) - *(r9 + 4) + i_1
        i_1 += 1
        *(rdx_7 - 4) = *(*arg2 + (sx.q(rax_25) << 2))
    while (i_1 s< *(r9 + 4))

*arg1 = zmm3
arg2[3].d = divs.dp.d(sx.q(*(r9 + 0x10)), *(r9 + 4))
*(r9 + 4)
*(arg2 + 0x1c) = divs.dp.d(sx.q(*(r9 + 0x18)), *(r9 + 4))
return 0
