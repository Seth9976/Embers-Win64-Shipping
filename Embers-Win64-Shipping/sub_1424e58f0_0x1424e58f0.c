// 函数: sub_1424e58f0
// 地址: 0x1424e58f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* r14 = &var_48
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_4 = *(arg2 + 0x38)
void* rbp = &var_38
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* rsi = &var_28
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* r9 = &var_18

if (rax_8 != 0)
    r9 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
return sub_1420b3e20(r14, rbp, rsi, r9)
