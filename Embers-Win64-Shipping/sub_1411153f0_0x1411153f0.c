// 函数: sub_1411153f0
// 地址: 0x1411153f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_48 = arg5
void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int64_t var_2e0 = arg3
void* var_2b0
sub_1419a2ec0(*(arg2 + 0x5150), &var_2b0, &data_143e5b820, 0)
void* rax_2 = var_2b0
void* var_2a0
sub_1419a2ec0(*(arg2 + 0x5150), &var_2a0, &data_143e5bae0, 0)
void* r15 = var_2a0
void* var_298
void* var_2f0 = var_298
int64_t* var_300 = nullptr
int32_t i_6 = 0
void* var_2d8 = r15
sub_141124940(r15 + 0x14a, arg8, &var_300)
int64_t i_5 = sx.q(i_6)
int64_t* r13 = var_300
int64_t* rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t rdx_3 = (i_5 << 3).d
int64_t r14 = sx.q(rdx_3)
void* rax_5 = rbx_3 + r14

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, rdx_3 + 8)
    rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = rbx_3 + r14

*(arg1 + 0x30) = rax_5
int64_t i_3 = i_5

if (i_5.d s> 0)
    int64_t* rcx_4 = rbx_3
    int64_t i
    
    do
        *rcx_4 = *(r13 - rbx_3 + rcx_4)
        rcx_4 = &rcx_4[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

void*** rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_7[6]

if (rax_7 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_7[6]

*(arg1 + 0x30) = rax_7
void**** rax_8 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_8 = rcx_7
*(arg1 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142da7798
rcx_7[2].d = i_5.d
rcx_7[3] = rbx_3
rcx_7[4].d = 2
*(rcx_7 + 0x24) = 1
rcx_7[5] = 0
int64_t var_198
memset(&var_198, 0, 0x120)
char var_320
char var_318

if (data_143f0f1c8 != 0)
    int128_t zmm0_1 = data_143f02308
    int32_t var_1d8_1 = data_143f02318
    char var_310_1 = 0
    int32_t var_1c8_1 = 1
    int16_t var_1c0_1 = 1
    int32_t var_1b4_1 = 1
    wchar16 const* const var_1a8_1 = u"UnknownTexture2D"
    int32_t var_1d0_1 = arg7
    var_318 = 1
    var_320 = 1
    wchar16 const* const var_328_1 = u"Dummy"
    var_300 = nullptr
    int16_t var_1b0_1 = 0
    int128_t var_1e8 = zmm0_1
    int32_t var_1d4_1 = arg6
    int32_t var_1cc_1 = 0
    int32_t var_1c4_1 = 0x10000
    int64_t var_1bc_1 = 2
    int16_t var_1a0_1 = 1
    char var_19e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg1, &var_1e8, &var_300, var_328_1, var_320, var_318, var_310_1)
    int64_t* rcx_13 = var_300
    int32_t var_188_1 = 0xffffffff
    char var_184_1 = 0
    var_198 = rcx_13[1]
    (*(*rcx_13 + 0x38))()

int64_t r14_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_13 = r14_3 + 0x38

if (rax_13 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x3a)
    r14_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_13 = r14_3 + 0x38

wchar16 const* const rcx_15 = u"ScatterObjectsToShadowTiles"
*(arg1 + 0x30) = rax_13
wchar16 const i_1

do
    i_1 = *rcx_15
    *(rcx_15 + r14_3 - u"ScatterObjectsToShadowTiles") = i_1
    rcx_15 = &rcx_15[1]
while (i_1 != 0)
void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_18[0x27]

if (rax_14 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_18[0x27]

*(arg1 + 0x30) = rax_14
void**** rax_15 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_15 = rcx_18
*(arg1 + 8) = &rcx_18[1]
sub_1405d11b0(rcx_18, &var_198, r14_3)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_198)
char var_81
*(arg1 + 0x178) = var_81
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int64_t var_234
__builtin_memset(&var_234, 0, 0x43)
int128_t var_290
__builtin_memset(&var_290, 0, 0x30)
int128_t var_248 = zx.o(0)
int16_t var_1f0 = 0
sub_140fdc870(arg1, &var_290)
void*** rcx_26 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
arg5 = _mm_cvtepi32_ps(zx.o(arg7))
void* rax_18 = &rcx_26[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(arg6))

if (rax_18 u> *(arg1 + 0x38))
    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_26 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_26[5]

*(arg1 + 0x30) = rax_18
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_26
*(arg1 + 8) = &rcx_26[1]
rcx_26[1] = 0
*rcx_26 = &data_142d54998
*(rcx_26 + 0x1c) = zmm7.d
rcx_26[4].d = arg5.d
rcx_26[2] = 0
rcx_26[3].d = 0
*(rcx_26 + 0x24) = 0x3f800000
int64_t rax_21 = data_1439b5500

if (*(arg2 + 0xd34) != 0)
    rax_21 = data_1439b54e8

int64_t var_258 = rax_21
int64_t var_250 = data_14395d9e8
int64_t var_260 = data_14395da00
int64_t rax_24 = 0
var_290.q = data_1439c9410

if (rax_2 != 0)
    int64_t rdx_11 = sx.q(*(rax_2 + 0x10c))
    void* var_2a8
    int64_t* r14_7 = *(var_2a8 + 0x10)
    int64_t rax_25 = r14_7[3]
    
    if (*(rax_25 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(r14_7, rdx_11.d)
        rax_25 = r14_7[3]
    
    rax_24 = *(rax_25 + (rdx_11 << 3))
    r15 = var_2d8

var_290:8.q = rax_24
int64_t rax_26 = 0

if (r15 != 0)
    int64_t rdx_12 = sx.q(*(r15 + 0x10c))
    int64_t* r14_9 = *(var_2f0 + 0x10)
    int64_t rax_27 = r14_9[3]
    
    if (*(rax_27 + (rdx_12 << 3)) == 0)
        sub_1419ccf30(r14_9, rdx_12.d)
        rax_27 = r14_9[3]
    
    rax_26 = *(rax_27 + (rdx_12 << 3))
    r15 = var_2d8

int128_t var_270
var_270.q = rax_26
int32_t var_238 = 0
sub_1419870b0(arg1, &var_290, 2)
var_320.d = arg4.d
sub_141142c50(rax_2, arg1, arg2, 
    _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(arg6)), _mm_cvtepi32_ps(zx.o(arg7)).q)[0].q, var_2e0, 
    var_320)
int64_t rbx_7 = *(arg1 + 0x1a0)
int64_t r9_3 = *(arg2 + 0x10)
var_2e0 = rbx_7
sub_141080ac0(r15, arg1, rbx_7, r9_3)
void* rdx_16 = data_143a2dd48
var_318.q = 0
var_2f0.d = *(rdx_16 + 0x60)
var_2f0:4.d = *(rdx_16 + 0x64)
int32_t var_2e8 = *(rdx_16 + 0x68)
var_320.q = &var_2f0
sub_141118600(r15 + 0x118, arg1, rbx_7, &data_143e57960, rdx_16, var_320, var_318)
sub_1411181f0(r15 + 0x14a, arg1, &var_2e0, arg8)
void*** rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbx_8 = data_1439c9458
void* rax_32 = &rcx_42[5]

if (rax_32 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_32 = &rcx_42[5]

*(arg1 + 0x30) = rax_32
int64_t* rax_33 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_33 = rcx_42
*(arg1 + 8) = &rcx_42[1]
rcx_42[1] = 0
*rcx_42 = &data_142d56618
rcx_42[2].d = 0
rcx_42[3] = rbx_8
rcx_42[4].d = 0
int64_t rbx_9 = data_143e57968
void*** rcx_48 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r14_11 = data_1439c9470
void* rax_35 = &rcx_48[5]

if (rax_35 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_48 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_35 = &rcx_48[5]

*(arg1 + 0x30) = rax_35
int64_t* rax_36 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_36 = rcx_48
*(arg1 + 8) = &rcx_48[1]
rcx_48[1] = 0
*rcx_48 = &data_142f21880
rcx_48[2] = r14_11
rcx_48[3] = rbx_9
rcx_48[4].d = 0
sub_141096650(arg1)
sub_1410e0370(arg1)
int32_t rdx_19 = (i_5 << 3).d
int64_t r14_12 = sx.q(rdx_19)
int64_t* rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_38 = rbx_12 + r14_12

if (rax_38 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, rdx_19 + 8)
    rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_38 = rbx_12 + r14_12

*(arg1 + 0x30) = rax_38
int64_t i_4 = i_5

if (i_5.d s> 0)
    int64_t* rcx_55 = rbx_12
    int64_t i_2
    
    do
        *rcx_55 = *(r13 - rbx_12 + rcx_55)
        rcx_55 = &rcx_55[1]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

void*** rcx_58 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_40 = &rcx_58[6]

if (rax_40 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_58 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_40 = &rcx_58[6]

*(arg1 + 0x30) = rax_40
void** rax_41 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_41 = rcx_58
*(arg1 + 8) = &rcx_58[1]
rcx_58[1] = 0
*rcx_58 = &data_142da7798
rcx_58[2].d = i_5.d
rcx_58[3] = rbx_12
rcx_58[4] = 0
rcx_58[5] = 0
void var_90
int64_t result
int512_t zmm6
result, zmm6 = sub_1405d1550(&var_90)

if (r13 != 0)
    result = sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_348)
zmm6.o = var_48
return result
