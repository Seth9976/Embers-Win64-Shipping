// 函数: sub_141ef2c40
// 地址: 0x141ef2c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *arg3
zmm1[0] = zmm1[0] * 10f
zmm1[0] = zmm1[0] + 0.5f
int32_t rcx = int.d(zmm1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

float zmm2[0x4] = *(arg3 + 4)
zmm2[0] = zmm2[0] * 10f
zmm1[0] = zmm1[0] * 0.100000001f
zmm2[0] = zmm2[0] + 0.5f
*arg3 = zmm1[0]
int32_t rcx_2 = int.d(zmm2[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm2[0]))
    zmm2 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))

zmm1 = *(arg3 + 8)
zmm1[0] = zmm1[0] * 10f
zmm2[0] = zmm2[0] * 0.100000001f
zmm1[0] = zmm1[0] + 0.5f
*(arg3 + 4) = zmm2[0]
int32_t rcx_4 = int.d(zmm1[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm1[0] = zmm1[0] * 0.100000001f
*(arg3 + 8) = zmm1[0]
int32_t rax_7 = *(arg3 + 8)
*arg2 = *arg3
arg2[1].d = rax_7
return arg2
