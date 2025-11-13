// 函数: sub_14131ac20
// 地址: 0x14131ac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
arg2[8]
sub_1413945b0(&data_143ec4c60, arg2[8], 0)
int64_t* rax_2 = sub_14139cea0(&data_143ec4c60)
int128_t zmm1 = data_142d3f5a0
void* r15 = *rax_2
int64_t rcx_1 = *(r15 + 8)
int64_t var_168 = rcx_1
int32_t var_90 = 0
int32_t var_8c
__builtin_memset(&var_8c, 0xff, 0x14)
int128_t var_78 = zmm1
int64_t var_68
__builtin_memset(&var_68, 0, 0x19)
int64_t var_160 = 0
int32_t var_158 = 0xffffffff
int16_t var_154 = 0x500
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x11)
int32_t var_94 = 0
bool var_4f = *(rcx_1 + 0x38) u> 1
void var_150
memset(&var_150, 0, 0xa8)
void* r14 = arg2[8]
int64_t rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_3 = rbx_2 + 0x28

if (rax_3 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x2a)
    rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
    rax_3 = rbx_2 + 0x28

wchar16 const* const rcx_4 = u"PostProcessBusyWait"
*(r14 + 0x30) = rax_3
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rbx_2 - u"PostProcessBusyWait") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_7[0x27]

if (rax_4 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x140)
    rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_7[0x27]

*(r14 + 0x30) = rax_4
void**** rax_5 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_5 = rcx_7
*(r14 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_168, rbx_2)
*(r14 + 0x1c4) = 1
sub_1405d19b0(r14, &var_168)
int512_t zmm3
zmm3.o = 0x3f800000
int64_t var_58
*(r14 + 0x178) = var_58:7.b
*(r14 + 0x179) = 0
*(r14 + 0x1c4) = 1
void* rax_8 = *arg2
uint128_t var_288 = *(rax_8 + 0x1598)
uint128_t zmm0 = *(rax_8 + 0x258)
uint128_t var_268 = zmm0
sub_1410b7780(arg2, &var_268, zx.o(0), zmm3.o)
void* rcx_13 = arg2[8]
int64_t var_1bc
__builtin_memset(&var_1bc, 0, 0x43)
int128_t var_218
__builtin_memset(&var_218, 0, 0x30)
int128_t var_1d0 = zx.o(0)
int16_t var_178 = 0
sub_140fdc870(rcx_13, &var_218)
int64_t var_1e8 = data_14395da00
int64_t var_1e0 = data_14395da18
int64_t var_1d8 = data_14395d9e8
void* var_278
sub_1419a2ec0(arg2[0xc], &var_278, &data_143ed5e80, 0)
sub_1419a2ec0(arg2[0xc], &var_268, &data_143eb3a10, 0)
void* rcx_16 = var_278
var_218.q = data_1439c9210
int64_t rax_13 = 0

