// 函数: sub_141116c80
// 地址: 0x141116c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t rbx = arg3.d
void* var_2b0
sub_1419a2ec0(*(arg2 + 0x5150), &var_2b0, &data_143e57370, 0)
void* rax_2 = var_2b0
void* var_2a0
sub_1419a2ec0(*(arg2 + 0x5150), &var_2a0, &data_143e59c40, 0)
void* rax_4 = var_2a0
void* rdx_2 = *(arg2 + 8)
int64_t* var_2f8 = nullptr
int32_t i_6 = 0
sub_141124a40(rax_4 + 0x168, *(rdx_2 + 0xd40), &var_2f8)
int64_t i_5 = sx.q(i_6)
int64_t* r13 = var_2f8
int64_t* r14_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t rdx_4 = (i_5 << 3).d
int64_t r15 = sx.q(rdx_4)
void* rax_5 = r15 + r14_2

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, rdx_4 + 8)
    r14_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = r15 + r14_2

*(arg1 + 0x30) = rax_5
int64_t i_3 = i_5

if (i_5.d s> 0)
    int64_t* rcx_5 = r14_2
    int64_t i
    
    do
        *rcx_5 = *(r13 - r14_2 + rcx_5)
        rcx_5 = &rcx_5[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_8[6]

if (rax_7 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_8[6]

*(arg1 + 0x30) = rax_7
void**** rax_8 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_8 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[3] = r14_2
rcx_8[1] = 0
*rcx_8 = &data_142da7798
rcx_8[5] = 0
rcx_8[2].d = i_5.d
rcx_8[4].d = 2
*(rcx_8 + 0x24) = 1
int64_t var_198
memset(&var_198, 0, 0x120)
int32_t r15_1 = arg3:4.d

if (data_143f0f1c8 != 0)
    int128_t zmm0_1 = data_143f02308
    int32_t var_1d8_1 = data_143f02318
    char var_300_1 = 0
    int32_t var_1c8_1 = 1
    int16_t var_1c0_1 = 1
    int32_t var_1b4_1 = 1
    wchar16 const* const var_1a8_1 = u"UnknownTexture2D"
    char var_308_1 = 1
    char var_310_1 = 1
    wchar16 const* const var_318_1 = u"Dummy"
    var_2f8 = nullptr
    int16_t var_1b0_1 = 0
    int128_t var_1e8 = zmm0_1
    int32_t var_1d4_1 = rbx
    int32_t var_1d0_1 = r15_1
    int32_t var_1cc_1 = 0
    int32_t var_1c4_1 = 0x10000
    int64_t var_1bc_1 = 2
    int16_t var_1a0_1 = 1
    char var_19e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg1, &var_1e8, &var_2f8, var_318_1, var_310_1, var_308_1, 
        var_300_1)
    int64_t* rcx_13 = var_2f8
    int32_t var_188_1 = 0xffffffff
    char var_184_1 = 0
    var_198 = rcx_13[1]
    (*(*rcx_13 + 0x38))()

int64_t r14_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_13 = r14_7 + 0x2c

if (rax_13 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x2e)
    r14_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_13 = r14_7 + 0x2c

wchar16 const* const rcx_15 = u"ScatterTilesToObjects"
*(arg1 + 0x30) = rax_13
wchar16 const i_1

do
    i_1 = *rcx_15
    *(rcx_15 + r14_7 - u"ScatterTilesToObjects") = i_1
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
sub_1405d11b0(rcx_18, &var_198, r14_7)
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
arg5 = _mm_cvtepi32_ps(zx.o(r15_1))
void* rax_18 = &rcx_26[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rbx))

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
int32_t var_238 = 0
int64_t rax_24 = 0
var_290.q = data_1439c9410

if (rax_2 != 0)
    int64_t rdx_12 = sx.q(*(rax_2 + 0x10c))
    void* var_2a8
    int64_t* r14_11 = *(var_2a8 + 0x10)
    int64_t rax_25 = r14_11[3]
    
    if (*(rax_25 + (rdx_12 << 3)) == 0)
        sub_1419ccf30(r14_11, rdx_12.d)
        rax_25 = r14_11[3]
    
    rax_24 = *(rax_25 + (rdx_12 << 3))

var_290:8.q = rax_24
int64_t rax_26 = 0

if (rax_4 != 0)
    int64_t rdx_13 = sx.q(*(rax_4 + 0x10c))
    void* var_298
    int64_t* r14_13 = *(var_298 + 0x10)
    int64_t rax_27 = r14_13[3]
    
    if (*(rax_27 + (rdx_13 << 3)) == 0)
        sub_1419ccf30(r14_13, rdx_13.d)
        rax_27 = r14_13[3]
    
    rax_26 = *(rax_27 + (rdx_13 << 3))

int128_t var_270
var_270.q = rax_26
sub_1419870b0(arg1, &var_290, 2)
sub_141145860(rax_2, arg1, arg2, arg4)
sub_141142490(rax_4, arg1, arg2, 
    _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(rbx)), _mm_cvtepi32_ps(zx.o(r15_1)).q)[0].q, arg4)
int64_t rbx_1 = data_1439b6478
void*** rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_28 = &rcx_40[5]

if (rax_28 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_28 = &rcx_40[5]

*(arg1 + 0x30) = rax_28
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_40
*(arg1 + 8) = &rcx_40[1]
rcx_40[1] = 0
*rcx_40 = &data_142d56618
rcx_40[2].d = 0
rcx_40[3] = rbx_1
rcx_40[4].d = 0
int64_t rbx_2 = data_143e570b8
int64_t r14_14 = data_1439b6498
void*** rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_31 = &rcx_46[5]

if (rax_31 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_31 = &rcx_46[5]

*(arg1 + 0x30) = rax_31
int64_t* rax_32 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_32 = rcx_46
*(arg1 + 8) = &rcx_46[1]
rcx_46[1] = 0
*rcx_46 = &data_142f21880
rcx_46[2] = r14_14
rcx_46[3] = rbx_2
rcx_46[4].d = 0
sub_141096650(arg1)
sub_1410e0370(arg1)
int32_t rdx_17 = (i_5 << 3).d
int64_t r14_15 = sx.q(rdx_17)
int64_t* rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_34 = rbx_5 + r14_15

if (rax_34 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, rdx_17 + 8)
    rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_34 = rbx_5 + r14_15

*(arg1 + 0x30) = rax_34
int64_t i_4 = i_5

if (i_5.d s> 0)
    int64_t* rcx_53 = rbx_5
    int64_t i_2
    
    do
        *rcx_53 = *(r13 - rbx_5 + rcx_53)
        rcx_53 = &rcx_53[1]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

void*** rcx_56 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_36 = &rcx_56[6]

if (rax_36 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_56 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_36 = &rcx_56[6]

*(arg1 + 0x30) = rax_36
void** rax_37 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_37 = rcx_56
*(arg1 + 8) = &rcx_56[1]
rcx_56[1] = 0
*rcx_56 = &data_142da7798
rcx_56[2].d = i_5.d
rcx_56[3] = rbx_5
rcx_56[4] = 2
rcx_56[5] = 0
void var_90
int64_t result
int512_t zmm6
result, zmm6 = sub_1405d1550(&var_90)

if (r13 != 0)
    result = sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_338)
zmm6.o = var_58
return result
