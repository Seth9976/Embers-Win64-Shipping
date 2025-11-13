// 函数: sub_140815b10
// 地址: 0x140815b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1
int64_t rax_1 = __security_cookie ^ &i_1
int16_t* rax_2 = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax_2)
*(arg1 + 0x10) = &rax_2[1]
int32_t r9_1 = rdx & 0x7fff
int128_t* var_280

if ((not.b((rdx u>> 0xf).b) & 1) == 0)
    var_280 = zx.q(*(arg1 + 0x80) * r9_1) + *(arg1 + 0x70)
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
    
    var_280 = sx.q(r9_1) + *(*(arg1 + 0x18) + (sx.q(r10_1) << 3))

uint32_t rax_10 = zx.d(rax_2[1])
*(arg1 + 0x10) = &rax_2[2]
int32_t r9_3 = rax_10 & 0x7fff
int64_t var_278

if ((not.b((rax_10 u>> 0xf).b) & 1) == 0)
    var_278 = zx.q(*(arg1 + 0x80) * r9_3) + *(arg1 + 0x70)
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
    
    var_278 = sx.q(r9_3) + *(*(arg1 + 0x18) + (sx.q(r10_4) << 3))

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
int64_t var_270

if ((not.b((rax_19 u>> 0xf).b) & 1) == 0)
    var_270 = zx.q(*(arg1 + 0x80) * r9_7) + *(arg1 + 0x70)
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
    
    var_270 = sx.q(r9_7) + *(*(arg1 + 0x18) + (sx.q(r11_3) << 3))

uint32_t rax_25 = zx.d(rax_2[4])
*(arg1 + 0x10) = &rax_2[5]
int32_t r9_9 = rax_25 & 0x7fff
float (* var_250)[0x4]

if ((not.b((rax_25 u>> 0xf).b) & 1) == 0)
    var_250 = zx.q(*(arg1 + 0x80) * r9_9) + *(arg1 + 0x70)
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
    
    var_250 = sx.q(r9_9) + *(*(arg1 + 0x18) + (sx.q(r11_6) << 3))

uint32_t rax_31 = zx.d(rax_2[5])
*(arg1 + 0x10) = &rax_2[6]
int32_t r9_11 = rax_31 & 0x7fff
float (* var_248)[0x4]

if ((not.b((rax_31 u>> 0xf).b) & 1) == 0)
    var_248 = zx.q(*(arg1 + 0x80) * r9_11) + *(arg1 + 0x70)
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
    
    var_248 = sx.q(r9_11) + *(*(arg1 + 0x18) + (sx.q(r11_9) << 3))

uint32_t rax_37 = zx.d(rax_2[6])
*(arg1 + 0x10) = &rax_2[7]
int32_t r9_13 = rax_37 & 0x7fff
int64_t var_268

if ((not.b((rax_37 u>> 0xf).b) & 1) == 0)
    var_268 = zx.q(*(arg1 + 0x80) * r9_13) + *(arg1 + 0x70)
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
    
    var_268 = sx.q(r9_13) + *(*(arg1 + 0x18) + (sx.q(r11_12) << 3))

uint32_t rax_43 = zx.d(rax_2[7])
*(arg1 + 0x10) = &rax_2[8]
int32_t r9_15 = rax_43 & 0x7fff
int64_t var_260

if ((not.b((rax_43 u>> 0xf).b) & 1) == 0)
    var_260 = zx.q(*(arg1 + 0x80) * r9_15) + *(arg1 + 0x70)
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
    
    var_260 = sx.q(r9_15) + *(*(arg1 + 0x18) + (sx.q(r11_15) << 3))

uint32_t rax_49 = zx.d(rax_2[8])
*(arg1 + 0x10) = &rax_2[9]
int32_t r9_17 = rax_49 & 0x7fff
int64_t var_258

if ((not.b((rax_49 u>> 0xf).b) & 1) == 0)
    var_258 = zx.q(*(arg1 + 0x80) * r9_17) + *(arg1 + 0x70)
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
    
    var_258 = sx.q(r9_17) + *(*(arg1 + 0x18) + (sx.q(r11_18) << 3))

uint32_t rax_52 = zx.d(rax_2[9])
*(arg1 + 0x10) = &rax_2[0xa]
int32_t r9_19 = rax_52 & 0x7fff
int64_t var_240

if ((not.b((rax_52 u>> 0xf).b) & 1) == 0)
    var_240 = zx.q(*(arg1 + 0x80) * r9_19) + *(arg1 + 0x70)
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
    
    var_240 = sx.q(r9_19) + *(*(arg1 + 0x18) + (sx.q(r11_21) << 3))

uint32_t rax_55 = zx.d(rax_2[0xa])
*(arg1 + 0x10) = &rax_2[0xb]
int32_t r9_21 = rax_55 & 0x7fff
int64_t var_238

