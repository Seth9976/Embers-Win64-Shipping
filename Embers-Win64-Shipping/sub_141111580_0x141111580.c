// 函数: sub_141111580
// 地址: 0x141111580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_1439b5dd8 == 0xffffffff
int64_t r12 = arg3
void* r15 = *(*arg2 + 0x20)
uint64_t r14 = zx.q(*(r15 + 0x18b4))
int32_t rcx

if (not(cond:0))
    rcx = data_1439b5de4

if (cond:0 || rcx s< r14.d || rcx s> (r14 * 3).d || data_143ed3440 != 0)
    data_1439b5de0 = 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r14 * 5).d)
    data_1439b5de4 = (temp1_1 + (temp0_1 & 3)) s>> 2
    (*(data_1439b5dd0 + 0x30))(&data_1439b5dd0)
    (*(data_1439b5dd0 + 0x28))(&data_1439b5dd0)

void* rbx = data_1439b5e28

if (*(rbx + 0x11) == 0)
    if (data_143f0f1c7 != 0)
        int64_t* rcx_1 = data_143f0f180
        (*(*rcx_1 + 0x610))(rcx_1, rbx)
    
    *(rbx + 0x11) = 1

void* rbx_1 = data_1439b5e48

if (*(rbx_1 + 0x11) == 0)
    if (data_143f0f1c7 != 0)
        int64_t* rcx_2 = data_143f0f180
        (*(*rcx_2 + 0x610))(rcx_2, rbx_1)
    
    *(rbx_1 + 0x11) = 1

if (data_1439b5de0 != 0)
    void* rbx_2 = data_1439b5e68
    
    if (*(rbx_2 + 0x11) == 0)
        if (data_143f0f1c7 != 0)
            int64_t* rcx_3 = data_143f0f180
            (*(*rcx_3 + 0x610))(rcx_3, rbx_2)
        
        *(rbx_2 + 0x11) = 1

int64_t rax_11 = data_1439b5df0
int64_t* rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t arg_8 = rax_11
void* rcx_4 = &rbx_5[1]

if (rcx_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rax_11 = arg_8
    rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_4 = &rbx_5[1]

*(arg1 + 0x30) = rcx_4
*rbx_5 = rax_11
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_8[6]

if (rax_12 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_8[6]

*(arg1 + 0x30) = rax_12
*(arg1 + 0x14) += 1
void**** rax_13 = *(arg1 + 8)
void* const var_68 = nullptr
void* const var_60 = nullptr
*rax_13 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142da7798
rcx_8[2].d = 1
rcx_8[3] = rbx_5
rcx_8[4] = 2
rcx_8[5] = 0
int64_t rbx_8 = data_1439b5df0
void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_14[5]

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_14[5]

*(arg1 + 0x30) = rax_15
int64_t* rax_16 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_16 = rcx_14
*(arg1 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142f115d8
rcx_14[2] = rbx_8
*(rcx_14 + 0x18) = var_68.o
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(r15 + 8))]), &var_68, &data_143e5b6c0, 0)
void* const r13 = var_68
void* rbx_9 = nullptr

