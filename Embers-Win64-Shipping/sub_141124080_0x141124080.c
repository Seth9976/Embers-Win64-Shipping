// 函数: sub_141124080
// 地址: 0x141124080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_48 = arg5
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t* rax_3 = sub_14139bef0(arg1)
int128_t zmm1 = data_142d3f5a0
int64_t rdx = *(*arg3 + 8)
int64_t var_188 = rdx
int32_t var_b0 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int64_t var_88
__builtin_memset(&var_88, 0, 0x19)
int64_t var_180 = 0
int32_t var_178 = 0xffffffff
int16_t var_174 = 0x500
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
bool var_6f = *(rdx + 0x38) u> 1
void var_170
memset(&var_170, 0, 0xa8)
int64_t rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rbx_2 + 0x2c

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x2e)
    rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rbx_2 + 0x2c

wchar16 const* const rcx_3 = u"GeometryAwareUpsample"
*(arg1 + 0x30) = rax_4
wchar16 const i

do
    i = *rcx_3
    *(rcx_3 + rbx_2 - u"GeometryAwareUpsample") = i
    rcx_3 = &rcx_3[1]
while (i != 0)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_6[0x27]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_6[0x27]

*(arg1 + 0x30) = rax_5
void**** rax_6 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_6 = rcx_6
*(arg1 + 8) = &rcx_6[1]
sub_1405d11b0(rcx_6, &var_188, rbx_2)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_188)
int64_t var_78
*(arg1 + 0x178) = var_78:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int128_t var_238
__builtin_memset(&var_238, 0, 0x30)
int64_t var_1dc
__builtin_memset(&var_1dc, 0, 0x43)
int128_t var_1f0 = zx.o(0)
int16_t var_198 = 0
sub_140fdc870(arg1, &var_238)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg2 + 0x15a0) - *(arg2 + 0x1598))
arg5 = _mm_cvtepi32_ps(zx.o((temp1 - temp0) s>> 1))
void* rax_19 = &rcx_14[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o((temp3 - temp2) s>> 1))

if (rax_19 u> *(arg1 + 0x38))
    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_14[5]

*(arg1 + 0x30) = rax_19
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_14
*(arg1 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142d54998
*(rcx_14 + 0x1c) = zmm7.d
rcx_14[4].d = arg5.d
rcx_14[2] = 0
rcx_14[3].d = 0
*(rcx_14 + 0x24) = 0x3f800000
int64_t var_200 = data_14395da18
int64_t var_1f8 = data_14395d9e8
int64_t var_208 = data_14395da00
void* var_248
sub_1419a2ec0(*(arg2 + 0x5150), &var_248, &data_143ed5e80, 0)
void* rcx_19 = var_248
var_238.q = data_1439c9210
int64_t rax_26 = 0

if (rcx_19 != 0)
    int64_t rdx_9 = sx.q(*(rcx_19 + 0x10c))
    void* var_240
    int64_t* rbx_5 = *(var_240 + 0x10)
    int64_t rax_28 = rbx_5[3]
    
    if (*(rax_28 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_5, rdx_9.d)
        rax_28 = rbx_5[3]
    
    rax_26 = *(rax_28 + (rdx_9 << 3))

var_238:8.q = rax_26
int32_t var_1e0 = 0
void* var_298
sub_1419a2ec0(*(arg2 + 0x5150), &var_298, &data_143e56f70, 0)
void* r15_2 = var_298
int64_t rax_29 = 0

if (r15_2 != 0)
    int64_t rdx_11 = sx.q(*(r15_2 + 0x10c))
    void* var_290
    int64_t* rbx_6 = *(var_290 + 0x10)
    int64_t rax_31 = rbx_6[3]
    
    if (*(rax_31 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rbx_6, rdx_11.d)
        rax_31 = rbx_6[3]
    
    rax_29 = *(rax_31 + (rdx_11 << 3))

int128_t var_218
var_218.q = rax_29
sub_1419870b0(arg1, &var_238, 2)
int64_t rbx_7 = *(arg1 + 0x1a0)
sub_141080ac0(r15_2, arg1, rbx_7, *(arg2 + 0x10))
int32_t var_2f0 = arg6
void* r9_3
int512_t zmm2
r9_3, zmm2 = sub_14113bbe0(r15_2 + 0x136, arg1, rbx_7, arg2, 
    sub_1411180a0(r15_2 + 0x118, arg1, rbx_7, arg7), arg4)
zmm2.o = zx.o(0)
int32_t var_2b0 = 1
int32_t var_2b8 = 0
var_298.o = var_248.o
int64_t rax_35 = *(rax_3 + 0x37c)
int64_t var_2a8_1 = rax_35
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_35.d)
var_2a8_1.d = (temp5 - temp4) s>> 1
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(var_2a8_1:4.d)
var_2a8_1:4.d = (temp7 - temp6) s>> 1
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(*(arg2 + 0x15a0) - *(arg2 + 0x1598))
int32_t rax_47 = (temp9 - temp8) s>> 1
int32_t* var_2a0
var_2a0.d = rax_47
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
int512_t zmm3
zmm3.o = zx.o(rax_47)
int32_t rax_52 = (temp11 - temp10) s>> 1
var_2a0:4.d = rax_52
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
void** var_2c0 = &var_298
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_52))
void* var_2f8
var_2f8.d = zmm0.d
sub_1413993b0(arg1, zx.o(0), zmm2, r9_3, zmm3, var_2f8.d, 0, 0, zmm3.d, zmm0.d, var_2a0, var_2a8_1, 
    var_2c0, var_2b8, var_2b0)
