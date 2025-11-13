// 函数: sub_1427ae0f0
// 地址: 0x1427ae0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x425) == 0
float* rdi = arg3
uint128_t result_4
result_4.d = (*(arg1 + 0x420)).d f* *(arg1 + 0x434)
float result_10[0x4] = *(arg1 + 0x1c0)
float result_11[0x4] = *(arg1 + 0x1e0)
int64_t result_17 = (_mm_cvtps_pd(result_4.q)).q
int32_t var_108
int32_t result_3
int32_t result_12
float result_13[0x4]
float result_1[0x4]
uint128_t result_9
float result_14[0x4]
float result_5[0x4]

if (cond:0)
    result_1 = *(arg1 + 0x42c)
    result_5 = _mm_unpacklo_ps(*(arg1 + 0x428), (*(arg1 + 0x430)).q)
    result_1 = _mm_unpacklo_ps(result_1, 0)
    result_13 = _mm_shuffle_ps(result_10, result_10, 0xc9)
    result_5 = _mm_mul_ps(_mm_unpacklo_ps(result_5, result_1[0].q), result_11)
    result_1 = _mm_shuffle_ps(result_10, result_10, 0xd2)
    result_4 = _mm_mul_ps(_mm_shuffle_ps(result_5, result_5, 0xc9), result_1)
    result_14 =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(result_5, result_5, 0xd2), result_13), result_4)
    result_14 = _mm_add_ps(result_14, result_14)
    result_9 = _mm_mul_ps(_mm_shuffle_ps(result_14, result_14, 0xd2), result_13)
    result_4 = _mm_mul_ps(_mm_shuffle_ps(result_14, result_14, 0xc9), result_1)
    result_13 = _mm_mul_ps(_mm_shuffle_ps(result_10, result_10, 0xff), result_14)
    result_9 = _mm_add_ps(_mm_sub_ps(result_9, result_4), _mm_add_ps(result_13, result_5))
    var_108 = result_9.d
    result_4 = _mm_shuffle_ps(result_9, result_9, 0x55)
    result_12 = _mm_shuffle_ps(result_9, result_9, 0xaa).d
    result_3 = result_4.d
else
    var_108.q = *(arg1 + 0x428)
    result_12 = *(arg1 + 0x430)

result_4 = data_143dbb200
uint128_t result_15 = zx.o(var_108.q)
result_1 = data_143dbb1fc
result_14 = data_143dbb1f8
uint128_t result_18
result_18.d = (*arg4).d f- *arg3
float result_6[0x4] = *(arg4 + 8)
result_6[0] = result_6[0] f- arg3[2]
result_14 = _mm_unpacklo_ps(result_14, result_4.q)
result_1 = _mm_unpacklo_ps(result_1, zx.o(0)[0].q)
result_13 = _mm_shuffle_ps(result_10, result_10, 0xc9)
result_14 = _mm_unpacklo_ps(result_14, result_1[0].q)
result_1 = _mm_shuffle_ps(result_10, result_10, 0xd2)
result_14 = _mm_mul_ps(result_14, result_11)
result_11 = result_12
float result = arg3[2]
result_10 = _mm_shuffle_ps(result_10, result_10, 0xff)
var_108.q = result_15.q
result_9 = _mm_shuffle_ps(result_14, result_14, 0xd2)
result_4 = _mm_mul_ps(_mm_shuffle_ps(result_14, result_14, 0xc9), result_1)
result_9 = _mm_sub_ps(_mm_mul_ps(result_9, result_13), result_4)
result_9 = _mm_add_ps(result_9, result_9)
result_10 = _mm_mul_ps(result_10, result_9)
result_5 = _mm_shuffle_ps(result_9, result_9, 0xd2)
result_4 = _mm_mul_ps(_mm_shuffle_ps(result_9, result_9, 0xc9), result_1)
result_1 = result_3
result_10 = _mm_add_ps(result_10, result_14)
result_5 = _mm_mul_ps(result_5, result_13)
result_6[0] = result_6[0] * result_6[0]
result_5 = _mm_add_ps(_mm_sub_ps(result_5, result_4), result_10)
result_10 = *(arg4 + 4)
float result_16[0x4] = result_10
result_16[0] = result_16[0] f- arg3[1]
result_5 = __addps_xmmps_memps(result_5, *(arg1 + 0x1d0))
result_9.d = result_16.d f* result_16[0]
float var_f8 = result_5[0]
result_4 = _mm_shuffle_ps(result_5, result_5, 0x55)
float result_2[0x4] = result_5
int32_t var_e8 = result_4.d
result_4.d = result_4.d f* result_1[0]
result_2[0] = result_2[0] f* result_15.d
result_2[0] = result_2[0] f+ result_4.d
result_4 = _mm_shuffle_ps(result_5, result_5, 0xaa)
int32_t var_d8 = result_4.d
result_4.d = result_4.d f* result_11[0]
result_2[0] = result_2[0] f+ result_4.d
uint64_t var_c8 = *arg3
result_4.d = result_18.d f* result_18.d
result_9.d = result_9.d f+ result_4.d
result_9.d = result_9.d f+ result_6[0]
float result_8

