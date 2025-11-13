// 函数: sub_141360730
// 地址: 0x141360730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xb8) + 1)
int32_t rax_6 = (temp1 - temp0) s>> 1
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0xbc) + 1)
int32_t rax_11 = (temp3 - temp2) s>> 1
int64_t* rax_12
int512_t zmm6
rax_12, zmm6 = sub_1413a8300(arg1 + 0x20, arg2)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_1 = *rax_12
int64_t var_178 = rcx_1
int32_t var_a0 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int128_t var_88 = zmm1
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
int32_t var_168 = 0xffffffff
int16_t var_164 = 0x100
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
bool var_5f = *(rcx_1 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
void* rsi = arg2[8]
int64_t rbx_2 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_13 = rbx_2 + 0x30

if (rax_13 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x32)
    rbx_2 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
    rax_13 = rbx_2 + 0x30

wchar16 const* const rcx_4 = u"PostProcessBloomDownES2"
*(rsi + 0x30) = rax_13
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rbx_2 - u"PostProcessBloomDownES2") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_7[0x27]

if (rax_14 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x140)
    rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_7[0x27]

*(rsi + 0x30) = rax_14
void**** rax_15 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_15 = rcx_7
*(rsi + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_178, rbx_2)
*(rsi + 0x1c4) = 1
sub_1405d19b0(rsi, &var_178)
int512_t zmm3
zmm3.o = 0x3f800000
int64_t var_278 = 0
int32_t var_270 = rax_6
int32_t var_26c = rax_11
zmm6.o = zx.o(0)
int128_t var_288 = var_278.o
int64_t var_68
*(rsi + 0x178) = var_68:7.b
*(rsi + 0x179) = 0
*(rsi + 0x1c4) = 1
sub_1410b7780(arg2, &var_288, zx.o(0), zmm3.o)
void* rcx_13 = arg2[8]
int64_t var_1c4
__builtin_memset(&var_1c4, 0, 0x43)
int128_t var_220
__builtin_memset(&var_220, 0, 0x30)
int128_t var_1d8 = zx.o(0)
int16_t var_180 = 0
sub_140fdc870(rcx_13, &var_220)
int64_t var_1f0 = data_14395da00
int64_t var_1e8 = data_14395da18
int64_t var_1e0 = data_14395d9e8
void* var_230
sub_1419a2ec0(arg2[0xc], &var_230, &data_143ebadd0, 0)
void* r13_1 = var_230
sub_1419a2ec0(arg2[0xc], &var_288, &data_143ebacc0, 0)
var_220.q = data_1439c9210
int64_t rax_22 = 0
void* var_228

