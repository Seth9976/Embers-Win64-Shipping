// 函数: sub_142007930
// 地址: 0x142007930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
*arg3 = 0x3f800000
zmm0.d = zmm0.d f* arg2
int32_t rax = int.d(zmm0.d)

if (rax s>= *(arg1 + 0x30))
    arg3[1] = 0
    *(arg3 + 8) = arg1 + 0x40
    return arg1 + 0x40

uint32_t rdx_1 = zx.d(*(*(arg1 + 0x28) + sx.q(rax)))
*(arg3 + 8) = arg1 + 0x40
zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* 0.00392156886f
arg3[1] = zmm0.d
return arg1 + 0x40
