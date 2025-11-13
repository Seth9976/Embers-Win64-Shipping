// 函数: sub_1417fa8f0
// 地址: 0x1417fa8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_30, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_40, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:4 = arg_10 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:5 = arg_20 != 0
int32_t var_48 = 0
int64_t rsi
rsi.b = cond:5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_48, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_8 = *(arg2 + 0x20)
int64_t r9 = var_40
int64_t r8_14 = var_38
int64_t rdx_14 = var_30
int64_t rdi
rdi.b = rax_8 != 0
int64_t rcx_7 = var_28
bool cond:7 = var_48 != 0
*(arg2 + 0x20) = rdi + rax_8
rax_8.b = cond:7
return sub_1417f50b0(rcx_7, rdx_14, r8_14, r9, r14.b, rsi.b, rax_8.b)
