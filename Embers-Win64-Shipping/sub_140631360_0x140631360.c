// 函数: sub_140631360
// 地址: 0x140631360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg2[2]
float zmm4[0x4] = arg3
float zmm1[0x4]

if (zmm4[0] != 0f)
    zmm1 = zmm4
    zmm1[0] = zmm1[0] * 0.5f
    uint128_t zmm0
    zmm0.d = zmm1.d f+ zmm3[0]
    zmm3 = zmm0
    zmm3[0] = zmm3[0] / zmm4[0]
    int32_t rcx = int.d(zmm3[0])
    
    if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm3[0]))
        zmm3 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))
    
    arg3 = arg2[1]
    arg3[0] = arg3[0] + zmm1[0]
    zmm3[0] = zmm3[0] * zmm4[0]
    arg3[0] = arg3[0] / zmm4[0]
    int32_t rcx_2 = int.d(arg3[0])
    
    if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== arg3[0]))
        arg3 =
            _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))
    
    zmm1[0] = zmm1[0] f+ *arg2
    arg3[0] = arg3[0] * zmm4[0]
    zmm1[0] = zmm1[0] / zmm4[0]
    int32_t rcx_4 = int.d(zmm1[0])
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    zmm1[0] = zmm1[0] * zmm4[0]
else
    arg3 = arg2[1]
    zmm1 = *arg2

*arg1 = zmm1[0]
arg1[1] = arg3[0]
arg1[2] = zmm3[0]
return arg1
