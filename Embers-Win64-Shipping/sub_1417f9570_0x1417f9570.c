// 函数: sub_1417f9570
// 地址: 0x1417f9570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_60
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rcx_1 = rax_2

void var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_50, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

void* rax_4 = *(arg2 + 0x38)
void* r13 = &var_50
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    r13 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* r12 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r12 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* r15 = &arg_20
int32_t var_78 = 0
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r15 = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_78, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* r14 = &var_78
int32_t var_74 = 0
*(arg2 + 0x38) = 0

if (rax_10 != 0)
    r14 = rax_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_74, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

int32_t* rax_12 = *(arg2 + 0x38)
int32_t* rsi = &var_74
int32_t var_70 = 0
*(arg2 + 0x38) = 0

if (rax_12 != 0)
    rsi = rax_12

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_70, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int32_t* rax_14 = *(arg2 + 0x38)
int32_t* r10 = &var_70

if (rax_14 != 0)
    r10 = rax_14

int64_t rax_15 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_15 != 0
*(arg2 + 0x20) = rdi + rax_15
return sub_1417f0c70(rcx_1, r13, r12, r15, r14, rsi, r10)
