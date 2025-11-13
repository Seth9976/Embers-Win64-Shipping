// 函数: sub_141226020
// 地址: 0x141226020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* var_2b0
sub_1419a2ec0(arg2[0xa2a], &var_2b0, &data_143f55f90, 0)
void* r12 = var_2b0
int64_t* rax_3 = sub_14139bef0(arg1)
int32_t rcx_2 = data_1439b6364
void* rax_4 = *(rax_3 + 0x37c)
int32_t r8

if (rcx_2 s>= 1)
    r8 = 8
    
    if (rcx_2 s< 8)
        r8 = rcx_2
else
    r8 = 1

int64_t rcx_3 = arg2[0x2b3]
int128_t zmm1 = data_142d3f5a0
void* var_2c8 = rax_4
var_2c8.d = divs.dp.d(sx.q(rax_4.d), r8)
var_2c8:4.d = divs.dp.d(sx.q(var_2c8:4.d), r8)
int64_t var_2c8_1 = rcx_3
var_2c8_1.d = divs.dp.d(sx.q(rcx_3.d), r8)
void* var_2a0 = var_2c8
var_2c8_1:4.d = divs.dp.d(sx.q(var_2c8_1:4.d), r8)
int64_t rdi = var_2c8_1
var_2c8_1.d = divu.dp.d(0:(arg2[0x2b4].d - rcx_3.d), r8)
uint32_t temp0_5 = divu.dp.d(0:(*(arg2 + 0x15a4) - (rcx_3 u>> 0x20).d), r8)
int64_t rdx_5 = *(*arg4 + 8)
int64_t var_188 = rdx_5
int32_t var_b0 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x1a)
int64_t var_180 = 0
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int32_t var_178 = 0xffffffff
int16_t var_174 = 0x500
int16_t var_70
var_70:1.b = *(rdx_5 + 0x38) u> 1
void var_170
memset(&var_170, 0, 0xa8)
sub_1410e0180(arg1, &var_188)
int64_t r15_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_22 = r15_2 + 0x28

if (rax_22 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x2a)
    r15_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_22 = r15_2 + 0x28

wchar16 const* const rcx_9 = u"FinishOcclusionTerm"
*(arg1 + 0x30) = rax_22
wchar16 const i

do
    i = *rcx_9
    *(rcx_9 + r15_2 - u"FinishOcclusionTerm") = i
    rcx_9 = &rcx_9[1]
while (i != 0)
void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_23 = &rcx_12[0x27]

if (rax_23 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_12[0x27]

*(arg1 + 0x30) = rax_23
void**** rax_24 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_24 = rcx_12
*(arg1 + 8) = &rcx_12[1]
sub_1405d11b0(rcx_12, &var_188, r15_2)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_188)
uint128_t zmm6 = zx.o(var_2a0:4.d)
int64_t var_78
*(arg1 + 0x178) = var_78:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
void*** rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
zmm6 = _mm_cvtepi32_ps(zmm6)
void* rax_27 = &rcx_19[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(var_2c8.d))

