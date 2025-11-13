// 函数: sub_141111fb0
// 地址: 0x141111fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143e57958 == 0xffffffff
int64_t r12 = arg3
void* r15 = *(*arg2 + 0x20)
uint64_t r14 = zx.q(*(r15 + 0x18b0))
int32_t rcx

if (not(cond:0))
    rcx = data_143e57964

if (cond:0 || rcx s< r14.d || rcx s> (r14 * 3).d || data_143ed3440 != 0)
    data_143e57960 = 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r14 * 5).d)
    data_143e57964 = (temp1_1 + (temp0_1 & 3)) s>> 2
    (*(data_143e57950 + 0x30))(&data_143e57950)
    (*(data_143e57950 + 0x28))(&data_143e57950)

sub_14111cff0(&data_143e57960)
int64_t rax_8 = data_143e57970
int64_t* rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t arg_8 = rax_8
void* rcx_1 = &rbx_2[1]

if (rcx_1 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rax_8 = arg_8
    rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_1 = &rbx_2[1]

*(arg1 + 0x30) = rcx_1
*rbx_2 = rax_8
void*** rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_5[6]

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_5[6]

*(arg1 + 0x30) = rax_9
*(arg1 + 0x14) += 1
void**** rax_10 = *(arg1 + 8)
void* const var_68 = nullptr
void* var_60 = nullptr
*rax_10 = rcx_5
*(arg1 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142da7798
rcx_5[2].d = 1
rcx_5[3] = rbx_2
rcx_5[4] = 2
rcx_5[5] = 0
int64_t rbx_5 = data_143e57970
void*** rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_11[5]

if (rax_12 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_11[5]

*(arg1 + 0x30) = rax_12
int64_t* rax_13 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_13 = rcx_11
*(arg1 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142f115d8
rcx_11[2] = rbx_5
*(rcx_11 + 0x18) = var_68.o
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(r15 + 8))]), &var_68, &data_143e5b560, 0)
void* const r13 = var_68
void* rbx_6 = nullptr

