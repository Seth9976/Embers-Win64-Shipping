// 函数: sub_1424f3a10
// 地址: 0x1424f3a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_2c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_2c, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_2c)

int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_30, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t var_34 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_34, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

int32_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_20 = 0

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

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int32_t r9 = var_34
int32_t r8_14 = var_30
int32_t rdx_14 = var_2c
int64_t rdi
rdi.b = rax_8 != 0
int32_t rax_9 = arg_10
int32_t rax_10 = arg_18
int32_t rax_11 = arg_20
int32_t rax_12 = var_38
*(arg2 + 0x20) = rdi + rax_8
void var_28
int64_t* result = sub_1420cbf90(&var_28, rdx_14, r8_14, r9, rax_12, rax_11, rax_10, rax_9)
*arg3 = *result
return result
