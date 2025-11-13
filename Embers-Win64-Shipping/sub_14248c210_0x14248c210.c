// 函数: sub_14248c210
// 地址: 0x14248c210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_64 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_64, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

int64_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_50, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_60, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_68 = 0
int64_t r14
r14.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_68, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

bool cond:3 = var_68 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:3
int64_t rdx_13

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    rdx_13 = sub_140d30490(arg2, &arg_10, r8_13)
else
    rdx_13 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int64_t r9 = var_58
int512_t zmm1
zmm1.o = var_64
int64_t rdi
rdi.b = rax_8 != 0
int64_t var_38 = var_50
int32_t var_48
int32_t var_30 = var_48
char var_70 = arg_10
char rax_11 = var_60.b
*(arg2 + 0x20) = rdi + rax_8
return sub_141e98040(arg1, rdx_13, &var_38, r9, rax_11, r14.b, rsi.b)
