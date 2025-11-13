// 函数: sub_14248e710
// 地址: 0x14248e710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rbp = &var_48
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rbp = rax_2

void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_38
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rsi = rax_4

void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_6 = *(arg2 + 0x38)
void* r14 = &var_28
int32_t arg_8 = (zx.o(0)).d

if (rax_6 != 0)
    r14 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_8 = *(arg2 + 0x20)
int32_t zmm0_1 = arg_8
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
return (*(*arg1 + 0x7f0))(arg1, rbp, rsi, r14, zmm0_1)
