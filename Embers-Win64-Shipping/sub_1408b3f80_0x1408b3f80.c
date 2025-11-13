// 函数: sub_1408b3f80
// 地址: 0x1408b3f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = *arg3
uint128_t zmm5 = *(arg3 + 4)
uint128_t result
result.d = zmm4.d f+ zmm4.d
uint32_t rcx = zx.d(*arg2)
uint128_t zmm6 = *(arg3 + 8)
uint128_t zmm7 = zx.o(0)
result.d = result.d f- 0.5f
uint128_t zmm8 = zx.o(0)
uint128_t zmm9 = zx.o(0)
int32_t r9 = int.d(result.d)
result.d = zmm5.d f+ zmm5.d
int32_t r9_1 = r9 s>> 1
result.d = result.d f- 0.5f
int32_t r10 = int.d(result.d)
result.d = zmm6.d f+ zmm6.d
int32_t r10_1 = r10 s>> 1
result.d = result.d f- 0.5f
int32_t r8_1 = int.d(result.d) s>> 1

if (rcx == 0)
    zmm7.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(r9_1)).d
    zmm8.d = zmm6.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
    zmm9.d = zmm5.d f- _mm_cvtepi32_ps(zx.o(r10_1)).d
else if (rcx == 1)
    result.d = float.s(r9_1)
    zmm4.d = zmm4.d f- result.d
    result.d = zmm4.d f+ zmm4.d
    zmm4.d = zmm4.d f* zmm4.d
    zmm7.d = 3f f- result.d
    result.d = float.s(r10_1)
    zmm7.d = zmm7.d f* zmm4.d
    zmm5.d = zmm5.d f- result.d
    result.d = zmm5.d f+ zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm9.d = 3f f- result.d
    result.d = float.s(r8_1)
    zmm9.d = zmm9.d f* zmm5.d
    zmm6.d = zmm6.d f- result.d
    result.d = zmm6.d f+ zmm6.d
    zmm6.d = zmm6.d f* zmm6.d
    zmm8.d = 3f f- result.d
    zmm8.d = zmm8.d f* zmm6.d
else if (rcx == 2)
    result.d = float.s(r9_1)
    zmm4.d = zmm4.d f- result.d
    result.d = float.s(r10_1)
    zmm5.d = zmm5.d f- result.d
    zmm7.d = zmm4.d f* 6f
    result.d = float.s(r8_1)
    zmm7.d = zmm7.d f- 15f
    zmm9.d = zmm5.d f* 6f
    zmm6.d = zmm6.d f- result.d
    zmm9.d = zmm9.d f- 15f
    zmm7.d = zmm7.d f* zmm4.d
    zmm8.d = zmm6.d f* 6f
    zmm9.d = zmm9.d f* zmm5.d
    zmm7.d = zmm7.d f+ 10f
    zmm8.d = zmm8.d f- 15f
    zmm9.d = zmm9.d f+ 10f
    zmm7.d = zmm7.d f* zmm4.d
    zmm8.d = zmm8.d f* zmm6.d
    zmm9.d = zmm9.d f* zmm5.d
    zmm8.d = zmm8.d f+ 10f
    zmm4.d = zmm4.d f* zmm4.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm4.d
    zmm8.d = zmm8.d f* zmm6.d
    zmm6.d = zmm6.d f* zmm6.d
    zmm9.d = zmm9.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm6.d

int32_t rsi = *arg1
int32_t rdi = r9_1 * 0x653
int32_t r8_2 = r8_1 * 0x1b3b
int32_t r10_2 = r10_1 * 0x7a69
int32_t rcx_3 = r8_2 ^ r10_2
int32_t rdx_2 = (rdi + 0x653) ^ rcx_3 ^ rsi
int32_t rcx_5 = rcx_3 ^ rdi ^ rsi
int32_t rcx_7 = (r10_2 + 0x7a69) ^ r8_2
int32_t rcx_9 = rcx_7 ^ rdi ^ rsi
int32_t r11_3 = rcx_7 ^ (rdi + 0x653) ^ rsi
result.d = _mm_cvtepi32_ps(zx.o(rcx_5 * rcx_5 * rcx_5 * 0xec4d)).d f* 4.65661287e-10f
zmm5.d = _mm_cvtepi32_ps(zx.o(rdx_2 * rdx_2 * rdx_2 * 0xec4d)).d f* 4.65661287e-10f
zmm5.d = zmm5.d f- result.d
zmm5.d = zmm5.d f* zmm7.d
int32_t rax_13 = (r8_2 + 0x1b3b) ^ r10_2
zmm5.d = zmm5.d f+ result.d
int32_t rcx_12 = rdi ^ rsi ^ rax_13
int32_t rdx_5 = (rdi + 0x653) ^ rsi ^ rax_13
int32_t r8_4 = (r8_2 + 0x1b3b) ^ (r10_2 + 0x7a69)
zmm4.d = _mm_cvtepi32_ps(zx.o(rcx_9 * rcx_9 * rcx_9 * 0xec4d)).d f* 4.65661287e-10f
int32_t r8_6 = r8_4 ^ rdi ^ rsi
int32_t rcx_15 = r8_4 ^ (rdi + 0x653) ^ rsi
result.d = _mm_cvtepi32_ps(zx.o(rcx_12 * rcx_12 * rcx_12 * 0xec4d)).d f* 4.65661287e-10f
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(rdx_5 * rdx_5 * rdx_5 * 0xec4d)).d f* 4.65661287e-10f
zmm3.d = zmm3.d f- result.d
zmm3.d = zmm3.d f* zmm7.d
zmm3.d = zmm3.d f+ result.d
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(r8_6 * r8_6 * r8_6 * 0xec4d)).d f* 4.65661287e-10f
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(r11_3 * r11_3 * r11_3 * 0xec4d)).d f* 4.65661287e-10f
zmm2.d = zmm2.d f- zmm4.d
zmm2.d = zmm2.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm4.d
zmm2.d = zmm2.d f- zmm5.d
zmm2.d = zmm2.d f* zmm9.d
result.d = _mm_cvtepi32_ps(zx.o(rcx_15 * rcx_15 * rcx_15 * 0xec4d)).d f* 4.65661287e-10f
zmm2.d = zmm2.d f+ zmm5.d
result.d = result.d f- zmm1.d
result.d = result.d f* zmm7.d
result.d = result.d f+ zmm1.d
result.d = result.d f- zmm3.d
result.d = result.d f* zmm9.d
result.d = result.d f+ zmm3.d
result.d = result.d f- zmm2.d
result.d = result.d f* zmm8.d
result.d = result.d f+ zmm2.d
return result
