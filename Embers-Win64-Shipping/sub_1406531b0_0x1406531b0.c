// 函数: sub_1406531b0
// 地址: 0x1406531b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = 0
int64_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int64_t var_50 = 0
int64_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_50, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* r15 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    r15 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* r14 = &arg_20
int32_t var_58 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r14 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* rsi = &var_58
int32_t var_54 = 0
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    rsi = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_54, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* rcx_6 = &var_54

if (rax_10 != 0)
    rcx_6 = rax_10

int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
*(arg2 + 0x20) = rdi + rax_11
int32_t* result = sub_140636c30(&var_40, &var_50, r15, r14, rsi, rcx_6)
int64_t rcx_8 = var_50

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_40

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
