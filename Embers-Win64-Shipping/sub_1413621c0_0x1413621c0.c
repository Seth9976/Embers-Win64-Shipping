// 函数: sub_1413621c0
// 地址: 0x1413621c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xc8))
int32_t rax_5 = (temp1 - temp0) s>> 1
int32_t r12 = rax_5

if (rax_5 s<= 1)
    r12 = 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0xcc))
int32_t rax_9 = (temp3 - temp2) s>> 1
int32_t r13 = rax_9

if (rax_9 s<= 1)
    r13 = 1

int64_t* rax_10 = sub_1413a8300(arg1 + 0x30, arg2)
void* rcx_1 = *rax_10
int512_t zmm3
zmm3.o = *(rcx_1 + 0x30)
int64_t r15

if (data_14399f5e0.d.d f!= *(rcx_1 + 0x24) || (*(rcx_1 + 0x28)).d f!= data_14399f5e0:4.d
        || (*(rcx_1 + 0x2c)).d f!= data_14399f5e0:8.d || zmm3.d f!= data_14399f5e0:0xc.d)
    r15.b = 1
else
    r15.b = 0

int128_t zmm1 = data_142d3f5a0
void* var_178 = rcx_1
int32_t var_a0 = 0
char var_163 = (r15.b ^ 1) << 3 | 1
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
int64_t rax_12 = rbx_2 + 0x16

if (rax_12 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x18)
    rbx_2 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
    rax_12 = rbx_2 + 0x16

wchar16 const* const rcx_4 = u"DofBlurES2"
*(rsi + 0x30) = rax_12
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rbx_2 - u"DofBlurES2") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_7[0x27]

if (rax_13 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x140)
    rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_7[0x27]

*(rsi + 0x30) = rax_13
void**** rax_14 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_14 = rcx_7
*(rsi + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_178, rbx_2)
*(rsi + 0x1c4) = 1
sub_1405d19b0(rsi, &var_178)
int64_t var_68
*(rsi + 0x178) = var_68:7.b
*(rsi + 0x179) = 0
*(rsi + 0x1c4) = 1

if (r15.b != 0)
    sub_14199cb60(arg2[8], 1, 1, &data_14399f5e0, 0, (zx.o(0)).d, 0, 0)

zmm3.o = 0x3f800000
int32_t var_270 = r12
int32_t var_26c = r13
int128_t var_288 = 0.o
sub_1410b7780(arg2, &var_288, zx.o(0), zmm3.o)
void* rcx_14 = arg2[8]
int64_t var_1c4
__builtin_memset(&var_1c4, 0, 0x43)
int128_t var_220
__builtin_memset(&var_220, 0, 0x30)
int128_t var_1d8 = zx.o(0)
int16_t var_180 = 0
sub_140fdc870(rcx_14, &var_220)
int64_t var_1f0 = data_14395da00
int64_t var_1e8 = data_14395da18
int64_t var_1e0 = data_14395d9e8
void* var_230
sub_1419a2ec0(arg2[0xc], &var_230, &data_143ebba90, 0)
void* r15_1 = var_230
sub_1419a2ec0(arg2[0xc], &var_288, &data_143ebb980, 0)
var_220.q = data_1439c9210
int64_t rax_21 = 0
void* var_228

