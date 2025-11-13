// 函数: sub_14154a1b0
// 地址: 0x14154a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = data_1439b8d74
int64_t r8 = sx.q(arg2[1].d) * 3
int128_t zmm6 = arg3
arg3 = data_1439b8d78
int64_t rdx = *(*arg2 + 0x1b8)
uint128_t zmm7 = zx.o(*(rdx + (r8 << 2)))
int32_t rax_2 = *(rdx + (r8 << 2) + 8)
uint64_t var_48 = zmm7.q
zmm7.d = _mm_and_ps(zmm7, 0x7fffffff).d f* zmm6.d
uint32_t temp0_1[0x4] = _mm_and_ps(var_48:4.d, 0x7fffffff)
uint128_t zmm0 = _mm_and_ps(rax_2, 0x7fffffff)
temp0_1[0] = temp0_1[0] f* zmm6.d
zmm0.d = zmm0.d f* zmm6.d
zmm7.d = zmm7.d f* arg5
zmm0.d = zmm0.d f* arg5
zmm7.d = zmm7.d f+ arg4[0]
temp0_1[0] = temp0_1[0] f* arg5
zmm0.d = zmm0.d f+ arg4[0]
temp0_1[0] = temp0_1[0] f+ arg4[0]
zmm7.d = zmm7.d f* arg3.d
zmm0.d = zmm0.d f* arg3.d
zmm7 = _mm_max_ss(zmm7.d, zmm1)
temp0_1[0] = temp0_1[0] f* arg3.d
int32_t var_40_1 = _mm_max_ss(zmm0.d, zmm1).d
*arg1 = (_mm_unpacklo_ps(zmm7, _mm_max_ss(temp0_1[0], zmm1)[0].q)).q
arg1[1].d = var_40_1
return arg1
