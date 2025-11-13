// 函数: sub_1407cbc60
// 地址: 0x1407cbc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
uint32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rax_1 = *r8

if (rdx_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        rdx_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        r9 += 1
    while (rdx_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
uint32_t rax_6 = rax_5 u>> 0xf
int32_t rcx_3 = rax_5 & 0x7fff
uint32_t arg_18 = rax_6
rax_6.b = not.b(rax_6.b)
*(arg2 + 0x10) = &rax[2]
void* rdx_5

if ((rax_6.b & 1) == 0)
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    r9 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
            r9 += 1
        while (rcx_3 s>= rax_7)
    
    rdx_5 = sx.q(rcx_3) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_9 = zx.d(rax[2])
void* var_d0 = rdx_5
uint32_t rax_10 = rax_9 u>> 0xf
int32_t rcx_5 = rax_9 & 0x7fff
uint32_t var_e8 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
int128_t* var_f8

if ((rax_10.b & 1) == 0)
    var_f8 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_11 = *r8
    r9 = 0
    
    if (rcx_5 s>= rax_11)
        int64_t rdx_8 = 0
        
        do
            rcx_5 -= rax_11
            rdx_8 += 1
            rax_11 = r8[rdx_8]
            r9 += 1
        while (rcx_5 s>= rax_11)
    
    var_f8 = sx.q(rcx_5) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_16 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
uint32_t rax_17 = rax_16 u>> 0xf
int32_t i = rax_16 & 0x7fff
uint32_t var_f0 = rax_17
rax_17.b = not.b(rax_17.b)
void* rdx_13

if ((rax_17.b & 1) == 0)
    rdx_13 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    r9 = 0
    
    if (i s>= *r8)
        int64_t rax_18 = 0
        int32_t* rdx_11 = nullptr
        
        do
            i -= *(rdx_11 + r8)
            rax_18 += 1
            rdx_11 = rax_18 << 2
            r9 += 1
        while (i s>= *(rdx_11 + r8))
    
    rdx_13 = sx.q(i) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_20 = zx.d(rax[4])
void* var_c0 = rdx_13
uint32_t rax_21 = rax_20 u>> 0xf
int32_t rcx_8 = rax_20 & 0x7fff
uint32_t arg_20 = rax_21
rax_21.b = not.b(rax_21.b)
*(arg2 + 0x10) = &rax[5]
void* rdx_18

if ((rax_21.b & 1) == 0)
    rdx_18 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_22 = *r8
    r9 = 0
    
    if (rcx_8 s>= rax_22)
        int64_t rdx_16 = 0
        
        do
            rcx_8 -= rax_22
            rdx_16 += 1
            rax_22 = r8[rdx_16]
            r9 += 1
        while (rcx_8 s>= rax_22)
    
    rdx_18 = sx.q(rcx_8) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_24 = zx.d(rax[5])
void* var_c8 = rdx_18
uint32_t rax_25 = rax_24 u>> 0xf
int32_t rcx_10 = rax_24 & 0x7fff
uint32_t var_e0 = rax_25
rax_25.b = not.b(rax_25.b)
*(arg2 + 0x10) = &rax[6]
int128_t* r13_1

if ((rax_25.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
else
    int32_t rax_26 = *r8
    r9 = 0
    
    if (rcx_10 s>= rax_26)
        int64_t rdx_21 = 0
        
        do
            rcx_10 -= rax_26
            rdx_21 += 1
            rax_26 = r8[rdx_21]
            r9 += 1
        while (rcx_10 s>= rax_26)
    
    r13_1 = sx.q(rcx_10) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_28 = zx.d(rax[6])
uint32_t rax_29 = rax_28 u>> 0xf
int32_t rcx_12 = rax_28 & 0x7fff
uint32_t var_d8 = rax_29
rax_29.b = not.b(rax_29.b)
*(arg2 + 0x10) = &rax[7]
int128_t* r15_1

if ((rax_29.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_12) + *(arg2 + 0x70)
else
    int32_t rax_30 = *r8
    r9 = 0
    
    if (rcx_12 s>= rax_30)
        int64_t rdx_22 = 0
        
        do
            rcx_12 -= rax_30
            rdx_22 += 1
            rax_30 = r8[rdx_22]
            r9 += 1
        while (rcx_12 s>= rax_30)
    
    r15_1 = sx.q(rcx_12) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_32 = zx.d(rax[7])
uint8_t r12_1 = (rax_32 u>> 0xf).b
*(arg2 + 0x10) = &rax[8]
int32_t rcx_14 = rax_32 & 0x7fff
int64_t* r14_1

if ((not.b(r12_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_14) + *(arg2 + 0x70)
else
    int32_t rax_34 = *r8
    r9 = 0
    
    if (rcx_14 s>= rax_34)
        int64_t rdx_23 = 0
        
        do
            rcx_14 -= rax_34
            rdx_23 += 1
            rax_34 = r8[rdx_23]
            r9 += 1
        while (rcx_14 s>= rax_34)
    
    r14_1 = sx.q(rcx_14) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_36 = zx.d(rax[8])
uint8_t rbp_1 = (rax_36 u>> 0xf).b
*(arg2 + 0x10) = &rax[9]
int32_t rcx_16 = rax_36 & 0x7fff
int128_t* rsi_1

if ((not.b(rbp_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_16) + *(arg2 + 0x70)
else
    int32_t rax_38 = *r8
    r9 = 0
    
    if (rcx_16 s>= rax_38)
        int64_t rdx_24 = 0
        
        do
            rcx_16 -= rax_38
            rdx_24 += 1
            rax_38 = r8[rdx_24]
            r9 += 1
        while (rcx_16 s>= rax_38)
    
    rsi_1 = sx.q(rcx_16) + *(r11 + (sx.q(r9) << 3))

uint32_t rdx_25 = zx.d(rax[9])
*(arg2 + 0x10) = &rax[0xa]
int32_t rdx_26 = rdx_25 & 0x7fff
int32_t var_b8 = rdx_26
int32_t var_b0 = 0
int32_t rax_41
rax_41.b = rdx_26 != 0x7fff
int32_t* var_a8

if (rdx_26 == 0x7fff)
    var_a8 = &var_b0
else
    var_a8 = zx.q(*(arg2 + 0x80) * rdx_26) + *(arg2 + 0x70)

int32_t rcx_20
rcx_20.b = sub_140b5b8a0(rdi[0xc], 0).b == 0
uint64_t result
result.b = rdi[0xd] != 0
result.b |= rcx_20.b

if (result.b == 0 || *(rdi + 0x38) == 0)
    r9.b = 0
else
    result = sub_140d3e110(rdi)
    
    if (result.b == 0)
        r9.b = 0
    else
        r9.b = 1

int32_t i_1 = 0
char arg_10 = r9.b

if (*(arg2 + 0x40) s> 0)
    uint64_t rax_42 = zx.q(arg_18.b)
    uint64_t rcx_22 = zx.q(arg_20.b)
    arg_18.q = zx.q(var_e0.b) << 2
    arg_20.q = zx.q(r12_1) << 2
    result = rax_42 << 2
    uint64_t rcx_23 = rcx_22 << 2
    uint64_t r10_10 = zx.q(var_f0.b) << 2
    uint64_t r11_2 = zx.q(var_e8.b) << 2
    uint64_t rbp_3 = zx.q(rbp_1) << 2
    var_d8.q = zx.q(var_d8.b) << 2
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint64_t result_1 = result
    uint64_t var_90_1 = rcx_23
    var_f0.q = r10_10
    var_e8.q = r11_2
    var_e0.q = rbp_3
    
    do
        int32_t* rdx_33 = var_d0
        zmm6 = *r15_1
        r15_1 += var_d8.q
        int128_t* rax_43 = var_c8
        var_d0 = rdx_33 + result
        var_c8 = rax_43 + rcx_23
        int64_t* rax_45 = var_c0
        var_c0 = rax_45 + r10_10
        int128_t* rdx_36 = rsi_1
        int128_t* rax_47 = var_f8
        rsi_1 += rbp_3
        int64_t* rcx_25 = r14_1
        var_f8 += r11_2
        r14_1 += arg_20.q
        int32_t var_68_1 = (*rax_43).d
        int128_t* rax_49 = r13_1
        r13_1 += arg_18.q
        int64_t var_70_1 = (_mm_unpacklo_ps(*rax_47, *rax_45)).q
        int64_t* rax_50 = nullptr
        int32_t var_64_1 = (*rax_49).d
        int32_t var_74_1 = (*rdx_36).d
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm6, *rcx_25)
        
        if (r9.b != 0 && *rdx_33 != 0)
            rax_50 = j_sub_140a82f30(0x28)
            
            if (rax_50 != 0)
                *rax_50 = 0
                *(rax_50 + 8) = var_70_1.o
                rax_50[3] = temp0_2.q
                rax_50[4].d = var_74_1
                void** temp0_3 = *(rdi + 0x10)
                *(rdi + 0x10) = rax_50
                *temp0_3 = rax_50
                rax_50 = 0xffffffff
            
            r9 = zx.d(arg_10)
            r10_10 = var_f0.q
            r11_2 = var_e8.q
        
        int32_t* r8_2 = var_a8
        i_1 += 1
        rbp_3 = var_e0.q
        rcx_23 = var_90_1
        var_a8 = &r8_2[sx.q(rax_41)]
        *r8_2 = rax_50.d
        result = result_1
    while (i_1 s< *(arg2 + 0x40))

return result
