// 函数: sub_1408b1820
// 地址: 0x1408b1820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*arg2)
uint128_t zmm7 = zx.o(0)
uint128_t zmm8 = zx.o(0)
uint128_t zmm9 = *arg3
uint128_t zmm10 = *(arg3 + 4)
uint128_t zmm0
zmm0.d = zmm9.d f+ zmm9.d
zmm0.d = zmm0.d f- 0.5f
int32_t r11_1 = int.d(zmm0.d) s>> 1
zmm0.d = zmm10.d f+ zmm10.d
zmm0.d = zmm0.d f- 0.5f
int32_t r8_1 = int.d(zmm0.d) s>> 1
uint128_t zmm1

if (rcx == 0)
    zmm7.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(r11_1)).d
    zmm8.d = zmm10.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
else if (rcx == 1)
    zmm0.d = float.s(r11_1)
    zmm1.d = zmm9.d f- zmm0.d
    zmm0.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm7.d = 3f f- zmm0.d
    zmm0.d = float.s(r8_1)
    zmm7.d = zmm7.d f* zmm1.d
    zmm1.d = zmm10.d f- zmm0.d
    zmm0.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm8.d = 3f f- zmm0.d
    zmm8.d = zmm8.d f* zmm1.d
else if (rcx == 2)
    zmm0.d = float.s(r11_1)
    zmm1.d = zmm9.d f- zmm0.d
    zmm0.d = float.s(r8_1)
    zmm7.d = zmm1.d f* 6f
    zmm7.d = zmm7.d f- 15f
    zmm7.d = zmm7.d f* zmm1.d
    zmm7.d = zmm7.d f+ 10f
    zmm7.d = zmm7.d f* zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm7.d = zmm7.d f* zmm1.d
    zmm1.d = zmm10.d f- zmm0.d
    zmm8.d = zmm1.d f* 6f
    zmm8.d = zmm8.d f- 15f
    zmm8.d = zmm8.d f* zmm1.d
    zmm8.d = zmm8.d f+ 10f
    zmm8.d = zmm8.d f* zmm1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm8.d = zmm8.d f* zmm1.d

int32_t r10_1 = *arg1
int32_t rdx = r8_1 * 0x7a69
int32_t r9_1 = (r11_1 + 1) * 0x653
int32_t rcx_4 = r10_1 ^ r9_1 ^ rdx
int32_t r8_2 = r11_1 * 0x653
zmm10.d = zmm10.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
float zmm5 = zmm10.d - 1f
zmm9.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(r11_1)).d
uint128_t zmm6
zmm6.d = zmm9.d f- 1f
int64_t rcx_5 = sx.q(rcx_4 * rcx_4 * rcx_4 * 0xec4d)
uint64_t rax_7 = (zx.q((rcx_5 s>> 0xd).d) ^ zx.q(rcx_5.d)) & 7
int32_t rcx_8 = r8_2 ^ r10_1 ^ rdx
int32_t rdx_1 = (r8_1 + 1) * 0x7a69
int64_t rcx_9 = sx.q(rcx_8 * rcx_8 * rcx_8 * 0xec4d)
uint64_t rax_15 = (zx.q((rcx_9 s>> 0xd).d) ^ zx.q(rcx_9.d)) & 7
int32_t rcx_12 = rdx_1 ^ r10_1 ^ r9_1
int32_t rdx_3 = rdx_1 ^ r8_2 ^ r10_1
zmm1.d = (*((rax_15 << 3) + 0x143980ba4)).d f* zmm10.d
zmm0.d = (*(&data_143980ba0 + (rax_15 << 3))).d f* zmm9.d
zmm1.d = zmm1.d f+ zmm0.d
int64_t rcx_13 = sx.q(rcx_12 * rcx_12 * rcx_12 * 0xec4d)
uint64_t rax_23 = (zx.q((rcx_13 s>> 0xd).d) ^ zx.q(rcx_13.d)) & 7
float zmm4 = (*(&data_143980ba0 + (rax_7 << 3)) f* zmm6.d
    + *((rax_7 << 3) + 0x143980ba4) f* zmm10.d f- zmm1.d) f* zmm7.d f+ zmm1.d
int64_t rcx_14 = sx.q(rdx_3 * rdx_3 * rdx_3 * 0xec4d)
uint64_t rax_31 = (zx.q((rcx_14 s>> 0xd).d) ^ zx.q(rcx_14.d)) & 7
zmm1.d = (*((rax_31 << 3) + 0x143980ba4)).d f* zmm5
uint128_t result
result.d = (*((rax_23 << 3) + 0x143980ba4)).d f* zmm5
zmm0.d = (*(&data_143980ba0 + (rax_31 << 3))).d f* zmm9.d
zmm1.d = zmm1.d f+ zmm0.d
result.d = result.d f+ *(&data_143980ba0 + (rax_23 << 3)) f* zmm6.d
result.d = result.d f- zmm1.d
result.d = result.d f* zmm7.d
result.d = result.d f+ zmm1.d
result.d = result.d f- zmm4
result.d = result.d f* zmm8.d
result.d = result.d f+ zmm4
return result
