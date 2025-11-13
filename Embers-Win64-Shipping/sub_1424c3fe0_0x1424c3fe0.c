// 函数: sub_1424c3fe0
// 地址: 0x1424c3fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = 0
int64_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_80, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

void* var_88 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t var_9c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_9c, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_9c)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_60, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_70, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int32_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_98, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t r15
r15.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
int32_t var_a8 = 0
int64_t r14
r14.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_a8, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

bool cond:2 = var_a8 != 0
int64_t var_90 = 0
int64_t rsi
rsi.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_90, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t var_a0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_a0, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int32_t var_a4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    sub_140d30490(arg2, &var_a4, r8_23)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a4)

int64_t rax_13 = *(arg2 + 0x20)
int128_t zmm3 = var_9c
void* r8_24 = var_88
int64_t rdi
rdi.b = rax_13 != 0
int64_t var_48 = var_70
int32_t var_68
int32_t var_40 = var_68
int32_t var_58
int32_t var_30 = var_58
int32_t rax_15
rax_15.b = var_a4 != 0
int64_t rax_16 = var_90
int64_t var_38 = var_60
int32_t var_c0 = var_a0.d
int32_t rax_17 = var_98
*(arg2 + 0x20) = rdi + rax_13
int64_t result = sub_14207b900(arg1, &var_80, r8_24, zmm3, &var_38, &var_48, rax_17, r15.b, r14.b, 
    rsi.b, rax_16, var_c0, rax_15.b)
int64_t rcx_13 = var_80

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
