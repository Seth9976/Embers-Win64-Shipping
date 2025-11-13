// 函数: sub_141192df0
// 地址: 0x141192df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_2

if ((*arg2 & 0xfffffffd) == 0)
    int32_t arg_14 = arg2[2]
    rax_2 = arg2[1].q
else
    int32_t arg_c = arg2[1]
    rax_2 = arg2[2].q

int64_t* r13 = arg7
char var_a8 = 0
void* var_98 = nullptr
int64_t var_58 = 0
int64_t var_50 = rax_2
char rax_5 = sub_141192aa0(arg1, arg2, arg4, arg5, arg6, r13)
void* r14 = *arg1
int64_t* rax_6 = arg6[2]
arg7.b = rax_5 != 0
int64_t** rbx_2 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_1 = &rbx_2[1]

if (rcx_1 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x10)
    rbx_2 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_1 = &rbx_2[1]

*(r14 + 0x30) = rcx_1
*rbx_2 = rax_6
void*** rcx_5 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_5[6]

if (rax_7 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x38)
    rcx_5 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_5[6]

*(r14 + 0x30) = rax_7
void** rax_8 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_8 = rcx_5
*(r14 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142da7798
rcx_5[2].d = 1
rcx_5[3] = rbx_2
rcx_5[4].d = 2
*(rcx_5 + 0x24) = 3
rcx_5[5] = 0
void* rax_10 = r13[2]
var_98 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

sub_141189360(arg1, (*arg2 & 0xfffffffd) == 0, &var_58, &arg6[1], arg3, &var_98)
void* r14_1 = *arg1
int64_t rax_12 = r13[2]
int64_t* rbx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_10 = &rbx_7[1]

if (rcx_10 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x10)
    rbx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_10 = &rbx_7[1]

*(r14_1 + 0x30) = rcx_10
*rbx_7 = rax_12
void*** rcx_14 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_14[6]

if (rax_13 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x38)
    rcx_14 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_14[6]

*(r14_1 + 0x30) = rax_13
*(r14_1 + 0x14) += 1
**(r14_1 + 8) = rcx_14
*(r14_1 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142da7798
rcx_14[2].d = 1
rcx_14[3] = rbx_7
rcx_14[4].d = 2
*(rcx_14 + 0x24) = 3
rcx_14[5] = 0
int32_t var_70 = arg2[2]
int32_t rax_18 = *arg2 + 2
int64_t var_78 = *arg2
int32_t rax_19 = rax_18 & 0x80000003

if (rax_19 s< 0)
    rax_19 = ((rax_19 - 1) | 0xfffffffc) + 1

var_78.d = rax_19

if (arg7.b == 0)
    r14_1.b = 0
else
    char var_a8_1 = 0
    
    if (sub_141192aa0(arg1, &var_78, &var_58, &r13[1], arg6, r13) == 0)
        r14_1.b = 0
    else
        r14_1.b = 1

void* rsi = *arg1
int64_t rax_23 = arg6[2]
int64_t* rbx_12 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_19 = &rbx_12[1]

if (rcx_19 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x10)
    rbx_12 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rcx_19 = &rbx_12[1]

*(rsi + 0x30) = rcx_19
*rbx_12 = rax_23
void*** rcx_23 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_23[6]

if (rax_24 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x38)
    rcx_23 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_23[6]

*(rsi + 0x30) = rax_24
void**** rax_25 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_25 = rcx_23
*(rsi + 8) = &rcx_23[1]
rcx_23[1] = 0
*rcx_23 = &data_142da7798
rcx_23[2].d = 1
rcx_23[3] = rbx_12
rcx_23[4].d = 2
*(rcx_23 + 0x24) = 3
rcx_23[5] = 0
void* rax_27 = r13[2]
int32_t var_68 = 0x7f7fffff
int32_t var_64 = 0xff7fffff
int32_t var_60 = 0
void* var_80 = rax_27

if (rax_27 != 0)
    *(rax_27 + 8) += 1

int32_t* var_b0_3 = &var_68
sub_141189670(arg1, &var_58, &arg6[1], arg4, &var_80)
sub_1411a4490(r13, arg6)
return zx.q(r14_1.b)
