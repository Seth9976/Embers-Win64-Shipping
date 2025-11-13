// 函数: sub_1407df530
// 地址: 0x1407df530
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
int32_t var_50 = rcx_3
*(arg2 + 0x10) = &rax[2]
int128_t* var_40
void var_48

if (rcx_3 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_98 = rcx_7
int32_t rax_6
rax_6.b = rcx_7 != 0x7fff
float* var_88
void var_90

if (rcx_7 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_80 = rcx_11
int32_t rax_7
rax_7.b = rcx_11 != 0x7fff
float* var_70
void var_78

if (rcx_11 == 0x7fff)
    var_70 = &var_78
else
    var_70 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_14 & 0x7fff
int32_t var_68 = rdx_7
int32_t rax_9
rax_9.b = rdx_7 != 0x7fff
float* result_1
void var_60

if (rdx_7 == 0x7fff)
    result_1 = &var_60
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
float zmm6[0x4]
float var_18[0x4] = zmm6
float* result = sub_140d3c6e0(rsi)
int32_t rcx_19 = *(arg2 + 0x40)
float* result_2 = result

if (result == 0)
    if (rcx_19 s> 0)
        float zmm3[0x4] = data_142d3f660
        float* rdx_10 = var_88
        float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_18[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        float temp0_19[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_20[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        
        do
            int64_t var_38_2 = 0
            float temp0_21[0x4] = __mulps_xmmps_memps(temp0_19, *(rsi + 0x20))
            i += 1
            int32_t var_30_2 = 0
            float temp0_22[0x4] = __mulps_xmmps_memps(temp0_20, *(rsi + 0x10))
            float temp0_23[0x4] = __mulps_xmmps_memps(temp0_18, *(rsi + 0x30))
            float temp0_27[0x4] = _mm_add_ps(_mm_add_ps(temp0_21, temp0_22), 
                _mm_add_ps(temp0_23, __mulps_xmmps_memps(temp0_17, *(rsi + 0x40))))
            *rdx_10 = temp0_27[0]
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
            *var_70 = temp0_28[0]
            *result_1 = temp0_29[0]
            var_40 += sx.q(rax_5) << 2
            rdx_10 = &var_88[sx.q(rax_6)]
            var_88 = rdx_10
            result = result_1
            var_70 = &var_70[sx.q(rax_7)]
            result_1 = &result[sx.q(rax_9)]
        while (i s< *(arg2 + 0x40))
else if (rcx_19 s> 0)
    int128_t* rdx_8 = var_40
    int32_t var_1c_1 = 0x3f800000
    
    do
        zmm6 = *rdx_8
        float zmm0_1[0x4] = sub_141f68050(result_2)
        zmm0_1[0] = zmm0_1[0] * zmm6[0]
        float var_a8
        sub_141f63570(result_2, &var_a8, zmm0_1, 0)
        i += 1
        float var_28[0x4]
        var_28[0] = var_a8[0]
        int64_t var_38_1 = 0
        float temp0_1[0x4] = _mm_shuffle_ps(var_28, var_28, 0xe1)
        float var_a4
        temp0_1[0] = var_a4[0]
        int32_t var_30_1 = 0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        float var_a0
        temp0_2[0] = var_a0[0]
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        var_28 = temp0_3
        float temp0_5[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rsi + 0x20))
        float temp0_7[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rsi + 0x40))
        float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rsi + 0x10))
        float temp0_11[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rsi + 0x30))
        float temp0_14[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
        var_a8 = temp0_14[0]
        var_a4 = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)[0]
        var_a0 = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)[0]
        *var_88 = temp0_14[0]
        *var_70 = var_a4[0]
        *result_1 = var_a0[0]
        rdx_8 = var_40 + (sx.q(rax_5) << 2)
        var_40 = rdx_8
        var_88 = &var_88[sx.q(rax_6)]
        result = result_1
        var_70 = &var_70[sx.q(rax_7)]
        result_1 = &result[sx.q(rax_9)]
    while (i s< *(arg2 + 0x40))

return result
