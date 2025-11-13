// 函数: sub_1410a9080
// 地址: 0x1410a9080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* rsi = *arg2
void* rax_2 = sub_14139ce70(arg1)
arg2[8]
int64_t* var_60 = &data_143ec4c60
void* r12_1

if (arg1[0x3c].d != 1)
    r12_1 = sub_1413a8300(&arg1[4], arg2)
else
    r12_1 = data_143ec4d20 + 8

void* rax_4 = sub_1413a8300(&arg1[0x10], arg2)
void* rax_5 = sub_1413a8300(&arg1[0x1c], arg2)
int32_t rcx_4 = arg1[0x3c].d
int64_t rbx = *(arg1 + 0x34)
int64_t* rdi_1 = *(rax_2 + 0x14)
int64_t rax_6 = *(rsi + 0x15a0)
int32_t temp0 = divs.dp.d(sx.q(rax_6.d), rcx_4)
int64_t var_98
var_98.d = divs.dp.d(sx.q(rax_6:4.d), rcx_4)
int64_t rax_12 = *(rsi + 0x1598)
int32_t temp0_2 = divs.dp.d(sx.q(rax_12.d), rcx_4)
int64_t var_90
var_90.d = divs.dp.d(sx.q(rax_12:4.d), rcx_4)
char var_a8_1

if (*arg1[0x3a] != 0)
    var_a8_1 = 0

if (*arg1[0x3a] == 0 || *(rsi + 0xd64) != 0)
    var_a8_1 = 1

int64_t* rsi_1 = arg1[0x3b]
int64_t i_1 = 2
int64_t i

do
    int64_t* rcx_6 = *rsi_1
    *rsi_1 = 0
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6)
    
    int64_t* rcx_7 = rsi_1[2]
    rsi_1[2] = 0
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7)
    
    rsi_1 = &rsi_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rax_20 = arg1[0x3b]
int64_t* rcx_8 = arg1[0xe]
int64_t* rsi_2 = *rax_20
*rax_20 = rcx_8

if (rcx_8 != 0)
    (*(*rcx_8 + 0x30))()

if (rsi_2 != 0)
    (*(*rsi_2 + 0x38))(rsi_2)

void* rax_23 = arg1[0x3b]
int64_t* rcx_10 = arg1[0x1a]
int64_t* rsi_3 = *(rax_23 + 0x10)
*(rax_23 + 0x10) = rcx_10

if (rcx_10 != 0)
    (*(*rcx_10 + 0x30))()

if (rsi_3 != 0)
    (*(*rsi_3 + 0x38))(rsi_3)

void* rax_26 = arg1[0x3b]
int64_t* rcx_12 = arg1[0x26]
int64_t* rsi_4 = *(rax_26 + 0x20)
*(rax_26 + 0x20) = rcx_12

if (rcx_12 != 0)
    (*(*rcx_12 + 0x30))()

if (rsi_4 != 0)
    (*(*rsi_4 + 0x38))(rsi_4)

void* rax_29 = arg1[0x3b]
int32_t rsi_5 = var_98.d
*(rax_29 + 0x38) = temp0_2
*(rax_29 + 0x3c) = var_90.d
*(rax_29 + 0x40) = temp0
*(rax_29 + 0x44) = rsi_5
void* rcx_15 = arg1[0x3b]
*(rcx_15 + 0x30) = rbx.d
*(rcx_15 + 0x34) = rbx:4.d
sub_1410e0370(arg2[8])
void* var_58
sub_1419a2ec0(arg2[0xc], &var_58, &data_143e414b0, 0)
void* rax_31 = var_58
int64_t rcx_18 = *(r12_1 + 0x10)
void* r13_2 = arg2[8]
int32_t temp27
int32_t temp28
temp27:temp28 = sx.q(temp0 - temp0_2 + 7)
int32_t temp29
int32_t temp30
temp29:temp30 = sx.q(rsi_5 - var_90.d + 7)
int64_t* rsi_9 = (*(r13_2 + 0x30) + 7) & 0xfffffffffffffff8
var_98.d = (temp30 + (temp29 & 7)) s>> 3
void* rdx_13 = &rsi_9[1]

if (rdx_13 u> *(r13_2 + 0x38))
    sub_140b0e3d0(r13_2 + 0x30, 0x10)
    rsi_9 = (*(r13_2 + 0x30) + 7) & 0xfffffffffffffff8
    rdx_13 = &rsi_9[1]

