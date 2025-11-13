// 函数: sub_141445b50
// 地址: 0x141445b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
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
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_3[3]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_3[3]

*(arg2 + 0x30) = rax_6
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142f18bb8
rcx_3[2].d = 0x80
void* rdx_5 = arg1[1]
int64_t var_138 = arg1[4]
int64_t var_130 = arg1[5]
int128_t var_128
__builtin_memset(&var_128, 0, 0x30)
int64_t var_cc
__builtin_memset(&var_cc, 0, 0x43)
int128_t var_e0 = zx.o(0)
int16_t var_88 = 0
int32_t rcx_8 = sub_1419a3ed0(arg2, *(rdx_5 + 0x5150), &var_138, &var_128)
int64_t var_e8
int64_t rax_11 = var_e8

if (arg1[6].b != 0)
    rax_11 = data_1439b6880

int64_t var_e8_1 = rax_11
var_128.q = data_1439c9228
int64_t rax_14 = 0
int32_t var_d0 = sbb.d(rcx_8, rcx_8, data_143f0f1bc != 0) & 5
void* rcx_11 = arg1[2]

if (rcx_11 != 0)
    int64_t rdx_7 = sx.q(*(rcx_11 + 0x10c))
    int64_t* r14_1 = *(arg1[3] + 0x10)
    int64_t rax_16 = r14_1[3]
    
    if (*(rax_16 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(r14_1, rdx_7.d)
        rax_16 = r14_1[3]
    
    rax_14 = *(rax_16 + (rdx_7 << 3))

void* rcx_13 = arg1[4]
var_128:8.q = rax_14
int64_t rax_17 = 0

if (rcx_13 != 0)
    int64_t rdx_8 = sx.q(*(rcx_13 + 0x10c))
    int64_t* r14_2 = *(arg1[5] + 0x10)
    int64_t rax_19 = r14_2[3]
    
    if (*(rax_19 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(r14_2, rdx_8.d)
        rax_19 = r14_2[3]
    
    rax_17 = *(rax_19 + (rdx_8 << 3))

int128_t var_108
var_108.q = rax_17
sub_1419870b0(arg2, &var_128, 2)
void* rax_20 = arg1[2]
int64_t r8_1 = 0

if (rax_20 != 0)
    int64_t rdx_10 = sx.q(*(rax_20 + 0x10c))
    int64_t* r14_3 = *(arg1[3] + 0x10)
    int64_t rax_22 = r14_3[3]
    
    if (*(rax_22 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(r14_3, rdx_10.d)
        rax_22 = r14_3[3]
    
    r8_1 = *(rax_22 + (rdx_10 << 3))

sub_14143e7c0(arg2, &arg1[2], r8_1, *arg1)
void* rax_23 = arg1[4]
int64_t r8_2 = 0

if (rax_23 != 0)
    int64_t rdx_12 = sx.q(*(rax_23 + 0x10c))
    int64_t* r14_4 = *(arg1[5] + 0x10)
    int64_t rax_25 = r14_4[3]
    
    if (*(rax_25 + (rdx_12 << 3)) == 0)
        sub_1419ccf30(r14_4, rdx_12.d)
        rax_25 = r14_4[3]
    
    r8_2 = *(rax_25 + (rdx_12 << 3))

sub_14143dc40(arg2, &arg1[4], r8_2, *arg1)
int64_t rsi = *(*(*arg1 + 0x100) + 0x10)
void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_27 = &rcx_23[4]

if (rax_27 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_23[4]

*(arg2 + 0x30) = rax_27
int64_t* rax_28 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_28 = rcx_23
*(arg2 + 8) = &rcx_23[1]
rcx_23[1] = 0
*rcx_23 = &data_142f284e8
rcx_23[2] = rsi
rcx_23[3].d = 0
__security_check_cookie(rax_1 ^ &var_158)
return &data_142f284e8
