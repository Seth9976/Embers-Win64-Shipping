// 函数: sub_141df38f0
// 地址: 0x141df38f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *arg1 == 0
float zmm5[0x4] = arg3[0]
float zmm6[0x4] = *arg2
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_1[0x4] = _mm_mul_ps(zmm6, temp0)
float result[0x4]

if (cond:0)
    float zmm1[0x4] = arg2[1]
    result = arg2[2]
    *arg1 = 1
    float temp0_15[0x4] = _mm_mul_ps(zmm1, temp0)
    float temp0_16[0x4] = _mm_mul_ps(result, temp0)
    *(arg1 + 0x10) = temp0_1
    *(arg1 + 0x20) = temp0_15
    *(arg1 + 0x30) = temp0_16
else
    float temp0_2[0x4] = _mm_mul_ps(*(arg1 + 0x10), temp0_1)
    float temp0_3[0x4] = _mm_sub_ps(zx.o(0), temp0_1)
    float temp0_5[0x4] = _mm_add_ps(temp0_2, _mm_shuffle_ps(temp0_2, temp0_2, 0x4e))
    *(arg1 + 0x10) = __addps_xmmps_memps(
        _mm_and_ps(
            _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x39), temp0_5), 2), 
            temp0_3 ^ temp0_1) ^ temp0_3, 
        *(arg1 + 0x10))
    *(arg1 + 0x20) = __addps_xmmps_memps(_mm_mul_ps(arg2[1], temp0), *(arg1 + 0x20))
    *(arg1 + 0x30) = __addps_xmmps_memps(_mm_mul_ps(arg2[2], temp0), *(arg1 + 0x30))
    arg3[0] = arg3[0] f+ *(arg1 + 4)

result = data_143a2d2d8
float zmm3[0x4] = data_143a2d2d0
float temp0_17[0x4] = _mm_unpacklo_ps(data_143a2d2d4, zx.o(0)[0].q)
float temp0_19[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, result[0].q), temp0_17[0].q)
*(arg1 + 4) = arg3[0]
*(arg1 + 0x30) = temp0_19
return result
