// 函数: sub_140d92f10
// 地址: 0x140d92f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[4].b = (arg1[4].b & 0xfb) | 3
float zmm1[0x4] = *arg2
zmm1[0] = zmm1[0] + 0.5f
int32_t r8 = int.d(zmm1[0])

if (r8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r8)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(r8 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

float zmm5[0x4] = *(arg2 + 4)
zmm5[0] = zmm5[0] + 0.5f
int32_t rcx = int.d(zmm5[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm5[0]))
    zmm5 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))

float zmm4[0x4] = *(arg2 + 8)
zmm4[0] = zmm4[0] + 0.5f
int32_t rcx_2 = int.d(zmm4[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm4[0]))
    zmm4 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))

float zmm3[0x4] = *(arg2 + 0xc)
zmm3[0] = zmm3[0] + 0.5f
int32_t rcx_4 = int.d(zmm3[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm3[0]))
    zmm3 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))

float temp0_17[0x4] = _mm_min_ss(zmm4[0], zmm1[0])
float temp0_18[0x4] = _mm_max_ss(zmm4[0], zmm1[0])
float temp0_19[0x4] = _mm_min_ss(zmm3[0], zmm5[0])
float temp0_20[0x4] = _mm_max_ss(zmm3[0], zmm5[0])
arg1[2].d = temp0_17[0]
arg1[1].d = temp0_18[0]
*arg1 = (_mm_unpacklo_ps(temp0_17, temp0_19[0].q)).q
*(arg1 + 0xc) = temp0_19[0]
*(arg1 + 0x14) = temp0_20[0]
arg1[3].d = temp0_18[0]
*(arg1 + 0x1c) = temp0_20[0]
return arg1
