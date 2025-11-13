// 函数: sub_14248b7b0
// 地址: 0x14248b7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_84 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_84, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_84)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_70, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_80, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = arg_20 != 0
int32_t var_88 = 0
int64_t r14
r14.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_88, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

bool cond:4 = var_88 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:4
int64_t rdx_15

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    rdx_15 = sub_140d30490(arg2, &arg_10, r8_15)
else
    rdx_15 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_9 = *(arg2 + 0x20)
int512_t zmm1
zmm1.o = var_84
int64_t var_48 = var_70
int64_t rdi
rdi.b = rax_9 != 0
int64_t var_38 = var_60
int32_t var_68
int32_t var_40 = var_68
int32_t var_58
int32_t var_30 = var_58
char rax_12 = arg_10
int64_t rax_13 = var_80
int64_t rax_14 = var_78
*(arg2 + 0x20) = rdi + rax_9
return sub_141e97d00(arg1, rdx_15, &var_38, &var_48, rax_14, rax_13, r14.b, rsi.b, rax_12)
