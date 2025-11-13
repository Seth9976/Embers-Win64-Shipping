// 函数: sub_14135fa20
// 地址: 0x14135fa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t rax_2 = *(arg1 + 0x34)
int32_t rax_3 = arg1[7].d
void* r13 = *(sub_14139d290((*(*arg1 + 0x10))(arg3, 0)) + 0x50)
int32_t rax_7 = sub_1422e5a30(*arg2)
void* var_1f8
int64_t var_168
int64_t var_160
int32_t var_158

if (rax_7 u> 0x1f || not(test_bit(0xc8451800, rax_7)))
    if (*(&data_143f025f0 + sx.q(rax_7) * 0x14) == data_143f025b0)
        goto label_14135fc98
    
    uint64_t rax_9 = sub_1422e5a30(*arg2)
    
    if (rax_9.d u<= 0x30 && test_bit(0x1000030320000, rax_9))
        goto label_14135fc98
    
    if (*(&data_143f025f0 + sx.q(rax_9.d) * 0x14) == data_143f025c0)
        goto label_14135fc98
    
    int128_t zmm1 = data_142d3f5a0
    int64_t rcx_5 = *(data_1439b70c8 + 8)
    var_168 = rcx_5
    int32_t var_90_1 = 0
    int32_t var_8c
    __builtin_memset(&var_8c, 0xff, 0x14)
    int128_t var_78_1 = zmm1
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x19)
    var_160 = 0
    var_158 = 0xffffffff
    int16_t var_154_1 = 0
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x11)
    int32_t var_94_1 = 0
    bool var_4f_1 = *(rcx_5 + 0x38) u> 1
    void var_150
    memset(&var_150, 0, 0xa8)
    void* r15_1 = arg2[8]
    int64_t rbx_2 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_12 = rbx_2 + 0x3c
    
    if (rax_12 u> *(r15_1 + 0x38))
        sub_140b0e3d0(r15_1 + 0x30, 0x3e)
        rbx_2 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_12 = rbx_2 + 0x3c
    
    wchar16 const* const rcx_8 = u"AverageLuminanceToSingleTexel"
    *(r15_1 + 0x30) = rax_12
    wchar16 const i
    
    do
        i = *rcx_8
        *(rcx_8 + rbx_2 - u"AverageLuminanceToSingleTexel") = i
        rcx_8 = &rcx_8[1]
    while (i != 0)
    void*** rcx_11 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_13 = &rcx_11[0x27]
    
    if (rax_13 u> *(r15_1 + 0x38))
        sub_140b0e3d0(r15_1 + 0x30, 0x140)
        rcx_11 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = &rcx_11[0x27]
    
    *(r15_1 + 0x30) = rax_13
    void**** rax_14 = *(r15_1 + 8)
    *(r15_1 + 0x14) += 1
    *rax_14 = rcx_11
    *(r15_1 + 8) = &rcx_11[1]
    sub_1405d11b0(rcx_11, &var_168, rbx_2)
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
label_14135fc98:
    void* r14_1 = arg2[8]
    void* rax_17 = *(r13 + 8)
    var_1f8 = rax_17
    void** rbx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_18 = &rbx_7[1]
    
    if (rcx_18 u> *(r14_1 + 0x38))
        sub_140b0e3d0(r14_1 + 0x30, 0x10)
        rax_17 = var_1f8
        rbx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_18 = &rbx_7[1]
    
    *(r14_1 + 0x30) = rcx_18
    *rbx_7 = rax_17
    void*** rcx_22 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_22[5]
    
    if (rax_18 u> *(r14_1 + 0x38))
        sub_140b0e3d0(r14_1 + 0x30, 0x30)
        rcx_22 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_22[5]
    
    *(r14_1 + 0x30) = rax_18
    void**** rax_19 = *(r14_1 + 8)
    *(r14_1 + 0x14) += 1
    *rax_19 = rcx_22
    *(r14_1 + 8) = &rcx_22[1]
    rcx_22[1] = 0
    *rcx_22 = &data_142d549c8
    rcx_22[2].d = 1
    rcx_22[3] = rbx_7
    rcx_22[4].d = 0

int128_t var_1d8
sub_1419a2ec0(arg2[0xc], &var_1d8, &data_143ebc200, 0)
int128_t zmm0 = var_1d8
void* r15_2 = nullptr
void* rax_21 = zmm0.q
var_1f8.o = zmm0

