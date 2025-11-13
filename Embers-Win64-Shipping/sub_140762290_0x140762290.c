// 函数: sub_140762290
// 地址: 0x140762290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r10 = 0
uint32_t rcx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t* rcx_1 = *(arg2 + 0x20)
int32_t rax_2 = rcx & 0x7fff
int32_t r9 = *rcx_1

if (rax_2 s>= r9)
    int64_t rdx = 0
    
    do
        rax_2 -= r9
        rdx += 1
        r9 = rcx_1[rdx]
    while (rax_2 s>= r9)

uint32_t rax_3 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_3 u>> 0xf).b) & 1) != 0)
    int32_t rax_5 = *rcx_1
    int32_t rdx_2 = rax_3 & 0x7fff
    
    if (rdx_2 s>= rax_5)
        int64_t r9_1 = 0
        
        do
            rdx_2 -= rax_5
            r9_1 += 1
            rax_5 = rcx_1[r9_1]
        while (rdx_2 s>= rax_5)

uint32_t rax_6 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_6 u>> 0xf).b) & 1) != 0)
    int32_t rax_8 = *rcx_1
    int32_t rdx_4 = rax_6 & 0x7fff
    
    if (rdx_4 s>= rax_8)
        int64_t r9_2 = 0
        
        do
            rdx_4 -= rax_8
            r9_2 += 1
            rax_8 = rcx_1[r9_2]
        while (rdx_4 s>= rax_8)

uint32_t rax_9 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_9 u>> 0xf).b) & 1) != 0)
    int32_t rax_11 = *rcx_1
    int32_t rdx_6 = rax_9 & 0x7fff
    
    if (rdx_6 s>= rax_11)
        int64_t r9_3 = 0
        
        do
            rdx_6 -= rax_11
            r9_3 += 1
            rax_11 = rcx_1[r9_3]
        while (rdx_6 s>= rax_11)

uint32_t rax_12 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]

if ((not.b((rax_12 u>> 0xf).b) & 1) != 0)
    int32_t i = rax_12 & 0x7fff
    
    if (i s>= *rcx_1)
        int64_t rax_14 = 0
        int32_t* r9_4 = nullptr
        
        do
            i -= *(r9_4 + rcx_1)
            rax_14 += 1
            r9_4 = rax_14 << 2
        while (i s>= *(r9_4 + rcx_1))

int32_t rcx_3 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_38 = rcx_3
int32_t r9_5
r9_5.b = rcx_3 != 0x7fff
int32_t var_34 = r9_5
int32_t* rdx_10
void var_30

if (rcx_3 == 0x7fff)
    rdx_10 = &var_30
else
    rdx_10 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
int32_t* var_28 = rdx_10
int32_t rcx_5 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_68 = rcx_5
int32_t rax_15
rax_15.b = rcx_5 != 0x7fff
void* var_58
void var_60

if (rcx_5 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_50 = rcx_9
int32_t rax_16
rax_16.b = rcx_9 != 0x7fff
void* var_40
void var_48

if (rcx_9 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_12 = zx.d(rax[8])
*(arg2 + 0x10) = &rax[9]
int32_t r11_9 = rcx_12 & 0x7fff
int64_t result
result.b = r11_9 != 0x7fff
int32_t result_1 = result.d
void* var_10

if (r11_9 == 0x7fff)
    void var_18
    result = &var_18
    var_10 = &var_18
else
    var_10 = zx.q(*(arg2 + 0x80) * r11_9) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    while (true)
        r10 += 1
        *rdx_10 = 0x3f800000
        int32_t* rdx_11 = var_58
        var_58 = &rdx_11[sx.q(rax_15)]
        *rdx_11 = 0x3f800000
        int32_t* rdx_12 = var_40
        var_40 = &rdx_12[sx.q(rax_16)]
        *rdx_12 = 0x3f800000
        int32_t* rdx_13 = var_10
        result = sx.q(result_1)
        var_10 = &rdx_13[result]
        *rdx_13 = 0x3f800000
        
        if (r10 s>= *(arg2 + 0x40))
            break
        
        rdx_10 = &rdx_10[sx.q(r9_5)]
        r9_5 = var_34

return result
