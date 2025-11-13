// 函数: sub_1424f6d80
// 地址: 0x1424f6d80
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
void* rsi = &var_48
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

void var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_4 = *(arg2 + 0x38)
void* r15 = &var_78
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    r15 = rax_4

void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void* rax_6 = *(arg2 + 0x38)
void* r14 = &var_68
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r14 = rax_6

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_8 = *(arg2 + 0x38)
void* rcx_4 = &var_58

if (rax_8 != 0)
    rcx_4 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
*r15 = *rsi
*(r15 + 4) = *(rsi + 4)
*(r15 + 8) = *(rsi + 8)
*r14 = *(rsi + 0x10)
*(r14 + 4) = *(rsi + 0x14)
*(r14 + 8) = *(rsi + 0x18)
*rcx_4 = *(rsi + 0x20)
*(rcx_4 + 4) = *(rsi + 0x24)
int32_t result = *(rsi + 0x28)
*(rcx_4 + 8) = result
return result
