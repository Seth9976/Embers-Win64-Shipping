// 函数: sub_141364640
// 地址: 0x141364640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xc8))
int32_t rax_5 = (temp1 + (temp0 & 3)) s>> 2
int32_t r12 = rax_5

if (rax_5 s<= 1)
    r12 = 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0xcc))
int32_t rax_9 = (temp3 + (temp2 & 3)) s>> 2
int32_t r13 = rax_9

if (rax_9 s<= 1)
    r13 = 1

int64_t* rax_10 = sub_1413a8300(arg1 + 0x30, arg2)
void* rcx_1 = *rax_10
int512_t zmm3
zmm3.o = *(rcx_1 + 0x30)
int64_t r14

if (data_14399f5e0.d.d f!= *(rcx_1 + 0x24) || (*(rcx_1 + 0x28)).d f!= data_14399f5e0:4.d
        || (*(rcx_1 + 0x2c)).d f!= data_14399f5e0:8.d || zmm3.d f!= data_14399f5e0:0xc.d)
    r14.b = 1
else
    r14.b = 0

int128_t zmm1 = data_142d3f5a0
void* var_178 = rcx_1
int32_t var_a0 = 0
char var_163 = (r14.b ^ 1) << 3 | 1
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
int64_t rax_12 = rbx_2 + 0x14

if (rax_12 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x16)
    rbx_2 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
    rax_12 = rbx_2 + 0x14

wchar16 const* const rcx_4 = u"SunAvgES2"
*(rsi + 0x30) = rax_12
wchar16 const i

do
    i = *rcx_4
    *(rbx_2 - u"SunAvgES2" + rcx_4) = i
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

if (r14.b != 0)
    sub_14199cb60(arg2[8], 1, 1, &data_14399f5e0, 0, (zx.o(0)).d, 0, 0)

zmm3.o = 0x3f800000
int32_t var_1c0 = r12
int64_t var_1c8 = 0
int32_t var_1bc = r13
var_1c8.o = var_1c8.o
sub_1410b7780(arg2, &var_1c8, zx.o(0), zmm3.o)
int512_t zmm2_1
int32_t zmm6_1
zmm2_1, zmm6_1 = sub_141370c10(arg2)
int64_t rax_17 = *(arg1 + 0xc8)
int64_t var_1d8_1 = rax_17
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_17.d)
var_1d8_1.d = (temp5 + (temp4 & 3)) s>> 2
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(var_1d8_1:4.d)
var_1d8_1:4.d = (temp7 + (temp6 & 3)) s>> 2
void* r9 = sub_1419a2ec0(arg2[0xc], &var_1c8, &data_143ebbed0, 0)
zmm2_1.o = zx.o(0)
zmm3.o = zx.o(0)
var_1c8.o = var_1c8.o
zmm2_1.d = float.s(zx.q(r13))
zmm3.d = float.s(zx.q(r12))
int32_t var_208 = zmm2_1.d
int32_t var_228_1 = zmm2_1.d
zmm2_1.o = zx.o(0)
sub_1413993b0(arg2[8], zx.o(0), zmm2_1, r9, zmm3, var_228_1, zmm6_1, zmm6_1, zmm3.d, var_208, 
    var_1d8_1, var_1d8_1, &var_1c8, 1, 1)
sub_141096650(arg2[8])
void* rsi_1 = arg2[8]
int128_t var_1b8 = data_142d57d10
int128_t zmm0_3 = data_142d57920
int64_t r12_1 = rax_10[1]
int64_t* r14_2 = *rax_10
int128_t var_1a8 = data_142d3f800
void*** rbx_7 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_28 = &rbx_7[0xa]

if (rax_28 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x58)
    rbx_7 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_28 = &rbx_7[0xa]

*(rsi_1 + 0x30) = rax_28
*(rsi_1 + 0x14) += 1
**(rsi_1 + 8) = rbx_7
*(rsi_1 + 8) = &rbx_7[1]
rbx_7[1] = 0
*rbx_7 = &data_142d56628
rbx_7[2].d = var_1b8.d
__builtin_memset(rbx_7 + 0x14, 0xff, 0x20)
*(rbx_7 + 0x34) = zmm0_3:4.d
rbx_7[7].d = zmm0_3:8.d
*(rbx_7 + 0x3c) = zmm0_3:0xc.d
rbx_7[8] = r14_2
rbx_7[9] = r12_1

if ((*(*r14_2 + 8))(r14_2) == 0)
    int64_t* rcx_21 = rbx_7[8]
    
    if ((*(*rcx_21 + 0x18))(rcx_21) == 0)
        int64_t* rcx_22 = rbx_7[8]
        
        if ((*(*rcx_22 + 0x20))(rcx_22) == 0)
            int64_t* rcx_23 = rbx_7[8]
            (*(*rcx_23 + 0x10))(rcx_23)

int64_t* rcx_24 = rbx_7[9]

if ((*(*rcx_24 + 8))(rcx_24) == 0)
    int64_t* rcx_25 = rbx_7[9]
    
    if ((*(*rcx_25 + 0x18))(rcx_25) == 0)
        int64_t* rcx_26 = rbx_7[9]
        
        if ((*(*rcx_26 + 0x20))(rcx_26) == 0)
            int64_t* rcx_27 = rbx_7[9]
            (*(*rcx_27 + 0x10))(rcx_27)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_248)
return result
