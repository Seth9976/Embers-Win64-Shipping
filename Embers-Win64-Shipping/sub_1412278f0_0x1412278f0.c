// 函数: sub_1412278f0
// 地址: 0x1412278f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rax_2 = 0
int64_t i_7 = 3
var_e8 = 0x3de147ae
int64_t rdx = 0
int32_t var_e4 = 0x3f170a3d
int64_t i_8 = 3
float zmm1[0x4] = var_e8
int32_t var_e0 = 0x3e99999a
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t var_48
__builtin_memset(&var_48, 0, 0x30)
float zmm0[0x4]
int64_t i

do
    zmm0 = *(rax_2 + arg1 + 0x60)
    rax_2 += 0x10
    int64_t var_58
    *(&var_58 + rax_2) = _mm_mul_ps(zmm0, temp0)
    i = i_8
    i_8 -= 1
while (i != 1)
zmm1 = var_e4
int64_t rax_3 = 0
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t i_9 = 3
int64_t var_78
__builtin_memset(&var_78, 0, 0x30)
int64_t i_1

do
    zmm0 = *(rax_3 + arg1 + 0x30)
    rax_3 += 0x10
    int64_t var_88
    *(&var_88 + rax_3) = _mm_mul_ps(zmm0, temp0_2)
    i_1 = i_9
    i_9 -= 1
while (i_1 != 1)
zmm1 = var_e0
float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x30)
int64_t r9 = &var_a8 - arg1
int64_t i_5 = 3
int64_t i_2

do
    zmm0 = *arg1
    arg1 = &arg1[1]
    *(r9 + arg1 - 0x10) = _mm_mul_ps(zmm0, temp0_4)
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
int64_t i_10 = i_5
int64_t i_6 = 3
int64_t i_11 = i_5
int64_t i_12 = i_5
int64_t i_13 = i_5
int64_t i_14 = i_5
int64_t i_15 = i_5
int64_t i_3

do
    *(&i_10 + i_5) = __addps_xmmps_memps(*(&var_a8 + i_5), *(&var_78 + i_5))
    i_5 += 0x10
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)
__builtin_memset(arg2, 0, 0x30)
int64_t i_4

do
    zmm0 = *(&var_48 + rdx)
    float (* rcx)[0x4] = &i_10 + rdx
    rdx += 0x10
    *(arg2 - &i_10 + rcx) = __addps_xmmps_memps(zmm0, *rcx)
    i_4 = i_7
    i_7 -= 1
while (i_4 != 1)
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
