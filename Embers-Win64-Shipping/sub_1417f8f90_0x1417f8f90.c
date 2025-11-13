// 函数: sub_1417f8f90
// 地址: 0x1417f8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void var_60
sub_1405d5290(&var_60)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_3 = *(arg2 + 0x38)
void* r15 = &var_60
char arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r15 = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_5 = *(arg2 + 0x38)
char* r14 = &arg_10
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r14 = rax_5

void var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

void* rax_7 = *(arg2 + 0x38)
void* rbp = &var_50
char arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    rbp = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char* rax_9 = *(arg2 + 0x38)
char* rsi = &arg_20
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    rsi = rax_9

void var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_40, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

uint64_t* rax_11 = *(arg2 + 0x38)
uint64_t* rcx_7 = &var_40

if (rax_11 != 0)
    rcx_7 = rax_11

int64_t rax_12 = *(arg2 + 0x20)
int64_t rcx_8 = var_68
int64_t rdi
rdi.b = rax_12 != 0
*(arg2 + 0x20) = rdi + rax_12
float zmm6[0x4]
float zmm7[0x4]
return sub_1417f03e0(rcx_8, r15, r14, rbp, zmm6, zmm7, rsi, rcx_7)
