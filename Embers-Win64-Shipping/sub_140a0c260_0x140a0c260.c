// 函数: sub_140a0c260
// 地址: 0x140a0c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_48 = 0
int64_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* r13 = &var_48
int64_t var_58 = 0
int64_t var_50 = 0

if (rax_3 != 0)
    r13 = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r12 = &var_58
int64_t var_68 = 0
int64_t var_60 = 0

if (rax_5 != 0)
    r12 = rax_5

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* r15 = &var_68
int64_t var_78 = 0
int64_t var_70 = 0

if (rax_7 != 0)
    r15 = rax_7

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_78, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* r14 = &var_78
int64_t var_88 = 0
int64_t var_80 = 0

if (rax_9 != 0)
    r14 = rax_9

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_88, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t* rax_11 = *(arg2 + 0x38)
int64_t* rsi = &var_88
int64_t var_98 = 0
int64_t var_90 = 0

if (rax_11 != 0)
    rsi = rax_11

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_98, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t* rax_13 = *(arg2 + 0x38)
int64_t* rdi = &var_98
int32_t arg_10 = 0

if (rax_13 != 0)
    rdi = rax_13

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_15 = *(arg2 + 0x20)
int64_t var_a8 = 0
int64_t var_a0 = 0
int64_t rcx_8
rcx_8.b = rax_15 != 0
int64_t rcx_9 = rcx_8 + rax_15
int32_t rdx_16 = arg_20
rax_15.b = arg_10 != 0
*(arg2 + 0x20) = rcx_9
int64_t result =
    sub_140a01450(arg1, rdx_16, r13, r12, r15, r14, &var_a8, &var_a8, &var_a8, rsi, rdi, rax_15.b)
int64_t rcx_11 = var_a8

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_98

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_88

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_78

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_68

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = var_58

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_48

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
