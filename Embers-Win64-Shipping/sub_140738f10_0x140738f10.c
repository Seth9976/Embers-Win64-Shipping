// 函数: sub_140738f10
// 地址: 0x140738f10
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

if ((not.b((rax_4 u>> 0xf).b) & 1) != 0)
    int32_t* r9_2 = *(arg2 + 0x20)
    int32_t rcx_3 = rax_4 & 0x7fff
    int32_t rax_6 = *r9_2
    
    if (rcx_3 s>= rax_6)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_6
            rdx_2 += 1
            rax_6 = r9_2[rdx_2]
        while (rcx_3 s>= rax_6)

uint32_t rax_7 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_7 u>> 0xf).b) & 1) != 0)
    int32_t* r9_3 = *(arg2 + 0x20)
    int32_t rcx_5 = rax_7 & 0x7fff
    int32_t rax_9 = *r9_3
    
    if (rcx_5 s>= rax_9)
        int64_t rdx_3 = 0
        
        do
            rcx_5 -= rax_9
            rdx_3 += 1
            rax_9 = r9_3[rdx_3]
        while (rcx_5 s>= rax_9)

uint32_t rax_10 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_10 u>> 0xf).b) & 1) != 0)
    int32_t* r9_4 = *(arg2 + 0x20)
    int32_t rcx_7 = rax_10 & 0x7fff
    int32_t rax_12 = *r9_4
    
    if (rcx_7 s>= rax_12)
        int64_t rdx_4 = 0
        
        do
            rcx_7 -= rax_12
            rdx_4 += 1
            rax_12 = r9_4[rdx_4]
        while (rcx_7 s>= rax_12)

uint32_t rax_13 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]

if ((not.b((rax_13 u>> 0xf).b) & 1) != 0)
    int32_t* r9_5 = *(arg2 + 0x20)
    int32_t rcx_9 = rax_13 & 0x7fff
    int32_t rax_15 = *r9_5
    
    if (rcx_9 s>= rax_15)
        int64_t rdx_5 = 0
        
        do
            rcx_9 -= rax_15
            rdx_5 += 1
            rax_15 = r9_5[rdx_5]
        while (rcx_9 s>= rax_15)

int32_t* r9_6 = *(arg2 + 0x20)
int32_t rcx_11 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t rdx_6 = *r9_6

if (rcx_11 s>= rdx_6)
    int64_t rax_16 = 0
    
    do
        rcx_11 -= rdx_6
        rax_16 += 1
        rdx_6 = r9_6[rax_16]
    while (rcx_11 s>= rdx_6)

int32_t rcx_13 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_38 = rcx_13
int32_t r10_6
r10_6.b = rcx_13 != 0x7fff
int32_t var_34 = r10_6
int32_t* rdx_9
void var_30

if (rcx_13 == 0x7fff)
    rdx_9 = &var_30
else
    rdx_9 = zx.q(*(arg2 + 0x80) * rcx_13) + *(arg2 + 0x70)
int32_t* var_28 = rdx_9
uint32_t rcx_14 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r9_9 = rcx_14 & 0x7fff
int64_t result
result.b = r9_9 != 0x7fff
int32_t result_1 = result.d
void* var_10

if (r9_9 == 0x7fff)
    void var_18
    result = &var_18
    var_10 = &var_18
else
    var_10 = zx.q(*(arg2 + 0x80) * r9_9) + *(arg2 + 0x70)

int32_t r9_10 = 0

if (*(arg2 + 0x40) s> 0)
    while (true)
        r9_10 += 1
        int32_t* var_28_1 = &rdx_9[sx.q(r10_6)]
        *rdx_9 = 0
        int32_t* rdx_10 = var_10
        result = sx.q(result_1)
        var_10 = &rdx_10[result]
        *rdx_10 = 0
        
        if (r9_10 s>= *(arg2 + 0x40))
            break
        
        rdx_9 = var_28_1
        r10_6 = var_34

return result
