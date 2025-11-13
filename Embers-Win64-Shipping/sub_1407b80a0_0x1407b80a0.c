// 函数: sub_1407b80a0
// 地址: 0x1407b80a0
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
void* r14 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t rcx_3 = rax_5 & 0x7fff
uint32_t arg_18 = rax_6
rax_6.b = not.b(rax_6.b)
int32_t* rdx_5

if ((rax_6.b & 1) == 0)
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
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
    
    rdx_5 = sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
int32_t* var_1d0 = rdx_5
uint32_t rax_10 = rax_9 u>> 0xf
int32_t rcx_5 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
int64_t* var_228

if ((rax_10.b & 1) == 0)
    var_228 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_11 = *r8
    int32_t r9_2 = 0
    
    if (rcx_5 s>= rax_11)
        int64_t rdx_8 = 0
        
        do
            rcx_5 -= rax_11
            rdx_8 += 1
            rax_11 = r8[rdx_8]
            r9_2 += 1
        while (rcx_5 s>= rax_11)
    
    var_228 = sx.q(rcx_5) + *(r11 + (sx.q(r9_2) << 3))

uint32_t rax_16 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
uint32_t rax_17 = rax_16 u>> 0xf
int32_t i = rax_16 & 0x7fff
uint32_t var_208 = rax_17
rax_17.b = not.b(rax_17.b)
int128_t* var_220

if ((rax_17.b & 1) == 0)
    var_220 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i s>= *r8)
        int64_t rax_18 = 0
        int32_t* rdx_11 = nullptr
        
        do
            i -= *(rdx_11 + r8)
            rax_18 += 1
            rdx_11 = rax_18 << 2
            r9_3 += 1
        while (i s>= *(rdx_11 + r8))
    
    var_220 = sx.q(i) + *(r11 + (sx.q(r9_3) << 3))

uint32_t rax_23 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_24 = rax_23 u>> 0xf
int32_t rcx_8 = rax_23 & 0x7fff
uint32_t var_200 = rax_24
rax_24.b = not.b(rax_24.b)
int128_t* var_218

if ((rax_24.b & 1) == 0)
    var_218 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_25 = *r8
    int32_t r9_4 = 0
    
    if (rcx_8 s>= rax_25)
        int64_t rdx_14 = 0
        
        do
            rcx_8 -= rax_25
            rdx_14 += 1
            rax_25 = r8[rdx_14]
            r9_4 += 1
        while (rcx_8 s>= rax_25)
    
    var_218 = sx.q(rcx_8) + *(r11 + (sx.q(r9_4) << 3))

uint32_t rax_30 = zx.d(rax[5])
uint32_t rax_31 = rax_30 u>> 0xf
int32_t rcx_10 = rax_30 & 0x7fff
uint32_t var_1f8 = rax_31
rax_31.b = not.b(rax_31.b)
*(arg2 + 0x10) = &rax[6]
int64_t* rbx_1

