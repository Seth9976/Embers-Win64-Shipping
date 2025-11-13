// 函数: sub_141716230
// 地址: 0x141716230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[2]
uint128_t zmm1 = zx.o(*arg3)
uint128_t zmm8 = *(r9 + 8)
float zmm0[0x4] = zmm8
float zmm10[0x4] = *r9
float zmm11[0x4] = *(r9 + 4)
int128_t zmm7 = zmm1.q.d
uint128_t zmm9
zmm9.d = zmm8.d f* zmm7.d
int128_t zmm13 = arg3[1].d
void* rax_1 = *arg1
zmm11[0] = zmm11[0] f* zmm13.d
uint128_t zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int128_t zmm15 = *(rax_1 + 0x20)
int128_t zmm14 = *(rax_1 + 0x1c)
zmm0[0] = zmm0[0] f* zmm6.d
zmm10[0] = zmm10[0] f* zmm6.d
zmm11[0] = zmm11[0] - zmm0[0]
zmm10[0] = zmm10[0] f* zmm13.d
zmm9.d = zmm9.d f- zmm10[0]
zmm11[0] = zmm11[0] f* zmm7.d
zmm11[0] = zmm11[0] + zmm11[0]
zmm10[0] = zmm10[0] - zmm11[0]
zmm0 = *(r9 + 0xc)
zmm9.d = zmm9.d f+ zmm9.d
zmm11[0] = zmm11[0] * zmm0[0]
zmm11[0] = zmm11[0] f* zmm8.d
zmm10[0] = zmm10[0] + zmm10[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm7.d = zmm7.d f+ zmm11[0]
zmm1.d = zmm9.d f* zmm0[0]
uint128_t zmm4
zmm4.d = zmm10.d f* zmm0[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm6.d = zmm6.d f+ zmm1.d
zmm1 = *(rax_1 + 0x24)
zmm13.d = zmm13.d f+ zmm4.d
zmm10[0] = zmm10[0] * zmm11[0]
zmm11[0] = zmm11[0] - zmm10[0]
zmm0 = zmm9
zmm9.d = zmm9.d f* zmm10[0]
zmm0[0] = zmm0[0] f* zmm8.d
zmm11[0] = zmm11[0] f+ zmm6.d
zmm9.d = zmm9.d f- zmm11[0]
zmm10[0] = zmm10[0] - zmm0[0]
zmm11[0] = zmm11[0] f* zmm15.d
zmm10[0] = zmm10[0] f+ zmm7.d
zmm9.d = zmm9.d f+ zmm13.d
zmm10[0] = zmm10[0] f* zmm14.d
zmm9.d = zmm9.d f* zmm1.d
zmm11[0] = zmm11[0] + zmm10[0]
zmm11[0] = zmm11[0] f+ zmm9.d
uint64_t var_b8
int32_t var_b0_1

if (zmm11[0] < 0f)
    var_b8 = *(rax_1 + 0x10)
    var_b0_1 = *(rax_1 + 0x18)
else
    zmm0 = *(rax_1 + 0x28)
    zmm14.d = zmm14.d f* zmm0[0]
    zmm15.d = zmm15.d f* zmm0[0]
    zmm14.d = zmm14.d f+ *(rax_1 + 0x10)
    zmm1.d = zmm1.d f* zmm0[0]
    zmm15.d = zmm15.d f+ *(rax_1 + 0x14)
    zmm1.d = zmm1.d f+ *(rax_1 + 0x18)
    var_b8.d = zmm14.d
    var_b8:4.d = zmm15.d
    var_b0_1 = zmm1.d

zmm4 = zx.o(var_b8)
zmm0 = zmm4
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float (* rax_4)[0x4] = arg1[1]
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, 0)
zmm6 = _mm_unpacklo_ps(zmm4, var_b0_1.q)
float zmm5[0x4] = *rax_4
zmm6 = _mm_unpacklo_ps(zmm6, temp0_2[0].q)
zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_8)
float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), zmm4)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm1)
float temp0_19[0x4] = _mm_add_ps(temp0_14, zmm6)
float temp0_22[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19), rax_4[1])
*arg2 = temp0_22[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
arg2[1] = temp0_23[0]
return arg2
