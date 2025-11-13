// 函数: sub_1425bc0f0
// 地址: 0x1425bc0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_80, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_58 = 0
int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int128_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_20 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_88, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_10 = 0
char r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_13)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = arg_10 != 0
int64_t rsi = var_58
int128_t var_28 = var_38
int64_t rcx_7
rcx_7.b = rax_8 != 0
int64_t var_68 = var_78
int64_t var_48 = 0
*(arg2 + 0x20) = rcx_7 + rax_8
int32_t var_70
int32_t var_60 = var_70
int32_t var_40 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_48, var_50, 0)
    r9 = memcpy(var_48, rsi, var_50 * 2)
else
    int32_t var_3c_1 = 0

char var_98 = rdi.b
int64_t var_a0 = var_88
int32_t var_a8 = arg_20.d
int64_t result = sub_14243c000(var_80, &var_68, &var_48, r9)
int64_t rcx_12 = var_58

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
