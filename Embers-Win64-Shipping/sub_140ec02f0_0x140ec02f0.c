// 函数: sub_140ec02f0
// 地址: 0x140ec02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_24 = 0x3f800000
int32_t var_20 = 0x3f800000
float zmm0
float zmm6_1
zmm0, zmm6_1 = sub_140da85e0(arg1 + 0x460, arg3)
float zmm1[0x4] = 0x3f800000.o
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
temp0[0] = zmm6_1 - zmm0
*arg2 = _mm_shuffle_ps(temp0, temp0, 0x39)
arg2[1][0].b = 0
*(arg2 + 0x18) = 0.0
arg2[2][0].q = 0.0
return arg2
