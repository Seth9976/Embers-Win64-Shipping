// 函数: sub_1407b8b40
// 地址: 0x1407b8b40
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

int64_t r10 = *(arg2 + 0x18)
void* rax_5 = *(*(arg2 + 0x38) + (sx.q(*(*(r10 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_6 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_7 = rax_6 u>> 0xf
int32_t rcx_3 = rax_6 & 0x7fff
uint32_t var_228 = rax_7
rax_7.b = not.b(rax_7.b)
int32_t* rdx_5

if ((rax_7.b & 1) == 0)
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_8 = *r8
    int32_t r9_1 = 0
    
    if (rcx_3 s>= rax_8)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_8
            rdx_3 += 1
            rax_8 = r8[rdx_3]
            r9_1 += 1
        while (rcx_3 s>= rax_8)
    
    rdx_5 = sx.q(rcx_3) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_10 = zx.d(rax[2])
int32_t* var_210 = rdx_5
uint32_t rax_11 = rax_10 u>> 0xf
int32_t rcx_5 = rax_10 & 0x7fff
uint32_t arg_20 = rax_11
rax_11.b = not.b(rax_11.b)
*(arg2 + 0x10) = &rax[3]
void* rdx_10

if ((rax_11.b & 1) == 0)
    rdx_10 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_12 = *r8
    int32_t r9_2 = 0
    
    if (rcx_5 s>= rax_12)
        int64_t rdx_8 = 0
        
        do
            rcx_5 -= rax_12
            rdx_8 += 1
            rax_12 = r8[rdx_8]
            r9_2 += 1
        while (rcx_5 s>= rax_12)
    
    rdx_10 = sx.q(rcx_5) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_14 = zx.d(rax[3])
void* var_218 = rdx_10
uint32_t rax_15 = rax_14 u>> 0xf
int32_t i = rax_14 & 0x7fff
uint32_t arg_18 = rax_15
rax_15.b = not.b(rax_15.b)
*(arg2 + 0x10) = &rax[4]
void* rdx_15

if ((rax_15.b & 1) == 0)
    rdx_15 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i s>= *r8)
        int64_t rax_16 = 0
        int32_t* rdx_13 = nullptr
        
        do
            i -= *(rdx_13 + r8)
            rax_16 += 1
            rdx_13 = rax_16 << 2
            r9_3 += 1
        while (i s>= *(rdx_13 + r8))
    
    rdx_15 = sx.q(i) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_18 = zx.d(rax[4])
void* var_220 = rdx_15
uint32_t rax_19 = rax_18 u>> 0xf
int32_t rcx_8 = rax_18 & 0x7fff
uint32_t arg_10 = rax_19
rax_19.b = not.b(rax_19.b)
*(arg2 + 0x10) = &rax[5]
int128_t* rbx_1

if ((rax_19.b & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_20 = *r8
    int32_t r9_4 = 0
    
    if (rcx_8 s>= rax_20)
        int64_t rdx_18 = 0
        
        do
            rcx_8 -= rax_20
            rdx_18 += 1
            rax_20 = r8[rdx_18]
            r9_4 += 1
        while (rcx_8 s>= rax_20)
    
    rbx_1 = sx.q(rcx_8) + *(r10 + (sx.q(r9_4) << 3))

uint32_t rax_22 = zx.d(rax[5])
uint8_t rax_23 = (rax_22 u>> 0xf).b
int32_t rcx_10 = rax_22 & 0x7fff
*(arg2 + 0x10) = &rax[6]
int64_t* r13_1

if ((not.b(rax_23) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
else
    int32_t rax_24 = *r8
    int32_t r9_5 = 0
    
    if (rcx_10 s>= rax_24)
        int64_t rdx_19 = 0
        
        do
            rcx_10 -= rax_24
            rdx_19 += 1
            rax_24 = r8[rdx_19]
            r9_5 += 1
        while (rcx_10 s>= rax_24)
    
    r13_1 = sx.q(rcx_10) + *(r10 + (sx.q(r9_5) << 3))

uint32_t rax_26 = zx.d(rax[6])
uint32_t rax_27 = rax_26 u>> 0xf
int32_t rcx_12 = rax_26 & 0x7fff
uint32_t var_240 = rax_27
rax_27.b = not.b(rax_27.b)
*(arg2 + 0x10) = &rax[7]
int32_t* r12_1

if ((rax_27.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_12) + *(arg2 + 0x70)
else
    int32_t rax_28 = *r8
    int32_t r9_6 = 0
    
    if (rcx_12 s>= rax_28)
        int64_t rdx_20 = 0
        
        do
            rcx_12 -= rax_28
            rdx_20 += 1
            rax_28 = r8[rdx_20]
            r9_6 += 1
        while (rcx_12 s>= rax_28)
    
    r12_1 = sx.q(rcx_12) + *(r10 + (sx.q(r9_6) << 3))

uint32_t rax_30 = zx.d(rax[7])
uint32_t rax_31 = rax_30 u>> 0xf
int32_t rcx_14 = rax_30 & 0x7fff
uint32_t var_248 = rax_31
rax_31.b = not.b(rax_31.b)
*(arg2 + 0x10) = &rax[8]
int64_t* r15_1

if ((rax_31.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_14) + *(arg2 + 0x70)
else
    int32_t rax_32 = *r8
    int32_t r9_7 = 0
    
    if (rcx_14 s>= rax_32)
        int64_t rdx_21 = 0
        
        do
            rcx_14 -= rax_32
            rdx_21 += 1
            rax_32 = r8[rdx_21]
            r9_7 += 1
        while (rcx_14 s>= rax_32)
    
    r15_1 = sx.q(rcx_14) + *(r10 + (sx.q(r9_7) << 3))

uint32_t rax_34 = zx.d(rax[8])
uint32_t rax_35 = rax_34 u>> 0xf
int32_t rcx_16 = rax_34 & 0x7fff
uint32_t var_230 = rax_35
rax_35.b = not.b(rax_35.b)
*(arg2 + 0x10) = &rax[9]
uint32_t* r14_1

if ((rax_35.b & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_16) + *(arg2 + 0x70)
else
    int32_t rax_36 = *r8
    int32_t r9_8 = 0
    
    if (rcx_16 s>= rax_36)
        int64_t rdx_22 = 0
        
        do
            rcx_16 -= rax_36
            rdx_22 += 1
            rax_36 = r8[rdx_22]
            r9_8 += 1
        while (rcx_16 s>= rax_36)
    
    r14_1 = sx.q(rcx_16) + *(r10 + (sx.q(r9_8) << 3))

uint32_t rcx_17 = zx.d(rax[9])
*(arg2 + 0x10) = &rax[0xa]
int32_t rcx_18 = rcx_17 & 0x7fff
int32_t var_f0 = rcx_18
int32_t rax_38
rax_38.b = rcx_18 != 0x7fff
void* var_e0
void var_e8

if (rcx_18 == 0x7fff)
    var_e0 = &var_e8
else
    var_e0 = zx.q(rcx_18 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_22 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_208 = rcx_22
int32_t rax_39
rax_39.b = rcx_22 != 0x7fff
void* var_1f8
void var_200

if (rcx_22 == 0x7fff)
    var_1f8 = &var_200
else
    var_1f8 = zx.q(rcx_22 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_26 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_1f0 = rcx_26
int32_t rax_40
rax_40.b = rcx_26 != 0x7fff
void* var_1e0
void var_1e8

if (rcx_26 == 0x7fff)
    var_1e0 = &var_1e8
else
    var_1e0 = zx.q(rcx_26 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_30 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_1d8 = rcx_30
int32_t rax_41
rax_41.b = rcx_30 != 0x7fff
void* var_1c8
void var_1d0

if (rcx_30 == 0x7fff)
    var_1c8 = &var_1d0
else
    var_1c8 = zx.q(rcx_30 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_34 = zx.d(rax[0xd]) & 0x7fff
*(arg2 + 0x10) = &rax[0xe]
int32_t var_1c0 = rcx_34
int32_t rax_42
rax_42.b = rcx_34 != 0x7fff
void* var_1b0
void var_1b8

if (rcx_34 == 0x7fff)
    var_1b0 = &var_1b8
else
    var_1b0 = zx.q(rcx_34 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_38 = zx.d(rax[0xe]) & 0x7fff
*(arg2 + 0x10) = &rax[0xf]
int32_t var_1a8 = rcx_38
int32_t rax_43
rax_43.b = rcx_38 != 0x7fff
void* var_198
void var_1a0

if (rcx_38 == 0x7fff)
    var_198 = &var_1a0
else
    var_198 = zx.q(rcx_38 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_42 = zx.d(rax[0xf]) & 0x7fff
*(arg2 + 0x10) = &rax[0x10]
int32_t var_190 = rcx_42
int32_t rax_44
rax_44.b = rcx_42 != 0x7fff
void* var_180
void var_188

if (rcx_42 == 0x7fff)
    var_180 = &var_188
else
    var_180 = zx.q(rcx_42 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_46 = zx.d(rax[0x10]) & 0x7fff
*(arg2 + 0x10) = &rax[0x11]
int32_t var_178 = rcx_46
int32_t rax_45
rax_45.b = rcx_46 != 0x7fff
void* var_168
void var_170

if (rcx_46 == 0x7fff)
    var_168 = &var_170
else
    var_168 = zx.q(rcx_46 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_50 = zx.d(rax[0x11]) & 0x7fff
*(arg2 + 0x10) = &rax[0x12]
int32_t var_160 = rcx_50
int32_t rax_46
rax_46.b = rcx_50 != 0x7fff
void* var_150
void var_158

if (rcx_50 == 0x7fff)
    var_150 = &var_158
else
    var_150 = zx.q(rcx_50 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_54 = zx.d(rax[0x12]) & 0x7fff
*(arg2 + 0x10) = &rax[0x13]
int32_t var_148 = rcx_54
int32_t rax_47
rax_47.b = rcx_54 != 0x7fff
void* var_138
void var_140

if (rcx_54 == 0x7fff)
    var_138 = &var_140
else
    var_138 = zx.q(rcx_54 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_57 = zx.d(rax[0x13])
*(arg2 + 0x10) = &rax[0x14]
int32_t rdx_34 = rcx_57 & 0x7fff
int32_t var_130 = rdx_34
int32_t rax_49
rax_49.b = rdx_34 != 0x7fff
void* var_120
void var_128

if (rdx_34 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(*(arg2 + 0x80) * rdx_34) + *(arg2 + 0x70)
EnterCriticalSection(&data_143ce0410)
int32_t i_1 = 0

if (*(arg2 + 0x40) s> 0)
    uint64_t r8_1 = zx.q(arg_18.b)
    uint64_t r9_9 = zx.q(arg_20.b)
    arg_18.q = zx.q(rax_23) << 2
    arg_20.q = zx.q(var_230.b) << 2
    uint64_t rcx_62 = zx.q(arg_10.b) << 2
    uint64_t r8_2 = r8_1 << 2
    uint64_t r9_10 = r9_9 << 2
    uint64_t r10_2 = zx.q(var_248.b) << 2
    uint64_t r11_10 = zx.q(var_240.b) << 2
    int128_t zmm6
    int128_t var_48_1 = zmm6
    var_228.q = zx.q(var_228.b) << 2
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint64_t var_d8_1 = rcx_62
    uint64_t var_d0_1 = r8_2
    uint64_t var_c8_1 = r9_10
    var_248.q = r10_2
    var_240.q = r11_10
    
    do
        int128_t* rax_56 = var_220
        var_230.q = rbx_1 + rcx_62
        int64_t* r8_3 = var_218
        zmm7 = *rbx_1
        int64_t* rdx_36 = r15_1
        zmm6 = *rax_56
        r15_1 += r10_2
        var_220 = rax_56 + r8_2
        int32_t* rcx_64 = r12_1
        int32_t var_104_1 = zmm6.d
        int32_t var_100_1 = zmm7.d
        var_218 = r8_3 + r9_10
        r12_1 += r11_10
        float zmm2[0x2] = *r8_3
        int64_t* rax_59 = r13_1
        r13_1 += arg_18.q
        float var_108_1 = zmm2[0]
        int32_t var_114_1 = *rcx_64
        uint32_t rax_60 = *r14_1
        r14_1 += arg_20.q
        int32_t var_118_1 = (*rax_59).d
        int32_t var_110_1 = (*rdx_36).d
        
        if (_finite(_mm_cvtps_pd(zmm2)) != 0 && _finite(_mm_cvtps_pd(zmm6.q)) != 0)
            _finite(_mm_cvtps_pd(zmm7.q))
        
        int32_t* rbx_5 = var_e0
        int32_t var_b0_1 = var_110_1
        int32_t var_a0_1 = var_100_1
        double var_b8 = var_118_1.q
        double var_a8 = var_108_1.q
        var_e0 = &rbx_5[sx.q(rax_38)]
        *rbx_5 = sub_140778930(rax_5 + 8, &var_a8, &var_b8, rax_60)
        int32_t rdx_38 = *var_210
        var_210 += var_228.q
        int32_t* rdx_39 = var_1f8
        var_1f8 = &rdx_39[sx.q(rax_39)]
        int32_t var_98
        
        if (sub_14075e880(rax_5 + 8, rdx_38, &var_98) == 0)
            *rdx_39 = 0
            void* rdx_49 = var_1e0
            var_1e0 = rdx_49 + (sx.q(rax_40) << 2)
            *rdx_49 = 0
            void* rdx_50 = var_1c8
            var_1c8 = rdx_50 + (sx.q(rax_41) << 2)
            *rdx_50 = 0
            void* rdx_51 = var_1b0
            var_1b0 = rdx_51 + (sx.q(rax_42) << 2)
            *rdx_51 = 0
            void* rdx_52 = var_198
            var_198 = rdx_52 + (sx.q(rax_43) << 2)
            *rdx_52 = 0
            void* rdx_53 = var_180
            var_180 = rdx_53 + (sx.q(rax_44) << 2)
            *rdx_53 = 0
            void* rdx_54 = var_168
            var_168 = rdx_54 + (sx.q(rax_45) << 2)
            *rdx_54 = 0
            void* rdx_55 = var_150
            var_150 = rdx_55 + (sx.q(rax_46) << 2)
            *rdx_55 = 0
            void* rdx_56 = var_138
            var_138 = rdx_56 + (sx.q(rax_47) << 2)
            *rdx_56 = 0
            void* r8_7 = var_120
            var_120 = r8_7 + (sx.q(rax_49) << 2)
            *r8_7 = 0
        else
            *rdx_39 = 0xffffffff
            int32_t* rdx_40 = var_1e0
            void* rcx_73 = &rdx_40[sx.q(rax_40)]
            var_1e0 = rcx_73
            char var_68
            *rdx_40 = sbb.d(rcx_73.d, rcx_73.d, var_68 != 0)
            int32_t* rdx_41 = var_1c8
            var_1c8 = &rdx_41[sx.q(rax_41)]
            *rdx_41 = var_98.d
            int32_t* rdx_42 = var_1b0
            var_1b0 = &rdx_42[sx.q(rax_42)]
            int32_t var_94
            *rdx_42 = var_94.d
            int32_t* rdx_43 = var_198
            var_198 = &rdx_43[sx.q(rax_43)]
            int32_t var_90
            *rdx_43 = var_90.d
            int32_t* rdx_44 = var_180
            var_180 = &rdx_44[sx.q(rax_44)]
            int32_t var_8c
            *rdx_44 = var_8c.d
            int32_t* rdx_45 = var_168
            var_168 = &rdx_45[sx.q(rax_45)]
            int32_t var_88
            *rdx_45 = var_88.d
            int32_t* rdx_46 = var_150
            var_150 = &rdx_46[sx.q(rax_46)]
            int32_t var_84
            *rdx_46 = var_84.d
            int32_t* rdx_47 = var_138
            var_138 = &rdx_47[sx.q(rax_47)]
            int32_t var_70
            *rdx_47 = var_70.d
            int32_t* rdx_48 = var_120
            var_120 = &rdx_48[sx.q(rax_49)]
            int32_t var_6c
            *rdx_48 = var_6c.d
        
        rbx_1 = var_230.q
        i_1 += 1
        rcx_62 = var_d8_1
        r8_2 = var_d0_1
        r9_10 = var_c8_1
        r10_2 = var_248.q
        r11_10 = var_240.q
    while (i_1 s< *(arg2 + 0x40))

return LeaveCriticalSection(&data_143ce0410)
