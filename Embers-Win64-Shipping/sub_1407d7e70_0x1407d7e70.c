// 函数: sub_1407d7e70
// 地址: 0x1407d7e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
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
void* rbx = *(*(arg2 + 0x38) + (sx.q(*(*(r10 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
uint32_t rax_6 = rax_5 u>> 0xf
int32_t rcx_3 = rax_5 & 0x7fff
uint32_t arg_10 = rax_6
rax_6.b = not.b(rax_6.b)
*(arg2 + 0x10) = &rax[2]
int32_t* r14_1

if ((rax_6.b & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
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
    
    r14_1 = sx.q(rcx_3) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
uint32_t rax_10 = rax_9 u>> 0xf
int32_t rcx_5 = rax_9 & 0x7fff
uint32_t arg_18 = rax_10
rax_10.b = not.b(rax_10.b)
float (* rdx_6)[0x4]

if ((rax_10.b & 1) == 0)
    rdx_6 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_11 = *r8
    int32_t r9_2 = 0
    
    if (rcx_5 s>= rax_11)
        int64_t rdx_4 = 0
        
        do
            rcx_5 -= rax_11
            rdx_4 += 1
            rax_11 = r8[rdx_4]
            r9_2 += 1
        while (rcx_5 s>= rax_11)
    
    rdx_6 = sx.q(rcx_5) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint8_t r13_1 = (rax_13 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i = rax_13 & 0x7fff
void* rdx_11

if ((not.b(r13_1) & 1) == 0)
    rdx_11 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i s>= *r8)
        int64_t rax_15 = 0
        int32_t* rdx_9 = nullptr
        
        do
            i -= *(rdx_9 + r8)
            rax_15 += 1
            rdx_9 = rax_15 << 2
            r9_3 += 1
        while (i s>= *(rdx_9 + r8))
    
    rdx_11 = sx.q(i) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_17 = zx.d(rax[4])
void* arg_20 = rdx_11
uint8_t r12_1 = (rax_17 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_17 & 0x7fff
int128_t* r15_1

if ((not.b(r12_1) & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_19 = *r8
    int32_t r9_4 = 0
    
    if (rcx_8 s>= rax_19)
        int64_t rdx_14 = 0
        
        do
            rcx_8 -= rax_19
            rdx_14 += 1
            rax_19 = r8[rdx_14]
            r9_4 += 1
        while (rcx_8 s>= rax_19)
    
    r15_1 = sx.q(rcx_8) + *(r10 + (sx.q(r9_4) << 3))

int32_t rcx_10 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_2a8 = rcx_10
int32_t r9_5
r9_5.b = rcx_10 != 0x7fff
int32_t var_2a4 = r9_5
int32_t* rdx_17
void var_2a0

if (rcx_10 == 0x7fff)
    rdx_17 = &var_2a0
else
    rdx_17 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
float* var_298 = rdx_17
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_290 = rcx_12
int32_t rax_21
rax_21.b = rcx_12 != 0x7fff
void* var_280
void var_288

if (rcx_12 == 0x7fff)
    var_280 = &var_288
else
    var_280 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_278 = rcx_16
int32_t rax_22
rax_22.b = rcx_16 != 0x7fff
void* var_268
void var_270

if (rcx_16 == 0x7fff)
    var_268 = &var_270
else
    var_268 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_20 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_260 = rcx_20
int32_t rax_23
rax_23.b = rcx_20 != 0x7fff
void* var_250
void var_258

if (rcx_20 == 0x7fff)
    var_250 = &var_258
else
    var_250 = zx.q(rcx_20 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_24 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_248 = rcx_24
int32_t rax_24
rax_24.b = rcx_24 != 0x7fff
void* var_238
void var_240

if (rcx_24 == 0x7fff)
    var_238 = &var_240
else
    var_238 = zx.q(rcx_24 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_28 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_230 = rcx_28
int32_t rax_25
rax_25.b = rcx_28 != 0x7fff
void* var_220
void var_228

if (rcx_28 == 0x7fff)
    var_220 = &var_228
else
    var_220 = zx.q(rcx_28 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_32 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_218 = rcx_32
int32_t rax_26
rax_26.b = rcx_32 != 0x7fff
void* var_208
void var_210

if (rcx_32 == 0x7fff)
    var_208 = &var_210
else
    var_208 = zx.q(rcx_32 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_36 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_200 = rcx_36
int32_t rax_27
rax_27.b = rcx_36 != 0x7fff
float* var_1f0
void var_1f8

if (rcx_36 == 0x7fff)
    var_1f0 = &var_1f8
else
    var_1f0 = zx.q(rcx_36 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_39 = zx.d(rax[0xd])
*(arg2 + 0x10) = &rax[0xe]
int32_t r8_10 = rcx_39 & 0x7fff
int32_t var_1e8 = r8_10
int64_t result
result.b = r8_10 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_10 == 0x7fff)
    void var_1e0
    result = &var_1e0
    result_2 = &var_1e0
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_10) + *(arg2 + 0x70)

void* rbx_1 = *(rbx + 8)

if (rbx_1 != 0)
    int64_t* rbx_2 = *(rbx_1 + 0x50)
    int32_t rdx_25 = *(rbx + 0x17c)
    uint32_t rax_38 = zx.d(*(rbx_2 + 0x5f))
    
    if (rax_38 s>= rdx_25)
        rdx_25 = rax_38
    
    int32_t rax_39 = sub_1423647f0(rbx_2, rdx_25)
    int64_t* rbx_4 = *(*rbx_2 + (sx.q(rax_39) << 3))
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    void* var_1b8
    sub_14229e7e0(&rbx_4[0x2f], &var_1b8)
    int32_t var_1b0
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_1b0)
    result = zx.q(result_3)
    
    if (*(arg2 + 0x40) s> 0)
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        arg_10.q = zx.q(arg_10.b) << 2
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        float zmm9[0x4] = data_142dd3fb0
        float zmm10[0x4] = zx.o(0)
        int32_t zmm11[0x4] = data_142dd3f80
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        int64_t r13_2 = arg_10.q
        float (* r12_2)[0x4] = rdx_6
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        float zmm14[0x4] = data_142dd3fd0
        float* var_2b0_1 = var_298
        float zmm15[0x4]
        float var_d8_1[0x4] = zmm15
        
        do
            int64_t rcx_55 = sx.q(mods.dp.d(sx.q(*r14_1), var_1b0 s/ 3) * 3)
            void* rax_52 = var_1b8
            char var_1ac
            uint32_t r10_1
            
            if (var_1ac == 0)
                r10_1 = zx.d(*(rax_52 + (rcx_55 << 1)))
            else
                r10_1 = *(rax_52 + (rcx_55 << 2))
            
            uint32_t r8_12
            
            if (var_1ac == 0)
                r8_12 = zx.d(*(rax_52 + (rcx_55 << 1) + 2))
            else
                r8_12 = *(rax_52 + (rcx_55 << 2) + 4)
            
            uint32_t rdx_31
            
            if (var_1ac == 0)
                rdx_31 = zx.d(*(rax_52 + (rcx_55 << 1) + 4))
            else
                rdx_31 = *(rax_52 + (rcx_55 << 2) + 8)
            
            int64_t r9_6 = rbx_4[0x1a]
            zmm8 = *r15_1
            uint64_t rax_53 = zx.q(rdx_31)
            uint64_t rdx_32 = zx.q(r8_12)
            uint64_t r8_13 = zx.q(r10_1)
            int128_t* r10_2 = arg_20
            int32_t rcx_56 = *(r9_6 + (rdx_32 << 3))
            uint128_t zmm1 = _mm_unpacklo_epi8(zx.o(*(r9_6 + (rax_53 << 3))), zmm10[0].q)
            zmm7 = *r10_2
            zmm1 = _mm_unpacklo_epi16(zmm1, zmm10[0].q)
            zmm6 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm11) & zmm14) | zmm1)
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(rcx_56), zmm10[0].q), zmm10[0].q)
            zmm6 = _mm_mul_ps(zmm6, zmm9)
            float zmm0[0x4] = (_mm_cmpgt_epi32(zmm1, zmm11) & zmm14) | zmm1
            zmm1 = zx.o(*(r9_6 + (r8_13 << 3)))
            float zmm4[0x4] = _mm_cvtepi32_ps(zmm0)
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, zmm10[0].q), zmm10[0].q)
            zmm4 = _mm_mul_ps(zmm4, zmm9)
            float var_138_1[0x4] = zmm6
            float var_108_1[0x4] = zmm6
            float zmm3[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm11) & zmm14) | zmm1)
            zmm1.d = zmm8.d f* zmm6[0]
            zmm7[0] = zmm7[0] * zmm4[0]
            zmm3 = _mm_mul_ps(zmm3, zmm9)
            zmm9 = *r12_2
            float var_128_1[0x4] = zmm4
            arg_10 = zmm9[0]
            uint128_t zmm2
            zmm2.d = zmm9.d f* zmm3[0]
            float var_118_1[0x4] = zmm3
            zmm2.d = zmm2.d f+ zmm7[0]
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm9[0] = zmm9[0] * zmm0[0]
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            arg_18 = zmm2.d
            zmm2.d = zmm7.d f* zmm1.d
            zmm1.d = zmm8.d f* zmm0[0]
            zmm9[0] = zmm9[0] f+ zmm2.d
            zmm7[0] = zmm7[0] * zmm4[0]
            zmm2.d = zmm9.d f* zmm3[0]
            zmm9[0] = zmm9[0] f+ zmm1.d
            zmm2.d = zmm2.d f+ zmm7[0]
            zmm1.d = zmm8.d f* _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
            arg_20.d = zmm9[0]
            zmm2.d = zmm2.d f+ zmm1.d
            float (* var_2b8)[0x4]
            var_2b8.d = zmm2.d
            zmm2 = _mm_unpacklo_epi16(
                _mm_unpacklo_epi8(zx.o(*(r9_6 + (rax_53 << 3) + 4)), zmm10[0].q), zmm10[0].q)
            zmm7 = data_142dd3fb0
            uint128_t var_1c8_1 = zmm2
            zmm1 = (_mm_cmpgt_epi32(zmm2, zmm11) & zmm14) | zmm2
            float zmm5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm15 = _mm_cvtepi32_ps(zmm1)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm15 = _mm_mul_ps(zmm15, zmm7)
            zmm4 = zmm2
            zmm2.d = zmm2.d f* zmm15[0]
            zmm5[0] = zmm5[0] * zmm15[0]
            zmm1 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm5[0] = zmm5[0] f* zmm1.d
            zmm3 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            zmm4[0] = zmm4[0] * zmm3[0]
            float var_168_1[0x4] = zmm15
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xff)
            zmm4[0] = zmm4[0] - zmm5[0]
            zmm6[0] = zmm6[0] f* zmm1.d
            zmm6[0] = zmm6[0] * zmm3[0]
            zmm6[0] = zmm6[0] f- zmm2.d
            zmm15[0] = zmm15[0] * zmm4[0]
            zmm2 = zx.o(*(r9_6 + (rdx_32 << 3) + 4))
            zmm5[0] = zmm5[0] - zmm6[0]
            zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm2, zmm10[0].q), zmm10[0].q)
            zmm15[0] = zmm15[0] * zmm6[0]
            zmm15[0] = zmm15[0] * zmm5[0]
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(rcx_56), zmm10[0].q), zmm10[0].q)
            zmm6 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm11) & zmm14) | zmm1)
            zmm1 = _mm_cmpgt_epi32(zmm2, zmm11)
            zmm6 = _mm_mul_ps(zmm6, zmm7)
            float var_f8_1[0x4] = zmm6
            zmm9 = _mm_mul_ps(_mm_cvtepi32_ps((zmm1 & zmm14) | zmm2), zmm7)
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm4 = zmm2
            zmm2.d = zmm2.d f* zmm9[0]
            zmm3 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
            zmm1 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
            zmm5[0] = zmm5[0] f* zmm1.d
            zmm5[0] = zmm5[0] * zmm9[0]
            float var_158_1[0x4] = zmm9
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0xff)
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm4[0] = zmm4[0] - zmm5[0]
            zmm6[0] = zmm6[0] f* zmm1.d
            zmm6[0] = zmm6[0] * zmm3[0]
            zmm6[0] = zmm6[0] f- zmm2.d
            zmm9[0] = zmm9[0] * zmm4[0]
            zmm5[0] = zmm5[0] - zmm6[0]
            zmm8.d = zmm9.d f* zmm6[0]
            zmm9[0] = zmm9[0] * zmm5[0]
            zmm2 = zx.o(*(r9_6 + (r8_13 << 3) + 4))
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r9_6 + (r8_13 << 3))), zmm10[0].q), 
                zmm10[0].q)
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm10[0].q)
            zmm0 = _mm_cmpgt_epi32(zmm1, zmm11)
            zmm2 = _mm_unpacklo_epi16(zmm2, zmm10[0].q)
            int64_t var_188_1 = 0
            int32_t var_180_1 = 0
            zmm6 = __mulps_xmmps_memps(_mm_cvtepi32_ps((zmm0 & zmm14) | zmm1), data_142dd3fb0)
            float var_e8_1[0x4] = zmm6
            zmm14 = __mulps_xmmps_memps(
                _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm2, zmm11) & zmm14) | zmm2), data_142dd3fb0)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm4 = zmm2
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2.d = zmm2.d f* zmm14[0]
            zmm3 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
            zmm1 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
            zmm5[0] = zmm5[0] f* zmm1.d
            zmm5[0] = zmm5[0] * zmm14[0]
            float var_148_1[0x4] = zmm14
            zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xff)
            zmm11 = zmm14
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm4[0] = zmm4[0] - zmm5[0]
            zmm0 = zmm6
            zmm0[0] = zmm0[0] f* zmm1.d
            zmm6[0] = zmm6[0] * zmm3[0]
            zmm0[0] = zmm0[0] f- zmm2.d
            zmm11[0] = zmm11[0] f* zmm4[0]
            zmm4 = *r15_1
            zmm5[0] = zmm5[0] - zmm6[0]
            zmm6 = data_142dd3f80
            zmm1.d = zmm4.d f* zmm15[0]
            zmm13 = arg_10
            zmm14[0] = zmm14[0] * zmm0[0]
            zmm4[0] = zmm4[0] * zmm15[0]
            zmm12 = *r10_2
            zmm14[0] = zmm14[0] * zmm5[0]
            zmm2.d = zmm4.d f* zmm15[0]
            zmm9[0] = zmm9[0] * zmm12[0]
            zmm11[0] = zmm11[0] f* zmm13[0]
            zmm9[0] = zmm9[0] * zmm12[0]
            zmm11[0] = zmm11[0] f+ zmm9[0]
            zmm14[0] = zmm14[0] * zmm13[0]
            zmm7 = data_142dd3fd0
            zmm14[0] = zmm14[0] * zmm13[0]
            zmm14[0] = zmm14[0] + zmm9[0]
            zmm8.d = zmm8.d f* zmm12[0]
            zmm9 = data_142dd3fb0
            zmm11[0] = zmm11[0] f+ zmm4[0]
            zmm0 = _mm_cmpgt_epi32(var_1c8_1, zmm6)
            zmm14[0] = zmm14[0] f+ zmm8.d
            zmm14[0] = zmm14[0] f+ zmm2.d
            zmm2 = _mm_cvtepi32_ps((zmm0 & zmm7) | var_1c8_1)
            zmm14[0] = zmm14[0] f+ zmm1.d
            zmm1 = zx.o(*(r9_6 + (rdx_32 << 3) + 4))
            zmm2 = _mm_mul_ps(zmm2, zmm9)
            var_188_1.o = zmm2
            r14_1 += r13_2
            r12_2 = &(*r12_2)[zx.q(arg_18.b)]
            r15_1 += zx.q(r12_1) << 2
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, 0), 0)
            int64_t var_178_1 = 0
            int32_t var_170_1 = 0
            var_1c8_1.q = 0
            zmm0 = (_mm_cmpgt_epi32(zmm1, zmm6) & zmm7) | zmm1
            var_1c8_1:8.d = 0
            zmm1 = zx.o(*(r9_6 + (r8_13 << 3) + 4))
            zmm3 = _mm_cvtepi32_ps(zmm0)
            zmm1 = _mm_unpacklo_epi8(zmm1, 0)
            zmm3 = _mm_mul_ps(zmm3, zmm9)
            zmm1 = _mm_unpacklo_epi16(zmm1, 0)
            var_178_1.o = zmm3
            zmm5 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm6) & zmm7) | zmm1)
            zmm4[0] = zmm4[0] f* zmm2.d
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm1.d = zmm12.d f* _mm_shuffle_ps(zmm3, zmm3, 0x55)[0]
            zmm5 = _mm_mul_ps(zmm5, zmm9)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm4[0] = zmm4[0] f* zmm2.d
            zmm2.d = zmm12.d f* zmm3[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm12[0] = zmm12[0] * zmm3[0]
            zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm13[0] = zmm13[0] * zmm0[0]
            *var_2b0_1 = arg_18[0]
            zmm13[0] = zmm13[0] f+ zmm1.d
            zmm0 = arg_20.d
            arg_10 = zmm4[0]
            zmm13[0] = zmm13[0] * zmm5[0]
            arg_20 = r10_2 + (zx.q(r13_1) << 2)
            *var_280 = zmm0[0]
            zmm13[0] = zmm13[0] + zmm4[0]
            zmm13[0] = zmm13[0] f+ zmm2.d
            float var_1c8_2[0x4] = zmm5
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            *var_268 = var_2b8.d[0]
            zmm13[0] = zmm13[0] * zmm5[0]
            zmm13[0] = zmm13[0] + zmm4[0]
            *var_250 = zmm11[0]
            zmm13[0] = zmm13[0] + zmm12[0]
            *var_238 = zmm14[0]
            zmm13[0] = zmm13[0] f+ arg_10
            *var_220 = zmm14[0]
            *var_208 = zmm13[0]
            *var_1f0 = zmm13[0]
            *result_2 = zmm13[0]
            i_1 += 1
            zmm10 = zx.o(0)
            zmm11 = data_142dd3f80
            zmm14 = data_142dd3fd0
            float* r8_14 = &var_298[sx.q(var_2a4)]
            var_2b0_1 = r8_14
            var_298 = r8_14
            var_280 += sx.q(rax_21) << 2
            var_268 += sx.q(rax_22) << 2
            var_250 += sx.q(rax_23) << 2
            var_238 += sx.q(rax_24) << 2
            var_220 += sx.q(rax_25) << 2
            var_208 += sx.q(rax_26) << 2
            result = result_2
            var_1f0 = &var_1f0[sx.q(rax_27)]
            result_2 = result + (sx.q(result_1) << 2)
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_4 != 0)
        result = zx.q(rbx_4[1].d)
        rbx_4[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_4)(rbx_4, 1)
