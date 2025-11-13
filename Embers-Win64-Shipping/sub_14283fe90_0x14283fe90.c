// 函数: sub_14283fe90
// 地址: 0x14283fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = powf(arg1[0], arg2[0])
float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0x55)
float zmm7[0x4] = powf(_mm_shuffle_ps(arg1, arg1, 0x55)[0], temp0[0])
float temp0_2[0x4] = _mm_shuffle_ps(arg2, arg2, 0xaa)
float zmm6[0x4] = powf(_mm_shuffle_ps(arg1, arg1, 0xaa)[0], temp0_2[0])
float temp0_4[0x4] = _mm_shuffle_ps(arg2, arg2, 0xff)
float temp0_6[0x4] = _mm_unpacklo_ps(zmm6, powf(_mm_shuffle_ps(arg1, arg1, 0xff)[0], temp0_4[0]))
return (_mm_unpacklo_ps(zmm9, zmm7[0].q)[0].q | temp0_6[0].q << 0x40)[0].q
