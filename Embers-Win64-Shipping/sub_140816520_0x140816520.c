// 函数: sub_140816520
// 地址: 0x140816520
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
int64_t var_288

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
int128_t* r10_9

if ((not.b((rax_16 u>> 0xf).b) & 1) == 0)
    r10_9 = zx.q(*(arg1 + 0x80) * r9_5) + *(arg1 + 0x70)
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
    
    r10_9 = sx.q(r9_5) + *(*(arg1 + 0x18) + (sx.q(r10_7) << 3))

uint32_t rax_19 = zx.d(rax_2[3])
*(arg1 + 0x10) = &rax_2[4]
int32_t r9_7 = rax_19 & 0x7fff
int64_t var_280

if ((not.b((rax_19 u>> 0xf).b) & 1) == 0)
    var_280 = zx.q(*(arg1 + 0x80) * r9_7) + *(arg1 + 0x70)
else
    int32_t* rdi_1 = *(arg1 + 0x20)
    int32_t r11_3 = 0
    int32_t rax_20 = *rdi_1
    
    if (r9_7 s>= rax_20)
        int64_t rcx_12 = 0
        
        do
            r9_7 -= rax_20
            rcx_12 += 1
            rax_20 = rdi_1[rcx_12]
            r11_3 += 1
        while (r9_7 s>= rax_20)
    
    var_280 = sx.q(r9_7) + *(*(arg1 + 0x18) + (sx.q(r11_3) << 3))

uint32_t rax_25 = zx.d(rax_2[4])
*(arg1 + 0x10) = &rax_2[5]
int32_t r9_9 = rax_25 & 0x7fff
float (* var_258)[0x4]

if ((not.b((rax_25 u>> 0xf).b) & 1) == 0)
    var_258 = zx.q(*(arg1 + 0x80) * r9_9) + *(arg1 + 0x70)
else
    int32_t* rdi_2 = *(arg1 + 0x20)
    int32_t r11_6 = 0
    int32_t rax_26 = *rdi_2
    
    if (r9_9 s>= rax_26)
        int64_t rcx_16 = 0
        
        do
            r9_9 -= rax_26
            rcx_16 += 1
            rax_26 = rdi_2[rcx_16]
            r11_6 += 1
        while (r9_9 s>= rax_26)
    
    var_258 = sx.q(r9_9) + *(*(arg1 + 0x18) + (sx.q(r11_6) << 3))

uint32_t rax_31 = zx.d(rax_2[5])
*(arg1 + 0x10) = &rax_2[6]
int32_t r9_11 = rax_31 & 0x7fff
int64_t var_278

if ((not.b((rax_31 u>> 0xf).b) & 1) == 0)
    var_278 = zx.q(*(arg1 + 0x80) * r9_11) + *(arg1 + 0x70)
else
    int32_t* rdi_3 = *(arg1 + 0x20)
    int32_t r11_9 = 0
    int32_t rax_32 = *rdi_3
    
    if (r9_11 s>= rax_32)
        int64_t rcx_20 = 0
        
        do
            r9_11 -= rax_32
            rcx_20 += 1
            rax_32 = rdi_3[rcx_20]
            r11_9 += 1
        while (r9_11 s>= rax_32)
    
    var_278 = sx.q(r9_11) + *(*(arg1 + 0x18) + (sx.q(r11_9) << 3))

uint32_t rax_37 = zx.d(rax_2[6])
*(arg1 + 0x10) = &rax_2[7]
int32_t r9_13 = rax_37 & 0x7fff
int64_t var_270

if ((not.b((rax_37 u>> 0xf).b) & 1) == 0)
    var_270 = zx.q(*(arg1 + 0x80) * r9_13) + *(arg1 + 0x70)
else
    int32_t* rdi_4 = *(arg1 + 0x20)
    int32_t r11_12 = 0
    int32_t rax_38 = *rdi_4
    
    if (r9_13 s>= rax_38)
        int64_t rcx_24 = 0
        
        do
            r9_13 -= rax_38
            rcx_24 += 1
            rax_38 = rdi_4[rcx_24]
            r11_12 += 1
        while (r9_13 s>= rax_38)
    
    var_270 = sx.q(r9_13) + *(*(arg1 + 0x18) + (sx.q(r11_12) << 3))

uint32_t rax_43 = zx.d(rax_2[7])
*(arg1 + 0x10) = &rax_2[8]
int32_t r9_15 = rax_43 & 0x7fff
int64_t var_268

