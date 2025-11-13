// 函数: sub_141363390
// 地址: 0x141363390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
void* rax_4 = sub_14139d290((*(*arg1 + 0x10))(arg1, 0))
int32_t r13 = *(arg1 + 0x34)
int32_t rax_5 = arg1[7].d
int64_t* rbx_1 = *(rax_4 + 0x50) + 8
int32_t rax_6 = sub_1422e5a30(*arg2)
int32_t var_2b8 = rax_6

if (rax_6 u> 0x1f || not(test_bit(0xc8451800, rax_6)))
    if (*(&data_143f025f0 + sx.q(rax_6) * 0x14) == data_143f025b0)
        goto label_14136362e
    
    uint64_t rax_8 = sub_1422e5a30(*arg2)
    int32_t var_2b4_1 = rax_8.d
    
    if (rax_8.d u<= 0x30 && test_bit(0x1000030320000, rax_8))
        goto label_14136362e
    
    if (*(&data_143f025f0 + sx.q(rax_8.d) * 0x14) == data_143f025c0)
        goto label_14136362e
    
    int128_t zmm1 = data_142d3f5a0
    int64_t rcx_5 = *(data_1439b70c8 + 8)
    int64_t var_168 = rcx_5
    int32_t var_90_1 = 0
    int32_t var_8c
    __builtin_memset(&var_8c, 0xff, 0x14)
    int128_t var_78_1 = zmm1
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x19)
    int64_t var_160_1 = 0
    int32_t var_158_1 = 0xffffffff
    int16_t var_154_1 = 0
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x11)
    int32_t var_94_1 = 0
    bool var_4f_1 = *(rcx_5 + 0x38) u> 1
    void var_150
    memset(&var_150, 0, 0xa8)
    void* r15_1 = arg2[8]
    int64_t rbx_4 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_11 = rbx_4 + 0x14
    
    if (rax_11 u> *(r15_1 + 0x38))
        sub_140b0e3d0(r15_1 + 0x30, 0x16)
        rbx_4 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_11 = rbx_4 + 0x14
    
    wchar16 const* const rcx_8 = u"Histogram"
    *(r15_1 + 0x30) = rax_11
    wchar16 const i
    
    do
        i = *rcx_8
        *(rbx_4 - u"Histogram" + rcx_8) = i
        rcx_8 = &rcx_8[1]
    while (i != 0)
    void*** rcx_11 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_11[0x27]
    
    if (rax_12 u> *(r15_1 + 0x38))
        sub_140b0e3d0(r15_1 + 0x30, 0x140)
        rcx_11 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_11[0x27]
    
    *(r15_1 + 0x30) = rax_12
    void**** rax_13 = *(r15_1 + 8)
    *(r15_1 + 0x14) += 1
    *rax_13 = rcx_11
    *(r15_1 + 8) = &rcx_11[1]
    sub_1405d11b0(rcx_11, &var_168, rbx_4)
    *(r15_1 + 0x1c4) = 1
    sub_1405d19b0(r15_1, &var_168)
    int64_t var_58
    *(r15_1 + 0x178) = var_58:7.b
    *(r15_1 + 0x179) = 0
    *(r15_1 + 0x1c4) = 1
    sub_141096650(arg2[8])
    int64_t var_60
    sub_1405d1550(&var_60)
else
label_14136362e:
    int64_t rax_16 = *rbx_1
    void* rsi_1 = arg2[8]
    int64_t* rbx_9 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_18 = &rbx_9[1]
    
    if (rcx_18 u> *(rsi_1 + 0x38))
        sub_140b0e3d0(rsi_1 + 0x30, 0x10)
        rbx_9 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_18 = &rbx_9[1]
    
    *(rsi_1 + 0x30) = rcx_18
    *rbx_9 = rax_16
    void*** rcx_22 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_22[5]
    
    if (rax_17 u> *(rsi_1 + 0x38))
        sub_140b0e3d0(rsi_1 + 0x30, 0x30)
        rcx_22 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_22[5]
    
    *(rsi_1 + 0x30) = rax_17
    void**** rax_18 = *(rsi_1 + 8)
    *(rsi_1 + 0x14) += 1
    *rax_18 = rcx_22
    *(rsi_1 + 8) = &rcx_22[1]
    rcx_22[1] = 0
    *rcx_22 = &data_142d549c8
    rcx_22[2].d = 1
    rcx_22[3] = rbx_9
    rcx_22[4].d = 0

int128_t var_288
sub_1419a2ec0(arg2[0xc], &var_288, &data_143ebc200, 0)
int128_t zmm0 = var_288
void* r15_2 = nullptr
void* rax_20 = zmm0.q
int128_t var_2d8 = zmm0

