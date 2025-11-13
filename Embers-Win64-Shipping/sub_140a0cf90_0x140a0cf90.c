// 函数: sub_140a0cf90
// 地址: 0x140a0cf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_88 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_40 = 0
int64_t var_38 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_40, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r12 = &var_40
int64_t var_50 = 0
int64_t var_48 = 0

if (rax_5 != 0)
    r12 = rax_5

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_50, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* r15 = &var_50
int64_t var_60 = 0
int64_t var_58 = 0

if (rax_7 != 0)
    r15 = rax_7

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* r14 = &var_60
int64_t var_70 = 0
int64_t var_68 = 0

if (rax_9 != 0)
    r14 = rax_9

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_70, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t* rax_11 = *(arg2 + 0x38)
int64_t* rsi = &var_70
int64_t var_80 = 0
int64_t var_78 = 0

if (rax_11 != 0)
    rsi = rax_11

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_80, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t* rax_13 = *(arg2 + 0x38)
int64_t* rcx_8 = &var_80
int32_t r8_16 = arg_10
int32_t rdx_16 = arg_20

if (rax_13 != 0)
    rcx_8 = rax_13

int64_t rax_14 = *(arg2 + 0x20)
void* rcx_9 = var_88
int64_t rdi
rdi.b = rax_14 != 0
*(arg2 + 0x20) = rdi + rax_14
void** result = sub_140a041b0(rcx_9, rdx_16, r8_16, r12, r15, r14, rsi, rcx_8)
int64_t rcx_10 = var_80

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_70

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_60

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_50

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_40

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