if ((not.b((rax_43 u>> 0xf).b) & 1) == 0)
    var_268 = zx.q(*(arg1 + 0x80) * r9_15) + *(arg1 + 0x70)
else
    int32_t* rdi_5 = *(arg1 + 0x20)
    int32_t r11_15 = 0
    int32_t rax_44 = *rdi_5
    
    if (r9_15 s>= rax_44)
        int64_t rcx_28 = 0
        
        do
            r9_15 -= rax_44
            rcx_28 += 1
            rax_44 = rdi_5[rcx_28]
            r11_15 += 1
        while (r9_15 s>= rax_44)
    
    var_268 = sx.q(r9_15) + *(*(arg1 + 0x18) + (sx.q(r11_15) << 3))

uint32_t rax_49 = zx.d(rax_2[8])
*(arg1 + 0x10) = &rax_2[9]
int32_t r9_17 = rax_49 & 0x7fff
int64_t var_260

if ((not.b((rax_49 u>> 0xf).b) & 1) == 0)
    var_260 = zx.q(*(arg1 + 0x80) * r9_17) + *(arg1 + 0x70)
else
    int32_t* rdi_6 = *(arg1 + 0x20)
    int32_t r11_18 = 0
    int32_t rax_50 = *rdi_6
    
    if (r9_17 s>= rax_50)
        int64_t rcx_32 = 0
        
        do
            r9_17 -= rax_50
            rcx_32 += 1
            rax_50 = rdi_6[rcx_32]
            r11_18 += 1
        while (r9_17 s>= rax_50)
    
    var_260 = sx.q(r9_17) + *(*(arg1 + 0x18) + (sx.q(r11_18) << 3))

uint32_t rax_52 = zx.d(rax_2[9])
*(arg1 + 0x10) = &rax_2[0xa]
int32_t r9_19 = rax_52 & 0x7fff
int64_t var_250

if ((not.b((rax_52 u>> 0xf).b) & 1) == 0)
    var_250 = zx.q(*(arg1 + 0x80) * r9_19) + *(arg1 + 0x70)
else
    int32_t* rdi_7 = *(arg1 + 0x20)
    int32_t r11_21 = 0
    int32_t rax_53 = *rdi_7
    
    if (r9_19 s>= rax_53)
        int64_t rcx_39 = 0
        
        do
            r9_19 -= rax_53
            rcx_39 += 1
            rax_53 = rdi_7[rcx_39]
            r11_21 += 1
        while (r9_19 s>= rax_53)
    
    var_250 = sx.q(r9_19) + *(*(arg1 + 0x18) + (sx.q(r11_21) << 3))

uint32_t rax_55 = zx.d(rax_2[0xa])
*(arg1 + 0x10) = &rax_2[0xb]
int32_t r9_21 = rax_55 & 0x7fff

if ((not.b((rax_55 u>> 0xf).b) & 1) == 0)
    i_1 = zx.q(*(arg1 + 0x80) * r9_21) + *(arg1 + 0x70)
else
    int32_t* rdi_8 = *(arg1 + 0x20)
    int32_t r11_24 = 0
    int32_t rax_56 = *rdi_8
    
    if (r9_21 s>= rax_56)
        int64_t rcx_46 = 0
        
        do
            r9_21 -= rax_56
            rcx_46 += 1
            rax_56 = rdi_8[rcx_46]
            r11_24 += 1
        while (r9_21 s>= rax_56)
    
    i_1 = sx.q(r9_21) + *(*(arg1 + 0x18) + (sx.q(r11_24) << 3))

uint32_t rax_58 = zx.d(rax_2[0xb])
*(arg1 + 0x10) = &rax_2[0xc]
int32_t r9_23 = rax_58 & 0x7fff
int64_t r13_1

if ((not.b((rax_58 u>> 0xf).b) & 1) == 0)
    r13_1 = zx.q(*(arg1 + 0x80) * r9_23) + *(arg1 + 0x70)
else
    int32_t* rdi_9 = *(arg1 + 0x20)
    int32_t r11_27 = 0
    int32_t rax_59 = *rdi_9
    
    if (r9_23 s>= rax_59)
        int64_t rcx_53 = 0
        
        do
            r9_23 -= rax_59
            rcx_53 += 1
            rax_59 = rdi_9[rcx_53]
            r11_27 += 1
        while (r9_23 s>= rax_59)
    
    r13_1 = sx.q(r9_23) + *(*(arg1 + 0x18) + (sx.q(r11_27) << 3))

