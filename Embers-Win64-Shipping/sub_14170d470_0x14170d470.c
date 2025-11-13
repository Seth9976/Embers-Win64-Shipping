// 函数: sub_14170d470
// 地址: 0x14170d470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[1]
uint128_t zmm1 = zx.o(*arg3)
void* rcx = *arg1
float zmm7[0x4] = *(r9 + 8)
float zmm10[0x4] = *r9
float zmm11[0x4] = *(r9 + 4)
int32_t rax = arg3[1].d
uint64_t var_a8 = zmm1.q
int64_t zmm2 = var_a8.d
zmm7[0] = zmm7[0] f* zmm2.d
int128_t zmm13 = rax
uint128_t zmm12
zmm12.d = zmm11.d f* zmm13.d
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm7[0] = zmm7[0] f* zmm8.d
zmm10[0] = zmm10[0] f* zmm8.d
zmm12.d = zmm12.d f- zmm7[0]
zmm10[0] = zmm10[0] f* zmm13.d
zmm7[0] = zmm7[0] - zmm10[0]
zmm11[0] = zmm11[0] f* zmm2.d
zmm12.d = zmm12.d f+ zmm12.d
zmm10[0] = zmm10[0] - zmm11[0]
float zmm0[0x4] = *(r9 + 0xc)
zmm7[0] = zmm7[0] + zmm7[0]
zmm1.d = zmm12.d f* zmm0[0]
zmm10[0] = zmm10[0] + zmm10[0]
zmm1.d = zmm1.d f+ zmm2.d
zmm7[0] = zmm7[0] * zmm0[0]
zmm2.d = zmm12.q.d f* zmm7[0]
zmm12.d = zmm12.d f* zmm11[0]
zmm10[0] = zmm10[0] * zmm11[0]
zmm7[0] = zmm7[0] f+ zmm8.d
float zmm4 = zmm10[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm4 = zmm4 * zmm0[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm2.d = zmm2.d f- zmm10[0]
zmm7[0] = zmm7[0] * zmm10[0]
zmm13.d = zmm13.d f+ zmm4
zmm10[0] = zmm10[0] - zmm7[0]
zmm2.d = zmm2.d f+ zmm7[0]
zmm7[0] = zmm7[0] f- zmm12.d
zmm10[0] = zmm10[0] f+ zmm1.d
zmm7[0] = zmm7[0] f+ zmm13.d
float temp0_1[0x4] = _mm_unpacklo_ps(zmm10, zmm2)
float var_a0_1 = zmm7[0]
int64_t var_98 = temp0_1.q
float var_90 = var_a0_1
sub_141758e70(rcx, &var_a8, &var_98, zx.o(0))
int32_t* rax_2 = arg1[2]
float zmm10_1 = rax_2[1]
float zmm9_1 = *rax_2
float zmm5_1 = rax_2[2]
zmm12 = var_a0_1
float zmm6_1 = var_a8:4.d
float zmm3_1 = var_a8.d
float zmm4_1 = rax_2[3]
float zmm11_1 = zmm10_1 f* zmm12.d - zmm5_1 * zmm6_1
float zmm8_1 = zmm5_1 * zmm3_1 - zmm9_1 f* zmm12.d
zmm11_1 = zmm11_1 + zmm11_1
float zmm7_1 = zmm9_1 * zmm6_1 - zmm10_1 * zmm3_1
zmm8_1 = zmm8_1 + zmm8_1
zmm7_1 = zmm7_1 + zmm7_1
*arg2 = zmm7_1 * zmm10_1 - zmm8_1 * zmm5_1 + zmm11_1 * zmm4_1 + zmm3_1
arg2[2] = zmm8_1 * zmm9_1 - zmm11_1 * zmm10_1 + zmm7_1 * zmm4_1 f+ zmm12.d
arg2[1] = zmm11_1 * zmm5_1 - zmm7_1 * zmm9_1 + zmm8_1 * zmm4_1 + zmm6_1
return arg2
