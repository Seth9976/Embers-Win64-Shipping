// 函数: sub_142366f80
// 地址: 0x142366f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x16d) & 1) != 0)
    return _mm_cvtepi32_ps(zx.o(*(arg1 + 0x208)))

char rax = *(arg1 + 0x16e)

if ((rax & 4) != 0)
    return *(arg1 + 0x1e0)

if ((rax & 8) != 0)
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x208)))
    *(arg1 + 0x16e) = rax | 4
    *(arg1 + 0x1e0) = zmm0.d
    return zmm0

uint128_t zmm1 = sub_141e630f0(*(arg1 + 0x168))
*(arg1 + 0x1e0) = zmm1.d
uint128_t zmm0_1

if (not(zmm1.d f< 0f))
    zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x208)))

if (zmm1.d f< 0f || not(zmm0_1.d f>= zmm1.d))
    zmm1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x208)))
    *(arg1 + 0x1e0) = zmm1.d

*(arg1 + 0x16e) |= 4
return zmm1
