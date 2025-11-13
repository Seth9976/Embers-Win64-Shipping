// 函数: sub_1407d9720
// 地址: 0x1407d9720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r9 = 0
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
void* rbx = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_5 u>> 0xf).b) & 1) != 0)
    int32_t rax_7 = *r8
    int32_t rcx_3 = rax_5 & 0x7fff
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
        while (rcx_3 s>= rax_7)

uint32_t rax_8 = zx.d(rax[2])
uint8_t rax_9 = (rax_8 u>> 0xf).b
int32_t rcx_5 = rax_8 & 0x7fff
*(arg2 + 0x10) = &rax[3]
float* r15_1

if ((not.b(rax_9) & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_10 = *r8
    int32_t r9_1 = 0
    
    if (rcx_5 s>= rax_10)
        int64_t rdx_4 = 0
        
        do
            rcx_5 -= rax_10
            rdx_4 += 1
            rax_10 = r8[rdx_4]
            r9_1 += 1
        while (rcx_5 s>= rax_10)
    
    r15_1 = sx.q(rcx_5) + *(r11 + (sx.q(r9_1) << 3))

uint32_t rax_12 = zx.d(rax[3])
uint8_t r13_1 = (rax_12 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i = rax_12 & 0x7fff
int32_t* r14_1

if ((not.b(r13_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i s>= *r8)
        int64_t rax_14 = 0
        int32_t* rdx_5 = nullptr
        
        do
            i -= *(rdx_5 + r8)
            rax_14 += 1
            rdx_5 = rax_14 << 2
            r9_2 += 1
        while (i s>= *(rdx_5 + r8))
    
    r14_1 = sx.q(i) + *(r11 + (sx.q(r9_2) << 3))

uint32_t rax_16 = zx.d(rax[4])
uint8_t r12_1 = (rax_16 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_16 & 0x7fff
float* rsi_1

if ((not.b(r12_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_18 = *r8
    int32_t r9_3 = 0
    
    if (rcx_8 s>= rax_18)
        int64_t rdx_6 = 0
        
        do
            rcx_8 -= rax_18
            rdx_6 += 1
            rax_18 = r8[rdx_6]
            r9_3 += 1
        while (rcx_8 s>= rax_18)
    
    rsi_1 = sx.q(rcx_8) + *(r11 + (sx.q(r9_3) << 3))

int32_t rcx_10 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_128 = rcx_10
int32_t r8_1
r8_1.b = rcx_10 != 0x7fff
int32_t var_124 = r8_1
int32_t* rdx_9
void var_120

if (rcx_10 == 0x7fff)
    rdx_9 = &var_120
else
    rdx_9 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
float* var_118 = rdx_9
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_110 = rcx_12
int32_t rax_20
rax_20.b = rcx_12 != 0x7fff
void* var_100
void var_108

if (rcx_12 == 0x7fff)
    var_100 = &var_108
else
    var_100 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_f8 = rcx_16
int32_t rax_21
rax_21.b = rcx_16 != 0x7fff
void* var_e8
void var_f0

if (rcx_16 == 0x7fff)
    var_e8 = &var_f0
else
    var_e8 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_20 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_e0 = rcx_20
int32_t rax_22
rax_22.b = rcx_20 != 0x7fff
void* var_d0
void var_d8

if (rcx_20 == 0x7fff)
    var_d0 = &var_d8
else
    var_d0 = zx.q(rcx_20 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_24 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_c8 = rcx_24
int32_t rax_23
rax_23.b = rcx_24 != 0x7fff
void* var_b8
void var_c0

if (rcx_24 == 0x7fff)
    var_b8 = &var_c0
else
    var_b8 = zx.q(rcx_24 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_28 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_b0 = rcx_28
int32_t rax_24
rax_24.b = rcx_28 != 0x7fff
void* var_a0
void var_a8

if (rcx_28 == 0x7fff)
    var_a0 = &var_a8
else
    var_a0 = zx.q(rcx_28 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_32 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_98 = rcx_32
int32_t rax_25
rax_25.b = rcx_32 != 0x7fff
void* var_88
void var_90

if (rcx_32 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_32 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_36 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_80 = rcx_36
int32_t rax_26
rax_26.b = rcx_36 != 0x7fff
int32_t* var_70
void var_78

if (rcx_36 == 0x7fff)
    var_70 = &var_78
else
    var_70 = zx.q(rcx_36 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_39 = zx.d(rax[0xd])
*(arg2 + 0x10) = &rax[0xe]
int32_t r9_13 = rcx_39 & 0x7fff
int32_t var_68 = r9_13
int64_t result
result.b = r9_13 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r9_13 == 0x7fff)
    void var_60
    result = &var_60
    result_2 = &var_60
else
    result_2 = zx.q(*(arg2 + 0x80) * r9_13) + *(arg2 + 0x70)

void* rbx_1 = *(rbx + 8)

if (rbx_1 != 0)
    int64_t* rbx_2 = *(rbx_1 + 0x50)
    int32_t rdx_17 = *(rbx + 0x17c)
    uint32_t rax_37 = zx.d(*(rbx_2 + 0x5f))
    
    if (rax_37 s>= rdx_17)
        rdx_17 = rax_37
    
    int32_t rax_38 = sub_1423647f0(rbx_2, rdx_17)
    int64_t* rbx_4 = *(*rbx_2 + (sx.q(rax_38) << 3))
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    void* var_50
    result = sub_14229e7e0(&rbx_4[0x2f], &var_50)
    int32_t i_1 = 0
    
    if (*(arg2 + 0x40) s> 0)
        float* r11_1 = var_118
        
        do
            i_1 += 1
            float zmm0 = *r14_1 + *r15_1
            r15_1 = &r15_1[zx.q(rax_9)]
            r14_1 = &r14_1[zx.q(r13_1)]
            zmm0 = zmm0 + *rsi_1
            rsi_1 = &rsi_1[zx.q(r12_1)]
            *r11_1 = zmm0
            *var_100 = 0
            *var_e8 = 0
            *var_d0 = 0
            *var_b8 = zmm0
            *var_a0 = 0
            *var_88 = 0
            *var_70 = 0
            *result_2 = zmm0
            r11_1 = &var_118[sx.q(var_124)]
            var_118 = r11_1
            var_100 += sx.q(rax_20) << 2
            var_e8 += sx.q(rax_21) << 2
            var_d0 += sx.q(rax_22) << 2
            var_b8 += sx.q(rax_23) << 2
            var_a0 += sx.q(rax_24) << 2
            var_88 += sx.q(rax_25) << 2
            result = result_2
            var_70 = &var_70[sx.q(rax_26)]
            result_2 = result + (sx.q(result_1) << 2)
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_4 != 0)
        result = zx.q(rbx_4[1].d)
        rbx_4[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_4)(rbx_4, 1)
else
    int32_t r9_14 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r9_14 += 1
            *rdx_9 = 0x3f800000
            int32_t* rdx_10 = var_100
            var_100 = &rdx_10[sx.q(rax_20)]
            *rdx_10 = 0
            int32_t* rdx_11 = var_e8
            var_e8 = &rdx_11[sx.q(rax_21)]
            *rdx_11 = 0
            int32_t* rdx_12 = var_d0
            var_d0 = &rdx_12[sx.q(rax_22)]
            *rdx_12 = 0
            int32_t* rdx_13 = var_b8
            var_b8 = &rdx_13[sx.q(rax_23)]
            *rdx_13 = 0x3f800000
            int32_t* rdx_14 = var_a0
            var_a0 = &rdx_14[sx.q(rax_24)]
            *rdx_14 = 0
            int32_t* rdx_15 = var_88
            var_88 = &rdx_15[sx.q(rax_25)]
            *rdx_15 = 0
            int32_t* rdx_16 = var_70
            var_70 = &rdx_16[sx.q(rax_26)]
            *rdx_16 = 0
            int32_t* result_3 = result_2
            result = sx.q(result_1)
            result_2 = &result_3[result]
            *result_3 = 0x3f800000
            
            if (r9_14 s>= *(arg2 + 0x40))
                break
            
            rdx_9 = &rdx_9[sx.q(r8_1)]
            r8_1 = var_124

return result
