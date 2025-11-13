// 函数: sub_1424f5c70
// 地址: 0x1424f5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_78
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rdi = rax_2

void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_4 = *(arg2 + 0x38)
void* rcx_2 = &var_88

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
float result_1[0x4] = *(rdi + 0x1c)
float zmm8[0x4] = *(rdi + 0xc)
result_1[0] = result_1[0] f+ *(rdi + 0x14)
zmm8[0] = zmm8[0] f+ *(rdi + 4)
float zmm6[0x4] = *(rdi + 0x2c)
zmm6[0] = zmm6[0] f+ *(rdi + 0x24)
float result[0x4] = result_1
result[0] = result[0] * result_1[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] + result[0]
zmm8[0] = zmm8[0] + zmm6[0]

if (zmm8[0] <= 9.99999944e-11f)
    *arg3 = 0
else
    float zmm4_1[0x4] = 0x3f000000
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
    float zmm2[0x4] = 0x3f000000
    zmm8[0] = zmm8[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm8[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    zmm4_1[0] = 0.5f - zmm8[0]
    float zmm3[0x4] = *(rdi + 0x3c)
    zmm3[0] = zmm3[0] f+ *(rdi + 0x34)
    temp0_1[0] = temp0_1[0] * zmm4_1[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    result = 0x80000000
    zmm3[0] = zmm3[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm8[0]
    temp0_1[0] = temp0_1[0] * result_1[0]
    zmm4_1 = temp0_1 ^ 0x80000000
    temp0_1[0] = temp0_1[0] * zmm6[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    temp0_2[0] = (temp0_1 ^ 0x80000000)[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = zmm3[0]
    *rcx_2 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
    *arg3 = 1

return result
