// 函数: sub_1425074d0
// 地址: 0x1425074d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t result_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &result_3, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_3)

int64_t rax_3 = *(arg2 + 0x20)
float zmm8[0x4] = var_58
int32_t var_54
float zmm9[0x4] = var_54
float result_1[0x4] = result_3
int64_t rcx_2
rcx_2.b = rax_3 != 0
int32_t var_64
float zmm7[0x4] = var_64
zmm8[0] = zmm8[0] * zmm8[0]
*(arg2 + 0x20) = rcx_2 + rax_3
zmm9[0] = zmm9[0] * zmm9[0]
zmm8[0] = zmm8[0] + zmm9[0]

if (not(zmm8[0] <= 9.99999994e-09f))
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
    zmm8[0] = zmm8[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm8[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm8[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    zmm9[0] = zmm9[0] * temp0_1[0]

float result[0x4] = result_1
zmm7[0] = zmm7[0] * zmm7[0]
result[0] = result[0] * result_1[0]
zmm7[0] = zmm7[0] + result[0]

if (not(zmm7[0] <= 9.99999994e-09f))
    float result_2[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm7[0] = zmm7[0] * 0.5f
    result_2[0] = result_2[0] * result_2[0]
    zmm7[0] = zmm7[0] * result_2[0]
    result_2[0] = result_2[0] * (0.5f - zmm7[0])
    result_2[0] = result_2[0] + result_2[0]
    result = result_2
    result_2[0] = result_2[0] * result_2[0]
    zmm7[0] = zmm7[0] * result_2[0]
    result[0] = result[0] * (0.5f - zmm7[0])
    result_2[0] = result_2[0] + result[0]
    result_1[0] = result_1[0] * result_2[0]
    zmm7[0] = zmm7[0] * result_2[0]

result_1[0] = result_1[0] * zmm8[0]
zmm7[0] = zmm7[0] * zmm9[0]
result_1[0] = result_1[0] + zmm7[0]
*arg3 = result_1[0]
return result
