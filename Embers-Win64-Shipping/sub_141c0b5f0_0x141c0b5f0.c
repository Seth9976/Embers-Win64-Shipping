// 函数: sub_141c0b5f0
// 地址: 0x141c0b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_10)

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_18
int32_t arg_10 = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdx_8 = var_10
int64_t* rcx_4 = arg_20
int64_t rdi
rdi.b = rax_6 != 0
bool cond:2 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_6
return sub_141bdd090(rcx_4, rdx_8, rsi, cond:2)