if ((rax_31.b & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
else
    int32_t rax_32 = *r8
    int32_t r9_5 = 0
    
    if (rcx_10 s>= rax_32)
        int64_t rdx_17 = 0
        
        do
            rcx_10 -= rax_32
            rdx_17 += 1
            rax_32 = r8[rdx_17]
            r9_5 += 1
        while (rcx_10 s>= rax_32)
    
    rbx_1 = sx.q(rcx_10) + *(r11 + (sx.q(r9_5) << 3))

uint32_t rax_34 = zx.d(rax[6])
int64_t* var_210 = rbx_1
uint32_t rax_35 = rax_34 u>> 0xf
int32_t rcx_12 = rax_34 & 0x7fff
uint32_t var_1f0 = rax_35
rax_35.b = not.b(rax_35.b)
*(arg2 + 0x10) = &rax[7]
int32_t* r13_1

if ((rax_35.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * rcx_12) + *(arg2 + 0x70)
else
    int32_t rax_36 = *r8
    int32_t r9_6 = 0
    
    if (rcx_12 s>= rax_36)
        int64_t rdx_18 = 0
        
        do
            rcx_12 -= rax_36
            rdx_18 += 1
            rax_36 = r8[rdx_18]
            r9_6 += 1
        while (rcx_12 s>= rax_36)
    
    r13_1 = sx.q(rcx_12) + *(r11 + (sx.q(r9_6) << 3))

uint32_t rax_38 = zx.d(rax[7])
uint32_t rax_39 = rax_38 u>> 0xf
int32_t rcx_14 = rax_38 & 0x7fff
uint32_t var_1e8 = rax_39
rax_39.b = not.b(rax_39.b)
*(arg2 + 0x10) = &rax[8]
int64_t* r15_1

if ((rax_39.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_14) + *(arg2 + 0x70)
else
    int32_t rax_40 = *r8
    int32_t r9_7 = 0
    
    if (rcx_14 s>= rax_40)
        int64_t rdx_19 = 0
        
        do
            rcx_14 -= rax_40
            rdx_19 += 1
            rax_40 = r8[rdx_19]
            r9_7 += 1
        while (rcx_14 s>= rax_40)
    
    r15_1 = sx.q(rcx_14) + *(r11 + (sx.q(r9_7) << 3))

uint32_t rax_42 = zx.d(rax[8])
uint32_t rax_43 = rax_42 u>> 0xf
int32_t rcx_16 = rax_42 & 0x7fff
uint32_t var_1e0 = rax_43
rax_43.b = not.b(rax_43.b)
*(arg2 + 0x10) = &rax[9]
int32_t* r12_1

if ((rax_43.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_16) + *(arg2 + 0x70)
else
    int32_t rax_44 = *r8
    int32_t r9_8 = 0
    
    if (rcx_16 s>= rax_44)
        int64_t rdx_20 = 0
        
        do
            rcx_16 -= rax_44
            rdx_20 += 1
            rax_44 = r8[rdx_20]
            r9_8 += 1
        while (rcx_16 s>= rax_44)
    
    r12_1 = sx.q(rcx_16) + *(r11 + (sx.q(r9_8) << 3))

uint32_t rax_46 = zx.d(rax[9])
uint32_t rax_47 = rax_46 u>> 0xf
int32_t rcx_18 = rax_46 & 0x7fff
uint32_t var_1d8 = rax_47
rax_47.b = not.b(rax_47.b)
*(arg2 + 0x10) = &rax[0xa]
float* rsi_1

if ((rax_47.b & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_18) + *(arg2 + 0x70)
else
    int32_t rax_48 = *r8
    int32_t r9_9 = 0
    
    if (rcx_18 s>= rax_48)
        int64_t rdx_21 = 0
        
        do
            rcx_18 -= rax_48
            rdx_21 += 1
            rax_48 = r8[rdx_21]
            r9_9 += 1
        while (rcx_18 s>= rax_48)
    
    rsi_1 = sx.q(rcx_18) + *(r11 + (sx.q(r9_9) << 3))

uint32_t rax_50 = zx.d(rax[0xa])
*(arg2 + 0x10) = &rax[0xb]

if ((not.b((rax_50 u>> 0xf).b) & 1) != 0)
    int32_t rax_52 = *r8
    int32_t rcx_20 = rax_50 & 0x7fff
    
    if (rcx_20 s>= rax_52)
        int64_t rdx_22 = 0
        
        do
            rcx_20 -= rax_52
            rdx_22 += 1
            rax_52 = r8[rdx_22]
        while (rcx_20 s>= rax_52)

uint32_t rcx_21 = zx.d(rax[0xb])
*(arg2 + 0x10) = &rax[0xc]
int32_t rcx_22 = rcx_21 & 0x7fff
int32_t var_d0 = rcx_22
int32_t rax_53
rax_53.b = rcx_22 != 0x7fff
void* var_c0
void var_c8

if (rcx_22 == 0x7fff)
    var_c0 = &var_c8
else
    var_c0 = zx.q(rcx_22 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_26 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_1a8 = rcx_26
int32_t rax_54
rax_54.b = rcx_26 != 0x7fff
int32_t* var_198
void var_1a0

if (rcx_26 == 0x7fff)
    var_198 = &var_1a0
else
    var_198 = zx.q(rcx_26 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_30 = zx.d(rax[0xd]) & 0x7fff
*(arg2 + 0x10) = &rax[0xe]
int32_t var_190 = rcx_30
int32_t rax_55
rax_55.b = rcx_30 != 0x7fff
int32_t* var_180
void var_188

if (rcx_30 == 0x7fff)
    var_180 = &var_188
else
    var_180 = zx.q(rcx_30 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_34 = zx.d(rax[0xe]) & 0x7fff
*(arg2 + 0x10) = &rax[0xf]
int32_t var_178 = rcx_34
int32_t rax_56
rax_56.b = rcx_34 != 0x7fff
float* var_168
void var_170

if (rcx_34 == 0x7fff)
    var_168 = &var_170
else
    var_168 = zx.q(rcx_34 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_38 = zx.d(rax[0xf]) & 0x7fff
*(arg2 + 0x10) = &rax[0x10]
int32_t var_160 = rcx_38
int32_t rax_57
rax_57.b = rcx_38 != 0x7fff
int32_t* var_150
void var_158

if (rcx_38 == 0x7fff)
    var_150 = &var_158
else
    var_150 = zx.q(rcx_38 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_42 = zx.d(rax[0x10]) & 0x7fff
*(arg2 + 0x10) = &rax[0x11]
int32_t var_148 = rcx_42
int32_t rax_58
rax_58.b = rcx_42 != 0x7fff
float* var_138
void var_140

if (rcx_42 == 0x7fff)
    var_138 = &var_140
else
    var_138 = zx.q(rcx_42 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_46 = zx.d(rax[0x11]) & 0x7fff
*(arg2 + 0x10) = &rax[0x12]
int32_t var_130 = rcx_46
int32_t rax_59
rax_59.b = rcx_46 != 0x7fff
int32_t* var_120
void var_128

if (rcx_46 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(rcx_46 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_50 = zx.d(rax[0x12]) & 0x7fff
*(arg2 + 0x10) = &rax[0x13]
int32_t var_118 = rcx_50
int32_t rax_60
rax_60.b = rcx_50 != 0x7fff
float* var_108
void var_110

if (rcx_50 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(rcx_50 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_54 = zx.d(rax[0x13]) & 0x7fff
*(arg2 + 0x10) = &rax[0x14]
int32_t var_100 = rcx_54
int32_t rax_61
rax_61.b = rcx_54 != 0x7fff
int32_t* var_f0
void var_f8

if (rcx_54 == 0x7fff)
    var_f0 = &var_f8
else
    var_f0 = zx.q(rcx_54 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_57 = zx.d(rax[0x14])
*(arg2 + 0x10) = &rax[0x15]
int32_t rdx_33 = rcx_57 & 0x7fff
int32_t var_e8 = rdx_33
int32_t rax_63
rax_63.b = rdx_33 != 0x7fff
float* var_d8
void var_e0

if (rdx_33 == 0x7fff)
    var_d8 = &var_e0
else
    var_d8 = zx.q(*(arg2 + 0x80) * rdx_33) + *(arg2 + 0x70)
EnterCriticalSection(&data_143ce0410)
int32_t i_2 = 0

if (*(arg2 + 0x40) s> 0)
    arg_18.q = zx.q(arg_18.b) << 2
    arg_20.q = zx.q(arg_20.b) << 2
    var_208.q = zx.q(var_208.b) << 2
    var_200.q = zx.q(var_200.b) << 2
    var_1f8.q = zx.q(var_1f8.b) << 2
    var_1f0.q = zx.q(var_1f0.b) << 2
    var_1e8.q = zx.q(var_1e8.b) << 2
    var_1e0.q = zx.q(var_1e0.b) << 2
    int128_t zmm6
    int128_t var_48_1 = zmm6
    var_1d8.q = zx.q(var_1d8.b) << 2
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int32_t i_1
    
    do
        float zmm1 = *r13_1
        int32_t var_1c8_1 = (*rbx_1).d
        float zmm2[0x2] = *var_228
        int32_t var_1c0_1 = (*r15_1).d
        double _X = _mm_cvtps_pd(zmm2)
        zmm6 = *var_220
        float var_1b8_1 = zmm2[0]
        int32_t var_1b4_1 = zmm6.d
        float var_1c4_1 = zmm1
        zmm7 = *var_218
        
        if (_finite(_X) != 0 && _finite(_mm_cvtps_pd(zmm6.q)) != 0)
            _finite(_mm_cvtps_pd(zmm7.q))
        
        zmm1 = *r12_1
        float zmm3 = *rsi_1
        double var_b8 = var_1c8_1.q
        int32_t var_b0_1 = var_1c0_1
        double var_a8 = var_1b8_1.q
        int32_t var_a0_1 = zmm7.d
        *var_c0 = sub_140778680(r14 + 8, &var_a8, &var_b8, zmm3, zmm1)
        int32_t var_98
        
        if (sub_14075e880(r14 + 8, *var_1d0, &var_98) == 0)
            *var_198 = 0
            *var_180 = 0
            *var_168 = 0f
            *var_150 = 0
            *var_138 = 0f
            *var_120 = 0
            *var_108 = 0f
            *var_f0 = 0
            *var_d8 = 0f
        else
            *var_198 = 0xffffffff
            *var_180 = var_98.d
            float var_94
            *var_168 = var_94
            int32_t var_90
            *var_150 = var_90.d
            float var_8c
            *var_138 = var_8c
            int32_t var_88
            *var_120 = var_88.d
            float var_84
            *var_108 = var_84
            int32_t var_70
            *var_f0 = var_70.d
            float var_6c
            *var_d8 = var_6c
        
        r13_1 += var_1f0.q
        r15_1 += var_1e8.q
        r12_1 += var_1e0.q
        rsi_1 += var_1d8.q
        var_198 = &var_198[sx.q(rax_54)]
        var_1d0 += arg_18.q
        i_1 = i_2 + 1
        i_2 = i_1
        var_180 = &var_180[sx.q(rax_55)]
        var_168 = &var_168[sx.q(rax_56)]
        var_150 = &var_150[sx.q(rax_57)]
        var_138 = &var_138[sx.q(rax_58)]
        var_120 = &var_120[sx.q(rax_59)]
        var_108 = &var_108[sx.q(rax_60)]
        var_f0 = &var_f0[sx.q(rax_61)]
        var_228 += arg_20.q
        var_220 += var_208.q
        var_218 += var_200.q
        var_210 += var_1f8.q
        rbx_1 = var_210
        var_d8 = &var_d8[sx.q(rax_63)]
        var_c0 += sx.q(rax_53) << 2
    while (i_1 s< *(arg2 + 0x40))

return LeaveCriticalSection(&data_143ce0410)
