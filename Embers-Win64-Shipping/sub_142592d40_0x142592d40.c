// 函数: sub_142592d40
// 地址: 0x142592d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void* rax_2 = *(arg2 + 0x38)
void* r15 = &var_68
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r15 = rax_2

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_4 = *(arg2 + 0x38)
void* r14 = &var_58
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    r14 = rax_4

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_6 = *(arg2 + 0x38)
void* rsi = &var_48
int64_t arg_18 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t* rax_8 = *(arg2 + 0x38)
int64_t* rbp = &arg_18
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    rbp = rax_8

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* rcx_5 = &arg_10

if (rax_10 != 0)
    rcx_5 = rax_10

int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
*(arg2 + 0x20) = rdi + rax_11
char result = sub_142319220(arg1, r15, r14, rsi, rbp, rcx_5)
*arg3 = result
return result
