// 函数: sub_1424f6270
// 地址: 0x1424f6270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_48
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_4 = *(arg2 + 0x38)
void* rcx_2 = &var_58

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
float zmm2[0x4] = *(rsi + 8)
float result[0x4] = *(rsi + 0x18)
float zmm1[0x4] = *(rsi + 0x28)
zmm2[0] = zmm2[0] * zmm2[0]
result[0] = result[0] * result[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] + result[0]
zmm2[0] = zmm2[0] + zmm1[0]

if (zmm2[0] <= 9.99999944e-11f)
    *arg3 = 0
else
    float zmm3[0x4] = zmm2
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
    zmm2 = 0x3f000000
    zmm3[0] = zmm3[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm3[0] = zmm3[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm3[0] = zmm3[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm3[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    result = 0x80000000
    temp0_1[0] = temp0_1[0] f* *(rsi + 8)
    temp0_1[0] = temp0_1[0] f* *(rsi + 0x18)
    temp0_1[0] = temp0_1[0] f* *(rsi + 0x28)
    zmm3 = temp0_1 ^ 0x80000000
    temp0_1[0] = temp0_1[0] f* *(rsi + 0x38)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_2[0] = (temp0_1 ^ 0x80000000)[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = temp0_1[0]
    *rcx_2 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
    *arg3 = 1

return result
