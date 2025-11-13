// 函数: sub_1407b9ae0
// 地址: 0x1407b9ae0
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
uint32_t arg_20 = rax_7
rax_7.b = not.b(rax_7.b)
void* rdx_5

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
void* var_1f8 = rdx_5
uint32_t rax_11 = rax_10 u>> 0xf
int32_t rcx_5 = rax_10 & 0x7fff
uint32_t arg_18 = rax_11
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
void* var_200 = rdx_10
uint32_t rax_15 = rax_14 u>> 0xf
int32_t i = rax_14 & 0x7fff
uint32_t arg_10 = rax_15
rax_15.b = not.b(rax_15.b)
*(arg2 + 0x10) = &rax[4]
int128_t* r13_1

if ((rax_15.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_18 = zx.d(rax[4])
uint8_t rax_19 = (rax_18 u>> 0xf).b
int32_t rcx_8 = rax_18 & 0x7fff
*(arg2 + 0x10) = &rax[5]
int64_t* r12_1

if ((not.b(rax_19) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_20 = *r8
    int32_t r9_4 = 0
    
    if (rcx_8 s>= rax_20)
        int64_t rdx_14 = 0
        
        do
            rcx_8 -= rax_20
            rdx_14 += 1
            rax_20 = r8[rdx_14]
            r9_4 += 1
        while (rcx_8 s>= rax_20)
    
    r12_1 = sx.q(rcx_8) + *(r10 + (sx.q(r9_4) << 3))

uint32_t rax_22 = zx.d(rax[5])
uint32_t rax_23 = rax_22 u>> 0xf
int32_t rcx_10 = rax_22 & 0x7fff
uint32_t var_210 = rax_23
rax_23.b = not.b(rax_23.b)
*(arg2 + 0x10) = &rax[6]
int32_t* r15_1

if ((rax_23.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
else
    int32_t rax_24 = *r8
    int32_t r9_5 = 0
    
    if (rcx_10 s>= rax_24)
        int64_t rdx_15 = 0
        
        do
            rcx_10 -= rax_24
            rdx_15 += 1
            rax_24 = r8[rdx_15]
            r9_5 += 1
        while (rcx_10 s>= rax_24)
    
    r15_1 = sx.q(rcx_10) + *(r10 + (sx.q(r9_5) << 3))

uint32_t rax_26 = zx.d(rax[6])
uint32_t rax_27 = rax_26 u>> 0xf
int32_t rcx_12 = rax_26 & 0x7fff
uint32_t var_218 = rax_27
rax_27.b = not.b(rax_27.b)
*(arg2 + 0x10) = &rax[7]
int64_t* r14_1

if ((rax_27.b & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_12) + *(arg2 + 0x70)
else
    int32_t rax_28 = *r8
    int32_t r9_6 = 0
    
    if (rcx_12 s>= rax_28)
        int64_t rdx_16 = 0
        
        do
            rcx_12 -= rax_28
            rdx_16 += 1
            rax_28 = r8[rdx_16]
            r9_6 += 1
        while (rcx_12 s>= rax_28)
    
    r14_1 = sx.q(rcx_12) + *(r10 + (sx.q(r9_6) << 3))

uint32_t rax_30 = zx.d(rax[7])
uint8_t rax_31 = (rax_30 u>> 0xf).b
int32_t rcx_14 = rax_30 & 0x7fff
*(arg2 + 0x10) = &rax[8]
uint32_t* rsi_1

if ((not.b(rax_31) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_14) + *(arg2 + 0x70)
else
    int32_t rax_32 = *r8
    int32_t r9_7 = 0
    
    if (rcx_14 s>= rax_32)
        int64_t rdx_17 = 0
        
        do
            rcx_14 -= rax_32
            rdx_17 += 1
            rax_32 = r8[rdx_17]
            r9_7 += 1
        while (rcx_14 s>= rax_32)
    
    rsi_1 = sx.q(rcx_14) + *(r10 + (sx.q(r9_7) << 3))

uint32_t rcx_15 = zx.d(rax[8])
*(arg2 + 0x10) = &rax[9]
int32_t rcx_16 = rcx_15 & 0x7fff
int32_t var_1f0 = rcx_16
int32_t rax_34
rax_34.b = rcx_16 != 0x7fff
void* var_1e0
void var_1e8

if (rcx_16 == 0x7fff)
    var_1e0 = &var_1e8
else
    var_1e0 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_20 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_1d8 = rcx_20
int32_t rax_35
rax_35.b = rcx_20 != 0x7fff
void* var_1c8
void var_1d0

if (rcx_20 == 0x7fff)
    var_1c8 = &var_1d0
else
    var_1c8 = zx.q(rcx_20 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_24 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_1c0 = rcx_24
int32_t rax_36
rax_36.b = rcx_24 != 0x7fff
void* var_1b0
void var_1b8

if (rcx_24 == 0x7fff)
    var_1b0 = &var_1b8
else
    var_1b0 = zx.q(rcx_24 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_28 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_1a8 = rcx_28
int32_t rax_37
rax_37.b = rcx_28 != 0x7fff
void* var_198
void var_1a0

if (rcx_28 == 0x7fff)
    var_198 = &var_1a0
else
    var_198 = zx.q(rcx_28 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_32 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_190 = rcx_32
int32_t rax_38
rax_38.b = rcx_32 != 0x7fff
void* var_180
void var_188

if (rcx_32 == 0x7fff)
    var_180 = &var_188
else
    var_180 = zx.q(rcx_32 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_36 = zx.d(rax[0xd]) & 0x7fff
*(arg2 + 0x10) = &rax[0xe]
int32_t var_178 = rcx_36
int32_t rax_39
rax_39.b = rcx_36 != 0x7fff
void* var_168
void var_170

if (rcx_36 == 0x7fff)
    var_168 = &var_170
else
    var_168 = zx.q(rcx_36 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_40 = zx.d(rax[0xe]) & 0x7fff
*(arg2 + 0x10) = &rax[0xf]
int32_t var_160 = rcx_40
int32_t rax_40
rax_40.b = rcx_40 != 0x7fff
void* var_150
void var_158

if (rcx_40 == 0x7fff)
    var_150 = &var_158
else
    var_150 = zx.q(rcx_40 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_44 = zx.d(rax[0xf]) & 0x7fff
*(arg2 + 0x10) = &rax[0x10]
int32_t var_148 = rcx_44
int32_t rax_41
rax_41.b = rcx_44 != 0x7fff
void* var_138
void var_140

if (rcx_44 == 0x7fff)
    var_138 = &var_140
else
    var_138 = zx.q(rcx_44 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_48 = zx.d(rax[0x10]) & 0x7fff
*(arg2 + 0x10) = &rax[0x11]
int32_t var_130 = rcx_48
int32_t rax_42
rax_42.b = rcx_48 != 0x7fff
void* var_120
void var_128

if (rcx_48 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(rcx_48 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_51 = zx.d(rax[0x11])
*(arg2 + 0x10) = &rax[0x12]
int32_t rdx_28 = rcx_51 & 0x7fff
int32_t var_118 = rdx_28
int32_t rax_44
rax_44.b = rdx_28 != 0x7fff
void* var_108
void var_110

if (rdx_28 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(*(arg2 + 0x80) * rdx_28) + *(arg2 + 0x70)
EnterCriticalSection(&data_143ce0410)
int32_t i_1 = 0

if (*(arg2 + 0x40) s> 0)
    uint64_t r8_1 = zx.q(arg_18.b)
    arg_18.q = zx.q(rax_19) << 2
    uint64_t rax_46 = zx.q(arg_10.b) << 2
    uint64_t r8_2 = r8_1 << 2
    uint64_t r9_9 = zx.q(arg_20.b) << 2
    uint64_t r10_2 = zx.q(var_218.b) << 2
    uint64_t r11_9 = zx.q(var_210.b) << 2
    int128_t zmm6
    int128_t var_48_1 = zmm6
    arg_20.q = zx.q(rax_31) << 2
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint64_t var_d8_1 = rax_46
    uint64_t var_d0_1 = r8_2
    uint64_t var_c8_1 = r9_9
    var_218.q = r10_2
    var_210.q = r11_9
    
    do
        int128_t* rdx_29 = r13_1
        r13_1 += rax_46
        int128_t* rax_47 = var_200
        int64_t* r8_3 = var_1f8
        zmm7 = *rdx_29
        int64_t* rdx_30 = r14_1
        var_200 = rax_47 + r8_2
        r14_1 += r10_2
        zmm6 = *rax_47
        int32_t* rcx_60 = r15_1
        int32_t var_ec_1 = zmm6.d
        int32_t var_e8_1 = zmm7.d
        var_1f8 = r8_3 + r9_9
        r15_1 += r11_9
        float zmm2[0x2] = *r8_3
        int64_t* rax_50 = r12_1
        r12_1 += arg_18.q
        float var_f0_1 = zmm2[0]
        uint32_t rax_51 = *rsi_1
        rsi_1 += arg_20.q
        int32_t var_100_1 = (*rax_50).d
        int32_t var_f8_1 = (*rdx_30).d
        int32_t var_fc_1 = *rcx_60
        
        if (_finite(_mm_cvtps_pd(zmm2)) != 0 && _finite(_mm_cvtps_pd(zmm6.q)) != 0)
            _finite(_mm_cvtps_pd(zmm7.q))
        
        int32_t var_b0_1 = var_f8_1
        double var_b8 = var_100_1.q
        int32_t var_a0_1 = var_e8_1
        double var_a8 = var_f0_1.q
        int32_t* rdx_32 = var_1e0
        var_1e0 = &rdx_32[sx.q(rax_34)]
        int32_t var_98
        
        if (sub_14076eee0(rax_5 + 8, &var_a8, &var_b8, &var_98, rax_51) == 0)
            *rdx_32 = 0
            void* rdx_42 = var_1c8
            var_1c8 = rdx_42 + (sx.q(rax_35) << 2)
            *rdx_42 = 0
            void* rdx_43 = var_1b0
            var_1b0 = rdx_43 + (sx.q(rax_36) << 2)
            *rdx_43 = 0
            void* rdx_44 = var_198
            var_198 = rdx_44 + (sx.q(rax_37) << 2)
            *rdx_44 = 0
            void* rdx_45 = var_180
            var_180 = rdx_45 + (sx.q(rax_38) << 2)
            *rdx_45 = 0
            void* rdx_46 = var_168
            var_168 = rdx_46 + (sx.q(rax_39) << 2)
            *rdx_46 = 0
            void* rdx_47 = var_150
            var_150 = rdx_47 + (sx.q(rax_40) << 2)
            *rdx_47 = 0
            void* rdx_48 = var_138
            var_138 = rdx_48 + (sx.q(rax_41) << 2)
            *rdx_48 = 0
            void* rdx_49 = var_120
            var_120 = rdx_49 + (sx.q(rax_42) << 2)
            *rdx_49 = 0
            void* r8_6 = var_108
            var_108 = r8_6 + (sx.q(rax_44) << 2)
            *r8_6 = 0
        else
            *rdx_32 = 0xffffffff
            int32_t* rdx_33 = var_1c8
            void* rcx_64 = &rdx_33[sx.q(rax_35)]
            var_1c8 = rcx_64
            char var_68
            *rdx_33 = sbb.d(rcx_64.d, rcx_64.d, var_68 != 0)
            int32_t* rdx_34 = var_1b0
            var_1b0 = &rdx_34[sx.q(rax_36)]
            *rdx_34 = var_98.d
            int32_t* rdx_35 = var_198
            var_198 = &rdx_35[sx.q(rax_37)]
            int32_t var_94
            *rdx_35 = var_94.d
            int32_t* rdx_36 = var_180
            var_180 = &rdx_36[sx.q(rax_38)]
            int32_t var_90
            *rdx_36 = var_90.d
            int32_t* rdx_37 = var_168
            var_168 = &rdx_37[sx.q(rax_39)]
            int32_t var_8c
            *rdx_37 = var_8c.d
            int32_t* rdx_38 = var_150
            var_150 = &rdx_38[sx.q(rax_40)]
            int32_t var_88
            *rdx_38 = var_88.d
            int32_t* rdx_39 = var_138
            var_138 = &rdx_39[sx.q(rax_41)]
            int32_t var_84
            *rdx_39 = var_84.d
            int32_t* rdx_40 = var_120
            var_120 = &rdx_40[sx.q(rax_42)]
            int32_t var_70
            *rdx_40 = var_70.d
            int32_t* rdx_41 = var_108
            var_108 = &rdx_41[sx.q(rax_44)]
            int32_t var_6c
            *rdx_41 = var_6c.d
        
        rax_46 = var_d8_1
        i_1 += 1
        r8_2 = var_d0_1
        r9_9 = var_c8_1
        r10_2 = var_218.q
        r11_9 = var_210.q
    while (i_1 s< *(arg2 + 0x40))

return LeaveCriticalSection(&data_143ce0410)
