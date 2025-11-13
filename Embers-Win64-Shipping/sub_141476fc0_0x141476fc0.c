// 函数: sub_141476fc0
// 地址: 0x141476fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2 = arg1[1]
void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(*(rax_2 + 0x15a0))
uint128_t zmm8 = zx.o(*(rax_2 + 0x159c))
uint128_t zmm9 = zx.o(*(rax_2 + 0x1598))
void* rax_3 = &rdx_2[5]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_2 + 0x15a4)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_3 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rdx_2[5]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rdx_2
*(arg2 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_142d54998
rdx_2[2].d = zmm9.d
*(rdx_2 + 0x14) = zmm8.d
*(rdx_2 + 0x1c) = zmm7.d
rdx_2[4].d = zmm6.d
rdx_2[3].d = 0
*(rdx_2 + 0x24) = 0x3f800000
int128_t var_128
__builtin_memset(&var_128, 0, 0x30)
int64_t var_cc
__builtin_memset(&var_cc, 0, 0x43)
int128_t var_e0 = zx.o(0)
int16_t var_88 = 0
int32_t rcx_2 = sub_140fdc870(arg2, &var_128)
int64_t var_f8 = data_1439b5250
int64_t var_e8 = data_14395d9e8
int64_t var_f0 = data_14395da18
int32_t var_d0 = sbb.d(rcx_2, rcx_2, data_143f0f1bc != 0) & 5
void* rcx_5 = arg1[8]
var_128.q = data_1439c9228
int64_t rax_11 = 0

if (rcx_5 != 0)
    int64_t rdx_6 = sx.q(*(rcx_5 + 0x10c))
    int64_t* rsi_1 = *(arg1[9] + 0x10)
    int64_t rax_13 = rsi_1[3]
    
    if (*(rax_13 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rsi_1, rdx_6.d)
        rax_13 = rsi_1[3]
    
    rax_11 = *(rax_13 + (rdx_6 << 3))

void* rcx_7 = arg1[0xa]
var_128:8.q = rax_11
int64_t rax_14 = 0

if (rcx_7 != 0)
    int64_t rdx_7 = sx.q(*(rcx_7 + 0x10c))
    int64_t* r15_2 = *(arg1[0xb] + 0x10)
    int64_t rax_16 = r15_2[3]
    
    if (*(rax_16 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(r15_2, rdx_7.d)
        rax_16 = r15_2[3]
    
    rax_14 = *(rax_16 + (rdx_7 << 3))

int128_t var_108
var_108.q = rax_14
sub_1419870b0(arg2, &var_128, 2)
void* rax_17 = arg1[8]
int64_t r8 = 0

if (rax_17 != 0)
    int64_t rdx_9 = sx.q(*(rax_17 + 0x10c))
    int64_t* r15_3 = *(arg1[9] + 0x10)
    int64_t rax_19 = r15_3[3]
    
    if (*(rax_19 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(r15_3, rdx_9.d)
        rax_19 = r15_3[3]
    
    r8 = *(rax_19 + (rdx_9 << 3))

sub_141474440(arg2, &arg1[8], r8, *arg1)
void* rax_20 = arg1[0xa]
int64_t r8_1 = 0

if (rax_20 != 0)
    int64_t rdx_11 = sx.q(*(rax_20 + 0x10c))
    int64_t* r15_4 = *(arg1[0xb] + 0x10)
    int64_t rax_22 = r15_4[3]
    
    if (*(rax_22 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(r15_4, rdx_11.d)
        rax_22 = r15_4[3]
    
    r8_1 = *(rax_22 + (rdx_11 << 3))

sub_141473300(arg2, &arg1[0xa], r8_1, *arg1 + 0x10)
int64_t rsi_2 = *(*(*arg1 + 0x100) + 0x10)
void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_17[4]

if (rax_24 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_17[4]

*(arg2 + 0x30) = rax_24
int64_t* rax_25 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_25 = rcx_17
*(arg2 + 8) = &rcx_17[1]
rcx_17[1] = 0
*rcx_17 = &data_142f284e8
rcx_17[2] = rsi_2
rcx_17[3].d = 0
__security_check_cookie(rax_1 ^ &var_148)
return &data_142f284e8
