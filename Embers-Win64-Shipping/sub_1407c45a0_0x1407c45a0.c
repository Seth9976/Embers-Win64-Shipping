// 函数: sub_1407c45a0
// 地址: 0x1407c45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r13_1 = (r8 u>> 0xf).b
int32_t rdx_1 = r8 & 0x7fff
int32_t* r15_1

if ((not.b(r13_1) & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t r8_1 = 0
    int32_t rax_2 = *r9_1
    
    if (rdx_1 s>= rax_2)
        int64_t rcx = 0
        
        do
            rdx_1 -= rax_2
            rcx += 1
            rax_2 = r9_1[rcx]
            r8_1 += 1
        while (rdx_1 s>= rax_2)
    
    r15_1 = sx.q(rdx_1) + *(*(arg2 + 0x18) + (sx.q(r8_1) << 3))

uint32_t rax_4 = zx.d(rax[1])
uint8_t r11_1 = (rax_4 u>> 0xf).b
*(arg2 + 0x10) = &rax[2]
int32_t rdx_3 = rax_4 & 0x7fff
int64_t* r14_1

if ((not.b(r11_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)
else
    int32_t* r9_2 = *(arg2 + 0x20)
    int32_t r8_2 = 0
    int32_t rax_6 = *r9_2
    
    if (rdx_3 s>= rax_6)
        int64_t rcx_2 = 0
        
        do
            rdx_3 -= rax_6
            rcx_2 += 1
            rax_6 = r9_2[rcx_2]
            r8_2 += 1
        while (rdx_3 s>= rax_6)
    
    r14_1 = sx.q(rdx_3) + *(*(arg2 + 0x18) + (sx.q(r8_2) << 3))

uint32_t rax_8 = zx.d(rax[2])
uint8_t r10_3 = (rax_8 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t rdx_5 = rax_8 & 0x7fff
float* rsi_1

if ((not.b(r10_3) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rdx_5) + *(arg2 + 0x70)
else
    int32_t* r9_3 = *(arg2 + 0x20)
    int32_t r8_3 = 0
    int32_t rax_10 = *r9_3
    
    if (rdx_5 s>= rax_10)
        int64_t rcx_4 = 0
        
        do
            rdx_5 -= rax_10
            rcx_4 += 1
            rax_10 = r9_3[rcx_4]
            r8_3 += 1
        while (rdx_5 s>= rax_10)
    
    rsi_1 = sx.q(rdx_5) + *(*(arg2 + 0x18) + (sx.q(r8_3) << 3))

int32_t rcx_7 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_f8 = rcx_7
int32_t rax_12
rax_12.b = rcx_7 != 0x7fff
void* var_e8
void var_f0

if (rcx_7 == 0x7fff)
    var_e8 = &var_f0
else
    var_e8 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_e0 = rcx_11
int32_t rax_13
rax_13.b = rcx_11 != 0x7fff
void* var_d0
void var_d8

if (rcx_11 == 0x7fff)
    var_d0 = &var_d8
else
    var_d0 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rdx_9 = rcx_14 & 0x7fff
int32_t var_c8 = rdx_9
int64_t result
result.b = rdx_9 != 0x7fff
int32_t result_1 = result.d
void* var_b8

if (rdx_9 == 0x7fff)
    void var_c0
    result = &var_c0
    var_b8 = &var_c0
else
    var_b8 = zx.q(*(arg2 + 0x80) * rdx_9) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    float var_78[0x4]
    float* rax_19 = sub_1407811d0(&var_78, 1)
    float* rax_20 = sub_1407811d0(&var_78, 2)
    void* rax_21 = sub_1407811d0(&var_78, 0)
    
    do
        float* r8_4 = rsi_1
        int64_t* rdx_10 = r14_1
        int32_t* rcx_21 = r15_1
        r15_1 = &r15_1[zx.q(r13_1)]
        rsi_1 = &rsi_1[zx.q(r10_3)]
        r14_1 += zx.q(r11_1) << 2
        float zmm1[0x4] = *(arg1 + 0x34)
        int64_t zmm2 = *rdx_10
        zmm1[0] = zmm1[0] f+ *rcx_21
        zmm2.d = zmm2.d f+ *(arg1 + 0x38)
        float zmm0 = *r8_4 f+ *(arg1 + 0x3c)
        int64_t var_98 = (_mm_unpacklo_ps(zmm1, zmm2)).q
        float var_90_1 = zmm0
        sub_1407b50e0(&var_78, &var_98)
        float* rdx_12 = var_e8
        i += 1
        var_e8 = &rdx_12[sx.q(rax_12)]
        *rdx_12 = rax_19[2] - rax_20[1]
        float* rdx_13 = var_d0
        var_d0 = &rdx_13[sx.q(rax_13)]
        *rdx_13 = *rax_20 f- *(rax_21 + 8)
        float* rdx_14 = var_b8
        result = sx.q(result_1)
        var_b8 = &rdx_14[result]
        *rdx_14 = *(rax_21 + 4) - *rax_19
    while (i s< *(arg2 + 0x40))

return result
