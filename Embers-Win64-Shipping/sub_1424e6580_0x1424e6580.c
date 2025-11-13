// 函数: sub_1424e6580
// 地址: 0x1424e6580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_3 = *(arg2 + 0x38)
int32_t* rbp = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rbp = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_5 = *(arg2 + 0x38)
int32_t* rsi = &arg_20
int32_t var_38 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* rcx_4 = &var_38
int32_t zmm0 = var_30

if (rax_7 != 0)
    rcx_4 = rax_7

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
*rbp = zmm0
int32_t var_2c
*rsi = var_2c
int32_t var_28
*rcx_4 = var_28
return result
