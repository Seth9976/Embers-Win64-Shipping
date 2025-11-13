// 函数: sub_1408150f0
// 地址: 0x1408150f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1
int64_t rax_1 = __security_cookie ^ &i_1
int16_t* rax_2 = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax_2)
*(arg1 + 0x10) = &rax_2[1]
int32_t r9_1 = rdx & 0x7fff
int128_t* var_2b0

if ((not.b((rdx u>> 0xf).b) & 1) == 0)
    var_2b0 = zx.q(*(arg1 + 0x80) * r9_1) + *(arg1 + 0x70)
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
    
    var_2b0 = sx.q(r9_1) + *(*(arg1 + 0x18) + (sx.q(r10_1) << 3))

uint32_t rax_10 = zx.d(rax_2[1])
*(arg1 + 0x10) = &rax_2[2]
int32_t r9_3 = rax_10 & 0x7fff
int128_t* var_288

if ((not.b((rax_10 u>> 0xf).b) & 1) == 0)
    var_288 = zx.q(*(arg1 + 0x80) * r9_3) + *(arg1 + 0x70)
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
    
    var_288 = sx.q(r9_3) + *(*(arg1 + 0x18) + (sx.q(r10_4) << 3))

uint32_t rax_16 = zx.d(rax_2[2])
*(arg1 + 0x10) = &rax_2[3]
int32_t r9_5 = rax_16 & 0x7fff
int128_t* var_280

if ((not.b((rax_16 u>> 0xf).b) & 1) == 0)
    var_280 = zx.q(*(arg1 + 0x80) * r9_5) + *(arg1 + 0x70)
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
    
    var_280 = sx.q(r9_5) + *(*(arg1 + 0x18) + (sx.q(r10_7) << 3))

uint32_t rax_22 = zx.d(rax_2[3])
*(arg1 + 0x10) = &rax_2[4]
int32_t r9_7 = rax_22 & 0x7fff
int128_t* var_278

if ((not.b((rax_22 u>> 0xf).b) & 1) == 0)
    var_278 = zx.q(*(arg1 + 0x80) * r9_7) + *(arg1 + 0x70)
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
    
    var_278 = sx.q(r9_7) + *(*(arg1 + 0x18) + (sx.q(r10_10) << 3))

uint32_t rax_28 = zx.d(rax_2[4])
*(arg1 + 0x10) = &rax_2[5]
int32_t r9_9 = rax_28 & 0x7fff
int64_t var_2a8

if ((not.b((rax_28 u>> 0xf).b) & 1) == 0)
    var_2a8 = zx.q(*(arg1 + 0x80) * r9_9) + *(arg1 + 0x70)
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
    
    var_2a8 = sx.q(r9_9) + *(*(arg1 + 0x18) + (sx.q(r10_13) << 3))

uint32_t rax_34 = zx.d(rax_2[5])
*(arg1 + 0x10) = &rax_2[6]
int32_t r9_11 = rax_34 & 0x7fff
float (* r10_18)[0x4]

if ((not.b((rax_34 u>> 0xf).b) & 1) == 0)
    r10_18 = zx.q(*(arg1 + 0x80) * r9_11) + *(arg1 + 0x70)
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
    
    r10_18 = sx.q(r9_11) + *(*(arg1 + 0x18) + (sx.q(r10_16) << 3))

uint32_t rax_37 = zx.d(rax_2[6])
*(arg1 + 0x10) = &rax_2[7]
int32_t r9_13 = rax_37 & 0x7fff
int64_t var_2a0

if ((not.b((rax_37 u>> 0xf).b) & 1) == 0)
    var_2a0 = zx.q(*(arg1 + 0x80) * r9_13) + *(arg1 + 0x70)
else
    int32_t* rdi_1 = *(arg1 + 0x20)
    int32_t r11_6 = 0
    int32_t rax_38 = *rdi_1
    
    if (r9_13 s>= rax_38)
        int64_t rcx_24 = 0
        
        do
            r9_13 -= rax_38
            rcx_24 += 1
            rax_38 = rdi_1[rcx_24]
            r11_6 += 1
        while (r9_13 s>= rax_38)
    
    var_2a0 = sx.q(r9_13) + *(*(arg1 + 0x18) + (sx.q(r11_6) << 3))

uint32_t rax_43 = zx.d(rax_2[7])
*(arg1 + 0x10) = &rax_2[8]
int32_t r9_15 = rax_43 & 0x7fff
int64_t var_298

