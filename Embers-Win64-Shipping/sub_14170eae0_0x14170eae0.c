// 函数: sub_14170eae0
// 地址: 0x14170eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[1]
uint128_t zmm1 = zx.o(*arg3)
void* rbx = *arg1
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
zmm7[0] = zmm7[0] f+ zmm8.d
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
zmm0 = zmm0 f- zmm6.d + zmm7[0]
zmm7[0] = zmm7[0] f* *(rbx + 0x30)
var_a8.d = zmm1.d
float var_a0_1 = zmm7[0]
var_a8:4.d = zmm0 f* *(rbx + 0x2c)
float var_98
sub_141758e70(rcx, &var_98, &var_a8, zx.o(0))
float zmm7_1 = var_98 f* *(rbx + 0x28)
float var_94
float zmm8_1 = var_94 f* *(rbx + 0x2c)
float* rax_1 = arg1[2]
float var_90
float zmm9_1 = var_90 f* *(rbx + 0x30)
float zmm1_1 = rax_1[1]
float zmm10_1 = rax_1[2]
float zmm11_1 = *rax_1
float zmm2_1 = rax_1[3]
float zmm6_1 = zmm1_1 * zmm9_1 - zmm10_1 * zmm8_1
zmm6_1 = zmm6_1 + zmm6_1
float zmm5_1 = zmm10_1 * zmm7_1 - zmm11_1 * zmm9_1
float zmm4_1 = zmm11_1 * zmm8_1 - zmm1_1 * zmm7_1
zmm5_1 = zmm5_1 + zmm5_1
zmm4_1 = zmm4_1 + zmm4_1
arg2[1] = zmm10_1 * zmm6_1 - zmm11_1 * zmm4_1 + zmm2_1 * zmm5_1 + zmm8_1
*arg2 = zmm1_1 * zmm4_1 - zmm10_1 * zmm5_1 + zmm2_1 * zmm6_1 + zmm7_1
arg2[2] = zmm11_1 * zmm5_1 - zmm1_1 * zmm6_1 + zmm2_1 * zmm4_1 + zmm9_1
return arg2
