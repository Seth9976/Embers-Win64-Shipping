// 函数: sub_1424f1fd0
// 地址: 0x1424f1fd0
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
void* r14 = &var_68
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_4 = *(arg2 + 0x38)
void* rbp = &var_58
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_6 = *(arg2 + 0x38)
void* r15 = &var_38
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r15 = rax_6

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* rsi = &arg_10
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    rsi = rax_8

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_48, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_10 = *(arg2 + 0x38)
int64_t* r10 = &var_48

if (rax_10 != 0)
    r10 = rax_10

int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
*(arg2 + 0x20) = rdi + rax_11
char rax_12
int512_t result
rax_12, result = sub_1420cb0d0(r14, rbp, r15, rsi, r10)
*arg3 = rax_12
return result
