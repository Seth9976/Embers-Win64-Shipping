// 函数: sub_140db27a0
// 地址: 0x140db27a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result
result.b = arg1[4].b & 0xfe
arg1[4].b = result.b
uint128_t zmm1 = *arg4
uint128_t zmm0
zmm0.d = (*arg2).d f- zmm1.d
char rdx

if (_mm_and_ps(zmm0, 0x7fffffff).d f> 0.100000001f)
    rdx = result.b
    zmm0.d = (*(arg2 + 4)).d f- *(arg4 + 4)
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff).d f> 0.100000001f))
        zmm1.d = zmm1.d f- *arg5
        
        if (not(_mm_and_ps(zmm1, 0x7fffffff).d f> 0.100000001f))
            rdx |= 1
            arg1[4].b = rdx
else
    result.b |= 1
    arg1[4].b = result.b
    rdx = result.b

if ((rdx & 1) == 0)
    *arg1 = *arg2
    arg1[1] = *arg3
    arg1[2] = *arg4
    arg1[3] = *arg5
    return result

zmm1.d = (*arg2).d f+ 0.5f
int32_t rdx_1 = int.d(zmm1.d)

if (rdx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_1)).d f== zmm1.d))
    result = _mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1
    zmm1 = _mm_cvtepi32_ps(zx.o(rdx_1 - result))

uint128_t zmm3
zmm3.d = (*(arg2 + 4)).d f+ 0.5f
int32_t rdx_3 = int.d(zmm3.d)

if (rdx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_3)).d f== zmm3.d))
    result = _mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3.q)) & 1
    zmm3 = _mm_cvtepi32_ps(zx.o(rdx_3 - result))

uint128_t zmm4
zmm4.d = (*arg5).d f+ 0.5f
int32_t rdx_5 = int.d(zmm4.d)

if (rdx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_5)).d f== zmm4.d))
    result = _mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4.q)) & 1
    zmm4 = _mm_cvtepi32_ps(zx.o(rdx_5 - result))

uint128_t zmm5
zmm5.d = (*(arg5 + 4)).d f+ 0.5f
int32_t rdx_7 = int.d(zmm5.d)

if (rdx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_7)).d f== zmm5.d))
    result = _mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5.q)) & 1
    zmm5 = _mm_cvtepi32_ps(zx.o(rdx_7 - result))

uint128_t zmm2 = zmm4
zmm4 = _mm_max_ss(zmm4.d, zmm1.d)
zmm2 = _mm_min_ss(zmm2.d, zmm1.d)
zmm1 = _mm_min_ss(zmm3.d, zmm5.d)
zmm3 = _mm_max_ss(zmm3.d, zmm5.d)
arg1[1].d = zmm4.d
arg1[2].d = zmm2.d
*arg1 = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
zmm0 = _mm_unpacklo_ps(zmm4, zmm3.q)
*(arg1 + 0xc) = zmm1.d
*(arg1 + 0x14) = zmm3.d
arg1[3] = zmm0.q
return result
