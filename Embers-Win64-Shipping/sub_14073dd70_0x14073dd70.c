// 函数: sub_14073dd70
// 地址: 0x14073dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
uint32_t rcx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]

if ((not.b((rcx u>> 0xf).b) & 1) != 0)
    int32_t* rdx = *(arg2 + 0x20)
    int32_t r8_1 = rcx & 0x7fff
    int32_t rax_3 = *rdx
    
    if (r8_1 s>= rax_3)
        int64_t rcx_1 = 0
        
        do
            r8_1 -= rax_3
            rcx_1 += 1
            rax_3 = rdx[rcx_1]
        while (r8_1 s>= rax_3)

uint32_t rax_4 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_4 u>> 0xf).b) & 1) != 0)
    int32_t* r8_2 = *(arg2 + 0x20)
    int32_t rcx_3 = rax_4 & 0x7fff
    int32_t rax_6 = *r8_2
    
    if (rcx_3 s>= rax_6)
        int64_t rdx_1 = 0
        
        do
            rcx_3 -= rax_6
            rdx_1 += 1
            rax_6 = r8_2[rdx_1]
        while (rcx_3 s>= rax_6)

int32_t* r8_3 = *(arg2 + 0x20)
int32_t rcx_5 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t rdx_2 = *r8_3

if (rcx_5 s>= rdx_2)
    int64_t rax_7 = 0
    
    do
        rcx_5 -= rdx_2
        rax_7 += 1
        rdx_2 = r8_3[rax_7]
    while (rcx_5 s>= rdx_2)

int32_t rcx_7 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_38 = rcx_7
int32_t r10_3
r10_3.b = rcx_7 != 0x7fff
int32_t var_34 = r10_3
int32_t* rdx_5
void var_30

if (rcx_7 == 0x7fff)
    rdx_5 = &var_30
else
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_7) + *(arg2 + 0x70)
int32_t* var_28 = rdx_5
uint32_t rcx_8 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t r8_6 = rcx_8 & 0x7fff
int64_t result
result.b = r8_6 != 0x7fff
int32_t result_1 = result.d
void* var_10

if (r8_6 == 0x7fff)
    void var_18
    result = &var_18
    var_10 = &var_18
else
    var_10 = zx.q(*(arg2 + 0x80) * r8_6) + *(arg2 + 0x70)

int32_t r8_7 = 0

if (*(arg2 + 0x40) s> 0)
    while (true)
        r8_7 += 1
        int32_t* var_28_1 = &rdx_5[sx.q(r10_3)]
        *rdx_5 = 0
        int32_t* rdx_6 = var_10
        result = sx.q(result_1)
        var_10 = &rdx_6[result]
        *rdx_6 = 0
        
        if (r8_7 s>= *(arg2 + 0x40))
            break
        
        rdx_5 = var_28_1
        r10_3 = var_34

return result
