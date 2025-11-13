// 函数: sub_1426d7560
// 地址: 0x1426d7560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *(arg1 + 0x70)
int128_t zmm7 = *(arg1 + 0x74)
zmm6[0] = zmm6[0] f- zmm7.d
float temp0[0x4] = _mm_max_ss(zmm6[0], 0)
int32_t rax = rand()
zmm7.d = zmm7.d f+ zmm6[0]
zmm7.d = zmm7.d f- temp0[0]
*arg3 = float.s(rax) f* 3.05185094e-05f f* zmm7.d f+ temp0[0]
return 3
