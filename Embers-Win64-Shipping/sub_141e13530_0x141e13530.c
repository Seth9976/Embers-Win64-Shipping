// 函数: sub_141e13530
// 地址: 0x141e13530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(*arg3)
int128_t zmm7 = arg1[6]
uint128_t zmm10 = arg1[4]
int128_t zmm11 = arg1[5]
uint32_t var_98 = zmm1.d
int128_t zmm9
zmm9.d = zmm7.d f* var_98
int128_t zmm13 = arg3[1].d
int128_t zmm12
zmm12.d = zmm11.d f* zmm13.d
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
uint128_t zmm6
zmm6.d = zmm10.d f* zmm8.d
zmm12.d = zmm12.d f- zmm7.d f* zmm8.d
zmm9.d = zmm9.d f- zmm10.d f* zmm13.d
zmm12.d = zmm12.d f+ zmm12.d
zmm6.d = zmm6.d f- zmm11.d f* var_98
float zmm0 = arg1[7]
zmm9.d = zmm9.d f+ zmm9.d
zmm6.d = zmm6.d f+ zmm6.d
float zmm2 = zmm12.d * zmm0 f+ var_98
float zmm4 = zmm6.d * zmm0
float zmm3 = zmm9.d * zmm0 f+ zmm8.d
zmm0 = zmm9.d f* zmm7.d
zmm9.d = zmm9.d f* zmm10.d
zmm13.d = zmm13.d f+ zmm4
zmm1.d = zmm6.d f* zmm11.d
zmm6.d = zmm6.d f* zmm10.d
zmm1.d = zmm1.d f- zmm0
zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm11.d
zmm9.d = zmm9.d f- zmm12.d
zmm1.d = zmm1.d f+ zmm2
zmm9.d = zmm9.d f+ zmm13.d
zmm1.d = zmm1.d f+ *arg1
zmm9.d = zmm9.d f+ arg1[2]
*arg2 = zmm1.d
zmm0 = zmm0 f* zmm7.d f- zmm6.d + zmm3 f+ arg1[1]
arg2[2] = zmm9.d
arg2[1] = zmm0
return arg2
