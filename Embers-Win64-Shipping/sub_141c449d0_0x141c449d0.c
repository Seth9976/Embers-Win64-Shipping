// 函数: sub_141c449d0
// 地址: 0x141c449d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_3 = *(arg1 + 0x18)
float zmm2 = arg2.d f* *(arg1 + 0x1c) * 0.00100000005f
int32_t r9 = int.d(zmm2)
int32_t rdx = rdx_3 - r9

if (rdx_3 - r9 s< 0)
    rdx += *(arg1 + 0x10)

int64_t r8 = *(arg1 + 8)
int32_t rdx_1 = rdx - 1
float zmm3 = *(r8 + (sx.q(rdx) << 2))

if (rdx - 1 s< 0)
    rdx_1 = *(arg1 + 0x10) - 1

arg2 = _mm_cvtepi32_ps(zx.o(r9))
return (*(r8 + (sx.q(rdx_1) << 2)) - zmm3) * (zmm2 f- arg2.d) + zmm3
