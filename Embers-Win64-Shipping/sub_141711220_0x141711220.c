// 函数: sub_141711220
// 地址: 0x141711220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[2]
uint128_t zmm1 = zx.o(*arg3)
int32_t rax = arg3[1].d
uint32_t var_78 = zmm1.d
float zmm6[0x4] = *r9
float (* rax_1)[0x4] = *arg1
float zmm11[0x4] = *(r9 + 4)
uint128_t zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm11[0] = zmm11[0] f* rax
zmm6[0] = zmm6[0] f* zmm4.d
uint128_t zmm12 = *(r9 + 8)
uint128_t zmm7
zmm7.d = zmm12.d f* var_78
float zmm0[0x4] = zmm12
zmm0[0] = zmm0[0] f* zmm4.d
zmm11[0] = zmm11[0] - zmm0[0]
zmm6[0] = zmm6[0] f* rax
zmm7.d = zmm7.d f- zmm6[0]
zmm11[0] = zmm11[0] f* var_78
zmm11[0] = zmm11[0] + zmm11[0]
zmm6[0] = zmm6[0] - zmm11[0]
zmm0 = *(r9 + 0xc)
zmm7.d = zmm7.d f+ zmm7.d
zmm11[0] = zmm11[0] * zmm0[0]
zmm11[0] = zmm11[0] f* zmm12.d
zmm6[0] = zmm6[0] + zmm6[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm11[0] = zmm11[0] f+ var_78
zmm1.d = zmm7.d f* zmm0[0]
zmm6[0] = zmm6[0] * zmm0[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm1.d = zmm1.d f+ zmm4.d
zmm6[0] = zmm6[0] f+ rax
zmm6[0] = zmm6[0] * zmm11[0]
zmm11[0] = zmm11[0] - zmm6[0]
zmm0 = zmm7
zmm0[0] = zmm0[0] * zmm6[0]
zmm7.d = zmm7.d f* zmm12.d
zmm0[0] = zmm0[0] - zmm11[0]
zmm11[0] = zmm11[0] f+ zmm1.d
zmm6[0] = zmm6[0] f- zmm7.d
zmm0[0] = zmm0[0] + zmm6[0]
zmm6[0] = zmm6[0] + zmm11[0]
float zmm3[0x4]

if (zmm6[0] >= 0f)
    zmm3 = (*rax_1)[3]
else
    zmm3 = *rax_1

float zmm2[0x4]

if (zmm11[0] >= 0f)
    zmm2 = rax_1[1][0]
else
    zmm2 = (*rax_1)[1]

if (zmm0[0] >= 0f)
    zmm0 = (*rax_1)[5]
else
    zmm0 = (*rax_1)[2]

float (* rax_2)[0x4] = arg1[1]
float zmm5[0x4] = *rax_2
float temp0_3[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm1)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), zmm4)
float temp0_10[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_7)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), zmm4)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm1)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_21[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_16, temp0_17), temp0_18), rax_2[1])
*arg2 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
arg2[1] = temp0_22[0]
return arg2
