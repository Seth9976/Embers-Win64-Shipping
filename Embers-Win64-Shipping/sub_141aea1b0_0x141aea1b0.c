// 函数: sub_141aea1b0
// 地址: 0x141aea1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

char arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:0 = arg_20 != 0
int32_t var_4c = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_4c, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_4c)

int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_50, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_54 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_54, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_58, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_11 = *(arg2 + 0x20)
uint32_t r8_20 = zx.d(arg_18)
int64_t rdi
rdi.b = rax_11 != 0
int64_t r9 = var_48
uint32_t rax_12 = zx.d(arg_10)
int64_t rdx_20 = var_40
int64_t* rcx_10 = var_38
int32_t var_60 = var_58
int32_t zmm0 = var_50
int32_t var_68 = var_54
int32_t zmm1 = var_4c
*(arg2 + 0x20) = rdi + rax_11
int64_t result
int32_t zmm0_1
result, zmm0_1 = sub_141ac7040(rcx_10, rdx_20, r8_20, r9, rax_12, rsi.b, zmm1, zmm0, var_68, var_60)
*arg3 = zmm0_1
return result