if ((not.b((rax_55 u>> 0xf).b) & 1) == 0)
    var_238 = zx.q(*(arg1 + 0x80) * r9_21) + *(arg1 + 0x70)
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
    
    var_238 = sx.q(r9_21) + *(*(arg1 + 0x18) + (sx.q(r11_24) << 3))

uint32_t rax_58 = zx.d(rax_2[0xb])
*(arg1 + 0x10) = &rax_2[0xc]
int32_t r9_23 = rax_58 & 0x7fff

if ((not.b((rax_58 u>> 0xf).b) & 1) == 0)
    i_1 = zx.q(*(arg1 + 0x80) * r9_23) + *(arg1 + 0x70)
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
    
    i_1 = sx.q(r9_23) + *(*(arg1 + 0x18) + (sx.q(r11_27) << 3))

int32_t rcx_59 = zx.d(rax_2[0xc]) & 0x7fff
int32_t var_228 = rcx_59
*(arg1 + 0x10) = &rax_2[0xd]
int32_t rax_61
rax_61.b = rcx_59 != 0x7fff
int32_t var_224 = rax_61
void* r13_2
void var_218

if (rcx_59 == 0x7fff)
    r13_2 = &var_218
else
    r13_2 = zx.q(*(arg1 + 0x80) * rcx_59) + *(arg1 + 0x70)
void* var_208 = r13_2
int32_t rcx_61 = zx.d(rax_2[0xd]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xe]
int32_t var_1f8 = rcx_61
int32_t rax_62
rax_62.b = rcx_61 != 0x7fff
int32_t var_1f4 = rax_62
void* r12_2
void var_1e8

if (rcx_61 == 0x7fff)
    r12_2 = &var_1e8
else
    r12_2 = zx.q(*(arg1 + 0x80) * rcx_61) + *(arg1 + 0x70)
void* var_1d8 = r12_2
int32_t rcx_63 = zx.d(rax_2[0xe]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0xf]
int32_t var_1c8 = rcx_63
int32_t rax_63
rax_63.b = rcx_63 != 0x7fff
int32_t var_1c4 = rax_63
void* r15_2
void var_1b8

if (rcx_63 == 0x7fff)
    r15_2 = &var_1b8
else
    r15_2 = zx.q(*(arg1 + 0x80) * rcx_63) + *(arg1 + 0x70)
void* var_1a8 = r15_2
int32_t rcx_65 = zx.d(rax_2[0xf]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x10]
int32_t var_198 = rcx_65
int32_t rax_64
rax_64.b = rcx_65 != 0x7fff
int32_t var_194 = rax_64
void* r14_2
void var_188

if (rcx_65 == 0x7fff)
    r14_2 = &var_188
else
    r14_2 = zx.q(*(arg1 + 0x80) * rcx_65) + *(arg1 + 0x70)
void* var_178 = r14_2
int32_t rcx_67 = zx.d(rax_2[0x10]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x11]
int32_t var_168 = rcx_67
int32_t rax_65
rax_65.b = rcx_67 != 0x7fff
int32_t var_164 = rax_65
void* rsi_2
void var_158

if (rcx_67 == 0x7fff)
    rsi_2 = &var_158
else
    rsi_2 = zx.q(*(arg1 + 0x80) * rcx_67) + *(arg1 + 0x70)
void* var_148 = rsi_2
int32_t rcx_69 = zx.d(rax_2[0x11]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x12]
int32_t var_138 = rcx_69
int32_t rax_66
rax_66.b = rcx_69 != 0x7fff
int32_t var_134 = rax_66
void* rdi_12
void var_128

if (rcx_69 == 0x7fff)
    rdi_12 = &var_128
else
    rdi_12 = zx.q(*(arg1 + 0x80) * rcx_69) + *(arg1 + 0x70)
void* var_118 = rdi_12
int32_t rcx_71 = zx.d(rax_2[0x12]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x13]
int32_t var_108 = rcx_71
int32_t rax_67
rax_67.b = rcx_71 != 0x7fff
int32_t var_104 = rax_67
void* rbx_21
void var_f8

if (rcx_71 == 0x7fff)
    rbx_21 = &var_f8
else
    rbx_21 = zx.q(*(arg1 + 0x80) * rcx_71) + *(arg1 + 0x70)
void* var_e8 = rbx_21
int32_t rcx_73 = zx.d(rax_2[0x13]) & 0x7fff
*(arg1 + 0x10) = &rax_2[0x14]
int32_t var_d8 = rcx_73
int32_t rax_68
rax_68.b = rcx_73 != 0x7fff
int32_t var_d4 = rax_68
void* r11_30
void var_c8

if (rcx_73 == 0x7fff)
    r11_30 = &var_c8
else
    r11_30 = zx.q(*(arg1 + 0x80) * rcx_73) + *(arg1 + 0x70)