if ((not.b((rax_43 u>> 0xf).b) & 1) == 0)
    var_298 = zx.q(*(arg1 + 0x80) * r9_15) + *(arg1 + 0x70)
else
    int32_t* rdi_2 = *(arg1 + 0x20)
    int32_t r11_9 = 0
    int32_t rax_44 = *rdi_2
    
    if (r9_15 s>= rax_44)
        int64_t rcx_28 = 0
        
        do
            r9_15 -= rax_44
            rcx_28 += 1
            rax_44 = rdi_2[rcx_28]
            r11_9 += 1
        while (r9_15 s>= rax_44)
    
    var_298 = sx.q(r9_15) + *(*(arg1 + 0x18) + (sx.q(r11_9) << 3))

uint32_t rax_49 = zx.d(rax_2[8])
*(arg1 + 0x10) = &rax_2[9]
int32_t r9_17 = rax_49 & 0x7fff
int64_t var_290

if ((not.b((rax_49 u>> 0xf).b) & 1) == 0)
    var_290 = zx.q(*(arg1 + 0x80) * r9_17) + *(arg1 + 0x70)
else
    int32_t* rdi_3 = *(arg1 + 0x20)
    int32_t r11_12 = 0
    int32_t rax_50 = *rdi_3
    
    if (r9_17 s>= rax_50)
        int64_t rcx_32 = 0
        
        do
            r9_17 -= rax_50
            rcx_32 += 1
            rax_50 = rdi_3[rcx_32]
            r11_12 += 1
        while (r9_17 s>= rax_50)
    
    var_290 = sx.q(r9_17) + *(*(arg1 + 0x18) + (sx.q(r11_12) << 3))

uint32_t rax_52 = zx.d(rax_2[9])
*(arg1 + 0x10) = &rax_2[0xa]
int32_t r9_19 = rax_52 & 0x7fff
int64_t var_270

if ((not.b((rax_52 u>> 0xf).b) & 1) == 0)
    var_270 = zx.q(*(arg1 + 0x80) * r9_19) + *(arg1 + 0x70)
else
    int32_t* rdi_4 = *(arg1 + 0x20)
    int32_t r11_15 = 0
    int32_t rax_53 = *rdi_4
    
    if (r9_19 s>= rax_53)
        int64_t rcx_39 = 0
        
        do
            r9_19 -= rax_53
            rcx_39 += 1
            rax_53 = rdi_4[rcx_39]
            r11_15 += 1
        while (r9_19 s>= rax_53)
    
    var_270 = sx.q(r9_19) + *(*(arg1 + 0x18) + (sx.q(r11_15) << 3))

uint32_t rax_55 = zx.d(rax_2[0xa])
*(arg1 + 0x10) = &rax_2[0xb]
int32_t r9_21 = rax_55 & 0x7fff

if ((not.b((rax_55 u>> 0xf).b) & 1) == 0)
    i_1 = zx.q(*(arg1 + 0x80) * r9_21) + *(arg1 + 0x70)
else
    int32_t* rdi_5 = *(arg1 + 0x20)
    int32_t r11_18 = 0
    int32_t rax_56 = *rdi_5
    
    if (r9_21 s>= rax_56)
        int64_t rcx_46 = 0
        
        do
            r9_21 -= rax_56
            rcx_46 += 1
            rax_56 = rdi_5[rcx_46]
            r11_18 += 1
        while (r9_21 s>= rax_56)
    
    i_1 = sx.q(r9_21) + *(*(arg1 + 0x18) + (sx.q(r11_18) << 3))

uint32_t rax_58 = zx.d(rax_2[0xb])
*(arg1 + 0x10) = &rax_2[0xc]
int32_t r9_23 = rax_58 & 0x7fff
int64_t r13_1

if ((not.b((rax_58 u>> 0xf).b) & 1) == 0)
    r13_1 = zx.q(*(arg1 + 0x80) * r9_23) + *(arg1 + 0x70)
else
    int32_t* rdi_6 = *(arg1 + 0x20)
    int32_t r11_21 = 0
    int32_t rax_59 = *rdi_6
    
    if (r9_23 s>= rax_59)
        int64_t rcx_53 = 0
        
        do
            r9_23 -= rax_59
            rcx_53 += 1
            rax_59 = rdi_6[rcx_53]
            r11_21 += 1
        while (r9_23 s>= rax_59)
    
    r13_1 = sx.q(r9_23) + *(*(arg1 + 0x18) + (sx.q(r11_21) << 3))

