// 函数: sub_141bab660
// 地址: 0x141bab660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg3

if (*(arg1 + 0x430) == 1)
    int32_t zmm1 = data_143dbb1fc
    arg2[1] = data_143dbb1f8[0]
    arg2[3] = data_143dbb200[0]
    arg2[2] = zmm1
    *arg2 = 1
    return arg2

float zmm3[0x4] = *(arg1 + 0x1e0)
arg3 = zx.o(0)
arg3[0] = float.s(*(arg1 + 0x458))
float zmm4 = float.s(*(arg1 + 0x45c))
arg3[0] = arg3[0] * 0.5f
float zmm5 = zmm3[0] * 0.00999999978f
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
arg3[0] = arg3[0] * temp0[0]
bool cond:1 = zmm6[0] >= 0f
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm5 = zmm5 + zmm6[0]
zmm4 = zmm4 * 0.5f * temp0_1[0]
arg3[0] = arg3[0] + zmm6[0]
zmm4 = zmm4 + zmm6[0]

if (not(cond:1))
    zmm5 = __maxss_xmmss_memss(zmm5, data_143dbb1f8)
    arg3 = __maxss_xmmss_memss(arg3[0], data_143dbb1fc)
    zmm4 = __maxss_xmmss_memss(zmm4, data_143dbb200)

arg2[1] = zmm5
arg2[2] = arg3[0]
arg2[3] = zmm4
*arg2 = 1
return arg2
