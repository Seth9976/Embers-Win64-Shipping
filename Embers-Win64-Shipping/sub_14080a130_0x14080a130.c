// 函数: sub_14080a130
// 地址: 0x14080a130
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

int32_t rcx_5 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_38 = rcx_5
int32_t r9_3
r9_3.b = rcx_5 != 0x7fff
int32_t var_34 = r9_3
int32_t* rdx_5
void var_30

if (rcx_5 == 0x7fff)
    rdx_5 = &var_30
else
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
int32_t* var_28 = rdx_5
int32_t rcx_7 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_68 = rcx_7
int32_t rax_7
rax_7.b = rcx_7 != 0x7fff
void* var_58
void var_60

if (rcx_7 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_50 = rcx_11
int32_t rax_8
rax_8.b = rcx_11 != 0x7fff
void* var_40
void var_48

if (rcx_11 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t r10_6 = rcx_14 & 0x7fff
int64_t result
result.b = r10_6 != 0x7fff
int32_t result_1 = result.d
void* var_10

if (r10_6 == 0x7fff)
    void var_18
    result = &var_18
    var_10 = &var_18
else
    var_10 = zx.q(*(arg2 + 0x80) * r10_6) + *(arg2 + 0x70)

int32_t r10_7 = 0

if (*(arg2 + 0x40) s> 0)
    while (true)
        r10_7 += 1
        *rdx_5 = 0x3f800000
        int32_t* rdx_6 = var_58
        var_58 = &rdx_6[sx.q(rax_7)]
        *rdx_6 = 0
        int32_t* rdx_7 = var_40
        var_40 = &rdx_7[sx.q(rax_8)]
        *rdx_7 = 0x3f800000
        int32_t* rdx_8 = var_10
        result = sx.q(result_1)
        var_10 = &rdx_8[result]
        *rdx_8 = 0x3f800000
        
        if (r10_7 s>= *(arg2 + 0x40))
            break
        
        rdx_5 = &rdx_5[sx.q(r9_3)]
        r9_3 = var_34

return result
