// 函数: sub_14065b0c0
// 地址: 0x14065b0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r15 = &var_28
int64_t var_38 = 0
int64_t var_30 = 0

if (rax_2 != 0)
    r15 = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* r14 = &var_38
int64_t var_48 = 0
int64_t var_40 = 0

if (rax_4 != 0)
    r14 = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rsi = &var_48
int64_t var_58 = 0
int64_t var_50 = 0

if (rax_6 != 0)
    rsi = rax_6

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_8 = *(arg2 + 0x38)
int64_t* r9 = &var_58

if (rax_8 != 0)
    r9 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
int64_t* result = sub_1406413c0(r15, r14, rsi, r9)
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_48

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_38

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_28

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
