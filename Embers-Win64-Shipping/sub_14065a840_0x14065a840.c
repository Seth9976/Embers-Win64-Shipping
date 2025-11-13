// 函数: sub_14065a840
// 地址: 0x14065a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi = var_48
int64_t var_28 = 0
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4
int32_t var_20 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_28, var_40, 0)
    memcpy(var_28, rdi, var_40 * 2)
else
    int32_t var_1c_1 = 0

int64_t rdi_1 = var_38
int16_t* var_18 = nullptr
int32_t var_10 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_18, var_30, 0)
    memcpy(var_18, rdi_1, var_30 * 2)
else
    int32_t var_c_1 = 0

int64_t result = sub_140640f10(&var_18, &var_28, arg_10)
int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
