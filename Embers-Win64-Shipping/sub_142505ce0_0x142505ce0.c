// 函数: sub_142505ce0
// 地址: 0x142505ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_48[0x4] = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rdi = &var_48
int32_t arg_10 = 0

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
float zmm7[0x4] = *(rdi + 4)
float zmm6[0x4] = *rdi
int128_t zmm8 = *(rdi + 8)
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d
float zmm0_1[0x4]

if (zmm6[0] f<= arg_10)
    zmm0_1 = data_142d3f660
else
    var_48[3] = 0
    float zmm2[0x4] = 0x3f000000
    float zmm3 = zmm6[0]
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
    zmm3 = zmm3 * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm3 * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm0_1 = var_48
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm0_1[0] = zmm6[0]
    zmm8.d = zmm8.d f* temp0_1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    temp0_2[0] = zmm7[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = zmm8.d
    zmm0_1 = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)

*arg3 = zmm0_1
return result
