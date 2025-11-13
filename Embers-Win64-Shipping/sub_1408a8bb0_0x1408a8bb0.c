// 函数: sub_1408a8bb0
// 地址: 0x1408a8bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = zx.o(0)
uint32_t r8 = zx.d(arg2)
int32_t rdx = *(arg1 + 0x408)
uint128_t zmm9 = arg5
uint128_t zmm8 = zx.o(0)
int32_t r9 = int.d(arg3.d)
int32_t r10 = int.d(arg4.d)

if (arg3.d f< 0f)
    r9 -= 1

uint128_t zmm7 = zx.o(0)
int32_t rcx = int.d(zmm9.d)

if (arg4.d f< 0f)
    r10 -= 1

if (zmm9.d f< 0f)
    rcx -= 1

uint128_t result
uint128_t zmm4
uint128_t zmm5

if (rdx == 0)
    zmm6.d = arg3.d f- _mm_cvtepi32_ps(zx.o(r9)).d
    zmm7.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(rcx)).d
    zmm8.d = arg4.d f- _mm_cvtepi32_ps(zx.o(r10)).d
else if (rdx == 1)
    result.d = float.s(r9)
    zmm4.d = arg3.d f- result.d
    result.d = zmm4.d f+ zmm4.d
    zmm4.d = zmm4.d f* zmm4.d
    zmm6.d = 3f f- result.d
    result.d = float.s(r10)
    zmm6.d = zmm6.d f* zmm4.d
    zmm5.d = arg4.d f- result.d
    result.d = zmm5.d f+ zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm8.d = 3f f- result.d
    result.d = float.s(rcx)
    zmm8.d = zmm8.d f* zmm5.d
    zmm9.d = zmm9.d f- result.d
    result.d = zmm9.d f+ zmm9.d
    zmm9.d = zmm9.d f* zmm9.d
    zmm7.d = 3f f- result.d
    zmm7.d = zmm7.d f* zmm9.d
else if (rdx == 2)
    result.d = float.s(r9)
    zmm4.d = arg3.d f- result.d
    result.d = float.s(r10)
    zmm5.d = arg4.d f- result.d
    zmm6.d = zmm4.d f* 6f
    result.d = float.s(rcx)
    zmm6.d = zmm6.d f- 15f
    zmm8.d = zmm5.d f* 6f
    zmm9.d = zmm9.d f- result.d
    zmm8.d = zmm8.d f- 15f
    zmm6.d = zmm6.d f* zmm4.d
    zmm7.d = zmm9.d f* 6f
    zmm8.d = zmm8.d f* zmm5.d
    zmm6.d = zmm6.d f+ 10f
    zmm7.d = zmm7.d f- 15f
    zmm8.d = zmm8.d f+ 10f
    zmm6.d = zmm6.d f* zmm4.d
    zmm7.d = zmm7.d f* zmm9.d
    zmm8.d = zmm8.d f* zmm5.d
    zmm7.d = zmm7.d f+ 10f
    zmm4.d = zmm4.d f* zmm4.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm6.d = zmm6.d f* zmm4.d
    zmm7.d = zmm7.d f* zmm9.d
    zmm9.d = zmm9.d f* zmm9.d
    zmm8.d = zmm8.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm9.d

uint32_t rdi = zx.d(r9.b)
uint32_t rsi = zx.d(r9.b + 1)
uint32_t r10_1 = zx.d(r10.b)
uint32_t r9_1 = zx.d(r10.b + 1)
uint32_t r8_1 = zx.d(*(zx.q(zx.d(rcx.b) + r8) + arg1))
uint32_t rdx_2 = zx.d(*(zx.q(r10_1 + r8_1) + arg1))
result = *(&data_142dfce50 + (zx.q(*(zx.q(rdi + rdx_2) + arg1)) << 2))
uint32_t r11_1 = zx.d(*(zx.q(r9_1 + r8_1) + arg1))
zmm5.d = (*(&data_142dfce50 + (zx.q(*(zx.q(rsi + rdx_2) + arg1)) << 2))).d f- result.d
zmm5.d = zmm5.d f* zmm6.d
arg4 = *(&data_142dfce50 + (zx.q(*(zx.q(r11_1 + rdi) + arg1)) << 2))
zmm5.d = zmm5.d f+ result.d
uint32_t r8_2 = zx.d(*(zx.q(zx.d(rcx.b + 1) + r8) + arg1))
uint32_t rdx_3 = zx.d(*(zx.q(r10_1 + r8_2) + arg1))
result = *(&data_142dfce50 + (zx.q(*(zx.q(rdx_3 + rdi) + arg1)) << 2))
uint32_t rdx_4 = zx.d(*(zx.q(r9_1 + r8_2) + arg1))
zmm4.d = (*(&data_142dfce50 + (zx.q(*(zx.q(rsi + rdx_3) + arg1)) << 2))).d f- result.d
zmm4.d = zmm4.d f* zmm6.d
uint128_t zmm1 = *(&data_142dfce50 + (zx.q(*(zx.q(rdi + rdx_4) + arg1)) << 2))
zmm4.d = zmm4.d f+ result.d
arg3.d = (*(&data_142dfce50 + (zx.q(*(zx.q(rsi + r11_1) + arg1)) << 2))).d f- arg4.d
result.d = (*(&data_142dfce50 + (zx.q(*(zx.q(rsi + rdx_4) + arg1)) << 2))).d f- zmm1.d
arg3.d = arg3.d f* zmm6.d
arg3.d = arg3.d f+ arg4.d
result.d = result.d f* zmm6.d
result.d = result.d f+ zmm1.d
arg3.d = arg3.d f- zmm5.d
result.d = result.d f- zmm4.d
arg3.d = arg3.d f* zmm8.d
result.d = result.d f* zmm8.d
arg3.d = arg3.d f+ zmm5.d
result.d = result.d f+ zmm4.d
result.d = result.d f- arg3.d
result.d = result.d f* zmm7.d
result.d = result.d f+ arg3.d
return result
