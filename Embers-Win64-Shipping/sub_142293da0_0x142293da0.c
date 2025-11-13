// 函数: sub_142293da0
// 地址: 0x142293da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = 0x3f800000
zmm2[0] = 1f f/ _mm_cvtepi32_ps(zx.o(arg4)).d
uint64_t var_18 = *arg3
zmm2[0] = zmm2[0] f* *arg2
zmm2[0] = zmm2[0] f* arg2[1]
zmm2[0] = zmm2[0] f* arg2[2]
float zmm1[0x4] = zmm2
int32_t rdx = arg3[1].d
int32_t r8_1 = var_18.d * (arg5 + 1)
int32_t rax_1 = var_18:4.d * (arg5 + 1)
int32_t rcx_1 = int.d(zmm1[0])
var_18.d = r8_1
var_18:4.d = rax_1
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(arg5))

if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm2[0] = zmm2[0] - zmm1[0]
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r8_1))
zmm1 = zmm2
zmm2[0] = zmm2[0] f* zmm5.d
int32_t rcx_3 = int.d(zmm1[0])
zmm2[0] = zmm2[0] f+ zmm0.d
*arg1 = zmm2[0]

if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_3 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm2[0] = zmm2[0] - zmm1[0]
zmm1 = zmm2
int32_t rcx_5 = int.d(zmm1[0])
zmm2[0] = zmm2[0] f* zmm5.d
zmm0 = _mm_cvtepi32_ps(zx.o((var_18 u>> 0x20).d))
zmm2[0] = zmm2[0] f+ zmm0.d
arg1[1] = zmm2[0]

if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_5 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm2[0] = zmm2[0] - zmm1[0]
zmm2[0] = zmm2[0] f* zmm5.d
zmm0 = _mm_cvtepi32_ps(zx.o(rdx * (arg5 + 1)))
zmm2[0] = zmm2[0] f+ zmm0.d
arg1[2] = zmm2[0]
return arg1
