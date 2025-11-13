// 函数: sub_1408270c0
// 地址: 0x1408270c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = 0
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rdx_1 = rdx & 0x7fff
int128_t* result_1

if ((not.b((rdx u>> 0xf).b) & 1) == 0)
    result_1 = zx.q(*(arg1 + 0x80) * rdx_1) + *(arg1 + 0x70)
else
    int32_t* r11_1 = *(arg1 + 0x20)
    int32_t r10_1 = 0
    int32_t rax_3 = *r11_1
    
    if (rdx_1 s>= rax_3)
        int64_t rcx = 0
        
        do
            rdx_1 -= rax_3
            rcx += 1
            rax_3 = r11_1[rcx]
            r10_1 += 1
        while (rdx_1 s>= rax_3)
    
    result_1 = sx.q(rdx_1) + *(*(arg1 + 0x18) + (sx.q(r10_1) << 3))

uint32_t rax_8 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rax_9 = rax_8 u>> 0xf
int32_t rdx_3 = rax_8 & 0x7fff
uint32_t arg_18 = rax_9
rax_9.b = not.b(rax_9.b)
int128_t* var_230

if ((rax_9.b & 1) == 0)
    var_230 = zx.q(*(arg1 + 0x80) * rdx_3) + *(arg1 + 0x70)
else
    int32_t* r11_2 = *(arg1 + 0x20)
    int32_t r10_4 = 0
    int32_t rax_10 = *r11_2
    
    if (rdx_3 s>= rax_10)
        int64_t rcx_2 = 0
        
        do
            rdx_3 -= rax_10
            rcx_2 += 1
            rax_10 = r11_2[rcx_2]
            r10_4 += 1
        while (rdx_3 s>= rax_10)
    
    var_230 = sx.q(rdx_3) + *(*(arg1 + 0x18) + (sx.q(r10_4) << 3))

uint32_t rax_15 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rax_16 = rax_15 u>> 0xf
int32_t rdx_5 = rax_15 & 0x7fff
uint32_t arg_10 = rax_16
rax_16.b = not.b(rax_16.b)
int128_t* var_238

if ((rax_16.b & 1) == 0)
    var_238 = zx.q(*(arg1 + 0x80) * rdx_5) + *(arg1 + 0x70)
else
    int32_t* r11_3 = *(arg1 + 0x20)
    int32_t r10_7 = 0
    int32_t rax_17 = *r11_3
    
    if (rdx_5 s>= rax_17)
        int64_t rcx_4 = 0
        
        do
            rdx_5 -= rax_17
            rcx_4 += 1
            rax_17 = r11_3[rcx_4]
            r10_7 += 1
        while (rdx_5 s>= rax_17)
    
    var_238 = sx.q(rdx_5) + *(*(arg1 + 0x18) + (sx.q(r10_7) << 3))

uint32_t rax_22 = zx.d(rax[3])
*(arg1 + 0x10) = &rax[4]
uint32_t rax_23 = rax_22 u>> 0xf
int32_t rdx_7 = rax_22 & 0x7fff
uint32_t arg_8 = rax_23
rax_23.b = not.b(rax_23.b)
void* r10_12

if ((rax_23.b & 1) == 0)
    r10_12 = zx.q(*(arg1 + 0x80) * rdx_7) + *(arg1 + 0x70)
else
    int32_t* r11_4 = *(arg1 + 0x20)
    int32_t r10_10 = 0
    int32_t rax_24 = *r11_4
    
    if (rdx_7 s>= rax_24)
        int64_t rcx_6 = 0
        
        do
            rdx_7 -= rax_24
            rcx_6 += 1
            rax_24 = r11_4[rcx_6]
            r10_10 += 1
        while (rdx_7 s>= rax_24)
    
    r10_12 = sx.q(rdx_7) + *(*(arg1 + 0x18) + (sx.q(r10_10) << 3))

uint32_t rax_26 = zx.d(rax[4])
void* var_1f0 = r10_12
uint32_t rax_27 = rax_26 u>> 0xf
int32_t rdx_9 = rax_26 & 0x7fff
uint32_t arg_20 = rax_27
rax_27.b = not.b(rax_27.b)
*(arg1 + 0x10) = &rax[5]
void* r10_17

