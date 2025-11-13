// 函数: sub_14269e380
// 地址: 0x14269e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_3 = *(arg2 + 0x38)
void* rbp = &var_48
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rbp = rax_3

void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_5 = *(arg2 + 0x38)
void* rsi = &var_38
int64_t* arg_18 = nullptr

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int64_t* r9 = arg_18
int64_t* rcx_5 = arg_20
int64_t rdi
rdi.b = rax_8 != 0
int64_t* rax_9 = arg_10
*(arg2 + 0x20) = rdi + rax_8
void* result = sub_142653090(rcx_5, rbp, rsi, r9, rax_9)
*arg3 = result
return result
