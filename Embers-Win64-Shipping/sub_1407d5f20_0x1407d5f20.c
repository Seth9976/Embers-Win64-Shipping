// 函数: sub_1407d5f20
// 地址: 0x1407d5f20
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
void* rdx_6

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
void* arg_20 = rdx_6
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
void* var_2a0 = rdx_11
uint8_t r12_1 = (rax_17 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_17 & 0x7fff
float (* r15_1)[0x4]

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
int32_t var_298 = rcx_10
int32_t r9_5
r9_5.b = rcx_10 != 0x7fff
int32_t var_294 = r9_5
int32_t* rdx_17
void var_290

if (rcx_10 == 0x7fff)
    rdx_17 = &var_290
else
    rdx_17 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
int32_t* var_288 = rdx_17
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_280 = rcx_12
int32_t rax_21
rax_21.b = rcx_12 != 0x7fff
void* var_270
void var_278

if (rcx_12 == 0x7fff)
    var_270 = &var_278
else
    var_270 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_268 = rcx_16
int32_t rax_22
rax_22.b = rcx_16 != 0x7fff
void* var_258
void var_260

if (rcx_16 == 0x7fff)
    var_258 = &var_260
else
    var_258 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_20 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_250 = rcx_20
int32_t rax_23
rax_23.b = rcx_20 != 0x7fff
void* var_240
void var_248

if (rcx_20 == 0x7fff)
    var_240 = &var_248
else
    var_240 = zx.q(rcx_20 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_24 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_238 = rcx_24
int32_t rax_24
rax_24.b = rcx_24 != 0x7fff
void* var_228
void var_230

if (rcx_24 == 0x7fff)
    var_228 = &var_230
else
    var_228 = zx.q(rcx_24 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_28 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_220 = rcx_28
int32_t rax_25
rax_25.b = rcx_28 != 0x7fff
void* var_210
void var_218

if (rcx_28 == 0x7fff)
    var_210 = &var_218
else
    var_210 = zx.q(rcx_28 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_32 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_208 = rcx_32
int32_t rax_26
rax_26.b = rcx_32 != 0x7fff
void* var_1f8
void var_200

if (rcx_32 == 0x7fff)
    var_1f8 = &var_200
else
    var_1f8 = zx.q(rcx_32 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_36 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_1f0 = rcx_36
int32_t rax_27
rax_27.b = rcx_36 != 0x7fff
float* var_1e0
void var_1e8

if (rcx_36 == 0x7fff)
    var_1e0 = &var_1e8
else
    var_1e0 = zx.q(rcx_36 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_39 = zx.d(rax[0xd])
*(arg2 + 0x10) = &rax[0xe]
int32_t r8_10 = rcx_39 & 0x7fff
int32_t var_1d8 = r8_10
int64_t result
result.b = r8_10 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_10 == 0x7fff)
    void var_1d0
    result = &var_1d0
    result_2 = &var_1d0
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
    
    void* var_1c0
    sub_14229e7e0(&rbx_4[0x2f], &var_1c0)
    int32_t var_1b8
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_1b8)
    result = zx.q(result_3)
    
    if (*(arg2 + 0x40) s> 0)
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        arg_10.q = zx.q(arg_10.b) << 2
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4] = zx.o(0)
        int32_t zmm9[0x4] = data_142dd3f90
        arg_18.q = zx.q(arg_18.b) << 2
        float zmm10[0x4] = data_142dd3fc0
        float zmm11[0x4] = data_142dd3fa0
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        int64_t r13_2 = arg_18.q
        int64_t r12_2 = arg_10.q
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        uint128_t zmm14
        uint128_t var_c8_1 = zmm14
        int32_t* var_2a8_1 = var_288
        uint128_t zmm15
        uint128_t var_d8_1 = zmm15
        
        do
            int64_t rcx_55 = sx.q(mods.dp.d(sx.q(*r14_1), var_1b8 s/ 3) * 3)
            void* rax_52 = var_1c0
            char var_1b4
            uint32_t r10_1
            
            if (var_1b4 == 0)
                r10_1 = zx.d(*(rax_52 + (rcx_55 << 1)))
            else
                r10_1 = *(rax_52 + (rcx_55 << 2))
            
            uint32_t r9_6
            
            if (var_1b4 == 0)
                r9_6 = zx.d(*(rax_52 + (rcx_55 << 1) + 2))
            else
                r9_6 = *(rax_52 + (rcx_55 << 2) + 4)
            
            uint32_t rdx_31
            
            if (var_1b4 == 0)
                rdx_31 = zx.d(*(rax_52 + (rcx_55 << 1) + 4))
            else
                rdx_31 = *(rax_52 + (rcx_55 << 2) + 8)
            
            int64_t r8_12 = rbx_4[0x1a]
            zmm7 = *r15_1
            uint64_t rax_54 = zx.q(rdx_31) * 2
            int128_t* r9_7 = var_2a0
            uint64_t rcx_57 = zx.q(r9_6) * 2
            int128_t* r10_2 = arg_20
            uint64_t rdx_33 = zx.q(r10_1) * 2
            zmm6 = *r9_7
            uint128_t zmm1 = _mm_unpacklo_epi16(zx.o(*(r8_12 + (rax_54 << 3))), zmm8[0].q)
            zmm14 = *r10_2
            arg_10 = zmm14.d
            uint128_t zmm0 = (_mm_cmpgt_epi32(zmm1, zmm9) & zmm10) | zmm1
            zmm1 = zx.o(*(r8_12 + (rcx_57 << 3)))
            float zmm5[0x4] = _mm_cvtepi32_ps(zmm0)
            zmm1 = _mm_unpacklo_epi16(zmm1, zmm8[0].q)
            zmm5 = _mm_mul_ps(zmm5, zmm11)
            zmm0 = (_mm_cmpgt_epi32(zmm1, zmm9) & zmm10) | zmm1
            zmm1 = zx.o(*(r8_12 + (rdx_33 << 3)))
            float zmm4[0x4] = _mm_cvtepi32_ps(zmm0)
            zmm1 = _mm_unpacklo_epi16(zmm1, zmm8[0].q)
            zmm4 = _mm_mul_ps(zmm4, zmm11)
            float var_138_1[0x4] = zmm5
            float zmm3[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm9) & zmm10) | zmm1)
            zmm1.d = zmm7.d f* zmm5[0]
            zmm0.d = zmm6.d f* zmm4[0]
            zmm3 = _mm_mul_ps(zmm3, zmm11)
            float var_128_1[0x4] = zmm4
            uint128_t zmm2
            zmm2.d = zmm14.d f* zmm3[0]
            float var_118_1[0x4] = zmm3
            zmm2.d = zmm2.d f+ zmm0.d
            zmm15.d = zmm14.d f* _mm_shuffle_ps(zmm3, zmm3, 0x55).d
            zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm14.d = zmm14.d f* _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
            arg_18 = zmm2.d
            zmm2.d = zmm6.d f* _mm_shuffle_ps(zmm4, zmm4, 0x55).d
            zmm1.d = zmm7.d f* zmm0.d
            zmm0.d = zmm6.d f* _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
            zmm15.d = zmm15.d f+ zmm2.d
            zmm14.d = zmm14.d f+ zmm0.d
            zmm15.d = zmm15.d f+ zmm1.d
            zmm1.d = zmm7.d f* _mm_shuffle_ps(zmm5, zmm5, 0xaa)[0]
            zmm14.d = zmm14.d f+ zmm1.d
            zmm1 = _mm_unpacklo_epi16(zx.o(*(r8_12 + (rax_54 << 3))), zmm8[0].q)
            zmm6 = _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm9) & zmm10) | zmm1), zmm11)
            zmm2 = zx.o(*(r8_12 + (rax_54 << 3) + 8))
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2 = _mm_unpacklo_epi16(zmm2, zmm8[0].q)
            uint128_t var_108_1 = zmm6
            zmm13 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm2, zmm9) & zmm10) | zmm2)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm13 = _mm_mul_ps(zmm13, zmm11)
            zmm4 = zmm2
            zmm2.d = zmm2.d f* zmm13[0]
            zmm5[0] = zmm5[0] * zmm13[0]
            zmm1 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            zmm0.d = zmm5.d f* zmm1.d
            zmm3 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            zmm4[0] = zmm4[0] * zmm3[0]
            float var_168_1[0x4] = zmm13
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
            zmm4[0] = zmm4[0] f- zmm0.d
            zmm0.d = zmm6.d f* zmm1.d
            zmm1 = _mm_unpacklo_epi16(zx.o(*(r8_12 + (rcx_57 << 3))), zmm8[0].q)
            zmm0.d = zmm0.d f- zmm2.d
            zmm6.d = zmm6.d f* zmm3[0]
            zmm2 = _mm_unpacklo_epi16(zx.o(*(r8_12 + (rcx_57 << 3) + 8)), zmm8[0].q)
            zmm5[0] = zmm5[0] f- zmm6.d
            zmm13[0] = zmm13[0] * zmm4[0]
            zmm13[0] = zmm13[0] f* zmm0.d
            zmm0 = _mm_cmpgt_epi32(zmm1, zmm9) & zmm10
            zmm13[0] = zmm13[0] * zmm5[0]
            zmm0 |= zmm1
            zmm1 = _mm_cmpgt_epi32(zmm2, zmm9)
            zmm6 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), zmm11)
            uint128_t var_f8_1 = zmm6
            zmm11 = __mulps_xmmps_memps(_mm_cvtepi32_ps((zmm1 & zmm10) | zmm2), data_142dd3fa0)
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm4 = zmm2
            zmm2.d = zmm2.d f* zmm11[0]
            zmm3 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
            zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
            zmm0.d = zmm5.d f* zmm1.d
            zmm5[0] = zmm5[0] * zmm11[0]
            float var_158_1[0x4] = zmm11
            zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
            zmm9 = zmm11
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm4[0] = zmm4[0] f- zmm0.d
            zmm0.d = zmm6.d f* zmm1.d
            zmm1 = zx.o(*(r8_12 + (rdx_33 << 3)))
            zmm6.d = zmm6.d f* zmm3[0]
            zmm0.d = zmm0.d f- zmm2.d
            zmm9[0] = zmm9[0] f* zmm4[0]
            zmm5[0] = zmm5[0] f- zmm6.d
            zmm11[0] = zmm11[0] f* zmm0.d
            zmm11[0] = zmm11[0] * zmm5[0]
            zmm2 = zx.o(*(r8_12 + (rdx_33 << 3) + 8))
            zmm1 = _mm_unpacklo_epi16(zmm1, zmm8[0].q)
            zmm2 = _mm_unpacklo_epi16(zmm2, zmm8[0].q)
            int64_t var_198_1 = 0
            int32_t var_190_1 = 0
            zmm6 = __mulps_xmmps_memps(
                _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                    | zmm1), 
                data_142dd3fa0)
            uint128_t var_e8_1 = zmm6
            zmm8 = __mulps_xmmps_memps(
                _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f90) & data_142dd3fc0)
                    | zmm2), 
                data_142dd3fa0)
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm4 = zmm2
            zmm5[0] = zmm5[0] * zmm8[0]
            zmm3 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm1 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm0.d = zmm5.d f* zmm1.d
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm2.d = zmm2.d f* zmm8[0]
            zmm4[0] = zmm4[0] f- zmm0.d
            float var_148_1[0x4] = zmm8
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
            zmm0.d = zmm6.d f* zmm1.d
            zmm6.d = zmm6.d f* zmm3[0]
            zmm0.d = zmm0.d f- zmm2.d
            zmm8[0] = zmm8[0] * zmm4[0]
            zmm5[0] = zmm5[0] f- zmm6.d
            zmm8[0] = zmm8[0] f* zmm0.d
            zmm0 = *r15_1
            zmm8[0] = zmm8[0] * zmm5[0]
            zmm5 = zmm0
            zmm6.d = zmm0.d f* zmm13[0]
            zmm12 = *r9_7
            zmm5[0] = zmm5[0] * zmm13[0]
            zmm7 = zmm0
            zmm1.d = zmm12.d f* zmm11[0]
            zmm7[0] = zmm7[0] * zmm13[0]
            zmm13 = arg_10
            zmm0.d = zmm12.d f* zmm9[0]
            zmm2.d = zmm12.d f* zmm11[0]
            zmm9 = zmm13
            zmm13[0] = zmm13[0] * zmm8[0]
            zmm13[0] = zmm13[0] * zmm8[0]
            zmm13[0] = zmm13[0] f+ zmm1.d
            zmm9[0] = zmm9[0] f* zmm8[0]
            zmm1 = zx.o(*(r8_12 + (rax_54 << 3) + 8))
            zmm13[0] = zmm13[0] f+ zmm0.d
            zmm1 = _mm_unpacklo_epi16(zmm1, 0)
            zmm9[0] = zmm9[0] f+ zmm2.d
            zmm13[0] = zmm13[0] f+ zmm6.d
            zmm6 = data_142dd3fc0
            zmm13[0] = zmm13[0] + zmm5[0]
            zmm5 = data_142dd3f90
            zmm0 = _mm_cmpgt_epi32(zmm1, zmm5) & zmm6
            zmm9[0] = zmm9[0] f+ zmm7[0]
            zmm0 |= zmm1
            zmm8 = *r15_1
            zmm1 = zx.o(*(r8_12 + (rcx_57 << 3) + 8))
            r14_1 += r12_2
            zmm7 = data_142dd3fa0
            zmm2 = _mm_cvtepi32_ps(zmm0)
            int64_t var_188_1 = 0
            int32_t var_180_1 = 0
            int64_t var_178_1 = 0
            int32_t var_170_1 = 0
            zmm1 = _mm_unpacklo_epi16(zmm1, 0)
            zmm2 = _mm_mul_ps(zmm2, zmm7)
            arg_20 = r10_2 + r13_2
            var_2a0 = r9_7 + (zx.q(r13_1) << 2)
            zmm0 = (_mm_cmpgt_epi32(zmm1, zmm5) & zmm6) | zmm1
            zmm1 = zx.o(*(r8_12 + (rdx_33 << 3) + 8))
            zmm3 = _mm_cvtepi32_ps(zmm0)
            zmm1 = _mm_unpacklo_epi16(zmm1, 0)
            zmm3 = _mm_mul_ps(zmm3, zmm7)
            var_198_1.o = zmm2
            zmm5 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm5) & zmm6) | zmm1)
            var_188_1.o = zmm3
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5 = _mm_mul_ps(zmm5, zmm7)
            zmm6.d = zmm8.d f* zmm0.d
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm8[0] = zmm8[0] f* zmm2.d
            zmm1.d = zmm12.d f* zmm0.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm8[0] = zmm8[0] f* zmm2.d
            zmm2.d = zmm12.d f* zmm3[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm12[0] = zmm12[0] * zmm3[0]
            zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm13[0] = zmm13[0] f* zmm0.d
            *var_2a8_1 = arg_18.d
            zmm13[0] = zmm13[0] f+ zmm1.d
            zmm13[0] = zmm13[0] * zmm5[0]
            var_178_1.o = zmm5
            *var_270 = zmm15.d
            zmm13[0] = zmm13[0] f+ zmm2.d
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            zmm13[0] = zmm13[0] f+ zmm6.d
            zmm13[0] = zmm13[0] * zmm5[0]
            *var_258 = zmm14.d
            zmm13[0] = zmm13[0] + zmm8[0]
            zmm13[0] = zmm13[0] + zmm12[0]
            *var_240 = zmm13[0]
            zmm13[0] = zmm13[0] + zmm8[0]
            *var_228 = zmm13[0]
            *var_210 = zmm9[0]
            *var_1f8 = zmm13[0]
            *var_1e0 = zmm13[0]
            *result_2 = zmm13[0]
            i_1 += 1
            zmm8 = zx.o(0)
            r15_1 = &(*r15_1)[zx.q(r12_1)]
            zmm9 = data_142dd3f90
            zmm10 = data_142dd3fc0
            int32_t* r8_13 = &var_288[sx.q(var_294)]
            zmm11 = data_142dd3fa0
            var_2a8_1 = r8_13
            var_288 = r8_13
            var_270 += sx.q(rax_21) << 2
            var_258 += sx.q(rax_22) << 2
            var_240 += sx.q(rax_23) << 2
            var_228 += sx.q(rax_24) << 2
            var_210 += sx.q(rax_25) << 2
            var_1f8 += sx.q(rax_26) << 2
            result = result_2
            var_1e0 = &var_1e0[sx.q(rax_27)]
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
            int32_t* rdx_18 = var_270
            var_270 = &rdx_18[sx.q(rax_21)]
            *rdx_18 = 0
            int32_t* rdx_19 = var_258
            var_258 = &rdx_19[sx.q(rax_22)]
            *rdx_19 = 0
            int32_t* rdx_20 = var_240
            var_240 = &rdx_20[sx.q(rax_23)]
            *rdx_20 = 0
            int32_t* rdx_21 = var_228
            var_228 = &rdx_21[sx.q(rax_24)]
            *rdx_21 = 0x3f800000
            int32_t* rdx_22 = var_210
            var_210 = &rdx_22[sx.q(rax_25)]
            *rdx_22 = 0
            int32_t* rdx_23 = var_1f8
            var_1f8 = &rdx_23[sx.q(rax_26)]
            *rdx_23 = 0
            int32_t* rdx_24 = var_1e0
            var_1e0 = &rdx_24[sx.q(rax_27)]
            *rdx_24 = 0
            int32_t* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = 0x3f800000
            
            if (r8_11 s>= *(arg2 + 0x40))
                break
            
            rdx_17 = &rdx_17[sx.q(r9_5)]
            r9_5 = var_294

return result