else
    int32_t r8_11 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_11 += 1
            *rdx_17 = 0x3f800000
            int32_t* rdx_18 = var_280
            var_280 = &rdx_18[sx.q(rax_21)]
            *rdx_18 = 0
            int32_t* rdx_19 = var_268
            var_268 = &rdx_19[sx.q(rax_22)]
            *rdx_19 = 0
            int32_t* rdx_20 = var_250
            var_250 = &rdx_20[sx.q(rax_23)]
            *rdx_20 = 0
            int32_t* rdx_21 = var_238
            var_238 = &rdx_21[sx.q(rax_24)]
            *rdx_21 = 0x3f800000
            int32_t* rdx_22 = var_220
            var_220 = &rdx_22[sx.q(rax_25)]
            *rdx_22 = 0
            int32_t* rdx_23 = var_208
            var_208 = &rdx_23[sx.q(rax_26)]
            *rdx_23 = 0
            int32_t* rdx_24 = var_1f0
            var_1f0 = &rdx_24[sx.q(rax_27)]
            *rdx_24 = 0
            int32_t* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = 0x3f800000
            
            if (r8_11 s>= *(arg2 + 0x40))
                break
            
            rdx_17 = &rdx_17[sx.q(r9_5)]
            r9_5 = var_2a4

return result
