// 函数: sub_1408a89c0
// 地址: 0x1408a89c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4 = (zx.o(0)).d
int32_t rcx = *(arg1 + 0x408)
int32_t r8 = int.d(arg3.d)
int32_t zmm5 = (zx.o(0)).d
int32_t r9 = int.d(arg4.d)

if (arg3.d f< 0f)
    r8 -= 1

if (arg4.d f< 0f)
    r9 -= 1

uint128_t result

if (rcx == 0)
    zmm4 = arg3.d f- _mm_cvtepi32_ps(zx.o(r8)).d
    zmm5 = arg4.d f- _mm_cvtepi32_ps(zx.o(r9)).d
else
    uint128_t zmm6
    uint128_t zmm7
    
    if (rcx == 1)
        result.d = float.s(r8)
        zmm6.d = arg3.d f- result.d
        result.d = zmm6.d f+ zmm6.d
        zmm6.d = zmm6.d f* zmm6.d
        zmm4 = 3f f- result.d
        result.d = float.s(r9)
        zmm4 = zmm4 f* zmm6.d
        zmm7.d = arg4.d f- result.d
        result.d = zmm7.d f+ zmm7.d
        zmm7.d = zmm7.d f* zmm7.d
        zmm5 = (3f f- result.d) f* zmm7.d
    else if (rcx == 2)
        result.d = float.s(r8)
        zmm6.d = arg3.d f- result.d
        result.d = float.s(r9)
        zmm7.d = arg4.d f- result.d
        zmm4 = ((zmm6.d f* 6f f- 15f) f* zmm6.d f+ 10f) f* zmm6.d
        zmm6.d = zmm6.d f* zmm6.d
        zmm5 = ((zmm7.d f* 6f f- 15f) f* zmm7.d f+ 10f) f* zmm7.d
        zmm7.d = zmm7.d f* zmm7.d
        zmm4 = zmm4 f* zmm6.d
        zmm5 = zmm5 f* zmm7.d

uint32_t r10 = zx.d(arg2)
uint32_t r9_1 = zx.d(r8.b)
uint32_t r8_1 = zx.d(r8.b + 1)
uint32_t rdx = zx.d(*(zx.q(zx.d(r9.b) + r10) + arg1))
result = *(&data_142dfce50 + (zx.q(*(zx.q(r9_1 + rdx) + arg1)) << 2))
arg3.d = (*(&data_142dfce50 + (zx.q(*(zx.q(rdx + r8_1) + arg1)) << 2))).d f- result.d
uint32_t rdx_1 = zx.d(*(zx.q(zx.d(r9.b + 1) + r10) + arg1))
arg3.d = arg3.d f* zmm4
arg3.d = arg3.d f+ result.d
uint128_t zmm1 = *(&data_142dfce50 + (zx.q(*(zx.q(r9_1 + rdx_1) + arg1)) << 2))
result.d = (*(&data_142dfce50 + (zx.q(*(zx.q(rdx_1 + r8_1) + arg1)) << 2))).d f- zmm1.d
result.d = result.d f* zmm4
result.d = result.d f+ zmm1.d
result.d = result.d f- arg3.d
result.d = result.d f* zmm5
result.d = result.d f+ arg3.d
return result
