// 函数: sub_14075a830
// 地址: 0x14075a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
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

int64_t r11 = *(arg2 + 0x18)
void* r15 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* rdi_1

if ((not.b(rax_6) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
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
    
    rdi_1 = sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint8_t r13_1 = (rax_9 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t rcx_5 = rax_9 & 0x7fff
int32_t* rsi_1

if ((not.b(r13_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
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
    
    rsi_1 = sx.q(rcx_5) + *(r11 + (sx.q(r9_2) << 3))

uint32_t rcx_6 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t rcx_7 = rcx_6 & 0x7fff
int32_t var_238 = rcx_7
int32_t rax_13
rax_13.b = rcx_7 != 0x7fff
float* var_228
void var_230

if (rcx_7 == 0x7fff)
    var_228 = &var_230
else
    var_228 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_220 = rcx_11
int32_t rax_14
rax_14.b = rcx_11 != 0x7fff
void* var_210
void var_218

if (rcx_11 == 0x7fff)
    var_210 = &var_218
else
    var_210 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_15 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_208 = rcx_15
int32_t rax_15
rax_15.b = rcx_15 != 0x7fff
void* var_1f8
void var_200

if (rcx_15 == 0x7fff)
    var_1f8 = &var_200
else
    var_1f8 = zx.q(rcx_15 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rax_16 = zx.d(rax[6])
*(arg2 + 0x10) = &rax[7]
int32_t rdx_9 = rax_16 & 0x7fff
int32_t var_1f0 = rdx_9
int32_t rax_17
rax_17.b = rdx_9 != 0x7fff
void* var_1e0
void var_1e8

if (rdx_9 == 0x7fff)
    var_1e0 = &var_1e8
else
    var_1e0 = zx.q(*(arg2 + 0x80) * rdx_9) + *(arg2 + 0x70)
uint32_t rax_18 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r8_3 = rax_18 & 0x7fff
int32_t var_1d8 = r8_3
int32_t rax_19
rax_19.b = r8_3 != 0x7fff
void* var_1c8
void var_1d0

if (r8_3 == 0x7fff)
    var_1c8 = &var_1d0
else
    var_1c8 = zx.q(*(arg2 + 0x80) * r8_3) + *(arg2 + 0x70)
uint32_t rax_20 = zx.d(rax[8])
*(arg2 + 0x10) = &rax[9]
int32_t r9_5 = rax_20 & 0x7fff
int32_t var_1c0 = r9_5
int32_t rax_21
rax_21.b = r9_5 != 0x7fff
void* var_1b0
void var_1b8

if (r9_5 == 0x7fff)
    var_1b0 = &var_1b8
else
    var_1b0 = zx.q(*(arg2 + 0x80) * r9_5) + *(arg2 + 0x70)
uint32_t rax_22 = zx.d(rax[9])
*(arg2 + 0x10) = &rax[0xa]
int32_t r10_5 = rax_22 & 0x7fff
int32_t var_1a8 = r10_5
int32_t rax_23
rax_23.b = r10_5 != 0x7fff
void* var_198
void var_1a0

if (r10_5 == 0x7fff)
    var_198 = &var_1a0
else
    var_198 = zx.q(*(arg2 + 0x80) * r10_5) + *(arg2 + 0x70)
int32_t rcx_31 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_190 = rcx_31
int32_t rax_24
rax_24.b = rcx_31 != 0x7fff
float* var_180
void var_188

if (rcx_31 == 0x7fff)
    var_180 = &var_188
else
    var_180 = zx.q(rcx_31 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_35 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_178 = rcx_35
int32_t rax_25
rax_25.b = rcx_35 != 0x7fff
void* var_168
void var_170

if (rcx_35 == 0x7fff)
    var_168 = &var_170
else
    var_168 = zx.q(rcx_35 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_38 = zx.d(rax[0xc])
*(arg2 + 0x10) = &rax[0xd]
int32_t r11_5 = rcx_38 & 0x7fff
int32_t var_160 = r11_5
int32_t result_1
result_1.b = r11_5 != 0x7fff
void* var_150
uint64_t result

if (r11_5 == 0x7fff)
    void var_158
    result = &var_158
    var_150 = &var_158
else
    result = zx.q(*(arg2 + 0x80) * r11_5)
    var_150 = zx.q(result.d) + *(arg2 + 0x70)

float zmm10[0x4]
float var_78[0x4] = zmm10
uint64_t r12_1 = zx.q(*(r15 + 0x1c4)) * 2
float zmm12[0x4]
float var_98[0x4] = zmm12
uint32_t zmm13[0x4]
uint32_t var_a8[0x4] = zmm13
float zmm14[0x4]
float var_b8[0x4] = zmm14
int32_t r14 = *(r15 + (r12_1 << 3) + 0x1d0)
float zmm15[0x4]
float var_c8[0x4] = zmm15

if (r14 - 1 s< 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            float* rdx_21 = var_228
            i += 1
            var_228 = &rdx_21[sx.q(rax_13)]
            *rdx_21 = 0f
            void* rdx_22 = var_210
            var_210 = rdx_22 + (sx.q(rax_14) << 2)
            *rdx_22 = 0
            void* rdx_23 = var_1f8
            var_1f8 = rdx_23 + (sx.q(rax_15) << 2)
            *rdx_23 = 0
            void* rdx_24 = var_1e0
            var_1e0 = rdx_24 + (sx.q(rax_17) << 2)
            *rdx_24 = data_14399f720.d[0]
            void* rdx_25 = var_1c8
            var_1c8 = rdx_25 + (sx.q(rax_19) << 2)
            *rdx_25 = data_14399f720:4.d[0]
            void* rdx_26 = var_1b0
            var_1b0 = rdx_26 + (sx.q(rax_21) << 2)
            *rdx_26 = data_14399f720:8.d[0]
            void* rdx_27 = var_198
            var_198 = rdx_27 + (sx.q(rax_23) << 2)
            *rdx_27 = data_14399f720:0xc.d[0]
            float* rdx_28 = var_180
            var_180 = &rdx_28[sx.q(rax_24)]
            *rdx_28 = 1f
            void* rdx_29 = var_168
            var_168 = rdx_29 + (sx.q(rax_25) << 2)
            *rdx_29 = 0x3f800000
            void* rdx_30 = var_150
            result = sx.q(result_1)
            var_150 = rdx_30 + (result << 2)
            *rdx_30 = 0x3f800000
        while (i s< *(arg2 + 0x40))
else
    if (rdx_9 != 0x7fff || r8_3 != rdx_9 || r9_5 != rdx_9 || r10_5 != rdx_9)
        result.b = 1
    else
        result.b = 0
    
    zmm14 = *(r15 + 0xd0)
    float var_118[0x4] = zmm14
    zmm15 = *(r15 + 0xe0)
    float var_108_1[0x4] = zmm15
    zmm10 = *(r15 + 0xf0)
    float var_f8_1[0x4] = zmm10
    float var_128_1[0x4] = zmm10
    zmm12 = *(r15 + 0x100)
    float var_138_1[0x4] = zmm12
    float var_e8_1[0x4] = zmm12
    float var_248[0x4]
    uint32_t var_d8[0x4]
    float zmm6[0x4]
    
    if (result.b == 0)
        result = &var_248
        var_248 = data_14399f720
    else
        result, zmm6 = sub_140ae1ba0(&var_118, &var_d8)
        zmm12 = var_e8_1
        zmm10 = var_f8_1
        zmm15 = var_108_1
        zmm14 = var_118
        var_138_1 = zmm12
        var_128_1 = zmm10
    
    zmm13 = *result
    int32_t r8_4 = 0
    var_d8 = zmm13
    
    if (*(arg2 + 0x40) s> 0)
        float var_38_1[0x4] = zmm6
        float zmm7[0x4]
        float var_48_1[0x4] = zmm7
        float zmm8[0x4]
        float var_58_1[0x4] = zmm8
        float zmm9[0x4]
        float var_68_1[0x4] = zmm9
        float zmm11[0x4]
        float var_88_1[0x4] = zmm11
        
        while (true)
            int32_t rcx_42 = *rdi_1
            rdi_1 = &rdi_1[zx.q(rax_6)]
            int32_t rax_28
            
            if (rcx_42 s>= 0)
                rax_28 = r14 - 1
                
                if (rcx_42 s< r14 - 1)
                    rax_28 = rcx_42
            else
                rax_28 = 0
            
            int64_t rax_30 = *(r15 + (r12_1 << 3) + 0x1c8)
            int64_t rcx_44 = sx.q(rax_28) * 6
            float zmm4[0x4] = *(rax_30 + (rcx_44 << 3) + 0x10)
            float zmm5[0x4] = *(rax_30 + (rcx_44 << 3) + 0x20)
            zmm11 = *(rax_30 + (rcx_44 << 3))
            int32_t* rax_31 = rsi_1
            zmm6 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            rsi_1 = &rsi_1[zx.q(r13_1)]
            zmm7 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            float var_258_1[0x4] = zmm11
            zmm8 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm9 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            
            if (*rax_31 == 0)
                zmm13 = var_258_1[3]
                zmm12 = var_258_1[2]
                zmm11 = var_258_1[1]
                zmm10 = var_258_1[0]
            else
                var_248[3] = 0x3f800000
                float zmm2[0x4] = var_248
                zmm2[0] = zmm4[0]
                int32_t var_13c_1 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                zmm2[0] = zmm6[0]
                var_258_1[0].q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm7[0]
                var_258_1[2] = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_248 = zmm2
                float zmm3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                float zmm0[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm10)
                var_258_1[0].q = 0
                float zmm1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm10 = _mm_shuffle_ps(zmm11, zmm11, 0x1b)
                zmm3 = _mm_mul_ps(zmm3, zmm12)
                var_258_1[2] = 0
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm3 = _mm_add_ps(zmm3, zmm0)
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm10 = _mm_mul_ps(zmm10, _mm_shuffle_ps(zmm13, zmm13, 0))
                zmm1 = _mm_add_ps(zmm1, zmm2)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), zmm11)
                float var_148[0x4]
                var_148[0] = zmm5[0]
                zmm10 = __mulps_xmmps_memps(zmm10, data_143cdf9d0)
                zmm3 = _mm_add_ps(zmm3, zmm1)
                zmm2 = _mm_shuffle_ps(var_148, var_148, 0xe1)
                zmm2[0] = zmm8[0]
                zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
                zmm10 = _mm_add_ps(zmm10, zmm0)
                zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm13, zmm13, 0x55))
                zmm4 = zmm3
                zmm6 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm0 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                zmm2[0] = zmm9[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm1 = __mulps_xmmps_memps(zmm1, data_143cdf9c0)
                zmm11 = _mm_mul_ps(zmm11, zmm0)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm10 = _mm_add_ps(zmm10, zmm1)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_128_1)
                zmm7 = zmm3
                zmm11 = __mulps_xmmps_memps(zmm11, data_143cdf9b0)
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_138_1)
                zmm10 = _mm_add_ps(zmm10, zmm11)
                var_148 = zmm2
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm15)
                zmm3 = _mm_add_ps(zmm3, zmm0)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm11 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                zmm12 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                zmm13 = _mm_shuffle_ps(zmm10, zmm10, 0xff)
                zmm3 = _mm_add_ps(zmm3, _mm_add_ps(zmm1, _mm_mul_ps(zmm2, zmm14)))
                zmm5 = zmm3
                zmm8 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm9 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            
            float* rdx_11 = var_228
            r8_4 += 1
            var_228 = &rdx_11[sx.q(rax_13)]
            *rdx_11 = zmm4[0]
            float* rdx_12 = var_210
            var_210 = &rdx_12[sx.q(rax_14)]
            *rdx_12 = zmm6[0]
            float* rdx_13 = var_1f8
            var_1f8 = &rdx_13[sx.q(rax_15)]
            *rdx_13 = zmm7[0]
            float* rdx_14 = var_1e0
            var_1e0 = &rdx_14[sx.q(rax_17)]
            *rdx_14 = zmm10[0]
            float* rdx_15 = var_1c8
            var_1c8 = &rdx_15[sx.q(rax_19)]
            *rdx_15 = zmm11[0]
            float* rdx_16 = var_1b0
            var_1b0 = &rdx_16[sx.q(rax_21)]
            *rdx_16 = zmm12[0]
            uint32_t* rdx_17 = var_198
            var_198 = &rdx_17[sx.q(rax_23)]
            *rdx_17 = zmm13[0]
            float* rdx_18 = var_180
            var_180 = &rdx_18[sx.q(rax_24)]
            *rdx_18 = zmm5[0]
            float* rdx_19 = var_168
            var_168 = &rdx_19[sx.q(rax_25)]
            *rdx_19 = zmm8[0]
            float* rdx_20 = var_150
            result = sx.q(result_1)
            var_150 = &rdx_20[result]
            *rdx_20 = zmm9[0]
            
            if (r8_4 s>= *(arg2 + 0x40))
                break
            
            zmm12 = var_e8_1
            zmm10 = var_f8_1
            zmm15 = var_108_1
            zmm14 = var_118
            zmm13 = var_d8
            var_138_1 = zmm12
            var_128_1 = zmm10

return result