void* var_b8 = r11_30
uint32_t rcx_74 = zx.d(rax_2[0x14])
*(arg1 + 0x10) = &rax_2[0x15]
int32_t r9_29 = rcx_74 & 0x7fff
int32_t var_a8 = r9_29
int32_t rdx_1
rdx_1.b = r9_29 != 0x7fff
int32_t var_a4 = rdx_1
void* rcx_77
void var_98

if (r9_29 == 0x7fff)
    rcx_77 = &var_98
else
    rcx_77 = zx.q(*(arg1 + 0x80) * r9_29) + *(arg1 + 0x70)
void* var_88 = rcx_77
float zmm7[0x4] = *var_280
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float zmm0[0x4] = *var_250
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float zmm1[0x4] = *var_248
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
var_280.d = result.d

if (result.d s> 0)
    uint64_t i_2 = i_1
    int128_t* rbx_22 = rbx_21 - r10_9
    float temp0_3[0x4] = __maxps_xmmps_memps(temp0_2, data_142d3f5e0)
    result = i_2 - r10_9
    int128_t* r8_2 = var_240 - r10_9
    float (* var_278_1)[0x4] = var_278 - r10_9
    int128_t* rdx_3 = var_238 - r10_9
    int128_t* var_270_1 = var_270 - r10_9
    int128_t* r11_31 = r11_30 - r10_9
    float (* var_268_1)[0x4] = var_268 - r10_9
    int128_t* rcx_78 = rcx_77 - r10_9
    float (* var_260_1)[0x4] = var_260 - r10_9
    int64_t r13_3 = r13_2 - r10_9
    float (* var_258_1)[0x4] = var_258 - r10_9
    float (* r12_3)[0x4] = r12_2 - r10_9
    float (* r15_3)[0x4] = r15_2 - r10_9
    float temp0_4[0x4] = _mm_mul_ps(temp0_1, temp0)
    float (* r14_3)[0x4] = r14_2 - r10_9
    float (* rsi_3)[0x4] = rsi_2 - r10_9
    i_1 = zx.q(var_280.d)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float (* rdi_13)[0x4] = rdi_12 - r10_9
    float temp0_5[0x4] = __minps_xmmps_memps(temp0_4, data_143ce3940)
    float temp0_6[0x4] = _mm_rcp_ps(temp0_3)
    float temp0_7[0x4] = _mm_max_ps(temp0_5, zx.o(0))
    float temp0_8[0x4] = _mm_mul_ps(temp0_6, temp0)
    float temp0_9[0x4] = _mm_sub_ps(zx.o(0), temp0_7)
    uint64_t i
    
    do
        zmm6 = *(r8_2 + r10_9)
        float zmm5[0x4] = *(rdx_3 + r10_9)
        float zmm4[0x4] = *(result + r10_9)
        zmm1 = *(var_278_1 + r10_9)
        float zmm2[0x4] = *r10_9
        *(rbx_22 + r10_9) = zmm6
        float zmm3[0x4] = *(var_270_1 + r10_9)
        float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm1)
        zmm1 = *(var_268_1 + r10_9)
        *(r11_31 + r10_9) = zmm5
        float temp0_11[0x4] = _mm_add_ps(zmm6, temp0_10)
        float temp0_12[0x4] = _mm_mul_ps(temp0_8, zmm2)
        *(rcx_78 + r10_9) = zmm4
        float temp0_13[0x4] = _mm_add_ps(zmm5, temp0_12)
        float temp0_15[0x4] = _mm_add_ps(zmm4, _mm_mul_ps(temp0_8, zmm3))
        float temp0_17[0x4] = _mm_add_ps(temp0_11, _mm_mul_ps(temp0_9, temp0_11))
        float temp0_18[0x4] = _mm_mul_ps(temp0_9, temp0_13)
        *(r14_3 + r10_9) = temp0_17
        float temp0_19[0x4] = _mm_add_ps(temp0_13, temp0_18)
        float temp0_20[0x4] = _mm_mul_ps(temp0_9, temp0_15)
        *(rsi_3 + r10_9) = temp0_19
        float temp0_21[0x4] = _mm_add_ps(temp0_15, temp0_20)
        float temp0_22[0x4] = _mm_mul_ps(temp0_17, temp0)
        *(rdi_13 + r10_9) = temp0_21
        float temp0_23[0x4] = _mm_add_ps(zmm1, temp0_22)
        float temp0_24[0x4] = _mm_mul_ps(temp0_19, temp0)
        *(r10_9 + r13_3) = temp0_23
        float temp0_25[0x4] = _mm_add_ps(*(var_260_1 + r10_9), temp0_24)
        float temp0_26[0x4] = _mm_mul_ps(temp0_21, temp0)
        *(r12_3 + r10_9) = temp0_25
        *(r15_3 + r10_9) = _mm_add_ps(*(var_258_1 + r10_9), temp0_26)
        r10_9 = &r10_9[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &i_1)
return result
