// 函数: sub_1408b3d60
// 地址: 0x1408b3d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *arg3
int32_t zmm4 = (zx.o(0)).d
uint32_t rcx = zx.d(*arg2)
uint128_t result
result.d = zmm6.d f+ zmm6.d
uint128_t zmm7 = *(arg3 + 4)
int32_t zmm5 = (zx.o(0)).d
result.d = result.d f- 0.5f
int32_t r9 = int.d(result.d)
result.d = zmm7.d f+ zmm7.d
int32_t r9_1 = r9 s>> 1
result.d = result.d f- 0.5f
int32_t r8_1 = int.d(result.d) s>> 1

if (rcx == 0)
    zmm4 = zmm6.d f- _mm_cvtepi32_ps(zx.o(r9_1)).d
    zmm5 = zmm7.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
else if (rcx == 1)
    result.d = float.s(r9_1)
    zmm6.d = zmm6.d f- result.d
    result.d = zmm6.d f+ zmm6.d
    zmm6.d = zmm6.d f* zmm6.d
    zmm4 = 3f f- result.d
    result.d = float.s(r8_1)
    zmm4 = zmm4 f* zmm6.d
    zmm7.d = zmm7.d f- result.d
    result.d = zmm7.d f+ zmm7.d
    zmm7.d = zmm7.d f* zmm7.d
    zmm5 = (3f f- result.d) f* zmm7.d
else if (rcx == 2)
    result.d = float.s(r9_1)
    zmm6.d = zmm6.d f- result.d
    result.d = float.s(r8_1)
    zmm7.d = zmm7.d f- result.d
    zmm4 = ((zmm6.d f* 6f f- 15f) f* zmm6.d f+ 10f) f* zmm6.d
    zmm6.d = zmm6.d f* zmm6.d
    zmm5 = ((zmm7.d f* 6f f- 15f) f* zmm7.d f+ 10f) f* zmm7.d
    zmm7.d = zmm7.d f* zmm7.d
    zmm4 = zmm4 f* zmm6.d
    zmm5 = zmm5 f* zmm7.d

int32_t r11_1 = *arg1
int32_t r10 = r9_1 * 0x653
int32_t r8_2 = r8_1 * 0x7a69
int32_t rcx_4 = r10 ^ r11_1 ^ r8_2
int32_t rdx_2 = (r10 + 0x653) ^ r11_1 ^ r8_2
result.d = _mm_cvtepi32_ps(zx.o(rcx_4 * rcx_4 * rcx_4 * 0xec4d)).d f* 4.65661287e-10f
int32_t rcx_7 = (r8_2 + 0x7a69) ^ r10 ^ r11_1
int32_t rdx_5 = (r8_2 + 0x7a69) ^ (r10 + 0x653) ^ r11_1
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(rdx_2 * rdx_2 * rdx_2 * 0xec4d)).d f* 4.65661287e-10f
zmm3.d = zmm3.d f- result.d
zmm3.d = zmm3.d f* zmm4
zmm3.d = zmm3.d f+ result.d
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rcx_7 * rcx_7 * rcx_7 * 0xec4d)).d f* 4.65661287e-10f
result.d = _mm_cvtepi32_ps(zx.o(rdx_5 * rdx_5 * rdx_5 * 0xec4d)).d f* 4.65661287e-10f
result.d = result.d f- zmm1.d
result.d = result.d f* zmm4
result.d = result.d f+ zmm1.d
result.d = result.d f- zmm3.d
result.d = result.d f* zmm5
result.d = result.d f+ zmm3.d
return result