if (not(result_9.d f<= 9.99999994e-09f))
    result_14 = 0x3f000000
    result_5 = _mm_rsqrt_ss(result_9[0], result_9.d)
    result_1 = 0x3f000000
    result_9.d = result_9.d f* 0.5f
    result_4.d = result_5.d f* result_5[0]
    result_13 = result_9
    result_13[0] = result_13[0] f* result_4.d
    result_1[0] = 0.5f - result_13[0]
    result_4.d = result_5.d f* result_1[0]
    result_1 = result_3
    result_5[0] = result_5[0] f+ result_4.d
    result_5[0] = result_5[0] * result_5[0]
    result_9.d = result_9.d f* result_5[0]
    result_14[0] = 0.5f f- result_9.d
    result_4.d = result_5.d f* result_14[0]
    result_5[0] = result_5[0] f+ result_4.d
    result_8 = result_5[0]
    result_16[0] = result_16[0] * result_5[0]
    result_18.d = result_18.d f* result_5[0]
    result_6[0] = result_6[0] * result_5[0]

uint128_t result_20 = var_c8.d
float result_19[0x4] = var_c8:4.d
result_9.d = result_15.d f* result_2[0]
result_4.d = result_1.d f* result_2[0]
result_9.d = result_9.d f- result_20.d
result_11[0] = result_11[0] * result_2[0]
result_2 = result
result_4.d = result_4.d f- result_19[0]
result_11[0] = result_11[0] - result_2[0]
result_9.d = result_9.d f* result_15.d
result_4.d = result_4.d f* result_1[0]
result_1[0] = result_1[0] * result_16[0]
result_9.d = result_9.d f+ result_4.d
result_11[0] = result_11[0] * result_11[0]
result_4.d = result_15.d f* result_18.d
result_9.d = result_9.d f+ result_11[0]
result_11[0] = result_11[0] * result_6[0]
result_1[0] = result_1[0] f+ result_4.d
result_1[0] = result_1[0] + result_11[0]
result_9.d = result_9.d f/ result_1[0]
result_14 = result_9
result_5 = result_9
result_14[0] = result_14[0] f* result_18.d
result_5[0] = result_5[0] * result_16[0]
result_9.d = result_9.d f* result_6[0]
result_14[0] = result_14[0] f+ result_20.d
result_5[0] = result_5[0] + result_19[0]
result_9.d = result_9.d f+ result_2[0]
result_4.d = result_14.d f- result_20.d
result_5[0] = result_5[0] - result_19[0]
result_13 = result_9
result_13[0] = result_13[0] - result_2[0]
result_4.d = result_4.d f* result_18.d
result_5[0] = result_5[0] * result_16[0]
result_13[0] = result_13[0] * result_6[0]
result_5[0] = result_5[0] f+ result_4.d
result_5[0] = result_5[0] + result_13[0]

if (result_5[0] < 0f)
    result.b = 0