if (r15_1 != 0)
    int64_t rdx_11 = sx.q(*(r15_1 + 0x10c))
    int64_t* rbx_6 = *(var_228 + 0x10)
    int64_t rax_22 = rbx_6[3]
    
    if (*(rax_22 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_11.d)
        rax_22 = rbx_6[3]
    
    rax_21 = *(rax_22 + (rdx_11 << 3))

void* rdi_2 = var_288.q
var_220:8.q = rax_21
int64_t rax_23 = 0

if (rdi_2 != 0)
    int64_t rdx_12 = sx.q(*(rdi_2 + 0x10c))
    int64_t* rbx_7 = *(var_288:8.q + 0x10)
    int64_t rax_25 = rbx_7[3]
    
    if (*(rax_25 + (rdx_12 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_12.d)
        rax_25 = rbx_7[3]
    
    rax_23 = *(rax_25 + (rdx_12 << 3))

int128_t var_200
var_200.q = rax_23
int32_t var_1c8 = 0
sub_1419870b0(arg2[8], &var_220, 2)
void* rdx_14 = arg2[8]
int64_t rbx_8 = *(rdx_14 + 0x188)
sub_141080be0(r15_1, rdx_14, rbx_8, *(*arg2 + 0x10))
int32_t var_2e0
var_2e0.q = 0
char var_2e8
var_2e8.d = 0
sub_1413aa060(r15_1 + 0x118, rbx_8, arg2, data_14395fa10, var_2e8, var_2e0)
void* rdx_16 = arg2[8]
int64_t rbx_9 = *(rdx_16 + 0x1a0)
sub_141080ac0(rdi_2, rdx_16, rbx_9, *(*arg2 + 0x10))
char var_2d8
var_2d8.q = 0
var_2e8.q = data_14395f4d0
void* r9_6
int512_t zmm2_1
int32_t zmm6_1
r9_6, zmm2_1, zmm6_1 = j_sub_14137eb70(rdi_2 + 0x118, arg2[8], rbx_9, arg2, var_2e8, 0, var_2d8)
zmm3.o = zx.o(0)
zmm2_1.o = zx.o(0)
var_288.q = r15_1
int64_t rax_27 = *(arg1 + 0xc8)
int64_t var_298_1 = rax_27
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_27.d)
var_298_1.d = (temp5 - temp4) s>> 1
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(var_298_1:4.d)
var_298_1:4.d = (temp7 - temp6) s>> 1
var_288:8.q = var_228
float zmm0_2 = float.s(zx.q(r13))
zmm3.d = float.s(zx.q(r12))
var_2d8.d = zmm6_1
var_2e8.d = zmm0_2
sub_1413993b0(arg2[8], zx.o(0), zmm2_1, r9_6, zmm3, var_2e8, zmm6_1, var_2d8, zmm3.d, zmm0_2, 
    var_298_1, var_298_1, &var_288, 1, 1)
sub_141096650(arg2[8])
int128_t var_268 = data_142d57d10
int128_t zmm0_3 = data_142d57920
int128_t var_258 = data_142d3f800
void* rdi_3 = arg2[8]
int64_t r12_1 = rax_10[1]
int64_t* r15_3 = *rax_10
void*** rbx_12 = (*(rdi_3 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_39 = &rbx_12[0xa]

if (rax_39 u> *(rdi_3 + 0x38))
    sub_140b0e3d0(rdi_3 + 0x30, 0x58)
    rbx_12 = (*(rdi_3 + 0x30) + 7) & 0xfffffffffffffff8
    rax_39 = &rbx_12[0xa]

*(rdi_3 + 0x30) = rax_39
*(rdi_3 + 0x14) += 1
**(rdi_3 + 8) = rbx_12
*(rdi_3 + 8) = &rbx_12[1]
rbx_12[1] = 0
*rbx_12 = &data_142d56628
rbx_12[2].d = var_268.d
__builtin_memset(rbx_12 + 0x14, 0xff, 0x20)
*(rbx_12 + 0x34) = zmm0_3:4.d
rbx_12[7].d = zmm0_3:8.d
*(rbx_12 + 0x3c) = zmm0_3:0xc.d
rbx_12[8] = r15_3
rbx_12[9] = r12_1

if ((*(*r15_3 + 8))(r15_3, 0) == 0)
    int64_t* rcx_29 = rbx_12[8]
    
    if ((*(*rcx_29 + 0x18))(rcx_29) == 0)
        int64_t* rcx_30 = rbx_12[8]
        
        if ((*(*rcx_30 + 0x20))(rcx_30) == 0)
            int64_t* rcx_31 = rbx_12[8]
            (*(*rcx_31 + 0x10))(rcx_31)

int64_t* rcx_32 = rbx_12[9]

if ((*(*rcx_32 + 8))(rcx_32) == 0)
    int64_t* rcx_33 = rbx_12[9]
    
    if ((*(*rcx_33 + 0x18))(rcx_33) == 0)
        int64_t* rcx_34 = rbx_12[9]
        
        if ((*(*rcx_34 + 0x20))(rcx_34) == 0)
            int64_t* rcx_35 = rbx_12[9]
            (*(*rcx_35 + 0x10))(rcx_35)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_308)
return result
