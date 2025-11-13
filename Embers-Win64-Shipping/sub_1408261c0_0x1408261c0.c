// 函数: sub_1408261c0
// 地址: 0x1408261c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_2 = rdx u>> 0xf
int32_t rdx_1 = rdx & 0x7fff
uint32_t arg_18 = rax_2
rax_2.b = not.b(rax_2.b)
void* r9_2

if ((rax_2.b & 1) == 0)
    r9_2 = zx.q(*(arg1 + 0x80) * rdx_1) + *(arg1 + 0x70)
else
    int32_t* r10_1 = *(arg1 + 0x20)
    int32_t r9 = 0
    int32_t rax_3 = *r10_1
    
    if (rdx_1 s>= rax_3)
        int64_t rcx = 0
        
        do
            rdx_1 -= rax_3
            rcx += 1
            rax_3 = r10_1[rcx]
            r9 += 1
        while (rdx_1 s>= rax_3)
    
    r9_2 = sx.q(rdx_1) + *(*(arg1 + 0x18) + (sx.q(r9) << 3))

uint32_t rax_5 = zx.d(rax[1])
void* var_218 = r9_2
uint32_t rax_6 = rax_5 u>> 0xf
int32_t rdx_3 = rax_5 & 0x7fff
uint32_t arg_20 = rax_6
rax_6.b = not.b(rax_6.b)
*(arg1 + 0x10) = &rax[2]
void* r9_7

if ((rax_6.b & 1) == 0)
    r9_7 = zx.q(*(arg1 + 0x80) * rdx_3) + *(arg1 + 0x70)
else
    int32_t* r10_2 = *(arg1 + 0x20)
    int32_t r9_5 = 0
    int32_t rax_7 = *r10_2
    
    if (rdx_3 s>= rax_7)
        int64_t rcx_2 = 0
        
        do
            rdx_3 -= rax_7
            rcx_2 += 1
            rax_7 = r10_2[rcx_2]
            r9_5 += 1
        while (rdx_3 s>= rax_7)
    
    r9_7 = sx.q(rdx_3) + *(*(arg1 + 0x18) + (sx.q(r9_5) << 3))

uint32_t rax_9 = zx.d(rax[2])
void* var_210 = r9_7
uint32_t rax_10 = rax_9 u>> 0xf
int32_t rdx_5 = rax_9 & 0x7fff
uint32_t var_258 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg1 + 0x10) = &rax[3]
void* r9_12

if ((rax_10.b & 1) == 0)
    r9_12 = zx.q(*(arg1 + 0x80) * rdx_5) + *(arg1 + 0x70)
else
    int32_t* r10_3 = *(arg1 + 0x20)
    int32_t r9_10 = 0
    int32_t rax_11 = *r10_3
    
    if (rdx_5 s>= rax_11)
        int64_t rcx_4 = 0
        
        do
            rdx_5 -= rax_11
            rcx_4 += 1
            rax_11 = r10_3[rcx_4]
            r9_10 += 1
        while (rdx_5 s>= rax_11)
    
    r9_12 = sx.q(rdx_5) + *(*(arg1 + 0x18) + (sx.q(r9_10) << 3))

uint32_t rax_13 = zx.d(rax[3])
void* var_208 = r9_12
*(arg1 + 0x10) = &rax[4]

if ((not.b((rax_13 u>> 0xf).b) & 1) != 0)
    int32_t* r9_15 = *(arg1 + 0x20)
    int32_t rcx_7 = rax_13 & 0x7fff
    int32_t rax_15 = *r9_15
    
    if (rcx_7 s>= rax_15)
        int64_t rdx_6 = 0
        
        do
            rcx_7 -= rax_15
            rdx_6 += 1
            rax_15 = r9_15[rdx_6]
        while (rcx_7 s>= rax_15)

uint32_t rax_16 = zx.d(rax[4])
*(arg1 + 0x10) = &rax[5]

if ((not.b((rax_16 u>> 0xf).b) & 1) != 0)
    int32_t* r9_16 = *(arg1 + 0x20)
    int32_t rcx_9 = rax_16 & 0x7fff
    int32_t rax_18 = *r9_16
    
    if (rcx_9 s>= rax_18)
        int64_t rdx_7 = 0
        
        do
            rcx_9 -= rax_18
            rdx_7 += 1
            rax_18 = r9_16[rdx_7]
        while (rcx_9 s>= rax_18)