if (r13 != 0)
    int64_t rdx_3 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_7 = *(var_60 + 0x10)
    int64_t rax_18 = rbx_7[3]
    
    if (*(rax_18 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_3.d)
        rax_18 = rbx_7[3]
    
    rbx_6 = *(rax_18 + (rdx_3 << 3))
    r12 = arg3

*(arg1 + 0x1b0) = rbx_6
sub_14198aa60(rbx_6)
void*** rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = &rcx_21[3]

if (rax_19 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_21[3]

*(arg1 + 0x30) = rax_19
void**** rax_20 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_20 = rcx_21
*(arg1 + 8) = &rcx_21[1]
rcx_21[1] = 0
*rcx_21 = &data_142dd5b40
int64_t var_70 = arg7
rcx_21[2] = rbx_6
sub_141140f00(r13, arg1, r15, arg2, arg4, arg5, arg6)
int64_t var_88
var_88.d = 1
sub_1419cd1c0(arg1, r13, (r14 + 0x3f).d u>> 6, 1, var_88.d)
int64_t result = sub_141156640(r13, arg1)
bool cond:1 = *(r12 + 0x13c) != 0
uint128_t zmm6 = arg8
uint128_t zmm0_1
zmm0_1.d = zmm6.d f/ data_1439b5c1c
zmm0_1.d = zmm0_1.d f+ 1f
int32_t r13_1 = int.d(__minss_xmmss_memss(zmm0_1.d, 0x43800000).d)
int64_t arg_18
arg_18.d = r13_1
arg_18:4.d = r13_1

if (cond:1 || data_1439b5c18 == 0)
    return result

if (*(r15 + 0x1ab5) == 0 || *(r15 + 0x18b0) s>= 0x10000)
    r15.b = 0
else
    r15.b = 1

int32_t* rbx_8 = *arg9

if (rbx_8 == 0)
    int64_t* rax_28 = j_sub_140a82f30(0x98)
    int64_t* rbx_9 = rax_28
    
    if (rax_28 == 0)
        rbx_9 = nullptr
    else
        *rbx_9 = data_143dbb180
        rbx_9[1] = data_143dbb180
        __builtin_memset(&rbx_9[2], 0, 0x1c)
        __builtin_memset(&rbx_9[6], 0, 0x1c)
        __builtin_memset(&rbx_9[0xa], 0, 0x1c)
        __builtin_memset(&rbx_9[0xe], 0, 0x1c)
        rbx_9[0x12].b = 0
    
    if (arg9 != &arg_8)
        void* rdx_7 = *arg9
        *arg9 = rbx_9
        rbx_9 = nullptr
        sub_1410ec2e0(arg9, rdx_7)
    
    sub_1410ec2e0(&arg_8, rbx_9)
    goto label_141112415

if (((r13_1 + 0x3f) & 0xffffffc0) s> rbx_8[2] || rbx_8[0x24].b != r15.b)
    sub_1408081b0(&rbx_8[4])
    sub_1408081b0(&rbx_8[0xc])
    sub_1408081b0(&rbx_8[0x14])
    sub_1408081b0(&rbx_8[0x1c])
label_141112415:
    *(*arg9 + 0x90) = r15.b
    int32_t* rax_32 = *arg9
    *rax_32 = r13_1
    rax_32[1] = r13_1
    zmm6 = sub_141131eb0(*arg9, data_1439b5bb8)
    rbx_8 = *arg9

*rbx_8 = r13_1
rbx_8[1] = r13_1
int64_t* rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_35 = *(*arg9 + 0x18)
arg_8 = rcx_35
void* rax_34 = &rbx_12[1]

if (rax_34 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x10)
    rcx_35 = arg_8
    rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_34 = &rbx_12[1]

*(arg1 + 0x30) = rax_34
*rbx_12 = rcx_35
void*** rcx_39 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_35 = &rcx_39[6]

if (rax_35 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_39 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_35 = &rcx_39[6]

*(arg1 + 0x30) = rax_35
*(arg1 + 0x14) += 1
void**** rax_36 = *(arg1 + 8)
var_68 = nullptr
int64_t var_60_1 = 0
*rax_36 = rcx_39
*(arg1 + 8) = &rcx_39[1]
rcx_39[1] = 0
*rcx_39 = &data_142da7798
rcx_39[2].d = 1
rcx_39[3] = rbx_12
rcx_39[4] = 2
rcx_39[5] = 0
void*** rcx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbx_15 = *(*arg9 + 0x18)
void* rax_39 = &rcx_45[5]

if (rax_39 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_39 = &rcx_45[5]

*(arg1 + 0x30) = rax_39
void**** rax_40 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_40 = rcx_45
*(arg1 + 8) = &rcx_45[1]
rcx_45[2] = rbx_15
int32_t rbx_16 = arg_18.d
rcx_45[1] = 0
*rcx_45 = &data_142f115d8
*(rcx_45 + 0x18) = var_68.o
int32_t var_80
var_80.q = *arg9
sub_1411153f0(arg1, arg2, arg4, zmm6, zmm6, rbx_16, var_80)
int64_t* r15_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_50 = *(*arg9 + 0x38)
void* rax_44 = &r15_3[1]

if (rax_44 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    r15_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_44 = &r15_3[1]

*(arg1 + 0x30) = rax_44
*r15_3 = rcx_50
void*** rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_45 = &rcx_54[6]

if (rax_45 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_45 = &rcx_54[6]

*(arg1 + 0x30) = rax_45
*(arg1 + 0x14) += 1
void**** rax_46 = *(arg1 + 8)
var_68 = nullptr
void* const var_60_2 = nullptr
*rax_46 = rcx_54
*(arg1 + 8) = &rcx_54[1]
rcx_54[1] = 0
*rcx_54 = &data_142da7798
rcx_54[2].d = 1
rcx_54[3] = r15_3
rcx_54[4] = 2
rcx_54[5] = 0
void*** rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r15_6 = *(*arg9 + 0x38)
void* rax_49 = &rcx_60[5]

if (rax_49 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_49 = &rcx_60[5]

*(arg1 + 0x30) = rax_49
int64_t* rax_50 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_50 = rcx_60
*(arg1 + 8) = &rcx_60[1]
rcx_60[1] = 0
*rcx_60 = &data_142f115d8
int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(r13_1 + 7)
rcx_60[2] = r15_6
int32_t rax_55 = (temp3_1 + (temp2_1 & 7)) s>> 3
int32_t r12_2 = rax_55
int32_t temp4_1
int32_t temp5_1
temp4_1:temp5_1 = sx.q(r13_1 + 7)
arg_18.d = (temp5_1 + (temp4_1 & 7)) s>> 3
*(rcx_60 + 0x18) = var_68.o
sub_1419a2ec0(arg2[0xa2a], &var_68, &data_143e57a10, 0)
void* const r13_2 = var_68
void* r15_7 = nullptr

if (r13_2 != 0)
    int64_t rdx_16 = sx.q(*(r13_2 + 0x10c))
    int64_t* r15_8 = *(var_60_2 + 0x10)
    int64_t rax_61 = r15_8[3]
    
    if (*(rax_61 + (rdx_16 << 3)) == 0)
        sub_1419ccf30(r15_8, rdx_16.d)
        rax_61 = r15_8[3]
    
    r15_7 = *(rax_61 + (rdx_16 << 3))
    r12_2 = rax_55

*(arg1 + 0x1b0) = r15_7
sub_14198aa60(r15_7)
void*** rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_62 = &rcx_70[3]

if (rax_62 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_62 = &rcx_70[3]

*(arg1 + 0x30) = rax_62
void**** rax_63 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_63 = rcx_70
*(arg1 + 8) = &rcx_70[1]
rcx_70[1] = 0
*rcx_70 = &data_142dd5b40
rcx_70[2] = r15_7
sub_141144520(r13_2, arg1, arg2, *arg9)
sub_1419cd1c0(arg1, r13_2, r12_2, arg_18.d, 1)
uint128_t zmm6_1 = sub_141156800(r13_2, arg1, arg2, *arg9)
int64_t* r15_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_77 = *(*arg9 + 0x18)
void* rax_66 = &r15_11[1]

if (rax_66 u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x10)
    r15_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_66 = &r15_11[1]

*(arg1 + 0x30) = rax_66
*r15_11 = rcx_77
void*** rcx_81 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_67 = &rcx_81[6]

if (rax_67 u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_81 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_67 = &rcx_81[6]

*(arg1 + 0x30) = rax_67
*(arg1 + 0x14) += 1
void**** rax_68 = *(arg1 + 8)
var_68 = nullptr
int64_t var_60_3 = 0
*rax_68 = rcx_81
*(arg1 + 8) = &rcx_81[1]
rcx_81[1] = 0
*rcx_81 = &data_142da7798
rcx_81[2].d = 1
rcx_81[3] = r15_11
rcx_81[4].d = 2
*(rcx_81 + 0x24) = 3
rcx_81[5] = 0
void*** rcx_87 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r15_14 = *(*arg9 + 0x18)
void* rax_71 = &rcx_87[5]

if (rax_71 u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_87 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_71 = &rcx_87[5]

*(arg1 + 0x30) = rax_71
int64_t* rax_72 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_72 = rcx_87
*(arg1 + 8) = &rcx_87[1]
rcx_87[1] = 0
*rcx_87 = &data_142f115d8
rcx_87[2] = r15_14
*(rcx_87 + 0x18) = var_68.o
var_80.q = *arg9
return sub_141116450(arg1, arg2, arg4, zmm6_1, zmm6_1, rbx_16, var_80)
