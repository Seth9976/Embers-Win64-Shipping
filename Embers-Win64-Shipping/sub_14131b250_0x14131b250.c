// 函数: sub_14131b250
// 地址: 0x14131b250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* var_1f8 = arg1
void* rax_2 = sub_14139ce70(arg1)

if (rax_2 == 0)
    rax_2 = sub_14139ce70(arg1)

void* r13 = *arg2
arg2[8]
int32_t rsi = (*(rax_2 + 0x14)).d
void* var_1c8 = r13
int32_t temp0 = divs.dp.d(sx.q(data_143ec4fdc.d - 1 + rsi), rsi)
int64_t rax_8 = *(r13 + 0x15a0)
int64_t var_1e8 = rax_8
var_1e8.d = divs.dp.d(sx.q(rax_8.d), temp0)
var_1e8:4.d = divs.dp.d(sx.q(var_1e8:4.d), temp0)
int64_t rax_14 = *(r13 + 0x1598)
int64_t var_1e0 = rax_14
var_1e0.d = divs.dp.d(sx.q(rax_14.d), temp0)
var_1e0:4.d = divs.dp.d(sx.q(var_1e0:4.d), temp0)
int64_t* rax_20 = sub_1413a8300(&arg1[0xc], arg2)
int64_t rdx_8 = sx.q((*U"1111")[sx.q(arg2[0xb].d)])
int64_t rcx_5

if (((rdx_8 - 0x11).d & 0xfffffff3) != 0 || rdx_8.d == 0x19)
    rcx_5 = rdx_8 * 5

if ((((rdx_8 - 0x11).d & 0xfffffff3) != 0 || rdx_8.d == 0x19) && (
        *((rcx_5 << 2) + &data_143f025f0) != data_143f025c0
        || (*((rcx_5 << 2) + &data_143f025fc) & 1) == 0))
    rcx_5 = 5
    
    if (*(r13 + 0xad0) == 0)
        rcx_5 = 5
else
    rcx_5.b = 9

int64_t rax_22 = *rax_20
int128_t zmm1 = data_142d3f5a0
char var_173 = rcx_5.b
int32_t var_b0 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int64_t var_88
__builtin_memset(&var_88, 0, 0x19)
int64_t var_188 = rax_22
int64_t var_180 = 0
int32_t var_178 = 0xffffffff
char var_174 = 0
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
bool var_6f = *(rax_22 + 0x38) u> 1
void var_170
memset(&var_170, 0, 0xa8)
void* r13_1 = arg2[8]
int64_t r14_3 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_23 = r14_3 + 0x1a

if (rax_23 u> *(r13_1 + 0x38))
    sub_140b0e3d0(r13_1 + 0x30, 0x1c)
    r14_3 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_23 = r14_3 + 0x1a

wchar16 const* const rcx_8 = u"DOFRecombine"
*(r13_1 + 0x30) = rax_23
wchar16 const i

do
    i = *rcx_8
    *(r14_3 - u"DOFRecombine" + rcx_8) = i
    rcx_8 = &rcx_8[1]
while (i != 0)
void*** rcx_11 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_11[0x27]

if (rax_24 u> *(r13_1 + 0x38))
    sub_140b0e3d0(r13_1 + 0x30, 0x140)
    rcx_11 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_11[0x27]

*(r13_1 + 0x30) = rax_24
void**** rax_25 = *(r13_1 + 8)
*(r13_1 + 0x14) += 1
*rax_25 = rcx_11
*(r13_1 + 8) = &rcx_11[1]
sub_1405d11b0(rcx_11, &var_188, r14_3)
*(r13_1 + 0x1c4) = 1
sub_1405d19b0(r13_1, &var_188)
void* r12 = var_1c8
int64_t var_78
*(r13_1 + 0x178) = var_78:7.b
*(r13_1 + 0x179) = 0
*(r13_1 + 0x1c4) = 1
int64_t* r13_2 = var_1f8

if (*(r12 + 0xad0) == 0)
    var_1f8.o = *(r12 + 0x1598)
    sub_14199cee0(arg2[8], 1, 1, &data_14399f5e0, 0, 0, 0, 0, *(r13_2 + 0x74), &var_1f8)

