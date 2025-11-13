// 函数: sub_140655660
// 地址: 0x140655660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_2 = *(arg2 + 0x38)
void* r15 = &var_88
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r15 = rax_2

void var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_4 = *(arg2 + 0x38)
void* r14 = &var_78
int64_t* var_90 = nullptr

if (rax_4 != 0)
    r14 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_90, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

*(arg2 + 0x38) = 0
void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int128_t* rax_7 = *(arg2 + 0x38)
int128_t* rsi = &var_68
int32_t arg_20 = 0

if (rax_7 != 0)
    rsi = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_98, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t r12
r12.b = arg_10 != 0
int128_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_58, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_18, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_13 = *(arg2 + 0x20)
int64_t* r8_18 = var_90
int32_t var_a8 = arg_18
int64_t rdi
rdi.b = rax_13 != 0
int128_t var_48 = var_58
int64_t rax_14 = var_98
int32_t var_c8 = arg_20.d
*(arg2 + 0x20) = rdi + rax_13
char result = sub_14063c140(r15, r14, r8_18, rsi, var_c8, rax_14, r12.b, &var_48)
*arg3 = result
return result
