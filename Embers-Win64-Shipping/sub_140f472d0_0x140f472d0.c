// 函数: sub_140f472d0
// 地址: 0x140f472d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = 1f - sub_140da8440(arg1 + 0x530, arg3)[0]

if (not(zmm2 != 1f))
    zmm2 = (zx.o(0)).d

int32_t rcx_1 = *(arg1 + 0x438)
float zmm0[0x4]

if (rcx_1 == 2)
    int64_t var_14_1 = 0x3f800000
    zmm0 = 0.o
else if (rcx_1 == 3)
    int32_t var_18
    var_18.q = 0x3f800000
    int64_t var_14
    var_14:4.d = 0
    zmm0 = var_18.o
else
    zmm0 = *(arg1 + 0x418)

zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x93)
zmm0[0] = zmm2
*arg2 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
arg2[1][0].b = 0
*(arg2 + 0x18) = 0.0
arg2[2][0].q = 0.0
return arg2
