// 函数: sub_14170b7f0
// 地址: 0x14170b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[2]
uint128_t zmm1 = zx.o(*arg3)
uint128_t zmm6 = *(r9 + 0xc)
float zmm2[0x4] = zmm6
float zmm9[0x4] = *(r9 + 8)
float zmm11[0x4] = *(r9 + 4)
int32_t rax = arg3[1].d
float zmm13[0x4] = *r9
float zmm4[0x4] = zmm1.q.d
zmm9[0] = zmm9[0] * zmm4[0]
int128_t zmm12 = rax
void* rax_1 = *arg1
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm9[0] = zmm9[0] f* zmm8.d
void* rcx = *(rax_1 + 0x10)
zmm13[0] = zmm13[0] f* zmm8.d
zmm11[0] = zmm11[0] f* zmm12.d
int128_t zmm15 = *(rcx + 0x20)
int128_t zmm14 = *(rcx + 0x1c)
zmm11[0] = zmm11[0] - zmm9[0]
zmm13[0] = zmm13[0] f* zmm12.d
zmm9[0] = zmm9[0] - zmm13[0]
zmm11[0] = zmm11[0] * zmm4[0]
zmm11[0] = zmm11[0] + zmm11[0]
zmm13[0] = zmm13[0] - zmm11[0]
zmm9[0] = zmm9[0] * zmm11[0]
zmm9[0] = zmm9[0] + zmm9[0]
zmm1.d = zmm6.d f* zmm11[0]
zmm13[0] = zmm13[0] + zmm13[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm4[0] = zmm4[0] f+ zmm1.d
zmm1 = *(rcx + 0x24)
zmm11[0] = zmm11[0] * zmm13[0]
zmm2[0] = zmm2[0] * zmm9[0]
zmm11[0] = zmm11[0] - zmm9[0]
zmm6.d = zmm6.d f* zmm13[0]
zmm13[0] = zmm13[0] * zmm9[0]
zmm13[0] = zmm13[0] * zmm13[0]
zmm8.d = zmm8.d f+ zmm2[0]
zmm2 = *(rax_1 + 0x2c)
zmm11[0] = zmm11[0] + zmm4[0]
zmm4 = *(rax_1 + 0x28)
zmm13[0] = zmm13[0] - zmm11[0]
float zmm5[0x4] = *(rax_1 + 0x30)
zmm9[0] = zmm9[0] - zmm13[0]
zmm12.d = zmm12.d f+ zmm6.d
zmm11[0] = zmm11[0] * zmm4[0]
zmm9[0] = zmm9[0] f+ zmm8.d
zmm13[0] = zmm13[0] f+ zmm12.d
zmm11[0] = zmm11[0] f* zmm14.d
zmm9[0] = zmm9[0] * zmm2[0]
zmm13[0] = zmm13[0] * zmm5[0]
zmm9[0] = zmm9[0] f* zmm15.d
zmm13[0] = zmm13[0] f* zmm1.d
zmm11[0] = zmm11[0] + zmm9[0]
zmm11[0] = zmm11[0] + zmm13[0]
uint64_t var_b8
int32_t var_b0_1
float zmm0[0x4]

if (zmm11[0] < 0f)
    var_b8 = *(rcx + 0x10)
    var_b0_1 = *(rcx + 0x18)
else
    zmm0 = *(rcx + 0x28)
    zmm14.d = zmm14.d f* zmm0[0]
    zmm15.d = zmm15.d f* zmm0[0]
    zmm14.d = zmm14.d f+ *(rcx + 0x10)
    zmm1.d = zmm1.d f* zmm0[0]
    zmm15.d = zmm15.d f+ *(rcx + 0x14)
    zmm1.d = zmm1.d f+ *(rcx + 0x18)
    var_b8.d = zmm14.d
    var_b8:4.d = zmm15.d
    var_b0_1 = zmm1.d

zmm1 = zx.o(var_b8)
zmm0 = zmm1
zmm4[0] = zmm4[0] f* zmm1.d
zmm5[0] = zmm5[0] f* var_b0_1
float (* rax_4)[0x4] = arg1[1]
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm2[0] = zmm2[0] * temp0_1[0]
zmm6 = _mm_unpacklo_ps(zmm4, zmm5[0].q)
zmm5 = *rax_4
zmm6 = _mm_unpacklo_ps(zmm6, _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_5)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_8)
float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), zmm1)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float temp0_18[0x4] = _mm_add_ps(temp0_14, zmm6)
float temp0_22[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(temp0_16, _mm_mul_ps(temp0_17, temp0_5)), temp0_18), rax_4[1])
*arg2 = temp0_22[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
arg2[1] = temp0_23[0]
return arg2
