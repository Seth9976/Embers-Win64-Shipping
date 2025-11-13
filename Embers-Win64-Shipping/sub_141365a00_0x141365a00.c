// 函数: sub_141365a00
// 地址: 0x141365a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xd8))
int32_t rax_5 = (temp1 + (temp0 & 3)) s>> 2
int32_t r12 = rax_5

if (rax_5 s<= 1)
    r12 = 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0xdc))
int32_t rax_9 = (temp3 + (temp2 & 3)) s>> 2
int32_t r13 = rax_9

if (rax_9 s<= 1)
    r13 = 1

int64_t* rax_10 = sub_1413a8300(arg1 + 0x40, arg2)
void* rcx_1 = *rax_10
int512_t zmm2
zmm2.o = *(rcx_1 + 0x2c)
int512_t zmm3
zmm3.o = *(rcx_1 + 0x30)
int64_t r15

if (data_14399f5e0.d.d f!= *(rcx_1 + 0x24) || (*(rcx_1 + 0x28)).d f!= data_14399f5e0:4.d
        || zmm2.d f!= data_14399f5e0:8.d || zmm3.d f!= data_14399f5e0:0xc.d)
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
void* r14 = arg2[8]
int64_t rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_12 = rbx_2 + 0x18

if (rax_12 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x1a)
    rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
    rax_12 = rbx_2 + 0x18

wchar16 const* const rcx_4 = u"SunMergeES2"
*(r14 + 0x30) = rax_12
wchar16 const i

do
    i = *rcx_4
    *(rbx_2 - u"SunMergeES2" + rcx_4) = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_7[0x27]

if (rax_13 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x140)
    rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_7[0x27]

*(r14 + 0x30) = rax_13
void**** rax_14 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_14 = rcx_7
*(r14 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_178, rbx_2)
*(r14 + 0x1c4) = 1
sub_1405d19b0(r14, &var_178)
int64_t var_68
*(r14 + 0x178) = var_68:7.b
*(r14 + 0x179) = 0
*(r14 + 0x1c4) = 1

if (r15.b != 0)
    sub_14199cb60(arg2[8], 1, 1, &data_14399f5e0, 0, (zx.o(0)).d, 0, 0)

zmm3.o = 0x3f800000
int64_t var_1d8 = 0
zmm2.o = zx.o(0)
int32_t var_1d0 = r12
int32_t var_1cc = r13
var_1d8.o = var_1d8.o
int32_t rdx_10
void* r9
float zmm6_1
rdx_10, r9, zmm6_1 = sub_1410b7780(arg2, &var_1d8, zmm2.o, zmm3.o)
void* rcx_14 = *arg2
int32_t rdx_12 = sbb.d(rdx_10, rdx_10, *(rcx_14 + 0x50d0) != 0) & 2
float temp5 = *(rcx_14 + 0xff8)
zmm6_1 - temp5
int32_t rax_18
rax_18.b = zmm6_1 < temp5
int32_t rdx_13 = rdx_12 + rax_18
int128_t var_1c8

if (rdx_12 == neg.d(rax_18))
    r9, zmm2, zmm3, zmm6_1 = sub_141345a50(&var_1c8, arg2)
else if (rdx_13 == 1)
    r9, zmm2, zmm3, zmm6_1 = sub_1413454b0(&var_1c8, arg2)
else if (rdx_13 == 2)
    r9, zmm2, zmm3, zmm6_1 = sub_141345690(&var_1c8, arg2)
else if (rdx_13 == 3)
    r9, zmm2, zmm3, zmm6_1 = sub_141345870(&var_1c8, arg2)
else
    var_1c8 = zx.o(0)

zmm3.o = zx.o(0)
zmm2.o = zx.o(0)
int64_t rax_19 = *(arg1 + 0xd8)
int64_t var_1e8_1 = rax_19
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rax_19.d)
var_1e8_1.d = (temp9 + (temp8 & 3)) s>> 2
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(var_1e8_1:4.d)
var_1e8_1:4.d = (temp11 + (temp10 & 3)) s>> 2
float zmm0_2 = float.s(zx.q(r13))
zmm3.d = float.s(zx.q(r12))
char var_228
var_228.d = zmm6_1
char var_238
var_238.d = zmm0_2
sub_1413993b0(arg2[8], zx.o(0), zmm2, r9, zmm3, var_238, zmm6_1, var_228, zmm3.d, zmm0_2, 
    var_1e8_1, var_1e8_1, &var_1c8, 1, 1)
sub_141096650(arg2[8])
void* r14_1 = arg2[8]
int128_t var_1b8 = data_142d57d10
int128_t zmm0_3 = data_142d57920
int64_t r13_1 = rax_10[1]
int64_t* r12_2 = *rax_10
int128_t var_1a8 = data_142d3f800
void*** rbx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_30 = &rbx_7[0xa]

if (rax_30 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x58)
    rbx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_30 = &rbx_7[0xa]

*(r14_1 + 0x30) = rax_30
*(r14_1 + 0x14) += 1
**(r14_1 + 8) = rbx_7
*(r14_1 + 8) = &rbx_7[1]
rbx_7[1] = 0
*rbx_7 = &data_142d56628
rbx_7[2].d = var_1b8.d
__builtin_memset(rbx_7 + 0x14, 0xff, 0x20)
*(rbx_7 + 0x34) = zmm0_3:4.d
rbx_7[7].d = zmm0_3:8.d
*(rbx_7 + 0x3c) = zmm0_3:0xc.d
rbx_7[8] = r12_2
rbx_7[9] = r13_1

if ((*(*r12_2 + 8))(r12_2) == 0)
    int64_t* rcx_23 = rbx_7[8]
    
    if ((*(*rcx_23 + 0x18))(rcx_23) == 0)
        int64_t* rcx_24 = rbx_7[8]
        
        if ((*(*rcx_24 + 0x20))(rcx_24) == 0)
            int64_t* rcx_25 = rbx_7[8]
            (*(*rcx_25 + 0x10))(rcx_25)

int64_t* rcx_26 = rbx_7[9]

if ((*(*rcx_26 + 8))(rcx_26) == 0)
    int64_t* rcx_27 = rbx_7[9]
    
    if ((*(*rcx_27 + 0x18))(rcx_27) == 0)
        int64_t* rcx_28 = rbx_7[9]
        
        if ((*(*rcx_28 + 0x20))(rcx_28) == 0)
            int64_t* rcx_29 = rbx_7[9]
            (*(*rcx_29 + 0x10))(rcx_29)

void* rax_51 = *arg2

if (*(rax_51 + 0x1520) == 2)
    void* rax_52 = *(rax_51 + 8)
    
    if (rax_52 != 0)
        int64_t* rcx_30 = *(arg1 + 0x90)
        int64_t* rbx_10 = *(rax_52 + 0xbb0)
        *(rax_52 + 0xbb0) = rcx_30
        
        if (rcx_30 != 0)
            (*(*rcx_30 + 0x30))()
        
        if (rbx_10 != 0)
            (*(*rbx_10 + 0x38))(rbx_10)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_258)
return result
