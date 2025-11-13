// 函数: sub_1412e8e50
// 地址: 0x1412e8e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int64_t* rcx_1 = *sub_14139d440(&data_143ec4c60)
int64_t rdx = *rcx_1
int128_t* rax_4 = (*(rdx + 0x10))(rcx_1, rdx)
char var_390 = 0
char var_398 = 1
char var_3a0 = 1
int128_t var_e8 = *rax_4
int128_t var_d8 = rax_4[1]
int128_t var_c8 = rax_4[2]
int128_t zmm1 = rax_4[3]
int128_t var_b8 = zmm1
int128_t zmm0 = rax_4[4]
int64_t* var_350 = nullptr
int128_t var_a8 = zmm0
var_b8.d = zmm1.d & 0x7fefffff
sub_1419a0ce0(&data_1439c9260, arg2, &var_e8, &var_350, VarianceMipTreeRT", var_3a0, var_398, 
    var_390)
int64_t* rax_8 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
void* var_2c8
sub_1419a2ec0(rax_8, &var_2c8, &data_143ed5e80, 0)
void* r12 = var_2c8
void* var_338
sub_1419a2ec0(rax_8, &var_338, &data_143e900b0, 0)
void* r13 = var_338
int64_t* rax_10 = sub_14139d440(&data_143ec4c60)
int128_t zmm1_1 = data_142d3f5a0
int64_t rdx_4 = *(*rax_10 + 8)
int64_t rcx_6 = var_350[1]
int32_t var_130 = 0
int64_t var_108
__builtin_memset(&var_108, 0, 0x1a)
int64_t var_200 = 0
int32_t var_12c
__builtin_memset(&var_12c, 0xff, 0x14)
int128_t var_118 = zmm1_1
int64_t var_208 = rdx_4
int32_t var_1f8 = 0xffffffff
int64_t var_1f0 = rcx_6
int16_t var_1f4 = 0x500
int64_t var_1e8 = 0
int32_t var_1e0 = 0xffffffff
int16_t var_1dc = 0x500
int64_t var_148
__builtin_memset(&var_148, 0, 0x11)
int32_t var_134 = 0
void var_1d8
memset(&var_1d8, 0, 0x90)
int64_t rbx_4 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_12 = rbx_4 + 0x3c

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x3e)
    rbx_4 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_12 = rbx_4 + 0x3c

wchar16 const* const rcx_9 = u"VarianceMipTree Visualization"
*(arg2 + 0x30) = rax_12
wchar16 const i

do
    i = *rcx_9
    *(rcx_9 + rbx_4 - u"VarianceMipTree Visualization") = i
    rcx_9 = &rcx_9[1]
while (i != 0)
void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_12[0x27]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_12[0x27]

*(arg2 + 0x30) = rax_13
void**** rax_14 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_14 = rcx_12
*(arg2 + 8) = &rcx_12[1]
sub_1405d11b0(rcx_12, &var_208, rbx_4)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_208)
int64_t var_f8
*(arg2 + 0x178) = var_f8:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int64_t var_25c
__builtin_memset(&var_25c, 0, 0x43)
int128_t var_2b8
__builtin_memset(&var_2b8, 0, 0x30)
int128_t var_270 = zx.o(0)
int16_t var_218 = 0
sub_140fdc870(arg2, &var_2b8)
int64_t var_288 = data_1439b57b8
int64_t var_280 = data_14395da18
int64_t var_278 = data_14395d9e8
var_2b8.q = data_1439c9210
int64_t rax_21 = 0
void* var_2c0