uint32_t rax_19 = zx.d(rax[5])
*(arg1 + 0x10) = &rax[6]
uint32_t rax_20 = rax_19 u>> 0xf
int32_t rdx_9 = rax_19 & 0x7fff
uint32_t var_250 = rax_20
rax_20.b = not.b(rax_20.b)
void* r9_19

if ((rax_20.b & 1) == 0)
    r9_19 = zx.q(*(arg1 + 0x80) * rdx_9) + *(arg1 + 0x70)
else
    int32_t* r10_6 = *(arg1 + 0x20)
    int32_t r9_17 = 0
    int32_t rax_21 = *r10_6
    
    if (rdx_9 s>= rax_21)
        int64_t rcx_10 = 0
        
        do
            rdx_9 -= rax_21
            rcx_10 += 1
            rax_21 = r10_6[rcx_10]
            r9_17 += 1
        while (rdx_9 s>= rax_21)
    
    r9_19 = sx.q(rdx_9) + *(*(arg1 + 0x18) + (sx.q(r9_17) << 3))

uint32_t rax_23 = zx.d(rax[6])
void* var_200 = r9_19
uint32_t rax_24 = rax_23 u>> 0xf
int32_t rdx_11 = rax_23 & 0x7fff
uint32_t var_248 = rax_24
rax_24.b = not.b(rax_24.b)
*(arg1 + 0x10) = &rax[7]
void* r9_24

if ((rax_24.b & 1) == 0)
    r9_24 = zx.q(*(arg1 + 0x80) * rdx_11) + *(arg1 + 0x70)
else
    int32_t* r10_7 = *(arg1 + 0x20)
    int32_t r9_22 = 0
    int32_t rax_25 = *r10_7
    
    if (rdx_11 s>= rax_25)
        int64_t rcx_12 = 0
        
        do
            rdx_11 -= rax_25
            rcx_12 += 1
            rax_25 = r10_7[rcx_12]
            r9_22 += 1
        while (rdx_11 s>= rax_25)
    
    r9_24 = sx.q(rdx_11) + *(*(arg1 + 0x18) + (sx.q(r9_22) << 3))

uint32_t rax_27 = zx.d(rax[7])
void* var_1f8 = r9_24
uint8_t rax_28 = (rax_27 u>> 0xf).b
int32_t rdx_13 = rax_27 & 0x7fff
*(arg1 + 0x10) = &rax[8]
void* r9_29

if ((not.b(rax_28) & 1) == 0)
    r9_29 = zx.q(*(arg1 + 0x80) * rdx_13) + *(arg1 + 0x70)
else
    int32_t* r10_8 = *(arg1 + 0x20)
    int32_t r9_27 = 0
    int32_t rax_29 = *r10_8
    
    if (rdx_13 s>= rax_29)
        int64_t rcx_14 = 0
        
        do
            rdx_13 -= rax_29
            rcx_14 += 1
            rax_29 = r10_8[rcx_14]
            r9_27 += 1
        while (rdx_13 s>= rax_29)
    
    r9_29 = sx.q(rdx_13) + *(*(arg1 + 0x18) + (sx.q(r9_27) << 3))

uint32_t rax_31 = zx.d(rax[8])
void* var_1f0 = r9_29
uint8_t rax_32 = (rax_31 u>> 0xf).b
int32_t rdx_15 = rax_31 & 0x7fff
*(arg1 + 0x10) = &rax[9]
void* r9_34

if ((not.b(rax_32) & 1) == 0)
    r9_34 = zx.q(*(arg1 + 0x80) * rdx_15) + *(arg1 + 0x70)
else
    int32_t* r10_9 = *(arg1 + 0x20)
    int32_t r9_32 = 0
    int32_t rax_33 = *r10_9
    
    if (rdx_15 s>= rax_33)
        int64_t rcx_16 = 0
        
        do
            rdx_15 -= rax_33
            rcx_16 += 1
            rax_33 = r10_9[rcx_16]
            r9_32 += 1
        while (rdx_15 s>= rax_33)
    
    r9_34 = sx.q(rdx_15) + *(*(arg1 + 0x18) + (sx.q(r9_32) << 3))

