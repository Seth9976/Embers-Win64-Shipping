// 函数: sub_141f62e70
// 地址: 0x141f62e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x410)

if (rax s< 2)
    int512_t result
    result.o = zx.o(0)
    return result

bool cond:0 = *(arg1 + 0x4e1) != 0
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rax))

if (not(cond:0))
    zmm6.d = zmm6.d f- 1f

int32_t arg_8 = 0
float zmm0
float zmm6_1
zmm0, zmm6_1 = sub_141f5bc90(arg1 + 0x450, arg2, &arg_8)
return zmm0 * *(arg1 + 0x4d8) / zmm6_1