if (r12 != 0)
    int64_t rdx_10 = sx.q(*(r12 + 0x10c))
    int64_t* rbx_8 = *(var_2c0 + 0x10)
    int64_t rax_22 = rbx_8[3]
    
    if (*(rax_22 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rbx_8, rdx_10.d)
        rax_22 = rbx_8[3]
    
    rax_21 = *(rax_22 + (rdx_10 << 3))

var_2b8:8.q = rax_21
int64_t rax_23 = 0

if (r13 != 0)
    void* var_330
    int64_t* rbx_9 = *(var_330 + 0x10)
    int64_t rdx_11 = sx.q(*(r13 + 0x10c))
    int64_t rax_24 = rbx_9[3]
    
    if (*(rax_24 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rbx_9, rdx_11.d)
        rax_24 = rbx_9[3]
    
    rax_23 = *(rax_24 + (rdx_11 << 3))

int128_t var_298
var_298.q = rax_23
int32_t var_260 = 0
sub_1419870b0(arg2, &var_2b8, 2)
int64_t* rbx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_25 = arg4[1]
void* rcx_21 = &rbx_12[1]

if (rcx_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_21 = &rbx_12[1]

*(arg2 + 0x30) = rcx_21
*rbx_12 = rax_25
void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_26 = &rcx_25[6]

if (rax_26 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_26 = &rcx_25[6]

*(arg2 + 0x30) = rax_26
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_25
*(arg2 + 8) = &rcx_25[1]
rcx_25[3] = rbx_12
rcx_25[1] = 0
*rcx_25 = &data_142da7798
rcx_25[4].d = 0
rcx_25[5] = 0
rcx_25[2].d = 1
*(rcx_25 + 0x24) = 1
uint128_t zmm7 = zx.o(*(arg3 + 0x15a0))
void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm8 = zx.o(*(arg3 + 0x159c))
uint128_t zmm9 = zx.o(*(arg3 + 0x1598))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4)))
void* rax_29 = &rcx_31[5]
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_29 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_29 = &rcx_31[5]

*(arg2 + 0x30) = rax_29
void** rax_30 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_30 = rcx_31
*(arg2 + 8) = &rcx_31[1]
rcx_31[1] = 0
*rcx_31 = &data_142d54998
rcx_31[2].d = zmm9.d
*(rcx_31 + 0x14) = zmm8.d
*(rcx_31 + 0x1c) = zmm7.d
rcx_31[4].d = zmm6.d
rcx_31[3].d = 0
*(rcx_31 + 0x24) = 0x3f800000
int32_t rax_33 = arg5[1].d
int64_t var_2d8 = *arg5
int32_t var_2d0 = rax_33
sub_141257960(r13, arg2, arg3, &var_2d8, arg4)
int32_t rdx_14 = *(arg3 + 0x159c)
int32_t rcx_37 = *(arg3 + 0x15a4) - rdx_14
void* r9_2 = zx.q(*(arg3 + 0x1598))
int32_t var_360 = 1
int32_t r8_4 = *(arg3 + 0x15a0) - r9_2.d
int32_t var_368 = 0
int512_t zmm2
zmm2.o = zx.o(rcx_37)
void* var_358
var_358:4.d = rcx_37
void** var_370 = &var_338
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
void* var_330_1 = var_2c0
int64_t rax_35 = data_143ec4fdc
var_358.d = r8_4
int32_t var_388 = zmm2.d
int512_t zmm3
zmm3.o = zx.o(r8_4)
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
var_338 = r12
var_390.d = zmm3.d
uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(r9_2.d))
var_398.d = _mm_cvtepi32_ps(zx.o(rdx_14)).d
var_3a0.d = zmm1_2.d
void** var_3a8_1
var_3a8_1.d = zmm2.d
zmm2.o = zx.o(0)
sub_1413993b0(arg2, zx.o(0), zmm2, r9_2, zmm3, var_3a8_1.d, var_3a0, var_398, var_390, var_388, 
    var_358, rax_35, var_370, var_368, var_360)
sub_141427c70(arg1, arg2)
sub_141096650(arg2)
int64_t rax_37 = arg4[1]
int64_t* rbx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_41 = &rbx_17[1]

if (rcx_41 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_41 = &rbx_17[1]

*(arg2 + 0x30) = rcx_41
*rbx_17 = rax_37
void*** rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_38 = &rcx_45[6]

if (rax_38 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_38 = &rcx_45[6]

*(arg2 + 0x30) = rax_38
*(arg2 + 0x14) += 1
int128_t zmm1_3 = data_142d3f800
int128_t var_328 = data_142d57d10
**(arg2 + 8) = rcx_45
int128_t zmm0_3 = data_142d57920
*(arg2 + 8) = &rcx_45[1]
rcx_45[1] = 0
rcx_45[3] = rbx_17
*rcx_45 = &data_142da7798
rcx_45[2].d = 1
rcx_45[4] = 2
rcx_45[5] = 0
int64_t* rax_41 = var_350
void*** rbx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int128_t var_318 = zmm1_3
int64_t r15_4 = rax_41[2]
int64_t* r14_1 = rax_41[1]
void* rax_42 = &rbx_22[0xa]

if (rax_42 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_42 = &rbx_22[0xa]

*(arg2 + 0x30) = rax_42
int64_t* rax_43 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_43 = rbx_22
*(arg2 + 8) = &rbx_22[1]
rbx_22[1] = 0
*rbx_22 = &data_142d56628
rbx_22[2].d = var_328.d
__builtin_memset(rbx_22 + 0x14, 0xff, 0x20)
*(rbx_22 + 0x34) = zmm0_3:4.d
rbx_22[7].d = zmm0_3:8.d
*(rbx_22 + 0x3c) = zmm0_3:0xc.d
rbx_22[8] = r14_1
rbx_22[9] = r15_4

if ((*(*r14_1 + 8))(r14_1) == 0)
    int64_t* rcx_51 = rbx_22[8]
    
    if ((*(*rcx_51 + 0x18))(rcx_51) == 0)
        int64_t* rcx_52 = rbx_22[8]
        
        if ((*(*rcx_52 + 0x20))(rcx_52) == 0)
            int64_t* rcx_53 = rbx_22[8]
            (*(*rcx_53 + 0x10))(rcx_53)

int64_t* rcx_54 = rbx_22[9]

if ((*(*rcx_54 + 8))(rcx_54) == 0)
    int64_t* rcx_55 = rbx_22[9]
    
    if ((*(*rcx_55 + 0x18))(rcx_55) == 0)
        int64_t* rcx_56 = rbx_22[9]
        
        if ((*(*rcx_56 + 0x20))(rcx_56) == 0)
            int64_t* rcx_57 = rbx_22[9]
            (*(*rcx_57 + 0x10))(rcx_57)

int64_t var_100
int64_t result = sub_1405d1550(&var_100)
int64_t* rcx_59 = var_350

if (rcx_59 != 0)
    result = (*(*rcx_59 + 0x38))(rcx_59)

__security_check_cookie(rax_1 ^ &var_3c8)
return result
