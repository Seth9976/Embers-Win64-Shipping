// 函数: sub_141f62ee0
// 地址: 0x141f62ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = *arg1

if (rax_1 == 0)
    int32_t rax = *(arg1 + 8)
    int32_t rcx = 2
    
    if (rax s>= 2)
        rcx = rax
    
    return 1f f/ _mm_cvtepi32_ps(zx.o(rcx * 2)).d + 0.25f

if (rax_1 != 1)
    return (zx.o(0)).d

uint128_t zmm1 = *(arg1 + 0x14)
zmm1.d = zmm1.d f/ (zmm1.d f+ *(arg1 + 0xc))

if (zmm1.d f< 0f)
    return (zx.o(0)).d

return __minss_xmmss_memss(zmm1.d, 0x3f800000).d
