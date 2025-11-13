// 函数: sub_14080b020
// 地址: 0x14080b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
uint32_t rcx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]

if ((not.b((rcx u>> 0xf).b) & 1) != 0)
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t rdx_1 = rcx & 0x7fff
    int32_t rax_3 = *r9_1
    
    if (rdx_1 s>= rax_3)
        int64_t rcx_1 = 0
        
        do
            rdx_1 -= rax_3
            rcx_1 += 1
            rax_3 = r9_1[rcx_1]
        while (rdx_1 s>= rax_3)

uint32_t rax_4 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
int32_t rax_5 = rax_4 & 0x7fff

if ((not.b((rax_4 u>> 0xf).b) & 1) != 0)
    int32_t* r9_2 = *(arg2 + 0x20)
    int32_t rcx_4 = *r9_2
    
    if (rax_5 s>= rcx_4)
        int64_t rdx_2 = 0
        
        do
            rax_5 -= rcx_4
            rdx_2 += 1
            rcx_4 = r9_2[rdx_2]
        while (rax_5 s>= rcx_4)

uint32_t rax_6 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_6 u>> 0xf).b) & 1) != 0)
    int32_t* r9_3 = *(arg2 + 0x20)
    int32_t rcx_6 = rax_6 & 0x7fff
    int32_t rax_8 = *r9_3
    
    if (rcx_6 s>= rax_8)
        int64_t rdx_3 = 0
        
        do
            rcx_6 -= rax_8
            rdx_3 += 1
            rax_8 = r9_3[rdx_3]
        while (rcx_6 s>= rax_8)

uint32_t rax_9 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_9 u>> 0xf).b) & 1) != 0)
    int32_t* r9_4 = *(arg2 + 0x20)
    int32_t rcx_8 = rax_9 & 0x7fff
    int32_t rax_11 = *r9_4
    
    if (rcx_8 s>= rax_11)
        int64_t rdx_4 = 0
        
        do
            rcx_8 -= rax_11
            rdx_4 += 1
            rax_11 = r9_4[rdx_4]
        while (rcx_8 s>= rax_11)

int32_t rcx_10 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_38 = rcx_10
int32_t r9_5
r9_5.b = rcx_10 != 0x7fff
int32_t var_34 = r9_5
int32_t* rdx_7
void var_30

if (rcx_10 == 0x7fff)
    rdx_7 = &var_30
else
    rdx_7 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
int32_t* var_28 = rdx_7
int32_t rcx_12 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_68 = rcx_12
int32_t rax_12
rax_12.b = rcx_12 != 0x7fff
void* var_58
void var_60

if (rcx_12 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_50 = rcx_16
int32_t rax_13
rax_13.b = rcx_16 != 0x7fff
void* var_40
void var_48

if (rcx_16 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_19 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r10_8 = rcx_19 & 0x7fff
int64_t result
result.b = r10_8 != 0x7fff
int32_t result_1 = result.d
void* var_10

if (r10_8 == 0x7fff)
    void var_18
    result = &var_18
    var_10 = &var_18
else
    var_10 = zx.q(*(arg2 + 0x80) * r10_8) + *(arg2 + 0x70)

int32_t r10_9 = 0

if (*(arg2 + 0x40) s> 0)
    while (true)
        r10_9 += 1
        *rdx_7 = 0x3f800000
        int32_t* rdx_8 = var_58
        var_58 = &rdx_8[sx.q(rax_12)]
        *rdx_8 = 0
        int32_t* rdx_9 = var_40
        var_40 = &rdx_9[sx.q(rax_13)]
        *rdx_9 = 0x3f800000
        int32_t* rdx_10 = var_10
        result = sx.q(result_1)
        var_10 = &rdx_10[result]
        *rdx_10 = 0x3f800000
        
        if (r10_9 s>= *(arg2 + 0x40))
            break
        
        rdx_7 = &rdx_7[sx.q(r9_5)]
        r9_5 = var_34

return result
