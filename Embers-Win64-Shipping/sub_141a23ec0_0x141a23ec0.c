// 函数: sub_141a23ec0
// 地址: 0x141a23ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int32_t var_44 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_44, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t result_2 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &result_2, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_2)

int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_50, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_54 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_54, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_58, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_10, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &arg_20, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
int64_t var_38 = 0
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_38, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_12 = *(arg2 + 0x20)
int512_t zmm3
zmm3.o = var_44
int64_t rdi
rdi.b = rax_12 != 0
int512_t zmm2
zmm2.o = var_40
int64_t var_60 = var_38
char var_68 = rsi.b
char var_70 = r14.b
int32_t var_78 = var_58
int32_t var_80 = var_54
int32_t result = result_2
int32_t var_88 = var_50
int32_t result_1 = result
int32_t var_98 = var_48
*(arg2 + 0x20) = rdi + rax_12
return result
