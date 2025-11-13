// 函数: sub_14152cc00
// 地址: 0x14152cc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t zmm1

if (arg2 s> 0)
    zmm1 = _mm_cvtepi32_pd(zx.q(arg2)).q f* *(arg1 + 8) f- arg5
    zmm1 = zmm1 f* zmm1
else if (arg2 s>= 0)
    zmm1 = (zx.o(0)).q
else
    zmm1 = _mm_cvtepi32_pd(zx.q(arg2 + 1)).q f* *(arg1 + 8) f- arg5
    zmm1 = zmm1 f* zmm1

double zmm0

if (arg3 s> 0)
    zmm0 = _mm_cvtepi32_pd(zx.q(arg3)).q f* *(arg1 + 0x10) - arg6
    zmm1 = zmm1 f+ zmm0 * zmm0
else if (arg3 s< 0)
    zmm0 = _mm_cvtepi32_pd(zx.q(arg3 + 1)).q f* *(arg1 + 0x10) - arg6
    zmm1 = zmm1 f+ zmm0 * zmm0

if (arg4 s> 0)
    zmm0 = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18) - arg7
    zmm1 = zmm1 f+ zmm0 * zmm0
else if (arg4 s< 0)
    zmm0 = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18) - arg7
    zmm1 = zmm1 f+ zmm0 * zmm0

int32_t result
result.b = zmm1 f> arg8
return result
