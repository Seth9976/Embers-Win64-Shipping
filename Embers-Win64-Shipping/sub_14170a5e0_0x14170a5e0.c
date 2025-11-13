// 函数: sub_14170a5e0
// 地址: 0x14170a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = *arg1
uint128_t zmm1 = zx.o(*arg3)
float zmm5[0x4] = *r9
float zmm11[0x4] = *(r9 + 4)
uint128_t zmm12 = *(r9 + 8)
int32_t rax = arg3[1].d
float zmm0[0x4] = zmm12
uint128_t zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm0[0] = zmm0[0] f* zmm4.d
int128_t zmm7 = rax
void* rax_1 = arg1[1]
zmm5[0] = zmm5[0] f* zmm4.d
zmm11[0] = zmm11[0] f* zmm7.d
void* rcx = *(rax_1 + 0x10)
float zmm14[0x4] = *(rax_1 + 0x28)
float zmm15[0x4] = *(rax_1 + 0x2c)
zmm11[0] = zmm11[0] - zmm0[0]
int128_t zmm10 = zmm1.d
zmm5[0] = zmm5[0] f* zmm7.d
uint128_t zmm8
zmm8.d = zmm12.d f* zmm10.d
zmm11[0] = zmm11[0] + zmm11[0]
zmm8.d = zmm8.d f- zmm5[0]
zmm11[0] = zmm11[0] f* zmm10.d
zmm11[0] = zmm11[0] f* zmm12.d
zmm5[0] = zmm5[0] - zmm11[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm0 = *(r9 + 0xc)
zmm8.d = zmm8.d f+ zmm8.d
zmm11[0] = zmm11[0] * zmm0[0]
zmm5[0] = zmm5[0] + zmm5[0]
zmm10.d = zmm10.d f+ zmm11[0]
zmm1.d = zmm8.d f* zmm0[0]
zmm5[0] = zmm5[0] * zmm0[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm4.d = zmm4.d f+ zmm1.d
zmm5[0] = zmm5[0] * zmm11[0]
zmm7.d = zmm7.d f+ zmm5[0]
zmm11[0] = zmm11[0] - zmm5[0]
zmm0 = zmm8
zmm8.d = zmm8.d f* zmm12.d
zmm0[0] = zmm0[0] * zmm5[0]
zmm5[0] = zmm5[0] f- zmm8.d
zmm11[0] = zmm11[0] f+ zmm4.d
zmm4 = *(rax_1 + 0x30)
zmm0[0] = zmm0[0] - zmm11[0]
zmm5[0] = zmm5[0] f+ zmm10.d
zmm11[0] = zmm11[0] * zmm15[0]
zmm0[0] = zmm0[0] f+ zmm7.d
zmm5[0] = zmm5[0] * zmm14[0]
zmm0[0] = zmm0[0] f* zmm4.d
float zmm3[0x4]

if (zmm5[0] >= 0f)
    zmm3 = *(rcx + 0x1c)
else
    zmm3 = *(rcx + 0x10)

float zmm2[0x4]

if (zmm11[0] >= 0f)
    zmm2 = *(rcx + 0x20)
else
    zmm2 = *(rcx + 0x14)

if (zmm0[0] >= 0f)
    zmm0 = *(rcx + 0x24)
else
    zmm0 = *(rcx + 0x18)

float (* rax_2)[0x4] = arg1[2]
zmm5 = *rax_2
zmm4.d = zmm4.d f* zmm0[0]
zmm14[0] = zmm14[0] * zmm3[0]
zmm15[0] = zmm15[0] * zmm2[0]
float temp0_1[0x4] = _mm_unpacklo_ps(zmm14, zmm4.q)
zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_4[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm15, 0)[0].q)
zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), zmm1)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), zmm4)
float temp0_10[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_7)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), zmm4)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm1)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_4)
float temp0_21[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_16, temp0_17), temp0_18), rax_2[1])
*arg2 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
arg2[1] = temp0_22[0]
return arg2
