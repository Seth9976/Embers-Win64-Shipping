// 函数: sub_141337280
// 地址: 0x141337280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg3 + 8)
int32_t rbx = (*arg4).d
int64_t rdx = zmm1.q
uint128_t var_68 = *(arg4 + 8)
int64_t r8 = _mm_bsrli_si128(zmm1, 8).q
uint32_t rcx_1 = (r8 u>> 0x20).d
uint32_t rax_3 = (rdx u>> 0x20).d
uint32_t rsi_1 = rcx_1 - rax_3
uint32_t arg_14 = rsi_1
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rcx_1))
void* rax_4 = &rcx_4[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(r8.d))
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(rax_3))
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rdx.d))

if (rax_4 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_4[5]

*(arg1 + 0x30) = rax_4
void** rax_5 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_5 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d54998
rcx_4[2].d = zmm9.d
*(rcx_4 + 0x14) = zmm8.d
*(rcx_4 + 0x1c) = zmm7.d
rcx_4[4].d = zmm6.d
rcx_4[3].d = 0
*(rcx_4 + 0x24) = 0x3f800000
sub_141461130(arg1, arg5)
uint128_t zmm8_1 = sub_1413474a0(arg7)
int64_t rax_7 = data_143dbb180
int32_t r11 = 1
int64_t* rax_8 = (r8.d - rdx.d).q
void* r9_1

if ((1 & arg6) == 0)
    rsi_1 = rax_7:4.d
    r9_1 = zx.q(rax_8:4.d)
else
    r9_1 = zx.q(neg.d(rsi_1))
    r11 = 0

char r10

if ((arg6 & 2) == 0)
    r10 = 0
else
    r10 = *(arg2 + 0x5159)

int32_t r8_1 = var_68:4.d
int32_t rdx_3 = var_68.d
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(r8_1))
int32_t rcx_15 = *(arg2 + 0xad0)
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(var_68:8.d - rdx_3))
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rdx_3))
uint128_t zmm7_1 = _mm_cvtepi32_ps(zx.o(var_68:0xc.d - r8_1))
uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(r9_1.d))
float temp0_10[0x4] = _mm_cvtepi32_ps(zx.o(rax_8.d))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rsi_1))
return sub_141399210(arg1, _mm_cvtepi32_ps(zx.o(rax_7.d)), zmm2, r9_1, temp0_10, zmm8_1, zmm6_1.d, 
    zmm5.d, zmm4.d, zmm0_1.d, zmm7_1.d, rax_8.d, rbx, arg5, rcx_15, r10, r11)
