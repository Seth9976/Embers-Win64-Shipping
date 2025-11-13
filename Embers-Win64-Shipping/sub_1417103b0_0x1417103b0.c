// 函数: sub_1417103b0
// 地址: 0x1417103b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[2]
uint128_t zmm1 = zx.o(*arg3)
void* rcx = *arg1
float zmm7[0x4] = *(r9 + 8)
uint64_t var_a8 = zmm1.q
float zmm5 = var_a8.d
zmm7[0] = zmm7[0] * zmm5
float zmm10[0x4] = *r9
uint128_t zmm11 = *(r9 + 4)
int128_t zmm13 = arg3[1].d
uint128_t zmm12
zmm12.d = zmm11.d f* zmm13.d
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm7[0] = zmm7[0] f* zmm8.d
zmm10[0] = zmm10[0] f* zmm8.d
zmm12.d = zmm12.d f- zmm7[0]
zmm10[0] = zmm10[0] f* zmm13.d
zmm7[0] = zmm7[0] - zmm10[0]
float zmm0[0x4] = zmm11
zmm0[0] = zmm0[0] * zmm5
zmm12.d = zmm12.d f+ zmm12.d
zmm10[0] = zmm10[0] - zmm0[0]
zmm0 = *(r9 + 0xc)
zmm7[0] = zmm7[0] + zmm7[0]
zmm1.d = zmm12.d f* zmm0[0]
zmm10[0] = zmm10[0] + zmm10[0]
zmm5 = zmm5 f+ zmm1.d
float zmm2 = zmm7[0] * zmm0[0]
zmm1.d = zmm12.d f* zmm7[0]
zmm12.d = zmm12.d f* zmm11.d
zmm10[0] = zmm10[0] * zmm0[0]
zmm8.d = zmm8.d f+ zmm2
zmm7[0] = zmm7[0] * zmm7[0]
zmm10[0] = zmm10[0] f* zmm11.d
zmm13.d = zmm13.d f+ zmm10[0]
zmm7[0] = zmm7[0] * zmm10[0]
zmm10[0] = zmm10[0] - zmm7[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm7[0] = zmm7[0] f- zmm12.d
zmm1.d = zmm1.d f- zmm10[0]
zmm10[0] = zmm10[0] + zmm5
zmm7[0] = zmm7[0] f+ zmm13.d
zmm1.d = zmm1.d f+ zmm8.d
float var_a0_1 = zmm7[0]
int64_t var_98 = (_mm_unpacklo_ps(zmm10, zmm1.q)).q
float var_90 = var_a0_1
sub_141758e70(rcx, &var_a8, &var_98, zx.o(0))
int128_t* rax_2 = arg1[1]
float zmm5_1[0x4] = *rax_2
float temp0_4[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(var_a8.d, var_a0_1[0].q), _mm_unpacklo_ps(var_a8:4.d, 0)[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
float temp0_8[0x4] = _mm_mul_ps(temp0_6, temp0_7)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_8)
float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_5)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_7)
float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_4)
float temp0_22[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19), rax_2[1])
*arg2 = temp0_22[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
arg2[1] = temp0_23[0]
return arg2
