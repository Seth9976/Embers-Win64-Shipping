// 函数: sub_141c79350
// 地址: 0x141c79350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_50 = 0
int64_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_50, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_60 = 0
int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_60, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi = var_60
uint64_t var_40 = 0
int64_t rcx_6
rcx_6.b = rax_7 != 0
*(arg2 + 0x20) = rcx_6 + rax_7
int32_t var_38 = var_58

if (var_58 != 0)
    sub_1405a4c70(&var_40, var_58, 0)
    memcpy(var_40, rdi, var_58 * 2)
else
    int32_t var_34_1 = 0

int64_t var_70 = arg_18
int64_t result = sub_141c714a0(var_68, arg_10, &var_50, &var_40, arg_20)
int64_t rcx_11 = var_60
*arg3 = result

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_50

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