else
    result_4 = *arg4
    result_10[0] = result_10[0] - result_19[0]
    result_4.d = result_4.d f- result_20.d
    result_10[0] = result_10[0] * result_16[0]
    result_4.d = result_4.d f* result_18.d
    result_10[0] = result_10[0] f+ result_4.d
    result_4.d = (*(arg4 + 8)).d f- result_2[0]
    result_4.d = result_4.d f* result_6[0]
    result_10[0] = result_10[0] f+ result_4.d
    
    if (result_5[0] > result_10[0])
        result.b = 0
    else
        result_14[0] = result_14[0] - var_f8
        result_5[0] = result_5[0] f- var_e8
        result_9.d = result_9.d f- var_d8
        result_10 = result_3
        result_4.d = result_14.d f* result_15.d
        result_5[0] = result_5[0] * result_10[0]
        result_13 = result_9
        result_13[0] = result_13[0] * result_11[0]
        result_5[0] = result_5[0] f+ result_4.d
        uint128_t result_7 = _mm_cvtpd_ps(zx.o(result_17))
        result_5[0] = result_5[0] + result_13[0]
        result_8 = result_7.d
        result_4.d = result_15.d f* result_5[0]
        result_10[0] = result_10[0] * result_5[0]
        result_14[0] = result_14[0] f- result_4.d
        result_4.d = result_11.d f* result_5[0]
        result_5[0] = result_5[0] - result_10[0]
        result_9.d = result_9.d f- result_4.d
        result_4.d = result_14.d f* result_14[0]
        result_5[0] = result_5[0] * result_5[0]
        result_13 = result_9
        result_13[0] = result_13[0] f* result_9.d
        result_5[0] = result_5[0] f+ result_4.d
        result_5[0] = result_5[0] + result_13[0]
        result_13 = _mm_sqrt_ss(0, result_5[0])
        
        if (result_13[0] <= 0f)
            result_10 = 0x3f800000
            
            if (result_11[0] >= 0f)
                result_11[0] = result_11[0] + 1f
                result_13 = 0x3f800000
                result_4.d = result_15.d f* result_15.d
                result_13[0] = 1f / result_11[0]
                result_11 = result_15
                result_15.d = result_15.d f* result_3
                result_11 ^= data_142d3f780
                result_4.d = result_4.d f* result_13[0]
                result_15.d = result_15.d f* result_13[0]
                result_10[0] = 1f f- result_4.d
            else
                result_13 = result_15
                result_4.d = 1f - result_11[0]
                result_13[0] = result_13[0] f* result_15.d
                result_1 = 0x3f800000
                result_11 = result_15
                result_15.d = result_15.d f* result_3
                result_1[0] = 1f f/ result_4.d
                result_13[0] = result_13[0] * result_1[0]
                result_15.d = result_15.d f* result_1[0]
                result_10[0] = 1f - result_13[0]
            
            result_11[0] = result_11[0] * result_8
            result_15.d = result_15.d f* result_7.d
            result_10[0] = result_10[0] f* result_7.d
            result_7.d = var_e8.d f- result_15.d
        else
            result_11 = result_7
            result_11[0] = result_11[0] / result_13[0]
            result_10 = result_11
            result_7.d = result_11.d f* result_5[0]
            result_10[0] = result_10[0] * result_14[0]
            result_7.d = result_7.d f+ var_e8
            result_11[0] = result_11[0] f* result_9.d
        
        result_10[0] = result_10[0] + var_f8
        result_11[0] = result_11[0] f+ var_d8
        result_1 = result_7
        result_1[0] = result_1[0] - result_19[0]
        result_4.d = result_10.d f- result_20.d
        result_11[0] = result_11[0] - result_2[0]
        result_1[0] = result_1[0] * result_16[0]
        result_4.d = result_4.d f* result_18.d
        result_11[0] = result_11[0] * result_6[0]
        result_1[0] = result_1[0] f+ result_4.d
        result_1[0] = result_1[0] + result_11[0]
        float var_100_1
        
        if (result_1[0] >= 0f)
            result_6[0] = result_6[0] * result_1[0]
            result_18.d = result_18.d f* result_1[0]
            result_6[0] = result_6[0] + result_2[0]
            result_16[0] = result_16[0] * result_1[0]
            result_18.d = result_18.d f+ result_20.d
            result_16[0] = result_16[0] + result_19[0]
            var_100_1 = result_6[0]
        else
            var_100_1 = result_2[0]
            result_18 = result_20
            result_16 = result_19
            result_6 = result_2
        
        result_13 = result_18
        result_13[0] = result_13[0] - result_10[0]
        result_16[0] = result_16[0] f- result_7.d
        result_4.d = result_6.d f- result_11[0]
        result_13[0] = result_13[0] * result_13[0]
        result_4.d = result_4.d f* result_4.d
        result_16[0] = result_16[0] * result_16[0]
        result_16[0] = result_16[0] + result_13[0]
        result_13 = *(arg1 + 0x420)
        result_13[0] = result_13[0] f* *(arg1 + 0x41c)
        result_16[0] = result_16[0] f+ result_4.d
        
        if (_mm_sqrt_ss(0, result_16[0]).d f> result_13[0])
            result.b = 0
        else if (*(arg1 + 0x441) == 0)
        label_1427ae8bf:
            sub_140d3a3a0(arg2 + 0x70, arg1)
            result_6[0] = result_6[0] - rdi[2]
            float zmm0 = result_18.d - *rdi
            result_16[0] = result_16[0] - rdi[1]
            result_6[0] = result_6[0] * result_6[0]
            result_16[0] = result_16[0] * result_16[0]
            result_16[0] = result_16[0] + zmm0 * zmm0
            result_16[0] = result_16[0] + result_6[0]
            float temp0_56 = _mm_sqrt_ss(0, result_16[0])
            *(arg2 + 0x1c) = (_mm_unpacklo_ps(result_18, result_16[0].q)).q
            *(arg2 + 0x24) = var_100_1
            result.b = 1
            *(arg2 + 0xc) = temp0_56
        else
            result_2 = result_7
            result_2[0] = result_2[0] - result_19[0]
            result_11[0] = result_11[0] - result
            result_15.d = result_10.d f- result_20.d
            result_2[0] = result_2[0] * result_2[0]
            result_11[0] = result_11[0] * result_11[0]
            result_4.d = result_15.d f* result_15.d
            result_2[0] = result_2[0] f+ result_4.d
            result_2[0] = result_2[0] + result_11[0]
            
            if (not(result_2[0] <= 9.99999994e-09f))
                result_14 = 0x3f000000
                result_4 = result_2
                result_5 = _mm_rsqrt_ss(result_4[0], result_4.d)
                result_1 = 0x3f000000
                result_9.d = result_4.d f* 0.5f
                result_4.d = result_5.d f* result_5[0]
                result_13 = result_9
                result_13[0] = result_13[0] f* result_4.d
                result_1[0] = 0.5f - result_13[0]
                result_4.d = result_5.d f* result_1[0]
                result_5[0] = result_5[0] f+ result_4.d
                result_5[0] = result_5[0] * result_5[0]
                result_9.d = result_9.d f* result_5[0]
                result_14[0] = 0.5f f- result_9.d
                result_4.d = result_5.d f* result_14[0]
                result_5[0] = result_5[0] f+ result_4.d
                result_15.d = result_15.d f* result_5[0]
                result_2[0] = result_2[0] * result_5[0]
                result_11[0] = result_11[0] * result_5[0]
            
            result_14 = var_c8:4.d
            result_14[0] = result_14[0] f- var_e8
            result_9.d = result_20.d f- var_f8
            result_1 = result
            result_1[0] = result_1[0] f- var_d8
            result_14[0] = result_14[0] * result_14[0]
            result_14[0] = result_14[0] * result_2[0]
            result_4.d = result_9.d f* result_15.d
            result_1[0] = result_1[0] * result_11[0]
            result_14[0] = result_14[0] f+ result_4.d
            result_9.d = result_9.d f* result_9.d
            result_4 = result_8
            result_4.d = result_4.d f* result_4.d
            result_14[0] = result_14[0] f+ result_9.d
            result_1[0] = result_1[0] * result_1[0]
            result_14[0] = result_14[0] + result_1[0]
            result_14[0] = result_14[0] + result_1[0]
            result_14[0] = result_14[0] * result_14[0]
            result_14[0] = result_14[0] f- result_4.d
            result_14[0] = result_14[0] - result_14[0]
            
            if (result_14[0] <= 0f)
                goto label_1427ae8bf
            
            result_4 = _mm_sqrt_ss(0, result_14[0])
            result_13 = result_14 ^ data_142d3f780
            result_13[0] = result_13[0] f- result_4.d
            result_4.d = result_4.d f- result_14[0]
            result_13 = _mm_min_ss(result_13[0], result_4.d)
            result_15.d = result_15.d f* result_13[0]
            result_2[0] = result_2[0] * result_13[0]
            result_11[0] = result_11[0] * result_13[0]
            result_15.d = result_15.d f+ result_20.d
            result_2[0] = result_2[0] f+ var_c8:4.d
            result_13 = zx.o(result_17)
            result_11[0] = result_11[0] + result
            result_13[0].q = result_13[0].q f* 0.10000000149011612
            result_10[0] = result_10[0] f- result_15.d
            result_7.d = result_7.d f- result_2[0]
            result_11[0] = result_11[0] - result_11[0]
            result_10[0] = result_10[0] * result_10[0]
            result_7.d = result_7.d f* result_7.d
            result_11[0] = result_11[0] * result_11[0]
            result_7.d = result_7.d f+ result_10[0]
            result_7.d = result_7.d f+ result_11[0]
            
            if (not(_mm_cvtps_pd(result_7.q).q f> result_13[0].q))
                goto label_1427ae8bf
            
            result.b = 0

return result