if (rcx_16 != 0)
    int64_t rdx_9 = sx.q(*(rcx_16 + 0x10c))
    void* var_270
    int64_t* rbx_5 = *(var_270 + 0x10)
    int64_t rax_15 = rbx_5[3]
    
    if (*(rax_15 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_5, rdx_9.d)
        rax_15 = rbx_5[3]
    
    rax_13 = *(rax_15 + (rdx_9 << 3))

void* r14_1 = var_268.q
var_218:8.q = rax_13
int64_t rax_16 = 0

if (r14_1 != 0)
    int64_t rdx_10 = sx.q(*(r14_1 + 0x10c))
    int64_t* rbx_6 = *(var_268:8.q + 0x10)
    int64_t rax_18 = rbx_6[3]
    
    if (*(rax_18 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_10.d)
        rax_18 = rbx_6[3]
    
    rax_16 = *(rax_18 + (rdx_10 << 3))

int128_t var_1f8
var_1f8.q = rax_16
int32_t var_1c0 = 0
sub_1419870b0(arg2[8], &var_218, 2)
void* rdi_3 = arg2[8]
int64_t rbx_7 = *(rdi_3 + 0x1a0)
sub_141080ac0(r14_1, rdi_3, rbx_7, *(*arg2 + 0x10))
j_sub_14137eb70(r14_1 + 0x118, rdi_3, rbx_7, arg2, data_14395f4d0, 0, nullptr)
int32_t r8_3 = var_288:4.d
int32_t r10 = var_288.d
int32_t rax_21 = zmm0:0xc.d - zmm0:4.d
int32_t rcx_23 = var_288:0xc.d - r8_3
void* r9_4 = zx.q(var_288:8.d - r10)
int32_t rdx_15 = zmm0:8.d - zmm0.d
int32_t var_290 = 1
int32_t var_298 = 1
var_288:4.d = rax_21
int128_t* var_2a0 = &var_268
var_268 = var_278.o
var_278:4.d = rcx_23
void* rcx_24 = arg2[8]
int512_t zmm2_1
zmm2_1.o = zx.o(r9_4.d)
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
var_278.d = r9_4.d
void* rax_22 = var_278
var_288.d = rdx_15
int32_t var_2b8 = _mm_cvtepi32_ps(zx.o(rcx_23)).d
int32_t var_2c0 = zmm2_1.d
zmm2_1.o = zx.o(0)
int64_t* var_2c8
var_2c8.d = _mm_cvtepi32_ps(zx.o(r8_3)).d
zmm3.o = zx.o(rdx_15)
int32_t var_2d0_1 = _mm_cvtepi32_ps(zx.o(r10)).d
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rax_21))
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int64_t* var_2d8
var_2d8.d = zmm6.d
sub_1413993b0(rcx_24, zx.o(0), zmm2_1, r9_4, zmm3, var_2d8.d, var_2d0_1, var_2c8.d, var_2c0, 
    var_2b8, var_288.q, rax_22, var_2a0, var_298, var_290)
sub_141096650(arg2[8])
void* rsi_1 = arg2[8]
int64_t r13 = *(r15 + 0x10)
int64_t* r14_2 = *(r15 + 8)
int128_t var_248 = data_142d57d10
int128_t zmm0_2 = data_142d57920
int128_t var_238 = data_142d3f800
void*** rbx_10 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rbx_10[0xa]

if (rax_24 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x58)
    rbx_10 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rbx_10[0xa]

*(rsi_1 + 0x30) = rax_24
*(rsi_1 + 0x14) += 1
**(rsi_1 + 8) = rbx_10
*(rsi_1 + 8) = &rbx_10[1]
rbx_10[1] = 0
*rbx_10 = &data_142d56628
rbx_10[2].d = var_248.d
__builtin_memset(rbx_10 + 0x14, 0xff, 0x20)
*(rbx_10 + 0x34) = zmm0_2:4.d
rbx_10[7].d = zmm0_2:8.d
*(rbx_10 + 0x3c) = zmm0_2:0xc.d
rbx_10[8] = r14_2
rbx_10[9] = r13

if ((*(*r14_2 + 8))(r14_2) == 0)
    int64_t* rcx_28 = rbx_10[8]
    
    if ((*(*rcx_28 + 0x18))(rcx_28) == 0)
        int64_t* rcx_29 = rbx_10[8]
        
        if ((*(*rcx_29 + 0x20))(rcx_29) == 0)
            int64_t* rcx_30 = rbx_10[8]
            (*(*rcx_30 + 0x10))(rcx_30)

int64_t* rcx_31 = rbx_10[9]

if ((*(*rcx_31 + 8))(rcx_31) == 0)
    int64_t* rcx_32 = rbx_10[9]
    
    if ((*(*rcx_32 + 0x18))(rcx_32) == 0)
        int64_t* rcx_33 = rbx_10[9]
        
        if ((*(*rcx_33 + 0x20))(rcx_33) == 0)
            int64_t* rcx_34 = rbx_10[9]
            (*(*rcx_34 + 0x10))(rcx_34)

sub_1413a9da0(&data_143ec4c60, nullptr)
int64_t var_60
int64_t result = sub_1405d1550(&var_60)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
