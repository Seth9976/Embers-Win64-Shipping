// 函数: sub_14178b260
// 地址: 0x14178b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* rax_2 = arg1[9]
void** rdi = arg1
int64_t zmm4 = *rax_2
int32_t r9 = rax_2[1].d
void* r10 = rdi[1]
char r8 = *arg1[8]
float zmm2[0x4] = *arg1[7]
float zmm3[0x4] = *arg1[5]
int128_t* rcx = arg1[2]
int64_t var_128 = *arg1
int64_t rdx
int64_t var_120 = rdx
uint128_t var_118 = *rcx
int128_t var_108 = rcx[1]
float var_d8 = zmm2[0]
int64_t var_e0 = rdi[3]
int64_t* rax_8 = rdi[4]
uint128_t var_f8 = rcx[2]
void* var_e8 = r10
char var_d4 = r8
uint64_t var_d0 = *rax_8
float var_c4 = zmm3[0]
zmm3 = data_143dbb1f8
int32_t var_c8 = rax_8[1].d
uint128_t* rax_10 = rdi[6]
uint128_t var_b8 = *rax_10
int128_t var_a8 = rax_10[1]
uint128_t var_98 = rax_10[2]
int32_t var_88 = 0x7f7fffff
float temp0[0x4] = _mm_unpacklo_ps(data_143dbb1fc, 0)
int64_t var_68 = zmm4
int32_t var_60 = r9
uint128_t var_158 = *rcx
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, data_143dbb200.q)
uint128_t zmm0 = data_14399f670
float var_148[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float var_138[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
int128_t var_198
int32_t var_180
sub_1417598c0(sub_141731000(r10, &var_198), &var_180, &var_158)
float zmm3_1[0x4] = var_180
int32_t var_17c
float zmm2_1[0x4] = var_17c
int32_t var_174
float zmm9[0x4] = var_174
zmm9[0] = zmm9[0] - zmm3_1[0]
int32_t var_170
int64_t zmm8
zmm8.d = var_170.d f- zmm2_1[0]
int32_t var_178
float zmm0_1[0x4] = var_178
float var_16c
float zmm7 = var_16c - zmm0_1[0]
zmm9[0] = zmm9[0] * 0.5f
zmm8.d = zmm8.d f* 0.5f
zmm3_1[0] = zmm3_1[0] + zmm9[0]
zmm2_1[0] = zmm2_1[0] f+ zmm8.d
int128_t* rax_12 = rdi[2]
int128_t* rdx_3 = rdi[3]
void* rbx = *rdi
zmm7 = zmm7 * 0.5f
float zmm5[0x4] = *rax_12
float temp0_6[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
zmm0_1[0] = zmm0_1[0] + zmm7
float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_11[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1[0].q), temp0_6[0].q)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_8)
float temp0_16[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_7), temp0_13)
float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
float temp0_18[0x4] = _mm_mul_ps(temp0_9, temp0_17)
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_8)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_11)
float temp0_26[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_7), temp0_20), temp0_22), rax_12[1])
float var_160 = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)[0]
float (* rax_14)[0x4] = rdi[7]
int64_t var_168 = (_mm_unpacklo_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x55)[0].q)).q
zmm0_1 = *rax_14
float (* rax_15)[0x4] = rdi[0xa]
zmm7 = zmm7 + zmm0_1[0]
zmm9[0] = zmm9[0] + zmm0_1[0]
zmm8.d = zmm8.d f+ zmm0_1[0]
sub_141705060(&var_158, rdx_3, (*rax_15)[0])
float var_1a0_1 = zmm7
int64_t* var_1b0 = &var_128
int64_t var_1a8 = (_mm_unpacklo_ps(zmm9, zmm8)).q
int64_t* var_1b8 = &var_198
__builtin_memcpy(&var_198, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
sub_141795bf0(rbx + 0xb0, &var_168, &var_158, &var_1a8, var_1b8)
int32_t* result = rdi[0xa]
int64_t zmm0_3 = var_88

if (not(zmm0_3.d f> *result))
    int64_t* rcx_5 = rdi[0xc]
    *rdi[0xb] = zmm0_3.d
    int64_t var_84
    *rcx_5 = var_84
    int32_t var_7c
    rcx_5[1].d = var_7c
    int64_t* rcx_6 = rdi[0xd]
    int64_t var_78
    *rcx_6 = var_78
    int32_t var_70
    rcx_6[1].d = var_70
    int32_t var_6c
    *rdi[0xe] = var_6c
    result = rdi[0xf]
    *result = 1

__security_check_cookie(rax_1 ^ &var_1d8)
return result
