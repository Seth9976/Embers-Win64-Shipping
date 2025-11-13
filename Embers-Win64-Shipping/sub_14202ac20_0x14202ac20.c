// 函数: sub_14202ac20
// 地址: 0x14202ac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = int.d(fconvert.t(*(arg1 + 0x30)))
*arg4 = int.d(fconvert.t(*(arg1 + 0xb4)))
*arg5 = 0x64
int32_t rax_2 = *arg4
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(*arg3)).d f- _mm_cvtepi32_ps(zx.o(rax_2)).d
uint128_t result = _mm_cvtepi32_ps(zx.o(0x64 - rax_2))
zmm1.d = zmm1.d f/ result.d
*arg2 = zmm1.d
return result
