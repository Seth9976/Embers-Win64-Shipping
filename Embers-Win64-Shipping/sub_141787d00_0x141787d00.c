// 函数: sub_141787d00
// 地址: 0x141787d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rax_2 = arg1[9]
int64_t zmm4 = *rax_2
int32_t r9 = rax_2[1].d
char r8 = *arg1[8]
float zmm2[0x4] = *arg1[7]
float zmm3[0x4] = *arg1[5]
int128_t* rcx = arg1[2]
int64_t var_128 = *arg1
int64_t rdx
int64_t var_120 = rdx
void* rdx_1 = arg1[1]
uint128_t var_118 = *rcx
int128_t var_108 = rcx[1]
float var_d8 = zmm2[0]
zmm2 = data_143dbb1fc
int64_t var_e0 = arg1[3]
int64_t* rax_8 = arg1[4]
uint128_t var_f8 = rcx[2]
void* var_e8 = rdx_1
char var_d4 = r8
uint64_t var_d0 = *rax_8
float var_c4 = zmm3[0]
zmm3 = data_143dbb1f8
int32_t var_c8 = rax_8[1].d
uint128_t* rax_10 = arg1[6]
uint128_t var_b8 = *rax_10
int128_t var_a8 = rax_10[1]
uint128_t var_98 = rax_10[2]
int32_t var_88 = 0x7f7fffff
int64_t var_68 = zmm4
int32_t var_60 = r9
uint128_t var_158 = *rcx
float temp0[0x4] = _mm_unpacklo_ps(zmm3, data_143dbb200.q)
uint128_t zmm0 = data_14399f670
float var_148[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float var_138[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
uint64_t var_1b8 = *(rdx_1 + 0x44)
int32_t var_1b0 = *(rdx_1 + 0x4c)
uint64_t var_1ac = *(rdx_1 + 0x50)
int32_t var_1a4 = *(rdx_1 + 0x58)
int32_t var_188
sub_1417598c0(&var_1b8, &var_188, &var_158)
float zmm3_1[0x4] = var_188
int32_t var_17c
float zmm9[0x4] = var_17c
zmm9[0] = zmm9[0] - zmm3_1[0]
int32_t var_184
float zmm2_1[0x4] = var_184
int32_t var_178
int64_t zmm8
zmm8.d = var_178.d f- zmm2_1[0]
zmm9[0] = zmm9[0] * 0.5f
zmm3_1[0] = zmm3_1[0] + zmm9[0]
int32_t var_180
float zmm0_1[0x4] = var_180
int128_t* rax_13 = arg1[2]
int128_t* rdx_3 = arg1[3]
void* rbx = *arg1
float zmm5[0x4] = *rax_13
zmm8.d = zmm8.d f* 0.5f
float var_174
float zmm7 = (var_174 - zmm0_1[0]) * 0.5f
zmm2_1[0] = zmm2_1[0] f+ zmm8.d
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
zmm0_1[0] = zmm0_1[0] + zmm7
float temp0_7[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_10[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1[0].q), temp0_7[0].q)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc9), temp0_8)
float temp0_16[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), temp0_6), temp0_13)
float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
float temp0_18[0x4] = _mm_mul_ps(temp0_11, temp0_17)
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_8)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_10)
float temp0_26[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_6), temp0_20), temp0_22), rax_13[1])
float var_168 = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)[0]
float (* rax_15)[0x4] = arg1[7]
int64_t var_170 = (_mm_unpacklo_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x55)[0].q)).q
zmm0_1 = *rax_15
float (* rax_16)[0x4] = arg1[0xa]
zmm7 = zmm7 + zmm0_1[0]
zmm9[0] = zmm9[0] + zmm0_1[0]
zmm8.d = zmm8.d f+ zmm0_1[0]
sub_141705060(&var_158, rdx_3, (*rax_16)[0])
float var_190_1 = zmm7
int64_t* var_1c0 = &var_128
int64_t var_198 = (_mm_unpacklo_ps(zmm9, zmm8)).q
uint64_t* var_1c8 = &var_1b8
__builtin_memcpy(&var_1b8, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
sub_1417964b0(rbx + 0xb0, &var_170, &var_158, &var_198, var_1c8)
int32_t* result = arg1[0xa]
int64_t zmm0_3 = var_88

if (not(zmm0_3.d f> *result))
    int64_t* rcx_4 = arg1[0xc]
    *arg1[0xb] = zmm0_3.d
    int64_t var_84
    *rcx_4 = var_84
    int32_t var_7c
    rcx_4[1].d = var_7c
    int64_t* rcx_5 = arg1[0xd]
    int64_t var_78
    *rcx_5 = var_78
    int32_t var_70
    rcx_5[1].d = var_70
    int32_t var_6c
    *arg1[0xe] = var_6c
    result = arg1[0xf]
    *result = 1

__security_check_cookie(rax_1 ^ &var_1e8)
return result