if (rax_20 != 0)
    int64_t rdx_7 = sx.q(*(rax_20 + 0x10c))
    int64_t* rbx_12 = *(var_288:8.q + 0x10)
    int64_t r15_3 = rbx_12[3]
    
    if (*(r15_3 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(rbx_12, rdx_7.d)
        r15_3 = rbx_12[3]
    
    r15_2 = *(r15_3 + (rdx_7 << 3))

void* rbx_13 = arg2[8]
*(rbx_13 + 0x1b0) = r15_2
sub_14198aa60(r15_2)
void*** rcx_31 = (*(rbx_13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_31[3]

if (rax_22 u> *(rbx_13 + 0x38))
    sub_140b0e3d0(rbx_13 + 0x30, 0x20)
    rcx_31 = (*(rbx_13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_31[3]

*(rbx_13 + 0x30) = rax_22
int64_t r8_2 = 0
*(rbx_13 + 0x14) += 1
int32_t var_2e0 = 0
int32_t var_2dc = r13
**(rbx_13 + 8) = rcx_31
*(rbx_13 + 8) = &rcx_31[1]
rcx_31[1] = 0
rcx_31[2] = r15_2
void* r15_4 = var_2d8.q
*rcx_31 = &data_142dd5b40
int64_t var_2e8 = *(data_143eba988 + 0x20)

if (r15_4 != 0)
    int64_t rdx_8 = sx.q(*(r15_4 + 0x10c))
    int64_t* rbx_14 = *(var_2d8:8.q + 0x10)
    int64_t rax_27 = rbx_14[3]
    
    if (*(rax_27 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_14, rdx_8.d)
        rax_27 = rbx_14[3]
    
    r8_2 = *(rax_27 + (rdx_8 << 3))

sub_14133e950(arg2[8], &var_2d8, r8_2, &var_2e8)
sub_1419cd1c0(arg2[8], r15_4, (r13 + 0x3f) u>> 6, rax_5, 1)
void* rcx_39 = arg2[8]
sub_14116d320(rcx_39, &var_2d8, *(rcx_39 + 0x1b0))
void* r15_5 = arg2[8]
int64_t rcx_40 = *(data_143eba988 + 0x20)
int64_t* rbx_17 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_29 = &rbx_17[1]

if (rax_29 u> *(r15_5 + 0x38))
    sub_140b0e3d0(r15_5 + 0x30, 0x10)
    rbx_17 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
    rax_29 = &rbx_17[1]

*(r15_5 + 0x30) = rax_29
*rbx_17 = rcx_40
void*** rcx_44 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_30 = &rcx_44[6]

if (rax_30 u> *(r15_5 + 0x38))
    sub_140b0e3d0(r15_5 + 0x30, 0x38)
    rcx_44 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
    rax_30 = &rcx_44[6]

*(r15_5 + 0x30) = rax_30
void**** rax_31 = *(r15_5 + 8)
*(r15_5 + 0x14) += 1
*rax_31 = rcx_44
*(r15_5 + 8) = &rcx_44[1]
rcx_44[1] = 0
*rcx_44 = &data_142da7798
rcx_44[2].d = 1
rcx_44[3] = rbx_17
rcx_44[4].d = 2
*(rcx_44 + 0x24) = 3
rcx_44[5] = 0
void* rax_33 = sub_14139ce70(arg1)
uint128_t var_278
sub_1419a2ec0(arg2[0xc], &var_278, &data_143ebc530, 0)
uint128_t zmm0_1 = var_278
void* r15_6 = nullptr
void* rcx_50 = zmm0_1.q
uint128_t var_2c8 = zmm0_1

if (rcx_50 != 0)
    int64_t rdx_14 = sx.q(*(rcx_50 + 0x10c))
    int64_t* rbx_20 = *(var_278:8.q + 0x10)
    int64_t rax_35 = rbx_20[3]
    
    if (*(rax_35 + (rdx_14 << 3)) == 0)
        sub_1419ccf30(rbx_20, rdx_14.d)
        rax_35 = rbx_20[3]
    
    r15_6 = *(rax_35 + (rdx_14 << 3))

void* rsi_4 = arg2[8]
*(rsi_4 + 0x1b0) = r15_6
sub_14198aa60(r15_6)
void*** rcx_55 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_36 = &rcx_55[3]

if (rax_36 u> *(rsi_4 + 0x38))
    sub_140b0e3d0(rsi_4 + 0x30, 0x20)
    rcx_55 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
    rax_36 = &rcx_55[3]

*(rsi_4 + 0x30) = rax_36
void**** rax_37 = *(rsi_4 + 8)
*(rsi_4 + 0x14) += 1
*rax_37 = rcx_55
*(rsi_4 + 8) = &rcx_55[1]
rcx_55[1] = 0
*rcx_55 = &data_142dd5b40
rcx_55[2] = r15_6
int64_t rbx_21 = *(rax_33 + 0x14)
int32_t rax_39 = sub_1422e5a30(*arg2)
int32_t var_2f8_1 = rax_39
int32_t r8_6
int64_t r9_2

if (rax_39 != 0xb && rax_39 != 0x1e)
    r8_6 = rbx_21.d
    r9_2 = sx.q(rax_39) * 5

int64_t rcx_61

if (rax_39 != 0xb && rax_39 != 0x1e && (*(&data_143f025f0 + (r9_2 << 2)) != data_143f025b8
        || (*((r9_2 << 2) + &data_143f025fc) & 1) == 0))
    rcx_61 = (*U"      ")[4].q
else
    rcx_61 = (*U"      ")[2].q
    r8_6 = rbx_21.d

int64_t r10_1 = rbx_1[1]
uint32_t rcx_62 = (rcx_61 u>> 0x20).d
int64_t* rdx_18 = *arg2
void* rax_49 = arg2[8]
int64_t r9_3 = *(data_143eba988 + 0x20)
void* rcx_64 = rdx_18[2]
void* var_268 = rcx_64

if (rcx_64 != 0)
    *(rcx_64 + 8) += 1
    rdx_18 = *arg2

int64_t rax_50 = data_14395f4d0
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(r8_6))
int64_t var_1e0 = r10_1
int64_t var_1e8 = rax_50
int64_t var_1d8 = r9_3
zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx_21:4.d))
float zmm1_1 = 1f f/ zmm3.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm0_1.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1_1
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = 1f f/ zmm0_1.d
uint128_t var_258 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
int32_t var_1c8[0x18]
int32_t* rax_51 = sub_1413138f0(&var_1c8, rdx_18, 1)
void* r15_8 = var_2c8.q
int64_t r8_7 = 0
int128_t var_248 = *rax_51
int128_t var_238 = *(rax_51 + 0x10)
int128_t var_228 = *(rax_51 + 0x20)
int128_t var_218 = *(rax_51 + 0x30)
int128_t var_208 = *(rax_51 + 0x40)
int128_t var_1f8 = *(rax_51 + 0x50)

if (r15_8 != 0)
    int64_t rdx_19 = sx.q(*(r15_8 + 0x10c))
    int64_t* rbx_23 = *(var_2c8:8.q + 0x10)
    int64_t rax_53 = rbx_23[3]
    
    if (*(rax_53 + (rdx_19 << 3)) == 0)
        sub_1419ccf30(rbx_23, rdx_19.d)
        rax_53 = rbx_23[3]
    
    r8_7 = *(rax_53 + (rdx_19 << 3))

sub_141342e10(rax_49, &var_2c8, r8_7, &var_268)
sub_1405d1550(&var_268)
sub_1419cd1c0(arg2[8], r15_8, divs.dp.d(sx.q(r8_6 - 1 + rcx_61.d), rcx_61.d), 
    divs.dp.d(sx.q((rbx_21 u>> 0x20).d - 1 + rcx_62), rcx_62), 1)
void* rcx_70 = arg2[8]
sub_14116d320(rcx_70, &var_2c8, *(rcx_70 + 0x1b0))
void* r14_1 = arg2[8]
int64_t rcx_71 = *(data_143eba988 + 0x20)
int64_t* rbx_26 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_55 = &rbx_26[1]

if (rax_55 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x10)
    rbx_26 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_55 = &rbx_26[1]

*(r14_1 + 0x30) = rax_55
*rbx_26 = rcx_71
void*** rcx_75 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_56 = &rcx_75[6]

if (rax_56 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x38)
    rcx_75 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_56 = &rcx_75[6]

*(r14_1 + 0x30) = rax_56
void**** rax_57 = *(r14_1 + 8)
*(r14_1 + 0x14) += 1
*rax_57 = rcx_75
*(r14_1 + 8) = &rcx_75[1]
rcx_75[1] = 0
*rcx_75 = &data_142da7798
rcx_75[2].d = 1
rcx_75[3] = rbx_26
rcx_75[4].d = 0
*(rcx_75 + 0x24) = 3
rcx_75[5] = 0
__security_check_cookie(rax_1 ^ &var_328)
return &data_142da7798
