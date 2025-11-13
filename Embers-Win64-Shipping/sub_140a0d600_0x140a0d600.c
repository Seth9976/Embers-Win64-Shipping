// 函数: sub_140a0d600
// 地址: 0x140a0d600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_38 = 0
int64_t var_30 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* r15 = &var_38
int64_t var_48 = 0
int64_t var_40 = 0

if (rax_3 != 0)
    r15 = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r14 = &var_48
int64_t var_58 = 0
int64_t var_50 = 0

if (rax_5 != 0)
    r14 = rax_5

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* rsi = &var_58
int64_t var_68 = 0
int64_t var_60 = 0

if (rax_7 != 0)
    rsi = rax_7

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* rdi = &var_68
int64_t var_78 = 0
int64_t var_70 = 0

if (rax_9 != 0)
    rdi = rax_9

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_78, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_11 = *(arg2 + 0x38)
int64_t* rdx_12 = &var_78
int64_t var_88 = 0
int64_t var_80 = 0

if (rax_11 != 0)
    rdx_12 = rax_11

int64_t rax_12 = *(arg2 + 0x20)
int32_t rdx_13 = arg_10
int64_t rcx_6
rcx_6.b = rax_12 != 0
*(arg2 + 0x20) = rcx_6 + rax_12
int64_t result = sub_140a09550(arg1, rdx_13, r15, r14, rsi, &var_88, &var_88, &var_88, rdi, rdx_12)
int64_t rcx_9 = var_88

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_78

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_68

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_58

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_48

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_38

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
