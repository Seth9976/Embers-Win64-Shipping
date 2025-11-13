// 函数: sub_14135ec00
// 地址: 0x14135ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* rax_2
int512_t zmm6
rax_2, zmm6 = sub_1413a8300(arg1 + 0x40, arg2)
int128_t zmm1 = data_142d3f5a0
int64_t rdx = *rax_2
int64_t var_178 = rdx
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
bool var_5f = *(rdx + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
void* r14 = arg2[8]
int64_t rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_3 = rbx_2 + 0x1a

if (rax_3 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x1c)
    rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
    rax_3 = rbx_2 + 0x1a

wchar16 const* const rcx_3 = u"IntegrateDof"
*(r14 + 0x30) = rax_3
wchar16 const i

do
    i = *rcx_3
    *(rcx_3 + rbx_2 - u"IntegrateDof") = i
    rcx_3 = &rcx_3[1]
while (i != 0)
void*** rcx_6 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_6[0x27]

if (rax_4 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x140)
    rcx_6 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_6[0x27]

*(r14 + 0x30) = rax_4
void**** rax_5 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_5 = rcx_6
*(r14 + 8) = &rcx_6[1]
sub_1405d11b0(rcx_6, &var_178, rbx_2)
*(r14 + 0x1c4) = 1
sub_1405d19b0(r14, &var_178)
int512_t zmm3
zmm3.o = 0x3f800000
int64_t var_68
*(r14 + 0x178) = var_68:7.b
*(r14 + 0x179) = 0
zmm6.o = zx.o(0)
*(r14 + 0x1c4) = 1
int32_t rax_8 = *(arg1 + 0xd8)
int32_t var_26c = *(arg1 + 0xdc)
void* var_278 = nullptr
int128_t var_268 = var_278.o
sub_1410b7780(arg2, &var_268, zx.o(0), zmm3.o)
void* rcx_12 = arg2[8]
int64_t var_1c4
__builtin_memset(&var_1c4, 0, 0x43)
int128_t var_220
__builtin_memset(&var_220, 0, 0x30)
int128_t var_1d8 = zx.o(0)
int16_t var_180 = 0
sub_140fdc870(rcx_12, &var_220)
int64_t var_1f0 = data_14395da00
int64_t var_1e8 = data_14395da18
int64_t var_1e0 = data_14395d9e8
sub_1419a2ec0(arg2[0xc], &var_278, &data_143ebbcb0, 0)
void* r13 = var_278
void* r12 = rax_8.q
sub_1419a2ec0(arg2[0xc], &var_268, &data_143ebbba0, 0)
var_220.q = data_1439c9210
int64_t rax_14 = 0

if (r13 != 0)
    int64_t rdx_9 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_5 = *(r12 + 0x10)
    int64_t rax_15 = rbx_5[3]
    
    if (*(rax_15 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_5, rdx_9.d)
        rax_15 = rbx_5[3]
    
    rax_14 = *(rax_15 + (rdx_9 << 3))

void* rdi_2 = var_268.q
var_220:8.q = rax_14
int64_t rax_16 = 0

if (rdi_2 != 0)
    int64_t rdx_10 = sx.q(*(rdi_2 + 0x10c))
    int64_t* rbx_6 = *(var_268:8.q + 0x10)
    int64_t rax_18 = rbx_6[3]
    
    if (*(rax_18 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_10.d)
        rax_18 = rbx_6[3]
    
    rax_16 = *(rax_18 + (rdx_10 << 3))

int128_t var_200
var_200.q = rax_16
int32_t var_1c8 = 0
sub_1419870b0(arg2[8], &var_220, 2)
void* rdx_12 = arg2[8]
int64_t rbx_7 = *(rdx_12 + 0x188)
sub_141080be0(r13, rdx_12, rbx_7, *(*arg2 + 0x10))
sub_1413aa060(r13 + 0x118, rbx_7, arg2, data_14395fa10, 0, nullptr)
void* rdx_14 = arg2[8]
int64_t rbx_8 = *(rdx_14 + 0x1a0)
sub_141080ac0(rdi_2, rdx_14, rbx_8, *(*arg2 + 0x10))
int64_t* var_2c0
var_2c0.d = 0
int32_t var_2c8
var_2c8.q = data_14395f4d0
void* r9_6
int512_t zmm2_1
int32_t zmm6_1
r9_6, zmm2_1, zmm6_1 =
    j_sub_14137eb70(rdi_2 + 0x118, arg2[8], rbx_8, arg2, var_2c8, var_2c0.d, nullptr)
uint128_t zmm0_1 = zx.o(*(arg1 + 0xdc))
zmm2_1.o = zx.o(*(arg1 + 0xd8))
uint128_t zmm4 = zx.o(*(arg1 + 0x58))
zmm3.o = zx.o(*(arg1 + 0x54))
void* rcx_22 = arg2[8]
int32_t var_280 = 1
int32_t var_288 = 1
int128_t* var_290 = &var_268
int64_t rax_20 = *(arg1 + 0x54)
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
var_268.q = r13
var_268:8.q = r12
zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
zmm4 = _mm_cvtepi32_ps(zmm4)
int32_t var_2a8 = zmm0_1.d
int32_t var_2b0 = zmm2_1.d
zmm2_1.o = zx.o(0)
int64_t* var_2b8
var_2b8.d = zmm6_1
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
var_2c0.d = zmm6_1
sub_1413993b0(rcx_22, zx.o(0), zmm2_1, r9_6, zmm3, zmm4.d, var_2c0.d, var_2b8.d, var_2b0, var_2a8, 
    rax_20, rax_20, var_290, var_288, var_280)
sub_141096650(arg2[8])
void* rsi_1 = arg2[8]
int128_t var_258 = data_142d57d10
int128_t zmm0_2 = data_142d57920
int64_t r15_1 = rax_2[1]
int64_t* r14_3 = *rax_2
int128_t var_248 = data_142d3f800
void*** rbx_11 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_21 = &rbx_11[0xa]

if (rax_21 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x58)
    rbx_11 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rbx_11[0xa]

*(rsi_1 + 0x30) = rax_21
*(rsi_1 + 0x14) += 1
**(rsi_1 + 8) = rbx_11
*(rsi_1 + 8) = &rbx_11[1]
rbx_11[1] = 0
*rbx_11 = &data_142d56628
rbx_11[2].d = var_258.d
__builtin_memset(rbx_11 + 0x14, 0xff, 0x20)
*(rbx_11 + 0x34) = zmm0_2:4.d
rbx_11[7].d = zmm0_2:8.d
*(rbx_11 + 0x3c) = zmm0_2:0xc.d
rbx_11[8] = r14_3
rbx_11[9] = r15_1

if ((*(*r14_3 + 8))(r14_3) == 0)
    int64_t* rcx_26 = rbx_11[8]
    
    if ((*(*rcx_26 + 0x18))(rcx_26) == 0)
        int64_t* rcx_27 = rbx_11[8]
        
        if ((*(*rcx_27 + 0x20))(rcx_27) == 0)
            int64_t* rcx_28 = rbx_11[8]
            (*(*rcx_28 + 0x10))(rcx_28)

int64_t* rcx_29 = rbx_11[9]

if ((*(*rcx_29 + 8))(rcx_29) == 0)
    int64_t* rcx_30 = rbx_11[9]
    
    if ((*(*rcx_30 + 0x18))(rcx_30) == 0)
        int64_t* rcx_31 = rbx_11[9]
        
        if ((*(*rcx_31 + 0x20))(rcx_31) == 0)
            int64_t* rcx_32 = rbx_11[9]
            (*(*rcx_32 + 0x10))(rcx_32)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_2e8)
return result
