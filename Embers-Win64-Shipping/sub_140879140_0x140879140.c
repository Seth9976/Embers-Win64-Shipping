// 函数: sub_140879140
// 地址: 0x140879140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_98 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* var_a0 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_70, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_80, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_90

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_90, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:0 = arg_18 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_20, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_a8, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_10 = *(arg2 + 0x20)
bool cond:2 = var_a8 != 0
void* rdx_18 = var_a0
int64_t* rcx_10 = var_98
int64_t var_58 = var_90
int64_t rdi
rdi.b = rax_10 != 0
int32_t var_88
int32_t var_50 = var_88
int32_t var_78
int32_t var_40 = var_78
int32_t var_68
int32_t var_30 = var_68
char rax_14 = arg_10
int64_t var_48 = var_80
int64_t zmm0 = var_70
*(arg2 + 0x20) = rdi + rax_10
int64_t var_38 = zmm0
void* result =
    sub_14083e9d0(rcx_10, rdx_18, &var_38, &var_48, &var_58, r14.b, rsi.b, rax_14, cond:2)
*arg3 = result
return result
