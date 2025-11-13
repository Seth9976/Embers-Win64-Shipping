// 函数: sub_142503b90
// 地址: 0x142503b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

uint64_t result = *(arg2 + 0x20)
float zmm1[0x4] = arg_18
int64_t rcx_1
rcx_1.b = result != 0
zmm1[0] = zmm1[0] + 0.5f
*(arg2 + 0x20) = rcx_1 + result
int32_t rcx_3 = int.d(zmm1[0])

if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm1[0]))
    result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q))) & 1
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_3 - result.d))

float arg_10 = zmm1[0]
zmm1 = arg4
zmm1[0] = zmm1[0] + 0.5f
int32_t rcx_5 = int.d(zmm1[0])
uint128_t zmm0_1

if (rcx_5 == 0x80000000)
    zmm0_1 = zx.o(arg_10.q)
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
else
    bool cond:2_1 = _mm_cvtepi32_ps(zx.o(rcx_5)).d f== zmm1[0]
    zmm0_1 = zx.o(arg_10.q)
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    
    if (not(cond:2_1))
        result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q))) & 1
        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_5 - result.d))

zmm0_1.d = zmm1[0]
*arg3 = (_mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)).q
return result