if ((rax_27.b & 1) == 0)
    r10_17 = zx.q(*(arg1 + 0x80) * rdx_9) + *(arg1 + 0x70)
else
    int32_t* r11_5 = *(arg1 + 0x20)
    int32_t r10_15 = 0
    int32_t rax_28 = *r11_5
    
    if (rdx_9 s>= rax_28)
        int64_t rcx_8 = 0
        
        do
            rdx_9 -= rax_28
            rcx_8 += 1
            rax_28 = r11_5[rcx_8]
            r10_15 += 1
        while (rdx_9 s>= rax_28)
    
    r10_17 = sx.q(rdx_9) + *(*(arg1 + 0x18) + (sx.q(r10_15) << 3))

uint32_t rax_30 = zx.d(rax[5])
void* var_1e8 = r10_17
uint8_t rax_31 = (rax_30 u>> 0xf).b
int32_t rdx_11 = rax_30 & 0x7fff
*(arg1 + 0x10) = &rax[6]
int32_t* r10_22

if ((not.b(rax_31) & 1) == 0)
    r10_22 = zx.q(*(arg1 + 0x80) * rdx_11) + *(arg1 + 0x70)
else
    int32_t* r11_6 = *(arg1 + 0x20)
    int32_t r10_20 = 0
    int32_t rax_32 = *r11_6
    
    if (rdx_11 s>= rax_32)
        int64_t rcx_10 = 0
        
        do
            rdx_11 -= rax_32
            rcx_10 += 1
            rax_32 = r11_6[rcx_10]
            r10_20 += 1
        while (rdx_11 s>= rax_32)
    
    r10_22 = sx.q(rdx_11) + *(*(arg1 + 0x18) + (sx.q(r10_20) << 3))

uint32_t rax_34 = zx.d(rax[6])
int32_t* var_1e0 = r10_22
uint32_t rax_35 = rax_34 u>> 0xf
int32_t rdx_13 = rax_34 & 0x7fff
uint32_t var_200 = rax_35
rax_35.b = not.b(rax_35.b)
*(arg1 + 0x10) = &rax[7]
int128_t* var_228

if ((rax_35.b & 1) == 0)
    var_228 = zx.q(*(arg1 + 0x80) * rdx_13) + *(arg1 + 0x70)
else
    int32_t* r11_7 = *(arg1 + 0x20)
    int32_t r10_25 = 0
    int32_t rax_36 = *r11_7
    
    if (rdx_13 s>= rax_36)
        int64_t rcx_12 = 0
        
        do
            rdx_13 -= rax_36
            rcx_12 += 1
            rax_36 = r11_7[rcx_12]
            r10_25 += 1
        while (rdx_13 s>= rax_36)
    
    var_228 = sx.q(rdx_13) + *(*(arg1 + 0x18) + (sx.q(r10_25) << 3))

uint32_t rax_41 = zx.d(rax[7])
*(arg1 + 0x10) = &rax[8]
uint32_t rax_42 = rax_41 u>> 0xf
int32_t rdx_15 = rax_41 & 0x7fff
uint32_t var_208 = rax_42
rax_42.b = not.b(rax_42.b)
void* r10_30

if ((rax_42.b & 1) == 0)
    r10_30 = zx.q(*(arg1 + 0x80) * rdx_15) + *(arg1 + 0x70)
else
    int32_t* r11_8 = *(arg1 + 0x20)
    int32_t r10_28 = 0
    int32_t rax_43 = *r11_8
    
    if (rdx_15 s>= rax_43)
        int64_t rcx_14 = 0
        
        do
            rdx_15 -= rax_43
            rcx_14 += 1
            rax_43 = r11_8[rcx_14]
            r10_28 += 1
        while (rdx_15 s>= rax_43)
    
    r10_30 = sx.q(rdx_15) + *(*(arg1 + 0x18) + (sx.q(r10_28) << 3))

uint32_t rax_45 = zx.d(rax[8])
void* var_1d8 = r10_30
uint32_t rax_46 = rax_45 u>> 0xf
int32_t rdx_17 = rax_45 & 0x7fff
uint32_t var_210 = rax_46
rax_46.b = not.b(rax_46.b)
*(arg1 + 0x10) = &rax[9]
int128_t* r13_1