uint32_t rax_35 = zx.d(rax[9])
void* var_1e8 = r9_34
uint32_t rax_36 = rax_35 u>> 0xf
int32_t rdx_17 = rax_35 & 0x7fff
uint32_t var_240 = rax_36
rax_36.b = not.b(rax_36.b)
*(arg1 + 0x10) = &rax[0xa]
int32_t* r9_39

if ((rax_36.b & 1) == 0)
    r9_39 = zx.q(*(arg1 + 0x80) * rdx_17) + *(arg1 + 0x70)
else
    int32_t* r10_10 = *(arg1 + 0x20)
    int32_t r9_37 = 0
    int32_t rax_37 = *r10_10
    
    if (rdx_17 s>= rax_37)
        int64_t rcx_18 = 0
        
        do
            rdx_17 -= rax_37
            rcx_18 += 1
            rax_37 = r10_10[rcx_18]
            r9_37 += 1
        while (rdx_17 s>= rax_37)
    
    r9_39 = sx.q(rdx_17) + *(*(arg1 + 0x18) + (sx.q(r9_37) << 3))

uint32_t rax_39 = zx.d(rax[0xa])
int32_t* var_1e0 = r9_39
uint8_t rax_40 = (rax_39 u>> 0xf).b
int32_t rdx_19 = rax_39 & 0x7fff
*(arg1 + 0x10) = &rax[0xb]
void* r9_44

if ((not.b(rax_40) & 1) == 0)
    r9_44 = zx.q(*(arg1 + 0x80) * rdx_19) + *(arg1 + 0x70)
else
    int32_t* r10_11 = *(arg1 + 0x20)
    int32_t r9_42 = 0
    int32_t rax_41 = *r10_11
    
    if (rdx_19 s>= rax_41)
        int64_t rcx_20 = 0
        
        do
            rdx_19 -= rax_41
            rcx_20 += 1
            rax_41 = r10_11[rcx_20]
            r9_42 += 1
        while (rdx_19 s>= rax_41)
    
    r9_44 = sx.q(rdx_19) + *(*(arg1 + 0x18) + (sx.q(r9_42) << 3))

uint32_t rax_43 = zx.d(rax[0xb])
void* var_1d8 = r9_44
uint8_t rax_44 = (rax_43 u>> 0xf).b
int32_t rdx_21 = rax_43 & 0x7fff
*(arg1 + 0x10) = &rax[0xc]
void* r9_49

if ((not.b(rax_44) & 1) == 0)
    r9_49 = zx.q(*(arg1 + 0x80) * rdx_21) + *(arg1 + 0x70)
else
    int32_t* r10_12 = *(arg1 + 0x20)
    int32_t r9_47 = 0
    int32_t rax_45 = *r10_12
    
    if (rdx_21 s>= rax_45)
        int64_t rcx_22 = 0
        
        do
            rdx_21 -= rax_45
            rcx_22 += 1
            rax_45 = r10_12[rcx_22]
            r9_47 += 1
        while (rdx_21 s>= rax_45)
    
    r9_49 = sx.q(rdx_21) + *(*(arg1 + 0x18) + (sx.q(r9_47) << 3))

uint32_t rax_47 = zx.d(rax[0xc])
void* var_1d0 = r9_49
uint32_t rax_48 = rax_47 u>> 0xf
int32_t rdx_23 = rax_47 & 0x7fff
uint32_t var_238 = rax_48
rax_48.b = not.b(rax_48.b)
*(arg1 + 0x10) = &rax[0xd]
int32_t* r9_54

if ((rax_48.b & 1) == 0)
    r9_54 = zx.q(*(arg1 + 0x80) * rdx_23) + *(arg1 + 0x70)
else
    int32_t* r10_13 = *(arg1 + 0x20)
    int32_t r9_52 = 0
    int32_t rax_49 = *r10_13
    
    if (rdx_23 s>= rax_49)
        int64_t rcx_24 = 0
        
        do
            rdx_23 -= rax_49
            rcx_24 += 1
            rax_49 = r10_13[rcx_24]
            r9_52 += 1
        while (rdx_23 s>= rax_49)
    
    r9_54 = sx.q(rdx_23) + *(*(arg1 + 0x18) + (sx.q(r9_52) << 3))

uint32_t rax_51 = zx.d(rax[0xd])
int32_t* var_1c8 = r9_54
uint32_t rax_52 = rax_51 u>> 0xf
int32_t rdx_25 = rax_51 & 0x7fff
uint32_t var_230 = rax_52
rax_52.b = not.b(rax_52.b)
*(arg1 + 0x10) = &rax[0xe]
int32_t* r9_59

