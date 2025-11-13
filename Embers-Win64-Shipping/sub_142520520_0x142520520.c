// 函数: sub_142520520
// 地址: 0x142520520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_60 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_50 = 0
int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_50, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi = var_50
int64_t var_40 = 0
int64_t rcx_6
rcx_6.b = rax_7 != 0
*(arg2 + 0x20) = rcx_6 + rax_7
int32_t var_38 = var_48

if (var_48 != 0)
    sub_1405a4c70(&var_40, var_48, 0)
    memcpy(var_40, rdi, var_48 * 2)
else
    int32_t var_34_1 = 0

void var_58
int64_t* result = sub_1420ca520(&var_58, var_60, &var_40, var_68, rsi.b, arg_20, arg_18)
*arg3 = *result
int64_t rcx_12 = var_50

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
