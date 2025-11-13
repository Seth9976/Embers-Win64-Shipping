// 函数: sub_140828160
// 地址: 0x140828160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_2 = rdx u>> 0xf
int32_t rdx_1 = rdx & 0x7fff
uint32_t arg_10 = rax_2
rax_2.b = not.b(rax_2.b)
void* r8_2

if ((rax_2.b & 1) == 0)
    r8_2 = zx.q(*(arg1 + 0x80) * rdx_1) + *(arg1 + 0x70)
else
    int32_t* r10_1 = *(arg1 + 0x20)
    int32_t r8 = 0
    int32_t rax_3 = *r10_1
    
    if (rdx_1 s>= rax_3)
        int64_t rcx = 0
        
        do
            rdx_1 -= rax_3
            rcx += 1
            rax_3 = r10_1[rcx]
            r8 += 1
        while (rdx_1 s>= rax_3)
    
    r8_2 = sx.q(rdx_1) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))

uint32_t rax_5 = zx.d(rax[1])
void* var_120 = r8_2
uint32_t rax_6 = rax_5 u>> 0xf
int32_t rdx_3 = rax_5 & 0x7fff
uint32_t arg_18 = rax_6
rax_6.b = not.b(rax_6.b)
*(arg1 + 0x10) = &rax[2]
int32_t* r13_1

if ((rax_6.b & 1) == 0)
    r13_1 = zx.q(*(arg1 + 0x80) * rdx_3) + *(arg1 + 0x70)
