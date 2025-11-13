// 函数: sub_1424f5900
// 地址: 0x1424f5900
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
void* rdi = &var_48

if (rax_2 != 0)
    rdi = rax_2

int32_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t result = *(arg2 + 0x20)
float zmm5[0x4] = var_98
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
zmm5[0] = zmm5[0] f+ *(rdi + 0x30)
int128_t zmm0 = *rdi
float var_94
float zmm2 = var_94 f+ *(rdi + 0x34)
float var_90
float zmm3 = var_90 f+ *(rdi + 0x38)
int32_t zmm4 = *(rdi + 0x3c)
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0[0] = zmm2
int128_t var_88 = zmm0
zmm0 = *(rdi + 0x10)
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm3
int128_t var_68 = *(rdi + 0x20)
*arg3 = var_88
arg3[1] = zmm0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
arg3[2] = var_68
temp0_2[0] = zmm4
arg3[3] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
