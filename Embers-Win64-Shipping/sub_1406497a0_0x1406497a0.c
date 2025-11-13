// 函数: sub_1406497a0
// 地址: 0x1406497a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_2 = *(arg2 + 0x38)
void* r14 = &var_78
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float* rax_4 = *(arg2 + 0x38)
float* rsi = &var_68

if (rax_4 != 0)
    rsi = rax_4

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_a8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t var_b8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_b8, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t rax_9 = *(arg2 + 0x20)
int64_t var_58 = var_b8
int64_t var_48 = var_a8
int64_t rdi
rdi.b = rax_9 != 0
int32_t var_b0
int32_t var_50 = var_b0
int32_t var_a0
int32_t var_40 = var_a0
int32_t var_90
int32_t var_30 = var_90
int32_t var_80
int32_t var_20 = var_80
int64_t var_38 = var_98
int64_t zmm0 = var_88
*(arg2 + 0x20) = rdi + rax_9
int64_t var_28 = zmm0
char result = sub_14062a5b0(r14, rsi, &var_28, &var_38, &var_48, &var_58)
*arg3 = result
return result
