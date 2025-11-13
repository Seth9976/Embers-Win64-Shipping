// 函数: sub_1411c94f0
// 地址: 0x1411c94f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t* r8 = *arg1
int32_t var_118 = *r8
int32_t var_114 = r8[1]
int64_t var_110 = *(r8 + 8)
int128_t var_108
__builtin_memset(&var_108, 0, 0x30)
int64_t var_ac
__builtin_memset(&var_ac, 0, 0x43)
int128_t var_c0 = zx.o(0)
int16_t var_68 = 0
sub_140fdc870(arg2, &var_108)
void* rcx_1 = arg1[1]
int64_t var_d8 = data_14395da00
int64_t var_d0 = data_14395da18
int64_t var_c8 = data_14395d9e8
var_108.q = data_1439c9210
int64_t rax_9 = 0

if (rcx_1 != 0)
    int64_t rdx_1 = sx.q(*(rcx_1 + 0x10c))
    int64_t* rbx_1 = *(arg1[2] + 0x10)
    int64_t rax_11 = rbx_1[3]
    
    if (*(rax_11 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_11 = rbx_1[3]
    
    rax_9 = *(rax_11 + (rdx_1 << 3))

void* rcx_3 = arg1[3]
var_108:8.q = rax_9
int64_t rax_12 = 0

if (rcx_3 != 0)
    int64_t rdx_2 = sx.q(*(rcx_3 + 0x10c))
    int64_t* rsi_2 = *(arg1[4] + 0x10)
    int64_t rax_14 = rsi_2[3]
    
    if (*(rax_14 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_2.d)
        rax_14 = rsi_2[3]
    
    rax_12 = *(rax_14 + (rdx_2 << 3))

int128_t var_e8
var_e8.q = rax_12
int32_t var_b0 = 0
sub_1419870b0(arg2, &var_108, 2)
void* rax_15 = arg1[1]
int64_t r8_1 = 0

if (rax_15 != 0)
    int64_t rdx_4 = sx.q(*(rax_15 + 0x10c))
    int64_t* rsi_3 = *(arg1[2] + 0x10)
    int64_t rax_17 = rsi_3[3]
    
    if (*(rax_17 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rsi_3, rdx_4.d)
        rax_17 = rsi_3[3]
    
    r8_1 = *(rax_17 + (rdx_4 << 3))

sub_1411be780(arg2, &arg1[1], r8_1, &var_118)
void* rax_18 = arg1[3]
int64_t r8_2 = 0

if (rax_18 != 0)
    int64_t rdx_6 = sx.q(*(rax_18 + 0x10c))
    int64_t* rsi_4 = *(arg1[4] + 0x10)
    int64_t rax_20 = rsi_4[3]
    
    if (*(rax_20 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rsi_4, rdx_6.d)
        rax_20 = rsi_4[3]
    
    r8_2 = *(rax_20 + (rdx_6 << 3))

sub_1411be1c0(arg2, &arg1[3], r8_2, *arg1)
uint128_t zmm7 = zx.o(arg1[5].d)
void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
void* rax_21 = &rcx_12[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_21 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_12[5]

*(arg2 + 0x30) = rax_21
void**** rax_22 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_22 = rcx_12
*(arg2 + 8) = &rcx_12[1]
*(rcx_12 + 0x1c) = zmm7.d
rcx_12[4].d = zmm6.d
rcx_12[1] = 0
*rcx_12 = &data_142d54998
rcx_12[2] = 0
rcx_12[3].d = 0
*(rcx_12 + 0x24) = 0x3f800000
void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_18[5]

if (rax_24 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_18[5]

*(arg2 + 0x30) = rax_24
int64_t* rax_25 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_25 = rcx_18
*(arg2 + 8) = &rcx_18[1]
rcx_18[1] = 0
*rcx_18 = &data_142d56618
rcx_18[2].d = 0
rcx_18[3] = 0
rcx_18[4].d = 0
void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_27 = &rcx_24[4]

if (rax_27 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_24[4]

*(arg2 + 0x30) = rax_27
int64_t* rax_28 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_28 = rcx_24
*(arg2 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142d54988
rcx_24[2].d = 0
*(rcx_24 + 0x14) = 1
rcx_24[3].d = 1
__security_check_cookie(rax_1 ^ &var_138)
return &data_142d54988
