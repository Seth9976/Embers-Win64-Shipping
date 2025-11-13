// 函数: sub_141778870
// 地址: 0x141778870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = arg2[1]
uint128_t result_7 = arg2[2]
uint128_t result_2
result_2.d = result_7.d f+ result_7.d
float zmm11[0x4] = result ^ data_142d3f780
zmm11[0] = zmm11[0] + zmm11[0]
uint128_t zmm12
zmm12.d = result_2.d f* arg2[3]
zmm11[0] = zmm11[0] f* result.d
result = result_2
result_2.d = result_2.d f* *arg2
result.d = result.d f* result_7.d
zmm11[0] = zmm11[0] f- result.d
result.d = zmm11.d f* *arg2
zmm11[0] = zmm11[0] f* arg2[3]
zmm12.d = zmm12.d f- result.d
zmm11[0] = zmm11[0] + 1f
zmm11[0] = zmm11[0] f+ result_2.d
int32_t var_90

if (arg3 != 2)
    int64_t var_98_1 = 0
    var_90 = 0x3f800000
else
    int64_t var_98
    var_98.d = 0
    var_98 = 0x3f800000

uint128_t result_3 = *(arg1 + 8)
result_7 = 0
uint128_t result_9 = *(arg1 + 4)
uint128_t result_8 = result_7
result_2 = *arg1
float result_6[0x4] = result_3
uint32_t result_4 = result_7.d
result_7 = result_9
uint128_t result_1 = result_4
result_6[0] = result_6[0] f* result_1.d
uint128_t zmm9 = var_90
int32_t result_5 = result_2.d
result_8 = _mm_shuffle_ps(result_8, result_8, 0x55)
result.d = result_3.d f* result_8.d
uint128_t zmm7
zmm7.d = result_9.d f* zmm9.d
float zmm4 = result_2.d f* result_8.d
zmm7.d = zmm7.d f- result.d
result = result_2
result_2 = *(arg1 + 0xc)
result.d = result.d f* zmm9.d
zmm7.d = zmm7.d f+ zmm7.d
result_6[0] = result_6[0] f- result.d
result.d = result_9.d f* result_1.d
result_9.d = result_9.d f* zmm7.d
zmm4 = zmm4 f- result.d
result = result_3
result_6[0] = result_6[0] + result_6[0]
result_3.d = result_3.d f* zmm7.d
zmm4 = zmm4 + zmm4
result.d = result.d f* result_6[0]
result_7.d = result_7.d f* zmm4
result_7.d = result_7.d f- result.d
result = result_7.d
result_7.d = result_2.d f* zmm7.d
result_7.d = result_7.d f+ result_1.d
result_1 = result_5
result.d = result.d f+ result_7.d
result_7.d = result_2.d f* result_6[0]
result_2.d = result_2.d f* zmm4
int32_t arg_18 = result.d
result_7.d = result_7.d f+ result_8.d
result = result_1
result_1.d = result_1.d f* result_6[0]
result.d = result.d f* zmm4
result_2.d = result_2.d f+ zmm9.d
zmm9 = arg_18
result_1.d = result_1.d f- result_9.d
result_3.d = result_3.d f- result.d
result_1.d = result_1.d f+ result_2.d
result_3.d = result_3.d f+ result_7.d
result_7.d = zmm9.d f* zmm12.d
result_5 = result_1.d
result.d = result_1.d f* zmm12.d
result_1.d = result_1.d f* zmm11[0]
result_2.d = result_3.d f* zmm11[0]
result_2.d = result_2.d f- result.d
result.d = zmm9.d f* zmm11[0]
result_1.d = result_1.d f- result.d
result.d = result_3.d f* zmm11[0]
result_7.d = result_7.d f- result.d
*arg4 = (_mm_unpacklo_ps(result_2, result_1.q)).q
arg4[1].d = result_7.d
*arg5 = 0
zmm7 = *(arg4 + 4)
result_8 = *arg4
result_9 = arg4[1].d
result_1.d = result_8.d f* result_8.d
result.d = zmm7.d f* zmm7.d
result_7.d = result_9.d f* result_9.d
result_1.d = result_1.d f+ result.d
result_1.d = result_1.d f+ result_7.d

if (not(result_1.d f<= 9.99999975e-05f))
    zmm11[0] = zmm11[0] f* result_5
    zmm11[0] = zmm11[0] f* zmm9.d
    zmm12.d = zmm12.d f* result_3.d
    float temp0_2[0x4] = _mm_rsqrt_ss(result_1[0], result_1.d)
    result_2.d = result_1.d f* 0.5f
    zmm11[0] = zmm11[0] f+ zmm12.d
    result.d = temp0_2.d f* temp0_2[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    result_7.d = result_2.d f* result.d
    float zmm10[0x4] = zmm11 ^ data_142d3f780
    result_1.d = 0.5f f- result_7.d
    result.d = temp0_2.d f* result_1.d
    temp0_2[0] = temp0_2[0] f+ result.d
    result_7.d = temp0_2.d f* temp0_2[0]
    result_2.d = result_2.d f* result_7.d
    result.d = temp0_2.d f* (0.5f f- result_2.d)
    temp0_2[0] = temp0_2[0] f+ result.d
    result_8.d = result_8.d f* temp0_2[0]
    zmm7.d = zmm7.d f* temp0_2[0]
    result_9.d = result_9.d f* temp0_2[0]
    *arg4 = (_mm_unpacklo_ps(result_8, zmm7.q)).q
    result = 0xbf800000
    arg4[1].d = result_9.d
    
    if (zmm10[0] >= -1f)
        zmm10 = __minss_xmmss_memss(zmm10[0], 0x3f800000)
        
        if (not(zmm10[0] < -1f))
            result = __minss_xmmss_memss(zmm10[0], 0x3f800000)
    else
        result = __minss_xmmss_memss(0xbf800000[0], 0x3f800000)
    
    result = asinf(result.d)
    *arg5 = result.d

return result
