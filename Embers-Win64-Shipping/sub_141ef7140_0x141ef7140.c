// 函数: sub_141ef7140
// 地址: 0x141ef7140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg3))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg4))
arg1[0x83].d = zmm0.d
*(arg1 + 0x41c) = zmm1.d
zmm0 = _mm_cvtepi32_ps(zx.o(arg5))
zmm1 = _mm_cvtepi32_ps(zx.o(arg6))
arg1[0x84].d = zmm0.d
*(arg1 + 0x424) = zmm1.d
jump(*(rax + 0x860))
