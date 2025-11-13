// 函数: sub_142508eb0
// 地址: 0x142508eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
float zmm4[0x4] = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
bool cond:3 = zmm4[0] != 0f
*(arg2 + 0x20) = rcx_2 + rax_3
float zmm2[0x4]
int32_t var_20

if (cond:3)
    zmm2 = zmm4
    zmm2[0] = zmm2[0] * 0.5f
    zmm2[0] = zmm2[0] f+ var_20
    zmm2[0] = zmm2[0] / zmm4[0]
    int32_t rcx_4 = int.d(zmm2[0])
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4))[0] == zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
    
    zmm2[0] = zmm2[0] * zmm4[0]
else
    zmm2 = var_20
float zmm3[0x4]
int32_t var_24

if (zmm4[0] != 0f)
    zmm3 = zmm4
    zmm3[0] = zmm3[0] * 0.5f
    zmm3[0] = zmm3[0] f+ var_24
    zmm3[0] = zmm3[0] / zmm4[0]
    int32_t rcx_6 = int.d(zmm3[0])
    
    if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6))[0] == zmm3[0]))
        zmm3 =
            _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))
    
    zmm3[0] = zmm3[0] * zmm4[0]
else
    zmm3 = var_24
float zmm1[0x4]

if (zmm4[0] != 0f)
    zmm1 = zmm4
    zmm1[0] = zmm1[0] * 0.5f
    zmm1[0] = zmm1[0] f+ var_28
    zmm1[0] = zmm1[0] / zmm4[0]
    int32_t rcx_8 = int.d(zmm1[0])
    
    if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8))[0] == zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_8 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    zmm1[0] = zmm1[0] * zmm4[0]
else
    zmm1 = var_28

float temp0_13[0x4] = _mm_unpacklo_ps(zmm1, zmm3[0].q)
float result = zmm2[0]
*arg3 = temp0_13.q
arg3[1].d = result
return result
