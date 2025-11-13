// 函数: sub_141348530
// 地址: 0x141348530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(arg1[0x31].d)
uint128_t zmm8 = zx.o(*(arg1 + 0x184))
void* rax_2 = &rdx_2[5]
uint128_t zmm9 = zx.o(arg1[0x30].d)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x18c)))
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
void* rcx_2 = *arg1
int64_t var_f8 = arg1[0x2e]
int64_t var_f0 = data_14395da18
int64_t var_e8 = data_14395d9e8
var_128.q = data_1439c9228
int64_t rax_9 = 0

if (rcx_2 != 0)
    int64_t rdx_6 = sx.q(*(rcx_2 + 0x10c))
    int64_t* r14_1 = *(arg1[1] + 0x10)
    int64_t rax_11 = r14_1[3]
    
    if (*(rax_11 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(r14_1, rdx_6.d)
        rax_11 = r14_1[3]
    
    rax_9 = *(rax_11 + (rdx_6 << 3))

void* rcx_4 = arg1[2]
var_128:8.q = rax_9
int64_t rax_12 = 0

if (rcx_4 != 0)
    int64_t rdx_7 = sx.q(*(rcx_4 + 0x10c))
    int64_t* r15_2 = *(arg1[3] + 0x10)
    int64_t rax_14 = r15_2[3]
    
    if (*(rax_14 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(r15_2, rdx_7.d)
        rax_14 = r15_2[3]
    
    rax_12 = *(rax_14 + (rdx_7 << 3))

int128_t var_108
var_108.q = rax_12
int32_t var_d0 = 0
sub_1419870b0(arg2, &var_128, 2)
void* rax_15 = *arg1
int64_t r8 = 0

if (rax_15 != 0)
    int64_t rdx_9 = sx.q(*(rax_15 + 0x10c))
    int64_t* r15_3 = *(arg1[1] + 0x10)
    int64_t rax_17 = r15_3[3]
    
    if (*(rax_17 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(r15_3, rdx_9.d)
        rax_17 = r15_3[3]
    
    r8 = *(rax_17 + (rdx_9 << 3))

sub_141340050(arg2, arg1, r8, &arg1[4])
void* rax_18 = arg1[2]
int64_t r8_1 = 0

if (rax_18 != 0)
    int64_t rdx_11 = sx.q(*(rax_18 + 0x10c))
    int64_t* r15_4 = *(arg1[3] + 0x10)
    int64_t rax_20 = r15_4[3]
    
    if (*(rax_20 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(r15_4, rdx_11.d)
        rax_20 = r15_4[3]
    
    r8_1 = *(rax_20 + (rdx_11 << 3))

sub_14133fa90(arg2, &arg1[2], r8_1, &arg1[0x2c])
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_21 = &rcx_13[5]

if (rax_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_13[5]

*(arg2 + 0x30) = rax_21
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_13
*(arg2 + 8) = &rcx_13[1]
rcx_13[1] = 0
*rcx_13 = &data_142d56618
rcx_13[2].d = 0
rcx_13[3] = 0
rcx_13[4].d = 0
void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t temp0_4
int32_t temp1
temp0_4:temp1 = sx.q(*(arg1 + 0x194) * arg1[0x32].d + 3)
void* rdx_15 = &rcx_19[4]

if (rdx_15 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rdx_15 = &rcx_19[4]

*(arg2 + 0x30) = rdx_15
void**** rax_28 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_28 = rcx_19
*(arg2 + 8) = &rcx_19[1]
rcx_19[1] = 0
*rcx_19 = &data_142d54988
rcx_19[2].d = 0
*(rcx_19 + 0x14) = 2
rcx_19[3].d = ((temp0_4 & 3) + temp1) s>> 2
__security_check_cookie(rax_1 ^ &var_148)
return &data_142d54988
