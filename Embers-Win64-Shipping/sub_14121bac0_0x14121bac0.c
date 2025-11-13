// 函数: sub_14121bac0
// 地址: 0x14121bac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
float zmm3 = *(arg4 + 8)
float zmm0 = arg3[0] * *arg2
int64_t rbx = 0
arg3[0] = arg3[0] * arg2[1]
int64_t var_b4 = 0
float zmm5[0x4] = *arg4
float zmm4[0x4] = *(arg4 + 4)
float var_118 = zmm0
zmm0 = arg3[0] * arg2[2]
int32_t var_ac = 0
float var_114 = arg3[0]
zmm4[0] = zmm4[0] * -0.488602996f
float var_110 = zmm0
int32_t var_d8 = 0x3e906ec1
float var_d4 = zmm4[0]
zmm5[0] = zmm5[0] * -0.488602996f
float var_d0 = zmm3 * 0.488602996f
zmm0 = zmm5[0] * 1.09254801f
float var_cc = zmm5[0]
zmm4[0] = zmm4[0] * -1.09254801f
zmm0 = zmm0 * zmm4[0]
zmm4[0] = zmm4[0] * zmm4[0]
float var_c8 = zmm0
zmm4[0] = zmm4[0] * zmm3
float var_c4 = zmm4[0]
float var_c0 = zmm3 * zmm3 * 0.946175933f - 0.315391988f
zmm0 = zmm5[0] * -1.09254801f
zmm5[0] = zmm5[0] * zmm5[0]
zmm5[0] = zmm5[0] - zmm4[0]
float var_bc = zmm0 * zmm3
zmm5[0] = zmm5[0] * 0.546274006f
float var_b8 = zmm5[0]
float var_a8[0x4]
memset(&var_a8, 0, 0x90)
float zmm1[0x4] = var_118
int64_t rax_2 = 0
int64_t i_7 = 3
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t var_108
__builtin_memset(&var_108, 0, 0x30)
int64_t i_8 = 3
float zmm0_1[0x4]
int64_t i

do
    zmm0_1 = *(&var_d8 + rax_2)
    rax_2 += 0x10
    *(&var_118 + rax_2) = _mm_mul_ps(zmm0_1, temp0)
    i = i_8
    i_8 -= 1
while (i != 1)
int64_t rax_3 = 0
int64_t i_9 = 3
int64_t var_f8
float var_98[0x4] = var_f8.o
zmm1 = var_114
var_a8 = var_108.o
int64_t var_e8
float var_88[0x4] = var_e8.o
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t var_108_1
__builtin_memset(&var_108_1, 0, 0x30)
int64_t i_1

do
    zmm0_1 = *(&var_d8 + rax_3)
    rax_3 += 0x10
    *(&var_118 + rax_3) = _mm_mul_ps(zmm0_1, temp0_2)
    i_1 = i_9
    i_9 -= 1
while (i_1 != 1)
int64_t var_f8_1
float var_68[0x4] = var_f8_1.o
zmm1 = var_110
float var_78[0x4] = var_108_1.o
int64_t var_108_2
__builtin_memset(&var_108_2, 0, 0x30)
int64_t i_6 = 3
int64_t var_e8_1
float var_58[0x4] = var_e8_1.o
float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t i_2

do
    zmm0_1 = *(&var_d8 + rbx)
    rbx += 0x10
    *(&var_118 + rbx) = _mm_mul_ps(zmm0_1, temp0_4)
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)
void* rax_4 = arg1
float var_48[0x4] = var_108_2.o
int64_t i_10 = 3
int64_t var_e8_2
float var_28[0x4] = var_e8_2.o
int64_t var_f8_2
float var_38[0x4] = var_f8_2.o
int64_t i_3

do
    *rax_4 = __addps_xmmps_memps(*(&var_a8 - arg1 + rax_4), *rax_4)
    rax_4 += 0x10
    i_3 = i_10
    i_10 -= 1
while (i_3 != 1)
void* rax_5 = arg1 + 0x30
int64_t i_11 = 3
float (* r8_1)[0x4] = &var_78 - rax_5
int64_t i_4

do
    *rax_5 = __addps_xmmps_memps(*(r8_1 + rax_5), *rax_5)
    rax_5 += 0x10
    i_4 = i_11
    i_11 -= 1
while (i_4 != 1)
float (* result)[0x4] = arg1 + 0x60
float (* rdx)[0x4] = &var_48 - result
int64_t i_5

do
    *result = __addps_xmmps_memps(*(rdx + result), *result)
    result = &result[1]
    i_5 = i_7
    i_7 -= 1
while (i_5 != 1)
__security_check_cookie(rax_1 ^ &var_138)
return result
