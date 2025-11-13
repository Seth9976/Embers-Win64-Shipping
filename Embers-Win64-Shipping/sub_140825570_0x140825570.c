// 函数: sub_140825570
// 地址: 0x140825570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r8 = 0
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t r9_1 = rdx & 0x7fff
int64_t r15_1

if ((not.b((rdx u>> 0xf).b) & 1) == 0)
    r15_1 = zx.q(*(arg1 + 0x80) * r9_1) + *(arg1 + 0x70)
else
    int32_t* r11_1 = *(arg1 + 0x20)
    int32_t r10_1 = 0
    int32_t rax_3 = *r11_1
    
    if (r9_1 s>= rax_3)
        int64_t rdx_1 = 0
        
        do
            r9_1 -= rax_3
            rdx_1 += 1
            rax_3 = r11_1[rdx_1]
            r10_1 += 1
        while (r9_1 s>= rax_3)
    
    r15_1 = sx.q(r9_1) + *(*(arg1 + 0x18) + (sx.q(r10_1) << 3))

uint32_t rax_5 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int32_t r9_3 = rax_5 & 0x7fff
int64_t r14_1

if ((not.b((rax_5 u>> 0xf).b) & 1) == 0)
    r14_1 = zx.q(*(arg1 + 0x80) * r9_3) + *(arg1 + 0x70)
else
    int32_t* r11_2 = *(arg1 + 0x20)
    int32_t r10_2 = 0
    int32_t rax_6 = *r11_2
    
    if (r9_3 s>= rax_6)
        int64_t rdx_5 = 0
        
        do
            r9_3 -= rax_6
            rdx_5 += 1
            rax_6 = r11_2[rdx_5]
            r10_2 += 1
        while (r9_3 s>= rax_6)
    
    r14_1 = sx.q(r9_3) + *(*(arg1 + 0x18) + (sx.q(r10_2) << 3))

uint32_t rax_8 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t r9_5 = rax_8 & 0x7fff
int64_t rbp_1

if ((not.b((rax_8 u>> 0xf).b) & 1) == 0)
    rbp_1 = zx.q(*(arg1 + 0x80) * r9_5) + *(arg1 + 0x70)
else
    int32_t* r11_3 = *(arg1 + 0x20)
    int32_t r10_3 = 0
    int32_t rax_9 = *r11_3
    
    if (r9_5 s>= rax_9)
        int64_t rdx_9 = 0
        
        do
            r9_5 -= rax_9
            rdx_9 += 1
            rax_9 = r11_3[rdx_9]
            r10_3 += 1
        while (r9_5 s>= rax_9)
    
    rbp_1 = sx.q(r9_5) + *(*(arg1 + 0x18) + (sx.q(r10_3) << 3))

uint32_t rax_11 = zx.d(rax[3])
*(arg1 + 0x10) = &rax[4]
int32_t r9_7 = rax_11 & 0x7fff
int64_t rsi_1

if ((not.b((rax_11 u>> 0xf).b) & 1) == 0)
    rsi_1 = zx.q(*(arg1 + 0x80) * r9_7) + *(arg1 + 0x70)
else
    int32_t* r11_4 = *(arg1 + 0x20)
    int32_t r10_4 = 0
    int32_t rax_12 = *r11_4
    
    if (r9_7 s>= rax_12)
        int64_t rdx_13 = 0
        
        do
            r9_7 -= rax_12
            rdx_13 += 1
            rax_12 = r11_4[rdx_13]
            r10_4 += 1
        while (r9_7 s>= rax_12)
    
    rsi_1 = sx.q(r9_7) + *(*(arg1 + 0x18) + (sx.q(r10_4) << 3))

uint32_t rax_14 = zx.d(rax[4])
*(arg1 + 0x10) = &rax[5]
int32_t r9_9 = rax_14 & 0x7fff
int64_t rdi_1

if ((not.b((rax_14 u>> 0xf).b) & 1) == 0)
    rdi_1 = zx.q(*(arg1 + 0x80) * r9_9) + *(arg1 + 0x70)
else
    int32_t* r11_5 = *(arg1 + 0x20)
    int32_t r10_5 = 0
    int32_t rax_15 = *r11_5
    
    if (r9_9 s>= rax_15)
        int64_t rdx_17 = 0
        
        do
            r9_9 -= rax_15
            rdx_17 += 1
            rax_15 = r11_5[rdx_17]
            r10_5 += 1
        while (r9_9 s>= rax_15)
    
    rdi_1 = sx.q(r9_9) + *(*(arg1 + 0x18) + (sx.q(r10_5) << 3))

