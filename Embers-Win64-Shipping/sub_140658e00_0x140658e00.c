// 函数: sub_140658e00
// 地址: 0x140658e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_58 = 0
int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68 = 0
int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_98, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_a8, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_8 = *(arg2 + 0x38)
char* rsi = &arg_10
int64_t rdi = var_68

if (rax_8 != 0)
    rsi = rax_8

int64_t var_88 = var_a8
int64_t rax_9 = *(arg2 + 0x20)
int64_t var_78 = var_98
int64_t rcx_7
rcx_7.b = rax_9 != 0
int64_t var_48 = 0
*(arg2 + 0x20) = rcx_7 + rax_9
int32_t var_a0
int32_t var_80 = var_a0
int32_t var_90
int32_t var_70 = var_90
int32_t var_40 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_48, var_60, 0)
    memcpy(var_48, rdi, var_60 * 2)
else
    int32_t var_3c_1 = 0

int64_t rdi_1 = var_58
int64_t var_38 = 0
int32_t var_30 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_38, var_50, 0)
    memcpy(var_38, rdi_1, var_50 * 2)
else
    int32_t var_2c_1 = 0

char* var_b8 = rsi
int64_t* var_c0 = &var_88
int64_t* var_c8 = &var_78
int64_t result = sub_14063fa80(arg_20, &var_38, &var_48)
int64_t rcx_14 = var_68
*arg3 = 0

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_58

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
