// 函数: sub_1408af2f0
// 地址: 0x1408af2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *arg2
uint128_t zmm3 = *(arg2 + 4)
int32_t r11 = *arg1
uint128_t result
result.d = zmm2.d f+ zmm2.d
result.d = result.d f- 0.5f
int32_t r8 = int.d(result.d)
result.d = zmm3.d f+ zmm3.d
int32_t r8_1 = r8 s>> 1
int32_t rsi = r8_1 * 0x653
result.d = result.d f- 0.5f
int32_t rax_1 = int.d(result.d) s>> 1
int32_t r10 = rax_1 * 0x7a69
zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
int32_t rcx_2 = (rsi + 0x653) ^ (r10 + 0xf4d2) ^ r11
int32_t r8_4 = (rsi - 0x653) ^ (r10 + 0xf4d2) ^ r11
int32_t r9_2 = (rsi + 0xca6) ^ (r10 + 0xf4d2) ^ r11
int32_t arg_10 = zmm2.d
int32_t rdx_2 = (r10 + 0xf4d2) ^ rsi ^ r11
zmm3.d = zmm3.d f- _mm_cvtepi32_ps(zx.o(rax_1)).d
int32_t var_d8 = zmm3.d
uint128_t zmm4
zmm4.d = _mm_cvtepi32_ps(zx.o(rcx_2 * rcx_2 * rcx_2 * 0xec4d)).d f* 4.65661287e-10f
int32_t var_e4 = zmm4.d
zmm2.d = _mm_cvtepi32_ps(zx.o(rdx_2 * rdx_2 * rdx_2 * 0xec4d)).d f* 4.65661287e-10f
int32_t var_dc = zmm2.d
result.d = _mm_cvtepi32_ps(zx.o(r8_4 * r8_4 * r8_4 * 0xec4d)).d f* 4.65661287e-10f
zmm3.d = result.d f- zmm2.d
int32_t var_e0 = result.d
int32_t var_e8 = zmm3.d
int32_t rcx_5 = (r10 + 0x7a69) ^ (rsi + 0x653) ^ r11
int32_t rdx_5 = (r10 + 0x7a69) ^ rsi ^ r11
int32_t r8_7 = (r10 + 0x7a69) ^ (rsi - 0x653) ^ r11
int32_t r9_5 = (r10 + 0x7a69) ^ (rsi + 0xca6) ^ r11
result.d = _mm_cvtepi32_ps(zx.o(r9_2 * r9_2 * r9_2 * 0xec4d)).d f* 4.65661287e-10f
int32_t rcx_8 = (rsi + 0x653) ^ r10 ^ r11
result.d = result.d f- zmm4.d
result.d = result.d f- zmm3.d
int32_t arg_20 = result.d
uint128_t zmm15
zmm15.d = _mm_cvtepi32_ps(zx.o(rcx_5 * rcx_5 * rcx_5 * 0xec4d)).d f* 4.65661287e-10f
int32_t rdx_8 = r10 ^ rsi ^ r11
uint128_t zmm13
zmm13.d = _mm_cvtepi32_ps(zx.o(rdx_5 * rdx_5 * rdx_5 * 0xec4d)).d f* 4.65661287e-10f
int32_t r8_10 = (rsi - 0x653) ^ r10 ^ r11
int32_t arg_18 = zmm13.d
uint128_t zmm12
zmm12.d = _mm_cvtepi32_ps(zx.o(r8_7 * r8_7 * r8_7 * 0xec4d)).d f* 4.65661287e-10f
int32_t r9_8 = (rsi + 0xca6) ^ r10 ^ r11
result.d = zmm12.d f- zmm13.d
int32_t arg_8 = result.d
uint128_t zmm11
zmm11.d = _mm_cvtepi32_ps(zx.o(r9_5 * r9_5 * r9_5 * 0xec4d)).d f* 4.65661287e-10f
zmm11.d = zmm11.d f- zmm15.d
zmm11.d = zmm11.d f- result.d
uint128_t zmm10
zmm10.d = _mm_cvtepi32_ps(zx.o(rcx_8 * rcx_8 * rcx_8 * 0xec4d)).d f* 4.65661287e-10f
uint128_t zmm9
zmm9.d = _mm_cvtepi32_ps(zx.o(rdx_8 * rdx_8 * rdx_8 * 0xec4d)).d f* 4.65661287e-10f
zmm13 = arg_10
zmm15.d = zmm15.d f- zmm12.d
zmm12 = arg_10
zmm15.d = zmm15.d f* zmm12.d
zmm15.d = zmm15.d f+ arg_18
uint128_t zmm7
zmm7.d = _mm_cvtepi32_ps(zx.o(r8_10 * r8_10 * r8_10 * 0xec4d)).d f* 4.65661287e-10f
uint128_t zmm14
zmm14.d = zmm7.d f- zmm9.d
int32_t rbx_2 = (rsi + 0x653) ^ r11 ^ (r10 - 0x7a69)
int32_t rbp_2 = (rsi + 0xca6) ^ r11 ^ (r10 - 0x7a69)
int32_t rsi_2 = rsi ^ r11 ^ (r10 - 0x7a69)
int32_t rdi_2 = (rsi - 0x653) ^ r11 ^ (r10 - 0x7a69)
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(r9_8 * r9_8 * r9_8 * 0xec4d)).d f* 4.65661287e-10f
zmm6.d = zmm6.d f- zmm10.d
zmm10.d = zmm10.d f- zmm7.d
zmm6.d = zmm6.d f- zmm14.d
zmm10.d = zmm10.d f* zmm12.d
zmm14.d = zmm14.d f- zmm6.d
zmm10.d = zmm10.d f+ zmm9.d
uint128_t zmm5
zmm5.d = _mm_cvtepi32_ps(zx.o(rbx_2 * rbx_2 * rbx_2 * 0xec4d)).d f* 4.65661287e-10f
zmm4.d = _mm_cvtepi32_ps(zx.o(rsi_2 * rsi_2 * rsi_2 * 0xec4d)).d f* 4.65661287e-10f
zmm3.d = _mm_cvtepi32_ps(zx.o(rdi_2 * rdi_2 * rdi_2 * 0xec4d)).d f* 4.65661287e-10f
uint128_t zmm8
zmm8.d = zmm3.d f- zmm4.d
result.d = _mm_cvtepi32_ps(zx.o(rbp_2 * rbp_2 * rbp_2 * 0xec4d)).d f* 4.65661287e-10f
uint128_t zmm1
zmm1.d = zmm13.d f* zmm13.d
result.d = result.d f- zmm5.d
zmm14.d = zmm14.d f* zmm1.d
zmm2.d = zmm1.d f* zmm13.d
result.d = result.d f- zmm8.d
zmm13.d = arg_8.d f- zmm11.d
zmm11.d = zmm11.d f* zmm2.d
zmm6.d = zmm6.d f* zmm2.d
zmm13.d = zmm13.d f* zmm1.d
zmm8.d = zmm8.d f- result.d
zmm14.d = zmm14.d f+ zmm6.d
zmm13.d = zmm13.d f+ zmm11.d
zmm14.d = zmm14.d f+ zmm10.d
zmm11.d = zmm13.d f+ zmm15.d
zmm5.d = zmm5.d f- zmm3.d
zmm8.d = zmm8.d f* zmm1.d
result.d = result.d f* zmm2.d
zmm2.d = zmm2.d f* arg_20
zmm8.d = zmm8.d f+ result.d
zmm5.d = zmm5.d f* zmm12.d
zmm5.d = zmm5.d f+ zmm4.d
zmm4.d = var_e8.d f- arg_20
zmm8.d = zmm8.d f+ zmm5.d
zmm4.d = zmm4.d f* zmm1.d
zmm1.d = var_e4.d f- var_e0
zmm4.d = zmm4.d f+ zmm2.d
zmm2 = var_d8
result.d = zmm8.d f- zmm14.d
zmm1.d = zmm1.d f* zmm12.d
zmm1.d = zmm1.d f+ var_dc
zmm4.d = zmm4.d f+ zmm1.d
zmm1.d = zmm2.d f* zmm2.d
zmm4.d = zmm4.d f- zmm11.d
zmm11.d = zmm11.d f- zmm8.d
zmm4.d = zmm4.d f- result.d
zmm11.d = zmm11.d f* zmm2.d
result.d = result.d f- zmm4.d
zmm11.d = zmm11.d f+ zmm14.d
result.d = result.d f* zmm1.d
zmm1.d = zmm1.d f* zmm2.d
zmm1.d = zmm1.d f* zmm4.d
result.d = result.d f+ zmm1.d
result.d = result.d f+ zmm11.d
result.d = result.d f* 0.444444448f
return result
