// 函数: sub_140dda0b0
// 地址: 0x140dda0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1 = zx.d(arg2[1])
int64_t arg_8 = 0
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(arg2[2])).d f* 0.00392156886f
int32_t var_28 = zmm0.d
uint32_t rax_2 = zx.d(*arg2)
zmm0 = _mm_cvtepi32_ps(zx.o(rax_1))
uint32_t rax_3 = zx.d(arg2[3])
zmm0.d = zmm0.d f* 0.00392156886f
int32_t var_24 = zmm0.d
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 0.00392156886f
int32_t var_20 = zmm1.d
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* 0.00392156886f
uint128_t var_18 = zx.o(0)
int32_t var_1c = zmm0.d
sub_140dd9c70(arg1, 1, 0, &var_18, 0, 0, &data_143dbb1f0, &var_28, 0, 0)
*arg1 = &data_142d8ad18
return arg1
