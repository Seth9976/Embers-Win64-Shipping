// 函数: sub_1425bbec0
// 地址: 0x1425bbec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int128_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_70, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_a0 = 0
int32_t var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_a0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

uint128_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_80, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0
char r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_11)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
uint128_t zmm0 = var_80
int64_t rsi = var_a0
int64_t rdi
rdi.b = arg_10 != 0
int128_t zmm1 = var_70
int64_t var_90 = 0
uint128_t var_28 = zmm0
int64_t rcx_6
rcx_6.b = rax_7 != 0
int128_t var_48 = zmm1
*(arg2 + 0x20) = rcx_6 + rax_7
int64_t var_60
uint64_t var_38 = var_60
int32_t var_58
int32_t var_30 = var_58
int32_t var_88 = var_98

if (var_98 != 0)
    sub_1405a4c70(&var_90, var_98, 0)
    r9 = memcpy(var_90, rsi, var_98 * 2)
else
    int32_t var_84_1 = 0

char var_b0 = rdi.b
int64_t var_b8 = arg_20
int64_t result = sub_14243be10(var_a8, &var_48, &var_90, r9)
int64_t rcx_11 = var_a0

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
