// 函数: sub_14144b500
// 地址: 0x14144b500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = *(arg2 + 0x270) - *(arg2 + 0x268)
int32_t r8 = *(data_143ed6a88 + 4)
int32_t rax_1 = 1
int32_t rcx = *(arg2 + 0x274)
int64_t rbp = data_143ed6978

if (r8 s>= 1)
    rax_1 = r8

int32_t rax_2 = 1
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_1))

if (r9_1 s>= 1)
    rax_2 = r9_1

int32_t rcx_1 = rcx - *(arg2 + 0x26c)
int32_t rax_3 = 1
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_2))

if (rcx_1 s>= 1)
    rax_3 = rcx_1

float zmm3 = 1f f/ zmm0.d
void* rax_4 = data_143ed6b98
zmm0 = _mm_cvtepi32_ps(zx.o(rax_3))
int32_t rcx_2 = *(rax_4 + 4)
float zmm5 = zmm3 f* zmm1.d
float zmm4 = 1f f/ zmm0.d
int32_t rdx = *(data_143ed6ca8 + 4)
int32_t rax_6 = 1

if (rcx_2 s>= 1)
    rax_6 = rcx_2

float var_28 = zmm5
float zmm2 = zmm4 f* zmm1.d
int32_t rax_7 = 1
zmm1 = _mm_cvtepi32_ps(zx.o(rax_6))

if (rdx s>= 1)
    rax_7 = rdx

int32_t rbx = 0
int32_t rsi = 0
float var_24 = zmm2
void* rax_8 = data_143ed6dc8
zmm1.d = zmm1.d f* zmm3
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_7)).d f* zmm4
zmm1.d = zmm1.d f+ zmm5
zmm0.d = zmm0.d f+ zmm2
int32_t var_20 = zmm1.d
int32_t var_1c = zmm0.d
int32_t rcx_3 = *(rax_8 + 4)

if (rcx_3 s>= 0)
    rsi = rcx_3

int64_t rcx_4

if (data_143de5480 == 0)
    rcx_4 = 0
else
    rcx_4.b = GetCurrentThreadId() != data_143de5470

if (*(rbp + (rcx_4 << 2)) != 0)
    rbx = rsi

int32_t var_18 = rbx
int32_t rax_10 = sub_141455800()
int64_t* rcx_5 = data_143f0f180
int32_t var_14 = rax_10
void* arg_8
(*(*rcx_5 + 0xf8))(rcx_5, &arg_8, &var_28, &data_143ed6e00, 1, 1)
void* rax_12 = arg_8
*arg1 = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

sub_1405d1550(&arg_8)
return arg1
