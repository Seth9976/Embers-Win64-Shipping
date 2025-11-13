// 函数: sub_140655be0
// 地址: 0x140655be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_98 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

*(arg2 + 0x38) = 0
void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_3 = *(arg2 + 0x38)
void* rcx_2 = &var_88
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rcx_2 = rax_3

void var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_5 = *(arg2 + 0x38)
void* r13 = &var_78
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r13 = rax_5

void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void* rax_7 = *(arg2 + 0x38)
void* r12 = &var_68
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r12 = rax_7

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_9 = *(arg2 + 0x38)
void* r15 = &var_58
int64_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    r15 = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t* rax_11 = *(arg2 + 0x38)
int64_t* r14 = &arg_20
*(arg2 + 0x38) = 0

if (rax_11 != 0)
    r14 = rax_11

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_48, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_13 = *(arg2 + 0x38)
int64_t* rsi = &var_48
char arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_13 != 0)
    rsi = rax_13

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_15 = *(arg2 + 0x38)
char* rcx_9 = &arg_10

if (rax_15 != 0)
    rcx_9 = rax_15

int64_t rax_16 = *(arg2 + 0x20)
void* rcx_10 = var_98
int64_t rdi
rdi.b = rax_16 != 0
*(arg2 + 0x20) = rdi + rax_16
void* result = sub_14063c410(rcx_10, rcx_2, r13, r12, r15, r14, rsi, rcx_9)
*arg3 = result
return result
