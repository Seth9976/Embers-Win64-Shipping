// 函数: sub_14256f330
// 地址: 0x14256f330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_20 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_28 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t* rax_3 = *(arg2 + 0x38)
int32_t* rbp = &var_28
int32_t var_24 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rbp = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_24, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

int32_t* rax_5 = *(arg2 + 0x38)
int32_t* rsi = &var_24
char arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_7 = *(arg2 + 0x38)
char* rcx_4 = &arg_10
uint32_t rdx_8 = zx.d(arg_20)

if (rax_7 != 0)
    rcx_4 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
return sub_14226d9d0(arg1, rdx_8, rbp, rsi, rcx_4)
