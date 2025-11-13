// 函数: sub_140827c30
// 地址: 0x140827c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint8_t r12_1 = (rdx u>> 0xf).b
int32_t rdx_1 = rdx & 0x7fff
void* r9_2

if ((not.b(r12_1) & 1) == 0)
    r9_2 = zx.q(*(arg1 + 0x80) * rdx_1) + *(arg1 + 0x70)
else
    int32_t* r10_1 = *(arg1 + 0x20)
    int32_t r9 = 0
    int32_t rax_2 = *r10_1
    
    if (rdx_1 s>= rax_2)
        int64_t rcx = 0
        
        do
            rdx_1 -= rax_2
            rcx += 1
            rax_2 = r10_1[rcx]
            r9 += 1
        while (rdx_1 s>= rax_2)
    
    r9_2 = sx.q(rdx_1) + *(*(arg1 + 0x18) + (sx.q(r9) << 3))

uint32_t rax_4 = zx.d(rax[1])
void* arg_18 = r9_2
*(arg1 + 0x10) = &rax[2]

if ((not.b((rax_4 u>> 0xf).b) & 1) != 0)
    int32_t* r9_5 = *(arg1 + 0x20)
    int32_t rcx_3 = rax_4 & 0x7fff
    int32_t rax_6 = *r9_5
    
    if (rcx_3 s>= rax_6)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_6
            rdx_2 += 1
            rax_6 = r9_5[rdx_2]
        while (rcx_3 s>= rax_6)

uint32_t rax_7 = zx.d(rax[2])
uint8_t r13_1 = (rax_7 u>> 0xf).b
*(arg1 + 0x10) = &rax[3]
int32_t rdx_4 = rax_7 & 0x7fff
int32_t* r15_1

if ((not.b(r13_1) & 1) == 0)
    r15_1 = zx.q(*(arg1 + 0x80) * rdx_4) + *(arg1 + 0x70)
else
    int32_t* r10_3 = *(arg1 + 0x20)
    int32_t r9_6 = 0
    int32_t rax_9 = *r10_3
    
    if (rdx_4 s>= rax_9)
        int64_t rcx_4 = 0
        
        do
            rdx_4 -= rax_9
            rcx_4 += 1
            rax_9 = r10_3[rcx_4]
            r9_6 += 1
        while (rdx_4 s>= rax_9)
    
    r15_1 = sx.q(rdx_4) + *(*(arg1 + 0x18) + (sx.q(r9_6) << 3))

uint32_t rax_11 = zx.d(rax[3])
uint32_t rax_12 = rax_11 u>> 0xf
int32_t rdx_6 = rax_11 & 0x7fff
uint32_t arg_8 = rax_12
rax_12.b = not.b(rax_12.b)
*(arg1 + 0x10) = &rax[4]
int32_t* r14_1

if ((rax_12.b & 1) == 0)
    r14_1 = zx.q(*(arg1 + 0x80) * rdx_6) + *(arg1 + 0x70)
else
    int32_t* r10_4 = *(arg1 + 0x20)
    int32_t r9_7 = 0
    int32_t rax_13 = *r10_4
    
    if (rdx_6 s>= rax_13)
        int64_t rcx_6 = 0
        
        do
            rdx_6 -= rax_13
            rcx_6 += 1
            rax_13 = r10_4[rcx_6]
            r9_7 += 1
        while (rdx_6 s>= rax_13)
    
    r14_1 = sx.q(rdx_6) + *(*(arg1 + 0x18) + (sx.q(r9_7) << 3))

uint32_t rax_15 = zx.d(rax[4])
uint32_t rax_16 = rax_15 u>> 0xf
int32_t rdx_8 = rax_15 & 0x7fff
uint32_t arg_10 = rax_16
rax_16.b = not.b(rax_16.b)
*(arg1 + 0x10) = &rax[5]
int32_t* rsi_1

if ((rax_16.b & 1) == 0)
    rsi_1 = zx.q(*(arg1 + 0x80) * rdx_8) + *(arg1 + 0x70)
else
    int32_t* r10_5 = *(arg1 + 0x20)
    int32_t r9_8 = 0
    int32_t rax_17 = *r10_5
    
    if (rdx_8 s>= rax_17)
        int64_t rcx_8 = 0
        
        do
            rdx_8 -= rax_17
            rcx_8 += 1
            rax_17 = r10_5[rcx_8]
            r9_8 += 1
        while (rdx_8 s>= rax_17)
    
    rsi_1 = sx.q(rdx_8) + *(*(arg1 + 0x18) + (sx.q(r9_8) << 3))

uint32_t rax_19 = zx.d(rax[5])
uint8_t rdi_1 = (rax_19 u>> 0xf).b
*(arg1 + 0x10) = &rax[6]
int32_t rdx_10 = rax_19 & 0x7fff
int32_t* rbx_1

if ((not.b(rdi_1) & 1) == 0)
    rbx_1 = zx.q(*(arg1 + 0x80) * rdx_10) + *(arg1 + 0x70)
