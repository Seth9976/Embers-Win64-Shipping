// 函数: sub_140653ae0
// 地址: 0x140653ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int64_t var_50 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdi = &var_58
int64_t var_68 = 0
int32_t var_60 = 0

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78 = 0
int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rsi = var_78
int64_t r14
r14.b = arg_10 != 0
int64_t var_48 = 0
int64_t rcx_4
rcx_4.b = rax_6 != 0
*(arg2 + 0x20) = rcx_4 + rax_6
int32_t var_40 = var_70

if (var_70 != 0)
    sub_1405a4c70(&var_48, var_70, 0)
    memcpy(var_48, rsi, var_70 * 2)
else
    int32_t var_3c_1 = 0

int64_t rsi_1 = var_68
int64_t var_38 = 0
int32_t var_30 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_38, var_60, 0)
    memcpy(var_38, rsi_1, var_60 * 2)
else
    int32_t var_2c_1 = 0

char result = sub_1406390e0(rdi, &var_38, &var_48, r14.b)
int64_t rcx_11 = var_78
*arg3 = result

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_68

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_58

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
