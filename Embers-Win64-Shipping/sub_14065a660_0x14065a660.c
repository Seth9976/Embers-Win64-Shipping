// 函数: sub_14065a660
// 地址: 0x14065a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

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

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi = var_68
int64_t var_38 = 0
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4
int32_t var_30 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_38, var_60, 0)
    memcpy(var_38, rdi, var_60 * 2)
else
    int32_t var_2c_1 = 0

int64_t rdi_1 = var_58
int16_t* var_28 = nullptr
int32_t var_20 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_28, var_50, 0)
    memcpy(var_28, rdi_1, var_50 * 2)
else
    int32_t var_1c_1 = 0

int64_t rdi_2 = var_48
int16_t* var_18 = nullptr
int32_t var_10 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_18, var_40, 0)
    memcpy(var_18, rdi_2, var_40 * 2)
else
    int32_t var_c_1 = 0

int64_t result = sub_140640e70(&var_18, &var_28, &var_38)
int64_t rcx_12 = var_68

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_58

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_48

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
