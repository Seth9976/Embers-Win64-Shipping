// 函数: sub_1408a5dd0
// 地址: 0x1408a5dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm9 = zx.o(0)
uint128_t zmm10 = zx.o(0)
uint128_t zmm11 = zx.o(0)
uint32_t r8 = zx.d(arg2)
int32_t rdx = *(arg1 + 0x408)
int32_t r9 = int.d(arg3.d)
int32_t r10 = int.d(arg4.d)

if (arg3.d f< 0f)
    r9 -= 1

uint128_t zmm14 = arg5
int32_t rcx = int.d(zmm14.d)

if (arg4.d f< 0f)
    r10 -= 1

if (zmm14.d f< 0f)
    rcx -= 1

uint128_t zmm0
uint128_t zmm1

if (rdx == 0)
    zmm9.d = arg3.d f- _mm_cvtepi32_ps(zx.o(r9)).d
    zmm10.d = zmm14.d f- _mm_cvtepi32_ps(zx.o(rcx)).d
    zmm11.d = arg4.d f- _mm_cvtepi32_ps(zx.o(r10)).d
else if (rdx == 1)
    zmm0.d = float.s(r9)
    zmm1.d = arg3.d f- zmm0.d
    zmm0.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm9.d = 3f f- zmm0.d
    zmm0.d = float.s(r10)
    zmm9.d = zmm9.d f* zmm1.d
    zmm1.d = arg4.d f- zmm0.d
    zmm0.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm11.d = 3f f- zmm0.d
    zmm0.d = float.s(rcx)
    zmm11.d = zmm11.d f* zmm1.d
    zmm1.d = zmm14.d f- zmm0.d
    zmm0.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm10.d = 3f f- zmm0.d
    zmm10.d = zmm10.d f* zmm1.d
else if (rdx == 2)
    zmm0.d = float.s(r9)
    zmm1.d = arg3.d f- zmm0.d
    zmm0.d = float.s(r10)
    zmm9.d = zmm1.d f* 6f
    zmm9.d = zmm9.d f- 15f
    zmm9.d = zmm9.d f* zmm1.d
    zmm9.d = zmm9.d f+ 10f
    zmm9.d = zmm9.d f* zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm9.d = zmm9.d f* zmm1.d
    zmm1.d = arg4.d f- zmm0.d
    zmm0.d = float.s(rcx)
    zmm11.d = zmm1.d f* 6f
    zmm11.d = zmm11.d f- 15f
    zmm11.d = zmm11.d f* zmm1.d
    zmm11.d = zmm11.d f+ 10f
    zmm11.d = zmm11.d f* zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm11.d = zmm11.d f* zmm1.d
    zmm1.d = zmm14.d f- zmm0.d
    zmm10.d = zmm1.d f* 6f
    zmm10.d = zmm10.d f- 15f
    zmm10.d = zmm10.d f* zmm1.d
    zmm10.d = zmm10.d f+ 10f
    zmm10.d = zmm10.d f* zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm10.d = zmm10.d f* zmm1.d

