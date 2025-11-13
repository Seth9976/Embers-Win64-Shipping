// 函数: sub_140a454f0
// 地址: 0x140a454f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1
uint32_t temp0[0x4] = _mm_and_ps(arg2, 0x7fffffff)

if (not(temp0[0] f> 9.99999994e-09f))
    return zx.o(0)

float zmm2[0x4] = zmm6
zmm2[0] = zmm2[0] / arg2[0]

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] >= 8388608f))
    truncf(zmm2[0])

zmm2[0] = zmm2[0] * arg2[0]
arg1 = _mm_and_ps(zmm6, 0x7fffffff)

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] <= arg1[0]))
    zmm2 = zmm6

zmm6[0] = zmm6[0] - zmm2[0]
arg1 = temp0 ^ data_142d3f780

if (zmm6[0] < arg1[0])
    return arg1

return _mm_min_ss(zmm6[0], temp0[0])
