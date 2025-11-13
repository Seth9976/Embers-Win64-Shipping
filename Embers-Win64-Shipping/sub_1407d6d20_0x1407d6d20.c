// 函数: sub_1407d6d20
// 地址: 0x1407d6d20
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
int128_t* rdx_6

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
void* var_320 = rdx_11
uint8_t r15_1 = (rax_17 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_17 & 0x7fff
int128_t* r12_1

if ((not.b(r15_1) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
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
    
    r12_1 = sx.q(rcx_8) + *(r10 + (sx.q(r9_4) << 3))

int32_t rcx_10 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_318 = rcx_10
int32_t r9_5
r9_5.b = rcx_10 != 0x7fff
int32_t var_314 = r9_5
int32_t* rdx_17
void var_310

if (rcx_10 == 0x7fff)
    rdx_17 = &var_310
else
    rdx_17 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
float* var_308 = rdx_17
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_300 = rcx_12
int32_t rax_21
rax_21.b = rcx_12 != 0x7fff
void* var_2f0
void var_2f8

if (rcx_12 == 0x7fff)
    var_2f0 = &var_2f8
else
    var_2f0 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_2e8 = rcx_16
int32_t rax_22
rax_22.b = rcx_16 != 0x7fff
void* var_2d8
void var_2e0

if (rcx_16 == 0x7fff)
    var_2d8 = &var_2e0
else
    var_2d8 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_20 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_2d0 = rcx_20
int32_t rax_23
rax_23.b = rcx_20 != 0x7fff
void* var_2c0
void var_2c8

if (rcx_20 == 0x7fff)
    var_2c0 = &var_2c8
else
    var_2c0 = zx.q(rcx_20 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_24 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_2b8 = rcx_24
int32_t rax_24
rax_24.b = rcx_24 != 0x7fff
void* var_2a8
void var_2b0

if (rcx_24 == 0x7fff)
    var_2a8 = &var_2b0
else
    var_2a8 = zx.q(rcx_24 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_28 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_2a0 = rcx_28
int32_t rax_25
rax_25.b = rcx_28 != 0x7fff
void* var_290
void var_298

if (rcx_28 == 0x7fff)
    var_290 = &var_298
else
    var_290 = zx.q(rcx_28 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_32 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_288 = rcx_32
int32_t rax_26
rax_26.b = rcx_32 != 0x7fff
float* var_278
void var_280

if (rcx_32 == 0x7fff)
    var_278 = &var_280
else
    var_278 = zx.q(rcx_32 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_36 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_270 = rcx_36
int32_t rax_27
rax_27.b = rcx_36 != 0x7fff
void* var_260
void var_268

if (rcx_36 == 0x7fff)
    var_260 = &var_268
else
    var_260 = zx.q(rcx_36 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_39 = zx.d(rax[0xd])
*(arg2 + 0x10) = &rax[0xe]
int32_t r8_10 = rcx_39 & 0x7fff
int32_t var_338 = r8_10
int64_t result
result.b = r8_10 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_10 == 0x7fff)
    void var_330
    result = &var_330
    result_2 = &var_330
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
    
    void* var_1f8
    sub_14229e7e0(&rbx_4[0x2f], &var_1f8)
    int32_t var_1f0
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_1f0)
    result = zx.q(result_3)
    
    if (*(arg2 + 0x40) s> 0)
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        arg_10.q = zx.q(arg_10.b) << 2
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        int32_t zmm8[0x4] = data_142dd3f80
        float zmm9[0x4] = data_142dd3fd0
        uint64_t rax_43 = zx.q(arg_18.b) << 2
        float zmm10[0x4] = data_142dd3fb0
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        int64_t r13_2 = arg_10.q
        int128_t* r15_2 = rdx_6
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        float zmm14[0x4] = zx.o(0)
        float* var_250_1 = var_308
        float zmm15[0x4]
        float var_d8_1[0x4] = zmm15
        int32_t var_1dc_1 = 0
        int32_t var_21c_1 = 0
        int32_t var_1fc_1 = 0
        float var_178_1[0x4] = 0x3f000000
        
        do
            int64_t rcx_55 = sx.q(mods.dp.d(sx.q(*r14_1), var_1f0 s/ 3) * 3)
            void* rax_52 = var_1f8
            char var_1ec
            uint32_t r10_1
            
            if (var_1ec == 0)
                r10_1 = zx.d(*(rax_52 + (rcx_55 << 1)))
            else
                r10_1 = *(rax_52 + (rcx_55 << 2))
            
            uint32_t r8_12
            
            if (var_1ec == 0)
                r8_12 = zx.d(*(rax_52 + (rcx_55 << 1) + 2))
            else
                r8_12 = *(rax_52 + (rcx_55 << 2) + 4)
            
            uint32_t rdx_31
            
            if (var_1ec == 0)
                rdx_31 = zx.d(*(rax_52 + (rcx_55 << 1) + 4))
            else
                rdx_31 = *(rax_52 + (rcx_55 << 2) + 8)
            
            int64_t r9_6 = rbx_4[0x1a]
            float zmm3[0x4] = *r15_2
            zmm15 = *r12_1
            uint64_t rax_53 = zx.q(rdx_31)
            uint64_t rdx_32 = zx.q(r8_12)
            uint64_t r8_13 = zx.q(r10_1)
            int128_t* r10_2 = var_320
            int32_t rcx_56 = *(r9_6 + (rdx_32 << 3))
            float zmm1[0x4] = _mm_unpacklo_epi8(zx.o(*(r9_6 + (rax_53 << 3))), zmm14[0].q)
            float zmm5[0x4] = *r10_2
            zmm1 = _mm_unpacklo_epi16(zmm1, zmm14[0].q)
            zmm6 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm8) & zmm9) | zmm1)
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(rcx_56), zmm14[0].q), zmm14[0].q)
            zmm6 = _mm_mul_ps(zmm6, zmm10)
            float zmm0[0x4] = (_mm_cmpgt_epi32(zmm1, zmm8) & zmm9) | zmm1
            zmm1 = zx.o(*(r9_6 + (r8_13 << 3)))
            float zmm2[0x4] = _mm_cvtepi32_ps(zmm0)
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, zmm14[0].q), zmm14[0].q)
            zmm2 = _mm_mul_ps(zmm2, zmm10)
            float var_128_1[0x4] = zmm6
            float var_f8_1[0x4] = zmm6
            zmm7 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm8) & zmm9) | zmm1)
            float var_118_1[0x4] = zmm2
            zmm2[0] = zmm2[0] * zmm5[0]
            zmm7 = _mm_mul_ps(zmm7, zmm10)
            zmm1 = zmm7
            float var_108_1[0x4] = zmm7
            zmm1[0] = zmm1[0] * zmm3[0]
            float zmm4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm1[0] = zmm1[0] + zmm2[0]
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm7[0] = zmm7[0] * zmm3[0]
            zmm6[0] = zmm6[0] * zmm15[0]
            zmm1[0] = zmm1[0] + zmm6[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm2[0] = zmm2[0] * zmm5[0]
            arg_10 = zmm1[0]
            zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm7[0] = zmm7[0] + zmm2[0]
            zmm1[0] = zmm1[0] * zmm15[0]
            zmm2 = zx.o(*(r9_6 + (rax_53 << 3) + 4))
            zmm0[0] = zmm0[0] * zmm5[0]
            zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm2, zmm14[0].q), zmm14[0].q)
            zmm4[0] = zmm4[0] + zmm0[0]
            float var_238_1[0x4] = zmm2
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm0[0] = zmm0[0] * zmm15[0]
            zmm4[0] = zmm4[0] + zmm1[0]
            zmm1 = _mm_cmpgt_epi32(zmm2, zmm8) & zmm9
            zmm7[0] = zmm7[0] + zmm0[0]
            zmm13 = _mm_mul_ps(_mm_cvtepi32_ps(zmm1 | zmm2), zmm10)
            int128_t* var_218
            var_218.o = zmm7
            float var_168_1[0x4] = zmm13
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2[0] = zmm2[0] * zmm13[0]
            zmm5[0] = zmm5[0] * zmm13[0]
            zmm3 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            zmm1 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            zmm5[0] = zmm5[0] * zmm1[0]
            zmm2[0] = zmm2[0] * zmm3[0]
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
            zmm2[0] = zmm2[0] - zmm5[0]
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm6[0] = zmm6[0] * zmm3[0]
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm13[0] = zmm13[0] * zmm2[0]
            zmm2 = zx.o(*(r9_6 + (rdx_32 << 3) + 4))
            zmm5[0] = zmm5[0] - zmm6[0]
            zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm2, zmm14[0].q), zmm14[0].q)
            zmm13[0] = zmm13[0] * zmm6[0]
            zmm13[0] = zmm13[0] * zmm5[0]
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(rcx_56), zmm14[0].q), zmm14[0].q)
            zmm6 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm8) & zmm9) | zmm1)
            zmm1 = _mm_cmpgt_epi32(zmm2, zmm8)
            zmm6 = _mm_mul_ps(zmm6, zmm10)
            float var_e8_1[0x4] = zmm6
            zmm10 = __mulps_xmmps_memps(_mm_cvtepi32_ps((zmm1 & zmm9) | zmm2), data_142dd3fb0)
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm2[0] = zmm2[0] * zmm10[0]
            zmm3 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
            zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            zmm5[0] = zmm5[0] * zmm1[0]
            zmm5[0] = zmm5[0] * zmm10[0]
            float var_158_1[0x4] = zmm10
            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0xff)
            zmm2[0] = zmm2[0] * zmm3[0]
            zmm8 = zmm10
            zmm2[0] = zmm2[0] - zmm5[0]
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm1 = zx.o(*(r9_6 + (r8_13 << 3)))
            zmm6[0] = zmm6[0] * zmm3[0]
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, zmm14[0].q), zmm14[0].q)
            zmm5[0] = zmm5[0] - zmm6[0]
            zmm8[0] = zmm8[0] f* zmm2[0]
            zmm10[0] = zmm10[0] * zmm6[0]
            zmm0 = (__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1
            zmm10[0] = zmm10[0] * zmm5[0]
            zmm6 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm0), data_142dd3fb0)
            int64_t var_1b8_1 = 0
            zmm2 = _mm_unpacklo_epi16(
                _mm_unpacklo_epi8(zx.o(*(r9_6 + (r8_13 << 3) + 4)), zmm14[0].q), zmm14[0].q)
            float var_138_1[0x4] = zmm6
            zmm1 = (__pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f80) & data_142dd3fd0) | zmm2
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm7 = _mm_cvtepi32_ps(zmm1)
            int32_t var_1b0_1 = 0
            zmm15[0] = zmm15[0] * zmm13[0]
            zmm7 = __mulps_xmmps_memps(zmm7, data_142dd3fb0)
            zmm11 = *r10_2
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm15[0] = zmm15[0] * zmm13[0]
            zmm12 = *r12_1
            zmm3 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm5[0] = zmm5[0] * zmm1[0]
            zmm2[0] = zmm2[0] * zmm3[0]
            zmm2[0] = zmm2[0] * zmm7[0]
            zmm2[0] = zmm2[0] - zmm5[0]
            zmm5[0] = zmm5[0] * zmm7[0]
            float var_148_1[0x4] = zmm7
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm6[0] = zmm6[0] * zmm3[0]
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
            zmm11[0] = zmm11[0] f* zmm8[0]
            zmm8 = *r15_2
            zmm5[0] = zmm5[0] - zmm6[0]
            zmm7[0] = zmm7[0] * zmm2[0]
            zmm7[0] = zmm7[0] * zmm6[0]
            zmm0 = zmm8
            zmm12[0] = zmm12[0] * zmm13[0]
            zmm0[0] = zmm0[0] * zmm7[0]
            zmm7[0] = zmm7[0] * zmm5[0]
            zmm1 = zmm8
            zmm11[0] = zmm11[0] + zmm0[0]
            zmm1[0] = zmm1[0] * zmm7[0]
            zmm11[0] = zmm11[0] * zmm10[0]
            zmm2 = zmm8
            zmm2[0] = zmm2[0] * zmm7[0]
            zmm15[0] = zmm15[0] + zmm11[0]
            zmm7 = data_142dd3fb0
            zmm11[0] = zmm11[0] * zmm10[0]
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm11[0] = zmm11[0] + zmm1[0]
            zmm1 = zx.o(*(r9_6 + (rdx_32 << 3) + 4))
            zmm12[0] = zmm12[0] + zmm11[0]
            zmm5 = data_142dd3f80
            zmm0 = _mm_cmpgt_epi32(var_238_1, zmm5)
            zmm15[0] = zmm15[0] + zmm11[0]
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, 0), 0)
            arg_18 = zmm12[0]
            zmm6 = data_142dd3fd0
            zmm3 = _mm_mul_ps(_mm_cvtepi32_ps((zmm0 & zmm6) | var_238_1), zmm7)
            var_1b8_1.o = zmm3
            int64_t var_1a8_1 = 0
            int32_t var_1a0_1 = 0
            zmm0 = (_mm_cmpgt_epi32(zmm1, zmm5) & zmm6) | zmm1
            int64_t var_198_1 = 0
            zmm1 = zx.o(*(r9_6 + (r8_13 << 3) + 4))
            zmm2 = _mm_cvtepi32_ps(zmm0)
            int32_t var_190_1 = 0
            int64_t var_188_1 = 0
            int32_t var_180_1 = 0
            zmm1 = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_mul_ps(zmm2, zmm7)
            zmm1 = _mm_unpacklo_epi16(zmm1, 0)
            zmm0 = _mm_cmpgt_epi32(zmm1, zmm5) & zmm6
            zmm11[0] = zmm11[0] * zmm2[0]
            var_1a8_1.o = zmm2
            zmm5 = _mm_cvtepi32_ps(zmm0 | zmm1)
            zmm6 = zmm12
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1 = zmm8
            zmm6[0] = zmm6[0] * zmm0[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm5 = _mm_mul_ps(zmm5, zmm7)
            zmm7 = zmm12
            zmm7[0] = zmm7[0] * zmm3[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm12[0] = zmm12[0] * zmm3[0]
            zmm11[0] = zmm11[0] * zmm2[0]
            zmm2 = zmm8
            zmm2[0] = zmm2[0] * zmm5[0]
            zmm11[0] = zmm11[0] * zmm0[0]
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm1[0] = zmm1[0] * zmm0[0]
            float var_1e8[0x4]
            var_1e8[0] = arg_10[0]
            var_198_1.o = zmm5
            zmm11[0] = zmm11[0] + zmm1[0]
            zmm2 = _mm_shuffle_ps(var_1e8, var_1e8, 0xe1)
            zmm7[0] = zmm7[0] + zmm11[0]
            zmm2[0] = zmm4[0]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = var_218.o[0]
            zmm8[0] = zmm8[0] f* zmm5[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            zmm6[0] = zmm6[0] + zmm11[0]
            var_1e8 = zmm2
            zmm13 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm11[0] = zmm11[0] f+ zmm8[0]
            zmm13 = __mulps_xmmps_memps(zmm13, *(rbx + 0x80))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0x70))
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm12[0] = zmm12[0] + zmm11[0]
            zmm1 = __mulps_xmmps_memps(zmm1, *(rbx + 0x60))
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm13 = _mm_add_ps(zmm13, zmm0)
            zmm2 = __mulps_xmmps_memps(zmm2, *(rbx + 0x50))
            float arg_20 = zmm12[0]
            zmm13 = _mm_add_ps(zmm13, _mm_add_ps(zmm1, zmm2))
            var_188_1.o = zmm13
            zmm3 = zx.o(0)
            zmm4[0].q = 0
            zmm13[0] = zmm13[0] * zmm13[0]
            zmm4[2] = 0
            zmm12 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            zmm11 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm12[0] = zmm12[0] + zmm13[0]
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm12[0] = zmm12[0] + zmm11[0]
            zmm3[0] = zmm12[0]
            zmm4 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * var_178_1[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            var_178_1[0] = var_178_1[0] - zmm3[0]
            zmm4[0] = zmm4[0] * var_178_1[0]
            float var_228[0x4]
            var_228[0] = zmm15[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm2 = _mm_shuffle_ps(var_228, var_228, 0xe1)
            zmm2[0] = zmm15[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            var_178_1[0] = var_178_1[0] - zmm3[0]
            zmm3 = zx.o(0)
            zmm4[0] = zmm4[0] * var_178_1[0]
            zmm2[0] = arg_18[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_228 = zmm2
            zmm10 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rbx + 0x80))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0x60))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0x70))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0x50))
            zmm10 = _mm_add_ps(zmm10, zmm0)
            float var_1d8_1 = zmm4[0]
            zmm13[0] = zmm13[0] * zmm4[0]
            zmm1 = _mm_add_ps(zmm1, zmm2)
            zmm12[0] = zmm12[0] * zmm4[0]
            zmm11[0] = zmm11[0] * zmm4[0]
            zmm10 = _mm_add_ps(zmm10, zmm1)
            float var_248_2[0x4] = zmm10
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm9 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
            zmm8 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm9[0] = zmm9[0] + zmm10[0]
            zmm0 = zmm8
            zmm0[0] = zmm0[0] f* zmm8[0]
            zmm9[0] = zmm9[0] + zmm0[0]
            zmm3[0] = zmm9[0]
            zmm4 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm4[0] = zmm4[0] * zmm4[0]
            var_238_1[0].q = 0
            zmm3[0] = zmm3[0] * var_178_1[0]
            var_238_1[2] = 0
            zmm3[0] = zmm3[0] * zmm4[0]
            var_178_1[0] = var_178_1[0] - zmm3[0]
            zmm4[0] = zmm4[0] * var_178_1[0]
            float var_208[0x4]
            var_208[0] = zmm7[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm2 = _mm_shuffle_ps(var_208, var_208, 0xe1)
            zmm2[0] = zmm6[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = arg_20[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_208 = zmm2
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0x70))
            zmm3[0] = zmm3[0] * zmm4[0]
            var_178_1[0] = var_178_1[0] - zmm3[0]
            zmm3 = zx.o(0)
            zmm4[0] = zmm4[0] * var_178_1[0]
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rbx + 0x80))
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0x60))
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0x50))
            float var_1d4_1 = zmm4[0]
            zmm10[0] = zmm10[0] * zmm4[0]
            zmm1 = _mm_add_ps(zmm1, zmm2)
            zmm9[0] = zmm9[0] * zmm4[0]
            zmm8[0] = zmm8[0] f* zmm4[0]
            zmm7 = _mm_add_ps(zmm7, zmm1)
            float var_238_2[0x4] = zmm7
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm5 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] + zmm7[0]
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm6[0] = zmm6[0] + zmm5[0]
            zmm3[0] = zmm6[0]
            zmm4 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * var_178_1[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            var_178_1[0] = var_178_1[0] - zmm3[0]
            zmm4[0] = zmm4[0] * var_178_1[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            var_178_1[0] = var_178_1[0] - zmm3[0]
            r14_1 += r13_2
            i_1 += 1
            r15_2 += rax_43
            zmm14 = zx.o(0)
            r12_1 += zx.q(r15_1) << 2
            *var_250_1 = zmm13[0]
            zmm4[0] = zmm4[0] * var_178_1[0]
            var_320 = r10_2 + (zx.q(r13_1) << 2)
            *var_2f0 = zmm12[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            *var_2d8 = zmm11[0]
            zmm7[0] = zmm7[0] * zmm4[0]
            zmm6[0] = zmm6[0] * zmm4[0]
            *var_2c0 = zmm10[0]
            zmm10 = data_142dd3fb0
            zmm5[0] = zmm5[0] * zmm4[0]
            *var_2a8 = zmm9[0]
            zmm9 = data_142dd3fd0
            arg_20 = zmm4[0]
            *var_290 = zmm8[0]
            zmm8 = data_142dd3f80
            *var_278 = zmm7[0]
            *var_260 = zmm6[0]
            *result_2 = zmm5[0]
            float* r8_14 = &var_308[sx.q(var_314)]
            var_250_1 = r8_14
            var_308 = r8_14
            var_2f0 += sx.q(rax_21) << 2
            var_2d8 += sx.q(rax_22) << 2
            var_2c0 += sx.q(rax_23) << 2
            var_2a8 += sx.q(rax_24) << 2
            var_290 += sx.q(rax_25) << 2
            var_278 = &var_278[sx.q(rax_26)]
            result = result_2
            var_260 += sx.q(rax_27) << 2
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
            int32_t* rdx_18 = var_2f0
            var_2f0 = &rdx_18[sx.q(rax_21)]
            *rdx_18 = 0
            int32_t* rdx_19 = var_2d8
            var_2d8 = &rdx_19[sx.q(rax_22)]
            *rdx_19 = 0
            int32_t* rdx_20 = var_2c0
            var_2c0 = &rdx_20[sx.q(rax_23)]
            *rdx_20 = 0
            int32_t* rdx_21 = var_2a8
            var_2a8 = &rdx_21[sx.q(rax_24)]
            *rdx_21 = 0x3f800000
            int32_t* rdx_22 = var_290
            var_290 = &rdx_22[sx.q(rax_25)]
            *rdx_22 = 0
            float* rdx_23 = var_278
            var_278 = &rdx_23[sx.q(rax_26)]
            *rdx_23 = 0f
            int32_t* rdx_24 = var_260
            var_260 = &rdx_24[sx.q(rax_27)]
            *rdx_24 = 0
            int32_t* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = 0x3f800000
            
            if (r8_11 s>= *(arg2 + 0x40))
                break
            
            rdx_17 = &rdx_17[sx.q(r9_5)]
            r9_5 = var_314

return result
