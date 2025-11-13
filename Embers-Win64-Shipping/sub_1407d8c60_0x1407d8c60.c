// 函数: sub_1407d8c60
// 地址: 0x1407d8c60
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
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_5 u>> 0xf).b) & 1) != 0)
    int32_t rax_7 = *r8
    int32_t rcx_3 = rax_5 & 0x7fff
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
        while (rcx_3 s>= rax_7)

uint32_t rax_8 = zx.d(rax[2])
uint8_t rax_9 = (rax_8 u>> 0xf).b
int32_t rcx_5 = rax_8 & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t* r12_1

if ((not.b(rax_9) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_10 = *r8
    int32_t r9_1 = 0
    
    if (rcx_5 s>= rax_10)
        int64_t rdx_4 = 0
        
        do
            rcx_5 -= rax_10
            rdx_4 += 1
            rax_10 = r8[rdx_4]
            r9_1 += 1
        while (rcx_5 s>= rax_10)
    
    r12_1 = sx.q(rcx_5) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_12 = zx.d(rax[3])
uint8_t rax_13 = (rax_12 u>> 0xf).b
int32_t i = rax_12 & 0x7fff
*(arg2 + 0x10) = &rax[4]
int128_t* r15_1

if ((not.b(rax_13) & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i s>= *r8)
        int64_t rax_14 = 0
        int32_t* rdx_5 = nullptr
        
        do
            i -= *(rdx_5 + r8)
            rax_14 += 1
            rdx_5 = rax_14 << 2
            r9_2 += 1
        while (i s>= *(rdx_5 + r8))
    
    r15_1 = sx.q(i) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_16 = zx.d(rax[4])
uint8_t r13_1 = (rax_16 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_16 & 0x7fff
int32_t* r14_1

if ((not.b(r13_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_18 = *r8
    int32_t r9_3 = 0
    
    if (rcx_8 s>= rax_18)
        int64_t rdx_6 = 0
        
        do
            rcx_8 -= rax_18
            rdx_6 += 1
            rax_18 = r8[rdx_6]
            r9_3 += 1
        while (rcx_8 s>= rax_18)
    
    r14_1 = sx.q(rcx_8) + *(r10 + (sx.q(r9_3) << 3))

int32_t rcx_10 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_238 = rcx_10
int32_t r9_4
r9_4.b = rcx_10 != 0x7fff
int32_t var_234 = r9_4
int32_t* rdx_9
void var_230

if (rcx_10 == 0x7fff)
    rdx_9 = &var_230
else
    rdx_9 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
float* var_228 = rdx_9
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_220 = rcx_12
int32_t rax_20
rax_20.b = rcx_12 != 0x7fff
void* var_210
void var_218

if (rcx_12 == 0x7fff)
    var_210 = &var_218
else
    var_210 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_208 = rcx_16
int32_t rax_21
rax_21.b = rcx_16 != 0x7fff
void* var_1f8
void var_200

if (rcx_16 == 0x7fff)
    var_1f8 = &var_200
else
    var_1f8 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_20 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_1f0 = rcx_20
int32_t rax_22
rax_22.b = rcx_20 != 0x7fff
void* var_1e0
void var_1e8

if (rcx_20 == 0x7fff)
    var_1e0 = &var_1e8
else
    var_1e0 = zx.q(rcx_20 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_24 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_1d8 = rcx_24
int32_t rax_23
rax_23.b = rcx_24 != 0x7fff
void* var_1c8
void var_1d0

if (rcx_24 == 0x7fff)
    var_1c8 = &var_1d0
else
    var_1c8 = zx.q(rcx_24 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_28 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_1c0 = rcx_28
int32_t rax_24
rax_24.b = rcx_28 != 0x7fff
float* var_1b0
void var_1b8

if (rcx_28 == 0x7fff)
    var_1b0 = &var_1b8
else
    var_1b0 = zx.q(rcx_28 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_32 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_1a8 = rcx_32
int32_t rax_25
rax_25.b = rcx_32 != 0x7fff
float* var_198
void var_1a0

if (rcx_32 == 0x7fff)
    var_198 = &var_1a0
else
    var_198 = zx.q(rcx_32 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_36 = zx.d(rax[0xc]) & 0x7fff
*(arg2 + 0x10) = &rax[0xd]
int32_t var_190 = rcx_36
int32_t rax_26
rax_26.b = rcx_36 != 0x7fff
void* var_180
void var_188

if (rcx_36 == 0x7fff)
    var_180 = &var_188
else
    var_180 = zx.q(rcx_36 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_39 = zx.d(rax[0xd])
*(arg2 + 0x10) = &rax[0xe]
int32_t r8_10 = rcx_39 & 0x7fff
int32_t var_178 = r8_10
int64_t result
result.b = r8_10 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_10 == 0x7fff)
    void var_170
    result = &var_170
    result_2 = &var_170
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_10) + *(arg2 + 0x70)

void* rbx_1 = *(rbx + 8)

if (rbx_1 != 0)
    int64_t* rbx_2 = *(rbx_1 + 0x50)
    int32_t rdx_17 = *(rbx + 0x17c)
    uint32_t rax_37 = zx.d(*(rbx_2 + 0x5f))
    
    if (rax_37 s>= rdx_17)
        rdx_17 = rax_37
    
    int32_t rax_38 = sub_1423647f0(rbx_2, rdx_17)
    int64_t* rbx_4 = *(*rbx_2 + (sx.q(rax_38) << 3))
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    void* var_e8
    result = sub_14229e7e0(&rbx_4[0x2f], &var_e8)
    
    if (*(arg2 + 0x40) s> 0)
        float* r10_1 = var_228
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        float zmm10[0x4]
        float var_88_1[0x4] = zmm10
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        int128_t zmm13
        int128_t var_b8_1 = zmm13
        float zmm14[0x4]
        float var_c8_1[0x4] = zmm14
        int64_t var_154_1 = 0
        int32_t var_14c_1 = 0
        int32_t var_148_1 = 0
        int64_t var_140_1 = 0
        int64_t var_138_1 = 0
        int32_t var_12c_1 = 0
        
        do
            float var_158[0x4]
            float zmm2[0x4] = var_158
            float zmm3[0x4] = zx.o(0)
            zmm13.d = (*r15_1).d f+ *r12_1
            zmm10 = *(rbx + 0x80)
            int64_t var_118_1 = 0
            int32_t var_110_1 = 0
            int64_t var_108_1 = 0
            zmm13.d = zmm13.d f+ *r14_1
            int32_t var_100_1 = 0
            zmm2[0] = zmm13.d
            var_158 = zmm2
            zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0x50))
            float zmm1[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0x70))
            float zmm0[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0x60))
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm10)
            zmm6 = _mm_add_ps(zmm6, zmm0)
            zmm1 = _mm_add_ps(zmm1, zmm2)
            zmm2 = 0x3f000000
            zmm6 = _mm_add_ps(zmm6, zmm1)
            var_118_1.o = zmm6
            zmm6[0] = zmm6[0] * zmm6[0]
            float zmm5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float zmm4[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm5[0] = zmm5[0] + zmm6[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm5[0] = zmm5[0] + zmm4[0]
            zmm3[0] = zmm5[0]
            zmm14 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm3[0] = zmm3[0] * zmm14[0]
            zmm2[0] = 0.5f - zmm3[0]
            zmm14[0] = zmm14[0] * zmm2[0]
            zmm2 = var_148_1.o
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            zmm14[0] = zmm14[0] + zmm14[0]
            zmm2[0] = zmm13.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            zmm0 = 0x3f000000
            var_148_1.o = zmm2
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm3[0] = zmm3[0] * zmm14[0]
            zmm0[0] = 0.5f - zmm3[0]
            zmm14[0] = zmm14[0] * zmm0[0]
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0x60))
            zmm14[0] = zmm14[0] + zmm14[0]
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0x70))
            float arg_20 = zmm14[0]
            zmm14[0] = zmm14[0] * zmm6[0]
            zmm14[0] = zmm14[0] * zmm5[0]
            zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0x50))
            zmm14[0] = zmm14[0] * zmm4[0]
            zmm6 = _mm_add_ps(zmm6, zmm0)
            zmm3 = zx.o(0)
            int64_t var_f8_1 = 0
            int32_t var_f0_1 = 0
            zmm1 = _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm10))
            zmm2 = 0x3f000000
            zmm6 = _mm_add_ps(zmm6, zmm1)
            var_108_1.o = zmm6
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm5[0] = zmm5[0] + zmm6[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm5[0] = zmm5[0] + zmm4[0]
            zmm3[0] = zmm5[0]
            zmm10 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm3[0] = zmm3[0] * zmm10[0]
            zmm2[0] = 0.5f - zmm3[0]
            zmm10[0] = zmm10[0] * zmm2[0]
            zmm2 = var_138_1.o
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
            zmm10[0] = zmm10[0] + zmm10[0]
            zmm2[0] = zmm13.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            zmm0 = 0x3f000000
            var_138_1.o = zmm2
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rbx + 0x80))
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm3[0] = zmm3[0] * zmm10[0]
            zmm0[0] = 0.5f - zmm3[0]
            zmm3 = zx.o(0)
            zmm10[0] = zmm10[0] * zmm0[0]
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0x70))
            zmm10[0] = zmm10[0] + zmm10[0]
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0x50))
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0x60))
            zmm10[0] = zmm10[0] * zmm6[0]
            zmm10[0] = zmm10[0] * zmm5[0]
            zmm1 = _mm_add_ps(zmm1, zmm2)
            float var_128_1 = zmm10[0]
            zmm10[0] = zmm10[0] * zmm4[0]
            zmm7 = _mm_add_ps(zmm7, zmm1)
            var_f8_1.o = zmm7
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm5 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] + zmm7[0]
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm6[0] = zmm6[0] + zmm5[0]
            zmm3[0] = zmm6[0]
            *r10_1 = zmm14[0]
            zmm2 = 0x3f000000
            zmm4 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            r12_1 = &r12_1[zx.q(rax_9)]
            r15_1 += zx.q(rax_13) << 2
            r14_1 = &r14_1[zx.q(r13_1)]
            i_1 += 1
            zmm3[0] = zmm3[0] * 0.5f
            *var_210 = zmm14[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            *var_1f8 = zmm14[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            *var_1e0 = zmm10[0]
            zmm2[0] = 0.5f - zmm3[0]
            *var_1c8 = zmm10[0]
            zmm4[0] = zmm4[0] * zmm2[0]
            *var_1b0 = zmm10[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm0 = 0x3f000000
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            zmm0[0] = 0.5f - zmm3[0]
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm7[0] = zmm7[0] * zmm4[0]
            zmm6[0] = zmm6[0] * zmm4[0]
            *var_198 = zmm7[0]
            zmm5[0] = zmm5[0] * zmm4[0]
            float var_124_1 = zmm4[0]
            *var_180 = zmm6[0]
            *result_2 = zmm5[0]
            r10_1 = &var_228[sx.q(var_234)]
            var_228 = r10_1
            var_210 += sx.q(rax_20) << 2
            var_1f8 += sx.q(rax_21) << 2
            var_1e0 += sx.q(rax_22) << 2
            var_1c8 += sx.q(rax_23) << 2
            var_1b0 = &var_1b0[sx.q(rax_24)]
            var_198 = &var_198[sx.q(rax_25)]
            result = result_2
            var_180 += sx.q(rax_26) << 2
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
            *rdx_9 = 0x3f800000
            int32_t* rdx_10 = var_210
            var_210 = &rdx_10[sx.q(rax_20)]
            *rdx_10 = 0
            int32_t* rdx_11 = var_1f8
            var_1f8 = &rdx_11[sx.q(rax_21)]
            *rdx_11 = 0
            int32_t* rdx_12 = var_1e0
            var_1e0 = &rdx_12[sx.q(rax_22)]
            *rdx_12 = 0
            int32_t* rdx_13 = var_1c8
            var_1c8 = &rdx_13[sx.q(rax_23)]
            *rdx_13 = 0x3f800000
            int32_t* rdx_14 = var_1b0
            var_1b0 = &rdx_14[sx.q(rax_24)]
            *rdx_14 = 0
            float* rdx_15 = var_198
            var_198 = &rdx_15[sx.q(rax_25)]
            *rdx_15 = 0f
            int32_t* rdx_16 = var_180
            var_180 = &rdx_16[sx.q(rax_26)]
            *rdx_16 = 0
            int32_t* result_3 = result_2
            result = sx.q(result_1)
            result_2 = &result_3[result]
            *result_3 = 0x3f800000
            
            if (r8_11 s>= *(arg2 + 0x40))
                break
            
            rdx_9 = &rdx_9[sx.q(r9_4)]
            r9_4 = var_234

return result