if (r13_1 != 0)
    int64_t rdx_11 = sx.q(*(r13_1 + 0x10c))
    int64_t* rbx_5 = *(var_228 + 0x10)
    int64_t rax_23 = rbx_5[3]
    
    if (*(rax_23 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rbx_5, rdx_11.d)
        rax_23 = rbx_5[3]
    
    rax_22 = *(rax_23 + (rdx_11 << 3))

void* rsi_1 = var_288.q
var_220:8.q = rax_22
int64_t rax_24 = 0

if (rsi_1 != 0)
    int64_t rdx_12 = sx.q(*(rsi_1 + 0x10c))
    int64_t* rbx_6 = *(var_288:8.q + 0x10)
    int64_t rax_26 = rbx_6[3]
    
    if (*(rax_26 + (rdx_12 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_12.d)
        rax_26 = rbx_6[3]
    
    rax_24 = *(rax_26 + (rdx_12 << 3))

int128_t var_200
var_200.q = rax_24
int32_t var_1c8 = 0
sub_1419870b0(arg2[8], &var_220, 2)
void* rdx_14 = arg2[8]
void* r9 = *arg2
int32_t var_298 = *(arg1 + 0xc0)
int64_t rbx_7 = *(rdx_14 + 0x188)
var_278 = rbx_7
sub_141080be0(r13_1, rdx_14, rbx_7, *(r9 + 0x10))
sub_1413aa060(r13_1 + 0x118, rbx_7, arg2, data_14395f4d0, 0, nullptr)
sub_1405eb490(arg2[8], &var_278, r13_1 + 0x210, &var_298, 0)
void* rdi_3 = arg2[8]
int64_t rbx_8 = *(rdi_3 + 0x1a0)
sub_141080ac0(rsi_1, rdi_3, rbx_8, *(*arg2 + 0x10))
int64_t* var_2e0
var_2e0.d = 0
int32_t var_2e8_1
var_2e8_1.q = data_14395f4d0
void* r9_7
int512_t zmm2_1
int32_t zmm6_1
r9_7, zmm2_1, zmm6_1 =
    j_sub_14137eb70(rsi_1 + 0x118, rdi_3, rbx_8, arg2, var_2e8_1, var_2e0.d, nullptr)
int64_t rcx_24 = *(arg1 + 0xb8)
int32_t var_2a0 = 1
zmm3.o = zx.o(0)
int32_t var_2a8 = 1
zmm2_1.o = zx.o(0)
var_288.q = r13_1
var_288:8.q = var_228
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((rcx_24 + 1).d)
var_298 = (temp5 - temp4) s>> 1
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q((rcx_24 u>> 0x20).d + 1)
int32_t var_294 = (temp7 - temp6) s>> 1
float zmm0_2 = float.s(zx.q(rax_11))
zmm3.d = float.s(zx.q(rax_6))
int64_t rax_38 = var_298.q
int64_t* var_2d8
var_2d8.d = zmm6_1
var_2e0.d = zmm6_1
sub_1413993b0(arg2[8], zx.o(0), zmm2_1, r9_7, zmm3, zmm0_2, var_2e0.d, var_2d8.d, zmm3.d, zmm0_2, 
    rax_38, rax_38, &var_288, var_2a8, var_2a0)
sub_141096650(arg2[8])
void* rdi_4 = arg2[8]
int128_t var_268 = data_142d57d10
int128_t zmm0_3 = data_142d57920
int64_t r12_2 = rax_12[1]
int64_t* r15_2 = *rax_12
int128_t var_258 = data_142d3f800
void*** rbx_11 = (*(rdi_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_39 = &rbx_11[0xa]

if (rax_39 u> *(rdi_4 + 0x38))
    sub_140b0e3d0(rdi_4 + 0x30, 0x58)
    rbx_11 = (*(rdi_4 + 0x30) + 7) & 0xfffffffffffffff8
    rax_39 = &rbx_11[0xa]

*(rdi_4 + 0x30) = rax_39
*(rdi_4 + 0x14) += 1
**(rdi_4 + 8) = rbx_11
*(rdi_4 + 8) = &rbx_11[1]
rbx_11[1] = 0
*rbx_11 = &data_142d56628
rbx_11[2].d = var_268.d
__builtin_memset(rbx_11 + 0x14, 0xff, 0x20)
*(rbx_11 + 0x34) = zmm0_3:4.d
rbx_11[7].d = zmm0_3:8.d
*(rbx_11 + 0x3c) = zmm0_3:0xc.d
rbx_11[8] = r15_2
rbx_11[9] = r12_2

if ((*(*r15_2 + 8))(r15_2) == 0)
    int64_t* rcx_30 = rbx_11[8]
    
    if ((*(*rcx_30 + 0x18))(rcx_30) == 0)
        int64_t* rcx_31 = rbx_11[8]
        
        if ((*(*rcx_31 + 0x20))(rcx_31) == 0)
            int64_t* rcx_32 = rbx_11[8]
            (*(*rcx_32 + 0x10))(rcx_32)

int64_t* rcx_33 = rbx_11[9]

if ((*(*rcx_33 + 8))(rcx_33) == 0)
    int64_t* rcx_34 = rbx_11[9]
    
    if ((*(*rcx_34 + 0x18))(rcx_34) == 0)
        int64_t* rcx_35 = rbx_11[9]
        
        if ((*(*rcx_35 + 0x20))(rcx_35) == 0)
            int64_t* rcx_36 = rbx_11[9]
            (*(*rcx_36 + 0x10))(rcx_36)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_308)
return result
