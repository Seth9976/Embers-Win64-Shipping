// 函数: sub_1424cbf30
// 地址: 0x1424cbf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_24 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_24, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

*(arg2 + 0x38)
int32_t var_28 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

*(arg2 + 0x38)
char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_7 = *(arg2 + 0x38)
char* rcx_4 = &arg_10

if (rax_7 != 0)
    rcx_4 = rax_7

int64_t result = *(arg2 + 0x20)
char* var_38 = rcx_4
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
return result
