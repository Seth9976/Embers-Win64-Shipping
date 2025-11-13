// 函数: sub_1424e5be0
// 地址: 0x1424e5be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_3 = *(arg2 + 0x38)
int32_t* r15 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r15 = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_5 = *(arg2 + 0x38)
int32_t* r14 = &arg_20
int32_t var_48 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r14 = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* rbp = &var_48
int32_t var_44 = 0
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    rbp = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_44, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int32_t* rax_9 = *(arg2 + 0x38)
int32_t* rsi = &var_44
int32_t var_40 = 0
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    rsi = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_40, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int32_t* rax_11 = *(arg2 + 0x38)
int32_t* rcx_6 = &var_40

if (rax_11 != 0)
    rcx_6 = rax_11

int64_t rax_12 = *(arg2 + 0x20)
int64_t rcx_7 = var_38
int64_t rdi
rdi.b = rax_12 != 0
*(arg2 + 0x20) = rdi + rax_12
return sub_1420b3f50(rcx_7, r15, r14, rbp, rsi, rcx_6)