*(r13_2 + 0x30) = rdx_13
*rsi_9 = rcx_18
void*** rcx_22 = (*(r13_2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_41 = &rcx_22[6]

if (rax_41 u> *(r13_2 + 0x38))
    sub_140b0e3d0(r13_2 + 0x30, 0x38)
    rcx_22 = (*(r13_2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_41 = &rcx_22[6]

*(r13_2 + 0x30) = rax_41
void* r12_2 = nullptr
*(r13_2 + 0x14) += 1
**(r13_2 + 8) = rcx_22
*(r13_2 + 8) = &rcx_22[1]
rcx_22[3] = rsi_9
rcx_22[1] = 0
*rcx_22 = &data_142da7798
rcx_22[2].d = 1
rcx_22[4].d = 2
*(rcx_22 + 0x24) = 3
rcx_22[5] = 0
void* r13_3 = arg2[8]
int64_t rax_45 = *(rax_4 + 0x10)
int64_t* rsi_14 = (*(r13_3 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_26 = &rsi_14[1]

if (rcx_26 u> *(r13_3 + 0x38))
    sub_140b0e3d0(r13_3 + 0x30, 0x10)
    rsi_14 = (*(r13_3 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_26 = &rsi_14[1]

*(r13_3 + 0x30) = rcx_26
*rsi_14 = rax_45
void*** rcx_30 = (*(r13_3 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_46 = &rcx_30[6]

if (rax_46 u> *(r13_3 + 0x38))
    sub_140b0e3d0(r13_3 + 0x30, 0x38)
    rcx_30 = (*(r13_3 + 0x30) + 7) & 0xfffffffffffffff8
    rax_46 = &rcx_30[6]

*(r13_3 + 0x30) = rax_46
*(r13_3 + 0x14) += 1
**(r13_3 + 8) = rcx_30
*(r13_3 + 8) = &rcx_30[1]
rcx_30[3] = rsi_14
rcx_30[1] = 0
*rcx_30 = &data_142da7798
rcx_30[2].d = 1
rcx_30[4].d = 2
*(rcx_30 + 0x24) = 3
rcx_30[5] = 0
void* r13_4 = arg2[8]
int64_t rax_50 = *(rax_5 + 0x10)
int64_t* rsi_19 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_34 = &rsi_19[1]

if (rcx_34 u> *(r13_4 + 0x38))
    sub_140b0e3d0(r13_4 + 0x30, 0x10)
    rsi_19 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_34 = &rsi_19[1]

*(r13_4 + 0x30) = rcx_34
*rsi_19 = rax_50
void*** rcx_38 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_51 = &rcx_38[6]

if (rax_51 u> *(r13_4 + 0x38))
    sub_140b0e3d0(r13_4 + 0x30, 0x38)
    rcx_38 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
    rax_51 = &rcx_38[6]

*(r13_4 + 0x30) = rax_51
void**** rax_52 = *(r13_4 + 8)
*(r13_4 + 0x14) += 1
*rax_52 = rcx_38
*(r13_4 + 8) = &rcx_38[1]
rcx_38[1] = 0
*rcx_38 = &data_142da7798
rcx_38[2].d = 1
rcx_38[3] = rsi_19
rcx_38[4].d = 2
*(rcx_38 + 0x24) = 3
rcx_38[5] = 0

if (rax_31 != 0)
    int64_t rdx_14 = sx.q(*(rax_31 + 0x10c))
    void* var_50
    int64_t* rsi_23 = *(var_50 + 0x10)
    int64_t r12_3 = rsi_23[3]
    
    if (*(r12_3 + (rdx_14 << 3)) == 0)
        sub_1419ccf30(rsi_23, rdx_14.d)
        r12_3 = rsi_23[3]
    
    r12_2 = *(r12_3 + (rdx_14 << 3))

void* rsi_24 = arg2[8]
*(rsi_24 + 0x1b0) = r12_2
sub_14198aa60(r12_2)
void*** rcx_46 = (*(rsi_24 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_54 = &rcx_46[3]

if (rax_54 u> *(rsi_24 + 0x38))
    sub_140b0e3d0(rsi_24 + 0x30, 0x20)
    rcx_46 = (*(rsi_24 + 0x30) + 7) & 0xfffffffffffffff8
    rax_54 = &rcx_46[3]

*(rsi_24 + 0x30) = rax_54
void**** rax_55 = *(rsi_24 + 8)
*(rsi_24 + 0x14) += 1
*rax_55 = rcx_46
*(rsi_24 + 8) = &rcx_46[1]
rcx_46[1] = 0
*rcx_46 = &data_142dd5b40
rcx_46[2] = r12_2
void* rcx_50

if (var_a8_1 == 0)
    rcx_50 = &var_60[0xa]
else
    rcx_50 = &data_1439b70c8

int64_t var_b8 = *(rax_5 + 0x10)
int64_t var_c0 = *(rax_4 + 0x10)
sub_141081b10(rax_31, arg2[8], arg2, rbx.b, rdi_1, var_a8_1, arg1[0x3a], rcx_50, *(r12_1 + 0x10))
int64_t* var_e8
var_e8.d = 1
sub_1419cd1c0(arg2[8], rax_31, (temp28 + (temp27 & 7)) s>> 3, var_98.d, var_e8.d)
void* result = sub_141089bc0(rax_31, arg2[8])
__security_check_cookie(rax_1 ^ &var_108)
return result