if ((rax_46.b & 1) == 0)
    r13_1 = zx.q(*(arg1 + 0x80) * rdx_17) + *(arg1 + 0x70)
else
    int32_t* r11_9 = *(arg1 + 0x20)
    int32_t r10_33 = 0
    int32_t rax_47 = *r11_9
    
    if (rdx_17 s>= rax_47)
        int64_t rcx_16 = 0
        
        do
            rdx_17 -= rax_47
            rcx_16 += 1
            rax_47 = r11_9[rcx_16]
            r10_33 += 1
        while (rdx_17 s>= rax_47)
    
    r13_1 = sx.q(rdx_17) + *(*(arg1 + 0x18) + (sx.q(r10_33) << 3))

uint32_t rax_49 = zx.d(rax[9])
uint32_t rax_50 = rax_49 u>> 0xf
int32_t rdx_19 = rax_49 & 0x7fff
uint32_t var_1f8 = rax_50
rax_50.b = not.b(rax_50.b)
*(arg1 + 0x10) = &rax[0xa]
int32_t* r15_1

if ((rax_50.b & 1) == 0)
    r15_1 = zx.q(*(arg1 + 0x80) * rdx_19) + *(arg1 + 0x70)
else
    int32_t* r11_10 = *(arg1 + 0x20)
    int32_t r10_34 = 0
    int32_t rax_51 = *r11_10
    
    if (rdx_19 s>= rax_51)
        int64_t rcx_18 = 0
        
        do
            rdx_19 -= rax_51
            rcx_18 += 1
            rax_51 = r11_10[rcx_18]
            r10_34 += 1
        while (rdx_19 s>= rax_51)
    
    r15_1 = sx.q(rdx_19) + *(*(arg1 + 0x18) + (sx.q(r10_34) << 3))

uint32_t rax_53 = zx.d(rax[0xa])
uint8_t r12_1 = (rax_53 u>> 0xf).b
*(arg1 + 0x10) = &rax[0xb]
int32_t rdx_21 = rax_53 & 0x7fff
int32_t* rsi_1

if ((not.b(r12_1) & 1) == 0)
    rsi_1 = zx.q(*(arg1 + 0x80) * rdx_21) + *(arg1 + 0x70)
else
    int32_t* r11_11 = *(arg1 + 0x20)
    int32_t r10_35 = 0
    int32_t rax_55 = *r11_11
    
    if (rdx_21 s>= rax_55)
        int64_t rcx_20 = 0
        
        do
            rdx_21 -= rax_55
            rcx_20 += 1
            rax_55 = r11_11[rcx_20]
            r10_35 += 1
        while (rdx_21 s>= rax_55)
    
    rsi_1 = sx.q(rdx_21) + *(*(arg1 + 0x18) + (sx.q(r10_35) << 3))

uint32_t rax_57 = zx.d(rax[0xb])
uint8_t r14_1 = (rax_57 u>> 0xf).b
*(arg1 + 0x10) = &rax[0xc]
int32_t rdx_23 = rax_57 & 0x7fff
int32_t* rdi_1

if ((not.b(r14_1) & 1) == 0)
    rdi_1 = zx.q(*(arg1 + 0x80) * rdx_23) + *(arg1 + 0x70)
else
    int32_t* r11_12 = *(arg1 + 0x20)
    int32_t r10_36 = 0
    int32_t rax_59 = *r11_12
    
    if (rdx_23 s>= rax_59)
        int64_t rcx_22 = 0
        
        do
            rdx_23 -= rax_59
            rcx_22 += 1
            rax_59 = r11_12[rcx_22]
            r10_36 += 1
        while (rdx_23 s>= rax_59)
    
    rdi_1 = sx.q(rdx_23) + *(*(arg1 + 0x18) + (sx.q(r10_36) << 3))

int32_t rcx_25 = zx.d(rax[0xc]) & 0x7fff
*(arg1 + 0x10) = &rax[0xd]
int32_t var_1a0 = rcx_25
int32_t rax_61
rax_61.b = rcx_25 != 0x7fff
void* var_190
void var_198