int32_t rcx_56 = zx.d(rax_2[0xc]) & 0x7fff
int32_t var_238 = rcx_56
*(arg1 + 0x10) = &rax_2[0xd]
int32_t rax_61
rax_61.b = rcx_56 != 0x7fff
int32_t var_234 = rax_61
void* r12_2
void var_228

if (rcx_56 == 0x7fff)
    r12_2 = &var_228
else
    r12_2 = zx.q(*(arg1 + 0x80) * rcx_56) + *(arg1 + 0x70)
void* var_218 = r12_2
int32_t rcx_58 = zx.d(rax_2[0xd]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xe]
int32_t var_208 = rcx_58
int32_t rax_62
rax_62.b = rcx_58 != 0x7fff
int32_t var_204 = rax_62
void* r15_2
void var_1f8

if (rcx_58 == 0x7fff)
    r15_2 = &var_1f8
else
    r15_2 = zx.q(*(arg1 + 0x80) * rcx_58) + *(arg1 + 0x70)
void* var_1e8 = r15_2
int32_t rcx_60 = zx.d(rax_2[0xe]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xf]
int32_t var_1d8 = rcx_60
int32_t rax_63
rax_63.b = rcx_60 != 0x7fff
int32_t var_1d4 = rax_63
void* r14_2
void var_1c8

if (rcx_60 == 0x7fff)
    r14_2 = &var_1c8
else
    r14_2 = zx.q(*(arg1 + 0x80) * rcx_60) + *(arg1 + 0x70)
void* var_1b8 = r14_2
int32_t rcx_62 = zx.d(rax_2[0xf]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x10]
int32_t var_1a8 = rcx_62
int32_t rax_64
rax_64.b = rcx_62 != 0x7fff
int32_t var_1a4 = rax_64
void* rsi_2
void var_198

if (rcx_62 == 0x7fff)
    rsi_2 = &var_198
else
    rsi_2 = zx.q(*(arg1 + 0x80) * rcx_62) + *(arg1 + 0x70)
void* var_188 = rsi_2
int32_t rcx_64 = zx.d(rax_2[0x10]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x11]
int32_t var_178 = rcx_64
int32_t rax_65
rax_65.b = rcx_64 != 0x7fff
int32_t var_174 = rax_65
void* rdi_12
void var_168

if (rcx_64 == 0x7fff)
    rdi_12 = &var_168
else
    rdi_12 = zx.q(*(arg1 + 0x80) * rcx_64) + *(arg1 + 0x70)
void* var_158 = rdi_12
int32_t rcx_66 = zx.d(rax_2[0x11]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x12]
int32_t var_148 = rcx_66
int32_t rax_66
rax_66.b = rcx_66 != 0x7fff
int32_t var_144 = rax_66
void* rbx_20
void var_138

if (rcx_66 == 0x7fff)
    rbx_20 = &var_138
else
    rbx_20 = zx.q(*(arg1 + 0x80) * rcx_66) + *(arg1 + 0x70)
void* var_128 = rbx_20
int32_t rcx_68 = zx.d(rax_2[0x12]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x13]
int32_t var_118 = rcx_68
int32_t rax_67
rax_67.b = rcx_68 != 0x7fff
int32_t var_114 = rax_67
void* r11_30
void var_108

if (rcx_68 == 0x7fff)
    r11_30 = &var_108
else
    r11_30 = zx.q(*(arg1 + 0x80) * rcx_68) + *(arg1 + 0x70)
void* var_f8 = r11_30
uint32_t rax_68 = zx.d(rax_2[0x13])
*(arg1 + 0x10) = &rax_2[0x14]
int32_t rcx_71 = rax_68 & 0x7fff
int32_t var_e8 = rcx_71
int32_t rax_69
rax_69.b = rcx_71 != 0x7fff
int32_t var_e4 = rax_69
void* r9_28
void var_d8

if (rcx_71 == 0x7fff)
    r9_28 = &var_d8
else
    r9_28 = zx.q(*(arg1 + 0x80) * rcx_71) + *(arg1 + 0x70)
void* var_c8 = r9_28
int32_t rcx_73 = zx.d(rax_2[0x14]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x15]
int32_t var_b8 = rcx_73
int32_t rdx_1
rdx_1.b = rcx_73 != 0x7fff
int32_t var_b4 = rdx_1
void* rcx_75
void var_a8

if (rcx_73 == 0x7fff)
    rcx_75 = &var_a8
