// 函数: sub_140f48410
// 地址: 0x140f48410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = (zx.o(0)).d
float zmm0[0x4] = *(*(arg1 + 0x398) + 0x2a8)
zmm0[0] = zmm0[0] * 0.03125f

if (not(zmm0[0] < 0f))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

int32_t var_14 = 0x3f800000
int32_t var_10 = 0x3f800000
zmm0 = 0x3f800000.o
float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x93)
temp0_2[0] = zmm1
*arg2 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg2[1][0].b = 0
*(arg2 + 0x18) = 0.0
arg2[2][0].q = 0.0
return arg2
