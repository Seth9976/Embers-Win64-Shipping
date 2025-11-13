// 函数: sub_140e69a90
// 地址: 0x140e69a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = sub_140e66050(arg1, arg3)
float zmm3[0x4] = data_14399f5c0.d
int32_t zmm1 = data_14399f5c0:4.d
int32_t zmm2 = data_14399f5c0:8.d
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm0 * 0.400000006f
*arg2 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg2[1][0].b = 0
*(arg2 + 0x18) = 0.0
arg2[2][0].q = 0.0
return arg2
