// 函数: sub_1407bf360
// 地址: 0x1407bf360
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
void* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r14_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* rdi_1

if ((not.b(r14_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    int32_t r9_1 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
            r9_1 += 1
        while (rcx_3 s>= rax_7)
    
    rdi_1 = sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3))

int32_t rcx_5 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_148 = rcx_5
int32_t rax_9
rax_9.b = rcx_5 != 0x7fff
void* var_138
void var_140

if (rcx_5 == 0x7fff)
    var_138 = &var_140
else
    var_138 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_130 = rcx_9
int32_t rax_10
rax_10.b = rcx_9 != 0x7fff
int32_t* var_120
void var_128

if (rcx_9 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_13 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_118 = rcx_13
int32_t rax_11
rax_11.b = rcx_13 != 0x7fff
int32_t* var_108
void var_110

if (rcx_13 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_17 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_100 = rcx_17
int32_t rax_12
rax_12.b = rcx_17 != 0x7fff
int32_t* var_f0
void var_f8

if (rcx_17 == 0x7fff)
    var_f0 = &var_f8
else
    var_f0 = zx.q(rcx_17 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_21 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_e8 = rcx_21
int32_t rax_13
rax_13.b = rcx_21 != 0x7fff
int32_t* var_d8
void var_e0

if (rcx_21 == 0x7fff)
    var_d8 = &var_e0
else
    var_d8 = zx.q(rcx_21 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_25 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_d0 = rcx_25
int32_t rax_14
rax_14.b = rcx_25 != 0x7fff
int32_t* var_c0
void var_c8

if (rcx_25 == 0x7fff)
    var_c0 = &var_c8
else
    var_c0 = zx.q(rcx_25 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_29 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_b8 = rcx_29
int32_t rax_15
rax_15.b = rcx_29 != 0x7fff
int32_t* var_a8
void var_b0

if (rcx_29 == 0x7fff)
    var_a8 = &var_b0
else
    var_a8 = zx.q(rcx_29 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_33 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_a0 = rcx_33
int32_t rax_16
rax_16.b = rcx_33 != 0x7fff
int32_t* var_90
void var_98

if (rcx_33 == 0x7fff)
    var_90 = &var_98
else
    var_90 = zx.q(rcx_33 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_37 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_88 = rcx_37
int32_t rax_17
rax_17.b = rcx_37 != 0x7fff
int32_t* var_78
void var_80

if (rcx_37 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(rcx_37 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_40 = zx.d(rax[0xb])
*(arg2 + 0x10) = &rax[0xc]
int32_t rdx_14 = rcx_40 & 0x7fff
int32_t var_70 = rdx_14
int32_t rax_19
rax_19.b = rdx_14 != 0x7fff
int32_t* var_60
void var_68

if (rdx_14 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(*(arg2 + 0x80) * rdx_14) + *(arg2 + 0x70)
EnterCriticalSection(&data_143ce0410)
int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rax_21 = var_138
        int32_t var_58
        
        if (sub_14075e880(rsi + 8, *rdi_1, &var_58) == 0)
            *rax_21 = 0
        else
            *rax_21 = 0xffffffff
            *var_120 = var_58
            int32_t var_54
            *var_108 = var_54
            int32_t var_50
            *var_f0 = var_50
            int32_t var_40
            *var_d8 = var_40
            int32_t var_3c
            *var_c0 = var_3c
            int32_t var_38
            *var_a8 = var_38
            int32_t var_4c
            *var_90 = var_4c
            int32_t var_48
            *var_78 = var_48
            int32_t var_44
            *var_60 = var_44
        
        rdi_1 = &rdi_1[zx.q(r14_1)]
        i += 1
        var_138 += sx.q(rax_9) << 2
        var_120 = &var_120[sx.q(rax_10)]
        var_108 = &var_108[sx.q(rax_11)]
        var_f0 = &var_f0[sx.q(rax_12)]
        var_d8 = &var_d8[sx.q(rax_13)]
        var_c0 = &var_c0[sx.q(rax_14)]
        var_a8 = &var_a8[sx.q(rax_15)]
        var_90 = &var_90[sx.q(rax_16)]
        var_78 = &var_78[sx.q(rax_17)]
        var_60 = &var_60[sx.q(rax_19)]
    while (i s< *(arg2 + 0x40))

return LeaveCriticalSection(&data_143ce0410)
