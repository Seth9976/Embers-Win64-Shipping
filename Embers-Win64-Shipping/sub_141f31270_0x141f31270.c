// 函数: sub_141f31270
// 地址: 0x141f31270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0x1d0)
zmm2[0] = zmm2[0] f+ *arg2
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0[0] = temp0[0] f+ arg2[1]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_1[0] = temp0_1[0] f+ arg2[2]
int64_t var_28 = (_mm_unpacklo_ps(zmm2, temp0[0].q)).q
float var_20 = temp0_1[0]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
return sub_141f49c70(arg1, &var_28, arg3, arg4, zmm6, zmm7, zmm8, arg5)