if (rcx_25 == 0x7fff)
    var_190 = &var_198
else
    var_190 = zx.q(rcx_25 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_29 = zx.d(rax[0xd]) & 0x7fff
*(arg1 + 0x10) = &rax[0xe]
int32_t var_188 = rcx_29
int32_t rax_62
rax_62.b = rcx_29 != 0x7fff
float* var_178
void var_180

if (rcx_29 == 0x7fff)
    var_178 = &var_180
else
    var_178 = zx.q(rcx_29 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_33 = zx.d(rax[0xe]) & 0x7fff
*(arg1 + 0x10) = &rax[0xf]
int32_t var_170 = rcx_33
int32_t rax_63
rax_63.b = rcx_33 != 0x7fff
void* var_160
void var_168

if (rcx_33 == 0x7fff)
    var_160 = &var_168
else
    var_160 = zx.q(rcx_33 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_37 = zx.d(rax[0xf]) & 0x7fff
*(arg1 + 0x10) = &rax[0x10]
int32_t var_158 = rcx_37
int32_t rax_64
rax_64.b = rcx_37 != 0x7fff
void* var_148
void var_150

if (rcx_37 == 0x7fff)
    var_148 = &var_150
else
    var_148 = zx.q(rcx_37 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_41 = zx.d(rax[0x10]) & 0x7fff
*(arg1 + 0x10) = &rax[0x11]
int32_t var_140 = rcx_41
int32_t rax_65
rax_65.b = rcx_41 != 0x7fff
void* var_130
void var_138

if (rcx_41 == 0x7fff)
    var_130 = &var_138
else
    var_130 = zx.q(rcx_41 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_45 = zx.d(rax[0x11]) & 0x7fff
*(arg1 + 0x10) = &rax[0x12]
int32_t var_128 = rcx_45
int32_t result_2
result_2.b = rcx_45 != 0x7fff
void* var_118
void var_120

if (rcx_45 == 0x7fff)
    var_118 = &var_120
else
    var_118 = zx.q(rcx_45 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_49 = zx.d(rax[0x12]) & 0x7fff
*(arg1 + 0x10) = &rax[0x13]
int32_t var_110 = rcx_49
int32_t r11_13
r11_13.b = rcx_49 != 0x7fff
int32_t var_10c = r11_13
int32_t* r10_39
void var_108

if (rcx_49 == 0x7fff)
    r10_39 = &var_108
else
    r10_39 = zx.q(*(arg1 + 0x80) * rcx_49) + *(arg1 + 0x70)
int32_t* var_100 = r10_39
int32_t rcx_51 = zx.d(rax[0x13]) & 0x7fff
*(arg1 + 0x10) = &rax[0x14]
int32_t var_1d0 = rcx_51
int32_t rax_66
rax_66.b = rcx_51 != 0x7fff
void* var_1c0
void var_1c8

if (rcx_51 == 0x7fff)
    var_1c0 = &var_1c8
else
    var_1c0 = zx.q(rcx_51 * *(arg1 + 0x80)) + *(arg1 + 0x70)
uint32_t rcx_54 = zx.d(rax[0x14])
*(arg1 + 0x10) = &rax[0x15]
int32_t rdx_33 = rcx_54 & 0x7fff
int32_t var_1b8 = rdx_33
int32_t rax_68
rax_68.b = rdx_33 != 0x7fff
void* var_1a8
void var_1b0

if (rdx_33 == 0x7fff)
    var_1a8 = &var_1b0
else
    var_1a8 = zx.q(*(arg1 + 0x80) * rdx_33) + *(arg1 + 0x70)
int128_t* result = result_1
int128_t zmm9 = *result

if (*(arg1 + 0x40) s> 0)
    uint64_t rbx_12 = zx.q(arg_8.b)
    uint64_t rax_69 = zx.q(arg_10.b)
    arg_8.q = zx.q(arg_18.b) << 2
    arg_10.q = zx.q(arg_20.b) << 2
    arg_18.q = zx.q(rax_31) << 2
    arg_20.q = zx.q(var_210.b) << 2
    uint64_t rcx_67 = zx.q(var_208.b) << 2
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    var_200.q = zx.q(var_200.b) << 2
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm12
    int128_t var_b8_1 = zmm12
    int64_t r14_2 = arg_8.q
    var_208.q = zx.q(r14_1) << 2
    var_210.q = zx.q(r12_1) << 2
    uint64_t rax_70 = rax_69 << 2
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    int128_t zmm14
    int128_t var_d8_1 = zmm14
    var_1f8.q = zx.q(var_1f8.b) << 2
    uint64_t var_f8_1 = rax_70
    
    while (true)
        int128_t* rcx_76 = var_1f0
        var_1f0 = rcx_76 + (rbx_12 << 2)
        int128_t* rcx_78 = var_238
        var_238 += rax_70
        zmm8 = *rcx_76
        int128_t* rax_71 = var_230
        zmm7 = *rcx_78
        var_230 += r14_2
        zmm14 = *r13_1
        zmm6 = *rax_71
        int32_t* rcx_79 = var_1e8
        r13_1 += arg_20.q
        int32_t zmm3 = *rdi_1
        rdi_1 += var_208.q
        var_1e8 = rcx_79 + arg_10.q
        int32_t* rax_73 = var_1e0
        float zmm5 = *rcx_79 f* zmm9.d
        var_1e0 += arg_18.q
        int128_t* rax_74 = var_1d8
        float temp0_1 = _mm_max_ss(*rax_73, 0x38d1b717)
        var_1d8 = rax_74 + rcx_67
        zmm13 = *rax_74
        int32_t* rcx_84 = rsi_1
        zmm12 = *var_228
        int32_t* rax_77 = r15_1
        rsi_1 += var_210.q
        float zmm2 = *rcx_84
        r15_1 += var_1f8.q
        var_228 += var_200.q
        r14_2 = arg_8.q
        float zmm1 = *rax_77
        float zmm0 = zmm9.d / temp0_1
        *r10_39 = zmm1
        int32_t* rdx_37 = var_1c0
        zmm6.d = zmm6.d f* zmm0
        zmm7.d = zmm7.d f* zmm0
        zmm8.d = zmm8.d f* zmm0
        zmm6.d = zmm6.d f+ zmm1
        var_1c0 = &rdx_37[sx.q(rax_66)]
        *rdx_37 = zmm2
        zmm7.d = zmm7.d f+ zmm2
        int32_t* rdx_38 = var_1a8
        zmm8.d = zmm8.d f+ zmm3
        var_1a8 = &rdx_38[sx.q(rax_68)]
        *rdx_38 = zmm3
        
        if (zmm5 >= 0f)
            zmm5 = _mm_min_ss(zmm5, 0x3f800000)
        else
            zmm5 = (zx.o(0)).d
        
        float* rdx_39 = var_190
        r9 += 1
        var_190 = &rdx_39[sx.q(rax_61)]
        zmm6.d = zmm6.d f- zmm6.d * zmm5
        zmm7.d = zmm7.d f- zmm7.d * zmm5
        zmm8.d = zmm8.d f- zmm8.d * zmm5
        *rdx_39 = zmm6.d f* zmm9.d f+ zmm12.d
        float* rdx_40 = var_178
        var_178 = &rdx_40[sx.q(rax_62)]
        *rdx_40 = zmm7.d f* zmm9.d f+ zmm13.d
        float* rdx_41 = var_160
        var_160 = &rdx_41[sx.q(rax_63)]
        *rdx_41 = zmm8.d f* zmm9.d f+ zmm14.d
        int32_t* rdx_42 = var_148
        var_148 = &rdx_42[sx.q(rax_64)]
        *rdx_42 = zmm6.d
        int32_t* rdx_43 = var_130
        var_130 = &rdx_43[sx.q(rax_65)]
        *rdx_43 = zmm7.d
        int32_t* rdx_44 = var_118
        result = sx.q(result_2)
        var_118 = &rdx_44[result]
        *rdx_44 = zmm8.d
        
        if (r9 s>= *(arg1 + 0x40))
            break
        
        r10_39 = &r10_39[sx.q(r11_13)]
        r11_13 = var_10c
        rax_70 = var_f8_1

return result
