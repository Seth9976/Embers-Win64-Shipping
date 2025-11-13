// 函数: sub_142505ab0
// 地址: 0x142505ab0
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
int128_t* rdi = &var_48
int128_t var_38 = data_142d3f660

if (rax_2 != 0)
    rdi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* rcx_2 = &var_38

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
int128_t zmm6 = *(rcx_2 + 4)
float zmm7[0x4] = *rcx_2
float zmm3 = *(rdi + 4)
float zmm2 = *rdi
float zmm4 = *(rcx_2 + 8)
float zmm1 = zmm2 * zmm7[0] + zmm3 f* zmm6.d
float zmm0_2 = *(rdi + 8)
float zmm5 = (zmm0_2 + zmm0_2) * zmm4 + zmm1 + zmm1
zmm7[0] = zmm7[0] * zmm5
zmm6.d = zmm6.d f* zmm5
zmm7[0] = zmm7[0] - zmm2
zmm4 = zmm4 * zmm5
zmm5 = zmm5 f* *(rcx_2 + 0xc)
zmm6.d = zmm6.d f- zmm3
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
zmm5 = zmm5 f- *(rdi + 0xc)
temp0[0] = zmm6.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm4 - zmm0_2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm5
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
