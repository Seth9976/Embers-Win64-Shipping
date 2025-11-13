// 函数: sub_141c46000
// 地址: 0x141c46000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x10)
arg2 = _mm_min_ss(arg2 f* *(arg1 + 0x1c) * 0.00100000005f, _mm_cvtepi32_ps(zx.o(r8)).d)
*(arg1 + 0x20) = arg2
float zmm3 = *(arg1 + 0x24)
uint128_t zmm0
zmm0.d = (*(arg1 + 0x2c)).d f- zmm3

if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770).d f< *(arg1 + 0x28)))
    arg2 = zmm3 f* *(arg1 + 0x34) f+ *(arg1 + 0x38)
    *(arg1 + 0x24) = arg2
    arg2 = arg2 f* *(arg1 + 0x1c) * 0.00100000005f

zmm0 = zx.o(0)

if (not(arg2 < 0f))
    zmm0 = _mm_min_ss(_mm_cvtepi32_ps(zx.o(r8 - 1)).d, arg2)

int32_t rdx = *(arg1 + 0x18)
*(arg1 + 0x20) = zmm0.d
zmm0.d = zmm0.d f+ 1f
int32_t result = int.d(zmm0.d)
int32_t rdx_1 = rdx - result
*(arg1 + 0x14) = rdx_1

if (rdx - result s< 0)
    result = rdx_1 + r8
    *(arg1 + 0x14) = result

return result
