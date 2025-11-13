// 函数: sub_140e69b00
// 地址: 0x140e69b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = sub_140e66050(arg1, arg3)
float zmm6[0x4] = data_14399f5e0.d
zmm6[0] = zmm6[0] f- data_14399f5c0.d
float zmm5 = data_14399f5e0:4.d f- data_14399f5c0:4.d
float zmm3 = data_14399f5e0:8.d f- data_14399f5c0:8.d
float zmm2 = data_14399f5e0:0xc.d f- data_14399f5c0:0xc.d
zmm6[0] = zmm6[0] * zmm0
zmm6[0] = zmm6[0] f+ data_14399f5c0.d
zmm5 = zmm5 * zmm0 f+ data_14399f5c0:4.d
zmm3 = zmm3 * zmm0 f+ data_14399f5c0:8.d
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
zmm2 = zmm2 * zmm0 f+ data_14399f5c0:0xc.d
temp0[0] = zmm5
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm3
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2
*arg2 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg2[1][0].b = 0
*(arg2 + 0x18) = 0.0
arg2[2][0].q = 0.0
return arg2
