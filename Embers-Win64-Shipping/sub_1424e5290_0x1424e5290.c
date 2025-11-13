// 函数: sub_1424e5290
// 地址: 0x1424e5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50

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
int32_t* rcx_2 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rcx_2 = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_5 = *(arg2 + 0x38)
int32_t* r13 = &arg_20
int32_t var_68 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r13 = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* r12 = &var_68
int32_t var_64 = 0
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r12 = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_64, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

int32_t* rax_9 = *(arg2 + 0x38)
int32_t* r15 = &var_64
int32_t var_60 = 0
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    r15 = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t* rax_11 = *(arg2 + 0x38)
int32_t* r14 = &var_60
int32_t var_5c = 0
*(arg2 + 0x38) = 0

if (rax_11 != 0)
    r14 = rax_11

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_5c, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_5c)

int32_t* rax_13 = *(arg2 + 0x38)
int32_t* rsi = &var_5c
int32_t var_58 = 0
*(arg2 + 0x38) = 0

if (rax_13 != 0)
    rsi = rax_13

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_58, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t* rax_15 = *(arg2 + 0x38)
int32_t* rcx_9 = &var_58

if (rax_15 != 0)
    rcx_9 = rax_15

int64_t rax_16 = *(arg2 + 0x20)
int64_t rcx_10 = var_50
int64_t rdi
rdi.b = rax_16 != 0
*(arg2 + 0x20) = rdi + rax_16
return sub_1420b3c10(rcx_10, rcx_2, r13, r12, r15, r14, rsi, rcx_9)
