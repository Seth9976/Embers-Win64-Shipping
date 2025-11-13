// 函数: sub_1424eff80
// 地址: 0x1424eff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

uint64_t result = *(arg2 + 0x20)
float zmm2[0x4] = arg_18
int64_t rcx_2
rcx_2.b = result != 0
bool cond:2 = zmm2[0] != 0f
*(arg2 + 0x20) = rcx_2 + result

if (not(cond:2))
    *arg3 = arg_10.d
    return result

float zmm1[0x4] = zmm2
zmm1[0] = zmm1[0] * 0.5f
zmm1[0] = zmm1[0] f+ arg_10
zmm1[0] = zmm1[0] / zmm2[0]
int32_t rcx_4 = int.d(zmm1[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
    result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q))) & 1
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4 - result.d))

zmm1[0] = zmm1[0] * zmm2[0]
*arg3 = zmm1[0]
return result
