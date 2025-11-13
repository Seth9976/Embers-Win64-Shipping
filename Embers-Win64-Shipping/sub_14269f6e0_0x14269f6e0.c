// 函数: sub_14269f6e0
// 地址: 0x14269f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

*(arg2 + 0x38) = 0
void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_3 = *(arg2 + 0x38)
void* r14 = &var_58
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r14 = rax_3

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_5 = *(arg2 + 0x38)
void* rbp = &var_48
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rbp = rax_5

void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_7 = *(arg2 + 0x38)
void* rsi = &var_38
int64_t* arg_18 = nullptr

if (rax_7 != 0)
    rsi = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_10 = *(arg2 + 0x20)
int64_t* rcx_6 = arg_20
int64_t rdi
rdi.b = rax_10 != 0
int64_t* rax_11 = arg_10
int64_t* rax_12 = arg_18
*(arg2 + 0x20) = rdi + rax_10
char result = sub_14265e0a0(rcx_6, r14, rbp, rsi, rax_12, rax_11)
*arg3 = result
return result
