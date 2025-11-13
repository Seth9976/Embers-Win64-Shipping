// 函数: sub_14121ae30
// 地址: 0x14121ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t var_d8 = 0
var_d8.d = 0x3e906eba
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x28)
float var_a8[0x4]
memset(&var_a8, 0, 0x90)
float zmm1[0x4] = *arg2
int64_t rax_2 = 0
int64_t i_9 = 3
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t var_108
__builtin_memset(&var_108, 0, 0x30)
int64_t rcx_1 = 0
int64_t i_10 = 3
void var_118
float zmm0_1[0x4]
int64_t i

do
    zmm0_1 = *(&var_d8 + rcx_1)
    rcx_1 += 0x10
    *(&var_118 + rcx_1) = _mm_mul_ps(zmm0_1, temp0)
    i = i_10
    i_10 -= 1
while (i != 1)
int64_t rcx_2 = 0
int64_t i_11 = 3
int64_t var_f8
float var_98[0x4] = var_f8.o
zmm1 = *(arg2 + 4)
var_a8 = var_108.o
int64_t var_e8
float var_88[0x4] = var_e8.o
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t var_108_1
__builtin_memset(&var_108_1, 0, 0x30)
int64_t i_1

do
    zmm0_1 = *(&var_d8 + rcx_2)
    rcx_2 += 0x10
    *(&var_118 + rcx_2) = _mm_mul_ps(zmm0_1, temp0_2)
    i_1 = i_11
    i_11 -= 1
while (i_1 != 1)
int64_t var_f8_1
float var_68[0x4] = var_f8_1.o
zmm1 = *(arg2 + 8)
float var_78[0x4] = var_108_1.o
int64_t var_108_2
__builtin_memset(&var_108_2, 0, 0x30)
int64_t i_6 = 3
int64_t var_e8_1
float var_58[0x4] = var_e8_1.o
float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t i_2

do
    zmm0_1 = *(&var_d8 + rax_2)
    rax_2 += 0x10
    *(&var_118 + rax_2) = _mm_mul_ps(zmm0_1, temp0_4)
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)
void* rax_3 = arg1
float var_48[0x4] = var_108_2.o
int64_t i_7 = 3
int64_t var_e8_2
float var_28[0x4] = var_e8_2.o
int64_t var_f8_2
float var_38[0x4] = var_f8_2.o
int64_t i_3

do
    *rax_3 = __addps_xmmps_memps(*(&var_a8 - arg1 + rax_3), *rax_3)
    rax_3 += 0x10
    i_3 = i_7
    i_7 -= 1
while (i_3 != 1)
void* rax_4 = arg1 + 0x30
int64_t i_8 = 3
float (* r8_1)[0x4] = &var_78 - rax_4
int64_t i_4

do
    *rax_4 = __addps_xmmps_memps(*(r8_1 + rax_4), *rax_4)
    rax_4 += 0x10
    i_4 = i_8
    i_8 -= 1
while (i_4 != 1)
float (* result)[0x4] = arg1 + 0x60
float (* rcx_3)[0x4] = &var_48 - result
int64_t i_5

do
    *result = __addps_xmmps_memps(*(rcx_3 + result), *result)
    result = &result[1]
    i_5 = i_9
    i_9 -= 1
while (i_5 != 1)
__security_check_cookie(rax_1 ^ &var_128)
return result