uint32_t rax_17 = zx.d(rax[5])
*(arg1 + 0x10) = &rax[6]
int32_t r9_11 = rax_17 & 0x7fff
float (* r10_8)[0x4]

if ((not.b((rax_17 u>> 0xf).b) & 1) == 0)
    r10_8 = zx.q(*(arg1 + 0x80) * r9_11) + *(arg1 + 0x70)
else
    int32_t* r11_6 = *(arg1 + 0x20)
    int32_t r10_6 = 0
    int32_t rax_18 = *r11_6
    
    if (r9_11 s>= rax_18)
        int64_t rdx_21 = 0
        
        do
            r9_11 -= rax_18
            rdx_21 += 1
            rax_18 = r11_6[rdx_21]
            r10_6 += 1
        while (r9_11 s>= rax_18)
    
    r10_8 = sx.q(r9_11) + *(*(arg1 + 0x18) + (sx.q(r10_6) << 3))

uint32_t rax_20 = zx.d(rax[6])
*(arg1 + 0x10) = &rax[7]
int32_t r9_13 = rax_20 & 0x7fff
int64_t r11_9

if ((not.b((rax_20 u>> 0xf).b) & 1) == 0)
    r11_9 = zx.q(*(arg1 + 0x80) * r9_13) + *(arg1 + 0x70)
else
    int32_t* rbx_6 = *(arg1 + 0x20)
    int32_t r11_7 = 0
    int32_t rax_21 = *rbx_6
    
    if (r9_13 s>= rax_21)
        int64_t rdx_25 = 0
        
        do
            r9_13 -= rax_21
            rdx_25 += 1
            rax_21 = rbx_6[rdx_25]
            r11_7 += 1
        while (r9_13 s>= rax_21)
    
    r11_9 = sx.q(r9_13) + *(*(arg1 + 0x18) + (sx.q(r11_7) << 3))

uint32_t rax_23 = zx.d(rax[7])
*(arg1 + 0x10) = &rax[8]
int32_t r9_15 = rax_23 & 0x7fff
int64_t r8_2

if ((not.b((rax_23 u>> 0xf).b) & 1) == 0)
    r8_2 = zx.q(*(arg1 + 0x80) * r9_15) + *(arg1 + 0x70)
else
    int32_t* rbx_7 = *(arg1 + 0x20)
    int32_t rax_24 = *rbx_7
    
    if (r9_15 s>= rax_24)
        int64_t rdx_29 = 0
        
        do
            r9_15 -= rax_24
            rdx_29 += 1
            rax_24 = rbx_7[rdx_29]
            r8 += 1
        while (r9_15 s>= rax_24)
    
    r8_2 = sx.q(r9_15) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))

int32_t r9_17 = zx.d(rax[8]) & 0x7fff
*(arg1 + 0x10) = &rax[9]
void* rdx_33
void var_30

if (r9_17 == 0x7fff)
    rdx_33 = &var_30
else
    rdx_33 = zx.q(*(arg1 + 0x80) * r9_17) + *(arg1 + 0x70)
int32_t result = *(arg1 + 0x44)

if (result s> 0)
    float (* rdx_34)[0x4] = rdx_33 - r10_8
    int128_t* r14_4 = r14_1 - r10_8
    int128_t* rdi_4 = rdi_1 - r10_8
    float (* r15_4)[0x4] = r15_1 - r10_8
    float (* r11_12)[0x4] = r11_9 - r10_8
    void* rbp_4 = rbp_1 - r10_8
    void* r8_5 = r8_2 - r10_8
    uint64_t rcx = zx.q(result)
    void* rsi_4 = rsi_1 - r10_8
    uint64_t i
    
    do
        *(rdx_34 + r10_8) = _mm_add_ps(
            _mm_add_ps(
                _mm_add_ps(__mulps_xmmps_memps(*(rdi_4 + r10_8), *(r15_4 + r10_8)), 
                    __mulps_xmmps_memps(*(r14_4 + r10_8), *r10_8)), 
                __mulps_xmmps_memps(*(r11_12 + r10_8), *(r10_8 + rbp_4))), 
            __mulps_xmmps_memps(*(r10_8 + r8_5), *(r10_8 + rsi_4)))
        r10_8 = &r10_8[1]
        i = rcx
        rcx -= 1
    while (i != 1)

return result
