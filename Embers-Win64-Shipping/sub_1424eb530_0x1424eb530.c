// 函数: sub_1424eb530
// 地址: 0x1424eb530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:2 = *(arg2 + 0x20) == 0
float arg_10 = 0f

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
float zmm0[0x4] = arg_10
float zmm3[0x4] = var_48
int64_t rcx_3
rcx_3.b = rax_4 != 0
int32_t var_50
float temp0[0x4] = _mm_unpacklo_ps(var_58, var_50[0].q)
arg_10 = zmm0[0]
int32_t var_54
float temp0_1[0x4] = _mm_unpacklo_ps(var_54, 0)
int32_t var_44
float temp0_2[0x4] = _mm_unpacklo_ps(var_44, 0)
float temp0_3[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
int32_t var_40
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, var_40[0].q), temp0_2[0].q)
float zmm2[0x4] = data_143f65bb0
float temp0_6[0x4] = _mm_sub_ps(temp0_3, temp0_5)
*(arg2 + 0x20) = rcx_3 + rax_4
float zmm7[0x4] = data_143f65ba0
uint32_t temp0_7[0x4] = __andps_xmmxud_memxud(zmm7, data_143f65b80)
float temp0_8[0x4] = _mm_div_ps(temp0_6, zmm7)
float temp0_10[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_8))
float temp0_15[0x4] = _mm_sub_ps(temp0_6, 
    _mm_mul_ps(
        _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_8, data_143f65b80), 2), 
            temp0_10 ^ temp0_8) ^ temp0_10, 
        zmm7))
float temp0_18[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_7), _mm_min_ps(temp0_15, temp0_7))
float temp0_19[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_18, 2)
float temp0_20[0x4] = _mm_add_ps(temp0_18, zmm7)
float zmm8[0x4] = _mm_and_ps(temp0_19, temp0_20 ^ temp0_18) ^ temp0_20
float temp0_22[0x4] = _mm_cmpeq_ps(data_143f65b90, zmm8, 1)
float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, temp0_22)
zmm0 = arg_10
uint32_t result
result.b = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), 
    __andps_xmmxud_memxud(zmm1 ^ zmm8, data_143f65b80), 1)) == 0
*arg3 = result.b
return result
