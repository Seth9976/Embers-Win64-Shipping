// 函数: sub_1416f6d40
// 地址: 0x1416f6d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint128_t zmm7 = zx.o(*(arg2 + 0x6c))
uint128_t zmm8 = zx.o(*(arg2 + 0x6c))
float zmm1[0x4] = arg3[1]
int128_t zmm9 = arg10
int32_t var_e8 = 0x7f7fffff
uint128_t var_b8 = *arg3
uint128_t var_98 = arg3[2]
uint128_t zmm0 = zx.o(*(arg2 + 0x60))
uint64_t var_118 = zmm0.q
zmm8.d = zmm8.d f- zmm0.d
float var_a8[0x4] = zmm1
void* var_c8 = arg1 + 0x10
zmm7.d = _mm_shuffle_ps(zmm7, zmm7, 0x55).d f- var_118:4.d
zmm8.d = zmm8.d f* 0.5f
char var_74 = arg11
int32_t rax_4 = *(arg2 + 0x68)
uint128_t zmm5
zmm5.d = zmm8.d f+ zmm0.d
zmm7.d = zmm7.d f* 0.5f
uint128_t zmm2
zmm2.d = (*(arg2 + 0x74)).d f- rax_4
int32_t var_78 = zmm9.d
uint128_t zmm3
zmm3.d = zmm7.d f+ var_118:4.d
uint128_t zmm6 = zmm5
int32_t var_cc = 0xffffffff
zmm5 = *arg3
zmm2.d = zmm2.d f* 0.5f
void* var_88 = arg2
float* var_80 = arg4
zmm2.d = zmm2.d f+ rax_4
zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm2.q), _mm_unpacklo_ps(zmm3, 0).q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2)
zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_4)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
zmm3 = _mm_sub_ps(zmm3, zmm0)
zmm3 = _mm_add_ps(zmm3, zmm3)
zmm5 = _mm_mul_ps(zmm5, zmm3)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_4)
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
zmm5 = _mm_add_ps(zmm5, zmm6)
float temp0_21[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_15, _mm_mul_ps(zmm0, zmm2)), zmm5), arg3[1])
int32_t var_110_1 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa).d
zmm8.d = zmm8.d f+ zmm9.d
zmm7.d = zmm7.d f+ zmm9.d
uint64_t var_100 = (_mm_unpacklo_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x55)[0].q)).q
int32_t var_f8 = var_110_1
int32_t result
int32_t zmm6_1
result, zmm6_1 =
    sub_141689140(arg1, &var_100, arg4, arg5.d, (_mm_unpacklo_ps(zmm8, zmm7.q)).d, &var_e8, var_118)
int64_t zmm0_1 = var_e8

if (zmm0_1.d f> zmm6_1)
    result.b = 0
else
    *arg6 = zmm0_1.d
    int64_t var_e4
    *arg7 = var_e4
    int32_t var_dc
    arg7[1].d = var_dc
    int64_t var_d8
    *arg8 = var_d8
    int32_t var_d0
    arg8[1].d = var_d0
    *arg9 = var_cc
    result.b = 1

__security_check_cookie(rax_1 ^ &var_148)
return result
