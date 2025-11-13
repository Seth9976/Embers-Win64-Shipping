// 函数: sub_141a9eea0
// 地址: 0x141a9eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int128_t* r10_1 = *arg2 + 0x10
uint32_t temp0[0x4] = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
void* r13 = arg2[3]
uint32_t r8 = zx.d(*(arg1 + 0x188))
uint32_t var_f8[0x4] = temp0
int128_t* var_1e8
uint32_t var_188[0x4]
float var_158
float var_118[0x4]
float var_108[0x4]
float zmm1_1[0x4]
float zmm2_1[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
int512_t zmm14
uint32_t zmm15[0x4]

if (r8 != 3)
    bool cond:0_1 = *(arg1 + 0x100) == 0
    float zmm1[0x4] = *(arg1 + 0xe0)
    var_118 = *(arg1 + 0xd0)
    var_f8 = *(arg1 + 0xf0)
    var_108 = zmm1
    int32_t r9_1
    
    if (cond:0_1)
        r9_1 = *(arg1 + 0x110)
    else
        r9_1 = *(arg1 + 0x15c)
    
    var_1e8.d = r8
    zmm6, zmm7, zmm8, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_141de5f60(r10_1, &arg2[1], &var_118, r9_1)
    zmm1_1 = var_108
    var_188 = var_118
else
    float (* rax_2)[0x4]
    rax_2, zmm6, zmm7, zmm8, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_141a88830(arg1 + 0x100, &var_158, arg1 + 0xd0, &arg2[1], r10_1)
    zmm2_1 = *rax_2
    var_118 = zmm2_1
    zmm1_1 = rax_2[1]
    var_188 = zmm2_1

int32_t rcx_2 = *(arg1 + 0x178)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
int32_t* r14 = nullptr
int32_t r12 = 0
float var_170 = zmm1_1[0]
int32_t r15 = 0
float var_168 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
float var_16c = temp0_1[0]
int32_t* var_1b8 = nullptr
int32_t var_1ac = 0
int32_t rbx

if (rcx_2 s>= 0)
    rbx = *(arg1 + 0x17c)
else
    int32_t rcx_3 = rcx_2 * 2
    
    if ((rcx_3 & 0xfffffffe) == 0xfffffffe)
        rbx = -1
    else
        rbx = *(*(r13 + 0x80) + (sx.q(rcx_3) s>> 1 << 2))

int32_t rax_6 = *(arg1 + 0x168)
float var_1d8

if (rax_6 s>= 0)
    var_1d8 = *(arg1 + 0x16c)
else
    int32_t rcx_6 = rax_6 * 2
    
    if ((rcx_6 & 0xfffffffe) == 0xfffffffe)
        var_1d8 = -nanf
    else
        var_1d8 = *(*(r13 + 0x80) + (sx.q(rcx_6) s>> 1 << 2))

float var_1d0
float rax_12

do
    int64_t r13_1 = sx.q(r15)
    r15 = (r13_1 + 1).d
    
    if (r15 s> r12)
        sub_1405a4cf0(&var_1b8)
        r12 = var_1ac
        r14 = var_1b8
    
    memmove(&r14[1], r14, (r13_1 << 2).d)
    *r14 = var_1d8
    sub_141ea4020(arg2[3], &var_1d0, &var_1d8)
    rax_12 = var_1d0
    var_1d8 = rax_12
while (rax_12 != rbx)
int32_t r13_2 = r15 + 1
int32_t var_1b0_2 = r13_2

if (r13_2 s> r12)
    sub_1405a4cf0(&var_1b8)
    r13_2 = var_1b0_2
    r14 = var_1b8

memmove(&r14[1], r14, r15 << 2)
zmm14.o = zx.o(0)
*r14 = var_1d8
float zmm9[0x4] = zx.o(0)
int32_t rax_14 = arg3[1].d + r13_2
arg3[1].d = rax_14

if (rax_14 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

void* var_1c8 = nullptr
int64_t var_1c0 = 0

if (r13_2 s> 0)
    sub_1408cf3a0(&var_1c8, r13_2)

int64_t rdx_9 = sx.q(*r14)

if (*(rdx_9 + arg2[4]) == 0)
    zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13, zmm15 = sub_141a98300(&arg2[1], rdx_9.d)

int32_t* rcx_18 = *arg3
int128_t* rbx_4 = rdx_9 * 0x30 + arg2[1]
var_158 = *r14
int128_t var_148 = *rbx_4
int128_t var_128 = rbx_4[2]
float var_138 = rbx_4[1][0]
sub_141a917c0(rcx_18, &var_158)
zmm1_1 = rbx_4[1]
int64_t rbx_5 = sx.q(var_1c0.d)
int32_t r15_1 = *r14
uint128_t zmm0_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
int64_t* var_198
var_198.d = zmm1_1[0]
int32_t rax_17 = (rbx_5 + 1).d
var_198:4.d = zmm0_3.d
float var_190 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
var_148:8.d = 0xbf800000
var_148:0xc.q = 0
var_1c0.d = rax_17

if (rax_17 s> 0)
    sub_1407c3b60(&var_1c8)

int32_t zmm10 = 0x322bcc77
float var_48[0x4] = zmm6
float var_58[0x4] = zmm7
float var_68[0x4] = zmm8
uint64_t* rcx_21 = rbx_5 * 0x38 + var_1c8
*rcx_21 = var_198
rcx_21[1].d = var_190
rcx_21[3] = var_148:8.q
rcx_21[2].d = r15_1
float (* r15_2)[0x4] = nullptr
rcx_21[4].d = var_138
*(rcx_21 + 0xc) = 0
int32_t r12_1 = 1
int64_t rax_20 = sx.q(r13_2)
*(rcx_21 + 0x14) = 0
rcx_21[5] = 0
rcx_21[6] = 0

if (rax_20 s> 1)
    int64_t rbx_6 = 1
    var_1d0.q = 0
    
    do
        uint64_t rcx_23 = sx.q(r14[rbx_6])
        uint64_t r15_3 = rcx_23
        
        if (*(rcx_23 + arg2[4]) == 0)
            zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 = sub_141a98300(&arg2[1], rcx_23.d)
            rcx_23 = zx.q(r14[rbx_6])
        
        var_158 = rcx_23.d
        uint128_t* rax_24 = r15_3 * 0x30 + arg2[1]
        int32_t* rcx_26 = (sx.q(r12_1) << 6) + *arg3
        zmm6 = rax_24[1]
        uint128_t var_148_1 = *rax_24
        zmm0_3 = rax_24[2]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        int64_t* var_1a8
        var_1a8:4.d = temp0_5[0]
        float var_1a0_1 = temp0_6[0]
        var_1a8.d = zmm6[0]
        float var_138_1 = zmm6[0]
        uint128_t var_128_1 = zmm0_3
        sub_141a917c0(rcx_26, &var_158)
        int64_t r8_8 = var_1d0.q
        zmm2_1 = *(r8_8 + *arg3 + 0x20)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        zmm0_3.d = zmm2_1.d f- zmm6[0]
        temp0_7[0] = temp0_7[0] - temp0_5[0]
        float temp0_8[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
        temp0_8[0] = temp0_8[0] - temp0_6[0]
        zmm0_3.d = zmm0_3.d f* zmm0_3.d
        temp0_7[0] = temp0_7[0] * temp0_7[0]
        temp0_8[0] = temp0_8[0] * temp0_8[0]
        temp0_7[0] = temp0_7[0] f+ zmm0_3.d
        temp0_7[0] = temp0_7[0] + temp0_8[0]
        float temp0_9[0x4] = _mm_sqrt_ss(0, temp0_7[0])
        
        if (temp0_9[0] f<= zmm10)
            void* r15_6 = sx.q(var_1c0.d - 1) * 0x38 + var_1c8
            int64_t r13_4 = sx.q(*(r15_6 + 0x30))
            int32_t rax_31 = (r13_4 + 1).d
            *(r15_6 + 0x30) = rax_31
            
            if (rax_31 s> *(r15_6 + 0x34))
                sub_1405a4cf0(r15_6 + 0x28)
                r8_8 = var_1d0.q
            
            r15_2 = nullptr
            *(*(r15_6 + 0x28) + (r13_4 << 2)) = r12_1
        else
            int64_t r15_4 = sx.q(var_1c0.d)
            int32_t r13_3 = r14[rbx_6]
            var_148_1:8.d = 0xbf800000
            var_148_1:0xc.q = 0
            int32_t rax_26 = (r15_4 + 1).d
            var_1c0.d = rax_26
            
            if (rax_26 s> var_1c0:4.d)
                sub_1407c3b60(&var_1c8)
                r8_8 = var_1d0.q
            
            zmm9[0] = zmm9[0] + temp0_9[0]
            uint64_t* rcx_29 = r15_4 * 0x38 + var_1c8
            r15_2 = nullptr
            *rcx_29 = var_1a8
            rcx_29[1].d = var_1a0_1
            rcx_29[3] = var_148_1:8.q
            rcx_29[4].d = var_138_1
            *(rcx_29 + 0xc) = temp0_9[0]
            rcx_29[2].d = r13_3
            *(rcx_29 + 0x14) = r12_1
            rcx_29[5] = 0
            rcx_29[6] = 0
        
        r12_1 += 1
        rbx_6 += 1
        var_1d0.q = r8_8 + 0x40
    while (rbx_6 s< rax_20)

int64_t i_7 = sx.q(var_1c0.d)
float var_98[0x4] = zmm11
float var_a8[0x4] = zmm12
float var_b8[0x4] = zmm13
uint32_t var_d8[0x4] = zmm15
var_1e8.d = *(arg1 + 0x184)
char rax_34
int64_t zmm14_1
rax_34, zmm14_1 = sub_141a81aa0(&var_1c8, &var_170, zmm9, *(arg1 + 0x180), var_1e8.d)
uint32_t zmm0_4[0x4]
float zmm1_2[0x4]
float zmm2_2[0x4]
float zmm4_1[0x4]
uint32_t zmm5_1[0x4]
float zmm6_1[0x4]
float zmm9_1[0x4]
float zmm11_1[0x4]

if (rax_34 != 0)
    int64_t i_5 = i_7
    
    if (i_7.d s> 0)
        float (* rdx_17)[0x4] = nullptr
        int64_t i
        
        do
            void* r8_10 = var_1c8
            int64_t r9_2 = 0
            *((sx.q(*(rdx_17 + r8_10 + 0x14)) << 6) + *arg3 + 0x20) = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(rdx_17 + r8_10), (*(rdx_17 + r8_10 + 8))[0].q), 
                _mm_unpacklo_ps(*(rdx_17 + r8_10 + 4), zmm14_1)[0].q)
            int64_t r10_2 = sx.q(*(rdx_17 + r8_10 + 0x30))
            
            if (r10_2 s> 0)
                do
                    int64_t rcx_36 = sx.q(*(*(rdx_17 + r8_10 + 0x28) + (r9_2 << 2)))
                    r9_2 += 1
                    *((rcx_36 << 6) + *arg3 + 0x20) = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(*(rdx_17 + r8_10), (*(rdx_17 + r8_10 + 8))[0].q), 
                        _mm_unpacklo_ps(*(rdx_17 + r8_10 + 4), zmm14_1)[0].q)
                while (r9_2 s< r10_2)
            
            rdx_17 = &(*rdx_17)[0xe]
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t i_6 = (i_7 - 1).d
    int64_t i_3 = sx.q(i_6)
    
    if (i_6 s> 0)
        float zmm12_1[0x4] = 0x3f000000
        zmm15 = data_143f2b8f0
        int64_t i_1
        
        do
            void* r12_2 = var_1c8
            int64_t rdx_18 = sx.q(*(r15_2 + r12_2 + 0x10))
            int32_t* rbx_7 = r15_2 + r12_2
            char* rcx_39 = arg2[4]
            r15_2 = &(*r15_2)[0xe]
            
            if (rcx_39[rdx_18] == 0)
                zmm12_1, zmm14_1 = sub_141a98300(&arg2[1], rdx_18.d)
                rcx_39 = arg2[4]
                zmm15 = data_143f2b8f0
            
            int64_t rdx_19 = sx.q(*(r15_2 + r12_2 + 0x10))
            int64_t r8_11 = arg2[1]
            var_1b8.o = *(r8_11 + rdx_18 * 0x30 + 0x10)
            
            if (rcx_39[rdx_19] == 0)
                zmm12_1, zmm14_1 = sub_141a98300(&arg2[1], rdx_19.d)
                r8_11 = arg2[1]
                zmm15 = data_143f2b8f0
            
            float zmm3_1[0x4] = zx.o(0)
            zmm6_1 = *(r8_11 + rdx_19 * 0x30 + 0x10)
            zmm6_1[0] = zmm6_1[0] f- var_1b8.d
            zmm5_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
            zmm5_1[0] = zmm5_1[0] f- var_1b8:4.d
            float temp0_17[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
            temp0_17[0] = temp0_17[0] f- var_1b0_2
            zmm0_4 = zmm6_1
            zmm0_4[0] = zmm0_4[0] f* zmm6_1[0]
            zmm2_2 = zmm5_1
            zmm2_2[0] = zmm2_2[0] f* zmm5_1[0]
            temp0_17[0] = temp0_17[0] * temp0_17[0]
            zmm2_2[0] = zmm2_2[0] f+ zmm0_4[0]
            zmm2_2[0] = zmm2_2[0] + temp0_17[0]
            zmm3_1[0] = zmm2_2[0]
            float temp0_18[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * zmm12_1[0]
            zmm0_4 = temp0_18
            zmm0_4[0] = zmm0_4[0] f* temp0_18[0]
            zmm3_1[0] = zmm3_1[0] f* zmm0_4[0]
            zmm0_4 = temp0_18
            zmm12_1[0] = zmm12_1[0] - zmm3_1[0]
            zmm0_4[0] = zmm0_4[0] f* zmm12_1[0]
            temp0_18[0] = temp0_18[0] f+ zmm0_4[0]
            zmm0_4 = zmm12_1
            temp0_18[0] = temp0_18[0] * temp0_18[0]
            zmm3_1[0] = zmm3_1[0] * temp0_18[0]
            zmm0_4[0] = zmm0_4[0] f- zmm3_1[0]
            temp0_18[0] = temp0_18[0] f* zmm0_4[0]
            temp0_18[0] = temp0_18[0] + temp0_18[0]
            var_1d0 = temp0_18[0]
            temp0_18[0] = temp0_18[0] * zmm6_1[0]
            zmm4_1 = *(r15_2 + r12_2)
            zmm4_1[0] = zmm4_1[0] f- *rbx_7
            temp0_18[0] = temp0_18[0] f* zmm5_1[0]
            zmm5_1 = *(r15_2 + r12_2 + 4)
            zmm5_1[0] = zmm5_1[0] f- rbx_7[1]
            temp0_18[0] = temp0_18[0] * temp0_17[0]
            zmm0_4 = zmm4_1
            zmm6_1 = *(r15_2 + r12_2 + 8)
            zmm6_1[0] = zmm6_1[0] f- rbx_7[2]
            zmm0_4[0] = zmm0_4[0] f* zmm4_1[0]
            zmm2_2 = zmm5_1
            zmm2_2[0] = zmm2_2[0] f* zmm5_1[0]
            var_1d0 = temp0_18[0]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm2_2[0] = zmm2_2[0] f+ zmm0_4[0]
            zmm2_2[0] = zmm2_2[0] + zmm6_1[0]
            float temp0_19[0x4] = _mm_rsqrt_ss(zmm2_2[0], zmm2_2[0])
            zmm2_2[0] = zmm2_2[0] * zmm12_1[0]
            zmm0_4 = temp0_19
            zmm0_4[0] = zmm0_4[0] f* temp0_19[0]
            zmm2_2[0] = zmm2_2[0] f* zmm0_4[0]
            zmm0_4 = temp0_19
            zmm12_1[0] = zmm12_1[0] - zmm2_2[0]
            zmm0_4[0] = zmm0_4[0] f* zmm12_1[0]
            temp0_19[0] = temp0_19[0] f+ zmm0_4[0]
            zmm0_4 = zmm12_1
            temp0_19[0] = temp0_19[0] * temp0_19[0]
            zmm2_2[0] = zmm2_2[0] * temp0_19[0]
            zmm0_4[0] = zmm0_4[0] f- zmm2_2[0]
            temp0_19[0] = temp0_19[0] f* zmm0_4[0]
            temp0_19[0] = temp0_19[0] + temp0_19[0]
            var_1d8 = temp0_19[0]
            temp0_19[0] = temp0_19[0] * zmm4_1[0]
            temp0_19[0] = temp0_19[0] * zmm6_1[0]
            temp0_19[0] = temp0_19[0] f* zmm5_1[0]
            zmm5_1 = var_1d0
            zmm6_1 = temp0_19
            zmm6_1[0] = zmm6_1[0] * temp0_18[0]
            float zmm10_1[0x4] = temp0_19
            zmm0_4 = temp0_19
            zmm10_1[0] = zmm10_1[0] * temp0_18[0]
            zmm0_4[0] = zmm0_4[0] f* temp0_18[0]
            zmm11_1 = temp0_19
            zmm11_1[0] = zmm11_1[0] * temp0_18[0]
            zmm6_1[0] = zmm6_1[0] f- zmm0_4[0]
            var_1d8 = temp0_19[0]
            zmm0_4 = temp0_19
            zmm0_4[0] = zmm0_4[0] f* temp0_18[0]
            zmm10_1[0] = zmm10_1[0] f- zmm0_4[0]
            zmm0_4 = temp0_19
            zmm0_4[0] = zmm0_4[0] f* zmm5_1[0]
            zmm11_1[0] = zmm11_1[0] f- zmm0_4[0]
            zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
            zmm0_4 = zmm6_1
            zmm0_4[0] = zmm0_4[0] f* zmm6_1[0]
            zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
            zmm10_1[0] = zmm10_1[0] f+ zmm0_4[0]
            zmm10_1[0] = zmm10_1[0] + zmm11_1[0]
            
            if (not(zmm10_1[0] == 1f))
                if (zmm10_1[0] >= 9.99999994e-09f)
                    zmm3_1 = zx.o(0)
                    zmm3_1[0] = zmm10_1[0]
                    float temp0_20[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                    zmm3_1[0] = zmm3_1[0] * zmm12_1[0]
                    zmm0_4 = temp0_20
                    zmm0_4[0] = zmm0_4[0] f* temp0_20[0]
                    zmm3_1[0] = zmm3_1[0] f* zmm0_4[0]
                    zmm0_4 = temp0_20
                    zmm12_1[0] = zmm12_1[0] - zmm3_1[0]
                    zmm0_4[0] = zmm0_4[0] f* zmm12_1[0]
                    temp0_20[0] = temp0_20[0] f+ zmm0_4[0]
                    zmm0_4 = zmm12_1
                    temp0_20[0] = temp0_20[0] * temp0_20[0]
                    zmm3_1[0] = zmm3_1[0] * temp0_20[0]
                    zmm0_4[0] = zmm0_4[0] f- zmm3_1[0]
                    temp0_20[0] = temp0_20[0] f* zmm0_4[0]
                    temp0_20[0] = temp0_20[0] + temp0_20[0]
                    zmm0_4 = temp0_20
                    var_1d0 = temp0_20[0]
                    zmm0_4[0] = zmm0_4[0] f* zmm6_1[0]
                    temp0_20[0] = temp0_20[0] * zmm10_1[0]
                    temp0_20[0] = temp0_20[0] * zmm11_1[0]
                    zmm6_1 = zmm0_4
                    zmm10_1 = temp0_20
                    zmm11_1 = temp0_20
                else
                    zmm6_1 = data_143dbb1f8
                    zmm10_1 = data_143dbb1fc
                    zmm11_1 = data_143dbb200
            
            temp0_18[0] = temp0_18[0] * var_1d8
            temp0_19[0] = temp0_19[0] f* zmm5_1[0]
            temp0_18[0] = temp0_18[0] * temp0_19[0]
            temp0_18[0] = temp0_18[0] + temp0_19[0]
            temp0_18[0] = temp0_18[0] + temp0_18[0]
            
            if (temp0_18[0] >= -1f)
                zmm9_1 = _mm_min_ss(temp0_18[0], 0x3f800000)
            else
                zmm9_1 = 0xbf800000
            
            zmm1_2 = acosf(zmm9_1[0])
            zmm1_2[0] = zmm1_2[0] * 0.5f
            bool cond:2_1 = zmm1_2[0] f< zmm14_1.d
            zmm0_4 = zmm1_2
            zmm0_4[0] = zmm0_4[0] f* 0.159154937f
            
            if (cond:2_1)
                zmm0_4[0] = zmm0_4[0] f- 0.5f
            else
                zmm0_4[0] = zmm0_4[0] f+ 0.5f
            
            zmm0_4 = _mm_cvtepi32_ps(zx.o(int.d(zmm0_4[0])))
            zmm0_4[0] = zmm0_4[0] f* 6.28318548f
            zmm1_2[0] = zmm1_2[0] f- zmm0_4[0]
            
            if (not(zmm1_2[0] <= 1.57079637f))
                zmm0_4 = 0x40490fdb
                zmm5_1 = 0xbf800000
                zmm0_4[0] = 3.14159274f - zmm1_2[0]
                zmm1_2 = zmm0_4
            else if (zmm1_2[0] >= -1.57079637f)
                zmm5_1 = 0x3f800000
            else
                zmm0_4 = 0xc0490fdb
                zmm5_1 = 0xbf800000
                zmm0_4[0] = -3.14159274f - zmm1_2[0]
                zmm1_2 = zmm0_4
            
            zmm4_1 = 0x3638b88e
            zmm2_2 = 0x37cfb4c2
            int64_t rcx_42 = sx.q(rbx_7[5])
            int64_t rax_45 = *arg3
            zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
            int64_t rcx_43 = rcx_42 << 6
            zmm0_4 = zmm1_2
            zmm0_4[0] = zmm0_4[0] f* 2.3889859e-08f
            zmm4_1[0] = 2.75255616e-06f f- zmm0_4[0]
            zmm0_4 = zmm1_2
            zmm0_4[0] = zmm0_4[0] f* 2.60516146e-07f
            zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
            zmm2_2[0] = 2.47604949e-05f f- zmm0_4[0]
            zmm4_1[0] = zmm4_1[0] - 0.000198408743f
            zmm2_2[0] = zmm2_2[0] * zmm1_2[0]
            zmm2_2[0] = zmm2_2[0] - 0.00138883782f
            zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
            zmm4_1[0] = zmm4_1[0] + 0.00833333097f
            zmm2_2[0] = zmm2_2[0] * zmm1_2[0]
            zmm2_2[0] = zmm2_2[0] + 0.0416666381f
            zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
            zmm4_1[0] = zmm4_1[0] - 0.166666672f
            zmm2_2[0] = zmm2_2[0] * zmm1_2[0]
            zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
            zmm2_2[0] = zmm2_2[0] - 0.5f
            zmm4_1[0] = zmm4_1[0] + 1f
            zmm2_2[0] = zmm2_2[0] * zmm1_2[0]
            zmm3_1 = *(rcx_43 + rax_45 + 0x10)
            zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
            zmm2_2[0] = zmm2_2[0] + 1f
            zmm4_1[0] = zmm4_1[0] * zmm6_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm10_1[0]
            float temp0_23[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
            float temp0_24[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
            temp0_24[0] = zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm11_1[0]
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
            float temp0_26[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
            temp0_25[0] = zmm4_1[0]
            float temp0_27[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x27)
            zmm2_2[0] = zmm2_2[0] f* zmm5_1[0]
            temp0_28[0] = zmm2_2[0]
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x39)
            var_1b8.o = temp0_29
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0)
            float temp0_31[0x4] = _mm_mul_ps(temp0_23, temp0_30)
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xff)
            zmm0_4 = _mm_mul_ps(zmm3_1, temp0_32)
            float temp0_34[0x4] = __mulps_xmmps_memps(temp0_31, data_143f2b850)
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
            float temp0_36[0x4] = _mm_mul_ps(temp0_26, temp0_35)
            float temp0_37[0x4] = _mm_add_ps(temp0_34, zmm0_4)
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
            float temp0_39[0x4] = _mm_mul_ps(temp0_27, temp0_38)
            float temp0_40[0x4] = __mulps_xmmps_memps(temp0_36, data_143f2b840)
            float temp0_41[0x4] = __mulps_xmmps_memps(temp0_39, data_143f2b830)
            float temp0_43[0x4] = _mm_add_ps(_mm_add_ps(temp0_37, temp0_40), temp0_41)
            *(rcx_43 + rax_45 + 0x10) = temp0_43
            zmm5_1 = data_143f2b8b0
            float temp0_44[0x4] = _mm_mul_ps(temp0_43, temp0_43)
            float temp0_46[0x4] = _mm_add_ps(temp0_44, _mm_shuffle_ps(temp0_44, temp0_44, 0x4e))
            float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0x39), temp0_46)
            float temp0_49[0x4] = _mm_rsqrt_ps(temp0_48)
            float temp0_50[0x4] = _mm_mul_ps(temp0_48, zmm5_1)
            int64_t rdx_20 = 0
            float temp0_55[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_49, temp0_49), temp0_50)), 
                    temp0_49), 
                temp0_49)
            zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_55, temp0_55), temp0_50))
            zmm0_4 = _mm_cmpeq_ps(zmm15, temp0_48, 2)
            *(rcx_43 + rax_45 + 0x10) = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_55), temp0_55), temp0_43)
                    ^ data_143f2b8a0, 
                zmm0_4) ^ data_143f2b8a0
            int64_t r8_12 = sx.q(rbx_7[0xc])
            
            if (r8_12 s> 0)
                do
                    int64_t rcx_44 = sx.q(*(*(rbx_7 + 0x28) + (rdx_20 << 2)))
                    rdx_20 += 1
                    int64_t rax_47 = *arg3
                    int64_t rcx_45 = rcx_44 << 6
                    zmm2_2 = *(rcx_45 + rax_47 + 0x10)
                    zmm0_4 = _mm_mul_ps(temp0_32, zmm2_2)
                    float temp0_65[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x1b)
                    float temp0_66[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x4e)
                    float temp0_67[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xb1)
                    float temp0_68[0x4] = _mm_mul_ps(temp0_66, temp0_35)
                    float temp0_69[0x4] = _mm_mul_ps(temp0_67, temp0_38)
                    float temp0_70[0x4] = _mm_mul_ps(temp0_65, temp0_30)
                    float temp0_71[0x4] = __mulps_xmmps_memps(temp0_68, data_143f2b840)
                    float temp0_72[0x4] = __mulps_xmmps_memps(temp0_69, data_143f2b830)
                    float temp0_76[0x4] = _mm_add_ps(
                        _mm_add_ps(
                            _mm_add_ps(__mulps_xmmps_memps(temp0_70, data_143f2b850), zmm0_4), 
                            temp0_71), 
                        temp0_72)
                    *(rcx_45 + rax_47 + 0x10) = temp0_76
                    zmm5_1 = data_143f2b8b0
                    float temp0_77[0x4] = _mm_mul_ps(temp0_76, temp0_76)
                    float temp0_79[0x4] =
                        _mm_add_ps(temp0_77, _mm_shuffle_ps(temp0_77, temp0_77, 0x4e))
                    float temp0_81[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0x39), temp0_79)
                    float temp0_82[0x4] = _mm_rsqrt_ps(temp0_81)
                    float temp0_83[0x4] = _mm_mul_ps(temp0_81, zmm5_1)
                    float temp0_88[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_82, temp0_82), temp0_83)), 
                            temp0_82), 
                        temp0_82)
                    zmm5_1 =
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_88, temp0_88), temp0_83))
                    zmm0_4 = _mm_cmpeq_ps(zmm15, temp0_81, 2)
                    *(rcx_45 + rax_47 + 0x10) = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_88), temp0_88), temp0_76)
                            ^ data_143f2b8a0, 
                        zmm0_4) ^ data_143f2b8a0
                while (rdx_20 s< r8_12)
            
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

