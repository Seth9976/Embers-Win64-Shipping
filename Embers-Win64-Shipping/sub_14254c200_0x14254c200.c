// 函数: sub_14254c200
// 地址: 0x14254c200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_48 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

*(arg2 + 0x38) = 0
void var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void* rax_3 = *(arg2 + 0x38)
void* rbp = &var_40
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rbp = rax_3

void var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_30, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

float* rax_5 = *(arg2 + 0x38)
float* rsi = &var_30
char arg_10 = 0

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_8 = *(arg2 + 0x20)
char r9 = arg_10
int64_t* rcx_5 = var_48
int64_t rdi
rdi.b = rax_8 != 0
bool cond:3 = arg_20 != 0
*(arg2 + 0x20) = rdi + rax_8
rax_8.b = cond:3
return sub_14214e270(rcx_5, rbp, rsi, r9, rax_8.b)
