// 函数: sub_1407de160
// 地址: 0x1407de160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
uint32_t rdx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t rdx_1 = rdx & 0x7fff
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
int32_t r9_1 = 0
int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t rax_5 = *r8

if (rcx_3 s>= rax_5)
    int64_t rdx_3 = 0
    
    do
        rcx_3 -= rax_5
        rdx_3 += 1
        rax_5 = r8[rdx_3]
        r9_1 += 1
    while (rcx_3 s>= rax_5)

int128_t zmm9 = *(sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3)))
int32_t rcx_6 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_f8 = rcx_6
int32_t rax_8
rax_8.b = rcx_6 != 0x7fff
float* var_e8
void var_f0

if (rcx_6 == 0x7fff)
    var_e8 = &var_f0
else
    var_e8 = zx.q(rcx_6 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_10 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_e0 = rcx_10
int32_t rax_9
rax_9.b = rcx_10 != 0x7fff
float* var_d0
void var_d8

if (rcx_10 == 0x7fff)
    var_d0 = &var_d8
else
    var_d0 = zx.q(rcx_10 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_13 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_13 & 0x7fff
int32_t var_c8 = rdx_7
int32_t rax_11
rax_11.b = rdx_7 != 0x7fff
float* result_1
void var_c0

if (rdx_7 == 0x7fff)
    result_1 = &var_c0
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float* result = sub_140d3c6e0(rsi)
int32_t rcx_18 = *(arg2 + 0x40)
float* result_2 = result

if (result == 0)
    if (rcx_18 s> 0)
        zmm8 = data_142d4cc20
        float* rdx_9 = var_e8
        float temp0_18[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        float temp0_19[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
        float temp0_20[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        float temp0_21[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        
        do
            zmm7 = *(rsi + 0x10)
            float zmm3[0x4] = zx.o(0)
            float zmm2[0x4] = 0x3f000000
            float zmm1[0x4] = *(rsi + 0x30)
            i += 1
            float temp0_22[0x4] = _mm_mul_ps(*(rsi + 0x20), temp0_18)
            int64_t var_a8_2 = 0
            float temp0_23[0x4] = _mm_mul_ps(zmm1, temp0_20)
            int32_t var_a0_2 = 0
            float temp0_28[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7, temp0_21), temp0_22), 
                _mm_add_ps(temp0_23, _mm_mul_ps(*(rsi + 0x40), temp0_19)))
            temp0_28[0] = temp0_28[0] * temp0_28[0]
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
            temp0_29[0] = temp0_29[0] * temp0_29[0]
            temp0_29[0] = temp0_29[0] + temp0_28[0]
            temp0_30[0] = temp0_30[0] * temp0_30[0]
            temp0_29[0] = temp0_29[0] + temp0_30[0]
            zmm3[0] = temp0_29[0]
            float temp0_31[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_31[0] = temp0_31[0] * temp0_31[0]
            zmm3[0] = zmm3[0] * temp0_31[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_31[0] = temp0_31[0] * zmm2[0]
            temp0_31[0] = temp0_31[0] + temp0_31[0]
            float zmm0[0x4] = 0x3f000000
            temp0_31[0] = temp0_31[0] * temp0_31[0]
            zmm3[0] = zmm3[0] * temp0_31[0]
            zmm0[0] = 0.5f - zmm3[0]
            temp0_31[0] = temp0_31[0] * zmm0[0]
            temp0_31[0] = temp0_31[0] + temp0_31[0]
            temp0_28[0] = temp0_28[0] * temp0_31[0]
            temp0_29[0] = temp0_29[0] * temp0_31[0]
            *rdx_9 = temp0_28[0]
            temp0_30[0] = temp0_30[0] * temp0_31[0]
            *var_d0 = temp0_29[0]
            *result_1 = temp0_30[0]
            rdx_9 = &var_e8[sx.q(rax_8)]
            var_e8 = rdx_9
            result = result_1
            var_d0 = &var_d0[sx.q(rax_9)]
            result_1 = &result[sx.q(rax_11)]
        while (i s< *(arg2 + 0x40))
else if (rcx_18 s> 0)
    int32_t var_8c_1 = 0
    
    do
        float zmm0_1[0x4] = sub_141f68050(result_2)
        zmm0_1[0] = zmm0_1[0] f* zmm9.d
        float var_108
        zmm8, zmm9 = sub_141f61940(result_2, &var_108, zmm0_1, 0)
        float var_98[0x4]
        var_98[0] = var_108[0]
        float temp0_1[0x4] = _mm_shuffle_ps(var_98, var_98, 0xe1)
        float var_104
        temp0_1[0] = var_104[0]
        int64_t var_a8_1 = 0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        float var_100
        temp0_2[0] = var_100[0]
        int32_t var_a0_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        var_98 = temp0_3
        float temp0_5[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rsi + 0x30))
        float temp0_7[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rsi + 0x20))
        float temp0_9[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rsi + 0x40))
        float temp0_11[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rsi + 0x10))
        float zmm3_1[0x4] = zx.o(0)
        float temp0_14[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
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
        var_108 = temp0_14[0]
        temp0_16[0] = temp0_16[0] * temp0_17[0]
        var_104 = temp0_15[0]
        var_100 = temp0_16[0]
        *var_e8 = temp0_14[0]
        *var_d0 = var_104[0]
        i += 1
        *result_1 = var_100[0]
        var_e8 = &var_e8[sx.q(rax_8)]
        result = result_1
        var_d0 = &var_d0[sx.q(rax_9)]
        result_1 = &result[sx.q(rax_11)]
    while (i s< *(arg2 + 0x40))

return result
