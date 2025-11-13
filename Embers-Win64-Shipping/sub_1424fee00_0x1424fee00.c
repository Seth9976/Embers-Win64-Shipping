// 函数: sub_1424fee00
// 地址: 0x1424fee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_3 = *(arg2 + 0x38)
int32_t* r12 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r12 = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_5 = *(arg2 + 0x38)
int32_t* r15 = &arg_20
int32_t var_68 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r15 = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* r14 = &var_68
int32_t var_64 = 0
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r14 = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_64, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

int32_t* rax_9 = *(arg2 + 0x38)
int32_t* rbx = &var_64

if (rax_9 != 0)
    rbx = rax_9

int128_t var_38 = var_50
int64_t rax_10 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_10 != 0
*(arg2 + 0x20) = rsi + rax_10
float var_60
float* result = sub_140ad9b20(&var_38, &var_60)
*r12 = var_60
int32_t var_5c
*r15 = var_5c
float var_58
*r14 = var_58
int32_t var_54
*rbx = var_54
return result
