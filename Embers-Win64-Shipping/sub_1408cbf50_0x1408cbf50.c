// 函数: sub_1408cbf50
// 地址: 0x1408cbf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = *(arg2 + 0x1d0)
int128_t zmm9
zmm9.d = sub_1408cc060(arg2, arg3).d f* 0.5f
int128_t zmm0_1
int512_t zmm6
zmm0_1, zmm6 = sub_1408cbe50(arg2, 1)
zmm6.o = zmm0_1
float zmm0_2[0x4]
int32_t zmm6_1
zmm0_2, zmm6_1 = sub_1408cc060(arg2, arg3)
int64_t zmm1_2 = zmm10[0].q
zmm0_2[0] = zmm0_2[0] f/ zmm6_1
arg1[2].b = 1
zmm0_2[0] = zmm0_2[0] * 0.5f
float temp0[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
temp0[0] = temp0[0] f+ zmm9.d
zmm10[0] = zmm10[0] + zmm0_2[0]
temp0[0] = temp0[0] f- zmm9.d
zmm1_2.d = zmm1_2.d f- zmm0_2[0]
arg1[1].d = temp0[0]
*(arg1 + 0xc) = zmm10[0]
*arg1 = (_mm_unpacklo_ps(temp0, zmm1_2)).q
return arg1