if ((rax_52.b & 1) == 0)
    r9_59 = zx.q(*(arg1 + 0x80) * rdx_25) + *(arg1 + 0x70)
else
    int32_t* r10_14 = *(arg1 + 0x20)
    int32_t r9_57 = 0
    int32_t rax_53 = *r10_14
    
    if (rdx_25 s>= rax_53)
        int64_t rcx_26 = 0
        
        do
            rdx_25 -= rax_53
            rcx_26 += 1
            rax_53 = r10_14[rcx_26]
            r9_57 += 1
        while (rdx_25 s>= rax_53)
    
    r9_59 = sx.q(rdx_25) + *(*(arg1 + 0x18) + (sx.q(r9_57) << 3))

uint32_t rax_55 = zx.d(rax[0xe])
int32_t* var_1c0 = r9_59
uint8_t r12_1 = (rax_55 u>> 0xf).b
*(arg1 + 0x10) = &rax[0xf]
int32_t rdx_27 = rax_55 & 0x7fff
int128_t* r9_64

if ((not.b(r12_1) & 1) == 0)
    r9_64 = zx.q(*(arg1 + 0x80) * rdx_27) + *(arg1 + 0x70)
else
    int32_t* r10_15 = *(arg1 + 0x20)
    int32_t r9_62 = 0
    int32_t rax_57 = *r10_15
    
    if (rdx_27 s>= rax_57)
        int64_t rcx_28 = 0
        
        do
            rdx_27 -= rax_57
            rcx_28 += 1
            rax_57 = r10_15[rcx_28]
            r9_62 += 1
        while (rdx_27 s>= rax_57)
    
    r9_64 = sx.q(rdx_27) + *(*(arg1 + 0x18) + (sx.q(r9_62) << 3))

uint32_t rax_59 = zx.d(rax[0xf])
int128_t* var_1b8 = r9_64
uint8_t r15_1 = (rax_59 u>> 0xf).b
*(arg1 + 0x10) = &rax[0x10]
int32_t rdx_29 = rax_59 & 0x7fff
int128_t* r9_69

if ((not.b(r15_1) & 1) == 0)
    r9_69 = zx.q(*(arg1 + 0x80) * rdx_29) + *(arg1 + 0x70)
else
    int32_t* r10_16 = *(arg1 + 0x20)
    int32_t r9_67 = 0
    int32_t rax_61 = *r10_16
    
    if (rdx_29 s>= rax_61)
        int64_t rcx_30 = 0
        
        do
            rdx_29 -= rax_61
            rcx_30 += 1
            rax_61 = r10_16[rcx_30]
            r9_67 += 1
        while (rdx_29 s>= rax_61)
    
    r9_69 = sx.q(rdx_29) + *(*(arg1 + 0x18) + (sx.q(r9_67) << 3))

uint32_t rax_63 = zx.d(rax[0x10])
int128_t* var_1b0 = r9_69
uint8_t r14_1 = (rax_63 u>> 0xf).b
*(arg1 + 0x10) = &rax[0x11]
int32_t rdx_31 = rax_63 & 0x7fff
int32_t* r9_74

if ((not.b(r14_1) & 1) == 0)
    r9_74 = zx.q(*(arg1 + 0x80) * rdx_31) + *(arg1 + 0x70)
else
    int32_t* r10_17 = *(arg1 + 0x20)
    int32_t r9_72 = 0
    int32_t rax_65 = *r10_17
    
    if (rdx_31 s>= rax_65)
        int64_t rcx_32 = 0
        
        do
            rdx_31 -= rax_65
            rcx_32 += 1
            rax_65 = r10_17[rcx_32]
            r9_72 += 1
        while (rdx_31 s>= rax_65)
    
    r9_74 = sx.q(rdx_31) + *(*(arg1 + 0x18) + (sx.q(r9_72) << 3))

uint32_t rax_67 = zx.d(rax[0x11])
int32_t* var_1a8 = r9_74
uint8_t rsi_1 = (rax_67 u>> 0xf).b
*(arg1 + 0x10) = &rax[0x12]
int32_t rdx_33 = rax_67 & 0x7fff
int128_t* r9_79

