// 函数: sub_141b294b0
// 地址: 0x141b294b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_a8
sub_140ad3dc0(arg1 + 0xc, &var_a8)
int64_t zmm0 = arg1[2].d
float zmm8[0x4] = *arg1
int32_t zmm1 = *(arg1 + 4)
int32_t zmm2 = *(arg1 + 8)
int32_t zmm5 = *(arg1 + 0x18)
int128_t zmm6 = *(arg1 + 0x1c)
int32_t var_a4
float zmm7[0x4] = var_a4
int32_t zmm3 = var_a8
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
temp0[0] = zmm1
int32_t var_a0
temp0_1[0] = var_a0
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm2
temp0_3[0] = zmm5
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
temp0_4[0] = zmm3
int32_t result = zmm0.d
temp0_5[0] = zmm6.d
*arg2 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
int32_t var_4c = 0x1ff
arg2[1] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
arg2[2][0].q = result.q
__security_check_cookie(rax_1 ^ &var_c8)
return result
