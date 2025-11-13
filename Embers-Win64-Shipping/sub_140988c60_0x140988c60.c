// 函数: sub_140988c60
// 地址: 0x140988c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_50 = 0
int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_50, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi = var_50
int64_t var_40 = 0
int64_t rcx_5
rcx_5.b = rax_6 != 0
*(arg2 + 0x20) = rcx_5 + rax_6
int32_t var_38 = var_48

if (var_48 != 0)
    sub_1405a4c70(&var_40, var_48, 0)
    memcpy(var_40, rdi, var_48 * 2)
else
    int32_t var_34_1 = 0

void* result = sub_140971d20(var_58, arg_20, &var_40, zx.d(arg_10), arg_18)
int64_t rcx_10 = var_50
*arg3 = result

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
