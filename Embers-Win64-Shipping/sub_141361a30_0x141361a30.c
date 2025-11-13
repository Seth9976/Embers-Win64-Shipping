// 函数: sub_141361a30
// 地址: 0x141361a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int32_t r15 = *(arg1 + 0xc8)
int32_t r12 = *(arg1 + 0xcc)
int64_t var_2d8 = arg1

if (r15 s<= 1)
    r15 = 1

if (r12 s<= 1)
    r12 = 1

int64_t* rax_2 = sub_1413a8300(arg1 + 0x30, arg2)
void* rcx_1 = *rax_2
int512_t zmm3
zmm3.o = *(rcx_1 + 0x30)
int64_t r13

if (data_14399f5e0.d.d f!= *(rcx_1 + 0x24) || (*(rcx_1 + 0x28)).d f!= data_14399f5e0:4.d
        || (*(rcx_1 + 0x2c)).d f!= data_14399f5e0:8.d || zmm3.d f!= data_14399f5e0:0xc.d)
    r13.b = 1
else
    r13.b = 0

int128_t zmm1 = data_142d3f5a0
void* var_178 = rcx_1
int32_t var_a0 = 0
char var_163 = (r13.b ^ 1) << 3 | 1
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int128_t var_88 = zmm1
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
int32_t var_168 = 0xffffffff
char var_164 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
bool var_5f = *(rcx_1 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
void* rsi = arg2[8]
int64_t rbx_2 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rbx_2 + 0x2c

if (rax_4 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x2e)
    rbx_2 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rbx_2 + 0x2c

wchar16 const* const rcx_4 = u"PostProcessBloomUpES2"
*(rsi + 0x30) = rax_4
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rbx_2 - u"PostProcessBloomUpES2") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[0x27]

if (rax_5 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x140)
    rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[0x27]

*(rsi + 0x30) = rax_5
void**** rax_6 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_6 = rcx_7
*(rsi + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_178, rbx_2)
*(rsi + 0x1c4) = 1
sub_1405d19b0(rsi, &var_178)
int64_t var_68
*(rsi + 0x178) = var_68:7.b
*(rsi + 0x179) = 0
*(rsi + 0x1c4) = 1

if (r13.b != 0)
    sub_14199cb60(arg2[8], 1, 1, &data_14399f5e0, 0, (zx.o(0)).d, 0, 0)

zmm3.o = 0x3f800000
int32_t var_2b0 = r15
int32_t var_2ac = r12
int128_t var_2c8 = 0.o
sub_1410b7780(arg2, &var_2c8, zx.o(0), zmm3.o)
void* rcx_14 = arg2[8]
int64_t var_1cc
__builtin_memset(&var_1cc, 0, 0x43)
int128_t var_228
__builtin_memset(&var_228, 0, 0x30)
int128_t var_1e0 = zx.o(0)
int16_t var_188 = 0
sub_140fdc870(rcx_14, &var_228)
int64_t var_1f8 = data_14395da00
int64_t var_1f0 = data_14395da18
int64_t var_1e8 = data_14395d9e8
void* var_238
sub_1419a2ec0(arg2[0xc], &var_238, &data_143ebaff0, 0)
void* rbx_5 = var_238
sub_1419a2ec0(arg2[0xc], &var_2c8, &data_143ebaee0, 0)
var_228.q = data_1439c9210
int64_t rax_13 = 0
void* var_230

