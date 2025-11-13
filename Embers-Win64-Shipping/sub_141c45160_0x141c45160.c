// 函数: sub_141c45160
// 地址: 0x141c45160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 8)

if (rcx != 0)
    memset(rcx, 0, sx.q(*(arg1 + 0x10)) << 2)

*(arg1 + 0x14) = 0
float zmm1 = *(arg1 + 0x24)
float zmm0[0x4] = *(arg1 + 0x2c)
zmm0[0] = zmm0[0] - zmm1

if (__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f< *(arg1 + 0x28))
    zmm1 = *(arg1 + 0x20)
else
    zmm1 = zmm1 f* *(arg1 + 0x34) f+ *(arg1 + 0x38)
    *(arg1 + 0x24) = zmm1
    zmm1 = zmm1 f* *(arg1 + 0x1c) * 0.00100000005f
    *(arg1 + 0x20) = zmm1

int32_t rdx = *(arg1 + 0x10)
zmm0 = zx.o(0)

if (not(zmm1 < 0f))
    zmm0 = _mm_min_ss(_mm_cvtepi32_ps(zx.o(rdx - 1))[0], zmm1)

*(arg1 + 0x20) = zmm0[0]
zmm0[0] = zmm0[0] + 1f
int32_t result = int.d(zmm0[0])
*(arg1 + 0x14) = 0 - result

if (0 - result s< 0)
    result = 0 - result + rdx
    *(arg1 + 0x14) = result

return result