int32_t rcx_56 = zx.d(rax_2[0xc]) & 0x7fff
int32_t var_258 = rcx_56
*(arg1 + 0x10) = &rax_2[0xd]
int32_t rax_61
rax_61.b = rcx_56 != 0x7fff
int32_t var_254 = rax_61
void* r12_2
void var_248

if (rcx_56 == 0x7fff)
    r12_2 = &var_248
else
    r12_2 = zx.q(*(arg1 + 0x80) * rcx_56) + *(arg1 + 0x70)
void* var_238 = r12_2
int32_t rcx_58 = zx.d(rax_2[0xd]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xe]
int32_t var_228 = rcx_58
int32_t rax_62
rax_62.b = rcx_58 != 0x7fff
int32_t var_224 = rax_62
void* r15_2
void var_218

if (rcx_58 == 0x7fff)
    r15_2 = &var_218
else
    r15_2 = zx.q(*(arg1 + 0x80) * rcx_58) + *(arg1 + 0x70)
void* var_208 = r15_2
int32_t rcx_60 = zx.d(rax_2[0xe]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xf]
int32_t var_1f8 = rcx_60
int32_t rax_63
rax_63.b = rcx_60 != 0x7fff
int32_t var_1f4 = rax_63
void* r14_2
void var_1e8

if (rcx_60 == 0x7fff)
    r14_2 = &var_1e8
else
    r14_2 = zx.q(*(arg1 + 0x80) * rcx_60) + *(arg1 + 0x70)
void* var_1d8 = r14_2
int32_t rcx_62 = zx.d(rax_2[0xf]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x10]
int32_t var_1c8 = rcx_62
int32_t rax_64
rax_64.b = rcx_62 != 0x7fff
int32_t var_1c4 = rax_64
void* rsi_2
void var_1b8

if (rcx_62 == 0x7fff)
    rsi_2 = &var_1b8
else
    rsi_2 = zx.q(*(arg1 + 0x80) * rcx_62) + *(arg1 + 0x70)
void* var_1a8 = rsi_2
int32_t rcx_64 = zx.d(rax_2[0x10]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x11]
int32_t var_198 = rcx_64
int32_t rax_65
rax_65.b = rcx_64 != 0x7fff
int32_t var_194 = rax_65
void* rdi_9
void var_188

if (rcx_64 == 0x7fff)
    rdi_9 = &var_188
else
    rdi_9 = zx.q(*(arg1 + 0x80) * rcx_64) + *(arg1 + 0x70)
void* var_178 = rdi_9
int32_t rcx_66 = zx.d(rax_2[0x11]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x12]
int32_t var_168 = rcx_66
int32_t rax_66
rax_66.b = rcx_66 != 0x7fff
int32_t var_164 = rax_66
void* rbx_20
void var_158

if (rcx_66 == 0x7fff)
    rbx_20 = &var_158
else
    rbx_20 = zx.q(*(arg1 + 0x80) * rcx_66) + *(arg1 + 0x70)
void* var_148 = rbx_20
int32_t rcx_68 = zx.d(rax_2[0x12]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x13]
int32_t var_138 = rcx_68
int32_t rax_67
rax_67.b = rcx_68 != 0x7fff
int32_t var_134 = rax_67
void* r11_24
void var_128

if (rcx_68 == 0x7fff)
    r11_24 = &var_128
else
    r11_24 = zx.q(*(arg1 + 0x80) * rcx_68) + *(arg1 + 0x70)
void* var_118 = r11_24
uint32_t rax_68 = zx.d(rax_2[0x13])
*(arg1 + 0x10) = &rax_2[0x14]
int32_t rcx_71 = rax_68 & 0x7fff
int32_t var_108 = rcx_71
int32_t rax_69
rax_69.b = rcx_71 != 0x7fff
int32_t var_104 = rax_69
void* r9_28
void var_f8

if (rcx_71 == 0x7fff)
    r9_28 = &var_f8
else
    r9_28 = zx.q(*(arg1 + 0x80) * rcx_71) + *(arg1 + 0x70)
void* var_e8 = r9_28
int32_t rcx_73 = zx.d(rax_2[0x14]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x15]
int32_t var_d8 = rcx_73
int32_t rdx_1
rdx_1.b = rcx_73 != 0x7fff
int32_t var_d4 = rdx_1
void* rcx_75
void var_c8

if (rcx_73 == 0x7fff)
    rcx_75 = &var_c8
