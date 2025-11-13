// 函数: sub_1424f4fd0
// 地址: 0x1424f4fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)
int64_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t var_b8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_b8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t rax_4 = *(arg2 + 0x20)
int64_t zmm0 = var_98
float zmm11[0x4] = var_b8
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4
int64_t var_88 = zmm0
int32_t var_90
int32_t var_80 = var_90
float var_78[0x4]
float (* result)[0x4]
int64_t zmm6_1
float zmm7_1[0x4]
float zmm8_1[0x4]
result, zmm6_1, zmm7_1, zmm8_1 = sub_140ade170(&var_88, &var_78)
*arg3 = var_78
float temp0[0x4] = _mm_unpacklo_ps(zmm7_1, 0)
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_1, zmm6_1), temp0[0].q)
int32_t var_b4
int32_t var_b0
arg3[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11, var_b0.q), _mm_unpacklo_ps(var_b4, 0)[0].q)
arg3[1] = temp0_2
return result
