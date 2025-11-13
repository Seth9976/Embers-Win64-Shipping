// 函数: sub_141b296b0
// 地址: 0x141b296b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
arg1[1]
int128_t var_b8 = *arg1
void var_a8
int32_t* rax_2
float zmm8_1[0x4]
rax_2, zmm8_1 = sub_140adf5d0(&var_b8, &var_a8)
int32_t var_c8
sub_140ad3dc0(rax_2, &var_c8)
float zmm6[0x4] = arg1[2]
int32_t var_c4
float zmm7[0x4] = var_c4
int32_t zmm3 = var_c8
float temp0[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
temp0_2[0] = temp0[0]
int32_t var_c0
temp0_3[0] = var_c0
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = temp0_1[0]
temp0_5[0] = zmm6[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
temp0_6[0] = zmm3
float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
float result = temp0_7[0]
temp0_8[0] = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
*arg2 = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
int32_t var_4c = 0x1ff
arg2[1] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
arg2[2][0].q = result.q
__security_check_cookie(rax_1 ^ &var_e8)
return result
