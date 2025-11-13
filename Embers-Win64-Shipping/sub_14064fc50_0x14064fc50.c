// 函数: sub_14064fc50
// 地址: 0x14064fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_30 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void* var_38 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rbp = &arg_10
int32_t arg_18 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* rsi = &arg_18
float arg_20 = 0f
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

float* rax_8 = *(arg2 + 0x38)
float* rcx_5 = &arg_20
void* rdx_10 = var_38

if (rax_8 != 0)
    rcx_5 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t* rcx_6 = var_30
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
char result = sub_140634110(rcx_6, rdx_10, rbp, rsi, rcx_5)
*arg3 = result
return result
