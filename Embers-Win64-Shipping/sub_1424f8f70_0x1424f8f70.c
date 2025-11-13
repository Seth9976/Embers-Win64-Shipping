// 函数: sub_1424f8f70
// 地址: 0x1424f8f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_90, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int64_t var_50 = 0
int64_t var_48 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_50, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rcx_2 = &var_50
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rcx_2 = rax_3

void var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_80, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

void* rax_5 = *(arg2 + 0x38)
void* r13 = &var_80
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r13 = rax_5

void var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_70, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

void* rax_7 = *(arg2 + 0x38)
void* r12 = &var_70
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r12 = rax_7

void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_60, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_9 = *(arg2 + 0x38)
void* r15 = &var_60
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    r15 = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_11 = *(arg2 + 0x38)
int32_t* r14 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_11 != 0)
    r14 = rax_11

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_20, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void** rax_13 = *(arg2 + 0x38)
void** rsi = &arg_20
int32_t var_98 = 0

if (rax_13 != 0)
    rsi = rax_13

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_98, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t rax_15 = *(arg2 + 0x20)
int64_t rcx_9 = var_90
int64_t rdi
rdi.b = rax_15 != 0
bool cond:7 = var_98 != 0
*(arg2 + 0x20) = rdi + rax_15
rax_15.b = cond:7
char var_a0 = rax_15.b
void** result = sub_1420ccfa0(rcx_9, rcx_2, r13, r12, r15, r14, rsi)
int64_t rcx_10 = var_50

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
