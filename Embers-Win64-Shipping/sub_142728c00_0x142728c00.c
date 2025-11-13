// 函数: sub_142728c00
// 地址: 0x142728c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_10)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* var_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
void* r8_8 = var_18
int64_t rdx_8 = arg_20
int64_t* rcx_4 = var_10
int64_t rdi
rdi.b = rax_5 != 0
bool cond:1 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t r9
r9.b = cond:1
return sub_1426eac00(rcx_4, rdx_8, r8_8)
