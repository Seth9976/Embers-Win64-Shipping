// 函数: sub_14064bec0
// 地址: 0x14064bec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_10)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t var_18 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_5 = *(arg2 + 0x20)
int32_t r9 = arg_20
int32_t r8_8 = var_18
void* rcx_4 = var_10
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
return sub_14062d7e0(rcx_4, rsi.b, r8_8, r9)
