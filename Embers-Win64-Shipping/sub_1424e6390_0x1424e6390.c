// 函数: sub_1424e6390
// 地址: 0x1424e6390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_38
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rbp = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* r15 = &arg_20
int32_t var_48 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r15 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* r14 = &var_48
int32_t var_44 = 0
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r14 = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_44, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* rcx_5 = &var_44

if (rax_10 != 0)
    rcx_5 = rax_10

int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
*(arg2 + 0x20) = rdi + rax_11
*rbp = *rsi
*r15 = *(rsi + 4)
*r14 = *(rsi + 8)
int32_t result = *(rsi + 0xc)
*rcx_5 = result
return result