int64_t rdx_21 = sx.q(arg3[1].d)
uint32_t rcx_46 = zx.d(*(arg1 + 0x189))

if (rcx_46 == 1)
    uint64_t rax_50 = sx.q(r14[rdx_21 - 1])
    int64_t rcx_50 = arg2[4]
    int64_t r13_7 = *arg3
    var_1d8 = rax_50.d
    
    if (*(rax_50 + rcx_50) == 0)
        goto label_141a9fc61
    
    sub_141ea4020(arg2[3], &var_1d0, &var_1d8)
    int64_t rdx_23 = sx.q(var_1d0)
    float zmm13_1[0x4]
    
    if (rdx_23.d == 0xffffffff)
        rax_50 = zx.q(var_1d8)
    label_141a9fc61:
        int64_t rax_53 = arg2[1]
        int64_t rdx_26 = sx.q(rax_50.d) * 6
        zmm13_1 = *(rax_53 + (rdx_26 << 3))
        var_118 = zmm13_1
        zmm2_2 = *(rax_53 + (rdx_26 << 3) + 0x10)
        float var_108_1[0x4] = zmm2_2
        zmm15 = *(rax_53 + (rdx_26 << 3) + 0x20)
        uint32_t var_f8_1[0x4] = zmm15
    else
        if (*(rdx_23 + arg2[4]) == 0)
            sub_141a98300(&arg2[1], rdx_23.d)
        
        sub_140ad7d70(sx.q(var_1d8) * 0x30 + arg2[1], &var_118, rdx_23 * 0x30 + arg2[1])
        zmm2_2 = var_108
        zmm15 = var_f8
        zmm13_1 = var_118
    
    int64_t r15_8 = rdx_21 << 6
    var_188 = zmm2_2
    float zmm8_1[0x4] = *(r15_8 + r13_7 - 0x50)
    float zmm7_1[0x4]
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm15, zmm8_1), data_143f2b8d0, 1))
            == 0)
        zmm4_1 = *(r15_8 + r13_7 - 0x70)
        zmm0_4 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x1b)
        float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm0_4)
        float temp0_233[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float temp0_234[0x4] = _mm_mul_ps(zmm8_1, zmm2_2)
        float temp0_235[0x4] = __mulps_xmmps_memps(temp0_232, data_143f2b850)
        zmm5_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        zmm8_1 = _mm_mul_ps(zmm8_1, zmm15)
        zmm0_4 = _mm_mul_ps(zmm5_1, zmm13_1)
        float temp0_239[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0xd2)
        float temp0_240[0x4] = _mm_add_ps(temp0_235, zmm0_4)
        float temp0_242[0x4] = _mm_mul_ps(temp0_233, _mm_shuffle_ps(zmm13_1, zmm13_1, 0x4e))
        zmm0_4 =
            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), _mm_shuffle_ps(zmm13_1, zmm13_1, 0xb1))
        float temp0_246[0x4] = __mulps_xmmps_memps(temp0_242, data_143f2b840)
        zmm0_4 = __mulps_xmmps_memps(zmm0_4, data_143f2b830)
        float temp0_248[0x4] = _mm_add_ps(temp0_240, temp0_246)
        float temp0_249[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        float temp0_250[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_251[0x4] = _mm_mul_ps(temp0_239, temp0_250)
        zmm6_1 = _mm_add_ps(temp0_248, zmm0_4)
        float temp0_255[0x4] =
            _mm_sub_ps(temp0_251, _mm_mul_ps(_mm_shuffle_ps(temp0_234, temp0_234, 0xc9), temp0_249))
        float temp0_256[0x4] = _mm_add_ps(temp0_255, temp0_255)
        float temp0_257[0x4] = _mm_shuffle_ps(temp0_256, temp0_256, 0xd2)
        zmm0_4 = _mm_shuffle_ps(temp0_256, temp0_256, 0xc9)
        float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_250)
        zmm0_4 = _mm_mul_ps(zmm0_4, temp0_249)
        float temp0_261[0x4] = _mm_mul_ps(temp0_256, zmm5_1)
        zmm7_1 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_259, zmm0_4), _mm_add_ps(temp0_261, temp0_234)), 
            *(r15_8 + r13_7 - 0x60))
    else
        zmm1_2 = *(r15_8 + r13_7 - 0x70)
        zmm11_1 = data_143f2b810
        zmm9_1 = *(r15_8 + r13_7 - 0x60)
        float temp0_101[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
        zmm5_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
        zmm0_4 = _mm_mul_ps(zmm15, zmm8_1)
        float temp0_104[0x4] = _mm_mul_ps(temp0_101, zmm1_2)
        var_1b8.o = zmm0_4
        zmm0_4 = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
        float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x29), zmm0_4)
        zmm0_4 = _mm_shuffle_ps(temp0_104, temp0_104, 0x1a)
        float temp0_109[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
        float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x12), temp0_109)
        zmm0_4 = _mm_add_ps(zmm0_4, _mm_shuffle_ps(temp0_104, temp0_104, 1))
        float temp0_114[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
        float temp0_115[0x4] = _mm_add_ps(temp0_111, temp0_107)
        float temp0_116[0x4] = _mm_sub_ps(temp0_107, temp0_111)
        float temp0_117[0x4] = _mm_sub_ps(zmm11_1, zmm0_4)
        float temp0_118[0x4] = _mm_mul_ps(temp0_115, zmm8_1)
        zmm5_1 = _mm_mul_ps(zmm5_1, temp0_116)
        float temp0_120[0x4] = _mm_mul_ps(temp0_117, zmm8_1)
        float temp0_121[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 4)
        zmm1_2 = __andps_xmmxud_memxud(temp0_120, data_143f2b820)
        zmm0_4 = _mm_shuffle_ps(zmm5_1, zmm1_2, 0x32)
        float temp0_125[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_118, zmm1_2, 0), zmm0_4, 0x82)
        zmm0_4 = _mm_shuffle_ps(temp0_118, zmm1_2, 0x31)
        float temp0_128[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_2, 0x10), zmm0_4, 0x88)
        zmm0_4 = zmm11_1
        float temp0_130[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_118, zmm5_1, 0x12), zmm1_2, 0xe8)
        float temp0_131[0x4] = _mm_add_ps(zmm13_1, zmm13_1)
        zmm0_4[0].q = zmm9_1 u>> 0x40
        float temp0_132[0x4] = _mm_shuffle_ps(zmm9_1, zmm0_4, 0xc4)
        zmm0_4 = _mm_shuffle_ps(temp0_131, temp0_131, 0x29)
        float temp0_134[0x4] = _mm_mul_ps(temp0_131, zmm13_1)
        float temp0_135[0x4] = _mm_mul_ps(temp0_121, zmm0_4)
        float temp0_136[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0x12)
        float temp0_137[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)
        zmm0_4 = _mm_shuffle_ps(temp0_134, temp0_134, 0x1a)
        float temp0_139[0x4] = _mm_mul_ps(temp0_137, temp0_136)
        zmm0_4 = _mm_add_ps(zmm0_4, _mm_shuffle_ps(temp0_134, temp0_134, 1))
        float temp0_142[0x4] = _mm_add_ps(temp0_139, temp0_135)
        float temp0_143[0x4] = _mm_sub_ps(temp0_135, temp0_139)
        float temp0_144[0x4] = _mm_sub_ps(zmm11_1, zmm0_4)
        float temp0_145[0x4] = _mm_mul_ps(temp0_142, zmm15)
        float temp0_146[0x4] = _mm_mul_ps(temp0_114, temp0_143)
        zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_144, zmm15), data_143f2b820)
        float temp0_151[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_145, zmm1_2, 0), 
            _mm_shuffle_ps(temp0_146, zmm1_2, 0x32), 0x82)
        zmm5_1 = _mm_shuffle_ps(temp0_146, zmm1_2, 0x10)
        float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0x55), temp0_128)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, _mm_shuffle_ps(temp0_145, zmm1_2, 0x31), 0x88)
        zmm0_4 = zmm11_1
        float temp0_157[0x4] = _mm_shuffle_ps(temp0_145, temp0_146, 0x12)
        zmm4_1 = var_188
        float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, zmm1_2, 0xe8)
        float temp0_160[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xaa), temp0_130)
        zmm0_4[0].q = zmm4_1 u>> 0x40
        float temp0_161[0x4] = _mm_shuffle_ps(zmm4_1, zmm0_4, 0xc4)
        zmm0_4 = _mm_shuffle_ps(temp0_151, temp0_151, 0)
        float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xff), temp0_132)
        float temp0_166[0x4] = _mm_add_ps(temp0_154, _mm_mul_ps(zmm0_4, temp0_125))
        zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_125)
        float temp0_169[0x4] = _mm_add_ps(temp0_166, temp0_160)
        float temp0_171[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_130)
        float temp0_172[0x4] = _mm_add_ps(temp0_169, temp0_164)
        float temp0_174[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), temp0_128)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        var_158.o = temp0_172
        float temp0_176[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0x55)
        float temp0_177[0x4] = _mm_add_ps(temp0_174, zmm0_4)
        float temp0_178[0x4] = _mm_mul_ps(temp0_176, temp0_128)
        zmm5_1 = _mm_mul_ps(zmm5_1, temp0_132)
        zmm0_4 = _mm_shuffle_ps(temp0_158, temp0_158, 0)
        float temp0_181[0x4] = _mm_add_ps(temp0_177, temp0_171)
        zmm0_4 = _mm_mul_ps(zmm0_4, temp0_125)
        float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_158, temp0_158, 0xaa), temp0_130)
        float temp0_185[0x4] = _mm_add_ps(temp0_178, zmm0_4)
        float temp0_186[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xff)
        float temp0_187[0x4] = _mm_add_ps(temp0_181, zmm5_1)
        float temp0_188[0x4] = _mm_mul_ps(temp0_186, temp0_132)
        zmm0_4 = _mm_shuffle_ps(temp0_161, temp0_161, 0)
        float temp0_190[0x4] = _mm_add_ps(temp0_185, temp0_184)
        zmm0_4 = _mm_mul_ps(zmm0_4, temp0_125)
        int96_t var_148_2 = temp0_187[0].12
        float temp0_192[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0x55)
        float temp0_193[0x4] = _mm_add_ps(temp0_190, temp0_188)
        float temp0_194[0x4] = _mm_mul_ps(temp0_192, temp0_128)
        int96_t var_138_2 = temp0_193[0].12
        float temp0_195[0x4] = _mm_add_ps(temp0_194, zmm0_4)
        float temp0_197[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xaa), temp0_130)
        float temp0_199[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xff), temp0_132)
        int96_t var_128_2 = _mm_add_ps(_mm_add_ps(temp0_195, temp0_197), temp0_199)[0].12
        int64_t zmm14_2
        zmm11_1, zmm14_2 = sub_1407740e0(&var_158, 0x322bcc77)
        zmm8_1 = var_1b8.o
        float zmm2_3[0x4] = var_158
        float zmm4_2[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f2b8d0, zmm8_1, 2), data_143f2b8c0 ^ zmm11_1)
            ^ data_143f2b8c0
        int32_t var_150
        uint32_t zmm0_5[0x4] = var_150
        zmm2_3[0] = zmm2_3[0] * zmm4_2[0]
        float var_154
        float zmm1_3 = var_154 * zmm4_2[0]
        zmm0_5[0] = zmm0_5[0] f* zmm4_2[0]
        var_158 = zmm2_3[0]
        float temp0_204[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        float var_154_1 = zmm1_3
        zmm1_3 = var_148_2:4.d * temp0_204[0]
        uint32_t var_150_1 = zmm0_5[0]
        zmm0_5 = var_148_2:8.d
        zmm0_5[0] = zmm0_5[0] f* temp0_204[0]
        float zmm3_2 = var_148_2.d * temp0_204[0]
        zmm2_3 = var_138_2.d
        float temp0_205[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        var_148_2:4.d = zmm1_3
        var_148_2:8.d = zmm0_5[0]
        zmm0_5 = var_138_2:8.d
        zmm1_3 = var_138_2:4.d * temp0_205[0]
        zmm0_5[0] = zmm0_5[0] f* temp0_205[0]
        zmm2_3[0] = zmm2_3[0] * temp0_205[0]
        var_138_2:4.d = zmm1_3
        var_138_2:8.d = zmm0_5[0]
        var_148_2.d = zmm3_2
        var_138_2.d = zmm2_3[0]
        sub_14077e4a0(&var_188, &var_158)
        uint32_t zmm5_2[0x4] = var_188
        zmm6_1 = data_143f2b8b0
        uint32_t zmm1_4[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        var_1d0 = 9.99999994e-09f
        zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
        uint32_t zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
        zmm1_4 = _mm_rsqrt_ps(zmm4_3)
        uint32_t zmm3_3[0x4] = _mm_mul_ps(zmm4_3, zmm6_1)
        float temp0_217[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), zmm3_3)), zmm1_4), 
            zmm1_4)
        float temp0_220[0x4] =
            _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_217, temp0_217), zmm3_3))
        uint32_t zmm0_6[0x4] = var_1d0
        zmm0_6 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_6, zmm0_6, 0), zmm4_3, 2)
        float temp0_224[0x4] = _mm_add_ps(_mm_mul_ps(temp0_220, temp0_217), temp0_217)
        float temp0_225[0x4] = _mm_unpacklo_ps(var_128_2:4.d, zmm14_2)
        zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_224, zmm5_2) ^ data_143f2b8a0, zmm0_6) ^ data_143f2b8a0
        zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_2.d, var_128_2:8.d[0].q), temp0_225[0].q)
    
    int64_t rax_55 = *arg3
    int64_t rbx_9 = (rdx_21 - 1) << 6
    *(rbx_9 + rax_55 + 0x10) = zmm6_1
    *(rbx_9 + rax_55 + 0x20) = zmm7_1
    *(rbx_9 + rax_55 + 0x30) = zmm8_1
else if (rcx_46 == 2)
    *((rdx_21 << 6) + *arg3 - 0x30) = var_188

int32_t i_4 = var_1c0.d

if (i_4 != 0)
    int64_t* rbx_11 = var_1c8 + 0x28
    int32_t i_2
    
    do
        int64_t rcx_59 = *rbx_11
        
        if (rcx_59 != 0)
            sub_140a74f90(rcx_59)
        
        rbx_11 = &rbx_11[7]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

void* rcx_60 = var_1c8

if (rcx_60 != 0)
    sub_140a74f90(rcx_60)

int64_t result = sub_140a74f90(r14)
__security_check_cookie(rax_1 ^ &var_208)
return result
