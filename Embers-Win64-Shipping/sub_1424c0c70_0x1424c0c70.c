// 函数: sub_1424c0c70
// 地址: 0x1424c0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* r14 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rbp = &arg_20
int32_t var_38 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* rsi = &var_38
int32_t var_34 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_34, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* rcx_4 = &var_34

if (rax_8 != 0)
    rcx_4 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
return sub_14202ac20(arg1, r14, rbp, rsi, rcx_4)