sub_141096650(arg1)
int128_t var_288 = data_142d57d10
int128_t zmm0_1 = data_142d57920
int128_t var_278 = data_142d3f800
void* rax_55 = *arg3
void*** rbx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r15_3 = *(rax_55 + 0x10)
int64_t* r14_1 = *(rax_55 + 8)
void* rax_56 = &rbx_10[0xa]

if (rax_56 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x58)
    rbx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_56 = &rbx_10[0xa]

*(arg1 + 0x30) = rax_56
int64_t* rax_57 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_57 = rbx_10
*(arg1 + 8) = &rbx_10[1]
rbx_10[1] = 0
*rbx_10 = &data_142d56628
rbx_10[2].d = var_288.d
__builtin_memset(rbx_10 + 0x14, 0xff, 0x20)
*(rbx_10 + 0x34) = zmm0_1:4.d
rbx_10[7].d = zmm0_1:8.d
*(rbx_10 + 0x3c) = zmm0_1:0xc.d
rbx_10[8] = r14_1
rbx_10[9] = r15_3

if ((*(*r14_1 + 8))(r14_1) == 0)
    int64_t* rcx_32 = rbx_10[8]
    
    if ((*(*rcx_32 + 0x18))(rcx_32) == 0)
        int64_t* rcx_33 = rbx_10[8]
        
        if ((*(*rcx_33 + 0x20))(rcx_33) == 0)
            int64_t* rcx_34 = rbx_10[8]
            (*(*rcx_34 + 0x10))(rcx_34)

int64_t* rcx_35 = rbx_10[9]

if ((*(*rcx_35 + 8))(rcx_35) == 0)
    int64_t* rcx_36 = rbx_10[9]
    
    if ((*(*rcx_36 + 0x18))(rcx_36) == 0)
        int64_t* rcx_37 = rbx_10[9]
        
        if ((*(*rcx_37 + 0x20))(rcx_37) == 0)
            int64_t* rcx_38 = rbx_10[9]
            (*(*rcx_38 + 0x10))(rcx_38)

int64_t var_80
int64_t result
int512_t zmm6_1
result, zmm6_1 = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_318)
zmm6_1.o = var_48
return result