var_1f8.o = *(r12 + 0x1598)
sub_1410b7780(arg2, &var_1f8, zx.o(0), 0x3f800000)
int64_t rax_29 = sub_14139ce70(r13_2)
bool cond:2 = sub_14139ce70(r13_2) != 0
void** rcx_21 = &var_1f8
int64_t rax_31
rax_31.b = sub_14139ce70(r13_2) != 0
void* r9
uint128_t zmm8

if (rax_29 == 0)
    if (rax_31.b == 0)
        r9, zmm8 = sub_1412f0e90(rcx_21, arg2)
    else
        r9, zmm8 = sub_1412f0cc0(rcx_21, arg2)
else if (cond:2 == 0)
    if (rax_31.b == 0)
        r9, zmm8 = sub_1412f0af0(rcx_21, arg2)
    else
        r9, zmm8 = sub_1412f0920(rcx_21, arg2)
else if (rax_31.b == 0)
    r9, zmm8 = sub_1412f0750(rcx_21, arg2)
else
    r9, zmm8 = sub_1412f0580(rcx_21, arg2)

int32_t rcx_22 = var_1e0:4.d
int32_t rdx_19 = *(r12 + 0x15a4) - *(r12 + 0x159c)
int32_t r8_3 = *(r12 + 0x15a0) - *(r12 + 0x1598)
int32_t var_218 = 1
char rax_34 = *(arg2 + 0x69)
int32_t rax_35 = *(r12 + 0xad0)
void** var_230 = &var_1c8
var_1c8.o = var_1f8.o
void* rcx_23 = arg2[8]
uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rcx_22))
var_1f8.d = r8_3
var_1f8:4.d = rdx_19
int32_t rax_36 = var_1f8.d
uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(var_1e8.d - var_1e0.d))
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(var_1e0.d))
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rdx_19))
int64_t var_248
var_248.d = _mm_cvtepi32_ps(zx.o(var_1e8:4.d - rcx_22)).d
char var_258
var_258.d = zmm2_1.d
char var_268
var_268.d = zmm5.d
sub_141399210(rcx_23, zx.o(0), zx.o(0), r9, _mm_cvtepi32_ps(zx.o(r8_3)), zmm8, var_268, zmm4.d, 
    var_258, zmm0_2.d, var_248.d, rax_36, rsi, var_230, rax_35, rax_34, var_218)
sub_141096650(arg2[8])
void* rsi_1 = arg2[8]
int128_t var_1b8 = data_142d57d10
int128_t zmm0_3 = data_142d57920
int64_t r12_1 = rax_20[1]
int64_t* r14_8 = *rax_20
int128_t var_1a8 = data_142d3f800
void*** rbx_4 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_37 = &rbx_4[0xa]

if (rax_37 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x58)
    rbx_4 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_37 = &rbx_4[0xa]

*(rsi_1 + 0x30) = rax_37
*(rsi_1 + 0x14) += 1
**(rsi_1 + 8) = rbx_4
*(rsi_1 + 8) = &rbx_4[1]
rbx_4[1] = 0
*rbx_4 = &data_142d56628
rbx_4[2].d = var_1b8.d
__builtin_memset(rbx_4 + 0x14, 0xff, 0x20)
*(rbx_4 + 0x34) = zmm0_3:4.d
rbx_4[7].d = zmm0_3:8.d
*(rbx_4 + 0x3c) = zmm0_3:0xc.d
rbx_4[8] = r14_8
rbx_4[9] = r12_1

if ((*(*r14_8 + 8))(r14_8) == 0)
    int64_t* rcx_27 = rbx_4[8]
    
    if ((*(*rcx_27 + 0x18))(rcx_27) == 0)
        int64_t* rcx_28 = rbx_4[8]
        
        if ((*(*rcx_28 + 0x20))(rcx_28) == 0)
            int64_t* rcx_29 = rbx_4[8]
            (*(*rcx_29 + 0x10))(rcx_29)

int64_t* rcx_30 = rbx_4[9]

if ((*(*rcx_30 + 8))(rcx_30) == 0)
    int64_t* rcx_31 = rbx_4[9]
    
    if ((*(*rcx_31 + 0x18))(rcx_31) == 0)
        int64_t* rcx_32 = rbx_4[9]
        
        if ((*(*rcx_32 + 0x20))(rcx_32) == 0)
            int64_t* rcx_33 = rbx_4[9]
            (*(*rcx_33 + 0x10))(rcx_33)

int64_t var_80
int64_t result = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_288)
return result
