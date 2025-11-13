// 函数: sub_141301420
// 地址: 0x141301420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint128_t zmm7 = zx.o(arg1[5].d)
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
void* rax_2 = &rcx_2[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_2 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_2[5]

*(arg2 + 0x30) = rax_2
void** rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142d54998
*(rcx_2 + 0x1c) = zmm7.d
rcx_2[4].d = zmm6.d
rcx_2[2] = 0
rcx_2[3].d = 0
*(rcx_2 + 0x24) = 0x3f800000
int128_t var_108
__builtin_memset(&var_108, 0, 0x30)
int64_t var_ac
__builtin_memset(&var_ac, 0, 0x43)
int128_t var_c0 = zx.o(0)
int16_t var_68 = 0
int32_t rcx_7 = sub_140fdc870(arg2, &var_108)
int64_t var_c8 = data_14395d9e8
int64_t var_d8 = data_1439b54a0
int64_t var_d0 = data_14395da18
var_108.q = data_1439c9228
int64_t rax_10 = 0
int32_t var_b0 = sbb.d(rcx_7, rcx_7, data_143f0f1bc != 0) & 5
void* rcx_10 = arg1[1]

if (rcx_10 != 0)
    int64_t rdx_1 = sx.q(*(rcx_10 + 0x10c))
    int64_t* r14_1 = *(arg1[2] + 0x10)
    int64_t rax_12 = r14_1[3]
    
    if (*(rax_12 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(r14_1, rdx_1.d)
        rax_12 = r14_1[3]
    
    rax_10 = *(rax_12 + (rdx_1 << 3))

void* rcx_12 = arg1[3]
var_108:8.q = rax_10
int64_t rax_13 = 0

if (rcx_12 != 0)
    int64_t rdx_2 = sx.q(*(rcx_12 + 0x10c))
    int64_t* r15_2 = *(arg1[4] + 0x10)
    int64_t rax_15 = r15_2[3]
    
    if (*(rax_15 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(r15_2, rdx_2.d)
        rax_15 = r15_2[3]
    
    rax_13 = *(rax_15 + (rdx_2 << 3))

int128_t var_e8
var_e8.q = rax_13
sub_1419870b0(arg2, &var_108, 2)
void* rax_16 = arg1[1]
int64_t r8 = 0

if (rax_16 != 0)
    int64_t rdx_4 = sx.q(*(rax_16 + 0x10c))
    int64_t* r15_3 = *(arg1[2] + 0x10)
    int64_t rax_18 = r15_3[3]
    
    if (*(rax_18 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(r15_3, rdx_4.d)
        rax_18 = r15_3[3]
    
    r8 = *(rax_18 + (rdx_4 << 3))

sub_1412f6000(arg2, &arg1[1], r8, *arg1)
void* rax_19 = arg1[3]
int64_t r8_1 = 0

if (rax_19 != 0)
    int64_t rdx_6 = sx.q(*(rax_19 + 0x10c))
    int64_t* r15_4 = *(arg1[4] + 0x10)
    int64_t rax_21 = r15_4[3]
    
    if (*(rax_21 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(r15_4, rdx_6.d)
        rax_21 = r15_4[3]
    
    r8_1 = *(rax_21 + (rdx_6 << 3))

sub_1412f5a40(arg2, &arg1[3], r8_1, *arg1)
void*** rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_21[5]

if (rax_22 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_21[5]

*(arg2 + 0x30) = rax_22
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_21
*(arg2 + 8) = &rcx_21[1]
rcx_21[2].d = 0
rcx_21[3] = 0
rcx_21[4].d = 0
rcx_21[1] = 0
*rcx_21 = &data_142d56618
int64_t r14_2 = *(*(*arg1 + 0x50) + 0x10)
int64_t* rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void** const result

if (data_143f0f1bc == 0)
    uint64_t rax_29 = zx.q(arg1[6].d)
    int64_t r15_5 = data_1439b6778
    void* rax_30 = &rcx_28[5]
    
    if (rax_30 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_30 = &rcx_28[5]
    
    *(arg2 + 0x30) = rax_30
    int64_t** rax_31 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_31 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    result = &data_142f21880
    rcx_28[2] = r15_5
    rcx_28[3] = r14_2
    rcx_28[4].d = (rax_29 * 5).d << 2
else
    void* rax_26 = &rcx_28[4]
    int32_t rsi_2 = arg1[6].d << 4
    
    if (rax_26 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x28)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_26 = &rcx_28[4]
    
    *(arg2 + 0x30) = rax_26
    int64_t** rax_27 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_27 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    result = &data_142f284e8
    rcx_28[2] = r14_2
    rcx_28[3].d = rsi_2

*rcx_28 = result
__security_check_cookie(rax_1 ^ &var_128)
return result
