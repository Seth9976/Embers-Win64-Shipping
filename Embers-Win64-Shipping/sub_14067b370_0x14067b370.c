// 函数: sub_14067b370
// 地址: 0x14067b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
rax.b = *(arg1 + 0x10) != 0
uint64_t zmm0 = zx.q(rax)
rax.b = 1
*arg2 = _mm_cvtepi32_pd(zmm0)
return 1
