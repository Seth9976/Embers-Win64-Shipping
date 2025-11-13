// 函数: sub_1423ff8d0
// 地址: 0x1423ff8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rax_2 = sub_142006940()
int64_t r8 = *rax_2
(*(r8 + 0x98))(rax_2, arg2, r8)
int64_t* rcx_1 = arg1[2].q
int64_t* rax_4 = (*(*rcx_1 + 8))(rcx_1)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_2 = *rax_4
int64_t var_1a8 = rcx_2
int32_t var_d0 = 0
int32_t var_cc
__builtin_memset(&var_cc, 0xff, 0x14)
int128_t var_b8 = zmm1
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x1a)
int64_t var_1a0 = 0
int32_t var_198 = 0xffffffff
int16_t var_194 = 0x500
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x11)
int32_t var_d4 = 0
int16_t var_90
var_90:1.b = *(rcx_2 + 0x38) u> 1
void var_190
memset(&var_190, 0, 0xa8)
sub_1410e0180(arg2, &var_1a8)
int64_t rsi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_5 = rsi_2 + 0x2e

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rsi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_5 = rsi_2 + 0x2e

wchar16 const* const rcx_6 = u"Canvas_GameThreadFlush"
*(arg2 + 0x30) = rax_5
wchar16 const i

do
    i = *rcx_6
    *(rcx_6 + rsi_2 - u"Canvas_GameThreadFlush") = i
    rcx_6 = &rcx_6[1]
while (i != 0)
void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_9[0x27]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_9[0x27]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_9
*(arg2 + 8) = &rcx_9[1]
sub_1405d11b0(rcx_9, &var_1a8, rsi_2)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_1a8)
int64_t var_98
*(arg2 + 0x178) = var_98:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int128_t zmm1_1 = arg1[1]
int128_t var_1c8 = *arg1
int32_t rax_11
int32_t rcx_15
int32_t rdx_7
int32_t r8_2

if (*(arg1 + 0x28) == 0)
    int32_t r14_1 = zmm1_1:8.d
    int32_t rsi_5 = zmm1_1:0xc.d
    int32_t r12_1 = zmm1_1.d
    int32_t r15_1 = zmm1_1:4.d
    
    if ((r14_1 - r12_1) * (rsi_5 - r15_1) s> 0)
        void*** rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rcx_21[5]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_21[5]
        
        *(arg2 + 0x30) = rax_14
        int64_t* rax_15 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_15 = rcx_21
        *(arg2 + 8) = &rcx_21[1]
        rcx_21[1] = 0
        *rcx_21 = &data_142f18bc8
        rcx_21[2].b = 1
        *(rcx_21 + 0x14) = r12_1
        rcx_21[3].d = r15_1
        *(rcx_21 + 0x1c) = r14_1
        rcx_21[4].d = rsi_5
    
    rax_11 = var_1c8.d
    rcx_15 = var_1c8:4.d
    rdx_7 = var_1c8:8.d
    r8_2 = var_1c8:0xc.d
else
    int64_t* rcx_14 = arg1[2].q
    (*(*rcx_14 + 0x18))(rcx_14, &var_1c8)
    rdx_7 = var_1c8.d
    rax_11 = 0
    r8_2 = var_1c8:4.d
    rcx_15 = 0

void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(r8_2))
void* rax_17 = &rcx_27[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rdx_7))
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(rcx_15))
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rax_11))

if (rax_17 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_27[5]

*(arg2 + 0x30) = rax_17
void** rax_18 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_18 = rcx_27
*(arg2 + 8) = &rcx_27[1]
rcx_27[1] = 0
*rcx_27 = &data_142d54998
rcx_27[2].d = zmm9.d
*(rcx_27 + 0x14) = zmm8.d
*(rcx_27 + 0x1c) = zmm7.d
rcx_27[4].d = zmm6.d
rcx_27[3].d = 0
*(rcx_27 + 0x24) = 0x3f800000
int64_t var_a0
int64_t result = sub_1405d1550(&var_a0)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
