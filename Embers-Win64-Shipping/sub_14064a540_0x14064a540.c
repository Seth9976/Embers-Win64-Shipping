// 函数: sub_14064a540
// 地址: 0x14064a540
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

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
uint64_t var_38 = 0
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4
int64_t rbx_1 = var_68
int16_t* rbx_2

if (var_60 != 0)
    sub_1405a4c70(&var_38, var_60, 0)
    rbx_2 = var_38
    memcpy(rbx_2, rbx_1, var_60 * 2)
else
    rbx_2 = nullptr

int64_t r14 = var_58
int64_t var_48 = 0
int32_t var_40 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_48, var_50, 0)
    memcpy(var_48, r14, var_50 * 2)
else
    int32_t var_3c_1 = 0

int16_t* rdx_10 = &data_142d40450

if (var_60 != 0)
    rdx_10 = rbx_2

int32_t result = sub_140a306e0(&var_48, rdx_10, &data_142d40450, zx.d(arg_10))
int64_t rcx_10 = var_48
int32_t result_1 = result

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

if (rbx_2 != 0)
    result = sub_140a74f90(rbx_2)

int64_t rcx_12 = var_68
*arg3 = result_1

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_58

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
