// 函数: sub_1406533d0
// 地址: 0x1406533d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = 0
int64_t var_28 = 0

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
int32_t* r14 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r14 = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_5 = *(arg2 + 0x38)
int32_t* rbp = &arg_20
int32_t var_38 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rbp = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* rsi = &var_38
int32_t var_34 = 0
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    rsi = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_34, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

int32_t* rax_9 = *(arg2 + 0x38)
int32_t* rcx_5 = &var_34

if (rax_9 != 0)
    rcx_5 = rax_9

int64_t rax_10 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_10 != 0
*(arg2 + 0x20) = rdi + rax_10
int32_t* result = sub_140636d10(&var_30, r14, rbp, rsi, rcx_5)
int64_t rcx_7 = var_30

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
