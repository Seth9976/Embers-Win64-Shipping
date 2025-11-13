// 函数: sub_1413383a0
// 地址: 0x1413383a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg3 + 8)
int32_t rbx = (*arg4).d
int64_t rdx = zmm1.q
uint128_t var_78 = *(arg4 + 8)
uint128_t zmm8
uint128_t var_58 = zmm8
int64_t r8 = _mm_bsrli_si128(zmm1, 8).q
uint32_t rcx_1 = (r8 u>> 0x20).d
uint32_t rax_3 = (rdx u>> 0x20).d
uint32_t rbp_1 = rcx_1 - rax_3
uint32_t arg_14 = rbp_1
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rcx_1))
void* rax_4 = &rcx_4[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(r8.d))
zmm8 = _mm_cvtepi32_ps(zx.o(rax_3))
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
int64_t r8_1 = 0
int64_t* rdx_2 = arg7[1]
void* rax_7 = *rdx_2

if (rax_7 != 0)
    int64_t rcx_9 = sx.q(*(rax_7 + 0x10c))
    int64_t* rsi_1 = *(rdx_2[1] + 0x10)
    int64_t rax_9 = rsi_1[3]
    
    if (*(rax_9 + (rcx_9 << 3)) == 0)
        sub_1419ccf30(rsi_1, rcx_9.d)
        rax_9 = rsi_1[3]
        rdx_2 = arg7[1]
    
    r8_1 = *(rax_9 + (rcx_9 << 3))

sub_14133ef10(*arg7, rdx_2, r8_1, arg7[2])
void** rax_10 = data_143dbb180
int32_t r11 = 1
int64_t* rax_11 = (r8.d - rdx.d).q
void* r9_2

if ((1 & arg6) == 0)
    rbp_1 = rax_10:4.d
    r9_2 = zx.q(rax_11:4.d)
else
    r9_2 = zx.q(neg.d(rbp_1))
    r11 = 0

char r10

if ((arg6 & 2) == 0)
    r10 = 0
else
    r10 = *(arg2 + 0x5159)

int32_t r8_2 = var_78:4.d
int32_t rdx_4 = var_78.d
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(r8_2))
int32_t rcx_17 = *(arg2 + 0xad0)
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(var_78:8.d - rdx_4))
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rdx_4))
zmm7 = _mm_cvtepi32_ps(zx.o(var_78:0xc.d - r8_2))
uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(r9_2.d))
float temp0_10[0x4] = _mm_cvtepi32_ps(zx.o(rax_11.d))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rbp_1))
return sub_141399210(arg1, _mm_cvtepi32_ps(zx.o(rax_10.d)), zmm2, r9_2, temp0_10, var_58, zmm6_1.d, 
    zmm5.d, zmm4.d, zmm0_1.d, zmm7.d, rax_11.d, rbx, arg5, rcx_17, r10, r11)
