// 函数: sub_14273ff90
// 地址: 0x14273ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_88 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

*(arg2 + 0x38) = 0
void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_60

if (rax_3 != 0)
    rsi = rax_3

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

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = arg_10 != 0
int64_t rax_9 = *(arg2 + 0x20)
int64_t* rcx_8 = var_88
int64_t var_48 = var_80
int64_t rdi
rdi.b = rax_9 != 0
int32_t var_78
int32_t var_40 = var_78
int64_t var_38 = var_70
int32_t var_68
int32_t var_30 = var_68
int32_t rax_12 = arg_20
float var_a0 = arg_18.d
*(arg2 + 0x20) = rdi + rax_9
int32_t result = sub_1426f5710(rcx_8, rsi, &var_38, &var_48, rax_12, var_a0, cond:1)
*arg3 = result
return result
