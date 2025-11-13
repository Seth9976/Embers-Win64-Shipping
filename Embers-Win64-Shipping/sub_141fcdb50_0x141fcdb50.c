// 函数: sub_141fcdb50
// 地址: 0x141fcdb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg4 + 0x260)
uint128_t zmm0

if (*(rax_1 + 0x94) == 0)
    zmm0 = *(rax_1 + 0xa4)
else
    zmm0 = 0x3f800000

int64_t zmm1 = *arg3
float zmm2 = 1f f/ zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x40)))
*arg2 = zmm1
zmm0.d = zmm0.d f* zmm2
zmm0.d = zmm0.d f* zmm1.d
*arg2 = zmm0.d
zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x44))).d f* zmm2
zmm0.d = zmm0.d f* *(arg2 + 4)
*(arg2 + 4) = zmm0.d
return arg2