else
    rcx_75 = zx.q(rcx_73 * *(arg1 + 0x80)) + *(arg1 + 0x70)
float zmm10[0x4] = data_142d3f5e0
void* var_b8 = rcx_75
float zmm6[0x4] = *var_2b0
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float zmm7[0x4] = *var_288
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float zmm8[0x4] = *var_280
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
float zmm9[0x4] = *var_278
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
var_2b0.d = result.d

if (result.d s> 0)
    void* r13_4 = r13_1 - r10_18
    result = i_1 - r10_18
    int128_t* var_2a8_1 = var_2a8 - r10_18
    int128_t* rdx_3 = var_270 - r10_18
    float (* var_2a0_1)[0x4] = var_2a0 - r10_18
    int128_t* r11_25 = r11_24 - r10_18
    float (* var_298_1)[0x4] = var_298 - r10_18
    int128_t* r9_29 = r9_28 - r10_18
    float (* var_290_1)[0x4] = var_290 - r10_18
    int128_t* rcx_76 = rcx_75 - r10_18
    float (* r12_3)[0x4] = r12_2 - r10_18
    float (* r15_3)[0x4] = r15_2 - r10_18
    float (* r14_3)[0x4] = r14_2 - r10_18
    float zmm12[0x4] = data_143ce3940
    float (* rsi_3)[0x4] = rsi_2 - r10_18
    float (* rdi_10)[0x4] = rdi_9 - r10_18
    i_1 = zx.q(var_2b0.d)
    float (* rbx_21)[0x4] = rbx_20 - r10_18
    uint64_t i
    
    do
        float zmm5[0x4] = *(rdx_3 + r10_18)
        float zmm3[0x4] = *(r10_18 + r13_4)
        float zmm2[0x4] = *(var_2a8_1 + r10_18)
        float zmm4[0x4] = *(result + r10_18)
        float temp0_4[0x4] = _mm_max_ps(*r10_18, zmm10)
        *(r11_25 + r10_18) = zmm5
        float temp0_5[0x4] = _mm_rcp_ps(temp0_4)
        *(rcx_76 + r10_18) = zmm3
        float temp0_6[0x4] = _mm_mul_ps(temp0_5, temp0)
        *(r9_29 + r10_18) = zmm4
        float temp0_7[0x4] = _mm_mul_ps(zmm2, temp0)
        float temp0_8[0x4] = _mm_mul_ps(temp0_6, temp0_1)
        float temp0_9[0x4] = _mm_min_ps(temp0_7, zmm12)
        float temp0_10[0x4] = _mm_add_ps(zmm5, temp0_8)
        float temp0_11[0x4] = _mm_mul_ps(temp0_6, temp0_2)
        float temp0_12[0x4] = _mm_mul_ps(temp0_6, temp0_3)
        float temp0_13[0x4] = _mm_max_ps(temp0_9, zx.o(0))
        float temp0_14[0x4] = _mm_add_ps(zmm4, temp0_11)
        float temp0_15[0x4] = _mm_add_ps(zmm3, temp0_12)
        float temp0_16[0x4] = _mm_sub_ps(zx.o(0), temp0_13)
        float temp0_18[0x4] = _mm_add_ps(temp0_10, _mm_mul_ps(temp0_16, temp0_10))
        float temp0_19[0x4] = _mm_mul_ps(temp0_16, temp0_14)
        float temp0_20[0x4] = _mm_mul_ps(temp0_16, temp0_15)
        *(rsi_3 + r10_18) = temp0_18
        float temp0_21[0x4] = _mm_add_ps(temp0_14, temp0_19)
        float temp0_22[0x4] = _mm_add_ps(temp0_15, temp0_20)
        float temp0_23[0x4] = _mm_mul_ps(temp0_18, temp0)
        float zmm1[0x4] = *(var_2a0_1 + r10_18)
        *(rdi_10 + r10_18) = temp0_21
        float temp0_24[0x4] = _mm_add_ps(zmm1, temp0_23)
        float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0)
        *(rbx_21 + r10_18) = temp0_22
        *(r12_3 + r10_18) = temp0_24
        float temp0_26[0x4] = _mm_add_ps(*(var_298_1 + r10_18), temp0_25)
        float temp0_27[0x4] = _mm_mul_ps(temp0_22, temp0)
        *(r15_3 + r10_18) = temp0_26
        *(r14_3 + r10_18) = _mm_add_ps(*(var_290_1 + r10_18), temp0_27)
        r10_18 = &r10_18[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &i_1)
return result
