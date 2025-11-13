// 函数: sub_141bdd2c0
// 地址: 0x141bdd2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10
uint64_t result = sub_141bdd090(arg1, arg3, &arg_10, arg6)
float zmm7[0x4] = *(arg2 + 0x24)
int128_t zmm8 = *(arg2 + 0x1c)
float zmm6[0x4] = *(arg2 + 0x20)
float zmm5[0x4] = *(arg2 + 0x28)
zmm6[0] = zmm6[0] * zmm7[0]
int128_t zmm1
zmm1.d = zmm8.d f* zmm5[0]
zmm1.d = zmm1.d f- zmm6[0]
int128_t zmm2
zmm2.d = 1f f/ zmm1.d
zmm1 = *(arg2 + 0x30)
zmm7[0] = zmm7[0] f* zmm2.d
zmm1 ^= 0x80000000
zmm8.d = zmm8.d f* zmm2.d
zmm7 ^= 0x80000000
zmm6[0] = zmm6[0] f* zmm2.d
float zmm3 = zmm7[0]
zmm5[0] = zmm5[0] f* zmm2.d
zmm7[0] = zmm7[0] f* arg5
float zmm4 = zmm8.d
zmm6 ^= 0x80000000
zmm8.d = zmm8.d f* arg5
zmm2 = *(arg2 + 0x2c) ^ 0x80000000
zmm5[0] = zmm5[0] * arg_10
zmm5[0] = zmm5[0] f* zmm2.d
zmm7[0] = zmm7[0] + zmm5[0]
zmm3 = zmm3 f* zmm1.d + zmm5[0]
zmm6[0] = zmm6[0] * arg_10
zmm6[0] = zmm6[0] f* zmm2.d
zmm8.d = zmm8.d f+ zmm6[0]
zmm7[0] = zmm7[0] + zmm3
zmm8.d = zmm8.d f+ zmm4 f* zmm1.d + zmm6[0]
*arg4 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
return result
