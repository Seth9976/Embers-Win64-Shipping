// 函数: sub_1424eda30
// 地址: 0x1424eda30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_3 = *(arg2 + 0x38)
void* rbp = &var_48
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rbp = rax_3

void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_5 = *(arg2 + 0x38)
void* rsi = &var_38
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rsi = rax_5

void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_28, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

float* rax_7 = *(arg2 + 0x38)
float* r9 = &var_28
int64_t var_18 = var_58

if (rax_7 != 0)
    r9 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
int32_t var_50
int32_t var_10 = var_50
return sub_1420c1f80(&var_18, rbp, rsi, r9)
