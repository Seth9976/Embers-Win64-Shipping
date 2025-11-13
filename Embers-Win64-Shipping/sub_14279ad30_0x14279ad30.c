// 函数: sub_14279ad30
// 地址: 0x14279ad30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = zx.o(*arg3)
int512_t zmm3
zmm3.o = zx.o(0)
int32_t rax = arg3[1].d
uint128_t zmm5 = zmm4
uint128_t zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
float zmm11[0x4] = *(arg1 + 0xa0)
uint64_t var_6c = zmm4.q
zmm4 = zx.o(*arg2)
float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
int32_t rax_1 = arg2[1].d
zmm5 = __mulps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, rax.q), zmm2.q), *(arg1 + 0xc0))
float temp0_7[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
uint128_t zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_3)
zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_2), zmm0)
zmm2 = _mm_add_ps(zmm2, zmm2)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
uint128_t zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_3)
zmm1 = _mm_sub_ps(_mm_mul_ps(zmm1, temp0_2), zmm0)
zmm0 = _mm_mul_ps(temp0_7, zmm2)
zmm2 = _mm_unpacklo_ps(*(arg2 + 4), 0)
zmm1 = __addps_xmmps_memps(_mm_add_ps(zmm1, _mm_add_ps(zmm0, zmm5)), *(arg1 + 0xb0))
int32_t var_78 = zmm1.d
int32_t var_74 = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
int32_t var_70 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
zmm4 = __mulps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_1.q), zmm2.q), *(arg1 + 0xc0))
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_3)
zmm1 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_2), zmm0)
zmm1 = _mm_add_ps(zmm1, zmm1)
float temp0_35[0x4] = _mm_mul_ps(temp0_7, zmm1)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_2)
zmm0 = _mm_mul_ps(zmm0, temp0_3)
float temp0_40[0x4] = _mm_add_ps(temp0_35, zmm4)
zmm2 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm2, zmm0), temp0_40), *(arg1 + 0xb0))
var_6c.d = zmm2.d
int64_t r10 = *arg1
var_6c:4.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
int32_t var_64_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
return (*(r10 + 8))(arg1, &var_6c, &var_78, zmm3, arg4.d, arg5, var_78, var_70)
