// 函数: sub_142523130
// 地址: 0x142523130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_a8 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:0 = arg_20 != 0
int32_t var_b8 = 0
int64_t r15
r15.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_b8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

bool cond:1 = var_b8 != 0
int32_t var_b0 = (zx.o(0)).d
int64_t r14
r14.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_b0, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b0)

int32_t var_b4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_b4, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b4)

bool cond:2 = var_b4 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_a0 = -1
int64_t var_98 = 0
int64_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_a0, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int64_t rax_10 = *(arg2 + 0x20)
int64_t* rcx_9 = var_a8
uint128_t var_48 = var_a0.o
int64_t rdi
rdi.b = rax_10 != 0
uint64_t var_68 = var_88
int32_t var_80
int32_t var_60 = var_80
int32_t var_70
int32_t var_50 = var_70
char rax_13 = arg_10
uint64_t var_58 = var_78
int32_t var_e0 = var_b0.d
*(arg2 + 0x20) = rdi + rax_10
int64_t var_38 = var_90
return sub_1420cd7e0(rcx_9, &var_58, &var_68, r15.b, r14.b, var_e0, rsi.b, rax_13, &var_48)
