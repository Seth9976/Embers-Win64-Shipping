// 函数: sub_1408146e0
// 地址: 0x1408146e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1
int64_t rax_1 = __security_cookie ^ &i_1
int16_t* rax_2 = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax_2)
*(arg1 + 0x10) = &rax_2[1]
int32_t r9_1 = rdx & 0x7fff
int128_t* var_290

if ((not.b((rdx u>> 0xf).b) & 1) == 0)
    var_290 = zx.q(*(arg1 + 0x80) * r9_1) + *(arg1 + 0x70)
else
    int32_t* rbx_1 = *(arg1 + 0x20)
    int32_t r10_1 = 0
    int32_t rax_5 = *rbx_1
    
    if (r9_1 s>= rax_5)
        int64_t rcx = 0
        
        do
            r9_1 -= rax_5
            rcx += 1
            rax_5 = rbx_1[rcx]
            r10_1 += 1
        while (r9_1 s>= rax_5)
    
    var_290 = sx.q(r9_1) + *(*(arg1 + 0x18) + (sx.q(r10_1) << 3))

uint32_t rax_10 = zx.d(rax_2[1])
*(arg1 + 0x10) = &rax_2[2]
int32_t r9_3 = rax_10 & 0x7fff
float (* var_270)[0x4]

if ((not.b((rax_10 u>> 0xf).b) & 1) == 0)
    var_270 = zx.q(*(arg1 + 0x80) * r9_3) + *(arg1 + 0x70)
else
    int32_t* rbx_2 = *(arg1 + 0x20)
    int32_t r10_4 = 0
    int32_t rax_11 = *rbx_2
    
    if (r9_3 s>= rax_11)
        int64_t rcx_4 = 0
        
        do
            r9_3 -= rax_11
            rcx_4 += 1
            rax_11 = rbx_2[rcx_4]
            r10_4 += 1
        while (r9_3 s>= rax_11)
    
    var_270 = sx.q(r9_3) + *(*(arg1 + 0x18) + (sx.q(r10_4) << 3))

uint32_t rax_16 = zx.d(rax_2[2])
*(arg1 + 0x10) = &rax_2[3]
int32_t r9_5 = rax_16 & 0x7fff
int128_t* var_268

if ((not.b((rax_16 u>> 0xf).b) & 1) == 0)
    var_268 = zx.q(*(arg1 + 0x80) * r9_5) + *(arg1 + 0x70)
else
    int32_t* rbx_3 = *(arg1 + 0x20)
    int32_t r10_7 = 0
    int32_t rax_17 = *rbx_3
    
    if (r9_5 s>= rax_17)
        int64_t rcx_8 = 0
        
        do
            r9_5 -= rax_17
            rcx_8 += 1
            rax_17 = rbx_3[rcx_8]
            r10_7 += 1
        while (r9_5 s>= rax_17)
    
    var_268 = sx.q(r9_5) + *(*(arg1 + 0x18) + (sx.q(r10_7) << 3))

uint32_t rax_22 = zx.d(rax_2[3])
*(arg1 + 0x10) = &rax_2[4]
int32_t r9_7 = rax_22 & 0x7fff
int128_t* var_260

if ((not.b((rax_22 u>> 0xf).b) & 1) == 0)
    var_260 = zx.q(*(arg1 + 0x80) * r9_7) + *(arg1 + 0x70)
else
    int32_t* rbx_4 = *(arg1 + 0x20)
    int32_t r10_10 = 0
    int32_t rax_23 = *rbx_4
    
    if (r9_7 s>= rax_23)
        int64_t rcx_12 = 0
        
        do
            r9_7 -= rax_23
            rcx_12 += 1
            rax_23 = rbx_4[rcx_12]
            r10_10 += 1
        while (r9_7 s>= rax_23)
    
    var_260 = sx.q(r9_7) + *(*(arg1 + 0x18) + (sx.q(r10_10) << 3))

uint32_t rax_28 = zx.d(rax_2[4])
*(arg1 + 0x10) = &rax_2[5]
int32_t r9_9 = rax_28 & 0x7fff
int64_t var_288

