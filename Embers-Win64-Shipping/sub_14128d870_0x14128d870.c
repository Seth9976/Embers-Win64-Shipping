// 函数: sub_14128d870
// 地址: 0x14128d870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
void* r12 = *arg2
void* rax_2 = sub_14139ce70(arg1)
int64_t* rax_3 = sub_1413a8300(&arg1[6], arg2)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_1 = *rax_3
int64_t var_178 = rcx_1
int32_t var_a0 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int128_t var_88 = zmm1
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
int32_t var_168 = 0xffffffff
int16_t var_164 = 0x900
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
bool var_5f = *(rcx_1 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
void* r15 = arg2[8]
int64_t rbx_2 = (*(r15 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rbx_2 + 0x20

if (rax_4 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x22)
    rbx_2 = (*(r15 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rbx_2 + 0x20

wchar16 const* const rcx_4 = u"DistortionMerge"
*(r15 + 0x30) = rax_4
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rbx_2 - u"DistortionMerge") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[0x27]

if (rax_5 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x140)
    rcx_7 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[0x27]

*(r15 + 0x30) = rax_5
void**** rax_6 = *(r15 + 8)
*(r15 + 0x14) += 1
*rax_6 = rcx_7
*(r15 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_178, rbx_2)
*(r15 + 0x1c4) = 1
sub_1405d19b0(r15, &var_178)
int512_t zmm3
zmm3.o = 0x3f800000
int64_t var_68
*(r15 + 0x178) = var_68:7.b
*(r15 + 0x179) = 0
*(r15 + 0x1c4) = 1
uint128_t zmm0 = *(r12 + 0x1598)
int64_t rbx_5 = *(arg1 + 0x44)
int64_t rdi_1 = *(rax_2 + 0x14)
uint128_t var_288 = zmm0
sub_1410b7780(arg2, &var_288, zx.o(0), zmm3.o)
void* rcx_13 = arg2[8]
int64_t var_1cc
__builtin_memset(&var_1cc, 0, 0x43)
int128_t var_228
__builtin_memset(&var_228, 0, 0x30)
int128_t var_1e0 = zx.o(0)
int16_t var_188 = 0
sub_140fdc870(rcx_13, &var_228)
int64_t var_1f8 = data_14395da00
int64_t var_1f0 = data_14395da18
int64_t var_1e8 = data_14395d9e8
void* var_238
sub_1419a2ec0(*(r12 + 0x5150), &var_238, &data_143ed5e80, 0)
sub_1419a2ec0(*(r12 + 0x5150), &var_288, &data_143e8ec60, 0)
void* rcx_16 = var_238
var_228.q = data_1439c9210
int64_t rax_13 = 0

if (rcx_16 != 0)
    int64_t rdx_10 = sx.q(*(rcx_16 + 0x10c))
    void* var_230
    int64_t* rsi_1 = *(var_230 + 0x10)
    int64_t rax_15 = rsi_1[3]
    
    if (*(rax_15 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rsi_1, rdx_10.d)
        rax_15 = rsi_1[3]
    
    rax_13 = *(rax_15 + (rdx_10 << 3))

void* r15_2 = var_288.q
var_228:8.q = rax_13
int64_t rax_16 = 0

if (r15_2 != 0)
    int64_t rdx_11 = sx.q(*(r15_2 + 0x10c))
    int64_t* rsi_2 = *(var_288:8.q + 0x10)
    int64_t rax_18 = rsi_2[3]
    
    if (*(rax_18 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_11.d)
        rax_18 = rsi_2[3]
    
    rax_16 = *(rax_18 + (rdx_11 << 3))

int128_t var_208
var_208.q = rax_16
int32_t var_1d0 = 0
sub_1419870b0(arg2[8], &var_228, 2)
void* rdx_13 = arg2[8]
int64_t rsi_3 = *(rdx_13 + 0x1a0)
sub_141080ac0(r15_2, rdx_13, rsi_3, *(*arg2 + 0x10))
void* r9_3
int512_t zmm2_1
r9_3, zmm2_1 = j_sub_14137eb70(r15_2 + 0x118, arg2[8], rsi_3, arg2, data_14395f4d0, 0, nullptr)
int32_t rdx_15 = zmm0:4.d
int32_t rcx_22 = zmm0.d
int32_t var_2a0 = 1
int32_t var_2a8 = 1
var_288 = var_238.o
void* rcx_23 = arg2[8]
zmm2_1.o = zx.o(rdx_15)
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
int128_t* var_2b0 = &var_288
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(zmm0:8.d - rcx_22))
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rcx_22))
zmm3.o = zx.o(rbx_5.d)
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rbx_5:4.d))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(zmm0:0xc.d - rdx_15))
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int64_t* var_2d8
var_2d8.d = zmm2_1.d
zmm2_1.o = zx.o(0)
int64_t* var_2e8
var_2e8.d = zmm5.d
sub_1413993b0(rcx_23, zx.o(0), zmm2_1, r9_3, zmm3, var_2e8.d, zmm4.d, var_2d8.d, zmm0_1.d, zmm6.d, 
    rbx_5, rdi_1, var_2b0, var_2a8, var_2a0)
sub_141096650(arg2[8])
void* rsi_4 = arg2[8]
int64_t r12_2 = rax_3[1]
int64_t* r15_3 = *rax_3
int128_t var_268 = data_142d57d10
int128_t zmm0_2 = data_142d57920
int128_t var_258 = data_142d3f800
void*** rbx_8 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rbx_8[0xa]

if (rax_24 u> *(rsi_4 + 0x38))
    sub_140b0e3d0(rsi_4 + 0x30, 0x58)
    rbx_8 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rbx_8[0xa]

*(rsi_4 + 0x30) = rax_24
*(rsi_4 + 0x14) += 1
**(rsi_4 + 8) = rbx_8
*(rsi_4 + 8) = &rbx_8[1]
rbx_8[1] = 0
*rbx_8 = &data_142d56628
rbx_8[2].d = var_268.d
__builtin_memset(rbx_8 + 0x14, 0xff, 0x20)
*(rbx_8 + 0x34) = zmm0_2:4.d
rbx_8[7].d = zmm0_2:8.d
*(rbx_8 + 0x3c) = zmm0_2:0xc.d
rbx_8[8] = r15_3
rbx_8[9] = r12_2

if ((*(*r15_3 + 8))(r15_3) == 0)
    int64_t* rcx_27 = rbx_8[8]
    
    if ((*(*rcx_27 + 0x18))(rcx_27) == 0)
        int64_t* rcx_28 = rbx_8[8]
        
        if ((*(*rcx_28 + 0x20))(rcx_28) == 0)
            int64_t* rcx_29 = rbx_8[8]
            (*(*rcx_29 + 0x10))(rcx_29)

int64_t* rcx_30 = rbx_8[9]

if ((*(*rcx_30 + 8))(rcx_30) == 0)
    int64_t* rcx_31 = rbx_8[9]
    
    if ((*(*rcx_31 + 0x18))(rcx_31) == 0)
        int64_t* rcx_32 = rbx_8[9]
        
        if ((*(*rcx_32 + 0x20))(rcx_32) == 0)
            int64_t* rcx_33 = rbx_8[9]
            (*(*rcx_33 + 0x10))(rcx_33)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_308)
return result
