// 函数: sub_142505220
// 地址: 0x142505220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_48
int128_t var_38 = data_142d3f660

if (rax_2 != 0)
    rsi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

float* rax_4 = *(arg2 + 0x38)
float* rcx_2 = &var_38

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int128_t zmm7 = *rsi
float zmm1 = *(rsi + 8)
float zmm8[0x4] = *(rsi + 4)
zmm8[0] = zmm8[0] * rcx_2[2]
float zmm2 = *rcx_2
float zmm5 = zmm2
zmm2 = zmm2 f* *(rsi + 4)
zmm8[0] = zmm8[0] - zmm1 * rcx_2[1]
float zmm0_2 = zmm7.d
zmm7.d = zmm7.d f* rcx_2[1]
zmm0_2 = zmm0_2 * rcx_2[2]
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
zmm7.d = zmm7.d f- zmm2
temp0[0] = zmm5 * zmm1 - zmm0_2
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm7.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = 0
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return (zx.o(0)).d
