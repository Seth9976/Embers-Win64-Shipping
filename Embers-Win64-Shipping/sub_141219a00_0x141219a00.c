// 函数: sub_141219a00
// 地址: 0x141219a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
void* var_2d0
sub_1419a2ec0(*(arg1[1] + 0x5150), &var_2d0, &data_143ed5e80, 0)
void* rax_2 = arg1[1]
void* rdi = var_2d0
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(*(rax_2 + 0x15a0))
uint128_t zmm8 = zx.o(*(rax_2 + 0x159c))
uint128_t zmm9 = zx.o(*(rax_2 + 0x1598))
void* rax_3 = &rcx_4[5]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_2 + 0x15a4)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_3 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[5]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d54998
rcx_4[2].d = zmm9.d
*(rcx_4 + 0x14) = zmm8.d
*(rcx_4 + 0x1c) = zmm7.d
rcx_4[4].d = zmm6.d
rcx_4[3].d = 0
*(rcx_4 + 0x24) = 0
int128_t var_2b0
__builtin_memset(&var_2b0, 0, 0x30)
int64_t var_254
__builtin_memset(&var_254, 0, 0x43)
int128_t var_268 = zx.o(0)
int16_t var_210 = 0
sub_140fdc870(arg2, &var_2b0)
int64_t var_280 = data_1439b58a8
int64_t var_278 = data_14395da18
int64_t var_270 = data_14395d9e8
var_2b0.q = data_1439c9210
int64_t rax_10 = 0
void* var_2c8

if (rdi != 0)
    int64_t rdx_2 = sx.q(*(rdi + 0x10c))
    int64_t* rbx_1 = *(var_2c8 + 0x10)
    int64_t rax_11 = rbx_1[3]
    
    if (*(rax_11 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_11 = rbx_1[3]
    
    rax_10 = *(rax_11 + (rdx_2 << 3))

var_2b0:8.q = rax_10
int64_t rcx_10 = 0
void* rax_12 = arg1[2]

if (rax_12 != 0)
    int64_t rdx_3 = sx.q(*(rax_12 + 0x10c))
    int64_t* rbx_2 = *(arg1[3] + 0x10)
    int64_t rax_14 = rbx_2[3]
    
    if (*(rax_14 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_3.d)
        rax_14 = rbx_2[3]
    
    rcx_10 = *(rax_14 + (rdx_3 << 3))

int128_t var_290
var_290.q = rcx_10
int32_t var_258 = 0
int64_t r8 = sub_1419870b0(arg2, &var_2b0, 2)
void* rcx_13 = arg1[1]
void* i_1 = *(rcx_13 + 0x13e0)
void* i = rcx_13 + 0x1320

if (i_1 != 0)
    i = i_1

int64_t result = sx.q(*(rcx_13 + 0x13e8))

for (void* r12 = i + result * 0x18; i != r12; i += 0x18)
    int64_t* rcx_15 = *arg1
    int64_t var_208 = *rcx_15
    int64_t var_200_1 = rcx_15[1]
    int64_t var_1f8_1 = rcx_15[2]
    int64_t var_1f0_1 = rcx_15[3]
    uint128_t var_1e8 = *(rcx_15 + 0x20)
    uint128_t var_1d8_1 = *(rcx_15 + 0x30)
    uint128_t var_1c8_1 = *(rcx_15 + 0x40)
    uint128_t var_1b8_1 = *(rcx_15 + 0x50)
    uint128_t var_1a8_1 = *(rcx_15 + 0x60)
    uint128_t var_198_1 = *(rcx_15 + 0x70)
    uint128_t var_188_1 = *(rcx_15 + 0x80)
    uint128_t var_178_1 = *(rcx_15 + 0x90)
    uint128_t var_168_1 = *(rcx_15 + 0xa0)
    uint128_t var_158_1 = *(rcx_15 + 0xb0)
    uint128_t var_148_1 = *(rcx_15 + 0xc0)
    uint128_t var_138_1 = *(rcx_15 + 0xd0)
    void* rax_19 = rcx_15[0x1c]
    void* var_128 = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    uint128_t var_118_1 = *(rcx_15 + 0xf0)
    uint128_t var_108_1 = *(rcx_15 + 0x100)
    uint128_t var_f8_1 = *(rcx_15 + 0x110)
    uint128_t var_e8_1 = *(rcx_15 + 0x120)
    uint128_t var_d8_1 = *(rcx_15 + 0x130)
    uint128_t var_c8_1 = *(rcx_15 + 0x140)
    uint128_t var_b8_1 = *(rcx_15 + 0x150)
    uint128_t zmm1_1 = *(rcx_15 + 0x160)
    uint128_t var_a8_1 = zmm1_1
    uint128_t zmm0_1 = *(rcx_15 + 0x170)
    uint128_t var_98_1 = zmm0_1
    sub_1410b78a0(i, &var_1e8, r8, zmm0_1, zmm1_1)
    void* rax_20 = arg1[2]
    int64_t r8_1 = 0
    
    if (rax_20 != 0)
        int64_t rdx_6 = sx.q(*(rax_20 + 0x10c))
        int64_t* rbx_3 = *(arg1[3] + 0x10)
        int64_t rax_22 = rbx_3[3]
        
        if (*(rax_22 + (rdx_6 << 3)) == 0)
            sub_1419ccf30(rbx_3, rdx_6.d)
            rax_22 = rbx_3[3]
        
        r8_1 = *(rax_22 + (rdx_6 << 3))
    
    sub_1412160d0(arg2, &arg1[2], r8_1, &var_208)
    void* var_2c0 = rdi
    void* var_2b8_1 = var_2c8
    int64_t* rax_24 = sub_14139bef0(arg2)
    void* r9_2 = arg1[1]
    int32_t var_2f8_1 = 1
    char var_300_1 = 0
    int32_t rax_25 = (*(rax_24 + 0x37c)).d
    int32_t rcx_21 = *(r9_2 + 0x15a4) - *(r9_2 + 0x159c)
    int32_t r8_2 = *(r9_2 + 0x1598)
    uint128_t zmm0_2 = zx.o(*(r9_2 + 0x159c))
    int32_t rdx_9 = *(r9_2 + 0x15a0) - r8_2
    int32_t var_2e4_1 = rcx_21
    int32_t rcx_22 = *(r9_2 + 0xad0)
    void** var_310_1 = &var_2c0
    uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rcx_21))
    float var_328_1 = zmm2_1.d
    float temp0_5[0x4] = _mm_cvtepi32_ps(zx.o(rdx_9))
    zmm8 = sub_141399210(arg2, zx.o(0), zx.o(0), r9_2, temp0_5, zmm8, zmm2_1.d, 
        _mm_cvtepi32_ps(zx.o(r8_2)).d, _mm_cvtepi32_ps(zmm0_2).d, temp0_5[0], var_328_1, rdx_9, 
        rax_25, var_310_1, rcx_22, var_300_1, var_2f8_1)
    result, r8 = sub_1405d1550(&var_128)

__security_check_cookie(rax_1 ^ &var_368)
return result
