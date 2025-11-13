// 函数: sub_1406e68a0
// 地址: 0x1406e68a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = 0
int32_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t r15
r15.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t r14
r14.b = arg_20 != 0
int128_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_80, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t var_84 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_84, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_84)

int64_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_78, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_88, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_9 = *(arg2 + 0x20)
int128_t zmm0 = var_50
int64_t rdi = var_70
int64_t rsi
rsi.b = var_88 != 0
int64_t var_60 = 0
int128_t var_38 = zmm0
int64_t rcx_8
rcx_8.b = rax_9 != 0
*(arg2 + 0x20) = rcx_8 + rax_9
int32_t var_58 = var_68

if (var_68 != 0)
    sub_1405a4c70(&var_60, var_68, 0)
    memcpy(var_60, rdi, var_68 * 2)
else
    int32_t var_54_1 = 0

char var_90 = rsi.b
char* result = sub_1406dbf20(&var_60, r15.b, zx.q(r14.b), &var_38, var_80, var_84.d, var_78.b)
int64_t rcx_13 = var_70

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
