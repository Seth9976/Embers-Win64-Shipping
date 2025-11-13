// 函数: sub_1424ba6e0
// 地址: 0x1424ba6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_3 = *(arg2 + 0x38)
void* rbp = &var_38
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rbp = rax_3

void arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* rsi = &arg_20
int32_t arg_10 = 0

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = arg_10 != 0
int64_t rax_7 = *(arg2 + 0x20)
int64_t* rcx_4 = arg_18
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
char result = sub_142038de0(rcx_4, rbp, rsi, cond:2)
*arg3 = result
return result
