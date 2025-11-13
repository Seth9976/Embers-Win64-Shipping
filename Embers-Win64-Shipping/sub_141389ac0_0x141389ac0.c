// 函数: sub_141389ac0
// 地址: 0x141389ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i = *(arg2 + 0x28)
uint64_t result = *(arg2 + 0x30)

for (void* rsi = &i[result << 2]; i != rsi; i = &i[4])
    uint128_t zmm1 = *arg1
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(i[3])).d f* 0.00392156886f
    float zmm0_1[0x4] = powf(zmm0.d, zmm1.d)
    zmm0_1[0] = zmm0_1[0] * 255f
    zmm0_1[0] = zmm0_1[0] + 0.5f
    int32_t rcx = int.d(zmm0_1[0])
    
    if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm0_1[0]))
        zmm0_1 =
            _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm0_1, zmm0_1[0].q)) & 1)))
    
    i[3] = (int.d(zmm0_1[0])).b
    zmm1 = *arg1
    float temp0_6[0x4] = _mm_cvtepi32_ps(zx.o(i[2]))
    temp0_6[0] = temp0_6[0] * 0.00392156886f
    float zmm0_2[0x4] = powf(temp0_6[0], zmm1.d)
    zmm0_2[0] = zmm0_2[0] * 255f
    zmm0_2[0] = zmm0_2[0] + 0.5f
    int32_t rcx_2 = int.d(zmm0_2[0])
    
    if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm0_2[0]))
        zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_2
            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm0_2, zmm0_2[0].q)) & 1)))
    
    i[2] = (int.d(zmm0_2[0])).b
    zmm1 = *arg1
    float temp0_11[0x4] = _mm_cvtepi32_ps(zx.o(i[1]))
    temp0_11[0] = temp0_11[0] * 0.00392156886f
    float zmm0_3[0x4] = powf(temp0_11[0], zmm1.d)
    zmm0_3[0] = zmm0_3[0] * 255f
    zmm0_3[0] = zmm0_3[0] + 0.5f
    int32_t rcx_4 = int.d(zmm0_3[0])
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm0_3[0]))
        zmm0_3 = _mm_cvtepi32_ps(zx.o(rcx_4
            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm0_3, zmm0_3[0].q)) & 1)))
    
    i[1] = (int.d(zmm0_3[0])).b
    zmm1 = *arg1
    float temp0_16[0x4] = _mm_cvtepi32_ps(zx.o(*i))
    temp0_16[0] = temp0_16[0] * 0.00392156886f
    zmm0.d = powf(temp0_16[0], zmm1.d).d f* 255f
    zmm0.d = zmm0.d f+ 0.5f
    int32_t rcx_6 = int.d(zmm0.d)
    
    if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm0.d))
        zmm0 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm0, zmm0.q)) & 1)))
    
    result = zx.q(int.d(zmm0.d))
    *i = result.b

return result
