// 函数: sub_141cf02d0
// 地址: 0x141cf02d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_80, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_88 = data_143a1c6b0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_10 = data_143a1c6b0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* r13 = &arg_10

if (rax_7 != 0)
    r13 = rax_7

int32_t arg_20 = data_143a1c6b0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* r12 = &arg_20

if (rax_10 != 0)
    r12 = rax_10

int32_t var_98 = data_143a1c6b0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_98, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t* rax_13 = *(arg2 + 0x38)
int32_t* r15 = &var_98

if (rax_13 != 0)
    r15 = rax_13

int32_t var_94 = data_143a1c6b0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_94, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_94)

int32_t* rax_16 = *(arg2 + 0x38)
int32_t* r14 = &var_94

if (rax_16 != 0)
    r14 = rax_16

int32_t var_90 = data_143a1c6b0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_90, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t* rax_19 = *(arg2 + 0x38)
int32_t* rsi = &var_90

if (rax_19 != 0)
    rsi = rax_19

int32_t var_8c = data_143a1c6b0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_8c, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_8c)

int32_t* rax_22 = *(arg2 + 0x38)
int32_t* rcx_9 = &var_8c
int32_t* r9 = zx.q(var_88)
int64_t var_58 = var_80

if (rax_22 != 0)
    rcx_9 = rax_22

int64_t var_48 = var_70
int64_t rax_23 = *(arg2 + 0x20)
int32_t* var_a0 = rcx_9
int64_t rdi
rdi.b = rax_23 != 0
int32_t var_78
int32_t var_50 = var_78
int32_t var_68
int32_t var_40 = var_68
*(arg2 + 0x20) = rdi + rax_23
return sub_141cecb90(arg1, &var_48, &var_58, r9, r13, r12, r15, r14, rsi)