if ((not.b((rax_28 u>> 0xf).b) & 1) == 0)
    var_288 = zx.q(*(arg1 + 0x80) * r9_9) + *(arg1 + 0x70)
else
    int32_t* rbx_5 = *(arg1 + 0x20)
    int32_t r10_13 = 0
    int32_t rax_29 = *rbx_5
    
    if (r9_9 s>= rax_29)
        int64_t rcx_16 = 0
        
        do
            r9_9 -= rax_29
            rcx_16 += 1
            rax_29 = rbx_5[rcx_16]
            r10_13 += 1
        while (r9_9 s>= rax_29)
    
    var_288 = sx.q(r9_9) + *(*(arg1 + 0x18) + (sx.q(r10_13) << 3))

uint32_t rax_34 = zx.d(rax_2[5])
*(arg1 + 0x10) = &rax_2[6]
int32_t r9_11 = rax_34 & 0x7fff
float (* var_258)[0x4]

if ((not.b((rax_34 u>> 0xf).b) & 1) == 0)
    var_258 = zx.q(*(arg1 + 0x80) * r9_11) + *(arg1 + 0x70)
else
    int32_t* rbx_6 = *(arg1 + 0x20)
    int32_t r10_16 = 0
    int32_t rax_35 = *rbx_6
    
    if (r9_11 s>= rax_35)
        int64_t rcx_20 = 0
        
        do
            r9_11 -= rax_35
            rcx_20 += 1
            rax_35 = rbx_6[rcx_20]
            r10_16 += 1
        while (r9_11 s>= rax_35)
    
    var_258 = sx.q(r9_11) + *(*(arg1 + 0x18) + (sx.q(r10_16) << 3))

uint32_t rax_40 = zx.d(rax_2[6])
*(arg1 + 0x10) = &rax_2[7]
int32_t r9_13 = rax_40 & 0x7fff
int64_t var_280

if ((not.b((rax_40 u>> 0xf).b) & 1) == 0)
    var_280 = zx.q(*(arg1 + 0x80) * r9_13) + *(arg1 + 0x70)
else
    int32_t* rbx_7 = *(arg1 + 0x20)
    int32_t r10_19 = 0
    int32_t rax_41 = *rbx_7
    
    if (r9_13 s>= rax_41)
        int64_t rcx_24 = 0
        
        do
            r9_13 -= rax_41
            rcx_24 += 1
            rax_41 = rbx_7[rcx_24]
            r10_19 += 1
        while (r9_13 s>= rax_41)
    
    var_280 = sx.q(r9_13) + *(*(arg1 + 0x18) + (sx.q(r10_19) << 3))

uint32_t rax_46 = zx.d(rax_2[7])
*(arg1 + 0x10) = &rax_2[8]
int32_t r9_15 = rax_46 & 0x7fff

if ((not.b((rax_46 u>> 0xf).b) & 1) == 0)
    i_1 = zx.q(*(arg1 + 0x80) * r9_15) + *(arg1 + 0x70)
else
    int32_t* rbx_8 = *(arg1 + 0x20)
    int32_t r10_22 = 0
    int32_t rax_47 = *rbx_8
    
    if (r9_15 s>= rax_47)
        int64_t rcx_28 = 0
        
        do
            r9_15 -= rax_47
            rcx_28 += 1
            rax_47 = rbx_8[rcx_28]
            r10_22 += 1
        while (r9_15 s>= rax_47)
    
    i_1 = sx.q(r9_15) + *(*(arg1 + 0x18) + (sx.q(r10_22) << 3))

uint32_t rax_49 = zx.d(rax_2[8])
*(arg1 + 0x10) = &rax_2[9]
int32_t r9_17 = rax_49 & 0x7fff
int64_t var_278

if ((not.b((rax_49 u>> 0xf).b) & 1) == 0)
    var_278 = zx.q(*(arg1 + 0x80) * r9_17) + *(arg1 + 0x70)
