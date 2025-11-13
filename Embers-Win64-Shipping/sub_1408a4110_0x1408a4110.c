// 函数: sub_1408a4110
// 地址: 0x1408a4110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = zx.d(arg2)
int32_t r11 = int.d(arg3.d)
int32_t r14 = int.d(arg4.d)

if (arg3.d f< 0f)
    r11 -= 1

uint32_t rdi = zx.d(r11.b)

if (arg4.d f< 0f)
    r14 -= 1

uint32_t rsi = zx.d(r11.b + 1)
uint128_t result = _mm_cvtepi32_ps(zx.o(r11))
uint32_t r10 = zx.d(*(zx.q(zx.d(r14.b + 2) + rbp) + arg1))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(r14))
uint64_t r9 = zx.q(*(zx.q(rsi + r10) + arg1))
uint64_t rdx = zx.q(*(zx.q(rdi + r10) + arg1))
uint32_t rbx = zx.d(r11.b - 1)
uint128_t result_1
result_1.d = arg3.d f- result.d
arg4.d = arg4.d f- zmm1.d
uint64_t r8 = zx.q(*(zx.q(rbx + r10) + arg1))
uint32_t r11_1 = zx.d(r11.b + 2)
int32_t arg_18 = result_1.d
int32_t arg_20 = arg4.d
zmm1.d = (*(&data_142dfce50 + (r8 << 2))).d f- *(&data_142dfce50 + (rdx << 2))
result.d = (*(&data_142dfce50 + (zx.q(*(zx.q(r11_1 + r10) + arg1)) << 2))).d f-
    *(&data_142dfce50 + (r9 << 2))
result.d = result.d f- zmm1.d
uint32_t r10_1 = zx.d(*(zx.q(zx.d(r14.b + 1) + rbp) + arg1))
float var_e8 = result.d
int128_t zmm15 = *(&data_142dfce50 + (zx.q(*(zx.q(r10_1 + rsi) + arg1)) << 2))
int128_t zmm13 = *(&data_142dfce50 + (zx.q(*(zx.q(r10_1 + rdi) + arg1)) << 2))
uint128_t zmm11 = *(&data_142dfce50 + (zx.q(*(zx.q(r10_1 + rbx) + arg1)) << 2))
result.d = zmm11.d f- zmm13.d
uint128_t zmm9
zmm9.d = (*(&data_142dfce50 + (zx.q(*(zx.q(r10_1 + r11_1) + arg1)) << 2))).d f- zmm15.d
int32_t arg_10 = result.d
uint32_t r10_2 = zx.d(*(zx.q(zx.d(r14.b) + rbp) + arg1))
zmm9.d = zmm9.d f- result.d
zmm15.d = zmm15.d f- zmm11.d
arg4.d = result_1.d f* result_1.d
int128_t zmm12 = *(&data_142dfce50 + (zx.q(*(zx.q(rsi + r10_2) + arg1)) << 2))
result_1.d = arg4.d f* arg_18
zmm15.d = zmm15.d f* arg_18
int128_t zmm10 = *(&data_142dfce50 + (zx.q(*(zx.q(rdi + r10_2) + arg1)) << 2))
zmm15.d = zmm15.d f+ zmm13.d
uint128_t zmm7 = *(&data_142dfce50 + (zx.q(*(zx.q(rbx + r10_2) + arg1)) << 2))
result.d = zmm7.d f- zmm10.d
float zmm5 = *(&data_142dfce50 + (zx.q(*(zx.q(r11_1 + r10_2) + arg1)) << 2)) f- zmm12.d
int32_t arg_8 = result.d
zmm12.d = zmm12.d f- zmm7.d
zmm7 = arg_18
zmm5 = zmm5 f- result.d
uint32_t r10_3 = zx.d(*(zx.q(zx.d(r14.b - 1) + rbp) + arg1))
result.d = arg_10.d f- zmm9.d
zmm12.d = zmm12.d f* zmm7.d
zmm12.d = zmm12.d f+ zmm10.d
result.d = result.d f* arg4.d
int128_t zmm8 = *(&data_142dfce50 + (zx.q(*(zx.q(rsi + r10_3) + arg1)) << 2))
arg_10 = result.d
result.d = result_1.d f* zmm9.d
int128_t zmm6 = *(&data_142dfce50 + (zx.q(*(zx.q(rdi + r10_3) + arg1)) << 2))
zmm9.d = arg_10.d f+ result.d
result.d = result_1.d f* zmm5
arg3 = *(&data_142dfce50 + (zx.q(*(zx.q(rbx + r10_3) + arg1)) << 2))
uint128_t zmm14
zmm14.d = arg3.d f- zmm6.d
zmm11.d = zmm9.d f+ zmm15.d
zmm9.d = arg_8.d f- zmm5
zmm5 = zmm1.d - var_e8
zmm1.d = (*(&data_142dfce50 + (zx.q(*(zx.q(r11_1 + r10_3) + arg1)) << 2))).d f- zmm8.d
zmm8.d = zmm8.d f- arg3.d
zmm9.d = zmm9.d f* arg4.d
zmm1.d = zmm1.d f- zmm14.d
zmm8.d = zmm8.d f* zmm7.d
zmm9.d = zmm9.d f+ result.d
result = result_1
result_1.d = result_1.d f* var_e8
zmm14.d = zmm14.d f- zmm1.d
result.d = result.d f* zmm1.d
zmm8.d = zmm8.d f+ zmm6.d
zmm9.d = zmm9.d f+ zmm12.d
zmm5 = zmm5 f* arg4.d f+ result_1.d
zmm14.d = zmm14.d f* arg4.d
zmm14.d = zmm14.d f+ result.d
zmm14.d = zmm14.d f+ zmm8.d
arg3.d = zmm14.d f- zmm9.d
arg4 = arg_20
result.d = (*(&data_142dfce50 + (r9 << 2))).d f- *(&data_142dfce50 + (r8 << 2))
result.d = result.d f* zmm7.d
zmm1.d = arg4.d f* arg4.d
result.d = result.d f+ *(&data_142dfce50 + (rdx << 2))
zmm5 = zmm5 f+ result.d
result.d = zmm1.d f* arg4.d
zmm5 = zmm5 f- zmm11.d
zmm11.d = zmm11.d f- zmm14.d
zmm5 = zmm5 f- arg3.d
zmm11.d = zmm11.d f* arg4.d
result.d = result.d f* zmm5
zmm11.d = zmm11.d f+ zmm9.d
arg3.d = arg3.d f- zmm5
arg3.d = arg3.d f* zmm1.d
result.d = result.d f+ arg3.d
result.d = result.d f+ zmm11.d
result.d = result.d f* 0.444444448f
return result
