// 函数: sub_14065ba70
// 地址: 0x14065ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = 0
int64_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

char arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_4 = *(arg2 + 0x38)
char* r15 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    r15 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* r14 = &arg_20
int32_t var_68 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r14 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* rsi = &var_68
int64_t var_60 = 0
int64_t var_58 = 0

if (rax_8 != 0)
    rsi = rax_8

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_10 = *(arg2 + 0x38)
void* rcx_6 = &var_60
char rdx_12 = arg_18

if (rax_10 != 0)
    rcx_6 = rax_10

int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
*(arg2 + 0x20) = rdi + rax_11
void* result = sub_140641870(&var_50, rdx_12, r15, r14, rsi, rcx_6)
int64_t rcx_8 = var_60
*arg3 = result

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_50

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
