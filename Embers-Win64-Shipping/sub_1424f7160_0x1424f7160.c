// 函数: sub_1424f7160
// 地址: 0x1424f7160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_e8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_e8

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int128_t zmm7 = *(rcx_1 + 0x18)
int128_t zmm11 = *(rcx_1 + 0x1c)
int128_t zmm9 = *(rcx_1 + 0x28)
int128_t zmm13 = *(rcx_1 + 0x2c)
int128_t zmm6 = *(rcx_1 + 0x34)
int128_t zmm10 = *(rcx_1 + 0x38)
int128_t zmm14 = *(rcx_1 + 0x3c)
float zmm4[0x4] = *rcx_1
float zmm8[0x4] = *(rcx_1 + 4)
int32_t result = *(rcx_1 + 0x10)
float zmm12[0x4] = *(rcx_1 + 8)
int32_t zmm3 = *(rcx_1 + 0x14)
float zmm15[0x4] = *(rcx_1 + 0xc)
int32_t zmm1 = *(rcx_1 + 0x20)
int32_t zmm5 = *(rcx_1 + 0x24)
int32_t zmm2 = *(rcx_1 + 0x30)
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xe1)
temp0[0] = zmm3
float temp0_2[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xe1)
temp0_1[0] = zmm7.d
temp0_2[0] = zmm11.d
float temp0_3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
temp0_3[0] = result
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_4[0] = zmm5
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_5[0] = zmm9.d
temp0_6[0] = zmm13.d
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_7[0] = zmm1
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_8[0] = zmm6.d
temp0_9[0] = zmm10.d
float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_10[0] = zmm14.d
float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
temp0_11[0] = zmm2
float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
*arg3 = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
arg3[1] = temp0_12
arg3[2] = temp0_13
arg3[3] = temp0_14
return result