if (rax_27 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_19[5]

*(arg1 + 0x30) = rax_27
void**** rax_28 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_28 = rcx_19
*(arg1 + 8) = &rcx_19[1]
rcx_19[1] = 0
*rcx_19 = &data_142d54998
*(rcx_19 + 0x1c) = zmm7.d
rcx_19[4].d = zmm6.d
rcx_19[2] = 0
rcx_19[3].d = 0
*(rcx_19 + 0x24) = 0x3f800000
int128_t var_230
__builtin_memset(&var_230, 0, 0x30)
int64_t var_1d4
__builtin_memset(&var_1d4, 0, 0x43)
int128_t var_1e8 = zx.o(0)
int16_t var_190 = 0
sub_140fdc870(arg1, &var_230)
int64_t var_200 = data_14395da00
int64_t var_1f8 = data_14395da18
int64_t var_1f0 = data_14395d9e8
sub_1419a2ec0(arg2[0xa2a], &var_2a0, &data_143e83610, 0)
var_230.q = data_1439c9210
int64_t rax_34 = 0
void* var_2a8

if (r12 != 0)
    int64_t rdx_13 = sx.q(*(r12 + 0x10c))
    int64_t* r15_6 = *(var_2a8 + 0x10)
    int64_t rax_35 = r15_6[3]
    
    if (*(rax_35 + (rdx_13 << 3)) == 0)
        sub_1419ccf30(r15_6, rdx_13.d)
        rax_35 = r15_6[3]
    
    rax_34 = *(rax_35 + (rdx_13 << 3))

void* r13_1 = var_2a0
var_230:8.q = rax_34
int64_t rax_36 = 0

if (r13_1 != 0)
    int64_t rdx_14 = sx.q(*(r13_1 + 0x10c))
    void* var_298
    int64_t* r15_7 = *(var_298 + 0x10)
    int64_t rax_38 = r15_7[3]
    
    if (*(rax_38 + (rdx_14 << 3)) == 0)
        sub_1419ccf30(r15_7, rdx_14.d)
        rax_38 = r15_7[3]
    
    rax_36 = *(rax_38 + (rdx_14 << 3))

int128_t var_210
var_210.q = rax_36
int32_t var_1d8 = 0
sub_1419870b0(arg1, &var_230, 2)
sub_141080ac0(r13_1, arg1, *(arg1 + 0x1a0), arg2[2])
int32_t r9
int32_t var_310 = r9
void* r9_3
int512_t zmm2
int512_t zmm3
r9_3, zmm2, zmm3 = sub_141215990(r13_1 + 0x118, arg1, *(arg1 + 0x1a0), arg3, arg2)
zmm2.o = zx.o(rdi:4.d)
zmm3.o = zx.o(0)
int32_t var_2d0 = 1
int32_t var_2d8 = 1
var_2b0 = r12
void* var_2a8_1 = var_2a8
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
float zmm0 = float.s(zx.q(temp0_5))
zmm3.d = float.s(zx.q(var_2c8_1.d))
void** var_2e0 = &var_2b0
uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(rdi.d))
int64_t* var_318
var_318.d = zmm0
sub_1413993b0(arg1, zmm1_2, zmm2, r9_3, zmm3, var_318.d, zmm1_2.d, zmm2.d, zmm3.d, zmm0, var_2c8, 
    var_2c8, var_2e0, var_2d8, var_2d0)
sub_141096650(arg1)
void* rax_44 = *arg4
int128_t var_290 = data_142d57d10
void*** rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int128_t zmm0_1 = data_142d57920
int128_t var_280 = data_142d3f800
int64_t r15_9 = *(rax_44 + 0x10)
int64_t* rdi_1 = *(rax_44 + 8)
void* rax_45 = &rbx_3[0xa]

if (rax_45 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x58)
    rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_45 = &rbx_3[0xa]

*(arg1 + 0x30) = rax_45
int64_t* rax_46 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_46 = rbx_3
*(arg1 + 8) = &rbx_3[1]
rbx_3[1] = 0
*rbx_3 = &data_142d56628
rbx_3[2].d = var_290.d
__builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
*(rbx_3 + 0x34) = zmm0_1:4.d
rbx_3[7].d = zmm0_1:8.d
*(rbx_3 + 0x3c) = zmm0_1:0xc.d
rbx_3[8] = rdi_1
rbx_3[9] = r15_9

if ((*(*rdi_1 + 8))(rdi_1) == 0)
    int64_t* rcx_34 = rbx_3[8]
    
    if ((*(*rcx_34 + 0x18))(rcx_34) == 0)
        int64_t* rcx_35 = rbx_3[8]
        
        if ((*(*rcx_35 + 0x20))(rcx_35) == 0)
            int64_t* rcx_36 = rbx_3[8]
            (*(*rcx_36 + 0x10))(rcx_36)

int64_t* rcx_37 = rbx_3[9]

if ((*(*rcx_37 + 8))(rcx_37) == 0)
    int64_t* rcx_38 = rbx_3[9]
    
    if ((*(*rcx_38 + 0x18))(rcx_38) == 0)
        int64_t* rcx_39 = rbx_3[9]
        
        if ((*(*rcx_39 + 0x20))(rcx_39) == 0)
            int64_t* rcx_40 = rbx_3[9]
            (*(*rcx_40 + 0x10))(rcx_40)

int64_t var_80
int64_t result = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_338)
return result
