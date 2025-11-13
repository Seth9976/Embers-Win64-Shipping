// 函数: sub_1426f2310
// 地址: 0x1426f2310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = 0x3f800000
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
float zmm7[0x4] = data_143b58064
zmm8[0] = 1f / zmm7[0]
char var_48 = 1
zmm8[0] = zmm8[0] f* *arg2
zmm8[0] = zmm8[0] + zmm8[0]
zmm8[0] = zmm8[0] + 0.5f
int32_t rax_1 = int.d(zmm8[0])
zmm8[0] = zmm8[0] f* arg2[1]
zmm8[0] = zmm8[0] + zmm8[0]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rax_1 s>> 1))
zmm8[0] = zmm8[0] + 0.5f
zmm6.d = zmm6.d f* zmm7[0]
int32_t rax_3 = int.d(zmm8[0])
uint128_t zmm4 = zmm6
zmm8[0] = zmm8[0] f* arg2[2]
zmm6.d = zmm6.d f- *arg3
zmm4.d = zmm4.d f+ *arg3
zmm8[0] = zmm8[0] + zmm8[0]
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rax_3 s>> 1))
zmm8[0] = zmm8[0] + 0.5f
zmm5.d = zmm5.d f* zmm7[0]
int64_t zmm3 = zmm5.q
zmm5.d = zmm5.d f- arg3[1]
zmm3.d = zmm3.d f+ arg3[1]
int32_t rax_6 = int.d(zmm8[0]) s>> 1
uint64_t var_60 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rax_6))
uint128_t zmm0 = _mm_unpacklo_ps(zmm4, zmm3)
zmm2.d = zmm2.d f* zmm7[0]
uint64_t var_54 = zmm0.q
int32_t var_58 = zmm2.d
int32_t var_4c = zmm2.d
sub_142703bd0(arg1, zmm7, &var_60)
int32_t rdx = int.d(zmm8[0] f* *(arg1 + 0x24))
float zmm0_1 = zmm8[0]
zmm8[0] = zmm8[0] f* *(arg1 + 0x2c)
arg1[0xe].d = rdx
arg1[0xf].d = int.d(zmm8[0])
*(arg1 + 0x74) = int.d(zmm0_1 f* arg1[5].d)
return arg1