if (r13 != 0)
    int64_t rdx_6 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_10 = *(var_60 + 0x10)
    int64_t rax_21 = rbx_10[3]
    
    if (*(rax_21 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rbx_10, rdx_6.d)
        rax_21 = rbx_10[3]
    
    rbx_9 = *(rax_21 + (rdx_6 << 3))
    r12 = arg3

*(arg1 + 0x1b0) = rbx_9
sub_14198aa60(rbx_9)
void*** rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_24[3]

if (rax_22 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_24[3]

*(arg1 + 0x30) = rax_22
void**** rax_23 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_23 = rcx_24
*(arg1 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142dd5b40
int64_t var_70 = arg7
rcx_24[2] = rbx_9
sub_141140c30(r13, arg1, r15, arg2, arg4, arg5, arg6)
int64_t var_88
var_88.d = 1
sub_1419cd1c0(arg1, r13, (r14 + 0x3f).d u>> 6, 1, var_88.d)
int64_t result = sub_141156480(r13, arg1)
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

int32_t* rbx_11 = *arg9

if (rbx_11 == 0)
    int64_t* rax_31 = j_sub_140a82f30(0x98)
    int64_t* rbx_12 = rax_31
    
    if (rax_31 == 0)
        rbx_12 = nullptr
    else
        *rbx_12 = data_143dbb180
        rbx_12[1] = data_143dbb180
        __builtin_memset(&rbx_12[2], 0, 0x1c)
        __builtin_memset(&rbx_12[6], 0, 0x1c)
        __builtin_memset(&rbx_12[0xa], 0, 0x1c)
        __builtin_memset(&rbx_12[0xe], 0, 0x1c)
        rbx_12[0x12].b = 0
    
    if (arg9 != &arg_8)
        void* rdx_10 = *arg9
        *arg9 = rbx_12
        rbx_12 = nullptr
        sub_1410ec2e0(arg9, rdx_10)
    
    sub_1410ec2e0(&arg_8, rbx_12)
    goto label_141111a69

if (((r13_1 + 0x3f) & 0xffffffc0) s> rbx_11[2] || rbx_11[0x24].b != r15.b)
    sub_1408081b0(&rbx_11[4])
    sub_1408081b0(&rbx_11[0xc])
    sub_1408081b0(&rbx_11[0x14])
    sub_1408081b0(&rbx_11[0x1c])
label_141111a69:
    *(*arg9 + 0x90) = r15.b
    int32_t* rax_35 = *arg9
    *rax_35 = r13_1
    rax_35[1] = r13_1
    zmm6 = sub_141131eb0(*arg9, data_1439b5bbc)
    rbx_11 = *arg9

*rbx_11 = r13_1
rbx_11[1] = r13_1
int64_t* rbx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_38 = *(*arg9 + 0x18)
arg_8 = rcx_38
void* rax_37 = &rbx_15[1]

if (rax_37 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x10)
    rcx_38 = arg_8
    rbx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_37 = &rbx_15[1]

*(arg1 + 0x30) = rax_37
*rbx_15 = rcx_38
void*** rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_38 = &rcx_42[6]

if (rax_38 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_38 = &rcx_42[6]

*(arg1 + 0x30) = rax_38
*(arg1 + 0x14) += 1
void**** rax_39 = *(arg1 + 8)
var_68 = nullptr
int64_t var_60_1 = 0
*rax_39 = rcx_42
*(arg1 + 8) = &rcx_42[1]
rcx_42[1] = 0
*rcx_42 = &data_142da7798
rcx_42[2].d = 1
rcx_42[3] = rbx_15
rcx_42[4] = 2
rcx_42[5] = 0
void*** rcx_48 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbx_18 = *(*arg9 + 0x18)
void* rax_42 = &rcx_48[5]

if (rax_42 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_48 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_42 = &rcx_48[5]

*(arg1 + 0x30) = rax_42
void**** rax_43 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_43 = rcx_48
*(arg1 + 8) = &rcx_48[1]
rcx_48[2] = rbx_18
int32_t rbx_19 = arg_18.d
rcx_48[1] = 0
*rcx_48 = &data_142f115d8
*(rcx_48 + 0x18) = var_68.o
int32_t var_80
var_80.q = *arg9
sub_141114bc0(arg1, arg2, arg4, zmm6, zmm6, rbx_19, var_80)
int64_t* r15_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_53 = *(*arg9 + 0x38)
void* rax_47 = &r15_3[1]

if (rax_47 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    r15_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_47 = &r15_3[1]

*(arg1 + 0x30) = rax_47
*r15_3 = rcx_53
void*** rcx_57 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_48 = &rcx_57[6]

if (rax_48 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_57 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_48 = &rcx_57[6]

*(arg1 + 0x30) = rax_48
*(arg1 + 0x14) += 1
void**** rax_49 = *(arg1 + 8)
var_68 = nullptr
void* const var_60_2 = nullptr
*rax_49 = rcx_57
*(arg1 + 8) = &rcx_57[1]
rcx_57[1] = 0
*rcx_57 = &data_142da7798
rcx_57[2].d = 1
rcx_57[3] = r15_3
rcx_57[4] = 2
rcx_57[5] = 0
void*** rcx_63 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r15_6 = *(*arg9 + 0x38)
void* rax_52 = &rcx_63[5]

if (rax_52 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_63 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_52 = &rcx_63[5]

*(arg1 + 0x30) = rax_52
int64_t* rax_53 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_53 = rcx_63
*(arg1 + 8) = &rcx_63[1]
rcx_63[1] = 0
*rcx_63 = &data_142f115d8
int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(r13_1 + 7)
rcx_63[2] = r15_6
int32_t rax_58 = (temp3_1 + (temp2_1 & 7)) s>> 3
int32_t r12_2 = rax_58
int32_t temp4_1
int32_t temp5_1
temp4_1:temp5_1 = sx.q(r13_1 + 7)
arg_18.d = (temp5_1 + (temp4_1 & 7)) s>> 3
*(rcx_63 + 0x18) = var_68.o
sub_1419a2ec0(arg2[0xa2a], &var_68, &data_143e57a10, 0)
void* const r13_2 = var_68
void* r15_7 = nullptr

if (r13_2 != 0)
    int64_t rdx_19 = sx.q(*(r13_2 + 0x10c))
    int64_t* r15_8 = *(var_60_2 + 0x10)
    int64_t rax_64 = r15_8[3]
    
    if (*(rax_64 + (rdx_19 << 3)) == 0)
        sub_1419ccf30(r15_8, rdx_19.d)
        rax_64 = r15_8[3]
    
    r15_7 = *(rax_64 + (rdx_19 << 3))
    r12_2 = rax_58

*(arg1 + 0x1b0) = r15_7
sub_14198aa60(r15_7)
void*** rcx_73 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_65 = &rcx_73[3]

if (rax_65 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_73 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_65 = &rcx_73[3]

*(arg1 + 0x30) = rax_65
void**** rax_66 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_66 = rcx_73
*(arg1 + 8) = &rcx_73[1]
rcx_73[1] = 0
*rcx_73 = &data_142dd5b40
rcx_73[2] = r15_7
sub_141144520(r13_2, arg1, arg2, *arg9)
sub_1419cd1c0(arg1, r13_2, r12_2, arg_18.d, 1)
uint128_t zmm6_1 = sub_141156800(r13_2, arg1, arg2, *arg9)
int64_t* r15_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_80 = *(*arg9 + 0x18)
void* rax_69 = &r15_11[1]

if (rax_69 u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x10)
    r15_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_69 = &r15_11[1]

*(arg1 + 0x30) = rax_69
*r15_11 = rcx_80
void*** rcx_84 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_70 = &rcx_84[6]

if (rax_70 u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_84 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_70 = &rcx_84[6]

*(arg1 + 0x30) = rax_70
*(arg1 + 0x14) += 1
void**** rax_71 = *(arg1 + 8)
var_68 = nullptr
int64_t var_60_3 = 0
*rax_71 = rcx_84
*(arg1 + 8) = &rcx_84[1]
rcx_84[1] = 0
*rcx_84 = &data_142da7798
rcx_84[2].d = 1
rcx_84[3] = r15_11
rcx_84[4].d = 2
*(rcx_84 + 0x24) = 3
rcx_84[5] = 0
void*** rcx_90 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r15_14 = *(*arg9 + 0x18)
void* rax_74 = &rcx_90[5]

if (rax_74 u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_90 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_74 = &rcx_90[5]

*(arg1 + 0x30) = rax_74
int64_t* rax_75 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_75 = rcx_90
*(arg1 + 8) = &rcx_90[1]
rcx_90[1] = 0
*rcx_90 = &data_142f115d8
rcx_90[2] = r15_14
*(rcx_90 + 0x18) = var_68.o
var_80.q = *arg9
return sub_141115c20(arg1, arg2, arg4, zmm6_1, zmm6_1, rbx_19, var_80)