if ((not.b(rsi_1) & 1) == 0)
    r9_79 = zx.q(*(arg1 + 0x80) * rdx_33) + *(arg1 + 0x70)
else
    int32_t* r10_18 = *(arg1 + 0x20)
    int32_t r9_77 = 0
    int32_t rax_69 = *r10_18
    
    if (rdx_33 s>= rax_69)
        int64_t rcx_34 = 0
        
        do
            rdx_33 -= rax_69
            rcx_34 += 1
            rax_69 = r10_18[rcx_34]
            r9_77 += 1
        while (rdx_33 s>= rax_69)
    
    r9_79 = sx.q(rdx_33) + *(*(arg1 + 0x18) + (sx.q(r9_77) << 3))

uint32_t rax_71 = zx.d(rax[0x12])
int128_t* var_1a0 = r9_79
uint8_t rdi_1 = (rax_71 u>> 0xf).b
*(arg1 + 0x10) = &rax[0x13]
int32_t rdx_35 = rax_71 & 0x7fff
int32_t* r9_84

if ((not.b(rdi_1) & 1) == 0)
    r9_84 = zx.q(*(arg1 + 0x80) * rdx_35) + *(arg1 + 0x70)
else
    int32_t* r10_19 = *(arg1 + 0x20)
    int32_t r9_82 = 0
    int32_t rax_73 = *r10_19
    
    if (rdx_35 s>= rax_73)
        int64_t rcx_36 = 0
        
        do
            rdx_35 -= rax_73
            rcx_36 += 1
            rax_73 = r10_19[rcx_36]
            r9_82 += 1
        while (rdx_35 s>= rax_73)
    
    r9_84 = sx.q(rdx_35) + *(*(arg1 + 0x18) + (sx.q(r9_82) << 3))

uint32_t rax_75 = zx.d(rax[0x13])
int32_t* var_198 = r9_84
uint8_t rbx_1 = (rax_75 u>> 0xf).b
*(arg1 + 0x10) = &rax[0x14]
int32_t rdx_37 = rax_75 & 0x7fff
int32_t* r9_89

if ((not.b(rbx_1) & 1) == 0)
    r9_89 = zx.q(*(arg1 + 0x80) * rdx_37) + *(arg1 + 0x70)
else
    int32_t* r10_20 = *(arg1 + 0x20)
    int32_t r9_87 = 0
    int32_t rax_77 = *r10_20
    
    if (rdx_37 s>= rax_77)
        int64_t rcx_38 = 0
        
        do
            rdx_37 -= rax_77
            rcx_38 += 1
            rax_77 = r10_20[rcx_38]
            r9_87 += 1
        while (rdx_37 s>= rax_77)
    
    r9_89 = sx.q(rdx_37) + *(*(arg1 + 0x18) + (sx.q(r9_87) << 3))

int32_t rcx_41 = zx.d(rax[0x14]) & 0x7fff
*(arg1 + 0x10) = &rax[0x15]
int32_t var_140 = rcx_41
int32_t rax_79
rax_79.b = rcx_41 != 0x7fff
int32_t arg_10 = rax_79
int32_t* r13_2
void var_138

if (rcx_41 == 0x7fff)
    r13_2 = &var_138
else
    r13_2 = zx.q(*(arg1 + 0x80) * rcx_41) + *(arg1 + 0x70)
int32_t* var_130 = r13_2
int32_t rcx_43 = zx.d(rax[0x15]) & 0x7fff
*(arg1 + 0x10) = &rax[0x16]
int32_t var_170 = rcx_43
int32_t rax_80
rax_80.b = rcx_43 != 0x7fff
void* var_160
void var_168

if (rcx_43 == 0x7fff)
    var_160 = &var_168
