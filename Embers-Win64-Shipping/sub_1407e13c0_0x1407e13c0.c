// 函数: sub_1407e13c0
// 地址: 0x1407e13c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t rax_5
rax_5.b = rcx_3 != 0x7fff
int32_t var_c0 = rcx_3
*(arg2 + 0x10) = &rax[2]
int128_t* var_b0
void var_b8

if (rcx_3 == 0x7fff)
    var_b0 = &var_b8
else
    var_b0 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_108 = rcx_7
int32_t rax_6
rax_6.b = rcx_7 != 0x7fff
float* var_f8
void var_100

if (rcx_7 == 0x7fff)
    var_f8 = &var_100
else
    var_f8 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_f0 = rcx_11
int32_t rax_7
rax_7.b = rcx_11 != 0x7fff
float* var_e0
void var_e8

if (rcx_11 == 0x7fff)
    var_e0 = &var_e8
else
    var_e0 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_14 & 0x7fff
int32_t var_d8 = rdx_7
int32_t rax_9
rax_9.b = rdx_7 != 0x7fff
float* result_1
void var_d0

if (rdx_7 == 0x7fff)
    result_1 = &var_d0
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float* result = sub_140d3c6e0(rsi)
int32_t rcx_19 = *(arg2 + 0x40)
float* result_2 = result

if (result == 0)
    if (rcx_19 s> 0)
        float* rdx_10 = var_f8
        float temp0_18[0x4] = _mm_shuffle_ps(zx.o(0), zx.o(0), 0x55)
        float temp0_19[0x4] = _mm_shuffle_ps(zx.o(0), zx.o(0), 0xff)
        float temp0_20[0x4] = _mm_shuffle_ps(zx.o(0), zx.o(0), 0xaa)
        
        do
            zmm7 = *(rsi + 0x10)
            float zmm3[0x4] = zx.o(0)
            float zmm2[0x4] = 0x3f000000
            float zmm1[0x4] = *(rsi + 0x30)
            i += 1
            float temp0_21[0x4] = _mm_mul_ps(*(rsi + 0x20), temp0_18)
            int64_t var_a8_2 = 0
            float temp0_22[0x4] = _mm_mul_ps(zmm1, temp0_20)
            int32_t var_a0_2 = 0
            float temp0_27[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7, zx.o(0)), temp0_21), 
                _mm_add_ps(temp0_22, _mm_mul_ps(*(rsi + 0x40), temp0_19)))
            temp0_27[0] = temp0_27[0] * temp0_27[0]
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
            temp0_28[0] = temp0_28[0] * temp0_28[0]
            temp0_28[0] = temp0_28[0] + temp0_27[0]
            temp0_29[0] = temp0_29[0] * temp0_29[0]
            temp0_28[0] = temp0_28[0] + temp0_29[0]
            zmm3[0] = temp0_28[0]
            float temp0_30[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_30[0] = temp0_30[0] * temp0_30[0]
            zmm3[0] = zmm3[0] * temp0_30[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_30[0] = temp0_30[0] * zmm2[0]
            temp0_30[0] = temp0_30[0] + temp0_30[0]
            float zmm0[0x4] = 0x3f000000
            temp0_30[0] = temp0_30[0] * temp0_30[0]
            zmm3[0] = zmm3[0] * temp0_30[0]
            zmm0[0] = 0.5f - zmm3[0]
            temp0_30[0] = temp0_30[0] * zmm0[0]
            temp0_30[0] = temp0_30[0] + temp0_30[0]
            temp0_27[0] = temp0_27[0] * temp0_30[0]
            temp0_28[0] = temp0_28[0] * temp0_30[0]
            *rdx_10 = temp0_27[0]
            temp0_29[0] = temp0_29[0] * temp0_30[0]
            *var_e0 = temp0_28[0]
            *result_1 = temp0_29[0]
            var_b0 += sx.q(rax_5) << 2
            rdx_10 = &var_f8[sx.q(rax_6)]
            var_f8 = rdx_10
            result = result_1
            var_e0 = &var_e0[sx.q(rax_7)]
            result_1 = &result[sx.q(rax_9)]
        while (i s< *(arg2 + 0x40))
else if (rcx_19 s> 0)
    int128_t* rdx_8 = var_b0
    int32_t var_8c_1 = 0
    
    do
        zmm6 = *rdx_8
        float zmm0_1[0x4] = sub_141f68050(result_2)
        zmm0_1[0] = zmm0_1[0] * zmm6[0]
        float var_118
        zmm8 = sub_141f68770(result_2, &var_118, zmm0_1, 0)
        float var_98[0x4]
        var_98[0] = var_118[0]
        float temp0_1[0x4] = _mm_shuffle_ps(var_98, var_98, 0xe1)
        float var_114
        temp0_1[0] = var_114[0]
        int64_t var_a8_1 = 0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        float var_110
        temp0_2[0] = var_110[0]
        int32_t var_a0_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        var_98 = temp0_3
        float temp0_5[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rsi + 0x40))
        float temp0_7[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rsi + 0x30))
        float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rsi + 0x10))
        float zmm3_1[0x4] = zx.o(0)
        float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
            _mm_add_ps(temp0_9, 
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rsi + 0x20))))
        temp0_14[0] = temp0_14[0] * temp0_14[0]
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
        temp0_15[0] = temp0_15[0] * temp0_15[0]
        temp0_15[0] = temp0_15[0] + temp0_14[0]
        temp0_16[0] = temp0_16[0] * temp0_16[0]
        temp0_15[0] = temp0_15[0] + temp0_16[0]
        zmm3_1[0] = temp0_15[0]
        float temp0_17[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * zmm8[0]
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm3_1[0] = zmm3_1[0] * temp0_17[0]
        zmm8[0] = zmm8[0] - zmm3_1[0]
        temp0_17[0] = temp0_17[0] * zmm8[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm3_1[0] = zmm3_1[0] * temp0_17[0]
        zmm8[0] = zmm8[0] - zmm3_1[0]
        temp0_17[0] = temp0_17[0] * zmm8[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        temp0_14[0] = temp0_14[0] * temp0_17[0]
        temp0_15[0] = temp0_15[0] * temp0_17[0]
        var_118 = temp0_14[0]
        temp0_16[0] = temp0_16[0] * temp0_17[0]
        var_114 = temp0_15[0]
        var_110 = temp0_16[0]
        *var_f8 = temp0_14[0]
        *var_e0 = var_114[0]
        i += 1
        *result_1 = var_110[0]
        rdx_8 = var_b0 + (sx.q(rax_5) << 2)
        var_b0 = rdx_8
        var_f8 = &var_f8[sx.q(rax_6)]
        result = result_1
        var_e0 = &var_e0[sx.q(rax_7)]
        result_1 = &result[sx.q(rax_9)]
    while (i s< *(arg2 + 0x40))

return result