else
    int32_t* r10_2 = *(arg1 + 0x20)
    int32_t r8_5 = 0
    int32_t rax_7 = *r10_2
    
    if (rdx_3 s>= rax_7)
        int64_t rcx_2 = 0
        
        do
            rdx_3 -= rax_7
            rcx_2 += 1
            rax_7 = r10_2[rcx_2]
            r8_5 += 1
        while (rdx_3 s>= rax_7)
    
    r13_1 = sx.q(rdx_3) + *(*(arg1 + 0x18) + (sx.q(r8_5) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t rdx_5 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg1 + 0x10) = &rax[3]
int128_t* r15_1

if ((rax_10.b & 1) == 0)
    r15_1 = zx.q(*(arg1 + 0x80) * rdx_5) + *(arg1 + 0x70)
else
    int32_t* r10_3 = *(arg1 + 0x20)
    int32_t r8_6 = 0
    int32_t rax_11 = *r10_3
    
    if (rdx_5 s>= rax_11)
        int64_t rcx_4 = 0
        
        do
            rdx_5 -= rax_11
            rcx_4 += 1
            rax_11 = r10_3[rcx_4]
            r8_6 += 1
        while (rdx_5 s>= rax_11)
    
    r15_1 = sx.q(rdx_5) + *(*(arg1 + 0x18) + (sx.q(r8_6) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint32_t rax_14 = rax_13 u>> 0xf
int32_t rdx_7 = rax_13 & 0x7fff
uint32_t var_138 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg1 + 0x10) = &rax[4]
int32_t* r14_1

if ((rax_14.b & 1) == 0)
    r14_1 = zx.q(*(arg1 + 0x80) * rdx_7) + *(arg1 + 0x70)
else
    int32_t* r10_4 = *(arg1 + 0x20)
    int32_t r8_7 = 0
    int32_t rax_15 = *r10_4
    
    if (rdx_7 s>= rax_15)
        int64_t rcx_6 = 0
        
        do
            rdx_7 -= rax_15
            rcx_6 += 1
            rax_15 = r10_4[rcx_6]
            r8_7 += 1
        while (rdx_7 s>= rax_15)
    
    r14_1 = sx.q(rdx_7) + *(*(arg1 + 0x18) + (sx.q(r8_7) << 3))

uint32_t rax_17 = zx.d(rax[4])
uint32_t rax_18 = rax_17 u>> 0xf
int32_t rdx_9 = rax_17 & 0x7fff
uint32_t var_130 = rax_18
rax_18.b = not.b(rax_18.b)
*(arg1 + 0x10) = &rax[5]
int32_t* rsi_1

if ((rax_18.b & 1) == 0)
    rsi_1 = zx.q(*(arg1 + 0x80) * rdx_9) + *(arg1 + 0x70)
else
    int32_t* r10_5 = *(arg1 + 0x20)
    int32_t r8_8 = 0
    int32_t rax_19 = *r10_5
    
    if (rdx_9 s>= rax_19)
        int64_t rcx_8 = 0
        
        do
            rdx_9 -= rax_19
            rcx_8 += 1
            rax_19 = r10_5[rcx_8]
            r8_8 += 1
        while (rdx_9 s>= rax_19)
    
    rsi_1 = sx.q(rdx_9) + *(*(arg1 + 0x18) + (sx.q(r8_8) << 3))

uint32_t rax_21 = zx.d(rax[5])
uint32_t rax_22 = rax_21 u>> 0xf
int32_t rdx_11 = rax_21 & 0x7fff
uint32_t var_128 = rax_22
rax_22.b = not.b(rax_22.b)
*(arg1 + 0x10) = &rax[6]
float* rdi_1

if ((rax_22.b & 1) == 0)
    rdi_1 = zx.q(*(arg1 + 0x80) * rdx_11) + *(arg1 + 0x70)
else
    int32_t* r10_6 = *(arg1 + 0x20)
    int32_t r8_9 = 0
    int32_t rax_23 = *r10_6
    
    if (rdx_11 s>= rax_23)
        int64_t rcx_10 = 0
        
        do
            rdx_11 -= rax_23
            rcx_10 += 1
            rax_23 = r10_6[rcx_10]
            r8_9 += 1
        while (rdx_11 s>= rax_23)
    
    rdi_1 = sx.q(rdx_11) + *(*(arg1 + 0x18) + (sx.q(r8_9) << 3))

uint32_t rax_25 = zx.d(rax[6])
uint8_t r12_1 = (rax_25 u>> 0xf).b
*(arg1 + 0x10) = &rax[7]
int32_t rdx_13 = rax_25 & 0x7fff
int32_t* rbx_1

if ((not.b(r12_1) & 1) == 0)
    rbx_1 = zx.q(*(arg1 + 0x80) * rdx_13) + *(arg1 + 0x70)
else
    int32_t* r10_7 = *(arg1 + 0x20)
    int32_t r8_10 = 0
    int32_t rax_27 = *r10_7
    
    if (rdx_13 s>= rax_27)
        int64_t rcx_12 = 0
        
        do
            rdx_13 -= rax_27
            rcx_12 += 1
            rax_27 = r10_7[rcx_12]
            r8_10 += 1
        while (rdx_13 s>= rax_27)
    
    rbx_1 = sx.q(rdx_13) + *(*(arg1 + 0x18) + (sx.q(r8_10) << 3))

uint32_t rcx_14 = zx.d(rax[7])
*(arg1 + 0x10) = &rax[8]
int32_t rcx_15 = rcx_14 & 0x7fff
int32_t var_d0 = rcx_15
int32_t rax_29
rax_29.b = rcx_15 != 0x7fff
void* var_c0
void var_c8

if (rcx_15 == 0x7fff)
    var_c0 = &var_c8
else
    var_c0 = zx.q(rcx_15 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_19 = zx.d(rax[8]) & 0x7fff
*(arg1 + 0x10) = &rax[9]
int32_t var_b8 = rcx_19
int32_t rax_30
rax_30.b = rcx_19 != 0x7fff
void* var_a8
void var_b0

if (rcx_19 == 0x7fff)
    var_a8 = &var_b0
else
    var_a8 = zx.q(rcx_19 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_23 = zx.d(rax[9]) & 0x7fff
*(arg1 + 0x10) = &rax[0xa]
int32_t var_a0 = rcx_23
int32_t r11_7
r11_7.b = rcx_23 != 0x7fff
int32_t var_9c = r11_7
int32_t* r10_10
void var_98

if (rcx_23 == 0x7fff)
    r10_10 = &var_98
else
    r10_10 = zx.q(*(arg1 + 0x80) * rcx_23) + *(arg1 + 0x70)
int32_t* var_90 = r10_10
int32_t rcx_25 = zx.d(rax[0xa]) & 0x7fff
*(arg1 + 0x10) = &rax[0xb]
int32_t var_118 = rcx_25
int32_t rax_31
rax_31.b = rcx_25 != 0x7fff
void* var_108
void var_110

if (rcx_25 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(rcx_25 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_29 = zx.d(rax[0xb]) & 0x7fff
*(arg1 + 0x10) = &rax[0xc]
int32_t var_100 = rcx_29
int32_t rax_32
rax_32.b = rcx_29 != 0x7fff
float* var_f0
void var_f8

if (rcx_29 == 0x7fff)
    var_f0 = &var_f8
else
    var_f0 = zx.q(rcx_29 * *(arg1 + 0x80)) + *(arg1 + 0x70)
uint32_t rcx_32 = zx.d(rax[0xc])
*(arg1 + 0x10) = &rax[0xd]
int32_t rdx_20 = rcx_32 & 0x7fff
int32_t var_e8 = rdx_20
int32_t result
result.b = rdx_20 != 0x7fff
int32_t result_1 = result
void* var_d8

if (rdx_20 == 0x7fff)
    void var_e0
    result = &var_e0
    var_d8 = &var_e0
else
    var_d8 = zx.q(*(arg1 + 0x80) * rdx_20) + *(arg1 + 0x70)

int32_t result_2 = 0

if (*(arg1 + 0x40) s> 0)
    uint64_t rcx_36 = zx.q(arg_10.b)
    uint64_t rdx_21 = zx.q(arg_18.b)
    arg_10.q = zx.q(arg_20.b) << 2
    arg_18.q = zx.q(var_138.b) << 2
    arg_20.q = zx.q(var_130.b) << 2
    var_128.q = zx.q(var_128.b) << 2
    uint64_t rcx_37 = rcx_36 << 2
    uint64_t rdx_22 = rdx_21 << 2
    var_130.q = zx.q(r12_1) << 2
    uint64_t var_88_1 = rcx_37
    uint64_t var_80_1 = rdx_22
    
    while (true)
        int32_t* rax_44 = var_120
        var_138.q = r13_1 + rdx_22
        int32_t* rdx_23 = r14_1
        var_120 = rax_44 + rcx_37
        r14_1 += arg_18.q
        int128_t* rcx_38 = r15_1
        r15_1 += arg_10.q
        int32_t* rax_46 = rsi_1
        rsi_1 += arg_20.q
        int32_t* r13_5 = rbx_1
        int32_t zmm1 = (zx.o(0)).d
        uint128_t zmm0
        zmm0.d = (*rcx_38).d f* *r13_1
        float zmm5 = 1f
        int32_t r8_12 = 0
        rbx_1 += var_130.q
        float zmm2 = *rax_46
        float* rax_47 = rdi_1
        rdi_1 += var_128.q
        zmm0.d = zmm0.d f* *rdx_23
        int32_t rdx_24 = 0
        float zmm4 = 1f f/ zmm0.d
        float zmm3 = (1f - zmm2) * zmm4
        
        if (not(0f >= *rax_47))
            zmm0.d = zmm0.d f* *rax_44
            zmm5 = zmm4
            r8_12 = *r13_5
            zmm0.d = zmm0.d f+ zmm2
            zmm2 = zmm0.d
            zmm1 = zmm3
            rdx_24 = int.d(zmm0.d f+ zmm2 f- 0.5f) s>> 1
            zmm2 = zmm2 f- _mm_cvtepi32_ps(zx.o(rdx_24)).d
        
        *r10_10 = rdx_24
        int32_t* rdx_26 = var_108
        var_108 = &rdx_26[sx.q(rax_31)]
        *rdx_26 = zmm1
        float* rdx_27 = var_f0
        var_f0 = &rdx_27[sx.q(rax_32)]
        *rdx_27 = zmm5
        int32_t* rdx_28 = var_d8
        var_d8 = &rdx_28[sx.q(result_1)]
        *rdx_28 = r8_12
        char* rcx_43 = var_c0
        var_c0 = &rcx_43[sx.q(rax_29)]
        *rcx_43 = 1
        float* rdx_29 = var_a8
        result = result_2 + 1
        var_a8 = &rdx_29[sx.q(rax_30)]
        *rdx_29 = zmm2
        result_2 = result
        
        if (result s>= *(arg1 + 0x40))
            break
        
        r10_10 = &r10_10[sx.q(r11_7)]
        r11_7 = var_9c
        r13_1 = var_138.q
        rcx_37 = var_88_1
        rdx_22 = var_80_1

return result
