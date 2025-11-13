// 函数: sub_140a127e0
// 地址: 0x140a127e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (*(arg1 + 0xa0) u<= 1)
    *arg2 = 0
    return result

double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(sub_142a37f00(*(arg1 + 0x78)))
zmm0[0] = zmm0[0] * 0.01
zmm0[0] = zmm0[0] + 0.5
int64_t rcx_1 = int.q(zmm0[0])

if (rcx_1 != -0x8000000000000000 && not(float.d(rcx_1) f== zmm0[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx_1 - (zx.q(temp0_2) & 1))

*result = int.q(zmm0[0])
return result