uint32_t rdi = zx.d(r9.b)
zmm0 = _mm_cvtepi32_ps(zx.o(r9))
uint32_t rsi = zx.d(r9.b + 1)
uint32_t r8_1 = zx.d(*(zx.q(zx.d(rcx.b) + r8) + arg1))
uint32_t r9_1 = zx.d(r10.b + 1)
uint128_t zmm12
zmm12.d = arg3.d f- zmm0.d
uint32_t r10_1 = zx.d(r10.b)
zmm1 = _mm_cvtepi32_ps(zx.o(r10))
uint32_t rdx_2 = zx.d(*(zx.q(r10_1 + r8_1) + arg1))
zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
uint64_t rax_7 = zx.q(*(zx.q(rdi + rdx_2) + arg1 + 0x200))
uint128_t zmm13
zmm13.d = arg4.d f- zmm1.d
zmm14.d = zmm14.d f- zmm0.d
uint128_t zmm7
zmm7.d = zmm12.d f- 1f
zmm1.d = zmm13.d f* *((rax_7 << 2) + 0x142dfcdf0)
uint128_t result
result.d = zmm13.d f- 1f
uint128_t zmm6
zmm6.d = zmm14.d f- 1f
zmm0.d = zmm12.d f* *((rax_7 << 2) + 0x142dfcdc0)
zmm1.d = zmm1.d f+ zmm0.d
zmm0.d = zmm14.d f* *((rax_7 << 2) + 0x142dfce20)
uint64_t rax_9 = zx.q(*(zx.q(rsi + rdx_2) + arg1 + 0x200))
zmm1.d = zmm1.d f+ zmm0.d
zmm0.d = zmm13.d f* *((rax_9 << 2) + 0x142dfcdf0)
float zmm5 = zmm7.d f* *((rax_9 << 2) + 0x142dfcdc0) f+ zmm0.d
zmm0.d = zmm14.d f* *((rax_9 << 2) + 0x142dfce20)
uint32_t rbx_1 = zx.d(*(zx.q(r8_1 + r9_1) + arg1))
uint64_t rax_12 = zx.q(*(zx.q(rbx_1 + rdi) + arg1 + 0x200))
zmm5 = zmm5 f+ zmm0.d f- zmm1.d
zmm0.d = zmm12.d f* *((rax_12 << 2) + 0x142dfcdc0)
float zmm4 = result.d f* *((rax_12 << 2) + 0x142dfcdf0) f+ zmm0.d
zmm0.d = zmm14.d f* *((rax_12 << 2) + 0x142dfce20)
zmm5 = zmm5 f* zmm9.d f+ zmm1.d
zmm4 = zmm4 f+ zmm0.d
uint32_t r8_2 = zx.d(*(zx.q(zx.d(rcx.b + 1) + r8) + arg1))
uint32_t rdx_3 = zx.d(*(zx.q(r8_2 + r10_1) + arg1))
uint64_t rax_17 = zx.q(*(zx.q(rdx_3 + rdi) + arg1 + 0x200))
zmm0.d = zmm12.d f* *((rax_17 << 2) + 0x142dfcdc0)
zmm1.d = zmm13.d f* *((rax_17 << 2) + 0x142dfcdf0)
zmm1.d = zmm1.d f+ zmm0.d
zmm0.d = zmm6.d f* *((rax_17 << 2) + 0x142dfce20)
uint64_t rax_19 = zx.q(*(zx.q(rsi + rdx_3) + arg1 + 0x200))
zmm1.d = zmm1.d f+ zmm0.d
arg4.d = zmm7.d f* *((rax_19 << 2) + 0x142dfcdc0)
zmm13.d = zmm13.d f* *((rax_19 << 2) + 0x142dfcdf0)
zmm0.d = zmm6.d f* *((rax_19 << 2) + 0x142dfce20)
uint32_t rdx_4 = zx.d(*(zx.q(r8_2 + r9_1) + arg1))
arg4.d = arg4.d f+ zmm13.d
uint64_t rax_22 = zx.q(*(zx.q(rdx_4 + rdi) + arg1 + 0x200))
arg4.d = arg4.d f+ zmm0.d
zmm0.d = zmm6.d f* *((rax_22 << 2) + 0x142dfce20)
arg3.d = result.d f* *((rax_22 << 2) + 0x142dfcdf0)
arg4.d = arg4.d f- zmm1.d
zmm12.d = zmm12.d f* *((rax_22 << 2) + 0x142dfcdc0)
uint64_t rax_24 = zx.q(*(zx.q(rsi + rbx_1) + arg1 + 0x200))
arg4.d = arg4.d f* zmm9.d
zmm14.d = zmm14.d f* *((rax_24 << 2) + 0x142dfce20)
arg3.d = arg3.d f+ zmm12.d
arg4.d = arg4.d f+ zmm1.d
zmm1.d = result.d f* *((rax_24 << 2) + 0x142dfcdf0)
arg3.d = arg3.d f+ zmm0.d
zmm0.d = zmm7.d f* *((rax_24 << 2) + 0x142dfcdc0)
uint64_t rax_26 = zx.q(*(zx.q(rsi + rdx_4) + arg1 + 0x200))
zmm1.d = zmm1.d f+ zmm0.d
result.d = result.d f* *((rax_26 << 2) + 0x142dfcdf0)
zmm7.d = zmm7.d f* *((rax_26 << 2) + 0x142dfcdc0)
zmm6.d = zmm6.d f* *((rax_26 << 2) + 0x142dfce20)
zmm1.d = zmm1.d f+ zmm14.d
result.d = result.d f+ zmm7.d
zmm1.d = zmm1.d f- zmm4
result.d = result.d f+ zmm6.d
zmm1.d = zmm1.d f* zmm9.d
result.d = result.d f- arg3.d
zmm1.d = zmm1.d f+ zmm4
result.d = result.d f* zmm9.d
zmm1.d = zmm1.d f- zmm5
result.d = result.d f+ arg3.d
zmm1.d = zmm1.d f* zmm11.d
result.d = result.d f- arg4.d
zmm1.d = zmm1.d f+ zmm5
result.d = result.d f* zmm11.d
result.d = result.d f+ arg4.d
result.d = result.d f- zmm1.d
result.d = result.d f* zmm10.d
result.d = result.d f+ zmm1.d
return result
