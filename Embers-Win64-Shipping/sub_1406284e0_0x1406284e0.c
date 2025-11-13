// 函数: sub_1406284e0
// 地址: 0x1406284e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_98
int64_t rax_2 = __security_cookie ^ &var_98
void* rax_3 = *(arg1 + 0x130)
int128_t* rax_4

if (rax_3 == 0)
    rax_4 = &data_143dbb0c0
else
    rax_4 = rax_3 + 0x1c0

float var_58[0x4] = *rax_4
int128_t var_48_1 = rax_4[1]
float var_38_1[0x4] = rax_4[2]
float var_68[0x4]
float (* rax_5)[0x4] = sub_140ade170(arg2, &var_68)
float zmm3_1[0x4] = var_58
float zmm5_1[0x4] = data_143cdbda0
float temp0_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
float zmm2_1[0x4] = *rax_5
float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
float temp0_4[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b))
char var_78_1 = 0
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm2_1)
float temp0_7[0x4] = __mulps_xmmps_memps(temp0_4, data_143cdbdd0)
float temp0_8[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
float temp0_9[0x4] = _mm_add_ps(temp0_7, temp0_6)
float temp0_11[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_11, data_143cdbdc0)
float temp0_15[0x4] = __mulps_xmmps_memps(temp0_13, data_143cdbdb0)
float temp0_17[0x4] = _mm_add_ps(_mm_add_ps(temp0_9, temp0_14), temp0_15)
float temp0_18[0x4] = _mm_mul_ps(temp0_17, temp0_17)
float temp0_20[0x4] = _mm_add_ps(temp0_18, _mm_shuffle_ps(temp0_18, temp0_18, 0x4e))
float temp0_22[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x39), temp0_20)
float temp0_23[0x4] = _mm_rsqrt_ps(temp0_22)
float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm5_1)
float temp0_29[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_23, temp0_23), temp0_24)), temp0_23), 
    temp0_23)
float temp0_32[0x4] = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_29, temp0_29), temp0_24))
float temp0_33[0x4] = _mm_cmpeq_ps(data_143cdbe10, temp0_22, 2)
var_58 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_32, temp0_29), temp0_29), temp0_17) ^ data_143cdbd90, 
    temp0_33) ^ data_143cdbd90
sub_141dd7250(arg1, &var_58, 0, nullptr, var_78_1)
__security_check_cookie(rax_2 ^ &var_98)
