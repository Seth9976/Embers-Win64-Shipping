// 函数: sub_1426f24c0
// 地址: 0x1426f24c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = 0x3f800000
uint128_t zmm8 = arg3
*arg1 = 0
*(arg1 + 0x14) = data_143dbb1f8.q
int32_t rax = data_143dbb200
*(arg1 + 0x1c) = rax
arg1[1] = *(arg1 + 0x14)
arg1[2].d = rax
arg1[4].b = 0
*(arg1 + 0x24) = 0x7f7fffff
arg1[5].d = 0x7f7fffff
*(arg1 + 0x2c) = 0x7f7fffff
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0
__builtin_memset(&arg1[9], 0, 0x20)
*(arg1 + 0x6c) = 0
float zmm6[0x4] = data_143b58064
zmm7[0] = 1f / zmm6[0]
char var_48 = 1
zmm7[0] = zmm7[0] f* *arg2
zmm7[0] = zmm7[0] + zmm7[0]
zmm7[0] = zmm7[0] + 0.5f
int32_t rax_1 = int.d(zmm7[0])
zmm7[0] = zmm7[0] f* arg2[1]
zmm7[0] = zmm7[0] + zmm7[0]
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rax_1 s>> 1))
zmm7[0] = zmm7[0] + 0.5f
zmm5.d = zmm5.d f* zmm6[0]
int32_t rax_3 = int.d(zmm7[0])
uint128_t zmm3 = zmm5
zmm7[0] = zmm7[0] f* arg2[2]
zmm5.d = zmm5.d f- zmm8.d
zmm3.d = zmm3.d f+ zmm8.d
zmm7[0] = zmm7[0] + zmm7[0]
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_3 s>> 1))
zmm7[0] = zmm7[0] + 0.5f
zmm4.d = zmm4.d f* zmm6[0]
arg3 = zmm4
zmm4.d = zmm4.d f- zmm8.d
arg3.d = arg3.d f+ zmm8.d
float zmm1[0x4] = zx.o(int.d(zmm7[0]) s>> 1)
uint128_t zmm0 = _mm_unpacklo_ps(zmm5, zmm4.q)
float temp0_3[0x4] = _mm_cvtepi32_ps(zmm1)
uint64_t var_60 = zmm0.q
temp0_3[0] = temp0_3[0] * zmm6[0]
uint64_t var_54 = (_mm_unpacklo_ps(zmm3, arg3.q)).q
float var_58 = temp0_3[0]
float var_4c = temp0_3[0]
sub_142703bd0(arg1, zmm6, &var_60)
int32_t rdx = int.d(zmm7[0] f* *(arg1 + 0x24))
float zmm0_1 = zmm7[0]
zmm7[0] = zmm7[0] f* *(arg1 + 0x2c)
arg1[0xe].d = rdx
arg1[0xf].d = int.d(zmm7[0])
*(arg1 + 0x74) = int.d(zmm0_1 f* arg1[5].d)
return arg1
