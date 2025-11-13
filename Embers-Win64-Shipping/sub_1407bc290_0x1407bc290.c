// 函数: sub_1407bc290
// 地址: 0x1407bc290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
uint32_t rcx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t* rcx_1 = *(arg2 + 0x20)
int32_t rax_2 = rcx & 0x7fff
int32_t rdx = *rcx_1

if (rax_2 s>= rdx)
    int64_t r8_1 = 0
    
    do
        rax_2 -= rdx
        r8_1 += 1
        rdx = rcx_1[r8_1]
    while (rax_2 s>= rdx)

uint32_t rax_3 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_3 u>> 0xf).b) & 1) != 0)
    int32_t rax_5 = *rcx_1
    int32_t rdx_2 = rax_3 & 0x7fff
    
    if (rdx_2 s>= rax_5)
        int64_t r8_2 = 0
        
        do
            rdx_2 -= rax_5
            r8_2 += 1
            rax_5 = rcx_1[r8_2]
        while (rdx_2 s>= rax_5)

uint32_t rax_6 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_6 u>> 0xf).b) & 1) != 0)
    int32_t rax_8 = *rcx_1
    int32_t rdx_4 = rax_6 & 0x7fff
    
    if (rdx_4 s>= rax_8)
        int64_t r8_3 = 0
        
        do
            rdx_4 -= rax_8
            r8_3 += 1
            rax_8 = rcx_1[r8_3]
        while (rdx_4 s>= rax_8)

uint32_t rax_9 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_9 u>> 0xf).b) & 1) != 0)
    int32_t rax_11 = *rcx_1
    int32_t rdx_6 = rax_9 & 0x7fff
    
    if (rdx_6 s>= rax_11)
        int64_t r8_4 = 0
        
        do
            rdx_6 -= rax_11
            r8_4 += 1
            rax_11 = rcx_1[r8_4]
        while (rdx_6 s>= rax_11)

int32_t rcx_3 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_118 = rcx_3
int32_t rax_12
rax_12.b = rcx_3 != 0x7fff
void* var_108
void var_110

if (rcx_3 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_58 = rcx_7
int32_t rax_13
rax_13.b = rcx_7 != 0x7fff
void* var_48
void var_50

if (rcx_7 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_40 = rcx_11
int32_t rax_14
rax_14.b = rcx_11 != 0x7fff
void* var_30
void var_38

if (rcx_11 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_15 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_28 = rcx_15
int32_t rax_15
rax_15.b = rcx_15 != 0x7fff
void* var_18
void var_20

if (rcx_15 == 0x7fff)
    var_18 = &var_20
else
    var_18 = zx.q(rcx_15 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_19 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_100 = rcx_19
int32_t rax_16
rax_16.b = rcx_19 != 0x7fff
void* var_f0
void var_f8

if (rcx_19 == 0x7fff)
    var_f0 = &var_f8
else
    var_f0 = zx.q(rcx_19 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_23 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_e8 = rcx_23
int32_t rax_17
rax_17.b = rcx_23 != 0x7fff
void* var_d8
void var_e0

if (rcx_23 == 0x7fff)
    var_d8 = &var_e0
else
    var_d8 = zx.q(rcx_23 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_27 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_d0 = rcx_27
int32_t rax_18
rax_18.b = rcx_27 != 0x7fff
void* var_c0
void var_c8

if (rcx_27 == 0x7fff)
    var_c0 = &var_c8
else
    var_c0 = zx.q(rcx_27 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_31 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_b8 = rcx_31
int32_t rax_19
rax_19.b = rcx_31 != 0x7fff
void* var_a8
void var_b0

if (rcx_31 == 0x7fff)
    var_a8 = &var_b0
else
    var_a8 = zx.q(rcx_31 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_35 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_a0 = rcx_35
int32_t rax_20
rax_20.b = rcx_35 != 0x7fff
void* var_90
void var_98

if (rcx_35 == 0x7fff)
    var_90 = &var_98
else
    var_90 = zx.q(rcx_35 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_39 = zx.d(rax[0xd]) & 0x7fff
*(arg2 + 0x10) = &rax[0xe]
int32_t var_88 = rcx_39
int32_t rax_21
rax_21.b = rcx_39 != 0x7fff
void* var_78
void var_80

if (rcx_39 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(rcx_39 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_42 = zx.d(rax[0xe])
*(arg2 + 0x10) = &rax[0xf]
int32_t rdx_18 = rcx_42 & 0x7fff
int32_t var_70 = rdx_18
int32_t rax_23
rax_23.b = rdx_18 != 0x7fff
void* var_60
void var_68

if (rdx_18 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(*(arg2 + 0x80) * rdx_18) + *(arg2 + 0x70)
EnterCriticalSection(&data_143ce0410)
int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_19 = var_108
        i += 1
        var_108 = &rdx_19[sx.q(rax_12)]
        *rdx_19 = 0xbf800000
        int32_t* rdx_20 = var_f0
        var_f0 = &rdx_20[sx.q(rax_16)]
        *rdx_20 = 0
        int32_t* rdx_21 = var_d8
        var_d8 = &rdx_21[sx.q(rax_17)]
        *rdx_21 = 0
        int32_t* rdx_22 = var_c0
        var_c0 = &rdx_22[sx.q(rax_18)]
        *rdx_22 = 0
        int32_t* rdx_23 = var_a8
        var_a8 = &rdx_23[sx.q(rax_19)]
        *rdx_23 = 0
        int32_t* rdx_24 = var_90
        var_90 = &rdx_24[sx.q(rax_20)]
        *rdx_24 = 0
        int32_t* rdx_25 = var_78
        var_78 = &rdx_25[sx.q(rax_21)]
        *rdx_25 = 0
        int32_t* rdx_26 = var_60
        var_60 = &rdx_26[sx.q(rax_23)]
        *rdx_26 = 0x3f800000
        int32_t* rdx_27 = var_48
        var_48 = &rdx_27[sx.q(rax_13)]
        *rdx_27 = 0
        int32_t* r8_5 = var_30
        var_30 = &r8_5[sx.q(rax_14)]
        *r8_5 = 0
        int32_t* r8_6 = var_18
        var_18 = &r8_6[sx.q(rax_15)]
        *r8_6 = 0
    while (i s< *(arg2 + 0x40))

return LeaveCriticalSection(&data_143ce0410)
