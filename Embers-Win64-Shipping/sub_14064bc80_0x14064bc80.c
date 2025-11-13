// 函数: sub_14064bc80
// 地址: 0x14064bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68 = 0
int32_t var_60 = 0

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

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi = var_78
int64_t rsi
rsi.b = arg_10 != 0
int64_t var_48 = 0
int64_t rcx_4
rcx_4.b = rax_5 != 0
*(arg2 + 0x20) = rcx_4 + rax_5
int32_t var_40 = var_70

if (var_70 != 0)
    sub_1405a4c70(&var_48, var_70, 0)
    memcpy(var_48, rdi, var_70 * 2)
else
    int32_t var_3c_1 = 0

int64_t rdi_1 = var_68
int64_t var_38 = 0
int32_t var_30 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_38, var_60, 0)
    memcpy(var_38, rdi_1, var_60 * 2)
else
    int32_t var_2c_1 = 0

int64_t rdi_2 = var_58
int64_t var_28 = 0
int32_t var_20 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_28, var_50, 0)
    memcpy(var_28, rdi_2, var_50 * 2)
else
    int32_t var_1c_1 = 0

char result = sub_14062d390(&var_28, &var_38, &var_48, rsi.b)
int64_t rcx_13 = var_78
*arg3 = result

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_68

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_58

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
