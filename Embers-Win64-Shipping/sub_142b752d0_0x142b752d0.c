// 函数: sub_142b752d0
// 地址: 0x142b752d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = *arg2

if (rax_2 == 0xc)
    return _mm_cvtepi32_pd(zx.q(sx.d(*(arg2 + 0xa))))

if (rax_2 != 0xd)
    return -0x3e6290cbac000000

return *(*(arg1 + 0x70) + (sx.q(*(arg2 + 0xa)) << 3))
