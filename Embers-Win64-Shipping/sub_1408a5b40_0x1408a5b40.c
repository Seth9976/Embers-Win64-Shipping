// 函数: sub_1408a5b40
// 地址: 0x1408a5b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm5 = (zx.o(0)).d
int32_t rcx = *(arg1 + 0x408)
int32_t r8 = int.d(arg3.d)
uint128_t zmm6 = zx.o(0)
int32_t r10 = int.d(arg4.d)

if (arg3.d f< 0f)
    r8 -= 1

if (arg4.d f< 0f)
    r10 -= 1

uint128_t zmm0
uint128_t zmm1

if (rcx == 0)
    zmm5 = arg3.d f- _mm_cvtepi32_ps(zx.o(r8)).d
    zmm6.d = arg4.d f- _mm_cvtepi32_ps(zx.o(r10)).d
else if (rcx == 1)
    zmm0.d = float.s(r8)
    zmm1.d = arg3.d f- zmm0.d
    zmm0.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm5 = 3f f- zmm0.d
    zmm0.d = float.s(r10)
    zmm5 = zmm5 f* zmm1.d
    zmm1.d = arg4.d f- zmm0.d
    zmm0.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm6.d = 3f f- zmm0.d
    zmm6.d = zmm6.d f* zmm1.d
else if (rcx == 2)
    zmm0.d = float.s(r8)
    zmm1.d = arg3.d f- zmm0.d
    zmm0.d = float.s(r10)
    zmm5 = ((zmm1.d f* 6f f- 15f) f* zmm1.d f+ 10f) f* zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm5 = zmm5 f* zmm1.d
    zmm1.d = arg4.d f- zmm0.d
    zmm6.d = zmm1.d f* 6f
    zmm6.d = zmm6.d f- 15f
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f+ 10f
    zmm6.d = zmm6.d f* zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm6.d = zmm6.d f* zmm1.d

uint32_t r9 = zx.d(arg2)
zmm0 = _mm_cvtepi32_ps(zx.o(r8))
uint32_t r8_1 = zx.d(r8.b)
uint32_t rdx = zx.d(*(zx.q(zx.d(r10.b) + r9) + arg1))
zmm1 = _mm_cvtepi32_ps(zx.o(r10))
uint32_t r10_1 = zx.d(r8.b + 1)
uint64_t rax_5 = zx.q(*(zx.q(r8_1 + rdx) + arg1 + 0x200))
uint128_t zmm7
zmm7.d = arg3.d f- zmm0.d
uint128_t zmm8
zmm8.d = arg4.d f- zmm1.d
zmm0.d = zmm7.d f* *((rax_5 << 2) + 0x142dfcdc0)
uint128_t result
result.d = zmm8.d f- 1f
arg4.d = zmm7.d f- 1f
zmm1.d = zmm8.d f* *((rax_5 << 2) + 0x142dfcdf0)
uint64_t rax_7 = zx.q(*(zx.q(rdx + r10_1) + arg1 + 0x200))
zmm1.d = zmm1.d f+ zmm0.d
arg3.d = arg4.d f* *((rax_7 << 2) + 0x142dfcdc0)
zmm8.d = zmm8.d f* *((rax_7 << 2) + 0x142dfcdf0)
arg3.d = arg3.d f+ zmm8.d
uint32_t rdx_1 = zx.d(*(zx.q(zx.d(r10.b + 1) + r9) + arg1))
arg3.d = arg3.d f- zmm1.d
uint64_t rax_11 = zx.q(*(zx.q(r8_1 + rdx_1) + arg1 + 0x200))
arg3.d = arg3.d f* zmm5
zmm7.d = zmm7.d f* *((rax_11 << 2) + 0x142dfcdc0)
arg3.d = arg3.d f+ zmm1.d
zmm1.d = result.d f* *((rax_11 << 2) + 0x142dfcdf0)
uint64_t rax_13 = zx.q(*(zx.q(rdx_1 + r10_1) + arg1 + 0x200))
zmm1.d = zmm1.d f+ zmm7.d
result.d = result.d f* *((rax_13 << 2) + 0x142dfcdf0)
arg4.d = arg4.d f* *((rax_13 << 2) + 0x142dfcdc0)
result.d = result.d f+ arg4.d
result.d = result.d f- zmm1.d
result.d = result.d f* zmm5
result.d = result.d f+ zmm1.d
result.d = result.d f- arg3.d
result.d = result.d f* zmm6.d
result.d = result.d f+ arg3.d
return result
