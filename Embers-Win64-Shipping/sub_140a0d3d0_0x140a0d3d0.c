// 函数: sub_140a0d3d0
// 地址: 0x140a0d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_50, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_60, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:0 = arg_20 != 0
int64_t var_78 = 0
int64_t r14
r14.b = cond:0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_78, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rsi = &var_78
char arg_10 = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_70, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t rax_9 = *(arg2 + 0x20)
int64_t* rcx_7 = var_68
int64_t var_38 = var_60
int64_t rdi
rdi.b = rax_9 != 0
int64_t var_28 = var_50
int32_t var_58
int32_t var_30 = var_58
int32_t var_48
int32_t var_20 = var_48
int64_t rax_12 = var_70
char rax_13 = arg_10
*(arg2 + 0x20) = rdi + rax_9
return sub_140a06870(rcx_7, &var_28, &var_38, r14.b, rsi, rax_13, rax_12)