else
    rcx_75 = zx.q(rcx_73 * *(arg1 + 0x80)) + *(arg1 + 0x70)
float zmm10[0x4] = data_142d3f5e0
void* var_98 = rcx_75
float zmm8[0x4] = *var_290
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
float zmm0[0x4] = *var_258
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
var_290.d = result.d

if (result.d s> 0)
    void* r13_4 = r13_1 - r10_9
    result = i_1 - r10_9
    int128_t* var_288_1 = var_288 - r10_9
    int128_t* rdx_3 = var_250 - r10_9
    int128_t* var_280_1 = var_280 - r10_9
    int128_t* r11_31 = r11_30 - r10_9
    float (* var_278_1)[0x4] = var_278 - r10_9
    int128_t* r9_29 = r9_28 - r10_9
    float (* var_270_1)[0x4] = var_270 - r10_9
    int128_t* rcx_76 = rcx_75 - r10_9
    float (* var_268_1)[0x4] = var_268 - r10_9
    float (* r12_3)[0x4] = r12_2 - r10_9
    float (* var_260_1)[0x4] = var_260 - r10_9
    float (* r15_3)[0x4] = r15_2 - r10_9
    float (* r14_3)[0x4] = r14_2 - r10_9
    float temp0_2[0x4] = _mm_mul_ps(temp0_1, temp0)
    float (* rsi_3)[0x4] = rsi_2 - r10_9
    float (* rdi_13)[0x4] = rdi_12 - r10_9
    i_1 = zx.q(var_290.d)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float (* rbx_21)[0x4] = rbx_20 - r10_9
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float temp0_5[0x4] =
        _mm_sub_ps(zx.o(0), _mm_max_ps(__minps_xmmps_memps(temp0_2, data_143ce3940), zx.o(0)))
    uint64_t i
    
    do
        zmm7 = *(rdx_3 + r10_9)
        zmm6 = *(result + r10_9)
        float zmm2[0x4] = *(var_288_1 + r10_9)
        float zmm5[0x4] = *(r10_9 + r13_4)
        float zmm3[0x4] = *r10_9
        float zmm4[0x4] = *(var_280_1 + r10_9)
        *(r11_31 + r10_9) = zmm7
        *(r9_29 + r10_9) = zmm6
        zmm0 = *(var_278_1 + r10_9)
        *(rcx_76 + r10_9) = zmm5
        float temp0_8[0x4] = _mm_mul_ps(_mm_rcp_ps(_mm_max_ps(zmm0, zmm10)), temp0)
        float temp0_10[0x4] = _mm_add_ps(zmm7, _mm_mul_ps(temp0_8, zmm2))
        float temp0_11[0x4] = _mm_mul_ps(temp0_8, zmm3)
        float temp0_12[0x4] = _mm_mul_ps(temp0_8, zmm4)
        float temp0_13[0x4] = _mm_add_ps(zmm6, temp0_11)
        float temp0_14[0x4] = _mm_mul_ps(temp0_5, temp0_10)
        float temp0_15[0x4] = _mm_add_ps(zmm5, temp0_12)
        float zmm1[0x4] = *(var_270_1 + r10_9)
        float temp0_16[0x4] = _mm_add_ps(temp0_10, temp0_14)
        float temp0_17[0x4] = _mm_mul_ps(temp0_5, temp0_13)
        *(rsi_3 + r10_9) = temp0_16
        float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_17)
        float temp0_19[0x4] = _mm_mul_ps(temp0_5, temp0_15)
        *(rdi_13 + r10_9) = temp0_18
        float temp0_20[0x4] = _mm_add_ps(temp0_15, temp0_19)
        float temp0_21[0x4] = _mm_mul_ps(temp0_16, temp0)
        *(rbx_21 + r10_9) = temp0_20
        float temp0_22[0x4] = _mm_add_ps(zmm1, temp0_21)
        float temp0_23[0x4] = _mm_mul_ps(temp0_18, temp0)
        *(r12_3 + r10_9) = temp0_22
        float temp0_24[0x4] = _mm_add_ps(*(var_268_1 + r10_9), temp0_23)
        float temp0_25[0x4] = _mm_mul_ps(temp0_20, temp0)
        *(r15_3 + r10_9) = temp0_24
        *(r14_3 + r10_9) = _mm_add_ps(*(var_260_1 + r10_9), temp0_25)
        r10_9 = &r10_9[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &i_1)
return result
