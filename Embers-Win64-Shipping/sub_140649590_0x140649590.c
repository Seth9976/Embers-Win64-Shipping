// 函数: sub_140649590
// 地址: 0x140649590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

*(arg2 + 0x38) = 0
void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void* rax_6 = *(arg2 + 0x38)
void* rsi = &var_68
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_58, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_8 = *(arg2 + 0x38)
int64_t* rcx_6 = &var_58
int64_t var_48 = var_a8

if (rax_8 != 0)
    rcx_6 = rax_8

int64_t var_38 = var_98
int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
int64_t var_28 = var_88
int64_t zmm0 = var_78
int32_t var_a0
int32_t var_40 = var_a0
int32_t var_90
int32_t var_30 = var_90
int32_t var_80
int32_t var_20 = var_80
int32_t var_70
int32_t var_10 = var_70
*(arg2 + 0x20) = rdi + rax_9
int64_t var_18 = zmm0
return sub_14062a520(&var_18, &var_28, &var_38, &var_48, rsi, rcx_6)
