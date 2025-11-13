// 函数: sub_1425ff250
// 地址: 0x1425ff250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = *(arg1 + 0x64)

if (rdx_1 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x68) + *(arg1 + 0x60)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_1))
int64_t rax_2 = *(arg1 + 0x10)
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_1)).d f/ zmm0.d

if (*(rax_2 + 0xf8) != 0)
    return sub_140a454f0(zmm2, 0x3f800000) __tailcall

if (zmm2.d f< 0f)
    return 

__minss_xmmss_memss(zmm2.d, 0x3f800000)
