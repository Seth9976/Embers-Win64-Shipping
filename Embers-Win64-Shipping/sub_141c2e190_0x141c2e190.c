// 函数: sub_141c2e190
// 地址: 0x141c2e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg4
arg1[1].d = arg4[1].d
int128_t zmm0
zmm0.d = arg2.d f* 0.0238567255f
int128_t zmm6 = arg2
arg2.d = arg2.d f* 0.0179765467f
*(arg1 + 0x14) = zmm6.d
__builtin_memset(arg1 + 0x18, 0, 0x60)
int32_t rax_1 = int.d(zmm0.d)
zmm0.d = zmm6.d f* 0.0636739358f
int32_t var_28 = rax_1
int32_t rax_2 = int.d(arg2.d)
arg2.d = zmm6.d f* 0.0465374142f
int32_t var_24 = rax_2
int32_t var_20 = int.d(zmm0.d)
int32_t var_1c = int.d(arg2.d)
var_28.o = var_28.o
sub_141c2e3e0(arg1 + 0xe8, arg3, &var_28)
int128_t zmm0_1
zmm0_1.d = zmm6.d f* 0.0468734242f
int32_t rax_5 = int.d(zmm0_1.d)
zmm0_1.d = zmm6.d f* 0.0357850865f
var_28 = rax_5
int32_t var_24_1 = int.d(zmm6.d * 0.0230167005f)
int32_t var_20_1 = int.d(zmm0_1.d)
int32_t var_1c_1 = int.d(zmm6.d * 0.0549376719f)
var_28.o = var_28.o
sub_141c2e3e0(arg1 + 0x1a8, arg3, &var_28)
uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm6.d)))
zmm0_2.d = zmm0_2.d f+ zmm0_2.d
int32_t rbx = int.d(zmm0_2.d)
sub_141c2eb10(arg1 + 0x268, rbx, 0, arg3)
sub_141c2eb10(arg1 + 0x288, rbx, 0, arg3)
*(arg1 + 0x2a8) = 0
arg1[0x2b].q = 0x3f800000
*(arg1 + 0x2b8) = 0
arg1[0x2c].q = 0x3f800000
*(arg1 + 0x78) = 0x3e800000
arg1[0xb].d = 0x3e800000
sub_141c35330(arg1)
sub_141c33c10(arg1)
return arg1
