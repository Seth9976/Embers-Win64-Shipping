// 函数: sub_1424f7c40
// 地址: 0x1424f7c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_58

if (rax_2 != 0)
    rdi = rax_2

int32_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
float zmm0[0x4] = *(rdi + 0x30)
int128_t zmm6 = *(rdi + 0x20)
int128_t zmm4 = *rdi
int128_t zmm5 = *(rdi + 0x10)
zmm0[0] = zmm0[0] f* var_68
float var_64
float zmm2 = zmm0[1] * var_64
float zmm3 = zmm0[2]
zmm0[0] = zmm0[0]
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
*arg3 = zmm4
temp0[0] = zmm2
arg3[1] = zmm5
arg3[2] = zmm6
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float var_60
temp0_1[0] = zmm3 * var_60
arg3[3] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
return result
