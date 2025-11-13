// 函数: sub_142bfd760
// 地址: 0x142bfd760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_2 = sx.d(zx.w(*arg1) * 0x100 + zx.w(arg1[1]))
int32_t r8 = sx.d(zx.w(arg1[2]) * 0x100 + zx.w(arg1[3]))
int32_t rcx = sx.d(zx.w(arg1[4]) * 0x100 + zx.w(arg1[5]))

if (r9_2 s> r8 || r8 s> rcx || (r9_2 s< 0 && rcx s> 0) || r8 == 0 || arg2 == r8)
    return 0x3f800000

if (arg2 s<= r9_2 || rcx s<= arg2)
    return zx.o(0)

uint128_t result
uint128_t zmm1

if (arg2 s>= r8)
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx - r8))
    result.d = _mm_cvtepi32_ps(zx.o(rcx - arg2)).d f/ zmm1.d
    return result

zmm1 = _mm_cvtepi32_ps(zx.o(r8 - r9_2))
result.d = _mm_cvtepi32_ps(zx.o(arg2 - r9_2)).d f/ zmm1.d
return result
