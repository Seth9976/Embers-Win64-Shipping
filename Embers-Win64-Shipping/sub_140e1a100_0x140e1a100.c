// 函数: sub_140e1a100
// 地址: 0x140e1a100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm5 = *(arg1 + 4)
int128_t zmm6 = *(arg1 + 8)
int128_t zmm7 = *arg1
float zmm8[0x4] = *(arg1 + 0xc)
int128_t zmm1
zmm1.d = zmm7.d f* zmm8[0]
zmm1.d = zmm1.d f- zmm5.d f* zmm6.d
int128_t zmm2
zmm2.d = 1f f/ zmm1.d
zmm1 = *(arg1 + 0x14)
zmm8[0] = zmm8[0] f* zmm2.d
zmm1 ^= 0x80000000
zmm6.d = zmm6.d f* zmm2.d
zmm7.d = zmm7.d f* zmm2.d
zmm6 ^= 0x80000000
zmm5.d = zmm5.d f* zmm2.d
zmm2 = arg1[1].d ^ 0x80000000
zmm5 ^= 0x80000000
float zmm0 = zmm8[0]
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
temp0[0] = zmm5.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm6.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm7.d
*arg2 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg2[1].d = zmm6.d f* zmm1.d + zmm0 f* zmm2.d
*(arg2 + 0x14) = zmm7.d f* zmm1.d + zmm5.d f* zmm2.d
return arg2
