// 函数: sub_1411ca920
// 地址: 0x1411ca920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t var_e4
__builtin_memset(&var_e4, 0, 0x43)
int128_t var_140
__builtin_memset(&var_140, 0, 0x30)
int128_t var_f8 = zx.o(0)
int16_t var_a0 = 0
sub_140fdc870(arg2, &var_140)
void* rcx_1 = arg1[1]
int64_t var_110 = data_14395da00
int64_t var_108 = data_14395da18
int64_t var_100 = data_1439b5400
var_140.q = data_1439c9210
int64_t rax_6 = 0

if (rcx_1 != 0)
    int64_t rdx_1 = sx.q(*(rcx_1 + 0x10c))
    int64_t* rbx_1 = *(arg1[2] + 0x10)
    int64_t rax_8 = rbx_1[3]
    
    if (*(rax_8 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_8 = rbx_1[3]
    
    rax_6 = *(rax_8 + (rdx_1 << 3))

void* rcx_3 = arg1[3]
var_140:8.q = rax_6
int64_t rax_9 = 0

if (rcx_3 != 0)
    int64_t rdx_2 = sx.q(*(rcx_3 + 0x10c))
    int64_t* rdi_2 = *(arg1[4] + 0x10)
    int64_t rax_11 = rdi_2[3]
    
    if (*(rax_11 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_2.d)
        rax_11 = rdi_2[3]
    
    rax_9 = *(rax_11 + (rdx_2 << 3))

int128_t var_120
var_120.q = rax_9
int32_t var_e8 = 0
sub_1419870b0(arg2, &var_140, 2)
void* rax_12 = arg1[3]
int64_t r8 = 0

if (rax_12 != 0)
    int64_t rdx_4 = sx.q(*(rax_12 + 0x10c))
    int64_t* rdi_3 = *(arg1[4] + 0x10)
    int64_t rax_14 = rdi_3[3]
    
    if (*(rax_14 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rdi_3, rdx_4.d)
        rax_14 = rdi_3[3]
    
    r8 = *(rax_14 + (rdx_4 << 3))

int64_t result
void* r9_1
int512_t zmm2
int512_t zmm3
uint128_t zmm6
result, r9_1, zmm2, zmm3, zmm6 = sub_1411c09e0(arg2, &arg1[3], r8, *arg1)
void* rbx_2 = arg1[5]
void* r14_5 = (sx.q(arg1[6].d) << 4) + rbx_2

if (rbx_2 != r14_5)
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    
    do
        zmm7 = zx.o(*(rbx_2 + 8))
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        zmm8 = zx.o(*(rbx_2 + 4))
        zmm9 = zx.o(*rbx_2)
        zmm6 = _mm_cvtepi32_ps(zx.o(*(rbx_2 + 0xc)))
        void* rax_15 = &rcx_10[5]
        zmm7 = _mm_cvtepi32_ps(zmm7)
        zmm8 = _mm_cvtepi32_ps(zmm8)
        zmm9 = _mm_cvtepi32_ps(zmm9)
        
        if (rax_15 u> *(arg2 + 0x38))
            r9_1, zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_10[5]
        
        *(arg2 + 0x30) = rax_15
        *(arg2 + 0x14) += 1
        int32_t var_160_1 = 1
        int32_t var_168_1 = 1
        **(arg2 + 8) = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        rcx_10[2].d = zmm9.d
        *(rcx_10 + 0x14) = zmm8.d
        *(rcx_10 + 0x1c) = zmm7.d
        rcx_10[4].d = zmm6.d
        rcx_10[1] = 0
        *rcx_10 = &data_142d54998
        rcx_10[3].d = 0
        *(rcx_10 + 0x24) = 0x3f800000
        int32_t rdx_6 = arg1[7].d
        int32_t rcx_15 = arg1[8].d - rdx_6
        uint128_t zmm0_1 = zx.o(*(arg1 + 0x3c))
        int64_t var_150 = arg1[1]
        int64_t var_148_1 = arg1[2]
        int32_t rax_21 = *(arg1 + 0x44) - *(arg1 + 0x3c)
        int32_t var_154_1 = rax_21
        zmm3.o = zx.o(rcx_15)
        zmm2.o = zx.o(rax_21)
        int64_t* var_170_1 = &var_150
        int64_t rax_22 = arg1[9]
        zmm2.o = _mm_cvtepi32_ps(zmm2.o)
        zmm3.o = _mm_cvtepi32_ps(zmm3.o)
        int32_t var_188_1 = zmm2.d
        int32_t var_1a8_1 = zmm2.d
        zmm2.o = zx.o(0)
        result, r9_1, zmm2, zmm3 = sub_1413993b0(arg2, zx.o(0), zmm2, r9_1, zmm3, var_1a8_1, 
            _mm_cvtepi32_ps(zx.o(rdx_6)).d, _mm_cvtepi32_ps(zmm0_1).d, zmm3.d, var_188_1, rcx_15.q, 
            rax_22, var_170_1, var_168_1, var_160_1)
        rbx_2 += 0x10
    while (rbx_2 != r14_5)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