else
    int32_t* rbx_9 = *(arg1 + 0x20)
    int32_t r10_25 = 0
    int32_t rax_50 = *rbx_9
    
    if (r9_17 s>= rax_50)
        int64_t rcx_35 = 0
        
        do
            r9_17 -= rax_50
            rcx_35 += 1
            rax_50 = rbx_9[rcx_35]
            r10_25 += 1
        while (r9_17 s>= rax_50)
    
    var_278 = sx.q(r9_17) + *(*(arg1 + 0x18) + (sx.q(r10_25) << 3))

uint32_t rax_52 = zx.d(rax_2[9])
*(arg1 + 0x10) = &rax_2[0xa]
int32_t r9_19 = rax_52 & 0x7fff
float (* r10_30)[0x4]

if ((not.b((rax_52 u>> 0xf).b) & 1) == 0)
    r10_30 = zx.q(*(arg1 + 0x80) * r9_19) + *(arg1 + 0x70)
else
    int32_t* rbx_10 = *(arg1 + 0x20)
    int32_t r10_28 = 0
    int32_t rax_53 = *rbx_10
    
    if (r9_19 s>= rax_53)
        int64_t rcx_42 = 0
        
        do
            r9_19 -= rax_53
            rcx_42 += 1
            rax_53 = rbx_10[rcx_42]
            r10_28 += 1
        while (r9_19 s>= rax_53)
    
    r10_30 = sx.q(r9_19) + *(*(arg1 + 0x18) + (sx.q(r10_28) << 3))

uint32_t rax_55 = zx.d(rax_2[0xa])
*(arg1 + 0x10) = &rax_2[0xb]
int32_t r9_21 = rax_55 & 0x7fff
int64_t var_250

if ((not.b((rax_55 u>> 0xf).b) & 1) == 0)
    var_250 = zx.q(*(arg1 + 0x80) * r9_21) + *(arg1 + 0x70)
else
    int32_t* rdi_1 = *(arg1 + 0x20)
    int32_t r11_10 = 0
    int32_t rax_56 = *rdi_1
    
    if (r9_21 s>= rax_56)
        int64_t rcx_46 = 0
        
        do
            r9_21 -= rax_56
            rcx_46 += 1
            rax_56 = rdi_1[rcx_46]
            r11_10 += 1
        while (r9_21 s>= rax_56)
    
    var_250 = sx.q(r9_21) + *(*(arg1 + 0x18) + (sx.q(r11_10) << 3))

uint32_t rax_58 = zx.d(rax_2[0xb])
*(arg1 + 0x10) = &rax_2[0xc]
int32_t r9_23 = rax_58 & 0x7fff
int64_t var_248

if ((not.b((rax_58 u>> 0xf).b) & 1) == 0)
    var_248 = zx.q(*(arg1 + 0x80) * r9_23) + *(arg1 + 0x70)
else
    int32_t* rdi_2 = *(arg1 + 0x20)
    int32_t r11_13 = 0
    int32_t rax_59 = *rdi_2
    
    if (r9_23 s>= rax_59)
        int64_t rcx_53 = 0
        
        do
            r9_23 -= rax_59
            rcx_53 += 1
            rax_59 = rdi_2[rcx_53]
            r11_13 += 1
        while (r9_23 s>= rax_59)
    
    var_248 = sx.q(r9_23) + *(*(arg1 + 0x18) + (sx.q(r11_13) << 3))

int32_t rcx_59 = zx.d(rax_2[0xc]) & 0x7fff
int32_t var_238 = rcx_59
*(arg1 + 0x10) = &rax_2[0xd]
int32_t rax_61
rax_61.b = rcx_59 != 0x7fff
int32_t var_234 = rax_61
void* r13_2
void var_228

if (rcx_59 == 0x7fff)
    r13_2 = &var_228
else
    r13_2 = zx.q(*(arg1 + 0x80) * rcx_59) + *(arg1 + 0x70)
void* var_218 = r13_2
int32_t rcx_61 = zx.d(rax_2[0xd]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xe]
int32_t var_208 = rcx_61
int32_t rax_62
rax_62.b = rcx_61 != 0x7fff
int32_t var_204 = rax_62
void* r12_2
void var_1f8

