// 函数: sub_1424e5670
// 地址: 0x1424e5670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0x18
int64_t var_30 = 0
int32_t var_24 = 1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r14 = &var_30
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rbp = &arg_10
int32_t var_38 = 0xea60
int32_t var_34 = 1

if (rax_4 != 0)
    rbp = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rsi = &var_38
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* r9 = &arg_20

if (rax_8 != 0)
    r9 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
return sub_1420b3df0(r14, rbp, rsi, r9)