else
    int32_t* r10_6 = *(arg1 + 0x20)
    int32_t r9_9 = 0
    int32_t rax_21 = *r10_6
    
    if (rdx_10 s>= rax_21)
        int64_t rcx_10 = 0
        
        do
            rdx_10 -= rax_21
            rcx_10 += 1
            rax_21 = r10_6[rcx_10]
            r9_9 += 1
        while (rdx_10 s>= rax_21)
    
    rbx_1 = sx.q(rdx_10) + *(*(arg1 + 0x18) + (sx.q(r9_9) << 3))

uint32_t rcx_12 = zx.d(rax[6])
*(arg1 + 0x10) = &rax[7]
int32_t rcx_13 = rcx_12 & 0x7fff
int32_t var_68 = rcx_13
int32_t r10_7
r10_7.b = rcx_13 != 0x7fff
int32_t var_64 = r10_7
char* rdx_13
void var_60

if (rcx_13 == 0x7fff)
    rdx_13 = &var_60
else
    rdx_13 = zx.q(*(arg1 + 0x80) * rcx_13) + *(arg1 + 0x70)
char* var_58 = rdx_13
int32_t rcx_15 = zx.d(rax[7]) & 0x7fff
*(arg1 + 0x10) = &rax[8]
int32_t var_c8 = rcx_15
int32_t rax_23
rax_23.b = rcx_15 != 0x7fff
void* var_b8
void var_c0

if (rcx_15 == 0x7fff)
    var_b8 = &var_c0
else
    var_b8 = zx.q(rcx_15 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_19 = zx.d(rax[8]) & 0x7fff
*(arg1 + 0x10) = &rax[9]
int32_t var_b0 = rcx_19
int32_t rax_24
rax_24.b = rcx_19 != 0x7fff
void* var_a0
void var_a8

if (rcx_19 == 0x7fff)
    var_a0 = &var_a8
else
    var_a0 = zx.q(rcx_19 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_23 = zx.d(rax[9]) & 0x7fff
*(arg1 + 0x10) = &rax[0xa]
int32_t var_98 = rcx_23
int32_t rax_25
rax_25.b = rcx_23 != 0x7fff
void* var_88
void var_90

if (rcx_23 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_23 * *(arg1 + 0x80)) + *(arg1 + 0x70)
uint32_t rcx_26 = zx.d(rax[0xa])
*(arg1 + 0x10) = &rax[0xb]
int32_t r9_15 = rcx_26 & 0x7fff
int32_t var_80 = r9_15
int64_t result
result.b = r9_15 != 0x7fff
int32_t result_1 = result.d
void* var_70

if (r9_15 == 0x7fff)
    void var_78
    result = &var_78
    var_70 = &var_78
else
    var_70 = zx.q(*(arg1 + 0x80) * r9_15) + *(arg1 + 0x70)

int32_t r9_16 = 0

if (*(arg1 + 0x40) s> 0)
    uint64_t r11_6 = zx.q(arg_8.b) << 2
    uint64_t rax_28 = zx.q(arg_10.b) << 2
    uint64_t rdi_3 = zx.q(rdi_1) << 2
    arg_10.q = rdi_3
    uint64_t arg_20 = r11_6
    arg_8.q = rax_28
    
    while (true)
        float* rax_29 = arg_18
        arg_18 = &rax_29[zx.q(r12_1)]
        int32_t* rax_31 = r15_1
        r15_1 = &r15_1[zx.q(r13_1)]
        float zmm1 = *rax_31
        int32_t* rax_32 = r14_1
        r14_1 += r11_6
        int32_t r11_7 = *rsi_1
        float zmm2 = zmm1 - *rax_29
        float zmm0 = *rax_32
        int32_t* rax_33 = rbx_1
        rsi_1 += arg_8.q
        rbx_1 += rdi_3
        int32_t rdi_4 = *rax_33
        void* var_58_1 = &rdx_13[sx.q(r10_7)]
        void* rax_35
        rax_35.b = zmm0 >= zmm1
        *rdx_13 = rax_35.b
        
        if (zmm0 < zmm2 || zmm0 >= zmm1)
            int32_t* rdx_16 = var_b8
            var_b8 = &rdx_16[sx.q(rax_23)]
            *rdx_16 = 0
            void* rdx_17 = var_a0
            var_a0 = rdx_17 + (sx.q(rax_24) << 2)
            *rdx_17 = 0
        else
            int32_t* rdx_14 = var_b8
            var_b8 = &rdx_14[sx.q(rax_23)]
            *rdx_14 = r11_7
            float* rdx_15 = var_a0
            var_a0 = &rdx_15[sx.q(rax_24)]
            *rdx_15 = zmm0 - zmm2
        
        int32_t* rdx_18 = var_88
        r9_16 += 1
        var_88 = &rdx_18[sx.q(rax_25)]
        *rdx_18 = 0
        int32_t* rdx_19 = var_70
        result = sx.q(result_1)
        var_70 = &rdx_19[result]
        *rdx_19 = rdi_4
        
        if (r9_16 s>= *(arg1 + 0x40))
            break
        
        rdx_13 = var_58_1
        r10_7 = var_64
        r11_6 = arg_20
        rdi_3 = arg_10.q

return result
