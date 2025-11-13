// 函数: sub_14230a990
// 地址: 0x14230a990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm2 = *(arg1 + 0x78)
float zmm11[0x4] = *(arg1 + 0x68)
float temp0[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
temp0[0] = temp0[0] f+ zmm2.d
float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
zmm11[0] = zmm11[0] - temp0_1[0]
zmm11[0] = zmm11[0] + temp0_1[0]
temp0_2[0] = temp0_2[0] f+ zmm2:4.d
temp0_2[0] = temp0_2[0] f- zmm2:4.d
temp0[0] = temp0[0] f+ *(arg1 + 0xa4)
zmm11[0] = zmm11[0] f- *(arg1 + 0xac)
zmm11[0] = zmm11[0] f+ *(arg1 + 0xa0)
temp0_2[0] = temp0_2[0] f+ *(arg1 + 0xa8)
temp0_2[0] = temp0_2[0] f- *(arg1 + 0xb4)
float zmm4 = temp0[0]
temp0[0] = temp0[0] f- zmm2.d
zmm11[0] = zmm11[0] - zmm11[0]
zmm11[0] = zmm11[0] + zmm11[0]
float zmm5 = temp0_2[0]
temp0_2[0] = temp0_2[0] - temp0_2[0]
temp0[0] = temp0[0] f- *(arg1 + 0xb0)
zmm5 = zmm5 + temp0_2[0]
zmm11[0] = zmm11[0] * 0.5f
zmm11[0] = zmm11[0] * 0.5f
temp0_2[0] = temp0_2[0] * 0.5f
temp0[0] = temp0[0] - temp0[0]
zmm4 = zmm4 + temp0[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
float zmm1[0x4] = _mm_and_ps(temp0_2, 0x7fffffff)
temp0[0] = temp0[0] * 0.5f
float zmm0[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
float zmm3[0x4] = _mm_and_ps(temp0, 0x7fffffff)
temp0_3[0] = zmm4 * 0.5f
float temp0_7[0x4] = _mm_max_ss(zmm3[0], zmm0[0])
float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_8[0] = zmm5 * 0.5f
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_9[0] = zmm11[0]
float temp0_10[0x4] = _mm_unpacklo_ps(temp0, temp0_2[0].q)
float temp0_11[0x4] = _mm_max_ss(temp0_7[0], zmm1[0])
*(arg1 + 0x84) = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
float result = temp0_11[0]
*(arg1 + 0x94) = temp0_10.q
*(arg1 + 0x9c) = result
return result
