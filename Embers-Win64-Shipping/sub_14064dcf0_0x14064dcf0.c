// 函数: sub_14064dcf0
// 地址: 0x14064dcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_2 = *(arg2 + 0x38)
char* r15 = &arg_10
char arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r15 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char* rax_4 = *(arg2 + 0x38)
char* r14 = &arg_20
char var_38 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    r14 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

char* rax_6 = *(arg2 + 0x38)
char* rbp = &var_38
char var_37 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rbp = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_37, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_37)

char* rax_8 = *(arg2 + 0x38)
char* rsi = &var_37
int32_t var_34 = 0
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    rsi = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_34, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* r10 = &var_34

if (rax_10 != 0)
    r10 = rax_10

int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
*(arg2 + 0x20) = rdi + rax_11
return sub_140630e50(r15, r14, rbp, rsi, r10)