else
    var_160 = zx.q(rcx_43 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_47 = zx.d(rax[0x16]) & 0x7fff
*(arg1 + 0x10) = &rax[0x17]
int32_t var_158 = rcx_47
int32_t rax_81
rax_81.b = rcx_47 != 0x7fff
void* var_148
void var_150

if (rcx_47 == 0x7fff)
    var_148 = &var_150
else
    var_148 = zx.q(rcx_47 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_51 = zx.d(rax[0x17]) & 0x7fff
*(arg1 + 0x10) = &rax[0x18]
int32_t var_188 = rcx_51
int32_t rax_82
rax_82.b = rcx_51 != 0x7fff
void* var_178
void var_180

if (rcx_51 == 0x7fff)
    var_178 = &var_180
else
    var_178 = zx.q(rcx_51 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_55 = zx.d(rax[0x18]) & 0x7fff
*(arg1 + 0x10) = &rax[0x19]
int32_t var_128 = rcx_55
int32_t rax_83
rax_83.b = rcx_55 != 0x7fff
void* var_118
void var_120

if (rcx_55 == 0x7fff)
    var_118 = &var_120
else
    var_118 = zx.q(rcx_55 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_59 = zx.d(rax[0x19]) & 0x7fff
*(arg1 + 0x10) = &rax[0x1a]
int32_t var_110 = rcx_59
int32_t rax_84
rax_84.b = rcx_59 != 0x7fff
void* var_100
void var_108

if (rcx_59 == 0x7fff)
    var_100 = &var_108
else
    var_100 = zx.q(rcx_59 * *(arg1 + 0x80)) + *(arg1 + 0x70)
int32_t rcx_63 = zx.d(rax[0x1a]) & 0x7fff
*(arg1 + 0x10) = &rax[0x1b]
int32_t var_f8 = rcx_63
int32_t rax_85
rax_85.b = rcx_63 != 0x7fff
void* var_e8
void var_f0

if (rcx_63 == 0x7fff)
    var_e8 = &var_f0
else
    var_e8 = zx.q(rcx_63 * *(arg1 + 0x80)) + *(arg1 + 0x70)
uint32_t rcx_66 = zx.d(rax[0x1b])
*(arg1 + 0x10) = &rax[0x1c]
int32_t rdx_46 = rcx_66 & 0x7fff
int32_t var_e0 = rdx_46
int32_t result
result.b = rdx_46 != 0x7fff
int32_t result_1 = result
void* var_d0

if (rdx_46 == 0x7fff)
    void var_d8
    result = &var_d8
    var_d0 = &var_d8
else
    var_d0 = zx.q(*(arg1 + 0x80) * rdx_46) + *(arg1 + 0x70)

int32_t result_2 = 0

if (*(arg1 + 0x40) s> 0)
    uint64_t rcx_70 = zx.q(arg_18.b)
    uint64_t rdx_47 = zx.q(arg_20.b)
    arg_18.q = zx.q(var_240.b) << 2
    arg_20.q = zx.q(var_238.b) << 2
    var_230.q = zx.q(var_230.b) << 2
    int128_t zmm6
    int128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    int32_t* r12_2 = r9_89
    var_238.q = zx.q(r12_1) << 2
    uint64_t rcx_71 = rcx_70 << 2
    uint64_t rdx_48 = rdx_47 << 2
    uint64_t r9_93 = zx.q(var_258.b) << 2
    uint64_t r10_22 = zx.q(var_250.b) << 2
    uint64_t r11_19 = zx.q(var_248.b) << 2
    var_240.q = zx.q(r15_1) << 2
    var_248.q = zx.q(r14_1) << 2
    var_250.q = zx.q(rsi_1) << 2
    var_258.q = zx.q(rdi_1) << 2
    uint64_t var_c0_1 = rcx_71
    uint64_t var_b8_1 = rdx_48
    uint64_t var_a0_1 = r9_93
    uint64_t var_b0_1 = r10_22
    uint64_t var_a8_1 = r11_19
    
    while (true)
        int32_t* rbx_2 = var_218
        int32_t* rcx_72 = var_210
        var_218 = rbx_2 + rcx_71
        float zmm1 = *rbx_2
        int32_t r14_2 = *rcx_72
        int32_t* rdx_49 = var_200
        var_210 = rcx_72 + rdx_48
        int32_t* rcx_74 = var_208
        char* r9_94 = var_1f0
        var_208 = rcx_74 + r9_93
        int32_t rcx_76 = *rcx_74
        char r10_23 = *r9_94
        var_200 = rdx_49 + r10_22
        int128_t* rdx_51 = var_1f8
        float zmm4 = *rdx_49
        var_1f8 = rdx_51 + r11_19
        uint128_t zmm0 = *rdx_51
        var_1f0 = &r9_94[zx.q(rax_28)]
        char* r9_96 = var_1e8
        char r11_20 = *r9_96
        var_1e8 = &r9_96[zx.q(rax_32)]
        char* r9_98 = var_1d8
        int32_t rbx_4 = *var_1e0
        char r15_2 = *r9_98
        var_1e0 += arg_18.q
        var_1d8 = &r9_98[zx.q(rax_40)]
        char* r9_100 = var_1d0
        char rsi_2 = *r9_100
        int32_t* rax_109 = var_1c8
        var_1d0 = &r9_100[zx.q(rax_44)]
        var_1c8 += arg_20.q
        int32_t rdx_61 = *rax_109
        int32_t* rax_110 = var_1c0
        var_1c0 += var_230.q
        int32_t r9_104 = *rax_110
        int128_t* rax_111 = var_1b8
        var_1b8 += var_238.q
        zmm6 = *rax_111
        int128_t* rax_112 = var_1b0
        var_1b0 += var_240.q
        uint128_t zmm2 = *rax_112
        int32_t* rax_113 = var_1a8
        var_1a8 += var_248.q
        float zmm3 = *rax_113
        int128_t* rax_114 = var_1a0
        var_1a0 += var_250.q
        zmm7 = *rax_114
        int32_t* rax_115 = var_198
        var_198 += var_258.q
        int32_t rdi_12 = *rax_115
        int32_t* rax_116 = r12_2
        r12_2 = &r12_2[zx.q(rbx_1)]
        float zmm5 = *rax_116
        
        if (rdx_61 != 4)
            if (not(zmm6.d f!= 0f))
                zmm3 = zmm4
                zmm2 = zmm0 ^ 0x80000000
                zmm7 = zmm0
            
            zmm2.d = zmm2.d f+ zmm1
            zmm6.d = zmm6.d f+ zmm1
            zmm1 = zmm2.d / zmm3
            int32_t rax_118 = int.d(zmm1 + zmm1 - 0.5f) s>> 1
            
            if (rax_118 s> 0)
                rdi_12 += rax_118
                zmm0.d = _mm_cvtepi32_ps(zx.o(rax_118)).d f* zmm3
                zmm2.d = zmm2.d f- zmm0.d
                
                if (r10_23 != 0)
                    zmm3 = zmm4
                
                if (r11_20 != 0)
                    zmm7 = zx.o(0)
                
                zmm5 = zmm2.d / zmm3
            
            int32_t rax_119 = 0
            
            if (r9_104 != 0)
                rcx_76 = rdx_61
            
            if (r9_104 != 0)
                rax_119 = r9_104
            
            rdx_61 = rcx_76
            
            if (rbx_4 s<= 0 || rdi_12 s< rbx_4 || rax_119 u> 1)
                r9_104 = rax_119
                
                if (rcx_76 != 0)
                    goto label_140826f5e
            else
                rdx_61 = 1
                r9_104 = 1
            label_140826f5e:
                
                if (rsi_2 != 0)
                label_140826f6d:
                    
                    if (r9_104 u<= 3)
                        rdx_61 = 3
                        r9_104 = 3
                else if (r14_2 == 0 && r15_2 != 0)
                    goto label_140826f6d
        
        *r13_2 = rdx_61
        int32_t* rdx_62 = var_160
        var_160 = &rdx_62[sx.q(rax_80)]
        *rdx_62 = r9_104
        int32_t* rdx_63 = var_148
        var_148 = &rdx_63[sx.q(rax_81)]
        *rdx_63 = zmm6.d
        int32_t* rdx_64 = var_178
        var_178 = &rdx_64[sx.q(rax_82)]
        *rdx_64 = zmm2.d
        float* rdx_65 = var_118
        var_118 = &rdx_65[sx.q(rax_83)]
        *rdx_65 = zmm3
        int32_t* rdx_66 = var_100
        var_100 = &rdx_66[sx.q(rax_84)]
        *rdx_66 = zmm7.d
        int32_t* rdx_67 = var_e8
        var_e8 = &rdx_67[sx.q(rax_85)]
        *rdx_67 = rdi_12
        float* rdx_68 = var_d0
        result = result_2 + 1
        var_d0 = &rdx_68[sx.q(result_1)]
        *rdx_68 = zmm5
        result_2 = result
        
        if (result s>= *(arg1 + 0x40))
            break
        
        r13_2 = &r13_2[sx.q(arg_10)]
        rcx_71 = var_c0_1
        rdx_48 = var_b8_1
        r9_93 = var_a0_1
        r10_22 = var_b0_1
        r11_19 = var_a8_1
        arg_10 = rax_79

return result
