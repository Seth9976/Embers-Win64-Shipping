// 函数: sub_1405bde60
// 地址: 0x1405bde60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = zx.o(0)

if (not(arg1[0] < 0f))
    zmm2 = _mm_min_ss(arg1[0], 0x3f800000)

float zmm1[0x4] = 0x3f800000
zmm2[0] = zmm2[0] * 1.02900004f
zmm2[0] = zmm2[0] * 0.593599916f
zmm2[0] = zmm2[0] + 1f
zmm2[0] = zmm2[0] + 1f
zmm1[0] = 1f / zmm2[0]
int64_t zmm3
zmm3.d = 1f / zmm2[0]
float result[0x4] = _mm_unpacklo_ps(zmm1, zmm3)
*arg2 = result.q
return result
