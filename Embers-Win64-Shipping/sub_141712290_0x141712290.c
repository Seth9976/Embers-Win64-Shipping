// 函数: sub_141712290
// 地址: 0x141712290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = *arg1
uint128_t zmm1 = zx.o(*arg3)
void* rbx = arg1[1]
float zmm7[0x4] = *(r9 + 8)
void* rcx = *(rbx + 0x10)
float zmm0 = zmm7[0]
uint64_t var_a8 = zmm1.q
float zmm5 = var_a8.d
zmm7[0] = zmm7[0] * zmm5
uint128_t zmm10 = *r9
int128_t zmm11 = *(r9 + 4)
int128_t zmm13 = arg3[1].d
int128_t zmm12
zmm12.d = zmm11.d f* zmm13.d
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
uint128_t zmm6
zmm6.d = zmm10.d f* zmm8.d
zmm12.d = zmm12.d f- zmm0 f* zmm8.d
zmm7[0] = zmm7[0] - zmm10.d f* zmm13.d
zmm12.d = zmm12.d f+ zmm12.d
zmm6.d = zmm6.d f- zmm11.d * zmm5
zmm0 = *(r9 + 0xc)
zmm7[0] = zmm7[0] + zmm7[0]
zmm6.d = zmm6.d f+ zmm6.d
zmm5 = zmm5 + zmm12.d * zmm0
zmm7[0] = zmm7[0] * zmm0
float zmm4 = zmm6.d * zmm0
zmm8.d = zmm8.d f+ zmm7[0]
zmm1.d = zmm6.d f* zmm11.d
zmm0 = zmm7[0] * zmm7[0]
zmm13.d = zmm13.d f+ zmm4
zmm7[0] = zmm7[0] f* zmm10.d
zmm1.d = zmm1.d f- zmm0
zmm6.d = zmm6.d f* zmm10.d
zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm11.d
zmm0 = zmm0 * zmm7[0]
zmm7[0] = zmm7[0] f- zmm12.d
zmm1.d = zmm1.d f+ zmm5
zmm7[0] = zmm7[0] f+ zmm13.d
zmm1.d = zmm1.d f* *(rbx + 0x28)
zmm7[0] = zmm7[0] f* *(rbx + 0x30)
var_a8.d = zmm1.d
float var_a0_1 = zmm7[0]
var_a8:4.d = (zmm0 f- zmm6.d f+ zmm8.d) f* *(rbx + 0x2c)
float var_98
sub_141758e70(rcx, &var_98, &var_a8, zx.o(0))
float zmm3_1[0x4] = var_98
int32_t var_94
float zmm2_1[0x4] = var_94
zmm3_1[0] = zmm3_1[0] f* *(rbx + 0x28)
zmm2_1[0] = zmm2_1[0] f* *(rbx + 0x2c)
int32_t var_90
float zmm0_1[0x4] = var_90
zmm0_1[0] = zmm0_1[0] f* *(rbx + 0x30)
int128_t* rax_1 = arg1[2]
float zmm5_1[0x4] = *rax_1
float temp0_3[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1[0].q), _mm_unpacklo_ps(zmm2_1, 0)[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, temp0_6)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4)
float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_7)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_4)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_6)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_21[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_16, temp0_17), temp0_18), rax_1[1])
*arg2 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
arg2[1] = temp0_22[0]
return arg2