if (rcx_61 == 0x7fff)
    r12_2 = &var_1f8
else
    r12_2 = zx.q(*(arg1 + 0x80) * rcx_61) + *(arg1 + 0x70)
void* var_1e8 = r12_2
int32_t rcx_63 = zx.d(rax_2[0xe]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xf]
int32_t var_1d8 = rcx_63
int32_t rax_63
rax_63.b = rcx_63 != 0x7fff
int32_t var_1d4 = rax_63
void* r15_2
void var_1c8

if (rcx_63 == 0x7fff)
    r15_2 = &var_1c8
else
    r15_2 = zx.q(*(arg1 + 0x80) * rcx_63) + *(arg1 + 0x70)
void* var_1b8 = r15_2
int32_t rcx_65 = zx.d(rax_2[0xf]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x10]
int32_t var_1a8 = rcx_65
int32_t rax_64
rax_64.b = rcx_65 != 0x7fff
int32_t var_1a4 = rax_64
void* r14_2
void var_198

if (rcx_65 == 0x7fff)
    r14_2 = &var_198
else
    r14_2 = zx.q(*(arg1 + 0x80) * rcx_65) + *(arg1 + 0x70)
void* var_188 = r14_2
int32_t rcx_67 = zx.d(rax_2[0x10]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x11]
int32_t var_178 = rcx_67
int32_t rax_65
rax_65.b = rcx_67 != 0x7fff
int32_t var_174 = rax_65
void* rsi_2
void var_168

if (rcx_67 == 0x7fff)
    rsi_2 = &var_168
else
    rsi_2 = zx.q(*(arg1 + 0x80) * rcx_67) + *(arg1 + 0x70)
void* var_158 = rsi_2
int32_t rcx_69 = zx.d(rax_2[0x11]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x12]
int32_t var_148 = rcx_69
int32_t rax_66
rax_66.b = rcx_69 != 0x7fff
int32_t var_144 = rax_66
void* rdi_5
void var_138

if (rcx_69 == 0x7fff)
    rdi_5 = &var_138
else
    rdi_5 = zx.q(*(arg1 + 0x80) * rcx_69) + *(arg1 + 0x70)
void* var_128 = rdi_5
int32_t rcx_71 = zx.d(rax_2[0x12]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x13]
int32_t var_118 = rcx_71
int32_t rax_67
rax_67.b = rcx_71 != 0x7fff
int32_t var_114 = rax_67
void* rbx_21
void var_108

if (rcx_71 == 0x7fff)
    rbx_21 = &var_108
else
    rbx_21 = zx.q(*(arg1 + 0x80) * rcx_71) + *(arg1 + 0x70)
void* var_f8 = rbx_21
int32_t rcx_73 = zx.d(rax_2[0x13]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x14]
int32_t var_e8 = rcx_73
int32_t rax_68
rax_68.b = rcx_73 != 0x7fff
int32_t var_e4 = rax_68
void* r11_16
void var_d8

if (rcx_73 == 0x7fff)
    r11_16 = &var_d8
else
    r11_16 = zx.q(*(arg1 + 0x80) * rcx_73) + *(arg1 + 0x70)
void* var_c8 = r11_16
uint32_t rcx_74 = zx.d(rax_2[0x14])
*(arg1 + 0x10) = &rax_2[0x15]
int32_t r9_29 = rcx_74 & 0x7fff
int32_t var_b8 = r9_29
int32_t rdx_1
rdx_1.b = r9_29 != 0x7fff
int32_t var_b4 = rdx_1
void* rcx_77
void var_a8

if (r9_29 == 0x7fff)
    rcx_77 = &var_a8
else
    rcx_77 = zx.q(*(arg1 + 0x80) * r9_29) + *(arg1 + 0x70)
void* var_98 = rcx_77
float zmm5[0x4] = *var_290
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float zmm1[0x4] = *var_270
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float zmm2[0x4] = *var_268
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float zmm3[0x4] = *var_260
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float zmm0[0x4] = *var_258
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
var_290.d = result.d

