// 函数: sub_14117dcb0
// 地址: 0x14117dcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(*(arg1 + 0x278))
void* rax_2 = &rdx_2[5]
uint128_t zmm8 = zx.o(*(arg1 + 0x274))
uint128_t zmm9 = zx.o(*(arg1 + 0x270))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x27c)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_2 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rdx_2[5]

*(arg2 + 0x30) = rax_2
void**** rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rdx_2
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
sub_140fdc870(arg2, &var_128)
void* rcx_2 = *(arg1 + 0x250)
int64_t var_f8 = data_14395da00
int64_t var_f0 = data_1439b5548
int64_t var_e8 = data_1439b5400
var_128.q = data_1439c9228
int64_t rax_9 = 0

if (rcx_2 != 0)
    int64_t rdx_6 = sx.q(*(rcx_2 + 0x10c))
    int64_t* r14_1 = *(*(arg1 + 0x258) + 0x10)
    int64_t rax_11 = r14_1[3]
    
    if (*(rax_11 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(r14_1, rdx_6.d)
        rax_11 = r14_1[3]
    
    rax_9 = *(rax_11 + (rdx_6 << 3))

void* rcx_4 = *(arg1 + 0x260)
var_128:8.q = rax_9
int64_t rax_12 = 0

if (rcx_4 != 0)
    int64_t rdx_7 = sx.q(*(rcx_4 + 0x10c))
    int64_t* r15_2 = *(*(arg1 + 0x268) + 0x10)
    int64_t rax_14 = r15_2[3]
    
    if (*(rax_14 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(r15_2, rdx_7.d)
        rax_14 = r15_2[3]
    
    rax_12 = *(rax_14 + (rdx_7 << 3))

int128_t var_108
var_108.q = rax_12
int32_t var_d0 = *(arg1 + 0x294)
sub_1419870b0(arg2, &var_128, 2)
void* rax_16 = *(arg1 + 0x250)
int64_t r8 = 0

if (rax_16 != 0)
    int64_t rdx_9 = sx.q(*(rax_16 + 0x10c))
    int64_t* r15_3 = *(*(arg1 + 0x258) + 0x10)
    int64_t rax_18 = r15_3[3]
    
    if (*(rax_18 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(r15_3, rdx_9.d)
        rax_18 = r15_3[3]
    
    r8 = *(rax_18 + (rdx_9 << 3))

sub_14116a0a0(arg2, arg1 + 0x250, r8, arg1 + 0x10)
void* rax_19 = *(arg1 + 0x260)
int64_t r8_1 = 0

if (rax_19 != 0)
    int64_t rdx_11 = sx.q(*(rax_19 + 0x10c))
    int64_t* r15_4 = *(*(arg1 + 0x268) + 0x10)
    int64_t rax_21 = r15_4[3]
    
    if (*(rax_21 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(r15_4, rdx_11.d)
        rax_21 = r15_4[3]
    
    r8_1 = *(rax_21 + (rdx_11 << 3))

sub_141169ae0(arg2, arg1 + 0x260, r8_1, arg1 + 0x130)
int32_t rsi_1 = *(arg1 + 0x290)
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_13[4]

if (rax_22 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_13[4]

*(arg2 + 0x30) = rax_22
int64_t* rax_23 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_23 = rcx_13
*(arg2 + 8) = &rcx_13[1]
rcx_13[1] = 0
*rcx_13 = &data_142d54988
rcx_13[2].d = 0
*(rcx_13 + 0x14) = rsi_1
rcx_13[3].d = 1
__security_check_cookie(rax_1 ^ &var_148)
return &data_142d54988
