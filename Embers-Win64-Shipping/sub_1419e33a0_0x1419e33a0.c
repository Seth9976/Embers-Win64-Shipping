// 函数: sub_1419e33a0
// 地址: 0x1419e33a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x140) = arg3
*(arg1 + 0x144) = arg3
*(arg1 + 0x148) = arg3
*(arg1 + 0x28) = arg2
*(arg1 + 0xe0) = 0
float zmm1[0x4] = *(arg2 + 0x2c)
int64_t var_60
__builtin_memset(&var_60, 0, 0x30)
float zmm2 = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] * -2f
int32_t var_20 = 1.d
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
temp0[0] = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2
zmm2 = zmm2 + zmm1[0]
float var_30[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
zmm2 = zmm2 * 0.5f
float var_1c = zmm2
float var_18 = zmm2
float var_14 = (*(arg2 + 0x34))[0]
char var_10 = 0
sub_1419e1420(&var_60, arg1 + 0xe8)
return sub_1419def80(&var_60)
