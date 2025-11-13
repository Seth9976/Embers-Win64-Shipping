// 函数: sub_1413e9a00
// 地址: 0x1413e9a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_1439b6b78 != 0
float zmm3[0x4] = data_1439b6b84
int128_t zmm1 = data_1439b6b80
zmm3[0] = zmm3[0] f- zmm1.d
float zmm2 = 1f / __maxss_xmmss_memss(zmm3[0], 0x3a83126f)[0]

if (not(cond:0))
    float temp0_1[0x4] = _mm_cvtepi32_ps(zx.o(data_1439b6b88))
    *arg1 = 0.0
    arg1[2] = temp0_1[0]
    return arg1

if ((zmm3[0] != 0f || zmm1.d f!= 0f) && data_1439b6b7c != 0)
    zmm1.d = zmm1.d f* zmm2
    arg1[2] = _mm_cvtepi32_ps(zx.o(data_1439b6b88))[0]
    *arg1 = zmm2
    arg1[1] = (zmm1 ^ data_142d3f780).d
    return arg1

float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(data_1439b6b88))
*arg1 = 0f
arg1[1] = 0x3f800000
arg1[2] = temp0_2[0]
return arg1
