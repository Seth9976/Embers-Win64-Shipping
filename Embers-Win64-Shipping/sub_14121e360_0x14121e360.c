// 函数: sub_14121e360
// 地址: 0x14121e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg2 + 0xc)
float zmm12[0x4] = 0x3f800000
float zmm6[0x4] = 0x3f800000
zmm6[0] = 1f f/ data_143e81850
float zmm0_1[0x4] = logf(zmm0 + zmm0)
float zmm11[0x4] = arg2[1].d
zmm0_1[0] = zmm0_1[0] * zmm6[0]
zmm11[0] = zmm11[0] + zmm11[0]
float temp0[0x4] = _mm_max_ss(zmm0_1[0], 0x3f800000)
float zmm0_2[0x4] = logf(zmm11[0])
float zmm10[0x4] = *(arg2 + 0x14)
zmm0_2[0] = zmm0_2[0] * zmm6[0]
zmm10[0] = zmm10[0] + zmm10[0]
float temp0_1[0x4] = _mm_max_ss(zmm0_2[0], 0x3f800000)
float zmm9[0x4] = logf(zmm10[0])
int32_t rax = 5
zmm9[0] = zmm9[0] * zmm6[0]
zmm6 = data_1439b6530

if (arg3 s> 2)
    rax = arg3

float temp0_2[0x4] = _mm_max_ss(zmm9[0], 0x3f800000)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax - 2))
int32_t rax_2 = int.d(temp0[0])
zmm12[0] = 1f f/ zmm1.d
zmm1 = _mm_cvtepi32_ps(zx.o(rax_2 + 1))
float zmm7[0x4] = powf(zmm6[0], zmm1.d)
int32_t rax_4 = int.d(temp0_1[0])
zmm7[0] = zmm7[0] * zmm12[0]
zmm1 = _mm_cvtepi32_ps(zx.o(rax_4 + 1))
float zmm8[0x4] = powf(zmm6[0], zmm1.d)
int32_t rax_6 = int.d(temp0_2[0])
zmm8[0] = zmm8[0] * zmm12[0]
zmm1 = _mm_cvtepi32_ps(zx.o(rax_6 + 1))
float zmm0_6[0x4] = powf(zmm6[0], zmm1.d)
float zmm2[0x4] = *(arg2 + 4)
zmm9 = zmm0_6
float zmm4[0x4] = zmm2
zmm1 = *(arg2 + 8)
zmm4[0] = zmm4[0] - zmm11[0]
float zmm3[0x4] = *arg2
zmm6 = zmm1
zmm9[0] = zmm9[0] * zmm12[0]
zmm6[0] = zmm6[0] - zmm10[0]
float zmm5[0x4] = zmm3
zmm5[0] = zmm5[0] f- *(arg2 + 0xc)
zmm7[0] = zmm7[0] * 0.5f
zmm9[0] = zmm9[0] * 0.5f
zmm8[0] = zmm8[0] * 0.5f
float var_90
float result

if (arg3 s<= 2)
    zmm3[0] = zmm3[0] + zmm7[0]
    zmm3[0] = zmm3[0] / zmm7[0]
    int32_t rcx_6 = int.d(zmm3[0])
    
    if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6))[0] == zmm3[0]))
        zmm3 =
            _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))
    
    zmm2[0] = zmm2[0] + zmm8[0]
    zmm3[0] = zmm3[0] * zmm7[0]
    float var_98_1 = zmm3[0]
    zmm2[0] = zmm2[0] / zmm8[0]
    int32_t rcx_8 = int.d(zmm2[0])
    
    if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8))[0] == zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_8 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
    
    zmm1.d = zmm1.d f+ zmm9[0]
    zmm2[0] = zmm2[0] * zmm8[0]
    float var_94_1 = zmm2[0]
    zmm1.d = zmm1.d f/ zmm9[0]
    int32_t rcx_10 = int.d(zmm1.d)
    
    if (rcx_10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_10))[0] f== zmm1.d))
        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
    
    zmm1.d = zmm1.d f* zmm9[0]
    result = 0f
    *arg4 = var_98_1.q
    var_90 = zmm1.d
    zmm0_6 = _mm_unpacklo_ps(zx.o(0), 0)
else
    zmm5[0] = zmm5[0] / zmm7[0]
    int32_t rcx = int.d(zmm5[0])
    
    if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx))[0] == zmm5[0]))
        zmm5 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))
    
    zmm4[0] = zmm4[0] / zmm8[0]
    zmm5[0] = zmm5[0] * zmm7[0]
    int32_t rcx_2 = int.d(zmm4[0])
    zmm5[0] = zmm5[0] - zmm7[0]
    float var_98 = zmm5[0]
    
    if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2))[0] == zmm4[0]))
        zmm4 =
            _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))
    
    zmm6[0] = zmm6[0] / zmm9[0]
    zmm4[0] = zmm4[0] * zmm8[0]
    int32_t rcx_4 = int.d(zmm6[0])
    zmm4[0] = zmm4[0] - zmm8[0]
    float var_94 = zmm4[0]
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4))[0] == zmm6[0]))
        zmm6 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))
    
    zmm6[0] = zmm6[0] * zmm9[0]
    float temp0_19[0x4] = _mm_cvtepi32_ps(zx.o(arg3))
    zmm6[0] = zmm6[0] - zmm9[0]
    zmm9[0] = zmm9[0] * temp0_19[0]
    zmm7[0] = zmm7[0] * temp0_19[0]
    zmm8[0] = zmm8[0] * temp0_19[0]
    *arg4 = var_98.q
    zmm0_6 = _mm_unpacklo_ps(zmm7, zmm8[0].q)
    var_90 = zmm6[0]
    result = zmm9[0]

arg4[1].d = var_90
*arg5 = zmm0_6.q
arg5[1].d = result
return result