if (result.d s> 0)
    float (* rbx_22)[0x4] = rbx_21 - r10_30
    float (* r11_17)[0x4] = r11_16 - r10_30
    float (* rdx_3)[0x4] = var_250 - r10_30
    float (* var_288_1)[0x4] = var_288 - r10_30
    result = var_248 - r10_30
    float (* var_280_1)[0x4] = var_280 - r10_30
    float (* rcx_78)[0x4] = rcx_77 - r10_30
    float (* var_278_1)[0x4] = var_278 - r10_30
    int64_t r13_3 = r13_2 - r10_30
    float (* r12_3)[0x4] = r12_2 - r10_30
    float (* r9_31)[0x4] = i_1 - r10_30
    float (* r15_3)[0x4] = r15_2 - r10_30
    float (* r14_3)[0x4] = r14_2 - r10_30
    float (* rsi_3)[0x4] = rsi_2 - r10_30
    float temp0_6[0x4] = _mm_rcp_ps(__maxps_xmmps_memps(temp0_4, data_142d3f5e0))
    float (* rdi_6)[0x4] = rdi_5 - r10_30
    i_1 = zx.q(var_290.d)
    float zmm10[0x4] = data_143ce3940
    float temp0_7[0x4] = _mm_mul_ps(temp0_6, temp0)
    float temp0_8[0x4] = _mm_mul_ps(temp0_7, temp0_1)
    float temp0_9[0x4] = _mm_mul_ps(temp0_7, temp0_2)
    float temp0_10[0x4] = _mm_mul_ps(temp0_7, temp0_3)
    uint64_t i
    
    do
        float zmm4[0x4] = *r10_30
        zmm3 = *(rdx_3 + r10_30)
        zmm2 = *(result + r10_30)
        float temp0_11[0x4] = _mm_mul_ps(*(var_288_1 + r10_30), temp0)
        *(rbx_22 + r10_30) = zmm4
        *(r11_17 + r10_30) = zmm3
        float temp0_12[0x4] = _mm_min_ps(temp0_11, zmm10)
        *(rcx_78 + r10_30) = zmm2
        float temp0_13[0x4] = _mm_max_ps(temp0_12, zx.o(0))
        float temp0_14[0x4] = _mm_add_ps(zmm4, temp0_8)
        float temp0_15[0x4] = _mm_sub_ps(zx.o(0), temp0_13)
        float temp0_16[0x4] = _mm_add_ps(zmm3, temp0_9)
        float temp0_17[0x4] = _mm_add_ps(zmm2, temp0_10)
        float temp0_19[0x4] = _mm_add_ps(temp0_14, _mm_mul_ps(temp0_15, temp0_14))
        float temp0_20[0x4] = _mm_mul_ps(temp0_15, temp0_16)
        float temp0_21[0x4] = _mm_mul_ps(temp0_15, temp0_17)
        *(r14_3 + r10_30) = temp0_19
        float temp0_22[0x4] = _mm_add_ps(temp0_16, temp0_20)
        float temp0_23[0x4] = _mm_add_ps(temp0_17, temp0_21)
        float temp0_24[0x4] = _mm_mul_ps(temp0_19, temp0)
        zmm1 = *(var_280_1 + r10_30)
        *(rsi_3 + r10_30) = temp0_22
        float temp0_25[0x4] = _mm_add_ps(zmm1, temp0_24)
        float temp0_26[0x4] = _mm_mul_ps(temp0_22, temp0)
        *(rdi_6 + r10_30) = temp0_23
        *(r10_30 + r13_3) = temp0_25
        float temp0_27[0x4] = _mm_add_ps(*(r9_31 + r10_30), temp0_26)
        float temp0_28[0x4] = _mm_mul_ps(temp0_23, temp0)
        *(r12_3 + r10_30) = temp0_27
        *(r15_3 + r10_30) = _mm_add_ps(*(var_278_1 + r10_30), temp0_28)
        r10_30 = &r10_30[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &i_1)
return result