if (rbx_5 != 0)
    int64_t rdx_8 = sx.q(*(rbx_5 + 0x10c))
    int64_t* rbx_6 = *(var_230 + 0x10)
    int64_t rax_14 = rbx_6[3]
    
    if (*(rax_14 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_8.d)
        rax_14 = rbx_6[3]
    
    rax_13 = *(rax_14 + (rdx_8 << 3))

void* r13_1 = var_2c8.q
var_228:8.q = rax_13
int64_t rax_15 = 0

if (r13_1 != 0)
    int64_t rdx_9 = sx.q(*(r13_1 + 0x10c))
    int64_t* rbx_7 = *(var_2c8:8.q + 0x10)
    int64_t rax_17 = rbx_7[3]
    
    if (*(rax_17 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_9.d)
        rax_17 = rbx_7[3]
    
    rax_15 = *(rax_17 + (rdx_9 << 3))

int128_t var_208
var_208.q = rax_15
int32_t var_1d0 = 0
sub_1419870b0(arg2[8], &var_228, 2)
int64_t rsi_1 = var_2d8
void* rdx_11 = arg2[8]
void* r9 = *arg2
var_2d8 = (_mm_unpacklo_ps(*(rsi_1 + 0xd0), *(rsi_1 + 0xd4))).q
int64_t rbx_8 = *(rdx_11 + 0x188)
int64_t r9_1 = *(r9 + 0x10)
int64_t var_248 = rbx_8
sub_141080be0(rbx_5, rdx_11, rbx_8, r9_1)
int32_t var_320
var_320.q = 0
char var_328
var_328.d = 0
sub_1413aa060(rbx_5 + 0x118, rbx_8, arg2, data_14395f4d0, var_328, var_320)
var_328.d = 0
sub_1405d0cd0(arg2[8], &var_248, rbx_5 + 0x210, &var_2d8, var_328)
void* rdi_4 = arg2[8]
void* r9_4 = *arg2
float zmm1_2[0x4] = *(rsi_1 + 0xf0)
float temp0_1[0x4] = __mulps_xmmps_memps(*(rsi_1 + 0xe0), data_142f64dd0)
float temp0_2[0x4] = __mulps_xmmps_memps(zmm1_2, data_142f64dd0)
float var_298[0x4] = temp0_1
float var_288[0x4] = temp0_2
int64_t rbx_9 = *(rdi_4 + 0x1a0)
int64_t r9_5 = *(r9_4 + 0x10)
var_2d8 = rbx_9
sub_141080ac0(r13_1, rdi_4, rbx_9, r9_5)
char var_318
var_318.q = 0
var_328.q = data_14395f4d0
j_sub_14137eb70(r13_1 + 0x118, rdi_4, rbx_9, arg2, var_328, 0, var_318)
var_328.d = 0
sub_1405d0e10(rdi_4, &var_2d8, r13_1 + 0x210, &var_298, var_328)
var_328.d = 0
void* r9_9
int32_t zmm6_1
r9_9, zmm6_1 = sub_1405d0e10(rdi_4, &var_2d8, r13_1 + 0x216, &var_288, var_328)
int64_t rax_19 = *(rsi_1 + 0xc8)
var_2c8.q = rbx_5
var_2c8:8.q = var_230
int32_t zmm0_4 = float.s(zx.q(r12))
zmm3.o = zx.o(0)
int512_t zmm2_1
zmm2_1.o = zx.o(0)
zmm3.d = float.s(zx.q(r15))
var_318.d = zmm6_1
var_328.d = zmm0_4
sub_1413993b0(arg2[8], zx.o(0), zmm2_1, r9_9, zmm3, var_328, zmm6_1, var_318, zmm3.d, zmm0_4, 
    rax_19, rax_19, &var_2c8, 1, 1)
sub_141096650(arg2[8])
void* rdi_5 = arg2[8]
int128_t var_278 = data_142d57d10
int128_t zmm0_5 = data_142d57920
int64_t r12_1 = rax_2[1]
int64_t* r15_2 = *rax_2
int128_t var_268 = data_142d3f800
void*** rbx_12 = (*(rdi_5 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_20 = &rbx_12[0xa]

if (rax_20 u> *(rdi_5 + 0x38))
    sub_140b0e3d0(rdi_5 + 0x30, 0x58)
    rbx_12 = (*(rdi_5 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rbx_12[0xa]

*(rdi_5 + 0x30) = rax_20
*(rdi_5 + 0x14) += 1
**(rdi_5 + 8) = rbx_12
*(rdi_5 + 8) = &rbx_12[1]
rbx_12[1] = 0
*rbx_12 = &data_142d56628
rbx_12[2].d = var_278.d
__builtin_memset(rbx_12 + 0x14, 0xff, 0x20)
*(rbx_12 + 0x34) = zmm0_5:4.d
rbx_12[7].d = zmm0_5:8.d
*(rbx_12 + 0x3c) = zmm0_5:0xc.d
rbx_12[8] = r15_2
rbx_12[9] = r12_1

if ((*(*r15_2 + 8))(r15_2) == 0)
    int64_t* rcx_35 = rbx_12[8]
    
    if ((*(*rcx_35 + 0x18))(rcx_35) == 0)
        int64_t* rcx_36 = rbx_12[8]
        
        if ((*(*rcx_36 + 0x20))(rcx_36) == 0)
            int64_t* rcx_37 = rbx_12[8]
            (*(*rcx_37 + 0x10))(rcx_37)

int64_t* rcx_38 = rbx_12[9]

if ((*(*rcx_38 + 8))(rcx_38) == 0)
    int64_t* rcx_39 = rbx_12[9]
    
    if ((*(*rcx_39 + 0x18))(rcx_39) == 0)
        int64_t* rcx_40 = rbx_12[9]
        
        if ((*(*rcx_40 + 0x20))(rcx_40) == 0)
            int64_t* rcx_41 = rbx_12[9]
            (*(*rcx_41 + 0x10))(rcx_41)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_348)
return result