if (rax_21 != 0)
    int64_t rdx_7 = sx.q(*(rax_21 + 0x10c))
    int64_t* rbx_10 = *(var_1d8:8.q + 0x10)
    int64_t r15_3 = rbx_10[3]
    
    if (*(r15_3 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(rbx_10, rdx_7.d)
        r15_3 = rbx_10[3]
    
    r15_2 = *(r15_3 + (rdx_7 << 3))

void* rbx_11 = arg2[8]
*(rbx_11 + 0x1b0) = r15_2
sub_14198aa60(r15_2)
void*** rcx_31 = (*(rbx_11 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_23 = &rcx_31[3]

if (rax_23 u> *(rbx_11 + 0x38))
    sub_140b0e3d0(rbx_11 + 0x30, 0x20)
    rcx_31 = (*(rbx_11 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_31[3]

*(rbx_11 + 0x30) = rax_23
int64_t r8_2 = 0
*(rbx_11 + 0x14) += 1
void* r14_3 = var_1f8
var_1d8:8.d = 0
**(rbx_11 + 8) = rcx_31
*(rbx_11 + 8) = &rcx_31[1]
rcx_31[1] = 0
*rcx_31 = &data_142dd5b40
rcx_31[2] = r15_2
var_1d8:0xc.d = rax_2
var_1d8.q = *(data_143eba888 + 0x20)
void* var_1f0

if (r14_3 != 0)
    int64_t rdx_8 = sx.q(*(r14_3 + 0x10c))
    int64_t* rbx_12 = *(var_1f0 + 0x10)
    int64_t rax_29 = rbx_12[3]
    
    if (*(rax_29 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_12, rdx_8.d)
        rax_29 = rbx_12[3]
    
    r8_2 = *(rax_29 + (rdx_8 << 3))

sub_14133e950(arg2[8], &var_1f8, r8_2, &var_1d8)
sub_1419cd1c0(arg2[8], r14_3, (rax_2 + 0x3f) u>> 6, rax_3, 1)
void* rcx_39 = arg2[8]
sub_14116d320(rcx_39, &var_1f8, *(rcx_39 + 0x1b0))
void* r15_5 = arg2[8]
void* rcx_40 = *(data_143eba888 + 0x20)
void** rbx_15 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
var_1f8 = rcx_40
void* rax_31 = &rbx_15[1]

if (rax_31 u> *(r15_5 + 0x38))
    sub_140b0e3d0(r15_5 + 0x30, 0x10)
    rcx_40 = var_1f8
    rbx_15 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
    rax_31 = &rbx_15[1]

*(r15_5 + 0x30) = rax_31
*rbx_15 = rcx_40
void*** rcx_44 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_32 = &rcx_44[6]

if (rax_32 u> *(r15_5 + 0x38))
    sub_140b0e3d0(r15_5 + 0x30, 0x38)
    rcx_44 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
    rax_32 = &rcx_44[6]

*(r15_5 + 0x30) = rax_32
void**** rax_33 = *(r15_5 + 8)
*(r15_5 + 0x14) += 1
*rax_33 = rcx_44
*(r15_5 + 8) = &rcx_44[1]
rcx_44[1] = 0
*rcx_44 = &data_142da7798
rcx_44[2].d = 1
rcx_44[3] = rbx_15
rcx_44[4].d = 2
*(rcx_44 + 0x24) = 3
rcx_44[5] = 0
void* rax_35 = sub_14139ce70(arg1)
sub_1419a2ec0(arg2[0xc], &var_1d8, &data_143ebc310, 0)
int128_t zmm0_1 = var_1d8
void* r14_4 = nullptr
void* rcx_50 = zmm0_1.q
var_1f8.o = zmm0_1

if (rcx_50 != 0)
    int64_t rdx_14 = sx.q(*(rcx_50 + 0x10c))
    int64_t* rbx_18 = *(var_1d8:8.q + 0x10)
    int64_t rax_37 = rbx_18[3]
    
    if (*(rax_37 + (rdx_14 << 3)) == 0)
        sub_1419ccf30(rbx_18, rdx_14.d)
        rax_37 = rbx_18[3]
    
    r14_4 = *(rax_37 + (rdx_14 << 3))

void* r15_6 = arg2[8]
*(r15_6 + 0x1b0) = r14_4
sub_14198aa60(r14_4)
void*** rcx_55 = (*(r15_6 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_38 = &rcx_55[3]

if (rax_38 u> *(r15_6 + 0x38))
    sub_140b0e3d0(r15_6 + 0x30, 0x20)
    rcx_55 = (*(r15_6 + 0x30) + 7) & 0xfffffffffffffff8
    rax_38 = &rcx_55[3]

*(r15_6 + 0x30) = rax_38
*(r15_6 + 0x14) += 1
**(r15_6 + 8) = rcx_55
*(r15_6 + 8) = &rcx_55[1]
rcx_55[1] = 0
*rcx_55 = &data_142dd5b40
rcx_55[2] = r14_4
int64_t r8_7 = *(rax_35 + 0x14)
int64_t rcx_59 = (*U"      ")[0].q
uint32_t r9_3 = (r8_7 u>> 0x20).d
uint32_t rcx_60 = (rcx_59 u>> 0x20).d
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r8_7.d))
void* rcx_61 = data_143eba888
int64_t* rdx_17 = *arg2
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(r9_3))
int64_t rbx_19 = *(rcx_61 + 0x20)
int64_t var_f8 = data_14395f4d0
zmm0_1.d = 1f f/ zmm2.d
int64_t var_f0 = *(r13 + 0x10)
var_168.d = zmm2.d
var_168:4.d = zmm1_1.d
var_160.d = zmm0_1.d
var_160:4.d = 1f f/ zmm1_1.d
int32_t var_1c8[0x18]
int32_t* rax_51 = sub_1413138f0(&var_1c8, rdx_17, 1)
void* r15_7 = var_1f8
int64_t r8_8 = 0
var_158.o = *rax_51
int128_t var_148 = *(rax_51 + 0x10)
int128_t var_138 = *(rax_51 + 0x20)
int128_t var_128 = *(rax_51 + 0x30)
int128_t var_118 = *(rax_51 + 0x40)
int128_t var_108 = *(rax_51 + 0x50)
int64_t var_e8 = rbx_19

if (r15_7 != 0)
    int64_t rdx_18 = sx.q(*(r15_7 + 0x10c))
    int64_t* rbx_20 = *(var_1f0 + 0x10)
    int64_t rax_53 = rbx_20[3]
    
    if (*(rax_53 + (rdx_18 << 3)) == 0)
        sub_1419ccf30(rbx_20, rdx_18.d)
        rax_53 = rbx_20[3]
    
    r8_8 = *(rax_53 + (rdx_18 << 3))

sub_141342290(arg2[8], &var_1f8, r8_8, &var_168)
sub_1419cd1c0(arg2[8], r15_7, divs.dp.d(sx.q((rcx_59 - 1).d + r8_7.d), rcx_59.d), 
    divs.dp.d(sx.q(rcx_60 - 1 + r9_3), rcx_60), 1)
void* rcx_66 = arg2[8]
sub_14116d320(rcx_66, &var_1f8, *(rcx_66 + 0x1b0))
void* r14_7 = arg2[8]
void* rcx_67 = *(data_143eba888 + 0x20)
void** rbx_23 = (*(r14_7 + 0x30) + 7) & 0xfffffffffffffff8
var_1f8 = rcx_67
void* rax_55 = &rbx_23[1]

if (rax_55 u> *(r14_7 + 0x38))
    sub_140b0e3d0(r14_7 + 0x30, 0x10)
    rcx_67 = var_1f8
    rbx_23 = (*(r14_7 + 0x30) + 7) & 0xfffffffffffffff8
    rax_55 = &rbx_23[1]

*(r14_7 + 0x30) = rax_55
*rbx_23 = rcx_67
void*** rcx_71 = (*(r14_7 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_56 = &rcx_71[6]

if (rax_56 u> *(r14_7 + 0x38))
    sub_140b0e3d0(r14_7 + 0x30, 0x38)
    rcx_71 = (*(r14_7 + 0x30) + 7) & 0xfffffffffffffff8
    rax_56 = &rcx_71[6]

*(r14_7 + 0x30) = rax_56
void**** rax_57 = *(r14_7 + 8)
*(r14_7 + 0x14) += 1
*rax_57 = rcx_71
*(r14_7 + 8) = &rcx_71[1]
rcx_71[1] = 0
*rcx_71 = &data_142da7798
rcx_71[2].d = 1
rcx_71[3] = rbx_23
rcx_71[4].d = 0
*(rcx_71 + 0x24) = 3
rcx_71[5] = 0
__security_check_cookie(rax_1 ^ &var_238)
return &data_142da7798
