// 函数: sub_1407bbd80
// 地址: 0x1407bbd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
uint32_t rcx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t* rcx_1 = *(arg2 + 0x20)
int32_t rax_2 = rcx & 0x7fff
int32_t r8 = *rcx_1

if (rax_2 s>= r8)
    int64_t rdx = 0
    
    do
        rax_2 -= r8
        rdx += 1
        r8 = rcx_1[rdx]
    while (rax_2 s>= r8)

uint32_t rax_3 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_3 u>> 0xf).b) & 1) != 0)
    int32_t rax_5 = *rcx_1
    int32_t rdx_2 = rax_3 & 0x7fff
    
    if (rdx_2 s>= rax_5)
        int64_t r8_1 = 0
        
        do
            rdx_2 -= rax_5
            r8_1 += 1
            rax_5 = rcx_1[r8_1]
        while (rdx_2 s>= rax_5)

uint32_t rax_6 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_6 u>> 0xf).b) & 1) != 0)
    int32_t rax_8 = *rcx_1
    int32_t rdx_4 = rax_6 & 0x7fff
    
    if (rdx_4 s>= rax_8)
        int64_t r8_2 = 0
        
        do
            rdx_4 -= rax_8
            r8_2 += 1
            rax_8 = rcx_1[r8_2]
        while (rdx_4 s>= rax_8)

uint32_t rax_9 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_9 u>> 0xf).b) & 1) != 0)
    int32_t rax_11 = *rcx_1
    int32_t rdx_6 = rax_9 & 0x7fff
    
    if (rdx_6 s>= rax_11)
        int64_t r8_3 = 0
        
        do
            rdx_6 -= rax_11
            r8_3 += 1
            rax_11 = rcx_1[r8_3]
        while (rdx_6 s>= rax_11)

int32_t rcx_3 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_68 = rcx_3
int32_t rax_12
rax_12.b = rcx_3 != 0x7fff
void* var_58
void var_60

if (rcx_3 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_50 = rcx_7
int32_t rax_13
rax_13.b = rcx_7 != 0x7fff
void* var_40
void var_48

if (rcx_7 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_38 = rcx_11
int32_t rax_14
rax_14.b = rcx_11 != 0x7fff
void* var_28
void var_30

if (rcx_11 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t rdx_11 = rcx_14 & 0x7fff
int32_t var_20 = rdx_11
int32_t rax_16
rax_16.b = rdx_11 != 0x7fff
void* var_10
void var_18

if (rdx_11 == 0x7fff)
    var_10 = &var_18
else
    var_10 = zx.q(*(arg2 + 0x80) * rdx_11) + *(arg2 + 0x70)
EnterCriticalSection(&data_143ce0410)
int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_12 = var_58
        i += 1
        var_58 = &rdx_12[sx.q(rax_12)]
        *rdx_12 = 0xbf800000
        int32_t* rdx_13 = var_40
        var_40 = &rdx_13[sx.q(rax_13)]
        *rdx_13 = 0
        int32_t* r8_4 = var_28
        var_28 = &r8_4[sx.q(rax_14)]
        *r8_4 = 0
        int32_t* r8_5 = var_10
        var_10 = &r8_5[sx.q(rax_16)]
        *r8_5 = 0x3f800000
    while (i s< *(arg2 + 0x40))

return LeaveCriticalSection(&data_143ce0410)
